/*
 * XREFs of ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x1805D7DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TMAppResize@TabletModeTelemetry@@QEAA@XZ @ 0x1805D66C0 (--1TMAppResize@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??4TMAppResize@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805D66EC (--4TMAppResize@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InitAppLayout@AppResizeView@@AEAAJXZ @ 0x1805D70A8 (-InitAppLayout@AppResizeView@@AEAAJXZ.c)
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1805D7174 (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1805D7280 (-InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z @ 0x1805D7F7C (-StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z.c)
 *     ?AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805DD480 (-AppResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeView::Show(AppResizeView *this, const struct tagPOINT *a2)
{
  AppResizeView *v3; // rsi
  int inited; // eax
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  const struct _GUID *v9; // rcx
  struct IAppLayout *v10; // rbx
  int v11[2]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v12[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  *(struct tagPOINT *)v11 = *a2;
  *(_QWORD *)((char *)this + 116) = *(_QWORD *)v11;
  v3 = (AppResizeView *)((char *)this - 24);
  *(struct tagPOINT *)v11 = *a2;
  inited = AppResizeView::InitAppLayout((AppResizeView *)((char *)this - 24));
  v5 = inited;
  if ( inited < 0 )
  {
    v6 = 331LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)inited);
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  inited = AppResizeView::InitDropFeedback(v3, (const struct Geometry::CPoint *)v11);
  v5 = inited;
  if ( inited < 0 )
  {
    v6 = 332LL;
    goto LABEL_3;
  }
  v7 = AppResizeView::InitAppResizeData(v3, (const struct Geometry::CPoint *)v11);
  v5 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14D,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v7);
  if ( v5 < 0 )
    goto LABEL_9;
  if ( !*((_QWORD *)this + 7) )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
    if ( AppResizeAcc_CreateInstance(v9, (void **)this + 7) >= 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 48LL))(*((_QWORD *)this + 7));
  }
  v10 = (struct IAppLayout *)*((_QWORD *)this + 6);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"TMAppResize");
  v12[0] = &TabletModeTelemetry::TMAppResize::`vftable';
  TabletModeTelemetry::TMAppResize::StartActivity((TabletModeTelemetry::TMAppResize *)v12, v10);
  TabletModeTelemetry::TMAppResize::operator=((_QWORD *)this + 16, (__int64)v12);
  TabletModeTelemetry::TMAppResize::~TMAppResize((TabletModeTelemetry::TMAppResize *)v12);
  return 0LL;
}
