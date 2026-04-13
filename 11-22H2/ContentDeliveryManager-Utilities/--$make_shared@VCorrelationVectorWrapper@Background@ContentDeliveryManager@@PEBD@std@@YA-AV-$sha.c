/*
 * XREFs of ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x18008EC00
 * Callers:
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18009152C (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ??4?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053870 (--4-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x18005F7B8 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ?_Delete@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@AEAAXXZ @ 0x180060518 (-_Delete@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelation.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x180062534 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1800946C8 (-Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<ContentDeliveryManager::Background::CorrelationVectorWrapper,char const *>(
        _QWORD *a1,
        const char **a2)
{
  struct TraceLoggingCorrelationVector *v4; // rax
  bool v5; // dl
  __int64 v6; // rdi
  const char *v7; // rcx
  struct TraceLoggingCorrelationVector *v9; // [rsp+60h] [rbp+18h] BYREF

  v4 = (struct TraceLoggingCorrelationVector *)operator new(0xA0uLL);
  v6 = (__int64)v4;
  v9 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<ContentDeliveryManager::Background::CorrelationVectorWrapper>::`vftable';
    v7 = *a2;
    *((_QWORD *)v4 + 2) = 0LL;
    v9 = TraceLoggingCorrelationVector::Set(v7, v5);
    std::unique_ptr<TraceLoggingCorrelationVector>::operator=((__int64 *)(v6 + 16), (__int64 *)&v9);
    std::unique_ptr<TraceLoggingCorrelationVector>::_Delete((void **)&v9);
    TraceLoggingCorrelationVector::ToStringImpl(
      *(TraceLoggingCorrelationVector **)(v6 + 16),
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v6 + 16) + 136LL), 0LL),
      (char *)(v6 + 24));
  }
  else
  {
    v6 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(a1, v6 + 16, v6);
  return a1;
}
