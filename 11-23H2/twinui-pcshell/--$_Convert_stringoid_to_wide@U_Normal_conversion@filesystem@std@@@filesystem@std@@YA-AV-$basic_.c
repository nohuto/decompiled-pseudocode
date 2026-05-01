/*
 * XREFs of ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x1803D2D04
 * Callers:
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x1806AC808 (_anonymous_namespace_--CreateTemporaryFile.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 */

_QWORD *__fastcall std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(
        _QWORD *a1,
        void **a2)
{
  std::wstring::wstring(a1, a2);
  return a1;
}
