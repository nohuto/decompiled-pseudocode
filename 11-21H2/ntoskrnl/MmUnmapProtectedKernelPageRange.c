/*
 * XREFs of MmUnmapProtectedKernelPageRange @ 0x14097FA08
 * Callers:
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiInitializeTbFlushList @ 0x14027FCE4 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MmUnmapProtectedKernelPageRange(unsigned __int64 a1, __int64 a2)
{
  __int64 PteAddress; // rdi
  unsigned __int64 v5; // rbx
  int v6; // ebp
  bool v7; // zf
  _BYTE v8[192]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v8, 0, 0xB8uLL);
  PteAddress = MiGetPteAddress(a1);
  MiInitializeTbFlushList((__int64)v8, 0, 20);
  if ( a2 )
  {
    while ( (MI_READ_PTE_LOCK_FREE(PteAddress) & 1) == 0 )
    {
LABEL_13:
      PteAddress += 8LL;
      if ( !--a2 )
        goto LABEL_14;
    }
    MiInsertTbFlushEntry((__int64)v8, PteAddress << 25 >> 16, 1LL, 0);
    v5 = ZeroPte;
    v6 = 0;
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v6 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v7 = (ZeroPte & 1) == 0;
          goto LABEL_9;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v7 = (ZeroPte & 1) == 0;
LABEL_9:
        if ( !v7 )
          v5 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)PteAddress = v5;
    if ( v6 )
      MiWritePteShadow(PteAddress, v5);
    goto LABEL_13;
  }
LABEL_14:
  MiFlushTbList((__int64)v8);
}
