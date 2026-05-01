/*
 * XREFs of _lambda_eec20f64a69276a1868af05215daa949_::operator() @ 0x1803EF448
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_eec20f64a69276a1868af05215daa949___::Invoke @ 0x1803EFC70 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_eec20f64a69276a1868af05215daa94.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_eec20f64a69276a1868af05215daa949_::operator()(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( (**a2)(a2, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775, &v8) < 0
    || (**(_BYTE **)(a1 + 8) = 1,
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, *(_QWORD *)a1),
        v4 = v3,
        v3 >= 0) )
  {
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (int)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v3);
  }
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
