/*
 * XREFs of sub_140AA4854 @ 0x140AA4854
 * Callers:
 *     sub_140604884 @ 0x140604884 (sub_140604884.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140601980 @ 0x140601980 (sub_140601980.c)
 *     sub_140604874 @ 0x140604874 (sub_140604874.c)
 *     DifRegisterPlugin @ 0x140604970 (DifRegisterPlugin.c)
 *     sub_140A9AF9C @ 0x140A9AF9C (sub_140A9AF9C.c)
 *     sub_140AA1A74 @ 0x140AA1A74 (sub_140AA1A74.c)
 */

__int64 sub_140AA4854()
{
  int v0; // edi
  int v1; // eax
  volatile __int32 *v2; // rcx
  int v3; // eax
  volatile __int32 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  const char *v8; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D8h]
  __int64 (__fastcall *v10)(_QWORD *, __int64, __int64); // [rsp+38h] [rbp-D0h]
  __int64 v11; // [rsp+40h] [rbp-C8h]
  const char *v12; // [rsp+48h] [rbp-C0h]
  __int64 v13; // [rsp+50h] [rbp-B8h]
  __int64 (__fastcall *v14)(_QWORD *, __int64, __int64); // [rsp+58h] [rbp-B0h]
  __int64 v15; // [rsp+60h] [rbp-A8h]
  const char *v16; // [rsp+68h] [rbp-A0h]
  __int64 v17; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall *v18)(__int64, __int64); // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  const char *v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+90h] [rbp-78h]
  __int64 (__fastcall *v22)(__int64); // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  const char *v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-58h]
  __int64 (__fastcall *v26)(__int64); // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  const char *v28; // [rsp+C8h] [rbp-40h]
  int v29; // [rsp+D0h] [rbp-38h]
  __int64 (__fastcall *v30)(__int64); // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  const char *v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  int (__fastcall *v34)(__int64); // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  const char *v36; // [rsp+108h] [rbp+0h]
  int v37; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall *v38)(__int64, __int64, __int64); // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  const char *v40; // [rsp+128h] [rbp+20h]
  int v41; // [rsp+130h] [rbp+28h]
  __int64 (__fastcall *v42)(__int64, __int64, __int64); // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  const char *v44; // [rsp+148h] [rbp+40h]
  int v45; // [rsp+150h] [rbp+48h]
  __int64 (__fastcall *v46)(__int64); // [rsp+158h] [rbp+50h]
  void (__fastcall *v47)(__int64); // [rsp+160h] [rbp+58h]
  const char *v48; // [rsp+168h] [rbp+60h]
  int v49; // [rsp+170h] [rbp+68h]
  __int64 (__fastcall *v50)(__int64); // [rsp+178h] [rbp+70h]
  void (__fastcall *v51)(__int64); // [rsp+180h] [rbp+78h]
  const char *v52; // [rsp+188h] [rbp+80h]
  int v53; // [rsp+190h] [rbp+88h]
  __int64 (__fastcall *v54)(__int64); // [rsp+198h] [rbp+90h]
  void (__fastcall *v55)(__int64); // [rsp+1A0h] [rbp+98h]
  const char *v56; // [rsp+1A8h] [rbp+A0h]
  int v57; // [rsp+1B0h] [rbp+A8h]
  void (__fastcall *v58)(__int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v59; // [rsp+1C0h] [rbp+B8h]
  const char *v60; // [rsp+1C8h] [rbp+C0h]
  int v61; // [rsp+1D0h] [rbp+C8h]
  void (__fastcall *v62)(__int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v63; // [rsp+1E0h] [rbp+D8h]
  const char *v64; // [rsp+1E8h] [rbp+E0h]
  int v65; // [rsp+1F0h] [rbp+E8h]
  void (__fastcall *v66)(__int64); // [rsp+1F8h] [rbp+F0h]
  __int64 v67; // [rsp+200h] [rbp+F8h]
  const char *v68; // [rsp+208h] [rbp+100h]
  int v69; // [rsp+210h] [rbp+108h]
  __int64 (__fastcall *v70)(__int64); // [rsp+218h] [rbp+110h]
  __int64 v71; // [rsp+220h] [rbp+118h]
  const char *v72; // [rsp+228h] [rbp+120h]
  int v73; // [rsp+230h] [rbp+128h]
  __int64 v74; // [rsp+238h] [rbp+130h]
  __int64 (__fastcall *v75)(__int64); // [rsp+240h] [rbp+138h]
  const char *v76; // [rsp+248h] [rbp+140h]
  int v77; // [rsp+250h] [rbp+148h]
  __int64 (__fastcall *v78)(__int64); // [rsp+258h] [rbp+150h]
  __int64 (__fastcall *v79)(__int64); // [rsp+260h] [rbp+158h]
  const char *v80; // [rsp+268h] [rbp+160h]
  int v81; // [rsp+270h] [rbp+168h]
  __int64 (__fastcall *v82)(__int64); // [rsp+278h] [rbp+170h]
  __int64 v83; // [rsp+280h] [rbp+178h]
  const char *v84; // [rsp+288h] [rbp+180h]
  int v85; // [rsp+290h] [rbp+188h]
  __int64 (__fastcall *v86)(__int64); // [rsp+298h] [rbp+190h]
  __int64 v87; // [rsp+2A0h] [rbp+198h]
  const char *v88; // [rsp+2A8h] [rbp+1A0h]
  int v89; // [rsp+2B0h] [rbp+1A8h]
  __int64 (__fastcall *v90)(__int64); // [rsp+2B8h] [rbp+1B0h]
  __int64 v91; // [rsp+2C0h] [rbp+1B8h]
  const char *v92; // [rsp+2C8h] [rbp+1C0h]
  int v93; // [rsp+2D0h] [rbp+1C8h]
  __int64 (__fastcall *v94)(__int64); // [rsp+2D8h] [rbp+1D0h]
  __int64 v95; // [rsp+2E0h] [rbp+1D8h]
  const char *v96; // [rsp+2E8h] [rbp+1E0h]
  int v97; // [rsp+2F0h] [rbp+1E8h]
  __int64 (__fastcall *v98)(__int64); // [rsp+2F8h] [rbp+1F0h]
  __int64 v99; // [rsp+300h] [rbp+1F8h]
  const char *v100; // [rsp+308h] [rbp+200h]
  int v101; // [rsp+310h] [rbp+208h]
  __int64 (__fastcall *v102)(__int64); // [rsp+318h] [rbp+210h]
  __int64 v103; // [rsp+320h] [rbp+218h]
  const char *v104; // [rsp+328h] [rbp+220h]
  int v105; // [rsp+330h] [rbp+228h]
  __int64 (__fastcall *v106)(__int64); // [rsp+338h] [rbp+230h]
  __int64 v107; // [rsp+340h] [rbp+238h]
  const char *v108; // [rsp+348h] [rbp+240h]
  int v109; // [rsp+350h] [rbp+248h]
  __int64 (__fastcall *v110)(__int64); // [rsp+358h] [rbp+250h]
  __int64 v111; // [rsp+360h] [rbp+258h]
  const char *v112; // [rsp+368h] [rbp+260h]
  int v113; // [rsp+370h] [rbp+268h]
  __int64 (__fastcall *v114)(__int64); // [rsp+378h] [rbp+270h]
  __int64 v115; // [rsp+380h] [rbp+278h]
  const char *v116; // [rsp+388h] [rbp+280h]
  int v117; // [rsp+390h] [rbp+288h]
  void (*v118)(); // [rsp+398h] [rbp+290h]
  __int64 v119; // [rsp+3A0h] [rbp+298h]
  const char *v120; // [rsp+3A8h] [rbp+2A0h]
  int v121; // [rsp+3B0h] [rbp+2A8h]
  void (*v122)(); // [rsp+3B8h] [rbp+2B0h]
  __int64 v123; // [rsp+3C0h] [rbp+2B8h]
  const char *v124; // [rsp+3C8h] [rbp+2C0h]
  int v125; // [rsp+3D0h] [rbp+2C8h]
  void (*v126)(); // [rsp+3D8h] [rbp+2D0h]
  __int64 v127; // [rsp+3E0h] [rbp+2D8h]
  const char *v128; // [rsp+3E8h] [rbp+2E0h]
  int v129; // [rsp+3F0h] [rbp+2E8h]
  void (*v130)(); // [rsp+3F8h] [rbp+2F0h]
  __int64 v131; // [rsp+400h] [rbp+2F8h]
  const char *v132; // [rsp+408h] [rbp+300h]
  int v133; // [rsp+410h] [rbp+308h]
  __int64 (__fastcall *v134)(__int64); // [rsp+418h] [rbp+310h]
  __int64 v135; // [rsp+420h] [rbp+318h]
  const char *v136; // [rsp+428h] [rbp+320h]
  int v137; // [rsp+430h] [rbp+328h]
  __int64 (__fastcall *v138)(__int64); // [rsp+438h] [rbp+330h]
  __int64 v139; // [rsp+440h] [rbp+338h]
  const char *v140; // [rsp+448h] [rbp+340h]
  int v141; // [rsp+450h] [rbp+348h]
  __int64 (__fastcall *v142)(__int64); // [rsp+458h] [rbp+350h]
  __int64 v143; // [rsp+460h] [rbp+358h]
  const char *v144; // [rsp+468h] [rbp+360h]
  int v145; // [rsp+470h] [rbp+368h]
  __int64 (__fastcall *v146)(__int64); // [rsp+478h] [rbp+370h]
  __int64 v147; // [rsp+480h] [rbp+378h]
  const char *v148; // [rsp+488h] [rbp+380h]
  int v149; // [rsp+490h] [rbp+388h]
  __int64 (__fastcall *v150)(__int64); // [rsp+498h] [rbp+390h]
  __int64 v151; // [rsp+4A0h] [rbp+398h]
  const char *v152; // [rsp+4A8h] [rbp+3A0h]
  int v153; // [rsp+4B0h] [rbp+3A8h]
  __int64 (__fastcall *v154)(__int64); // [rsp+4B8h] [rbp+3B0h]
  __int64 v155; // [rsp+4C0h] [rbp+3B8h]
  const char *v156; // [rsp+4C8h] [rbp+3C0h]
  int v157; // [rsp+4D0h] [rbp+3C8h]
  __int64 (__fastcall *v158)(__int64); // [rsp+4D8h] [rbp+3D0h]
  __int64 v159; // [rsp+4E0h] [rbp+3D8h]
  const char *v160; // [rsp+4E8h] [rbp+3E0h]
  int v161; // [rsp+4F0h] [rbp+3E8h]
  __int64 (__fastcall *v162)(__int64); // [rsp+4F8h] [rbp+3F0h]
  __int64 v163; // [rsp+500h] [rbp+3F8h]
  const char *v164; // [rsp+508h] [rbp+400h]
  int v165; // [rsp+510h] [rbp+408h]
  __int64 (__fastcall *v166)(__int64); // [rsp+518h] [rbp+410h]
  __int64 v167; // [rsp+520h] [rbp+418h]
  const char *v168; // [rsp+528h] [rbp+420h]
  int v169; // [rsp+530h] [rbp+428h]
  char (__fastcall *v170)(__int64); // [rsp+538h] [rbp+430h]
  __int64 v171; // [rsp+540h] [rbp+438h]
  const char *v172; // [rsp+548h] [rbp+440h]
  int v173; // [rsp+550h] [rbp+448h]
  char (__fastcall *v174)(__int64); // [rsp+558h] [rbp+450h]
  __int64 v175; // [rsp+560h] [rbp+458h]
  const char *v176; // [rsp+568h] [rbp+460h]
  int v177; // [rsp+570h] [rbp+468h]
  __int64 (__fastcall *v178)(__int64); // [rsp+578h] [rbp+470h]
  __int64 v179; // [rsp+580h] [rbp+478h]
  const char *v180; // [rsp+588h] [rbp+480h]
  int v181; // [rsp+590h] [rbp+488h]
  __int64 (__fastcall *v182)(__int64); // [rsp+598h] [rbp+490h]
  __int64 v183; // [rsp+5A0h] [rbp+498h]
  const char *v184; // [rsp+5A8h] [rbp+4A0h]
  int v185; // [rsp+5B0h] [rbp+4A8h]
  char (__fastcall *v186)(__int64); // [rsp+5B8h] [rbp+4B0h]
  __int64 v187; // [rsp+5C0h] [rbp+4B8h]
  const char *v188; // [rsp+5C8h] [rbp+4C0h]
  int v189; // [rsp+5D0h] [rbp+4C8h]
  BOOLEAN (__fastcall *v190)(__int64); // [rsp+5D8h] [rbp+4D0h]
  __int64 v191; // [rsp+5E0h] [rbp+4D8h]
  const char *v192; // [rsp+5E8h] [rbp+4E0h]
  int v193; // [rsp+5F0h] [rbp+4E8h]
  __int64 (__fastcall *v194)(__int64); // [rsp+5F8h] [rbp+4F0h]
  char (__fastcall *v195)(__int64); // [rsp+600h] [rbp+4F8h]
  const char *v196; // [rsp+608h] [rbp+500h]
  int v197; // [rsp+610h] [rbp+508h]
  char (__fastcall *v198)(__int64); // [rsp+618h] [rbp+510h]
  PVOID (__fastcall *v199)(__int64); // [rsp+620h] [rbp+518h]
  const char *v200; // [rsp+628h] [rbp+520h]
  int v201; // [rsp+630h] [rbp+528h]
  __int64 (__fastcall *v202)(__int64); // [rsp+638h] [rbp+530h]
  __int64 v203; // [rsp+640h] [rbp+538h]
  const char *v204; // [rsp+648h] [rbp+540h]
  int v205; // [rsp+650h] [rbp+548h]
  __int64 (__fastcall *v206)(__int64); // [rsp+658h] [rbp+550h]
  __int64 v207; // [rsp+660h] [rbp+558h]
  const char *v208; // [rsp+668h] [rbp+560h]
  int v209; // [rsp+670h] [rbp+568h]
  __int64 (__fastcall *v210)(__int64); // [rsp+678h] [rbp+570h]
  __int64 v211; // [rsp+680h] [rbp+578h]
  const char *v212; // [rsp+688h] [rbp+580h]
  int v213; // [rsp+690h] [rbp+588h]
  __int64 (__fastcall *v214)(__int64); // [rsp+698h] [rbp+590h]
  __int64 v215; // [rsp+6A0h] [rbp+598h]
  const char *v216; // [rsp+6A8h] [rbp+5A0h]
  int v217; // [rsp+6B0h] [rbp+5A8h]
  __int64 (__fastcall *v218)(__int64); // [rsp+6B8h] [rbp+5B0h]
  __int64 v219; // [rsp+6C0h] [rbp+5B8h]
  const char *v220; // [rsp+6C8h] [rbp+5C0h]
  int v221; // [rsp+6D0h] [rbp+5C8h]
  __int64 (__fastcall *v222)(__int64); // [rsp+6D8h] [rbp+5D0h]
  __int64 v223; // [rsp+6E0h] [rbp+5D8h]
  const char *v224; // [rsp+6E8h] [rbp+5E0h]
  int v225; // [rsp+6F0h] [rbp+5E8h]
  __int64 (__fastcall *v226)(__int64); // [rsp+6F8h] [rbp+5F0h]
  __int64 v227; // [rsp+700h] [rbp+5F8h]
  const char *v228; // [rsp+708h] [rbp+600h]
  int v229; // [rsp+710h] [rbp+608h]
  __int64 (__fastcall *v230)(__int64); // [rsp+718h] [rbp+610h]
  __int64 v231; // [rsp+720h] [rbp+618h]
  const char *v232; // [rsp+728h] [rbp+620h]
  int v233; // [rsp+730h] [rbp+628h]
  __int64 (__fastcall *v234)(__int64); // [rsp+738h] [rbp+630h]
  __int64 v235; // [rsp+740h] [rbp+638h]
  const char *v236; // [rsp+748h] [rbp+640h]
  int v237; // [rsp+750h] [rbp+648h]
  char (__fastcall *v238)(__int64); // [rsp+758h] [rbp+650h]
  __int64 v239; // [rsp+760h] [rbp+658h]
  const char *v240; // [rsp+768h] [rbp+660h]
  int v241; // [rsp+770h] [rbp+668h]
  __int64 (__fastcall *v242)(__int64); // [rsp+778h] [rbp+670h]
  void (__fastcall *v243)(__int64); // [rsp+780h] [rbp+678h]
  const char *v244; // [rsp+788h] [rbp+680h]
  int v245; // [rsp+790h] [rbp+688h]
  __int64 (__fastcall *v246)(__int64); // [rsp+798h] [rbp+690h]
  __int64 v247; // [rsp+7A0h] [rbp+698h]
  const char *v248; // [rsp+7A8h] [rbp+6A0h]
  int v249; // [rsp+7B0h] [rbp+6A8h]
  __int64 (__fastcall *v250)(__int64); // [rsp+7B8h] [rbp+6B0h]
  __int64 v251; // [rsp+7C0h] [rbp+6B8h]
  const char *v252; // [rsp+7C8h] [rbp+6C0h]
  int v253; // [rsp+7D0h] [rbp+6C8h]
  __int64 (__fastcall *v254)(__int64); // [rsp+7D8h] [rbp+6D0h]
  __int64 v255; // [rsp+7E0h] [rbp+6D8h]
  const char *v256; // [rsp+7E8h] [rbp+6E0h]
  int v257; // [rsp+7F0h] [rbp+6E8h]
  __int64 (__fastcall *v258)(__int64); // [rsp+7F8h] [rbp+6F0h]
  __int64 v259; // [rsp+800h] [rbp+6F8h]
  const char *v260; // [rsp+808h] [rbp+700h]
  int v261; // [rsp+810h] [rbp+708h]
  __int64 (__fastcall *v262)(__int64); // [rsp+818h] [rbp+710h]
  __int64 v263; // [rsp+820h] [rbp+718h]
  const char *v264; // [rsp+828h] [rbp+720h]
  int v265; // [rsp+830h] [rbp+728h]
  __int64 (__fastcall *v266)(__int64); // [rsp+838h] [rbp+730h]
  __int64 v267; // [rsp+840h] [rbp+738h]
  const char *v268; // [rsp+848h] [rbp+740h]
  int v269; // [rsp+850h] [rbp+748h]
  __int64 (__fastcall *v270)(__int64); // [rsp+858h] [rbp+750h]
  __int64 v271; // [rsp+860h] [rbp+758h]
  const char *v272; // [rsp+868h] [rbp+760h]
  int v273; // [rsp+870h] [rbp+768h]
  __int64 (__fastcall *v274)(__int64); // [rsp+878h] [rbp+770h]
  __int64 v275; // [rsp+880h] [rbp+778h]
  const char *v276; // [rsp+888h] [rbp+780h]
  int v277; // [rsp+890h] [rbp+788h]
  __int64 (__fastcall *v278)(__int64); // [rsp+898h] [rbp+790h]
  __int64 v279; // [rsp+8A0h] [rbp+798h]
  const char *v280; // [rsp+8A8h] [rbp+7A0h]
  int v281; // [rsp+8B0h] [rbp+7A8h]
  __int64 (__fastcall *v282)(__int64, __int64); // [rsp+8B8h] [rbp+7B0h]
  __int64 v283; // [rsp+8C0h] [rbp+7B8h]
  const char *v284; // [rsp+8C8h] [rbp+7C0h]
  int v285; // [rsp+8D0h] [rbp+7C8h]
  __int64 (__fastcall *v286)(__int64); // [rsp+8D8h] [rbp+7D0h]
  __int64 v287; // [rsp+8E0h] [rbp+7D8h]
  const char *v288; // [rsp+8E8h] [rbp+7E0h]
  int v289; // [rsp+8F0h] [rbp+7E8h]
  __int64 (__fastcall *v290)(__int64); // [rsp+8F8h] [rbp+7F0h]
  __int64 v291; // [rsp+900h] [rbp+7F8h]
  const char *v292; // [rsp+908h] [rbp+800h]
  int v293; // [rsp+910h] [rbp+808h]
  void (__fastcall *v294)(__int64); // [rsp+918h] [rbp+810h]
  __int64 v295; // [rsp+920h] [rbp+818h]
  const char *v296; // [rsp+928h] [rbp+820h]
  int v297; // [rsp+930h] [rbp+828h]
  void (__fastcall *v298)(__int64); // [rsp+938h] [rbp+830h]
  __int64 v299; // [rsp+940h] [rbp+838h]

  LODWORD(v9) = 313;
  v11 = 0LL;
  qword_140C1A908 = (__int64)sub_140602260;
  v8 = "MmAllocateContiguousMemory";
  v10 = sub_140AA4470;
  v12 = "MmAllocateContiguousMemoryEx";
  v14 = sub_140AA4440;
  v16 = "KeReleaseQueuedSpinLock";
  v18 = sub_140AA4270;
  v20 = "KeInitializeEvent";
  v22 = sub_140AA40C0;
  v24 = "KeInitializeMutant";
  v26 = sub_140AA40E0;
  v28 = "KeInitializeMutex";
  v30 = sub_140AA40E0;
  v32 = "KeInitializeTimerEx";
  v34 = sub_140AA4120;
  v36 = "KeWaitForSingleObject";
  v38 = sub_140AA4410;
  v40 = "KeWaitForMultipleObjects";
  v42 = sub_140AA43E0;
  v44 = "ExInitializeLookasideListEx";
  v46 = sub_140AA3CA0;
  v47 = sub_140AA3CF0;
  v48 = "ExInitializeNPagedLookasideList";
  v50 = sub_140AA3D10;
  v51 = sub_140AA3CF0;
  v52 = "ExInitializePagedLookasideList";
  v54 = sub_140AA3D10;
  v55 = sub_140AA3CF0;
  v56 = "ExDeletePagedLookasideList";
  LODWORD(v13) = 314;
  v15 = 0LL;
  LODWORD(v17) = 284;
  v19 = 0LL;
  v21 = 251;
  v23 = 0LL;
  v25 = 253;
  v27 = 0LL;
  v29 = 254;
  v31 = 0LL;
  v33 = 257;
  v35 = 0LL;
  v37 = 310;
  v39 = 0LL;
  v41 = 309;
  v43 = 0LL;
  v45 = 43;
  v49 = 44;
  v53 = 45;
  v57 = 32;
  v59 = 0LL;
  v58 = sub_140AA3C20;
  v60 = "ExDeleteNPagedLookasideList";
  v62 = sub_140AA3C20;
  v64 = "ExDeleteLookasideListEx";
  v66 = sub_140AA3C20;
  v68 = "ObReferenceObjectByPointer";
  v70 = sub_140AA47B0;
  v72 = "ObReferenceObjectByHandle";
  v75 = sub_140AA4700;
  v76 = "ObfReferenceObject";
  v78 = sub_140AA4290;
  v79 = sub_140AA4820;
  v80 = "ObfReferenceObjectWithTag";
  v82 = sub_140AA4800;
  v84 = "ObfDereferenceObject";
  v86 = sub_140AA4290;
  v88 = "ObfDereferenceObjectWithTag";
  v90 = sub_140AA4800;
  v92 = "ObGetObjectSecurity";
  v94 = sub_140AA46E0;
  v96 = "ObReferenceObjectByPointerWithTag";
  v98 = sub_140AA4790;
  v100 = "KeReleaseSpinLock";
  v102 = sub_140AA42B0;
  v104 = "KeAcquireSpinLockAtDpcLevel";
  v106 = sub_140602240;
  v108 = "KeReleaseSpinLockFromDpcLevel";
  v110 = sub_140AA4290;
  v61 = 31;
  v63 = 0LL;
  v65 = 30;
  v67 = 0LL;
  v69 = 360;
  v71 = 0LL;
  v73 = 358;
  v74 = 0LL;
  v77 = 365;
  v81 = 366;
  v83 = 0LL;
  v85 = 363;
  v87 = 0LL;
  v89 = 364;
  v91 = 0LL;
  v93 = 357;
  v95 = 0LL;
  v97 = 361;
  v99 = 0LL;
  v101 = 286;
  v103 = 0LL;
  v105 = 238;
  v107 = 0LL;
  v109 = 288;
  v111 = 0LL;
  v112 = "KeAcquireSpinLockRaiseToDpc";
  v114 = sub_140AA4090;
  v116 = "IoConnectInterrupt";
  v118 = nullsub_11;
  v120 = "IoDisconnectInterrupt";
  v122 = nullsub_11;
  v124 = "IoConnectInterruptEx";
  v126 = nullsub_11;
  v128 = "IoDisconnectInterruptEx";
  v130 = nullsub_11;
  v132 = "KeTryToAcquireQueuedSpinLockRaiseToSynch";
  v134 = sub_140AA4070;
  v136 = "KeAcquireQueuedSpinLockRaiseToSynch";
  v138 = sub_140AA4070;
  v140 = "KeAcquireInStackQueuedSpinLockRaiseToSynch";
  v142 = sub_140AA3FF0;
  v144 = "KeTryToAcquireQueuedSpinLock";
  v146 = sub_140AA4180;
  v148 = "KeAcquireInStackQueuedSpinLock";
  v150 = sub_140AA4030;
  v152 = "KeRaiseIrqlToDpcLevel";
  v154 = sub_140AA4180;
  v156 = "KeReleaseMutex";
  v158 = sub_140AA4250;
  v160 = "KeInsertQueueDpc";
  v162 = sub_140AA4160;
  v164 = "KeRemoveQueueDpc";
  v113 = 240;
  v115 = 0LL;
  v117 = 143;
  v119 = 0LL;
  v121 = 158;
  v123 = 0LL;
  v125 = 144;
  v127 = 0LL;
  v129 = 159;
  v131 = 0LL;
  v133 = 307;
  v135 = 0LL;
  v137 = 237;
  v139 = 0LL;
  v141 = 234;
  v143 = 0LL;
  v145 = 306;
  v147 = 0LL;
  v149 = 231;
  v151 = 0LL;
  v153 = 270;
  v155 = 0LL;
  v157 = 283;
  v159 = 0LL;
  v161 = 262;
  v163 = 0LL;
  v165 = 293;
  v166 = sub_140AA4320;
  v168 = "KeTryToAcquireSpinLockAtDpcLevel";
  v170 = sub_140AA4380;
  v172 = "KeAcquireInStackQueuedSpinLockAtDpcLevel";
  v174 = sub_140AA3F40;
  v176 = "KeAcquireInStackQueuedSpinLockForDpc";
  v178 = sub_140AA3FB0;
  v180 = "KeSetEvent";
  v182 = sub_140AA4340;
  v184 = "IoFreeMdl";
  v186 = sub_140AA3E60;
  v188 = "IoInitializeWorkItem";
  v190 = sub_140AA3EB0;
  v192 = "ExInitializeResourceLite";
  v194 = sub_140AA3D60;
  v195 = sub_140AA3D80;
  v196 = "ExDeleteResourceLite";
  v198 = sub_140AA3C40;
  v199 = sub_140AA3C60;
  v200 = "ExReleaseFastMutex";
  v202 = sub_140AA3DC0;
  v204 = "ExAcquireFastMutexUnsafe";
  v206 = sub_140AA3BE0;
  v208 = "ExReleaseFastMutexUnsafe";
  v210 = sub_140AA3DA0;
  v212 = "ExfAcquirePushLockExclusive";
  v214 = sub_140AA3E20;
  v216 = "ExfAcquirePushLockShared";
  v167 = 0LL;
  v169 = 308;
  v171 = 0LL;
  v173 = 232;
  v175 = 0LL;
  v177 = 233;
  v179 = 0LL;
  v181 = 298;
  v183 = 0LL;
  v185 = 162;
  v187 = 0LL;
  v189 = 180;
  v191 = 0LL;
  v193 = 46;
  v197 = 33;
  v201 = 61;
  v203 = 0LL;
  v205 = 12;
  v207 = 0LL;
  v209 = 62;
  v211 = 0LL;
  v213 = 79;
  v215 = 0LL;
  v217 = 80;
  v219 = 0LL;
  v218 = sub_140AA3E20;
  v220 = "ExfTryAcquirePushLockShared";
  v222 = sub_140AA3E20;
  v224 = "ExfReleasePushLock";
  v226 = sub_140AA3E40;
  v228 = "ExfTryToWakePushLock";
  v230 = sub_140AA3E40;
  v232 = "ExfReleasePushLockShared";
  v234 = sub_140AA3E40;
  v236 = "MmUnmapLockedPages";
  v238 = sub_140AA4550;
  v240 = "MmBuildMdlForNonPagedPool";
  v242 = sub_140AA44A0;
  v243 = sub_140AA44E0;
  v244 = "ExAcquireResourceExclusiveLite";
  v246 = sub_140AA3C00;
  v248 = "ExAcquireResourceSharedLite";
  v250 = sub_140AA3C00;
  v252 = "ExAcquireSharedStarveExclusive";
  v254 = sub_140AA3C00;
  v256 = "ExAcquireSharedWaitForExclusive";
  v258 = sub_140AA3C00;
  v260 = "ExReleaseResourceLite";
  v262 = sub_140AA3DE0;
  v264 = "ExReleaseResourceAndLeaveCriticalRegion";
  v266 = sub_140AA3DE0;
  v268 = "ExReleaseResourceAndLeavePriorityRegion";
  v270 = sub_140AA3DE0;
  v221 = 83;
  v223 = 0LL;
  v225 = 81;
  v227 = 0LL;
  v229 = 84;
  v231 = 0LL;
  v233 = 82;
  v235 = 0LL;
  v237 = 347;
  v239 = 0LL;
  v241 = 321;
  v245 = 13;
  v247 = 0LL;
  v249 = 14;
  v251 = 0LL;
  v253 = 19;
  v255 = 0LL;
  v257 = 20;
  v259 = 0LL;
  v261 = 66;
  v263 = 0LL;
  v265 = 63;
  v267 = 0LL;
  v269 = 64;
  v271 = 0LL;
  v272 = "ExReleaseResourceForThreadLite";
  v273 = 65;
  v274 = sub_140AA3E00;
  v275 = 0LL;
  v276 = "KeSynchronizeExecution";
  v277 = 303;
  v278 = sub_140AA4360;
  v279 = 0LL;
  v280 = "KeReleaseInStackQueuedSpinLock";
  v282 = sub_140AA41F0;
  v284 = "KeReleaseMutant";
  v286 = sub_140AA4250;
  v288 = "KeInitializeSemaphore";
  v290 = sub_140AA4100;
  v292 = "KeReleaseInStackQueuedSpinLockFromDpcLevel";
  v294 = sub_140AA41A0;
  v296 = "KeReleaseInStackQueuedSpinLockForDpc";
  v298 = sub_140AA41A0;
  v281 = 278;
  v283 = 0LL;
  v285 = 282;
  v287 = 0LL;
  v289 = 255;
  v291 = 0LL;
  v293 = 280;
  v295 = 0LL;
  v297 = 279;
  v299 = 0LL;
  v0 = DifRegisterPlugin((__int64)&v8, 0x49u, 0xBu, &unk_140C1A900);
  if ( v0 >= 0 )
  {
    v1 = sub_140601980(&unk_140D577F0, 96LL, 0LL, (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))sub_140A7C3C0);
    v2 = &dword_140D5756C;
    if ( v1 < 0 )
      v2 = &dword_140D57578;
    _InterlockedExchange(v2, 1);
    v3 = sub_140601980(&qword_140D577C8, 104LL, 0LL, (void (__cdecl *)(_RTL_AVL_TABLE *, PVOID))sub_140A7C3C0);
    v4 = &dword_140D57574;
    if ( v3 < 0 )
      v4 = &dword_140D575B8;
    _InterlockedExchange(v4, 1);
    if ( !sub_140604874() )
      sub_140AA1A74(v6, v5);
    sub_140A9AF9C();
  }
  return (unsigned int)v0;
}
