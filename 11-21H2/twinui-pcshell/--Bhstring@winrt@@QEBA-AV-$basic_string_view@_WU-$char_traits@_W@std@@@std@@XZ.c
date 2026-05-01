/*
 * XREFs of ??Bhstring@winrt@@QEBA?AV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@XZ @ 0x180421B9C
 * Callers:
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@_W@1@@Z @ 0x18042198C (--$-0Uhstring@winrt@@$0A@@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@A.c)
 *     ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x180602444 (-GenerateCandidateListForTelemetry@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::hstring::operator std::wstring_view(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( *a1 )
  {
    *a2 = *(_QWORD *)(v2 + 16);
    a2[1] = *(unsigned int *)(v2 + 4);
  }
  else
  {
    a2[1] = 0LL;
    *a2 = &LocaleName;
  }
  return a2;
}
