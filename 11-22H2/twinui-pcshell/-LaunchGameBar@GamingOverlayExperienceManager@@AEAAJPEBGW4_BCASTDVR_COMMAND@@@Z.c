/*
 * XREFs of ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180401954
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18006D530 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows@@W4ButtonPressType@@@Z @ 0x18040694C (-SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802D2174 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ??$As@UILauncherStatics@System@Windows@@@?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILauncherStatics@System@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802D2B1A (--$As@UILauncherStatics@System@Windows@@@-$ComPtr@UIActivationFactory@@@WRL@Microsoft@@QEBAJV-$C.c)
 *     ??$ActivateInstance@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803D1468 (--$ActivateInstance@V-$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@@Foundation@Wind.c)
 *     ??$As@UILauncherOptions2@System@Windows@@@?$ComPtr@UILauncherOptions@System@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803D14A0 (--$As@UILauncherOptions2@System@Windows@@@-$ComPtr@UILauncherOptions@System@Windows@@@WRL@Micros.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1803F3E74 (--$GetActivationFactory@V-$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Foundation@Windows@@YAJP.c)
 *     ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1803FBDBC (-GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x180401E58 (-LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall GamingOverlayExperienceManager::LaunchGameBar(
        GamingOverlayExperienceManager *a1,
        const WCHAR *a2,
        unsigned int a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  int ActivationFactory; // eax
  unsigned int v8; // r8d
  char v9; // r15
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, PVOID, char *); // rdi
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, PVOID, __int64 *); // rdi
  unsigned int v21; // r8d
  HSTRING_HEADER *v22; // rax
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rdx
  unsigned int v26; // r8d
  __int64 v27; // rbx
  __int64 (__fastcall *v28)(__int64, PVOID); // rdi
  HSTRING_HEADER *v29; // rax
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // ebx
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *); // rdi
  int v36; // eax
  int v37; // ebx
  char v39[8]; // [rsp+30h] [rbp-69h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-61h] BYREF
  __int64 v41; // [rsp+40h] [rbp-59h] BYREF
  __int64 v42; // [rsp+48h] [rbp-51h] BYREF
  int v43; // [rsp+50h] [rbp-49h]
  __int64 v44; // [rsp+58h] [rbp-41h] BYREF
  __int64 v45; // [rsp+60h] [rbp-39h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-31h] BYREF
  __int64 v47; // [rsp+70h] [rbp-29h] BYREF
  __int64 v48; // [rsp+78h] [rbp-21h] BYREF
  const WCHAR *v49; // [rsp+80h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-9h] BYREF
  __int64 v51; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v49 = a2;
  v5 = 0;
  v43 = 0;
  v42 = 0LL;
  v51 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.PackageFamily",
    0x2Fu,
    0x2Eu);
  v6 = v51;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
  ActivationFactory = RoGetActivationFactory(v6, &GUID_86f5b0ee_9560_4d76_a06a_ca4c8bfe4426, &v42);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x681,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_8;
  }
  v9 = 1;
  v39[0] = 1;
  v10 = v42;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID, char *))(*(_QWORD *)v42 + 192LL);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &hstringHeader,
          (const WCHAR **)&c_GamingOverlayPfn,
          v8);
  v43 = 1;
  v13 = v11(v10, 0LL, v12[1].Reserved.Reserved1, v39);
  if ( v13 >= 0 )
  {
    if ( !v39[0] )
      goto LABEL_7;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x684,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  }
  v9 = 0;
LABEL_7:
  if ( v9 )
    goto LABEL_38;
LABEL_8:
  if ( GamingOverlayExperienceManager::GameBarSupportsDirectUriActivation(a1) )
  {
    v41 = 0LL;
    v48 = 0LL;
    v51 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Foundation.Uri", 0x17u, 0x16u);
    v16 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
            v51,
            &v48);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 1685LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      v5 = v17;
LABEL_37:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v48);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
      goto LABEL_38;
    }
    v19 = v48;
    v20 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v48 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v49, v21);
    v16 = v20(v19, v22[1].Reserved.Reserved1, &v41);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 1686LL;
      goto LABEL_15;
    }
    v40 = 0LL;
    v47 = 0LL;
    v51 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.System.LauncherOptions",
      0x1Fu,
      0x1Eu);
    v23 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>>(
            v51,
            (__int64 *)&v40);
    v24 = v23;
    if ( v23 >= 0 )
    {
      v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v40)[7])(v40, 0LL);
      v24 = v23;
      if ( v23 >= 0 )
      {
        v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v40)[9])(v40, 0LL);
        v24 = v23;
        if ( v23 >= 0 )
        {
          v23 = Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions>::As<Windows::System::ILauncherOptions2>(
                  &v40,
                  &v47);
          v24 = v23;
          if ( v23 >= 0 )
          {
            v27 = v47;
            v28 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v47 + 56LL);
            v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    &hstringHeader,
                    (const WCHAR **)&c_GamingOverlayPfn,
                    v26);
            v23 = v28(v27, v29[1].Reserved.Reserved1);
            v24 = v23;
            if ( v23 >= 0 )
            {
              v46 = 0LL;
              v51 = 0LL;
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                &hstringHeader,
                L"Windows.System.Launcher",
                0x18u,
                0x17u);
              v30 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<IActivationFactory>>(
                      v51,
                      (__int64 *)&v46);
              v31 = v30;
              if ( v30 >= 0 )
              {
                v45 = 0LL;
                v32 = Microsoft::WRL::ComPtr<IActivationFactory>::As<Windows::System::ILauncherStatics>(&v46, &v45);
                v33 = v32;
                if ( v32 >= 0 )
                {
                  v44 = 0LL;
                  v34 = v45;
                  v35 = *(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*(_QWORD *)v45 + 72LL);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
                  v36 = v35(v34, v41, v40, &v44);
                  v37 = v36;
                  if ( v36 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x6A7,
                      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                      (const char *)(unsigned int)v36);
                    v5 = v37;
                  }
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x6A5,
                    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                    (const char *)(unsigned int)v32);
                  v5 = v33;
                }
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x6A3,
                  (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                  (const char *)(unsigned int)v30);
                v5 = v31;
              }
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v46);
              goto LABEL_36;
            }
            v25 = 1695LL;
          }
          else
          {
            v25 = 1694LL;
          }
        }
        else
        {
          v25 = 1693LL;
        }
      }
      else
      {
        v25 = 1692LL;
      }
    }
    else
    {
      v25 = 1691LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v23);
    v5 = v24;
LABEL_36:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v47);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v40);
    goto LABEL_37;
  }
  v14 = GamingOverlayExperienceManager::LaunchGameBarLegacy(a1, a3);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68E,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
    v5 = v15;
  }
LABEL_38:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
  return v5;
}
