/*
 * XREFs of sub_14040E690 @ 0x14040E690
 * Callers:
 *     sub_14040C490 @ 0x14040C490 (sub_14040C490.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14040E690(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int128 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r11
  unsigned __int64 v20; // rbx
  __int64 v21; // r15
  unsigned __int128 v22; // kr20_16
  __int64 v23; // r12
  unsigned __int128 v24; // kr30_16
  __int64 v25; // r15
  unsigned __int128 v26; // kr40_16
  __int64 v27; // r12
  unsigned __int128 v28; // kr50_16
  __int64 v29; // r15
  unsigned __int128 v30; // kr60_16
  __int64 v31; // r12
  unsigned __int128 v32; // kr70_16
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // kr08_8
  unsigned __int64 result; // rax

  v5 = a4;
  v6 = *a1;
  v7 = *a1 * (unsigned __int128)*a2;
  *a4 = v7;
  *(_QWORD *)&v7 = v6 * a2[1];
  v8 = (v6 * (unsigned __int128)a2[1]) >> 64;
  a4[1] = *((_QWORD *)&v7 + 1) + v7;
  v9 = __CFADD__(*((_QWORD *)&v7 + 1), (_QWORD)v7) + v8;
  *(_QWORD *)&v7 = v6 * a2[2];
  v10 = (v6 * (unsigned __int128)a2[2]) >> 64;
  a4[2] = v9 + v7;
  v11 = __CFADD__(v9, (_QWORD)v7) + v10;
  *(_QWORD *)&v7 = v6 * a2[3];
  v12 = (v6 * (unsigned __int128)a2[3]) >> 64;
  a4[3] = v11 + v7;
  v13 = __CFADD__(v11, (_QWORD)v7) + v12;
  *(_QWORD *)&v7 = v6 * a2[4];
  v14 = (v6 * (unsigned __int128)a2[4]) >> 64;
  a4[4] = v13 + v7;
  v15 = __CFADD__(v13, (_QWORD)v7) + v14;
  *(_QWORD *)&v7 = v6 * a2[5];
  v16 = (v6 * (unsigned __int128)a2[5]) >> 64;
  a4[5] = v15 + v7;
  v17 = __CFADD__(v15, (_QWORD)v7) + v16;
  *(_QWORD *)&v7 = v6 * a2[6];
  v18 = (v6 * (unsigned __int128)a2[6]) >> 64;
  a4[6] = v17 + v7;
  *(_OWORD *)(a4 + 7) = v6 * (unsigned __int128)a2[7] + (unsigned __int64)__CFADD__(v17, (_QWORD)v7) + v18;
  v19 = 8 * a3 - 1;
  do
  {
    ++a1;
    ++v5;
    v20 = *a1;
    v21 = (*v5 + *a1 * (unsigned __int128)*a2) >> 64;
    *v5 += *a1 * *a2;
    v22 = v5[1] + v20 * (unsigned __int128)a2[1];
    v5[1] = v21 + v22;
    v23 = __CFADD__(v21, (_QWORD)v22) + *((_QWORD *)&v22 + 1);
    v24 = v5[2] + v20 * (unsigned __int128)a2[2];
    v5[2] = v23 + v24;
    v25 = __CFADD__(v23, (_QWORD)v24) + *((_QWORD *)&v24 + 1);
    v26 = v5[3] + v20 * (unsigned __int128)a2[3];
    v5[3] = v25 + v26;
    v27 = __CFADD__(v25, (_QWORD)v26) + *((_QWORD *)&v26 + 1);
    v28 = v5[4] + v20 * (unsigned __int128)a2[4];
    v5[4] = v27 + v28;
    v29 = __CFADD__(v27, (_QWORD)v28) + *((_QWORD *)&v28 + 1);
    v30 = v5[5] + v20 * (unsigned __int128)a2[5];
    v5[5] = v29 + v30;
    v31 = __CFADD__(v29, (_QWORD)v30) + *((_QWORD *)&v30 + 1);
    v32 = v5[6] + v20 * (unsigned __int128)a2[6];
    v5[6] = v31 + v32;
    v33 = __CFADD__(v31, (_QWORD)v32) + *((_QWORD *)&v32 + 1);
    v34 = (v5[7] + v20 * (unsigned __int128)a2[7]) >> 64;
    v35 = v5[7] + v20 * a2[7];
    v5[7] = v33 + v35;
    result = v33 + v35;
    v5[8] = (__PAIR128__(v34, v33) + v35) >> 64;
    --v19;
  }
  while ( v19 );
  return result;
}
