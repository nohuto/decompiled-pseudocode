/*
 * XREFs of ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x18001E750
 * Callers:
 *     ?ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090A38 (-ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 * Callees:
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@D@std@@@std@@QEBAX_K@Z @ 0x18001DB50 (-_Check_offset@-$_String_val@U-$_Simple_types@D@std@@@std@@QEBAX_K@Z.c)
 */

_QWORD *__fastcall std::string::erase(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdx

  std::_String_val<std::_Simple_types<char>>::_Check_offset((__int64)a1, 0LL);
  return std::string::_Erase_noexcept(a1, v5, a3);
}
