/*
 * XREFs of ?Uninitialize@XamlLauncherState@@UEAAJXZ @ 0x18019B750
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800A64A4 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::Uninitialize(XamlLauncherState *this)
{
  wil::details **v2; // rcx
  _QWORD *v3; // r14
  int v4; // edi
  _QWORD *v5; // rdi
  int v6; // esi
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (wil::details **)((char *)this + 248);
  if ( *v2 )
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v2,
      0LL);
  v3 = (_QWORD *)((char *)this + 56);
  if ( *((_QWORD *)this + 14) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 200LL))(*v3);
    if ( v4 < 0 )
    {
      v8 = 152LL;
LABEL_57:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 216LL))(*v3);
    if ( v4 < 0 )
    {
      v8 = 158LL;
      goto LABEL_57;
    }
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *((_QWORD *)this + 16) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 232LL))(*v3);
    if ( v4 < 0 )
    {
      v8 = 164LL;
      goto LABEL_57;
    }
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 280LL))(*v3);
    if ( v4 < 0 )
    {
      v8 = 170LL;
      goto LABEL_57;
    }
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_QWORD *)this + 18) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 296LL))(*v3);
    if ( v4 < 0 )
    {
      v8 = 176LL;
      goto LABEL_57;
    }
    *((_QWORD *)this + 18) = 0LL;
  }
  if ( !*((_QWORD *)this + 19) )
    goto LABEL_21;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 312LL))(*v3);
  if ( v4 < 0 )
  {
    v8 = 182LL;
    goto LABEL_57;
  }
  *((_QWORD *)this + 19) = 0LL;
LABEL_21:
  v5 = (_QWORD *)((char *)this + 64);
  if ( *((_QWORD *)this + 20) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 184LL))(*v5);
    if ( v6 < 0 )
    {
      v9 = 188LL;
      goto LABEL_64;
    }
    *((_QWORD *)this + 20) = 0LL;
  }
  if ( *((_QWORD *)this + 21) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 200LL))(*v5);
    if ( v6 < 0 )
    {
      v9 = 194LL;
      goto LABEL_64;
    }
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *((_QWORD *)this + 22) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 216LL))(*v5);
    if ( v6 < 0 )
    {
      v9 = 200LL;
      goto LABEL_64;
    }
    *((_QWORD *)this + 22) = 0LL;
  }
  if ( *((_QWORD *)this + 23) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 312LL))(*v5);
    if ( v6 < 0 )
    {
      v9 = 206LL;
      goto LABEL_64;
    }
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( *((_QWORD *)this + 24) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 264LL))(*v5);
    if ( v6 < 0 )
    {
      v9 = 212LL;
      goto LABEL_64;
    }
    *((_QWORD *)this + 24) = 0LL;
  }
  if ( *((_QWORD *)this + 25) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 328LL))(*v5);
    if ( v6 < 0 )
    {
      v9 = 218LL;
      goto LABEL_64;
    }
    *((_QWORD *)this + 25) = 0LL;
  }
  if ( *((_QWORD *)this + 26) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 344LL))(*v5);
    if ( v6 < 0 )
    {
      v9 = 224LL;
      goto LABEL_64;
    }
    *((_QWORD *)this + 26) = 0LL;
  }
  if ( *((_QWORD *)this + 27) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 360LL))(*v5);
    if ( v6 < 0 )
    {
      v9 = 230LL;
      goto LABEL_64;
    }
    *((_QWORD *)this + 27) = 0LL;
  }
  if ( *((_QWORD *)this + 28) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 376LL))(*v5);
    if ( v6 < 0 )
    {
      v9 = 236LL;
      goto LABEL_64;
    }
    *((_QWORD *)this + 28) = 0LL;
  }
  if ( !*((_QWORD *)this + 29) )
  {
LABEL_51:
    if ( !*((_QWORD *)this + 30) )
    {
LABEL_54:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
      result = 0LL;
      *((_QWORD *)this + 13) = 0LL;
      return result;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 408LL))(*v5);
    if ( v6 >= 0 )
    {
      *((_QWORD *)this + 30) = 0LL;
      goto LABEL_54;
    }
    v9 = 248LL;
    goto LABEL_64;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 392LL))(*v5);
  if ( v6 >= 0 )
  {
    *((_QWORD *)this + 29) = 0LL;
    goto LABEL_51;
  }
  v9 = 242LL;
LABEL_64:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
