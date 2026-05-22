/*
 * XREFs of ?SendInputModalityEvent@InputServiceProxy@@UEAAJUInputModalityInfo@@@Z @ 0x180182680
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::SendInputModalityEvent(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // xmm0_8
  int v4; // edx
  __int64 v5; // rax
  int v6; // eax
  int v8[2]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(__int64 **)(a1 + 32);
  if ( v2 )
  {
    v3 = *a2;
    v4 = *((_DWORD *)a2 + 2);
    v5 = *v2;
    *(_QWORD *)v8 = v3;
    v9 = v4;
    v6 = (*(__int64 (__fastcall **)(__int64 *, int *))(v5 + 224))(v2, v8);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x161,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
        (const char *)(unsigned int)v6,
        v8[0]);
  }
  return 0LL;
}
