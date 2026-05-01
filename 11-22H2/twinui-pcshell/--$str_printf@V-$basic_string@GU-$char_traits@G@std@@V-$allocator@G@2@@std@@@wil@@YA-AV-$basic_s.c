/*
 * XREFs of ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x180489BC4
 * Callers:
 *     ??$GetForWindowsEdition@$0?HPPPPPPO@@ShellProgramConfiguration@@SA?AU0@PEBG@Z @ 0x1801FB560 (--$GetForWindowsEdition@$0-HPPPPPPO@@ShellProgramConfiguration@@SA-AU0@PEBG@Z.c)
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x180627874 (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x180628AF8 (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x180489C68 (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *wil::str_printf<std::wstring>(_QWORD *a1, __int64 a2, ...)
{
  int v3; // eax
  va_list v5; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  va_copy(v5, va);
  v3 = wil::details::str_vprintf_nothrow<std::wstring>(a1, a2, &v5);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x71E,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v3,
      1);
  return a1;
}
