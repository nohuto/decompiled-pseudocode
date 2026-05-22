/*
 * XREFs of ??1?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAA@XZ @ 0x180152BB4
 * Callers:
 *     _GestureServices::GestureServices_::_1_::dtor$7 @ 0x18006E4D3 (_GestureServices--GestureServices_--_1_--dtor$7.c)
 *     ??1GestureServices@@UEAA@XZ @ 0x180152DB0 (--1GestureServices@@UEAA@XZ.c)
 *     _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_&__::_1_::dtor$0 @ 0x1801A2069 (_std--vector_InputSpacePayload_std--allocator_InputSpacePayload___--_Emplace_reallocate_INPUT_SP.c)
 *     _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::emplace_back_INPUT_SPACE_PAYLOAD_&__::_1_::dtor$0 @ 0x1801A2B02 (_std--vector_InputSpacePayload_std--allocator_InputSpacePayload___--emplace_back_INPUT_SPACE_PAY.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
