/*
 * XREFs of ?IsEqualByAppUserModelId@CWinRTApplicationView@@UEAAJPEBGPEAH@Z @ 0x18014C530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::IsEqualByAppUserModelId(
        CWinRTApplicationView *this,
        const unsigned __int16 *a2,
        int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, int *))(**((_QWORD **)this + 26) + 88LL))(
         *((_QWORD *)this + 26),
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
