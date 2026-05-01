/*
 * XREFs of ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1805D6F70
 * Callers:
 *     wil::details::ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___::_ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___ @ 0x1805D6614 (wil--details--ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___--_ScopeExitFn__lambda_2f41.c)
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x1805D6AE8 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1805D6B90 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1805D6F70 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::Run @ 0x1805D7C10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UITabletModeViewManager@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805D0054 (--$As@UITabletModeViewManager@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_efd0a2201cba9b434f5cd15cf706417f___ @ 0x1805D6400 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_efd0a2201cba9b434f5cd15cf706417f___.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1805D6F70 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEAAKXZ @ 0x1805D7590 (-InternalRelease@-$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppResizeView::Hide(AppResizeView *this, volatile int *a2)
{
  __int64 *v3; // rdi
  char *v4; // r8
  Microsoft::WRL::Details *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  char v9; // di
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v12; // [rsp+40h] [rbp+18h] BYREF
  char *v13; // [rsp+48h] [rbp+20h] BYREF

  v3 = (__int64 *)((char *)this + 64);
  if ( (_BYTE)a2 )
  {
    if ( !*v3 )
    {
      v4 = (char *)this - 24;
      v13 = v4;
      v5 = (AppResizeView *)((char *)this + 28);
      if ( v4 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(v5, a2);
      v12 = v4;
      if ( v4 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(v5, a2);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
      v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_efd0a2201cba9b434f5cd15cf706417f___(
             v7,
             v6,
             (__int64)v3,
             &v12);
      if ( v8 >= 0 )
      {
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBF,
          (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
          (const char *)(unsigned int)v8);
        v9 = 1;
      }
      Microsoft::WRL::ComPtr<AppResizeView>::InternalRelease(&v12);
      if ( v9 )
        AppResizeView::Hide(this, 0);
      Microsoft::WRL::ComPtr<AppResizeView>::InternalRelease(&v13);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
    v12 = 0LL;
    v10 = Microsoft::WRL::ComPtr<IUnknown>::As<ITabletModeViewManager>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this - 1,
            (__int64 *)&v12);
    if ( v10 >= 0 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 80LL))(v12);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCB,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  }
}
