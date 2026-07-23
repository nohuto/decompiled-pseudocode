/*
 * XREFs of sub_1403FB888 @ 0x1403FB888
 * Callers:
 *     sub_1403FB460 @ 0x1403FB460 (sub_1403FB460.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403FB888(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // ebx
  int v6; // r11d
  int v7; // r10d
  int v8; // r9d
  int v9; // r14d
  int v10; // ebp
  int v11; // esi
  int v12; // edi
  unsigned int *v13; // r13
  int v14; // r8d
  int v15; // edi
  int v16; // r9d
  int v17; // r8d
  int v18; // esi
  int v19; // r10d
  int v20; // r8d
  int v21; // ebp
  int v22; // ecx
  int v23; // r11d
  int v24; // r8d
  int v25; // r14d
  int v26; // ecx
  int v27; // ebx
  int v28; // r8d
  int v29; // edi
  int v30; // ecx
  int v31; // r9d
  int v32; // r8d
  int v33; // esi
  int v34; // ecx
  int v35; // r10d
  int v36; // r8d
  int v37; // ebp
  int v38; // r11d
  int v39; // r8d
  int v40; // r14d
  int v41; // ecx
  int v42; // ebx
  int v43; // r8d
  int v44; // edi
  int v45; // r9d
  int v46; // r8d
  int v47; // esi
  int v48; // ecx
  int v49; // r10d
  unsigned __int32 v50; // r8d
  unsigned __int32 v51; // r15d
  int v52; // r11d
  unsigned __int32 v53; // edx
  unsigned __int32 v54; // r14d
  int v55; // ebx
  unsigned __int32 v56; // r8d
  unsigned __int32 v57; // edi
  int v58; // r9d
  unsigned __int32 v59; // r8d
  unsigned __int32 v60; // esi
  int v61; // r10d
  unsigned __int32 v62; // r8d
  unsigned __int32 v63; // r12d
  int v64; // r15d
  unsigned __int32 v65; // ebp
  unsigned __int32 v66; // edx
  unsigned __int32 v67; // ebx
  unsigned __int32 v68; // r14d
  unsigned __int32 v69; // r13d
  int v70; // r11d
  unsigned __int32 v71; // edx
  unsigned __int32 v72; // ebx
  int v73; // r8d
  unsigned __int32 v74; // edx
  unsigned __int32 v75; // edi
  int v76; // r9d
  unsigned __int32 v77; // edx
  unsigned __int32 v78; // esi
  int v79; // r10d
  unsigned __int32 v80; // edx
  unsigned __int32 v81; // ebp
  int v82; // r11d
  unsigned __int32 v83; // edx
  unsigned __int32 v84; // ebx
  int v85; // r8d
  unsigned __int32 v86; // edx
  unsigned __int32 v87; // edi
  int v88; // r9d
  unsigned __int32 v89; // edx
  unsigned __int32 v90; // esi
  int v91; // r10d
  unsigned __int32 v92; // edx
  unsigned __int32 v93; // ebp
  int v94; // r11d
  unsigned __int32 v95; // edx
  unsigned __int32 v96; // r8d
  int v97; // ebx
  unsigned __int32 v98; // edx
  unsigned __int32 v99; // edi
  int v100; // r9d
  unsigned __int32 v101; // edx
  unsigned __int32 v102; // esi
  int v103; // r10d
  unsigned __int32 v104; // edx
  unsigned __int32 v105; // ebp
  int v106; // r11d
  unsigned __int32 v107; // r8d
  unsigned __int32 v108; // r8d
  unsigned __int32 v109; // ebx
  unsigned __int32 v110; // r8d
  unsigned __int32 v111; // r8d
  unsigned __int32 v112; // r8d
  bool v113; // zf
  unsigned __int32 v115; // [rsp+0h] [rbp-198h]
  int v116; // [rsp+0h] [rbp-198h]
  int v117; // [rsp+0h] [rbp-198h]
  _DWORD *v118; // [rsp+10h] [rbp-188h]
  unsigned __int32 v119; // [rsp+18h] [rbp-180h]
  unsigned __int32 v120; // [rsp+20h] [rbp-178h]
  unsigned __int32 v121; // [rsp+28h] [rbp-170h]
  unsigned __int32 v122; // [rsp+30h] [rbp-168h]
  unsigned __int32 v123; // [rsp+40h] [rbp-158h]
  unsigned __int32 v124; // [rsp+50h] [rbp-148h]
  unsigned __int32 v125; // [rsp+60h] [rbp-138h]
  unsigned __int32 v126; // [rsp+70h] [rbp-128h]
  unsigned __int32 v127; // [rsp+80h] [rbp-118h]
  unsigned __int32 v128; // [rsp+90h] [rbp-108h]
  unsigned __int32 v129; // [rsp+A0h] [rbp-F8h]
  unsigned __int32 v130; // [rsp+A8h] [rbp-F0h]
  unsigned __int32 v131; // [rsp+ACh] [rbp-ECh]
  unsigned __int32 v132; // [rsp+B0h] [rbp-E8h]
  unsigned __int32 v133; // [rsp+B4h] [rbp-E4h]
  unsigned __int32 v134; // [rsp+C0h] [rbp-D8h]
  unsigned __int32 v135; // [rsp+C0h] [rbp-D8h]
  int v136; // [rsp+D0h] [rbp-C8h]
  int v137; // [rsp+D4h] [rbp-C4h]
  int v138; // [rsp+D8h] [rbp-C0h]
  int v139; // [rsp+DCh] [rbp-BCh]
  int v140; // [rsp+E0h] [rbp-B8h]
  int v141; // [rsp+E4h] [rbp-B4h]
  int v142; // [rsp+E8h] [rbp-B0h]
  int v143; // [rsp+ECh] [rbp-ACh]
  __int64 v144; // [rsp+F0h] [rbp-A8h]
  unsigned __int64 v145; // [rsp+F8h] [rbp-A0h]
  unsigned __int64 v147; // [rsp+108h] [rbp-90h]

  v4 = *a1;
  v6 = a1[1];
  v7 = a1[2];
  v8 = a1[3];
  v9 = a1[4];
  v10 = a1[5];
  v11 = a1[6];
  v12 = a1[7];
  if ( a3 >= 0x40 )
  {
    v136 = *a1;
    v13 = (unsigned int *)(a2 + 8);
    v145 = a3 >> 6;
    v137 = a1[1];
    v138 = a1[2];
    v147 = -64LL * (a3 >> 6) + a3;
    v139 = a1[3];
    v140 = a1[4];
    v141 = a1[5];
    v142 = a1[6];
    v143 = a1[7];
    v144 = a2 + 8;
    do
    {
      v128 = _byteswap_ulong(*(v13 - 2));
      v14 = v128 + (__ROR4__(v9, 11) ^ __ROR4__(v9, 25) ^ __ROR4__(v9, 6)) + (v11 ^ v9 & (v10 ^ v11)) + v12 + 1116352408;
      v15 = v14 + v8;
      v16 = v14 + (__ROR4__(v4, 2) ^ __ROR4__(v4, 13) ^ __ROR4__(v4, 22)) + (v6 & v7 | v4 & (v6 | v7));
      v130 = _byteswap_ulong(*(v13 - 1));
      v17 = v130
          + (__ROR4__(v15, 11) ^ __ROR4__(v15, 25) ^ __ROR4__(v15, 6))
          + (v10 ^ v15 & (v9 ^ v10))
          + v11
          + 1899447441;
      v18 = v17 + v7;
      v19 = v17 + (__ROR4__(v16, 2) ^ __ROR4__(v16, 13) ^ __ROR4__(v16, 22)) + (v4 & v6 | v16 & (v4 | v6));
      v129 = _byteswap_ulong(*v13);
      v20 = v10
          - 1245643825
          + (v9 ^ v18 & (v9 ^ v15))
          + (__ROR4__(v18, 6) ^ __ROR4__(v18, 11) ^ __ROR4__(v18, 25))
          + v129;
      v21 = v20 + v6;
      v22 = v15 ^ (v20 + v6) & (v15 ^ v18);
      v23 = v20 + (__ROR4__(v19, 2) ^ __ROR4__(v19, 13) ^ __ROR4__(v19, 22)) + (v4 & v16 | v19 & (v4 | v16));
      v131 = _byteswap_ulong(v13[1]);
      v24 = v9 - 373957723 + v22 + (__ROR4__(v21, 6) ^ __ROR4__(v21, 11) ^ __ROR4__(v21, 25)) + v131;
      v25 = v24 + v4;
      v26 = (v24 + v4) & (v18 ^ v21);
      v27 = v24 + (__ROR4__(v23, 2) ^ __ROR4__(v23, 13) ^ __ROR4__(v23, 22)) + (v16 & v19 | v23 & (v16 | v19));
      v124 = _byteswap_ulong(v13[2]);
      v28 = v15 + 961987163 + (v18 ^ v26) + (__ROR4__(v25, 6) ^ __ROR4__(v25, 11) ^ __ROR4__(v25, 25)) + v124;
      v29 = v28 + v16;
      v30 = v21 ^ (v28 + v16) & (v21 ^ v25);
      v31 = v28 + (__ROR4__(v27, 2) ^ __ROR4__(v27, 13) ^ __ROR4__(v27, 22)) + (v19 & v23 | v27 & (v19 | v23));
      v125 = _byteswap_ulong(v13[3]);
      v32 = v18 + 1508970993 + v30 + (__ROR4__(v29, 6) ^ __ROR4__(v29, 11) ^ __ROR4__(v29, 25)) + v125;
      v33 = v32 + v19;
      v34 = (v32 + v19) & (v25 ^ v29);
      v35 = v32 + (__ROR4__(v31, 2) ^ __ROR4__(v31, 13) ^ __ROR4__(v31, 22)) + (v23 & v27 | v31 & (v23 | v27));
      v121 = _byteswap_ulong(v13[4]);
      v36 = v21 - 1841331548 + (v25 ^ v34) + (__ROR4__(v33, 11) ^ __ROR4__(v33, 25) ^ __ROR4__(v33, 6)) + v121;
      v37 = v36 + v23;
      v38 = v36 + (__ROR4__(v35, 2) ^ __ROR4__(v35, 13) ^ __ROR4__(v35, 22)) + (v27 & v31 | v35 & (v27 | v31));
      v127 = _byteswap_ulong(v13[5]);
      v39 = v25
          - 1424204075
          + (v29 ^ v37 & (v29 ^ v33))
          + (__ROR4__(v37, 11) ^ __ROR4__(v37, 25) ^ __ROR4__(v37, 6))
          + v127;
      v40 = v39 + v27;
      v41 = (v39 + v27) & (v33 ^ v37);
      v42 = v39 + (__ROR4__(v38, 2) ^ __ROR4__(v38, 13) ^ __ROR4__(v38, 22)) + (v31 & v35 | v38 & (v31 | v35));
      v122 = _byteswap_ulong(v13[6]);
      v43 = v29 - 670586216 + (v33 ^ v41) + (__ROR4__(v40, 11) ^ __ROR4__(v40, 25) ^ __ROR4__(v40, 6)) + v122;
      v44 = v43 + v31;
      v45 = v43 + (__ROR4__(v42, 2) ^ __ROR4__(v42, 13) ^ __ROR4__(v42, 22)) + (v35 & v38 | v42 & (v35 | v38));
      v123 = _byteswap_ulong(v13[7]);
      v46 = v33
          + 310598401
          + (v37 ^ v44 & (v37 ^ v40))
          + (__ROR4__(v44, 11) ^ __ROR4__(v44, 25) ^ __ROR4__(v44, 6))
          + v123;
      v47 = v46 + v35;
      v48 = (v46 + v35) & (v40 ^ v44);
      v49 = v46 + (__ROR4__(v45, 2) ^ __ROR4__(v45, 13) ^ __ROR4__(v45, 22)) + (v38 & v42 | v45 & (v38 | v42));
      v120 = _byteswap_ulong(v13[8]);
      v50 = v37 + (v40 ^ v48) + 607225278 + (__ROR4__(v47, 6) ^ __ROR4__(v47, 11) ^ __ROR4__(v47, 25)) + v120;
      v51 = v38 + v50;
      v52 = v50 + (__ROR4__(v49, 2) ^ __ROR4__(v49, 13) ^ __ROR4__(v49, 22)) + (v42 & v45 | v49 & (v42 | v45));
      v132 = _byteswap_ulong(v13[9]);
      v53 = v132
          + (v44 ^ v51 & (v44 ^ v47))
          + 1426881987
          + v40
          + (__ROR4__(v51, 6) ^ __ROR4__(v51, 11) ^ __ROR4__(v51, 25));
      v54 = v42 + v53;
      v55 = v53 + (__ROR4__(v52, 2) ^ __ROR4__(v52, 13) ^ __ROR4__(v52, 22)) + (v45 & v49 | v52 & (v45 | v49));
      v126 = _byteswap_ulong(v13[10]);
      v56 = v44
          + 1925078388
          + (__ROR4__(v54, 11) ^ __ROR4__(v54, 25) ^ __ROR4__(v54, 6))
          + (v47 ^ v54 & (v51 ^ v47))
          + v126;
      v57 = v45 + v56;
      v58 = v56 + (__ROR4__(v55, 2) ^ __ROR4__(v55, 13) ^ __ROR4__(v55, 22)) + (v52 & v49 | v55 & (v52 | v49));
      v134 = _byteswap_ulong(v13[11]);
      v59 = v47
          - 2132889090
          + (__ROR4__(v57, 11) ^ __ROR4__(v57, 25) ^ __ROR4__(v57, 6))
          + (v51 ^ v57 & (v54 ^ v51))
          + v134;
      v60 = v49 + v59;
      v61 = v59 + (__ROR4__(v58, 2) ^ __ROR4__(v58, 13) ^ __ROR4__(v58, 22)) + (v55 & v52 | v58 & (v55 | v52));
      v115 = _byteswap_ulong(v13[12]);
      v62 = v51
          - 1680079193
          + (__ROR4__(v60, 11) ^ __ROR4__(v60, 25) ^ __ROR4__(v60, 6))
          + (v54 ^ v60 & (v57 ^ v54))
          + v115;
      v63 = v52 + v62;
      v64 = v62 + (__ROR4__(v61, 2) ^ __ROR4__(v61, 13) ^ __ROR4__(v61, 22)) + (v58 & v55 | v61 & (v58 | v55));
      v65 = _byteswap_ulong(v13[13]);
      v133 = v65;
      v66 = v65
          + (v57 ^ (v52 + v62) & (v57 ^ v60))
          - 1046744716
          + v54
          + (__ROR4__(v52 + v62, 6) ^ __ROR4__(v52 + v62, 11) ^ __ROR4__(v52 + v62, 25));
      v67 = v66 + v55;
      v119 = v67;
      v68 = v134;
      v69 = v115;
      v70 = v66 + (__ROR4__(v64, 2) ^ __ROR4__(v64, 13) ^ __ROR4__(v64, 22)) + (v58 & v61 | v64 & (v58 | v61));
      v118 = (_DWORD *)&xmmword_140014040 + 2;
      do
      {
        v128 += ((v130 >> 3) ^ __ROR4__(v130, 7) ^ __ROR4__(v130, 18))
              + v123
              + ((v69 >> 10) ^ __ROR4__(v69, 17) ^ __ROR4__(v69, 19));
        v71 = v57
            + *(v118 - 2)
            + (v60 ^ v67 & (v63 ^ v60))
            + (__ROR4__(v67, 6) ^ __ROR4__(v67, 11) ^ __ROR4__(v67, 25))
            + v128;
        v72 = v71 + v58;
        v73 = v71 + (__ROR4__(v70, 2) ^ __ROR4__(v70, 13) ^ __ROR4__(v70, 22)) + (v64 & v61 | v70 & (v64 | v61));
        v130 += ((v65 >> 10) ^ __ROR4__(v65, 17) ^ __ROR4__(v65, 19))
              + v120
              + ((v129 >> 3) ^ __ROR4__(v129, 7) ^ __ROR4__(v129, 18));
        v74 = v130
            + v60
            + *(v118 - 1)
            + (__ROR4__(v71 + v58, 6) ^ __ROR4__(v71 + v58, 11) ^ __ROR4__(v71 + v58, 25))
            + (v63 ^ (v71 + v58) & (v63 ^ v119));
        v75 = v74 + v61;
        v76 = v74 + (__ROR4__(v73, 2) ^ __ROR4__(v73, 13) ^ __ROR4__(v73, 22)) + (v70 & v64 | v73 & (v70 | v64));
        v129 += ((v128 >> 10) ^ __ROR4__(v128, 17) ^ __ROR4__(v128, 19))
              + v132
              + ((v131 >> 3) ^ __ROR4__(v131, 7) ^ __ROR4__(v131, 18));
        v77 = v129
            + v63
            + *v118
            + (__ROR4__(v74 + v61, 6) ^ __ROR4__(v74 + v61, 11) ^ __ROR4__(v74 + v61, 25))
            + ((v74 + v61) & (v119 ^ v72) ^ v119);
        v78 = v77 + v64;
        v79 = v77 + (__ROR4__(v76, 2) ^ __ROR4__(v76, 13) ^ __ROR4__(v76, 22)) + (v70 & v73 | v76 & (v70 | v73));
        v131 += ((v124 >> 3) ^ __ROR4__(v124, 7) ^ __ROR4__(v124, 18))
              + v126
              + ((v130 >> 10) ^ __ROR4__(v130, 17) ^ __ROR4__(v130, 19));
        v80 = v131
            + v118[1]
            + (v72 ^ v78 & (v72 ^ v75))
            + (__ROR4__(v77 + v64, 6) ^ __ROR4__(v78, 11) ^ __ROR4__(v78, 25))
            + v119;
        v81 = v80 + v70;
        v82 = v80 + (__ROR4__(v79, 2) ^ __ROR4__(v79, 13) ^ __ROR4__(v79, 22)) + (v76 & v73 | v79 & (v76 | v73));
        v124 += ((v129 >> 10) ^ __ROR4__(v129, 17) ^ __ROR4__(v129, 19))
              + v68
              + ((v125 >> 3) ^ __ROR4__(v125, 7) ^ __ROR4__(v125, 18));
        v83 = v72
            + v118[2]
            + (v75 ^ v81 & (v78 ^ v75))
            + (__ROR4__(v81, 6) ^ __ROR4__(v81, 11) ^ __ROR4__(v81, 25))
            + v124;
        v84 = v73 + v83;
        v85 = v83 + (__ROR4__(v82, 2) ^ __ROR4__(v82, 13) ^ __ROR4__(v82, 22)) + (v79 & v76 | v82 & (v79 | v76));
        v125 += ((v121 >> 3) ^ __ROR4__(v121, 7) ^ __ROR4__(v121, 18))
              + v69
              + ((v131 >> 10) ^ __ROR4__(v131, 17) ^ __ROR4__(v131, 19));
        v86 = v75
            + v118[3]
            + (v78 ^ v84 & (v81 ^ v78))
            + (__ROR4__(v84, 6) ^ __ROR4__(v84, 11) ^ __ROR4__(v84, 25))
            + v125;
        v87 = v76 + v86;
        v88 = v86 + (__ROR4__(v85, 2) ^ __ROR4__(v85, 13) ^ __ROR4__(v85, 22)) + (v82 & v79 | v85 & (v82 | v79));
        v121 += ((v124 >> 10) ^ __ROR4__(v124, 17) ^ __ROR4__(v124, 19))
              + v133
              + ((v127 >> 3) ^ __ROR4__(v127, 7) ^ __ROR4__(v127, 18));
        v89 = v78
            + v118[4]
            + (v81 ^ v87 & (v84 ^ v81))
            + (__ROR4__(v87, 6) ^ __ROR4__(v87, 11) ^ __ROR4__(v87, 25))
            + v121;
        v90 = v89 + v79;
        v91 = v89 + (__ROR4__(v88, 2) ^ __ROR4__(v88, 13) ^ __ROR4__(v88, 22)) + (v85 & v82 | v88 & (v85 | v82));
        v127 += ((v125 >> 10) ^ __ROR4__(v125, 17) ^ __ROR4__(v125, 19))
              + v128
              + ((v122 >> 3) ^ __ROR4__(v122, 7) ^ __ROR4__(v122, 18));
        v92 = v81
            + v118[5]
            + (v84 ^ v90 & (v87 ^ v84))
            + (__ROR4__(v90, 6) ^ __ROR4__(v90, 11) ^ __ROR4__(v90, 25))
            + v127;
        v93 = v92 + v82;
        v94 = v92 + (__ROR4__(v91, 2) ^ __ROR4__(v91, 13) ^ __ROR4__(v91, 22)) + (v88 & v85 | v91 & (v88 | v85));
        v122 += ((v121 >> 10) ^ __ROR4__(v121, 17) ^ __ROR4__(v121, 19))
              + v130
              + ((v123 >> 3) ^ __ROR4__(v123, 7) ^ __ROR4__(v123, 18));
        v95 = v84
            + v118[6]
            + (v87 ^ v93 & (v90 ^ v87))
            + (__ROR4__(v93, 6) ^ __ROR4__(v93, 11) ^ __ROR4__(v93, 25))
            + v122;
        v96 = v95 + v85;
        v97 = v95 + (__ROR4__(v94, 2) ^ __ROR4__(v94, 13) ^ __ROR4__(v94, 22)) + (v91 & v88 | v94 & (v91 | v88));
        v123 += ((v120 >> 3) ^ __ROR4__(v120, 7) ^ __ROR4__(v120, 18))
              + v129
              + ((v127 >> 10) ^ __ROR4__(v127, 17) ^ __ROR4__(v127, 19));
        v98 = v87
            + v118[7]
            + (v90 ^ v96 & (v93 ^ v90))
            + (__ROR4__(v96, 6) ^ __ROR4__(v96, 11) ^ __ROR4__(v96, 25))
            + v123;
        v99 = v98 + v88;
        v100 = v98 + (__ROR4__(v97, 2) ^ __ROR4__(v97, 13) ^ __ROR4__(v97, 22)) + (v94 & v91 | v97 & (v94 | v91));
        v120 += ((v122 >> 10) ^ __ROR4__(v122, 17) ^ __ROR4__(v122, 19))
              + v131
              + ((v132 >> 3) ^ __ROR4__(v132, 7) ^ __ROR4__(v132, 18));
        v101 = v90
             + v118[8]
             + (v93 ^ v99 & (v96 ^ v93))
             + (__ROR4__(v99, 6) ^ __ROR4__(v99, 11) ^ __ROR4__(v99, 25))
             + v120;
        v102 = v101 + v91;
        v103 = v101 + (__ROR4__(v100, 2) ^ __ROR4__(v100, 13) ^ __ROR4__(v100, 22)) + (v97 & v94 | v100 & (v97 | v94));
        v132 += ((v126 >> 3) ^ __ROR4__(v126, 7) ^ __ROR4__(v126, 18))
              + v124
              + ((v123 >> 10) ^ __ROR4__(v123, 17) ^ __ROR4__(v123, 19));
        v104 = v132
             + v93
             + v118[9]
             + (v96 ^ v102 & (v99 ^ v96))
             + (__ROR4__(v102, 6) ^ __ROR4__(v102, 11) ^ __ROR4__(v102, 25));
        v105 = v104 + v94;
        v106 = v104 + (__ROR4__(v103, 2) ^ __ROR4__(v103, 13) ^ __ROR4__(v103, 22)) + (v100 & v97 | v103 & (v100 | v97));
        v126 += ((v68 >> 3) ^ __ROR4__(v68, 7) ^ __ROR4__(v68, 18))
              + v125
              + ((v120 >> 10) ^ __ROR4__(v120, 17) ^ __ROR4__(v120, 19));
        v107 = v126
             + v118[10]
             + (v99 ^ v105 & (v102 ^ v99))
             + (__ROR4__(v105, 6) ^ __ROR4__(v105, 11) ^ __ROR4__(v105, 25))
             + v96;
        v135 = v107 + v97;
        v116 = (v103 & v100 | v106 & (v103 | v100))
             + v107
             + (__ROR4__(v106, 2) ^ __ROR4__(v106, 13) ^ __ROR4__(v106, 22));
        v68 += v121
             + ((v132 >> 10) ^ __ROR4__(v132, 17) ^ __ROR4__(v132, 19))
             + ((v69 >> 3) ^ __ROR4__(v69, 7) ^ __ROR4__(v69, 18));
        v108 = v68
             + v99
             + v118[11]
             + (v102 ^ v135 & (v102 ^ v105))
             + (__ROR4__(v135, 6) ^ __ROR4__(v107 + v97, 11) ^ __ROR4__(v107 + v97, 25));
        v109 = v108 + v100;
        v58 = v116;
        v117 = (v103 & v106 | v116 & (v103 | v106))
             + v108
             + (__ROR4__(v116, 2) ^ __ROR4__(v116, 13) ^ __ROR4__(v116, 22));
        v69 += v127
             + ((v133 >> 3) ^ __ROR4__(v133, 7) ^ __ROR4__(v133, 18))
             + ((v126 >> 10) ^ __ROR4__(v126, 17) ^ __ROR4__(v126, 19));
        v57 = v135;
        v110 = v102
             + v118[12]
             + (v105 ^ v109 & (v105 ^ v135))
             + (__ROR4__(v109, 6) ^ __ROR4__(v109, 11) ^ __ROR4__(v109, 25));
        v60 = v109;
        v111 = v69 + v110;
        v63 = v111 + v103;
        v61 = v117;
        v64 = v111 + (__ROR4__(v117, 2) ^ __ROR4__(v117, 13) ^ __ROR4__(v117, 22)) + (v58 & v106 | v117 & (v58 | v106));
        v133 += v122
              + ((v128 >> 3) ^ __ROR4__(v128, 7) ^ __ROR4__(v128, 18))
              + ((v68 >> 10) ^ __ROR4__(v68, 17) ^ __ROR4__(v68, 19));
        v112 = v133
             + v105
             + v118[13]
             + (v135 ^ v63 & (v109 ^ v135))
             + (__ROR4__(v63, 6) ^ __ROR4__(v63, 11) ^ __ROR4__(v63, 25));
        v65 = v133;
        v67 = v106 + v112;
        v119 = v106 + v112;
        v70 = v112 + (__ROR4__(v64, 2) ^ __ROR4__(v64, 13) ^ __ROR4__(v64, 22)) + (v117 & v58 | v64 & (v117 | v58));
        v118 += 16;
      }
      while ( (__int64)v118 < (__int64)((_DWORD *)&xmmword_140014100 + 2) );
      v7 = v138 + v117;
      v8 = v139 + v58;
      v11 = v142 + v60;
      v12 = v143 + v135;
      v4 = v70 + v136;
      v9 = v119 + v140;
      v6 = v64 + v137;
      v137 += v64;
      v13 = (unsigned int *)(v144 + 64);
      v10 = v63 + v141;
      v113 = v145-- == 1;
      v136 = v4;
      a1[1] = v137;
      v138 = v7;
      a1[2] = v7;
      v139 = v8;
      a1[3] = v8;
      v140 = v9;
      a1[4] = v9;
      v141 = v10;
      a1[5] = v10;
      v142 = v11;
      a1[6] = v11;
      v143 = v12;
      a1[7] = v12;
      *a1 = v4;
      v144 += 64LL;
    }
    while ( !v113 );
    a3 = v147;
  }
  *a4 = a3;
  return 0LL;
}
