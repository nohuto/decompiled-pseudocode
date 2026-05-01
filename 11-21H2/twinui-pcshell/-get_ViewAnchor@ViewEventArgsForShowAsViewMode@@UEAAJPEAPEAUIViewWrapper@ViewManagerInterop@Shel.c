/*
 * XREFs of ?get_ViewAnchor@ViewEventArgsForShowAsViewMode@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803E7BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_ViewAnchor(
        ViewEventArgsForShowAsViewMode *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))this
          + 5))(
         *((_QWORD *)this + 5),
         &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
      (const char *)(unsigned int)v2);
  return v3;
}
