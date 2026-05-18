/*
 * XREFs of sub_1800D1500 @ 0x1800D1500
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180054B0C @ 0x180054B0C (sub_180054B0C.c)
 *     sub_180070B70 @ 0x180070B70 (sub_180070B70.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 *     sub_1800CC188 @ 0x1800CC188 (sub_1800CC188.c)
 *     sub_1800D040C @ 0x1800D040C (sub_1800D040C.c)
 *     sub_1800D0664 @ 0x1800D0664 (sub_1800D0664.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

volatile signed __int64 *__fastcall sub_1800D1500(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int128 *a4,
        unsigned __int8 a5)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h]
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *a2 )
  {
    sub_180054B0C(*a2, &v18, *(_DWORD *)(a1 + 88));
    v11 = v18;
    v6 = *sub_1800D0664(v18, &v15);
    sub_18000E72C(&v15);
    v7 = *sub_1800CC188(v11, &v16);
    sub_18000E72C(&v16);
    v8 = *sub_1800D040C(v11, &v17);
    sub_18000E72C(&v17);
    if ( v19 )
      sub_180010530(v19);
  }
  v12 = *(_QWORD *)(a1 + 144);
  v20 = *a4;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 344LL))(v12, v6);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 288LL))(*(_QWORD *)(a1 + 144), v7, a5);
  (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(**(_QWORD **)(a1 + 144) + 280LL))(
    *(_QWORD *)(a1 + 144),
    v8,
    &v20,
    a3);
  v13 = sub_180070B94();
  return sub_180070B70((__int64)v13, 4, 1);
}
