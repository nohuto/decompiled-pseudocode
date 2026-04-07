/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18000E264
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000D750 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000DB94 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18000E350 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000F950 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800D9574 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800D95C0 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x1800D95F0 (--0CFade@@IEAA@XZ.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x1800D9620 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x1800D9650 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x1800D9680 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CInputView_SizeOrModeChangeBase@@QEAA@XZ @ 0x1800D96F4 (--0CInputView_SizeOrModeChangeBase@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800D9728 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x1800D9768 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x1800D97A0 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x1800D97D0 (--0CSlide@@IEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x1800D9808 (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x1800D9838 (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800D9870 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  CStoryboard *v6; // rax
  CStoryboard *v7; // rbx
  void **v8; // rax
  void **v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  CFlyoutPopup *v21; // rax
  CFlyoutPopup *v22; // rax
  CSlideOut *v23; // rax
  void **v24; // rcx
  CSlideOut *v25; // rax
  CCrossFade *v26; // rax
  CStoryboard *v27; // rax
  CSlideIn *v28; // rax
  CSlideIn *v29; // rbx
  CFadeOut *v30; // rax
  CFadeIn *v31; // rax
  CSlide *v32; // rax
  CCrossFade *v33; // rax
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  CAppArrangementBase *v40; // rax
  void **v41; // rcx
  CStoryboard *v42; // rax
  CStoryboard *v43; // rax
  CLaunchSwitchBase *v44; // rax
  CLaunchSwitchBase *v45; // rax
  CLauncherAnimationBase *v46; // rax
  CLauncherAnimationBase *v47; // rax
  CAppArrangementBase *v48; // rax
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  CStoryboard *v57; // rax
  CStoryboard *v58; // rax
  CStoryboard *v59; // rax
  CStoryboard *v60; // rax
  CStoryboard *v61; // rax
  CPanelAnimation *v62; // rax
  void **v63; // rcx
  CPanelAnimation *v64; // rax
  CStoryboard *v65; // rax
  CStoryboard *v66; // rax
  void **v67; // rcx
  CSlideOut *v68; // rax
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  CInputView_SizeOrModeChangeBase *v76; // rax
  CInputView_SizeOrModeChangeBase *v77; // rax
  CInputView_SizeOrModeChangeBase *v78; // rax
  CStoryboard *v79; // rax
  CStoryboard *v80; // rax
  CStoryboard *v81; // rax
  __int64 v82; // rcx
  CStoryboard *v83; // rax
  CVirtualDesktopSwitch *v84; // rax

  *a3 = 0LL;
  if ( a1 > 68 )
  {
    if ( a1 > 83 )
    {
      v69 = a1 - 90;
      if ( !v69 )
      {
        v84 = (CVirtualDesktopSwitch *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                         WPF::g_pProcessHeap,
                                         192LL);
        if ( !v84 )
          goto LABEL_14;
        v26 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v84);
        goto LABEL_130;
      }
      v70 = v69 - 1;
      if ( v70 )
      {
        v71 = v70 - 1;
        if ( !v71 )
        {
          v81 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 136LL);
          v7 = v81;
          if ( v81 )
          {
            CStoryboard::CStoryboard(v81, 0);
            *(_BYTE *)(v82 + 128) = 1;
            *(_QWORD *)v82 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
            v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            goto LABEL_8;
          }
          goto LABEL_14;
        }
        v72 = v71 - 1;
        if ( !v72 )
        {
          v80 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 128LL);
          v7 = v80;
          if ( v80 )
          {
            CStoryboard::CStoryboard(v80, 0);
            v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v9 = &CTabSwitch::`vftable'{for `CBaseObject'};
            goto LABEL_7;
          }
          goto LABEL_14;
        }
        v73 = v72 - 10;
        if ( v73 )
        {
          v74 = v73 - 2;
          if ( !v74 )
          {
            v78 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                       WPF::g_pProcessHeap,
                                                       128LL);
            v7 = v78;
            if ( v78 )
            {
              CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v78);
              v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
              v9 = &CInputView_DockedToFloating::`vftable'{for `CBaseObject'};
              goto LABEL_7;
            }
            goto LABEL_14;
          }
          v75 = v74 - 1;
          if ( !v75 )
          {
            v77 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                       WPF::g_pProcessHeap,
                                                       128LL);
            v7 = v77;
            if ( v77 )
            {
              CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v77);
              v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
              v9 = &CInputView_FloatingToDocked::`vftable'{for `CBaseObject'};
              goto LABEL_7;
            }
            goto LABEL_14;
          }
          if ( v75 == 1 )
          {
            v76 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                       WPF::g_pProcessHeap,
                                                       128LL);
            v7 = v76;
            if ( v76 )
            {
              CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v76);
              v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
              v9 = &CInputView_SizeChangeOnly::`vftable'{for `CBaseObject'};
              goto LABEL_7;
            }
            goto LABEL_14;
          }
          goto LABEL_63;
        }
        v79 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                               WPF::g_pProcessHeap,
                               136LL);
        v7 = v79;
        if ( !v79 )
          goto LABEL_14;
        memset_0(v79, 0, 0x88uLL);
        CSlideIn::CSlideIn(v7);
        v24 = &CInputView::`vftable'{for `CBaseObject'};
LABEL_31:
        *(_QWORD *)v7 = v24;
        *((_QWORD *)v7 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *((_BYTE *)v7 + 68) = 1;
        goto LABEL_9;
      }
      v83 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
      v7 = v83;
      if ( !v83 )
        goto LABEL_14;
      CStoryboard::CStoryboard(v83, 0);
      v67 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
    }
    else
    {
      if ( a1 == 83 )
      {
        v68 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             144LL);
        v7 = v68;
        if ( !v68 )
          goto LABEL_14;
        CSlideOut::CSlideOut(v68);
        v24 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
        goto LABEL_31;
      }
      v49 = a1 - 69;
      if ( v49 )
      {
        v50 = v49 - 1;
        if ( !v50 )
        {
          v65 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 128LL);
          v7 = v65;
          if ( v65 )
          {
            memset_0(v65, 0, 0x80uLL);
            CFade::CFade(v7);
            v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v9 = &CChangePanel::`vftable'{for `CBaseObject'};
            goto LABEL_7;
          }
          goto LABEL_14;
        }
        v51 = v50 - 1;
        if ( v51 )
        {
          v52 = v51 - 1;
          if ( v52 )
          {
            v53 = v52 - 3;
            if ( !v53 )
            {
              v61 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     128LL);
              v7 = v61;
              if ( v61 )
              {
                memset_0(v61, 0, 0x80uLL);
                CCrossFade::CCrossFade(v7);
                v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                v9 = &CSSCrossFade::`vftable'{for `CBaseObject'};
                goto LABEL_7;
              }
              goto LABEL_14;
            }
            v54 = v53 - 2;
            if ( !v54 )
            {
              v60 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     128LL);
              v7 = v60;
              if ( v60 )
              {
                CStoryboard::CStoryboard(v60, 0);
                v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                v9 = &CInplaceResize::`vftable'{for `CBaseObject'};
                goto LABEL_7;
              }
              goto LABEL_14;
            }
            v55 = v54 - 1;
            if ( v55 )
            {
              v56 = v55 - 3;
              if ( !v56 )
              {
                v58 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       128LL);
                v7 = v58;
                if ( v58 )
                {
                  memset_0(v58, 0, 0x80uLL);
                  CFadeOut::CFadeOut(v7);
                  v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                  v9 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
                  goto LABEL_7;
                }
                goto LABEL_14;
              }
              if ( v56 != 1 )
                goto LABEL_63;
              v57 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     136LL);
              v7 = v57;
              if ( !v57 )
                goto LABEL_14;
              memset_0(v57, 0, 0x88uLL);
              CSlideIn::CSlideIn(v7);
              v24 = &CSlideInCharm::`vftable'{for `CBaseObject'};
            }
            else
            {
              v59 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     136LL);
              v7 = v59;
              if ( !v59 )
                goto LABEL_14;
              memset_0(v59, 0, 0x88uLL);
              CSlideIn::CSlideIn(v7);
              v24 = &CDialogSwitch::`vftable'{for `CBaseObject'};
            }
            goto LABEL_31;
          }
          v62 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     160LL);
          v7 = v62;
          if ( !v62 )
            goto LABEL_14;
          CPanelAnimation::CPanelAnimation(v62);
          v63 = &CShrinkPanel::`vftable'{for `CBaseObject'};
        }
        else
        {
          v64 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     160LL);
          v7 = v64;
          if ( !v64 )
            goto LABEL_14;
          CPanelAnimation::CPanelAnimation(v64);
          v63 = &CGrowPanel::`vftable'{for `CBaseObject'};
        }
        *(_QWORD *)v7 = v63;
        *((_QWORD *)v7 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *((_BYTE *)v7 + 136) = 0;
        *(_QWORD *)((char *)v7 + 140) = 0LL;
        *(_QWORD *)((char *)v7 + 148) = 0LL;
        goto LABEL_9;
      }
      v66 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
      v7 = v66;
      if ( !v66 )
        goto LABEL_14;
      CStoryboard::CStoryboard(v66, 0);
      v67 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
    }
    *(_QWORD *)v7 = v67;
    *((_QWORD *)v7 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
    *((_BYTE *)v7 + 128) = 0;
    goto LABEL_9;
  }
  if ( a1 == 68 )
  {
    v48 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                                   WPF::g_pProcessHeap,
                                   192LL);
    v7 = v48;
    if ( v48 )
    {
      CAppArrangementBase::CAppArrangementBase(v48, 1);
      v41 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
      goto LABEL_55;
    }
LABEL_14:
    v7 = 0LL;
    goto LABEL_9;
  }
  if ( a1 <= 34 )
  {
    if ( a1 == 34 )
    {
      v33 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            128LL);
      if ( !v33 )
        goto LABEL_14;
      v26 = CCrossFade::CCrossFade(v33);
    }
    else
    {
      v13 = a1 - 3;
      if ( !v13 )
      {
        v32 = (CSlide *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          136LL);
        v7 = v32;
        if ( v32 )
        {
          CSlide::CSlide(v32);
          v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
          v9 = &CReposition::`vftable'{for `CBaseObject'};
          goto LABEL_7;
        }
        goto LABEL_14;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 9;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( !v17 )
            {
              v27 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     136LL);
              v7 = v27;
              if ( !v27 )
                goto LABEL_14;
              memset_0(v27, 0, 0x88uLL);
              CSlideIn::CSlideIn(v7);
              v24 = &CSlideInLong::`vftable'{for `CBaseObject'};
              goto LABEL_31;
            }
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( !v20 )
                {
                  v22 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                          WPF::g_pProcessHeap,
                                          128LL);
                  v7 = v22;
                  if ( v22 )
                  {
                    CFlyoutPopup::CFlyoutPopup(v22);
                    v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                    v9 = &CShowPopup::`vftable'{for `CBaseObject'};
                    goto LABEL_7;
                  }
                  goto LABEL_14;
                }
                if ( v20 == 1 )
                {
                  v21 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                          WPF::g_pProcessHeap,
                                          128LL);
                  v7 = v21;
                  if ( v21 )
                  {
                    CFlyoutPopup::CFlyoutPopup(v21);
                    v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
                    v9 = &CHidePopup::`vftable'{for `CBaseObject'};
                    goto LABEL_7;
                  }
                  goto LABEL_14;
                }
                goto LABEL_63;
              }
              v23 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                                   WPF::g_pProcessHeap,
                                   144LL);
              v7 = v23;
              if ( !v23 )
                goto LABEL_14;
              CSlideOut::CSlideOut(v23);
              v24 = &CSlideOutLong::`vftable'{for `CBaseObject'};
              goto LABEL_31;
            }
            v25 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 144LL);
            if ( !v25 )
              goto LABEL_14;
            v26 = CSlideOut::CSlideOut(v25);
          }
          else
          {
            v28 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                WPF::g_pProcessHeap,
                                136LL);
            v29 = v28;
            if ( !v28 )
              goto LABEL_14;
            memset_0(v28, 0, 0x88uLL);
            v26 = CSlideIn::CSlideIn(v29);
          }
        }
        else
        {
          v30 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              128LL);
          if ( !v30 )
            goto LABEL_14;
          v26 = CFadeOut::CFadeOut(v30);
        }
      }
      else
      {
        v31 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           128LL);
        if ( !v31 )
          goto LABEL_14;
        v26 = CFadeIn::CFadeIn(v31);
      }
    }
LABEL_130:
    v7 = v26;
    goto LABEL_9;
  }
  v5 = a1 - 50;
  if ( !v5 )
  {
    v6 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
    v7 = v6;
    if ( v6 )
    {
      CStoryboard::CStoryboard(v6, 0);
      v8 = &CStoryboard::`vftable'{for `IAnimationListener'};
      v9 = &CWindowClose::`vftable'{for `CBaseObject'};
LABEL_7:
      *(_QWORD *)v7 = v9;
LABEL_8:
      *((_QWORD *)v7 + 2) = v8;
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  v34 = v5 - 6;
  if ( !v34 )
  {
    v47 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      144LL);
    v7 = v47;
    if ( v47 )
    {
      CLauncherAnimationBase::CLauncherAnimationBase(v47);
      v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
      v9 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
      goto LABEL_7;
    }
    goto LABEL_14;
  }
  v35 = v34 - 1;
  if ( v35 )
  {
    v36 = v35 - 1;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 5;
        if ( !v38 )
        {
          v43 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 128LL);
          v7 = v43;
          if ( v43 )
          {
            CStoryboard::CStoryboard(v43, 0);
            v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v9 = &CNoAnimation::`vftable'{for `CBaseObject'};
            goto LABEL_7;
          }
          goto LABEL_14;
        }
        v39 = v38 - 2;
        if ( !v39 )
        {
          v42 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 128LL);
          v7 = v42;
          if ( v42 )
          {
            memset_0(v42, 0, 0x80uLL);
            CFadeIn::CFadeIn(v7);
            v8 = &CAppLaunch::`vftable'{for `IAnimationListener'};
            v9 = &CTDBN::`vftable'{for `CBaseObject'};
            goto LABEL_7;
          }
          goto LABEL_14;
        }
        if ( v39 == 1 )
        {
          v40 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                         WPF::g_pProcessHeap,
                                         192LL);
          v7 = v40;
          if ( v40 )
          {
            CAppArrangementBase::CAppArrangementBase(v40, 0);
            v41 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
LABEL_55:
            *(_QWORD *)v7 = v41;
            *((_QWORD *)v7 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
            *((_QWORD *)v7 + 23) = 0LL;
            goto LABEL_9;
          }
          goto LABEL_14;
        }
LABEL_63:
        v11 = -2147024809;
        goto LABEL_133;
      }
      if ( !a2 )
        goto LABEL_63;
      v44 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                                   WPF::g_pProcessHeap,
                                   176LL);
      v7 = v44;
      if ( !v44 )
        goto LABEL_14;
      CLaunchSwitchBase::CLaunchSwitchBase(v44);
      *((_BYTE *)v7 + 168) = 1;
      *((_QWORD *)v7 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
      *(_QWORD *)v7 = &CAppSwitch::`vftable'{for `CBaseObject'};
    }
    else
    {
      if ( !a2 )
        goto LABEL_63;
      v45 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                                   WPF::g_pProcessHeap,
                                   176LL);
      v7 = v45;
      if ( !v45 )
        goto LABEL_14;
      CLaunchSwitchBase::CLaunchSwitchBase(v45);
      *((_BYTE *)v7 + 168) = 0;
      *((_QWORD *)v7 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
      *(_QWORD *)v7 = &CAppLaunch::`vftable'{for `CBaseObject'};
    }
  }
  else
  {
    v46 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      152LL);
    v7 = v46;
    if ( !v46 )
      goto LABEL_14;
    CLauncherAnimationBase::CLauncherAnimationBase(v46);
    *((_BYTE *)v7 + 144) = 0;
    *((_QWORD *)v7 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
    *(_QWORD *)v7 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
  }
LABEL_9:
  *a3 = v7;
  if ( v7 )
  {
    v10 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)v7 + 8LL))(v7);
    v11 = v10;
    if ( v10 >= 0 )
    {
      if ( a2 )
        CStoryboard::SetParentStoryboard(*a3, a2);
      return v11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x191Eu, 0LL);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x191Cu, 0LL);
  }
LABEL_133:
  if ( *a3 )
  {
    CStoryboard::Release(*a3);
    *a3 = 0LL;
  }
  return v11;
}
