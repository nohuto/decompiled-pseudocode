/*
 * XREFs of sub_180011578 @ 0x180011578
 * Callers:
 *     sub_18000C370 @ 0x18000C370 (sub_18000C370.c)
 *     sub_18000C640 @ 0x18000C640 (sub_18000C640.c)
 *     sub_18000C948 @ 0x18000C948 (sub_18000C948.c)
 * Callees:
 *     sub_18001163C @ 0x18001163C (sub_18001163C.c)
 *     memset @ 0x180016A5E (memset.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_180011578(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_180032D80 )
    qword_180032D80();
  if ( qword_180032D70 )
    qword_180032D70(a1);
  memset(v5, 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 136);
  LODWORD(v5[3]) = 1;
  v5[0] = 0x1C0000409LL;
  v5[4] = 7LL;
  if ( !v3 )
    sub_18001163C(v5, v2, 1LL);
  v5[5] = *(int *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 64);
  v5[2] = v3;
  v5[6] = v4;
  LODWORD(v5[3]) = 3;
  sub_18001163C(v5, v2, 0LL);
}
