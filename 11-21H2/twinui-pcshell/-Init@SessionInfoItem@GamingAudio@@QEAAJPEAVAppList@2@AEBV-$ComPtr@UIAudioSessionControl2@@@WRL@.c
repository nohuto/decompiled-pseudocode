/*
 * XREFs of ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18033FCA8
 * Callers:
 *     ?GetSessionInfo@AppList@GamingAudio@@AEAAXV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18033F8B0 (-GetSessionInfo@AppList@GamingAudio@@AEAAXV-$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18017C488 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x1802E77C4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ??$?0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z @ 0x18033DD44 (--$-0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18033DFA4 (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ??$AsWeak@VAppList@GamingAudio@@@WRL@Microsoft@@YAJPEAVAppList@GamingAudio@@PEAVWeakRef@01@@Z @ 0x18033E214 (--$AsWeak@VAppList@GamingAudio@@@WRL@Microsoft@@YAJPEAVAppList@GamingAudio@@PEAVWeakRef@01@@Z.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x18033E490 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ??4?$ComPtr@UIAudioSessionControl@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18033EB00 (--4-$ComPtr@UIAudioSessionControl@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall GamingAudio::SessionInfoItem::Init(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 (__fastcall ****a3)(__int64, GUID *, __int64 *))
{
  __int64 *v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  DWORD *v9; // r12
  int v10; // eax
  int v11; // eax
  HRESULT v12; // eax
  __int64 (__fastcall ***v13)(__int64, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v14)(__int64, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  BOOL v18; // eax
  _QWORD *v19; // rsi
  __int64 (__fastcall ***v20)(__int64, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v21)(__int64, GUID *, __int64 *); // rbx
  int v22; // eax
  int v23; // eax
  char *v24; // rdi
  BOOL v25; // eax
  LPARAM v26; // rbx
  int (__fastcall *v27)(LPARAM, _QWORD, PVOID, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rsi
  unsigned int v28; // r8d
  HSTRING_HEADER *v29; // rax
  int (__fastcall ***v30)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v31)(_QWORD, GUID *, __int64 *); // rsi
  HSTRING v32; // r8
  HSTRING *v33; // r12
  __int64 v34; // rbx
  void (__fastcall *v35)(__int64, __int64); // rsi
  _WORD *v36; // rsi
  HSTRING v37; // r8
  Microsoft::WRL::Wrappers::Details **v38; // rbx
  HSTRING v39; // r8
  HRESULT v40; // eax
  HSTRING v41; // r8
  unsigned __int64 v42; // rax
  int v43; // eax
  __int64 (__fastcall ***v44)(__int64, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v45)(__int64, GUID *, __int64 *); // rbx
  int v46; // eax
  __int64 v47; // rdx
  DWORD dwSize[2]; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 packageFullNameLength; // [rsp+38h] [rbp-C8h] BYREF
  int v51; // [rsp+3Ch] [rbp-C4h] BYREF
  LPARAM lParam[2]; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A8h] BYREF
  int (__fastcall ***v55)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h] BYREF
  void *v57; // [rsp+70h] [rbp-90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h]
  wchar_t v60[264]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  lParam[0] = a1 + 760;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)lParam);
  v7 = Microsoft::WRL::AsWeak<GamingAudio::AppList>(a2, v6);
  if ( v7 >= 0 )
  {
    *(_QWORD *)(a1 + 768) = a2;
    v9 = (DWORD *)(a1 + 48);
    v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int64))(**a3)[14])(
           *a3,
           a1 + 48);
    if ( v7 < 0 )
    {
      v8 = 287LL;
      goto LABEL_3;
    }
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int64))(**a3)[3])(
            *a3,
            a1 + 84);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x120,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v10);
    *(_DWORD *)(a1 + 72) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(**a3)[15])(*a3) == 0;
    pv = 0LL;
    v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), LPVOID *))(**a3)[4])(*a3, &pv);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x125,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v11);
    if ( pv )
    {
      v12 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>((HSTRING *)(a1 + 56), (const wchar_t **)&pv);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x129,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
          (const char *)(unsigned int)v12);
      CoTaskMemFree(pv);
    }
    v56 = 0LL;
    v13 = *a3;
    v14 = ***a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
    v15 = v14((__int64)v13, &GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f, &v56);
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 303LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v15);
LABEL_69:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
      return (unsigned int)v7;
    }
    v51 = 0;
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v56 + 152LL))(v56, &v51);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x132,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v17);
    v18 = *(_DWORD *)(a1 + 84) != 2 && (v51 & 0x200000) == 0;
    *(_DWORD *)(a1 + 80) = v18;
    v19 = (_QWORD *)(a1 + 744);
    v20 = *a3;
    v21 = ***a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 744));
    v15 = v21((__int64)v20, &GUID_87ce5498_68d6_44e5_9215_6da47ef883d8, (__int64 *)(a1 + 744));
    v7 = v15;
    if ( v15 < 0 )
    {
      v16 = 311LL;
      goto LABEL_24;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 32LL))(*v19, a1 + 64);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x138,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v22);
    v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 48LL))(*v19, a1 + 68);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x139,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v23);
    if ( *v9 )
    {
      v24 = (char *)OpenProcess(0x1000u, 0, *v9);
      v57 = v24;
      if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v25 = IsImmersiveProcess(v24);
        *(_DWORD *)(a1 + 76) = v25;
        if ( v25 )
        {
          packageFullNameLength = 65;
          if ( !GetPackageFullName(v24, &packageFullNameLength, (PWSTR)(a1 + 88)) )
          {
            lParam[0] = 0LL;
            v55 = 0LL;
            v54 = 0LL;
            v59 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.Management.Deployment.PackageManager",
              0x2Du,
              0x2Cu);
            if ( (int)Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
                        v59,
                        lParam) >= 0 )
            {
              v26 = lParam[0];
              v27 = *(int (__fastcall **)(LPARAM, _QWORD, PVOID, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)lParam[0] + 168LL);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v55);
              v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (PCWSTR)(a1 + 88), v28);
              if ( v27(v26, 0LL, v29[1].Reserved.Reserved1, (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v55) >= 0 )
              {
                v30 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v55;
                v31 = **v55;
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
                if ( v31(v30, &GUID_a6612fb6_7688_4ace_95fb_359538e7aa01, &v54) >= 0 )
                {
                  v33 = (HSTRING *)(a1 + 56);
                  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                        *(Microsoft::WRL::Wrappers::Details **)(a1 + 56),
                                        0LL,
                                        v32) )
                  {
                    v34 = v54;
                    v35 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 48LL);
                    WindowsDeleteString(*v33);
                    *v33 = 0LL;
                    v35(v34, a1 + 56);
                  }
                }
              }
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v55);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(lParam);
          }
          v9 = (DWORD *)(a1 + 48);
        }
        dwSize[0] = 261;
        v36 = (_WORD *)(a1 + 218);
        if ( !QueryFullProcessImageNameW(v24, 0, (LPWSTR)(a1 + 218), dwSize) )
        {
          *v36 = 0;
          *(_DWORD *)(a1 + 80) = 0;
        }
        v38 = (Microsoft::WRL::Wrappers::Details **)(a1 + 56);
        if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                              *(Microsoft::WRL::Wrappers::Details **)(a1 + 56),
                              0LL,
                              v37) )
        {
          *(_OWORD *)lParam = 0LL;
          LODWORD(lParam[0]) = *v9;
          EnumWindows((WNDENUMPROC)GamingAudio::EnumWindowsProc, (LPARAM)lParam);
          if ( lParam[1] )
          {
            v40 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(
                    (HSTRING *)(a1 + 56),
                    (const wchar_t **)&lParam[1]);
            if ( v40 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x178,
                (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
                (const char *)(unsigned int)v40);
            CoTaskMemFree((LPVOID)lParam[1]);
          }
        }
        if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*v38, 0LL, v39) )
        {
          v60[0] = 0;
          packageFullNameLength = 261;
          if ( (unsigned int)SHGetFileDescriptionW(a1 + 218, 0LL, 0LL, v60, &packageFullNameLength) )
          {
            v42 = -1LL;
            do
              ++v42;
            while ( v60[v42] );
            v43 = v42 > 0xFFFFFFFF
                ? -2147024362
                : Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 56), v60, v42);
            if ( v43 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x185,
                (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
                (const char *)(unsigned int)v43);
          }
        }
        if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*v38, 0LL, v41)
          && !*v36
          && !*(_DWORD *)(a1 + 72) )
        {
          *(_DWORD *)(a1 + 80) = 0;
        }
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v57);
    }
    if ( *(_DWORD *)(a1 + 80) )
    {
      *(_QWORD *)dwSize = 0LL;
      v44 = *a3;
      v45 = ***a3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)dwSize);
      v46 = v45((__int64)v44, &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd, (__int64 *)dwSize);
      v7 = v46;
      if ( v46 < 0 )
      {
        v47 = 407LL;
LABEL_64:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v47,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
          (const char *)(unsigned int)v46);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)dwSize);
        goto LABEL_69;
      }
      Microsoft::WRL::ComPtr<IAudioSessionControl>::operator=((__int64 *)(a1 + 752), (__int64 *)dwSize);
      v46 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 752) + 80LL))(*(_QWORD *)(a1 + 752), a1);
      v7 = v46;
      if ( v46 < 0 )
      {
        v47 = 412LL;
        goto LABEL_64;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)dwSize);
    }
    v7 = 0;
    goto LABEL_69;
  }
  v8 = 283LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
