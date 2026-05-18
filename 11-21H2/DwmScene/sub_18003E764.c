/*
 * XREFs of sub_18003E764 @ 0x18003E764
 * Callers:
 *     sub_18003E1EC @ 0x18003E1EC (sub_18003E1EC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18003EE90 @ 0x18003EE90 (sub_18003EE90.c)
 *     sub_18003F2E0 @ 0x18003F2E0 (sub_18003F2E0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003E764(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 v8; // r14
  __int64 *v9; // rsi
  __int64 *v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+28h] [rbp-28h]
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h]
  __int64 v27; // [rsp+40h] [rbp-10h]
  __int64 v28; // [rsp+48h] [rbp-8h]

  v8 = sub_18003F2E0(a1, a2, a4);
  v27 = a4;
  v28 = v8;
  v9 = (__int64 *)a4;
  v10 = (__int64 *)(v8 - 16);
  v11 = *a2;
  v12 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v23 = *a1;
  *a1 = v11;
  v24 = a1[1];
  a1[1] = v12;
  sub_180010910((__int64)&v23);
  v13 = a1 + 2;
  v14 = a2 + 2;
  while ( a5(v14, v9) )
  {
    v15 = *v14;
    v16 = v14[1];
    *v14 = 0LL;
    v14[1] = 0LL;
    v23 = *v13;
    *v13 = v15;
    v24 = v13[1];
    v13[1] = v16;
    sub_180010910((__int64)&v23);
    v14 += 2;
    if ( v14 == a3 )
    {
      sub_18003EE90(v9, v8, v13 + 2);
      return sub_18003E6C4(a4, v8);
    }
LABEL_6:
    v13 += 2;
  }
  v17 = *v9;
  v18 = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  v25 = *v13;
  *v13 = v17;
  v26 = v13[1];
  v13[1] = v18;
  sub_180010910((__int64)&v25);
  v9 += 2;
  if ( v9 != v10 )
    goto LABEL_6;
  v19 = (__int64 *)sub_18003EE90(v14, a3, v13 + 2);
  v20 = *v10;
  v21 = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  v25 = *v19;
  *v19 = v20;
  v26 = v19[1];
  v19[1] = v21;
  sub_180010910((__int64)&v25);
  return sub_18003E6C4(a4, v8);
}
