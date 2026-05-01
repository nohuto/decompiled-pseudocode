/*
 * XREFs of _std::vector_std::pair_unsigned_long_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_unsigned_long_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_Emplace_reallocate_std::pair_unsigned_long_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________::_1_::catch$9 @ 0x1803280C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@QEAU10@AEAV?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@@Z @ 0x18032769C (--$_Destroy_range@V-$allocator@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_unsigned_long_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_Emplace_reallocate_std::pair_unsigned_long_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::pair<unsigned long,std::wstring>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), 40LL * *(_QWORD *)(a2 + 136));
  throw;
}
