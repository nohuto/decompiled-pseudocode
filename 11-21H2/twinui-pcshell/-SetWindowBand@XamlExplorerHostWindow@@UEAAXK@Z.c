/*
 * XREFs of ?SetWindowBand@XamlExplorerHostWindow@@UEAAXK@Z @ 0x180429650
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlExplorerHostWindow::SetWindowBand(XamlExplorerHostWindow *this, unsigned int a2)
{
  int v4; // eax
  int v5; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)this + 20) != a2 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
           *((_QWORD *)this + 7),
           *((_QWORD *)this + 11),
           0LL,
           a2);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8C,
        (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
        (const char *)(unsigned int)v4,
        v5);
    *((_DWORD *)this + 20) = a2;
  }
}
