/*
 * XREFs of ?Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800EA020
 * Callers:
 *     wistd::__function::__func__lambda_d5d9c4a1e2c87958fc452fd533bd1171__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1801E4720 (wistd--__function--__func__lambda_d5d9c4a1e2c87958fc452fd533bd1171__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 */

const struct _tlgProvider_t *__fastcall SingleViewExperienceLogging::Provider(__int64 a1)
{
  return (const struct _tlgProvider_t *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                                          a1,
                                          (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
}
