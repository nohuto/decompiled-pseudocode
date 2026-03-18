/*
 * XREFs of ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F97F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01F9450 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C01FAD64 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FBCD8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     APISetEditionGetMouseWheelRoutingMode @ 0x1C0205848 (APISetEditionGetMouseWheelRoutingMode.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v4; // rdx
  int MouseWheelRoutingMode; // ebx
  CMouseProcessor *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  _QWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+58h] [rbp-10h]
  unsigned int v13; // [rsp+5Ch] [rbp-Ch]

  v4 = *((_QWORD *)a2 + 1);
  MouseWheelRoutingMode = 2;
  if ( (*(_DWORD *)(v4 + 112) & 8) != 0 )
    goto LABEL_16;
  if ( *(_DWORD *)(v4 + 104) == 34 || CMouseProcessor::AppCompatWheelRoutingRequested(this) )
  {
    MouseWheelRoutingMode = 0;
  }
  else
  {
    if ( CMouseProcessor::HittestWheelRoutingRequested(v6) )
      goto LABEL_16;
    MouseWheelRoutingMode = APISetEditionGetMouseWheelRoutingMode();
    if ( MouseWheelRoutingMode )
      goto LABEL_16;
  }
  if ( !gpqForeground )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      LOBYTE(v4) = 0;
    }
    else
    {
      LODWORD(v4) = 1;
    }
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        39,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    return;
  }
LABEL_16:
  if ( ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2) & 0xC00) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(3072LL, v7, v8);
  v9 = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2);
  v10[1] = *((_QWORD *)a2 + 1);
  v10[0] = &CMouseProcessor::CWheelEvent::`vftable';
  v13 = ((unsigned int)~v9 >> 10) & 1;
  v12 = MouseWheelRoutingMode;
  v11 = 3;
  CMouseProcessor::ProcessMouseWheel(this, (const struct CMouseProcessor::CWheelEvent *)v10);
}
