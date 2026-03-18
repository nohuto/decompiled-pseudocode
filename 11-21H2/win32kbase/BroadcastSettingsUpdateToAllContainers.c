/*
 * XREFs of BroadcastSettingsUpdateToAllContainers @ 0x1C00BE610
 * Callers:
 *     UpdateMouseSensitivity @ 0x1C00BE580 (UpdateMouseSensitivity.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0148CEC (_SetPrecisionTouchPadConfiguration.c)
 *     SetSwapMouseButton @ 0x1C0151E30 (SetSwapMouseButton.c)
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 *     UnpackMouseSettings @ 0x1C01E8C74 (UnpackMouseSettings.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E8A48 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void BroadcastSettingsUpdateToAllContainers()
{
  const struct CONTAINER_ID *v0; // rdx
  int v1; // r8d
  int v2; // [rsp+50h] [rbp+8h] BYREF

  if ( isRootPartition() && CIVChannel::ContainerConnected(3u) )
  {
    LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v0,
        v1,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        18,
        (__int64)&WPP_76daf91aede7319b3291ff1c1ef65419_Traceguids);
    }
    v2 = 0;
    IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v2, v0);
  }
}
