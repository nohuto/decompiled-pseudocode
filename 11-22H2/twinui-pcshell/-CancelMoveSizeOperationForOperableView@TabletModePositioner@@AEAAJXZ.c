/*
 * XREFs of ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1805B9AAC
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1805BA030 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18056FD90 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::CancelMoveSizeOperationForOperableView(TabletModePositioner *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, HWND, TabletModePositionerHelpers **); // rbx
  int v4; // eax
  struct IApplicationView *v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  TabletModePositionerHelpers *v10[2]; // [rsp+20h] [rbp-78h] BYREF
  struct tagGUITHREADINFO pgui; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  pgui.cbSize = 72;
  memset_0(&pgui.flags, 0, 0x44uLL);
  if ( GetGUIThreadInfo(0, &pgui) && (pgui.flags & 2) != 0 )
  {
    v10[0] = 0LL;
    v2 = *((_QWORD *)this + 42);
    v3 = *(__int64 (__fastcall **)(__int64, HWND, TabletModePositionerHelpers **))(*(_QWORD *)v2 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v10);
    v4 = v3(v2, pgui.hwndMoveSize, v10);
    v6 = v4;
    if ( v4 >= 0 )
    {
      if ( TabletModePositionerHelpers::IsControlledView(v10[0], v5) )
      {
        SendNotifyMessageW(pgui.hwndMoveSize, 0x1Fu, 0LL, 0LL);
        v6 = 0;
        goto LABEL_9;
      }
      v6 = -2147019873;
      v7 = 2147947423LL;
      v8 = 3035LL;
    }
    else
    {
      v7 = (unsigned int)v4;
      v8 = 3032LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)v10);
    return v6;
  }
  return 2147947423LL;
}
