/*
 * XREFs of MmEnableProcessSvm @ 0x140619D34
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14060E0F0 (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 */

void MmEnableProcessSvm()
{
  _KPROCESS *Process; // rdi
  volatile LONG *SharedVm; // rbx
  KIRQL v2; // al
  __int64 v3; // r8
  __int64 v4; // r9

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v2 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  HIBYTE(Process[1].IdealProcessor[31]) |= 2u;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v2, v3, v4);
}
