/*
 * XREFs of ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x180039290
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180039630 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0$0CJ@@StringReference@Internal@Windows@@QEAA@AEAY0CJ@$$CBG@Z @ 0x180039BB8 (--$-0$0CJ@@StringReference@Internal@Windows@@QEAA@AEAY0CJ@$$CBG@Z.c)
 *     ??$?0$0CP@@StringReference@Internal@Windows@@QEAA@AEAY0CP@$$CBG@Z @ 0x180039BF8 (--$-0$0CP@@StringReference@Internal@Windows@@QEAA@AEAY0CP@$$CBG@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180039C38 (--$GetActivationFactory@V-$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800C0B90 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsCheckStateRepositoryMocked@@YA_NPEA_NPEAE@Z @ 0x1801BE800 (-IsCheckStateRepositoryMocked@@YA_NPEA_NPEAE@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x1803DFA94 (-IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?UpdateGameConfigStoreForStoreApp@IsGameManager@@AEAAJPEBG_NPEAU_GUID@@PEAK@Z @ 0x1803E035C (-UpdateGameConfigStoreForStoreApp@IsGameManager@@AEAAJPEBG_NPEAU_GUID@@PEAK@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall IsGameManager::CheckStateRepositoryForIsGameFromAppId(
        IsGameManager *this,
        CallerIdentity *a2,
        bool *a3,
        struct _GUID *a4,
        unsigned int *a5)
{
  int PackageFullNameFromAppId; // esi
  HSTRING v8; // rdi
  const unsigned __int16 *v9; // rdx
  struct _GUID *v10; // r9
  unsigned int *v11; // r10
  bool v12; // r15
  _QWORD *v13; // rax
  int v14; // eax
  unsigned __int16 **v15; // r8
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, HSTRING, __int64 *); // rsi
  int ActivationFactory; // eax
  unsigned int v19; // ebx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64, HSTRING, __int64 *); // rsi
  unsigned int v23; // r14d
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int64, HSTRING, _QWORD); // rsi
  int v26; // eax
  bool v27; // zf
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, _QWORD, int *); // rsi
  int v34; // eax
  const WCHAR *StringRawBuffer; // rax
  __int64 v36; // rdx
  int v37; // eax
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  int v43; // ebx
  int updated; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-C1h]
  int *bIgnoreCasea; // [rsp+20h] [rbp-C1h]
  int bIgnoreCaseb; // [rsp+20h] [rbp-C1h]
  unsigned __int8 v48; // [rsp+30h] [rbp-B1h] BYREF
  bool v49[7]; // [rsp+31h] [rbp-B0h] BYREF
  int v50[2]; // [rsp+38h] [rbp-A9h] BYREF
  HSTRING v51; // [rsp+40h] [rbp-A1h] BYREF
  unsigned int v52; // [rsp+48h] [rbp-99h] BYREF
  __int64 v53; // [rsp+50h] [rbp-91h] BYREF
  __int64 v54; // [rsp+58h] [rbp-89h] BYREF
  __int64 v55; // [rsp+60h] [rbp-81h] BYREF
  int v56[2]; // [rsp+68h] [rbp-79h] BYREF
  HSTRING v57; // [rsp+70h] [rbp-71h] BYREF
  __int64 v58; // [rsp+78h] [rbp-69h] BYREF
  struct _GUID *v59[2]; // [rsp+80h] [rbp-61h] BYREF
  unsigned __int16 *v60; // [rsp+90h] [rbp-51h] BYREF
  __int64 v61; // [rsp+98h] [rbp-49h]
  __int64 v62; // [rsp+A0h] [rbp-41h]
  bool *v63; // [rsp+A8h] [rbp-39h]
  unsigned int *v64[2]; // [rsp+B0h] [rbp-31h] BYREF
  HSTRING string; // [rsp+C0h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+57h]

  v59[0] = a4;
  v63 = a3;
  v64[0] = a5;
  PackageFullNameFromAppId = 0;
  v55 = 0LL;
  v58 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v8 = 0LL;
  v57 = 0LL;
  v49[0] = 0;
  v48 = 0;
  *a3 = 0;
  if ( IsCheckStateRepositoryMocked(v49, &v48) )
  {
    v12 = v49[0];
    goto LABEL_22;
  }
  v12 = 0;
  v48 = 0;
  v13 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[41])v9);
  v14 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageStatics>>(
          *v13,
          &v58);
  PackageFullNameFromAppId = v14;
  if ( v14 < 0 )
  {
    v29 = (unsigned int)v14;
    v30 = 1288LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)v29,
      bIgnoreCase);
    goto LABEL_25;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v60);
  v61 = -1LL;
  v62 = -1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a2, (const unsigned __int16 *)&v60, v15);
  if ( PackageFullNameFromAppId < 0 )
  {
LABEL_25:
    v19 = PackageFullNameFromAppId;
    goto LABEL_26;
  }
  if ( !v60 )
  {
    PackageFullNameFromAppId = -2147467261;
    goto LABEL_57;
  }
  PackageFullNameFromAppId = Windows::Internal::String::_InitializeHelper((Windows::Internal::String *)&v57, v60);
  if ( PackageFullNameFromAppId < 0 )
  {
    v8 = v57;
LABEL_57:
    v29 = (unsigned int)PackageFullNameFromAppId;
    v30 = 1292LL;
    goto LABEL_58;
  }
  v16 = v58;
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, __int64 *))(*(_QWORD *)v58 + 416LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
  v8 = v57;
  ActivationFactory = v17(v16, 0LL, v57, &v55);
  v19 = ActivationFactory;
  PackageFullNameFromAppId = -2147023728;
  if ( ActivationFactory == -2147023728 )
    goto LABEL_25;
  if ( ActivationFactory < 0 )
  {
    v31 = 1295LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)ActivationFactory,
      bIgnoreCase);
    goto LABEL_26;
  }
  v20 = *(_QWORD *)Windows::Internal::StringReference::StringReference(
                     &string,
                     L"Windows.Internal.StateRepository.PackagePolicy");
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
  ActivationFactory = RoGetActivationFactory(v20, &GUID_93b105c2_0759_4c56_b8da_6e8f72ac464e, &v54);
  v19 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v31 = 1298LL;
    goto LABEL_34;
  }
  v21 = v54;
  v22 = *(__int64 (__fastcall **)(__int64, __int64, HSTRING, __int64 *))(*(_QWORD *)v54 + 360LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
  if ( WindowsCreateStringReference(L"AppCategory", 0xBu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = v22(v21, v55, string, &v53);
  v19 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v31 = 1300LL;
    goto LABEL_34;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v53 + 56LL))(v53, &v52);
  v19 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v31 = 1301LL;
    goto LABEL_34;
  }
  v23 = 0;
  if ( !v52 )
  {
LABEL_14:
    *(_QWORD *)v56 = 0LL;
    v24 = v54;
    v25 = *(__int64 (__fastcall **)(__int64, __int64, HSTRING, _QWORD))(*(_QWORD *)v54 + 728LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v56);
    if ( WindowsCreateStringReference(L"DVROptOut", 9u, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    bIgnoreCasea = v56;
    v26 = v25(v24, v55, string, 0LL);
    PackageFullNameFromAppId = 0;
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x531,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v26,
        (int)v56);
    if ( *(_QWORD *)v56 )
    {
      v37 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(**(_QWORD **)v56 + 272LL))(*(_QWORD *)v56, &v48);
      if ( v37 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x535,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v37,
          (int)bIgnoreCasea);
    }
    if ( v12 )
      *v63 = v48 == 0;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v56);
    v10 = v59[0];
    v11 = v64[0];
LABEL_22:
    if ( v12 )
    {
      v27 = v48 == 0;
    }
    else
    {
      v27 = v48 == 0;
      if ( !v48 )
      {
        *(_OWORD *)v64 = xmmword_180834B18;
        if ( (*(int (__fastcall **)(_QWORD, CallerIdentity *, unsigned int **, struct _GUID *))(**((_QWORD **)this + 2)
                                                                                              + 40LL))(
               *((_QWORD *)this + 2),
               a2,
               v64,
               v10) >= 0 )
        {
          LODWORD(v51) = 0;
          v50[0] = 4;
          v38 = (__int64 *)*((_QWORD *)this + 2);
          v39 = *v38;
          *(_OWORD *)v59 = *(_OWORD *)v64;
          if ( (*(int (__fastcall **)(__int64 *, struct _GUID **, __int64, HSTRING *))(v39 + 64))(v38, v59, 11LL, &v51) >= 0 )
          {
            if ( (_DWORD)v51 )
            {
              v40 = (__int64 *)*((_QWORD *)this + 2);
              v41 = *v40;
              *(_OWORD *)v59 = *(_OWORD *)v64;
              v42 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID **))(v41 + 8))(v40, v59);
              v43 = v42;
              if ( v42 < 0 )
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x559,
                  (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                  (const char *)(unsigned int)v42,
                  (int)v50);
                GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError(v43);
              }
            }
          }
        }
        goto LABEL_25;
      }
    }
    updated = IsGameManager::UpdateGameConfigStoreForStoreApp(this, (const unsigned __int16 *)a2, !v27, v10, v11);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x547,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)updated,
        bIgnoreCaseb);
    goto LABEL_25;
  }
  while ( 1 )
  {
    *(_QWORD *)v50 = 0LL;
    v51 = 0LL;
    v49[0] = 1;
    v32 = v53;
    v33 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v53 + 48LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v50);
    v34 = v33(v32, v23, v50);
    v19 = v34;
    if ( v34 < 0 )
      break;
    v34 = (*(__int64 (__fastcall **)(_QWORD, bool *))(**(_QWORD **)v50 + 176LL))(*(_QWORD *)v50, v49);
    v19 = v34;
    if ( v34 < 0 )
    {
      v36 = 1312LL;
      goto LABEL_50;
    }
    if ( !v49[0] )
    {
      v34 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)v50 + 192LL))(*(_QWORD *)v50, &v51);
      v19 = v34;
      if ( v34 < 0 )
      {
        v36 = 1316LL;
        goto LABEL_50;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(v51, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"game", -1, 1) == 2 )
      {
        v12 = 1;
        if ( v51 )
          WindowsDeleteString(v51);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v50);
        goto LABEL_14;
      }
    }
    if ( v51 )
      WindowsDeleteString(v51);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v50);
    if ( ++v23 >= v52 )
      goto LABEL_14;
  }
  v36 = 1310LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v36,
    (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)v34,
    bIgnoreCase);
  if ( v51 )
    WindowsDeleteString(v51);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v50);
LABEL_26:
  if ( v8 )
    WindowsDeleteString(v8);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v60);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v58);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
  return v19;
}
