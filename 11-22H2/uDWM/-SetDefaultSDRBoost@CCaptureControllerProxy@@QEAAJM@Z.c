/*
 * XREFs of ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z @ 0x1800AD314
 * Callers:
 *     ?OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180052790 (-OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800D5470 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D55A0 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureControllerProxy::SetDefaultSDRBoost(CCaptureControllerProxy *this, float a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 1032LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
