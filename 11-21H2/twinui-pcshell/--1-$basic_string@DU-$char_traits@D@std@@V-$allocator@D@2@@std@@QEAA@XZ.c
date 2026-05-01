/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800899B0
 * Callers:
 *     _cereal::JSONOutputArchive::writeName_::_1_::dtor$0 @ 0x180218B50 (_cereal--JSONOutputArchive--writeName_--_1_--dtor$0.c)
 *     _cereal::JSONOutputArchive::writeName_::_1_::dtor$1 @ 0x180218B70 (_cereal--JSONOutputArchive--writeName_--_1_--dtor$1.c)
 *     _cereal::JSONOutputArchive::writeName_::_1_::dtor$2 @ 0x180218B90 (_cereal--JSONOutputArchive--writeName_--_1_--dtor$2.c)
 *     _std::basic_stringbuf_char_std::char_traits_char__std::allocator_char___::str_::_1_::dtor$0 @ 0x180218C02 (_std--basic_stringbuf_char_std--char_traits_char__std--allocator_char___--str_--_1_--dtor$0.c)
 *     _cereal::JSONOutputArchive::saveValue_::_1_::dtor$0 @ 0x18021D7E1 (_cereal--JSONOutputArchive--saveValue_--_1_--dtor$0.c)
 *     _cereal::util::wstring_to_string_::_1_::dtor$0 @ 0x18021D7F3 (_cereal--util--wstring_to_string_--_1_--dtor$0.c)
 *     _tip::details::test_common_data_1_::update_from_test_info_::_1_::dtor$0 @ 0x18022013F (_tip--details--test_common_data_1_--update_from_test_info_--_1_--dtor$0.c)
 *     _wil::load_cereal::JSONInputArchive__::_1_::dtor$0 @ 0x180349D52 (_wil--load_cereal--JSONInputArchive__--_1_--dtor$0.c)
 *     _wil::load_cereal::JSONInputArchive__::_1_::dtor$1 @ 0x180349D5E (_wil--load_cereal--JSONInputArchive__--_1_--dtor$1.c)
 *     _wil::load_cereal::JSONInputArchive__::_1_::dtor$3 @ 0x180349D76 (_wil--load_cereal--JSONInputArchive__--_1_--dtor$3.c)
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$0 @ 0x18034BB2F (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$0.c)
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$1 @ 0x18034BB3B (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$1.c)
 *     _wil::save_cereal::JSONOutputArchive__::_1_::dtor$3 @ 0x18034BB53 (_wil--save_cereal--JSONOutputArchive__--_1_--dtor$3.c)
 *     _cereal::JSONInputArchive::Iterator::search_::_1_::dtor$0 @ 0x1803519A3 (_cereal--JSONInputArchive--Iterator--search_--_1_--dtor$0.c)
 *     _cereal::JSONInputArchive::Iterator::search_::_1_::dtor$1 @ 0x1803519AF (_cereal--JSONInputArchive--Iterator--search_--_1_--dtor$1.c)
 *     _std::filesystem::_Convert_wide_to_narrow_replace_chars_std::char_traits_char__std::allocator_char____::_1_::dtor$0 @ 0x18057DD17 (_std--filesystem--_Convert_wide_to_narrow_replace_chars_std--char_traits_char__std--allocator_ch.c)
 *     _std::system_error::system_error_::_1_::dtor$0 @ 0x18057EC88 (_std--system_error--system_error_--_1_--dtor$0.c)
 *     _std::_System_error::_Makestr_::_1_::dtor$0 @ 0x180581BE4 (_std--_System_error--_Makestr_--_1_--dtor$0.c)
 *     _std::_System_error::_Makestr_::_1_::dtor$1 @ 0x180581BF0 (_std--_System_error--_Makestr_--_1_--dtor$1.c)
 *     _std::filesystem::filesystem_error::_Pretty_message_::_1_::dtor$0 @ 0x180581E88 (_std--filesystem--filesystem_error--_Pretty_message_--_1_--dtor$0.c)
 *     _std::filesystem::filesystem_error::_Pretty_message_::_1_::dtor$1 @ 0x180581EAF (_std--filesystem--filesystem_error--_Pretty_message_--_1_--dtor$1.c)
 *     _std::filesystem::filesystem_error::_Pretty_message_::_1_::dtor$2 @ 0x180581EBB (_std--filesystem--filesystem_error--_Pretty_message_--_1_--dtor$2.c)
 *     _std::filesystem::exists_::_1_::dtor$8 @ 0x18058257A (_std--filesystem--exists_--_1_--dtor$8.c)
 *     _std::filesystem::_Throw_fs_error_::_1_::dtor$0 @ 0x1805878FD (_std--filesystem--_Throw_fs_error_--_1_--dtor$0.c)
 *     _std::filesystem::_Throw_fs_error_::_1_::dtor$0_0 @ 0x18058799A (_std--filesystem--_Throw_fs_error_--_1_--dtor$0_0.c)
 *     _std::basic_filebuf_unsigned_short_std::char_traits_unsigned_short___::uflow_::_1_::dtor$0 @ 0x1805DEDF4 (_std--basic_filebuf_unsigned_short_std--char_traits_unsigned_short___--uflow_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::string::~string(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 0x10 )
  {
    v3 = *(void **)a1;
    v4 = v1 + 1;
    v5 = v4;
    v6 = v3;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v4 = v5;
      v3 = v6;
    }
    operator delete(v3, v4);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
}
