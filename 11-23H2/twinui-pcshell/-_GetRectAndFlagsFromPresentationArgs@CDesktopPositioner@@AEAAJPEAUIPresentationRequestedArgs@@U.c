/*
 * XREFs of ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180076DB0
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18007620C (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1805B4350 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800262B8 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x180060388 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180076FF4 (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ??4?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitor@@@Z @ 0x18007B6BC (--4-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMon.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z @ 0x18012AC74 (--0-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1802113F8 (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1805B4DF4 (-_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4.c)
 *     ?_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z @ 0x1805B5B08 (-_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z.c)
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x1805B6988 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
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
  LONG right; // r14d
  LONG bottom; // r15d
  int (__fastcall *v14)(struct IPresentationRequestedArgs *, struct IApplicationView **); // rbx
  struct IApplicationView *v15; // rcx
  __int64 v16; // rax
  struct IApplicationView *v17; // rbx
  int (__fastcall *v18)(struct IApplicationView *, struct IUnknown **); // r12
  struct IUnknown *v19; // rcx
  LONG left; // r12d
  LONG top; // r13d
  __int64 *AddressOf; // rax
  int v23; // eax
  __int64 v24; // rdx
  bool v25; // bl
  CDesktopPositioner *v26; // rcx
  CDesktopPositioner *v27; // rcx
  CDesktopPositioner *v28; // rbx
  int ScaleFactorForRect; // eax
  int (__fastcall *v30)(struct IPresentationRequestedArgs *, __int64 *); // rbx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 *v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  struct IUnknown *v38; // rbx
  ULONG (__stdcall *Release)(IUnknown *); // r12
  struct IUnknown *v40; // rcx
  __int64 *v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  bool v44; // r12
  CDesktopPositioner *v45; // rcx
  LONG cx; // r14d
  LONG cy; // r15d
  struct IUnknown *v48; // rcx
  CDesktopPositioner *v49; // rcx
  LONG v50; // edi
  LONG v51; // esi
  struct tagRECT *v52; // [rsp+20h] [rbp-E0h]
  struct tagRECT *v53[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v54; // [rsp+50h] [rbp-B0h] BYREF
  struct tagSIZE v55; // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknown *v56; // [rsp+68h] [rbp-98h] BYREF
  struct IUnknown *v57; // [rsp+70h] [rbp-90h] BYREF
  struct IUnknown *v58; // [rsp+78h] [rbp-88h] BYREF
  struct IUnknown *v59; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v60; // [rsp+88h] [rbp-78h] BYREF
  struct IApplicationView *v61; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v62; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-58h] BYREF
  CDesktopPositioner *v64; // [rsp+B0h] [rbp-50h] BYREF
  int v65; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-40h] BYREF
  int v67; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v68; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT *v69; // [rsp+D8h] [rbp-28h]
  struct IImmersiveMonitor **v70; // [rsp+E0h] [rbp-20h]
  bool v71[8]; // [rsp+E8h] [rbp-18h] BYREF
  enum TRY_POSITION_VIEW_FLAGS *v72; // [rsp+F0h] [rbp-10h]
  struct tagRECT *v73; // [rsp+F8h] [rbp-8h]
  struct tagRECT v74; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT v75; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v76; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v73 = a4;
  v69 = a3;
  v7 = this;
  v64 = this;
  v72 = a5;
  v70 = a6;
  *a4 = 0LL;
  *(_DWORD *)a5 = 0;
  *a6 = 0LL;
  if ( !a2 )
    return 2147942487LL;
  v9 = 0;
  HIDWORD(v53[0]) = 0;
  v54 = *a3;
  v57 = 0LL;
  MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(this, a3, (struct IImmersiveMonitor **)&v57);
  v11 = MonitorFromRect;
  if ( MonitorFromRect >= 0 )
  {
    v68 = 0LL;
    LOBYTE(v53[0]) = 0;
    if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v68) < 0 )
    {
      bottom = v54.bottom;
      right = v54.right;
    }
    else
    {
      right = v54.left + v68;
      v54.right = v54.left + v68;
      bottom = v54.top + HIDWORD(v68);
      v54.bottom = v54.top + HIDWORD(v68);
      v9 = 15;
      HIDWORD(v53[0]) = 15;
      LOBYTE(v53[0]) = 1;
    }
    v63 = 0LL;
    v61 = 0LL;
    if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v63) >= 0 )
    {
      v14 = *(int (__fastcall **)(struct IPresentationRequestedArgs *, struct IApplicationView **))(*(_QWORD *)a2 + 64LL);
      v15 = v61;
      v61 = 0LL;
      if ( v15 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v14(a2, &v61) >= 0 )
      {
        if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)a2 + 96LL))(a2, &v67) < 0
          || v67 )
        {
          v9 |= 2u;
          HIDWORD(v53[0]) = v9;
        }
        v65 = 0;
        v56 = 0LL;
        v75 = 0LL;
        v59 = 0LL;
        v74 = 0LL;
        v16 = *(_QWORD *)v61;
        v56 = 0LL;
        if ( (*(int (__fastcall **)(struct IApplicationView *, GUID *, struct IUnknown **))(v16 + 104))(
               v61,
               &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
               &v56) >= 0
          && ((int (__fastcall *)(struct IUnknown *, int *))v56->lpVtbl[1].AddRef)(v56, &v65) >= 0
          && v65 == 2
          && ((int (__fastcall *)(struct IUnknown *, struct tagRECT *))v56->lpVtbl[1].QueryInterface)(v56, &v75) >= 0 )
        {
          v17 = v61;
          v18 = *(int (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)v61 + 80LL);
          v19 = v59;
          v59 = 0LL;
          if ( v19 )
            ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
          if ( v18(v17, &v59) >= 0
            && ((int (__fastcall *)(struct IUnknown *, struct tagRECT *))v59->lpVtbl[3].QueryInterface)(v59, &v74) >= 0 )
          {
            left = right - v54.left;
            v60.left = right - v54.left;
            top = bottom - v54.top;
            v60.top = bottom - v54.top;
            v58 = 0LL;
            AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v58);
            v23 = CDesktopPositioner::_GetMonitorFromRect(v64, v69, (struct IImmersiveMonitor **)AddressOf);
            v11 = v23;
            if ( v23 < 0 )
            {
              v24 = 3097LL;
LABEL_29:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v24,
                (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v23,
                (int)v52);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v58);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v59);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v56);
LABEL_89:
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v61);
              goto LABEL_90;
            }
            v25 = (unsigned int)SHIsSameObject(v59, v58) != 0;
            wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::operator=(&v57, v59);
            if ( !v25 && !LOBYTE(v53[0]) )
            {
              v23 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                      v26,
                      (struct IImmersiveMonitor *)v58,
                      (struct IImmersiveMonitor *)v59,
                      (struct tagSIZE *)&v60,
                      (enum TRY_POSITION_VIEW_FLAGS *)((char *)v53 + 4));
              v11 = v23;
              if ( v23 < 0 )
              {
                v24 = 3106LL;
                goto LABEL_29;
              }
              v9 = HIDWORD(v53[0]);
              top = v60.top;
              left = v60.left;
            }
            if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, unsigned int *))(*(_QWORD *)a2 + 104LL))(
                   a2,
                   &v62) >= 0
              && v62 )
            {
              v76 = 0LL;
              v55 = 0LL;
              if ( (*(int (__fastcall **)(struct IApplicationView *, LONG *))(*(_QWORD *)v61 + 392LL))(v61, &v60.right) >= 0 )
              {
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v55);
                if ( (int)CDesktopPositioner::_CreateTitlebarConfiguration(
                            v27,
                            v61,
                            (struct IApplicationViewTitlebarConfiguration **)&v55) >= 0 )
                {
                  v28 = v64;
                  LODWORD(v52) = 1;
                  if ( (*(int (__fastcall **)(_QWORD, struct IUnknown *, _QWORD, __int64))(**((_QWORD **)v64 + 37) + 72LL))(
                         *((_QWORD *)v64 + 37),
                         v59,
                         0LL,
                         1LL) >= 0
                    && (*(int (__fastcall **)(struct IApplicationView *, bool *))(*(_QWORD *)v61 + 136LL))(v61, v71) >= 0 )
                  {
                    LOBYTE(v52) = v60.right != 0;
                    v54 = *WindowRelativePositioning::GetAdjacentPosition(
                             (WindowRelativePositioning *)&v54,
                             &v75,
                             &v60,
                             (const struct tagSIZE *)&v76,
                             v52,
                             v71[0],
                             *((const unsigned __int16 **)v28 + 38),
                             &v74,
                             v53[0]);
                    v9 |= 1u;
                    HIDWORD(v53[0]) = v9;
                    bottom = v54.bottom;
                    right = v54.right;
                  }
                }
              }
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v55);
            }
            else
            {
              ScaleFactorForRect = GetScaleFactorForRect(&v74);
              v54.left = v75.left + ScaleFactorForRect * (int)v63 / 100;
              v54.top = ScaleFactorForRect * HIDWORD(v63) / 100 + v75.top;
              right = v54.left + left;
              v54.right = v54.left + left;
              bottom = v54.top + top;
              v54.bottom = v54.top + top;
              v9 |= 1u;
              HIDWORD(v53[0]) = v9;
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v58);
            v7 = v64;
          }
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v59);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v56);
      }
    }
    v66 = 0LL;
    v30 = *(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v66);
    if ( v30(a2, &v66) >= 0 )
    {
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::com_ptr_t<IInspectable,wil::err_exception_policy>(
        &v64,
        v66);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        &v64,
        &v60);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v64);
      v31 = (*(__int64 (__fastcall **)(_QWORD, LONG *))(**(_QWORD **)&v60.left + 56LL))(
              *(_QWORD *)&v60.left,
              &v60.right);
      v11 = v31;
      if ( v31 < 0 )
      {
        v32 = 3156LL;
LABEL_50:
        v33 = (unsigned int)v31;
        goto LABEL_51;
      }
      if ( v60.right )
      {
        if ( v60.right > 1u )
        {
          v11 = -2147024809;
          v33 = 2147942487LL;
          v32 = 3160LL;
LABEL_51:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v32,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)v33,
            (int)v52);
LABEL_82:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v60.left);
LABEL_88:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v66);
          goto LABEL_89;
        }
        v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**(_QWORD **)&v60.left + 48LL))(
                *(_QWORD *)&v60.left,
                0LL,
                &v62);
        v11 = v31;
        if ( v31 < 0 )
        {
          v32 = 3163LL;
          goto LABEL_50;
        }
        v58 = 0LL;
        v34 = (__int64 *)*((_QWORD *)v7 + 43);
        v35 = *v34;
        v58 = 0LL;
        v36 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IUnknown **))(v35 + 32))(v34, 1LL, &v58);
        v11 = v36;
        if ( v36 < 0 )
        {
          v37 = 3166LL;
LABEL_58:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v37,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v36,
            (int)v52);
LABEL_81:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58);
          goto LABEL_82;
        }
        v38 = v58;
        Release = v58->lpVtbl[3].Release;
        v40 = v57;
        v57 = 0LL;
        if ( v40 )
          ((void (__fastcall *)(struct IUnknown *))v40->lpVtbl->Release)(v40);
        v36 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))Release)(v38, v62, &v57);
        v11 = v36;
        if ( v36 < 0 )
        {
          v37 = 3167LL;
          goto LABEL_58;
        }
        v56 = 0LL;
        v41 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v56);
        v42 = CDesktopPositioner::_GetMonitorFromRect(v7, v69, (struct IImmersiveMonitor **)v41);
        v11 = v42;
        if ( v42 < 0 )
        {
          v43 = 3170LL;
LABEL_80:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v43,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v42,
            (int)v52);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v56);
          goto LABEL_81;
        }
        v44 = (unsigned int)SHIsSameObject(v57, v56) != 0;
        if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v63) < 0 )
        {
          if ( !v44 )
          {
            v76 = v54;
            v42 = CDesktopPositioner::_MoveRectToMonitor(v7, (struct IImmersiveMonitor *)v57, &v76, &v54);
            v11 = v42;
            if ( v42 < 0 )
            {
              v43 = 3207LL;
              goto LABEL_80;
            }
            v9 |= 3u;
            HIDWORD(v53[0]) = v9;
            if ( !LOBYTE(v53[0]) )
            {
              v50 = v54.left;
              v55.cx = v54.right - v54.left;
              v51 = v54.top;
              v55.cy = v54.bottom - v54.top;
              v42 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                      v49,
                      (struct IImmersiveMonitor *)v56,
                      (struct IImmersiveMonitor *)v57,
                      &v55,
                      (enum TRY_POSITION_VIEW_FLAGS *)((char *)v53 + 4));
              v11 = v42;
              if ( v42 < 0 )
              {
                v43 = 3215LL;
                goto LABEL_80;
              }
              v54.right = v50 + v55.cx;
              v54.bottom = v51 + v55.cy;
              v9 = HIDWORD(v53[0]);
            }
          }
        }
        else
        {
          v74 = 0LL;
          v42 = ((__int64 (__fastcall *)(struct IUnknown *, struct tagRECT *))v57->lpVtbl[3].Release)(v57, &v74);
          v11 = v42;
          if ( v42 < 0 )
          {
            v43 = 3177LL;
            goto LABEL_80;
          }
          cx = right - v54.left;
          v55.cx = cx;
          cy = bottom - v54.top;
          v55.cy = cy;
          if ( !v44 && !LOBYTE(v53[0]) )
          {
            v42 = CDesktopPositioner::_AdjustSizeForMonitorChange(
                    v45,
                    (struct IImmersiveMonitor *)v56,
                    (struct IImmersiveMonitor *)v57,
                    &v55,
                    (enum TRY_POSITION_VIEW_FLAGS *)((char *)v53 + 4));
            v11 = v42;
            if ( v42 < 0 )
            {
              v43 = 3190LL;
              goto LABEL_80;
            }
            v9 = HIDWORD(v53[0]);
            cy = v55.cy;
            cx = v55.cx;
          }
          v54.left = v63 + v74.left;
          v54.top = HIDWORD(v63) + v74.top;
          v54.right = cx + v63 + v74.left;
          v54.bottom = cy + HIDWORD(v63) + v74.top;
          v9 |= 3u;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v56);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v58);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v60.left);
    }
    v48 = v57;
    if ( v57 )
    {
      *v70 = (struct IImmersiveMonitor *)v57;
      ((void (__fastcall *)(struct IUnknown *))v48->lpVtbl->AddRef)(v48);
    }
    else
    {
      *v70 = 0LL;
    }
    *(_DWORD *)v72 = v9;
    *v73 = v54;
    if ( v9 )
    {
      v11 = 0;
    }
    else
    {
      v11 = -2147467260;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC9F,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)0x80004004LL,
        (int)v52);
    }
    goto LABEL_88;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE0,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)MonitorFromRect,
    (int)v52);
LABEL_90:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v57);
  return v11;
}
