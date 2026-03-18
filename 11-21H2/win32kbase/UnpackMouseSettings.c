/*
 * XREFs of UnpackMouseSettings @ 0x1C01E8C74
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EF3E0 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C00A07A8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00B5160 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C00BE5B4 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C00BE610 (BroadcastSettingsUpdateToAllContainers.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C00E6154 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     SetSwapMouseButton @ 0x1C0151E30 (SetSwapMouseButton.c)
 */

void *__fastcall UnpackMouseSettings(int *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  char v5; // di
  unsigned int v6; // ebx
  int v7; // edx
  __int64 v8; // r8
  void *result; // rax
  int v10; // ebx

  v3 = *a1;
  v5 = 1;
  if ( *a1 != *((_DWORD *)gpsi + 497) )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink);
    SetSwapMouseButton(v3 != 0);
    if ( qword_1C029C670 )
      qword_1C029C670(33LL, 0LL, 0LL);
  }
  v6 = a1[1];
  if ( v6 != (unsigned int)CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(
                             (CDeviceAcceleration *)((char *)qword_1C0288098 + 104),
                             a2,
                             a3) )
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        11,
        (__int64)&WPP_76daf91aede7319b3291ff1c1ef65419_Traceguids,
        v6);
    if ( v6 - 1 > 0x13 )
      v6 = *((_DWORD *)qword_1C0288098 + 24);
    CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
      (CDeviceAcceleration *)((char *)qword_1C0288098 + 104),
      v6,
      v8);
    BroadcastSettingsUpdateToAllContainers();
    CDeviceAcceleration::ResetAccelerationCurves(qword_1C0288098);
    if ( qword_1C029C670 )
      qword_1C029C670(113LL, 0LL, 0LL);
  }
  result = gpsi;
  v10 = a1[2];
  if ( v10 != *((_DWORD *)gpsi + 1247) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = v5;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        12,
        (__int64)&WPP_76daf91aede7319b3291ff1c1ef65419_Traceguids,
        a1[2]);
    }
    *((_DWORD *)gpsi + 1247) = v10;
    result = qword_1C029C670;
    if ( qword_1C029C670 )
      return (void *)qword_1C029C670(105LL, 0LL, 0LL);
  }
  return result;
}
