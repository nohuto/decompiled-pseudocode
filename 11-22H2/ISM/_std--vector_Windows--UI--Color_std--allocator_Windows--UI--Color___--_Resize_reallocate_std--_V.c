/*
 * XREFs of _std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$7 @ 0x1800FA28D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 72), 4LL * *(_QWORD *)(a2 + 80));
  throw;
}
