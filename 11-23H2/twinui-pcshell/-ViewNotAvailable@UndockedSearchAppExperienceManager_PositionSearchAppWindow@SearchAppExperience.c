/*
 * XREFs of ?ViewNotAvailable@UndockedSearchAppExperienceManager_PositionSearchAppWindow@SearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x18046B608
 * Callers:
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800B7650 (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x1800BB23C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow::ViewNotAvailable(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PositionSearchAppWindow *this)
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
                   (void (__cdecl *)())_lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
    {
      v4 = *((_QWORD *)this + 6);
      v9 = 0;
      v7 = &v5;
      v5 = 0x1000000LL;
      v8 = 8;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_180853674, (const GUID *)(v4 + 8), 0LL, 3u, &v6);
    }
  }
}
