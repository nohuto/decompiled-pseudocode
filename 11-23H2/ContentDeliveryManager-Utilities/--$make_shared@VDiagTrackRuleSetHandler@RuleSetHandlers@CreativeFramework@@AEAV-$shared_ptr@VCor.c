/*
 * XREFs of ??$make_shared@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@std@@YA?AV?$shared_ptr@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@@0@AEAV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@@Z @ 0x1800A1608
 * Callers:
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x1800A1EC0 (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ??0?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@Z @ 0x180051AC0 (--0-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAA@AEBV01@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper> &>(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  __int64 *v6; // rbx
  std::_Ref_count_base *v7; // rcx
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = operator new(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler>::`vftable';
    v6 = std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
           v9,
           a2);
    *((_QWORD *)v5 + 2) = &CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::`vftable';
    std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>(
      (_QWORD *)v5 + 3,
      v6);
    *((_BYTE *)v5 + 40) = 0;
    v7 = (std::_Ref_count_base *)v6[1];
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 4;
  return a1;
}
