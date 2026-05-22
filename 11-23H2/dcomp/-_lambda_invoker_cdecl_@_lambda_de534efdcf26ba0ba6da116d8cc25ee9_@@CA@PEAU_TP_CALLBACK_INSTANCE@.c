/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_de534efdcf26ba0ba6da116d8cc25ee9_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008E360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall _lambda_de534efdcf26ba0ba6da116d8cc25ee9_::_lambda_invoker_cdecl_(
        unsigned __int8 Instance,
        unsigned __int64 Context,
        PTP_TIMER Timer)
{
  wil::details::ApiTelemetryLogger::FireEvent<>(Instance, Context);
}
