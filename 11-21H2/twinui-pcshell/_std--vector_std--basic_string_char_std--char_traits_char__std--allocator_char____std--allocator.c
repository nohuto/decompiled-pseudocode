/*
 * XREFs of _std::vector_std::basic_string_char_std::char_traits_char__std::allocator_char____std::allocator_std::basic_string_char_std::char_traits_char__std::allocator_char_______::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$11 @ 0x1803496A3
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x180348A64 (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 */

void __fastcall __noreturn std::vector_std::basic_string_char_std::char_traits_char__std::allocator_char____std::allocator_std::basic_string_char_std::char_traits_char__std::allocator_char_______::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_11(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  std::_Destroy_range<std::allocator<std::string>>(*(_QWORD *)(a2 + 120), *(_QWORD *)(a2 + 112), a3);
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 32LL * *(_QWORD *)(a2 + 104));
  throw;
}
