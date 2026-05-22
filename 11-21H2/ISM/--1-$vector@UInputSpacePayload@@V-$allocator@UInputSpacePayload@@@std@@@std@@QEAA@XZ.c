/*
 * XREFs of ??1?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ @ 0x180183DF4
 * Callers:
 *     _std::variant_std::monostate_HeatInputConfigContextMessage_HeatLowPowerStateContextMessage_HeatHingeAngleContextMessage_HeatDisplayOcclusionContextMessage_HeatVirtualTouchpadContextMessage_::emplace_HeatInputConfigContextMessage_unsigned_long_&_INPUT_SPACE_PAYLOAD___&_1_0__::_1_::dtor$0 @ 0x1801839A0 (_std--variant_std--monostate_HeatInputConfigContextMessage_HeatLowPowerStateContextMessage_HeatH.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x180182C0C (--$_Destroy_range@V-$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@A.c)
 */

void __fastcall std::vector<InputSpacePayload>::~vector<InputSpacePayload>(__int64 a1)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<InputSpacePayload>>(v2, *(_QWORD **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
