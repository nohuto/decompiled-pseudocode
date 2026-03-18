/*
 * XREFs of MiLocateOldestSecure @ 0x1402588EC
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x1406E2C14 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

_QWORD *__fastcall MiLocateOldestSecure(__int64 a1)
{
  _QWORD *v2; // rsi
  _KPROCESS *Process; // rbp
  __int64 SharedVm; // rbx
  KIRQL v5; // al
  _QWORD *i; // rdx

  v2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].ActiveProcessors.StaticBitmap[26]);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  for ( i = (_QWORD *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL); i; i = (_QWORD *)*i )
    v2 = i;
  LOBYTE(i) = v5;
  MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessors.StaticBitmap[26], i);
  return v2;
}
