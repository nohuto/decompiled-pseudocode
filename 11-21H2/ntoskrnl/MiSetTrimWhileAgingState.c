/*
 * XREFs of MiSetTrimWhileAgingState @ 0x140236764
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x1402366D4 (MmSetTrimWhileAgingState.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403DADE0 (MiInitializeWorkingSetManagerParameters.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiSetTrimWhileAgingState(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  __int64 SharedVm; // rdi
  KIRQL v6; // r9
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 16600);
  v3 = a1 + 17024;
  v4 = a2;
  SharedVm = MiGetSharedVm(a1 + 17024);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  v7 = v4;
  *(_DWORD *)(SharedVm + 4) = 0;
  if ( !v4 )
  {
    *(_QWORD *)(v2 + 72) = 0LL;
    goto LABEL_7;
  }
  v7 = (unsigned int)v4 - 1;
  if ( v4 == 1 )
  {
    *(_QWORD *)(v2 + 64) = -1LL;
    *(_QWORD *)(v2 + 72) = 204800LL;
    goto LABEL_8;
  }
  v7 = (unsigned int)v4 - 2;
  if ( v4 == 2 )
  {
    *(_QWORD *)(v2 + 72) = 204800LL;
    *(_QWORD *)(v2 + 64) = 51200LL;
    goto LABEL_8;
  }
  v7 = (unsigned int)v4 - 3;
  if ( v4 == 3 )
  {
    *(_QWORD *)(v2 + 72) = 204800LL;
    *(_QWORD *)(v2 + 64) = 12800LL;
    goto LABEL_8;
  }
  if ( v4 == 4 )
  {
    *(_QWORD *)(v2 + 72) = 384000LL;
LABEL_7:
    *(_QWORD *)(v2 + 64) = 0LL;
  }
LABEL_8:
  LOBYTE(v7) = v6;
  *(_WORD *)(v2 + 2350) = *(_WORD *)((char *)&a2 + 1);
  *(_DWORD *)(v2 + 80) = v4;
  return MiUnlockWorkingSetExclusive(v3, v7);
}
