/*
 * XREFs of _lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator() @ 0x1801BB2E8
 * Callers:
 *     wil::details::lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___::_lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___ @ 0x1801BAF10 (wil--details--lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___--_lambda_call__lambda_bb8c.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1801BDA00 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 * Callees:
 *     ??$WindowTabHostThumbnailRequested@AEBIAEBI_J@WindowTabHostTelemetry@@SAXAEBI0$$QEA_J@Z @ 0x1801BA8D4 (--$WindowTabHostThumbnailRequested@AEBIAEBI_J@WindowTabHostTelemetry@@SAXAEBI0$$QEA_J@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180452808 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

int __fastcall lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  std::chrono::steady_clock::now(&v3);
  v3 = (v3 - *(_QWORD *)(a1 + 8)) / 1000000;
  return WindowTabHostTelemetry::WindowTabHostThumbnailRequested<unsigned int const &,unsigned int const &,__int64>(
           (int *)a1,
           (int *)(a1 + 4),
           (int *)&v3);
}
