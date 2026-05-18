/*
 * XREFs of sub_18009B824 @ 0x18009B824
 * Callers:
 *     sub_1800986C8 @ 0x1800986C8 (sub_1800986C8.c)
 * Callees:
 *     sub_18001EA20 @ 0x18001EA20 (sub_18001EA20.c)
 *     sub_180042798 @ 0x180042798 (sub_180042798.c)
 *     sub_18009839C @ 0x18009839C (sub_18009839C.c)
 *     sub_180098AA0 @ 0x180098AA0 (sub_180098AA0.c)
 */

unsigned __int64 __fastcall sub_18009B824(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r13
  _QWORD *v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF

  v29 = a1;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_1801D8A58;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  sub_180042798((__int64)&qword_1801D8A68, 2 * v5, qword_1801D8A58);
  qword_1801D8A88 = v5;
  qword_1801D8A80 = v5 - 1;
  v6 = *(_QWORD **)qword_1801D8A58;
  v7 = *(_QWORD **)qword_1801D8A58;
  while ( v6 != (_QWORD *)v3 )
  {
    v7 = (_QWORD *)*v7;
    v8 = (__int64)(v6 + 2);
    if ( v6[5] >= 0x10uLL )
      v8 = v6[2];
    v9 = sub_18001EA20(v8, v6[4]);
    v12 = qword_1801D8A68;
    v13 = 2 * (v11 & v9);
    if ( *(_QWORD *)(qword_1801D8A68 + 16 * (v11 & v9)) == v3 )
    {
      *(_QWORD *)(qword_1801D8A68 + 16 * (v11 & v9)) = v6;
LABEL_9:
      *(_QWORD *)(v12 + 8 * v13 + 8) = v6;
      goto LABEL_18;
    }
    v14 = *(_QWORD *)(qword_1801D8A68 + 16 * (v11 & v9) + 8);
    if ( !sub_18009839C(v10, v6 + 2, (const void **)(v14 + 16)) )
    {
      v16 = *(_QWORD **)v14;
      if ( *(_QWORD **)v14 != v6 )
      {
        v17 = (_QWORD *)v6[1];
        *v17 = v7;
        v18 = (_QWORD *)v7[1];
        *v18 = v16;
        v19 = (_QWORD *)v16[1];
        *v19 = v6;
        v16[1] = v18;
        v7[1] = v17;
        v6[1] = v19;
      }
      goto LABEL_9;
    }
    v20 = v14;
    while ( *(_QWORD *)(v12 + 8 * v13) != v20 )
    {
      v14 = *(_QWORD *)(v14 + 8);
      v20 = v14;
      if ( !sub_18009839C(v15, v6 + 2, (const void **)(v14 + 16)) )
      {
        v21 = *(_QWORD **)v14;
        v22 = (_QWORD *)v6[1];
        *v22 = v7;
        v23 = (_QWORD *)v7[1];
        *v23 = v21;
        v24 = (_QWORD *)v21[1];
        *v24 = v6;
        v21[1] = v23;
        v7[1] = v22;
        v6[1] = v24;
        goto LABEL_18;
      }
    }
    v25 = (_QWORD *)v6[1];
    *v25 = v7;
    v26 = (_QWORD *)v7[1];
    *v26 = v14;
    v27 = *(_QWORD **)(v14 + 8);
    *v27 = v6;
    *(_QWORD *)(v14 + 8) = v26;
    v7[1] = v25;
    v6[1] = v27;
    *(_QWORD *)(v12 + 8 * v13) = v6;
LABEL_18:
    v6 = v7;
  }
  v29 = 0LL;
  return sub_180098AA0(&v29);
}
