/*
 * XREFs of InitSystemThread @ 0x1C00AE200
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     InitClientInfo @ 0x1C003A4B4 (InitClientInfo.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ClearAppStarting @ 0x1C00AE540 (ClearAppStarting.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  struct tagTHREADINFO **v9; // rdi
  struct tagTHREADINFO *v10; // rdi
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // rdi
  __int64 ThreadWin32Thread; // rax
  PVOID v17; // r14
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 Pool2; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rdx
  PVOID v25; // r14
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  LARGE_INTEGER *v29; // rdi
  unsigned int v30; // r8d
  struct tagKERNELHANDLETABLEENTRY *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // r15
  _DWORD v36[4]; // [rsp+38h] [rbp-D0h] BYREF
  PVOID BackTrace[20]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v38[20]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v39; // [rsp+188h] [rbp+80h] BYREF
  int v40; // [rsp+190h] [rbp+88h]
  GUID ActivityId; // [rsp+194h] [rbp+8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+1A8h] [rbp+A0h] BYREF
  _DWORD *v43; // [rsp+1C8h] [rbp+C0h]
  __int64 v44; // [rsp+1D0h] [rbp+C8h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+1D8h] [rbp+D0h] BYREF
  _DWORD *v46; // [rsp+1F8h] [rbp+F0h]
  __int64 v47; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+208h] [rbp+100h] BYREF
  _DWORD *v49; // [rsp+228h] [rbp+120h]
  __int64 v50; // [rsp+230h] [rbp+128h]

  PsGetThreadProcess(KeGetCurrentThread());
  v5 = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3, v2, v4);
    v39 = CurrentThreadWin32Thread;
  }
  else
  {
    CurrentThreadWin32Thread = 0LL;
    v39 = 0LL;
  }
  v40 = 1;
  if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v39 + 48)) )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v44 = 4LL;
      v36[0] = v40 == 1;
      v43 = v36;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        &ActivityId,
        0LL,
        3u,
        &v42);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v7 = W32kEtwEnabledKeyword, v8 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v8 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v29 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v7, v8);
    if ( v29 )
      v29[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v9 )
  {
    v10 = *v9;
    if ( IsThreadCrossSessionAttached() )
      v10 = 0LL;
    if ( v39 )
    {
      v11 = *(unsigned int *)(v39 + 24);
      if ( *(_DWORD *)(v39 + 48) || (int)v11 > 0 )
      {
        *(_DWORD *)(v39 + 44) = 1;
        *(GUID *)(v39 + 28) = ActivityId;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v47 = 4LL;
            v36[0] = v40 == 1;
            v46 = v36;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              &ActivityId,
              0LL,
              3u,
              &v45);
            v30 = dword_1C028EE70;
          }
          if ( v30 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v50 = 4LL;
            v36[0] = v40 == 1;
            v49 = v36;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              &ActivityId,
              0LL,
              3u,
              &v48);
          }
        }
      }
    }
    gptiCurrent = v10;
    if ( v10 )
    {
      *((_DWORD *)v10 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v15 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v31 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v32 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v31;
            if ( !*(_DWORD *)(v32 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v13, v14);
              v32 = *v15;
            }
            HMUnlockObject(v32);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v39);
    gptiCurrent = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v17 = gpLeakTrackingAllocator;
  v18 = ThreadWin32Thread;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x69637355) != 0x69637355
    || (v33 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_19:
    Pool2 = ExAllocatePool2(261LL, 280LL);
    goto LABEL_20;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v33) != 1768125269 )
  {
    if ( ++v33 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_19;
  }
  Pool2 = ExAllocatePool2(261LL, 296LL);
  if ( !Pool2 )
    goto LABEL_69;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v17,
                            Pool2,
                            BackTrace) )
      goto LABEL_20;
    goto LABEL_68;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v17,
                           Pool2,
                           BackTrace) )
  {
LABEL_68:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_69:
    Pool2 = 0LL;
    goto LABEL_20;
  }
  Pool2 += 16LL;
LABEL_20:
  *(_QWORD *)(v18 + 480) = Pool2;
  if ( !Pool2 )
  {
    v5 = -1073741801;
    goto LABEL_32;
  }
  *(_DWORD *)(v18 + 488) = *(_DWORD *)(v18 + 488) & 0xFFFFFFF3 | 4;
  if ( !(unsigned int)InitClientInfo(v18, v19, v22, v23) )
  {
    v5 = -1073741823;
    goto LABEL_32;
  }
  if ( !a1 )
    goto LABEL_29;
  v24 = *(char **)(v18 + 496);
  if ( v24 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v24);
  v25 = gpLeakTrackingAllocator;
  v26 = *(unsigned __int16 *)a1 + 18LL;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78747355) != 0x78747355
    || (v34 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_26:
    v27 = ExAllocatePool2(261LL, v26);
    goto LABEL_27;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v34) != 2020897621 )
  {
    if ( ++v34 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_26;
  }
  v35 = 0;
  if ( v26 < 0x1000 || (v26 & 0xFFF) != 0 )
  {
    v35 = 1;
    v26 = *(unsigned __int16 *)a1 + 34LL;
  }
  v27 = ExAllocatePool2(261LL, v26);
  if ( !v27 )
  {
LABEL_87:
    *(_QWORD *)(v18 + 496) = 0LL;
    goto LABEL_29;
  }
  memset(v38, 0, sizeof(v38));
  RtlCaptureStackBackTrace(0, 0x14u, v38, 0LL);
  if ( !v35 || (unsigned __int64)(v27 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(v25, v27, v38) )
    {
      *(_QWORD *)(v18 + 496) = v27;
      goto LABEL_28;
    }
    goto LABEL_86;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(v25, v27, v38) )
  {
LABEL_86:
    ExFreePoolWithTag((PVOID)v27, 0);
    goto LABEL_87;
  }
  v27 += 16LL;
LABEL_27:
  *(_QWORD *)(v18 + 496) = v27;
  if ( v27 )
  {
LABEL_28:
    *(_QWORD *)(v27 + 8) = v27 + 16;
    memmove(*(void **)(*(_QWORD *)(v18 + 496) + 8LL), a1[1], *(unsigned __int16 *)a1);
    v19 = (unsigned __int64)*(unsigned __int16 *)a1 >> 1;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 496) + 8LL) + 2 * v19) = 0;
    *(_WORD *)(*(_QWORD *)(v18 + 496) + 2LL) = *(_WORD *)a1 + 2;
    **(_WORD **)(v18 + 496) = *(_WORD *)a1;
  }
LABEL_29:
  v20 = *(_QWORD *)(v18 + 424);
  if ( v20 )
  {
    v19 = *(unsigned int *)(v20 + 12);
    if ( (v19 & 0x40) != 0 )
      ClearAppStarting(v20);
  }
LABEL_32:
  UserSessionSwitchLeaveCrit(v20, v19, v22, v23);
  return v5;
}
