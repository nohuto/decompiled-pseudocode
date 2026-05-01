/*
 * XREFs of ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805D4060
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_e618f8d09915a5c2963af92bff89d9ea__&_ @ 0x1805D04B0 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_e618f8d09915a5c2963af92bff89d9ea__-_.c)
 *     ??1TMAppArrange@TabletModeTelemetry@@QEAA@XZ @ 0x1805D0C04 (--1TMAppArrange@TabletModeTelemetry@@QEAA@XZ.c)
 *     ??4TMAppArrange@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805D0CD8 (--4TMAppArrange@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1805D2EF4 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805D43BC (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x1805D47A4 (-StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowArrangementView::Show(
        WindowArrangementView *this,
        struct tagRECT *a2,
        const struct tagPOINT *a3,
        struct tagRECT *a4)
{
  char *v5; // rbx
  int v6; // eax
  volatile int *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  volatile int *v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // esi
  struct IApplicationView *v16; // rdi
  struct IAppLayout *v17; // rbx
  int v18[2]; // [rsp+20h] [rbp-E0h] BYREF
  char *v19; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v20[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v5 = (char *)this - 24;
  v6 = WindowArrangementView::ShowView((WindowArrangementView *)((char *)this - 24), a2, a3, a4);
  v10 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v6);
    return v10;
  }
  if ( *((_DWORD *)this + 66) == 2 )
  {
    v19 = v5;
    if ( v5 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 68), v7);
      *(_QWORD *)v18 = v5;
      Microsoft::WRL::Details::SafeUnknownIncrementReference((WindowArrangementView *)((char *)this + 44), v12);
    }
    else
    {
      *(_QWORD *)v18 = 0LL;
    }
    v13 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_e618f8d09915a5c2963af92bff89d9ea____(
            v8,
            (__int64)v7,
            v9,
            (__int64 *)v18);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)v18);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v19);
      return v14;
    }
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)v18);
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease((__int64 *)&v19);
  }
  if ( *((_DWORD *)this + 67) == 3 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 216LL))(*((_QWORD *)this + 7));
  v15 = *((_DWORD *)this + 67);
  v16 = (struct IApplicationView *)*((_QWORD *)this + 8);
  v17 = (struct IAppLayout *)*((_QWORD *)this + 12);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"TMAppArrange");
  v20[0] = &TabletModeTelemetry::TMAppArrange::`vftable';
  TabletModeTelemetry::TMAppArrange::StartActivity((TabletModeTelemetry::TMAppArrange *)v20, v17, v16, v15);
  TabletModeTelemetry::TMAppArrange::operator=((_QWORD *)this + 38, (__int64)v20);
  TabletModeTelemetry::TMAppArrange::~TMAppArrange((TabletModeTelemetry::TMAppArrange *)v20);
  return 0LL;
}
