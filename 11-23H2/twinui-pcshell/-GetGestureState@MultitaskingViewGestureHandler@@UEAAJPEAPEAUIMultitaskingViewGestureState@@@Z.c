/*
 * XREFs of ?GetGestureState@MultitaskingViewGestureHandler@@UEAAJPEAPEAUIMultitaskingViewGestureState@@@Z @ 0x180184AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MultitaskingViewGestureHandler::GetGestureState(
        MultitaskingViewGestureHandler *this,
        struct IMultitaskingViewGestureState **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IMultitaskingViewGestureState **))this + 10))(
         *((_QWORD *)this + 10),
         &GUID_4639c886_cffe_492c_915a_1e3f02d22434,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\MultitaskingViewGestureHandler.h",
      (const char *)(unsigned int)v2);
  return v3;
}
