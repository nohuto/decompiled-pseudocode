/*
 * XREFs of sub_1406B074C @ 0x1406B074C
 * Callers:
 *     sub_1406B0324 @ 0x1406B0324 (sub_1406B0324.c)
 *     sub_1406B0448 @ 0x1406B0448 (sub_1406B0448.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_14064F9A4 @ 0x14064F9A4 (sub_14064F9A4.c)
 *     sub_1406B3B6C @ 0x1406B3B6C (sub_1406B3B6C.c)
 *     sub_140A30C68 @ 0x140A30C68 (sub_140A30C68.c)
 *     sub_140A3199C @ 0x140A3199C (sub_140A3199C.c)
 *     sub_140A31A94 @ 0x140A31A94 (sub_140A31A94.c)
 */

__int64 __fastcall sub_1406B074C(
        unsigned int a1,
        wchar_t *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        wchar_t *Str2,
        unsigned int a7,
        int *a8)
{
  size_t v8; // r10
  int v10; // edi
  unsigned int v11; // ebx
  int v12; // r12d
  int v13; // r8d
  unsigned int v14; // r9d
  int v15; // r15d
  int v16; // eax
  bool v17; // zf
  int v18; // ecx
  bool v19; // zf
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  bool v24; // cf
  int v25; // edx
  int v26; // eax
  int v27; // eax
  bool v28; // zf
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  unsigned int v31; // r9d
  unsigned int v32; // r9d
  bool v33; // zf
  bool v34; // sf
  bool v35; // of
  bool v36; // cf
  bool v37; // zf
  bool v38; // cf
  bool v39; // cf
  bool v40; // zf
  bool v41; // sf
  bool v42; // of
  bool v43; // sf
  bool v44; // of
  bool v45; // zf
  bool v46; // sf
  bool v47; // of
  unsigned int v48; // r9d
  unsigned int v49; // r9d
  unsigned int v50; // r9d
  unsigned int v51; // r9d
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  unsigned int v57; // r9d
  unsigned int v58; // r9d
  unsigned int v59; // r9d
  unsigned int v60; // r9d
  unsigned int v61; // r9d
  unsigned int v62; // r9d
  unsigned int v63; // r9d
  unsigned int v64; // r9d
  unsigned int v65; // r9d
  unsigned int v66; // r9d
  unsigned int v67; // r9d
  unsigned int v68; // r9d
  bool v69; // zf
  bool v70; // sf
  bool v71; // of
  bool v72; // sf
  bool v73; // of
  __int64 v74; // rcx
  bool v75; // sf
  bool v76; // of
  __int64 v77; // rcx
  bool v78; // zf
  bool v79; // sf
  bool v80; // of
  __int64 v81; // rcx
  bool v82; // zf
  __int64 v83; // rcx
  unsigned int v84; // r9d
  unsigned int v85; // r9d
  unsigned int v86; // r9d
  unsigned int v87; // r9d
  __m128i v88; // xmm1
  unsigned int v89; // r9d
  unsigned int v90; // r9d
  unsigned int v91; // r9d
  unsigned int v92; // r9d
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  unsigned int v97; // eax
  double v98; // xmm1_8
  bool v99; // cf
  __m128i v100; // xmm0
  unsigned int v101; // eax
  double v102; // xmm0_8
  __m128i v103; // xmm1
  unsigned int v104; // eax
  double v105; // xmm1_8
  bool v106; // cf
  bool v107; // zf
  __m128i v108; // xmm0
  unsigned int v109; // eax
  double v110; // xmm0_8
  __m128i v111; // xmm0
  unsigned int v112; // eax
  double v113; // xmm0_8
  unsigned __int64 v114; // rcx
  float v115; // xmm1_4
  unsigned int v116; // r9d
  unsigned int v117; // r9d
  unsigned int v118; // r9d
  unsigned int v119; // r9d
  __m128i v120; // xmm1
  unsigned int v121; // eax
  float v122; // xmm1_4
  __m128i v123; // xmm0
  float v124; // xmm0_4
  __m128i v125; // xmm1
  unsigned int v126; // eax
  float v127; // xmm1_4
  __m128i v128; // xmm0
  float v129; // xmm0_4
  __m128i v130; // xmm0
  unsigned int v131; // eax
  float v132; // xmm0_4
  unsigned int v133; // r9d
  unsigned int v134; // r9d
  unsigned int v135; // r9d
  unsigned int v136; // r9d
  unsigned __int64 v137; // rcx
  unsigned __int64 v138; // rcx
  unsigned __int64 v139; // rcx
  unsigned __int64 v140; // rcx
  __int64 v141; // rcx
  unsigned int v142; // r9d
  unsigned int v143; // r9d
  unsigned int v144; // r9d
  unsigned int v145; // r9d
  unsigned int v146; // ecx
  unsigned int v147; // ecx
  unsigned int v148; // ecx
  unsigned int v149; // ecx
  int v150; // ecx
  unsigned int v151; // r9d
  unsigned int v152; // r9d
  unsigned int v153; // r9d
  unsigned int v154; // r9d
  int v155; // ecx
  int v156; // ecx
  int v157; // ecx
  int v158; // ecx
  unsigned int v159; // r9d
  unsigned int v160; // r9d
  unsigned int v161; // r9d
  unsigned int v162; // r9d
  unsigned int v163; // r9d
  unsigned int v164; // r9d
  unsigned int v165; // r9d
  unsigned int v166; // r9d
  int v167; // edx
  int v168; // ecx
  int v169; // edx
  int v170; // ecx
  int v171; // edx
  int v172; // ecx
  int v173; // edx
  int v174; // ecx
  int v175; // edx
  int v176; // ecx
  unsigned int v177; // r9d
  unsigned int v178; // r9d
  unsigned int v179; // r9d
  unsigned int v180; // r9d
  wchar_t v181; // cx
  bool v182; // cf
  bool v183; // zf
  bool v184; // cf
  unsigned __int64 v185; // rcx
  bool v186; // cf
  unsigned __int64 v187; // rcx
  wchar_t v188; // cx
  bool v189; // cf
  bool v190; // zf
  double v191; // xmm1_8
  wchar_t v192; // cx
  unsigned int v193; // r9d
  unsigned int v194; // r9d
  unsigned int v195; // r9d
  unsigned int v196; // r9d
  unsigned int v197; // r9d
  unsigned int v198; // r9d
  unsigned int v199; // r9d
  unsigned int v200; // r9d
  unsigned int v201; // r9d
  unsigned int v202; // r9d
  unsigned int v203; // r9d
  unsigned int v204; // r9d
  unsigned int v205; // r9d
  unsigned int v206; // r9d
  unsigned int v207; // r9d
  unsigned int v208; // r9d
  unsigned int v209; // eax
  unsigned int v210; // eax
  unsigned int v211; // r9d
  unsigned int v212; // r9d
  unsigned int v213; // r9d
  unsigned int v214; // r9d
  unsigned int v215; // r9d
  unsigned int v216; // r9d
  unsigned int v217; // r9d
  unsigned int v218; // r9d
  unsigned int v219; // r9d
  unsigned int v220; // r9d
  unsigned int v221; // r9d
  unsigned int v222; // r9d
  unsigned int v223; // r9d
  unsigned int v224; // r9d
  unsigned int v225; // r9d
  unsigned int v226; // r9d
  unsigned int v227; // r9d
  unsigned int v228; // r9d
  unsigned int v229; // r9d
  unsigned int v230; // r9d
  unsigned int v231; // r9d
  unsigned int v232; // r9d
  unsigned int v233; // r9d
  unsigned int v234; // r9d
  wchar_t v235; // cx
  __int16 v236; // cx
  __int16 v237; // cx
  wchar_t v238; // cx
  unsigned int v239; // r9d
  unsigned int v240; // r9d
  unsigned int v241; // r9d
  unsigned int v242; // r9d
  unsigned int v243; // r9d
  unsigned int v244; // r9d
  unsigned int v245; // r9d
  unsigned int v246; // r9d
  unsigned int v247; // r9d
  unsigned int v248; // r9d
  unsigned int v249; // r9d
  unsigned int v250; // r9d
  unsigned int v251; // r9d
  unsigned int v252; // r9d
  unsigned int v253; // r9d
  unsigned int v254; // r9d
  unsigned int v255; // r9d
  unsigned int v256; // r9d
  unsigned int v257; // r9d
  unsigned int v258; // r9d
  unsigned int v259; // r9d
  unsigned int v260; // r9d
  unsigned int v261; // r9d
  unsigned int v262; // r9d
  unsigned int v263; // r9d
  unsigned int v264; // r9d
  unsigned int v265; // r9d
  unsigned int v266; // r9d
  unsigned int v267; // r9d
  unsigned int v268; // r9d
  unsigned int v269; // r9d
  unsigned int v270; // r9d
  wchar_t v271; // cx
  wchar_t v272; // cx
  __int16 v273; // cx
  unsigned int v274; // r9d
  unsigned int v275; // r9d
  unsigned int v276; // r9d
  unsigned int v277; // r9d
  __int16 v278; // dx
  __int16 v279; // dx
  __int16 v280; // dx
  __int16 v281; // dx
  unsigned int v282; // r9d
  unsigned int v283; // r9d
  unsigned int v284; // r9d
  unsigned int v285; // r9d
  unsigned int v286; // r9d
  unsigned int v287; // r9d
  unsigned int v288; // r9d
  unsigned int v289; // r9d
  unsigned int v290; // r9d
  unsigned int v291; // r9d
  unsigned int v292; // r9d
  unsigned int v293; // r9d
  unsigned int v294; // r9d
  unsigned int v295; // r9d
  unsigned int v296; // r9d
  unsigned int v297; // r9d
  unsigned int v298; // r9d
  unsigned int v299; // r9d
  unsigned int v300; // r9d
  unsigned int v301; // r9d
  unsigned int v302; // r9d
  unsigned int v303; // r9d
  unsigned int v304; // r9d
  unsigned int v305; // r9d
  unsigned int v306; // r9d
  unsigned int v307; // r9d
  unsigned int v308; // r9d
  unsigned int v309; // r9d
  unsigned int v310; // r9d
  unsigned int v311; // r9d
  unsigned int v312; // r9d
  unsigned int v313; // r9d
  unsigned int v314; // r9d
  unsigned int v315; // r9d
  unsigned int v316; // r9d
  unsigned int v317; // r9d
  unsigned int v318; // r9d
  unsigned int v319; // r9d
  unsigned int v320; // r9d
  unsigned int v321; // r9d
  unsigned int v322; // r9d
  unsigned int v323; // r9d
  unsigned int v324; // r9d
  unsigned int v325; // r9d
  unsigned int v326; // r9d
  unsigned int v327; // r9d
  unsigned int v328; // r9d
  unsigned int v329; // r9d
  unsigned int v330; // r9d
  unsigned int v331; // r9d
  unsigned int v332; // r9d
  unsigned int v333; // r9d
  unsigned int v334; // r9d
  unsigned int v335; // r9d
  unsigned int v336; // r9d
  unsigned int v337; // r9d
  unsigned int v338; // r9d
  unsigned int v339; // r9d
  unsigned int v340; // r9d
  unsigned int v341; // r9d
  unsigned int v342; // r9d
  unsigned int v343; // r9d
  unsigned int v344; // r9d
  unsigned int v345; // r9d
  unsigned int v346; // r9d
  unsigned int v347; // r9d
  unsigned int v348; // r9d
  unsigned int v349; // r9d
  unsigned int v350; // r9d
  unsigned int v351; // ecx
  unsigned int v352; // ecx
  unsigned int v353; // ecx
  unsigned int v354; // ecx
  unsigned int v355; // r9d
  unsigned int v356; // r9d
  unsigned int v357; // r9d
  unsigned int v358; // r9d
  unsigned int v359; // r9d
  unsigned int v360; // r9d
  unsigned int v361; // r9d
  unsigned int v362; // r9d
  unsigned int v363; // r9d
  unsigned int v364; // r9d
  unsigned int v365; // r9d
  unsigned int v366; // r9d
  unsigned int v367; // r9d
  unsigned int v368; // r9d
  unsigned int v369; // r9d
  unsigned int v370; // r9d
  unsigned int v371; // r9d
  unsigned int v372; // r9d
  unsigned int v373; // r9d
  unsigned int v374; // r9d
  unsigned int v375; // r9d
  unsigned int v376; // r9d
  unsigned int v377; // r9d
  unsigned int v378; // r9d
  unsigned int v379; // r9d
  unsigned int v380; // r9d
  unsigned int v381; // r9d
  unsigned int v382; // r9d
  int v383; // edx
  int v384; // ecx
  bool v385; // zf
  bool v386; // zf
  unsigned int v387; // r9d
  unsigned int v388; // r9d
  unsigned int v389; // r9d
  unsigned int v390; // r9d
  unsigned __int64 v391; // rcx
  double v392; // xmm0_8
  unsigned __int64 v393; // rcx
  double v394; // xmm1_8
  unsigned __int64 v395; // rcx
  double v396; // xmm0_8
  __int64 v397; // rcx
  unsigned __int64 v398; // rcx
  double v399; // xmm1_8
  unsigned int v400; // r9d
  unsigned int v401; // r9d
  unsigned int v402; // r9d
  unsigned int v403; // r9d
  __m128i v404; // xmm0
  __m128i v405; // xmm1
  __m128i v406; // xmm0
  __m128i v407; // xmm1
  __m128i v408; // xmm1
  unsigned int v409; // ecx
  unsigned int v410; // r9d
  unsigned int v411; // r9d
  unsigned int v412; // r9d
  unsigned int v413; // r9d
  unsigned int v414; // ecx
  unsigned int v415; // ecx
  unsigned int v416; // ecx
  unsigned int v417; // ecx
  unsigned int v418; // r9d
  unsigned int v419; // r9d
  unsigned int v420; // r9d
  unsigned int v421; // r9d
  unsigned int v422; // r9d
  unsigned int v423; // r9d
  unsigned int v424; // r9d
  unsigned int v425; // r9d
  unsigned int v426; // r9d
  unsigned int v427; // r9d
  unsigned int v428; // r9d
  unsigned int v429; // r9d
  unsigned int v430; // r9d
  unsigned int v431; // r9d
  unsigned int v432; // r9d
  unsigned int v433; // r9d
  unsigned int v434; // r9d
  unsigned int v435; // r9d
  unsigned int v436; // r9d
  unsigned int v437; // r9d
  unsigned int v438; // r9d
  unsigned int v439; // r9d
  unsigned int v440; // r9d
  unsigned int v441; // r9d
  unsigned int v442; // r9d
  unsigned int v443; // r9d
  unsigned int v444; // r9d
  unsigned int v445; // r9d
  unsigned __int64 v446; // rcx
  float v447; // xmm0_4
  unsigned __int64 v448; // rcx
  float v449; // xmm1_4
  unsigned __int64 v450; // rcx
  float v451; // xmm0_4
  unsigned __int64 v452; // rcx
  float v453; // xmm1_4
  unsigned int v454; // r9d
  unsigned int v455; // r9d
  unsigned int v456; // r9d
  unsigned int v457; // r9d
  __m128i v458; // xmm0
  __m128i v459; // xmm1
  __m128i v460; // xmm0
  __m128i v461; // xmm1
  __m128i v462; // xmm1
  unsigned int v463; // ecx
  unsigned int v464; // r9d
  unsigned int v465; // r9d
  unsigned int v466; // r9d
  unsigned int v467; // r9d
  unsigned int v468; // ecx
  unsigned int v469; // ecx
  unsigned int v470; // ecx
  unsigned int v471; // ecx
  unsigned int v472; // r9d
  unsigned int v473; // r9d
  unsigned int v474; // r9d
  unsigned int v475; // r9d
  unsigned int v476; // r9d
  unsigned int v477; // r9d
  unsigned int v478; // r9d
  unsigned int v479; // r9d
  unsigned int v480; // r9d
  unsigned int v481; // r9d
  unsigned int v482; // r9d
  unsigned int v483; // r9d
  unsigned int v484; // r9d
  unsigned int v485; // r9d
  unsigned int v486; // r9d
  unsigned int v487; // r9d
  unsigned int v488; // r9d
  unsigned int v489; // r9d
  unsigned int v490; // r9d
  unsigned int v491; // r9d
  unsigned int v492; // r9d
  unsigned int v493; // r9d
  unsigned int v494; // r9d
  unsigned int v495; // r9d
  unsigned int v496; // r9d
  unsigned int v497; // r9d
  unsigned int v498; // r9d
  unsigned int v499; // r9d
  unsigned int v500; // r9d
  unsigned int v501; // r9d
  unsigned int v502; // r9d
  unsigned int v503; // r9d
  unsigned __int64 v504; // rcx
  unsigned __int64 v505; // rcx
  unsigned int v506; // r9d
  unsigned int v507; // r9d
  unsigned int v508; // r9d
  unsigned int v509; // r9d
  unsigned int v510; // r9d
  unsigned int v511; // r9d
  unsigned int v512; // r9d
  unsigned int v513; // r9d
  unsigned int v514; // r9d
  unsigned int v515; // r9d
  unsigned int v516; // r9d
  unsigned int v517; // r9d
  unsigned int v518; // r9d
  unsigned int v519; // r9d
  unsigned int v520; // r9d
  unsigned int v521; // r9d
  unsigned int v522; // r9d
  unsigned int v523; // r9d
  unsigned int v524; // r9d
  unsigned int v525; // r9d
  unsigned int v526; // r9d
  unsigned int v527; // r9d
  unsigned int v528; // r9d
  unsigned int v529; // r9d
  unsigned __int64 v530; // rcx
  unsigned int v531; // r9d
  unsigned int v532; // r9d
  unsigned int v533; // r9d
  unsigned int v534; // r9d
  unsigned __int64 v535; // rcx
  unsigned __int64 v536; // rcx
  unsigned __int64 v537; // rcx
  unsigned __int64 v538; // rcx
  unsigned int v539; // r9d
  unsigned int v540; // r9d
  unsigned int v541; // r9d
  unsigned int v542; // r9d
  unsigned __int64 v543; // rcx
  unsigned __int64 v544; // rcx
  unsigned __int64 v545; // rcx
  unsigned __int64 v546; // rcx
  unsigned __int64 v547; // rcx
  unsigned int v548; // r9d
  unsigned int v549; // r9d
  unsigned int v550; // r9d
  unsigned int v551; // r9d
  __int64 v552; // rcx
  unsigned int v553; // r9d
  unsigned int v554; // r9d
  unsigned int v555; // r9d
  unsigned int v556; // r9d
  unsigned int v557; // r9d
  unsigned int v558; // r9d
  unsigned int v559; // r9d
  unsigned int v560; // r9d
  unsigned int v561; // r9d
  unsigned int v562; // r9d
  unsigned int v563; // r9d
  unsigned int v564; // r9d
  unsigned int v565; // r9d
  unsigned int v566; // r9d
  unsigned int v567; // r9d
  unsigned int v568; // r9d
  unsigned int v569; // r9d
  unsigned int v570; // r9d
  unsigned int v571; // r9d
  unsigned int v572; // r9d
  unsigned int v573; // r9d
  unsigned int v574; // r9d
  unsigned int v575; // r9d
  unsigned int v576; // r9d
  unsigned int v577; // r9d
  unsigned int v578; // r9d
  unsigned int v579; // r9d
  unsigned int v580; // r9d
  unsigned int v581; // r9d
  unsigned int v582; // r9d
  unsigned int v583; // r9d
  unsigned int v584; // r9d
  bool v585; // zf
  unsigned int v586; // r9d
  unsigned int v587; // r9d
  unsigned int v588; // r9d
  unsigned int v589; // r9d
  unsigned int v590; // r9d
  unsigned int v591; // r9d
  unsigned int v592; // r9d
  unsigned int v593; // r9d
  bool v594; // zf
  __int64 v595; // rcx

  v8 = a3;
  v10 = 0;
  v11 = 0;
  v12 = a4 & 0x10000;
  v13 = a4 & 0x20000;
  v14 = a4 & 0xF000FFFF;
  *a8 = 0;
  if ( v13 && a1 != 18 && a1 != 8210 && a1 != 25 )
  {
    v11 = -1073741637;
    goto LABEL_1374;
  }
  v15 = 1;
  if ( v14 == 1 )
  {
    *a8 = a1 != 0;
    goto LABEL_1374;
  }
  if ( !a1 || !a5 )
    goto LABEL_1374;
  if ( a1 > 0x1003 )
  {
    if ( a1 == 4109 )
    {
      if ( ((a5 - 13) & 0xFFFFEFFF) != 0 )
        goto LABEL_389;
      if ( v14 == 2 )
        goto LABEL_60;
      if ( v14 != 0x10000000 )
        goto LABEL_389;
      v26 = sub_14064F9A4((__int64)a2, v8, (__int64)Str2, a7);
    }
    else
    {
      if ( a1 != 8210 || ((a5 - 18) & 0xFFFFDFFF) != 0 )
        goto LABEL_389;
      switch ( v14 )
      {
        case 0x1000u:
          v26 = sub_1406B3B6C(a2);
          break;
        case 2u:
          v386 = v13 == 0;
LABEL_843:
          if ( !v386 )
            goto LABEL_389;
          goto LABEL_60;
        case 0x2000u:
        case 0x3000u:
        case 0x4000u:
          v26 = sub_140A3199C((_DWORD)a2, a5, (_DWORD)Str2, v13, v14);
          break;
        default:
          goto LABEL_389;
      }
    }
    goto LABEL_59;
  }
  if ( a1 == 4099 )
  {
LABEL_841:
    v386 = v14 == 2;
    goto LABEL_843;
  }
  if ( a1 <= 0xD )
  {
    if ( a1 == 13 )
    {
      if ( a5 == 13 && v14 == 2 )
      {
        if ( *(_DWORD *)a2 == *(_DWORD *)Str2
          && *((_DWORD *)a2 + 1) == *((_DWORD *)Str2 + 1)
          && *((_DWORD *)a2 + 2) == *((_DWORD *)Str2 + 2) )
        {
          v19 = *((_DWORD *)a2 + 3) == *((_DWORD *)Str2 + 3);
          goto LABEL_34;
        }
LABEL_13:
        v15 = 0;
LABEL_14:
        *a8 = v15;
        goto LABEL_1374;
      }
LABEL_389:
      v11 = -1073741637;
      goto LABEL_1374;
    }
    if ( a1 <= 7 )
    {
      if ( a1 == 7 )
      {
        if ( v14 - 7 > 1 )
        {
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              if ( a5 != 2 )
              {
                if ( a5 != 3 )
                {
                  if ( a5 != 4 )
                  {
                    if ( a5 != 5 )
                    {
                      v20 = a5 - 6;
                      if ( a5 == 6 )
                        goto LABEL_48;
                      goto LABEL_47;
                    }
                    v347 = v14 - 2;
                    if ( v347 )
                    {
                      v348 = v347 - 1;
                      if ( v348 )
                      {
                        v349 = v348 - 1;
                        if ( v349 )
                        {
                          v350 = v349 - 1;
                          if ( v350 )
                          {
                            if ( v350 != 1 )
                              goto LABEL_389;
                            v351 = *Str2;
                            goto LABEL_779;
                          }
                          v352 = *Str2;
                          goto LABEL_781;
                        }
                        v353 = *Str2;
                        goto LABEL_783;
                      }
                      v354 = *Str2;
                      goto LABEL_785;
                    }
                    goto LABEL_109;
                  }
                  v355 = v14 - 2;
                  if ( v355 )
                  {
                    v356 = v355 - 1;
                    if ( v356 )
                    {
                      v357 = v356 - 1;
                      if ( v357 )
                      {
                        v358 = v357 - 1;
                        if ( v358 )
                        {
                          if ( v358 != 1 )
                            goto LABEL_389;
                          v351 = (__int16)*Str2;
                          goto LABEL_779;
                        }
                        v352 = (__int16)*Str2;
LABEL_781:
                        v184 = *(_DWORD *)a2 < v352;
                        goto LABEL_339;
                      }
                      v353 = (__int16)*Str2;
LABEL_783:
                      v186 = *(_DWORD *)a2 < v353;
                      goto LABEL_343;
                    }
                    v354 = (__int16)*Str2;
LABEL_785:
                    v189 = *(_DWORD *)a2 < v354;
                    v190 = *(_DWORD *)a2 == v354;
                    goto LABEL_347;
                  }
LABEL_119:
                  v56 = (__int16)*Str2;
                  goto LABEL_155;
                }
                v359 = v14 - 2;
                if ( v359 )
                {
                  v360 = v359 - 1;
                  if ( !v360 )
                  {
                    v354 = *(unsigned __int8 *)Str2;
                    goto LABEL_785;
                  }
                  v361 = v360 - 1;
                  if ( !v361 )
                  {
                    v353 = *(unsigned __int8 *)Str2;
                    goto LABEL_783;
                  }
                  v362 = v361 - 1;
                  if ( !v362 )
                  {
                    v352 = *(unsigned __int8 *)Str2;
                    goto LABEL_781;
                  }
                  if ( v362 != 1 )
                    goto LABEL_389;
                  v351 = *(unsigned __int8 *)Str2;
LABEL_779:
                  v182 = *(_DWORD *)a2 < v351;
                  v183 = *(_DWORD *)a2 == v351;
                  goto LABEL_335;
                }
LABEL_129:
                v56 = *(unsigned __int8 *)Str2;
                goto LABEL_155;
              }
              v363 = v14 - 2;
              if ( v363 )
              {
                v364 = v363 - 1;
                if ( !v364 )
                {
                  v354 = *(char *)Str2;
                  goto LABEL_785;
                }
                v365 = v364 - 1;
                if ( !v365 )
                {
                  v353 = *(char *)Str2;
                  goto LABEL_783;
                }
                v366 = v365 - 1;
                if ( !v366 )
                {
                  v352 = *(char *)Str2;
                  goto LABEL_781;
                }
                if ( v366 != 1 )
                  goto LABEL_389;
                v351 = *(char *)Str2;
                goto LABEL_779;
              }
LABEL_154:
              v56 = *(char *)Str2;
              goto LABEL_155;
            }
LABEL_797:
            v371 = v14 - 2;
            if ( v371 )
            {
              v372 = v371 - 1;
              if ( v372 )
              {
                v373 = v372 - 1;
                if ( v373 )
                {
                  v374 = v373 - 1;
                  if ( v374 )
                  {
                    if ( v374 != 1 )
                      goto LABEL_389;
                    v93 = *(unsigned int *)a2;
LABEL_176:
                    v35 = __OFSUB__(v93, *(_QWORD *)Str2);
                    v33 = v93 == *(_QWORD *)Str2;
                    v34 = v93 - *(_QWORD *)Str2 < 0;
LABEL_177:
                    v25 = v34 ^ v35 | v33;
                    goto LABEL_53;
                  }
                  v94 = *(unsigned int *)a2;
                  goto LABEL_180;
                }
                v95 = *(unsigned int *)a2;
                goto LABEL_185;
              }
              v96 = *(unsigned int *)a2;
              goto LABEL_190;
            }
            goto LABEL_737;
          }
          if ( a5 != 9 )
          {
            if ( a5 != 10 )
            {
              if ( a5 != 11 )
              {
                if ( a5 == 14 )
                  goto LABEL_797;
                if ( a5 != 15 )
                  goto LABEL_389;
              }
              v367 = v14 - 2;
              if ( v367 )
              {
                v368 = v367 - 1;
                if ( v368 )
                {
                  v369 = v368 - 1;
                  if ( v369 )
                  {
                    v370 = v369 - 1;
                    if ( v370 )
                    {
                      if ( v370 != 1 )
                        goto LABEL_389;
                      v98 = (double)*(int *)a2;
                      goto LABEL_197;
                    }
                    v102 = (double)*(int *)a2;
LABEL_203:
                    v99 = v102 < *(double *)Str2;
                    goto LABEL_238;
                  }
                  v105 = (double)*(int *)a2;
                  goto LABEL_209;
                }
                v110 = (double)*(int *)a2;
LABEL_215:
                v106 = v110 < *(double *)Str2;
                v107 = v110 == *(double *)Str2;
                goto LABEL_248;
              }
              v113 = (double)*(int *)a2;
              goto LABEL_221;
            }
            v375 = v14 - 2;
            if ( v375 )
            {
              v376 = v375 - 1;
              if ( v376 )
              {
                v377 = v376 - 1;
                if ( v377 )
                {
                  v378 = v377 - 1;
                  if ( v378 )
                  {
                    if ( v378 != 1 )
                      goto LABEL_389;
                    v122 = (float)*(int *)a2;
                    goto LABEL_234;
                  }
                  v124 = (float)*(int *)a2;
LABEL_237:
                  v99 = v124 < *(float *)Str2;
                  goto LABEL_238;
                }
                v127 = (float)*(int *)a2;
LABEL_244:
                v106 = *(float *)Str2 < v127;
                v107 = *(float *)Str2 == v127;
                goto LABEL_248;
              }
              v129 = (float)*(int *)a2;
LABEL_247:
              v106 = v129 < *(float *)Str2;
              v107 = v129 == *(float *)Str2;
              goto LABEL_248;
            }
            v132 = (float)*(int *)a2;
            goto LABEL_254;
          }
          v379 = v14 - 2;
          if ( !v379 )
          {
LABEL_737:
            v141 = *(unsigned int *)a2;
            goto LABEL_738;
          }
          v380 = v379 - 1;
          if ( v380 )
          {
            v381 = v380 - 1;
            if ( v381 )
            {
              v382 = v381 - 1;
              if ( v382 )
              {
                if ( v382 != 1 )
                  goto LABEL_389;
                v137 = *(unsigned int *)a2;
LABEL_823:
                v36 = v137 < *(_QWORD *)Str2;
                v37 = v137 == *(_QWORD *)Str2;
                goto LABEL_90;
              }
              v138 = *(unsigned int *)a2;
              goto LABEL_825;
            }
            v139 = *(unsigned int *)a2;
            goto LABEL_827;
          }
          v140 = *(unsigned int *)a2;
          goto LABEL_829;
        }
        if ( a5 != 7 )
          goto LABEL_389;
        v383 = *(_DWORD *)a2;
        v384 = *(_DWORD *)Str2;
        if ( v14 == 7 )
          v18 = v383 & v384;
        else
          v18 = v383 | v384;
LABEL_30:
        *a8 = v18;
        goto LABEL_1374;
      }
      if ( a1 != 1 )
      {
        if ( a1 != 2 )
        {
          if ( a1 != 3 )
          {
            if ( a1 != 4 )
            {
              if ( a1 != 5 )
              {
                if ( a5 <= 8 )
                {
                  if ( a5 != 8 )
                  {
                    switch ( a5 )
                    {
                      case 2u:
                        v65 = v14 - 2;
                        if ( !v65 )
                          goto LABEL_154;
                        v66 = v65 - 1;
                        if ( !v66 )
                        {
                          v55 = *(char *)Str2;
                          goto LABEL_150;
                        }
                        v67 = v66 - 1;
                        if ( !v67 )
                        {
                          v54 = *(char *)Str2;
                          goto LABEL_145;
                        }
                        v68 = v67 - 1;
                        if ( !v68 )
                        {
                          v53 = *(char *)Str2;
                          goto LABEL_140;
                        }
                        if ( v68 != 1 )
                          goto LABEL_389;
                        v52 = *(char *)Str2;
                        break;
                      case 3u:
                        v61 = v14 - 2;
                        if ( !v61 )
                          goto LABEL_129;
                        v62 = v61 - 1;
                        if ( !v62 )
                        {
                          v55 = *(unsigned __int8 *)Str2;
                          goto LABEL_150;
                        }
                        v63 = v62 - 1;
                        if ( !v63 )
                        {
                          v54 = *(unsigned __int8 *)Str2;
                          goto LABEL_145;
                        }
                        v64 = v63 - 1;
                        if ( !v64 )
                        {
                          v53 = *(unsigned __int8 *)Str2;
                          goto LABEL_140;
                        }
                        if ( v64 != 1 )
                          goto LABEL_389;
                        v52 = *(unsigned __int8 *)Str2;
                        break;
                      case 4u:
                        v57 = v14 - 2;
                        if ( !v57 )
                          goto LABEL_119;
                        v58 = v57 - 1;
                        if ( v58 )
                        {
                          v59 = v58 - 1;
                          if ( v59 )
                          {
                            v60 = v59 - 1;
                            if ( v60 )
                            {
                              if ( v60 != 1 )
                                goto LABEL_389;
                              v52 = (__int16)*Str2;
                              break;
                            }
                            v53 = (__int16)*Str2;
LABEL_140:
                            v73 = __OFSUB__(*(_DWORD *)a2, v53);
                            v72 = *(_DWORD *)a2 - v53 < 0;
                            goto LABEL_143;
                          }
                          v54 = (__int16)*Str2;
LABEL_145:
                          v76 = __OFSUB__(*(_DWORD *)a2, v54);
                          v75 = *(_DWORD *)a2 - v54 < 0;
                          goto LABEL_148;
                        }
                        v55 = (__int16)*Str2;
LABEL_150:
                        v80 = __OFSUB__(*(_DWORD *)a2, v55);
                        v78 = *(_DWORD *)a2 == v55;
                        v79 = *(_DWORD *)a2 - v55 < 0;
                        goto LABEL_153;
                      case 5u:
                        v48 = v14 - 2;
                        if ( !v48 )
                        {
LABEL_109:
                          v56 = *Str2;
LABEL_155:
                          v82 = *(_DWORD *)a2 == v56;
LABEL_158:
                          v26 = v82;
                          goto LABEL_59;
                        }
                        v49 = v48 - 1;
                        if ( v49 )
                        {
                          v50 = v49 - 1;
                          if ( v50 )
                          {
                            v51 = v50 - 1;
                            if ( v51 )
                            {
                              if ( v51 != 1 )
                                goto LABEL_389;
                              v52 = *Str2;
                              break;
                            }
                            v53 = *Str2;
                            goto LABEL_140;
                          }
                          v54 = *Str2;
                          goto LABEL_145;
                        }
                        v55 = *Str2;
                        goto LABEL_150;
                      default:
                        v20 = a5 - 6;
                        if ( a5 != 6 )
                        {
LABEL_47:
                          if ( v20 != 1 )
                            goto LABEL_389;
LABEL_48:
                          v21 = v14 - 2;
                          if ( v21 )
                          {
                            v22 = v21 - 1;
                            if ( v22 )
                            {
                              v23 = v22 - 1;
                              if ( !v23 )
                              {
                                v24 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_52:
                                v25 = v24;
LABEL_53:
                                *a8 = v25;
                                goto LABEL_1374;
                              }
                              v346 = v23 - 1;
                              if ( v346 )
                              {
                                if ( v346 != 1 )
                                  goto LABEL_389;
                                v36 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                                v37 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                                goto LABEL_90;
                              }
                              v38 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_93:
                              v25 = !v38;
                              goto LABEL_53;
                            }
                            v39 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                            v40 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                            goto LABEL_96;
                          }
                          goto LABEL_1358;
                        }
                        v29 = v14 - 2;
                        if ( v29 )
                        {
                          v30 = v29 - 1;
                          if ( !v30 )
                          {
                            v47 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                            v45 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                            v46 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_192:
                            v25 = !(v46 ^ v47 | v45);
                            goto LABEL_53;
                          }
                          v31 = v30 - 1;
                          if ( !v31 )
                          {
                            v44 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                            v43 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_187:
                            v25 = v43 ^ v44;
                            goto LABEL_53;
                          }
                          v32 = v31 - 1;
                          if ( v32 )
                          {
                            if ( v32 != 1 )
                              goto LABEL_389;
                            v35 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                            v33 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                            v34 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                            goto LABEL_177;
                          }
                          v42 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                          v41 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
LABEL_182:
                          v25 = v41 == v42;
                          goto LABEL_53;
                        }
LABEL_1358:
                        v28 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                        goto LABEL_67;
                    }
                    v71 = __OFSUB__(*(_DWORD *)a2, v52);
                    v69 = *(_DWORD *)a2 == v52;
                    v70 = *(_DWORD *)a2 - v52 < 0;
LABEL_138:
                    v26 = v70 ^ v71 | v69;
                    goto LABEL_59;
                  }
LABEL_170:
                  v89 = v14 - 2;
                  if ( v89 )
                  {
                    v90 = v89 - 1;
                    if ( v90 )
                    {
                      v91 = v90 - 1;
                      if ( v91 )
                      {
                        v92 = v91 - 1;
                        if ( v92 )
                        {
                          if ( v92 != 1 )
                            goto LABEL_389;
                          v93 = *(int *)a2;
                          goto LABEL_176;
                        }
                        v94 = *(int *)a2;
LABEL_180:
                        v42 = __OFSUB__(v94, *(_QWORD *)Str2);
                        v41 = v94 - *(_QWORD *)Str2 < 0;
                        goto LABEL_182;
                      }
                      v95 = *(int *)a2;
                      goto LABEL_185;
                    }
                    v96 = *(int *)a2;
                    goto LABEL_190;
                  }
                  goto LABEL_264;
                }
                if ( a5 == 9 )
                {
                  v133 = v14 - 2;
                  if ( v133 )
                  {
                    v134 = v133 - 1;
                    if ( v134 )
                    {
                      v135 = v134 - 1;
                      if ( v135 )
                      {
                        v136 = v135 - 1;
                        if ( v136 )
                        {
                          if ( v136 != 1 )
                            goto LABEL_389;
                          v137 = *(int *)a2;
                          goto LABEL_823;
                        }
                        v138 = *(int *)a2;
                        goto LABEL_825;
                      }
                      v139 = *(int *)a2;
                      goto LABEL_827;
                    }
                    v140 = *(int *)a2;
                    goto LABEL_829;
                  }
LABEL_264:
                  v141 = *(int *)a2;
LABEL_738:
                  v28 = v141 == *(_QWORD *)Str2;
                  goto LABEL_67;
                }
                if ( a5 != 10 )
                {
                  if ( a5 != 11 )
                  {
                    if ( a5 == 14 )
                      goto LABEL_170;
                    if ( a5 != 15 )
                      goto LABEL_389;
                  }
                  v84 = v14 - 2;
                  if ( v84 )
                  {
                    v85 = v84 - 1;
                    if ( v85 )
                    {
                      v86 = v85 - 1;
                      if ( v86 )
                      {
                        v87 = v86 - 1;
                        if ( v87 )
                        {
                          if ( v87 != 1 )
                            goto LABEL_389;
                          v88 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                          goto LABEL_195;
                        }
                        v100 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_201:
                        *(_QWORD *)&v102 = *(_OWORD *)&_mm_cvtepi32_pd(v100);
                        goto LABEL_203;
                      }
                      v103 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                      goto LABEL_207;
                    }
                    v108 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_213:
                    *(_QWORD *)&v110 = *(_OWORD *)&_mm_cvtepi32_pd(v108);
                    goto LABEL_215;
                  }
                  v111 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                  goto LABEL_219;
                }
                v116 = v14 - 2;
                if ( v116 )
                {
                  v117 = v116 - 1;
                  if ( v117 )
                  {
                    v118 = v117 - 1;
                    if ( v118 )
                    {
                      v119 = v118 - 1;
                      if ( v119 )
                      {
                        if ( v119 != 1 )
                          goto LABEL_389;
                        v120 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                        goto LABEL_232;
                      }
                      v123 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_236:
                      LODWORD(v124) = _mm_cvtepi32_ps(v123).m128_u32[0];
                      goto LABEL_237;
                    }
                    v125 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_242:
                    LODWORD(v127) = _mm_cvtepi32_ps(v125).m128_u32[0];
                    goto LABEL_244;
                  }
                  v128 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_246:
                  LODWORD(v129) = _mm_cvtepi32_ps(v128).m128_u32[0];
                  goto LABEL_247;
                }
                v130 = _mm_cvtsi32_si128(*(_DWORD *)a2);
                goto LABEL_252;
              }
              if ( a5 <= 8 )
              {
                if ( a5 != 8 )
                {
                  if ( a5 != 2 )
                  {
                    if ( a5 != 3 )
                    {
                      if ( a5 != 4 )
                      {
                        if ( a5 != 5 )
                        {
                          if ( a5 != 6 )
                          {
                            if ( a5 != 7 )
                              goto LABEL_389;
                            v142 = v14 - 2;
                            if ( v142 )
                            {
                              v143 = v142 - 1;
                              if ( v143 )
                              {
                                v144 = v143 - 1;
                                if ( v144 )
                                {
                                  v145 = v144 - 1;
                                  if ( v145 )
                                  {
                                    if ( v145 != 1 )
                                      goto LABEL_389;
                                    v146 = *a2;
                                    goto LABEL_279;
                                  }
                                  v147 = *a2;
LABEL_282:
                                  v38 = v147 < *(_DWORD *)Str2;
                                  goto LABEL_93;
                                }
                                v148 = *a2;
LABEL_285:
                                v24 = v148 < *(_DWORD *)Str2;
                                goto LABEL_52;
                              }
                              v149 = *a2;
LABEL_288:
                              v39 = v149 < *(_DWORD *)Str2;
                              v40 = v149 == *(_DWORD *)Str2;
                              goto LABEL_96;
                            }
                            goto LABEL_289;
                          }
                          v151 = v14 - 2;
                          if ( !v151 )
                          {
LABEL_289:
                            v150 = *a2;
LABEL_291:
                            v28 = v150 == *(_DWORD *)Str2;
                            goto LABEL_67;
                          }
                          v152 = v151 - 1;
                          if ( v152 )
                          {
                            v153 = v152 - 1;
                            if ( v153 )
                            {
                              v154 = v153 - 1;
                              if ( v154 )
                              {
                                if ( v154 != 1 )
                                  goto LABEL_389;
                                v155 = *a2;
                                goto LABEL_298;
                              }
                              v156 = *a2;
LABEL_301:
                              v42 = __OFSUB__(v156, *(_DWORD *)Str2);
                              v41 = v156 - *(_DWORD *)Str2 < 0;
                              goto LABEL_182;
                            }
                            v157 = *a2;
LABEL_304:
                            v44 = __OFSUB__(v157, *(_DWORD *)Str2);
                            v43 = v157 - *(_DWORD *)Str2 < 0;
                            goto LABEL_187;
                          }
                          v158 = *a2;
LABEL_307:
                          v47 = __OFSUB__(v158, *(_DWORD *)Str2);
                          v45 = v158 == *(_DWORD *)Str2;
                          v46 = v158 - *(_DWORD *)Str2 < 0;
                          goto LABEL_192;
                        }
                        v159 = v14 - 2;
                        if ( v159 )
                        {
                          v160 = v159 - 1;
                          if ( v160 )
                          {
                            v161 = v160 - 1;
                            if ( !v161 )
                            {
                              v24 = *a2 < *Str2;
                              goto LABEL_52;
                            }
                            v162 = v161 - 1;
                            if ( v162 )
                            {
                              if ( v162 != 1 )
                                goto LABEL_389;
                              v36 = *a2 < *Str2;
                              v37 = *a2 == *Str2;
                              goto LABEL_90;
                            }
                            v38 = *a2 < *Str2;
                            goto LABEL_93;
                          }
                          v39 = *a2 < *Str2;
                          v40 = *a2 == *Str2;
                          goto LABEL_96;
                        }
LABEL_317:
                        v28 = *a2 == *Str2;
                        goto LABEL_67;
                      }
                      v163 = v14 - 2;
                      if ( v163 )
                      {
                        v164 = v163 - 1;
                        if ( v164 )
                        {
                          v165 = v164 - 1;
                          if ( v165 )
                          {
                            v166 = v165 - 1;
                            if ( v166 )
                            {
                              if ( v166 != 1 )
                                goto LABEL_389;
                              v167 = *a2;
                              v168 = (__int16)*Str2;
                              goto LABEL_358;
                            }
                            v169 = *a2;
                            v170 = (__int16)*Str2;
LABEL_363:
                            v73 = __OFSUB__(v169, v170);
                            v72 = v169 - v170 < 0;
                            goto LABEL_143;
                          }
                          v171 = *a2;
                          v172 = (__int16)*Str2;
LABEL_368:
                          v76 = __OFSUB__(v171, v172);
                          v75 = v171 - v172 < 0;
                          goto LABEL_148;
                        }
                        v173 = *a2;
                        v174 = (__int16)*Str2;
LABEL_373:
                        v80 = __OFSUB__(v173, v174);
                        v78 = v173 == v174;
                        v79 = v173 - v174 < 0;
                        goto LABEL_153;
                      }
                      v175 = *a2;
                      v176 = (__int16)*Str2;
LABEL_378:
                      v82 = v175 == v176;
                      goto LABEL_158;
                    }
                    v177 = v14 - 2;
                    if ( v177 )
                    {
                      v178 = v177 - 1;
                      if ( v178 )
                      {
                        v179 = v178 - 1;
                        if ( v179 )
                        {
                          v180 = v179 - 1;
                          if ( v180 )
                          {
                            if ( v180 != 1 )
                              goto LABEL_389;
                            v181 = *(unsigned __int8 *)Str2;
                            v182 = *a2 < v181;
                            v183 = *a2 == v181;
                            goto LABEL_335;
                          }
                          v184 = *a2 < *(unsigned __int8 *)Str2;
LABEL_339:
                          v26 = !v184;
                          goto LABEL_59;
                        }
                        v186 = *a2 < *(unsigned __int8 *)Str2;
LABEL_343:
                        v26 = v186;
                        goto LABEL_59;
                      }
                      v188 = *(unsigned __int8 *)Str2;
                      v189 = *a2 < v188;
                      v190 = *a2 == v188;
LABEL_347:
                      v26 = !v189 && !v190;
                      goto LABEL_59;
                    }
                    goto LABEL_348;
                  }
                  v193 = v14 - 2;
                  if ( v193 )
                  {
                    v194 = v193 - 1;
                    if ( v194 )
                    {
                      v195 = v194 - 1;
                      if ( v195 )
                      {
                        v196 = v195 - 1;
                        if ( v196 )
                        {
                          if ( v196 != 1 )
                            goto LABEL_389;
                          v167 = *a2;
                          goto LABEL_357;
                        }
                        v169 = *a2;
                        goto LABEL_361;
                      }
                      v171 = *a2;
                      goto LABEL_366;
                    }
                    v173 = *a2;
                    goto LABEL_371;
                  }
                  v175 = *a2;
                  goto LABEL_376;
                }
                goto LABEL_390;
              }
              if ( a5 == 9 )
              {
                v211 = v14 - 2;
                if ( v211 )
                {
                  v212 = v211 - 1;
                  if ( v212 )
                  {
                    v213 = v212 - 1;
                    if ( v213 )
                    {
                      v214 = v213 - 1;
                      if ( v214 )
                      {
                        if ( v214 != 1 )
                          goto LABEL_389;
                        v137 = *a2;
                        goto LABEL_823;
                      }
                      v138 = *a2;
                      goto LABEL_825;
                    }
                    v139 = *a2;
                    goto LABEL_827;
                  }
                  v140 = *a2;
                  goto LABEL_829;
                }
LABEL_420:
                v141 = *a2;
                goto LABEL_738;
              }
              if ( a5 != 10 )
              {
                if ( a5 != 11 )
                {
                  if ( a5 == 14 )
                  {
LABEL_390:
                    v201 = v14 - 2;
                    if ( v201 )
                    {
                      v202 = v201 - 1;
                      if ( v202 )
                      {
                        v203 = v202 - 1;
                        if ( v203 )
                        {
                          v204 = v203 - 1;
                          if ( v204 )
                          {
                            if ( v204 != 1 )
                              goto LABEL_389;
                            v93 = *a2;
                            goto LABEL_176;
                          }
                          v94 = *a2;
                          goto LABEL_180;
                        }
                        v95 = *a2;
LABEL_185:
                        v44 = __OFSUB__(v95, *(_QWORD *)Str2);
                        v43 = v95 - *(_QWORD *)Str2 < 0;
                        goto LABEL_187;
                      }
                      v96 = *a2;
LABEL_190:
                      v47 = __OFSUB__(v96, *(_QWORD *)Str2);
                      v45 = v96 == *(_QWORD *)Str2;
                      v46 = v96 - *(_QWORD *)Str2 < 0;
                      goto LABEL_192;
                    }
                    goto LABEL_420;
                  }
                  if ( a5 != 15 )
                    goto LABEL_389;
                }
                v197 = v14 - 2;
                if ( v197 )
                {
                  v198 = v197 - 1;
                  if ( v198 )
                  {
                    v199 = v198 - 1;
                    if ( v199 )
                    {
                      v200 = v199 - 1;
                      if ( v200 )
                      {
                        if ( v200 != 1 )
                          goto LABEL_389;
                        v97 = *a2;
                        goto LABEL_194;
                      }
                      v101 = *a2;
LABEL_200:
                      v100 = _mm_cvtsi32_si128(v101);
                      goto LABEL_201;
                    }
                    v104 = *a2;
LABEL_206:
                    v103 = _mm_cvtsi32_si128(v104);
LABEL_207:
                    *(_QWORD *)&v105 = *(_OWORD *)&_mm_cvtepi32_pd(v103);
LABEL_209:
                    v106 = *(double *)Str2 < v105;
                    v107 = *(double *)Str2 == v105;
                    goto LABEL_248;
                  }
                  v109 = *a2;
LABEL_212:
                  v108 = _mm_cvtsi32_si128(v109);
                  goto LABEL_213;
                }
                v112 = *a2;
LABEL_218:
                v111 = _mm_cvtsi32_si128(v112);
LABEL_219:
                *(_QWORD *)&v113 = *(_OWORD *)&_mm_cvtepi32_pd(v111);
LABEL_221:
                v19 = v113 == *(double *)Str2;
                goto LABEL_34;
              }
              v205 = v14 - 2;
              if ( v205 )
              {
                v206 = v205 - 1;
                if ( v206 )
                {
                  v207 = v206 - 1;
                  if ( v207 )
                  {
                    v208 = v207 - 1;
                    if ( v208 )
                    {
                      if ( v208 != 1 )
                        goto LABEL_389;
                      v121 = *a2;
                      goto LABEL_231;
                    }
                    v209 = *a2;
LABEL_407:
                    v123 = _mm_cvtsi32_si128(v209);
                    goto LABEL_236;
                  }
                  v126 = *a2;
LABEL_241:
                  v125 = _mm_cvtsi32_si128(v126);
                  goto LABEL_242;
                }
                v210 = *a2;
LABEL_410:
                v128 = _mm_cvtsi32_si128(v210);
                goto LABEL_246;
              }
              v131 = *a2;
LABEL_251:
              v130 = _mm_cvtsi32_si128(v131);
LABEL_252:
              LODWORD(v132) = _mm_cvtepi32_ps(v130).m128_u32[0];
LABEL_254:
              v19 = v132 == *(float *)Str2;
              goto LABEL_34;
            }
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                switch ( a5 )
                {
                  case 2u:
                    v239 = v14 - 2;
                    if ( !v239 )
                    {
                      v192 = *(char *)Str2;
                      goto LABEL_350;
                    }
                    v240 = v239 - 1;
                    if ( v240 )
                    {
                      v241 = v240 - 1;
                      if ( v241 )
                      {
                        v242 = v241 - 1;
                        if ( v242 )
                        {
                          if ( v242 != 1 )
                            goto LABEL_389;
                          v235 = *(char *)Str2;
LABEL_491:
                          v71 = __OFSUB__(*a2, v235);
                          v69 = *a2 == v235;
                          v70 = (__int16)(*a2 - v235) < 0;
                          goto LABEL_138;
                        }
                        v236 = *(char *)Str2;
LABEL_493:
                        v73 = __OFSUB__(*a2, v236);
                        v72 = (__int16)(*a2 - v236) < 0;
                        goto LABEL_143;
                      }
                      v237 = *(char *)Str2;
LABEL_495:
                      v76 = __OFSUB__(*a2, v237);
                      v75 = (__int16)(*a2 - v237) < 0;
                      goto LABEL_148;
                    }
                    v238 = *(char *)Str2;
                    break;
                  case 3u:
                    v231 = v14 - 2;
                    if ( !v231 )
                    {
LABEL_348:
                      v192 = *(unsigned __int8 *)Str2;
LABEL_350:
                      v82 = *a2 == v192;
                      goto LABEL_158;
                    }
                    v232 = v231 - 1;
                    if ( v232 )
                    {
                      v233 = v232 - 1;
                      if ( v233 )
                      {
                        v234 = v233 - 1;
                        if ( v234 )
                        {
                          if ( v234 != 1 )
                            goto LABEL_389;
                          v235 = *(unsigned __int8 *)Str2;
                          goto LABEL_491;
                        }
                        v236 = *(unsigned __int8 *)Str2;
                        goto LABEL_493;
                      }
                      v237 = *(unsigned __int8 *)Str2;
                      goto LABEL_495;
                    }
                    v238 = *(unsigned __int8 *)Str2;
                    break;
                  case 4u:
                    v227 = v14 - 2;
                    if ( v227 )
                    {
                      v228 = v227 - 1;
                      if ( !v228 )
                      {
                        v47 = __OFSUB__(*a2, *Str2);
                        v45 = *a2 == *Str2;
                        v46 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_192;
                      }
                      v229 = v228 - 1;
                      if ( !v229 )
                      {
                        v44 = __OFSUB__(*a2, *Str2);
                        v43 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_187;
                      }
                      v230 = v229 - 1;
                      if ( v230 )
                      {
                        if ( v230 != 1 )
                          goto LABEL_389;
                        v35 = __OFSUB__(*a2, *Str2);
                        v33 = *a2 == *Str2;
                        v34 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_177;
                      }
                      v42 = __OFSUB__(*a2, *Str2);
                      v41 = (__int16)(*a2 - *Str2) < 0;
                      goto LABEL_182;
                    }
                    goto LABEL_317;
                  case 5u:
                    v223 = v14 - 2;
                    if ( v223 )
                    {
                      v224 = v223 - 1;
                      if ( v224 )
                      {
                        v225 = v224 - 1;
                        if ( v225 )
                        {
                          v226 = v225 - 1;
                          if ( v226 )
                          {
                            if ( v226 != 1 )
                              goto LABEL_389;
                            v167 = (__int16)*a2;
                            goto LABEL_454;
                          }
                          v169 = (__int16)*a2;
                          goto LABEL_457;
                        }
                        v171 = (__int16)*a2;
                        goto LABEL_460;
                      }
                      v173 = (__int16)*a2;
                      goto LABEL_463;
                    }
                    v175 = (__int16)*a2;
                    goto LABEL_466;
                  case 6u:
                    v219 = v14 - 2;
                    if ( !v219 )
                      goto LABEL_438;
                    v220 = v219 - 1;
                    if ( !v220 )
                    {
                      v158 = (__int16)*a2;
                      goto LABEL_307;
                    }
                    v221 = v220 - 1;
                    if ( !v221 )
                    {
                      v157 = (__int16)*a2;
                      goto LABEL_304;
                    }
                    v222 = v221 - 1;
                    if ( !v222 )
                    {
                      v156 = (__int16)*a2;
                      goto LABEL_301;
                    }
                    if ( v222 != 1 )
                      goto LABEL_389;
                    v155 = (__int16)*a2;
LABEL_298:
                    v35 = __OFSUB__(v155, *(_DWORD *)Str2);
                    v33 = v155 == *(_DWORD *)Str2;
                    v34 = v155 - *(_DWORD *)Str2 < 0;
                    goto LABEL_177;
                  case 7u:
                    v215 = v14 - 2;
                    if ( v215 )
                    {
                      v216 = v215 - 1;
                      if ( !v216 )
                      {
                        v149 = (__int16)*a2;
                        goto LABEL_288;
                      }
                      v217 = v216 - 1;
                      if ( !v217 )
                      {
                        v148 = (__int16)*a2;
                        goto LABEL_285;
                      }
                      v218 = v217 - 1;
                      if ( !v218 )
                      {
                        v147 = (__int16)*a2;
                        goto LABEL_282;
                      }
                      if ( v218 != 1 )
                        goto LABEL_389;
                      v146 = (__int16)*a2;
                      goto LABEL_279;
                    }
LABEL_438:
                    v150 = (__int16)*a2;
                    goto LABEL_291;
                  default:
                    goto LABEL_389;
                }
                v80 = __OFSUB__(*a2, v238);
                v78 = *a2 == v238;
                v79 = (__int16)(*a2 - v238) < 0;
                goto LABEL_153;
              }
              goto LABEL_509;
            }
            if ( a5 == 9 )
            {
              v255 = v14 - 2;
              if ( v255 )
              {
                v256 = v255 - 1;
                if ( v256 )
                {
                  v257 = v256 - 1;
                  if ( v257 )
                  {
                    v258 = v257 - 1;
                    if ( v258 )
                    {
                      if ( v258 != 1 )
                        goto LABEL_389;
                      v137 = (__int16)*a2;
                      goto LABEL_823;
                    }
                    v138 = (__int16)*a2;
                    goto LABEL_825;
                  }
                  v139 = (__int16)*a2;
                  goto LABEL_827;
                }
                v140 = (__int16)*a2;
                goto LABEL_829;
              }
LABEL_541:
              v141 = (__int16)*a2;
              goto LABEL_738;
            }
            if ( a5 != 10 )
            {
              if ( a5 != 11 )
              {
                if ( a5 == 14 )
                {
LABEL_509:
                  v247 = v14 - 2;
                  if ( v247 )
                  {
                    v248 = v247 - 1;
                    if ( v248 )
                    {
                      v249 = v248 - 1;
                      if ( v249 )
                      {
                        v250 = v249 - 1;
                        if ( v250 )
                        {
                          if ( v250 != 1 )
                            goto LABEL_389;
                          v93 = (__int16)*a2;
                          goto LABEL_176;
                        }
                        v94 = (__int16)*a2;
                        goto LABEL_180;
                      }
                      v95 = (__int16)*a2;
                      goto LABEL_185;
                    }
                    v96 = (__int16)*a2;
                    goto LABEL_190;
                  }
                  goto LABEL_541;
                }
                if ( a5 != 15 )
                  goto LABEL_389;
              }
              v243 = v14 - 2;
              if ( !v243 )
              {
                v112 = (__int16)*a2;
                goto LABEL_218;
              }
              v244 = v243 - 1;
              if ( !v244 )
              {
                v109 = (__int16)*a2;
                goto LABEL_212;
              }
              v245 = v244 - 1;
              if ( !v245 )
              {
                v104 = (__int16)*a2;
                goto LABEL_206;
              }
              v246 = v245 - 1;
              if ( !v246 )
              {
                v101 = (__int16)*a2;
                goto LABEL_200;
              }
              if ( v246 != 1 )
                goto LABEL_389;
              v97 = (__int16)*a2;
LABEL_194:
              v88 = _mm_cvtsi32_si128(v97);
LABEL_195:
              *(_QWORD *)&v98 = *(_OWORD *)&_mm_cvtepi32_pd(v88);
              goto LABEL_197;
            }
            v251 = v14 - 2;
            if ( !v251 )
            {
              v131 = (__int16)*a2;
              goto LABEL_251;
            }
            v252 = v251 - 1;
            if ( !v252 )
            {
              v210 = (__int16)*a2;
              goto LABEL_410;
            }
            v253 = v252 - 1;
            if ( !v253 )
            {
              v126 = (__int16)*a2;
              goto LABEL_241;
            }
            v254 = v253 - 1;
            if ( !v254 )
            {
              v209 = (__int16)*a2;
              goto LABEL_407;
            }
            if ( v254 != 1 )
              goto LABEL_389;
            v121 = (__int16)*a2;
LABEL_231:
            v120 = _mm_cvtsi32_si128(v121);
LABEL_232:
            LODWORD(v122) = _mm_cvtepi32_ps(v120).m128_u32[0];
            goto LABEL_234;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              if ( a5 == 2 )
              {
                v286 = v14 - 2;
                if ( v286 )
                {
                  v287 = v286 - 1;
                  if ( v287 )
                  {
                    v288 = v287 - 1;
                    if ( v288 )
                    {
                      v289 = v288 - 1;
                      if ( v289 )
                      {
                        if ( v289 != 1 )
                          goto LABEL_389;
                        v167 = *(unsigned __int8 *)a2;
LABEL_357:
                        v168 = *(char *)Str2;
                        goto LABEL_358;
                      }
                      v169 = *(unsigned __int8 *)a2;
LABEL_361:
                      v170 = *(char *)Str2;
                      goto LABEL_363;
                    }
                    v171 = *(unsigned __int8 *)a2;
LABEL_366:
                    v172 = *(char *)Str2;
                    goto LABEL_368;
                  }
                  v173 = *(unsigned __int8 *)a2;
LABEL_371:
                  v174 = *(char *)Str2;
                  goto LABEL_373;
                }
                v175 = *(unsigned __int8 *)a2;
LABEL_376:
                v176 = *(char *)Str2;
                goto LABEL_378;
              }
              if ( a5 != 3 )
              {
                if ( a5 == 4 )
                {
                  v274 = v14 - 2;
                  if ( !v274 )
                  {
                    v82 = (unsigned __int16)*(unsigned __int8 *)a2 == *Str2;
                    goto LABEL_158;
                  }
                  v275 = v274 - 1;
                  if ( v275 )
                  {
                    v276 = v275 - 1;
                    if ( v276 )
                    {
                      v277 = v276 - 1;
                      if ( v277 )
                      {
                        if ( v277 != 1 )
                          goto LABEL_389;
                        v278 = *(unsigned __int8 *)a2;
                        v71 = __OFSUB__(v278, *Str2);
                        v69 = v278 == (__int16)*Str2;
                        v70 = (__int16)(v278 - *Str2) < 0;
                        goto LABEL_138;
                      }
                      v279 = *(unsigned __int8 *)a2;
                      v73 = __OFSUB__(v279, *Str2);
                      v72 = (__int16)(v279 - *Str2) < 0;
LABEL_143:
                      v26 = v72 == v73;
                      goto LABEL_59;
                    }
                    v280 = *(unsigned __int8 *)a2;
                    v76 = __OFSUB__(v280, *Str2);
                    v75 = (__int16)(v280 - *Str2) < 0;
LABEL_148:
                    v26 = v75 ^ v76;
                    goto LABEL_59;
                  }
                  v281 = *(unsigned __int8 *)a2;
                  v80 = __OFSUB__(v281, *Str2);
                  v78 = v281 == (__int16)*Str2;
                  v79 = (__int16)(v281 - *Str2) < 0;
LABEL_153:
                  v26 = !(v79 ^ v80 | v78);
                  goto LABEL_59;
                }
                if ( a5 != 5 )
                {
                  if ( a5 == 6 )
                  {
                    v263 = v14 - 2;
                    if ( v263 )
                    {
                      v264 = v263 - 1;
                      if ( !v264 )
                      {
                        v158 = *(unsigned __int8 *)a2;
                        goto LABEL_307;
                      }
                      v265 = v264 - 1;
                      if ( !v265 )
                      {
                        v157 = *(unsigned __int8 *)a2;
                        goto LABEL_304;
                      }
                      v266 = v265 - 1;
                      if ( !v266 )
                      {
                        v156 = *(unsigned __int8 *)a2;
                        goto LABEL_301;
                      }
                      if ( v266 != 1 )
                        goto LABEL_389;
                      v155 = *(unsigned __int8 *)a2;
                      goto LABEL_298;
                    }
                  }
                  else
                  {
                    if ( a5 != 7 )
                      goto LABEL_389;
                    v259 = v14 - 2;
                    if ( v259 )
                    {
                      v260 = v259 - 1;
                      if ( !v260 )
                      {
                        v149 = *(unsigned __int8 *)a2;
                        goto LABEL_288;
                      }
                      v261 = v260 - 1;
                      if ( !v261 )
                      {
                        v148 = *(unsigned __int8 *)a2;
                        goto LABEL_285;
                      }
                      v262 = v261 - 1;
                      if ( !v262 )
                      {
                        v147 = *(unsigned __int8 *)a2;
                        goto LABEL_282;
                      }
                      if ( v262 != 1 )
                        goto LABEL_389;
                      v146 = *(unsigned __int8 *)a2;
                      goto LABEL_279;
                    }
                  }
                  v150 = *(unsigned __int8 *)a2;
                  goto LABEL_291;
                }
                v267 = v14 - 2;
                if ( v267 )
                {
                  v268 = v267 - 1;
                  if ( v268 )
                  {
                    v269 = v268 - 1;
                    if ( !v269 )
                    {
                      v24 = *(unsigned __int8 *)a2 < *Str2;
                      goto LABEL_52;
                    }
                    v270 = v269 - 1;
                    if ( v270 )
                    {
                      if ( v270 != 1 )
                        goto LABEL_389;
                      v271 = *(unsigned __int8 *)a2;
                      v36 = v271 < *Str2;
                      v37 = v271 == *Str2;
                      goto LABEL_90;
                    }
                    v38 = *(unsigned __int8 *)a2 < *Str2;
                    goto LABEL_93;
                  }
                  v272 = *(unsigned __int8 *)a2;
                  v39 = v272 < *Str2;
                  v40 = v272 == *Str2;
                  goto LABEL_96;
                }
                v273 = *(unsigned __int8 *)a2;
                goto LABEL_580;
              }
              v282 = v14 - 2;
              if ( v282 )
              {
                v283 = v282 - 1;
                if ( v283 )
                {
                  v284 = v283 - 1;
                  if ( !v284 )
                  {
                    v24 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                    goto LABEL_52;
                  }
                  v285 = v284 - 1;
                  if ( v285 )
                  {
                    if ( v285 != 1 )
                      goto LABEL_389;
                    v36 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                    v37 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                    goto LABEL_90;
                  }
                  v38 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                  goto LABEL_93;
                }
                v39 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                v40 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                goto LABEL_96;
              }
              goto LABEL_66;
            }
            goto LABEL_615;
          }
          if ( a5 == 9 )
          {
            v302 = v14 - 2;
            if ( v302 )
            {
              v303 = v302 - 1;
              if ( v303 )
              {
                v304 = v303 - 1;
                if ( v304 )
                {
                  v305 = v304 - 1;
                  if ( v305 )
                  {
                    if ( v305 != 1 )
                      goto LABEL_389;
                    v137 = *(unsigned __int8 *)a2;
                    goto LABEL_823;
                  }
                  v138 = *(unsigned __int8 *)a2;
                  goto LABEL_825;
                }
                v139 = *(unsigned __int8 *)a2;
                goto LABEL_827;
              }
              v140 = *(unsigned __int8 *)a2;
              goto LABEL_829;
            }
LABEL_647:
            v141 = *(unsigned __int8 *)a2;
            goto LABEL_738;
          }
          if ( a5 == 10 )
          {
            v298 = v14 - 2;
            if ( !v298 )
            {
              v131 = *(unsigned __int8 *)a2;
              goto LABEL_251;
            }
            v299 = v298 - 1;
            if ( !v299 )
            {
              v210 = *(unsigned __int8 *)a2;
              goto LABEL_410;
            }
            v300 = v299 - 1;
            if ( !v300 )
            {
              v126 = *(unsigned __int8 *)a2;
              goto LABEL_241;
            }
            v301 = v300 - 1;
            if ( !v301 )
            {
              v209 = *(unsigned __int8 *)a2;
              goto LABEL_407;
            }
            if ( v301 != 1 )
              goto LABEL_389;
            v121 = *(unsigned __int8 *)a2;
            goto LABEL_231;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_615:
              v294 = v14 - 2;
              if ( v294 )
              {
                v295 = v294 - 1;
                if ( v295 )
                {
                  v296 = v295 - 1;
                  if ( v296 )
                  {
                    v297 = v296 - 1;
                    if ( v297 )
                    {
                      if ( v297 != 1 )
                        goto LABEL_389;
                      v93 = *(unsigned __int8 *)a2;
                      goto LABEL_176;
                    }
                    v94 = *(unsigned __int8 *)a2;
                    goto LABEL_180;
                  }
                  v95 = *(unsigned __int8 *)a2;
                  goto LABEL_185;
                }
                v96 = *(unsigned __int8 *)a2;
                goto LABEL_190;
              }
              goto LABEL_647;
            }
            if ( a5 != 15 )
              goto LABEL_389;
          }
          v290 = v14 - 2;
          if ( !v290 )
          {
            v112 = *(unsigned __int8 *)a2;
            goto LABEL_218;
          }
          v291 = v290 - 1;
          if ( !v291 )
          {
            v109 = *(unsigned __int8 *)a2;
            goto LABEL_212;
          }
          v292 = v291 - 1;
          if ( !v292 )
          {
            v104 = *(unsigned __int8 *)a2;
            goto LABEL_206;
          }
          v293 = v292 - 1;
          if ( !v293 )
          {
            v101 = *(unsigned __int8 *)a2;
            goto LABEL_200;
          }
          if ( v293 != 1 )
            goto LABEL_389;
          v97 = *(unsigned __int8 *)a2;
          goto LABEL_194;
        }
        if ( a5 <= 8 )
        {
          if ( a5 != 8 )
          {
            if ( a5 != 2 )
            {
              if ( a5 == 3 )
              {
                v322 = v14 - 2;
                if ( !v322 )
                {
                  v175 = *(char *)a2;
                  v176 = *(unsigned __int8 *)Str2;
                  goto LABEL_378;
                }
                v323 = v322 - 1;
                if ( !v323 )
                {
                  v173 = *(char *)a2;
                  v174 = *(unsigned __int8 *)Str2;
                  goto LABEL_373;
                }
                v324 = v323 - 1;
                if ( !v324 )
                {
                  v171 = *(char *)a2;
                  v172 = *(unsigned __int8 *)Str2;
                  goto LABEL_368;
                }
                v325 = v324 - 1;
                if ( !v325 )
                {
                  v169 = *(char *)a2;
                  v170 = *(unsigned __int8 *)Str2;
                  goto LABEL_363;
                }
                if ( v325 != 1 )
                  goto LABEL_389;
                v167 = *(char *)a2;
                v168 = *(unsigned __int8 *)Str2;
LABEL_358:
                v71 = __OFSUB__(v167, v168);
                v69 = v167 == v168;
                v70 = v167 - v168 < 0;
                goto LABEL_138;
              }
              if ( a5 != 4 )
              {
                if ( a5 != 5 )
                {
                  if ( a5 == 6 )
                  {
                    v310 = v14 - 2;
                    if ( v310 )
                    {
                      v311 = v310 - 1;
                      if ( !v311 )
                      {
                        v158 = *(char *)a2;
                        goto LABEL_307;
                      }
                      v312 = v311 - 1;
                      if ( !v312 )
                      {
                        v157 = *(char *)a2;
                        goto LABEL_304;
                      }
                      v313 = v312 - 1;
                      if ( !v313 )
                      {
                        v156 = *(char *)a2;
                        goto LABEL_301;
                      }
                      if ( v313 != 1 )
                        goto LABEL_389;
                      v155 = *(char *)a2;
                      goto LABEL_298;
                    }
                  }
                  else
                  {
                    if ( a5 != 7 )
                      goto LABEL_389;
                    v306 = v14 - 2;
                    if ( v306 )
                    {
                      v307 = v306 - 1;
                      if ( !v307 )
                      {
                        v149 = *(char *)a2;
                        goto LABEL_288;
                      }
                      v308 = v307 - 1;
                      if ( !v308 )
                      {
                        v148 = *(char *)a2;
                        goto LABEL_285;
                      }
                      v309 = v308 - 1;
                      if ( !v309 )
                      {
                        v147 = *(char *)a2;
                        goto LABEL_282;
                      }
                      if ( v309 != 1 )
                        goto LABEL_389;
                      v146 = *(char *)a2;
LABEL_279:
                      v36 = v146 < *(_DWORD *)Str2;
                      v37 = v146 == *(_DWORD *)Str2;
LABEL_90:
                      v25 = v36 || v37;
                      goto LABEL_53;
                    }
                  }
                  v150 = *(char *)a2;
                  goto LABEL_291;
                }
                v314 = v14 - 2;
                if ( v314 )
                {
                  v315 = v314 - 1;
                  if ( v315 )
                  {
                    v316 = v315 - 1;
                    if ( v316 )
                    {
                      v317 = v316 - 1;
                      if ( v317 )
                      {
                        if ( v317 != 1 )
                          goto LABEL_389;
                        v167 = *(char *)a2;
LABEL_454:
                        v168 = *Str2;
                        goto LABEL_358;
                      }
                      v169 = *(char *)a2;
LABEL_457:
                      v170 = *Str2;
                      goto LABEL_363;
                    }
                    v171 = *(char *)a2;
LABEL_460:
                    v172 = *Str2;
                    goto LABEL_368;
                  }
                  v173 = *(char *)a2;
LABEL_463:
                  v174 = *Str2;
                  goto LABEL_373;
                }
                v175 = *(char *)a2;
LABEL_466:
                v176 = *Str2;
                goto LABEL_378;
              }
              v318 = v14 - 2;
              if ( v318 )
              {
                v319 = v318 - 1;
                if ( !v319 )
                {
                  v47 = __OFSUB__(*(char *)a2, *Str2);
                  v45 = *(char *)a2 == (__int16)*Str2;
                  v46 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_192;
                }
                v320 = v319 - 1;
                if ( !v320 )
                {
                  v44 = __OFSUB__(*(char *)a2, *Str2);
                  v43 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_187;
                }
                v321 = v320 - 1;
                if ( v321 )
                {
                  if ( v321 != 1 )
                    goto LABEL_389;
                  v35 = __OFSUB__(*(char *)a2, *Str2);
                  v33 = *(char *)a2 == (__int16)*Str2;
                  v34 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_177;
                }
                v42 = __OFSUB__(*(char *)a2, *Str2);
                v41 = (__int16)(*(char *)a2 - *Str2) < 0;
                goto LABEL_182;
              }
              v273 = *(char *)a2;
LABEL_580:
              v28 = v273 == (__int16)*Str2;
              goto LABEL_67;
            }
            v326 = v14 - 2;
            if ( v326 )
            {
              v327 = v326 - 1;
              if ( !v327 )
              {
                v47 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v45 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                v46 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_192;
              }
              v328 = v327 - 1;
              if ( !v328 )
              {
                v44 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v43 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_187;
              }
              v329 = v328 - 1;
              if ( v329 )
              {
                if ( v329 != 1 )
                  goto LABEL_389;
                v35 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v33 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                v34 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_177;
              }
              v42 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
              v41 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
              goto LABEL_182;
            }
LABEL_66:
            v28 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_67:
            v25 = v28;
            goto LABEL_53;
          }
          goto LABEL_706;
        }
        if ( a5 == 9 )
        {
          v342 = v14 - 2;
          if ( v342 )
          {
            v343 = v342 - 1;
            if ( v343 )
            {
              v344 = v343 - 1;
              if ( v344 )
              {
                v345 = v344 - 1;
                if ( v345 )
                {
                  if ( v345 != 1 )
                    goto LABEL_389;
                  v137 = *(char *)a2;
                  goto LABEL_823;
                }
                v138 = *(char *)a2;
LABEL_825:
                v38 = v138 < *(_QWORD *)Str2;
                goto LABEL_93;
              }
              v139 = *(char *)a2;
LABEL_827:
              v24 = v139 < *(_QWORD *)Str2;
              goto LABEL_52;
            }
            v140 = *(char *)a2;
LABEL_829:
            v39 = v140 < *(_QWORD *)Str2;
            v40 = v140 == *(_QWORD *)Str2;
            goto LABEL_96;
          }
LABEL_736:
          v141 = *(char *)a2;
          goto LABEL_738;
        }
        if ( a5 == 10 )
        {
          v338 = v14 - 2;
          if ( !v338 )
          {
            v131 = *(char *)a2;
            goto LABEL_251;
          }
          v339 = v338 - 1;
          if ( !v339 )
          {
            v210 = *(char *)a2;
            goto LABEL_410;
          }
          v340 = v339 - 1;
          if ( !v340 )
          {
            v126 = *(char *)a2;
            goto LABEL_241;
          }
          v341 = v340 - 1;
          if ( !v341 )
          {
            v209 = *(char *)a2;
            goto LABEL_407;
          }
          if ( v341 != 1 )
            goto LABEL_389;
          v121 = *(char *)a2;
          goto LABEL_231;
        }
        if ( a5 != 11 )
        {
          if ( a5 == 14 )
          {
LABEL_706:
            v334 = v14 - 2;
            if ( v334 )
            {
              v335 = v334 - 1;
              if ( v335 )
              {
                v336 = v335 - 1;
                if ( v336 )
                {
                  v337 = v336 - 1;
                  if ( v337 )
                  {
                    if ( v337 != 1 )
                      goto LABEL_389;
                    v93 = *(char *)a2;
                    goto LABEL_176;
                  }
                  v94 = *(char *)a2;
                  goto LABEL_180;
                }
                v95 = *(char *)a2;
                goto LABEL_185;
              }
              v96 = *(char *)a2;
              goto LABEL_190;
            }
            goto LABEL_736;
          }
          if ( a5 != 15 )
            goto LABEL_389;
        }
        v330 = v14 - 2;
        if ( !v330 )
        {
          v112 = *(char *)a2;
          goto LABEL_218;
        }
        v331 = v330 - 1;
        if ( !v331 )
        {
          v109 = *(char *)a2;
          goto LABEL_212;
        }
        v332 = v331 - 1;
        if ( !v332 )
        {
          v104 = *(char *)a2;
          goto LABEL_206;
        }
        v333 = v332 - 1;
        if ( !v333 )
        {
          v101 = *(char *)a2;
          goto LABEL_200;
        }
        if ( v333 != 1 )
          goto LABEL_389;
        v97 = *(char *)a2;
        goto LABEL_194;
      }
      if ( a5 != 1 || v14 != 2 )
        goto LABEL_389;
      if ( a2 )
        goto LABEL_13;
      v19 = Str2 == 0LL;
LABEL_34:
      if ( v19 )
        goto LABEL_14;
      goto LABEL_13;
    }
    if ( a1 != 8 )
    {
      if ( a1 != 9 )
      {
        if ( a1 != 10 )
        {
          if ( a1 != 11 )
          {
            v385 = a5 == 12;
            goto LABEL_840;
          }
LABEL_1308:
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              switch ( a5 )
              {
                case 2u:
                  v426 = v14 - 2;
                  if ( !v426 )
                  {
                    v409 = *(char *)Str2;
                    goto LABEL_874;
                  }
                  v427 = v426 - 1;
                  if ( !v427 )
                  {
                    v417 = *(char *)Str2;
                    goto LABEL_920;
                  }
                  v428 = v427 - 1;
                  if ( !v428 )
                  {
                    v416 = *(char *)Str2;
                    goto LABEL_917;
                  }
                  v429 = v428 - 1;
                  if ( !v429 )
                  {
                    v415 = *(char *)Str2;
                    goto LABEL_914;
                  }
                  if ( v429 != 1 )
                    goto LABEL_389;
                  v414 = *(char *)Str2;
                  break;
                case 3u:
                  v422 = v14 - 2;
                  if ( !v422 )
                  {
                    v409 = *(unsigned __int8 *)Str2;
                    goto LABEL_874;
                  }
                  v423 = v422 - 1;
                  if ( !v423 )
                  {
                    v417 = *(unsigned __int8 *)Str2;
                    goto LABEL_920;
                  }
                  v424 = v423 - 1;
                  if ( !v424 )
                  {
                    v416 = *(unsigned __int8 *)Str2;
                    goto LABEL_917;
                  }
                  v425 = v424 - 1;
                  if ( !v425 )
                  {
                    v415 = *(unsigned __int8 *)Str2;
                    goto LABEL_914;
                  }
                  if ( v425 != 1 )
                    goto LABEL_389;
                  v414 = *(unsigned __int8 *)Str2;
                  break;
                case 4u:
                  v418 = v14 - 2;
                  if ( !v418 )
                  {
                    v409 = (__int16)*Str2;
                    goto LABEL_874;
                  }
                  v419 = v418 - 1;
                  if ( !v419 )
                  {
                    v417 = (__int16)*Str2;
                    goto LABEL_920;
                  }
                  v420 = v419 - 1;
                  if ( !v420 )
                  {
                    v416 = (__int16)*Str2;
                    goto LABEL_917;
                  }
                  v421 = v420 - 1;
                  if ( !v421 )
                  {
                    v415 = (__int16)*Str2;
                    goto LABEL_914;
                  }
                  if ( v421 != 1 )
                    goto LABEL_389;
                  v414 = (__int16)*Str2;
                  break;
                case 5u:
                  v410 = v14 - 2;
                  if ( v410 )
                  {
                    v411 = v410 - 1;
                    if ( v411 )
                    {
                      v412 = v411 - 1;
                      if ( v412 )
                      {
                        v413 = v412 - 1;
                        if ( v413 )
                        {
                          if ( v413 != 1 )
                            goto LABEL_389;
                          v414 = *Str2;
                          break;
                        }
                        v415 = *Str2;
LABEL_914:
                        v405 = _mm_cvtsi32_si128(v415);
LABEL_915:
                        *(_QWORD *)&v394 = *(_OWORD *)&_mm_cvtepi32_pd(v405);
                        goto LABEL_956;
                      }
                      v416 = *Str2;
LABEL_917:
                      v406 = _mm_cvtsi32_si128(v416);
LABEL_918:
                      *(_QWORD *)&v396 = *(_OWORD *)&_mm_cvtepi32_pd(v406);
                      goto LABEL_959;
                    }
                    v417 = *Str2;
LABEL_920:
                    v407 = _mm_cvtsi32_si128(v417);
LABEL_921:
                    *(_QWORD *)&v191 = *(_OWORD *)&_mm_cvtepi32_pd(v407);
                    goto LABEL_346;
                  }
                  v409 = *Str2;
LABEL_874:
                  v408 = _mm_cvtsi32_si128(v409);
LABEL_875:
                  *(_QWORD *)&v399 = *(_OWORD *)&_mm_cvtepi32_pd(v408);
                  goto LABEL_862;
                case 6u:
                  v400 = v14 - 2;
                  if ( v400 )
                  {
                    v401 = v400 - 1;
                    if ( v401 )
                    {
                      v402 = v401 - 1;
                      if ( v402 )
                      {
                        v403 = v402 - 1;
                        if ( v403 )
                        {
                          if ( v403 != 1 )
                            goto LABEL_389;
                          v404 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                          goto LABEL_912;
                        }
                        v405 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                        goto LABEL_915;
                      }
                      v406 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                      goto LABEL_918;
                    }
                    v407 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                    goto LABEL_921;
                  }
                  v408 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                  goto LABEL_875;
                case 7u:
                  v387 = v14 - 2;
                  if ( v387 )
                  {
                    v388 = v387 - 1;
                    if ( v388 )
                    {
                      v389 = v388 - 1;
                      if ( v389 )
                      {
                        v390 = v389 - 1;
                        if ( v390 )
                        {
                          if ( v390 != 1 )
                            goto LABEL_389;
                          LODWORD(v391) = *(_DWORD *)Str2;
LABEL_852:
                          v392 = (double)(int)v391;
LABEL_953:
                          v184 = v392 < *(double *)a2;
                          goto LABEL_339;
                        }
                        LODWORD(v393) = *(_DWORD *)Str2;
LABEL_854:
                        v394 = (double)(int)v393;
                        goto LABEL_956;
                      }
                      LODWORD(v395) = *(_DWORD *)Str2;
                      goto LABEL_856;
                    }
                    LODWORD(v397) = *(_DWORD *)Str2;
LABEL_858:
                    v191 = (double)(int)v397;
                    goto LABEL_346;
                  }
                  LODWORD(v398) = *(_DWORD *)Str2;
                  goto LABEL_860;
                default:
                  goto LABEL_389;
              }
              v404 = _mm_cvtsi32_si128(v414);
LABEL_912:
              *(_QWORD *)&v392 = *(_OWORD *)&_mm_cvtepi32_pd(v404);
              goto LABEL_953;
            }
            goto LABEL_934;
          }
          if ( a5 == 9 )
          {
            v586 = v14 - 2;
            if ( v586 )
            {
              v587 = v586 - 1;
              if ( v587 )
              {
                v588 = v587 - 1;
                if ( v588 )
                {
                  v589 = v588 - 1;
                  if ( v589 )
                  {
                    if ( v589 != 1 )
                      goto LABEL_389;
                    v391 = *(_QWORD *)Str2;
                    if ( *(__int64 *)Str2 < 0 )
                    {
                      v392 = (double)(int)(v391 & 1 | (v391 >> 1)) + (double)(int)(v391 & 1 | (v391 >> 1));
                      goto LABEL_953;
                    }
                    goto LABEL_852;
                  }
                  v393 = *(_QWORD *)Str2;
                  if ( *(__int64 *)Str2 < 0 )
                  {
                    v394 = (double)(int)(v393 & 1 | (v393 >> 1)) + (double)(int)(v393 & 1 | (v393 >> 1));
                    goto LABEL_956;
                  }
                  goto LABEL_854;
                }
                v395 = *(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                {
                  v396 = (double)(int)(v395 & 1 | (v395 >> 1)) + (double)(int)(v395 & 1 | (v395 >> 1));
                  goto LABEL_959;
                }
LABEL_856:
                v396 = (double)(int)v395;
LABEL_959:
                v189 = v396 < *(double *)a2;
                v190 = v396 == *(double *)a2;
                goto LABEL_347;
              }
              v397 = *(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
              {
                v191 = (double)(int)(v397 & 1 | (*(_QWORD *)Str2 >> 1))
                     + (double)(int)(v397 & 1 | (*(_QWORD *)Str2 >> 1));
                goto LABEL_346;
              }
              goto LABEL_858;
            }
            v398 = *(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
            {
              v399 = (double)(int)(v398 & 1 | (v398 >> 1)) + (double)(int)(v398 & 1 | (v398 >> 1));
              goto LABEL_862;
            }
LABEL_860:
            v399 = (double)(int)v398;
LABEL_862:
            v19 = *(double *)a2 == v399;
            goto LABEL_34;
          }
          if ( a5 == 10 )
          {
            v438 = v14 - 2;
            if ( !v438 )
            {
              v399 = *(float *)Str2;
              goto LABEL_862;
            }
            v439 = v438 - 1;
            if ( !v439 )
            {
              v191 = *(float *)Str2;
LABEL_346:
              v189 = *(double *)a2 < v191;
              v190 = *(double *)a2 == v191;
              goto LABEL_347;
            }
            v440 = v439 - 1;
            if ( !v440 )
            {
              v396 = *(float *)Str2;
              goto LABEL_959;
            }
            v441 = v440 - 1;
            if ( v441 )
            {
              if ( v441 != 1 )
                goto LABEL_389;
              v392 = *(float *)Str2;
              goto LABEL_953;
            }
            v394 = *(float *)Str2;
LABEL_956:
            v184 = *(double *)a2 < v394;
            goto LABEL_339;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
            {
LABEL_934:
              v434 = v14 - 2;
              if ( !v434 )
              {
                v399 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_862;
              }
              v435 = v434 - 1;
              if ( !v435 )
              {
                v191 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_346;
              }
              v436 = v435 - 1;
              if ( !v436 )
              {
                v396 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_959;
              }
              v437 = v436 - 1;
              if ( v437 )
              {
                if ( v437 != 1 )
                  goto LABEL_389;
                v392 = (double)(int)*(_QWORD *)Str2;
                goto LABEL_953;
              }
              v394 = (double)(int)*(_QWORD *)Str2;
              goto LABEL_956;
            }
            if ( a5 != 15 )
              goto LABEL_389;
          }
          v430 = v14 - 2;
          if ( v430 )
          {
            v431 = v430 - 1;
            if ( v431 )
            {
              v432 = v431 - 1;
              if ( v432 )
              {
                v433 = v432 - 1;
                if ( v433 )
                {
                  if ( v433 != 1 )
                    goto LABEL_389;
                  v99 = *(double *)Str2 < *(double *)a2;
                  goto LABEL_238;
                }
                v102 = *(double *)a2;
                goto LABEL_203;
              }
              v106 = *(double *)Str2 < *(double *)a2;
              v107 = *(double *)Str2 == *(double *)a2;
LABEL_248:
              v18 = !v106 && !v107;
              goto LABEL_30;
            }
            v110 = *(double *)a2;
            goto LABEL_215;
          }
          v113 = *(double *)a2;
          goto LABEL_221;
        }
        if ( a5 <= 8 )
        {
          if ( a5 != 8 )
          {
            switch ( a5 )
            {
              case 2u:
                v480 = v14 - 2;
                if ( !v480 )
                {
                  v463 = *(char *)Str2;
                  goto LABEL_993;
                }
                v481 = v480 - 1;
                if ( !v481 )
                {
                  v471 = *(char *)Str2;
                  goto LABEL_1039;
                }
                v482 = v481 - 1;
                if ( !v482 )
                {
                  v470 = *(char *)Str2;
                  goto LABEL_1036;
                }
                v483 = v482 - 1;
                if ( !v483 )
                {
                  v469 = *(char *)Str2;
                  goto LABEL_1033;
                }
                if ( v483 != 1 )
                  goto LABEL_389;
                v468 = *(char *)Str2;
                break;
              case 3u:
                v476 = v14 - 2;
                if ( !v476 )
                {
                  v463 = *(unsigned __int8 *)Str2;
                  goto LABEL_993;
                }
                v477 = v476 - 1;
                if ( !v477 )
                {
                  v471 = *(unsigned __int8 *)Str2;
                  goto LABEL_1039;
                }
                v478 = v477 - 1;
                if ( !v478 )
                {
                  v470 = *(unsigned __int8 *)Str2;
                  goto LABEL_1036;
                }
                v479 = v478 - 1;
                if ( !v479 )
                {
                  v469 = *(unsigned __int8 *)Str2;
                  goto LABEL_1033;
                }
                if ( v479 != 1 )
                  goto LABEL_389;
                v468 = *(unsigned __int8 *)Str2;
                break;
              case 4u:
                v472 = v14 - 2;
                if ( !v472 )
                {
                  v463 = (__int16)*Str2;
                  goto LABEL_993;
                }
                v473 = v472 - 1;
                if ( !v473 )
                {
                  v471 = (__int16)*Str2;
                  goto LABEL_1039;
                }
                v474 = v473 - 1;
                if ( !v474 )
                {
                  v470 = (__int16)*Str2;
                  goto LABEL_1036;
                }
                v475 = v474 - 1;
                if ( !v475 )
                {
                  v469 = (__int16)*Str2;
                  goto LABEL_1033;
                }
                if ( v475 != 1 )
                  goto LABEL_389;
                v468 = (__int16)*Str2;
                break;
              case 5u:
                v464 = v14 - 2;
                if ( v464 )
                {
                  v465 = v464 - 1;
                  if ( v465 )
                  {
                    v466 = v465 - 1;
                    if ( v466 )
                    {
                      v467 = v466 - 1;
                      if ( v467 )
                      {
                        if ( v467 != 1 )
                          goto LABEL_389;
                        v468 = *Str2;
                        break;
                      }
                      v469 = *Str2;
LABEL_1033:
                      v459 = _mm_cvtsi32_si128(v469);
                      goto LABEL_1034;
                    }
                    v470 = *Str2;
LABEL_1036:
                    v460 = _mm_cvtsi32_si128(v470);
                    goto LABEL_1037;
                  }
                  v471 = *Str2;
LABEL_1039:
                  v461 = _mm_cvtsi32_si128(v471);
                  goto LABEL_1040;
                }
                v463 = *Str2;
LABEL_993:
                v462 = _mm_cvtsi32_si128(v463);
                goto LABEL_994;
              case 6u:
                v454 = v14 - 2;
                if ( v454 )
                {
                  v455 = v454 - 1;
                  if ( v455 )
                  {
                    v456 = v455 - 1;
                    if ( v456 )
                    {
                      v457 = v456 - 1;
                      if ( v457 )
                      {
                        if ( v457 != 1 )
                          goto LABEL_389;
                        v458 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                        goto LABEL_1031;
                      }
                      v459 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1034:
                      LODWORD(v449) = _mm_cvtepi32_ps(v459).m128_u32[0];
                      goto LABEL_1061;
                    }
                    v460 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1037:
                    LODWORD(v451) = _mm_cvtepi32_ps(v460).m128_u32[0];
                    goto LABEL_1063;
                  }
                  v461 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_1040:
                  LODWORD(v453) = _mm_cvtepi32_ps(v461).m128_u32[0];
                  goto LABEL_1065;
                }
                v462 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_994:
                LODWORD(v115) = _mm_cvtepi32_ps(v462).m128_u32[0];
                goto LABEL_224;
              case 7u:
                v442 = v14 - 2;
                if ( v442 )
                {
                  v443 = v442 - 1;
                  if ( v443 )
                  {
                    v444 = v443 - 1;
                    if ( v444 )
                    {
                      v445 = v444 - 1;
                      if ( v445 )
                      {
                        if ( v445 != 1 )
                          goto LABEL_389;
                        LODWORD(v446) = *(_DWORD *)Str2;
LABEL_975:
                        v447 = (float)(int)v446;
LABEL_1059:
                        v184 = v447 < *(float *)a2;
                        goto LABEL_339;
                      }
                      LODWORD(v448) = *(_DWORD *)Str2;
LABEL_977:
                      v449 = (float)(int)v448;
                      goto LABEL_1061;
                    }
                    LODWORD(v450) = *(_DWORD *)Str2;
LABEL_979:
                    v451 = (float)(int)v450;
                    goto LABEL_1063;
                  }
                  LODWORD(v452) = *(_DWORD *)Str2;
LABEL_981:
                  v453 = (float)(int)v452;
                  goto LABEL_1065;
                }
                LODWORD(v114) = *(_DWORD *)Str2;
LABEL_223:
                v115 = (float)(int)v114;
                goto LABEL_224;
              default:
                goto LABEL_389;
            }
            v458 = _mm_cvtsi32_si128(v468);
LABEL_1031:
            LODWORD(v447) = _mm_cvtepi32_ps(v458).m128_u32[0];
            goto LABEL_1059;
          }
LABEL_1053:
          v488 = v14 - 2;
          if ( v488 )
          {
            v489 = v488 - 1;
            if ( v489 )
            {
              v490 = v489 - 1;
              if ( v490 )
              {
                v491 = v490 - 1;
                if ( v491 )
                {
                  if ( v491 != 1 )
                    goto LABEL_389;
                  v447 = (float)(int)*(_QWORD *)Str2;
                  goto LABEL_1059;
                }
                v449 = (float)(int)*(_QWORD *)Str2;
LABEL_1061:
                v184 = *(float *)a2 < v449;
                goto LABEL_339;
              }
              v451 = (float)(int)*(_QWORD *)Str2;
LABEL_1063:
              v189 = v451 < *(float *)a2;
              v190 = v451 == *(float *)a2;
              goto LABEL_347;
            }
            v453 = (float)(int)*(_QWORD *)Str2;
LABEL_1065:
            v189 = *(float *)a2 < v453;
            v190 = *(float *)a2 == v453;
            goto LABEL_347;
          }
          v115 = (float)(int)*(_QWORD *)Str2;
LABEL_224:
          v19 = *(float *)a2 == v115;
          goto LABEL_34;
        }
        if ( a5 == 9 )
        {
          v496 = v14 - 2;
          if ( v496 )
          {
            v497 = v496 - 1;
            if ( v497 )
            {
              v498 = v497 - 1;
              if ( v498 )
              {
                v499 = v498 - 1;
                if ( v499 )
                {
                  if ( v499 != 1 )
                    goto LABEL_389;
                  v446 = *(_QWORD *)Str2;
                  if ( *(__int64 *)Str2 < 0 )
                  {
                    v447 = (float)(int)(v446 & 1 | (v446 >> 1)) + (float)(int)(v446 & 1 | (v446 >> 1));
                    goto LABEL_1059;
                  }
                  goto LABEL_975;
                }
                v448 = *(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                {
                  v449 = (float)(int)(v448 & 1 | (v448 >> 1)) + (float)(int)(v448 & 1 | (v448 >> 1));
                  goto LABEL_1061;
                }
                goto LABEL_977;
              }
              v450 = *(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
              {
                v451 = (float)(int)(v450 & 1 | (v450 >> 1)) + (float)(int)(v450 & 1 | (v450 >> 1));
                goto LABEL_1063;
              }
              goto LABEL_979;
            }
            v452 = *(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
            {
              v453 = (float)(int)(v452 & 1 | (v452 >> 1)) + (float)(int)(v452 & 1 | (v452 >> 1));
              goto LABEL_1065;
            }
            goto LABEL_981;
          }
          v114 = *(_QWORD *)Str2;
          if ( *(__int64 *)Str2 < 0 )
          {
            v115 = (float)(int)(v114 & 1 | (v114 >> 1)) + (float)(int)(v114 & 1 | (v114 >> 1));
            goto LABEL_224;
          }
          goto LABEL_223;
        }
        if ( a5 == 10 )
        {
          v492 = v14 - 2;
          if ( v492 )
          {
            v493 = v492 - 1;
            if ( v493 )
            {
              v494 = v493 - 1;
              if ( !v494 )
              {
                v106 = *(float *)Str2 < *(float *)a2;
                v107 = *(float *)Str2 == *(float *)a2;
                goto LABEL_248;
              }
              v495 = v494 - 1;
              if ( v495 )
              {
                if ( v495 != 1 )
                  goto LABEL_389;
                v99 = *(float *)Str2 < *(float *)a2;
                goto LABEL_238;
              }
              v124 = *(float *)a2;
              goto LABEL_237;
            }
            v129 = *(float *)a2;
            goto LABEL_247;
          }
          v132 = *(float *)a2;
          goto LABEL_254;
        }
        if ( a5 != 11 )
        {
          if ( a5 == 14 )
            goto LABEL_1053;
          if ( a5 != 15 )
            goto LABEL_389;
        }
        v484 = v14 - 2;
        if ( !v484 )
        {
          v113 = *(float *)a2;
          goto LABEL_221;
        }
        v485 = v484 - 1;
        if ( !v485 )
        {
          v110 = *(float *)a2;
          goto LABEL_215;
        }
        v486 = v485 - 1;
        if ( !v486 )
        {
          v105 = *(float *)a2;
          goto LABEL_209;
        }
        v487 = v486 - 1;
        if ( !v487 )
        {
          v102 = *(float *)a2;
          goto LABEL_203;
        }
        if ( v487 != 1 )
          goto LABEL_389;
        v98 = *(float *)a2;
LABEL_197:
        v99 = *(double *)Str2 < v98;
LABEL_238:
        v18 = !v99;
        goto LABEL_30;
      }
      if ( a5 <= 8 )
      {
        if ( a5 != 8 )
        {
          if ( a5 != 2 )
          {
            if ( a5 != 3 )
            {
              if ( a5 != 4 )
              {
                if ( a5 != 5 )
                {
                  if ( a5 != 6 )
                  {
                    if ( a5 != 7 )
                      goto LABEL_389;
                    v500 = v14 - 2;
                    if ( v500 )
                    {
                      v501 = v500 - 1;
                      if ( v501 )
                      {
                        v502 = v501 - 1;
                        if ( v502 )
                        {
                          v503 = v502 - 1;
                          if ( v503 )
                          {
                            if ( v503 != 1 )
                              goto LABEL_389;
                            v504 = *(unsigned int *)Str2;
                            goto LABEL_334;
                          }
                          v185 = *(unsigned int *)Str2;
LABEL_338:
                          v184 = *(_QWORD *)a2 < v185;
                          goto LABEL_339;
                        }
                        v187 = *(unsigned int *)Str2;
LABEL_342:
                        v186 = *(_QWORD *)a2 < v187;
                        goto LABEL_343;
                      }
                      v505 = *(unsigned int *)Str2;
LABEL_1161:
                      v189 = *(_QWORD *)a2 < v505;
                      v190 = *(_QWORD *)a2 == v505;
                      goto LABEL_347;
                    }
                    goto LABEL_1113;
                  }
                  v506 = v14 - 2;
                  if ( v506 )
                  {
                    v507 = v506 - 1;
                    if ( !v507 )
                    {
                      v505 = *(int *)Str2;
                      goto LABEL_1161;
                    }
                    v508 = v507 - 1;
                    if ( !v508 )
                    {
                      v187 = *(int *)Str2;
                      goto LABEL_342;
                    }
                    v509 = v508 - 1;
                    if ( !v509 )
                    {
                      v185 = *(int *)Str2;
                      goto LABEL_338;
                    }
                    if ( v509 != 1 )
                      goto LABEL_389;
                    v504 = *(int *)Str2;
LABEL_334:
                    v182 = *(_QWORD *)a2 < v504;
                    v183 = *(_QWORD *)a2 == v504;
LABEL_335:
                    v26 = v182 || v183;
                    goto LABEL_59;
                  }
LABEL_1123:
                  v83 = *(int *)Str2;
                  goto LABEL_157;
                }
                v510 = v14 - 2;
                if ( v510 )
                {
                  v511 = v510 - 1;
                  if ( !v511 )
                  {
                    v505 = *Str2;
                    goto LABEL_1161;
                  }
                  v512 = v511 - 1;
                  if ( !v512 )
                  {
                    v187 = *Str2;
                    goto LABEL_342;
                  }
                  v513 = v512 - 1;
                  if ( !v513 )
                  {
                    v185 = *Str2;
                    goto LABEL_338;
                  }
                  if ( v513 != 1 )
                    goto LABEL_389;
                  v504 = *Str2;
                  goto LABEL_334;
                }
LABEL_1133:
                v83 = *Str2;
                goto LABEL_157;
              }
              v514 = v14 - 2;
              if ( v514 )
              {
                v515 = v514 - 1;
                if ( !v515 )
                {
                  v505 = (__int16)*Str2;
                  goto LABEL_1161;
                }
                v516 = v515 - 1;
                if ( !v516 )
                {
                  v187 = (__int16)*Str2;
                  goto LABEL_342;
                }
                v517 = v516 - 1;
                if ( !v517 )
                {
                  v185 = (__int16)*Str2;
                  goto LABEL_338;
                }
                if ( v517 != 1 )
                  goto LABEL_389;
                v504 = (__int16)*Str2;
                goto LABEL_334;
              }
LABEL_1143:
              v83 = (__int16)*Str2;
              goto LABEL_157;
            }
            v518 = v14 - 2;
            if ( v518 )
            {
              v519 = v518 - 1;
              if ( !v519 )
              {
                v505 = *(unsigned __int8 *)Str2;
                goto LABEL_1161;
              }
              v520 = v519 - 1;
              if ( !v520 )
              {
                v187 = *(unsigned __int8 *)Str2;
                goto LABEL_342;
              }
              v521 = v520 - 1;
              if ( !v521 )
              {
                v185 = *(unsigned __int8 *)Str2;
                goto LABEL_338;
              }
              if ( v521 != 1 )
                goto LABEL_389;
              v504 = *(unsigned __int8 *)Str2;
              goto LABEL_334;
            }
LABEL_1153:
            v83 = *(unsigned __int8 *)Str2;
            goto LABEL_157;
          }
          v522 = v14 - 2;
          if ( v522 )
          {
            v523 = v522 - 1;
            if ( !v523 )
            {
              v505 = *(char *)Str2;
              goto LABEL_1161;
            }
            v524 = v523 - 1;
            if ( !v524 )
            {
              v187 = *(char *)Str2;
              goto LABEL_342;
            }
            v525 = v524 - 1;
            if ( !v525 )
            {
              v185 = *(char *)Str2;
              goto LABEL_338;
            }
            if ( v525 != 1 )
              goto LABEL_389;
            v504 = *(char *)Str2;
            goto LABEL_334;
          }
LABEL_156:
          v83 = *(char *)Str2;
LABEL_157:
          v82 = *(_QWORD *)a2 == v83;
          goto LABEL_158;
        }
        goto LABEL_1174;
      }
      if ( a5 == 9 )
        goto LABEL_1174;
      if ( a5 != 10 )
      {
        if ( a5 == 11 )
        {
LABEL_1167:
          v526 = v14 - 2;
          if ( !v526 )
          {
            v538 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v113 = (double)(int)(v538 & 1 | (v538 >> 1)) + (double)(int)(v538 & 1 | (v538 >> 1));
            else
              v113 = (double)(int)v538;
            goto LABEL_221;
          }
          v527 = v526 - 1;
          if ( !v527 )
          {
            v537 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v110 = (double)(int)(v537 & 1 | (v537 >> 1)) + (double)(int)(v537 & 1 | (v537 >> 1));
            else
              v110 = (double)(int)v537;
            goto LABEL_215;
          }
          v528 = v527 - 1;
          if ( !v528 )
          {
            v536 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v105 = (double)(int)(v536 & 1 | (v536 >> 1)) + (double)(int)(v536 & 1 | (v536 >> 1));
            else
              v105 = (double)(int)v536;
            goto LABEL_209;
          }
          v529 = v528 - 1;
          if ( !v529 )
          {
            v535 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v102 = (double)(int)(v535 & 1 | (v535 >> 1)) + (double)(int)(v535 & 1 | (v535 >> 1));
            else
              v102 = (double)(int)v535;
            goto LABEL_203;
          }
          if ( v529 != 1 )
            goto LABEL_389;
          v530 = *(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v98 = (double)(int)(v530 & 1 | (v530 >> 1)) + (double)(int)(v530 & 1 | (v530 >> 1));
          else
            v98 = (double)(int)v530;
          goto LABEL_197;
        }
        if ( a5 != 14 )
        {
          if ( a5 != 15 )
            goto LABEL_389;
          goto LABEL_1167;
        }
LABEL_1174:
        v531 = v14 - 2;
        if ( v531 )
        {
          v532 = v531 - 1;
          if ( v532 )
          {
            v533 = v532 - 1;
            if ( !v533 )
            {
              v24 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              goto LABEL_52;
            }
            v534 = v533 - 1;
            if ( v534 )
            {
              if ( v534 != 1 )
                goto LABEL_389;
              v36 = *(_QWORD *)a2 < *(_QWORD *)Str2;
              v37 = *(_QWORD *)a2 == *(_QWORD *)Str2;
              goto LABEL_90;
            }
            v38 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            goto LABEL_93;
          }
          v39 = *(_QWORD *)a2 < *(_QWORD *)Str2;
          v40 = *(_QWORD *)a2 == *(_QWORD *)Str2;
LABEL_96:
          v25 = !v39 && !v40;
          goto LABEL_53;
        }
        goto LABEL_1292;
      }
      v539 = v14 - 2;
      if ( !v539 )
      {
        v547 = *(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v132 = (float)(int)(v547 & 1 | (v547 >> 1)) + (float)(int)(v547 & 1 | (v547 >> 1));
        else
          v132 = (float)(int)v547;
        goto LABEL_254;
      }
      v540 = v539 - 1;
      if ( !v540 )
      {
        v546 = *(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v129 = (float)(int)(v546 & 1 | (v546 >> 1)) + (float)(int)(v546 & 1 | (v546 >> 1));
        else
          v129 = (float)(int)v546;
        goto LABEL_247;
      }
      v541 = v540 - 1;
      if ( !v541 )
      {
        v545 = *(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v127 = (float)(int)(v545 & 1 | (v545 >> 1)) + (float)(int)(v545 & 1 | (v545 >> 1));
        else
          v127 = (float)(int)v545;
        goto LABEL_244;
      }
      v542 = v541 - 1;
      if ( !v542 )
      {
        v544 = *(_QWORD *)a2;
        if ( *(__int64 *)a2 < 0 )
          v124 = (float)(int)(v544 & 1 | (v544 >> 1)) + (float)(int)(v544 & 1 | (v544 >> 1));
        else
          v124 = (float)(int)v544;
        goto LABEL_237;
      }
      if ( v542 != 1 )
        goto LABEL_389;
      v543 = *(_QWORD *)a2;
      if ( *(__int64 *)a2 < 0 )
        v122 = (float)(int)(v543 & 1 | (v543 >> 1)) + (float)(int)(v543 & 1 | (v543 >> 1));
      else
        v122 = (float)(int)v543;
LABEL_234:
      v99 = *(float *)Str2 < v122;
      goto LABEL_238;
    }
LABEL_1331:
    if ( a5 <= 8 )
    {
      if ( a5 != 8 )
      {
        if ( a5 == 2 )
        {
          v569 = v14 - 2;
          if ( !v569 )
            goto LABEL_156;
          v570 = v569 - 1;
          if ( !v570 )
          {
            v81 = *(char *)Str2;
            goto LABEL_152;
          }
          v571 = v570 - 1;
          if ( !v571 )
          {
            v77 = *(char *)Str2;
            goto LABEL_147;
          }
          v572 = v571 - 1;
          if ( !v572 )
          {
            v74 = *(char *)Str2;
            goto LABEL_142;
          }
          if ( v572 != 1 )
            goto LABEL_389;
          v552 = *(char *)Str2;
        }
        else if ( a5 == 3 )
        {
          v565 = v14 - 2;
          if ( !v565 )
            goto LABEL_1153;
          v566 = v565 - 1;
          if ( !v566 )
          {
            v81 = *(unsigned __int8 *)Str2;
            goto LABEL_152;
          }
          v567 = v566 - 1;
          if ( !v567 )
          {
            v77 = *(unsigned __int8 *)Str2;
            goto LABEL_147;
          }
          v568 = v567 - 1;
          if ( !v568 )
          {
            v74 = *(unsigned __int8 *)Str2;
            goto LABEL_142;
          }
          if ( v568 != 1 )
            goto LABEL_389;
          v552 = *(unsigned __int8 *)Str2;
        }
        else if ( a5 == 4 )
        {
          v561 = v14 - 2;
          if ( !v561 )
            goto LABEL_1143;
          v562 = v561 - 1;
          if ( !v562 )
          {
            v81 = (__int16)*Str2;
            goto LABEL_152;
          }
          v563 = v562 - 1;
          if ( !v563 )
          {
            v77 = (__int16)*Str2;
            goto LABEL_147;
          }
          v564 = v563 - 1;
          if ( !v564 )
          {
            v74 = (__int16)*Str2;
            goto LABEL_142;
          }
          if ( v564 != 1 )
            goto LABEL_389;
          v552 = (__int16)*Str2;
        }
        else
        {
          if ( a5 != 5 )
          {
            if ( a5 == 6 )
            {
              v553 = v14 - 2;
              if ( !v553 )
                goto LABEL_1123;
              v554 = v553 - 1;
              if ( v554 )
              {
                v555 = v554 - 1;
                if ( v555 )
                {
                  v556 = v555 - 1;
                  if ( v556 )
                  {
                    if ( v556 != 1 )
                      goto LABEL_389;
                    v552 = *(int *)Str2;
                    goto LABEL_137;
                  }
                  v74 = *(int *)Str2;
LABEL_142:
                  v73 = __OFSUB__(*(_QWORD *)a2, v74);
                  v72 = *(_QWORD *)a2 - v74 < 0;
                  goto LABEL_143;
                }
                v77 = *(int *)Str2;
                goto LABEL_147;
              }
              v81 = *(int *)Str2;
            }
            else
            {
              if ( a5 != 7 )
                goto LABEL_389;
              v548 = v14 - 2;
              if ( !v548 )
              {
LABEL_1113:
                v83 = *(unsigned int *)Str2;
                goto LABEL_157;
              }
              v549 = v548 - 1;
              if ( v549 )
              {
                v550 = v549 - 1;
                if ( v550 )
                {
                  v551 = v550 - 1;
                  if ( v551 )
                  {
                    if ( v551 != 1 )
                      goto LABEL_389;
                    v552 = *(unsigned int *)Str2;
                    goto LABEL_137;
                  }
                  v74 = *(unsigned int *)Str2;
                  goto LABEL_142;
                }
                v77 = *(unsigned int *)Str2;
LABEL_147:
                v76 = __OFSUB__(*(_QWORD *)a2, v77);
                v75 = *(_QWORD *)a2 - v77 < 0;
                goto LABEL_148;
              }
              v81 = *(unsigned int *)Str2;
            }
LABEL_152:
            v80 = __OFSUB__(*(_QWORD *)a2, v81);
            v78 = *(_QWORD *)a2 == v81;
            v79 = *(_QWORD *)a2 - v81 < 0;
            goto LABEL_153;
          }
          v557 = v14 - 2;
          if ( !v557 )
            goto LABEL_1133;
          v558 = v557 - 1;
          if ( !v558 )
          {
            v81 = *Str2;
            goto LABEL_152;
          }
          v559 = v558 - 1;
          if ( !v559 )
          {
            v77 = *Str2;
            goto LABEL_147;
          }
          v560 = v559 - 1;
          if ( !v560 )
          {
            v74 = *Str2;
            goto LABEL_142;
          }
          if ( v560 != 1 )
            goto LABEL_389;
          v552 = *Str2;
        }
LABEL_137:
        v71 = __OFSUB__(*(_QWORD *)a2, v552);
        v69 = *(_QWORD *)a2 == v552;
        v70 = *(_QWORD *)a2 - v552 < 0;
        goto LABEL_138;
      }
LABEL_1279:
      v577 = v14 - 2;
      if ( v577 )
      {
        v578 = v577 - 1;
        if ( !v578 )
        {
          v47 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
          v45 = *(_QWORD *)a2 == *(_QWORD *)Str2;
          v46 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
          goto LABEL_192;
        }
        v579 = v578 - 1;
        if ( !v579 )
        {
          v44 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
          v43 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
          goto LABEL_187;
        }
        v580 = v579 - 1;
        if ( v580 )
        {
          if ( v580 != 1 )
            goto LABEL_389;
          v35 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
          v33 = *(_QWORD *)a2 == *(_QWORD *)Str2;
          v34 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
          goto LABEL_177;
        }
        v42 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
        v41 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
        goto LABEL_182;
      }
LABEL_1292:
      v28 = *(_QWORD *)a2 == *(_QWORD *)Str2;
      goto LABEL_67;
    }
    if ( a5 == 9 )
      goto LABEL_1174;
    if ( a5 == 10 )
    {
      v590 = v14 - 2;
      if ( !v590 )
      {
        v132 = (float)(int)*(_QWORD *)a2;
        goto LABEL_254;
      }
      v591 = v590 - 1;
      if ( !v591 )
      {
        v129 = (float)(int)*(_QWORD *)a2;
        goto LABEL_247;
      }
      v592 = v591 - 1;
      if ( !v592 )
      {
        v127 = (float)(int)*(_QWORD *)a2;
        goto LABEL_244;
      }
      v593 = v592 - 1;
      if ( !v593 )
      {
        v124 = (float)(int)*(_QWORD *)a2;
        goto LABEL_237;
      }
      if ( v593 != 1 )
        goto LABEL_389;
      v122 = (float)(int)*(_QWORD *)a2;
      goto LABEL_234;
    }
    if ( a5 != 11 )
    {
      if ( a5 == 14 )
        goto LABEL_1279;
      if ( a5 != 15 )
        goto LABEL_389;
    }
    v573 = v14 - 2;
    if ( !v573 )
    {
      v113 = (double)(int)*(_QWORD *)a2;
      goto LABEL_221;
    }
    v574 = v573 - 1;
    if ( !v574 )
    {
      v110 = (double)(int)*(_QWORD *)a2;
      goto LABEL_215;
    }
    v575 = v574 - 1;
    if ( !v575 )
    {
      v105 = (double)(int)*(_QWORD *)a2;
      goto LABEL_209;
    }
    v576 = v575 - 1;
    if ( !v576 )
    {
      v102 = (double)(int)*(_QWORD *)a2;
      goto LABEL_203;
    }
    if ( v576 != 1 )
      goto LABEL_389;
    v98 = (double)(int)*(_QWORD *)a2;
    goto LABEL_197;
  }
  if ( a1 <= 0x14 )
  {
    if ( a1 >= 0x13 )
      goto LABEL_389;
    switch ( a1 )
    {
      case 0xEu:
        goto LABEL_1331;
      case 0xFu:
        goto LABEL_1308;
      case 0x10u:
        if ( a5 != 16 )
          goto LABEL_389;
        v581 = v14 - 2;
        if ( v581 )
        {
          v582 = v581 - 1;
          if ( v582 )
          {
            v583 = v582 - 1;
            if ( v583 )
            {
              v584 = v583 - 1;
              if ( v584 )
              {
                if ( v584 != 1 )
                  goto LABEL_389;
                v585 = (unsigned int)sub_140A30C68(a2, Str2) == -1;
              }
              else
              {
                v585 = (unsigned int)sub_140A30C68(a2, Str2) == 1;
              }
              if ( v585 )
                goto LABEL_14;
              v27 = sub_140A30C68(a2, Str2);
              goto LABEL_63;
            }
            v17 = (unsigned int)sub_140A30C68(a2, Str2) == -1;
          }
          else
          {
            v17 = (unsigned int)sub_140A30C68(a2, Str2) == 1;
          }
LABEL_29:
          v18 = v17;
          goto LABEL_30;
        }
        v16 = sub_140A30C68(a2, Str2);
LABEL_28:
        v17 = v16 == 0;
        goto LABEL_29;
      case 0x11u:
        if ( a5 != 17 || v14 != 2 )
          goto LABEL_389;
        goto LABEL_66;
    }
    if ( a5 != 18 )
      goto LABEL_389;
    if ( v14 == 2 )
      goto LABEL_24;
    if ( v14 - 9 > 2 )
      goto LABEL_389;
    v26 = sub_140A31A94(a2, Str2);
LABEL_59:
    *a8 = v26;
    goto LABEL_1374;
  }
  switch ( a1 )
  {
    case 0x15u:
      if ( a5 != 21 || v14 != 2 )
        goto LABEL_389;
      if ( *((_DWORD *)a2 + 4) != *((_DWORD *)Str2 + 4) )
        goto LABEL_13;
      v595 = *(_QWORD *)a2 - *(_QWORD *)Str2;
      if ( *(_QWORD *)a2 == *(_QWORD *)Str2 )
        v595 = *((_QWORD *)a2 + 1) - *((_QWORD *)Str2 + 1);
      v19 = v595 == 0;
      goto LABEL_34;
    case 0x16u:
      v594 = a5 == 22;
      goto LABEL_1356;
    case 0x17u:
      v385 = a5 == 23;
LABEL_840:
      if ( !v385 )
        goto LABEL_389;
      goto LABEL_841;
    case 0x18u:
      v594 = a5 == 24;
LABEL_1356:
      if ( !v594 || v14 != 2 )
        goto LABEL_389;
      goto LABEL_1358;
  }
  if ( a1 != 25 || a5 != 25 && a5 != 18 || v14 != 2 )
    goto LABEL_389;
LABEL_24:
  if ( !v13 )
  {
LABEL_60:
    if ( (_DWORD)v8 != a7 )
      goto LABEL_13;
    if ( !(_DWORD)v8 )
      goto LABEL_14;
    v27 = memcmp(a2, Str2, v8);
LABEL_63:
    v19 = v27 == 0;
    goto LABEL_34;
  }
  if ( (_DWORD)v8 && (_DWORD)v8 == a7 )
  {
    v16 = wcsicmp(a2, Str2);
    goto LABEL_28;
  }
LABEL_1374:
  if ( v12 )
  {
    LOBYTE(v10) = *a8 == 0;
    *a8 = v10;
  }
  return v11;
}
