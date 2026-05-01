/*
 * XREFs of ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x18060518C
 * Callers:
 *     ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x180602444 (-GenerateCandidateListForTelemetry@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180421750 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstringbuf::str(__int64 a1, __int64 a2)
{
  const void *v4; // rbx
  unsigned __int64 v5; // rax

  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 && std::wstreambuf::pptr(a1) )
  {
    v4 = (const void *)std::wstreambuf::pbase(a1);
    v5 = std::wstreambuf::pptr(a1);
    if ( v5 < *(_QWORD *)(a1 + 104) )
      v5 = *(_QWORD *)(a1 + 104);
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::wstreambuf::gptr(a1) )
  {
    v4 = (const void *)std::wstreambuf::eback(a1);
    v5 = std::wstreambuf::egptr(a1);
LABEL_9:
    std::wstring::assign((char *)a2, v4, (__int64)(v5 - (_QWORD)v4) >> 1);
  }
  return a2;
}
