/*
 * XREFs of ?get_Monitor@VirtualDesktop@@UEAAJPEA_K@Z @ 0x180490260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktop::get_Monitor(VirtualDesktop *this, unsigned __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 13) + 40LL))(
         *((_QWORD *)this + 13),
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
