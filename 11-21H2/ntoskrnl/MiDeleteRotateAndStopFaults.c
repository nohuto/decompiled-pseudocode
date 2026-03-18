/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x140200AEC
 * Callers:
 *     MiRotateToFrameBufferNoCopy @ 0x14065FFA0 (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x14030FE40 (MiDeleteVirtualAddresses.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDeleteRotateAndStopFaults(int a1, int a2, unsigned __int64 *a3)
{
  _KPROCESS *Process; // rdi
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int64 v9; // rdx
  _OWORD v11[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+60h] [rbp-28h]

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].ActiveProcessors.StaticBitmap[26]);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v9 = Process[1].Affinity.StaticBitmap[9];
  *a3 = v9;
  LOBYTE(v9) = v8;
  Process[1].Affinity.StaticBitmap[9] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessors.StaticBitmap[26], v9);
  return MiDeleteVirtualAddresses(0, a1, a2, 0, (__int64)v11);
}
