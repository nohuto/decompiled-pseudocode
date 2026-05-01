/*
 * XREFs of ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18056A49C
 * Callers:
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x180569CAC (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x18056A7DC (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180107164 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int16 **__fastcall Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(
        __int16 **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int16 *v8; // rbx
  unsigned __int64 i; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int16 v13; // ax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(a2 + 2 * v6) );
  v7 = 3 * v6;
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    a1,
    0LL,
    3 * v6,
    a4);
  v8 = *a1;
  for ( i = 0LL; i < v6; ++i )
  {
    v10 = *(unsigned __int16 *)(a2 + 2 * i);
    if ( (unsigned __int16)(v10 - 33) <= 0x3Cu
      && (v11 = 0x14000000D6004FFDLL, _bittest64(&v11, (unsigned int)(v10 - 33))) )
    {
      *v8 = 37;
      v12 = StringCchPrintfW((unsigned __int16 *)v8 + 1, v7 - 1, L"%2x", (unsigned int)v10);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x45,
          (int)"pcshell\\twinui\\familyappusagemanager\\lib\\AppIdHelpers.h",
          (const char *)(unsigned int)v12,
          1);
      v8 += 3;
      v7 -= 3LL;
    }
    else
    {
      --v7;
      if ( (_DWORD)v10 == 32 )
        v13 = 43;
      else
        v13 = _o_towlower(v10);
      *v8++ = v13;
    }
  }
  *v8 = 0;
  return a1;
}
