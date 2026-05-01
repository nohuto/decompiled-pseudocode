/*
 * XREFs of ??$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXAEAW4IHM_DISPLAY_MODE@@@Z @ 0x18041BF44
 * Callers:
 *     ?OnInputHostChanging@CControlCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x180420F18 (-OnInputHostChanging@CControlCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x180144240 (-get@-$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_IhmChange<enum IHM_DISPLAY_MODE &>(int *a1)
{
  __int64 *v2; // rax
  _DWORD *v3; // rcx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<ControlCenterLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_7497dc87b220aaed4d14ef0ec7d62e5e_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 5u )
  {
    v4 = *a1;
    v10 = 0;
    v6 = v4;
    v9 = 4;
    v8 = &v6;
    LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v3,
                    (unsigned __int8 *)dword_180848B9A,
                    0LL,
                    0LL,
                    3u,
                    &v7);
  }
  return (int)v2;
}
