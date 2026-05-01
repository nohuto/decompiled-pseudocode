/*
 * XREFs of ?CancelledDueToLock@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x180471DE0
 * Callers:
 *     ?OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180472F80 (-OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AXXZ@Z @ 0x180475F70 (-get@-$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AX.c)
 */

void __fastcall MeetNowTelemetry::ShowFlyoutActivity::CancelledDueToLock(MeetNowTelemetry::ShowFlyoutActivity *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v2 = *(_DWORD **)(wil::details::static_lazy<MeetNowTelemetryLogging>::get(
                      this,
                      _lambda_50d5f5935f73d6e1cfa7918addf0e10e_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x400000000000LL) )
    {
      v4 = *((_QWORD *)this + 6);
      v9 = 0;
      v7 = &v5;
      v5 = 0x1000000LL;
      v8 = 8;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_180854E9D, (const GUID *)(v4 + 8), 0LL, 3u, &v6);
    }
  }
}
