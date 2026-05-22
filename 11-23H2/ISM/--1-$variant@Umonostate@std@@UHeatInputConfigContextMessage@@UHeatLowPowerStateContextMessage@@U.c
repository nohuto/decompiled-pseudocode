/*
 * XREFs of ??1?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@@std@@QEAA@XZ @ 0x1801A2EEC
 * Callers:
 *     _ISMHeatFrameworkHost::BroadcastContextMessage_::_1_::dtor$0 @ 0x1801A3506 (_ISMHeatFrameworkHost--BroadcastContextMessage_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage,HeatTouchpadEnabledContextMessage,HeatTouchpadHapticConfigContextMessage>::~variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage,HeatTouchpadEnabledContextMessage,HeatTouchpadHapticConfigContextMessage>(
        __int64 a1,
        __int64 a2)
{
  std::_Variant_raw_visit1<2>::_Visit<_lambda_b4317e4bff0ee715c22e12c77f4f8b58_,std::_Variant_storage_<0,std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage,HeatTouchpadEnabledContextMessage,HeatTouchpadHapticConfigContextMessage> &>(
    *(char *)(a1 + 64) + 1,
    a2,
    a1);
}
