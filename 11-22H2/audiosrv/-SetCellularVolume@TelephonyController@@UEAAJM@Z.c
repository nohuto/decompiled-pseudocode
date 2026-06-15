/*
 * XREFs of ?SetCellularVolume@TelephonyController@@UEAAJM@Z @ 0x180167D50
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?SetVolumeOnKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@M@Z @ 0x180167E44 (-SetVolumeOnKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@M@Z.c)
 */

__int64 __fastcall TelephonyController::SetCellularVolume(TelephonyController *this, float a2)
{
  unsigned int v3; // edx
  _DWORD *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  float v8; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-50h] BYREF
  float *v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+64h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = a2;
  v4 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   (__int64)this,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 4u )
  {
    v12 = 0;
    v11 = 4;
    v10 = &v8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_1801993F3, 0LL, 0LL, 3u, &v9);
  }
  v5 = SetVolumeOnKsTopology(
         (const struct _GUID *)((char *)this + 200),
         v3,
         *((struct IKsControl **)this + 24),
         (struct KSPROPERTY_STEPPING_LONG *)(((unsigned __int64)this + 200) & -(__int64)(*((_DWORD *)this + 54) != 0)),
         a2);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27B,
    (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\telephonycontroller.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
