/*
 * XREFs of MiRemoveSecureEntry @ 0x1402172F0
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1406B0290 (MmUnsecureVirtualMemory.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407E6430 (MiUnmapLockedPagesInUserSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiSetVadFlags @ 0x140287940 (MiSetVadFlags.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1407C78DC (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, _QWORD *BugCheckParameter3, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  int v7; // r15d
  _QWORD *v8; // r14
  _KPROCESS *Process; // r12
  __int64 SharedVm; // rbx
  KIRQL v11; // al
  __int64 v12; // rdx
  unsigned __int64 i; // rcx

  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].ActiveProcessors.StaticBitmap[26], BugCheckParameter3, a3, a4);
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  LOBYTE(v12) = v11;
  for ( i = *(_QWORD *)(BugCheckParameter2 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 64) == 2 && v6 <= 1 )
      ++v6;
    if ( (_QWORD *)i == BugCheckParameter3 )
    {
      v7 = 1;
      if ( v8 )
        *v8 = *(_QWORD *)i;
      else
        *(_QWORD *)(BugCheckParameter2 + 56) = *(_QWORD *)i | *(_DWORD *)(BugCheckParameter2 + 56) & 0xF;
    }
    if ( v6 > 1 && v7 )
      break;
    v8 = (_QWORD *)i;
  }
  MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessors.StaticBitmap[26], v12);
  if ( !v7 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v6 == 1 )
    MiSetVadFlags(BugCheckParameter2, 1LL, 0LL);
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
