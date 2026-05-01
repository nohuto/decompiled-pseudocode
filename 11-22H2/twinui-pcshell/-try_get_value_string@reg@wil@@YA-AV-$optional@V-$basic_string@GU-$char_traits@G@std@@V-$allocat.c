/*
 * XREFs of ?try_get_value_string@reg@wil@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180275E14
 * Callers:
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1802746FC (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 * Callees:
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1801F0F3C (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 *     ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBG0K@Z @ 0x18026071C (--$try_get_value@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$reg_view_t@Uer.c)
 */

__int64 __fastcall wil::reg::try_get_value_string(__int64 a1)
{
  int value_flags_from_value_type; // eax
  __int64 v3; // r8
  const WCHAR *v4; // r9
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = -2147483647LL;
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)1);
  wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::try_get_value<std::wstring>(
    (HKEY *)&v6,
    a1,
    v3,
    v4,
    value_flags_from_value_type);
  return a1;
}
