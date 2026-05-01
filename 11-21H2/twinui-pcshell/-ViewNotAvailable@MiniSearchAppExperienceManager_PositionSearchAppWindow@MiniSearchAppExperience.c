/*
 * XREFs of ?ViewNotAvailable@MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1803A4A20
 * Callers:
 *     ?PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A30C8 (-PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::ViewNotAvailable(
        MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v2 = (_DWORD *)wil::details::static_lazy<SearchAppLauncherLogging>::get(
                   (__int64)this,
                   _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
    {
      v4 = *((_QWORD *)this + 6);
      v9 = 0;
      v7 = &v5;
      v5 = 50331648LL;
      v8 = 8;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1806AB82D, (const GUID *)(v4 + 8), 0LL, 3u, &v6);
    }
  }
}
