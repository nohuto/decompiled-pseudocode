/*
 * XREFs of ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18000BF8C
 * Callers:
 *     ?_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18000BEA4 (-_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803EE170 (-SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804ADDD4 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x180576D70 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1805A78D4 (-CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1805AE0F0 (-SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATI.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1805BE6E0 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1805D3660 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x1806275D8 (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18078D048 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitch.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1a5eae780b6c1663d254d797c20a7e0a___ @ 0x18000C24C (Windows--Internal--ComTaskPool--QueueTask__lambda_1a5eae780b6c1663d254d797c20a7e0a___.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800E2B7C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewHelpers::CloseView(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64),
        __int64 a2,
        int a3,
        int a4,
        int a5)
{
  unsigned int v9; // esi
  int (__fastcall *v10)(_QWORD, GUID *, __int64); // rdi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64); // rdi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64); // rdi
  _QWORD *v17; // rax
  __int64 AddressOf; // rax
  int v19; // eax
  int v20; // ebx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  __int64 v32; // [rsp+30h] [rbp-40h] BYREF
  __int64 v33; // [rsp+38h] [rbp-38h] BYREF
  __int64 v34; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v35[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v36; // [rsp+50h] [rbp-20h] BYREF
  HWND v37; // [rsp+58h] [rbp-18h] BYREF
  int v38; // [rsp+60h] [rbp-10h]
  int v39; // [rsp+64h] [rbp-Ch]
  int v40; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int pvAttribute; // [rsp+A0h] [rbp+30h] BYREF

  v9 = 0;
  v33 = 0LL;
  v32 = 0LL;
  v10 = (int (__fastcall *)(_QWORD, GUID *, __int64))**a1;
  v11 = *(_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v33, &pvAttribute);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
  if ( v10(a1, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v11) < 0 )
  {
    v12 = **a1;
    v13 = *(_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v32, &pvAttribute);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    v14 = v12(a1, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v13);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v14,
        v30);
      goto LABEL_10;
    }
    if ( a2 )
    {
      hWnd = 0LL;
      v15 = v32;
      v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24LL);
      v17 = (_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&hWnd, &pvAttribute);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(*v17);
      v19 = v16(v15, AddressOf);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x99,
          (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
          (const char *)(unsigned int)v19,
          v30);
        goto LABEL_8;
      }
      v30 = 0LL;
      pvAttribute = 2;
      v34 = a2;
      v21 = *(_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v30, v35);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v21);
      v22 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              v21,
              &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
              &v34,
              &pvAttribute);
      v20 = v22;
      if ( v22 < 0 )
      {
        v28 = (unsigned int)v22;
        v29 = 160LL;
      }
      else
      {
        v36 = v30;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v36);
        v37 = hWnd;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v37);
        v38 = a3;
        v39 = a4;
        v40 = a5;
        v20 = Windows::Internal::ComTaskPool::QueueTask__lambda_1a5eae780b6c1663d254d797c20a7e0a___(v23, &v36);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
        if ( v20 >= 0 )
        {
LABEL_7:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
LABEL_8:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&hWnd);
LABEL_9:
          v9 = v20;
          goto LABEL_10;
        }
        v28 = (unsigned int)v20;
        v29 = 168LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)v28,
        v30);
      goto LABEL_7;
    }
    v20 = -2147019873;
    v26 = 2147947423LL;
    v27 = 150LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)v26,
      v30);
    goto LABEL_9;
  }
  v25 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v33 + 24LL))(v33, &hWnd);
  v20 = v25;
  if ( v25 < 0 )
  {
    v26 = (unsigned int)v25;
    v27 = 132LL;
    goto LABEL_18;
  }
  if ( (a5 & 1) != 0 )
  {
    pvAttribute = 1;
    DwmSetWindowAttribute(hWnd, 3u, &pvAttribute, 4u);
  }
  PostMessageW(hWnd, 0x112u, 0xF060uLL, 0LL);
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
  return v9;
}
