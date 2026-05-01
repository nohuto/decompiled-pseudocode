/*
 * XREFs of ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180053F84
 * Callers:
 *     ?_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180053EA0 (-_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x180320930 (-SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D0EF4 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_627ca650139ebb5d52b223146a6c93f1_::operator() @ 0x180447B68 (_lambda_627ca650139ebb5d52b223146a6c93f1_--operator().c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804BC1F0 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804EFAC0 (-CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1804F6410 (-SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATI.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1805064A0 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18051AFC0 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x180569A20 (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1a5eae780b6c1663d254d797c20a7e0a___ @ 0x180030F98 (Windows--Internal--ComTaskPool--QueueTask__lambda_1a5eae780b6c1663d254d797c20a7e0a___.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewHelpers::CloseView(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64),
        __int64 a2,
        __int64 a3,
        int a4,
        int a5)
{
  int v6; // r13d
  unsigned int v9; // esi
  int (__fastcall *v10)(_QWORD, GUID *, __int64); // rdi
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64); // rdi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64); // rdi
  _QWORD *v19; // rax
  __int64 AddressOf; // rax
  int v21; // eax
  __int64 v22; // r8
  int v23; // ebx
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  __int64 v35; // [rsp+30h] [rbp-40h] BYREF
  __int64 v36; // [rsp+38h] [rbp-38h] BYREF
  __int64 v37; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v38[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v39; // [rsp+50h] [rbp-20h] BYREF
  HWND v40; // [rsp+58h] [rbp-18h] BYREF
  int v41; // [rsp+60h] [rbp-10h]
  int v42; // [rsp+64h] [rbp-Ch]
  int v43; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int pvAttribute; // [rsp+A0h] [rbp+30h] BYREF

  v6 = a3;
  v9 = 0;
  v36 = 0LL;
  v35 = 0LL;
  v10 = (int (__fastcall *)(_QWORD, GUID *, __int64))**a1;
  v11 = *(_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v36, &pvAttribute, a3);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
  if ( v10(a1, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v11) < 0 )
  {
    v13 = **a1;
    v14 = *(_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v35, &pvAttribute, v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v14);
    v15 = v13(a1, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v14);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v15,
        v33);
      goto LABEL_10;
    }
    if ( a2 )
    {
      hWnd = 0LL;
      v17 = v35;
      v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 24LL);
      v19 = (_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&hWnd, &pvAttribute, v16);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(*v19);
      v21 = v18(v17, AddressOf);
      v23 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x99,
          (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
          (const char *)(unsigned int)v21,
          v33);
        goto LABEL_8;
      }
      v33 = 0LL;
      pvAttribute = 2;
      v37 = a2;
      v24 = (_QWORD *)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&(&v33, v38, v22);
      v25 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
              *v24,
              &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
              &v37,
              &pvAttribute);
      v23 = v25;
      if ( v25 < 0 )
      {
        v31 = (unsigned int)v25;
        v32 = 160LL;
      }
      else
      {
        v39 = v33;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v39);
        v40 = hWnd;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v40);
        v41 = v6;
        v42 = a4;
        v43 = a5;
        v23 = Windows::Internal::ComTaskPool::QueueTask__lambda_1a5eae780b6c1663d254d797c20a7e0a___(v26, (__int64)&v39);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
        if ( v23 >= 0 )
        {
LABEL_7:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
LABEL_8:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&hWnd);
LABEL_9:
          v9 = v23;
          goto LABEL_10;
        }
        v31 = (unsigned int)v23;
        v32 = 168LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)v31,
        v33);
      goto LABEL_7;
    }
    v23 = -2147019873;
    v29 = 2147947423LL;
    v30 = 150LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)v29,
      v33);
    goto LABEL_9;
  }
  v28 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v36 + 24LL))(v36, &hWnd);
  v23 = v28;
  if ( v28 < 0 )
  {
    v29 = (unsigned int)v28;
    v30 = 132LL;
    goto LABEL_18;
  }
  if ( (a5 & 1) != 0 )
  {
    pvAttribute = 1;
    DwmSetWindowAttribute(hWnd, 3u, &pvAttribute, 4u);
  }
  PostMessageW(hWnd, 0x112u, 0xF060uLL, 0LL);
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v36);
  return v9;
}
