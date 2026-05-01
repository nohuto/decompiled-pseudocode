/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_b5b57993037fc12f38ba60be13c6908e___::Invoke @ 0x180310800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_b5b57993037fc12f38ba60be13c6908e___::Invoke(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, **(_QWORD **)(a1 + 48));
  v3 = v2;
  if ( v2 >= 0 )
    return 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D4,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
