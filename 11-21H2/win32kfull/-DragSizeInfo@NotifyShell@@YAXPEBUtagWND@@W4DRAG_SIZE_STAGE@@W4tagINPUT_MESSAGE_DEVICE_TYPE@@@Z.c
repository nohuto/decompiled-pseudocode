/*
 * XREFs of ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C02362C8
 * Callers:
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C020AD78 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C00F4DAC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C0236424 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 */

bool __fastcall NotifyShell::DragSizeInfo(__int64 *a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  int v4; // esi
  char v6; // dl
  __int16 WindowTrackState; // ax

  v3 = a3;
  v4 = a2;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      a3,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      1u,
      0x12u,
      (__int64)&WPP_ac2614e0fada3ab04efd03c18643afa1_Traceguids,
      a1,
      v4);
  LOBYTE(a2) = 1;
  WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a2, a3);
  return anonymous_namespace_::NotifyShellSimplePayload(
           *a1,
           12,
           (unsigned __int16)v4 | ((unsigned __int16)((16 * (v3 & 0x1F)) | WindowTrackState) << 16),
           0LL);
}
