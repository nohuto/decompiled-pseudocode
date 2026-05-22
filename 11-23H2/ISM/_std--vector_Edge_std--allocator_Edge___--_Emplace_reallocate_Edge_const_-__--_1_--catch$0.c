/*
 * XREFs of _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&__::_1_::catch$0 @ 0x1801C8DCF
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801C77EC (--$_Destroy_range@V-$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV-$allocator@VEdge@@@0@@.c)
 */

void __fastcall __noreturn std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Edge>>(*(Edge **)(a2 + 112), *(Edge **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), *(_QWORD *)(a2 + 120) << 7);
  throw;
}
