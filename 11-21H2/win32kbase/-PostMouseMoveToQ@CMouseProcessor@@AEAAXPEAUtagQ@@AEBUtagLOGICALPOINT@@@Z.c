/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C003CA14
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C003C8FC (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C003C9D0 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x1C003CB78 (ApiSetEditionPostMouseMoveToQ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        LARGE_INTEGER *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3)
{
  LARGE_INTEGER *v6; // rdi
  int v7; // edx
  int v8; // r8d
  _DWORD *v9; // rbx

  if ( (*((_DWORD *)a2 + 97) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v6 = this + 442;
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime(this + 442);
  if ( !qword_1C029BD50
    || !(unsigned int)qword_1C029BD50(*((_QWORD *)a2 + 11))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 424LL) + 832LL) + 100LL) & 2) == 0 )
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        52,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
    ApiSetEditionPostMouseMoveToQ(
      (_DWORD)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      v6->LowPart,
      this[443].QuadPart,
      this[432].QuadPart,
      (__int64)a2 + 412);
  }
  *((_DWORD *)a2 + 97) &= ~0x20u;
  v9 = (_DWORD *)((char *)a2 + 412);
  if ( v9 )
  {
    *v9 = 0;
    v9[1] = 0;
  }
  v6->QuadPart = 0LL;
  this[443].QuadPart = 0LL;
  this[444].QuadPart = 0LL;
}
