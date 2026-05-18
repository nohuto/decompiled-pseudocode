/*
 * XREFs of sub_1800563E8 @ 0x1800563E8
 * Callers:
 *     sub_180055A00 @ 0x180055A00 (sub_180055A00.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180015EE4 @ 0x180015EE4 (sub_180015EE4.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 *     sub_180055CE8 @ 0x180055CE8 (sub_180055CE8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800563E8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rax
  void **v10; // rax
  __int64 v11; // rbx
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  int v16; // [rsp+70h] [rbp+20h] BYREF

  v13 = 0LL;
  v16 = sub_180026650(a3);
  v6 = sub_1800435C8(a1 + 112, (__int64)&v16);
  if ( v6 == *(_QWORD *)(a1 + 112) || !sub_180011DE0((_QWORD *)(v6 + 40)) )
  {
    v8 = sub_180015EE4(a3, &v14);
    sub_180011020(&v13, v8);
    if ( v15 )
      sub_180010530(v15);
    v9 = sub_18001246C(&v14, &v13);
    sub_180055CE8(a1, v9);
  }
  else
  {
    sub_1800124F8((__int64 *)&v13, v7);
  }
  v10 = (void **)sub_18002963C(a1, &v14);
  v11 = v13;
  sub_180029824(v13, v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11 + 40LL))(v11, *(_QWORD *)(a1 + 128), a2);
  if ( *((_QWORD *)&v13 + 1) )
    return sub_180010530(*((__int64 *)&v13 + 1));
  return result;
}
