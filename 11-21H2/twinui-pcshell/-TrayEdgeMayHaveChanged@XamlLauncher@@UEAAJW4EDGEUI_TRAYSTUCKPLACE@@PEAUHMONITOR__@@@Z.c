/*
 * XREFs of ?TrayEdgeMayHaveChanged@XamlLauncher@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x180172EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::TrayEdgeMayHaveChanged(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 312) )
    return 2147943568LL;
  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_QWORD *)(v4 + 64);
  if ( !v5 )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)0x8000FFFFLL);
    return (unsigned int)v6;
  }
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 40LL))(v5, &v9);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( a3 == v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 80) + 104LL))(*(_QWORD *)(v4 + 80)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 80) + 160LL))(*(_QWORD *)(v4 + 80));
  }
  return 0LL;
}
