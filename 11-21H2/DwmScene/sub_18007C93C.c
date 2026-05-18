/*
 * XREFs of sub_18007C93C @ 0x18007C93C
 * Callers:
 *     sub_18007CB18 @ 0x18007CB18 (sub_18007CB18.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007C93C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  __int64 v6; // r15
  __int64 v8; // rbx
  __int64 i; // rdi
  __int64 *v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int64 v33; // [rsp+20h] [rbp-10h] BYREF
  __int64 v34; // [rsp+28h] [rbp-8h]
  __int64 v35; // [rsp+60h] [rbp+30h]

  v35 = a3 - 1;
  v6 = (a3 - 1) >> 1;
  v8 = a2;
  for ( i = a2; i < v6; v8 = i )
  {
    i = 2 * i + 2;
    if ( a5(a1 + 16 * i, a1 + 16 * i - 16) )
      --i;
    v12 = (__int64 *)(a1 + 16 * v8);
    v13 = (__int64 *)(a1 + 16 * i);
    v14 = *v13;
    v15 = v13[1];
    *v13 = 0LL;
    v13[1] = 0LL;
    v16 = *v12;
    *v12 = v14;
    v33 = v16;
    v34 = v12[1];
    v12[1] = v15;
    sub_180010910((__int64)&v33);
  }
  if ( i == v6 && (a3 & 1) == 0 )
  {
    v17 = 2 * a3;
    v18 = (__int64 *)(a1 + 16 * v8);
    v19 = *(_QWORD *)(a1 + 8 * v17 - 16);
    *(_QWORD *)(a1 + 8 * v17 - 16) = 0LL;
    v20 = *(_QWORD *)(a1 + 8 * v17 - 8);
    *(_QWORD *)(a1 + 8 * v17 - 8) = 0LL;
    v21 = *v18;
    *v18 = v19;
    v33 = v21;
    v34 = v18[1];
    v18[1] = v20;
    sub_180010910((__int64)&v33);
    v8 = v35;
  }
  if ( a2 < v8 )
  {
    do
    {
      v22 = (v8 - 1) >> 1;
      v23 = (__int64 *)(a1 + 16 * v22);
      if ( !a5((__int64)v23, (__int64)a4) )
        break;
      v24 = *v23;
      *v23 = 0LL;
      v25 = v23[1];
      v23[1] = 0LL;
      v26 = (__int64 *)(a1 + 16 * v8);
      v27 = *v26;
      *v26 = v24;
      v33 = v27;
      v34 = v26[1];
      v26[1] = v25;
      sub_180010910((__int64)&v33);
      v8 = v22;
    }
    while ( a2 < v22 );
  }
  v28 = *a4;
  *a4 = 0LL;
  v29 = a4[1];
  a4[1] = 0LL;
  v30 = (__int64 *)(a1 + 16 * v8);
  v31 = *v30;
  *v30 = v28;
  v33 = v31;
  v34 = v30[1];
  v30[1] = v29;
  return sub_180010910((__int64)&v33);
}
