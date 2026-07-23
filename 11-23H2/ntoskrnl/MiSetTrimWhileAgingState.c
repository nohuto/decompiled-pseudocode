/*
 * XREFs of MiSetTrimWhileAgingState @ 0x14036AF64
 * Callers:
 *     MmSetTrimWhileAgingState @ 0x14036AED4 (MmSetTrimWhileAgingState.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403AF1FC (MiInitializeWorkingSetManagerParameters.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiSetTrimWhileAgingState(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  volatile LONG *SharedVm; // rdi
  __int64 v6; // r9

  v2 = *(_QWORD *)(a1 + 16920);
  v3 = a1 + 17344;
  v4 = a2;
  SharedVm = (volatile LONG *)MiGetSharedVm(a1 + 17344);
  LOBYTE(v6) = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  switch ( v4 )
  {
    case 0u:
      *(_QWORD *)(v2 + 72) = 0LL;
      goto LABEL_7;
    case 1u:
      *(_QWORD *)(v2 + 64) = -1LL;
      *(_QWORD *)(v2 + 72) = 204800LL;
      break;
    case 2u:
      *(_QWORD *)(v2 + 72) = 204800LL;
      *(_QWORD *)(v2 + 64) = 51200LL;
      break;
    case 3u:
      *(_QWORD *)(v2 + 72) = 204800LL;
      *(_QWORD *)(v2 + 64) = 12800LL;
      break;
    case 4u:
      *(_QWORD *)(v2 + 72) = 384000LL;
LABEL_7:
      *(_QWORD *)(v2 + 64) = 0LL;
      break;
  }
  *(_WORD *)(v2 + 2350) = *(_WORD *)((char *)&a2 + 1);
  *(_DWORD *)(v2 + 80) = v4;
  MiUnlockWorkingSetExclusive(v3, v6, v4, v6);
}
