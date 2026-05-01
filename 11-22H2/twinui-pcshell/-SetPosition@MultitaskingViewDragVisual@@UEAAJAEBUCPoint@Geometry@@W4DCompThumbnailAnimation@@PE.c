/*
 * XREFs of ?SetPosition@MultitaskingViewDragVisual@@UEAAJAEBUCPoint@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180595D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MultitaskingViewDragVisual::SetPosition(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  int v3; // r10d
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)(a1 + 72) = *(_QWORD *)a2;
  v2 = *(__int64 **)(a1 + 24);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *v2;
  v8[0] = *(_DWORD *)a2;
  v8[2] = v8[0] + 1;
  v8[3] = v3 + 1;
  v8[1] = v3;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v4 + 24))(v2, v8);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
