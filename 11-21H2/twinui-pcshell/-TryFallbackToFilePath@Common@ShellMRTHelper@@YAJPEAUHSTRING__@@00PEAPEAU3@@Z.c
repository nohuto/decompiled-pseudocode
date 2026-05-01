/*
 * XREFs of ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1805EEF34
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1805EC294 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000A954 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180175474 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCount@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180444F50 (-_EnsureCount@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??R_lambda_b88dfa39f00c0ab7e5574d1d7e2189b5_@@QEBAJPEBGPEAPEAG@Z @ 0x1805EA690 (--R_lambda_b88dfa39f00c0ab7e5574d1d7e2189b5_@@QEBAJPEBGPEAPEAG@Z.c)
 *     ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1805ED8BC (-HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall ShellMRTHelper::Common::TryFallbackToFilePath(
        ShellMRTHelper::Common *this,
        HSTRING a2,
        ShellMRTHelper::Common *a3,
        HSTRING *a4)
{
  const WCHAR *StringRawBuffer; // rbx
  HSTRING v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, ShellMRTHelper::Common *, __int64 *); // rsi
  __int64 *v14; // rdi
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING *); // rdi
  int v18; // eax
  __int64 v19; // rdx
  PCWSTR v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 i; // rcx
  int v23; // eax
  __int64 v24; // rdx
  HSTRING string; // [rsp+20h] [rbp-49h] BYREF
  PCNZWCH sourceString; // [rsp+28h] [rbp-41h] BYREF
  UINT32 v28[2]; // [rsp+30h] [rbp-39h]
  __int64 v29; // [rsp+38h] [rbp-31h]
  __int64 v30; // [rsp+40h] [rbp-29h] BYREF
  __int64 v31; // [rsp+48h] [rbp-21h] BYREF
  UINT32 length; // [rsp+50h] [rbp-19h] BYREF
  __int64 v33; // [rsp+58h] [rbp-11h] BYREF
  HSTRING v34[2]; // [rsp+60h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+7h] BYREF
  __int64 v36; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a4 = 0LL;
  if ( a3 )
  {
    sourceString = 0LL;
    *(_QWORD *)v28 = 0LL;
    v29 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a3, 0LL);
    if ( PathIsRelativeW(StringRawBuffer) && *StringRawBuffer != 64 )
    {
      v34[0] = 0LL;
      v34[1] = a2;
      if ( PathIsURLW(StringRawBuffer) )
      {
        if ( ShellMRTHelper::Common::HasMsAppXUriScheme(a3, v8) )
        {
          v31 = 0LL;
          v9 = *Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v31, &v33);
          v36 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"Windows.Foundation.Uri",
            0x17u,
            0x16u);
          v10 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
                  v36,
                  v9);
          v11 = v10;
          if ( v10 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x132,
              (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v10);
LABEL_17:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
LABEL_32:
            Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
            return v11;
          }
          v12 = v31;
          v30 = 0LL;
          v13 = *(__int64 (__fastcall **)(__int64, ShellMRTHelper::Common *, __int64 *))(*(_QWORD *)v31 + 48LL);
          v14 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v30, &v33);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
          v15 = v13(v12, a3, v14);
          v11 = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x135,
              (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v15);
LABEL_16:
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
            goto LABEL_17;
          }
          v16 = v30;
          v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 104LL);
          WindowsDeleteString(0LL);
          string = 0LL;
          v18 = v17(v16, &string);
          v11 = v18;
          if ( v18 < 0 )
          {
            v19 = 313LL;
LABEL_15:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v19,
              (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
              (const char *)(unsigned int)v18);
            WindowsDeleteString(string);
            string = 0LL;
            goto LABEL_16;
          }
          v20 = WindowsGetStringRawBuffer(string, &length);
          if ( length > 1 )
          {
            Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
            *(_QWORD *)v28 = -1LL;
            v29 = -1LL;
            v18 = _lambda_b88dfa39f00c0ab7e5574d1d7e2189b5_::operator()(v34, v20 + 1, (PWSTR *)&sourceString);
            v11 = v18;
            if ( v18 < 0 )
            {
              v19 = 320LL;
              goto LABEL_15;
            }
          }
          WindowsDeleteString(string);
          string = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
        }
      }
      else
      {
        Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
        *(_QWORD *)v28 = -1LL;
        v29 = -1LL;
        v23 = _lambda_b88dfa39f00c0ab7e5574d1d7e2189b5_::operator()(v34, StringRawBuffer, (PWSTR *)&sourceString);
        v11 = v23;
        if ( v23 < 0 )
        {
          v24 = 327LL;
          goto LABEL_31;
        }
      }
    }
    if ( sourceString && *sourceString )
    {
      Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v21 = *(_QWORD *)v28;
      for ( i = 0LL; i < v21; ++i )
      {
        if ( sourceString[i] == 47 )
        {
          sourceString[i] = 92;
          v21 = *(_QWORD *)v28;
        }
      }
      Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v23 = WindowsCreateString(sourceString, v28[0], a4);
      v11 = v23;
      if ( v23 < 0 )
      {
        v24 = 338LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
          (const char *)(unsigned int)v23);
        goto LABEL_32;
      }
    }
    else
    {
      v23 = WindowsDuplicateString((HSTRING)a3, a4);
      v11 = v23;
      if ( v23 < 0 )
      {
        v24 = 343LL;
        goto LABEL_31;
      }
    }
    Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  }
  return 0LL;
}
