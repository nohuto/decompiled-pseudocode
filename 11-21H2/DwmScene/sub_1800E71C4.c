/*
 * XREFs of sub_1800E71C4 @ 0x1800E71C4
 * Callers:
 *     sub_1800DF530 @ 0x1800DF530 (sub_1800DF530.c)
 *     sub_1800F1C20 @ 0x1800F1C20 (sub_1800F1C20.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E71C4(__int64 a1)
{
  __int64 v1; // rcx
  _BYTE v3[72]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  memset(v3, 0, 64);
  return (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v1 + 264LL))(v1, 8LL, v3);
}
