/*
 * XREFs of SHATransform @ 0x18000EDA0
 * Callers:
 *     A_SHAUpdate @ 0x18000ECD0 (A_SHAUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHATransform(int *a1, unsigned int *a2)
{
  int v2; // r8d
  unsigned int *v3; // rbx
  int v4; // ebp
  int v5; // eax
  int v6; // r10d
  int v7; // r11d
  int v8; // r9d
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // r14d
  int v12; // ecx
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  int v15; // edx
  int v16; // r10d
  int v17; // r8d
  unsigned __int32 v18; // edi
  int v19; // r9d
  int v20; // r10d
  int v21; // eax
  int v22; // r11d
  int v23; // r9d
  int v24; // ecx
  int v25; // r10d
  unsigned __int32 v26; // r14d
  int v27; // r11d
  unsigned __int32 v28; // r15d
  int v29; // edx
  int v30; // ecx
  int v31; // r11d
  unsigned __int32 v32; // r12d
  int v33; // r8d
  int v34; // ecx
  unsigned __int32 v35; // ebp
  int v36; // edx
  int v37; // r9d
  int v38; // ecx
  int v39; // r8d
  unsigned __int32 v40; // r13d
  int v41; // r10d
  int v42; // ecx
  int v43; // r9d
  int v44; // r11d
  int v45; // ecx
  int v46; // r10d
  int v47; // edx
  int v48; // ecx
  int v49; // r11d
  int v50; // r8d
  int v51; // ecx
  int v52; // edx
  int v53; // r9d
  int v54; // ecx
  int v55; // r8d
  int v56; // r10d
  int v57; // ecx
  int v58; // r9d
  int v59; // r11d
  int v60; // ecx
  int v61; // r10d
  int v62; // edx
  int v63; // ecx
  int v64; // r11d
  int v65; // r8d
  int v66; // ecx
  int v67; // edx
  int v68; // r9d
  int v69; // r8d
  unsigned int v70; // r10d
  int v71; // r10d
  unsigned int v72; // r11d
  int v73; // r9d
  unsigned int v74; // ecx
  int v75; // eax
  int v76; // r10d
  int v77; // r11d
  int v78; // edx
  int v79; // ecx
  int v80; // r11d
  int v81; // r8d
  unsigned __int32 v82; // r12d
  int v83; // r8d
  int v84; // edi
  int v85; // ebp
  int v86; // r9d
  int v87; // edx
  int v88; // ecx
  int v89; // r8d
  int v90; // r10d
  int v91; // r13d
  int v92; // ecx
  int v93; // r9d
  int v94; // r11d
  int v95; // ecx
  int v96; // r10d
  int v97; // edx
  int v98; // ecx
  int v99; // r11d
  int v100; // r8d
  int v101; // ecx
  int v102; // edx
  int v103; // r9d
  int v104; // ecx
  int v105; // r8d
  int v106; // r10d
  int v107; // ecx
  int v108; // r9d
  int v109; // r11d
  int v110; // ecx
  int v111; // r10d
  int v112; // edx
  int v113; // ecx
  int v114; // r11d
  int v115; // r8d
  int v116; // r12d
  int v117; // ecx
  int v118; // edx
  int v119; // r9d
  int v120; // r15d
  int v121; // ecx
  int v122; // r8d
  int v123; // r10d
  int v124; // ecx
  int v125; // r9d
  int v126; // r11d
  int v127; // ecx
  int v128; // r10d
  int v129; // edx
  int v130; // ecx
  int v131; // r11d
  int v132; // r8d
  int v133; // r9d
  int v134; // edx
  int v135; // r14d
  int v136; // edi
  int v137; // ecx
  int v138; // r8d
  int v139; // esi
  int v140; // r13d
  int v141; // r10d
  int v142; // ecx
  int v143; // r9d
  int v144; // r11d
  int v145; // r10d
  int v146; // r8d
  int v147; // r14d
  int v148; // r11d
  unsigned int v149; // ecx
  unsigned int v150; // eax
  int v151; // ecx
  int v152; // eax
  int v153; // edi
  int v154; // r9d
  unsigned int v155; // ecx
  unsigned int v156; // eax
  int v157; // r8d
  int v158; // r10d
  unsigned int v159; // ecx
  int v160; // eax
  int v161; // r9d
  int v162; // r11d
  int v163; // r10d
  int v164; // esi
  int v165; // ecx
  int v166; // r11d
  unsigned int v167; // eax
  int v168; // r8d
  unsigned int v169; // ecx
  int v170; // ecx
  unsigned int v171; // eax
  int v172; // r9d
  unsigned int v173; // ecx
  int v174; // r8d
  int v175; // r10d
  unsigned int v176; // ecx
  int v177; // r9d
  int v178; // r11d
  int v179; // ebp
  int v180; // r12d
  int v181; // ecx
  int v182; // r10d
  int v183; // eax
  int v184; // ecx
  int v185; // r11d
  int v186; // esi
  int v187; // edi
  int v188; // r8d
  int v189; // ecx
  unsigned int v190; // eax
  int v191; // r9d
  unsigned int v192; // ecx
  int v193; // r8d
  int v194; // r10d
  int v195; // r12d
  unsigned int v196; // ecx
  int v197; // r9d
  int v198; // r11d
  int v199; // ecx
  int v200; // r10d
  int v201; // eax
  int v202; // edi
  int v203; // ecx
  int v204; // r11d
  int v205; // r8d
  int v206; // ecx
  int v207; // edi
  int v208; // r9d
  int v209; // ecx
  int v210; // r10d
  unsigned int v211; // ecx
  int v212; // r9d
  int v213; // eax
  int v214; // r11d
  unsigned int v215; // ecx
  int v216; // r10d
  int v217; // r8d
  int v218; // ecx
  int v219; // eax
  int v220; // r11d
  int v221; // r8d
  int v222; // edi
  int v223; // edx
  int v224; // eax
  int v225; // r8d
  int v226; // r9d
  int v227; // eax
  int v228; // edx
  int v229; // r10d
  int v230; // eax
  int v231; // r9d
  int v232; // r12d
  int v233; // r11d
  int v234; // eax
  int v235; // r10d
  int v236; // r13d
  int v237; // r8d
  int v238; // eax
  int v239; // r11d
  int v240; // edx
  int v241; // eax
  int v242; // r8d
  int v243; // r9d
  int v244; // eax
  int v245; // edx
  int v246; // r10d
  int v247; // esi
  int v248; // eax
  int v249; // r9d
  int v250; // r11d
  int v251; // ecx
  int v252; // eax
  int v253; // r10d
  int v254; // eax
  int v255; // r11d
  int v256; // edi
  int v257; // r15d
  int v258; // eax
  int v259; // esi
  int v260; // r14d
  unsigned int v261; // r9d
  int v262; // ebp
  int v263; // r14d
  int v264; // edx
  int v265; // edi
  int v266; // eax
  int v267; // esi
  unsigned int v268; // r8d
  int v269; // ebp
  int v270; // eax
  int v271; // r9d
  int v272; // eax
  int v273; // r8d
  int v274; // r11d
  unsigned int v275; // eax
  int v276; // r10d
  int v277; // eax
  int v278; // r11d
  unsigned int v279; // r9d
  unsigned int v280; // eax
  int v281; // r10d
  int v282; // r8d
  int v283; // ecx
  __int64 result; // rax
  int v285; // [rsp+0h] [rbp-88h]
  int v286; // [rsp+0h] [rbp-88h]
  int v287; // [rsp+0h] [rbp-88h]
  int v288; // [rsp+0h] [rbp-88h]
  int v289; // [rsp+0h] [rbp-88h]
  unsigned __int32 v290; // [rsp+4h] [rbp-84h]
  int v291; // [rsp+4h] [rbp-84h]
  int v292; // [rsp+4h] [rbp-84h]
  int v293; // [rsp+4h] [rbp-84h]
  unsigned __int32 v294; // [rsp+8h] [rbp-80h]
  int v295; // [rsp+8h] [rbp-80h]
  int v296; // [rsp+8h] [rbp-80h]
  int v297; // [rsp+8h] [rbp-80h]
  int v298; // [rsp+8h] [rbp-80h]
  int v299; // [rsp+Ch] [rbp-7Ch]
  int v300; // [rsp+Ch] [rbp-7Ch]
  int v301; // [rsp+Ch] [rbp-7Ch]
  int v302; // [rsp+10h] [rbp-78h]
  int v303; // [rsp+10h] [rbp-78h]
  int v304; // [rsp+10h] [rbp-78h]
  int v305; // [rsp+14h] [rbp-74h]
  int v306; // [rsp+14h] [rbp-74h]
  int v307; // [rsp+14h] [rbp-74h]
  int v308; // [rsp+18h] [rbp-70h]
  int v309; // [rsp+18h] [rbp-70h]
  int v310; // [rsp+18h] [rbp-70h]
  unsigned __int32 v311; // [rsp+1Ch] [rbp-6Ch]
  int v312; // [rsp+1Ch] [rbp-6Ch]
  int v313; // [rsp+1Ch] [rbp-6Ch]
  int v314; // [rsp+1Ch] [rbp-6Ch]
  int v315; // [rsp+20h] [rbp-68h]
  int v316; // [rsp+20h] [rbp-68h]
  int v317; // [rsp+20h] [rbp-68h]
  int v318; // [rsp+20h] [rbp-68h]
  unsigned __int32 v319; // [rsp+24h] [rbp-64h]
  int v320; // [rsp+24h] [rbp-64h]
  int v321; // [rsp+24h] [rbp-64h]
  int v322; // [rsp+24h] [rbp-64h]
  unsigned __int32 v323; // [rsp+28h] [rbp-60h]
  int v324; // [rsp+28h] [rbp-60h]
  int v325; // [rsp+28h] [rbp-60h]
  unsigned __int32 v326; // [rsp+2Ch] [rbp-5Ch]
  int v327; // [rsp+2Ch] [rbp-5Ch]
  int v328; // [rsp+2Ch] [rbp-5Ch]
  unsigned __int32 v329; // [rsp+30h] [rbp-58h]
  int v330; // [rsp+30h] [rbp-58h]
  int v331; // [rsp+30h] [rbp-58h]
  int v332; // [rsp+34h] [rbp-54h]
  int v333; // [rsp+34h] [rbp-54h]
  unsigned __int32 v335; // [rsp+98h] [rbp+10h]
  int v336; // [rsp+98h] [rbp+10h]
  int v337; // [rsp+98h] [rbp+10h]
  int v338; // [rsp+98h] [rbp+10h]
  unsigned __int32 v339; // [rsp+A0h] [rbp+18h]
  int v340; // [rsp+A0h] [rbp+18h]
  int v341; // [rsp+A0h] [rbp+18h]
  int v342; // [rsp+A0h] [rbp+18h]
  unsigned __int32 v343; // [rsp+A8h] [rbp+20h]
  int v344; // [rsp+A8h] [rbp+20h]
  int v345; // [rsp+A8h] [rbp+20h]
  int v346; // [rsp+A8h] [rbp+20h]

  v2 = *a1;
  v3 = a2;
  v4 = a1[2];
  v5 = *a1;
  v6 = a1[1];
  v7 = a1[3];
  v8 = a1[4];
  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = v7 ^ v6 & (v4 ^ v7);
  v13 = a2[3];
  v14 = a2[4];
  v15 = __ROL4__(v6, 30);
  v16 = v2 & (v15 ^ v4);
  v17 = __ROL4__(v2, 30);
  v18 = _byteswap_ulong(v9);
  v294 = _byteswap_ulong(v10);
  v19 = v18 + __ROL4__(v5, 5) + v12 + v8 + 1518500249;
  v20 = v7 + 1518500249 + v294 + __ROL4__(v19, 5) + (v4 ^ v16);
  v21 = __ROL4__(v20, 5);
  v22 = v15 ^ v19 & (v17 ^ v15);
  v23 = __ROL4__(v19, 30);
  v24 = v20 & (v17 ^ v23);
  v25 = __ROL4__(v20, 30);
  v26 = _byteswap_ulong(v11);
  v27 = v4 + 1518500249 + v26 + v21 + v22;
  v28 = _byteswap_ulong(v13);
  v29 = v28 + __ROL4__(v27, 5) + (v17 ^ v24) + v15 + 1518500249;
  v30 = v23 ^ v27 & (v25 ^ v23);
  v31 = __ROL4__(v27, 30);
  v32 = _byteswap_ulong(v14);
  v33 = v32 + __ROL4__(v29, 5) + v30 + v17 + 1518500249;
  v34 = v25 ^ v29 & (v31 ^ v25);
  v35 = _byteswap_ulong(v3[5]);
  v36 = __ROL4__(v29, 30);
  v37 = v35 + __ROL4__(v33, 5) + 1518500249 + v34 + v23;
  v38 = v31 ^ v33 & (v36 ^ v31);
  v39 = __ROL4__(v33, 30);
  v40 = _byteswap_ulong(v3[6]);
  v41 = v40 + __ROL4__(v37, 5) + 1518500249 + v38 + v25;
  v42 = v37 & (v39 ^ v36);
  v43 = __ROL4__(v37, 30);
  v290 = _byteswap_ulong(v3[7]);
  v44 = v290 + 1518500249 + __ROL4__(v41, 5) + (v36 ^ v42) + v31;
  v45 = v39 ^ v41 & (v39 ^ v43);
  v46 = __ROL4__(v41, 30);
  v319 = _byteswap_ulong(v3[8]);
  v47 = v319 + 1518500249 + __ROL4__(v44, 5) + v45 + v36;
  v343 = _byteswap_ulong(v3[9]);
  v48 = v43 ^ v44 & (v46 ^ v43);
  v49 = __ROL4__(v44, 30);
  v50 = v343 + 1518500249 + __ROL4__(v47, 5) + v48 + v39;
  v329 = _byteswap_ulong(v3[10]);
  v51 = v46 ^ v47 & (v49 ^ v46);
  v52 = __ROL4__(v47, 30);
  v53 = v329 + 1518500249 + __ROL4__(v50, 5) + v51 + v43;
  v326 = _byteswap_ulong(v3[11]);
  v54 = v49 ^ v50 & (v52 ^ v49);
  v55 = __ROL4__(v50, 30);
  v56 = v326 + 1518500249 + __ROL4__(v53, 5) + v54 + v46;
  v57 = v52 ^ v53 & (v55 ^ v52);
  v58 = __ROL4__(v53, 30);
  v323 = _byteswap_ulong(v3[12]);
  v59 = v323 + 1518500249 + __ROL4__(v56, 5) + v57 + v49;
  v60 = v55 ^ v56 & (v55 ^ v58);
  v61 = __ROL4__(v56, 30);
  v311 = _byteswap_ulong(v3[13]);
  v62 = v311 + 1518500249 + __ROL4__(v59, 5) + v60 + v52;
  v63 = v59 & (v61 ^ v58);
  v64 = __ROL4__(v59, 30);
  v335 = _byteswap_ulong(v3[14]);
  v65 = v335 + 1518500249 + __ROL4__(v62, 5) + (v58 ^ v63) + v55;
  v66 = v61 ^ v62 & (v64 ^ v61);
  v67 = __ROL4__(v62, 30);
  v339 = _byteswap_ulong(v3[15]);
  LODWORD(v3) = v58 + 1518500249 + v66 + __ROL4__(v65, 5) + v339;
  v315 = __ROL4__(v18 ^ v26 ^ v319 ^ v311, 1);
  v68 = v61 + 1518500249 + (v64 ^ v65 & (v67 ^ v64)) + __ROL4__((_DWORD)v3, 5) + v315;
  v69 = __ROL4__(v65, 30);
  v70 = (unsigned int)v3 & (v69 ^ v67);
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v305 = __ROL4__(v294 ^ v28 ^ v343 ^ v335, 1);
  v71 = v64 + 1518500249 + v305 + __ROL4__(v68, 5) + (v67 ^ v70);
  v295 = __ROL4__(v26 ^ v32 ^ v329 ^ v339, 1);
  v72 = v69 ^ v68 & (v69 ^ (unsigned int)v3);
  v73 = __ROL4__(v68, 30);
  v74 = (unsigned int)v3 ^ v71 & (v73 ^ (unsigned int)v3);
  v75 = __ROL4__(v71, 5);
  v76 = __ROL4__(v71, 30);
  v77 = v67 + 1518500249 + v295 + v75 + v72;
  v308 = __ROL4__(v315 ^ v28 ^ v35 ^ v326, 1);
  v78 = v69 + 1518500249 + v74 + __ROL4__(v77, 5) + v308;
  v79 = v77 ^ v76 ^ v73;
  v80 = __ROL4__(v77, 30);
  v81 = v32 ^ v40 ^ v323;
  v82 = v311;
  v285 = __ROL4__(v305 ^ v81, 1);
  v83 = (_DWORD)v3 + 1859775393 + v79 + __ROL4__(v78, 5) + v285;
  v84 = __ROL4__(v295 ^ v35 ^ v290 ^ v311, 1);
  v85 = v285;
  v86 = v84 + __ROL4__(v83, 5) + 1859775393 + (v78 ^ v80 ^ v76) + v73;
  v87 = __ROL4__(v78, 30);
  v88 = v87 ^ v80 ^ v83;
  v89 = __ROL4__(v83, 30);
  v312 = __ROL4__(v308 ^ v40 ^ v319 ^ v335, 1);
  v90 = v312 + __ROL4__(v86, 5) + 1859775393 + v88 + v76;
  v91 = __ROL4__(v285 ^ v290 ^ v343 ^ v339, 1);
  v92 = v86 ^ v89;
  v93 = __ROL4__(v86, 30);
  v94 = v91 + __ROL4__(v90, 5) + 1859775393 + (v87 ^ v92) + v80;
  v95 = v90 ^ v93 ^ v89;
  v299 = __ROL4__(v315 ^ v84 ^ v319 ^ v329, 1);
  v96 = __ROL4__(v90, 30);
  v97 = v299 + 1859775393 + __ROL4__(v94, 5) + v95 + v87;
  v98 = v94 ^ v96 ^ v93;
  v286 = __ROL4__(v305 ^ v312 ^ v343 ^ v326, 1);
  v99 = __ROL4__(v94, 30);
  v100 = v286 + 1859775393 + __ROL4__(v97, 5) + v98 + v89;
  v344 = __ROL4__(v295 ^ v91 ^ v329 ^ v323, 1);
  v101 = v97 ^ v99 ^ v96;
  v102 = __ROL4__(v97, 30);
  v103 = v344 + 1859775393 + __ROL4__(v100, 5) + v101 + v93;
  v104 = v102 ^ v99 ^ v100;
  v302 = __ROL4__(v308 ^ v299 ^ v326 ^ v82, 1);
  v105 = __ROL4__(v100, 30);
  v106 = v302 + 1859775393 + __ROL4__(v103, 5) + v104 + v96;
  v291 = __ROL4__(v85 ^ v286 ^ v323 ^ v335, 1);
  v320 = __ROL4__(v84 ^ v344 ^ v82 ^ v339, 1);
  v107 = v102 ^ v103 ^ v105;
  v108 = __ROL4__(v103, 30);
  v109 = v291 + __ROL4__(v106, 5) + 1859775393 + v107 + v99;
  v110 = v106 ^ v108 ^ v105;
  v111 = __ROL4__(v106, 30);
  v112 = v320 + __ROL4__(v109, 5) + 1859775393 + v110 + v102;
  v113 = v109 ^ v111 ^ v108;
  v336 = __ROL4__(v315 ^ v312 ^ v302 ^ v335, 1);
  v114 = __ROL4__(v109, 30);
  v115 = v336 + 1859775393 + __ROL4__(v112, 5) + v113 + v105;
  v340 = __ROL4__(v305 ^ v91 ^ v291 ^ v339, 1);
  v116 = v286;
  v117 = v112 ^ v114 ^ v111;
  v118 = __ROL4__(v112, 30);
  v119 = v340 + __ROL4__(v115, 5) + 1859775393 + v117 + v108;
  v120 = v295;
  v121 = v114 ^ v115;
  v122 = __ROL4__(v115, 30);
  v296 = __ROL4__(v315 ^ v295 ^ v299 ^ v320, 1);
  v123 = v296 + __ROL4__(v119, 5) + 1859775393 + (v118 ^ v121) + v111;
  v124 = v118 ^ v119 ^ v122;
  v287 = __ROL4__(v305 ^ v308 ^ v286 ^ v336, 1);
  v125 = __ROL4__(v119, 30);
  v126 = v287 + 1859775393 + __ROL4__(v123, 5) + v124 + v114;
  v332 = __ROL4__(v120 ^ v85 ^ v344 ^ v340, 1);
  v127 = v123 ^ v125 ^ v122;
  v128 = __ROL4__(v123, 30);
  v129 = v332 + __ROL4__(v126, 5) + 1859775393 + v127 + v118;
  v130 = v126 ^ v128 ^ v125;
  v316 = __ROL4__(v308 ^ v84 ^ v302 ^ v296, 1);
  v131 = __ROL4__(v126, 30);
  v132 = v316 + __ROL4__(v129, 5) + 1859775393 + v130 + v122;
  v306 = __ROL4__(v85 ^ v312 ^ v291 ^ v287, 1);
  v133 = v306 + 1859775393 + __ROL4__(v132, 5) + (v129 ^ v131 ^ v128) + v125;
  v134 = __ROL4__(v129, 30);
  v327 = __ROL4__(v312 ^ v299 ^ v336 ^ v316, 1);
  v135 = v84 ^ v91 ^ v320 ^ v332;
  v136 = v344;
  v137 = v134 ^ v131 ^ v132;
  v138 = __ROL4__(v132, 30);
  v139 = v91 ^ v116 ^ v340 ^ v306;
  v140 = v296;
  v324 = __ROL4__(v135, 1);
  v330 = __ROL4__(v139, 1);
  v141 = v324 + __ROL4__(v133, 5) + 1859775393 + v137 + v128;
  v142 = v134 ^ v133 ^ v138;
  v143 = __ROL4__(v133, 30);
  v144 = v327 + 1859775393 + __ROL4__(v141, 5) + v142 + v131;
  LODWORD(v3) = v141 ^ v143 ^ v138;
  v145 = __ROL4__(v141, 30);
  LODWORD(v3) = v134 + 1859775393 + v330 + __ROL4__(v144, 5) + (_DWORD)v3;
  v309 = __ROL4__(v299 ^ v344 ^ v296 ^ v324, 1);
  v146 = v138 + v309 + (v144 & v145 | v143 & (v144 | v145)) + __ROL4__((_DWORD)v3, 5) - 1894007588;
  v147 = v287;
  v148 = __ROL4__(v144, 30);
  v149 = v145 & ((unsigned int)v3 | v148);
  v345 = __ROL4__(v116 ^ v302 ^ v287 ^ v327, 1);
  v150 = (unsigned int)v3 & v148;
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v151 = v150 | v149;
  v152 = v136 ^ v291 ^ v332 ^ v330;
  v153 = v316;
  v154 = v143 + v345 + v151 + __ROL4__(v146, 5) - 1894007588;
  v300 = __ROL4__(v152, 1);
  v155 = v148 & ((unsigned int)v3 | v146);
  v156 = (unsigned int)v3 & v146;
  v157 = __ROL4__(v146, 30);
  v288 = __ROL4__(v302 ^ v320 ^ v316 ^ v309, 1);
  v158 = v145 + v300 + (v156 | v155) + __ROL4__(v154, 5) - 1894007588;
  v159 = (unsigned int)v3 & (v154 | v157);
  v160 = v154 & v157;
  v161 = __ROL4__(v154, 30);
  v162 = v148 + v288 + (v160 | v159) + __ROL4__(v158, 5) - 1894007588;
  v303 = __ROL4__(v291 ^ v336 ^ v306 ^ v345, 1);
  LODWORD(v3) = (_DWORD)v3 + v303 + (v158 & v161 | v157 & (v158 | v161)) + __ROL4__(v162, 5) - 1894007588;
  v163 = __ROL4__(v158, 30);
  v164 = __ROL4__(v320 ^ v340 ^ v324 ^ v300, 1);
  v165 = v164 + (v162 & v163 | v161 & (v162 | v163));
  v166 = __ROL4__(v162, 30);
  v321 = v164;
  v167 = (unsigned int)v3 & v166;
  v297 = __ROL4__(v336 ^ v296 ^ v327 ^ v288, 1);
  v292 = __ROL4__(v340 ^ v147 ^ v330 ^ v303, 1);
  v168 = v157 + v165 + __ROL4__((_DWORD)v3, 5) - 1894007588;
  v313 = __ROL4__(v140 ^ v332 ^ v309 ^ v164, 1);
  v169 = v163 & ((unsigned int)v3 | v166);
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v170 = v297 + (v167 | v169);
  v171 = (unsigned int)v3 & v168;
  v172 = v161 + v170 + __ROL4__(v168, 5) - 1894007588;
  v173 = (unsigned int)v3 | v168;
  v174 = __ROL4__(v168, 30);
  v175 = v163 + v292 + (v171 | v166 & v173) + __ROL4__(v172, 5) - 1894007588;
  v176 = v172 & v174 | (unsigned int)v3 & (v172 | v174);
  v177 = __ROL4__(v172, 30);
  v178 = v166 + v313 + v176 + __ROL4__(v175, 5) - 1894007588;
  v317 = __ROL4__(v147 ^ v316 ^ v345 ^ v297, 1);
  v179 = v306;
  v180 = v324;
  v181 = v317 + (v175 & v177 | v174 & (v175 | v177));
  v182 = __ROL4__(v175, 30);
  v307 = __ROL4__(v332 ^ v306 ^ v300 ^ v292, 1);
  LODWORD(v3) = (_DWORD)v3 + v181 + __ROL4__(v178, 5) - 1894007588;
  v183 = v178 & v182;
  v184 = v177 & (v178 | v182);
  v185 = __ROL4__(v178, 30);
  v186 = v153 ^ v324 ^ v288 ^ v313;
  v187 = v327;
  v325 = __ROL4__(v186, 1);
  v188 = v174 + v307 + (v183 | v184) + __ROL4__((_DWORD)v3, 5) - 1894007588;
  v328 = __ROL4__(v179 ^ v327 ^ v303 ^ v317, 1);
  v189 = v325 + ((unsigned int)v3 & v185 | v182 & ((unsigned int)v3 | v185));
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v190 = (unsigned int)v3 & v188;
  v191 = v177 + v189 + __ROL4__(v188, 5) - 1894007588;
  v192 = (unsigned int)v3 | v188;
  v193 = __ROL4__(v188, 30);
  v337 = __ROL4__(v180 ^ v330 ^ v321 ^ v307, 1);
  v194 = v182 + v328 + (v190 | v185 & v192) + __ROL4__(v191, 5) - 1894007588;
  v195 = v309;
  v196 = v191 & v193 | (unsigned int)v3 & (v191 | v193);
  v197 = __ROL4__(v191, 30);
  v198 = __ROL4__(v194, 5) + v337 - 1894007588 + v196 + v185;
  v199 = v194 & v197 | v193 & (v194 | v197);
  v200 = __ROL4__(v194, 30);
  v201 = v198 & v200;
  v341 = __ROL4__(v187 ^ v309 ^ v297 ^ v325, 1);
  v202 = (_DWORD)v3 - 1894007588 + v341 + v199 + __ROL4__(v198, 5);
  v203 = v197 & (v198 | v200);
  v204 = __ROL4__(v198, 30);
  v310 = __ROL4__(v330 ^ v345 ^ v292 ^ v328, 1);
  LODWORD(v3) = v193 - 1894007588 + v310 + (v201 | v203) + __ROL4__(v202, 5);
  v205 = __ROL4__(v195 ^ v300 ^ v313 ^ v337, 1);
  v206 = v205 + (v202 & v204 | v200 & (v202 | v204));
  v207 = __ROL4__(v202, 30);
  v331 = v205;
  v333 = __ROL4__(v345 ^ v288 ^ v317 ^ v341, 1);
  v208 = v197 + v206 + __ROL4__((_DWORD)v3, 5) - 1894007588;
  v209 = v200 + v333 + (v207 & (unsigned int)v3 | v204 & (v207 | (unsigned int)v3));
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v210 = v209 + __ROL4__(v208, 5) - 1894007588;
  v211 = v208 & (unsigned int)v3 | v207 & (v208 | (unsigned int)v3);
  v212 = __ROL4__(v208, 30);
  v213 = v210 & v212;
  v289 = __ROL4__(v205 ^ v288 ^ v321 ^ v325, 1);
  v346 = __ROL4__(v310 ^ v300 ^ v303 ^ v307, 1);
  v304 = __ROL4__(v333 ^ v303 ^ v297 ^ v328, 1);
  v214 = v204 + v346 + v211 + __ROL4__(v210, 5) - 1894007588;
  v215 = (unsigned int)v3 & (v210 | v212);
  v216 = __ROL4__(v210, 30);
  v217 = __ROL4__(v214, 5);
  v218 = v207 + v289 + (v213 | v215) - 1894007588;
  v219 = (_DWORD)v3 - 899497514 + v304 + (v214 ^ v216 ^ v212);
  v220 = __ROL4__(v214, 30);
  v221 = v218 + v217;
  v222 = v297 ^ v313 ^ v341;
  v223 = v219 + __ROL4__(v221, 5);
  v298 = __ROL4__(v346 ^ v321 ^ v292 ^ v337, 1);
  v224 = v298 + (v221 ^ v220 ^ v216);
  v225 = __ROL4__(v221, 30);
  v226 = v212 + v224 + __ROL4__(v223, 5) - 899497514;
  v322 = __ROL4__(v289 ^ v222, 1);
  v227 = v225 ^ v220 ^ v223;
  v228 = __ROL4__(v223, 30);
  v229 = v216 + v322 + v227 + __ROL4__(v226, 5) - 899497514;
  v293 = __ROL4__(v310 ^ v304 ^ v292 ^ v317, 1);
  v230 = v220 + v293 + (v225 ^ v226 ^ v228);
  v231 = __ROL4__(v226, 30);
  v301 = __ROL4__(v331 ^ v298 ^ v313 ^ v307, 1);
  v232 = __ROL4__(v346 ^ v293 ^ v307 ^ v328, 1);
  v233 = v230 + __ROL4__(v229, 5) - 899497514;
  v318 = __ROL4__(v333 ^ v322 ^ v317 ^ v325, 1);
  v234 = v301 + (v229 ^ v231 ^ v228);
  v235 = __ROL4__(v229, 30);
  v236 = __ROL4__(v289 ^ v301 ^ v325 ^ v337, 1);
  v237 = v225 + v234 + __ROL4__(v233, 5) - 899497514;
  v238 = v318 + (v233 ^ v235 ^ v231);
  v239 = __ROL4__(v233, 30);
  v240 = v228 + v238 + __ROL4__(v237, 5) - 899497514;
  v241 = v232 + (v237 ^ v239 ^ v235);
  v242 = __ROL4__(v237, 30);
  v243 = v231 + v241 + __ROL4__(v240, 5) - 899497514;
  v244 = v236 + (v242 ^ v239 ^ v240);
  v245 = __ROL4__(v240, 30);
  v246 = v235 + v244 + __ROL4__(v243, 5) - 899497514;
  v247 = __ROL4__(v304 ^ v318 ^ v328 ^ v341, 1);
  v248 = v242 ^ v243 ^ v245;
  v249 = __ROL4__(v243, 30);
  v342 = __ROL4__(v331 ^ v322 ^ v236 ^ v341, 1);
  v338 = __ROL4__(v310 ^ v298 ^ v232 ^ v337, 1);
  v314 = v247;
  v250 = v239 + v247 + v248 + __ROL4__(v246, 5) - 899497514;
  v251 = __ROL4__(v250, 5);
  v252 = (v246 ^ v249 ^ v245) - 899497514;
  v253 = __ROL4__(v246, 30);
  LODWORD(v3) = v252 + v338;
  v254 = v342 - 899497514 + (v250 ^ v253 ^ v249);
  v255 = __ROL4__(v250, 30);
  LODWORD(v3) = v251 + v242 + (_DWORD)v3;
  v256 = v245 + v254 + __ROL4__((_DWORD)v3, 5);
  v257 = __ROL4__(v310 ^ v333 ^ v293 ^ v247, 1);
  v258 = v257 + ((unsigned int)v3 ^ v255 ^ v253);
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v259 = v249 - 899497514 + v258 + __ROL4__(v256, 5);
  v260 = __ROL4__(v331 ^ v346 ^ v301 ^ v338, 1);
  v261 = v253 + v260 + ((unsigned int)v3 ^ v255 ^ v256) - 899497514 + __ROL4__(v259, 5);
  v262 = __ROL4__(v333 ^ v289 ^ v318 ^ v342, 1);
  v263 = __ROL4__(v289 ^ v298 ^ v236 ^ v260, 1);
  v264 = __ROL4__(v346 ^ v304 ^ v232 ^ v257, 1);
  v265 = __ROL4__(v256, 30);
  v266 = v259 ^ v265;
  v267 = __ROL4__(v259, 30);
  v268 = v255 - 899497514 + v262 + ((unsigned int)v3 ^ v266) + __ROL4__(v261, 5);
  v269 = __ROL4__(v304 ^ v322 ^ v314 ^ v262, 1);
  v270 = v261 ^ v267 ^ v265;
  v271 = __ROL4__(v261, 30);
  LODWORD(v3) = __ROL4__(v268, 5) + v264 + v270 - 899497514 + (_DWORD)v3;
  v272 = v268 ^ v271 ^ v267;
  v273 = __ROL4__(v268, 30);
  v274 = v265 + v263 + v272 - 899497514 + __ROL4__((_DWORD)v3, 5);
  v275 = (unsigned int)v3 ^ v273 ^ v271;
  LODWORD(v3) = __ROL4__((_DWORD)v3, 30);
  v276 = v267 + v269 + v275 - 899497514 + __ROL4__(v274, 5);
  v277 = v273 ^ v274;
  v278 = __ROL4__(v274, 30);
  v279 = v271 + ((unsigned int)v3 ^ v277) + __ROL4__(v276, 5) + __ROL4__(v298 ^ v293 ^ v338 ^ v264, 1) - 899497514;
  v280 = (unsigned int)v3 ^ v276 ^ v278;
  v281 = __ROL4__(v276, 30);
  v282 = v273 + v280 + __ROL4__(v279, 5) + __ROL4__(v322 ^ v301 ^ v342 ^ v263, 1) - 899497514;
  v283 = *a1 + (v279 ^ v281 ^ v278);
  a1[1] += v282;
  result = (unsigned int)(v283 + __ROL4__(v282, 5) + __ROL4__(v293 ^ v318 ^ v257 ^ v269, 1) + (_DWORD)v3 - 899497514);
  a1[2] += __ROL4__(v279, 30);
  a1[3] += v281;
  a1[4] += v278;
  *a1 = result;
  return result;
}
