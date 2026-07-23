/*
 * XREFs of KiTryUnwaitThread @ 0x140238DA0
 * Callers:
 *     KeSetProcess @ 0x1402085E4 (KeSetProcess.c)
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D950 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiExpireTimer2 @ 0x140251B40 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x140252FB0 (KiTimerWaitTest.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x140260BD0 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260EC0 (ExpCommitWakeResourceShared.c)
 *     KeRundownQueueCommon @ 0x14028CBC4 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14028CE38 (KeDeleteMutant.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7430 (KeReleaseSemaphoreEx.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAFD0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BC260 (KeSetEventBoostPriorityEx.c)
 *     KeTerminateThread @ 0x14030A7F8 (KeTerminateThread.c)
 *     KiResumeThread @ 0x14030AF88 (KiResumeThread.c)
 *     KiRundownMutants @ 0x14030B32C (KiRundownMutants.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AF28 (KiWakeOtherQueueWaiters.c)
 *     KeReleaseSemaphore @ 0x1403216C0 (KeReleaseSemaphore.c)
 *     KeTimeOutQueueWaiters @ 0x14034ECEC (KeTimeOutQueueWaiters.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     KeReleaseMutantEx @ 0x14041083C (KeReleaseMutantEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyMutant @ 0x140311D70 (KiWaitSatisfyMutant.c)
 */

__int64 __fastcall KiTryUnwaitThread(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // si
  char v10; // cl
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  char v14; // al
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  _BYTE *v20; // rcx
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v5 = 0;
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v22);
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( *(_BYTE *)(v4 + 388) != 5 )
    goto LABEL_13;
  v10 = *(_BYTE *)(v4 + 112);
  v11 = v10 & 7;
  if ( v11 == 1 || v11 == 4 )
  {
    v12 = *(_QWORD *)(v4 + 232);
    if ( v12 )
    {
      if ( (*(_BYTE *)v12 & 0x7F) == 0x15 )
      {
        v19 = (unsigned __int8)*(_DWORD *)(v4 + 540);
        *(_DWORD *)(v4 + 540) = v19;
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 4 * v19 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 40));
      }
    }
    v13 = *(_QWORD *)(v4 + 712);
    if ( v13 )
    {
      v21[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 32464), 0LL) )
      {
        do
          KeYieldProcessorEx(v21);
        while ( *(_QWORD *)(v13 + 32464) );
      }
      if ( *(_QWORD *)(v4 + 712) )
      {
        v17 = *(_QWORD *)(v4 + 216);
        v18 = *(_QWORD **)(v4 + 224);
        if ( *(_QWORD *)(v17 + 8) != v4 + 216 || *v18 != v4 + 216 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)(v4 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 32464), 0LL);
    }
    v14 = *(_BYTE *)(v4 + 388);
    if ( v14 == 1 )
    {
      *(_DWORD *)(v4 + 116) |= 2u;
    }
    else if ( v14 == 5 )
    {
      v15 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v4 + 436));
      if ( *(_BYTE *)(v4 + 391) )
        *(_QWORD *)(v4 + 1000) += v15;
      else
        *(_QWORD *)(v4 + 992) += v15;
    }
    *(_BYTE *)(v4 + 388) = 7;
    *(_QWORD *)(v4 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = v4 + 216;
    *(_QWORD *)(v4 + 200) = a3;
    *(_QWORD *)(v4 + 976) = 0LL;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(v4 + 112) & 7) == 0 )
  {
    *(_BYTE *)(v4 + 112) = v10 & 0xF8 | 2;
    *(_QWORD *)(v4 + 200) = a3;
    *(_QWORD *)(v4 + 976) = 0LL;
    *(_BYTE *)(a2 + 17) = 0;
LABEL_12:
    v5 = 1;
    if ( a4 )
    {
      *a4 = v4;
      v20 = *(_BYTE **)(a2 + 32);
      if ( (*v20 & 0x7F) == 2 )
        KiWaitSatisfyMutant(v20, v4, a1);
    }
    goto LABEL_13;
  }
  if ( v11 == 5 )
  {
    *(_BYTE *)(v4 + 112) = v10 & 0xF8 | 6;
  }
  else if ( v11 == 3 )
  {
    *(_BYTE *)(a2 + 17) = 2;
  }
LABEL_13:
  result = v5;
  *(_QWORD *)(v4 + 64) = 0LL;
  ++*(_BYTE *)(a2 + 17);
  return result;
}
