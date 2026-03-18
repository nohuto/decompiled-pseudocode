/*
 * XREFs of PopNewWakeInfo @ 0x140A517EC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1403965EC (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x140396620 (PopAcquireWakeSourceSpinLock.c)
 *     PopWakeInfoDereference @ 0x140397184 (PopWakeInfoDereference.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

LONG PopNewWakeInfo()
{
  __int64 Pool2; // rax
  __int64 v1; // rbx
  LONG result; // eax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
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
      v3 = (_QWORD *)qword_140C23758;
      v4 = *(_QWORD **)(qword_140C23758 + 8);
      if ( *(__int64 **)qword_140C23758 != &PopWakeInfoList || *v4 != qword_140C23758 )
        __fastfail(3u);
      qword_140C23758 = *(_QWORD *)(qword_140C23758 + 8);
      *v4 = &PopWakeInfoList;
      v3[1] = v3;
      *v3 = v3;
      PopWakeInfoDereference((__int64)v3);
      --PopWakeInfoCount;
    }
    PopWakeSourceWorkState = 0;
    PopReleaseWakeSourceSpinLock(&LockHandle);
  }
  result = KeResetEvent(&PopWakeSourceAvailable);
  PopFixedWakeSourceMask = 0;
  return result;
}
