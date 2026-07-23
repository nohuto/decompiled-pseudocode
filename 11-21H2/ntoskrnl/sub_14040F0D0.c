/*
 * XREFs of sub_14040F0D0 @ 0x14040F0D0
 * Callers:
 *     sub_14040C440 @ 0x14040C440 (sub_14040C440.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14040F0D0(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 *a4)
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
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // r12
  __int64 v26; // r15
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // r12
  __int64 v30; // r15
  __int64 v31; // r15
  __int64 v32; // r12
  __int64 v33; // r12
  __int64 v34; // r15
  __int64 v35; // r11
  unsigned __int64 v36; // rbx
  __int64 v37; // r15
  unsigned __int128 v38; // kr20_16
  __int64 v39; // r12
  unsigned __int128 v40; // kr30_16
  __int64 v41; // r15
  unsigned __int128 v42; // kr40_16
  __int64 v43; // r12
  unsigned __int128 v44; // kr50_16
  __int64 v45; // r15
  unsigned __int128 v46; // kr60_16
  __int64 v47; // r12
  unsigned __int128 v48; // kr70_16
  __int64 v49; // r15
  unsigned __int128 v50; // kr80_16
  __int64 v51; // r12
  unsigned __int128 v52; // kr90_16
  __int64 v53; // r15
  unsigned __int128 v54; // krA0_16
  __int64 v55; // r12
  unsigned __int128 v56; // krB0_16
  __int64 v57; // r15
  unsigned __int128 v58; // krC0_16
  __int64 v59; // r12
  unsigned __int128 v60; // krD0_16
  __int64 v61; // r15
  unsigned __int128 v62; // krE0_16
  __int64 v63; // r12
  unsigned __int128 v64; // krF0_16
  unsigned __int64 v65; // r15
  unsigned __int64 v66; // r12
  unsigned __int64 v67; // kr08_8
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
  v19 = __CFADD__(v17, (_QWORD)v7) + v18;
  *(_QWORD *)&v7 = v6 * a2[7];
  v20 = (v6 * (unsigned __int128)a2[7]) >> 64;
  a4[7] = v19 + v7;
  v21 = __CFADD__(v19, (_QWORD)v7) + v20;
  *(_QWORD *)&v7 = v6 * a2[8];
  v22 = (v6 * (unsigned __int128)a2[8]) >> 64;
  a4[8] = v21 + v7;
  v23 = __CFADD__(v21, (_QWORD)v7) + v22;
  *(_QWORD *)&v7 = v6 * a2[9];
  v24 = (v6 * (unsigned __int128)a2[9]) >> 64;
  a4[9] = v23 + v7;
  v25 = __CFADD__(v23, (_QWORD)v7) + v24;
  *(_QWORD *)&v7 = v6 * a2[10];
  v26 = (v6 * (unsigned __int128)a2[10]) >> 64;
  a4[10] = v25 + v7;
  v27 = __CFADD__(v25, (_QWORD)v7) + v26;
  *(_QWORD *)&v7 = v6 * a2[11];
  v28 = (v6 * (unsigned __int128)a2[11]) >> 64;
  a4[11] = v27 + v7;
  v29 = __CFADD__(v27, (_QWORD)v7) + v28;
  *(_QWORD *)&v7 = v6 * a2[12];
  v30 = (v6 * (unsigned __int128)a2[12]) >> 64;
  a4[12] = v29 + v7;
  v31 = __CFADD__(v29, (_QWORD)v7) + v30;
  *(_QWORD *)&v7 = v6 * a2[13];
  v32 = (v6 * (unsigned __int128)a2[13]) >> 64;
  a4[13] = v31 + v7;
  v33 = __CFADD__(v31, (_QWORD)v7) + v32;
  *(_QWORD *)&v7 = v6 * a2[14];
  v34 = (v6 * (unsigned __int128)a2[14]) >> 64;
  a4[14] = v33 + v7;
  *(_OWORD *)(a4 + 15) = v6 * (unsigned __int128)a2[15] + (unsigned __int64)__CFADD__(v33, (_QWORD)v7) + v34;
  v35 = 8 * a3 - 1;
  do
  {
    ++a1;
    ++v5;
    v36 = *a1;
    v37 = (*v5 + *a1 * (unsigned __int128)*a2) >> 64;
    *v5 += *a1 * *a2;
    v38 = v5[1] + v36 * (unsigned __int128)a2[1];
    v5[1] = v37 + v38;
    v39 = __CFADD__(v37, (_QWORD)v38) + *((_QWORD *)&v38 + 1);
    v40 = v5[2] + v36 * (unsigned __int128)a2[2];
    v5[2] = v39 + v40;
    v41 = __CFADD__(v39, (_QWORD)v40) + *((_QWORD *)&v40 + 1);
    v42 = v5[3] + v36 * (unsigned __int128)a2[3];
    v5[3] = v41 + v42;
    v43 = __CFADD__(v41, (_QWORD)v42) + *((_QWORD *)&v42 + 1);
    v44 = v5[4] + v36 * (unsigned __int128)a2[4];
    v5[4] = v43 + v44;
    v45 = __CFADD__(v43, (_QWORD)v44) + *((_QWORD *)&v44 + 1);
    v46 = v5[5] + v36 * (unsigned __int128)a2[5];
    v5[5] = v45 + v46;
    v47 = __CFADD__(v45, (_QWORD)v46) + *((_QWORD *)&v46 + 1);
    v48 = v5[6] + v36 * (unsigned __int128)a2[6];
    v5[6] = v47 + v48;
    v49 = __CFADD__(v47, (_QWORD)v48) + *((_QWORD *)&v48 + 1);
    v50 = v5[7] + v36 * (unsigned __int128)a2[7];
    v5[7] = v49 + v50;
    v51 = __CFADD__(v49, (_QWORD)v50) + *((_QWORD *)&v50 + 1);
    v52 = v5[8] + v36 * (unsigned __int128)a2[8];
    v5[8] = v51 + v52;
    v53 = __CFADD__(v51, (_QWORD)v52) + *((_QWORD *)&v52 + 1);
    v54 = v5[9] + v36 * (unsigned __int128)a2[9];
    v5[9] = v53 + v54;
    v55 = __CFADD__(v53, (_QWORD)v54) + *((_QWORD *)&v54 + 1);
    v56 = v5[10] + v36 * (unsigned __int128)a2[10];
    v5[10] = v55 + v56;
    v57 = __CFADD__(v55, (_QWORD)v56) + *((_QWORD *)&v56 + 1);
    v58 = v5[11] + v36 * (unsigned __int128)a2[11];
    v5[11] = v57 + v58;
    v59 = __CFADD__(v57, (_QWORD)v58) + *((_QWORD *)&v58 + 1);
    v60 = v5[12] + v36 * (unsigned __int128)a2[12];
    v5[12] = v59 + v60;
    v61 = __CFADD__(v59, (_QWORD)v60) + *((_QWORD *)&v60 + 1);
    v62 = v5[13] + v36 * (unsigned __int128)a2[13];
    v5[13] = v61 + v62;
    v63 = __CFADD__(v61, (_QWORD)v62) + *((_QWORD *)&v62 + 1);
    v64 = v5[14] + v36 * (unsigned __int128)a2[14];
    v5[14] = v63 + v64;
    v65 = __CFADD__(v63, (_QWORD)v64) + *((_QWORD *)&v64 + 1);
    v66 = (v5[15] + v36 * (unsigned __int128)a2[15]) >> 64;
    v67 = v5[15] + v36 * a2[15];
    v5[15] = v65 + v67;
    result = v65 + v67;
    v5[16] = (__PAIR128__(v66, v65) + v67) >> 64;
    --v35;
  }
  while ( v35 );
  return result;
}
