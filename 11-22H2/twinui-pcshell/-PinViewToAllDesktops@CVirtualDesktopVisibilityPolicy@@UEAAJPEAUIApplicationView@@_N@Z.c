/*
 * XREFs of ?PinViewToAllDesktops@CVirtualDesktopVisibilityPolicy@@UEAAJPEAUIApplicationView@@_N@Z @ 0x1805FAF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopVisibilityPolicy::PinViewToAllDesktops(
        CVirtualDesktopVisibilityPolicy *this,
        struct IApplicationView *a2,
        char a3)
{
  __int64 v3; // rax
  __int64 *v6; // rdx
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)a2;
  v6 = &qword_180813060;
  if ( !a3 )
    v6 = &qword_180813080;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(v3 + 208))(a2, v6);
  if ( v7 < 0 )
  {
    v8 = 342LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopvisibilitypolicy.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 2) + 72LL))(
         *((_QWORD *)this + 2),
         a2);
  if ( v7 < 0 )
  {
    v8 = 343LL;
    goto LABEL_7;
  }
  return (unsigned int)v7;
}
