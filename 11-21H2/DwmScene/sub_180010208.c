/*
 * XREFs of sub_180010208 @ 0x180010208
 * Callers:
 *     sub_18000CDC0 @ 0x18000CDC0 (sub_18000CDC0.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_1800102CC @ 0x1800102CC (sub_1800102CC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_180010208(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_1801F7400 )
    qword_1801F7400();
  if ( qword_1801F73D8 )
    qword_1801F73D8(a1);
  memset(v5, 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 136);
  LODWORD(v5[3]) = 1;
  v5[0] = 0x1C0000409LL;
  v5[4] = 7LL;
  if ( !v3 )
    sub_1800102CC(v5, v2, 1LL);
  v5[5] = *(int *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 64);
  v5[2] = v3;
  v5[6] = v4;
  LODWORD(v5[3]) = 3;
  sub_1800102CC(v5, v2, 0LL);
}
