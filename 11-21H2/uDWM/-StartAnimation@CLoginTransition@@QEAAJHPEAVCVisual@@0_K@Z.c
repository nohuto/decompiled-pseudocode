/*
 * XREFs of ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180045A10
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040370 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180014474 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180014FC4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18003F6F0 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18003FD6C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800455BC (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180047C44 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x1800481B0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180048534 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLoginTransition::StartAnimation(
        CLoginTransition *this,
        int a2,
        struct tagPOINT *a3,
        struct tagPOINT *a4,
        unsigned __int64 a5)
{
  int inserted; // edi
  int v10; // r10d
  CAnimatedTransitionVisual **v11; // rbx
  __int64 v12; // rcx
  CAnimatedTransitionVisual **v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct CVisual **v16; // r12
  CBaseObject *v17; // rcx
  CAnimatedTransitionVisual *v18; // r8
  int v19; // eax
  int v20; // eax
  CAnimatedTransitionVisual *v21; // r8
  int v22; // eax
  int v23; // eax
  CAnimatedTransitionVisual *v24; // rax
  CAnimatedTransitionVisual *v25; // rax
  CAnimatedTransitionVisual *v26; // rax
  CAnimatedTransitionVisual *v27; // rcx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v32; // r8
  unsigned int v33; // edx
  CAnimationEngine *v34; // r14
  unsigned int v36; // ecx
  unsigned int v37; // eax
  struct CAnimationEngine *v38; // [rsp+30h] [rbp-61h]
  struct tagPOINT v40; // [rsp+40h] [rbp-51h] BYREF
  _DWORD v41[2]; // [rsp+48h] [rbp-49h] BYREF
  __int128 v42; // [rsp+50h] [rbp-41h] BYREF
  __int64 v43; // [rsp+60h] [rbp-31h]
  unsigned int v44; // [rsp+68h] [rbp-29h]
  struct tagRECT v45; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v46[2]; // [rsp+80h] [rbp-11h] BYREF

  v42 = 0LL;
  v43 = 0LL;
  v44 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmLoginTransition_Start,
      (__int64)a3,
      1,
      (__int64)v46);
  *((_QWORD *)this + 10) = a5;
  *((_DWORD *)this + 18) = a2;
  v38 = CDesktopManager::AcquireAnimationEngine();
  if ( !v38 )
  {
    inserted = -2147024882;
    v10 = -2147024882;
    v36 = 46;
    v34 = 0LL;
    goto LABEL_47;
  }
  inserted = CLoginTransition::StopAnimation(this);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 49;
LABEL_55:
    v34 = v38;
    goto LABEL_47;
  }
  *((_QWORD *)this + 4) = a3;
  if ( a3 )
    _InterlockedAdd((volatile signed __int32 *)&a3[1], 1u);
  *((_QWORD *)this + 5) = a4;
  if ( a4 )
    _InterlockedAdd((volatile signed __int32 *)&a4[1], 1u);
  v11 = (CAnimatedTransitionVisual **)((char *)this + 8);
  v12 = *((_QWORD *)this + 1);
  if ( v12 )
  {
    CBaseObject::Release((CBaseObject *)(v12 + 8));
    *v11 = 0LL;
  }
  v13 = (CAnimatedTransitionVisual **)((char *)this + 16);
  v14 = *((_QWORD *)this + 2);
  if ( v14 )
  {
    CBaseObject::Release((CBaseObject *)(v14 + 8));
    *v13 = 0LL;
  }
  v15 = *((_QWORD *)this + 3);
  if ( v15 )
  {
    CBaseObject::Release((CBaseObject *)(v15 + 8));
    *((_QWORD *)this + 3) = 0LL;
  }
  v16 = (struct CVisual **)((char *)this + 48);
  v17 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *v16 = 0LL;
  }
  inserted = CVisual::Create((struct CVisual **)this + 6);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 67;
    goto LABEL_55;
  }
  inserted = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 68;
    goto LABEL_55;
  }
  inserted = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)this + 2);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 69;
    goto LABEL_55;
  }
  v40.x = -32000;
  v40.y = -32000;
  CVisual::SetOffset(a3, &v40);
  CVisual::SetOffset(a4, &v40);
  v45 = *(struct tagRECT *)((char *)CDesktopManager::s_pDesktopManagerInstance + 388);
  inserted = CAnimatedTransitionVisual::SetVisual(*v11, (struct CVisual *)a3, 1, &v45);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 83;
    goto LABEL_55;
  }
  inserted = CAnimatedTransitionVisual::SetVisual(*v13, (struct CVisual *)a4, 0, &v45);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 84;
    goto LABEL_55;
  }
  inserted = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
               (CCachedVisualImageProxy **)*v11,
               (struct CVisual *)a3,
               &v45);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 91;
    goto LABEL_55;
  }
  v18 = *v11;
  v19 = 0;
  if ( v45.right - v45.left >= 0 )
    v19 = v45.right - v45.left;
  v41[0] = v19;
  v20 = 0;
  if ( v45.bottom - v45.top >= 0 )
    v20 = v45.bottom - v45.top;
  v41[1] = v20;
  (*(void (__fastcall **)(__int64, _DWORD *))(*((_QWORD *)v18 + 1) + 96LL))((__int64)v18 + 8, v41);
  v21 = *v13;
  v22 = 0;
  if ( v45.right - v45.left >= 0 )
    v22 = v45.right - v45.left;
  LODWORD(v46[0]) = v22;
  v23 = 0;
  if ( v45.bottom - v45.top >= 0 )
    v23 = v45.bottom - v45.top;
  HIDWORD(v46[0]) = v23;
  (*(void (__fastcall **)(__int64, _QWORD *))(*((_QWORD *)v21 + 1) + 96LL))((__int64)v21 + 8, v46);
  v24 = *v11;
  *((_DWORD *)v24 + 184) = a2;
  *((_DWORD *)v24 + 185) = 2;
  v25 = *v13;
  *((_DWORD *)v25 + 184) = a2;
  *((_DWORD *)v25 + 185) = 1;
  CAnimatedTransitionVisual::SetBeginRect(*v11, &v45);
  CAnimatedTransitionVisual::SetBeginRect(*v13, &v45);
  v26 = *v11;
  *(struct tagRECT *)((char *)v26 + 872) = v45;
  CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v26 + 8), 4096);
  v27 = *v13;
  *(struct tagRECT *)((char *)v27 + 872) = v45;
  CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v27 + 8), 4096);
  CAnimatedTransitionVisual::SetBeginAlpha(*v13, 0.0);
  v28 = v45.right - v45.left;
  if ( v45.right - v45.left < 0 )
    v28 = 0;
  LODWORD(v46[0]) = v28;
  v29 = v45.bottom - v45.top;
  if ( v45.bottom - v45.top < 0 )
    v29 = 0;
  HIDWORD(v46[0]) = v29;
  v30 = v46[0];
  *((_QWORD *)*v13 + 119) = v46[0];
  *((_QWORD *)*v11 + 119) = v30;
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                                       *((_QWORD *)this + 10));
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
               *v16,
               0LL,
               0,
               1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 112;
    goto LABEL_55;
  }
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)*v16 + 32),
               (struct CVisual *)(((unsigned __int64)*v11 + 8) & -(__int64)(*v11 != 0LL)),
               0LL,
               0,
               1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 113;
    goto LABEL_55;
  }
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)*v16 + 32),
               (struct CVisual *)(((unsigned __int64)*v13 + 8) & -(__int64)(*v13 != 0LL)),
               0LL,
               0,
               1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 114;
    goto LABEL_55;
  }
  inserted = CVisual::MoveToFront(*v16, 0);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 117;
    goto LABEL_55;
  }
  v46[0] = *v11;
  inserted = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v42, 8u, 1, v46);
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xC0u);
    v36 = 119;
LABEL_67:
    v10 = inserted;
    v34 = v38;
    goto LABEL_47;
  }
  v32 = *v13;
  v46[0] = *v13;
  v33 = v44 + 1;
  if ( v44 + 1 < v44 )
  {
    inserted = -2147024362;
    v37 = 181;
    goto LABEL_66;
  }
  if ( v33 <= HIDWORD(v43) )
  {
    *(_QWORD *)(v42 + 8LL * v44) = v32;
    v44 = v33;
    goto LABEL_43;
  }
  inserted = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v42, 8u, 1, v46);
  if ( inserted < 0 )
  {
    v37 = 192;
LABEL_66:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v37);
    v36 = 120;
    goto LABEL_67;
  }
LABEL_43:
  v34 = v38;
  inserted = CAnimationEngine::RegisterForAnimationCompleteNotification(v38, this);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v36 = 124;
  }
  else
  {
    inserted = CAnimationEngine::ScheduleStartAnimation(v38, a2);
    v10 = inserted;
    if ( inserted < 0 )
    {
      v36 = 127;
    }
    else
    {
      inserted = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
      v10 = inserted;
      if ( inserted >= 0 )
      {
        *((_BYTE *)this + 68) = 1;
LABEL_48:
        CAnimationEngine::Release(v34);
        goto LABEL_49;
      }
      v36 = 131;
    }
  }
LABEL_47:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v36);
  CLoginTransition::_CleanupAnimation(this);
  if ( v34 )
    goto LABEL_48;
LABEL_49:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v42);
  return (unsigned int)inserted;
}
