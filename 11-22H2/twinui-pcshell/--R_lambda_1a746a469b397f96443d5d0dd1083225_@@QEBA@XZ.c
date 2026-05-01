/*
 * XREFs of ??R_lambda_1a746a469b397f96443d5d0dd1083225_@@QEBA@XZ @ 0x1800D0600
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_1a746a469b397f96443d5d0dd1083225_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1800D37A0 (-Run@-$CTaskWrapper@V_lambda_1a746a469b397f96443d5d0dd1083225_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _lambda_1a746a469b397f96443d5d0dd1083225_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  unsigned int i; // edi
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v10);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2,
      v8);
    return v3;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    for ( i = 0; i < v10; ++i )
    {
      v11 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 8) + 32LL))(
             *(_QWORD *)(a1 + 8),
             i,
             &GUID_b9e5e94d_233e_49ab_af5c_2b4541c3aade,
             &v11) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))a1)(v11, v4);
      v6 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    return 0LL;
  }
}
