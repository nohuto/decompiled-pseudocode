/*
 * XREFs of ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x1807560A8
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@Z @ 0x180759E38 (-PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@.c)
 *     ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18075C9A8 (-TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18015423C (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180186BAC (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UITileQueryFilter@Tiles@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUITileQueryFilter@Tiles@Internal@1@@Z @ 0x180750D08 (--$ActivateInstance@UITileQueryFilter@Tiles@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRIN.c)
 *     ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z @ 0x1807543C0 (-GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@Y.c)
 *     ?IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z @ 0x180758604 (-IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarTelemetryHelper::GetSecondaryTileLaunchArguments(
        wchar_t *Str,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        unsigned __int16 **a4)
{
  void **v7; // rbx
  unsigned __int16 *v8; // rax
  unsigned __int16 **v9; // r9
  int AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier; // eax
  int v11; // ebx
  __int64 v13; // rbx
  int ActivationFactory; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rbx
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, PVOID); // rdi
  HSTRING_HEADER *v23; // rax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int64 *); // rdi
  __int64 v26; // rdx
  unsigned int v27; // r8d
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, PVOID); // rdi
  HSTRING_HEADER *v30; // rax
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, _QWORD, __int64, __int64 *); // rdi
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, _QWORD, _QWORD); // rdi
  int v36; // eax
  __int64 (__fastcall ***v37)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v38)(_QWORD, GUID *, __int64 *); // rdi
  int v39; // eax
  __int64 v40; // rbx
  __int64 (__fastcall *v41)(__int64, HSTRING *); // rdi
  int v42; // eax
  PVOID Reserved1; // r14
  unsigned __int16 *v44; // rdi
  unsigned __int16 *v45; // rsi
  const WCHAR *StringRawBuffer; // rax
  LPWSTR *v47; // rax
  LPWSTR *v48; // rbx
  int v49; // esi
  const unsigned __int16 **v50; // rdi
  int v51; // r15d
  int v52; // r14d
  const wchar_t *v53; // r14
  wchar_t *v54; // r14
  const wchar_t *v55; // r14
  wchar_t *v56; // rax
  __int64 v57; // rdx
  const WCHAR *v58; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 **v59; // [rsp+38h] [rbp-C8h]
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v63; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+68h] [rbp-98h] BYREF
  HSTRING string; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  __int64 (__fastcall ***v68)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp-80h] BYREF
  int pNumArgs; // [rsp+88h] [rbp-78h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-68h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v73; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-40h]
  __int64 v75; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v76; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-28h]
  __int64 v78; // [rsp+E0h] [rbp-20h]
  int v79; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v59 = a4;
  *(_QWORD *)a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !Str || !SecondaryTileIdentifierHelpers::IsFullyQualifiedTileIdentifier(Str, a2) )
    return 2147943569LL;
  v63 = 0LL;
  pv = 0LL;
  v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  v8 = (unsigned __int16 *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v63);
  AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier = SecondaryTileIdentifierHelpers::GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier(
                                                                 Str,
                                                                 v8,
                                                                 (unsigned __int16 **)v7,
                                                                 v9);
  v11 = AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier;
  if ( AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier);
LABEL_5:
    if ( pv )
      CoTaskMemFree(pv);
    if ( v63 )
      CoTaskMemFree(v63);
    return (unsigned int)v11;
  }
  v61 = 0LL;
  v72 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Tiles.TileStore",
    0x21u,
    0x20u);
  v13 = v72;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v61);
  ActivationFactory = RoGetActivationFactory(v13, &GUID_3a1f4546_cb54_4968_a3f8_fa93f2fe6b40, &v61);
  v11 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_12:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v61);
    goto LABEL_5;
  }
  v64 = 0LL;
  v15 = v61;
  v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v61 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v64);
  v17 = v16(v15, 0LL, &v64);
  v11 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v17);
LABEL_15:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v64);
    goto LABEL_12;
  }
  v60 = 0LL;
  v72 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Tiles.TileQueryFilter",
    0x27u,
    0x26u);
  v18 = v72;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
  v11 = Windows::Foundation::ActivateInstance<Windows::Internal::Tiles::ITileQueryFilter>(v18, &v60);
  if ( v11 < 0 )
  {
    v20 = 45LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v11);
LABEL_19:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
    goto LABEL_15;
  }
  v21 = v60;
  v22 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v60 + 88LL);
  v58 = (const WCHAR *)v63;
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v58, v19);
  v11 = v22(v21, v23[1].Reserved.Reserved1);
  if ( v11 < 0 )
  {
    v20 = 47LL;
    goto LABEL_18;
  }
  v65 = 0LL;
  v24 = v60;
  v25 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v60 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
  v11 = v25(v24, &v65);
  if ( v11 < 0 )
  {
    v26 = 50LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v11);
LABEL_25:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
    goto LABEL_19;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 104LL))(v65, 1LL);
  if ( v11 < 0 )
  {
    v26 = 52LL;
    goto LABEL_24;
  }
  v28 = v60;
  v29 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v60 + 104LL);
  v58 = (const WCHAR *)pv;
  v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v58, v27);
  v11 = v29(v28, v30[1].Reserved.Reserved1);
  if ( v11 < 0 )
  {
    v26 = 53LL;
    goto LABEL_24;
  }
  v67 = 0LL;
  v31 = v64;
  v32 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v64 + 56LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v67);
  v11 = v32(v31, 0LL, v60, &v67);
  if ( v11 < 0 )
  {
    v33 = 56LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v11);
LABEL_33:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v67);
    goto LABEL_25;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v67 + 56LL))(v67, &v79);
  if ( v11 < 0 )
  {
    v33 = 59LL;
    goto LABEL_32;
  }
  if ( v79 != 1 )
  {
    v11 = -2147024883;
    v33 = 60LL;
    goto LABEL_32;
  }
  v68 = 0LL;
  v34 = v67;
  v35 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v67 + 48LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
  v36 = v35(v34, 0LL, &v68);
  v11 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v36);
LABEL_40:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
    goto LABEL_33;
  }
  v70 = 0LL;
  v37 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v68;
  v38 = **v68;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
  v39 = v38(v37, &GUID_f10ff47a_c551_404d_9a7f_379d7d40b973, &v70);
  v11 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v39);
LABEL_43:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
    goto LABEL_40;
  }
  v40 = v70;
  v41 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v70 + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v42 = v41(v40, &string);
  v11 = v42;
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v42);
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_43;
  }
  Reserved1 = 0LL;
  memset(&hstringHeader, 0, sizeof(hstringHeader));
  v44 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v45 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  pNumArgs = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v47 = CommandLineToArgvW(StringRawBuffer, &pNumArgs);
  v48 = v47;
  if ( !v47 || pNumArgs <= 0 )
    goto LABEL_64;
  v49 = 1;
  v50 = (const unsigned __int16 **)(v47 + 2);
  do
  {
    v51 = v49;
    if ( !wcscmp(*(v50 - 2), L"-url") )
    {
      if ( v49 + 1 < pNumArgs )
      {
        v52 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)&hstringHeader,
                *v50,
                0xFFFFFFFFFFFFFFFFuLL);
        if ( v52 < 0 )
        {
          v57 = 92LL;
          goto LABEL_74;
        }
        v53 = *v50;
        if ( wcslen(*v50) > 1 )
        {
          v54 = wcsstr(v53, L"msSrc=");
          if ( v54 )
          {
            v55 = &v54[wcslen(L"msSrc=")];
            v56 = wcsstr(v55, L"&");
            if ( v56 )
            {
              v52 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                      (__int64)&v73,
                      v55,
                      v56 - v55);
              if ( v52 < 0 )
              {
                v57 = 108LL;
LABEL_74:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v57,
                  (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
                  (const char *)(unsigned int)v52);
                LocalFree(v48);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v76);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v73);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
                WindowsDeleteString(string);
                string = 0LL;
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v67);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v64);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v61);
                if ( pv )
                  CoTaskMemFree(pv);
                if ( v63 )
                  CoTaskMemFree(v63);
                return (unsigned int)v52;
              }
            }
            else
            {
              v52 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                      (__int64)&v73,
                      v55,
                      0xFFFFFFFFFFFFFFFFuLL);
              if ( v52 < 0 )
              {
                v57 = 112LL;
                goto LABEL_74;
              }
            }
          }
        }
      }
    }
    else if ( !wcscmp(*(v50 - 2), L"-tbPinSource") && v49 < pNumArgs )
    {
      v52 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)&v76,
              *(v50 - 1),
              0xFFFFFFFFFFFFFFFFuLL);
      if ( v52 < 0 )
      {
        v57 = 124LL;
        goto LABEL_74;
      }
    }
    ++v49;
    ++v50;
  }
  while ( v51 < pNumArgs );
  Reserved1 = hstringHeader.Reserved.Reserved1;
  v44 = v73;
  v45 = v76;
  if ( hstringHeader.Reserved.Reserved1 )
    goto LABEL_80;
LABEL_64:
  if ( v44 || v45 )
  {
LABEL_80:
    memset(&hstringHeader, 0, sizeof(hstringHeader));
    *(_QWORD *)a2 = Reserved1;
    v73 = 0LL;
    v75 = 0LL;
    v74 = 0LL;
    *a3 = v44;
    v76 = 0LL;
    v78 = 0LL;
    v77 = 0LL;
    *v59 = v45;
    if ( v48 )
      LocalFree(v48);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v76);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v73);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v67);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v64);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v61);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v63 )
      CoTaskMemFree(v63);
    return 0LL;
  }
  else
  {
    if ( v48 )
      LocalFree(v48);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v76);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v73);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v70);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v68);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v67);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v65);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v64);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v61);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v63 )
      CoTaskMemFree(v63);
    return 2147943569LL;
  }
}
