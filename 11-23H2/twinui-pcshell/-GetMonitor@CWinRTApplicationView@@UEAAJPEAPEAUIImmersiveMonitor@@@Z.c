/*
 * XREFs of ?GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18005B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::GetMonitor(CWinRTApplicationView *this, struct IImmersiveMonitor **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct IImmersiveMonitor **))(**((_QWORD **)this + 26) + 232LL))(
         *((_QWORD *)this + 26),
         a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x77,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v2,
    v5);
  return v3;
}
