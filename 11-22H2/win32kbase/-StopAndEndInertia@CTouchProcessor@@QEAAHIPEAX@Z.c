/*
 * XREFs of ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C01D7540
 * Callers:
 *     NtUserStopAndEndInertia @ 0x1C014C1E0 (NtUserStopAndEndInertia.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1C00D5148 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::StopAndEndInertia(CTouchProcessor *this, int a2, void *a3)
{
  unsigned int v5; // ebx
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  char *v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  CInpLockGuard *v18[8]; // [rsp+50h] [rbp-58h] BYREF

  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      4u,
      0x130u,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
      a2);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v18,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v9 = *((_QWORD *)this + 8);
  v10 = (char *)this + 56;
  while ( 1 )
  {
    if ( (char *)v9 == v10 )
      goto LABEL_14;
    v8 = *(unsigned int *)(v9 + 40);
    v7 = 0LL;
    if ( (_DWORD)v8 )
      break;
LABEL_12:
    v9 = *(_QWORD *)(v9 + 8);
  }
  while ( 1 )
  {
    v11 = *(_QWORD *)(v9 + 232) + 480LL * (unsigned int)v7;
    if ( *(unsigned __int16 *)(v11 + 172) == a2 )
      break;
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= (unsigned int)v8 )
      goto LABEL_12;
  }
  if ( !v11 )
  {
LABEL_14:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        4,
        305,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    UserSetLastError(1168);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v5) = 0;
    if ( (_BYTE)v15 || (_BYTE)v5 )
    {
      LOBYTE(v16) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        4,
        306,
        (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
    }
    goto LABEL_40;
  }
  v12 = SGDGetUserSessionState(v9, v7, v8, v10);
  if ( CInertiaManager::EndInertiaAtPoint(v12 + 16904, *(struct tagPOINT *)(v11 + 200), *(struct tagPOINT *)(v11 + 208)) )
    goto LABEL_41;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    LOBYTE(v5) = 0;
  }
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = v5;
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v14,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      4,
      307,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  }
LABEL_40:
  v5 = 0;
LABEL_41:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v18);
  return v5;
}
