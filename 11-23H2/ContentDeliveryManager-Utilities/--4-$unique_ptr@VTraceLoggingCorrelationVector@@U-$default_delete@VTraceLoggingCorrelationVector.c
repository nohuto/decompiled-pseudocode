/*
 * XREFs of ??4?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053820
 * Callers:
 *     ??0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180051C10 (--0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ.c)
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x18008EBB0 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA-AV-$sha.c)
 * Callees:
 *     ?_Delete@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@AEAAXXZ @ 0x1800604C8 (-_Delete@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelation.c)
 */

__int64 *__fastcall std::unique_ptr<TraceLoggingCorrelationVector>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    if ( v3 != *a1 )
    {
      std::unique_ptr<TraceLoggingCorrelationVector>::_Delete(a1);
      *a1 = v3;
    }
  }
  return a1;
}
