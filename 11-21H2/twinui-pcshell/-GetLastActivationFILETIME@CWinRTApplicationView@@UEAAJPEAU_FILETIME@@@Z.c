/*
 * XREFs of ?GetLastActivationFILETIME@CWinRTApplicationView@@UEAAJPEAU_FILETIME@@@Z @ 0x1800439A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::GetLastActivationFILETIME(CWinRTApplicationView *this, struct _FILETIME *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6[4]; // [rsp+20h] [rbp-48h] BYREF
  struct _FILETIME v7; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 26) + 80LL))(*((_QWORD *)this + 26), v6);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28F,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v3,
      v6[0]);
    return v4;
  }
  else
  {
    *a2 = v7;
    return 0LL;
  }
}
