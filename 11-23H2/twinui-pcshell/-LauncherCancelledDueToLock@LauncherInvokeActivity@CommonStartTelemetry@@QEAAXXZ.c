/*
 * XREFs of ?LauncherCancelledDueToLock@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x180505F94
 * Callers:
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x1800712F4 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToLock(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v2 = (_DWORD *)wil::details::static_lazy<LauncherTelemetryLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 4u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
    {
      v4 = *((_QWORD *)this + 6);
      v9 = 0;
      v7 = &v5;
      v5 = 0x1000000LL;
      v8 = 8;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18085CC0F, (const GUID *)(v4 + 8), 0LL, 3u, &v6);
    }
  }
}
