/*
 * XREFs of ?MoveVirtualCursor@CMultitaskingViewFrame@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1802E1D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewFrame::MoveVirtualCursor(
        CMultitaskingViewFrame *this,
        const struct Geometry::CPoint *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const struct Geometry::CPoint *))(**((_QWORD **)this + 317) + 112LL))(
         *((_QWORD *)this + 317),
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x291,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
