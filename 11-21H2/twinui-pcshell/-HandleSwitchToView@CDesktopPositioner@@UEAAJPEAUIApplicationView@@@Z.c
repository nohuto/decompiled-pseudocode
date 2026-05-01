/*
 * XREFs of ?HandleSwitchToView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804FB5F0
 * Callers:
 *     ?HandleSwitchToView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@@Z @ 0x18020A890 (-HandleSwitchToView@CDesktopPositioner@@W7EAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@@Z @ 0x18020A8B0 (-HandleSwitchToView@CDesktopPositioner@@WBA@EAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopPositioner::HandleSwitchToView(CDesktopPositioner *this, struct IApplicationView *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13A,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
