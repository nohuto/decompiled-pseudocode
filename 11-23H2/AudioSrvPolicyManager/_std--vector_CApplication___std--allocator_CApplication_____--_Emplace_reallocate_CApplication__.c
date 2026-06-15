/*
 * XREFs of _std::vector_CApplication___std::allocator_CApplication_____::_Emplace_reallocate_CApplication___&__::_1_::catch$0 @ 0x180048F30
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180047674 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CApplication___std::allocator_CApplication_____::_Emplace_reallocate_CApplication______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 8LL * *(_QWORD *)(a2 + 80));
  throw;
}
