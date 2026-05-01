/*
 * XREFs of ?MoveVirtualCursor@CAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x1802E0540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAltTabViewHost::MoveVirtualCursor(CAltTabViewHost *this, struct tagPOINT *a2)
{
  __int64 *v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 20);
  if ( !v2 )
  {
    v3 = -2147023728;
    v4 = 300LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)v3);
    return v3;
  }
  v5 = *v2;
  v8 = *a2;
  v3 = (*(__int64 (__fastcall **)(__int64 *, struct tagPOINT *))(v5 + 128))(v2, &v8);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 301LL;
    goto LABEL_5;
  }
  return v3;
}
