/*
 * XREFs of ??R_lambda_87aff4db6c45ef86a8c611dd5aaf2244_@@QEBAJXZ @ 0x1800DA994
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_87aff4db6c45ef86a8c611dd5aaf2244_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1800DA7B0 (-Run@-$CTaskWrapper@V_lambda_87aff4db6c45ef86a8c611dd5aaf2244_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _lambda_87aff4db6c45ef86a8c611dd5aaf2244_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  unsigned int i; // edi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    for ( i = 0; i < v9; ++i )
    {
      v10 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 8) + 32LL))(
             *(_QWORD *)(a1 + 8),
             i,
             &GUID_cd403e52_deed_4c13_b437_b98380f2b1e8,
             &v10) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))a1)(v10, v4);
      v6 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    return 0LL;
  }
}
