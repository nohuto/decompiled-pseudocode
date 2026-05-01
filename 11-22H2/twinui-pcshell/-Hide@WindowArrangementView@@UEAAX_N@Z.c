/*
 * XREFs of ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1805D2410
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___::_ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___ @ 0x1805D0AD8 (wil--details--ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___--_ScopeExitFn__lambda_f979.c)
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1805D1700 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x1805D1B10 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1805D2410 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae___::Run @ 0x1805D3D50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5edf705d134c8accffeb71d7188806ae___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UITabletModeViewManager@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeViewManager@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805D0054 (--$As@UITabletModeViewManager@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___ @ 0x1805D0638 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1805D2410 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x1805D2EF4 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowArrangementView::Hide(WindowArrangementView *this, volatile int *a2)
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

  v3 = (__int64 *)((char *)this + 104);
  if ( (_BYTE)a2 )
  {
    if ( !*v3 )
    {
      v4 = (char *)this - 24;
      v13 = v4;
      v5 = (WindowArrangementView *)((char *)this + 44);
      if ( v4 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(v5, a2);
      v12 = v4;
      if ( v4 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(v5, a2);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
      v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5edf705d134c8accffeb71d7188806ae___(
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
          (void *)0x141,
          (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
          (const char *)(unsigned int)v8);
        v9 = 1;
      }
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v12);
      if ( v9 )
        WindowArrangementView::Hide(this, 0);
      Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v13);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
    SmartCookie::Unregister((WindowArrangementView *)((char *)this + 136));
    v12 = 0LL;
    v10 = Microsoft::WRL::ComPtr<IUnknown>::As<ITabletModeViewManager>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this - 1,
            (__int64 *)&v12);
    if ( v10 >= 0 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 64LL))(v12);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14E,
        (int)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  }
}
