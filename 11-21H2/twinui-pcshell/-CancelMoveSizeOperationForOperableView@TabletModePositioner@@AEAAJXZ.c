/*
 * XREFs of ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1805012EC
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x180501870 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B35C0 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::CancelMoveSizeOperationForOperableView(TabletModePositioner *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v5; // eax
  struct IApplicationView *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  TabletModePositionerHelpers *v11[2]; // [rsp+20h] [rbp-78h] BYREF
  struct tagGUITHREADINFO pgui; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  pgui.cbSize = 72;
  memset_0(&pgui.flags, 0, 0x44uLL);
  if ( GetGUIThreadInfo(0, &pgui) && (pgui.flags & 2) != 0 )
  {
    v11[0] = 0LL;
    v2 = *((_QWORD *)this + 42);
    v3 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v2 + 48LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)v11);
    v5 = v3(v2, pgui.hwndMoveSize, AddressOf);
    v7 = v5;
    if ( v5 >= 0 )
    {
      if ( TabletModePositionerHelpers::IsControlledView(v11[0], v6) )
      {
        SendNotifyMessageW(pgui.hwndMoveSize, 0x1Fu, 0LL, 0LL);
        v7 = 0;
        goto LABEL_9;
      }
      v7 = -2147019873;
      v8 = 2147947423LL;
      v9 = 3036LL;
    }
    else
    {
      v8 = (unsigned int)v5;
      v9 = 3033LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)v8);
LABEL_9:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v11);
    return v7;
  }
  return 2147947423LL;
}
