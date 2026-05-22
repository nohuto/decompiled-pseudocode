/*
 * XREFs of ??1?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAA@XZ @ 0x180183D88
 * Callers:
 *     _ISMHeatFrameworkHost::BroadcastContextMessage_::_1_::dtor$0 @ 0x1801843F1 (_ISMHeatFrameworkHost--BroadcastContextMessage_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage>::~variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage>(
        __int64 a1,
        __int64 a2)
{
  std::_Variant_raw_visit1<2>::_Visit<_lambda_cdc69f7341bde89f897c3775d519b7eb_,std::_Variant_storage_<0,std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage> &>(
    *(char *)(a1 + 64) + 1,
    a2,
    a1);
}
