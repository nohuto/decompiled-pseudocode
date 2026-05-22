/*
 * XREFs of _std::vector_INPUT_SPACE_PAYLOAD_std::allocator_INPUT_SPACE_PAYLOAD___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_&__::_1_::catch$23 @ 0x18009DF98
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_INPUT_SPACE_PAYLOAD_std::allocator_INPUT_SPACE_PAYLOAD___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD____::_1_::catch_23(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 24LL * *(_QWORD *)(a2 + 80));
  throw;
}
