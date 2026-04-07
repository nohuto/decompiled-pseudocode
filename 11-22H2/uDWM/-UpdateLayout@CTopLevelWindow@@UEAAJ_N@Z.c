/*
 * XREFs of ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x180050370
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x1800503F0 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLayout(CTopLevelWindow *this, bool a2)
{
  int updated; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 36) + 104LL))(
              *((_QWORD *)this + 36),
              (char *)this + 128);
  if ( updated < 0 )
  {
    v6 = 4747LL;
  }
  else
  {
    updated = CVisual::UpdateLayout(this, a2);
    if ( updated >= 0 )
      return 0LL;
    v6 = 4749LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)updated,
    v7);
  return (unsigned int)updated;
}
