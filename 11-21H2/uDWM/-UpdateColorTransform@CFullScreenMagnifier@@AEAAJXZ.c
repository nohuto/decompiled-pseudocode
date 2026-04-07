/*
 * XREFs of ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x1800BCA50
 * Callers:
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BC868 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800BC9C8 (-OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x180100604 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateColorTransform(CFullScreenMagnifier *this)
{
  float v1; // xmm3_4
  float v3; // xmm7_4
  float v4; // xmm4_4
  float v5; // xmm6_4
  float v6; // xmm5_4
  float v7; // xmm15_4
  float v8; // xmm13_4
  float v9; // xmm11_4
  float v10; // xmm10_4
  float v11; // xmm9_4
  float v12; // xmm0_4
  float v13; // xmm12_4
  float v14; // xmm14_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm7_4
  float v25; // xmm4_4
  float v26; // xmm8_4
  float v27; // xmm6_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  float v30; // xmm5_4
  float v31; // xmm1_4
  float v32; // xmm7_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm7_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm3_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm2_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm8_4
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm0_4
  float v50; // xmm8_4
  float v51; // xmm5_4
  float v52; // xmm3_4
  float v53; // xmm8_4
  float v54; // xmm6_4
  float v55; // xmm7_4
  float v56; // xmm0_4
  float v57; // xmm3_4
  float v58; // xmm3_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  float v62; // xmm2_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  float v65; // xmm8_4
  float v66; // xmm4_4
  float v67; // xmm3_4
  float v68; // xmm0_4
  float v69; // xmm8_4
  float v70; // xmm5_4
  float v71; // xmm3_4
  float v72; // xmm1_4
  float v73; // xmm8_4
  float v74; // xmm2_4
  float v75; // xmm3_4
  float v76; // xmm6_4
  float v77; // xmm8_4
  float v78; // xmm0_4
  float v79; // xmm7_4
  float v80; // xmm3_4
  float v81; // xmm8_4
  float v82; // xmm2_4
  float v83; // xmm3_4
  float v84; // xmm0_4
  float v85; // xmm1_4
  float v86; // xmm3_4
  float v87; // xmm0_4
  float v88; // xmm2_4
  float v89; // xmm3_4
  float v90; // xmm2_4
  float v91; // xmm0_4
  float v92; // xmm8_4
  float v93; // xmm4_4
  float v94; // xmm3_4
  float v95; // xmm0_4
  float v96; // xmm3_4
  float v97; // xmm8_4
  float v98; // xmm5_4
  float v99; // xmm3_4
  float v100; // xmm8_4
  float v101; // xmm6_4
  float v102; // xmm0_4
  float v103; // xmm3_4
  float v104; // xmm1_4
  float v105; // xmm8_4
  float v106; // xmm7_4
  float v107; // xmm8_4
  float v108; // xmm2_4
  float v109; // xmm0_4
  float v110; // xmm3_4
  float v111; // xmm1_4
  float v112; // xmm0_4
  float v113; // xmm2_4
  float v114; // xmm1_4
  float v115; // xmm7_4
  float v116; // xmm1_4
  CVisual *v117; // rcx
  int v118; // eax
  unsigned int v119; // ebx
  int v120; // eax
  float v122[28]; // [rsp+38h] [rbp-D0h] BYREF

  v1 = *((float *)this + 39);
  v3 = *((float *)this + 38);
  v4 = *((float *)this + 40);
  v5 = *((float *)this + 41);
  v6 = *((float *)this + 42);
  v7 = *((float *)this + 15);
  v8 = *((float *)this + 21);
  v9 = *((float *)this + 16);
  v10 = *((float *)this + 22);
  v11 = *((float *)this + 17);
  v12 = v3 * *((float *)this + 14);
  v13 = *((float *)this + 27);
  v14 = *((float *)this + 32);
  v15 = v4 * *((float *)this + 24);
  v122[0] = (float)((float)((float)((float)(v3 * *((float *)this + 13)) + (float)(v1 * *((float *)this + 18)))
                          + (float)(v4 * *((float *)this + 23)))
                  + (float)(v5 * *((float *)this + 28)))
          + (float)(v6 * *((float *)this + 33));
  v16 = (float)(v1 * *((float *)this + 19)) + v12;
  v17 = v1 * *((float *)this + 20);
  v18 = (float)((float)(v16 + v15) + (float)(v5 * *((float *)this + 29))) + (float)(*((float *)this + 34) * v6);
  v19 = v4 * *((float *)this + 25);
  v122[1] = v18;
  v20 = (float)((float)((float)((float)(v3 * v7) + v17) + v19) + (float)(v5 * *((float *)this + 30)))
      + (float)(*((float *)this + 35) * v6);
  v21 = v4 * *((float *)this + 26);
  v122[2] = v20;
  v22 = (float)((float)((float)(v3 * v9) + (float)(v1 * v8)) + v21) + (float)(v5 * *((float *)this + 31));
  v23 = *((float *)this + 37);
  v24 = (float)((float)((float)(v3 * v11) + (float)(v1 * v10)) + (float)(v4 * v13)) + (float)(v5 * v14);
  v122[3] = v22 + (float)(*((float *)this + 36) * v6);
  v25 = *((float *)this + 44);
  v26 = *((float *)this + 43);
  v27 = *((float *)this + 46);
  v28 = v26 * *((float *)this + 14);
  v29 = v23 * v6;
  v30 = *((float *)this + 45);
  v31 = *((float *)this + 23) * v30;
  v32 = v24 + v29;
  v33 = *((float *)this + 13) * v26;
  v34 = *((float *)this + 18) * v25;
  v122[4] = v32;
  v35 = *((float *)this + 47);
  v36 = v33 + v34;
  v37 = v27 * *((float *)this + 29);
  v38 = (float)(v28 + (float)(v25 * *((float *)this + 19))) + (float)(v30 * *((float *)this + 24));
  v122[5] = (float)((float)(v36 + v31) + (float)(*((float *)this + 28) * v27)) + (float)(v35 * *((float *)this + 33));
  v39 = v38 + v37;
  v40 = v27 * *((float *)this + 30);
  v41 = (float)((float)(v26 * v7) + (float)(v25 * *((float *)this + 20))) + (float)(v30 * *((float *)this + 25));
  v122[6] = v39 + (float)(v35 * *((float *)this + 34));
  v42 = v26;
  v43 = v41 + v40;
  v44 = v25;
  v45 = v30 * *((float *)this + 26);
  v46 = (float)(v26 * v11) + (float)(v25 * v10);
  v47 = *((float *)this + 49);
  v48 = (float)(v42 * v9) + (float)(v44 * v8);
  v49 = v27 * *((float *)this + 31);
  v50 = v46 + (float)(v30 * v13);
  v51 = *((float *)this + 50);
  v122[7] = v43 + (float)(v35 * *((float *)this + 35));
  v52 = (float)((float)(v48 + v45) + v49) + (float)(v35 * *((float *)this + 36));
  v122[9] = (float)(v50 + (float)(v27 * v14)) + (float)(v35 * *((float *)this + 37));
  v53 = *((float *)this + 48);
  v122[8] = v52;
  v54 = *((float *)this + 51);
  v55 = *((float *)this + 52);
  v56 = v54 * *((float *)this + 29);
  v57 = (float)((float)(v53 * *((float *)this + 14)) + (float)(v47 * *((float *)this + 19)))
      + (float)(v51 * *((float *)this + 24));
  v122[10] = (float)((float)((float)((float)(*((float *)this + 13) * v53) + (float)(*((float *)this + 18) * v47))
                           + (float)(*((float *)this + 23) * v51))
                   + (float)(*((float *)this + 28) * v54))
           + (float)(v55 * *((float *)this + 33));
  v58 = v57 + v56;
  v59 = v54 * *((float *)this + 30);
  v60 = (float)((float)(v53 * v7) + (float)(v47 * *((float *)this + 20))) + (float)(v51 * *((float *)this + 25));
  v122[11] = v58 + (float)(v55 * *((float *)this + 34));
  v61 = v53;
  v62 = v60 + v59;
  v63 = v47;
  v64 = v51 * *((float *)this + 26);
  v65 = (float)(v53 * v11) + (float)(v47 * v10);
  v66 = *((float *)this + 54);
  v67 = (float)(v61 * v9) + (float)(v63 * v8);
  v68 = v54 * *((float *)this + 31);
  v69 = v65 + (float)(v51 * v13);
  v70 = *((float *)this + 55);
  v71 = v67 + v64;
  v72 = v55;
  v122[12] = v62 + (float)(v55 * *((float *)this + 35));
  v73 = v69 + (float)(v54 * v14);
  v74 = *((float *)this + 13);
  v75 = v71 + v68;
  v76 = *((float *)this + 56);
  v77 = v73 + (float)(v55 * *((float *)this + 37));
  v78 = *((float *)this + 18) * v66;
  v79 = *((float *)this + 57);
  v80 = v75 + (float)(v72 * *((float *)this + 36));
  v122[14] = v77;
  v81 = *((float *)this + 53);
  v122[13] = v80;
  v82 = (float)((float)((float)(v74 * v81) + v78) + (float)(*((float *)this + 23) * v70))
      + (float)(*((float *)this + 28) * v76);
  v83 = (float)(v81 * *((float *)this + 14)) + (float)(v66 * *((float *)this + 19));
  v84 = v76 * *((float *)this + 29);
  v85 = v70 * *((float *)this + 24);
  v122[15] = v82 + (float)(v79 * *((float *)this + 33));
  v86 = (float)(v83 + v85) + v84;
  v87 = v76 * *((float *)this + 30);
  v88 = (float)((float)(v81 * v7) + (float)(v66 * *((float *)this + 20))) + (float)(v70 * *((float *)this + 25));
  v122[16] = v86 + (float)(v79 * *((float *)this + 34));
  v89 = v81;
  v90 = v88 + v87;
  v91 = v66;
  v92 = (float)(v81 * v11) + (float)(v66 * v10);
  v93 = *((float *)this + 59);
  v94 = (float)(v89 * v9) + (float)(v91 * v8);
  v95 = v76 * *((float *)this + 31);
  v96 = v94 + (float)(v70 * *((float *)this + 26));
  v97 = v92 + (float)(v70 * v13);
  v122[17] = v90 + (float)(v79 * *((float *)this + 35));
  v98 = *((float *)this + 60);
  v99 = v96 + v95;
  v100 = v97 + (float)(v76 * v14);
  v101 = *((float *)this + 61);
  v102 = *((float *)this + 18) * v93;
  v103 = v99 + (float)(v79 * *((float *)this + 36));
  v104 = *((float *)this + 13);
  v105 = v100 + (float)(v79 * *((float *)this + 37));
  v106 = *((float *)this + 62);
  v122[18] = v103;
  v122[19] = v105;
  v107 = *((float *)this + 58);
  v108 = (float)(v107 * *((float *)this + 14)) + (float)(v93 * *((float *)this + 19));
  v122[20] = (float)((float)((float)((float)(v104 * v107) + v102) + (float)(*((float *)this + 23) * v98))
                   + (float)(*((float *)this + 28) * v101))
           + (float)(v106 * *((float *)this + 33));
  v109 = v101 * *((float *)this + 30);
  v110 = (float)((float)(v107 * v7) + (float)(v93 * *((float *)this + 20))) + (float)(v98 * *((float *)this + 25));
  v122[21] = (float)((float)(v108 + (float)(v98 * *((float *)this + 24))) + (float)(v101 * *((float *)this + 29)))
           + (float)(v106 * *((float *)this + 34));
  v111 = v98 * *((float *)this + 26);
  v122[22] = (float)(v110 + v109) + (float)(v106 * *((float *)this + 35));
  v112 = v101 * *((float *)this + 31);
  v113 = (float)((float)(v107 * v9) + (float)(v93 * v8)) + v111;
  v114 = v106;
  v115 = v106 * *((float *)this + 37);
  v116 = v114 * *((float *)this + 36);
  v117 = (CVisual *)*((_QWORD *)this + 2);
  v122[24] = (float)((float)((float)((float)(v107 * v11) + (float)(v93 * v10)) + (float)(v98 * v13))
                   + (float)(v101 * v14))
           + v115;
  v122[23] = (float)(v113 + v112) + v116;
  v118 = CVisual::SetColorTransform(v117, (const struct MilColorTransform *)v122);
  v119 = v118;
  if ( v118 >= 0 )
  {
    v120 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2));
    v119 = v120;
    if ( v120 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v120, 0x12Eu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v118, 0x129u);
  }
  return v119;
}
