/*
 * XREFs of ??$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@@std@@QEAAAEAUHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801B0998
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x1801B1230 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Visit@V_lambda_b4317e4bff0ee715c22e12c77f4f8b58_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_b4317e4bff0ee715c22e12c77f4f8b58_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@UHeatTouchpadEnabledContextMessage@@UHeatTouchpadHapticConfigContextMessage@@@1@@Z @ 0x1801B03D4 (--$_Visit@V_lambda_b4317e4bff0ee715c22e12c77f4f8b58_@@AEAV-$_Variant_storage_@$0A@Umonostate@std.c)
 *     ??$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA?A_TAEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801B0A3C (--$emplace_back@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpaceP.c)
 *     ?_Reallocate_exactly@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAX_K@Z @ 0x1801B2144 (-_Reallocate_exactly@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage,HeatTouchpadEnabledContextMessage,HeatTouchpadHapticConfigContextMessage>::emplace<HeatInputConfigContextMessage,unsigned long &,INPUT_SPACE_PAYLOAD * &,1,0>(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3)
{
  __int64 v6; // r14
  unsigned int v7; // ebx

  std::_Variant_raw_visit1<2>::_Visit<_lambda_b4317e4bff0ee715c22e12c77f4f8b58_,std::_Variant_storage_<0,std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage,HeatTouchpadEnabledContextMessage,HeatTouchpadHapticConfigContextMessage> &>(
    *(char *)(a1 + 64) + 1,
    (__int64)a2,
    a1);
  *(_BYTE *)(a1 + 64) = -1;
  v6 = *a3;
  v7 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( *a2 )
    std::vector<InputSpacePayload>::_Reallocate_exactly(a1);
  if ( *a2 )
  {
    do
      std::vector<InputSpacePayload>::emplace_back<INPUT_SPACE_PAYLOAD &>(a1, v6 + 24LL * v7++);
    while ( v7 < *a2 );
  }
  *(_BYTE *)(a1 + 64) = 1;
  return a1;
}
