/*
 * XREFs of sub_180045298 @ 0x180045298
 * Callers:
 *     sub_18007DEA0 @ 0x18007DEA0 (sub_18007DEA0.c)
 *     sub_18007FC90 @ 0x18007FC90 (sub_18007FC90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180044E50 @ 0x180044E50 (sub_180044E50.c)
 *     sub_180045120 @ 0x180045120 (sub_180045120.c)
 *     sub_180045270 @ 0x180045270 (sub_180045270.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_1800824CC @ 0x1800824CC (sub_1800824CC.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 *     sub_18008319C @ 0x18008319C (sub_18008319C.c)
 *     sub_1800838B0 @ 0x1800838B0 (sub_1800838B0.c)
 *     sub_1800838E4 @ 0x1800838E4 (sub_1800838E4.c)
 */

// Hidden C++ exception states: #wind=39
__int64 __fastcall sub_180045298(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // r8
  __int64 v37; // rbx
  _QWORD *v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rax
  unsigned __int16 v41; // r13
  __int64 v42; // rbx
  _QWORD *v43; // rax
  unsigned __int16 v44; // r12
  __int64 v45; // rbx
  _QWORD *v46; // rax
  unsigned __int16 v47; // r15
  __int64 v48; // rbx
  _QWORD *v49; // rax
  unsigned __int16 v50; // r14
  __int64 v51; // rbx
  _QWORD *v52; // rax
  unsigned __int16 v53; // si
  __int64 v54; // rbx
  _QWORD *v55; // rax
  unsigned __int16 v56; // di
  __int64 v57; // rbx
  _QWORD *v58; // rax
  int v59; // r8d
  int v60; // r13d
  __int64 v61; // rdi
  _QWORD *v62; // rax
  __int64 v63; // r9
  __int64 v64; // rsi
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // r8
  __int64 v82; // rbx
  _QWORD *v83; // rax
  __int64 v84; // rbx
  _QWORD *v85; // rax
  __int64 v86; // rbx
  _QWORD *v87; // rax
  __int64 v88; // rbx
  _QWORD *v89; // rax
  __int64 v90; // rbx
  _QWORD *v91; // rax
  __int64 v92; // rbx
  _QWORD *v93; // rax
  __int64 v94; // rbx
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // r8
  __int64 v98; // rbx
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // r8
  __int64 result; // rax
  __int64 v103; // rcx
  _QWORD v104[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v105; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v106; // [rsp+40h] [rbp-C8h]
  _QWORD v107[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v108; // [rsp+68h] [rbp-A0h]
  _QWORD v109[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v110; // [rsp+80h] [rbp-88h]
  __int64 v111; // [rsp+88h] [rbp-80h]
  _QWORD v112[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v113[64]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v114[64]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v115[64]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v116[64]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v117[64]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v118[64]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v119[64]; // [rsp+258h] [rbp+150h] BYREF
  _BYTE v120[64]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v121[64]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _BYTE v122[64]; // [rsp+318h] [rbp+210h] BYREF
  _BYTE v123[64]; // [rsp+358h] [rbp+250h] BYREF
  _BYTE v124[64]; // [rsp+398h] [rbp+290h] BYREF
  _BYTE v125[64]; // [rsp+3D8h] [rbp+2D0h] BYREF
  _BYTE v126[64]; // [rsp+418h] [rbp+310h] BYREF
  _BYTE v127[64]; // [rsp+458h] [rbp+350h] BYREF
  _BYTE v128[64]; // [rsp+498h] [rbp+390h] BYREF
  _BYTE v129[64]; // [rsp+4D8h] [rbp+3D0h] BYREF
  _BYTE v130[64]; // [rsp+518h] [rbp+410h] BYREF
  _BYTE v131[64]; // [rsp+558h] [rbp+450h] BYREF
  _BYTE v132[64]; // [rsp+598h] [rbp+490h] BYREF
  _BYTE v133[64]; // [rsp+5D8h] [rbp+4D0h] BYREF
  _BYTE v134[64]; // [rsp+618h] [rbp+510h] BYREF
  _BYTE v135[64]; // [rsp+658h] [rbp+550h] BYREF
  _BYTE v136[64]; // [rsp+698h] [rbp+590h] BYREF
  _BYTE v137[64]; // [rsp+6D8h] [rbp+5D0h] BYREF
  _BYTE v138[64]; // [rsp+718h] [rbp+610h] BYREF
  _BYTE v139[64]; // [rsp+758h] [rbp+650h] BYREF
  _BYTE v140[64]; // [rsp+798h] [rbp+690h] BYREF
  _BYTE v141[64]; // [rsp+7D8h] [rbp+6D0h] BYREF
  _BYTE v142[64]; // [rsp+818h] [rbp+710h] BYREF
  _BYTE v143[64]; // [rsp+858h] [rbp+750h] BYREF
  _BYTE v144[64]; // [rsp+898h] [rbp+790h] BYREF
  _BYTE v145[64]; // [rsp+8D8h] [rbp+7D0h] BYREF
  _BYTE v146[64]; // [rsp+918h] [rbp+810h] BYREF
  _BYTE v147[64]; // [rsp+958h] [rbp+850h] BYREF

  v110 = a2;
  v109[0] = a1;
  v111 = a2;
  sub_18004F718(a1, &v105, 6LL);
  v2 = sub_180017648(v112, (__int64)&unk_1801D7408);
  sub_180044E50((__int64)v114, (__int64)v2, 2);
  v3 = sub_180017648(v107, (__int64)&unk_1801D73A8);
  sub_180044E50((__int64)v115, (__int64)v3, 2);
  v4 = sub_180017648(v112, (__int64)&unk_1801D73E8);
  sub_180045120((__int64)v116, (__int64)v4, v5, 1.0);
  v6 = sub_180017648(v107, (__int64)&unk_1801D73C8);
  sub_180044E50((__int64)v117, (__int64)v6, 2);
  v7 = sub_180017648(v112, (__int64)&unk_1801D7568);
  sub_180044E50((__int64)v118, (__int64)v7, 5);
  v8 = sub_180017648(v107, (__int64)&unk_1801D7248);
  sub_180044E50((__int64)v119, (__int64)v8, 5);
  v9 = sub_180017648(v112, (__int64)&unk_1801D7268);
  sub_180044E50((__int64)v120, (__int64)v9, 5);
  v10 = sub_180017648(v107, (__int64)&unk_1801D7288);
  sub_180044E50((__int64)v121, (__int64)v10, 5);
  v11 = sub_180017648(v112, (__int64)&unk_1801D72A8);
  sub_180044E50((__int64)v122, (__int64)v11, 5);
  v12 = sub_180017648(v107, (__int64)&unk_1801D72C8);
  sub_180044E50((__int64)v123, (__int64)v12, 5);
  v13 = sub_180017648(v112, (__int64)&unk_1801D7848);
  sub_180044E50((__int64)v124, (__int64)v13, 5);
  v14 = sub_180017648(v107, (__int64)&unk_1801D7868);
  sub_180044E50((__int64)v125, (__int64)v14, 5);
  v15 = sub_180017648(v112, (__int64)&unk_1801D7888);
  sub_180044E50((__int64)v126, (__int64)v15, 6);
  v16 = sub_180017648(v107, (__int64)&unk_1801D7368);
  sub_180044E50((__int64)v127, (__int64)v16, 2);
  v17 = sub_180017648(v112, (__int64)&unk_1801D7388);
  sub_180045120((__int64)v128, (__int64)v17, v18, 1.0);
  v19 = sub_180017648(v107, (__int64)&unk_1801D7428);
  sub_180044E50((__int64)v129, (__int64)v19, 2);
  v20 = sub_180017648(v112, (__int64)&unk_1801D7448);
  sub_180044E50((__int64)v130, (__int64)v20, 2);
  v21 = sub_180017648(v107, (__int64)&unk_1801D74C8);
  sub_180044E50((__int64)v131, (__int64)v21, 2);
  v22 = sub_180017648(v112, (__int64)&unk_1801D74E8);
  sub_180044E50((__int64)v132, (__int64)v22, 2);
  v23 = sub_180017648(v107, (__int64)&unk_1801D7508);
  sub_180044E50((__int64)v133, (__int64)v23, 2);
  v24 = sub_180017648(v112, (__int64)&unk_1801D7528);
  sub_180044E50((__int64)v134, (__int64)v24, 2);
  v25 = sub_180017648(v107, (__int64)&unk_1801D7548);
  sub_180044E50((__int64)v135, (__int64)v25, 2);
  v26 = sub_180017648(v112, (__int64)&unk_1801D7468);
  sub_180044E50((__int64)v136, (__int64)v26, 2);
  v27 = sub_180017648(v107, (__int64)&unk_1801D7488);
  sub_180044E50((__int64)v137, (__int64)v27, 2);
  v28 = sub_180017648(v112, (__int64)&unk_1801D74A8);
  sub_180044E50((__int64)v138, (__int64)v28, 2);
  v29 = sub_180017648(v107, (__int64)&unk_1801D72E8);
  sub_180045120((__int64)v139, (__int64)v29, v30, 2.0);
  v31 = sub_180017648(v112, (__int64)&unk_1801D7308);
  sub_180045120((__int64)v140, (__int64)v31, v32, 1.0);
  v33 = sub_180017648(v107, (__int64)&unk_1801D7328);
  sub_180045120((__int64)v141, (__int64)v33, v34, 1.0);
  v35 = sub_180017648(v112, (__int64)&unk_1801D7348);
  sub_180045120((__int64)v142, (__int64)v35, v36, 1.0);
  sub_1800824CC(v105, v114, 29LL, 1LL);
  v37 = v105;
  v38 = sub_180017648(v107, (__int64)&unk_1801D7788);
  sub_180044E50((__int64)v112, (__int64)v38, 8);
  LOWORD(v108) = sub_180082598(v37, v112, 1LL);
  sub_180045270((__int64)v112);
  v39 = v105;
  v40 = sub_180017648(v107, (__int64)&unk_1801D77A8);
  sub_180044E50((__int64)v112, (__int64)v40, 8);
  v41 = sub_180082598(v39, v112, 1LL);
  sub_180045270((__int64)v112);
  v42 = v105;
  v43 = sub_180017648(v107, (__int64)&unk_1801D77C8);
  sub_180044E50((__int64)v112, (__int64)v43, 8);
  v44 = sub_180082598(v42, v112, 1LL);
  sub_180045270((__int64)v112);
  v45 = v105;
  v46 = sub_180017648(v107, (__int64)&unk_1801D77E8);
  sub_180044E50((__int64)v112, (__int64)v46, 8);
  v47 = sub_180082598(v45, v112, 1LL);
  sub_180045270((__int64)v112);
  v48 = v105;
  v49 = sub_180017648(v107, (__int64)&unk_1801D7808);
  sub_180044E50((__int64)v112, (__int64)v49, 8);
  v50 = sub_180082598(v48, v112, 1LL);
  sub_180045270((__int64)v112);
  v51 = v105;
  v52 = sub_180017648(v107, (__int64)&unk_1801D7828);
  sub_180044E50((__int64)v112, (__int64)v52, 8);
  v53 = sub_180082598(v51, v112, 1LL);
  sub_180045270((__int64)v112);
  v54 = v105;
  v55 = sub_180017648(v107, (__int64)&unk_1801D78A8);
  sub_180044E50((__int64)v112, (__int64)v55, 8);
  v56 = sub_180082598(v54, v112, 1LL);
  sub_180045270((__int64)v112);
  v57 = v105;
  v58 = sub_180017648(v107, (__int64)&unk_1801D78E8);
  sub_180044E50((__int64)v112, (__int64)v58, 8);
  LOWORD(v57) = sub_180082598(v57, v112, 1LL);
  sub_180045270((__int64)v112);
  sub_1800838E4(v105, (unsigned __int16)v108, 5LL);
  sub_1800838E4(v105, v41, 6LL);
  sub_1800838E4(v105, v44, 7LL);
  sub_1800838E4(v105, v47, 13LL);
  sub_1800838E4(v105, v50, 14LL);
  sub_1800838E4(v105, v53, 15LL);
  v60 = v59 - 7;
  sub_1800838E4(v105, (unsigned __int16)v57, (unsigned int)(v59 - 7));
  sub_1800838E4(v105, v56, (unsigned int)(v60 + 3));
  sub_180082B30(v105);
  v61 = v110;
  v62 = sub_18001246C(v104, &v105);
  sub_1800613A4(v63, v62);
  sub_18000B4B0((__int64)v114, (unsigned int)(v60 + 56), (unsigned int)(v60 + 21));
  if ( v106 )
    sub_180010530(v106);
  v64 = v109[0];
  sub_18004F718(v109[0], &v105, 5LL);
  v65 = sub_180017648(v107, (__int64)&unk_1801D7588);
  sub_180044E50((__int64)v114, (__int64)v65, 1);
  v66 = sub_180017648(v112, (__int64)&unk_1801D75A8);
  sub_180044E50((__int64)v115, (__int64)v66, 1);
  v67 = sub_180017648(v107, (__int64)&unk_1801D75C8);
  sub_180044E50((__int64)v116, (__int64)v67, 0);
  v68 = sub_180017648(v112, (__int64)&unk_1801D75E8);
  sub_180044E50((__int64)v117, (__int64)v68, 0);
  v69 = sub_180017648(v107, (__int64)&unk_1801D7608);
  sub_180044E50((__int64)v118, (__int64)v69, 0);
  v70 = sub_180017648(v112, (__int64)&unk_1801D7628);
  sub_180044E50((__int64)v119, (__int64)v70, 0);
  v71 = sub_180017648(v107, (__int64)&unk_1801D7648);
  sub_180044E50((__int64)v120, (__int64)v71, 0);
  v72 = sub_180017648(v112, (__int64)&unk_1801D7668);
  sub_180044E50((__int64)v121, (__int64)v72, 0);
  v73 = sub_180017648(v107, (__int64)&unk_1801D7688);
  sub_180044E50((__int64)v122, (__int64)v73, 0);
  v74 = sub_180017648(v112, (__int64)&unk_1801D7748);
  sub_180044E50((__int64)v123, (__int64)v74, 0);
  sub_1800824CC(v105, v114, 10LL, 1LL);
  sub_18008319C(v105, 16LL);
  v75 = sub_180017648(v107, (__int64)&unk_1801D76A8);
  sub_180044E50((__int64)v143, (__int64)v75, 5);
  v76 = sub_180017648(v112, (__int64)&unk_1801D76C8);
  sub_180044E50((__int64)v144, (__int64)v76, 5);
  v77 = sub_180017648(v107, (__int64)&unk_1801D76E8);
  sub_180044E50((__int64)v145, (__int64)v77, 5);
  v78 = sub_180017648(v112, (__int64)&unk_1801D7708);
  sub_180044E50((__int64)v146, (__int64)v78, 5);
  v79 = sub_180017648(v107, (__int64)&unk_1801D7728);
  sub_180044E50((__int64)v147, (__int64)v79, 5);
  sub_1800824CC(v105, v143, 5LL, 1LL);
  sub_180082B30(v105);
  v80 = sub_18001246C(v104, &v105);
  sub_1800613A4(v81, v80);
  sub_18000B4B0((__int64)v143, 64LL, 5LL);
  sub_18000B4B0((__int64)v114, 64LL, 10LL);
  if ( v106 )
    sub_180010530(v106);
  sub_18004F718(v64, &v105, 4LL);
  v82 = v105;
  v83 = sub_180017648(v107, (__int64)&unk_1801D7908);
  sub_180044E50((__int64)v113, (__int64)v83, 7);
  sub_180082598(v82, v113, 1LL);
  sub_180045270((__int64)v113);
  v84 = v105;
  v85 = sub_180017648(v107, (__int64)&unk_1801D7928);
  sub_180044E50((__int64)v113, (__int64)v85, 5);
  sub_180082598(v84, v113, 1LL);
  sub_180045270((__int64)v113);
  v86 = v105;
  v87 = sub_180017648(v107, (__int64)&unk_1801D7948);
  sub_180044E50((__int64)v113, (__int64)v87, 7);
  sub_180082598(v86, v113, 1LL);
  sub_180045270((__int64)v113);
  v88 = v105;
  v89 = sub_180017648(v107, (__int64)&unk_1801D7968);
  sub_180044E50((__int64)v113, (__int64)v89, 5);
  sub_180082598(v88, v113, 1LL);
  sub_180045270((__int64)v113);
  v90 = v105;
  v91 = sub_180017648(v107, (__int64)&unk_1801D7988);
  sub_180044E50((__int64)v113, (__int64)v91, 2);
  sub_180082598(v90, v113, 1LL);
  sub_180045270((__int64)v113);
  v92 = v105;
  v93 = sub_180017648(v107, (__int64)&unk_1801D79A8);
  sub_180044E50((__int64)v113, (__int64)v93, v60);
  sub_180082598(v92, v113, 1LL);
  sub_180045270((__int64)v113);
  sub_1800838B0(v105, &unk_1801D79A8, 9LL);
  v94 = v105;
  v95 = sub_180017648(v112, (__int64)&unk_1801D79C8);
  sub_180044E50((__int64)v113, (__int64)v95, v60);
  sub_180082598(v94, v113, 1LL);
  sub_180045270((__int64)v113);
  sub_1800838B0(v105, &unk_1801D79C8, 10LL);
  sub_180082B30(v105);
  v96 = sub_18001246C(v109, &v105);
  sub_1800613A4(v97, v96);
  if ( v106 )
    sub_180010530(v106);
  sub_18004F718(v64, &v105, 1LL);
  v98 = v105;
  v99 = sub_180017648(v107, (__int64)&unk_1801D7768);
  sub_180044E50((__int64)v113, (__int64)v99, 2);
  sub_180082598(v98, v113, 1LL);
  sub_180045270((__int64)v113);
  sub_180082B30(v105);
  v100 = sub_18001246C(v109, &v105);
  result = sub_1800613A4(v101, v100);
  if ( v106 )
    result = sub_180010530(v106);
  v103 = *(_QWORD *)(v61 + 8);
  if ( v103 )
    return sub_180010530(v103);
  return result;
}
