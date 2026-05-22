/*
 * XREFs of ??$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAAAEAUHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801838F8
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x180184140 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Emplace_back_with_unused_capacity@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAAEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x180182D64 (--$_Emplace_back_with_unused_capacity@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$.c)
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x180182E18 (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInpu.c)
 *     ??$_Visit@V_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@1@@Z @ 0x18018335C (--$_Visit@V_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV-$_Variant_storage_@$0A@Umonostate@std.c)
 *     ?_Reallocate_exactly@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAX_K@Z @ 0x1801850B0 (-_Reallocate_exactly@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::variant<std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage>::emplace<HeatInputConfigContextMessage,unsigned long &,INPUT_SPACE_PAYLOAD * &,1,0>(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3)
{
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v9; // rdx

  std::_Variant_raw_visit1<2>::_Visit<_lambda_cdc69f7341bde89f897c3775d519b7eb_,std::_Variant_storage_<0,std::monostate,HeatInputConfigContextMessage,HeatLowPowerStateContextMessage,HeatHingeAngleContextMessage,HeatDisplayOcclusionContextMessage,HeatVirtualTouchpadContextMessage> &>(
    *(char *)(a1 + 64) + 1,
    (__int64)a2,
    a1);
  *(_BYTE *)(a1 + 64) = -1;
  v6 = *a3;
  v7 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v8 = *a2;
  if ( *a2 )
  {
    std::vector<InputSpacePayload>::_Reallocate_exactly(a1, v8);
    v8 = *a2;
  }
  if ( v8 )
  {
    do
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 == *(_QWORD *)(a1 + 16) )
        std::vector<InputSpacePayload>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>((__int64 *)a1, v9, v6 + 24LL * v7);
      else
        std::vector<InputSpacePayload>::_Emplace_back_with_unused_capacity<INPUT_SPACE_PAYLOAD &>(a1, v6 + 24LL * v7);
      ++v7;
    }
    while ( v7 < *a2 );
  }
  *(_BYTE *)(a1 + 64) = 1;
  return a1;
}
