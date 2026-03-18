/*
 * XREFs of PopNewWakeInfo @ 0x140AA10A8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14058E3CC (PopAcquireWakeSourceSpinLock.c)
 *     PopReleaseWakeSourceSpinLock @ 0x14058E6A0 (PopReleaseWakeSourceSpinLock.c)
 *     PopWakeInfoDereference @ 0x14058E858 (PopWakeInfoDereference.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

LONG PopNewWakeInfo()
{
  __int64 Pool2; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Pool2 = ExAllocatePool2(64LL, 88LL, 544040269LL);
  v1 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = 1;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
    *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
    *(_BYTE *)(Pool2 + 80) = 1;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    PopAcquireWakeSourceSpinLock(&LockHandle);
    PopCurrentWakeInfo = v1;
    if ( PopWakeInfoCount == 1 )
    {
      v2 = (_QWORD *)qword_140C3E708;
      v3 = *(_QWORD **)(qword_140C3E708 + 8);
      if ( *(__int64 **)qword_140C3E708 != &PopWakeInfoList || *v3 != qword_140C3E708 )
        __fastfail(3u);
      qword_140C3E708 = *(_QWORD *)(qword_140C3E708 + 8);
      *v3 = &PopWakeInfoList;
      v2[1] = v2;
      *v2 = v2;
      PopWakeInfoDereference((__int64)v2);
      --PopWakeInfoCount;
    }
    PopWakeSourceWorkState = 0;
    PopReleaseWakeSourceSpinLock((__int64)&LockHandle);
  }
  result = KeResetEvent(&PopWakeSourceAvailable);
  PopFixedWakeSourceMask = 0;
  return result;
}
