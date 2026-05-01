/*
 * XREFs of ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1805C4460
 * Callers:
 *     ?BeginDragVisualHandoff@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPOINT@@PEAUITabletModeInputSource@@@Z @ 0x1805C3270 (-BeginDragVisualHandoff@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPO.c)
 *     ?MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z @ 0x1805C3E30 (-MoveSizeAttempted@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@@Z.c)
 *     ?ShowPlaceMode@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1805C4400 (-ShowPlaceMode@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1805C497C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CastToUnknown@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@IEAAPEAUIUnknown@@XZ @ 0x1800EB1E4 (-CastToUnknown@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarke.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z @ 0x1801078DC (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayout@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803F0F08 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180578AA8 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ @ 0x1805C3088 (--1WindowArrangementView_Show@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??4?$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeInputSource@@@Z @ 0x1805C30B4 (--4-$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeInputSource@@@Z.c)
 *     _lambda_3a6d53bdb7b70071c869d320bc39bec7_::operator() @ 0x1805C3114 (_lambda_3a6d53bdb7b70071c869d320bc39bec7_--operator().c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1805C3818 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1805C4864 (-StartActivity@WindowArrangementView_Show@TabletModeTelemetry@@QEAAXW4SHOW_WINDOW_ARRANGEMENT_VI.c)
 *     ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x1805C50C4 (-UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805D5D78 (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x1805D91B4 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TabletModeViewManager::ShowWindowArrangementView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT *a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        __int64 a9)
{
  int AppLayoutForDropFeedback; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  char v15; // r14
  __int64 *v16; // rax
  IUnknown *v17; // rdx
  IUnknown *v18; // rcx
  IUnknown *v19; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int Instance; // eax
  __int64 v22; // rdx
  const struct _GUID *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  IUnknown *v26; // rax
  __int64 v27; // r8
  DWORD v28; // edx
  IUnknown *punk; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT Point; // [rsp+50h] [rbp-B0h] BYREF
  IUnknown **v35[2]; // [rsp+58h] [rbp-A8h] BYREF
  char v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v38 = a4;
  v33 = a2;
  v37 = a6;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v39,
    (__int64)"WindowArrangementView_Show");
  v39[0] = (__int64)&TabletModeTelemetry::WindowArrangementView_Show::`vftable';
  TabletModeTelemetry::WindowArrangementView_Show::StartActivity(v39, a7, a8);
  v32 = 0LL;
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v32, a3);
  }
  else
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
    AppLayoutForDropFeedback = TabletModeViewManager::GetAppLayoutForDropFeedback(a1, a2, a7, &v32);
    v13 = AppLayoutForDropFeedback;
    if ( AppLayoutForDropFeedback < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FD,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)AppLayoutForDropFeedback);
      goto LABEL_34;
    }
  }
  if ( a5 )
    Point = *a5;
  else
    GetPhysicalCursorPos(&Point);
  v14 = *(_QWORD *)(a1 + 128);
  if ( v14 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, 0LL);
  punk = 0LL;
  v35[0] = (IUnknown **)a1;
  v35[1] = &punk;
  v15 = 1;
  v36 = 1;
  v16 = (__int64 *)(a1 + 136);
  v17 = *(IUnknown **)(a1 + 136);
  if ( v17 )
  {
    v18 = 0LL;
    if ( &v33 != v16 )
    {
      *v16 = 0LL;
      v18 = v17;
    }
    v33 = 0LL;
    punk = v18;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v33);
LABEL_14:
    v31 = 0LL;
    v19 = punk;
    QueryInterface = punk->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    Instance = ((__int64 (__fastcall *)(IUnknown *, GUID *, __int64 *))QueryInterface)(
                 v19,
                 &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1,
                 &v31);
    v13 = Instance;
    if ( Instance >= 0 )
    {
      if ( a9 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a9 + 24LL))(a9, v31);
        v13 = Instance;
        if ( Instance < 0 )
        {
          v22 = 563LL;
          goto LABEL_28;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(a1 + 152));
        Instance = TabletModeInputHandler_CreateInstance(a8, v31, v27, a1 + 152);
        v13 = Instance;
        if ( Instance < 0 )
        {
          v22 = 568LL;
          goto LABEL_28;
        }
      }
      Instance = ((__int64 (__fastcall *)(IUnknown *, __int64, struct tagPOINT *, __int64))punk->lpVtbl[1].AddRef)(
                   punk,
                   v38,
                   &Point,
                   v37);
      v13 = Instance;
      if ( Instance >= 0 )
      {
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)(a1 + 128), (__int64 *)&punk);
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::operator=((__int64 *)(a1 + 160), a9);
        TabletModeViewManager::UpdateLayoutItemsSizeConstraints((TabletModeViewManager *)a1);
        v15 = 0;
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v39,
          v28);
        v13 = 0;
        goto LABEL_30;
      }
      v22 = 571LL;
    }
    else
    {
      v22 = 558LL;
    }
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)Instance);
LABEL_30:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
    goto LABEL_31;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&punk);
  v24 = WindowArrangementView_CreateInstance(v23, (void **)&punk);
  v13 = v24;
  if ( v24 >= 0 )
  {
    v26 = (IUnknown *)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::CastToUnknown(a1);
    IUnknown_SetSite(punk, v26);
    v24 = ((__int64 (__fastcall *)(IUnknown *, __int64, __int64, _QWORD, unsigned int))punk->lpVtbl[1].QueryInterface)(
            punk,
            v33,
            v32,
            a7,
            a8);
    v13 = v24;
    if ( v24 >= 0 )
      goto LABEL_14;
    v25 = 553LL;
  }
  else
  {
    v25 = 551LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)v24);
LABEL_31:
  if ( v15 )
  {
    v36 = 0;
    lambda_3a6d53bdb7b70071c869d320bc39bec7_::operator()(v35);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&punk);
LABEL_34:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
  TabletModeTelemetry::WindowArrangementView_Show::~WindowArrangementView_Show((TabletModeTelemetry::WindowArrangementView_Show *)v39);
  return v13;
}
