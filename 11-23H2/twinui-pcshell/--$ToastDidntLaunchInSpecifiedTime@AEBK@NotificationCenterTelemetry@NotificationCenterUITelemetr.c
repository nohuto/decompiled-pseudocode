/*
 * XREFs of ??$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x180434DA8
 * Callers:
 *     ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801A1F50 (-OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x180183F88 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

char __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::ToastDidntLaunchInSpecifiedTime<unsigned long const &>(
        __int64 a1)
{
  __int64 *v1; // rax
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v1 = wil::details::static_lazy<NotificationCenterLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
  v2 = (_DWORD *)v1[1];
  if ( *v2 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v2, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v9 = 0;
      v7 = &v5;
      v5 = 60000;
      v8 = 4;
      LOBYTE(v1) = tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18084CB2E, 0LL, 0LL, 3u, &v6);
    }
  }
  return (char)v1;
}
