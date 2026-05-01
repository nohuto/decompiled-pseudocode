/*
 * XREFs of ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1800C355C
 * Callers:
 *     ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800C3348 (--$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QE.c)
 *     _lambda_e1e333736bfc613a027e396b29f06629_::operator() @ 0x1801F8DB0 (_lambda_e1e333736bfc613a027e396b29f06629_--operator().c)
 *     _lambda_f2c26bad65fa2b8f49fea49bca5a1348_::operator() @ 0x1801F92BC (_lambda_f2c26bad65fa2b8f49fea49bca5a1348_--operator().c)
 *     _lambda_1be1e40747901402039ac9a9af83119a_::operator() @ 0x1804E5CE0 (_lambda_1be1e40747901402039ac9a9af83119a_--operator().c)
 *     _lambda_d1defa04705501fb10e3f00eb63c4368_::operator() @ 0x1804E81A0 (_lambda_d1defa04705501fb10e3f00eb63c4368_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTraceLogging@@P6AXXZ@Z @ 0x1800C3580 (-get@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAAPEAVViewManagerInteropTrac.c)
 */

bool __fastcall ViewManagerInteropTraceLogging::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax
  unsigned __int64 v2; // r8

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<ViewManagerInteropTraceLogging>::get(
                                      a1,
                                      _lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 0, v2);
}
