/*
 * XREFs of _std::vector_tagPOINT_std::allocator_tagPOINT___::_Emplace_reallocate_tagPOINT_const_&__::_1_::catch$21 @ 0x18015ADAB
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_tagPOINT_std::allocator_tagPOINT___::_Emplace_reallocate_tagPOINT_const____::_1_::catch_21(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 8LL * *(_QWORD *)(a2 + 80));
  throw;
}
