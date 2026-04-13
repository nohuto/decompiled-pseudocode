/*
 * XREFs of ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1800533CC
 * Callers:
 *     _ContentDeliveryManager::Background::CorrelationVectorWrapper::CorrelationVectorWrapper_::_1_::dtor$0 @ 0x1800D6500 (_ContentDeliveryManager--Background--CorrelationVectorWrapper--CorrelationVectorWrapper_--_1_--d.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>(
        __int64 a1)
{
  return std::unique_ptr<TraceLoggingCorrelationVector>::_Delete(a1);
}
