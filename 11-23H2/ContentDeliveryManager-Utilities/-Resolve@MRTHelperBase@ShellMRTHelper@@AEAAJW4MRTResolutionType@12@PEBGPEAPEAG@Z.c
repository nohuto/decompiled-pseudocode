/*
 * XREFs of ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800C405C
 * Callers:
 *     ?PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXPEBG@Z @ 0x1800C3F58 (-PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@W.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042C64 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180042F10 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180045458 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180079394 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x1800C3B34 (-InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ.c)
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1800C44E0 (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRIN.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800C4684 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ShellMRTHelper::MRTHelperBase::Resolve(__int64 a1, __int64 a2, unsigned int a3, LPWSTR *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  LPWSTR v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, const WCHAR *, LPWSTR *); // rbx
  int v19; // edi
  unsigned __int16 **v20; // r8
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64, _QWORD, __int64, LPWSTR *); // rdi
  HRESULT v25; // eax
  LPWSTR v26; // rax
  UINT32 length[2]; // [rsp+30h] [rbp-49h] BYREF
  LPWSTR ppwsz; // [rsp+40h] [rbp-39h] BYREF
  __int64 v30; // [rsp+48h] [rbp-31h]
  __int64 v31; // [rsp+50h] [rbp-29h]
  PWSTR ppszPathOut; // [rsp+58h] [rbp-21h] BYREF
  __int64 v33; // [rsp+60h] [rbp-19h]
  __int64 v34; // [rsp+68h] [rbp-11h]
  HSTRING_HEADER v35; // [rsp+70h] [rbp-9h] BYREF
  HSTRING string; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *(_QWORD *)length = L"ms-resource:ActionCenterGroupName";
  *a4 = 0LL;
  ppwsz = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, (const WCHAR **)length, a3);
  v9 = ShellMRTHelper::MRTHelperBase::InitializeMRTObjects((ShellMRTHelper::MRTHelperBase *)a1, v6, v7, v8);
  v10 = v9;
  if ( *(_BYTE *)(a1 + 46) && ((unsigned int)(v9 + 2147024894) <= 1 || v9 == -2147023728) )
  {
    ppszPathOut = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(&ppszPathOut);
    v33 = -1LL;
    v34 = -1LL;
    v11 = PathAllocCombine(*(PCWSTR *)(a1 + 72), L"ms-resource:ActionCenterGroupName", 0, &ppszPathOut);
    v10 = v11;
    if ( v11 >= 0 )
    {
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)&ppwsz,
              (char *)ppszPathOut,
              0xFFFFFFFFFFFFFFFFuLL);
      v10 = v11;
      if ( v11 >= 0 )
      {
        v13 = ppwsz;
        ppwsz = 0LL;
        v31 = 0LL;
        v30 = 0LL;
        *a4 = v13;
        v10 = 0;
        goto LABEL_10;
      }
      v12 = 314LL;
    }
    else
    {
      v12 = 313LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.h",
      (const char *)(unsigned int)v11);
LABEL_10:
    Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(&ppszPathOut);
    goto LABEL_31;
  }
  if ( v9 >= 0 )
  {
    length[0] = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, length);
    if ( length[0] >= 0xC && CompareStringOrdinal(StringRawBuffer, 12, L"ms-resource:", 12, 1) == 2 )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, const WCHAR *, LPWSTR *))(*(_QWORD *)v17 + 48LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&ppwsz);
      v30 = -1LL;
      v31 = -1LL;
      v19 = v18(v17, *(_QWORD *)(a1 + 16), L"ms-resource:ActionCenterGroupName", &ppwsz);
      if ( v19 >= 0 )
        goto LABEL_30;
      *(_QWORD *)length = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)length,
        0LL);
      v21 = ShellMRTHelper::Common::TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(
              (ShellMRTHelper::Common *)string,
              (HSTRING)length,
              v20);
      if ( v21 >= 0 )
      {
        v22 = *(_QWORD *)length;
        if ( *(_QWORD *)length && **(_WORD **)length )
        {
          v23 = *(_QWORD *)(a1 + 8);
          v24 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, LPWSTR *))(*(_QWORD *)v23 + 48LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&ppwsz);
          v30 = -1LL;
          v31 = -1LL;
          v19 = v24(v23, *(_QWORD *)(a1 + 16), v22, &ppwsz);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x184,
          (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.h",
          (const char *)(unsigned int)v21);
      }
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x18B,
          (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.h",
          (const char *)(unsigned int)v19);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)length);
      if ( v19 >= 0 )
        goto LABEL_30;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&ppwsz);
    v30 = -1LL;
    v31 = -1LL;
    v25 = SHStrDupW(L"ms-resource:ActionCenterGroupName", &ppwsz);
    v10 = v25;
    if ( v25 >= 0 )
    {
LABEL_30:
      v26 = ppwsz;
      ppwsz = 0LL;
      v31 = 0LL;
      v30 = 0LL;
      *a4 = v26;
      v10 = 0;
      goto LABEL_31;
    }
    v14 = (unsigned int)v25;
    v15 = 443LL;
    goto LABEL_16;
  }
  if ( v9 != -2147024891 && (unsigned int)(v9 + 2147024894) > 1 && v9 != -2147023728 )
  {
    v14 = (unsigned int)v9;
    v15 = 320LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.h",
      (const char *)v14);
  }
LABEL_31:
  string = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&ppwsz);
  return v10;
}
