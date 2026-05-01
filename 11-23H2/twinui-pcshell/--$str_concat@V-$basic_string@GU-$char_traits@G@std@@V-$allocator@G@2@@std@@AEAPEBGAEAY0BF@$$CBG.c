/*
 * XREFs of ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG0@Z @ 0x180489AEC
 * Callers:
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x18048A58C (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$str_build_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAPEBG_K@Z @ 0x180489868 (--$str_build_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::str_concat<std::wstring,unsigned short const * &,unsigned short const (&)[21],unsigned short const * &>(
        __int64 a1,
        const wchar_t **a2,
        __int64 a3,
        const wchar_t **a4)
{
  const wchar_t *v5; // rcx
  const wchar_t *v6; // rax
  int v7; // eax
  STRSAFE_PCNZWCH v9[4]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v5 = *a4;
  v6 = *a2;
  v9[0] = (STRSAFE_PCNZWCH)a1;
  v9[1] = v6;
  v9[2] = L"\\ExtraImmersiveShell";
  v9[3] = v5;
  v7 = wil::details::str_build_nothrow<std::wstring>((__int128 *)a1, v9);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6E5,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v7,
      1);
  return a1;
}
