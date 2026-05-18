/*
 * XREFs of sub_1800977A8 @ 0x1800977A8
 * Callers:
 *     sub_1800701E0 @ 0x1800701E0 (sub_1800701E0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180027964 @ 0x180027964 (sub_180027964.c)
 *     sub_180097664 @ 0x180097664 (sub_180097664.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800977A8(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 i; // rbx
  _QWORD *v6; // rax
  void (__fastcall *v7)(__int64, _BYTE *, _QWORD *); // r9
  __int64 v8; // r11
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 48));
  sub_1800124F8((__int64 *)(a1 + 32), a2);
  sub_180097664((__int64 *)&v14, (__int64 *)a1);
  sub_180027964((__int64 *)a1);
  Mtx_unlock(v4);
  for ( i = v14; i != *((_QWORD *)&v14 + 1); i += 16LL )
  {
    v6 = sub_18001246C(&v11, a2);
    v7(v8, v12, v6);
    if ( v13 )
      sub_180010530(v13);
  }
  result = sub_180013300((__int64)&v14);
  v10 = a2[1];
  if ( v10 )
    return sub_180010530(v10);
  return result;
}
