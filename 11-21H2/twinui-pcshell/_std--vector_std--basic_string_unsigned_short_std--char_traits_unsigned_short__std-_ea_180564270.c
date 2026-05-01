/*
 * XREFs of _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::catch$28 @ 0x180564270
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x180175438 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1803295BC (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 */

void __fastcall __noreturn std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Insert_range_std::move_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_1_::catch_28(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rbx

  v3 = *(__int64 **)(a2 + 128);
  std::_Uninitialized_move<std::wstring *>(*(_QWORD **)(a2 + 136), (_QWORD *)*v3, *(_OWORD **)(a2 + 120));
  std::_Destroy_range<std::allocator<std::wstring>>(*(_QWORD *)(a2 + 136), *v3);
  *v3 = *(_QWORD *)(a2 + 32);
  throw;
}
