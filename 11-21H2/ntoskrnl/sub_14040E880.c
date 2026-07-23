/*
 * XREFs of sub_14040E880 @ 0x14040E880
 * Callers:
 *     sub_14040CA80 @ 0x14040CA80 (sub_14040CA80.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14040E880(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rbx
  __int128 v5; // kr00_16
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int64 *v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // r15
  unsigned __int128 v26; // kr20_16
  __int64 v27; // r12
  unsigned __int128 v28; // kr30_16
  __int64 v29; // r15
  unsigned __int128 v30; // kr40_16
  __int64 v31; // r12
  unsigned __int128 v32; // kr50_16
  __int64 v33; // r15
  unsigned __int128 v34; // kr60_16
  unsigned __int64 v35; // rbx
  __int64 v36; // r12
  unsigned __int128 v37; // kr80_16
  __int64 v38; // r15
  unsigned __int128 v39; // kr90_16
  __int64 v40; // r12
  unsigned __int128 v41; // krA0_16
  __int64 v42; // r15
  unsigned __int128 v43; // krB0_16
  unsigned __int64 v44; // rbx
  __int64 v45; // r15
  unsigned __int128 v46; // krD0_16
  __int64 v47; // r12
  unsigned __int128 v48; // krE0_16
  __int64 v49; // r15
  unsigned __int128 v50; // krF0_16
  unsigned __int64 v51; // rbx
  __int64 v52; // r12
  unsigned __int128 v53; // kr110_16
  __int64 v54; // r15
  unsigned __int128 v55; // kr120_16
  unsigned __int64 v56; // rbx
  __int64 v57; // r15
  unsigned __int128 v58; // kr140_16
  _QWORD *v59; // rdi
  bool v60; // cf
  __int64 v61; // r11
  __int64 v62; // rtt
  __int64 v63; // rax
  __int64 v64; // rtt
  __int64 v65; // rax
  __int64 v66; // rtt
  __int64 v67; // rax
  __int64 v68; // rtt
  __int64 v69; // rax
  __int64 v70; // rtt
  __int64 v71; // rax
  __int64 v72; // rtt
  __int64 v73; // rax
  __int64 v74; // rtt
  __int64 v75; // rax
  __int64 v76; // rtt
  unsigned __int128 v77; // rax
  unsigned __int128 v78; // rax
  unsigned __int128 v79; // rax
  unsigned __int128 v80; // rax
  unsigned __int128 v81; // rax
  unsigned __int128 v82; // rax
  unsigned __int128 v83; // rax
  unsigned __int128 v84; // rax
  unsigned __int128 v85; // rax
  unsigned __int128 v86; // rax
  unsigned __int128 v87; // rax
  unsigned __int128 v88; // rax
  unsigned __int128 v89; // rax
  unsigned __int128 v90; // rax
  unsigned __int128 v91; // rax
  unsigned __int64 result; // rax

  v4 = *a1;
  *a3 = 0LL;
  v5 = a1[1];
  a3[1] = v4 * a1[1];
  v6 = v4 * a1[2];
  v7 = (v4 * (unsigned __int128)a1[2]) >> 64;
  a3[2] = (__PAIR128__(a1[2], v5) * v4) >> 64;
  v8 = __CFADD__(((unsigned __int128)v4 * v5) >> 64, v6) + v7;
  v9 = v4 * a1[3];
  v10 = (v4 * (unsigned __int128)a1[3]) >> 64;
  a3[3] = v8 + v9;
  v11 = __CFADD__(v8, v9) + v10;
  v12 = v4 * a1[4];
  v13 = (v4 * (unsigned __int128)a1[4]) >> 64;
  a3[4] = v11 + v12;
  v14 = __CFADD__(v11, v12) + v13;
  v15 = v4 * a1[5];
  v16 = (v4 * (unsigned __int128)a1[5]) >> 64;
  a3[5] = v14 + v15;
  v17 = __CFADD__(v14, v15) + v16;
  v18 = v4 * a1[6];
  v19 = (v4 * (unsigned __int128)a1[6]) >> 64;
  a3[6] = v17 + v18;
  v20 = __CFADD__(v17, v18) + v19;
  v21 = v4 * a1[7];
  v22 = (v4 * (unsigned __int128)a1[7]) >> 64;
  a3[7] = v20 + v21;
  a3[8] = __CFADD__(v20, v21) + v22;
  v23 = a1 + 1;
  v24 = *v23;
  v25 = (a3[3] + *v23 * (unsigned __int128)v23[1]) >> 64;
  a3[3] += *v23 * v23[1];
  v26 = a3[4] + v24 * (unsigned __int128)v23[2];
  a3[4] = v25 + v26;
  v27 = __CFADD__(v25, (_QWORD)v26) + *((_QWORD *)&v26 + 1);
  v28 = a3[5] + v24 * (unsigned __int128)v23[3];
  a3[5] = v27 + v28;
  v29 = __CFADD__(v27, (_QWORD)v28) + *((_QWORD *)&v28 + 1);
  v30 = a3[6] + v24 * (unsigned __int128)v23[4];
  a3[6] = v29 + v30;
  v31 = __CFADD__(v29, (_QWORD)v30) + *((_QWORD *)&v30 + 1);
  v32 = a3[7] + v24 * (unsigned __int128)v23[5];
  a3[7] = v31 + v32;
  v33 = __CFADD__(v31, (_QWORD)v32) + *((_QWORD *)&v32 + 1);
  v34 = a3[8] + v24 * (unsigned __int128)v23[6];
  a3[8] = v33 + v34;
  a3[9] = __CFADD__(v33, (_QWORD)v34) + *((_QWORD *)&v34 + 1);
  v35 = *++v23;
  v36 = (a3[5] + *v23 * (unsigned __int128)v23[1]) >> 64;
  a3[5] += *v23 * v23[1];
  v37 = a3[6] + v35 * (unsigned __int128)v23[2];
  a3[6] = v36 + v37;
  v38 = __CFADD__(v36, (_QWORD)v37) + *((_QWORD *)&v37 + 1);
  v39 = a3[7] + v35 * (unsigned __int128)v23[3];
  a3[7] = v38 + v39;
  v40 = __CFADD__(v38, (_QWORD)v39) + *((_QWORD *)&v39 + 1);
  v41 = a3[8] + v35 * (unsigned __int128)v23[4];
  a3[8] = v40 + v41;
  v42 = __CFADD__(v40, (_QWORD)v41) + *((_QWORD *)&v41 + 1);
  v43 = a3[9] + v35 * (unsigned __int128)v23[5];
  a3[9] = v42 + v43;
  a3[10] = __CFADD__(v42, (_QWORD)v43) + *((_QWORD *)&v43 + 1);
  v44 = *++v23;
  v45 = (a3[7] + *v23 * (unsigned __int128)v23[1]) >> 64;
  a3[7] += *v23 * v23[1];
  v46 = a3[8] + v44 * (unsigned __int128)v23[2];
  a3[8] = v45 + v46;
  v47 = __CFADD__(v45, (_QWORD)v46) + *((_QWORD *)&v46 + 1);
  v48 = a3[9] + v44 * (unsigned __int128)v23[3];
  a3[9] = v47 + v48;
  v49 = __CFADD__(v47, (_QWORD)v48) + *((_QWORD *)&v48 + 1);
  v50 = a3[10] + v44 * (unsigned __int128)v23[4];
  a3[10] = v49 + v50;
  a3[11] = __CFADD__(v49, (_QWORD)v50) + *((_QWORD *)&v50 + 1);
  v51 = *++v23;
  v52 = (a3[9] + *v23 * (unsigned __int128)v23[1]) >> 64;
  a3[9] += *v23 * v23[1];
  v53 = a3[10] + v51 * (unsigned __int128)v23[2];
  a3[10] = v52 + v53;
  v54 = __CFADD__(v52, (_QWORD)v53) + *((_QWORD *)&v53 + 1);
  v55 = a3[11] + v51 * (unsigned __int128)v23[3];
  a3[11] = v54 + v55;
  a3[12] = __CFADD__(v54, (_QWORD)v55) + *((_QWORD *)&v55 + 1);
  v56 = *++v23;
  v57 = (a3[11] + *v23 * (unsigned __int128)v23[1]) >> 64;
  a3[11] += *v23 * v23[1];
  v58 = a3[12] + v56 * (unsigned __int128)v23[2];
  a3[12] = v57 + v58;
  a3[13] = __CFADD__(v57, (_QWORD)v58) + *((_QWORD *)&v58 + 1);
  *(_OWORD *)(a3 + 13) = a3[13] + v23[1] * (unsigned __int128)v23[2];
  a3[15] = 0LL;
  v59 = a3;
  v60 = __CFSHL__(a2, 1);
  v61 = 2 * a2;
  do
  {
    v62 = v60 + *v59;
    v60 = __CFADD__(v60, *v59) | __CFADD__(*v59, v62);
    *v59 += v62;
    v63 = v59[1];
    v64 = v60 + v63;
    v60 = __CFADD__(v60, v63) | __CFADD__(v63, v64);
    v59[1] = v63 + v64;
    v65 = v59[2];
    v66 = v60 + v65;
    v60 = __CFADD__(v60, v65) | __CFADD__(v65, v66);
    v59[2] = v65 + v66;
    v67 = v59[3];
    v68 = v60 + v67;
    v60 = __CFADD__(v60, v67) | __CFADD__(v67, v68);
    v59[3] = v67 + v68;
    v69 = v59[4];
    v70 = v60 + v69;
    v60 = __CFADD__(v60, v69) | __CFADD__(v69, v70);
    v59[4] = v69 + v70;
    v71 = v59[5];
    v72 = v60 + v71;
    v60 = __CFADD__(v60, v71) | __CFADD__(v71, v72);
    v59[5] = v71 + v72;
    v73 = v59[6];
    v74 = v60 + v73;
    v60 = __CFADD__(v60, v73) | __CFADD__(v73, v74);
    v59[6] = v73 + v74;
    v75 = v59[7];
    v76 = v60 + v75;
    v60 = __CFADD__(v60, v75) | __CFADD__(v75, v76);
    v59[7] = v75 + v76;
    v59 += 8;
    --v61;
  }
  while ( v61 );
  v77 = 0 + *a3 + *a1 * (unsigned __int128)*a1;
  *a3 += *a1 * *a1;
  v78 = a3[1] + (unsigned __int128)*((unsigned __int64 *)&v77 + 1);
  a3[1] = v78;
  v79 = *((unsigned __int64 *)&v78 + 1) + a3[2] + a1[1] * (unsigned __int128)a1[1];
  a3[2] = v79;
  v80 = a3[3] + (unsigned __int128)*((unsigned __int64 *)&v79 + 1);
  a3[3] = v80;
  v81 = *((unsigned __int64 *)&v80 + 1) + a3[4] + a1[2] * (unsigned __int128)a1[2];
  a3[4] = v81;
  v82 = a3[5] + (unsigned __int128)*((unsigned __int64 *)&v81 + 1);
  a3[5] = v82;
  v83 = *((unsigned __int64 *)&v82 + 1) + a3[6] + a1[3] * (unsigned __int128)a1[3];
  a3[6] = v83;
  v84 = a3[7] + (unsigned __int128)*((unsigned __int64 *)&v83 + 1);
  a3[7] = v84;
  v85 = *((unsigned __int64 *)&v84 + 1) + a3[8] + a1[4] * (unsigned __int128)a1[4];
  a3[8] = v85;
  v86 = a3[9] + (unsigned __int128)*((unsigned __int64 *)&v85 + 1);
  a3[9] = v86;
  v87 = *((unsigned __int64 *)&v86 + 1) + a3[10] + a1[5] * (unsigned __int128)a1[5];
  a3[10] = v87;
  v88 = a3[11] + (unsigned __int128)*((unsigned __int64 *)&v87 + 1);
  a3[11] = v88;
  v89 = *((unsigned __int64 *)&v88 + 1) + a3[12] + a1[6] * (unsigned __int128)a1[6];
  a3[12] = v89;
  v90 = a3[13] + (unsigned __int128)*((unsigned __int64 *)&v89 + 1);
  a3[13] = v90;
  v91 = *((unsigned __int64 *)&v90 + 1) + a3[14] + a1[7] * (unsigned __int128)a1[7];
  a3[14] = v91;
  result = a3[15] + *((_QWORD *)&v91 + 1);
  a3[15] = result;
  return result;
}
