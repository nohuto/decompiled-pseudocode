/*
 * XREFs of sub_18000FA88 @ 0x18000FA88
 * Callers:
 *     sub_18000CDAC @ 0x18000CDAC (sub_18000CDAC.c)
 *     sub_18000CE34 @ 0x18000CE34 (sub_18000CE34.c)
 *     sub_18000D130 @ 0x18000D130 (sub_18000D130.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000FB4C @ 0x18000FB4C (sub_18000FB4C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_18000FA88(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_1801D32D8 )
    qword_1801D32D8();
  if ( qword_1801D32B0 )
    qword_1801D32B0(a1);
  memset(v5, 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 136);
  LODWORD(v5[3]) = 1;
  v5[0] = 0x1C0000409LL;
  v5[4] = 7LL;
  if ( !v3 )
    sub_18000FB4C(v5, v2, 1LL);
  v5[5] = *(int *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 64);
  v5[2] = v3;
  v5[6] = v4;
  LODWORD(v5[3]) = 3;
  sub_18000FB4C(v5, v2, 0LL);
}
