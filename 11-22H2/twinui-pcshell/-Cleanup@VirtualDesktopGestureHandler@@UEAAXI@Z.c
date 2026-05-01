/*
 * XREFs of ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18060B700
 * Callers:
 *     wil::details::ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___::_ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___ @ 0x18060AB24 (wil--details--ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___--_ScopeExitFn__lambda_3d7c.c)
 *     ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18060B5A0 (-CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?CancelTouchSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18060B650 (-CancelTouchSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x18060D2E0 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18060D3E0 (-FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18060F670 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1VirtualDesktopGestureContext@@QEAA@XZ @ 0x18060ACF0 (--1VirtualDesktopGestureContext@@QEAA@XZ.c)
 *     ?Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ @ 0x18061254C (-Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktopGestureHandler::Cleanup(VirtualDesktopGestureHandler *this, int a2)
{
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rax
  VirtualDesktopGestureContext *v6; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 8);
  if ( v3 && (!a2 || a2 == *(_DWORD *)(v3 + 180)) )
  {
    v7 = 0LL;
    v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
    v5 = *v4;
    v7 = 0LL;
    (*v5)(v4, &GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d, &v7);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 320LL))(v7, 0LL);
    VirtualDesktopGestureContext::Uninitialize(*((VirtualDesktopGestureContext **)this + 8));
    v6 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v6 )
    {
      VirtualDesktopGestureContext::~VirtualDesktopGestureContext(v6);
      operator delete(v6);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  }
}
