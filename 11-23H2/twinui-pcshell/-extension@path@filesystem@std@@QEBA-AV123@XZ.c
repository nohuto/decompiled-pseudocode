/*
 * XREFs of ?extension@path@filesystem@std@@QEBA?AV123@XZ @ 0x1806457FC
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180644120 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Parse_extension@filesystem@std@@YA?AV?$basic_string_view@GU?$char_traits@G@std@@@2@V32@@Z @ 0x1802E8AB6 (-_Parse_extension@filesystem@std@@YA-AV-$basic_string_view@GU-$char_traits@G@std@@@2@V32@@Z.c)
 */

_QWORD *__fastcall std::filesystem::path::extension(void **a1, _QWORD *a2, const unsigned __int16 *a3)
{
  const unsigned __int16 *v4; // rax
  const unsigned __int16 **v5; // rax
  const unsigned __int16 *v6; // rcx
  const unsigned __int16 *v7; // rax
  const unsigned __int16 *v9; // [rsp+30h] [rbp-28h] BYREF
  const unsigned __int16 *v10; // [rsp+38h] [rbp-20h]
  const unsigned __int16 *v11; // [rsp+40h] [rbp-18h] BYREF

  v4 = (const unsigned __int16 *)a1;
  if ( (unsigned __int64)a1[3] >= 8 )
    v4 = (const unsigned __int16 *)*a1;
  v9 = v4;
  v10 = (const unsigned __int16 *)a1[2];
  v5 = std::filesystem::_Parse_extension(&v11, (__int64)&v9, a3);
  v6 = *v5;
  v7 = v5[1];
  v9 = v6;
  v10 = v7;
  std::wstring::wstring(a2, (void **)&v9);
  return a2;
}
