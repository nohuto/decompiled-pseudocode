/*
 * XREFs of sub_18005DBFC @ 0x18005DBFC
 * Callers:
 *     sub_18005DEB4 @ 0x18005DEB4 (sub_18005DEB4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18004E9D8 @ 0x18004E9D8 (sub_18004E9D8.c)
 *     sub_18005C5C0 @ 0x18005C5C0 (sub_18005C5C0.c)
 *     sub_18005E32C @ 0x18005E32C (sub_18005E32C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005DBFC(__int64 a1, int *a2, unsigned __int64 a3)
{
  int *v3; // r9
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  _OWORD *v9; // rdi
  unsigned int v10; // r12d
  int v11; // edx
  int v12; // eax
  _OWORD *v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r15
  _OWORD *v21; // rsi
  unsigned __int64 v22; // r14
  _OWORD *v23; // rdx
  _OWORD *v24; // r8
  _OWORD *v25; // rcx
  int v27; // [rsp+24h] [rbp-95h]
  int v28; // [rsp+28h] [rbp-91h]
  unsigned int v29; // [rsp+2Ch] [rbp-8Dh]
  __int64 v31; // [rsp+38h] [rbp-81h]
  unsigned __int64 v32; // [rsp+40h] [rbp-79h]
  unsigned __int64 v33; // [rsp+48h] [rbp-71h]
  _DWORD v34[15]; // [rsp+60h] [rbp-59h]
  __m128i si128; // [rsp+9Ch] [rbp-1Dh]
  int v36; // [rsp+ACh] [rbp-Dh]
  int v37; // [rsp+B0h] [rbp-9h]
  int v38; // [rsp+B4h] [rbp-5h]
  int v39; // [rsp+B8h] [rbp-1h]
  int v40; // [rsp+BCh] [rbp+3h]
  int v41; // [rsp+C0h] [rbp+7h]

  v3 = a2;
  v5 = (a2[5] & 0x10) != 0 ? 6LL : 1LL;
  v6 = a3 / v5;
  v32 = a3 / v5;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  v8 = 0LL;
  v31 = 0LL;
  v9 = 0LL;
  do
  {
    v10 = sub_18005E32C((unsigned int)v3[4], (unsigned int)*v3, (unsigned int)v3[1]);
    v29 = v10;
    v11 = sub_18004E9D8(a2[4], *a2);
    v28 = v11;
    v34[0] = 0;
    v34[1] = 4;
    v34[2] = 4;
    v34[3] = 4;
    v34[4] = 8;
    v34[5] = 12;
    v34[6] = 16;
    v34[7] = 4;
    v34[8] = 4;
    v34[9] = 8;
    v34[10] = 12;
    v34[11] = 16;
    v34[12] = 2;
    v34[13] = 1;
    v34[14] = 2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7F0);
    v36 = 2;
    v37 = 4;
    v38 = 8;
    v39 = 4;
    v40 = 1;
    v41 = 2;
    v3 = a2;
    v12 = v34[a2[4]];
    v27 = v12;
    v13 = *(_OWORD **)(a1 + 16);
    if ( v9 == v13 )
    {
      v14 = (__int64)v9 - *(_QWORD *)a1;
      v15 = v14 >> 5;
      if ( v14 >> 5 == 0x7FFFFFFFFFFFFFFLL )
        sub_180012170();
      v16 = v15 + 1;
      v17 = ((__int64)v13 - *(_QWORD *)a1) >> 5;
      v18 = v17 >> 1;
      if ( v17 <= 0x7FFFFFFFFFFFFFFLL - (v17 >> 1) )
      {
        v19 = v15 + 1;
        if ( v18 + v17 >= v16 )
          v19 = v18 + v17;
        if ( v19 > 0x7FFFFFFFFFFFFFFLL )
          sub_1800120D4();
      }
      else
      {
        v19 = 0x7FFFFFFFFFFFFFFLL;
      }
      v20 = 2 * v19;
      v21 = (_OWORD *)sub_180011088(v20 * 16);
      v22 = v14 & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)((char *)v21 + v22) = v31;
      *(_QWORD *)((char *)v21 + v22 + 8) = v32;
      *(_DWORD *)((char *)v21 + v22 + 16) = v27;
      *(_DWORD *)((char *)v21 + v22 + 20) = v28;
      *(_QWORD *)((char *)v21 + v22 + 24) = v29;
      v23 = *(_OWORD **)(a1 + 8);
      v24 = v21;
      v25 = *(_OWORD **)a1;
      if ( v9 != v23 )
      {
        sub_18005C5C0(v25, v9, v21);
        v24 = (_OWORD *)((char *)v21 + v22 + 32);
        v23 = *(_OWORD **)(a1 + 8);
        v25 = v9;
      }
      sub_18005C5C0(v25, v23, v24);
      if ( *(_QWORD *)a1 )
        sub_180010884(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
      *(_QWORD *)a1 = v21;
      v9 = &v21[2 * v16];
      *(_QWORD *)(a1 + 8) = v9;
      *(_QWORD *)(a1 + 16) = &v21[v20];
      v8 = v31;
      v7 = v33;
      v6 = v32;
      v3 = a2;
    }
    else
    {
      *(_QWORD *)v9 = v8;
      *((_QWORD *)v9 + 1) = v6;
      *((_DWORD *)v9 + 4) = v12;
      *((_DWORD *)v9 + 5) = v11;
      *((_DWORD *)v9 + 6) = v10;
      *((_DWORD *)v9 + 7) = 0;
      *(_QWORD *)(a1 + 8) += 32LL;
      v9 = *(_OWORD **)(a1 + 8);
    }
    v33 = ++v7;
    v8 += v6;
    v31 = v8;
  }
  while ( v7 < v5 );
  return a1;
}
