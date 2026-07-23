/*
 * XREFs of MiProtectLargeKernelHalRange @ 0x14081CD80
 * Callers:
 *     <none>
 * Callees:
 *     MiInitializeTbFlushList @ 0x14020B29C (MiInitializeTbFlushList.c)
 *     MiGetPdeAddress @ 0x14020B2BC (MiGetPdeAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiRewritePteWithLockBit @ 0x140376630 (MiRewritePteWithLockBit.c)
 *     MiUnlockPageTable @ 0x140376678 (MiUnlockPageTable.c)
 *     MiLockPageTable @ 0x140376690 (MiLockPageTable.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiComputeDriverProtection @ 0x14081D2A8 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectLargeKernelHalRange(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v6; // r14d
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 PdeAddress; // r13
  char *AnyMultiplexedVm; // rsi
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // rbx
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  unsigned __int64 ValidPte; // rax
  __int64 v15; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+20h] [rbp-118h] BYREF
  int v20[48]; // [rsp+30h] [rbp-108h] BYREF

  memset(v20, 0, 0xB8uLL);
  MiInitializeTbFlushList((__int64)v20, 0, 20);
  v6 = MiComputeDriverProtection(0LL, a3);
  PteAddress = 0LL;
  PdeAddress = MiGetPdeAddress(a2);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v11 = MiGetPdeAddress(a1);
  if ( v11 < PdeAddress )
  {
    v12 = v6 | 0xA4000000;
    while ( 1 )
    {
      if ( !PteAddress )
        goto LABEL_7;
      if ( (v11 & 0xFFF) == 0 )
        break;
LABEL_5:
      v19 = MI_READ_PTE_LOCK_FREE(v11);
      v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19);
      ValidPte = MiMakeValidPte(v11, (v13 >> 12) & 0xFFFFFFFFFFLL, v12);
      MiRewritePteWithLockBit((__int64)AnyMultiplexedVm, (__int64 *)v11, ValidPte, v15);
      v11 += 8LL;
      if ( v11 >= PdeAddress )
        goto LABEL_6;
    }
    MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress);
LABEL_7:
    PteAddress = MiGetPteAddress(v11);
    MiLockPageTable((__int64)AnyMultiplexedVm, PteAddress, v17, v18);
    goto LABEL_5;
  }
LABEL_6:
  MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
  MiInsertTbFlushEntry((__int64)v20, a1, (a2 - a1) >> 21, 1u);
  MiFlushTbList(v20);
  return 0LL;
}
