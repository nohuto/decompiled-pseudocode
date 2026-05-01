/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3191f22cac41f41d34f0b7ce6d91de45___::Invoke @ 0x1801D8FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3191f22cac41f41d34f0b7ce6d91de45___::Invoke(
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
      (void *)0x2D7,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
