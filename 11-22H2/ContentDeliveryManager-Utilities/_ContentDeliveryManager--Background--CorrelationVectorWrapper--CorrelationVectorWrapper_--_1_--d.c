/*
 * XREFs of _ContentDeliveryManager::Background::CorrelationVectorWrapper::CorrelationVectorWrapper_::_1_::dtor$0 @ 0x1800D6500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentDeliveryManager::Background::CorrelationVectorWrapper::CorrelationVectorWrapper_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(*(_QWORD *)(a2 + 48));
}
