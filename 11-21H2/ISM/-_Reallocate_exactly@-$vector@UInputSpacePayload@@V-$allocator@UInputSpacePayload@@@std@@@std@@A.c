/*
 * XREFs of ?_Reallocate_exactly@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAX_K@Z @ 0x1801850B0
 * Callers:
 *     ??$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@?$variant@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@QEAAAEAUHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801838F8 (--$emplace@UHeatInputConfigContextMessage@@AEAKAEAPEAUINPUT_SPACE_PAYLOAD@@$00$0A@@-$variant@Umo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18003B4AC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x1801832D0 (--$_Uninitialized_move@PEAUInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@YAPEA.c)
 */

__int64 __fastcall std::vector<InputSpacePayload>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v13; // [rsp+40h] [rbp+8h]

  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  size_of = std::_Get_size_of_n<40>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = (__int64)v6;
  v13 = v6;
  try
  {
    std::_Uninitialized_move<InputSpacePayload *>(*(_QWORD **)a1, *(_QWORD **)(a1 + 8), (__int64)v6);
    v8 = a2;
    v9 = v4;
    v10 = v7;
    v11 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v13, 40 * a2);
    throw;
  }
  return std::vector<InputSpacePayload>::_Change_array(v11, v10, v9, v8);
}
