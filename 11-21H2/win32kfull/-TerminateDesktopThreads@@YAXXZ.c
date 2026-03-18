/*
 * XREFs of ?TerminateDesktopThreads@@YAXXZ @ 0x1C00F0720
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00F099C (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IPostQuitMessage @ 0x1C00AD668 (IPostQuitMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
void TerminateDesktopThreads(void)
{
  ULONG v0; // ebx
  void *v1; // rcx
  int v2; // edx
  int v3; // r8d
  PVOID v4; // rcx
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF

  v0 = 0;
  *(_OWORD *)Object = 0LL;
  if ( gpTouchProcessor )
    CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(gpTouchProcessor);
  v1 = (void *)gTermIO[8];
  if ( v1 )
  {
    Object[0] = (PVOID)gTermIO[8];
    ObfReferenceObject(v1);
    v0 = 1;
    if ( gTermIO[7] )
    {
      LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v2,
          v3,
          (unsigned int)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
          4,
          8,
          10,
          (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
      }
      LODWORD(gTermIO[0]) |= 8u;
      KeSetEvent((PRKEVENT)gTermIO[7], 1, 0);
    }
    else
    {
      LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v2,
          v3,
          (unsigned int)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
          4,
          8,
          11,
          (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
      }
      IPostQuitMessage(gTermIO[2], 0);
    }
    gdwHydraHint |= 0x80000u;
  }
  else if ( gTermIO[1] )
  {
    HMAssignmentUnlock(&gTermIO[1]);
  }
  v4 = ::Object;
  if ( ::Object )
  {
    Object[1] = ::Object;
    ObfReferenceObject(::Object);
    ++v0;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (unsigned int)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
        4,
        7,
        12,
        (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
    }
    if ( qword_1C0336E78 )
    {
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          v13,
          4,
          8,
          13,
          (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
      }
      gTermNOIO |= 8u;
      KeSetEvent(qword_1C0336E78, 1, 0);
    }
    else
    {
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          (unsigned int)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
          4,
          8,
          14,
          (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
      }
      IPostQuitMessage(qword_1C0336E50, 0);
    }
  }
  if ( v0 )
  {
    UserSessionSwitchLeaveCrit(v4);
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        v7,
        4,
        7,
        15,
        (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
    }
    Timeout.QuadPart = -3000000000LL;
    while ( KeWaitForMultipleObjects(v0, Object, WaitAll, WrUserRequest, 0, 0, &Timeout, 0LL) == 258 )
      gdwHydraHint |= 0x800000u;
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        v10,
        4,
        7,
        16,
        (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
    }
    ObfDereferenceObject(Object[0]);
    if ( v0 > 1 )
      ObfDereferenceObject(Object[1]);
    EnterCrit(1LL, 0LL);
  }
  gdwHydraHint |= 0x800u;
}
