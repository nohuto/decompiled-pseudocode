/*
 * XREFs of ?_Tokenize@AutoGameProfile@@YAJPEBG0V?$function@$$A6AJPEAGH@Z@std@@@Z @ 0x18073F1F0
 * Callers:
 *     ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18073EBEC (-GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800C2AB0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AutoGameProfile::_Tokenize(char *a1, const wchar_t *a2, __int64 *a3, const char *a4)
{
  __int64 *v6; // rcx
  __int64 v7; // rdx
  wchar_t *v9; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rdx
  int i; // esi
  __int64 v13; // rcx
  int v14; // r14d
  wchar_t *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 *v20; // rcx
  wchar_t *String; // [rsp+20h] [rbp-38h] BYREF
  wchar_t *Context; // [rsp+28h] [rbp-30h] BYREF
  wchar_t *v23; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v25; // [rsp+78h] [rbp+20h] BYREF

  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &String,
    a1,
    0xFFFFFFFFFFFFFFFFuLL,
    a4);
  if ( String )
  {
    Context = 0LL;
    v9 = wcstok_s(String, a2, &Context);
    if ( v9 )
    {
      for ( i = 0; ; ++i )
      {
        v25 = i;
        v23 = v9;
        v13 = a3[7];
        if ( !v13 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          return AutoGameProfile::_Tokenize_::_1_::dtor_0();
        }
        v14 = (*(__int64 (__fastcall **)(__int64, wchar_t **, int *))(*(_QWORD *)v13 + 16LL))(v13, &v23, &v25);
        if ( v14 < 0 )
          break;
        v15 = wcstok_s(0LL, a2, &Context);
        v9 = v15;
        if ( v15 )
        {
          if ( *v15 > 0x20u )
            continue;
          v16 = 0x100002600LL;
          if ( !_bittest64(&v16, *v15) )
            continue;
        }
        CoTaskMemFree(String);
        v18 = (__int64 *)a3[7];
        if ( v18 )
        {
          LOBYTE(v17) = v18 != a3;
          (*(void (__fastcall **)(__int64 *, __int64))(*v18 + 32))(v18, v17);
          a3[7] = 0LL;
        }
        return 0LL;
      }
      CoTaskMemFree(String);
      v20 = (__int64 *)a3[7];
      if ( v20 )
      {
        LOBYTE(v19) = v20 != a3;
        (*(void (__fastcall **)(__int64 *, __int64))(*v20 + 32))(v20, v19);
        a3[7] = 0LL;
      }
      return (unsigned int)v14;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x123,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
        (const char *)0x80070057LL);
      CoTaskMemFree(String);
      v10 = (__int64 *)a3[7];
      if ( v10 )
      {
        v11 = *v10;
        LOBYTE(v11) = v10 != a3;
        (*(void (__fastcall **)(__int64 *, __int64))(*v10 + 32))(v10, v11);
        a3[7] = 0LL;
      }
      return 2147942487LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11F,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
      (const char *)0x8007000ELL);
    v6 = (__int64 *)a3[7];
    if ( v6 )
    {
      v7 = *v6;
      LOBYTE(v7) = v6 != a3;
      (*(void (__fastcall **)(__int64 *, __int64))(*v6 + 32))(v6, v7);
      a3[7] = 0LL;
    }
    return 2147942414LL;
  }
}
