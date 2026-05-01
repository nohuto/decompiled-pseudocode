/*
 * XREFs of ?Cloak@XamlExplorerHostWindow@@AEAAXXZ @ 0x1804291C0
 * Callers:
 *     ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x180428DD0 (-AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ.c)
 *     ?ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x180428F20 (-ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlExplorerHostWindow::Cloak(XamlExplorerHostWindow *this)
{
  int v1; // eax
  HRESULT v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF
  HWND hwnd; // [rsp+38h] [rbp+10h] BYREF

  hwnd = 0LL;
  v1 = (*(__int64 (__fastcall **)(XamlExplorerHostWindow *, HWND *))(*(_QWORD *)this + 40LL))(this, &hwnd);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v1);
  pvAttribute = 1;
  v2 = DwmSetWindowAttribute(hwnd, 0xDu, &pvAttribute, 4u);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v2);
}
