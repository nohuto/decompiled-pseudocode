/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@EEAAXXZ @ 0x1800A2F40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler>::_Destroy(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 32);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
