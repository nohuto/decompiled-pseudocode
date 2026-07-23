/*
 * XREFs of sub_14040DA70 @ 0x14040DA70
 * Callers:
 *     sub_14040B5F0 @ 0x14040B5F0 (sub_14040B5F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040DA70(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned __int64 *v4; // r10
  unsigned __int64 *v5; // rsi
  unsigned __int64 *v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // kr00_8
  unsigned __int64 v20; // r12
  __int64 v21; // r11
  __int64 v22; // r14
  unsigned __int64 *v23; // rsi
  unsigned __int64 *v24; // rdi
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rax
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  __int64 v32; // r12
  unsigned __int64 v33; // rax
  __int64 v34; // r15
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // kr08_8
  unsigned __int64 *v37; // rdi
  bool v38; // cf
  __int64 v39; // r11
  unsigned __int64 v40; // rtt
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rtt
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rtt
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rtt
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rtt
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rtt
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rtt
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rtt
  unsigned __int64 *v55; // rsi
  unsigned __int64 *v56; // rdi
  unsigned __int64 v57; // r12
  unsigned __int128 v58; // rax
  unsigned __int128 v59; // rax
  unsigned __int128 v60; // rax
  unsigned __int128 v61; // rax
  unsigned __int128 v62; // rax
  unsigned __int128 v63; // rax
  unsigned __int128 v64; // rax
  unsigned __int128 v65; // rax
  unsigned __int128 v66; // rax
  unsigned __int128 v67; // rax
  unsigned __int128 v68; // rax
  unsigned __int128 v69; // rax
  unsigned __int128 v70; // rax
  unsigned __int128 v71; // rax
  unsigned __int128 v72; // rax
  unsigned __int128 v73; // rax
  unsigned __int64 *v75; // [rsp+0h] [rbp-40h]

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = a3;
  v7 = *a1;
  v8 = 0LL;
  v9 = 8 * a2;
  *a3 = 0LL;
  while ( 1 )
  {
    v12 = v7 * v5[1];
    v13 = (v7 * (unsigned __int128)v5[1]) >> 64;
    v6[1] = v8 + v12;
    v14 = __CFADD__(v8, v12) + v13;
    v15 = v7 * v5[2];
    v16 = (v7 * (unsigned __int128)v5[2]) >> 64;
    v6[2] = v14 + v15;
    v17 = __CFADD__(v14, v15) + v16;
    v18 = (v7 * (unsigned __int128)v5[3]) >> 64;
    v19 = v7 * v5[3];
    v6[3] = v17 + v19;
    v20 = (__PAIR128__(v18, v17) + v19) >> 64;
    v5 += 4;
    v6 += 4;
    v9 -= 4LL;
    if ( !v9 )
      break;
    v10 = v7 * *v5;
    v11 = (v7 * (unsigned __int128)*v5) >> 64;
    *v6 = v20 + v10;
    v8 = __CFADD__(v20, v10) + v11;
  }
  *v6 = v20;
  v21 = 8 * a2 - 1;
  v22 = 1LL;
  do
  {
    ++v4;
    v23 = a1;
    v24 = v4;
    v25 = a1[v22];
    LOBYTE(v22) = v22 + 1;
    v26 = (v21 + 2) & 0xFFFFFFFFFFFFFFFCuLL;
    v27 = 0LL;
    v28 = 0LL;
    if ( (_BYTE)v22 != 3 )
    {
      if ( (_BYTE)v22 != 2 )
      {
        if ( (_BYTE)v22 != 1 )
        {
          LOBYTE(v22) = 0;
          a1 += 4;
          v4 += 4;
          v23 = a1;
          v24 = v4;
          goto LABEL_9;
        }
        goto LABEL_10;
      }
      goto LABEL_11;
    }
    while ( 1 )
    {
      v35 = (v24[3] + v25 * (unsigned __int128)v23[3]) >> 64;
      v36 = v24[3] + v25 * v23[3];
      v24[3] = v28 + v36;
      v27 = (__PAIR128__(v35, v28) + v36) >> 64;
      v23 += 4;
      v24 += 4;
      v26 -= 4LL;
      if ( !v26 )
        break;
LABEL_9:
      v30 = (*v24 + v25 * (unsigned __int128)*v23) >> 64;
      v29 = *v24 + v25 * *v23;
      *v24 = v27 + v29;
      v28 = __CFADD__(v27, v29) + v30;
LABEL_10:
      v32 = (v24[1] + v25 * (unsigned __int128)v23[1]) >> 64;
      v31 = v24[1] + v25 * v23[1];
      v24[1] = v28 + v31;
      v27 = __CFADD__(v28, v31) + v32;
LABEL_11:
      v34 = (v24[2] + v25 * (unsigned __int128)v23[2]) >> 64;
      v33 = v24[2] + v25 * v23[2];
      v24[2] = v27 + v33;
      v28 = __CFADD__(v27, v33) + v34;
    }
    *v24 = v27;
    --v21;
  }
  while ( v21 != 1 );
  v4[5] = 0LL;
  v37 = a3;
  v38 = __CFSHL__(a2, 1);
  v39 = 2 * a2;
  do
  {
    v40 = v38 + *v37;
    v38 = __CFADD__(v38, *v37) | __CFADD__(*v37, v40);
    *v37 += v40;
    v41 = v37[1];
    v42 = v38 + v41;
    v38 = __CFADD__(v38, v41) | __CFADD__(v41, v42);
    v37[1] = v41 + v42;
    v43 = v37[2];
    v44 = v38 + v43;
    v38 = __CFADD__(v38, v43) | __CFADD__(v43, v44);
    v37[2] = v43 + v44;
    v45 = v37[3];
    v46 = v38 + v45;
    v38 = __CFADD__(v38, v45) | __CFADD__(v45, v46);
    v37[3] = v45 + v46;
    v47 = v37[4];
    v48 = v38 + v47;
    v38 = __CFADD__(v38, v47) | __CFADD__(v47, v48);
    v37[4] = v47 + v48;
    v49 = v37[5];
    v50 = v38 + v49;
    v38 = __CFADD__(v38, v49) | __CFADD__(v49, v50);
    v37[5] = v49 + v50;
    v51 = v37[6];
    v52 = v38 + v51;
    v38 = __CFADD__(v38, v51) | __CFADD__(v51, v52);
    v37[6] = v51 + v52;
    v53 = v37[7];
    v54 = v38 + v53;
    v38 = __CFADD__(v38, v53) | __CFADD__(v53, v54);
    v37[7] = v53 + v54;
    v37 += 8;
    --v39;
  }
  while ( v39 );
  v55 = v75;
  v56 = a3;
  v57 = 0LL;
  do
  {
    v58 = v57 + *v56 + *v55 * (unsigned __int128)*v55;
    *v56 = v58;
    v59 = v56[1] + (unsigned __int128)*((unsigned __int64 *)&v58 + 1);
    v56[1] = v59;
    v60 = *((unsigned __int64 *)&v59 + 1) + v56[2] + v55[1] * (unsigned __int128)v55[1];
    v56[2] = v60;
    v61 = v56[3] + (unsigned __int128)*((unsigned __int64 *)&v60 + 1);
    v56[3] = v61;
    v62 = *((unsigned __int64 *)&v61 + 1) + v56[4] + v55[2] * (unsigned __int128)v55[2];
    v56[4] = v62;
    v63 = v56[5] + (unsigned __int128)*((unsigned __int64 *)&v62 + 1);
    v56[5] = v63;
    v64 = *((unsigned __int64 *)&v63 + 1) + v56[6] + v55[3] * (unsigned __int128)v55[3];
    v56[6] = v64;
    v65 = v56[7] + (unsigned __int128)*((unsigned __int64 *)&v64 + 1);
    v56[7] = v65;
    v66 = *((unsigned __int64 *)&v65 + 1) + v56[8] + v55[4] * (unsigned __int128)v55[4];
    v56[8] = v66;
    v67 = v56[9] + (unsigned __int128)*((unsigned __int64 *)&v66 + 1);
    v56[9] = v67;
    v68 = *((unsigned __int64 *)&v67 + 1) + v56[10] + v55[5] * (unsigned __int128)v55[5];
    v56[10] = v68;
    v69 = v56[11] + (unsigned __int128)*((unsigned __int64 *)&v68 + 1);
    v56[11] = v69;
    v70 = *((unsigned __int64 *)&v69 + 1) + v56[12] + v55[6] * (unsigned __int128)v55[6];
    v56[12] = v70;
    v71 = v56[13] + (unsigned __int128)*((unsigned __int64 *)&v70 + 1);
    v56[13] = v71;
    v72 = *((unsigned __int64 *)&v71 + 1) + v56[14] + v55[7] * (unsigned __int128)v55[7];
    v56[14] = v72;
    v73 = v56[15] + (unsigned __int128)*((unsigned __int64 *)&v72 + 1);
    v56[15] = v73;
    v57 = *((_QWORD *)&v73 + 1);
    v55 += 8;
    v56 += 16;
    --v3;
  }
  while ( v3 );
  return v73;
}
