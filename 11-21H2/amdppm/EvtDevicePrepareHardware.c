/*
 * XREFs of EvtDevicePrepareHardware @ 0x1C0022020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     RegisterWmi @ 0x1C00252FC (RegisterWmi.c)
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 */

__int64 __fastcall EvtDevicePrepareHardware(__int64 a1)
{
  _QWORD *v2; // rdi
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0011018);
  *v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, a1);
  v2[1] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, a1);
  v2[2] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, a1);
  v3 = ProcLibDeviceStart(v2);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x16u,
      (__int64)&WPP_082f97d46ed83e9d2e2c8b74db8b7ab2_Traceguids,
      v8);
  }
  v4 = RegisterWmi(v2);
  v5 = v4;
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v7) = v4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x17u,
      (__int64)&WPP_082f97d46ed83e9d2e2c8b74db8b7ab2_Traceguids,
      v7);
  }
  return v5;
}
