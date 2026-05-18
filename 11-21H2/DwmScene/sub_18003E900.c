/*
 * XREFs of sub_18003E900 @ 0x18003E900
 * Callers:
 *     sub_18003E1EC @ 0x18003E1EC (sub_18003E1EC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18003F2E0 @ 0x18003F2E0 (sub_18003F2E0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003E900(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 v9; // r13
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // r14
  __int64 *v14; // rbx
  __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  char *v20; // rdi
  __int64 v21; // rcx
  __int64 *v22; // rsi
  __int64 v23; // rdx
  signed __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char *v30; // rdi
  __int64 v31; // rcx
  __int64 *v32; // rsi
  __int64 v33; // rdx
  signed __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // [rsp+20h] [rbp-30h] BYREF
  __int64 v38; // [rsp+28h] [rbp-28h]
  __int64 v39; // [rsp+30h] [rbp-20h] BYREF
  __int64 v40; // [rsp+38h] [rbp-18h]
  __int64 *v41; // [rsp+40h] [rbp-10h]
  __int64 v42; // [rsp+48h] [rbp-8h]

  v9 = sub_18003F2E0(a2, a3, a4);
  v41 = a4;
  v42 = v9;
  v10 = (__int64 *)(a3 - 16);
  v11 = *(_QWORD *)(a2 - 16);
  v12 = *(_QWORD *)(a2 - 8);
  *(_QWORD *)(a2 - 16) = 0LL;
  *(_QWORD *)(a2 - 8) = 0LL;
  v37 = *v10;
  *v10 = v11;
  v38 = v10[1];
  v10[1] = v12;
  sub_180010910((__int64)&v37);
  v13 = (__int64 *)(v9 - 16);
  v14 = (__int64 *)(a2 - 32);
  do
  {
    while ( 1 )
    {
      v15 = v10 - 2;
      v10 -= 2;
      if ( !a5(v13, v14) )
        break;
      v16 = *v14;
      v17 = v14[1];
      *v14 = 0LL;
      v14[1] = 0LL;
      v37 = *v15;
      *v15 = v16;
      v38 = v15[1];
      v15[1] = v17;
      sub_180010910((__int64)&v37);
      if ( a1 == v14 )
      {
        v30 = (char *)(v15 - 2);
        v31 = *v13;
        v32 = v13 + 1;
        v33 = v13[1];
        *v13 = 0LL;
        v13[1] = 0LL;
        v39 = *(_QWORD *)v30;
        *(_QWORD *)v30 = v31;
        v40 = *((_QWORD *)v30 + 1);
        *((_QWORD *)v30 + 1) = v33;
        sub_180010910((__int64)&v39);
        if ( v13 != a4 )
        {
          v34 = v30 - (char *)v13;
          do
          {
            v32 -= 2;
            v35 = *(v32 - 1);
            v36 = *v32;
            *(v32 - 1) = 0LL;
            *v32 = 0LL;
            v39 = *(__int64 *)((char *)v32 + v34 - 8);
            *(__int64 *)((char *)v32 + v34 - 8) = v35;
            v40 = *(__int64 *)((char *)v32 + v34);
            *(__int64 *)((char *)v32 + v34) = v36;
            sub_180010910((__int64)&v39);
          }
          while ( v32 - 1 != a4 );
        }
        return sub_18003E6C4((__int64)a4, v9);
      }
      v14 -= 2;
    }
    v18 = *v13;
    v19 = v13[1];
    *v13 = 0LL;
    v13[1] = 0LL;
    v39 = *v15;
    *v15 = v18;
    v40 = v15[1];
    v15[1] = v19;
    sub_180010910((__int64)&v39);
    v13 -= 2;
  }
  while ( a4 != v13 );
  v20 = (char *)(v15 - 2);
  v21 = *v14;
  v22 = v14 + 1;
  v23 = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  v39 = *(_QWORD *)v20;
  *(_QWORD *)v20 = v21;
  v40 = *((_QWORD *)v20 + 1);
  *((_QWORD *)v20 + 1) = v23;
  sub_180010910((__int64)&v39);
  if ( v14 != a1 )
  {
    v24 = v20 - (char *)v14;
    do
    {
      v22 -= 2;
      v25 = *(v22 - 1);
      v26 = *v22;
      *(v22 - 1) = 0LL;
      *v22 = 0LL;
      v39 = *(__int64 *)((char *)v22 + v24 - 8);
      *(__int64 *)((char *)v22 + v24 - 8) = v25;
      v40 = *(__int64 *)((char *)v22 + v24);
      *(__int64 *)((char *)v22 + v24) = v26;
      sub_180010910((__int64)&v39);
    }
    while ( v22 - 1 != a1 );
  }
  v27 = *a4;
  v28 = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v39 = *a1;
  *a1 = v27;
  v40 = a1[1];
  a1[1] = v28;
  sub_180010910((__int64)&v39);
  return sub_18003E6C4((__int64)a4, v9);
}
