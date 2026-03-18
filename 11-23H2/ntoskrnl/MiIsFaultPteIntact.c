/*
 * XREFs of MiIsFaultPteIntact @ 0x1402EF3C8
 * Callers:
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x14066A490 (MiIdealClusterPage.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x14025AB00 (MiCheckVirtualAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x14027CF00 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x140287878 (MiUnlockVadTree.c)
 *     MiFindActualFaultingPte @ 0x1402EF4C0 (MiFindActualFaultingPte.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 ActualFaultingPte; // rax
  unsigned int v8; // edi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  int v14; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+28h] [rbp-20h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  v8 = 0;
  v9 = ActualFaultingPte;
  if ( ActualFaultingPte )
  {
    v10 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v11 = v10;
    if ( v9 == a3 )
    {
LABEL_11:
      LOBYTE(v8) = v11 == *a4;
      return v8;
    }
    if ( (v10 & 0x400) != 0 )
    {
      if ( MiIsPrototypePteVadLookup(v10) )
      {
        v15[0] = 0LL;
        v14 = 0;
        v12 = MiCheckVirtualAddress(a2, &v14, v15);
        if ( v15[0] )
          MiUnlockVadTree(1, 0x11u);
      }
      else
      {
        if ( qword_140C65B40 )
        {
          if ( (v11 & 0x10) != 0 )
            v11 &= ~0x10uLL;
          else
            v11 &= ~qword_140C65B40;
        }
        v12 = v11 >> 16;
      }
      if ( v12 == a3 )
      {
        v11 = MI_READ_PTE_LOCK_FREE(v12);
        goto LABEL_11;
      }
    }
  }
  return 0LL;
}
