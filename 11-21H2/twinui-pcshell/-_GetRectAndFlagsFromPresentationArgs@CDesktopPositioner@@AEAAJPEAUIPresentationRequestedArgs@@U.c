/*
 * XREFs of ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F0580
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800F0318 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804FBF70 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??4?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitor@@@Z @ 0x180015F8C (--4-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMon.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z @ 0x18007220C (--0-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F02A4 (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800F20B0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1800F2728 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801B4288 (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1804FC694 (-_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4.c)
 *     ?_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z @ 0x1804FD2BC (-_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z.c)
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1804FE1EC (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
        CDesktopPositioner *this,
        struct IPresentationRequestedArgs *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        enum TRY_POSITION_VIEW_FLAGS *a5,
        struct IImmersiveMonitor **a6)
{
  CDesktopPositioner *v7; // r13
  int v9; // edi
  int MonitorFromRect; // eax
  unsigned int v11; // ebx
  int v12; // ebx
  LONG right; // r14d
  LONG bottom; // r15d
  int (__fastcall *v15)(struct IPresentationRequestedArgs *, LONG *); // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, struct IUnknown **); // r12
  struct IUnknown *v20; // rcx
  LONG left; // r12d
  LONG top; // r13d
  struct IImmersiveMonitor **AddressOf; // rax
  int v24; // eax
  __int64 v25; // rdx
  bool v26; // bl
  CDesktopPositioner *v27; // rcx
  CDesktopPositioner *v28; // rcx
  CDesktopPositioner *v29; // rbx
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // eax
  int (__fastcall *v31)(struct IPresentationRequestedArgs *, __int64); // rbx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 *v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  struct IUnknown *v40; // rbx
  ULONG (__stdcall *Release)(IUnknown *); // r12
  struct IUnknown *v42; // rcx
  struct IImmersiveMonitor **v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  bool v46; // r12
  CDesktopPositioner *v47; // rcx
  LONG cx; // r14d
  LONG cy; // r15d
  struct IUnknown *v50; // rcx
  CDesktopPositioner *v51; // rcx
  LONG v52; // edi
  LONG v53; // esi
  struct tagRECT *v54; // [rsp+20h] [rbp-E0h]
  struct tagRECT *v55[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v56; // [rsp+50h] [rbp-B0h] BYREF
  struct tagSIZE v57; // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknown *v58; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v59; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v60; // [rsp+78h] [rbp-88h] BYREF
  struct IUnknown *v61; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v62; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v63; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v64; // [rsp+9Ch] [rbp-64h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-60h] BYREF
  CDesktopPositioner *v66; // [rsp+A8h] [rbp-58h] BYREF
  int v67; // [rsp+B0h] [rbp-50h] BYREF
  int v68; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v69; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT *v71; // [rsp+C8h] [rbp-38h]
  struct IImmersiveMonitor **v72; // [rsp+D0h] [rbp-30h]
  bool v73[8]; // [rsp+D8h] [rbp-28h] BYREF
  enum TRY_POSITION_VIEW_FLAGS *v74; // [rsp+E0h] [rbp-20h]
  struct tagRECT *v75; // [rsp+E8h] [rbp-18h]
  struct tagRECT v76; // [rsp+F0h] [rbp-10h] BYREF
  struct tagRECT v77; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v78; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v75 = a4;
  v71 = a3;
  v7 = this;
  v66 = this;
  v74 = a5;
  v72 = a6;
  *a4 = 0LL;
  *(_DWORD *)a5 = 0;
  *a6 = 0LL;
  if ( !a2 )
    return 2147942487LL;
  v9 = 0;
  HIDWORD(v55[0]) = 0;
  v56 = *a3;
  v59 = 0LL;
  MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(this, a3, (struct IImmersiveMonitor **)&v59);
  v11 = MonitorFromRect;
  if ( MonitorFromRect >= 0 )
  {
    v69 = 0LL;
    LOBYTE(v55[0]) = 0;
    v12 = 0;
    if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v69) < 0 )
    {
      bottom = v56.bottom;
      right = v56.right;
    }
    else
    {
      right = v56.left + v69;
      v56.right = v56.left + v69;
      bottom = v56.top + HIDWORD(v69);
      v56.bottom = v56.top + HIDWORD(v69);
      v9 = 15;
      HIDWORD(v55[0]) = 15;
      LOBYTE(v55[0]) = 1;
      v12 = 15;
    }
    v65 = 0LL;
    *(_QWORD *)&v62.right = 0LL;
    if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v65) >= 0 )
    {
      v15 = *(int (__fastcall **)(struct IPresentationRequestedArgs *, LONG *))(*(_QWORD *)a2 + 64LL);
      v16 = *(_QWORD *)&v62.right;
      *(_QWORD *)&v62.right = 0LL;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( v15(a2, &v62.right) >= 0 )
      {
        if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)a2 + 96LL))(a2, &v68) < 0
          || v68 )
        {
          v9 = v12 | 2;
          HIDWORD(v55[0]) = v12 | 2;
        }
        v67 = 0;
        v58 = 0LL;
        v77 = 0LL;
        v61 = 0LL;
        v76 = 0LL;
        v17 = **(_QWORD **)&v62.right;
        v58 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, GUID *, struct IUnknown **))(v17 + 104))(
               *(_QWORD *)&v62.right,
               &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
               &v58) >= 0
          && ((int (__fastcall *)(struct IUnknown *, int *))v58->lpVtbl[1].AddRef)(v58, &v67) >= 0
          && v67 == 2
          && ((int (__fastcall *)(struct IUnknown *, struct tagRECT *))v58->lpVtbl[1].QueryInterface)(v58, &v77) >= 0 )
        {
          v18 = *(_QWORD *)&v62.right;
          v19 = *(int (__fastcall **)(__int64, struct IUnknown **))(**(_QWORD **)&v62.right + 80LL);
          v20 = v61;
          v61 = 0LL;
          if ( v20 )
            ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
          if ( v19(v18, &v61) >= 0
            && ((int (__fastcall *)(struct IUnknown *, struct tagRECT *))v61->lpVtbl[3].QueryInterface)(v61, &v76) >= 0 )
          {
            left = right - v56.left;
            v62.left = right - v56.left;
            top = bottom - v56.top;
            v62.top = bottom - v56.top;
            v60 = 0LL;
            AddressOf = (struct IImmersiveMonitor **)Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v60);
            v24 = CDesktopPositioner::_GetMonitorFromRect(v66, v71, AddressOf);
            v11 = v24;
            if ( v24 < 0 )
            {
              v25 = 2709LL;
LABEL_29:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v25,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v24);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v60);
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v61);
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v58);
LABEL_89:
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v62.right);
              goto LABEL_90;
            }
            v26 = (unsigned int)SHIsSameObject(v61, v60) != 0;
            wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::operator=((__int64 *)&v59, (__int64)v61);
            if ( !v26 && !LOBYTE(v55[0]) )
            {
              v24 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                      v27,
                      (struct IImmersiveMonitor *)v60,
                      (struct IImmersiveMonitor *)v61,
                      (struct tagSIZE *)&v62,
                      (enum TRY_POSITION_VIEW_FLAGS *)((char *)v55 + 4));
              v11 = v24;
              if ( v24 < 0 )
              {
                v25 = 2718LL;
                goto LABEL_29;
              }
              v9 = HIDWORD(v55[0]);
              top = v62.top;
              left = v62.left;
            }
            if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, unsigned int *))(*(_QWORD *)a2 + 104LL))(
                   a2,
                   &v63) >= 0
              && v63 )
            {
              v78 = 0LL;
              v57 = 0LL;
              if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v62.right + 392LL))(
                     *(_QWORD *)&v62.right,
                     &v64) >= 0 )
              {
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
                if ( CDesktopPositioner::_CreateTitlebarConfiguration(
                       v28,
                       *(struct IApplicationView **)&v62.right,
                       (struct IApplicationViewTitlebarConfiguration **)&v57) >= 0 )
                {
                  v29 = v66;
                  if ( (*(int (__fastcall **)(_QWORD, struct IUnknown *, _QWORD, __int64, int, struct tagSIZE, struct tagRECT *))(**((_QWORD **)v66 + 33) + 72LL))(
                         *((_QWORD *)v66 + 33),
                         v61,
                         0LL,
                         1LL,
                         1,
                         v57,
                         &v78) >= 0
                    && (*(int (__fastcall **)(_QWORD, bool *))(**(_QWORD **)&v62.right + 136LL))(
                         *(_QWORD *)&v62.right,
                         v73) >= 0 )
                  {
                    LOBYTE(v54) = v64 != 0;
                    v56 = *WindowRelativePositioning::GetAdjacentPosition(
                             (WindowRelativePositioning *)&v56,
                             &v77,
                             &v62,
                             (const struct tagSIZE *)&v78,
                             v54,
                             v73[0],
                             *((const unsigned __int16 **)v29 + 34),
                             &v76,
                             v55[0]);
                    v9 |= 1u;
                    HIDWORD(v55[0]) = v9;
                    bottom = v56.bottom;
                    right = v56.right;
                  }
                }
              }
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v57);
            }
            else
            {
              ScaleFactorForRect = GetScaleFactorForRect(&v76);
              v56.left = v77.left + ScaleFactorForRect * (int)v65 / 100;
              v56.top = ScaleFactorForRect * HIDWORD(v65) / 100 + v77.top;
              right = v56.left + left;
              v56.right = v56.left + left;
              bottom = v56.top + top;
              v56.bottom = v56.top + top;
              v9 |= 1u;
              HIDWORD(v55[0]) = v9;
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v60);
            v7 = v66;
          }
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v61);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v58);
      }
    }
    v70 = 0LL;
    v31 = *(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64))(*(_QWORD *)a2 + 32LL);
    v32 = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v70);
    if ( v31(a2, v32) >= 0 )
    {
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::com_ptr_t<IInspectable,wil::err_exception_policy>(
        &v66,
        v70);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        &v66,
        &v62);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v66);
      v33 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v62.left + 56LL))(
              *(_QWORD *)&v62.left,
              &v64);
      v11 = v33;
      if ( v33 < 0 )
      {
        v34 = 2768LL;
LABEL_50:
        v35 = (unsigned int)v33;
        goto LABEL_51;
      }
      if ( v64 )
      {
        if ( v64 > 1 )
        {
          v11 = -2147024809;
          v35 = 2147942487LL;
          v34 = 2772LL;
LABEL_51:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v34,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)v35);
LABEL_82:
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v62.left);
LABEL_88:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v70);
          goto LABEL_89;
        }
        v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)&v62.left + 48LL))(
                *(_QWORD *)&v62.left,
                0LL,
                &v63);
        v11 = v33;
        if ( v33 < 0 )
        {
          v34 = 2775LL;
          goto LABEL_50;
        }
        v60 = 0LL;
        v36 = (__int64 *)*((_QWORD *)v7 + 39);
        v37 = *v36;
        v60 = 0LL;
        v38 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IUnknown **))(v37 + 32))(v36, 1LL, &v60);
        v11 = v38;
        if ( v38 < 0 )
        {
          v39 = 2778LL;
LABEL_58:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v39,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v38);
LABEL_81:
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v60);
          goto LABEL_82;
        }
        v40 = v60;
        Release = v60->lpVtbl[3].Release;
        v42 = v59;
        v59 = 0LL;
        if ( v42 )
          ((void (__fastcall *)(struct IUnknown *))v42->lpVtbl->Release)(v42);
        v38 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))Release)(v40, v63, &v59);
        v11 = v38;
        if ( v38 < 0 )
        {
          v39 = 2779LL;
          goto LABEL_58;
        }
        v58 = 0LL;
        v43 = (struct IImmersiveMonitor **)Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v58);
        v44 = CDesktopPositioner::_GetMonitorFromRect(v7, v71, v43);
        v11 = v44;
        if ( v44 < 0 )
        {
          v45 = 2782LL;
LABEL_80:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v45,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v44);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v58);
          goto LABEL_81;
        }
        v46 = (unsigned int)SHIsSameObject(v59, v58) != 0;
        if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v65) < 0 )
        {
          if ( !v46 )
          {
            v78 = v56;
            v44 = CDesktopPositioner::_MoveRectToMonitor(v7, (struct IImmersiveMonitor *)v59, &v78, &v56);
            v11 = v44;
            if ( v44 < 0 )
            {
              v45 = 2819LL;
              goto LABEL_80;
            }
            v9 |= 3u;
            HIDWORD(v55[0]) = v9;
            if ( !LOBYTE(v55[0]) )
            {
              v52 = v56.left;
              v57.cx = v56.right - v56.left;
              v53 = v56.top;
              v57.cy = v56.bottom - v56.top;
              v44 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                      v51,
                      (struct IImmersiveMonitor *)v58,
                      (struct IImmersiveMonitor *)v59,
                      &v57,
                      (enum TRY_POSITION_VIEW_FLAGS *)((char *)v55 + 4));
              v11 = v44;
              if ( v44 < 0 )
              {
                v45 = 2827LL;
                goto LABEL_80;
              }
              v56.right = v52 + v57.cx;
              v56.bottom = v53 + v57.cy;
              v9 = HIDWORD(v55[0]);
            }
          }
        }
        else
        {
          v76 = 0LL;
          v44 = ((__int64 (__fastcall *)(struct IUnknown *, struct tagRECT *))v59->lpVtbl[3].Release)(v59, &v76);
          v11 = v44;
          if ( v44 < 0 )
          {
            v45 = 2789LL;
            goto LABEL_80;
          }
          cx = right - v56.left;
          v57.cx = cx;
          cy = bottom - v56.top;
          v57.cy = cy;
          if ( !v46 && !LOBYTE(v55[0]) )
          {
            v44 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                    v47,
                    (struct IImmersiveMonitor *)v58,
                    (struct IImmersiveMonitor *)v59,
                    &v57,
                    (enum TRY_POSITION_VIEW_FLAGS *)((char *)v55 + 4));
            v11 = v44;
            if ( v44 < 0 )
            {
              v45 = 2802LL;
              goto LABEL_80;
            }
            v9 = HIDWORD(v55[0]);
            cy = v57.cy;
            cx = v57.cx;
          }
          v56.left = v65 + v76.left;
          v56.top = HIDWORD(v65) + v76.top;
          v56.right = cx + v65 + v76.left;
          v56.bottom = cy + HIDWORD(v65) + v76.top;
          v9 |= 3u;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v58);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v60);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v62.left);
    }
    v50 = v59;
    if ( v59 )
    {
      *v72 = (struct IImmersiveMonitor *)v59;
      ((void (__fastcall *)(struct IUnknown *))v50->lpVtbl->AddRef)(v50);
    }
    else
    {
      *v72 = 0LL;
    }
    *(_DWORD *)v74 = v9;
    *v75 = v56;
    if ( v9 )
    {
      v11 = 0;
    }
    else
    {
      v11 = -2147467260;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1B,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)0x80004004LL);
    }
    goto LABEL_88;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5C,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)MonitorFromRect);
LABEL_90:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v59);
  return v11;
}
