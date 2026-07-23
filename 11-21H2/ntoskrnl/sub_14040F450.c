/*
 * XREFs of sub_14040F450 @ 0x14040F450
 * Callers:
 *     sub_14040CA30 @ 0x14040CA30 (sub_14040CA30.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14040F450(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
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
  __int64 v23; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r15
  unsigned __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r12
  unsigned __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r15
  unsigned __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // r12
  unsigned __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // r15
  unsigned __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // r12
  unsigned __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // r15
  unsigned __int64 v45; // rax
  __int64 v46; // r12
  unsigned __int64 *v47; // rcx
  unsigned __int64 v48; // rbx
  __int64 v49; // r15
  unsigned __int128 v50; // kr20_16
  __int64 v51; // r12
  unsigned __int128 v52; // kr30_16
  __int64 v53; // r15
  unsigned __int128 v54; // kr40_16
  __int64 v55; // r12
  unsigned __int128 v56; // kr50_16
  __int64 v57; // r15
  unsigned __int128 v58; // kr60_16
  __int64 v59; // r12
  unsigned __int128 v60; // kr70_16
  __int64 v61; // r15
  unsigned __int128 v62; // kr80_16
  __int64 v63; // r12
  unsigned __int128 v64; // kr90_16
  __int64 v65; // r15
  unsigned __int128 v66; // krA0_16
  __int64 v67; // r12
  unsigned __int128 v68; // krB0_16
  __int64 v69; // r15
  unsigned __int128 v70; // krC0_16
  __int64 v71; // r12
  unsigned __int128 v72; // krD0_16
  __int64 v73; // r15
  unsigned __int128 v74; // krE0_16
  unsigned __int64 v75; // rbx
  __int64 v76; // r12
  unsigned __int128 v77; // kr100_16
  __int64 v78; // r15
  unsigned __int128 v79; // kr110_16
  __int64 v80; // r12
  unsigned __int128 v81; // kr120_16
  __int64 v82; // r15
  unsigned __int128 v83; // kr130_16
  __int64 v84; // r12
  unsigned __int128 v85; // kr140_16
  __int64 v86; // r15
  unsigned __int128 v87; // kr150_16
  __int64 v88; // r12
  unsigned __int128 v89; // kr160_16
  __int64 v90; // r15
  unsigned __int128 v91; // kr170_16
  __int64 v92; // r12
  unsigned __int128 v93; // kr180_16
  __int64 v94; // r15
  unsigned __int128 v95; // kr190_16
  __int64 v96; // r12
  unsigned __int128 v97; // kr1A0_16
  __int64 v98; // r15
  unsigned __int128 v99; // kr1B0_16
  unsigned __int64 v100; // rbx
  __int64 v101; // r15
  unsigned __int128 v102; // kr1D0_16
  __int64 v103; // r12
  unsigned __int128 v104; // kr1E0_16
  __int64 v105; // r15
  unsigned __int128 v106; // kr1F0_16
  __int64 v107; // r12
  unsigned __int128 v108; // kr200_16
  __int64 v109; // r15
  unsigned __int128 v110; // kr210_16
  __int64 v111; // r12
  unsigned __int128 v112; // kr220_16
  __int64 v113; // r15
  unsigned __int128 v114; // kr230_16
  __int64 v115; // r12
  unsigned __int128 v116; // kr240_16
  __int64 v117; // r15
  unsigned __int128 v118; // kr250_16
  __int64 v119; // r12
  unsigned __int128 v120; // kr260_16
  __int64 v121; // r15
  unsigned __int128 v122; // kr270_16
  unsigned __int64 v123; // rbx
  __int64 v124; // r12
  unsigned __int128 v125; // kr290_16
  __int64 v126; // r15
  unsigned __int128 v127; // kr2A0_16
  __int64 v128; // r12
  unsigned __int128 v129; // kr2B0_16
  __int64 v130; // r15
  unsigned __int128 v131; // kr2C0_16
  __int64 v132; // r12
  unsigned __int128 v133; // kr2D0_16
  __int64 v134; // r15
  unsigned __int128 v135; // kr2E0_16
  __int64 v136; // r12
  unsigned __int128 v137; // kr2F0_16
  __int64 v138; // r15
  unsigned __int128 v139; // kr300_16
  __int64 v140; // r12
  unsigned __int128 v141; // kr310_16
  __int64 v142; // r15
  unsigned __int128 v143; // kr320_16
  unsigned __int64 v144; // rbx
  __int64 v145; // r15
  unsigned __int128 v146; // kr340_16
  __int64 v147; // r12
  unsigned __int128 v148; // kr350_16
  __int64 v149; // r15
  unsigned __int128 v150; // kr360_16
  __int64 v151; // r12
  unsigned __int128 v152; // kr370_16
  __int64 v153; // r15
  unsigned __int128 v154; // kr380_16
  __int64 v155; // r12
  unsigned __int128 v156; // kr390_16
  __int64 v157; // r15
  unsigned __int128 v158; // kr3A0_16
  __int64 v159; // r12
  unsigned __int128 v160; // kr3B0_16
  __int64 v161; // r15
  unsigned __int128 v162; // kr3C0_16
  unsigned __int64 v163; // rbx
  __int64 v164; // r12
  unsigned __int128 v165; // kr3E0_16
  __int64 v166; // r15
  unsigned __int128 v167; // kr3F0_16
  __int64 v168; // r12
  unsigned __int128 v169; // kr400_16
  __int64 v170; // r15
  unsigned __int128 v171; // kr410_16
  __int64 v172; // r12
  unsigned __int128 v173; // kr420_16
  __int64 v174; // r15
  unsigned __int128 v175; // kr430_16
  __int64 v176; // r12
  unsigned __int128 v177; // kr440_16
  __int64 v178; // r15
  unsigned __int128 v179; // kr450_16
  unsigned __int64 v180; // rbx
  __int64 v181; // r15
  unsigned __int128 v182; // kr470_16
  __int64 v183; // r12
  unsigned __int128 v184; // kr480_16
  __int64 v185; // r15
  unsigned __int128 v186; // kr490_16
  __int64 v187; // r12
  unsigned __int128 v188; // kr4A0_16
  __int64 v189; // r15
  unsigned __int128 v190; // kr4B0_16
  __int64 v191; // r12
  unsigned __int128 v192; // kr4C0_16
  __int64 v193; // r15
  unsigned __int128 v194; // kr4D0_16
  unsigned __int64 v195; // rbx
  __int64 v196; // r12
  unsigned __int128 v197; // kr4F0_16
  __int64 v198; // r15
  unsigned __int128 v199; // kr500_16
  __int64 v200; // r12
  unsigned __int128 v201; // kr510_16
  __int64 v202; // r15
  unsigned __int128 v203; // kr520_16
  __int64 v204; // r12
  unsigned __int128 v205; // kr530_16
  __int64 v206; // r15
  unsigned __int128 v207; // kr540_16
  unsigned __int64 v208; // rbx
  __int64 v209; // r15
  unsigned __int128 v210; // kr560_16
  __int64 v211; // r12
  unsigned __int128 v212; // kr570_16
  __int64 v213; // r15
  unsigned __int128 v214; // kr580_16
  __int64 v215; // r12
  unsigned __int128 v216; // kr590_16
  __int64 v217; // r15
  unsigned __int128 v218; // kr5A0_16
  unsigned __int64 v219; // rbx
  __int64 v220; // r12
  unsigned __int128 v221; // kr5C0_16
  __int64 v222; // r15
  unsigned __int128 v223; // kr5D0_16
  __int64 v224; // r12
  unsigned __int128 v225; // kr5E0_16
  __int64 v226; // r15
  unsigned __int128 v227; // kr5F0_16
  unsigned __int64 v228; // rbx
  __int64 v229; // r15
  unsigned __int128 v230; // kr610_16
  __int64 v231; // r12
  unsigned __int128 v232; // kr620_16
  __int64 v233; // r15
  unsigned __int128 v234; // kr630_16
  unsigned __int64 v235; // rbx
  __int64 v236; // r12
  unsigned __int128 v237; // kr650_16
  __int64 v238; // r15
  unsigned __int128 v239; // kr660_16
  unsigned __int64 v240; // rbx
  __int64 v241; // r15
  unsigned __int128 v242; // kr680_16
  bool v243; // cf
  unsigned __int64 v244; // rax
  unsigned __int64 v245; // rtt
  unsigned __int64 v246; // rax
  unsigned __int64 v247; // rtt
  unsigned __int64 v248; // rax
  unsigned __int64 v249; // rtt
  unsigned __int64 v250; // rax
  unsigned __int64 v251; // rtt
  unsigned __int64 v252; // rax
  unsigned __int64 v253; // rtt
  unsigned __int64 v254; // rax
  unsigned __int64 v255; // rtt
  unsigned __int64 v256; // rax
  unsigned __int64 v257; // rtt
  unsigned __int64 v258; // rax
  unsigned __int64 v259; // rtt
  unsigned __int64 v260; // rax
  unsigned __int64 v261; // rtt
  unsigned __int64 v262; // rax
  unsigned __int64 v263; // rtt
  unsigned __int64 v264; // rax
  unsigned __int64 v265; // rtt
  unsigned __int64 v266; // rax
  unsigned __int64 v267; // rtt
  unsigned __int64 v268; // rax
  unsigned __int64 v269; // rtt
  unsigned __int64 v270; // rax
  unsigned __int64 v271; // rtt
  unsigned __int64 v272; // rax
  unsigned __int64 v273; // rtt
  unsigned __int64 v274; // rax
  unsigned __int64 v275; // rtt
  unsigned __int64 v276; // rax
  unsigned __int64 v277; // rtt
  unsigned __int64 v278; // rax
  unsigned __int64 v279; // rtt
  unsigned __int64 v280; // rax
  unsigned __int64 v281; // rtt
  unsigned __int64 v282; // rax
  unsigned __int64 v283; // rtt
  unsigned __int64 v284; // rax
  unsigned __int64 v285; // rtt
  unsigned __int64 v286; // rax
  unsigned __int64 v287; // rtt
  unsigned __int64 v288; // rax
  unsigned __int64 v289; // rtt
  unsigned __int64 v290; // rax
  unsigned __int64 v291; // rtt
  unsigned __int64 v292; // rax
  unsigned __int64 v293; // rtt
  unsigned __int64 v294; // rax
  unsigned __int64 v295; // rtt
  unsigned __int64 v296; // rax
  unsigned __int64 v297; // rtt
  unsigned __int64 v298; // rax
  unsigned __int64 v299; // rtt
  unsigned __int64 v300; // rax
  unsigned __int64 v301; // rtt
  unsigned __int64 v302; // rax
  unsigned __int64 v303; // rtt
  unsigned __int128 v304; // rax
  unsigned __int128 v305; // rax
  unsigned __int128 v306; // rax
  unsigned __int128 v307; // rax
  unsigned __int128 v308; // rax
  unsigned __int128 v309; // rax
  unsigned __int128 v310; // rax
  unsigned __int128 v311; // rax
  unsigned __int128 v312; // rax
  unsigned __int128 v313; // rax
  unsigned __int128 v314; // rax
  unsigned __int128 v315; // rax
  unsigned __int128 v316; // rax
  unsigned __int128 v317; // rax
  unsigned __int128 v318; // rax
  unsigned __int128 v319; // rax
  unsigned __int128 v320; // rax
  unsigned __int128 v321; // rax
  unsigned __int128 v322; // rax
  unsigned __int128 v323; // rax
  unsigned __int128 v324; // rax
  unsigned __int128 v325; // rax
  unsigned __int128 v326; // rax
  unsigned __int128 v327; // rax
  unsigned __int128 v328; // rax
  unsigned __int128 v329; // rax
  unsigned __int128 v330; // rax
  unsigned __int128 v331; // rax
  unsigned __int128 v332; // rax
  unsigned __int128 v333; // rax
  unsigned __int128 v334; // rax
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
  v23 = __CFADD__(v20, v21) + v22;
  v24 = v4 * a1[8];
  v25 = (v4 * (unsigned __int128)a1[8]) >> 64;
  a3[8] = v23 + v24;
  v26 = __CFADD__(v23, v24) + v25;
  v27 = v4 * a1[9];
  v28 = (v4 * (unsigned __int128)a1[9]) >> 64;
  a3[9] = v26 + v27;
  v29 = __CFADD__(v26, v27) + v28;
  v30 = v4 * a1[10];
  v31 = (v4 * (unsigned __int128)a1[10]) >> 64;
  a3[10] = v29 + v30;
  v32 = __CFADD__(v29, v30) + v31;
  v33 = v4 * a1[11];
  v34 = (v4 * (unsigned __int128)a1[11]) >> 64;
  a3[11] = v32 + v33;
  v35 = __CFADD__(v32, v33) + v34;
  v36 = v4 * a1[12];
  v37 = (v4 * (unsigned __int128)a1[12]) >> 64;
  a3[12] = v35 + v36;
  v38 = __CFADD__(v35, v36) + v37;
  v39 = v4 * a1[13];
  v40 = (v4 * (unsigned __int128)a1[13]) >> 64;
  a3[13] = v38 + v39;
  v41 = __CFADD__(v38, v39) + v40;
  v42 = v4 * a1[14];
  v43 = (v4 * (unsigned __int128)a1[14]) >> 64;
  a3[14] = v41 + v42;
  v44 = __CFADD__(v41, v42) + v43;
  v45 = v4 * a1[15];
  v46 = (v4 * (unsigned __int128)a1[15]) >> 64;
  a3[15] = v44 + v45;
  a3[16] = __CFADD__(v44, v45) + v46;
  v47 = a1 + 1;
  v48 = *v47;
  v49 = (a3[3] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[3] += *v47 * v47[1];
  v50 = a3[4] + v48 * (unsigned __int128)v47[2];
  a3[4] = v49 + v50;
  v51 = __CFADD__(v49, (_QWORD)v50) + *((_QWORD *)&v50 + 1);
  v52 = a3[5] + v48 * (unsigned __int128)v47[3];
  a3[5] = v51 + v52;
  v53 = __CFADD__(v51, (_QWORD)v52) + *((_QWORD *)&v52 + 1);
  v54 = a3[6] + v48 * (unsigned __int128)v47[4];
  a3[6] = v53 + v54;
  v55 = __CFADD__(v53, (_QWORD)v54) + *((_QWORD *)&v54 + 1);
  v56 = a3[7] + v48 * (unsigned __int128)v47[5];
  a3[7] = v55 + v56;
  v57 = __CFADD__(v55, (_QWORD)v56) + *((_QWORD *)&v56 + 1);
  v58 = a3[8] + v48 * (unsigned __int128)v47[6];
  a3[8] = v57 + v58;
  v59 = __CFADD__(v57, (_QWORD)v58) + *((_QWORD *)&v58 + 1);
  v60 = a3[9] + v48 * (unsigned __int128)v47[7];
  a3[9] = v59 + v60;
  v61 = __CFADD__(v59, (_QWORD)v60) + *((_QWORD *)&v60 + 1);
  v62 = a3[10] + v48 * (unsigned __int128)v47[8];
  a3[10] = v61 + v62;
  v63 = __CFADD__(v61, (_QWORD)v62) + *((_QWORD *)&v62 + 1);
  v64 = a3[11] + v48 * (unsigned __int128)v47[9];
  a3[11] = v63 + v64;
  v65 = __CFADD__(v63, (_QWORD)v64) + *((_QWORD *)&v64 + 1);
  v66 = a3[12] + v48 * (unsigned __int128)v47[10];
  a3[12] = v65 + v66;
  v67 = __CFADD__(v65, (_QWORD)v66) + *((_QWORD *)&v66 + 1);
  v68 = a3[13] + v48 * (unsigned __int128)v47[11];
  a3[13] = v67 + v68;
  v69 = __CFADD__(v67, (_QWORD)v68) + *((_QWORD *)&v68 + 1);
  v70 = a3[14] + v48 * (unsigned __int128)v47[12];
  a3[14] = v69 + v70;
  v71 = __CFADD__(v69, (_QWORD)v70) + *((_QWORD *)&v70 + 1);
  v72 = a3[15] + v48 * (unsigned __int128)v47[13];
  a3[15] = v71 + v72;
  v73 = __CFADD__(v71, (_QWORD)v72) + *((_QWORD *)&v72 + 1);
  v74 = a3[16] + v48 * (unsigned __int128)v47[14];
  a3[16] = v73 + v74;
  a3[17] = __CFADD__(v73, (_QWORD)v74) + *((_QWORD *)&v74 + 1);
  v75 = *++v47;
  v76 = (a3[5] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[5] += *v47 * v47[1];
  v77 = a3[6] + v75 * (unsigned __int128)v47[2];
  a3[6] = v76 + v77;
  v78 = __CFADD__(v76, (_QWORD)v77) + *((_QWORD *)&v77 + 1);
  v79 = a3[7] + v75 * (unsigned __int128)v47[3];
  a3[7] = v78 + v79;
  v80 = __CFADD__(v78, (_QWORD)v79) + *((_QWORD *)&v79 + 1);
  v81 = a3[8] + v75 * (unsigned __int128)v47[4];
  a3[8] = v80 + v81;
  v82 = __CFADD__(v80, (_QWORD)v81) + *((_QWORD *)&v81 + 1);
  v83 = a3[9] + v75 * (unsigned __int128)v47[5];
  a3[9] = v82 + v83;
  v84 = __CFADD__(v82, (_QWORD)v83) + *((_QWORD *)&v83 + 1);
  v85 = a3[10] + v75 * (unsigned __int128)v47[6];
  a3[10] = v84 + v85;
  v86 = __CFADD__(v84, (_QWORD)v85) + *((_QWORD *)&v85 + 1);
  v87 = a3[11] + v75 * (unsigned __int128)v47[7];
  a3[11] = v86 + v87;
  v88 = __CFADD__(v86, (_QWORD)v87) + *((_QWORD *)&v87 + 1);
  v89 = a3[12] + v75 * (unsigned __int128)v47[8];
  a3[12] = v88 + v89;
  v90 = __CFADD__(v88, (_QWORD)v89) + *((_QWORD *)&v89 + 1);
  v91 = a3[13] + v75 * (unsigned __int128)v47[9];
  a3[13] = v90 + v91;
  v92 = __CFADD__(v90, (_QWORD)v91) + *((_QWORD *)&v91 + 1);
  v93 = a3[14] + v75 * (unsigned __int128)v47[10];
  a3[14] = v92 + v93;
  v94 = __CFADD__(v92, (_QWORD)v93) + *((_QWORD *)&v93 + 1);
  v95 = a3[15] + v75 * (unsigned __int128)v47[11];
  a3[15] = v94 + v95;
  v96 = __CFADD__(v94, (_QWORD)v95) + *((_QWORD *)&v95 + 1);
  v97 = a3[16] + v75 * (unsigned __int128)v47[12];
  a3[16] = v96 + v97;
  v98 = __CFADD__(v96, (_QWORD)v97) + *((_QWORD *)&v97 + 1);
  v99 = a3[17] + v75 * (unsigned __int128)v47[13];
  a3[17] = v98 + v99;
  a3[18] = __CFADD__(v98, (_QWORD)v99) + *((_QWORD *)&v99 + 1);
  v100 = *++v47;
  v101 = (a3[7] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[7] += *v47 * v47[1];
  v102 = a3[8] + v100 * (unsigned __int128)v47[2];
  a3[8] = v101 + v102;
  v103 = __CFADD__(v101, (_QWORD)v102) + *((_QWORD *)&v102 + 1);
  v104 = a3[9] + v100 * (unsigned __int128)v47[3];
  a3[9] = v103 + v104;
  v105 = __CFADD__(v103, (_QWORD)v104) + *((_QWORD *)&v104 + 1);
  v106 = a3[10] + v100 * (unsigned __int128)v47[4];
  a3[10] = v105 + v106;
  v107 = __CFADD__(v105, (_QWORD)v106) + *((_QWORD *)&v106 + 1);
  v108 = a3[11] + v100 * (unsigned __int128)v47[5];
  a3[11] = v107 + v108;
  v109 = __CFADD__(v107, (_QWORD)v108) + *((_QWORD *)&v108 + 1);
  v110 = a3[12] + v100 * (unsigned __int128)v47[6];
  a3[12] = v109 + v110;
  v111 = __CFADD__(v109, (_QWORD)v110) + *((_QWORD *)&v110 + 1);
  v112 = a3[13] + v100 * (unsigned __int128)v47[7];
  a3[13] = v111 + v112;
  v113 = __CFADD__(v111, (_QWORD)v112) + *((_QWORD *)&v112 + 1);
  v114 = a3[14] + v100 * (unsigned __int128)v47[8];
  a3[14] = v113 + v114;
  v115 = __CFADD__(v113, (_QWORD)v114) + *((_QWORD *)&v114 + 1);
  v116 = a3[15] + v100 * (unsigned __int128)v47[9];
  a3[15] = v115 + v116;
  v117 = __CFADD__(v115, (_QWORD)v116) + *((_QWORD *)&v116 + 1);
  v118 = a3[16] + v100 * (unsigned __int128)v47[10];
  a3[16] = v117 + v118;
  v119 = __CFADD__(v117, (_QWORD)v118) + *((_QWORD *)&v118 + 1);
  v120 = a3[17] + v100 * (unsigned __int128)v47[11];
  a3[17] = v119 + v120;
  v121 = __CFADD__(v119, (_QWORD)v120) + *((_QWORD *)&v120 + 1);
  v122 = a3[18] + v100 * (unsigned __int128)v47[12];
  a3[18] = v121 + v122;
  a3[19] = __CFADD__(v121, (_QWORD)v122) + *((_QWORD *)&v122 + 1);
  v123 = *++v47;
  v124 = (a3[9] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[9] += *v47 * v47[1];
  v125 = a3[10] + v123 * (unsigned __int128)v47[2];
  a3[10] = v124 + v125;
  v126 = __CFADD__(v124, (_QWORD)v125) + *((_QWORD *)&v125 + 1);
  v127 = a3[11] + v123 * (unsigned __int128)v47[3];
  a3[11] = v126 + v127;
  v128 = __CFADD__(v126, (_QWORD)v127) + *((_QWORD *)&v127 + 1);
  v129 = a3[12] + v123 * (unsigned __int128)v47[4];
  a3[12] = v128 + v129;
  v130 = __CFADD__(v128, (_QWORD)v129) + *((_QWORD *)&v129 + 1);
  v131 = a3[13] + v123 * (unsigned __int128)v47[5];
  a3[13] = v130 + v131;
  v132 = __CFADD__(v130, (_QWORD)v131) + *((_QWORD *)&v131 + 1);
  v133 = a3[14] + v123 * (unsigned __int128)v47[6];
  a3[14] = v132 + v133;
  v134 = __CFADD__(v132, (_QWORD)v133) + *((_QWORD *)&v133 + 1);
  v135 = a3[15] + v123 * (unsigned __int128)v47[7];
  a3[15] = v134 + v135;
  v136 = __CFADD__(v134, (_QWORD)v135) + *((_QWORD *)&v135 + 1);
  v137 = a3[16] + v123 * (unsigned __int128)v47[8];
  a3[16] = v136 + v137;
  v138 = __CFADD__(v136, (_QWORD)v137) + *((_QWORD *)&v137 + 1);
  v139 = a3[17] + v123 * (unsigned __int128)v47[9];
  a3[17] = v138 + v139;
  v140 = __CFADD__(v138, (_QWORD)v139) + *((_QWORD *)&v139 + 1);
  v141 = a3[18] + v123 * (unsigned __int128)v47[10];
  a3[18] = v140 + v141;
  v142 = __CFADD__(v140, (_QWORD)v141) + *((_QWORD *)&v141 + 1);
  v143 = a3[19] + v123 * (unsigned __int128)v47[11];
  a3[19] = v142 + v143;
  a3[20] = __CFADD__(v142, (_QWORD)v143) + *((_QWORD *)&v143 + 1);
  v144 = *++v47;
  v145 = (a3[11] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[11] += *v47 * v47[1];
  v146 = a3[12] + v144 * (unsigned __int128)v47[2];
  a3[12] = v145 + v146;
  v147 = __CFADD__(v145, (_QWORD)v146) + *((_QWORD *)&v146 + 1);
  v148 = a3[13] + v144 * (unsigned __int128)v47[3];
  a3[13] = v147 + v148;
  v149 = __CFADD__(v147, (_QWORD)v148) + *((_QWORD *)&v148 + 1);
  v150 = a3[14] + v144 * (unsigned __int128)v47[4];
  a3[14] = v149 + v150;
  v151 = __CFADD__(v149, (_QWORD)v150) + *((_QWORD *)&v150 + 1);
  v152 = a3[15] + v144 * (unsigned __int128)v47[5];
  a3[15] = v151 + v152;
  v153 = __CFADD__(v151, (_QWORD)v152) + *((_QWORD *)&v152 + 1);
  v154 = a3[16] + v144 * (unsigned __int128)v47[6];
  a3[16] = v153 + v154;
  v155 = __CFADD__(v153, (_QWORD)v154) + *((_QWORD *)&v154 + 1);
  v156 = a3[17] + v144 * (unsigned __int128)v47[7];
  a3[17] = v155 + v156;
  v157 = __CFADD__(v155, (_QWORD)v156) + *((_QWORD *)&v156 + 1);
  v158 = a3[18] + v144 * (unsigned __int128)v47[8];
  a3[18] = v157 + v158;
  v159 = __CFADD__(v157, (_QWORD)v158) + *((_QWORD *)&v158 + 1);
  v160 = a3[19] + v144 * (unsigned __int128)v47[9];
  a3[19] = v159 + v160;
  v161 = __CFADD__(v159, (_QWORD)v160) + *((_QWORD *)&v160 + 1);
  v162 = a3[20] + v144 * (unsigned __int128)v47[10];
  a3[20] = v161 + v162;
  a3[21] = __CFADD__(v161, (_QWORD)v162) + *((_QWORD *)&v162 + 1);
  v163 = *++v47;
  v164 = (a3[13] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[13] += *v47 * v47[1];
  v165 = a3[14] + v163 * (unsigned __int128)v47[2];
  a3[14] = v164 + v165;
  v166 = __CFADD__(v164, (_QWORD)v165) + *((_QWORD *)&v165 + 1);
  v167 = a3[15] + v163 * (unsigned __int128)v47[3];
  a3[15] = v166 + v167;
  v168 = __CFADD__(v166, (_QWORD)v167) + *((_QWORD *)&v167 + 1);
  v169 = a3[16] + v163 * (unsigned __int128)v47[4];
  a3[16] = v168 + v169;
  v170 = __CFADD__(v168, (_QWORD)v169) + *((_QWORD *)&v169 + 1);
  v171 = a3[17] + v163 * (unsigned __int128)v47[5];
  a3[17] = v170 + v171;
  v172 = __CFADD__(v170, (_QWORD)v171) + *((_QWORD *)&v171 + 1);
  v173 = a3[18] + v163 * (unsigned __int128)v47[6];
  a3[18] = v172 + v173;
  v174 = __CFADD__(v172, (_QWORD)v173) + *((_QWORD *)&v173 + 1);
  v175 = a3[19] + v163 * (unsigned __int128)v47[7];
  a3[19] = v174 + v175;
  v176 = __CFADD__(v174, (_QWORD)v175) + *((_QWORD *)&v175 + 1);
  v177 = a3[20] + v163 * (unsigned __int128)v47[8];
  a3[20] = v176 + v177;
  v178 = __CFADD__(v176, (_QWORD)v177) + *((_QWORD *)&v177 + 1);
  v179 = a3[21] + v163 * (unsigned __int128)v47[9];
  a3[21] = v178 + v179;
  a3[22] = __CFADD__(v178, (_QWORD)v179) + *((_QWORD *)&v179 + 1);
  v180 = *++v47;
  v181 = (a3[15] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[15] += *v47 * v47[1];
  v182 = a3[16] + v180 * (unsigned __int128)v47[2];
  a3[16] = v181 + v182;
  v183 = __CFADD__(v181, (_QWORD)v182) + *((_QWORD *)&v182 + 1);
  v184 = a3[17] + v180 * (unsigned __int128)v47[3];
  a3[17] = v183 + v184;
  v185 = __CFADD__(v183, (_QWORD)v184) + *((_QWORD *)&v184 + 1);
  v186 = a3[18] + v180 * (unsigned __int128)v47[4];
  a3[18] = v185 + v186;
  v187 = __CFADD__(v185, (_QWORD)v186) + *((_QWORD *)&v186 + 1);
  v188 = a3[19] + v180 * (unsigned __int128)v47[5];
  a3[19] = v187 + v188;
  v189 = __CFADD__(v187, (_QWORD)v188) + *((_QWORD *)&v188 + 1);
  v190 = a3[20] + v180 * (unsigned __int128)v47[6];
  a3[20] = v189 + v190;
  v191 = __CFADD__(v189, (_QWORD)v190) + *((_QWORD *)&v190 + 1);
  v192 = a3[21] + v180 * (unsigned __int128)v47[7];
  a3[21] = v191 + v192;
  v193 = __CFADD__(v191, (_QWORD)v192) + *((_QWORD *)&v192 + 1);
  v194 = a3[22] + v180 * (unsigned __int128)v47[8];
  a3[22] = v193 + v194;
  a3[23] = __CFADD__(v193, (_QWORD)v194) + *((_QWORD *)&v194 + 1);
  v195 = *++v47;
  v196 = (a3[17] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[17] += *v47 * v47[1];
  v197 = a3[18] + v195 * (unsigned __int128)v47[2];
  a3[18] = v196 + v197;
  v198 = __CFADD__(v196, (_QWORD)v197) + *((_QWORD *)&v197 + 1);
  v199 = a3[19] + v195 * (unsigned __int128)v47[3];
  a3[19] = v198 + v199;
  v200 = __CFADD__(v198, (_QWORD)v199) + *((_QWORD *)&v199 + 1);
  v201 = a3[20] + v195 * (unsigned __int128)v47[4];
  a3[20] = v200 + v201;
  v202 = __CFADD__(v200, (_QWORD)v201) + *((_QWORD *)&v201 + 1);
  v203 = a3[21] + v195 * (unsigned __int128)v47[5];
  a3[21] = v202 + v203;
  v204 = __CFADD__(v202, (_QWORD)v203) + *((_QWORD *)&v203 + 1);
  v205 = a3[22] + v195 * (unsigned __int128)v47[6];
  a3[22] = v204 + v205;
  v206 = __CFADD__(v204, (_QWORD)v205) + *((_QWORD *)&v205 + 1);
  v207 = a3[23] + v195 * (unsigned __int128)v47[7];
  a3[23] = v206 + v207;
  a3[24] = __CFADD__(v206, (_QWORD)v207) + *((_QWORD *)&v207 + 1);
  v208 = *++v47;
  v209 = (a3[19] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[19] += *v47 * v47[1];
  v210 = a3[20] + v208 * (unsigned __int128)v47[2];
  a3[20] = v209 + v210;
  v211 = __CFADD__(v209, (_QWORD)v210) + *((_QWORD *)&v210 + 1);
  v212 = a3[21] + v208 * (unsigned __int128)v47[3];
  a3[21] = v211 + v212;
  v213 = __CFADD__(v211, (_QWORD)v212) + *((_QWORD *)&v212 + 1);
  v214 = a3[22] + v208 * (unsigned __int128)v47[4];
  a3[22] = v213 + v214;
  v215 = __CFADD__(v213, (_QWORD)v214) + *((_QWORD *)&v214 + 1);
  v216 = a3[23] + v208 * (unsigned __int128)v47[5];
  a3[23] = v215 + v216;
  v217 = __CFADD__(v215, (_QWORD)v216) + *((_QWORD *)&v216 + 1);
  v218 = a3[24] + v208 * (unsigned __int128)v47[6];
  a3[24] = v217 + v218;
  a3[25] = __CFADD__(v217, (_QWORD)v218) + *((_QWORD *)&v218 + 1);
  v219 = *++v47;
  v220 = (a3[21] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[21] += *v47 * v47[1];
  v221 = a3[22] + v219 * (unsigned __int128)v47[2];
  a3[22] = v220 + v221;
  v222 = __CFADD__(v220, (_QWORD)v221) + *((_QWORD *)&v221 + 1);
  v223 = a3[23] + v219 * (unsigned __int128)v47[3];
  a3[23] = v222 + v223;
  v224 = __CFADD__(v222, (_QWORD)v223) + *((_QWORD *)&v223 + 1);
  v225 = a3[24] + v219 * (unsigned __int128)v47[4];
  a3[24] = v224 + v225;
  v226 = __CFADD__(v224, (_QWORD)v225) + *((_QWORD *)&v225 + 1);
  v227 = a3[25] + v219 * (unsigned __int128)v47[5];
  a3[25] = v226 + v227;
  a3[26] = __CFADD__(v226, (_QWORD)v227) + *((_QWORD *)&v227 + 1);
  v228 = *++v47;
  v229 = (a3[23] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[23] += *v47 * v47[1];
  v230 = a3[24] + v228 * (unsigned __int128)v47[2];
  a3[24] = v229 + v230;
  v231 = __CFADD__(v229, (_QWORD)v230) + *((_QWORD *)&v230 + 1);
  v232 = a3[25] + v228 * (unsigned __int128)v47[3];
  a3[25] = v231 + v232;
  v233 = __CFADD__(v231, (_QWORD)v232) + *((_QWORD *)&v232 + 1);
  v234 = a3[26] + v228 * (unsigned __int128)v47[4];
  a3[26] = v233 + v234;
  a3[27] = __CFADD__(v233, (_QWORD)v234) + *((_QWORD *)&v234 + 1);
  v235 = *++v47;
  v236 = (a3[25] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[25] += *v47 * v47[1];
  v237 = a3[26] + v235 * (unsigned __int128)v47[2];
  a3[26] = v236 + v237;
  v238 = __CFADD__(v236, (_QWORD)v237) + *((_QWORD *)&v237 + 1);
  v239 = a3[27] + v235 * (unsigned __int128)v47[3];
  a3[27] = v238 + v239;
  a3[28] = __CFADD__(v238, (_QWORD)v239) + *((_QWORD *)&v239 + 1);
  v240 = *++v47;
  v241 = (a3[27] + *v47 * (unsigned __int128)v47[1]) >> 64;
  a3[27] += *v47 * v47[1];
  v242 = a3[28] + v240 * (unsigned __int128)v47[2];
  a3[28] = v241 + v242;
  a3[29] = __CFADD__(v241, (_QWORD)v242) + *((_QWORD *)&v242 + 1);
  *(_OWORD *)(a3 + 29) = a3[29] + v47[1] * (unsigned __int128)v47[2];
  a3[31] = 0LL;
  v243 = __CFADD__(*a3, *a3);
  *a3 *= 2LL;
  v244 = a3[1];
  v245 = v243 + v244;
  v243 = __CFADD__(v243, v244) | __CFADD__(v244, v245);
  a3[1] = v244 + v245;
  v246 = a3[2];
  v247 = v243 + v246;
  v243 = __CFADD__(v243, v246) | __CFADD__(v246, v247);
  a3[2] = v246 + v247;
  v248 = a3[3];
  v249 = v243 + v248;
  v243 = __CFADD__(v243, v248) | __CFADD__(v248, v249);
  a3[3] = v248 + v249;
  v250 = a3[4];
  v251 = v243 + v250;
  v243 = __CFADD__(v243, v250) | __CFADD__(v250, v251);
  a3[4] = v250 + v251;
  v252 = a3[5];
  v253 = v243 + v252;
  v243 = __CFADD__(v243, v252) | __CFADD__(v252, v253);
  a3[5] = v252 + v253;
  v254 = a3[6];
  v255 = v243 + v254;
  v243 = __CFADD__(v243, v254) | __CFADD__(v254, v255);
  a3[6] = v254 + v255;
  v256 = a3[7];
  v257 = v243 + v256;
  v243 = __CFADD__(v243, v256) | __CFADD__(v256, v257);
  a3[7] = v256 + v257;
  v258 = a3[8];
  v259 = v243 + v258;
  v243 = __CFADD__(v243, v258) | __CFADD__(v258, v259);
  a3[8] = v258 + v259;
  v260 = a3[9];
  v261 = v243 + v260;
  v243 = __CFADD__(v243, v260) | __CFADD__(v260, v261);
  a3[9] = v260 + v261;
  v262 = a3[10];
  v263 = v243 + v262;
  v243 = __CFADD__(v243, v262) | __CFADD__(v262, v263);
  a3[10] = v262 + v263;
  v264 = a3[11];
  v265 = v243 + v264;
  v243 = __CFADD__(v243, v264) | __CFADD__(v264, v265);
  a3[11] = v264 + v265;
  v266 = a3[12];
  v267 = v243 + v266;
  v243 = __CFADD__(v243, v266) | __CFADD__(v266, v267);
  a3[12] = v266 + v267;
  v268 = a3[13];
  v269 = v243 + v268;
  v243 = __CFADD__(v243, v268) | __CFADD__(v268, v269);
  a3[13] = v268 + v269;
  v270 = a3[14];
  v271 = v243 + v270;
  v243 = __CFADD__(v243, v270) | __CFADD__(v270, v271);
  a3[14] = v270 + v271;
  v272 = a3[15];
  v273 = v243 + v272;
  v243 = __CFADD__(v243, v272) | __CFADD__(v272, v273);
  a3[15] = v272 + v273;
  v274 = a3[16];
  v275 = v243 + v274;
  v243 = __CFADD__(v243, v274) | __CFADD__(v274, v275);
  a3[16] = v274 + v275;
  v276 = a3[17];
  v277 = v243 + v276;
  v243 = __CFADD__(v243, v276) | __CFADD__(v276, v277);
  a3[17] = v276 + v277;
  v278 = a3[18];
  v279 = v243 + v278;
  v243 = __CFADD__(v243, v278) | __CFADD__(v278, v279);
  a3[18] = v278 + v279;
  v280 = a3[19];
  v281 = v243 + v280;
  v243 = __CFADD__(v243, v280) | __CFADD__(v280, v281);
  a3[19] = v280 + v281;
  v282 = a3[20];
  v283 = v243 + v282;
  v243 = __CFADD__(v243, v282) | __CFADD__(v282, v283);
  a3[20] = v282 + v283;
  v284 = a3[21];
  v285 = v243 + v284;
  v243 = __CFADD__(v243, v284) | __CFADD__(v284, v285);
  a3[21] = v284 + v285;
  v286 = a3[22];
  v287 = v243 + v286;
  v243 = __CFADD__(v243, v286) | __CFADD__(v286, v287);
  a3[22] = v286 + v287;
  v288 = a3[23];
  v289 = v243 + v288;
  v243 = __CFADD__(v243, v288) | __CFADD__(v288, v289);
  a3[23] = v288 + v289;
  v290 = a3[24];
  v291 = v243 + v290;
  v243 = __CFADD__(v243, v290) | __CFADD__(v290, v291);
  a3[24] = v290 + v291;
  v292 = a3[25];
  v293 = v243 + v292;
  v243 = __CFADD__(v243, v292) | __CFADD__(v292, v293);
  a3[25] = v292 + v293;
  v294 = a3[26];
  v295 = v243 + v294;
  v243 = __CFADD__(v243, v294) | __CFADD__(v294, v295);
  a3[26] = v294 + v295;
  v296 = a3[27];
  v297 = v243 + v296;
  v243 = __CFADD__(v243, v296) | __CFADD__(v296, v297);
  a3[27] = v296 + v297;
  v298 = a3[28];
  v299 = v243 + v298;
  v243 = __CFADD__(v243, v298) | __CFADD__(v298, v299);
  a3[28] = v298 + v299;
  v300 = a3[29];
  v301 = v243 + v300;
  v243 = __CFADD__(v243, v300) | __CFADD__(v300, v301);
  a3[29] = v300 + v301;
  v302 = a3[30];
  v303 = v243 + v302;
  a3[30] = v302 + v303;
  a3[31] += (__CFADD__(v243, v302) | (unsigned __int8)__CFADD__(v302, v303)) + a3[31];
  v304 = 0 + *a3 + *a1 * (unsigned __int128)*a1;
  *a3 += *a1 * *a1;
  v305 = a3[1] + (unsigned __int128)*((unsigned __int64 *)&v304 + 1);
  a3[1] = v305;
  v306 = *((unsigned __int64 *)&v305 + 1) + a3[2] + a1[1] * (unsigned __int128)a1[1];
  a3[2] = v306;
  v307 = a3[3] + (unsigned __int128)*((unsigned __int64 *)&v306 + 1);
  a3[3] = v307;
  v308 = *((unsigned __int64 *)&v307 + 1) + a3[4] + a1[2] * (unsigned __int128)a1[2];
  a3[4] = v308;
  v309 = a3[5] + (unsigned __int128)*((unsigned __int64 *)&v308 + 1);
  a3[5] = v309;
  v310 = *((unsigned __int64 *)&v309 + 1) + a3[6] + a1[3] * (unsigned __int128)a1[3];
  a3[6] = v310;
  v311 = a3[7] + (unsigned __int128)*((unsigned __int64 *)&v310 + 1);
  a3[7] = v311;
  v312 = *((unsigned __int64 *)&v311 + 1) + a3[8] + a1[4] * (unsigned __int128)a1[4];
  a3[8] = v312;
  v313 = a3[9] + (unsigned __int128)*((unsigned __int64 *)&v312 + 1);
  a3[9] = v313;
  v314 = *((unsigned __int64 *)&v313 + 1) + a3[10] + a1[5] * (unsigned __int128)a1[5];
  a3[10] = v314;
  v315 = a3[11] + (unsigned __int128)*((unsigned __int64 *)&v314 + 1);
  a3[11] = v315;
  v316 = *((unsigned __int64 *)&v315 + 1) + a3[12] + a1[6] * (unsigned __int128)a1[6];
  a3[12] = v316;
  v317 = a3[13] + (unsigned __int128)*((unsigned __int64 *)&v316 + 1);
  a3[13] = v317;
  v318 = *((unsigned __int64 *)&v317 + 1) + a3[14] + a1[7] * (unsigned __int128)a1[7];
  a3[14] = v318;
  v319 = a3[15] + (unsigned __int128)*((unsigned __int64 *)&v318 + 1);
  a3[15] = v319;
  v320 = *((unsigned __int64 *)&v319 + 1) + a3[16] + a1[8] * (unsigned __int128)a1[8];
  a3[16] = v320;
  v321 = a3[17] + (unsigned __int128)*((unsigned __int64 *)&v320 + 1);
  a3[17] = v321;
  v322 = *((unsigned __int64 *)&v321 + 1) + a3[18] + a1[9] * (unsigned __int128)a1[9];
  a3[18] = v322;
  v323 = a3[19] + (unsigned __int128)*((unsigned __int64 *)&v322 + 1);
  a3[19] = v323;
  v324 = *((unsigned __int64 *)&v323 + 1) + a3[20] + a1[10] * (unsigned __int128)a1[10];
  a3[20] = v324;
  v325 = a3[21] + (unsigned __int128)*((unsigned __int64 *)&v324 + 1);
  a3[21] = v325;
  v326 = *((unsigned __int64 *)&v325 + 1) + a3[22] + a1[11] * (unsigned __int128)a1[11];
  a3[22] = v326;
  v327 = a3[23] + (unsigned __int128)*((unsigned __int64 *)&v326 + 1);
  a3[23] = v327;
  v328 = *((unsigned __int64 *)&v327 + 1) + a3[24] + a1[12] * (unsigned __int128)a1[12];
  a3[24] = v328;
  v329 = a3[25] + (unsigned __int128)*((unsigned __int64 *)&v328 + 1);
  a3[25] = v329;
  v330 = *((unsigned __int64 *)&v329 + 1) + a3[26] + a1[13] * (unsigned __int128)a1[13];
  a3[26] = v330;
  v331 = a3[27] + (unsigned __int128)*((unsigned __int64 *)&v330 + 1);
  a3[27] = v331;
  v332 = *((unsigned __int64 *)&v331 + 1) + a3[28] + a1[14] * (unsigned __int128)a1[14];
  a3[28] = v332;
  v333 = a3[29] + (unsigned __int128)*((unsigned __int64 *)&v332 + 1);
  a3[29] = v333;
  v334 = *((unsigned __int64 *)&v333 + 1) + a3[30] + a1[15] * (unsigned __int128)a1[15];
  a3[30] = v334;
  result = a3[31] + *((_QWORD *)&v334 + 1);
  a3[31] = result;
  return result;
}
