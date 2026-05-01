/*
 * XREFs of ?GetExtendedFramePosition@CSnappedWindow@@UEBA?AUCRect@Geometry@@XZ @ 0x180686BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CSnappedWindow::GetExtendedFramePosition(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 128LL))(*(_QWORD *)(a1 + 32));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6A,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snappedwindow.cpp",
      (const char *)(unsigned int)v3);
  return a2;
}
