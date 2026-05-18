/*
 * XREFs of sub_1800F5EB0 @ 0x1800F5EB0
 * Callers:
 *     sub_1800F7A7C @ 0x1800F7A7C (sub_1800F7A7C.c)
 *     sub_1800F82B0 @ 0x1800F82B0 (sub_1800F82B0.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001FFD8 @ 0x18001FFD8 (sub_18001FFD8.c)
 *     sub_180030730 @ 0x180030730 (sub_180030730.c)
 *     sub_180030740 @ 0x180030740 (sub_180030740.c)
 *     sub_180047D08 @ 0x180047D08 (sub_180047D08.c)
 *     sub_18006B90C @ 0x18006B90C (sub_18006B90C.c)
 *     sub_1800F82B0 @ 0x1800F82B0 (sub_1800F82B0.c)
 *     sub_1800F84E0 @ 0x1800F84E0 (sub_1800F84E0.c)
 *     sub_1800F9C6C @ 0x1800F9C6C (sub_1800F9C6C.c)
 *     sub_1800F9D04 @ 0x1800F9D04 (sub_1800F9D04.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800F5EB0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 *v5; // r12
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  char **v8; // rdi
  char *i; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r10
  unsigned __int64 v14; // rdx
  float v15; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 *v21; // r9
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned __int64 *v26; // [rsp+20h] [rbp-30h] BYREF
  __int64 v27; // [rsp+28h] [rbp-28h]
  __int128 v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  __int64 v30; // [rsp+98h] [rbp+48h] BYREF
  __int64 *v31; // [rsp+A0h] [rbp+50h] BYREF

  v31 = a3;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v5 = a1 + 1;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v31 = (__int64 *)sub_180011088(0xB0uLL);
  sub_180030730(v31, (__int64 *)&v31);
  sub_180030730((__int64 *)(v6 + 8), (__int64 *)&v31);
  *v5 = v7;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = *(_QWORD *)(a2 + 48);
  a1[7] = *(_QWORD *)(a2 + 56);
  sub_180047D08((__int64)(a1 + 3), (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3, *v5);
  v8 = *(char ***)(a2 + 8);
  for ( i = *v8; i != (char *)v8; i = *(char **)i )
  {
    v10 = (__int64)(i + 16);
    if ( *((_QWORD *)i + 5) >= 8uLL )
      v10 = *((_QWORD *)i + 2);
    v11 = sub_18001FFD8(v10, *((_QWORD *)i + 4));
    sub_18006B90C(a1, &v28, i + 16, v11);
    if ( !*((_QWORD *)&v28 + 1) )
    {
      if ( a1[2] == 0x1745D1745D1745DLL )
        std::_Xlength_error("unordered_map/set too long");
      v26 = v5;
      v27 = 0LL;
      v12 = sub_180011088(0xB0uLL);
      v27 = v12;
      sub_1800F82B0(v12 + 16, i + 16);
      v13 = a1[2];
      v14 = v13 + 1;
      if ( v13 + 1 < 0 )
        v15 = (float)(int)(v14 & 1 | (v14 >> 1)) + (float)(int)(v14 & 1 | (v14 >> 1));
      else
        v15 = (float)(int)v14;
      v16 = a1[7];
      if ( v16 < 0 )
      {
        v18 = a1[7] & 1LL | ((unsigned __int64)v16 >> 1);
        v17 = (float)(int)v18 + (float)(int)v18;
      }
      else
      {
        v17 = (float)(int)v16;
      }
      if ( (float)(v15 / v17) > *(float *)a1 )
      {
        v19 = sub_1800F9C6C(a1);
        sub_1800F9D04(a1, v19);
        v28 = *(_OWORD *)sub_18006B90C(a1, &v29, (char *)(v12 + 16), v11);
        v13 = a1[2];
      }
      v27 = 0LL;
      v31 = (__int64 *)v28;
      v30 = *(_QWORD *)(v28 + 8);
      a1[2] = v13 + 1;
      sub_180030740((__int64 *)v12, (__int64 *)&v31);
      sub_180030740((__int64 *)(v12 + 8), &v30);
      *v21 = v12;
      *(_QWORD *)(v20 + 8) = v12;
      v22 = a1[3];
      v23 = 2 * (a1[6] & v11);
      v24 = *(_QWORD *)(v22 + 8 * v23);
      v5 = a1 + 1;
      if ( v24 == a1[1] )
      {
        *(_QWORD *)(v22 + 8 * v23) = v12;
        goto LABEL_20;
      }
      if ( v24 == v20 )
      {
        *(_QWORD *)(v22 + 8 * v23) = v12;
      }
      else if ( *(__int64 **)(v22 + 8 * v23 + 8) == v21 )
      {
LABEL_20:
        *(_QWORD *)(v22 + 8 * v23 + 8) = v12;
      }
      sub_1800F84E0(&v26);
      continue;
    }
  }
  return a1;
}
