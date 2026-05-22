/*
 * XREFs of ??$FireEvent@$$V@ApiTelemetryLogger@details@wil@@SAXXZ @ 0x1800642C8
 * Callers:
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_de534efdcf26ba0ba6da116d8cc25ee9_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008E360 (-_lambda_invoker_cdecl_@_lambda_de534efdcf26ba0ba6da116d8cc25ee9_@@CA@PEAU_TP_CALLBACK_INSTANCE@.c)
 *     ??1ApiTelemetryLogger@details@wil@@EEAA@XZ @ 0x1800ED804 (--1ApiTelemetryLogger@details@wil@@EEAA@XZ.c)
 * Callees:
 *     ?IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z @ 0x1800642F8 (-IsEnabled@ApiTelemetryLogger@details@wil@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@P6AXXZ@Z @ 0x18006431C (-get@-$static_lazy@VApiTelemetryLogger@details@wil@@@details@wil@@QEAAPEAVApiTelemetryLogger@23@.c)
 *     ?FireEvent_@ApiTelemetryLogger@details@wil@@QEAAXXZ @ 0x180064488 (-FireEvent_@ApiTelemetryLogger@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::ApiTelemetryLogger::FireEvent<>(unsigned __int8 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  wil::details::ApiTelemetryLogger *v3; // rax

  if ( wil::details::ApiTelemetryLogger::IsEnabled(a1, a2) )
  {
    v3 = (wil::details::ApiTelemetryLogger *)wil::details::static_lazy<wil::details::ApiTelemetryLogger>::get(
                                               v2,
                                               _lambda_6b26b9d13d28b4db0bc0125880e9ff13_::_lambda_invoker_cdecl_);
    wil::details::ApiTelemetryLogger::FireEvent_(v3);
  }
}
