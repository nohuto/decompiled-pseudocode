/*
 * XREFs of ?GetIsPerMonitor@VirtualDesktopController@@UEAAJPEAE@Z @ 0x18048D230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopController::GetIsPerMonitor(VirtualDesktopController *this, bool *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v8 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 152LL))(v3, &v8);
    v6 = v5;
    if ( v5 >= 0 )
    {
      *a2 = v8 != 0;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16C,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
