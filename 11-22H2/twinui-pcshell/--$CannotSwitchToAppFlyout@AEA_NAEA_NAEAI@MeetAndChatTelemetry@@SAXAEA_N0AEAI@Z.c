/*
 * XREFs of ??$CannotSwitchToAppFlyout@AEA_NAEA_NAEAI@MeetAndChatTelemetry@@SAXAEA_N0AEAI@Z @ 0x1806AF34C
 * Callers:
 *     ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806C0C38 (-SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?get@?$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLogging@@P6AXXZ@Z @ 0x1800BB71C (-get@-$static_lazy@VMeetAndChatTelemetryLogging@@@details@wil@@QEAAPEAVMeetAndChatTelemetryLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall MeetAndChatTelemetry::CannotSwitchToAppFlyout<bool &,bool &,unsigned int &>(char *a1, char *a2, int *a3)
{
  __int64 *v6; // rax
  _DWORD *v7; // rcx
  char v9; // [rsp+38h] [rbp-19h] BYREF
  char v10; // [rsp+39h] [rbp-18h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-9h] BYREF
  char *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  char *v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  int *v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v6 = wil::details::static_lazy<MeetAndChatTelemetryLogging>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_f7280a8f7c8a9a0f992333b64944e967_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    v11 = *a3;
    v9 = *a2;
    v10 = *a1;
    v17 = &v11;
    v15 = &v9;
    v13 = &v10;
    v18 = 4LL;
    v16 = 1LL;
    v14 = 1LL;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v7,
                    (unsigned __int8 *)dword_18087889D,
                    0LL,
                    0LL,
                    5u,
                    &v12);
  }
  return (int)v6;
}
