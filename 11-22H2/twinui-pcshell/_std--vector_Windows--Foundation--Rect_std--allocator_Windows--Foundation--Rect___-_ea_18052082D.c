/*
 * XREFs of _std::vector_Windows::Foundation::Rect_std::allocator_Windows::Foundation::Rect___::_Emplace_reallocate_Windows::Foundation::Rect__::_1_::catch$9 @ 0x18052082D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Windows::Foundation::Rect_std::allocator_Windows::Foundation::Rect___::_Emplace_reallocate_Windows::Foundation::Rect__::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 16LL * *(_QWORD *)(a2 + 80));
  throw;
}
