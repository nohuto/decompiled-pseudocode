/*
 * XREFs of ??$NoChangeToDisplayContext@AEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXAEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180361FBC
 * Callers:
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x180362838 (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

int __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplayContextChanged::NoChangeToDisplayContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext &>(
        __int64 a1,
        int *a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  int v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-40h] BYREF
  int *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v4 = wil::details::static_lazy<NotificationCenterLogging>::get(
         a1,
         _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    v6 = *a2;
    v7 = *(_QWORD *)(a1 + 48);
    v13 = 0;
    v9 = v6;
    v11 = &v9;
    v12 = 4;
    LODWORD(v4) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v5,
                    (unsigned __int8 *)dword_1806A5217,
                    (const GUID *)(v7 + 8),
                    0LL,
                    3u,
                    &v10);
  }
  return (int)v4;
}
