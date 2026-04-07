/*
 * XREFs of ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800D506C
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800A6F48 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800D446C (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CCrossFade@@QEAA@XZ @ 0x1800D44B8 (--0CCrossFade@@QEAA@XZ.c)
 *     ??0CFade@@IEAA@XZ @ 0x1800D44E8 (--0CFade@@IEAA@XZ.c)
 *     ??0CFadeIn@@QEAA@XZ @ 0x1800D4518 (--0CFadeIn@@QEAA@XZ.c)
 *     ??0CFadeOut@@QEAA@XZ @ 0x1800D4548 (--0CFadeOut@@QEAA@XZ.c)
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x1800D4578 (--0CFlyoutPopup@@IEAA@XZ.c)
 *     ??0CInputView_SizeOrModeChangeBase@@QEAA@XZ @ 0x1800D45EC (--0CInputView_SizeOrModeChangeBase@@QEAA@XZ.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800D4620 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 *     ??0CLauncherAnimationBase@@IEAA@XZ @ 0x1800D4660 (--0CLauncherAnimationBase@@IEAA@XZ.c)
 *     ??0CPanelAnimation@@QEAA@XZ @ 0x1800D4698 (--0CPanelAnimation@@QEAA@XZ.c)
 *     ??0CSlide@@IEAA@XZ @ 0x1800D46C8 (--0CSlide@@IEAA@XZ.c)
 *     ??0CSlideIn@@QEAA@XZ @ 0x1800D4700 (--0CSlideIn@@QEAA@XZ.c)
 *     ??0CSlideOut@@QEAA@XZ @ 0x1800D4730 (--0CSlideOut@@QEAA@XZ.c)
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x1800D4768 (--0CStoryboard@@IEAA@_N@Z.c)
 *     ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800D47D8 (--0CVirtualDesktopSwitch@@QEAA@XZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x1800D86A0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x1800D8C18 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CStoryboardFactory::Create(int a1, struct CStoryboard *a2, struct CStoryboard **a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  CFlyoutPopup *v13; // rax
  CInputView_SizeOrModeChangeBase *v14; // rbx
  void **v15; // rcx
  CFlyoutPopup *v16; // rax
  CSlideOut *v17; // rax
  void **v18; // rcx
  CSlideOut *v19; // rax
  CCrossFade *v20; // rax
  CInputView_SizeOrModeChangeBase *v21; // rax
  CSlideIn *v22; // rax
  CSlideIn *v23; // rbx
  CFadeOut *v24; // rax
  CFadeIn *v25; // rax
  CSlide *v26; // rax
  CCrossFade *v27; // rax
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  CAppArrangementBase *v35; // rax
  void **v36; // rcx
  CInputView_SizeOrModeChangeBase *v37; // rax
  CStoryboard *v38; // rax
  CLaunchSwitchBase *v39; // rax
  int v40; // ebx
  CLaunchSwitchBase *v41; // rax
  CLauncherAnimationBase *v42; // rax
  CLauncherAnimationBase *v43; // rax
  CStoryboard *v44; // rax
  CAppArrangementBase *v45; // rax
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  CInputView_SizeOrModeChangeBase *v54; // rax
  CInputView_SizeOrModeChangeBase *v55; // rax
  CInputView_SizeOrModeChangeBase *v56; // rax
  CStoryboard *v57; // rax
  CInputView_SizeOrModeChangeBase *v58; // rax
  CPanelAnimation *v59; // rax
  void **v60; // rcx
  CPanelAnimation *v61; // rax
  CInputView_SizeOrModeChangeBase *v62; // rax
  CStoryboard *v63; // rax
  void **v64; // rcx
  CSlideOut *v65; // rax
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  CInputView_SizeOrModeChangeBase *v73; // rax
  CInputView_SizeOrModeChangeBase *v74; // rax
  CInputView_SizeOrModeChangeBase *v75; // rax
  CInputView_SizeOrModeChangeBase *v76; // rax
  CStoryboard *v77; // rax
  CStoryboard *v78; // rax
  __int64 v79; // rcx
  CStoryboard *v80; // rax
  CVirtualDesktopSwitch *v81; // rax
  unsigned int v82; // eax
  int v83; // r10d

  *a3 = 0LL;
  if ( a1 > 68 )
  {
    if ( a1 > 83 )
    {
      v66 = a1 - 90;
      if ( !v66 )
      {
        v81 = (CVirtualDesktopSwitch *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
                                         WPF::g_pProcessHeap,
                                         192LL);
        if ( !v81 )
          goto LABEL_125;
        v20 = CVirtualDesktopSwitch::CVirtualDesktopSwitch(v81);
        goto LABEL_124;
      }
      v67 = v66 - 1;
      if ( v67 )
      {
        v68 = v67 - 1;
        if ( v68 )
        {
          v69 = v68 - 1;
          if ( v69 )
          {
            v70 = v69 - 11;
            if ( v70 )
            {
              v71 = v70 - 2;
              if ( v71 )
              {
                v72 = v71 - 1;
                if ( v72 )
                {
                  if ( v72 != 1 )
                    return (unsigned int)-2147024809;
                  v73 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                             WPF::g_pProcessHeap,
                                                             128LL);
                  v14 = v73;
                  if ( v73 )
                  {
                    CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v73);
                    v15 = &CInputView_SizeChangeOnly::`vftable'{for `CBaseObject'};
                    goto LABEL_16;
                  }
                }
                else
                {
                  v74 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                             WPF::g_pProcessHeap,
                                                             128LL);
                  v14 = v74;
                  if ( v74 )
                  {
                    CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v74);
                    v15 = &CInputView_FloatingToDocked::`vftable'{for `CBaseObject'};
                    goto LABEL_16;
                  }
                }
              }
              else
              {
                v75 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                           WPF::g_pProcessHeap,
                                                           128LL);
                v14 = v75;
                if ( v75 )
                {
                  CInputView_SizeOrModeChangeBase::CInputView_SizeOrModeChangeBase(v75);
                  v15 = &CInputView_DockedToFloating::`vftable'{for `CBaseObject'};
                  goto LABEL_16;
                }
              }
            }
            else
            {
              v76 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                         WPF::g_pProcessHeap,
                                                         136LL);
              v14 = v76;
              if ( v76 )
              {
                memset_0(v76, 0, 0x88uLL);
                CSlideIn::CSlideIn(v14);
                v18 = &CInputView::`vftable'{for `CBaseObject'};
                goto LABEL_22;
              }
            }
          }
          else
          {
            v77 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                                   WPF::g_pProcessHeap,
                                   128LL);
            v14 = v77;
            if ( v77 )
            {
              CStoryboard::CStoryboard(v77, 0);
              v15 = &CTabSwitch::`vftable'{for `CBaseObject'};
              goto LABEL_16;
            }
          }
        }
        else
        {
          v78 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                 WPF::g_pProcessHeap,
                                 136LL);
          v14 = v78;
          if ( v78 )
          {
            CStoryboard::CStoryboard(v78, 0);
            *(_BYTE *)(v79 + 128) = 1;
            *(_QWORD *)v79 = &CPPIWorkAreaResize::`vftable'{for `CBaseObject'};
            goto LABEL_17;
          }
        }
        goto LABEL_125;
      }
      v80 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
      v14 = v80;
      if ( !v80 )
        goto LABEL_125;
      CStoryboard::CStoryboard(v80, 0);
      v64 = &CTabletModeTransition::`vftable'{for `CBaseObject'};
    }
    else
    {
      if ( a1 == 83 )
      {
        v65 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             144LL);
        v14 = v65;
        if ( v65 )
        {
          CSlideOut::CSlideOut(v65);
          v18 = &CSlideOutCharm::`vftable'{for `CBaseObject'};
          goto LABEL_22;
        }
        goto LABEL_125;
      }
      v46 = a1 - 69;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( !v47 )
        {
          v62 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                     WPF::g_pProcessHeap,
                                                     128LL);
          v14 = v62;
          if ( v62 )
          {
            memset_0(v62, 0, 0x80uLL);
            CFade::CFade(v14);
            v15 = &CChangePanel::`vftable'{for `CBaseObject'};
            goto LABEL_16;
          }
          goto LABEL_125;
        }
        v48 = v47 - 1;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            v50 = v49 - 3;
            if ( v50 )
            {
              v51 = v50 - 2;
              if ( v51 )
              {
                v52 = v51 - 1;
                if ( v52 )
                {
                  v53 = v52 - 3;
                  if ( v53 )
                  {
                    if ( v53 != 1 )
                      return (unsigned int)-2147024809;
                    v54 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                               WPF::g_pProcessHeap,
                                                               136LL);
                    v14 = v54;
                    if ( v54 )
                    {
                      memset_0(v54, 0, 0x88uLL);
                      CSlideIn::CSlideIn(v14);
                      v18 = &CSlideInCharm::`vftable'{for `CBaseObject'};
                      goto LABEL_22;
                    }
                  }
                  else
                  {
                    v55 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                               WPF::g_pProcessHeap,
                                                               128LL);
                    v14 = v55;
                    if ( v55 )
                    {
                      memset_0(v55, 0, 0x80uLL);
                      CFadeOut::CFadeOut(v14);
                      v15 = &CScreenshotFadeOut::`vftable'{for `CBaseObject'};
                      goto LABEL_16;
                    }
                  }
                }
                else
                {
                  v56 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                             WPF::g_pProcessHeap,
                                                             136LL);
                  v14 = v56;
                  if ( v56 )
                  {
                    memset_0(v56, 0, 0x88uLL);
                    CSlideIn::CSlideIn(v14);
                    v18 = &CDialogSwitch::`vftable'{for `CBaseObject'};
                    goto LABEL_22;
                  }
                }
              }
              else
              {
                v57 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                       WPF::g_pProcessHeap,
                                       128LL);
                v14 = v57;
                if ( v57 )
                {
                  CStoryboard::CStoryboard(v57, 0);
                  v15 = &CInplaceResize::`vftable'{for `CBaseObject'};
                  goto LABEL_16;
                }
              }
            }
            else
            {
              v58 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                         WPF::g_pProcessHeap,
                                                         128LL);
              v14 = v58;
              if ( v58 )
              {
                memset_0(v58, 0, 0x80uLL);
                CCrossFade::CCrossFade(v14);
                v15 = &CSSCrossFade::`vftable'{for `CBaseObject'};
                goto LABEL_16;
              }
            }
            goto LABEL_125;
          }
          v59 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     160LL);
          v14 = v59;
          if ( !v59 )
            goto LABEL_125;
          CPanelAnimation::CPanelAnimation(v59);
          v60 = &CShrinkPanel::`vftable'{for `CBaseObject'};
        }
        else
        {
          v61 = (CPanelAnimation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     160LL);
          v14 = v61;
          if ( !v61 )
            goto LABEL_125;
          CPanelAnimation::CPanelAnimation(v61);
          v60 = &CGrowPanel::`vftable'{for `CBaseObject'};
        }
        *(_QWORD *)v14 = v60;
        *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *((_BYTE *)v14 + 136) = 0;
        *(_QWORD *)((char *)v14 + 140) = 0LL;
        *(_QWORD *)((char *)v14 + 148) = 0LL;
        goto LABEL_126;
      }
      v63 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             136LL);
      v14 = v63;
      if ( !v63 )
        goto LABEL_125;
      CStoryboard::CStoryboard(v63, 0);
      v64 = &CAppLaunchSwitch::`vftable'{for `CBaseObject'};
    }
    *(_QWORD *)v14 = v64;
    *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
    *((_BYTE *)v14 + 128) = 0;
    goto LABEL_126;
  }
  if ( a1 == 68 )
  {
    v45 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                                   WPF::g_pProcessHeap,
                                   192LL);
    v14 = v45;
    if ( !v45 )
      goto LABEL_125;
    CAppArrangementBase::CAppArrangementBase(v45, 1);
    v36 = &CAppArrangementDelayed::`vftable'{for `CBaseObject'};
    goto LABEL_47;
  }
  if ( a1 > 34 )
  {
    v28 = a1 - 50;
    if ( !v28 )
    {
      v44 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             128LL);
      v14 = v44;
      if ( v44 )
      {
        CStoryboard::CStoryboard(v44, 0);
        v15 = &CWindowClose::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_125;
    }
    v29 = v28 - 6;
    if ( !v29 )
    {
      v43 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                        WPF::g_pProcessHeap,
                                        144LL);
      v14 = v43;
      if ( v43 )
      {
        CLauncherAnimationBase::CLauncherAnimationBase(v43);
        v15 = &CLauncherLaunch::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_125;
    }
    v30 = v29 - 1;
    if ( !v30 )
    {
      v42 = (CLauncherAnimationBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                        WPF::g_pProcessHeap,
                                        152LL);
      v14 = v42;
      if ( v42 )
      {
        CLauncherAnimationBase::CLauncherAnimationBase(v42);
        *((_BYTE *)v14 + 144) = 0;
        *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *(_QWORD *)v14 = &CLauncherDismiss::`vftable'{for `CBaseObject'};
        goto LABEL_126;
      }
      goto LABEL_125;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      if ( a2 )
      {
        v41 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     176LL);
        v14 = v41;
        if ( v41 )
        {
          CLaunchSwitchBase::CLaunchSwitchBase(v41);
          *((_BYTE *)v14 + 168) = 0;
          *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          *(_QWORD *)v14 = &CAppLaunch::`vftable'{for `CBaseObject'};
          goto LABEL_126;
        }
        goto LABEL_125;
      }
      return (unsigned int)-2147024809;
    }
    v32 = v31 - 1;
    if ( !v32 )
    {
      if ( a2 )
      {
        v39 = (CLaunchSwitchBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                                     WPF::g_pProcessHeap,
                                     176LL);
        v14 = v39;
        if ( v39 )
        {
          CLaunchSwitchBase::CLaunchSwitchBase(v39);
          *((_BYTE *)v14 + 168) = 1;
          *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
          *(_QWORD *)v14 = &CAppSwitch::`vftable'{for `CBaseObject'};
          goto LABEL_126;
        }
        goto LABEL_125;
      }
      return (unsigned int)-2147024809;
    }
    v33 = v32 - 5;
    if ( !v33 )
    {
      v38 = (CStoryboard *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             128LL);
      v14 = v38;
      if ( v38 )
      {
        CStoryboard::CStoryboard(v38, 0);
        v15 = &CNoAnimation::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_125;
    }
    v34 = v33 - 2;
    if ( !v34 )
    {
      v37 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                 WPF::g_pProcessHeap,
                                                 128LL);
      v14 = v37;
      if ( v37 )
      {
        memset_0(v37, 0, 0x80uLL);
        CFadeIn::CFadeIn(v14);
        v15 = &CTDBN::`vftable'{for `CBaseObject'};
        goto LABEL_16;
      }
      goto LABEL_125;
    }
    if ( v34 != 1 )
      return (unsigned int)-2147024809;
    v35 = (CAppArrangementBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                                   WPF::g_pProcessHeap,
                                   192LL);
    v14 = v35;
    if ( !v35 )
      goto LABEL_125;
    CAppArrangementBase::CAppArrangementBase(v35, 0);
    v36 = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
LABEL_47:
    *(_QWORD *)v14 = v36;
    *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
    *((_QWORD *)v14 + 23) = 0LL;
    goto LABEL_126;
  }
  if ( a1 == 34 )
  {
    v27 = (CCrossFade *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          128LL);
    if ( !v27 )
      goto LABEL_125;
    v20 = CCrossFade::CCrossFade(v27);
    goto LABEL_124;
  }
  v5 = a1 - 3;
  if ( !v5 )
  {
    v26 = (CSlide *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                      WPF::g_pProcessHeap,
                      136LL);
    v14 = v26;
    if ( v26 )
    {
      CSlide::CSlide(v26);
      v15 = &CReposition::`vftable'{for `CBaseObject'};
      goto LABEL_16;
    }
    goto LABEL_125;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v25 = (CFadeIn *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       128LL);
    if ( !v25 )
      goto LABEL_125;
    v20 = CFadeIn::CFadeIn(v25);
    goto LABEL_124;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v24 = (CFadeOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        128LL);
    if ( !v24 )
      goto LABEL_125;
    v20 = CFadeOut::CFadeOut(v24);
    goto LABEL_124;
  }
  v8 = v7 - 9;
  if ( !v8 )
  {
    v22 = (CSlideIn *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        136LL);
    v23 = v22;
    if ( !v22 )
      goto LABEL_125;
    memset_0(v22, 0, 0x88uLL);
    v20 = CSlideIn::CSlideIn(v23);
    goto LABEL_124;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          v16 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                                  WPF::g_pProcessHeap,
                                  128LL);
          v14 = v16;
          if ( v16 )
          {
            CFlyoutPopup::CFlyoutPopup(v16);
            v15 = &CShowPopup::`vftable'{for `CBaseObject'};
            goto LABEL_16;
          }
          goto LABEL_125;
        }
        if ( v12 == 1 )
        {
          v13 = (CFlyoutPopup *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                                  WPF::g_pProcessHeap,
                                  128LL);
          v14 = v13;
          if ( v13 )
          {
            CFlyoutPopup::CFlyoutPopup(v13);
            v15 = &CHidePopup::`vftable'{for `CBaseObject'};
LABEL_16:
            *(_QWORD *)v14 = v15;
LABEL_17:
            *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
            goto LABEL_126;
          }
          goto LABEL_125;
        }
        return (unsigned int)-2147024809;
      }
      v17 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           144LL);
      v14 = v17;
      if ( v17 )
      {
        CSlideOut::CSlideOut(v17);
        v18 = &CSlideOutLong::`vftable'{for `CBaseObject'};
LABEL_22:
        *(_QWORD *)v14 = v18;
        *((_QWORD *)v14 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
        *((_BYTE *)v14 + 68) = 1;
        goto LABEL_126;
      }
      goto LABEL_125;
    }
    v19 = (CSlideOut *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         144LL);
    if ( !v19 )
      goto LABEL_125;
    v20 = CSlideOut::CSlideOut(v19);
LABEL_124:
    v14 = v20;
    goto LABEL_126;
  }
  v21 = (CInputView_SizeOrModeChangeBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                             WPF::g_pProcessHeap,
                                             136LL);
  v14 = v21;
  if ( v21 )
  {
    memset_0(v21, 0, 0x88uLL);
    CSlideIn::CSlideIn(v14);
    v18 = &CSlideInLong::`vftable'{for `CBaseObject'};
    goto LABEL_22;
  }
LABEL_125:
  v14 = 0LL;
LABEL_126:
  *a3 = v14;
  if ( !v14 )
  {
    v40 = -2147024882;
    v82 = 6564;
    v83 = -2147024882;
    goto LABEL_130;
  }
  v40 = (*(__int64 (__fastcall **)(CInputView_SizeOrModeChangeBase *))(*(_QWORD *)v14 + 8LL))(v14);
  v83 = v40;
  if ( v40 < 0 )
  {
    v82 = 6566;
LABEL_130:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v83, v82);
    if ( *a3 )
    {
      CStoryboard::Release(*a3);
      *a3 = 0LL;
    }
    return (unsigned int)v40;
  }
  if ( a2 )
    CStoryboard::SetParentStoryboard(*a3, a2);
  return (unsigned int)v40;
}
