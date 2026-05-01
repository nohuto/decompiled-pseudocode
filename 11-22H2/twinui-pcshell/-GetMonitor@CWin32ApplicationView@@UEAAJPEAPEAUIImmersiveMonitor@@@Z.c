/*
 * XREFs of ?GetMonitor@CWin32ApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800C6A30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::GetMonitor(CWin32ApplicationView *this, struct IImmersiveMonitor **a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r8
  signed __int32 v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  signed __int32 v10; // edx
  __int64 (__fastcall *v11)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  __int64 v12; // rax
  int v13; // ebx
  int v15; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  v5 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v6 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    do
      v7 = *(_DWORD *)(v6 + 36);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 36), v7 + 1, v7) );
    v5 = v6;
    v4 = v17;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v5 )
  {
    v8 = *(_QWORD *)(v5 + 48);
    v9 = *(_QWORD *)(v8 + 792);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(v8 + 792));
    v19 = 0LL;
    v18 = 0LL;
    v17 = v9;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
    do
      v10 = *(_DWORD *)(v5 + 36);
    while ( v10 != 0x7FFFFFFF && v10 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 36), v10 - 1, v10) );
    if ( v10 == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 72LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v4 = v17;
  }
  if ( v4 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v4 + 88LL);
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
    v13 = v11(v4, v12, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, a2);
    if ( v13 >= 0 )
      v13 = 0;
  }
  else
  {
    v13 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80070490LL,
      v15);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  return (unsigned int)v13;
}
