/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EEAAXXZ @ 0x1800605B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Destroy(__int64 a1)
{
  std::unique_ptr<TraceLoggingCorrelationVector>::_Delete((void **)(a1 + 16));
}
