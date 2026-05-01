/*
 * XREFs of ?UpdateViewTabState@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180321170
 * Callers:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18031EF50 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall FullScreenPositioner::UpdateViewTabState(FullScreenPositioner *this, struct IApplicationView *a2)
{
  __int64 v2; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, unsigned int *))(*(_QWORD *)v2 + 72LL))(
           v2,
           a2,
           &v8);
    if ( v4 < 0 )
    {
      v5 = 1418LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)a2 + 432LL))(a2, v8);
    if ( v4 < 0 )
    {
      v5 = 1419LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
