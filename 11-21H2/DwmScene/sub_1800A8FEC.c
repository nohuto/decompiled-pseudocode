/*
 * XREFs of sub_1800A8FEC @ 0x1800A8FEC
 * Callers:
 *     sub_1800AB580 @ 0x1800AB580 (sub_1800AB580.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001FF9C @ 0x18001FF9C (sub_18001FF9C.c)
 *     sub_180030730 @ 0x180030730 (sub_180030730.c)
 *     sub_180030740 @ 0x180030740 (sub_180030740.c)
 *     sub_180047D08 @ 0x180047D08 (sub_180047D08.c)
 *     sub_1800A8EC8 @ 0x1800A8EC8 (sub_1800A8EC8.c)
 *     sub_1800AC6B4 @ 0x1800AC6B4 (sub_1800AC6B4.c)
 */

// Hidden C++ exception states: #wind=5
int *__fastcall sub_1800A8FEC(__int64 *a1, __m128i *a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r8
  __m128i v5; // xmm0
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v26; // [rsp+90h] [rbp+40h] BYREF
  __int64 v27; // [rsp+98h] [rbp+48h] BYREF
  int *v28; // [rsp+A0h] [rbp+50h]

  v26 = a1;
  v28 = &dword_1801FAE00;
  dword_1801FAE00 = 0;
  qword_1801FAE08 = 0LL;
  qword_1801FAE10 = 0LL;
  v26 = (__int64 *)sub_180011088(0x38uLL);
  sub_180030730(v26, (__int64 *)&v26);
  sub_180030730((__int64 *)(v3 + 8), (__int64 *)&v26);
  qword_1801FAE08 = v4;
  qword_1801FAE18 = 0LL;
  xmmword_1801FAE20 = 0LL;
  qword_1801FAE30 = 7LL;
  qword_1801FAE38 = 8LL;
  dword_1801FAE00 = 1065353216;
  sub_180047D08((__int64)&qword_1801FAE18, 0x10uLL, v4);
  v5 = *a2;
  v6 = a2->m128i_i64[0];
  v7 = _mm_srli_si128(v5, 8).m128i_u64[0];
  while ( v6 != v7 )
  {
    v8 = v6;
    if ( *(_QWORD *)(v6 + 24) >= 0x10uLL )
      v8 = *(_QWORD *)v6;
    v9 = sub_18001FF9C(v8, *(_QWORD *)(v6 + 16));
    sub_1800A8EC8(v10, (__int64 *)&v24, (_QWORD *)v6, v9);
    if ( !*((_QWORD *)&v24 + 1) )
    {
      if ( qword_1801FAE10 == 0x492492492492492LL )
        std::_Xlength_error("unordered_map/set too long");
      v11 = sub_180011088(0x38uLL);
      sub_18001875C((__int64 *)(v11 + 16), v6);
      *(_BYTE *)(v11 + 48) = *(_BYTE *)(v6 + 32);
      v12 = qword_1801FAE10;
      v13 = qword_1801FAE10 + 1;
      if ( qword_1801FAE10 + 1 < 0 )
        v14 = (float)(int)(v13 & 1 | (v13 >> 1)) + (float)(int)(v13 & 1 | (v13 >> 1));
      else
        v14 = (float)(int)v13;
      v15 = qword_1801FAE38;
      if ( qword_1801FAE38 < 0 )
      {
        v15 = qword_1801FAE38 & 1;
        v16 = (float)(int)(v15 | ((unsigned __int64)qword_1801FAE38 >> 1))
            + (float)(int)(v15 | ((unsigned __int64)qword_1801FAE38 >> 1));
      }
      else
      {
        v16 = (float)(int)qword_1801FAE38;
      }
      if ( (float)(v14 / v16) > *(float *)&dword_1801FAE00 )
      {
        sub_1800AC6B4(v15, qword_1801FAE10);
        v24 = *(_OWORD *)sub_1800A8EC8(v17, &v25, (_QWORD *)(v11 + 16), v9);
        v12 = qword_1801FAE10;
      }
      v26 = (__int64 *)v24;
      v27 = *(_QWORD *)(v24 + 8);
      qword_1801FAE10 = v12 + 1;
      sub_180030740((__int64 *)v11, (__int64 *)&v26);
      sub_180030740((__int64 *)(v11 + 8), &v27);
      *v19 = v11;
      *(_QWORD *)(v18 + 8) = v11;
      v20 = 2 * (qword_1801FAE30 & v9);
      v21 = qword_1801FAE18;
      v22 = *(_QWORD *)(qword_1801FAE18 + 8 * v20);
      if ( v22 == qword_1801FAE08 )
      {
        *(_QWORD *)(qword_1801FAE18 + 8 * v20) = v11;
LABEL_20:
        *(_QWORD *)(v21 + 8 * v20 + 8) = v11;
        goto LABEL_21;
      }
      if ( v22 == v18 )
      {
        *(_QWORD *)(qword_1801FAE18 + 8 * v20) = v11;
        goto LABEL_21;
      }
      if ( *(__int64 **)(qword_1801FAE18 + 8 * v20 + 8) == v19 )
        goto LABEL_20;
    }
LABEL_21:
    v6 += 40LL;
  }
  return &dword_1801FAE00;
}
