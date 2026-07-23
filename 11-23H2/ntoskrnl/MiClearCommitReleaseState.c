/*
 * XREFs of MiClearCommitReleaseState @ 0x14061854C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14071FC58 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1)
{
  volatile LONG *SharedVm; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  __int64 v5; // r9

  SharedVm = (volatile LONG *)MiGetSharedVm(a1);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  *(_BYTE *)(a1 + 187) &= 0x9Fu;
  MiUnlockWorkingSetExclusive(a1, v3, v4, v5);
}
