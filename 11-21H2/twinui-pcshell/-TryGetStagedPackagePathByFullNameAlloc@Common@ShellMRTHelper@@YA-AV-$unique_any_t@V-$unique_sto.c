/*
 * XREFs of ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG_N@Z @ 0x1805EF2CC
 * Callers:
 *     ??R_lambda_b88dfa39f00c0ab7e5574d1d7e2189b5_@@QEBAJPEBGPEAPEAG@Z @ 0x1805EA690 (--R_lambda_b88dfa39f00c0ab7e5574d1d7e2189b5_@@QEBAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x1800640A0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180108390 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x180482500 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(
        void **a1,
        __int64 a2,
        unsigned __int8 a3)
{
  unsigned int v5; // esi
  unsigned int StagedPackagePathByFullName2; // eax
  const char *v7; // r9
  void **v8; // rax
  void **v9; // rdi
  unsigned int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v14 = 0;
  v5 = 2 * a3;
  StagedPackagePathByFullName2 = GetStagedPackagePathByFullName2(a2, v5, &v14, 0LL);
  if ( StagedPackagePathByFullName2 == 122 )
  {
    v8 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
                    &v13,
                    0LL,
                    (unsigned int)(v14 - 1),
                    v7);
    v9 = v8;
    if ( a1 != v8 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a1,
        *v8);
      *v9 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v13);
    if ( *a1 )
    {
      v10 = GetStagedPackagePathByFullName2(a2, v5, &v14, *a1);
      if ( v10 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          (void *)0xDD,
          (int)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
          (const char *)v10);
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xE1,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
        (const char *)0x8007000ELL);
    }
  }
  else if ( StagedPackagePathByFullName2 != 1168 && StagedPackagePathByFullName2 != 15701 )
  {
    wil::details::in1diag3::Log_Win32(
      retaddr,
      (void *)0xE8,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
      (const char *)StagedPackagePathByFullName2);
  }
  return a1;
}
