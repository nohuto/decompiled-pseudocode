/*
 * XREFs of ?Uninitialize@XamlLauncherState@@UEAAJXZ @ 0x1801662B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::Uninitialize(XamlLauncherState *this)
{
  int v2; // edi
  _QWORD *v3; // rdi
  int v4; // esi
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 14) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 184LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v6 = 135LL;
LABEL_55:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 200LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v6 = 141LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *((_QWORD *)this + 16) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 216LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v6 = 147LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 264LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v6 = 153LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_QWORD *)this + 18) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 280LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v6 = 159LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 18) = 0LL;
  }
  if ( *((_QWORD *)this + 19) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 296LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v6 = 165LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( *((_QWORD *)this + 20) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 184LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v6 = 171LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 20) = 0LL;
  }
  if ( *((_QWORD *)this + 21) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 200LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v6 = 177LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *((_QWORD *)this + 22) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 216LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v6 = 183LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 22) = 0LL;
  }
  if ( *((_QWORD *)this + 23) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 312LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v6 = 189LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( *((_QWORD *)this + 24) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 264LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v6 = 195LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 24) = 0LL;
  }
  if ( *((_QWORD *)this + 25) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 328LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v6 = 201LL;
      goto LABEL_55;
    }
    *((_QWORD *)this + 25) = 0LL;
  }
  if ( !*((_QWORD *)this + 26) )
    goto LABEL_40;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 344LL))(*((_QWORD *)this + 8));
  if ( v2 < 0 )
  {
    v6 = 207LL;
    goto LABEL_55;
  }
  *((_QWORD *)this + 26) = 0LL;
LABEL_40:
  v3 = (_QWORD *)((char *)this + 64);
  if ( *((_QWORD *)this + 27) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 360LL))(*v3);
    if ( v4 < 0 )
    {
      v7 = 213LL;
      goto LABEL_69;
    }
    *((_QWORD *)this + 27) = 0LL;
  }
  if ( *((_QWORD *)this + 28) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 376LL))(*v3);
    if ( v4 < 0 )
    {
      v7 = 219LL;
      goto LABEL_69;
    }
    *((_QWORD *)this + 28) = 0LL;
  }
  if ( !*((_QWORD *)this + 29) )
  {
LABEL_49:
    if ( !*((_QWORD *)this + 30) )
    {
LABEL_52:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
      result = 0LL;
      *((_QWORD *)this + 13) = 0LL;
      return result;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 408LL))(*v3);
    if ( v4 >= 0 )
    {
      *((_QWORD *)this + 30) = 0LL;
      goto LABEL_52;
    }
    v7 = 231LL;
    goto LABEL_69;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 392LL))(*v3);
  if ( v4 >= 0 )
  {
    *((_QWORD *)this + 29) = 0LL;
    goto LABEL_49;
  }
  v7 = 225LL;
LABEL_69:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
