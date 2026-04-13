/*
 * XREFs of ?do_get@?$messages@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@HHHAEBV32@@Z @ 0x180017DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062B84 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

__int64 __fastcall std::messages<unsigned short>::do_get(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  std::wstring::assign(a2, a6, 0LL, -1LL);
  return a2;
}
