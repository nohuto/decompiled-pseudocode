/*
 * XREFs of MiRotateComplete @ 0x14063331C
 * Callers:
 *     MiRotateToFrameBuffer @ 0x140A31950 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A31C54 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiRotateComplete(unsigned __int64 *a1)
{
  _KPROCESS *Process; // rdx
  __int64 v3; // rbp
  unsigned __int64 *v4; // rdi
  volatile LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // dl
  unsigned __int64 *i; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v4 = &Process[1].Affinity.StaticBitmap[9];
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v9 = v6;
  for ( i = (unsigned __int64 *)*v4; i != a1; i = (unsigned __int64 *)*i )
    v4 = i;
  *v4 = *i;
  MiUnlockWorkingSetExclusive(v3, v9, v7, v8);
}
