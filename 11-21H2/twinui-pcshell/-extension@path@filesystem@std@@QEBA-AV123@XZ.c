/*
 * XREFs of ?extension@path@filesystem@std@@QEBA?AV123@XZ @ 0x180587B4C
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x1805863A4 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Parse_extension@filesystem@std@@YA?AV?$basic_string_view@GU?$char_traits@G@std@@@2@V32@@Z @ 0x1805876B4 (-_Parse_extension@filesystem@std@@YA-AV-$basic_string_view@GU-$char_traits@G@std@@@2@V32@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filesystem::path::extension(_QWORD *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v4; // rax
  const unsigned __int16 **v5; // rax
  unsigned __int64 v6; // r8
  const unsigned __int16 *v7; // rdx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  const unsigned __int16 *v10; // [rsp+30h] [rbp-18h] BYREF

  v4 = a1[2];
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  v9[0] = a1;
  v9[1] = v4;
  v5 = std::filesystem::_Parse_extension(&v10, (__int64)v9, a3);
  v6 = (unsigned __int64)v5[1];
  v7 = *v5;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  std::wstring::assign((char *)a2, v7, v6);
  return a2;
}
