/*
 * XREFs of _std::vector_InputSite___std::allocator_InputSite_____::_Emplace_reallocate_InputSite____::_1_::catch$9 @ 0x18006F35D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_InputSite___std::allocator_InputSite_____::_Emplace_reallocate_InputSite____::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), 8LL * *(_QWORD *)(a2 + 96));
  throw;
}
