/*
 * XREFs of _std::vector_DisplayOcclusionRect_std::allocator_DisplayOcclusionRect___::_Emplace_reallocate_DisplayOcclusionRect_&__::_1_::catch$23 @ 0x1801BC8B2
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_DisplayOcclusionRect_std::allocator_DisplayOcclusionRect___::_Emplace_reallocate_DisplayOcclusionRect____::_1_::catch_23(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 176LL * *(_QWORD *)(a2 + 80));
  throw;
}
