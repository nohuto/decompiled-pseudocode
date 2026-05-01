/*
 * XREFs of ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivationRequestedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F5080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x1803F457C (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::UwpWindowActivationRequested(
        UwpWindowEventDispatcher *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *, struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *, struct Windows::Internal::ApplicationModel::WindowManagement::IActivationRequestedEventArgs **); // rbx
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IActivationRequestedEventArgs *v12; // [rsp+48h] [rbp+28h] BYREF
  struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *v13; // [rsp+50h] [rbp+30h] BYREF

  v13 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *, struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext **))(*(_QWORD *)a2 + 56LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  v5 = v4(a2, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v12 = 0LL;
    v7 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowActivationRequestedEventArgs *, struct Windows::Internal::ApplicationModel::WindowManagement::IActivationRequestedEventArgs **))(*(_QWORD *)a2 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
    v8 = v7(a2, &v12);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v8 = UwpWindowEventDispatcher::UwpWindowActivationRequested(
             (UwpWindowEventDispatcher *)((char *)this - 16),
             (RTL_SRWLOCK *)v13,
             v12);
      v6 = v8;
      if ( v8 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
        v6 = 0;
        goto LABEL_9;
      }
      v9 = 813LL;
    }
    else
    {
      v9 = 811LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x328,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v5);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  return v6;
}
