/*
 * XREFs of sub_180028710 @ 0x180028710
 * Callers:
 *     sub_180028240 @ 0x180028240 (sub_180028240.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001071C @ 0x18001071C (sub_18001071C.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180027CE8 @ 0x180027CE8 (sub_180027CE8.c)
 *     sub_1800289F0 @ 0x1800289F0 (sub_1800289F0.c)
 *     sub_180028A40 @ 0x180028A40 (sub_180028A40.c)
 *     sub_180028A90 @ 0x180028A90 (sub_180028A90.c)
 *     sub_180029550 @ 0x180029550 (sub_180029550.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029700 @ 0x180029700 (sub_180029700.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180055AE8 @ 0x180055AE8 (sub_180055AE8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180028710(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  void (__fastcall *v17)(__int64, _QWORD); // r11
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  _BYTE v27[32]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+20h] BYREF

  result = sub_180026650(a2);
  v6 = result;
  if ( (_DWORD)result )
  {
    v7 = sub_180011D4C(v5 + 8, &v25);
    sub_180029550(a1, v7);
    if ( v26 )
      sub_180010530(v26);
    sub_18001071C(a2, &v23);
    v8 = v23;
    v9 = sub_18002963C(a1, &v25);
    sub_180029824(v8, v9);
    v10 = v23;
    v11 = sub_1800289F0(a1, *(unsigned int *)(a1 + 112));
    v14 = sub_180028A40(a1, v12, v13, v11);
    v16 = sub_180028A90(a1, v15, v14);
    v17(v10, v16);
    v28 = v6;
    v18 = sub_180027CE8((_QWORD *)(a1 + 120), (__int64)&v25, &v28);
    sub_1800124F8((__int64 *)(*(_QWORD *)v18 + 40LL), &v23);
    if ( *(_QWORD *)(a1 + 136) )
    {
      sub_18001246C(&v25, (_QWORD *)(v23 + 96));
      sub_180055AE8(v19, &v25);
      sub_18001246C(&v25, (_QWORD *)(v23 + 96));
      v20 = sub_18002963C(*(_QWORD *)(a1 + 136), v27);
      sub_180029824(v25, v20);
      if ( v26 )
        sub_180010530(v26);
    }
    if ( *(_QWORD *)(a1 + 152) )
    {
      sub_18001246C(&v25, (_QWORD *)(v23 + 112));
      sub_180055AE8(v21, &v25);
      sub_18001246C(&v25, (_QWORD *)(v23 + 112));
      v22 = sub_18002963C(*(_QWORD *)(a1 + 152), v27);
      sub_180029824(v25, v22);
      if ( v26 )
        sub_180010530(v26);
    }
    result = sub_180029700(a1, v6);
    if ( v24 )
      return sub_180010530(v24);
  }
  return result;
}
