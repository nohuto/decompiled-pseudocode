/*
 * XREFs of _lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator() @ 0x18063AA90
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D770 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     wil::details::lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___::_lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___ @ 0x18063A9B8 (wil--details--lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___--_lambda_call__lambda_bb8c.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800BA318 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

int __fastcall lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(int *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  std::chrono::steady_clock::now(&v9);
  v2 = (v9 - *((_QWORD *)a1 + 1)) / 1000000;
  v4 = wil::details::static_lazy<WindowManagementLogging>::get(
         v3,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v4[1];
  if ( *v7 > 5u )
  {
    v10 = a1[1];
    v11 = *a1;
    v12 = 0x1000000LL;
    LODWORD(v9) = v2;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (__int64)v7,
                    byte_180870A82,
                    v5,
                    v6,
                    (__int64)&v11,
                    (__int64)&v10,
                    (__int64)&v9,
                    (__int64)&v12);
  }
  return (int)v4;
}
