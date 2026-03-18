/*
 * XREFs of IsForegroundWindow @ 0x1C00CE0C8
 * Callers:
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1C00CE070 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     ?IsWindowEligibleForMinimize@CRecalcState@@CA_NPEBUtagWND@@@Z @ 0x1C011F5B4 (-IsWindowEligibleForMinimize@CRecalcState@@CA_NPEBUtagWND@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01CEC88 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsForegroundWindow(__int64 a1)
{
  return gpqForeground == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) && *(_QWORD *)(gpqForeground + 120LL) == a1;
}
