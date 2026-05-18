/*
 * XREFs of sub_1800A956C @ 0x1800A956C
 * Callers:
 *     sub_180089820 @ 0x180089820 (sub_180089820.c)
 *     sub_18008C900 @ 0x18008C900 (sub_18008C900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180048A80 @ 0x180048A80 (sub_180048A80.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_180056B84 @ 0x180056B84 (sub_180056B84.c)
 *     sub_180056C78 @ 0x180056C78 (sub_180056C78.c)
 *     sub_180067498 @ 0x180067498 (sub_180067498.c)
 *     sub_180068694 @ 0x180068694 (sub_180068694.c)
 *     sub_18006C3A8 @ 0x18006C3A8 (sub_18006C3A8.c)
 *     sub_1800956D8 @ 0x1800956D8 (sub_1800956D8.c)
 *     sub_180095740 @ 0x180095740 (sub_180095740.c)
 *     sub_180095EA0 @ 0x180095EA0 (sub_180095EA0.c)
 *     sub_180095F34 @ 0x180095F34 (sub_180095F34.c)
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 */

// Hidden C++ exception states: #wind=57
__int64 __fastcall sub_1800A956C(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // r12
  __int64 *v6; // rax
  __int64 v7; // r15
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // r9
  int v22; // ecx
  int v23; // eax
  __int64 *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // r13
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r12
  __int64 v32; // r15
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rdi
  __int64 v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 *v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // r14
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rdi
  __int64 v63; // r15
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 *v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 *v70; // rax
  __int64 v71; // rdi
  __int64 v72; // r14
  __int64 v73; // rax
  __int64 *v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 *v78; // rax
  __int64 v79; // rdi
  __int64 v80; // r14
  __int64 v81; // rax
  __int64 *v82; // rax
  __int64 v83; // rsi
  __int64 v84; // r15
  __int64 v85; // rax
  __int64 *v86; // rax
  __int64 v87; // rbx
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 *v90; // rax
  __int64 v91; // rax
  __int64 v93; // [rsp+30h] [rbp-D0h]
  __int128 v94; // [rsp+38h] [rbp-C8h] BYREF
  int v95; // [rsp+50h] [rbp-B0h]
  __int64 v96; // [rsp+58h] [rbp-A8h]
  __int64 *v97; // [rsp+60h] [rbp-A0h]
  __int128 v98; // [rsp+70h] [rbp-90h] BYREF
  __int64 v99; // [rsp+80h] [rbp-80h]
  __int64 v100; // [rsp+88h] [rbp-78h]
  __int64 v101; // [rsp+90h] [rbp-70h]
  __int64 v102; // [rsp+98h] [rbp-68h]
  __int64 v103; // [rsp+A0h] [rbp-60h]
  __int64 v104; // [rsp+A8h] [rbp-58h]
  __int64 v105; // [rsp+B0h] [rbp-50h]
  __int64 v106; // [rsp+B8h] [rbp-48h]
  __int64 v107; // [rsp+C0h] [rbp-40h]
  __int64 v108; // [rsp+C8h] [rbp-38h]
  __int64 v109; // [rsp+D0h] [rbp-30h]
  __int64 v110; // [rsp+D8h] [rbp-28h]
  __int64 v111; // [rsp+E0h] [rbp-20h]
  __int64 v112; // [rsp+E8h] [rbp-18h]
  __int64 *v113; // [rsp+F0h] [rbp-10h]
  __int64 *v114; // [rsp+F8h] [rbp-8h]
  __int64 v115[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v116[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v117[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v118[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v119[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v120[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v121[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v122[2]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v123[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v124[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v125[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v126[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v127[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v128[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v129; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v130; // [rsp+1E4h] [rbp+E4h]
  int v131; // [rsp+1ECh] [rbp+ECh]
  int v132; // [rsp+1F0h] [rbp+F0h]
  int v133; // [rsp+1F4h] [rbp+F4h]
  char v134; // [rsp+1F8h] [rbp+F8h]
  __int128 v135; // [rsp+1FCh] [rbp+FCh]
  __int128 v136; // [rsp+20Ch] [rbp+10Ch]
  int v137; // [rsp+21Ch] [rbp+11Ch]
  char v138; // [rsp+220h] [rbp+120h]
  int v139; // [rsp+224h] [rbp+124h]
  __m128i v140; // [rsp+230h] [rbp+130h] BYREF
  __m128i v141; // [rsp+240h] [rbp+140h] BYREF
  __m128i v142; // [rsp+250h] [rbp+150h] BYREF
  __m128i v143; // [rsp+260h] [rbp+160h] BYREF
  __m128i v144; // [rsp+270h] [rbp+170h] BYREF
  __m128i v145; // [rsp+280h] [rbp+180h] BYREF
  __m128i v146; // [rsp+290h] [rbp+190h] BYREF
  __m128i v147; // [rsp+2A0h] [rbp+1A0h] BYREF
  __m128i v148; // [rsp+2B0h] [rbp+1B0h] BYREF
  __m128i v149; // [rsp+2C0h] [rbp+1C0h] BYREF
  __m128i v150; // [rsp+2D0h] [rbp+1D0h] BYREF
  __m128i v151; // [rsp+2E0h] [rbp+1E0h] BYREF
  __m128i v152; // [rsp+2F0h] [rbp+1F0h] BYREF
  _QWORD v153[2]; // [rsp+300h] [rbp+200h] BYREF
  __int128 v154; // [rsp+310h] [rbp+210h] BYREF
  _QWORD v155[2]; // [rsp+320h] [rbp+220h] BYREF
  _QWORD v156[2]; // [rsp+330h] [rbp+230h] BYREF
  _QWORD v157[2]; // [rsp+340h] [rbp+240h] BYREF
  _QWORD v158[2]; // [rsp+350h] [rbp+250h] BYREF
  _QWORD v159[2]; // [rsp+360h] [rbp+260h] BYREF
  _QWORD v160[2]; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v161[2]; // [rsp+380h] [rbp+280h] BYREF
  _QWORD v162[2]; // [rsp+390h] [rbp+290h] BYREF
  _QWORD v163[2]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _QWORD v164[2]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _QWORD v165[2]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _QWORD v166[2]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _QWORD v167[2]; // [rsp+3E0h] [rbp+2E0h] BYREF
  _QWORD v168[2]; // [rsp+3F0h] [rbp+2F0h] BYREF
  __m128i v169; // [rsp+400h] [rbp+300h] BYREF
  int v170; // [rsp+410h] [rbp+310h] BYREF
  __int64 v171; // [rsp+418h] [rbp+318h]
  __int128 v172; // [rsp+420h] [rbp+320h]
  __int64 v173; // [rsp+430h] [rbp+330h]
  __int64 v174; // [rsp+438h] [rbp+338h]
  int v175; // [rsp+440h] [rbp+340h] BYREF
  __int64 v176; // [rsp+448h] [rbp+348h]
  __int128 v177; // [rsp+450h] [rbp+350h]
  __int64 v178; // [rsp+460h] [rbp+360h]
  __int64 v179; // [rsp+468h] [rbp+368h]
  int v180; // [rsp+470h] [rbp+370h] BYREF
  __int64 v181; // [rsp+478h] [rbp+378h]
  __int128 v182; // [rsp+480h] [rbp+380h]
  __int64 v183; // [rsp+490h] [rbp+390h]
  __int64 v184; // [rsp+498h] [rbp+398h]
  int v185; // [rsp+4A0h] [rbp+3A0h] BYREF
  __int64 v186; // [rsp+4A8h] [rbp+3A8h]
  __int128 v187; // [rsp+4B0h] [rbp+3B0h]
  __int64 v188; // [rsp+4C0h] [rbp+3C0h]
  __int64 v189; // [rsp+4C8h] [rbp+3C8h]
  int v190; // [rsp+4D0h] [rbp+3D0h] BYREF
  __int64 v191; // [rsp+4D8h] [rbp+3D8h]
  __int128 v192; // [rsp+4E0h] [rbp+3E0h]
  __int64 v193; // [rsp+4F0h] [rbp+3F0h]
  __int64 v194; // [rsp+4F8h] [rbp+3F8h]
  int v195; // [rsp+500h] [rbp+400h] BYREF
  __int64 v196; // [rsp+508h] [rbp+408h]
  __int128 v197; // [rsp+510h] [rbp+410h]
  __int64 v198; // [rsp+520h] [rbp+420h]
  __int64 v199; // [rsp+528h] [rbp+428h]
  int v200; // [rsp+530h] [rbp+430h] BYREF
  __int64 v201; // [rsp+538h] [rbp+438h]
  __int128 v202; // [rsp+540h] [rbp+440h]
  __int64 v203; // [rsp+550h] [rbp+450h]
  __int64 v204; // [rsp+558h] [rbp+458h]
  int v205; // [rsp+560h] [rbp+460h] BYREF
  __int64 v206; // [rsp+568h] [rbp+468h]
  __int128 v207; // [rsp+570h] [rbp+470h]
  __int64 v208; // [rsp+580h] [rbp+480h]
  __int64 v209; // [rsp+588h] [rbp+488h]
  int v210; // [rsp+590h] [rbp+490h] BYREF
  __int64 v211; // [rsp+598h] [rbp+498h]
  __int128 v212; // [rsp+5A0h] [rbp+4A0h]
  __int64 v213; // [rsp+5B0h] [rbp+4B0h]
  __int64 v214; // [rsp+5B8h] [rbp+4B8h]
  int v215; // [rsp+5C0h] [rbp+4C0h] BYREF
  __int64 v216; // [rsp+5C8h] [rbp+4C8h]
  __int128 v217; // [rsp+5D0h] [rbp+4D0h]
  __int64 v218; // [rsp+5E0h] [rbp+4E0h]
  __int64 v219; // [rsp+5E8h] [rbp+4E8h]
  int v220; // [rsp+5F0h] [rbp+4F0h] BYREF
  __int64 v221; // [rsp+5F8h] [rbp+4F8h]
  __int128 v222; // [rsp+600h] [rbp+500h]
  __int64 v223; // [rsp+610h] [rbp+510h]
  __int64 v224; // [rsp+618h] [rbp+518h]
  int v225; // [rsp+620h] [rbp+520h] BYREF
  __int64 v226; // [rsp+628h] [rbp+528h]
  __int128 v227; // [rsp+630h] [rbp+530h]
  __int64 v228; // [rsp+640h] [rbp+540h]
  __int64 v229; // [rsp+648h] [rbp+548h]
  int v230; // [rsp+650h] [rbp+550h] BYREF
  __int64 v231; // [rsp+658h] [rbp+558h]
  __int128 v232; // [rsp+660h] [rbp+560h]
  __int64 v233; // [rsp+670h] [rbp+570h]
  __int64 v234; // [rsp+678h] [rbp+578h]
  int v235; // [rsp+680h] [rbp+580h] BYREF
  __int64 v236; // [rsp+688h] [rbp+588h]
  __int128 v237; // [rsp+690h] [rbp+590h]
  __int64 v238; // [rsp+6A0h] [rbp+5A0h]
  __int64 v239; // [rsp+6A8h] [rbp+5A8h]
  int v240; // [rsp+6B0h] [rbp+5B0h] BYREF
  __int64 v241; // [rsp+6B8h] [rbp+5B8h]
  __int128 v242; // [rsp+6C0h] [rbp+5C0h]
  __int64 v243; // [rsp+6D0h] [rbp+5D0h]
  __int64 v244; // [rsp+6D8h] [rbp+5D8h]
  __int64 v245; // [rsp+6E0h] [rbp+5E0h] BYREF
  _QWORD v246[2]; // [rsp+6F0h] [rbp+5F0h] BYREF
  _QWORD v247[2]; // [rsp+700h] [rbp+600h] BYREF
  _QWORD v248[2]; // [rsp+710h] [rbp+610h] BYREF
  _QWORD v249[2]; // [rsp+720h] [rbp+620h] BYREF
  _QWORD v250[2]; // [rsp+730h] [rbp+630h] BYREF
  _QWORD v251[2]; // [rsp+740h] [rbp+640h] BYREF
  _QWORD v252[2]; // [rsp+750h] [rbp+650h] BYREF
  _QWORD v253[2]; // [rsp+760h] [rbp+660h] BYREF
  _QWORD v254[2]; // [rsp+770h] [rbp+670h] BYREF
  _QWORD v255[2]; // [rsp+780h] [rbp+680h] BYREF
  _QWORD v256[2]; // [rsp+790h] [rbp+690h] BYREF
  _QWORD v257[2]; // [rsp+7A0h] [rbp+6A0h] BYREF
  _QWORD v258[2]; // [rsp+7B0h] [rbp+6B0h] BYREF
  _QWORD v259[2]; // [rsp+7C0h] [rbp+6C0h] BYREF
  __int64 v260; // [rsp+7D0h] [rbp+6D0h] BYREF
  __int64 v261; // [rsp+7E0h] [rbp+6E0h] BYREF
  __int64 v262; // [rsp+7F0h] [rbp+6F0h] BYREF
  __int64 v263; // [rsp+800h] [rbp+700h] BYREF
  __int64 v264; // [rsp+810h] [rbp+710h] BYREF
  __int64 v265; // [rsp+820h] [rbp+720h] BYREF
  __int64 v266; // [rsp+830h] [rbp+730h] BYREF
  _QWORD v267[2]; // [rsp+840h] [rbp+740h] BYREF
  __int64 v268; // [rsp+850h] [rbp+750h] BYREF
  __int64 v269; // [rsp+860h] [rbp+760h] BYREF
  __int64 v270; // [rsp+870h] [rbp+770h] BYREF
  __int64 v271; // [rsp+880h] [rbp+780h] BYREF
  __int64 v272; // [rsp+890h] [rbp+790h] BYREF
  __int64 v273; // [rsp+8A0h] [rbp+7A0h] BYREF
  __int64 v274[4]; // [rsp+8B0h] [rbp+7B0h] BYREF
  __int64 v275[4]; // [rsp+8D0h] [rbp+7D0h] BYREF
  __int64 v276[4]; // [rsp+8F0h] [rbp+7F0h] BYREF
  __int64 v277[4]; // [rsp+910h] [rbp+810h] BYREF
  __int64 v278[4]; // [rsp+930h] [rbp+830h] BYREF
  __int64 v279[4]; // [rsp+950h] [rbp+850h] BYREF
  __int64 v280[4]; // [rsp+970h] [rbp+870h] BYREF
  __int64 v281[4]; // [rsp+990h] [rbp+890h] BYREF
  __int64 v282[4]; // [rsp+9B0h] [rbp+8B0h] BYREF
  __int64 v283[4]; // [rsp+9D0h] [rbp+8D0h] BYREF
  __int64 v284[4]; // [rsp+9F0h] [rbp+8F0h] BYREF
  __int64 v285[4]; // [rsp+A10h] [rbp+910h] BYREF
  __int64 v286[4]; // [rsp+A30h] [rbp+930h] BYREF
  __int64 v287[4]; // [rsp+A50h] [rbp+950h] BYREF
  __int64 v288[4]; // [rsp+A70h] [rbp+970h] BYREF
  __int64 v289[4]; // [rsp+A90h] [rbp+990h] BYREF
  __int64 v290[4]; // [rsp+AB0h] [rbp+9B0h] BYREF
  __int64 v291[4]; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int64 v292[4]; // [rsp+AF0h] [rbp+9F0h] BYREF
  __int64 v293[4]; // [rsp+B10h] [rbp+A10h] BYREF
  __int64 v294[4]; // [rsp+B30h] [rbp+A30h] BYREF
  __int64 v295[4]; // [rsp+B50h] [rbp+A50h] BYREF
  __int64 v296[4]; // [rsp+B70h] [rbp+A70h] BYREF
  __int64 v297[4]; // [rsp+B90h] [rbp+A90h] BYREF
  __int64 v298[4]; // [rsp+BB0h] [rbp+AB0h] BYREF
  __int64 v299[4]; // [rsp+BD0h] [rbp+AD0h] BYREF
  __int64 v300[4]; // [rsp+BF0h] [rbp+AF0h] BYREF
  __int64 v301; // [rsp+C10h] [rbp+B10h] BYREF

  v5 = a1;
  v96 = a1;
  sub_18001875C(v278, (__int64)&qword_1801F5B98);
  v169.m128i_i64[0] = (__int64)v278;
  v169.m128i_i64[1] = (__int64)v279;
  sub_18006C3A8((__int64)v128, &v169);
  sub_18000B4C0((__int64)v278, 32LL, 1LL);
  v6 = sub_180067498(&v273, v128);
  v7 = sub_180056C78(a2, v6);
  v112 = v7;
  sub_18001875C(v276, (__int64)&qword_1801F5C58);
  v140.m128i_i64[0] = (__int64)v276;
  v140.m128i_i64[1] = (__int64)v277;
  sub_18006C3A8((__int64)v127, &v140);
  sub_18000B4C0((__int64)v276, 32LL, 1LL);
  v8 = sub_180067498(&v260, v127);
  v111 = sub_180056C78(a2, v8);
  sub_18001875C(v279, (__int64)&qword_1801F5C58);
  sub_18001875C(v280, (__int64)&qword_1801F5B98);
  v141.m128i_i64[0] = (__int64)v279;
  v141.m128i_i64[1] = (__int64)v281;
  sub_18006C3A8((__int64)v126, &v141);
  sub_18000B4C0((__int64)v279, 32LL, 2LL);
  v9 = sub_180067498(&v261, v126);
  v104 = sub_180056C78(a2, v9);
  sub_18001875C(v281, (__int64)&qword_1801F5C58);
  sub_18001875C(v282, (__int64)&qword_1801F5B18);
  v142.m128i_i64[0] = (__int64)v281;
  v142.m128i_i64[1] = (__int64)v283;
  sub_18006C3A8((__int64)v125, &v142);
  sub_18000B4C0((__int64)v281, 32LL, 2LL);
  v10 = sub_180067498(&v262, v125);
  v107 = sub_180056C78(a2, v10);
  sub_18001875C(v283, (__int64)&qword_1801F5C58);
  sub_18001875C(v284, (__int64)&qword_1801F5B38);
  v143.m128i_i64[0] = (__int64)v283;
  v143.m128i_i64[1] = (__int64)v285;
  sub_18006C3A8((__int64)v124, &v143);
  sub_18000B4C0((__int64)v283, 32LL, 2LL);
  v11 = sub_180067498(&v263, v124);
  v108 = sub_180056C78(a2, v11);
  sub_18001875C(v274, (__int64)&qword_1801F5B18);
  v144.m128i_i64[0] = (__int64)v274;
  v144.m128i_i64[1] = (__int64)v275;
  sub_18006C3A8((__int64)v123, &v144);
  sub_18000B4C0((__int64)v274, 32LL, 1LL);
  v12 = sub_180067498(&v264, v123);
  v109 = sub_180056C78(a2, v12);
  sub_18001875C(v285, (__int64)&qword_1801F5B18);
  sub_18001875C(v286, (__int64)&qword_1801F5B98);
  v145.m128i_i64[0] = (__int64)v285;
  v145.m128i_i64[1] = (__int64)v287;
  sub_18006C3A8((__int64)v122, &v145);
  sub_18000B4C0((__int64)v285, 32LL, 2LL);
  v13 = sub_180067498(&v265, v122);
  v102 = sub_180056C78(a2, v13);
  sub_18001875C(v275, (__int64)&qword_1801F5B38);
  v146.m128i_i64[0] = (__int64)v275;
  v146.m128i_i64[1] = (__int64)v276;
  sub_18006C3A8((__int64)v121, &v146);
  sub_18000B4C0((__int64)v275, 32LL, 1LL);
  v14 = sub_180067498(&v266, v121);
  v110 = sub_180056C78(a2, v14);
  sub_18001875C(v287, (__int64)&qword_1801F5B38);
  sub_18001875C(v288, (__int64)&qword_1801F5B18);
  v147.m128i_i64[0] = (__int64)v287;
  v147.m128i_i64[1] = (__int64)v289;
  sub_18006C3A8((__int64)v120, &v147);
  sub_18000B4C0((__int64)v287, 32LL, 2LL);
  v15 = sub_180067498(&v268, v120);
  v106 = sub_180056C78(a2, v15);
  sub_18001875C(v291, (__int64)&qword_1801F5B38);
  sub_18001875C(v292, (__int64)&qword_1801F5B18);
  sub_18001875C(v293, (__int64)&qword_1801F5BB8);
  v148.m128i_i64[0] = (__int64)v291;
  v148.m128i_i64[1] = (__int64)v294;
  sub_18006C3A8((__int64)v119, &v148);
  sub_18000B4C0((__int64)v291, 32LL, 3LL);
  v16 = sub_180067498(&v269, v119);
  v105 = sub_180056C78(a2, v16);
  sub_18001875C(v294, (__int64)&qword_1801F5B98);
  sub_18001875C(v295, (__int64)&qword_1801F5B38);
  sub_18001875C(v296, (__int64)&qword_1801F5B18);
  v149.m128i_i64[0] = (__int64)v294;
  v149.m128i_i64[1] = (__int64)v297;
  sub_18006C3A8((__int64)v118, &v149);
  sub_18000B4C0((__int64)v294, 32LL, 3LL);
  v17 = sub_180067498(&v270, v118);
  v101 = sub_180056C78(a2, v17);
  sub_18001875C(v297, (__int64)&qword_1801F5B98);
  sub_18001875C(v298, (__int64)&qword_1801F5B38);
  sub_18001875C(v299, (__int64)&qword_1801F5B18);
  sub_18001875C(v300, (__int64)&qword_1801F5BB8);
  v150.m128i_i64[0] = (__int64)v297;
  v150.m128i_i64[1] = (__int64)&v301;
  sub_18006C3A8((__int64)v117, &v150);
  sub_18000B4C0((__int64)v297, 32LL, 4LL);
  v18 = sub_180067498(&v271, v117);
  v99 = sub_180056C78(a2, v18);
  sub_18001875C(v289, (__int64)&qword_1801F5B38);
  sub_18001875C(v290, (__int64)&qword_1801F5B98);
  v151.m128i_i64[0] = (__int64)v289;
  v151.m128i_i64[1] = (__int64)v291;
  sub_18006C3A8((__int64)v116, &v151);
  sub_18000B4C0((__int64)v289, 32LL, 2LL);
  v19 = sub_180067498(&v272, v116);
  v103 = sub_180056C78(a2, v19);
  sub_18001875C(v277, (__int64)&qword_1801F5C18);
  v152.m128i_i64[0] = (__int64)v277;
  v152.m128i_i64[1] = (__int64)v278;
  sub_18006C3A8((__int64)v115, &v152);
  sub_18000B4C0((__int64)v277, 32LL, 1LL);
  v20 = sub_180067498(&v245, v115);
  v93 = sub_180056C78(a2, v20);
  v114 = (__int64 *)sub_180056B84(a2);
  v22 = 23;
  if ( *(int *)(v5 + 104) < 40960 )
    v22 = 0;
  v23 = 0;
  if ( (v114[70] & 2) == 0 )
    v23 = v22;
  v95 = v23;
  v94 = 0LL;
  v24 = *a3;
  v97 = v24;
  v113 = a3[1];
  if ( v24 != v113 )
  {
    v25 = 0LL;
    v26 = 0LL;
    do
    {
      v27 = *v24;
      v28 = sub_180068694(*(_QWORD *)(v5 + 56), v246, v21 | *v24, 0LL, 0);
      v29 = (_QWORD *)*v28;
      v100 = v28[1];
      v30 = v100;
      *v28 = 0LL;
      v28[1] = 0LL;
      v153[0] = v25;
      *(_QWORD *)&v94 = v29;
      v153[1] = v26;
      *((_QWORD *)&v94 + 1) = v30;
      sub_180010910((__int64)v153);
      sub_180010910((__int64)v246);
      v31 = v7 | v27;
      sub_180095EA0(v29, v7 | v27);
      v32 = v96;
      v33 = *(_QWORD *)(v96 + 112);
      v170 = 0;
      v171 = v33;
      v172 = 0LL;
      v173 = 0LL;
      v174 = 0LL;
      sub_180095F34((__int64)v29, (__int64)&v170);
      v130 = 2LL;
      v131 = 0;
      v132 = 0;
      v133 = 0;
      v134 = 0;
      v135 = 0LL;
      v136 = 0LL;
      v137 = 65793;
      v138 = 1;
      v139 = 3;
      v129 = 1;
      sub_180048A80(v114, (__int64 *)&v98);
      sub_180096660((_QWORD *)v98, (__int64)&v129, 0LL);
      if ( *((_QWORD *)&v98 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v98 + 1) + 8LL));
      v154 = v98;
      sub_1800956D8((__int64)v29, &v154);
      sub_180010910((__int64)&v98);
      v34 = sub_180068694(*(_QWORD *)(v96 + 56), v247, v99 | v27, 0LL, 0);
      v35 = (_QWORD *)*v34;
      v36 = v34[1];
      *v34 = 0LL;
      v34[1] = 0LL;
      v155[0] = v29;
      *(_QWORD *)&v94 = v35;
      v155[1] = v100;
      *((_QWORD *)&v94 + 1) = v36;
      sub_180010910((__int64)v155);
      sub_180010910((__int64)v247);
      v37 = v101 | v27;
      sub_180095EA0(v35, v101 | v27);
      v38 = *(_QWORD *)(v32 + 112);
      v185 = 0;
      v186 = v38;
      v187 = 0LL;
      v188 = 0LL;
      v189 = 0LL;
      sub_180095F34((__int64)v35, (__int64)&v185);
      sub_180095740((__int64)v35, 1, 2, 1, 1);
      v39 = sub_180068694(*(_QWORD *)(v32 + 56), v248, v37, 0LL, 1);
      v40 = *v39;
      v41 = v39[1];
      *v39 = 0LL;
      v39[1] = 0LL;
      v156[0] = v35;
      *(_QWORD *)&v94 = v40;
      v156[1] = v36;
      *((_QWORD *)&v94 + 1) = v41;
      sub_180010910((__int64)v156);
      sub_180010910((__int64)v248);
      v42 = *(_QWORD *)(v32 + 112);
      v190 = 0;
      v191 = v42;
      v192 = 0LL;
      v193 = 0LL;
      v194 = 0LL;
      sub_180095F34(v40, (__int64)&v190);
      sub_180095740(v40, 23, 2, 3, 1);
      v43 = sub_180068694(*(_QWORD *)(v32 + 56), v249, v102 | v27, 0LL, 1);
      v44 = *v43;
      v45 = v43[1];
      *v43 = 0LL;
      v43[1] = 0LL;
      v157[0] = v40;
      *(_QWORD *)&v94 = v44;
      v157[1] = v41;
      *((_QWORD *)&v94 + 1) = v45;
      sub_180010910((__int64)v157);
      sub_180010910((__int64)v249);
      v46 = *(_QWORD *)(v32 + 112);
      v175 = 0;
      v176 = v46;
      v177 = 0LL;
      v178 = 0LL;
      v179 = 0LL;
      sub_180095F34(v44, (__int64)&v175);
      sub_180095740(v44, v95, 2, 3, 1);
      v47 = sub_180068694(*(_QWORD *)(v32 + 56), v250, v103 | v27, 0LL, 1);
      v48 = *v47;
      v49 = v47[1];
      *v47 = 0LL;
      v47[1] = 0LL;
      v158[0] = v44;
      *(_QWORD *)&v94 = v48;
      v158[1] = v45;
      *((_QWORD *)&v94 + 1) = v49;
      sub_180010910((__int64)v158);
      sub_180010910((__int64)v250);
      v50 = v96;
      v51 = *(_QWORD *)(v96 + 112);
      v195 = 0;
      v196 = v51;
      v197 = 0LL;
      v198 = 0LL;
      v199 = 0LL;
      sub_180095F34(v48, (__int64)&v195);
      sub_180095740(v48, 1, 2, 1, 1);
      v52 = sub_180068694(*(_QWORD *)(v96 + 56), v251, v104 | v27, 0LL, 1);
      v53 = *v52;
      v54 = v52[1];
      *v52 = 0LL;
      v52[1] = 0LL;
      v159[0] = v48;
      *(_QWORD *)&v94 = v53;
      v159[1] = v49;
      *((_QWORD *)&v94 + 1) = v54;
      sub_180010910((__int64)v159);
      sub_180010910((__int64)v251);
      v55 = *(_QWORD *)(v50 + 112);
      v200 = 0;
      v201 = v55;
      v202 = 0LL;
      v203 = 0LL;
      v204 = 0LL;
      sub_180095F34(v53, (__int64)&v200);
      sub_180095740(v53, 0, 2, 3, 15);
      v56 = v31;
      v5 = v50;
      v57 = sub_180068694(*(_QWORD *)(v50 + 56), v252, v56, 0LL, 1);
      v58 = *v57;
      v59 = v57[1];
      *v57 = 0LL;
      v57[1] = 0LL;
      v160[0] = v53;
      *(_QWORD *)&v94 = v58;
      v160[1] = v54;
      *((_QWORD *)&v94 + 1) = v59;
      sub_180010910((__int64)v160);
      sub_180010910((__int64)v252);
      v60 = *(_QWORD *)(v5 + 112);
      v205 = 0;
      v206 = v60;
      v207 = 0LL;
      v208 = 0LL;
      v209 = 0LL;
      sub_180095F34(v58, (__int64)&v205);
      sub_180095740(v58, 0, 2, 3, 1);
      v61 = sub_180068694(*(_QWORD *)(v5 + 56), v253, v105 | v27, 0LL, 0);
      v62 = (_QWORD *)*v61;
      v63 = v61[1];
      *v61 = 0LL;
      v61[1] = 0LL;
      v161[0] = v58;
      *(_QWORD *)&v94 = v62;
      v161[1] = v59;
      *((_QWORD *)&v94 + 1) = v63;
      sub_180010910((__int64)v161);
      sub_180010910((__int64)v253);
      v64 = v106 | v27;
      sub_180095EA0(v62, v106 | v27);
      v65 = *(_QWORD *)(v5 + 112);
      v210 = 0;
      v211 = v65;
      v212 = 0LL;
      v213 = 0LL;
      v214 = 0LL;
      sub_180095F34((__int64)v62, (__int64)&v210);
      sub_180095740((__int64)v62, 1, 2, 1, 15);
      v66 = sub_180068694(*(_QWORD *)(v5 + 56), v254, v64, 0LL, 1);
      v67 = *v66;
      v68 = v66[1];
      *v66 = 0LL;
      v66[1] = 0LL;
      v162[0] = v62;
      *(_QWORD *)&v94 = v67;
      v162[1] = v63;
      *((_QWORD *)&v94 + 1) = v68;
      sub_180010910((__int64)v162);
      sub_180010910((__int64)v254);
      v69 = *(_QWORD *)(v5 + 112);
      v215 = 0;
      v216 = v69;
      v217 = 0LL;
      v218 = 0LL;
      v219 = 0LL;
      sub_180095F34(v67, (__int64)&v215);
      sub_180095740(v67, 23, 2, 3, 15);
      v70 = sub_180068694(*(_QWORD *)(v5 + 56), v259, v107 | v27, 0LL, 1);
      v71 = *v70;
      v72 = v70[1];
      *v70 = 0LL;
      v70[1] = 0LL;
      v163[0] = v67;
      *(_QWORD *)&v94 = v71;
      v163[1] = v68;
      *((_QWORD *)&v94 + 1) = v72;
      sub_180010910((__int64)v163);
      sub_180010910((__int64)v259);
      v73 = *(_QWORD *)(v5 + 112);
      v180 = 0;
      v181 = v73;
      v182 = 0LL;
      v183 = 0LL;
      v184 = 0LL;
      sub_180095F34(v71, (__int64)&v180);
      sub_180095740(v71, 23, 2, 3, 15);
      v74 = sub_180068694(*(_QWORD *)(v5 + 56), v255, v108 | v27, 0LL, 1);
      v75 = *v74;
      v76 = v74[1];
      *v74 = 0LL;
      v74[1] = 0LL;
      v164[0] = v71;
      *(_QWORD *)&v94 = v75;
      v164[1] = v72;
      *((_QWORD *)&v94 + 1) = v76;
      sub_180010910((__int64)v164);
      sub_180010910((__int64)v255);
      v77 = *(_QWORD *)(v5 + 112);
      v220 = 0;
      v221 = v77;
      v222 = 0LL;
      v223 = 0LL;
      v224 = 0LL;
      sub_180095F34(v75, (__int64)&v220);
      sub_180095740(v75, 1, 2, 1, 15);
      v78 = sub_180068694(*(_QWORD *)(v5 + 56), v256, v109 | v27, 0LL, 1);
      v79 = *v78;
      v80 = v78[1];
      *v78 = 0LL;
      v78[1] = 0LL;
      v165[0] = v75;
      *(_QWORD *)&v94 = v79;
      v165[1] = v76;
      *((_QWORD *)&v94 + 1) = v80;
      sub_180010910((__int64)v165);
      sub_180010910((__int64)v256);
      v81 = *(_QWORD *)(v5 + 112);
      v225 = 0;
      v226 = v81;
      v227 = 0LL;
      v228 = 0LL;
      v229 = 0LL;
      sub_180095F34(v79, (__int64)&v225);
      sub_180095740(v79, v95, 2, 3, 15);
      v82 = sub_180068694(*(_QWORD *)(v5 + 56), v257, v110 | v27, 0LL, 1);
      v83 = *v82;
      v84 = v82[1];
      *v82 = 0LL;
      v82[1] = 0LL;
      v166[0] = v79;
      *(_QWORD *)&v94 = v83;
      v166[1] = v80;
      *((_QWORD *)&v94 + 1) = v84;
      sub_180010910((__int64)v166);
      sub_180010910((__int64)v257);
      v85 = *(_QWORD *)(v5 + 112);
      v230 = 0;
      v231 = v85;
      v232 = 0LL;
      v233 = 0LL;
      v234 = 0LL;
      sub_180095F34(v83, (__int64)&v230);
      sub_180095740(v83, 1, 2, 1, 15);
      v86 = sub_180068694(*(_QWORD *)(v5 + 56), v258, v111 | v27, 0LL, 1);
      v87 = *v86;
      v88 = v86[1];
      *v86 = 0LL;
      v86[1] = 0LL;
      v167[0] = v83;
      *(_QWORD *)&v94 = v87;
      v167[1] = v84;
      *((_QWORD *)&v94 + 1) = v88;
      sub_180010910((__int64)v167);
      sub_180010910((__int64)v258);
      v89 = *(_QWORD *)(v5 + 112);
      v235 = 0;
      v236 = v89;
      v237 = 0LL;
      v238 = 0LL;
      v239 = 0LL;
      sub_180095F34(v87, (__int64)&v235);
      sub_180095740(v87, 0, 2, 3, 15);
      v90 = sub_180068694(*(_QWORD *)(v5 + 56), v267, v27, 0LL, 1);
      v25 = *v90;
      v26 = v90[1];
      *v90 = 0LL;
      v90[1] = 0LL;
      v168[0] = v87;
      *(_QWORD *)&v94 = v25;
      v168[1] = v88;
      *((_QWORD *)&v94 + 1) = v26;
      sub_180010910((__int64)v168);
      sub_180010910((__int64)v267);
      v91 = *(_QWORD *)(v5 + 112);
      v240 = 0;
      v241 = v91;
      v242 = 0LL;
      v243 = 0LL;
      v244 = 0LL;
      sub_180095F34(v25, (__int64)&v240);
      sub_180095740(v25, 0, 2, 3, 15);
      v24 = v97 + 1;
      v97 = v24;
      v7 = v112;
      v21 = v93;
    }
    while ( v24 != v113 );
  }
  sub_180010910((__int64)&v94);
  sub_18005470C(v115, (__int64)v115);
  sub_18005470C(v116, (__int64)v116);
  sub_18005470C(v117, (__int64)v117);
  sub_18005470C(v118, (__int64)v118);
  sub_18005470C(v119, (__int64)v119);
  sub_18005470C(v120, (__int64)v120);
  sub_18005470C(v121, (__int64)v121);
  sub_18005470C(v122, (__int64)v122);
  sub_18005470C(v123, (__int64)v123);
  sub_18005470C(v124, (__int64)v124);
  sub_18005470C(v125, (__int64)v125);
  sub_18005470C(v126, (__int64)v126);
  sub_18005470C(v127, (__int64)v127);
  return sub_18005470C(v128, (__int64)v128);
}
