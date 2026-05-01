/*
 * XREFs of ?UnsubscribeFromServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801426E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::UnsubscribeFromServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 65,
    0LL);
  SmartCookie::Unregister((CDesktopPositioner *)((char *)this + 376));
  if ( *((_DWORD *)this + 90) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 104LL))(*((_QWORD *)this + 32));
    *((_DWORD *)this + 90) = 0;
  }
  if ( *((_DWORD *)this + 91) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 80LL))(*((_QWORD *)this + 33));
    *((_DWORD *)this + 91) = 0;
  }
  if ( !*((_DWORD *)this + 93) )
    goto LABEL_9;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 28))(
         *((_QWORD *)this + 28),
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v9 = 322LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    return v4;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, *((unsigned int *)this + 93));
  v4 = v3;
  if ( v3 < 0 )
  {
    v9 = 323LL;
    goto LABEL_15;
  }
  *((_DWORD *)this + 93) = 0;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
LABEL_9:
  v5 = *((_QWORD *)this + 37);
  if ( !v5 )
  {
LABEL_12:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 34);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 33);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 32);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 29);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 31);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
    return 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 1LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 37);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x149,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
