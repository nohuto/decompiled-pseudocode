/*
 * XREFs of ?Provider@ISMTracing@@SAQEBU_tlgProvider_t@@XZ @ 0x1800267E0
 * Callers:
 *     ?GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK0000000@Z @ 0x1800607F0 (-GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK0000000@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 */

const struct _tlgProvider_t *__fastcall ISMTracing::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<ISMTracing>::get(
                                             a1,
                                             _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                                         + 8);
}
