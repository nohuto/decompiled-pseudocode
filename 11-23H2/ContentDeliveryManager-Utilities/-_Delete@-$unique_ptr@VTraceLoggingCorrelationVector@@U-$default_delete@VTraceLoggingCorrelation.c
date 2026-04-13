/*
 * XREFs of ?_Delete@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@AEAAXXZ @ 0x1800604C8
 * Callers:
 *     ??0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180051C10 (--0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x18005337C (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     ??4?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053820 (--4-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     ?_Destroy@?$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EEAAXXZ @ 0x1800605B0 (-_Destroy@-$_Ref_count_obj@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EE.c)
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x18008EBB0 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA-AV-$sha.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<TraceLoggingCorrelationVector>::_Delete(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
