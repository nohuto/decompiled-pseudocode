/*
 * XREFs of ?Init@SessionInfoItem@GamingAudio@@QEAAJPEAVAppList@2@AEBV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18040D900
 * Callers:
 *     ?GetSessionInfo@AppList@GamingAudio@@AEAAXV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18040D500 (-GetSessionInfo@AppList@GamingAudio@@AEAAXV-$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180192B24 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x1802D37A0 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ??$?0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z @ 0x18040B97C (--$-0$0EB@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0EB@G@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18040BBE4 (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ??$AsWeak@VAppList@GamingAudio@@@WRL@Microsoft@@YAJPEAVAppList@GamingAudio@@PEAVWeakRef@01@@Z @ 0x18040BE54 (--$AsWeak@VAppList@GamingAudio@@@WRL@Microsoft@@YAJPEAVAppList@GamingAudio@@PEAVWeakRef@01@@Z.c)
 *     ??4?$ComPtr@UIAudioSessionControl@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18040C728 (--4-$ComPtr@UIAudioSessionControl@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall GamingAudio::SessionInfoItem::Init(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 (__fastcall ****a3)(__int64, GUID *, __int64 *))
{
  __int64 (__fastcall ****v3)(__int64, GUID *, __int64 *); // r12
  __int64 *v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  DWORD *v9; // r13
  int v10; // eax
  int v11; // eax
  HRESULT v12; // eax
  __int64 (__fastcall ***v13)(__int64, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v14)(__int64, GUID *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // rsi
  __int64 (__fastcall ***v20)(__int64, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v21)(__int64, GUID *, __int64 *); // rbx
  int v22; // eax
  int v23; // eax
  char *v24; // rdi
  BOOL v25; // eax
  __int64 *v26; // rbx
  int (__fastcall *v27)(__int64 *, _QWORD, PVOID, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rsi
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
  int v44; // eax
  __int64 (__fastcall ***v45)(__int64, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v46)(__int64, GUID *, __int64 *); // rbx
  int v47; // eax
  __int64 v48; // rdx
  DWORD dwSize[2]; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 packageFullNameLength; // [rsp+38h] [rbp-C8h] BYREF
  int v52; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 *v53; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  int (__fastcall ***v56)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A0h] BYREF
  LPARAM lParam[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall ****v59)(__int64, GUID *, __int64 *); // [rsp+78h] [rbp-88h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+98h] [rbp-68h]
  wchar_t v62[264]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  v3 = a3;
  v59 = a3;
  v53 = (__int64 *)(a1 + 760);
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v53);
  v7 = Microsoft::WRL::AsWeak<GamingAudio::AppList>(a2, v6);
  if ( v7 >= 0 )
  {
    *(_QWORD *)(a1 + 768) = a2;
    v9 = (DWORD *)(a1 + 48);
    v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int64))(**v3)[14])(
           *v3,
           a1 + 48);
    if ( v7 < 0 )
    {
      v8 = 287LL;
      goto LABEL_3;
    }
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), __int64))(**v3)[3])(
            *v3,
            a1 + 84);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x120,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v10);
    *(_DWORD *)(a1 + 72) = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(**v3)[15])(*v3) == 0;
    pv = 0LL;
    v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), LPVOID *))(**v3)[4])(*v3, &pv);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x125,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v11);
    if ( pv )
    {
      v12 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>((HSTRING *)(a1 + 56), (const wchar_t **)&pv);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x129,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
          (const char *)(unsigned int)v12);
      CoTaskMemFree(pv);
    }
    v57 = 0LL;
    v13 = *v3;
    v14 = ***v3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
    v15 = v14((__int64)v13, &GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f, &v57);
    v7 = v15;
    if ( v15 >= 0 )
    {
      v52 = 0;
      v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v57 + 152LL))(v57, &v52);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x132,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
          (const char *)(unsigned int)v17);
      if ( *(_DWORD *)(a1 + 84) == 2 || (v18 = 1, (v52 & 0x200000) != 0) )
        v18 = 0;
      *(_DWORD *)(a1 + 80) = v18;
      v19 = (_QWORD *)(a1 + 744);
      v20 = *v3;
      v21 = ***v3;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 744));
      v15 = v21((__int64)v20, &GUID_87ce5498_68d6_44e5_9215_6da47ef883d8, (__int64 *)(a1 + 744));
      v7 = v15;
      if ( v15 >= 0 )
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 32LL))(*v19, a1 + 64);
        v7 = 0;
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x138,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
            (const char *)(unsigned int)v22);
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 48LL))(*v19, a1 + 68);
        if ( v23 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x139,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
            (const char *)(unsigned int)v23);
        if ( *v9 )
        {
          v24 = (char *)OpenProcess(0x1000u, 0, *v9);
          lParam[0] = (LPARAM)v24;
          if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v25 = IsImmersiveProcess(v24);
            *(_DWORD *)(a1 + 76) = v25;
            if ( v25 )
            {
              packageFullNameLength = 65;
              if ( !GetPackageFullName(v24, &packageFullNameLength, (PWSTR)(a1 + 88)) )
              {
                v53 = 0LL;
                v56 = 0LL;
                v55 = 0LL;
                v61 = 0LL;
                Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                  &hstringHeader,
                  L"Windows.Management.Deployment.PackageManager",
                  0x2Du,
                  0x2Cu);
                if ( (int)Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
                            v61,
                            (__int64 *)&v53) >= 0 )
                {
                  v26 = v53;
                  v27 = *(int (__fastcall **)(__int64 *, _QWORD, PVOID, int (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*v53 + 168);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v56);
                  v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                          &hstringHeader,
                          (PCWSTR)(a1 + 88),
                          v28);
                  if ( v27(v26, 0LL, v29[1].Reserved.Reserved1, (int (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v56) >= 0 )
                  {
                    v30 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v56;
                    v31 = **v56;
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                    if ( v31(v30, &GUID_a6612fb6_7688_4ace_95fb_359538e7aa01, &v55) >= 0 )
                    {
                      v33 = (HSTRING *)(a1 + 56);
                      if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                                            *(Microsoft::WRL::Wrappers::Details **)(a1 + 56),
                                            0LL,
                                            v32) )
                      {
                        v34 = v55;
                        v35 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 48LL);
                        WindowsDeleteString(*v33);
                        *v33 = 0LL;
                        v35(v34, a1 + 56);
                      }
                    }
                  }
                }
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v56);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v53);
              }
              v3 = v59;
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
                    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
                    (const char *)(unsigned int)v40);
                CoTaskMemFree((LPVOID)lParam[1]);
              }
            }
            if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*v38, 0LL, v39) )
            {
              v62[0] = 0;
              packageFullNameLength = 261;
              if ( (unsigned int)SHGetFileDescriptionW(a1 + 218, 0LL, 0LL, v62, &packageFullNameLength) )
              {
                v42 = -1LL;
                do
                  ++v42;
                while ( v62[v42] );
                v43 = v42 > 0xFFFFFFFF
                    ? -2147024362
                    : Microsoft::WRL::Wrappers::HString::Set((HSTRING *)(a1 + 56), v62, v42);
                if ( v43 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x185,
                    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
                    (const char *)(unsigned int)v43);
              }
            }
            v44 = Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(*v38, 0LL, v41);
            v7 = 0;
            if ( !v44 && !*v36 && !*(_DWORD *)(a1 + 72) )
              *(_DWORD *)(a1 + 80) = 0;
          }
          if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v24);
        }
        if ( !*(_DWORD *)(a1 + 80) )
          goto LABEL_68;
        *(_QWORD *)dwSize = 0LL;
        v45 = *v3;
        v46 = ***v3;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)dwSize);
        v47 = v46((__int64)v45, &GUID_f4b1a599_7266_4319_a8ca_e70acb11e8cd, (__int64 *)dwSize);
        v7 = v47;
        if ( v47 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAudioSessionControl>::operator=((__int64 *)(a1 + 752), (__int64 *)dwSize);
          v47 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 752) + 80LL))(*(_QWORD *)(a1 + 752), a1);
          v7 = v47;
          if ( v47 >= 0 )
          {
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)dwSize);
            v7 = 0;
            goto LABEL_68;
          }
          v48 = 412LL;
        }
        else
        {
          v48 = 407LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v48,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
          (const char *)(unsigned int)v47);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)dwSize);
LABEL_68:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v57);
        return (unsigned int)v7;
      }
      v16 = 311LL;
    }
    else
    {
      v16 = 303LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_68;
  }
  v8 = 283LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
