/*
 * XREFs of sub_140403790 @ 0x140403790
 * Callers:
 *     sub_140404980 @ 0x140404980 (sub_140404980.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140403790(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // r13d
  int v5; // r10d
  int v6; // ebx
  int v7; // esi
  int v8; // r9d
  unsigned int *v9; // rbp
  int v10; // eax
  int v11; // edx
  int v12; // r10d
  int v13; // r8d
  int v14; // r13d
  unsigned __int32 v15; // edi
  int v16; // r11d
  int v17; // edx
  int v18; // eax
  int v19; // r9d
  int v20; // edx
  unsigned __int32 v21; // r14d
  unsigned __int32 v22; // r8d
  int v23; // ecx
  int v24; // eax
  int v25; // r8d
  unsigned __int32 v26; // r15d
  int v27; // r9d
  unsigned __int32 v28; // r12d
  int v29; // r10d
  int v30; // ecx
  int v31; // r9d
  unsigned __int32 v32; // r13d
  int v33; // r11d
  int v34; // edx
  int v35; // r10d
  int v36; // ecx
  int v37; // r11d
  int v38; // r8d
  int v39; // ecx
  int v40; // edx
  int v41; // r9d
  int v42; // ecx
  int v43; // r8d
  int v44; // r10d
  int v45; // ecx
  int v46; // r9d
  int v47; // r11d
  int v48; // ecx
  int v49; // r10d
  int v50; // edx
  int v51; // r8d
  int v52; // r11d
  int v53; // ecx
  int v54; // edx
  int v55; // r9d
  int v56; // ecx
  int v57; // r8d
  int v58; // r10d
  int v59; // ecx
  int v60; // r9d
  int v61; // ebx
  int v62; // ecx
  int v63; // r10d
  int v64; // ebp
  int v65; // ecx
  int v66; // ebx
  int v67; // esi
  int v68; // r8d
  int v69; // edi
  unsigned __int32 v70; // r9d
  int v71; // eax
  int v72; // edx
  unsigned __int32 v73; // r15d
  int v74; // r8d
  int v75; // r13d
  int v76; // ecx
  int v77; // ebp
  int v78; // edi
  int v79; // r11d
  int v80; // esi
  int v81; // eax
  int v82; // ecx
  int v83; // edi
  int v84; // edx
  int v85; // r11d
  unsigned __int32 v86; // r12d
  int v87; // edx
  int v88; // ecx
  int v89; // r11d
  int v90; // r8d
  int v91; // r9d
  unsigned __int32 v92; // ebx
  unsigned __int32 v93; // ebp
  int v94; // edx
  int v95; // ecx
  int v96; // r8d
  int v97; // r10d
  int v98; // ecx
  int v99; // r9d
  int v100; // r11d
  int v101; // ecx
  int v102; // r10d
  int v103; // edi
  int v104; // edx
  int v105; // ecx
  int v106; // r11d
  int v107; // r8d
  int v108; // esi
  int v109; // r9d
  int v110; // r14d
  int v111; // edx
  int v112; // ecx
  int v113; // r8d
  int v114; // r10d
  int v115; // ecx
  int v116; // r9d
  unsigned __int32 v117; // ebx
  int v118; // r11d
  int v119; // ecx
  int v120; // r10d
  int v121; // edx
  int v122; // ecx
  int v123; // r11d
  int v124; // r8d
  int v125; // ecx
  int v126; // edx
  int v127; // r9d
  int v128; // ecx
  int v129; // r8d
  int v130; // r10d
  int v131; // r11d
  int v132; // r9d
  int v133; // r15d
  int v134; // edi
  int v135; // ecx
  int v136; // r14d
  int v137; // r10d
  int v138; // edx
  int v139; // ecx
  int v140; // r11d
  int v141; // r8d
  int v142; // r12d
  int v143; // r9d
  int v144; // edx
  int v145; // ecx
  int v146; // r8d
  int v147; // r12d
  int v148; // r10d
  int v149; // ecx
  int v150; // r9d
  int v151; // r11d
  int v152; // ecx
  int v153; // r10d
  int v154; // ebx
  int v155; // ecx
  int v156; // r11d
  int v157; // r8d
  int v158; // ecx
  int v159; // ebx
  int v160; // eax
  int v161; // r9d
  int v162; // ecx
  int v163; // r8d
  int v164; // r10d
  int v165; // ecx
  int v166; // r9d
  int v167; // r11d
  int v168; // ecx
  int v169; // r10d
  int v170; // ebx
  int v171; // r8d
  int v172; // r11d
  int v173; // r9d
  int v174; // eax
  int v175; // ebx
  int v176; // ecx
  int v177; // r8d
  int v178; // r10d
  int v179; // ecx
  int v180; // eax
  int v181; // r9d
  int v182; // r11d
  int v183; // ecx
  int v184; // r10d
  int v185; // ebx
  int v186; // ecx
  int v187; // r11d
  int v188; // edi
  int v189; // ecx
  int v190; // ebx
  int v191; // r9d
  int v192; // eax
  int v193; // ecx
  int v194; // edi
  int v195; // esi
  int v196; // ecx
  int v197; // r9d
  int v198; // ebp
  int v199; // r8d
  int v200; // esi
  int v201; // ebx
  int v202; // edi
  int v203; // ecx
  int v204; // ebp
  int v205; // ebx
  int v206; // r10d
  int v207; // r8d
  int v208; // eax
  int v209; // ecx
  int v210; // ebx
  int v211; // r11d
  int v212; // r9d
  int v213; // r10d
  int v214; // ecx
  int v215; // r11d
  int v216; // r8d
  int v217; // eax
  int v218; // r9d
  int v219; // edx
  int v220; // eax
  int v221; // r8d
  int v222; // r10d
  int v223; // eax
  int v224; // edx
  int v225; // r11d
  int v226; // ebp
  int v227; // r9d
  int v228; // r10d
  int v229; // eax
  int v230; // r11d
  int v231; // ebx
  int v232; // r8d
  int v233; // r12d
  int v234; // r13d
  int v235; // eax
  int v236; // r9d
  int v237; // edx
  int v238; // eax
  int v239; // r8d
  int v240; // r10d
  int v241; // eax
  int v242; // edx
  int v243; // r11d
  int v244; // r9d
  int v245; // r14d
  int v246; // r10d
  int v247; // ebp
  int v248; // eax
  int v249; // r11d
  int v250; // r15d
  int v251; // r14d
  int v252; // edi
  int v253; // eax
  int v254; // r9d
  int v255; // esi
  int v256; // r8d
  int v257; // edi
  int v258; // eax
  int v259; // esi
  int v260; // edx
  int v261; // ebx
  int v262; // eax
  int v263; // r8d
  int v264; // r11d
  int v265; // r10d
  int v266; // ebx
  int v267; // r12d
  int v268; // eax
  int v269; // r13d
  int v270; // r11d
  int v271; // r12d
  int v272; // r9d
  int v273; // esi
  int v274; // eax
  int v275; // r10d
  int v276; // r8d
  int v277; // eax
  int v278; // r9d
  int v279; // ebx
  int v280; // eax
  int v281; // r8d
  int v282; // edx
  int v283; // eax
  bool v284; // zf
  int v286; // [rsp+0h] [rbp-F8h]
  int v287; // [rsp+0h] [rbp-F8h]
  int v288; // [rsp+0h] [rbp-F8h]
  int v289; // [rsp+4h] [rbp-F4h]
  int v290; // [rsp+4h] [rbp-F4h]
  int v291; // [rsp+4h] [rbp-F4h]
  int v292; // [rsp+4h] [rbp-F4h]
  unsigned __int32 v293; // [rsp+8h] [rbp-F0h]
  int v294; // [rsp+8h] [rbp-F0h]
  int v295; // [rsp+8h] [rbp-F0h]
  int v296; // [rsp+8h] [rbp-F0h]
  unsigned __int32 v297; // [rsp+Ch] [rbp-ECh]
  int v298; // [rsp+Ch] [rbp-ECh]
  int v299; // [rsp+Ch] [rbp-ECh]
  int v300; // [rsp+Ch] [rbp-ECh]
  unsigned __int32 v301; // [rsp+10h] [rbp-E8h]
  int v302; // [rsp+10h] [rbp-E8h]
  int v303; // [rsp+10h] [rbp-E8h]
  int v304; // [rsp+10h] [rbp-E8h]
  int v305; // [rsp+10h] [rbp-E8h]
  unsigned __int32 v306; // [rsp+14h] [rbp-E4h]
  int v307; // [rsp+14h] [rbp-E4h]
  int v308; // [rsp+14h] [rbp-E4h]
  int v309; // [rsp+14h] [rbp-E4h]
  unsigned __int32 v310; // [rsp+18h] [rbp-E0h]
  int v311; // [rsp+18h] [rbp-E0h]
  int v312; // [rsp+18h] [rbp-E0h]
  unsigned __int32 v313; // [rsp+1Ch] [rbp-DCh]
  int v314; // [rsp+1Ch] [rbp-DCh]
  int v315; // [rsp+1Ch] [rbp-DCh]
  int v316; // [rsp+1Ch] [rbp-DCh]
  int v317; // [rsp+20h] [rbp-D8h]
  int v318; // [rsp+20h] [rbp-D8h]
  int v319; // [rsp+20h] [rbp-D8h]
  int v320; // [rsp+20h] [rbp-D8h]
  unsigned __int32 v321; // [rsp+24h] [rbp-D4h]
  int v322; // [rsp+24h] [rbp-D4h]
  int v323; // [rsp+24h] [rbp-D4h]
  int v324; // [rsp+24h] [rbp-D4h]
  unsigned __int32 v325; // [rsp+28h] [rbp-D0h]
  int v326; // [rsp+28h] [rbp-D0h]
  int v327; // [rsp+28h] [rbp-D0h]
  int v328; // [rsp+28h] [rbp-D0h]
  int v329; // [rsp+28h] [rbp-D0h]
  unsigned __int32 v330; // [rsp+2Ch] [rbp-CCh]
  int v331; // [rsp+2Ch] [rbp-CCh]
  int v332; // [rsp+2Ch] [rbp-CCh]
  unsigned __int32 v333; // [rsp+30h] [rbp-C8h]
  int v334; // [rsp+30h] [rbp-C8h]
  int v335; // [rsp+30h] [rbp-C8h]
  unsigned __int32 v336; // [rsp+34h] [rbp-C4h]
  int v337; // [rsp+34h] [rbp-C4h]
  int v338; // [rsp+38h] [rbp-C0h]
  int v339; // [rsp+3Ch] [rbp-BCh]
  int v340; // [rsp+3Ch] [rbp-BCh]
  int v341; // [rsp+40h] [rbp-B8h]
  int v342; // [rsp+40h] [rbp-B8h]
  int v343; // [rsp+44h] [rbp-B4h]
  int v344; // [rsp+48h] [rbp-B0h]
  int v345; // [rsp+4Ch] [rbp-ACh]
  int v346; // [rsp+50h] [rbp-A8h]
  int v347; // [rsp+54h] [rbp-A4h]
  __int64 v348; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v349; // [rsp+60h] [rbp-98h]
  unsigned __int64 v351; // [rsp+70h] [rbp-88h]

  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[3];
  v8 = a1[4];
  if ( a3 >= 0x40 )
  {
    v343 = a1[1];
    v9 = (unsigned int *)(a2 + 8);
    v349 = a3 >> 6;
    v344 = a1[2];
    v345 = a1[3];
    v351 = -64LL * (a3 >> 6) + a3;
    v346 = a1[4];
    v348 = a2 + 8;
    do
    {
      v10 = __ROL4__(v4, 5);
      v11 = v5 & (v6 ^ v7);
      v12 = __ROR4__(v5, 2);
      v13 = v4 & (v12 ^ v6);
      v14 = __ROR4__(v4, 2);
      v15 = _byteswap_ulong(*(v9 - 2));
      v16 = v14 + 1518500249;
      v17 = v8 + 1518500249 + v15 + v10 + (v7 ^ v11);
      v18 = __ROL4__(v17, 5);
      v19 = v17 & (v14 ^ v12);
      v20 = __ROR4__(v17, 2);
      v21 = _byteswap_ulong(*(v9 - 1));
      v22 = v7 + v21 + v18 + 1518500249 + (v6 ^ v13);
      v23 = v14 ^ v22 & (v14 ^ v20);
      v24 = __ROL4__(v22, 5);
      v25 = __ROR4__(v22, 2);
      v26 = _byteswap_ulong(*v9);
      v27 = v6 + 1518500249 + v26 + v24 + (v12 ^ v19);
      v28 = _byteswap_ulong(v9[1]);
      v333 = _byteswap_ulong(v9[3]);
      v29 = v28 + __ROL4__(v27, 5) + 1518500249 + v23 + v12;
      v30 = v20 ^ v27 & (v25 ^ v20);
      v31 = __ROR4__(v27, 2);
      v32 = _byteswap_ulong(v9[2]);
      v33 = v32 + __ROL4__(v29, 5) + v30 + v16;
      v34 = v333 + __ROL4__(v33, 5) + 1518500249 + (v25 ^ v29 & (v31 ^ v25)) + v20;
      v35 = __ROR4__(v29, 2);
      v36 = v31 ^ v33 & (v35 ^ v31);
      v37 = __ROR4__(v33, 2);
      v325 = _byteswap_ulong(v9[4]);
      v38 = v325 + __ROL4__(v34, 5) + 1518500249 + v36 + v25;
      v39 = v35 ^ v34 & (v37 ^ v35);
      v40 = __ROR4__(v34, 2);
      v306 = _byteswap_ulong(v9[5]);
      v41 = v306 + __ROL4__(v38, 5) + 1518500249 + v39 + v31;
      v42 = v37 ^ v38 & (v37 ^ v40);
      v43 = __ROR4__(v38, 2);
      v321 = _byteswap_ulong(v9[7]);
      v293 = _byteswap_ulong(v9[6]);
      v44 = v293 + __ROL4__(v41, 5) + 1518500249 + v42 + v35;
      v45 = v41 & (v43 ^ v40);
      v46 = __ROR4__(v41, 2);
      v47 = v321 + 1518500249 + __ROL4__(v44, 5) + (v40 ^ v45) + v37;
      v48 = v43 ^ v44 & (v46 ^ v43);
      v49 = __ROR4__(v44, 2);
      v336 = _byteswap_ulong(v9[8]);
      v50 = v336 + __ROL4__(v47, 5) + 1518500249 + v48 + v40;
      v310 = _byteswap_ulong(v9[9]);
      v51 = v310 + __ROL4__(v50, 5) + 1518500249 + (v46 ^ v47 & (v49 ^ v46)) + v43;
      v52 = __ROR4__(v47, 2);
      v313 = _byteswap_ulong(v9[10]);
      v53 = v313 + __ROL4__(v51, 5) + 1518500249 + (v49 ^ v50 & (v52 ^ v49));
      v54 = __ROR4__(v50, 2);
      v55 = v53 + v46;
      v56 = v52 ^ v51 & (v52 ^ v54);
      v57 = __ROR4__(v51, 2);
      v330 = _byteswap_ulong(v9[11]);
      v58 = v330 + __ROL4__(v55, 5) + 1518500249 + v56 + v49;
      v59 = v54 ^ v55 & (v57 ^ v54);
      v60 = __ROR4__(v55, 2);
      v301 = _byteswap_ulong(v9[12]);
      v61 = v301 + __ROL4__(v58, 5) + v59 + v52 + 1518500249;
      v62 = v57 ^ v58 & (v60 ^ v57);
      v63 = __ROR4__(v58, 2);
      v297 = _byteswap_ulong(v9[13]);
      v64 = v297 + __ROL4__(v61, 5) + v62 + v54 + 1518500249;
      v65 = v60 ^ v61 & (v63 ^ v60);
      v66 = __ROR4__(v61, 2);
      v286 = __ROL4__(v293 ^ v330 ^ v15 ^ v26, 1);
      v67 = v286 + __ROL4__(v64, 5) + v65 + v57 + 1518500249;
      v68 = __ROL4__(v28 ^ v21 ^ v301 ^ v321, 1);
      v69 = v60 + 1518500249;
      v70 = v333;
      v71 = v68 + __ROL4__(v67, 5);
      v289 = v68;
      v72 = v26 ^ v32;
      v73 = v313;
      v74 = v32 ^ v313 ^ v325 ^ v68;
      v75 = __ROL4__(v336 ^ v297 ^ v72, 1);
      v76 = v63 ^ v64 & (v66 ^ v63);
      v77 = __ROR4__(v64, 2);
      v334 = __ROL4__(v74, 1);
      v78 = v71 + v76 + v69;
      v79 = v66 ^ v67 & (v66 ^ v77);
      v80 = __ROR4__(v67, 2);
      v81 = v75 + __ROL4__(v78, 5) + 1518500249;
      v82 = v77 ^ v78 & (v80 ^ v77);
      v83 = __ROR4__(v78, 2);
      v84 = v28 ^ v70 ^ v286 ^ v310;
      v85 = v63 + v81 + v79;
      v86 = v330;
      v317 = __ROL4__(v84, 1);
      v87 = v66 + v82 + 1518500249 + __ROL4__(v85, 5) + v317;
      v88 = v85 ^ v83 ^ v80;
      v89 = __ROR4__(v85, 2);
      v90 = v334 + __ROL4__(v87, 5) + v88 + v77 + 1859775393;
      v331 = __ROL4__(v330 ^ v70 ^ v306 ^ v75, 1);
      v91 = v80 + v331 + 1859775393 + __ROL4__(v90, 5) + (v87 ^ v89 ^ v83);
      v92 = v321;
      v93 = v301;
      v326 = __ROL4__(v293 ^ v301 ^ v325 ^ v317, 1);
      v322 = __ROL4__(v297 ^ v321 ^ v306 ^ v334, 1);
      v94 = __ROR4__(v87, 2);
      v95 = v94 ^ v89 ^ v90;
      v96 = __ROR4__(v90, 2);
      v97 = v326 + __ROL4__(v91, 5) + v95 + v83 + 1859775393;
      v98 = v94 ^ v91 ^ v96;
      v99 = __ROR4__(v91, 2);
      v100 = v322 + 1859775393 + __ROL4__(v97, 5) + v98 + v89;
      v302 = __ROL4__(v336 ^ v293 ^ v331 ^ v286, 1);
      v101 = v97 ^ v99 ^ v96;
      v102 = __ROR4__(v97, 2);
      v103 = v289;
      v104 = v302 + 1859775393 + __ROL4__(v100, 5) + v101 + v94;
      v314 = __ROL4__(v326 ^ v92 ^ v289 ^ v310, 1);
      v105 = v100 ^ v102 ^ v99;
      v106 = __ROR4__(v100, 2);
      v107 = v314 + 1859775393 + __ROL4__(v104, 5) + v105 + v96;
      v108 = __ROL4__(v336 ^ v322 ^ v73 ^ v75, 1);
      v109 = v108 + __ROL4__(v107, 5) + 1859775393 + (v104 ^ v106 ^ v102) + v99;
      v110 = v317;
      v111 = __ROR4__(v104, 2);
      v112 = v111 ^ v106 ^ v107;
      v113 = __ROR4__(v107, 2);
      v311 = __ROL4__(v86 ^ v302 ^ v317 ^ v310, 1);
      v114 = v311 + 1859775393 + __ROL4__(v109, 5) + v112 + v102;
      v115 = v111 ^ v109 ^ v113;
      v307 = __ROL4__(v314 ^ v93 ^ v73 ^ v334, 1);
      v116 = __ROR4__(v109, 2);
      v117 = v297;
      v118 = v307 + 1859775393 + __ROL4__(v114, 5) + v115 + v106;
      v119 = v114 ^ v116 ^ v113;
      v298 = __ROL4__(v297 ^ v108 ^ v86 ^ v331, 1);
      v120 = __ROR4__(v114, 2);
      v121 = v298 + __ROL4__(v118, 5) + 1859775393 + v119 + v111;
      v122 = v118 ^ v120 ^ v116;
      v290 = __ROL4__(v311 ^ v93 ^ v326 ^ v286, 1);
      v123 = __ROR4__(v118, 2);
      v124 = v290 + 1859775393 + __ROL4__(v121, 5) + v122 + v113;
      v294 = __ROL4__(v117 ^ v307 ^ v322 ^ v103, 1);
      v125 = v121 ^ v123 ^ v120;
      v126 = __ROR4__(v121, 2);
      v127 = v294 + 1859775393 + __ROL4__(v124, 5) + v125 + v116;
      v128 = v126 ^ v123 ^ v124;
      v287 = __ROL4__(v298 ^ v302 ^ v75 ^ v286, 1);
      v129 = __ROR4__(v124, 2);
      v130 = v287 + 1859775393 + __ROL4__(v127, 5) + v128 + v120;
      v318 = __ROL4__(v290 ^ v314 ^ v103 ^ v317, 1);
      v131 = v318 + 1859775393 + __ROL4__(v130, 5) + (v126 ^ v127 ^ v129) + v123;
      v132 = __ROR4__(v127, 2);
      v133 = __ROL4__(v318 ^ v307 ^ v326 ^ v334, 1);
      v134 = __ROL4__(v108 ^ v294 ^ v75 ^ v334, 1);
      v135 = v130 ^ v132 ^ v129;
      v136 = __ROL4__(v287 ^ v311 ^ v331 ^ v110, 1);
      v137 = __ROR4__(v130, 2);
      v138 = v134 + __ROL4__(v131, 5) + 1859775393 + v135 + v126;
      v139 = v131 ^ v137 ^ v132;
      v140 = __ROR4__(v131, 2);
      v141 = v136 + __ROL4__(v138, 5) + 1859775393 + v139 + v129;
      v142 = v298 ^ v322 ^ v331;
      v143 = v133 + __ROL4__(v141, 5) + 1859775393 + (v138 ^ v140 ^ v137) + v132;
      v323 = __ROL4__(v133 ^ v294 ^ v314 ^ v322, 1);
      v144 = __ROR4__(v138, 2);
      v145 = v144 ^ v140 ^ v141;
      v146 = __ROR4__(v141, 2);
      v147 = __ROL4__(v134 ^ v142, 1);
      v327 = __ROL4__(v136 ^ v290 ^ v302 ^ v326, 1);
      v148 = v147 + __ROL4__(v143, 5) + 1859775393 + v145 + v137;
      v149 = v144 ^ v143 ^ v146;
      v150 = __ROR4__(v143, 2);
      v151 = v327 + __ROL4__(v148, 5) + 1859775393 + v149 + v140;
      v152 = v148 ^ v150 ^ v146;
      v153 = __ROR4__(v148, 2);
      v154 = v323 + __ROL4__(v151, 5) + v152 + v144 + 1859775393;
      v303 = __ROL4__(v108 ^ v147 ^ v287 ^ v302, 1);
      v155 = v151 & v153 | v150 & (v151 | v153);
      v156 = __ROR4__(v151, 2);
      v157 = v303 - 1894007588 + v155 + __ROL4__(v154, 5) + v146;
      v315 = __ROL4__(v327 ^ v318 ^ v311 ^ v314, 1);
      v158 = v154 & v156 | v153 & (v154 | v156);
      v159 = __ROR4__(v154, 2);
      v160 = v159 & v157;
      v161 = v315 - 1894007588 + v158 + __ROL4__(v157, 5) + v150;
      v162 = v156 & (v159 | v157);
      v163 = __ROR4__(v157, 2);
      v312 = __ROL4__(v303 ^ v136 ^ v298 ^ v311, 1);
      v339 = __ROL4__(v108 ^ v323 ^ v134 ^ v307, 1);
      v164 = v339 + (v160 | v162) - 1894007588 + __ROL4__(v161, 5) + v153;
      v165 = v161 & v163 | v159 & (v161 | v163);
      v166 = __ROR4__(v161, 2);
      v167 = v312 + v165 - 1894007588 + __ROL4__(v164, 5) + v156;
      v308 = __ROL4__(v315 ^ v133 ^ v290 ^ v307, 1);
      v168 = v164 & v166 | v163 & (v164 | v166);
      v169 = __ROR4__(v164, 2);
      v170 = v308 + v168 - 1894007588 + __ROL4__(v167, 5) + v159;
      v299 = __ROL4__(v147 ^ v339 ^ v294 ^ v298, 1);
      v171 = v299 + (v167 & v169 | v166 & (v167 | v169)) - 1894007588 + __ROL4__(v170, 5) + v163;
      v172 = __ROR4__(v167, 2);
      v291 = __ROL4__(v312 ^ v327 ^ v287 ^ v290, 1);
      v173 = v291 + (v170 & v172 | v169 & (v170 | v172)) - 1894007588 + __ROL4__(v171, 5) + v166;
      v295 = __ROL4__(v308 ^ v323 ^ v318 ^ v294, 1);
      v174 = v171;
      v175 = __ROR4__(v170, 2);
      v176 = v172 & (v175 | v171);
      v177 = __ROR4__(v171, 2);
      v319 = __ROL4__(v291 ^ v315 ^ v136 ^ v318, 1);
      v178 = v295 + (v175 & v174 | v176) - 1894007588 + __ROL4__(v173, 5) + v169;
      v288 = __ROL4__(v299 ^ v303 ^ v134 ^ v287, 1);
      v179 = v175 & (v173 | v177);
      v180 = v173 & v177;
      v181 = __ROR4__(v173, 2);
      v182 = v288 + (v180 | v179) - 1894007588 + __ROL4__(v178, 5) + v172;
      v183 = v178 & v181 | v177 & (v178 | v181);
      v184 = __ROR4__(v178, 2);
      v185 = v319 + v183 - 1894007588 + __ROL4__(v182, 5) + v175;
      v332 = __ROL4__(v295 ^ v133 ^ v134 ^ v339, 1);
      v186 = v182 & v184 | v181 & (v182 | v184);
      v187 = __ROR4__(v182, 2);
      v188 = v332 + v186 - 1894007588 + v177 + __ROL4__(v185, 5);
      v335 = __ROL4__(v312 ^ v147 ^ v136 ^ v288, 1);
      v189 = v185 & v187 | v184 & (v185 | v187);
      v190 = __ROR4__(v185, 2);
      v337 = __ROL4__(v308 ^ v327 ^ v133 ^ v319, 1);
      v347 = __ROL4__(v299 ^ v323 ^ v147 ^ v332, 1);
      v191 = v335 + v189 - 1894007588 + __ROL4__(v188, 5) + v181;
      v341 = __ROL4__(v291 ^ v303 ^ v327 ^ v335, 1);
      v192 = v188;
      v193 = v190 | v188;
      v194 = __ROR4__(v188, 2);
      v195 = v337 + (v190 & v192 | v187 & v193) - 1894007588 + v184 + __ROL4__(v191, 5);
      v196 = v191 & v194 | v190 & (v191 | v194);
      v197 = __ROR4__(v191, 2);
      v198 = v347 + v196 - 1894007588 + v187 + __ROL4__(v195, 5);
      v199 = v341 + (v195 & v197 | v194 & (v195 | v197)) - 1894007588 + v190 + __ROL4__(v198, 5);
      v200 = __ROR4__(v195, 2);
      v338 = __ROL4__(v295 ^ v315 ^ v323 ^ v337, 1);
      v201 = v194 + __ROL4__(v199, 5);
      v202 = v339;
      v203 = (v198 & v200 | v197 & (v198 | v200)) - 1894007588;
      v204 = __ROR4__(v198, 2);
      v205 = v338 + v203 + v201;
      v340 = __ROL4__(v303 ^ v339 ^ v288 ^ v347, 1);
      v206 = v340 + (v199 & v204 | v200 & (v199 | v204)) - 1894007588 + v197 + __ROL4__(v205, 5);
      v304 = __ROL4__(v312 ^ v315 ^ v319 ^ v341, 1);
      v207 = __ROR4__(v199, 2);
      v208 = v205;
      v209 = v207 | v205;
      v210 = __ROR4__(v205, 2);
      v211 = v304 - 1894007588 + (v207 & v208 | v204 & v209) + v200 + __ROL4__(v206, 5);
      v328 = __ROL4__(v308 ^ v202 ^ v332 ^ v338, 1);
      v212 = v328 + (v206 & v210 | v207 & (v206 | v210)) - 1894007588 + __ROL4__(v211, 5) + v204;
      v213 = __ROR4__(v206, 2);
      v324 = __ROL4__(v299 ^ v312 ^ v335 ^ v340, 1);
      v214 = v211 & v213 | v210 & (v211 | v213);
      v215 = __ROR4__(v211, 2);
      v216 = v207 + v214 - 1894007588 + v324 + __ROL4__(v212, 5);
      v309 = __ROL4__(v291 ^ v308 ^ v337 ^ v304, 1);
      v292 = __ROL4__(v291 ^ v288 ^ v324 ^ v341, 1);
      v217 = (v212 ^ v215 ^ v213) - 899497514;
      v218 = __ROR4__(v212, 2);
      v300 = __ROL4__(v295 ^ v299 ^ v347 ^ v328, 1);
      v219 = v210 + v217 + v309 + __ROL4__(v216, 5);
      v316 = __ROL4__(v295 ^ v309 ^ v319 ^ v338, 1);
      v220 = v216 ^ v218 ^ v215;
      v221 = __ROR4__(v216, 2);
      v222 = v213 + v220 - 899497514 + v300 + __ROL4__(v219, 5);
      v223 = v218 ^ v219;
      v224 = __ROR4__(v219, 2);
      v225 = v215 + (v221 ^ v223) - 899497514 + v292 + __ROL4__(v222, 5);
      v226 = v341;
      v227 = v218 + (v221 ^ v222 ^ v224) - 899497514 + v316 + __ROL4__(v225, 5);
      v228 = __ROR4__(v222, 2);
      v229 = v221 + (v225 ^ v228 ^ v224) - 899497514;
      v230 = __ROR4__(v225, 2);
      v231 = __ROL4__(v300 ^ v288 ^ v332 ^ v340, 1);
      v232 = v229 + v231 + __ROL4__(v227, 5);
      v296 = v231;
      v233 = __ROL4__(v316 ^ v332 ^ v337 ^ v328, 1);
      v234 = __ROL4__(v231 ^ v324 ^ v335 ^ v347, 1);
      v235 = v224 + (v227 ^ v230 ^ v228);
      v236 = __ROR4__(v227, 2);
      v320 = __ROL4__(v292 ^ v319 ^ v335 ^ v304, 1);
      v237 = v235 - 899497514 + v320 + __ROL4__(v232, 5);
      v238 = v228 + (v232 ^ v236 ^ v230);
      v239 = __ROR4__(v232, 2);
      v342 = __ROL4__(v320 ^ v309 ^ v337 ^ v341, 1);
      v240 = v238 - 899497514 + v233 + __ROL4__(v237, 5);
      v241 = v236 ^ v237;
      v242 = __ROR4__(v237, 2);
      v243 = v230 + (v239 ^ v241) - 899497514 + __ROL4__(v240, 5) + v234;
      v244 = v236 + (v239 ^ v240 ^ v242) - 899497514 + v342 + __ROL4__(v243, 5);
      v245 = v292 ^ v226 ^ v340;
      v246 = __ROR4__(v240, 2);
      v247 = __ROL4__(v342 ^ v316 ^ v338 ^ v304, 1);
      v248 = v239 - 899497514 + (v243 ^ v246 ^ v242);
      v249 = __ROR4__(v243, 2);
      v250 = __ROL4__(v233 ^ v300 ^ v347 ^ v338, 1);
      v251 = __ROL4__(v234 ^ v245, 1);
      v252 = v248 + v250 + __ROL4__(v244, 5);
      v253 = v242 - 899497514 + (v244 ^ v249 ^ v246);
      v254 = __ROR4__(v244, 2);
      v255 = v253 + v251 + __ROL4__(v252, 5);
      v256 = v246 - 899497514 + (v252 ^ v254 ^ v249) + v247 + __ROL4__(v255, 5);
      v257 = __ROR4__(v252, 2);
      v258 = v249 - 899497514 + (v257 ^ v254 ^ v255);
      v259 = __ROR4__(v255, 2);
      v260 = __ROL4__(v231 ^ v250 ^ v340 ^ v328, 1);
      v305 = __ROL4__(v251 ^ v320 ^ v324 ^ v304, 1);
      v261 = v258 + v260 + __ROL4__(v256, 5);
      v262 = v257 ^ v256 ^ v259;
      v263 = __ROR4__(v256, 2);
      v264 = v254 - 899497514 + v262 + __ROL4__(v261, 5) + v305;
      v329 = __ROL4__(v233 ^ v247 ^ v309 ^ v328, 1);
      v265 = v257 - 899497514 + (v261 ^ v263 ^ v259) + __ROL4__(v264, 5) + v329;
      v266 = __ROR4__(v261, 2);
      v267 = v234 ^ v300 ^ v260 ^ v324;
      v268 = v259 - 899497514 + (v264 ^ v266 ^ v263);
      v269 = __ROL4__(v342 ^ v292 ^ v309 ^ v305, 1);
      v270 = __ROR4__(v264, 2);
      v271 = __ROL4__(v267, 1);
      v272 = v268 + v271 + __ROL4__(v265, 5);
      v273 = __ROL4__(v269 ^ v320 ^ v247 ^ v316, 1);
      v274 = v265 ^ v270 ^ v266;
      v275 = __ROR4__(v265, 2);
      v276 = v263 + v274 - 899497514 + __ROL4__(v272, 5) + v269;
      v277 = v270 ^ v272;
      v278 = __ROR4__(v272, 2);
      v279 = v266 + (v275 ^ v277) - 899497514 + __ROL4__(v329 ^ v250 ^ v316 ^ v300, 1) + __ROL4__(v276, 5);
      v280 = v270 - 899497514 + (v275 ^ v276 ^ v278);
      v281 = __ROR4__(v276, 2);
      v282 = v280 + __ROL4__(v279, 5) + __ROL4__(v251 ^ v296 ^ v271 ^ v292, 1);
      v283 = v279 ^ v281 ^ v278;
      v9 = (unsigned int *)(v348 + 64);
      v6 = v344 + __ROR4__(v279, 2);
      v344 = v6;
      v4 = v275 - 899497514 + *a1 + v283 + v273 + __ROL4__(v282, 5);
      a1[2] = v6;
      *a1 = v4;
      v343 += v282;
      v5 = v343;
      a1[1] = v343;
      v348 += 64LL;
      v345 += v281;
      v7 = v345;
      a1[3] = v345;
      v284 = v349-- == 1;
      v8 = v278 + v346;
      v346 = v8;
      a1[4] = v8;
    }
    while ( !v284 );
    a3 = v351;
  }
  *a4 = a3;
  return 0LL;
}
