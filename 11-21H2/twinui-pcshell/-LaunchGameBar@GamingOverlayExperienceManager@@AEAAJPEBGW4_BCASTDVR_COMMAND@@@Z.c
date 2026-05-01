/*
 * XREFs of ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180334058
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x1800380D0 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows@@W4ButtonPressType@@@Z @ 0x180338D70 (-SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows.c)
 * Callees:
 *     ??$As@UILauncherStatics@System@Windows@@@?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILauncherStatics@System@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000A8B4 (--$As@UILauncherStatics@System@Windows@@@-$ComPtr@UIActivationFactory@@@WRL@Microsoft@@QEBAJV-$C.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000A910 (--$GetActivationFactory@V-$ComPtr@UIActivationFactory@@@WRL@Microsoft@@@Foundation@Windows@@YAJP.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000A954 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UILauncherOptions@System@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUILauncherOptions@System@1@@Z @ 0x180324420 (--$ActivateInstance@UILauncherOptions@System@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEA.c)
 *     ?GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x18032EA44 (-GameBarSupportsDirectUriActivation@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x180334594 (-LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
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
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD, char *); // rdi
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64 *); // rdi
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rdx
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v28)(_QWORD, GUID *, __int64 *); // rdi
  unsigned int v29; // r8d
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, _QWORD); // rdi
  __int64 v32; // rax
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  int v36; // ebx
  __int64 v37; // rbx
  __int64 (__fastcall *v38)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD), __int64 *); // rdi
  int v39; // eax
  int v40; // ebx
  char v42[8]; // [rsp+30h] [rbp-69h] BYREF
  __int64 (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-61h] BYREF
  __int64 v44; // [rsp+40h] [rbp-59h] BYREF
  __int64 v45; // [rsp+48h] [rbp-51h] BYREF
  __int64 v46; // [rsp+50h] [rbp-49h] BYREF
  int v47; // [rsp+58h] [rbp-41h]
  __int64 v48; // [rsp+60h] [rbp-39h] BYREF
  __int64 v49; // [rsp+68h] [rbp-31h] BYREF
  __int64 (__fastcall ***v50)(_QWORD, GUID *, __int64); // [rsp+70h] [rbp-29h] BYREF
  __int64 v51; // [rsp+78h] [rbp-21h] BYREF
  const WCHAR *v52; // [rsp+80h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-9h] BYREF
  __int64 v54; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v52 = a2;
  v5 = 0;
  v47 = 0;
  v46 = 0LL;
  v54 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.PackageFamily",
    0x2Fu,
    0x2Eu);
  v6 = v54;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
  ActivationFactory = RoGetActivationFactory(v6, &GUID_86f5b0ee_9560_4d76_a06a_ca4c8bfe4426, &v46);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x663,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_8;
  }
  v9 = 1;
  v42[0] = 1;
  v10 = v46;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v46 + 192LL);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&c_GamingOverlayPfn,
          v8);
  v47 = 1;
  v13 = v11(v10, 0LL, *(_QWORD *)(v12 + 24), v42);
  if ( v13 >= 0 )
  {
    if ( !v42[0] )
      goto LABEL_7;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x666,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  }
  v9 = 0;
LABEL_7:
  if ( v9 )
    goto LABEL_38;
LABEL_8:
  if ( GamingOverlayExperienceManager::GameBarSupportsDirectUriActivation(a1) )
  {
    v45 = 0LL;
    v51 = 0LL;
    v54 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Foundation.Uri", 0x17u, 0x16u);
    v16 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
            v54,
            (__int64)&v51);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 1655LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      v5 = v17;
LABEL_37:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
      goto LABEL_38;
    }
    v19 = v51;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v51 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &v52, v21);
    v16 = v20(v19, *(_QWORD *)(v22 + 24), &v45);
    v17 = v16;
    if ( v16 < 0 )
    {
      v18 = 1656LL;
      goto LABEL_15;
    }
    v43 = 0LL;
    v44 = 0LL;
    v54 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.System.LauncherOptions",
      0x1Fu,
      0x1Eu);
    v23 = v54;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v43);
    v24 = Windows::Foundation::ActivateInstance<Windows::System::ILauncherOptions>(v23, &v43);
    v25 = v24;
    if ( v24 >= 0 )
    {
      v24 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v43)[7])(v43, 0LL);
      v25 = v24;
      if ( v24 >= 0 )
      {
        v24 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v43)[9])(v43, 0LL);
        v25 = v24;
        if ( v24 >= 0 )
        {
          v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v43;
          v28 = **v43;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
          v24 = v28(v27, &GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49, &v44);
          v25 = v24;
          if ( v24 >= 0 )
          {
            v30 = v44;
            v31 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v44 + 56LL);
            v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                    (__int64)&hstringHeader,
                    (const WCHAR **)&c_GamingOverlayPfn,
                    v29);
            v24 = v31(v30, *(_QWORD *)(v32 + 24));
            v25 = v24;
            if ( v24 >= 0 )
            {
              v50 = 0LL;
              v54 = 0LL;
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                &hstringHeader,
                L"Windows.System.Launcher",
                0x18u,
                0x17u);
              v33 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<IActivationFactory>>(
                      v54,
                      (__int64)&v50);
              v34 = v33;
              if ( v33 >= 0 )
              {
                v49 = 0LL;
                v35 = Microsoft::WRL::ComPtr<IActivationFactory>::As<Windows::System::ILauncherStatics>(
                        &v50,
                        (__int64)&v49);
                v36 = v35;
                if ( v35 >= 0 )
                {
                  v48 = 0LL;
                  v37 = v49;
                  v38 = *(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD), __int64 *))(*(_QWORD *)v49 + 72LL);
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v48);
                  v39 = v38(v37, v45, (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v43, &v48);
                  v40 = v39;
                  if ( v39 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x689,
                      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                      (const char *)(unsigned int)v39);
                    v5 = v40;
                  }
                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v48);
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x687,
                    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                    (const char *)(unsigned int)v35);
                  v5 = v36;
                }
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v49);
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x685,
                  (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                  (const char *)(unsigned int)v33);
                v5 = v34;
              }
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v50);
              goto LABEL_36;
            }
            v26 = 1665LL;
          }
          else
          {
            v26 = 1664LL;
          }
        }
        else
        {
          v26 = 1663LL;
        }
      }
      else
      {
        v26 = 1662LL;
      }
    }
    else
    {
      v26 = 1661LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v24);
    v5 = v25;
LABEL_36:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v43);
    goto LABEL_37;
  }
  v14 = GamingOverlayExperienceManager::LaunchGameBarLegacy(a1, a3);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x670,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
    v5 = v15;
  }
LABEL_38:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
  return v5;
}
