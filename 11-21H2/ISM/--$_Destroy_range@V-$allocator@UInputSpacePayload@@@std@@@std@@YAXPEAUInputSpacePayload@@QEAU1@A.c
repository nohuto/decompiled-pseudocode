/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x180182C0C
 * Callers:
 *     _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_&__::_1_::catch$5 @ 0x180182FD6 (_std--vector_InputSpacePayload_std--allocator_InputSpacePayload___--_Emplace_reallo_ea_180182FD6.c)
 *     ??$_Uninitialized_move@PEAUInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x1801832D0 (--$_Uninitialized_move@PEAUInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@YAPEA.c)
 *     ??$_Visit@V_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@1@@Z @ 0x18018335C (--$_Visit@V_lambda_cdc69f7341bde89f897c3775d519b7eb_@@AEAV-$_Variant_storage_@$0A@Umonostate@std.c)
 *     ??1?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ @ 0x180183DF4 (--1-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQEAUInputSpacePayload@@_K1@Z @ 0x180184F60 (-_Change_array@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Destroy_range<std::allocator<InputSpacePayload>>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 4;
    do
    {
      v4 = (void *)*(v3 - 2);
      if ( v4 )
      {
        std::_Deallocate<16,0>(v4, 8 * ((__int64)(*v3 - (_QWORD)v4) >> 3));
        *(v3 - 2) = 0LL;
        *(v3 - 1) = 0LL;
        *v3 = 0LL;
      }
      v3 += 5;
      result = v3 - 4;
    }
    while ( v3 - 4 != a2 );
  }
  return result;
}
