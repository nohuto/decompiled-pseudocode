/*
 * XREFs of ??1?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAA@XZ @ 0x180183DA0
 * Callers:
 *     _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Emplace_back_with_unused_capacity_INPUT_SPACE_PAYLOAD_&__::_1_::dtor$0 @ 0x180182E00 (_std--vector_InputSpacePayload_std--allocator_InputSpacePayload___--_Emplace_back_with_unused_ca.c)
 *     _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_&__::_1_::dtor$0 @ 0x180182FC6 (_std--vector_InputSpacePayload_std--allocator_InputSpacePayload___--_Emplace_reallocate_INPUT_SP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<INPUT_SPACE_REGION>::~vector<INPUT_SPACE_REGION>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
