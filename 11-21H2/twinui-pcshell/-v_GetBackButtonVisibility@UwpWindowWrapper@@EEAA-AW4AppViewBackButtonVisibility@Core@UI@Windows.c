/*
 * XREFs of ?v_GetBackButtonVisibility@UwpWindowWrapper@@EEAA?AW4AppViewBackButtonVisibility@Core@UI@Windows@@XZ @ 0x180406720
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapper::v_GetBackButtonVisibility(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 608) + 80LL))(*(_QWORD *)(a1 + 608), &v5);
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x184,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return v5;
}
