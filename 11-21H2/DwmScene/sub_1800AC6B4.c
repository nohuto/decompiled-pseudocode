/*
 * XREFs of sub_1800AC6B4 @ 0x1800AC6B4
 * Callers:
 *     sub_1800A8FEC @ 0x1800A8FEC (sub_1800A8FEC.c)
 * Callees:
 *     _o_ceilf @ 0x18000C00C (_o_ceilf.c)
 *     sub_18001DA38 @ 0x18001DA38 (sub_18001DA38.c)
 *     sub_18001FF9C @ 0x18001FF9C (sub_18001FF9C.c)
 *     sub_180047D08 @ 0x180047D08 (sub_180047D08.c)
 */

char sub_1800AC6B4()
{
  int v0; // ecx
  float v1; // xmm0_4
  float v2; // xmm0_4
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r12
  __int64 v17; // r14
  _QWORD *v18; // rsi
  _QWORD *v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // r13
  __int64 v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx

  v0 = qword_1801FAE10 + 1;
  if ( qword_1801FAE10 + 1 < 0 )
    v1 = (float)(int)(v0 & 1 | ((unsigned __int64)(qword_1801FAE10 + 1) >> 1))
       + (float)(int)(v0 & 1 | ((unsigned __int64)(qword_1801FAE10 + 1) >> 1));
  else
    v1 = (float)v0;
  v2 = v1 / *(float *)&dword_1801FAE00;
  o_ceilf();
  v3 = 0LL;
  if ( v2 >= 9.223372e18 )
  {
    v2 = v2 - 9.223372e18;
    if ( v2 < 9.223372e18 )
      v3 = 0x8000000000000000uLL;
  }
  v4 = qword_1801FAE38;
  v5 = v3 + (unsigned int)(int)v2;
  v6 = 8LL;
  if ( v5 > 8 )
    v6 = v5;
  if ( qword_1801FAE38 < v6 )
  {
    if ( (unsigned __int64)qword_1801FAE38 >= 0x200 || (v4 = 8 * qword_1801FAE38, 8 * qword_1801FAE38 < v6) )
      v4 = v6;
  }
  _BitScanReverse64(&v7, 0xFFFFFFFFFFFFFFFuLL);
  if ( v4 > 1LL << v7 )
    std::_Xlength_error("invalid hash bucket count");
  v8 = qword_1801FAE08;
  _BitScanReverse64(&v9, (v4 - 1) | 1);
  v10 = 1LL << ((unsigned __int8)v9 + 1);
  LOBYTE(v11) = sub_180047D08((__int64)&qword_1801FAE18, 2 * v10, qword_1801FAE08);
  qword_1801FAE38 = v10;
  qword_1801FAE30 = v10 - 1;
  v12 = *(_QWORD **)qword_1801FAE08;
  v13 = *(_QWORD **)qword_1801FAE08;
  while ( v12 != (_QWORD *)v8 )
  {
    v13 = (_QWORD *)*v13;
    v14 = (__int64)(v12 + 2);
    if ( v12[5] >= 0x10uLL )
      v14 = v12[2];
    v11 = sub_18001FF9C(v14, v12[4]);
    v16 = qword_1801FAE18;
    v17 = 2 * (v15 & v11);
    if ( *(_QWORD *)(qword_1801FAE18 + 16 * (v15 & v11)) == v8 )
    {
      *(_QWORD *)(qword_1801FAE18 + 16 * (v15 & v11)) = v12;
LABEL_21:
      *(_QWORD *)(v16 + 8 * v17 + 8) = v12;
      goto LABEL_30;
    }
    v18 = *(_QWORD **)(qword_1801FAE18 + 16 * (v15 & v11) + 8);
    LOBYTE(v11) = sub_18001DA38(v12 + 2, v18 + 2);
    if ( (_BYTE)v11 )
    {
      v19 = (_QWORD *)*v18;
      if ( (_QWORD *)*v18 != v12 )
      {
        v20 = (_QWORD *)v12[1];
        *v20 = v13;
        v21 = (_QWORD *)v13[1];
        *v21 = v19;
        v11 = v19[1];
        *(_QWORD *)v11 = v12;
        v19[1] = v21;
        v13[1] = v20;
        v12[1] = v11;
      }
      goto LABEL_21;
    }
    v22 = v18;
    while ( *(_QWORD **)(v16 + 8 * v17) != v22 )
    {
      v18 = (_QWORD *)v18[1];
      v22 = v18;
      if ( sub_18001DA38(v12 + 2, v18 + 2) )
      {
        v23 = *v18;
        v24 = (_QWORD *)v12[1];
        *v24 = v13;
        v25 = (_QWORD *)v13[1];
        *v25 = v23;
        v11 = *(_QWORD *)(v23 + 8);
        *(_QWORD *)v11 = v12;
        *(_QWORD *)(v23 + 8) = v25;
        v13[1] = v24;
        v12[1] = v11;
        goto LABEL_30;
      }
    }
    v26 = (_QWORD *)v12[1];
    *v26 = v13;
    v27 = (_QWORD *)v13[1];
    *v27 = v22;
    v11 = v22[1];
    *(_QWORD *)v11 = v12;
    v22[1] = v27;
    v13[1] = v26;
    v12[1] = v11;
    *(_QWORD *)(v16 + 8 * v17) = v12;
LABEL_30:
    v12 = v13;
  }
  return v11;
}
