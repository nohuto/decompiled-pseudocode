/*
 * XREFs of sub_18008A464 @ 0x18008A464
 * Callers:
 *     sub_18008B2E0 @ 0x18008B2E0 (sub_18008B2E0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180089FBC @ 0x180089FBC (sub_180089FBC.c)
 *     sub_18008B088 @ 0x18008B088 (sub_18008B088.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18008A464(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // rbx
  void **v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-40h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  _BYTE v13[40]; // [rsp+38h] [rbp-30h] BYREF

  sub_180089FBC(*a4, &v11);
  v7 = v11;
  v8 = (void **)sub_18008B088(a1, v13);
  sub_180029824(v7, v8);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, a3) )
  {
    v11 = 0LL;
    v9 = v12;
    v12 = 0LL;
    if ( v9 )
      sub_180010530(v9);
  }
  *a2 = v11;
  a2[1] = v12;
  return a2;
}
