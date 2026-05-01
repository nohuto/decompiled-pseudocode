/*
 * XREFs of _std::vector_tagRECT_std::allocator_tagRECT___::_Emplace_reallocate_tagRECT__::_1_::catch$0 @ 0x1801A4FE9
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@UtagRECT@@@std@@QEAAXQEAUtagRECT@@_K@Z @ 0x1803901D0 (-deallocate@-$allocator@UtagRECT@@@std@@QEAAXQEAUtagRECT@@_K@Z.c)
 */

void __fastcall __noreturn std::vector_tagRECT_std::allocator_tagRECT___::_Emplace_reallocate_tagRECT__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<tagRECT>::deallocate(a1, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
