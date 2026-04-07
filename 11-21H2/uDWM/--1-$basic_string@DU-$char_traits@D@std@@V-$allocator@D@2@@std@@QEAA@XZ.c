/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800F3350
 * Callers:
 *     _std::basic_stringbuf_char_std::char_traits_char__std::allocator_char___::str_::_1_::dtor$0 @ 0x180065947 (_std--basic_stringbuf_char_std--char_traits_char__std--allocator_char___--str_--_1_--dtor$0.c)
 *     _cereal::JSONOutputArchive::writeName_::_1_::dtor$0 @ 0x180065B1A (_cereal--JSONOutputArchive--writeName_--_1_--dtor$0.c)
 *     _cereal::JSONOutputArchive::writeName_::_1_::dtor$1 @ 0x180065B2C (_cereal--JSONOutputArchive--writeName_--_1_--dtor$1.c)
 *     _cereal::JSONOutputArchive::writeName_::_1_::dtor$2 @ 0x180065B3E (_cereal--JSONOutputArchive--writeName_--_1_--dtor$2.c)
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::process_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&__::_1_::dtor$0 @ 0x1800F2A18 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--process_std--basic_string_unsigned_short_st.c)
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$0 @ 0x1800F2F96 (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$0.c)
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$1 @ 0x1800F2FA2 (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$1.c)
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$3 @ 0x1800F2FBA (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$3.c)
 *     _cereal::JSONInputArchive::Iterator::search_::_1_::dtor$0 @ 0x1800F67D1 (_cereal--JSONInputArchive--Iterator--search_--_1_--dtor$0.c)
 *     _cereal::JSONInputArchive::Iterator::search_::_1_::dtor$1 @ 0x1800F67DD (_cereal--JSONInputArchive--Iterator--search_--_1_--dtor$1.c)
 *     _cereal::util::wstring_to_string_::_1_::dtor$0 @ 0x1800F7026 (_cereal--util--wstring_to_string_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::string::~string(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 0x10 )
    result = std::_Deallocate<16,0>(*(void **)a1, v1 + 1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
