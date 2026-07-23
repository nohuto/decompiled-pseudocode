/*
 * XREFs of MiUnlockWsle @ 0x1402A2990
 * Callers:
 *     MiTerminateWsle @ 0x140274AE0 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x140279430 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiUnlockVa @ 0x140350EE4 (MiUnlockVa.c)
 * Callees:
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E1780 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockPageTableCharges @ 0x1402E2DD0 (MiUnlockPageTableCharges.c)
 */

__int64 __fastcall MiUnlockWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int EffectivePagePriorityThread; // eax
  unsigned __int8 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax

  v3 = *(_QWORD *)(a3 + 40);
  if ( v3 < 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v7 = *(_QWORD *)(qword_140C673C8 + 8 * (((unsigned __int64)v3 >> 43) & 0x3FF));
    MiReturnCommit(v7, 1LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v7 + 17840));
  }
  v8 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  LOBYTE(v8) = (v8 & 0x20) == 0;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v9, v8, v10);
  v13 = v12;
  if ( EffectivePagePriorityThread < 5 )
    v13 = 7LL;
  MiSetVaAgeList(a1, a2, 1u, v13);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v15 = *(_QWORD *)(a3 + 40);
    if ( v15 < 0 )
      MiUnlockPageTableCharges(48 * (v15 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    v16 = MI_READ_PTE_LOCK_FREE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  }
  return result;
}
