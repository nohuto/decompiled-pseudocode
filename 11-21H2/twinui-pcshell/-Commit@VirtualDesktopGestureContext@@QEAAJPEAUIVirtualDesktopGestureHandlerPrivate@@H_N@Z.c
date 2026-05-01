/*
 * XREFs of ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18054FF7C
 * Callers:
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x180551840 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180551920 (-FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5470 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$?0UISwitchThumbnailDeviceManager@@@?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UISwitchThumbnailDeviceManager@@@12@PEAPEAX@Z @ 0x1804A2C84 (--$-0UISwitchThumbnailDeviceManager@@@-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@QEAA@AEBV-$ComPtr.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x18054FC24 (-AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z.c)
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x180550300 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall VirtualDesktopGestureContext::Commit(
        VirtualDesktopGestureContext *this,
        struct IVirtualDesktopGestureHandlerPrivate *a2,
        int a3,
        bool a4)
{
  int v7; // edx
  __int64 v8; // r9
  int v9; // r15d
  VirtualDesktopGestureContext *v10; // r10
  int *v11; // rax
  int *v12; // rcx
  VirtualDesktopGestureContext *v13; // rdx
  int *v14; // r8
  int v15; // r11d
  int v16; // edx
  int v17; // ebx
  __int64 v18; // r8
  double v19; // xmm2_8
  double v20; // xmm3_8
  int v21; // eax
  unsigned int v22; // r14d
  bool v23; // zf
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64, _QWORD, __int64 *); // rbx
  int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rdi
  int (__fastcall *v29)(__int64, __int64, _QWORD, __int64 *); // rbx
  int v30; // eax
  VirtualDesktopGestureWindow **v32; // rbx
  VirtualDesktopGestureWindow **v33; // r14
  int v34; // eax
  unsigned int v35; // edi
  __int64 v36; // [rsp+30h] [rbp-30h] BYREF
  __int64 v37[3]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v39; // [rsp+90h] [rbp+30h] BYREF

  v7 = -a3;
  if ( !*((_BYTE *)this + 74) )
    v7 = a3;
  VirtualDesktopGestureContext::AddVelocityToHistory(this, v7);
  v9 = 0;
  v10 = (VirtualDesktopGestureContext *)((char *)this + 172);
  v11 = (int *)((char *)this + 112);
  v12 = (int *)((char *)this + 112);
  if ( (char *)this + 112 != (char *)this + 172 )
  {
    v13 = (VirtualDesktopGestureContext *)((char *)this + 116);
    if ( (VirtualDesktopGestureContext *)((char *)this + 116) != v10 )
    {
      v14 = (int *)((char *)this + 116);
      do
      {
        v8 = (__int64)v13 + 4;
        if ( (VirtualDesktopGestureContext *)((char *)v13 + 4) == v10 )
        {
          v8 = *(unsigned int *)v13;
          if ( (int)v8 >= *v11 )
          {
            if ( (int)v8 >= *v12 )
              v12 = v14;
          }
          else
          {
            v11 = v14;
          }
        }
        else
        {
          v15 = *(_DWORD *)v8;
          v16 = *(_DWORD *)v13;
          v17 = *v11;
          if ( *(_DWORD *)v8 >= v16 )
          {
            if ( v16 < v17 )
              v11 = v14;
            if ( v15 >= *v12 )
              v12 = (int *)v8;
          }
          else
          {
            if ( v15 < v17 )
              v11 = (int *)v8;
            if ( v16 >= *v12 )
              v12 = v14;
          }
          v14 = (int *)v8;
        }
        v13 = (VirtualDesktopGestureContext *)(v14 + 1);
        v14 = (int *)v13;
      }
      while ( v13 != v10 );
    }
  }
  v18 = (unsigned int)*v11;
  v19 = (double)(int)abs32(*v11) * 1000.0 / (double)*((int *)this + 14);
  v20 = (double)(int)abs32(*v12) * 1000.0 / (double)*((int *)this + 14);
  v21 = *((_DWORD *)this + 16);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v21 / (float)*((int *)this + 14)) & _xmm) <= 0.25 )
  {
    if ( v19 >= 0.2 && (int)v18 < 0 && v21 < 0 )
      goto LABEL_31;
    if ( v20 < 0.2 || *v12 <= 0 || v21 <= 0 )
      goto LABEL_43;
  }
  if ( v21 < 0 )
  {
LABEL_31:
    v22 = 4;
    v23 = *((_BYTE *)this + 71) == 0;
    goto LABEL_33;
  }
  v22 = 3;
  v23 = *((_BYTE *)this + 70) == 0;
LABEL_33:
  if ( !v23 )
  {
    v36 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
      0,
      v18,
      v8);
    v24 = *(_QWORD *)this;
    v25 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(**(_QWORD **)this + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v36);
    v26 = v25(v24, 0LL, &v36);
    v27 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56E,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v26);
LABEL_39:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v36);
      return v27;
    }
    v39 = 0LL;
    v28 = *(_QWORD *)this;
    v29 = *(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(**(_QWORD **)this + 64LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v39);
    if ( v29(v28, v36, v22, &v39) >= 0 )
    {
      v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)this + 72LL))(*(_QWORD *)this, 0LL, v39);
      v27 = v30;
      if ( v30 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x573,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v30);
        Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v39);
        goto LABEL_39;
      }
      v9 = 1;
      if ( v22 == 4 )
        v9 = -1;
    }
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v39);
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v36);
  }
LABEL_43:
  Microsoft::WRL::ComPtr<IDCompBatcher>::ComPtr<IDCompBatcher>(&v39, (__int64 *)this + 1);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v37, &v39, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v39);
  v32 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 10);
  v33 = &v32[*((_QWORD *)this + 11)];
  if ( v32 == v33 )
  {
LABEL_46:
    v35 = 0;
  }
  else
  {
    while ( 1 )
    {
      v34 = VirtualDesktopGestureWindow::Commit(*v32, a2, *((_DWORD *)this + 47), (float)v9, a4);
      v35 = v34;
      if ( v34 < 0 )
        break;
      if ( ++v32 == v33 )
        goto LABEL_46;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x589,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v34);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v37);
  return v35;
}
