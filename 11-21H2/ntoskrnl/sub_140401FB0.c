/*
 * XREFs of sub_140401FB0 @ 0x140401FB0
 * Callers:
 *     sub_140401ED4 @ 0x140401ED4 (sub_140401ED4.c)
 *     sub_14040362C @ 0x14040362C (sub_14040362C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 */

__int64 __fastcall sub_140401FB0(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  __int64 v4; // r13
  unsigned __int64 *v5; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 *v13; // r9
  __int64 v14; // r8
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r14
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r11
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // r11
  unsigned __int64 v58; // r11
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r10
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // r15
  unsigned __int64 v63; // r13
  unsigned __int64 v64; // rax
  __int64 *v65; // r9
  unsigned __int64 v66; // r8
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // rbx
  unsigned __int64 v70; // r14
  unsigned __int64 v71; // r9
  unsigned __int64 v72; // rdi
  unsigned __int64 v73; // r11
  unsigned __int64 v74; // r10
  unsigned __int64 v75; // r15
  unsigned __int64 v76; // r13
  unsigned __int64 v77; // rbx
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // r8
  __int64 v80; // rdi
  unsigned __int64 v81; // r14
  unsigned __int64 v82; // r9
  __int64 v83; // rsi
  unsigned __int64 v84; // r11
  unsigned __int64 v85; // r10
  __int64 v86; // r14
  unsigned __int64 v87; // r13
  unsigned __int64 v88; // rbx
  __int64 v89; // r11
  unsigned __int64 v90; // r8
  unsigned __int64 v91; // rdi
  __int64 v92; // r8
  unsigned __int64 v93; // r9
  unsigned __int64 v94; // rsi
  __int64 v95; // r9
  unsigned __int64 v96; // r10
  unsigned __int64 v97; // r14
  unsigned __int64 v98; // rbx
  __int64 v99; // r11
  __int64 v100; // r15
  __int64 v101; // rbx
  unsigned __int64 v102; // rdi
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // r9
  __int64 v105; // rdi
  __int64 v106; // rsi
  __int64 v107; // r9
  __int64 v108; // rsi
  __int64 v109; // r14
  __int64 v110; // r11
  __int64 v111; // r8
  bool v112; // zf
  __int64 *v114; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v115; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v117; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v118; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v119; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v120; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v121; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v122; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v123; // [rsp+70h] [rbp-90h]
  unsigned __int64 v124; // [rsp+80h] [rbp-80h]
  unsigned __int64 v125; // [rsp+90h] [rbp-70h]
  unsigned __int64 v126; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v127; // [rsp+A8h] [rbp-58h]
  __int64 v128; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v129; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v130; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v131; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v132; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v133; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v134; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v135; // [rsp+100h] [rbp+0h]
  unsigned __int64 *v136; // [rsp+110h] [rbp+10h]
  __int64 v137; // [rsp+118h] [rbp+18h]
  unsigned __int64 v138; // [rsp+118h] [rbp+18h]
  __int64 v139; // [rsp+120h] [rbp+20h]
  __int64 v140; // [rsp+128h] [rbp+28h]
  __int64 v141; // [rsp+130h] [rbp+30h]
  __int64 v142; // [rsp+138h] [rbp+38h]
  __int64 v143; // [rsp+140h] [rbp+40h]
  __int64 v144; // [rsp+148h] [rbp+48h]
  __int64 v145; // [rsp+150h] [rbp+50h]
  __int64 v146; // [rsp+158h] [rbp+58h]
  unsigned __int64 v147; // [rsp+160h] [rbp+60h]
  unsigned __int64 v148; // [rsp+170h] [rbp+70h]
  _QWORD v149[16]; // [rsp+180h] [rbp+80h] BYREF

  v4 = *a1;
  v5 = a4;
  v6 = a1[1];
  v7 = a1[2];
  v8 = a1[3];
  v9 = a1[4];
  v10 = a1[5];
  v11 = a1[6];
  v12 = a1[7];
  if ( a3 >= 0x80 )
  {
    v139 = *a1;
    v13 = (unsigned __int64 *)(a2 + 16);
    v147 = a3 >> 7;
    v140 = a1[1];
    v141 = a1[2];
    v148 = -128LL * (a3 >> 7) + a3;
    v142 = a1[3];
    v143 = a1[4];
    v144 = a1[5];
    v145 = a1[6];
    v146 = a1[7];
    v136 = (unsigned __int64 *)(a2 + 16);
    do
    {
      v125 = _byteswap_uint64(*(v13 - 2));
      v14 = v125
          + (__ROR8__(v9, 18) ^ __ROR8__(v9, 41) ^ __ROR8__(v9, 14))
          + (v11 ^ v9 & (v10 ^ v11))
          + v12
          + 0x428A2F98D728AE22LL;
      v15 = v14 + v8;
      v16 = (__ROR8__(v4, 28) ^ __ROR8__(v4, 34) ^ __ROR8__(v4, 39)) + v14 + (v6 & v7 | v4 & (v6 | v7));
      v134 = _byteswap_uint64(*(v13 - 1));
      v17 = v134
          + (__ROR8__(v15, 18) ^ __ROR8__(v15, 41) ^ __ROR8__(v15, 14))
          + (v10 ^ v15 & (v9 ^ v10))
          + v11
          + 0x7137449123EF65CDLL;
      v18 = v17 + v7;
      v19 = (__ROR8__(v16, 28) ^ __ROR8__(v16, 34) ^ __ROR8__(v16, 39)) + v17 + (v4 & v6 | v16 & (v4 | v6));
      v130 = _byteswap_uint64(*v13);
      v20 = v130
          + (__ROR8__(v18, 18) ^ __ROR8__(v18, 41) ^ __ROR8__(v18, 14))
          + (v9 ^ v18 & (v15 ^ v9))
          + v10
          - 0x4A3F043013B2C4D1LL;
      v21 = v20 + v6;
      v22 = (__ROR8__(v19, 28) ^ __ROR8__(v19, 34) ^ __ROR8__(v19, 39)) + v20 + (v4 & v16 | v19 & (v4 | v16));
      v131 = _byteswap_uint64(v13[1]);
      v23 = v131
          + (__ROR8__(v21, 18) ^ __ROR8__(v21, 41) ^ __ROR8__(v21, 14))
          + (v15 ^ v21 & (v18 ^ v15))
          + v9
          - 0x164A245A7E762444LL;
      v24 = v23 + v4;
      v25 = (__ROR8__(v22, 28) ^ __ROR8__(v22, 34) ^ __ROR8__(v22, 39)) + v23 + (v19 & v16 | v22 & (v19 | v16));
      v120 = _byteswap_uint64(v13[2]);
      v26 = v15
          + (__ROR8__(v24, 18) ^ __ROR8__(v24, 41) ^ __ROR8__(v24, 14))
          + (v18 ^ v24 & (v21 ^ v18))
          + 0x3956C25BF348B538LL
          + v120;
      v27 = v26 + v16;
      v28 = (__ROR8__(v25, 28) ^ __ROR8__(v25, 34) ^ __ROR8__(v25, 39)) + v26 + (v22 & v19 | v25 & (v22 | v19));
      v123 = _byteswap_uint64(v13[3]);
      v29 = v18
          + (__ROR8__(v27, 18) ^ __ROR8__(v27, 41) ^ __ROR8__(v27, 14))
          + (v21 ^ v27 & (v24 ^ v21))
          + 0x59F111F1B605D019LL
          + v123;
      v30 = v29 + v19;
      v31 = (__ROR8__(v28, 28) ^ __ROR8__(v28, 34) ^ __ROR8__(v28, 39)) + v29 + (v25 & v22 | v28 & (v25 | v22));
      v124 = _byteswap_uint64(v13[4]);
      v32 = v21
          + (__ROR8__(v30, 18) ^ __ROR8__(v30, 41) ^ __ROR8__(v30, 14))
          + (v24 ^ v30 & (v24 ^ v27))
          - 0x6DC07D5B50E6B065LL
          + v124;
      v33 = v32 + v22;
      v34 = (__ROR8__(v31, 28) ^ __ROR8__(v31, 34) ^ __ROR8__(v31, 39)) + v32 + (v28 & v25 | v31 & (v28 | v25));
      v132 = _byteswap_uint64(v13[5]);
      v35 = v24
          + (__ROR8__(v33, 18) ^ __ROR8__(v33, 41) ^ __ROR8__(v33, 14))
          + (v27 ^ v33 & (v30 ^ v27))
          - 0x54E3A12A25927EE8LL
          + v132;
      v36 = v35 + v25;
      v37 = (__ROR8__(v34, 28) ^ __ROR8__(v34, 34) ^ __ROR8__(v34, 39)) + v35 + (v31 & v28 | v34 & (v31 | v28));
      v133 = _byteswap_uint64(v136[6]);
      v38 = v27
          + (__ROR8__(v36, 18) ^ __ROR8__(v36, 41) ^ __ROR8__(v36, 14))
          + (v30 ^ v36 & (v33 ^ v30))
          - 0x27F855675CFCFDBELL
          + v133;
      v39 = v38 + v28;
      v40 = (__ROR8__(v37, 28) ^ __ROR8__(v37, 34) ^ __ROR8__(v37, 39)) + v38 + (v34 & v31 | v37 & (v34 | v31));
      v121 = _byteswap_uint64(v136[7]);
      v41 = v30
          + (__ROR8__(v39, 18) ^ __ROR8__(v39, 41) ^ __ROR8__(v39, 14))
          + (v33 ^ v39 & (v36 ^ v33))
          + 0x12835B0145706FBELL
          + v121;
      v42 = v41 + v31;
      v43 = (__ROR8__(v40, 28) ^ __ROR8__(v40, 34) ^ __ROR8__(v40, 39)) + v41 + (v37 & v34 | v40 & (v37 | v34));
      v122 = _byteswap_uint64(v136[8]);
      v44 = v33
          + (__ROR8__(v42, 18) ^ __ROR8__(v42, 41) ^ __ROR8__(v42, 14))
          + (v36 ^ v42 & (v39 ^ v36))
          + 0x243185BE4EE4B28CLL
          + v122;
      v45 = v44 + v34;
      v117 = (__ROR8__(v43, 28) ^ __ROR8__(v43, 34) ^ __ROR8__(v43, 39)) + v44 + (v37 & v40 | v43 & (v37 | v40));
      v46 = _byteswap_uint64(v136[9]);
      v47 = v46
          + v36
          + (__ROR8__(v45, 18) ^ __ROR8__(v45, 41) ^ __ROR8__(v45, 14))
          + (v39 ^ v45 & (v42 ^ v39))
          + 0x550C7DC3D5FFB4E2LL;
      v48 = v47 + v37;
      v49 = (__ROR8__(v117, 28) ^ __ROR8__(v117, 34) ^ __ROR8__(v117, 39)) + v47 + (v43 & v40 | (v43 | v40) & v117);
      v135 = _byteswap_uint64(v136[10]);
      v50 = v39 + (__ROR8__(v48, 18) ^ __ROR8__(v48, 41) ^ __ROR8__(v48, 14));
      v51 = v117;
      v52 = v50 + (v42 ^ v48 & (v45 ^ v42)) + 0x72BE5D74F27B896FLL + v135;
      v53 = v52 + v40;
      v126 = _byteswap_uint64(v136[11]);
      v54 = (__ROR8__(v49, 28) ^ __ROR8__(v49, 34) ^ __ROR8__(v49, 39)) + v52 + (v117 & v43 | v49 & (v117 | v43));
      v55 = v42
          + (__ROR8__(v53, 18) ^ __ROR8__(v53, 41) ^ __ROR8__(v53, 14))
          + (v45 ^ v53 & (v48 ^ v45))
          - 0x7F214E01C4E9694FLL
          + v126;
      v56 = v55 + v43;
      v57 = v49 & v117 | v54 & (v49 | v117);
      v118 = _byteswap_uint64(v136[12]);
      v58 = (__ROR8__(v54, 28) ^ __ROR8__(v54, 34) ^ __ROR8__(v54, 39)) + v55 + v57;
      v59 = v45 + (__ROR8__(v56, 18) ^ __ROR8__(v56, 41) ^ __ROR8__(v56, 14));
      v60 = v118;
      v61 = v118 + v59 + (v48 ^ v56 & (v48 ^ v53)) - 0x6423F958DA38EDCBLL;
      v62 = v61 + v51;
      v127 = _byteswap_uint64(v136[13]);
      v63 = (__ROR8__(v58, 28) ^ __ROR8__(v58, 34) ^ __ROR8__(v58, 39)) + (v54 & v49 | v58 & (v54 | v49)) + v61;
      v64 = v48 + (__ROR8__(v62, 18) ^ __ROR8__(v62, 41) ^ __ROR8__(v62, 14));
      v65 = qword_1400145D0;
      v114 = qword_1400145D0;
      v66 = v64 + (v53 ^ v62 & (v56 ^ v53)) - 0x3E640E8B3096D96CLL + v127;
      v67 = v66 + v49;
      v68 = (__ROR8__(v63, 28) ^ __ROR8__(v63, 34) ^ __ROR8__(v63, 39)) + (v58 & v54 | v63 & (v58 | v54)) + v66;
      do
      {
        v125 += ((v134 >> 7) ^ __ROR8__(v134, 1) ^ __ROR8__(v134, 8))
              + v121
              + ((v60 >> 6) ^ __ROR8__(v60, 19) ^ __ROR8__(v60, 61));
        v149[0] = v125;
        v69 = v125
            + *(v65 - 2)
            + (v56 ^ v67 & (v62 ^ v56))
            + (__ROR8__(v67, 14) ^ __ROR8__(v67, 18) ^ __ROR8__(v67, 41))
            + v53;
        v70 = v69 + v54;
        v71 = (__ROR8__(v68, 28) ^ __ROR8__(v68, 34) ^ __ROR8__(v68, 39)) + v69 + (v63 & v58 | v68 & (v63 | v58));
        v134 += ((v130 >> 7) ^ __ROR8__(v130, 1) ^ __ROR8__(v130, 8))
              + v122
              + ((v127 >> 6) ^ __ROR8__(v127, 19) ^ __ROR8__(v127, 61));
        v149[1] = v134;
        v72 = v134
            + *(v114 - 1)
            + (v62 ^ v70 & (v67 ^ v62))
            + (__ROR8__(v70, 14) ^ __ROR8__(v70, 18) ^ __ROR8__(v70, 41))
            + v56;
        v73 = v72 + v58;
        v74 = (__ROR8__(v71, 28) ^ __ROR8__(v71, 34) ^ __ROR8__(v71, 39)) + v72 + (v68 & v63 | v71 & (v68 | v63));
        v130 += v46
              + ((v125 >> 6) ^ __ROR8__(v125, 19) ^ __ROR8__(v125, 61))
              + ((v131 >> 7) ^ __ROR8__(v131, 1) ^ __ROR8__(v131, 8));
        v149[2] = v130;
        v75 = *v114
            + v130
            + (__ROR8__(v73, 18) ^ __ROR8__(v73, 41) ^ __ROR8__(v73, 14))
            + (v67 ^ v73 & (v70 ^ v67))
            + v62;
        v76 = v75 + v63;
        v77 = (__ROR8__(v74, 28) ^ __ROR8__(v74, 34) ^ __ROR8__(v74, 39)) + v75 + (v68 & v71 | v74 & (v68 | v71));
        v131 += ((v120 >> 7) ^ __ROR8__(v120, 1) ^ __ROR8__(v120, 8))
              + v135
              + ((v134 >> 6) ^ __ROR8__(v134, 19) ^ __ROR8__(v134, 61));
        v149[3] = v131;
        v78 = v131
            + v114[1]
            + (v70 ^ v76 & (v73 ^ v70))
            + (__ROR8__(v76, 14) ^ __ROR8__(v76, 18) ^ __ROR8__(v76, 41))
            + v67;
        v79 = v78 + v68;
        v80 = (__ROR8__(v77, 28) ^ __ROR8__(v77, 34) ^ __ROR8__(v77, 39)) + v78 + (v74 & v71 | v77 & (v74 | v71));
        v120 += ((v130 >> 6) ^ __ROR8__(v130, 19) ^ __ROR8__(v130, 61))
              + v126
              + ((v123 >> 7) ^ __ROR8__(v123, 1) ^ __ROR8__(v123, 8));
        v149[4] = v120;
        v81 = v120
            + v114[2]
            + (v73 ^ v79 & (v76 ^ v73))
            + (__ROR8__(v79, 14) ^ __ROR8__(v79, 18) ^ __ROR8__(v79, 41))
            + v70;
        v82 = v81 + v71;
        v83 = (__ROR8__(v80, 28) ^ __ROR8__(v80, 34) ^ __ROR8__(v80, 39)) + v81 + (v77 & v74 | v80 & (v77 | v74));
        v123 += ((v124 >> 7) ^ __ROR8__(v124, 1) ^ __ROR8__(v124, 8))
              + v118
              + ((v131 >> 6) ^ __ROR8__(v131, 19) ^ __ROR8__(v131, 61));
        v149[5] = v123;
        v84 = v123
            + v114[3]
            + (v76 ^ v82 & (v79 ^ v76))
            + (__ROR8__(v82, 14) ^ __ROR8__(v82, 18) ^ __ROR8__(v82, 41))
            + v73;
        v85 = v84 + v74;
        v86 = (__ROR8__(v83, 28) ^ __ROR8__(v83, 34) ^ __ROR8__(v83, 39)) + v84 + (v80 & v77 | v83 & (v80 | v77));
        v124 += ((v120 >> 6) ^ __ROR8__(v120, 19) ^ __ROR8__(v120, 61))
              + v127
              + ((v132 >> 7) ^ __ROR8__(v132, 1) ^ __ROR8__(v132, 8));
        v149[6] = v124;
        v87 = v124
            + v114[4]
            + (v79 ^ v85 & (v79 ^ v82))
            + (__ROR8__(v85, 14) ^ __ROR8__(v85, 18) ^ __ROR8__(v85, 41))
            + v76;
        v88 = v87 + v77;
        v89 = (__ROR8__(v86, 28) ^ __ROR8__(v86, 34) ^ __ROR8__(v86, 39)) + v87 + (v83 & v80 | v86 & (v83 | v80));
        v132 += ((v133 >> 7) ^ __ROR8__(v133, 1) ^ __ROR8__(v133, 8))
              + v125
              + (__ROR8__(v123, 19) ^ __ROR8__(v123, 61) ^ (v123 >> 6));
        v149[7] = v132;
        v90 = v132
            + v114[5]
            + (v82 ^ v88 & (v85 ^ v82))
            + (__ROR8__(v88, 14) ^ __ROR8__(v88, 18) ^ __ROR8__(v88, 41))
            + v79;
        v91 = v90 + v80;
        v92 = (__ROR8__(v89, 28) ^ __ROR8__(v89, 34) ^ __ROR8__(v89, 39)) + (v86 & v83 | v89 & (v86 | v83)) + v90;
        v133 += ((v121 >> 7) ^ __ROR8__(v121, 1) ^ __ROR8__(v121, 8))
              + ((v124 >> 6) ^ __ROR8__(v124, 19) ^ __ROR8__(v124, 61))
              + v134;
        v149[8] = v133;
        v93 = v133
            + v114[6]
            + (v85 ^ v91 & (v88 ^ v85))
            + (__ROR8__(v91, 14) ^ __ROR8__(v91, 18) ^ __ROR8__(v91, 41))
            + v82;
        v94 = v93 + v83;
        v95 = (__ROR8__(v92, 28) ^ __ROR8__(v92, 34) ^ __ROR8__(v92, 39)) + (v89 & v86 | v92 & (v89 | v86)) + v93;
        v121 += ((v122 >> 7) ^ __ROR8__(v122, 1) ^ __ROR8__(v122, 8))
              + v130
              + (__ROR8__(v132, 19) ^ __ROR8__(v132, 61) ^ (v132 >> 6));
        v149[9] = v121;
        v96 = v121
            + v114[7]
            + (v88 ^ v94 & (v91 ^ v88))
            + (__ROR8__(v94, 14) ^ __ROR8__(v94, 18) ^ __ROR8__(v94, 41))
            + v85;
        v97 = v96 + v86;
        v137 = (__ROR8__(v95, 28) ^ __ROR8__(v95, 34) ^ __ROR8__(v95, 39)) + (v92 & v89 | v95 & (v92 | v89)) + v96;
        v122 += ((v133 >> 6) ^ __ROR8__(v133, 19) ^ __ROR8__(v133, 61))
              + v131
              + ((v46 >> 7) ^ __ROR8__(v46, 1) ^ __ROR8__(v46, 8));
        v149[10] = v122;
        v98 = v122
            + v114[8]
            + (v91 ^ v97 & (v94 ^ v91))
            + (__ROR8__(v97, 14) ^ __ROR8__(v97, 18) ^ __ROR8__(v97, 41))
            + v88;
        v99 = v98 + v89;
        v100 = (__ROR8__(v137, 28) ^ __ROR8__(v137, 34) ^ __ROR8__(v137, 39)) + v98 + (v92 & v95 | v137 & (v92 | v95));
        v46 += v120
             + ((v135 >> 7) ^ __ROR8__(v135, 1) ^ __ROR8__(v135, 8))
             + ((v121 >> 6) ^ __ROR8__(v121, 19) ^ __ROR8__(v121, 61));
        v101 = v95;
        v102 = v46
             + v114[9]
             + (v94 ^ v99 & (v97 ^ v94))
             + (__ROR8__(v99, 14) ^ __ROR8__(v99, 18) ^ __ROR8__(v99, 41))
             + v91;
        v103 = v102 + v92;
        v104 = v102 + (v137 & v95 | v100 & (v137 | v95));
        v105 = v137;
        v128 = (__ROR8__(v100, 28) ^ __ROR8__(v100, 34) ^ __ROR8__(v100, 39)) + v104;
        v135 += v123
              + ((v122 >> 6) ^ __ROR8__(v122, 19) ^ __ROR8__(v122, 61))
              + ((v126 >> 7) ^ __ROR8__(v126, 1) ^ __ROR8__(v126, 8));
        v149[12] = v135;
        v106 = v135
             + v114[10]
             + (v97 ^ v103 & (v99 ^ v97))
             + (__ROR8__(v103, 14) ^ __ROR8__(v103, 18) ^ __ROR8__(v103, 41))
             + v94;
        v53 = v106 + v101;
        v107 = v106 + (v100 & v137 | (v100 | v137) & v128);
        v108 = v128;
        v138 = (__ROR8__(v128, 28) ^ __ROR8__(v128, 34) ^ __ROR8__(v128, 39)) + v107;
        v126 += v124
              + ((v118 >> 7) ^ __ROR8__(v118, 1) ^ __ROR8__(v118, 8))
              + ((v46 >> 6) ^ __ROR8__(v46, 19) ^ __ROR8__(v46, 61));
        v149[13] = v126;
        v109 = v126
             + v114[11]
             + (v99 ^ v53 & (v103 ^ v99))
             + (__ROR8__(v53, 14) ^ __ROR8__(v53, 18) ^ __ROR8__(v53, 41))
             + v97;
        v56 = v109 + v105;
        v129 = (__ROR8__(v138, 28) ^ __ROR8__(v138, 34) ^ __ROR8__(v138, 39))
             + v109
             + (v128 & v100 | (v128 | v100) & v138);
        v54 = v138;
        v60 = v132
            + ((v127 >> 7) ^ __ROR8__(v127, 1) ^ __ROR8__(v127, 8))
            + ((v135 >> 6) ^ __ROR8__(v135, 19) ^ __ROR8__(v135, 61))
            + v118;
        v118 = v60;
        v149[14] = v60;
        v110 = v60
             + v114[12]
             + (v103 ^ v56 & (v103 ^ v53))
             + (__ROR8__(v56, 14) ^ __ROR8__(v56, 18) ^ __ROR8__(v56, 41))
             + v99;
        v62 = v110 + v100;
        v63 = (__ROR8__(v129, 28) ^ __ROR8__(v129, 34) ^ __ROR8__(v129, 39))
            + v110
            + (v138 & v108 | v129 & (v138 | v108));
        v127 += v133
              + ((v126 >> 6) ^ __ROR8__(v126, 19) ^ __ROR8__(v126, 61))
              + ((v125 >> 7) ^ __ROR8__(v125, 1) ^ __ROR8__(v125, 8));
        v149[15] = v127;
        v111 = v127
             + v114[13]
             + (v53 ^ v62 & (v56 ^ v53))
             + (__ROR8__(v62, 14) ^ __ROR8__(v62, 18) ^ __ROR8__(v62, 41))
             + v103;
        v67 = v111 + v108;
        v58 = v129;
        v65 = v114 + 16;
        v68 = (__ROR8__(v63, 28) ^ __ROR8__(v63, 34) ^ __ROR8__(v63, 39)) + (v129 & v138 | v63 & (v129 | v138)) + v111;
        v114 = v65;
      }
      while ( (__int64)v65 < (__int64)&xmmword_1400147D0 );
      v139 += v68;
      v13 = v136 + 16;
      v115 = v63;
      v4 = v139;
      v119 = v62;
      v149[11] = v46;
      v136 += 16;
      *a1 = v139;
      v140 += v115;
      v6 = v140;
      a1[1] = v140;
      v141 += v129;
      v7 = v141;
      a1[2] = v141;
      v142 += v138;
      v8 = v142;
      a1[3] = v142;
      v143 += v67;
      v9 = v143;
      a1[4] = v143;
      v144 += v119;
      v10 = v144;
      a1[5] = v144;
      v145 += v56;
      v11 = v145;
      a1[6] = v145;
      v112 = v147-- == 1;
      v12 = v53 + v146;
      v146 = v12;
      a1[7] = v12;
    }
    while ( !v112 );
    a3 = v148;
    v5 = a4;
  }
  *v5 = a3;
  sub_1403FDDE8((__int64)v149, 0x80uLL);
  return 0LL;
}
