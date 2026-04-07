/*
 * XREFs of ?SLGetHelper@@YA_NPEBG@Z @ 0x180011E68
 * Callers:
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x180037EA0 (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 * Callees:
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180011F1C (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18001398C (-MemoryFree@@YAXPEAX@Z.c)
 *     StringCchLengthW @ 0x18004B674 (StringCchLengthW.c)
 *     RtlULongLongAdd @ 0x180052160 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180052184 (RtlUIntAdd.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18005F3D4 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800636FB (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall SLGetHelper(STRSAFE_PCNZWCH psz)
{
  int v2; // edi
  char v3; // r15
  int v4; // ebx
  void *v6; // r13
  void *v7; // rbx
  int v8; // r14d
  HANDLE ProcessHeap; // rax
  _OWORD *v10; // rax
  _OWORD *v11; // r12
  HANDLE v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  int v15; // eax
  unsigned __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // r11d
  int v19; // eax
  unsigned int v20; // r11d
  int v21; // r10d
  int v22; // eax
  unsigned int v23; // r11d
  int v24; // r10d
  int v25; // eax
  size_t v26; // rdx
  int v27; // r10d
  HRESULT v28; // eax
  unsigned int v29; // r11d
  int v30; // eax
  unsigned int v31; // r11d
  int v32; // eax
  unsigned int v33; // r11d
  int v34; // r10d
  int v35; // eax
  int v36; // r10d
  unsigned int v37; // esi
  HANDLE v38; // rax
  void *v39; // rax
  _DWORD *v40; // r9
  int v41; // r11d
  _DWORD *v42; // rax
  int v43; // r11d
  __int64 v44; // rsi
  int v45; // eax
  int v46; // r11d
  unsigned int *v47; // r9
  __int64 v48; // r9
  int v49; // r10d
  unsigned int v50; // r11d
  _DWORD *v51; // r9
  _OWORD *v52; // rax
  int v53; // eax
  int v54; // r11d
  int v55; // eax
  size_t v56; // rdx
  int v57; // r11d
  STRSAFE_PCNZWCH v58; // r12
  __int64 v59; // r9
  unsigned int v60; // r11d
  int v61; // eax
  int v62; // r9d
  _QWORD *v63; // rax
  unsigned int *v64; // r9
  __int64 v65; // r9
  int v66; // r10d
  unsigned int v67; // r11d
  _DWORD *v68; // r9
  _QWORD *v69; // rax
  const void **v70; // rcx
  unsigned int *v71; // r9
  __int64 v72; // r9
  int v73; // r10d
  unsigned int v74; // r11d
  _DWORD *v75; // r9
  unsigned int *v76; // r9
  int v77; // esi
  __int64 v78; // rcx
  __int64 v79; // r9
  _DWORD *v80; // r9
  __int64 v81; // r10
  void *v82; // rcx
  unsigned __int8 *v83; // r12
  int v84; // eax
  int v85; // r11d
  unsigned int v86; // r11d
  __int64 v87; // rcx
  unsigned int v88; // r9d
  unsigned int v89; // r11d
  unsigned int v90; // r11d
  unsigned int v91; // r11d
  unsigned int v92; // r11d
  _DWORD *v93; // rax
  unsigned int *v94; // r9
  __int64 v95; // r9
  int v96; // r10d
  unsigned int v97; // r11d
  _DWORD *v98; // r9
  void *v99; // rsi
  HANDLE v100; // rax
  void *v101; // rsi
  HANDLE v102; // rax
  void *v103; // rsi
  HANDLE v104; // rax
  void *v105; // rsi
  HANDLE v106; // rax
  void *v107; // rsi
  void *v108; // r13
  HANDLE v109; // rax
  _OWORD *v110; // rax
  _OWORD *v111; // r12
  HANDLE v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // r13
  unsigned int v115; // r10d
  int v116; // eax
  int v117; // r9d
  unsigned int v118; // r10d
  int v119; // r11d
  int v120; // eax
  int v121; // r9d
  unsigned int v122; // r10d
  int v123; // r11d
  int v124; // eax
  int v125; // r11d
  unsigned int v126; // esi
  HANDLE v127; // rax
  void *v128; // rax
  unsigned int *v129; // r9
  unsigned int v130; // r10d
  unsigned int *v131; // rax
  int v132; // r11d
  unsigned int v133; // r10d
  void *v134; // rbx
  HANDLE v135; // rax
  void *v136; // rbx
  HANDLE v137; // rax
  HANDLE v138; // rax
  HANDLE v139; // rax
  _DWORD *v140; // rax
  unsigned int *v141; // r9
  __int64 v142; // r9
  int v143; // r10d
  unsigned int v144; // r11d
  unsigned int *v145; // r9
  _DWORD *v146; // r15
  int v147; // r14d
  unsigned int v148; // ecx
  unsigned int v149; // esi
  HANDLE v150; // rax
  _DWORD *v151; // rsi
  __int64 v152; // r9
  size_t v153; // rcx
  HANDLE v154; // rax
  unsigned __int64 v155; // r14
  unsigned __int8 v156; // al
  unsigned __int64 v157; // rcx
  char *v158; // rcx
  int v159; // esi
  unsigned __int8 *v160; // r8
  unsigned int v161; // r11d
  unsigned int v162; // edx
  unsigned int v163; // ecx
  int v164; // esi
  char v165; // di
  int v166; // r14d
  wchar_t *v167; // r9
  unsigned int v168; // esi
  unsigned int v169; // r14d
  unsigned int v170; // ecx
  unsigned int v171; // ebx
  char v172; // r13
  char *v173; // r14
  STRSAFE_PCNZWCH v174; // rdx
  int v175; // r14d
  STRSAFE_PCNZWCH v176; // rdi
  int v177; // r13d
  int v178; // r15d
  _BYTE *v179; // rax
  int v180; // r9d
  int v181; // r8d
  int v182; // esi
  int v183; // r11d
  int v184; // edx
  int v185; // r11d
  int v186; // esi
  int v187; // r11d
  int v188; // esi
  unsigned int v189; // r11d
  int v190; // esi
  int v191; // r11d
  int v192; // esi
  int v193; // r11d
  int v194; // esi
  int v195; // r11d
  unsigned int v196; // esi
  unsigned int v197; // r11d
  int v198; // esi
  int v199; // r11d
  int v200; // esi
  int v201; // r11d
  int v202; // esi
  int v203; // r11d
  int v204; // esi
  int v205; // r11d
  unsigned int v206; // esi
  int v207; // r11d
  unsigned int v208; // esi
  int v209; // r11d
  int v210; // esi
  int v211; // r11d
  int v212; // esi
  int v213; // r11d
  int v214; // esi
  int v215; // r11d
  int v216; // esi
  unsigned int v217; // r14d
  HANDLE v218; // rax
  LPVOID v219; // rsi
  int v220; // r14d
  HANDLE v221; // rax
  void *v222; // rax
  HANDLE v223; // rax
  _OWORD *v224; // rax
  HANDLE v225; // rax
  _QWORD *v226; // rax
  HANDLE v227; // rax
  HANDLE v228; // rax
  HANDLE v229; // rax
  HANDLE v230; // rax
  HANDLE v231; // rax
  __int64 v232; // rdx
  int v233; // esi
  unsigned int v234; // r10d
  int v235; // r14d
  unsigned int v236; // r10d
  unsigned int v237; // esi
  HANDLE v238; // rax
  _DWORD *v239; // rax
  void *v240; // rsi
  __int64 v241; // r9
  __int64 v242; // r9
  void *v243; // rcx
  __int64 v244; // r9
  __int64 v245; // r9
  void *v246; // rcx
  __int64 v247; // r9
  HANDLE v248; // rax
  int v249; // eax
  unsigned int v250; // ecx
  int v251; // r10d
  unsigned int v252; // eax
  unsigned int v253; // r10d
  unsigned int *v254; // rcx
  unsigned int v255; // esi
  int v256; // r10d
  unsigned int v257; // r10d
  unsigned int v258; // r11d
  unsigned int v259; // r10d
  unsigned int v260; // eax
  unsigned int v261; // r10d
  int v262; // r14d
  HANDLE v263; // rax
  void *v264; // rsi
  HANDLE v265; // rax
  void *v266; // rsi
  HANDLE v267; // rax
  void *v268; // rsi
  HANDLE v269; // rax
  HANDLE v270; // rax
  HANDLE v271; // rax
  void *v272; // rsi
  HANDLE v273; // rax
  _QWORD *v274; // rsi
  void *v275; // r15
  HANDLE v276; // rax
  void *v277; // r15
  HANDLE v278; // rax
  void *v279; // r15
  HANDLE v280; // rax
  HANDLE v281; // rax
  void *v282; // rsi
  HANDLE v283; // rax
  _DWORD *v284; // rsi
  __int64 v285; // r11
  int *v286; // rax
  int v287; // esi
  unsigned int v288; // esi
  HANDLE v289; // rax
  wchar_t *v290; // rax
  void **v291; // rsi
  signed int v292; // eax
  unsigned int v293; // ecx
  FARPROC v294; // rax
  signed int v295; // eax
  int v296; // eax
  SIZE_T v297; // rax
  void *v298; // r10
  unsigned __int8 *v299; // r11
  int v300; // eax
  int v301; // r14d
  void *v302; // r9
  void *v303; // r10
  void *v304; // rsi
  unsigned __int8 *v305; // r11
  void *v306; // r10
  unsigned __int8 *v307; // r11
  void *v308; // r9
  void *v309; // r10
  unsigned __int8 *v310; // r11
  void *v311; // r10
  unsigned __int8 *v312; // r11
  void *v313; // r9
  void *v314; // r10
  unsigned __int8 *v315; // r11
  void *v316; // r10
  unsigned __int8 *v317; // r11
  void *v318; // r9
  void *v319; // r10
  unsigned __int8 *v320; // r11
  void *v321; // r10
  unsigned __int8 *v322; // r11
  void *v323; // r9
  void *v324; // r10
  unsigned __int8 *v325; // r11
  void *v326; // r10
  unsigned __int8 *v327; // r11
  void *v328; // r10
  _DWORD *v329; // rdx
  SIZE_T v330; // r14
  int v331; // r12d
  SIZE_T v332; // r15
  HANDLE v333; // rax
  _QWORD *v334; // rax
  _QWORD *v335; // rsi
  void *v336; // r13
  HANDLE v337; // rax
  SIZE_T v338; // r12
  void *v339; // rax
  void *v340; // r12
  HANDLE v341; // rax
  void *v342; // rax
  void *v343; // r14
  HANDLE v344; // rax
  void *v345; // rax
  size_t v346; // rax
  HANDLE v347; // rax
  HANDLE v348; // rax
  HANDLE v349; // rax
  HANDLE v350; // rax
  char v351; // r14
  _DWORD *v352; // r10
  unsigned int v353; // eax
  size_t v354; // rdx
  char *v355; // rcx
  int v356; // r8d
  unsigned int v357; // ecx
  int v358; // r14d
  int v359; // r11d
  char v360; // di
  unsigned __int8 *v361; // rbx
  int v362; // r9d
  unsigned int v363; // r11d
  unsigned int v364; // r14d
  unsigned int v365; // r9d
  unsigned int v366; // ecx
  _BYTE *v367; // rdx
  char v368; // si
  _BYTE *v369; // r15
  int v370; // ebx
  unsigned __int8 *v371; // r12
  char *v372; // rsi
  int v373; // r10d
  unsigned int v374; // r13d
  int v375; // eax
  int v376; // r9d
  int v377; // r8d
  int v378; // ecx
  int v379; // r9d
  int v380; // r11d
  int v381; // r8d
  int v382; // r14d
  int v383; // r11d
  unsigned int v384; // r14d
  int v385; // r11d
  int v386; // r14d
  unsigned int v387; // r11d
  int v388; // r14d
  int v389; // r11d
  int v390; // r14d
  unsigned int v391; // r11d
  int v392; // r14d
  int v393; // r11d
  unsigned int v394; // r14d
  int v395; // r11d
  int v396; // r14d
  int v397; // r11d
  int v398; // r14d
  int v399; // r11d
  int v400; // r14d
  int v401; // r11d
  int v402; // r14d
  unsigned int v403; // r11d
  int v404; // r14d
  int v405; // edx
  int v406; // ecx
  int v407; // r14d
  int v408; // edx
  int v409; // r11d
  int v410; // r11d
  int v411; // r14d
  int v412; // r11d
  int v413; // r14d
  int v414; // r11d
  int v415; // r14d
  SIZE_T i; // rcx
  void *v417; // r11
  void *v418; // rsi
  int v419; // eax
  void *v420; // r10
  void *v421; // r11
  int v422; // eax
  int v423; // eax
  void *v424; // r10
  void *v425; // r11
  int v426; // eax
  int v427; // eax
  void *v428; // r10
  void *v429; // r11
  void *v430; // rsi
  SIZE_T v431; // r11
  unsigned int *v432; // r11
  __int64 v433; // r11
  int v434; // eax
  void *v435; // r10
  void *v436; // rax
  HANDLE v437; // rax
  SIZE_T v438; // rsi
  void *v439; // rcx
  HANDLE v440; // rax
  __int64 v441; // r9
  __int64 v442; // r11
  int v443; // r9d
  __int64 v444; // r11
  void **v445; // rax
  STRSAFE_PCNZWCH v446; // rcx
  __int64 v447; // r9
  __int64 v448; // r9
  unsigned int v449; // r10d
  int v450; // r9d
  int v451; // r9d
  __int64 v452; // r11
  STRSAFE_PCNZWCH v453; // rax
  STRSAFE_PCNZWCH v454; // rcx
  __int64 v455; // r9
  __int64 v456; // r9
  unsigned int v457; // r10d
  int v458; // r9d
  STRSAFE_PCNZWCH v459; // rcx
  __int64 v460; // r9
  unsigned int v461; // r12d
  __int64 v462; // r9
  int v463; // r9d
  int v464; // r9d
  STRSAFE_PCNZWCH v465; // rax
  STRSAFE_PCNZWCH v466; // rcx
  __int64 v467; // r9
  unsigned int v468; // r13d
  unsigned int v469; // r12d
  __int64 v470; // r9
  int v471; // r9d
  int v472; // eax
  int v473; // r9d
  size_t v474; // r10
  const void *v475; // r11
  STRSAFE_PCNZWCH v476; // rax
  unsigned int v477; // ecx
  unsigned int *v478; // r9
  __int64 v479; // r9
  int v480; // r10d
  unsigned int v481; // r11d
  _DWORD *v482; // r9
  unsigned int *v483; // rax
  __int64 v484; // rcx
  __int64 v485; // r9
  unsigned int v486; // r10d
  unsigned int *v487; // r10
  __int64 v488; // r9
  __int64 v489; // r10
  int v490; // r11d
  _DWORD *v491; // r10
  unsigned int *v492; // rax
  __int64 v493; // r9
  unsigned int v494; // r10d
  unsigned int *v495; // r10
  __int64 v496; // r9
  __int64 v497; // r10
  int v498; // r11d
  _DWORD *v499; // r10
  unsigned int *v500; // rax
  void *v501; // rcx
  __int64 v502; // rcx
  unsigned int v503; // r9d
  unsigned __int8 *v504; // r12
  const void **v505; // r15
  void *v506; // r13
  int v507; // esi
  unsigned __int64 v508; // r9
  unsigned int v509; // ecx
  unsigned int v510; // esi
  HANDLE v511; // rax
  _DWORD *v512; // rax
  __int64 v513; // r9
  unsigned int v514; // r11d
  void *v515; // rcx
  __int64 v516; // r9
  HANDLE v517; // rax
  int v518; // esi
  unsigned __int64 v519; // rsi
  char *v520; // rax
  unsigned int v521; // r11d
  char *v522; // rdx
  unsigned __int8 v523; // al
  unsigned __int64 v524; // rcx
  char *v525; // rcx
  int v526; // esi
  unsigned __int8 *v527; // r8
  int v528; // edx
  unsigned int v529; // ecx
  int v530; // esi
  char v531; // bl
  int v532; // r9d
  _BYTE *v533; // rdi
  unsigned int v534; // esi
  unsigned int v535; // r9d
  unsigned int v536; // ecx
  char v537; // r15
  _BYTE *v538; // r14
  int v539; // r12d
  unsigned __int8 *v540; // rdx
  char *v541; // rdi
  int v542; // r13d
  unsigned int v543; // r15d
  int v544; // r9d
  int v545; // r8d
  int v546; // esi
  int v547; // r11d
  int v548; // edx
  int v549; // r11d
  int v550; // esi
  int v551; // r11d
  int v552; // esi
  unsigned int v553; // r11d
  int v554; // esi
  int v555; // r11d
  int v556; // esi
  int v557; // r11d
  int v558; // esi
  int v559; // r11d
  unsigned int v560; // esi
  unsigned int v561; // r11d
  int v562; // esi
  int v563; // r11d
  int v564; // esi
  int v565; // r11d
  int v566; // esi
  int v567; // r11d
  int v568; // esi
  int v569; // r11d
  unsigned int v570; // esi
  int v571; // r11d
  unsigned int v572; // esi
  int v573; // r11d
  int v574; // esi
  int v575; // r11d
  int v576; // esi
  int v577; // r11d
  int v578; // esi
  int v579; // r11d
  int v580; // esi
  const void *v581; // rsi
  HANDLE v582; // rax
  unsigned int *v583; // rbx
  int v584; // esi
  void **v585; // rbx
  HANDLE v586; // rax
  HANDLE v587; // rax
  HANDLE v588; // rax
  HANDLE v589; // rax
  HANDLE v590; // rax
  __int64 v591; // rdx
  int v592; // ebx
  int v593; // esi
  unsigned int v594; // r10d
  unsigned int v595; // r10d
  HANDLE v596; // rax
  void *v597; // rax
  HANDLE v598; // rax
  _OWORD *v599; // rax
  HANDLE v600; // rax
  _QWORD *v601; // rax
  HANDLE v602; // rax
  HANDLE v603; // rax
  HANDLE v604; // rax
  HANDLE v605; // rax
  unsigned int v606; // ebx
  HANDLE v607; // rax
  _DWORD *v608; // rax
  void *v609; // rbx
  __int64 v610; // r9
  __int64 v611; // r9
  SIZE_T v612; // rcx
  __int64 v613; // r9
  __int64 v614; // r9
  SIZE_T v615; // rcx
  __int64 v616; // r9
  HANDLE v617; // rax
  int v618; // eax
  unsigned int v619; // ecx
  unsigned int v620; // r11d
  int v621; // r10d
  unsigned int v622; // eax
  HANDLE v623; // rax
  void *v624; // rbx
  HANDLE v625; // rax
  void *v626; // rbx
  HANDLE v627; // rax
  void *v628; // rbx
  HANDLE v629; // rax
  HANDLE v630; // rax
  HANDLE v631; // rax
  void *v632; // rbx
  HANDLE v633; // rax
  _QWORD *v634; // rbx
  void *v635; // rdi
  HANDLE v636; // rax
  void *v637; // rdi
  HANDLE v638; // rax
  void *v639; // rdi
  HANDLE v640; // rax
  HANDLE v641; // rax
  void *v642; // rbx
  HANDLE v643; // rax
  unsigned int v644; // r10d
  unsigned int *v645; // rcx
  unsigned int v646; // ebx
  int v647; // r10d
  unsigned int v648; // r11d
  int v649; // eax
  unsigned int v650; // r10d
  unsigned int v651; // r10d
  unsigned int v652; // eax
  unsigned int v653; // ebx
  HANDLE v654; // rax
  wchar_t *v655; // rax
  wchar_t *v656; // rbx
  signed int v657; // eax
  unsigned int v658; // ecx
  FARPROC ProcAddress; // rax
  signed int LastError; // eax
  int v661; // eax
  const void **v662; // rax
  void *v663; // r10
  unsigned __int8 *v664; // r11
  int v665; // eax
  int v666; // esi
  SIZE_T v667; // r10
  void *v668; // r9
  void *v669; // rbx
  void *v670; // r11
  SIZE_T v671; // r10
  void *v672; // r11
  SIZE_T v673; // r10
  void *v674; // r11
  SIZE_T v675; // r10
  void *v676; // r11
  SIZE_T v677; // r10
  void *v678; // r11
  SIZE_T v679; // r10
  void *v680; // r11
  SIZE_T v681; // r10
  void *v682; // r11
  SIZE_T v683; // r10
  void *v684; // r11
  SIZE_T v685; // r10
  void *v686; // r11
  SIZE_T v687; // r10
  void *v688; // r11
  SIZE_T v689; // r10
  const void **v690; // rdx
  SIZE_T v691; // rsi
  int v692; // r12d
  SIZE_T v693; // r15
  HANDLE v694; // rax
  _QWORD *v695; // rax
  _QWORD *v696; // rbx
  void *v697; // r13
  HANDLE v698; // rax
  SIZE_T v699; // r12
  void *v700; // rax
  const void *v701; // r12
  HANDLE v702; // rax
  void *v703; // rax
  const void *v704; // rsi
  HANDLE v705; // rax
  void *v706; // rax
  SIZE_T v707; // rax
  HANDLE v708; // rax
  HANDLE v709; // rax
  HANDLE v710; // rax
  HANDLE v711; // rax
  char v712; // si
  _DWORD *v713; // r11
  unsigned int v714; // eax
  unsigned __int8 *v715; // r10
  _BYTE *v716; // rdx
  int v717; // r9d
  unsigned int v718; // esi
  unsigned int v719; // ecx
  char v720; // r14
  int v721; // r11d
  int v722; // r8d
  unsigned int v723; // esi
  unsigned int v724; // r8d
  unsigned int v725; // edi
  unsigned int v726; // ecx
  char v727; // bl
  int v728; // r13d
  _BYTE *v729; // r15
  unsigned int v730; // r11d
  unsigned __int8 *v731; // r12
  unsigned __int64 v732; // rbx
  int v733; // eax
  int v734; // r14d
  int v735; // r10d
  int v736; // r9d
  int v737; // ecx
  int v738; // r10d
  int v739; // esi
  int v740; // r9d
  unsigned int v741; // r8d
  int v742; // esi
  unsigned int v743; // r8d
  int v744; // esi
  int v745; // r8d
  unsigned int v746; // esi
  int v747; // r8d
  int v748; // esi
  int v749; // r8d
  unsigned int v750; // esi
  int v751; // r8d
  int v752; // esi
  unsigned int v753; // eax
  int v754; // esi
  int v755; // eax
  int v756; // esi
  int v757; // eax
  unsigned int v758; // esi
  int v759; // eax
  int v760; // esi
  int v761; // eax
  unsigned int v762; // esi
  int v763; // ecx
  int v764; // eax
  int v765; // edx
  int v766; // esi
  int v767; // esi
  int v768; // eax
  int v769; // esi
  int v770; // eax
  int v771; // esi
  int v772; // eax
  unsigned __int64 v773; // rcx
  void *v774; // rdi
  void *v775; // rbx
  int v776; // eax
  const void **v777; // rbx
  int v778; // esi
  void *v779; // r11
  int v780; // eax
  int v781; // eax
  void *v782; // r11
  int v783; // eax
  int v784; // eax
  void *v785; // rcx
  void *v786; // r11
  const void **v787; // rcx
  unsigned int *v788; // rcx
  unsigned __int64 v789; // r11
  void *v790; // r10
  const void **v791; // r11
  HANDLE v792; // rax
  SIZE_T v793; // rbx
  HANDLE v794; // rax
  int v795; // ebx
  int v796; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int dwBytes; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int dwBytes_4; // [rsp+40h] [rbp-C8h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp-C0h] BYREF
  SIZE_T v800; // [rsp+50h] [rbp-B8h] BYREF
  STRSAFE_PCNZWCH psza; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v802; // [rsp+60h] [rbp-A8h]
  LPVOID v803; // [rsp+68h] [rbp-A0h]
  __int64 v804; // [rsp+70h] [rbp-98h]
  SIZE_T Size; // [rsp+78h] [rbp-90h] BYREF
  LPVOID v806; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int8 *v807; // [rsp+88h] [rbp-80h]
  SIZE_T v808; // [rsp+90h] [rbp-78h] BYREF
  SIZE_T v809; // [rsp+98h] [rbp-70h] BYREF
  LPVOID v810; // [rsp+A0h] [rbp-68h]
  void *v811; // [rsp+A8h] [rbp-60h]
  SIZE_T v812; // [rsp+B0h] [rbp-58h]
  LPVOID lpMem[2]; // [rsp+B8h] [rbp-50h] BYREF
  void *Src; // [rsp+C8h] [rbp-40h] BYREF
  void *v815; // [rsp+D0h] [rbp-38h] BYREF
  void *v816; // [rsp+D8h] [rbp-30h] BYREF
  void *v817; // [rsp+E0h] [rbp-28h] BYREF
  size_t v818; // [rsp+E8h] [rbp-20h] BYREF
  LPVOID v819; // [rsp+F0h] [rbp-18h]
  SIZE_T v820; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int *v821; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v822; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v823; // [rsp+10Ch] [rbp+4h] BYREF
  int v824; // [rsp+110h] [rbp+8h]
  LPVOID v825; // [rsp+118h] [rbp+10h]
  LPVOID v826[2]; // [rsp+120h] [rbp+18h]
  const void **v827; // [rsp+130h] [rbp+28h] BYREF
  unsigned int v828; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v829; // [rsp+13Ch] [rbp+34h] BYREF
  int v830; // [rsp+140h] [rbp+38h]
  int v831; // [rsp+144h] [rbp+3Ch]
  unsigned int v832; // [rsp+148h] [rbp+40h] BYREF
  unsigned int v833; // [rsp+14Ch] [rbp+44h] BYREF
  LPVOID v834[2]; // [rsp+150h] [rbp+48h]
  int v835; // [rsp+160h] [rbp+58h]
  int *v836; // [rsp+168h] [rbp+60h] BYREF
  int v837; // [rsp+170h] [rbp+68h]
  void *v838; // [rsp+178h] [rbp+70h]
  HMODULE phModule; // [rsp+190h] [rbp+88h] BYREF
  HMODULE hModule; // [rsp+1A0h] [rbp+98h] BYREF
  unsigned int v841; // [rsp+1ACh] [rbp+A4h]
  _QWORD v842[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v843; // [rsp+1C8h] [rbp+C0h]
  unsigned int v844; // [rsp+1CCh] [rbp+C4h]
  int v845; // [rsp+1D0h] [rbp+C8h]
  _QWORD v846[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v847; // [rsp+1E8h] [rbp+E0h]
  unsigned int v848; // [rsp+1ECh] [rbp+E4h]
  int v849; // [rsp+1F0h] [rbp+E8h]
  __int64 v850; // [rsp+208h] [rbp+100h]
  __int64 v851; // [rsp+220h] [rbp+118h]
  void *v852; // [rsp+238h] [rbp+130h] BYREF
  LPVOID v853; // [rsp+240h] [rbp+138h]
  void *v854; // [rsp+248h] [rbp+140h] BYREF

  psza = psz;
  v830 = 0;
  v836 = 0LL;
  v2 = 0;
  v835 = 0;
  v3 = 1;
  if ( psz )
  {
    v831 = 0;
    LODWORD(v6) = 0;
    v815 = 0LL;
    dwBytes_4 = 0;
    v838 = LocalAlloc(0x40u, 4uLL);
    v7 = v838;
    SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v815);
    if ( !v7 )
    {
      v815 = 0LL;
      v8 = -2147024882;
LABEL_800:
      v795 = (int)v806;
LABEL_801:
      SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v815);
      if ( v8 >= 0 )
      {
        if ( v795 == 4 )
        {
          v4 = v835;
          v2 = *v836;
          goto LABEL_813;
        }
      }
      else
      {
        switch ( v8 )
        {
          case -805306316:
            v4 = -1073418222;
LABEL_813:
            v3 = 1;
            goto LABEL_3;
          case -805306139:
          case -1073425151:
            v4 = -1073418201;
            goto LABEL_813;
          case -805306306:
            v4 = -1073418200;
            goto LABEL_813;
        }
        v4 = v8;
        if ( v8 != -2147024774 )
          goto LABEL_813;
      }
      v4 = -1073418210;
      goto LABEL_813;
    }
    v815 = v7;
    v825 = 0LL;
    *(_OWORD *)lpMem = 0LL;
    v820 = 0LL;
    *(_OWORD *)v826 = 0LL;
    ProcessHeap = GetProcessHeap();
    v10 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
    v824 = -1;
    v11 = v10;
    if ( !v10 )
    {
      v8 = -1073741801;
LABEL_12:
      v796 = v8;
      goto LABEL_127;
    }
    v825 = v10;
    *v10 = xmmword_180142290[0];
    v10[1] = xmmword_180142290[1];
    v10[2] = xmmword_180142290[2];
    v10[3] = xmmword_180142290[3];
    v10[4] = xmmword_180142290[4];
    v10[5] = xmmword_180142290[5];
    v10[6] = xmmword_180142290[6];
    v10[7] = xmmword_180142290[7];
    v10[8] = xmmword_180142290[8];
    v10[9] = xmmword_180142290[9];
    v12 = GetProcessHeap();
    v13 = HeapAlloc(v12, 8u, 8uLL);
    v14 = v13;
    if ( !v13 )
      goto LABEL_24;
    *v13 = qword_1801421D8;
    v820 = (SIZE_T)v13;
    v827 = (const void **)__rdtsc();
    dwBytes = 0;
    v15 = RtlUIntAdd(4LL, 4LL, &v800);
    LODWORD(v16) = 0;
    v796 = v15;
    v8 = v15;
    if ( v15 < 0 )
      goto LABEL_30;
    v17 = RtlUIntAdd(0LL, (unsigned int)v800, &dwBytes);
    v8 = v17 | 0x10000000;
    v796 = v17 | 0x10000000;
    if ( v17 < 0 )
      goto LABEL_27;
    v796 = RtlUIntAdd(v18, 160LL, &v800);
    v8 = v796;
    if ( v796 < 0 )
      goto LABEL_30;
    v19 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
    v8 = v21 | v19;
    v796 = v21 | v19;
    if ( (v21 | v19) < 0 )
      goto LABEL_27;
    v796 = RtlUIntAdd(v20, v20 + 4, &v800);
    v8 = v796;
    if ( v796 < 0 )
      goto LABEL_30;
    v22 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
    v8 = v24 | v22;
    v796 = v24 | v22;
    if ( (v24 | v22) < 0 )
      goto LABEL_27;
    v796 = RtlUIntAdd(v23, v23 + 4, &v800);
    v8 = v796;
    if ( v796 < 0 )
    {
LABEL_30:
      LODWORD(v6) = v16;
      goto LABEL_127;
    }
    v25 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
    v8 = v27 | v25;
    v796 = v27 | v25;
    if ( (v27 | v25) < 0 )
      goto LABEL_27;
    v28 = StringCchLengthW(psz, v26, &pcchLength);
    LODWORD(v16) = 0;
    if ( v28 < 0 )
    {
      v8 = -1073741762;
LABEL_29:
      v796 = v8;
      goto LABEL_30;
    }
    v796 = RtlUIntAdd(v29, (unsigned int)(2 * (pcchLength + 1)), &v800);
    v8 = v796;
    if ( v796 < 0 )
      goto LABEL_30;
    v30 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
    v8 = v30 | 0x10000000;
    v796 = v30 | 0x10000000;
    if ( v30 < 0 )
      goto LABEL_27;
    v796 = RtlUIntAdd(v31, v31, &v800);
    v8 = v796;
    if ( v796 < 0 )
      goto LABEL_30;
    v32 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
    v8 = v34 | v32;
    v796 = v34 | v32;
    if ( (v34 | v32) < 0 )
      goto LABEL_27;
    v796 = RtlUIntAdd(v33, v33, &v800);
    v8 = v796;
    if ( v796 < 0 )
      goto LABEL_30;
    v35 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
    v8 = v36 | v35;
    v796 = v36 | v35;
    if ( (v36 | v35) < 0 )
    {
LABEL_27:
      LODWORD(v6) = dwBytes_4;
      goto LABEL_127;
    }
    HIDWORD(lpMem[0]) = dwBytes;
    v37 = dwBytes;
    v38 = GetProcessHeap();
    v39 = HeapAlloc(v38, 8u, v37);
    if ( !v39 )
    {
LABEL_24:
      v8 = -1073741801;
      goto LABEL_26;
    }
    lpMem[1] = v39;
    LODWORD(lpMem[0]) = 0;
    v8 = RtlULongLongAdd(v39, 4LL, &v817, v39);
    v796 = v8;
    if ( v8 < 0 )
    {
LABEL_492:
      LODWORD(v6) = 0;
      goto LABEL_127;
    }
    if ( v40 + 2 > (_DWORD *)((char *)v40 + HIDWORD(lpMem[0])) )
      goto LABEL_44;
    v42 = v817;
    *v40 = v41;
    *v42 = 0;
    v43 = ++LODWORD(lpMem[0]);
    if ( lpMem[1] )
    {
      v47 = (unsigned int *)lpMem[1];
      pcchLength = (size_t)lpMem[1];
      if ( v43 )
      {
        while ( 1 )
        {
          v796 = RtlUIntAdd(4LL, *v47, &v800);
          v8 = v796;
          if ( v796 < 0 )
            break;
          v796 = RtlULongLongAdd(v48, (unsigned int)v800, &pcchLength, v48);
          v8 = v796;
          if ( v796 < 0 )
            break;
          v47 = (unsigned int *)pcchLength;
          if ( v49 + 1 >= v50 )
            goto LABEL_49;
        }
        LODWORD(v6) = 0;
LABEL_127:
        lpMem[0] = 0LL;
        v99 = lpMem[1];
        if ( lpMem[1] )
        {
          v100 = GetProcessHeap();
          HeapFree(v100, 0, v99);
          lpMem[1] = 0LL;
        }
        v826[0] = 0LL;
        v101 = v826[1];
        if ( v826[1] )
        {
          v102 = GetProcessHeap();
          HeapFree(v102, 0, v101);
          v826[1] = 0LL;
        }
        v103 = v825;
        if ( v825 )
        {
          v104 = GetProcessHeap();
          HeapFree(v104, 0, v103);
        }
        v105 = (void *)v820;
        if ( v820 )
        {
          v106 = GetProcessHeap();
          HeapFree(v106, 0, v105);
        }
        v107 = 0LL;
        if ( v8 < 0 )
        {
          v2 = 0;
          goto LABEL_800;
        }
        if ( !(_DWORD)v6 )
        {
LABEL_798:
          v795 = v831;
          v815 = 0LL;
          v2 = v830;
          v836 = (int *)v838;
          goto LABEL_801;
        }
        v819 = 0LL;
        v108 = 0LL;
        *(_OWORD *)v834 = 0LL;
        v109 = GetProcessHeap();
        v110 = HeapAlloc(v109, 8u, 0xA0uLL);
        v111 = v110;
        if ( !v110 )
        {
LABEL_155:
          v134 = v819;
          v818 = 0LL;
          if ( v819 )
          {
            v135 = GetProcessHeap();
            HeapFree(v135, 0, v134);
            v819 = 0LL;
          }
          v136 = v834[1];
          v834[0] = 0LL;
          if ( v834[1] )
          {
            v137 = GetProcessHeap();
            HeapFree(v137, 0, v136);
            v834[1] = 0LL;
          }
          if ( v108 )
          {
            v138 = GetProcessHeap();
            HeapFree(v138, 0, v108);
          }
          if ( v107 )
          {
            v139 = GetProcessHeap();
            HeapFree(v139, 0, v107);
          }
          goto LABEL_798;
        }
        v807 = (unsigned __int8 *)v110;
        *v110 = xmmword_180142290[0];
        v110[1] = xmmword_180142290[1];
        v110[2] = xmmword_180142290[2];
        v110[3] = xmmword_180142290[3];
        v110[4] = xmmword_180142290[4];
        v110[5] = xmmword_180142290[5];
        v110[6] = xmmword_180142290[6];
        v110[7] = xmmword_180142290[7];
        v110[8] = xmmword_180142290[8];
        v110[9] = xmmword_180142290[9];
        v112 = GetProcessHeap();
        v113 = HeapAlloc(v112, 8u, 8uLL);
        v114 = v113;
        if ( !v113 )
          goto LABEL_154;
        v107 = v113;
        *v113 = qword_1801421D8;
        v854 = v113;
        v816 = (void *)__rdtsc();
        LODWORD(v808) = 0;
        if ( (int)RtlUIntAdd(4LL, 4LL, &v800) < 0
          || (int)RtlUIntAdd(0LL, (unsigned int)v800, &v808) < 0
          || (int)RtlUIntAdd(v115, 160LL, &v800) < 0
          || (v116 = RtlUIntAdd((unsigned int)v808, (unsigned int)v800, &v808), (v119 | v116) < 0)
          || (int)RtlUIntAdd(v118, (unsigned int)(v117 + 8), &v800) < 0
          || (v120 = RtlUIntAdd((unsigned int)v808, (unsigned int)v800, &v808), (v123 | v120) < 0)
          || (int)RtlUIntAdd(v122, (unsigned int)(v121 + 8), &v800) < 0
          || (v124 = RtlUIntAdd((unsigned int)v808, (unsigned int)v800, &v808), (v125 | v124) < 0) )
        {
LABEL_154:
          v108 = v111;
          goto LABEL_155;
        }
        HIDWORD(v818) = v808;
        v126 = v808;
        v127 = GetProcessHeap();
        v128 = HeapAlloc(v127, 8u, v126);
        if ( !v128 )
          goto LABEL_153;
        v819 = v128;
        LODWORD(v818) = 0;
        if ( (int)RtlULongLongAdd(v128, 4LL, &v821, v128) < 0
          || v129 + 2 > (unsigned int *)((char *)v129 + HIDWORD(v818)) )
        {
          goto LABEL_153;
        }
        v131 = v821;
        *v129 = v130;
        *v131 = v130;
        v132 = v818 + 1;
        LODWORD(v818) = v818 + 1;
        if ( v819 )
        {
          v478 = (unsigned int *)v819;
          v815 = v819;
          if ( v132 )
          {
            while ( (int)RtlUIntAdd(4LL, *v478, &v800) >= 0
                 && (int)RtlULongLongAdd(v479, (unsigned int)v800, &v815, v479) >= 0 )
            {
              v478 = (unsigned int *)v815;
              if ( v480 + 1 >= v481 )
                goto LABEL_497;
            }
            goto LABEL_153;
          }
LABEL_497:
          if ( (int)RtlULongLongAdd(v478, 4LL, &v821, v478) < 0 || v482 + 41 > (_DWORD *)((char *)v819 + HIDWORD(v818)) )
            goto LABEL_153;
          v483 = v821;
          v484 = v133 + 124;
          *v482 = 160;
          *(_OWORD *)v483 = *v111;
          *((_OWORD *)v483 + 1) = v111[1];
          *((_OWORD *)v483 + 2) = v111[2];
          *((_OWORD *)v483 + 3) = v111[3];
          *((_OWORD *)v483 + 4) = v111[4];
          *((_OWORD *)v483 + 5) = v111[5];
          *((_OWORD *)v483 + 6) = v111[6];
          *(_OWORD *)((char *)v483 + v484 - 16) = v111[7];
          *(_OWORD *)((char *)v483 + v484) = *(_OWORD *)((char *)v111 + v484);
          *(_OWORD *)((char *)v483 + v484 + 16) = *(_OWORD *)((char *)v111 + v484 + 16);
        }
        else if ( (int)RtlUIntAdd(v130, 160LL, &v800) < 0
               || (int)RtlUIntAdd(HIDWORD(v818), (unsigned int)v800, (char *)&v818 + 4) < 0 )
        {
          goto LABEL_153;
        }
        v485 = (unsigned int)(v818 + 1);
        LODWORD(v818) = v818 + 1;
        if ( v819 )
        {
          v487 = (unsigned int *)v819;
          v815 = v819;
          if ( (_DWORD)v485 )
          {
            while ( (int)RtlUIntAdd(4LL, *v487, &v800) >= 0
                 && (int)RtlULongLongAdd(v489, (unsigned int)v800, &v815, v488) >= 0 )
            {
              v487 = (unsigned int *)v815;
              if ( v490 + 1 >= (unsigned int)v485 )
                goto LABEL_508;
            }
            goto LABEL_153;
          }
LABEL_508:
          if ( (int)RtlULongLongAdd(v487, 4LL, &v821, v485) < 0 || v491 + 3 > (_DWORD *)((char *)v819 + HIDWORD(v818)) )
            goto LABEL_153;
          v492 = v821;
          *v491 = 8;
          v486 = 4;
          *(_QWORD *)v492 = *v114;
        }
        else if ( (int)RtlUIntAdd(v133, 8LL, &v800) < 0
               || (int)RtlUIntAdd(HIDWORD(v818), (unsigned int)v800, (char *)&v818 + 4) < 0 )
        {
          goto LABEL_153;
        }
        v493 = (unsigned int)(v818 + 1);
        LODWORD(v818) = v818 + 1;
        if ( v819 )
        {
          v495 = (unsigned int *)v819;
          v815 = v819;
          if ( (_DWORD)v493 )
          {
            while ( (int)RtlUIntAdd(4LL, *v495, &v800) >= 0
                 && (int)RtlULongLongAdd(v497, (unsigned int)v800, &v815, v496) >= 0 )
            {
              v495 = (unsigned int *)v815;
              if ( v498 + 1 >= (unsigned int)v493 )
                goto LABEL_519;
            }
            goto LABEL_153;
          }
LABEL_519:
          if ( (int)RtlULongLongAdd(v495, 4LL, &v821, v493) < 0 || v499 + 3 > (_DWORD *)((char *)v819 + HIDWORD(v818)) )
            goto LABEL_153;
          v500 = v821;
          v501 = v816;
          *v499 = 8;
          v494 = 4;
          *(_QWORD *)v500 = v501;
        }
        else if ( (int)RtlUIntAdd(v486, 8LL, &v800) < 0
               || (int)RtlUIntAdd(HIDWORD(v818), (unsigned int)v800, (char *)&v818 + 4) < 0 )
        {
          goto LABEL_153;
        }
        LODWORD(v818) = v818 + 1;
        if ( (int)RtlUIntAdd(v494, v494, &v800) >= 0
          && (int)RtlUIntAdd(v502, 8LL, &v809) >= 0
          && (int)RtlUIntAdd(v503, (unsigned int)v809, &v800) >= 0 )
        {
          v504 = 0LL;
          LODWORD(v806) = v800;
          v811 = 0LL;
          v505 = 0LL;
          LODWORD(v804) = 0;
          v506 = 0LL;
          v812 = 0LL;
          LODWORD(v808) = 0;
          v803 = 0LL;
          v810 = 0LL;
          v852 = 0LL;
          v816 = (void *)__rdtsc();
          v823 = 8;
          v507 = RtlUIntAdd(8LL, HIDWORD(v818), &v823);
          if ( v507 >= 0 )
          {
            v509 = (v823 + 7) & 0xFFFFFFF8;
            if ( v509 < v823 )
              goto LABEL_630;
            v823 = (v823 + 7) & 0xFFFFFFF8;
            v510 = v509;
            v511 = GetProcessHeap();
            v512 = HeapAlloc(v511, 8u, v510);
            v820 = (SIZE_T)v512;
            if ( !v512 )
              goto LABEL_630;
            v815 = v512;
            *v512 = v818;
            v507 = RtlULongLongAdd(v512, 4LL, &v815, v512);
            if ( v507 < 0
              || (v515 = v815, *(_DWORD *)v815 = HIDWORD(v818),
                               v507 = RtlULongLongAdd(v515, v514, &v815, v513),
                               v507 < 0) )
            {
              v517 = GetProcessHeap();
              HeapFree(v517, 0, (LPVOID)v820);
              v508 = 0LL;
            }
            else
            {
              *(_QWORD *)(v823 + v516 - 8) = v816;
              memcpy_0(v815, v819, HIDWORD(v818));
              v504 = (unsigned __int8 *)v820;
              v508 = v823;
              v811 = (void *)v820;
              LODWORD(v804) = v823;
            }
          }
          v518 = v507 | 0x10000000;
          if ( v518 < 0 )
            goto LABEL_602;
          pcchLength = 0LL;
          if ( v504 )
          {
            v519 = (unsigned int)v508;
            if ( !(_DWORD)v508
              || (psza = (STRSAFE_PCNZWCH)((unsigned int)v508 + 8LL),
                  v520 = (char *)MemoryAlloc((unsigned __int64)psza),
                  v521 = 0,
                  v820 = (SIZE_T)v520,
                  (v522 = v520) == 0LL) )
            {
              v518 = -805306367;
              goto LABEL_603;
            }
            v523 = 0;
            LOBYTE(v802) = 0;
            v524 = 0LL;
            if ( v519 )
            {
              do
                v523 ^= v504[v524++];
              while ( v524 < v519 );
              LOBYTE(v802) = v523;
            }
            v525 = v522;
            v815 = v522;
            v853 = (LPVOID)0xC81ECB17B1B54A58LL;
            LODWORD(v809) = 0;
            v526 = -1;
            dwBytes = 0;
            v527 = v504;
            v528 = v804 & 7;
            if ( (v804 & 7) != 0 )
            {
              v529 = 0;
              v530 = 0;
              LODWORD(v800) = 0;
              v531 = 56;
              do
              {
                v532 = *v527++;
                if ( v529 >= 4 )
                  v530 |= v532 << v531;
                else
                  v521 |= v532 << (v531 - 32);
                v531 -= 8;
                v529 = v800 + 1;
                LODWORD(v809) = v530;
                dwBytes = v521;
                LODWORD(v800) = v529;
              }
              while ( (int)v529 < v528 );
              v533 = v815;
              v521 ^= 0xB17A307A;
              v534 = v530 ^ 0x42F6B18D;
              v811 = v504;
              v535 = v534;
              v536 = v521;
              do
              {
                v816 = v533 + 1;
                if ( (unsigned int)v506 >= 4 )
                {
                  v535 = __ROL4__(v535, 8);
                  v537 = v535;
                }
                else
                {
                  v536 = __ROL4__(v536, 8);
                  v537 = v536;
                }
                *v533 = v537;
                LODWORD(v506) = (_DWORD)v506 + 1;
                v533 = v816;
              }
              while ( (int)v506 < v528 );
              v525 = (char *)v816;
              v505 = (const void **)v812;
              v815 = v816;
              v506 = (void *)v812;
              if ( (unsigned int)v528 <= 4 )
              {
                v526 = 0;
                if ( (unsigned int)v528 >= 4 )
                  goto LABEL_555;
                v521 = v521 >> (8 * (4 - v528)) << (8 * (4 - v528));
              }
              else
              {
                v526 = v534 >> (8 * (8 - v528)) << (8 * (8 - v528));
              }
              v525 = (char *)v815;
            }
LABEL_555:
            v816 = (void *)((unsigned __int64)(unsigned int)v804 >> 3);
            if ( v816 )
            {
              v538 = v525 + 7;
              v539 = WORD2(v853);
              v540 = v527 + 2;
              v541 = (char *)v816;
              v542 = v809;
              v543 = dwBytes;
              LODWORD(v800) = WORD1(v853);
              dwBytes_4 = HIWORD(v853);
              do
              {
                v544 = v540[1] | ((*v540 | ((*(v540 - 1) | (*(v540 - 2) << 8)) << 8)) << 8);
                v545 = v540[5] | ((v540[4] | ((v540[3] | (v540[2] << 8)) << 8)) << 8);
                v816 = v540 + 8;
                v546 = v545 ^ v526;
                v547 = v521 ^ v544 ^ (v546 - 19032);
                v548 = __ROR4__(v547, 15);
                v549 = HIDWORD(v853) ^ v547;
                v550 = (__ROR4__(v549, 7) + WORD1(v853) * v548) ^ v546;
                v551 = (v539 * __ROR4__(v550 - 1313519016, 9) - __ROR4__(v550, 10)) ^ v549;
                v552 = (__ROL4__(v551, 5) + HIWORD(v853) * __ROL4__(v539 ^ v551, 4)) ^ v550;
                v553 = (HIDWORD(v853) - (v552 ^ 0xB1B54A58)) ^ v551;
                v554 = (WORD1(v853) * (v553 - 19032) - (v553 >> 6)) ^ v552;
                v555 = (19032 * (v539 ^ __ROR4__(v554, 15))) ^ v553;
                v556 = (v539 * (HIWORD(v853) + __ROR4__(~v555, 3))) ^ v554;
                v557 = (v556 - 19032 - HIDWORD(v853)) ^ v555;
                v558 = (v800 * (dwBytes_4 ^ v557)) ^ __ROR4__(v557, 10) ^ v556;
                v559 = __ROR4__(v558, 3) ^ (v539 * __ROL4__(v558 ^ 0x4A58, 6)) ^ v557;
                v560 = (19032 * (__ROR4__(v559, 15) - HIWORD(v853))) ^ v558;
                v561 = (v560 >> 15) ^ (19032 * __ROL4__(v560 - v539, 3)) ^ (v560 >> 1) ^ (19032 * (HIWORD(v853) ^ v560)) ^ v559;
                v562 = (WORD1(v853) * (v561 - v539) - (v561 >> 13)) ^ v560;
                v563 = __ROR4__(v562, 11) ^ (v539 * __ROR4__(-1313519016 - v562, 9)) ^ v561;
                v564 = (v563 + 1313519016 - HIWORD(v853)) ^ v562;
                v565 = (19032 * (v800 ^ v564) - __ROR4__(v564, 7)) ^ v563;
                v566 = (WORD1(v853) * __ROL4__(HIWORD(v853) ^ v565, 4) - __ROR4__(v565, 16)) ^ v564;
                v567 = (__ROR4__(v566, 4) + v539 * __ROR4__(-1313519016 - v566, 10)) ^ v565;
                v568 = __ROR4__(v567, 9) ^ (HIWORD(v853) * __ROR4__(v567 + 1313519016, 4)) ^ v566;
                v569 = (19032 * __ROL4__(HIDWORD(v853) ^ v568, 8) - __ROL4__(v568, 2)) ^ v567;
                v570 = (WORD1(v853) * __ROR4__(HIDWORD(v853) - v569, 11) - __ROR4__(v569, 12)) ^ v568;
                v571 = (v570 >> 8) ^ (v539 * (WORD1(v853) ^ v570)) ^ v569;
                v540 = (unsigned __int8 *)v816;
                v572 = v571 ^ HIDWORD(v853) ^ v570 ^ 0xB1B54A58;
                v573 = v543 ^ v571;
                *(v538 - 4) = v573;
                v574 = v542 ^ v572;
                *v538 = v574;
                v543 = v544;
                v575 = __ROR4__(v573, 8);
                v542 = v545;
                *(v538 - 5) = v575;
                v538 += 8;
                v576 = __ROR4__(v574, 8);
                *(v538 - 9) = v576;
                v577 = __ROR4__(v575, 8);
                *(v538 - 14) = v577;
                v578 = __ROR4__(v576, 8);
                *(v538 - 10) = v578;
                v579 = __ROR4__(v577, 8);
                v580 = __ROR4__(v578, 8);
                *(v538 - 15) = v579;
                *(v538 - 11) = v580;
                v526 = __ROR4__(v580, 8);
                v521 = __ROR4__(v579, 8);
                --v541;
              }
              while ( v541 );
              v505 = (const void **)v812;
              v523 = v802;
              v506 = (void *)v812;
              v8 = v796;
              v504 = (unsigned __int8 *)v811;
            }
            v581 = (const void *)v820;
            *(_QWORD *)(v820 + (unsigned int)v804) = v523;
            v851 = 160LL;
            v582 = GetProcessHeap();
            v583 = (unsigned int *)HeapAlloc(v582, 8u, 0x30uLL);
            if ( v583 )
            {
              *v583 = (unsigned int)psza;
              v596 = GetProcessHeap();
              v597 = HeapAlloc(v596, 8u, (unsigned int)psza);
              if ( v597 )
              {
                *((_QWORD *)v583 + 1) = v597;
                memcpy_0(v597, v581, (unsigned int)psza);
                v583[4] = 160;
                v598 = GetProcessHeap();
                v599 = HeapAlloc(v598, 8u, 0xA0uLL);
                v584 = 0;
                if ( v599 )
                {
                  *((_QWORD *)v583 + 3) = v599;
                  *v599 = xmmword_1801421E0[0];
                  v599[1] = xmmword_1801421E0[1];
                  v599[2] = xmmword_1801421E0[2];
                  v599[3] = xmmword_1801421E0[3];
                  v599[4] = xmmword_1801421E0[4];
                  v599[5] = xmmword_1801421E0[5];
                  v599[6] = xmmword_1801421E0[6];
                  v599[7] = xmmword_1801421E0[7];
                  v599[8] = xmmword_1801421E0[8];
                  v599[9] = xmmword_1801421E0[9];
                  v583[8] = 8;
                  v600 = GetProcessHeap();
                  v601 = HeapAlloc(v600, 8u, 8uLL);
                  if ( v601 )
                  {
                    *((_QWORD *)v583 + 5) = v601;
                    *v601 = qword_180142280;
                    v505 = (const void **)v583;
                    v585 = 0LL;
LABEL_562:
                    v586 = GetProcessHeap();
                    HeapFree(v586, 0, (LPVOID)v820);
                    if ( v585 )
                    {
                      v816 = v585[1];
                      if ( v816 )
                      {
                        v587 = GetProcessHeap();
                        HeapFree(v587, 0, v816);
                        v585[1] = 0LL;
                      }
                      v816 = v585[3];
                      if ( v816 )
                      {
                        v588 = GetProcessHeap();
                        HeapFree(v588, 0, v816);
                        v585[3] = 0LL;
                      }
                      v816 = v585[5];
                      if ( v816 )
                      {
                        v589 = GetProcessHeap();
                        HeapFree(v589, 0, v816);
                        v585[5] = 0LL;
                      }
                      v590 = GetProcessHeap();
                      HeapFree(v590, 0, v585);
                    }
                    v518 = v584 | 0x10000000;
                    if ( v518 < 0 )
                      goto LABEL_602;
                    v591 = *(unsigned int *)v505;
                    dwBytes = 4;
                    v592 = 0;
                    v593 = RtlUIntAdd(4LL, v591, &dwBytes);
                    if ( v593 >= 0 )
                    {
                      v593 = RtlUIntAdd(dwBytes, v594, &dwBytes);
                      if ( v593 >= 0 )
                      {
                        v593 = RtlUIntAdd(dwBytes, *((unsigned int *)v505 + 4), &dwBytes);
                        if ( v593 >= 0 )
                        {
                          v593 = RtlUIntAdd(dwBytes, v595, &dwBytes);
                          if ( v593 >= 0 )
                          {
                            v593 = RtlUIntAdd(dwBytes, *((unsigned int *)v505 + 8), &dwBytes);
                            if ( v593 >= 0 )
                            {
                              LODWORD(v800) = dwBytes;
                              v606 = dwBytes;
                              v607 = GetProcessHeap();
                              v608 = HeapAlloc(v607, 8u, v606);
                              v609 = v608;
                              if ( !v608 )
                                goto LABEL_658;
                              Size = (SIZE_T)v608;
                              *v608 = *(_DWORD *)v505;
                              v593 = RtlULongLongAdd(v608, 4LL, &Size, v508);
                              if ( v593 < 0 )
                                goto LABEL_597;
                              memcpy_0((void *)Size, v505[1], *(unsigned int *)v505);
                              v593 = RtlULongLongAdd(Size, *(unsigned int *)v505, &Size, v610);
                              if ( v593 < 0 )
                                goto LABEL_597;
                              v612 = Size;
                              *(_DWORD *)Size = *((_DWORD *)v505 + 4);
                              v593 = RtlULongLongAdd(v612, 4LL, &Size, v611);
                              if ( v593 < 0
                                || (memcpy_0((void *)Size, v505[3], *((unsigned int *)v505 + 4)),
                                    v593 = RtlULongLongAdd(Size, *((unsigned int *)v505 + 4), &Size, v613),
                                    v593 < 0)
                                || (v615 = Size,
                                    *(_DWORD *)Size = *((_DWORD *)v505 + 8),
                                    v593 = RtlULongLongAdd(v615, 4LL, &Size, v614),
                                    v593 < 0)
                                || (memcpy_0((void *)Size, v505[5], *((unsigned int *)v505 + 8)),
                                    v593 = RtlULongLongAdd(Size, *((unsigned int *)v505 + 8), &Size, v616),
                                    v593 < 0) )
                              {
LABEL_597:
                                v617 = GetProcessHeap();
                                HeapFree(v617, 0, v609);
                                v592 = v808;
                              }
                              else
                              {
                                v506 = v609;
                                v592 = v800;
                                LODWORD(v808) = v800;
                              }
                            }
                          }
                        }
                      }
                    }
                    v518 = v593 | 0x10000000;
                    if ( v518 < 0 )
                      goto LABEL_602;
                    v829 = 8;
                    v618 = RtlUIntAdd(8LL, (unsigned int)v806, &v829);
                    v518 = v621 | v618;
                    if ( (v621 | v618) >= 0 )
                    {
                      v622 = (v829 + 7) & 0xFFFFFFF8;
                      if ( v622 < v829 )
                      {
                        v518 = -1073741675;
                        goto LABEL_602;
                      }
                      v832 = (v829 + 7) & 0xFFFFFFF8;
                      v518 = RtlUIntAdd(v622, v619, &v832);
                      if ( v518 >= 0 )
                      {
                        if ( !v819 )
                          goto LABEL_649;
                        v508 = 1LL;
                        if ( (unsigned int)v818 <= 1 )
                          goto LABEL_649;
                        pcchLength = (size_t)v819;
                        v518 = RtlULongLongAdd(v819, 4LL, &pcchLength, 1LL);
                        if ( v518 < 0 )
                          goto LABEL_602;
                        v518 = RtlULongLongAdd(pcchLength, v644, &pcchLength, v508);
                        if ( v518 < 0 )
                          goto LABEL_602;
                        LODWORD(v806) = *(_DWORD *)pcchLength;
                        v518 = RtlULongLongAdd(pcchLength, (unsigned int)(v508 + 3), &pcchLength, v508);
                        if ( v518 < 0 )
                          goto LABEL_602;
                        if ( (unsigned int)v818 <= 2 )
                        {
LABEL_649:
                          v518 = -1073741811;
                          goto LABEL_602;
                        }
                        v645 = (unsigned int *)v819;
                        pcchLength = (size_t)v819;
                        LODWORD(v808) = v592;
                        while ( 1 )
                        {
                          v646 = *v645;
                          v518 = RtlULongLongAdd(v645, 4LL, &pcchLength, v508);
                          if ( v518 < 0 )
                            break;
                          v518 = RtlULongLongAdd(pcchLength, v646, &pcchLength, v508);
                          if ( v518 < 0 )
                            break;
                          v645 = (unsigned int *)pcchLength;
                          if ( (unsigned int)(v508 + v647) >= 2 )
                          {
                            v518 = RtlULongLongAdd(pcchLength, 4LL, &pcchLength, *(unsigned int *)pcchLength);
                            if ( v518 < 0 )
                              break;
                            dwBytes = 4;
                            v649 = RtlUIntAdd(4LL, v648, &dwBytes);
                            v620 = 0;
                            v518 = v649;
                            if ( v649 < 0
                              || (v518 = RtlUIntAdd(dwBytes, v650, &dwBytes), v518 < 0)
                              || (v518 = RtlUIntAdd(dwBytes, (unsigned int)v806, &dwBytes), v518 < 0)
                              || (v518 = RtlUIntAdd(dwBytes, v651, &dwBytes), v518 < 0)
                              || (v518 = RtlUIntAdd(dwBytes, (unsigned int)v508, &dwBytes), v518 < 0) )
                            {
                              if ( v518 < 0 )
                                goto LABEL_654;
                              v652 = v841;
                            }
                            else
                            {
                              v652 = dwBytes;
                            }
                            dwBytes = v652;
                            if ( v652 > 0x400000 )
                            {
                              v518 = -2147418113;
                              break;
                            }
                            goto LABEL_655;
                          }
                        }
                      }
LABEL_602:
                      if ( !v504 )
                      {
LABEL_604:
                        if ( v505 )
                        {
                          v624 = (void *)v505[1];
                          if ( v624 )
                          {
                            v625 = GetProcessHeap();
                            HeapFree(v625, 0, v624);
                            v505[1] = 0LL;
                          }
                          v626 = (void *)v505[3];
                          if ( v626 )
                          {
                            v627 = GetProcessHeap();
                            HeapFree(v627, 0, v626);
                            v505[3] = 0LL;
                          }
                          v628 = (void *)v505[5];
                          if ( v628 )
                          {
                            v629 = GetProcessHeap();
                            HeapFree(v629, 0, v628);
                            v505[5] = 0LL;
                          }
                          v630 = GetProcessHeap();
                          HeapFree(v630, 0, v505);
                        }
                        if ( v506 )
                        {
                          v631 = GetProcessHeap();
                          HeapFree(v631, 0, v506);
                        }
                        v632 = v803;
                        if ( v803 )
                        {
                          v633 = GetProcessHeap();
                          HeapFree(v633, 0, v632);
                        }
                        v634 = v810;
                        if ( v810 )
                        {
                          v635 = (void *)*((_QWORD *)v810 + 1);
                          if ( v635 )
                          {
                            v636 = GetProcessHeap();
                            HeapFree(v636, 0, v635);
                            v634[1] = 0LL;
                          }
                          v637 = (void *)v634[3];
                          if ( v637 )
                          {
                            v638 = GetProcessHeap();
                            HeapFree(v638, 0, v637);
                            v634[3] = 0LL;
                          }
                          v639 = (void *)v634[5];
                          if ( v639 )
                          {
                            v640 = GetProcessHeap();
                            HeapFree(v640, 0, v639);
                            v634[5] = 0LL;
                          }
                          v641 = GetProcessHeap();
                          HeapFree(v641, 0, v634);
                        }
                        v642 = v852;
                        if ( v852 )
                        {
                          v643 = GetProcessHeap();
                          HeapFree(v643, 0, v642);
                        }
                        if ( v518 >= 0 && LODWORD(v834[0]) && v834[1] )
                          RtlULongLongAdd(v834[1], 4LL, &v820, v508);
                        goto LABEL_630;
                      }
LABEL_603:
                      v623 = GetProcessHeap();
                      HeapFree(v623, 0, v504);
                      goto LABEL_604;
                    }
LABEL_654:
                    v652 = v620;
                    dwBytes = v620;
                    if ( v518 < 0 )
                      goto LABEL_602;
LABEL_655:
                    psza = (STRSAFE_PCNZWCH)v504;
                    v853 = v505;
                    Src = v506;
                    v653 = v652;
                    v654 = GetProcessHeap();
                    v655 = (wchar_t *)HeapAlloc(v654, 8u, v653);
                    pcchLength = (size_t)v655;
                    v656 = v655;
                    if ( v655 )
                    {
                      if ( !v506 )
                      {
                        v518 = -2147024809;
                        v803 = v655;
LABEL_666:
                        v505 = (const void **)v853;
                        goto LABEL_602;
                      }
                      v843 = v808;
                      v844 = dwBytes;
                      v842[0] = v506;
                      v842[1] = v655;
                      v845 = 0;
                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule) )
                      {
                        ProcAddress = GetProcAddress(hModule, "NtQuerySystemInformation");
                        if ( ProcAddress )
                        {
                          v661 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v842);
                          v658 = dwBytes;
                          v518 = v661 | 0x10000000;
                          if ( v661 >= 0 )
                          {
                            v658 = v844;
                            v508 = (unsigned __int64)v656;
                            v662 = (const void **)v853;
                            v663 = v506;
                            dwBytes = v844;
                            v664 = v504;
                            goto LABEL_676;
                          }
                        }
                        else
                        {
                          LastError = GetLastError();
                          v518 = LastError;
                          if ( LastError > 0 )
                            v518 = (unsigned __int16)LastError | 0x80070000;
                          v658 = dwBytes;
                          if ( v518 >= 0 )
                            v518 = -2147467259;
                        }
                      }
                      else
                      {
                        v657 = GetLastError();
                        v518 = v657;
                        if ( v657 > 0 )
                          v518 = (unsigned __int16)v657 | 0x80070000;
                        v658 = dwBytes;
                        if ( v518 >= 0 )
                          v518 = -2147467259;
                      }
                      v803 = v656;
                      if ( v518 == -805306333 )
                      {
                        v518 = -2147024774;
                        goto LABEL_666;
                      }
                      v662 = (const void **)v853;
                      v508 = (unsigned __int64)v656;
                      v505 = (const void **)v853;
                      v663 = v506;
                      v664 = v504;
                      if ( v518 < 0 )
                        goto LABEL_602;
LABEL_676:
                      dwBytes_4 = 0;
                      v806 = (LPVOID)v508;
                      if ( v658 < 4 )
                      {
                        v506 = v663;
                        v505 = v662;
LABEL_679:
                        v803 = (LPVOID)v508;
                        v518 = -805306306;
                        v504 = v664;
                        goto LABEL_602;
                      }
                      LODWORD(v804) = *(_DWORD *)v508;
                      v665 = RtlULongLongAdd(v508, 4LL, &v806, v508);
                      v505 = (const void **)v853;
                      v666 = v665;
                      Size = v667;
                      v812 = (SIZE_T)v853;
                      v669 = v668;
                      v803 = v668;
                      v506 = (void *)v667;
                      v811 = v670;
                      v504 = (unsigned __int8 *)v670;
                      if ( v665 >= 0 )
                      {
                        v666 = RtlUIntAdd(0LL, 4LL, &dwBytes_4);
                        v803 = v669;
                        Size = v671;
                        v811 = v672;
                        v812 = (SIZE_T)v505;
                        if ( v666 >= 0 )
                        {
                          if ( dwBytes - dwBytes_4 < (unsigned int)v804 )
                            goto LABEL_700;
                          v816 = v806;
                          v820 = (unsigned int)v804;
                          v666 = RtlULongLongAdd(v806, (unsigned int)v804, &v806, v508);
                          v803 = v669;
                          Size = v673;
                          v812 = (SIZE_T)v505;
                          v811 = v674;
                          if ( v666 >= 0 )
                          {
                            v666 = RtlUIntAdd(dwBytes_4, (unsigned int)v804, &dwBytes_4);
                            v803 = v669;
                            Size = v675;
                            v811 = v676;
                            v812 = (SIZE_T)v505;
                            if ( v666 >= 0 )
                            {
                              if ( dwBytes - dwBytes_4 < 4 )
                                goto LABEL_700;
                              LODWORD(v809) = *(_DWORD *)v806;
                              v666 = RtlULongLongAdd(v806, 4LL, &v806, v508);
                              v803 = v669;
                              Size = v677;
                              v812 = (SIZE_T)v505;
                              v811 = v678;
                              if ( v666 >= 0 )
                              {
                                v666 = RtlUIntAdd(dwBytes_4, 4LL, &dwBytes_4);
                                v803 = v669;
                                Size = v679;
                                v811 = v680;
                                v812 = (SIZE_T)v505;
                                if ( v666 >= 0 )
                                {
                                  if ( dwBytes - dwBytes_4 < (unsigned int)v809 )
                                    goto LABEL_700;
                                  v825 = v806;
                                  v666 = RtlULongLongAdd(v806, (unsigned int)v809, &v806, v508);
                                  v803 = v669;
                                  Size = v681;
                                  v812 = (SIZE_T)v505;
                                  v811 = v682;
                                  if ( v666 >= 0 )
                                  {
                                    v666 = RtlUIntAdd(dwBytes_4, (unsigned int)v809, &dwBytes_4);
                                    v803 = v669;
                                    Size = v683;
                                    v811 = v684;
                                    v812 = (SIZE_T)v505;
                                    if ( v666 >= 0 )
                                    {
                                      if ( dwBytes - dwBytes_4 < 4 )
                                        goto LABEL_700;
                                      LODWORD(v800) = *(_DWORD *)v806;
                                      v666 = RtlULongLongAdd(v806, 4LL, &v806, v508);
                                      v803 = v669;
                                      Size = v685;
                                      v812 = (SIZE_T)v505;
                                      v811 = v686;
                                      if ( v666 >= 0 )
                                      {
                                        v666 = RtlUIntAdd(dwBytes_4, 4LL, &dwBytes_4);
                                        v803 = v669;
                                        Size = v687;
                                        v811 = v688;
                                        v812 = (SIZE_T)v505;
                                        if ( v666 >= 0 )
                                        {
                                          if ( dwBytes - dwBytes_4 < (unsigned int)v800 )
                                            goto LABEL_700;
                                          v666 = RtlUIntAdd(dwBytes_4, (unsigned int)v800, &dwBytes_4);
                                          v803 = v669;
                                          Size = v689;
                                          v811 = v664;
                                          v690 = v505;
                                          v812 = (SIZE_T)v505;
                                          if ( v666 >= 0 )
                                          {
                                            if ( dwBytes == dwBytes_4 )
                                            {
                                              v691 = (unsigned int)v809;
                                              v692 = v804;
                                              v693 = (unsigned int)v800;
                                              if ( (unsigned int)(v800 + v809 + v804) + 12LL != dwBytes )
                                              {
                                                v505 = v690;
                                                goto LABEL_679;
                                              }
                                              v694 = GetProcessHeap();
                                              v695 = HeapAlloc(v694, 8u, 0x30uLL);
                                              v800 = (SIZE_T)v695;
                                              v696 = v695;
                                              if ( !v695 )
                                              {
                                                v518 = -805306345;
                                                v506 = Src;
                                                v505 = (const void **)v853;
                                                v504 = (unsigned __int8 *)psza;
                                                v803 = (LPVOID)pcchLength;
                                                goto LABEL_602;
                                              }
                                              v697 = v816;
                                              if ( v816 )
                                              {
                                                *(_DWORD *)v695 = v692;
                                                v698 = GetProcessHeap();
                                                v699 = v820;
                                                v700 = HeapAlloc(v698, 8u, v820);
                                                if ( !v700 )
                                                  goto LABEL_712;
                                                v696[1] = v700;
                                                memcpy_0(v700, v697, v699);
                                              }
                                              else
                                              {
                                                *(_DWORD *)v695 = 0;
                                                v695[1] = 0LL;
                                              }
                                              v701 = v825;
                                              if ( !v825 )
                                              {
                                                *((_DWORD *)v696 + 4) = 0;
                                                v696[3] = 0LL;
                                                goto LABEL_709;
                                              }
                                              *((_DWORD *)v696 + 4) = v691;
                                              v702 = GetProcessHeap();
                                              v703 = HeapAlloc(v702, 8u, v691);
                                              if ( v703 )
                                              {
                                                v696[3] = v703;
                                                memcpy_0(v703, v701, v691);
LABEL_709:
                                                v704 = v806;
                                                if ( !v806 )
                                                {
                                                  *((_DWORD *)v696 + 8) = 0;
                                                  v696[5] = 0LL;
                                                  goto LABEL_720;
                                                }
                                                *((_DWORD *)v696 + 8) = v693;
                                                v705 = GetProcessHeap();
                                                v706 = HeapAlloc(v705, 8u, v693);
                                                if ( v706 )
                                                {
                                                  v696[5] = v706;
                                                  memcpy_0(v706, v704, v693);
LABEL_720:
                                                  v505 = (const void **)v853;
                                                  v666 = 0;
                                                  v506 = Src;
                                                  v504 = (unsigned __int8 *)psza;
                                                  v810 = v696;
                                                  v669 = (void *)pcchLength;
                                                  v803 = (LPVOID)pcchLength;
                                                  Size = (SIZE_T)Src;
                                                  v812 = (SIZE_T)v853;
                                                  v811 = (void *)psza;
                                                  v508 = (unsigned __int64)v810;
                                                  goto LABEL_722;
                                                }
                                              }
LABEL_712:
                                              v669 = (void *)pcchLength;
                                              v666 = -1073741801;
                                              v506 = Src;
                                              v505 = (const void **)v853;
                                              v504 = (unsigned __int8 *)psza;
                                              v803 = (LPVOID)pcchLength;
                                              Size = (SIZE_T)Src;
                                              v812 = (SIZE_T)v853;
                                              v811 = (void *)psza;
                                              v810 = 0LL;
                                              v707 = v800;
                                              v816 = *(void **)(v800 + 8);
                                              if ( v816 )
                                              {
                                                v708 = GetProcessHeap();
                                                HeapFree(v708, 0, v816);
                                                v707 = v800;
                                                *(_QWORD *)(v800 + 8) = 0LL;
                                              }
                                              v816 = *(void **)(v707 + 24);
                                              if ( v816 )
                                              {
                                                v709 = GetProcessHeap();
                                                HeapFree(v709, 0, v816);
                                                v707 = v800;
                                                *(_QWORD *)(v800 + 24) = 0LL;
                                              }
                                              v816 = *(void **)(v707 + 40);
                                              if ( v816 )
                                              {
                                                v710 = GetProcessHeap();
                                                HeapFree(v710, 0, v816);
                                                *(_QWORD *)(v800 + 40) = 0LL;
                                              }
                                              v711 = GetProcessHeap();
                                              HeapFree(v711, 0, (LPVOID)v800);
                                              v508 = 0LL;
                                              v810 = 0LL;
                                              v803 = v669;
                                              Size = (SIZE_T)v506;
                                              v812 = (SIZE_T)v505;
                                              v811 = v504;
LABEL_722:
                                              v518 = v666 | 0x10000000;
                                              if ( v518 < 0 )
                                                goto LABEL_602;
                                              v815 = 0LL;
                                              if ( !v508 || (v825 = *(LPVOID *)(v508 + 8)) == 0LL || !*(_DWORD *)v508 )
                                              {
                                                v518 = -805306355;
                                                goto LABEL_602;
                                              }
                                              Src = (void *)(*(unsigned int *)v508 - 8LL);
                                              v712 = (char)Src;
                                              v713 = MemoryAlloc((unsigned __int64)Src);
                                              v820 = (SIZE_T)v713;
                                              v714 = 0;
                                              if ( !v713 )
                                              {
                                                v775 = 0LL;
                                                goto LABEL_794;
                                              }
                                              v715 = (unsigned __int8 *)v825;
                                              LOBYTE(v802) = 0;
                                              v716 = v713;
                                              v852 = (void *)0x7F1137FAB69605ELL;
                                              v717 = v712 & 7;
                                              if ( (v712 & 7) != 0 )
                                              {
                                                v718 = 0;
                                                v719 = 0;
                                                LODWORD(v800) = 0;
                                                if ( v717 )
                                                {
                                                  v720 = 56;
                                                  v721 = 0;
                                                  do
                                                  {
                                                    v722 = *v715++;
                                                    if ( v719 >= 4 )
                                                      v721 |= v722 << v720;
                                                    else
                                                      v718 |= v722 << (v720 - 32);
                                                    v720 -= 8;
                                                    v719 = v800 + 1;
                                                    LODWORD(v800) = v719;
                                                  }
                                                  while ( (int)v719 < v717 );
                                                  v8 = v796;
                                                  dwBytes = v718;
                                                  v723 = v718 ^ 0x92F65A5;
                                                  v824 = v721;
                                                  v724 = v721 ^ 0x699A899C;
                                                  v713 = (_DWORD *)v820;
                                                  v725 = v724;
                                                  v726 = v723;
                                                  v803 = v669;
                                                  v716 = (_BYTE *)v820;
                                                  Size = (SIZE_T)v506;
                                                  v812 = (SIZE_T)v505;
                                                  v811 = v504;
                                                  do
                                                  {
                                                    v816 = v716 + 1;
                                                    if ( v714 >= 4 )
                                                    {
                                                      v725 = __ROL4__(v725, 8);
                                                      v727 = v725;
                                                    }
                                                    else
                                                    {
                                                      v726 = __ROL4__(v726, 8);
                                                      v727 = v726;
                                                    }
                                                    *v716 = v727;
                                                    ++v714;
                                                    v716 = v816;
                                                  }
                                                  while ( (int)v714 < v717 );
                                                  LOBYTE(v714) = v802;
                                                  v669 = v803;
                                                  if ( (unsigned int)v717 > 4 )
                                                  {
                                                    LODWORD(v804) = v724 >> (8 * (8 - v717)) << (8 * (8 - v717));
                                                    goto LABEL_747;
                                                  }
                                                  LODWORD(v804) = 0;
                                                  if ( (unsigned int)v717 >= 4 )
                                                  {
LABEL_747:
                                                    if ( (unsigned __int64)Src >> 3 )
                                                    {
                                                      v728 = HIDWORD(v852);
                                                      v729 = v716 + 7;
                                                      v730 = dwBytes;
                                                      v731 = v715 + 2;
                                                      v732 = (unsigned __int64)Src >> 3;
                                                      LODWORD(v808) = 24670;
                                                      v733 = v804;
                                                      v734 = WORD2(v852);
                                                      do
                                                      {
                                                        v735 = *(v731 - 1) | (*(v731 - 2) << 8);
                                                        v736 = v731[2] << 8;
                                                        v737 = *v731;
                                                        v731 += 8;
                                                        v738 = *(v731 - 7) | ((v737 | (v735 << 8)) << 8);
                                                        v739 = v738 ^ v723;
                                                        v740 = *(v731 - 3) | ((*(v731 - 4) | ((*(v731 - 5) | v736) << 8)) << 8);
                                                        v741 = v728 ^ v739 ^ v740 ^ v733 ^ 0xAB69605E;
                                                        v742 = (__ROL4__(v741, 10)
                                                              + v734 * __ROL4__(v741 + 1419157410, 5)) ^ v739;
                                                        v743 = (WORD1(v852) * __ROR4__(v742 + v728, 9)
                                                              - __ROL4__(v742, 2)) ^ v741;
                                                        v744 = (v808 * (v743 - v734) - (v743 >> 13)) ^ v742;
                                                        v745 = (HIWORD(v852) * __ROL4__(WORD1(v852) ^ v744, 6)
                                                              - __ROL4__(v744, 2)) ^ v743;
                                                        v746 = (v728 - (v745 ^ 0xAB69605E)) ^ v744;
                                                        v747 = (WORD1(v852) * (v734 ^ v746)) ^ __ROR4__(v746, 6) ^ v745;
                                                        v748 = (__ROL4__(v747, 2) + v808 * __ROR4__(v747 + v728, 15)) ^ v746;
                                                        v749 = (HIWORD(v852) * __ROR4__(v748 + 1419157410, 14)
                                                              - __ROL4__(v748, 8)) ^ v747;
                                                        v750 = __ROR4__(v749, 10) ^ (v734
                                                                                   * __ROR4__(v749 ^ 0xAB69605E, 12)) ^ v748;
                                                        v751 = (v750 >> 10) ^ (WORD1(v852) * (v750 ^ HIWORD(v852))) ^ v749;
                                                        v752 = (HIWORD(v852) * (v808 + __ROR4__(~v751, 5))) ^ v750;
                                                        v753 = v751 ^ (v752 - HIWORD(v852)) ^ 0xAB69605E;
                                                        v754 = ((v753 >> 2) + v734 * __ROL4__(HIWORD(v852) ^ v753, 2)) ^ v752;
                                                        v755 = (__ROL4__(v754, 7)
                                                              + WORD1(v852) * __ROR4__(v754 - v728, 6)) ^ v753;
                                                        v756 = (v808 * (v734 ^ v755) + __ROR4__(v755, 9)) ^ v754;
                                                        v757 = (__ROL4__(v756, 7)
                                                              + HIWORD(v852) * __ROL4__(WORD1(v852) ^ v756, 5)) ^ v755;
                                                        v758 = v728 ^ v757 ^ v756 ^ 0xAB69605E;
                                                        v759 = (v734 * (__ROR4__(v758, 3) - WORD1(v852))) ^ v757;
                                                        v760 = (v808 * __ROR4__(v759 - v728, 1) - __ROR4__(v759, 6)) ^ v758;
                                                        v761 = (__ROL4__(v760, 14)
                                                              + HIWORD(v852) * __ROL4__(v760 - 1419157410, 3)) ^ v759;
                                                        v762 = (v734 * __ROL4__(v761 - 1419157410, 15)
                                                              - __ROR4__(v761, 14)) ^ v760;
                                                        v763 = (v762 >> 3) ^ (WORD1(v852) * (v808 ^ v762)) ^ v761;
                                                        v764 = v824 ^ v763;
                                                        v824 = v740;
                                                        v765 = v730 ^ __ROL4__(v763, 2) ^ (v808
                                                                                         * __ROL4__(v728 ^ v763, 4));
                                                        v730 = v738;
                                                        v766 = v765 ^ v762;
                                                        *(v729 - 4) = v766;
                                                        *v729 = v764;
                                                        v729 += 8;
                                                        v767 = __ROR4__(v766, 8);
                                                        *(v729 - 13) = v767;
                                                        v768 = __ROR4__(v764, 8);
                                                        *(v729 - 9) = v768;
                                                        v769 = __ROR4__(v767, 8);
                                                        *(v729 - 14) = v769;
                                                        v770 = __ROR4__(v768, 8);
                                                        *(v729 - 10) = v770;
                                                        v771 = __ROR4__(v769, 8);
                                                        v772 = __ROR4__(v770, 8);
                                                        *(v729 - 15) = v771;
                                                        *(v729 - 11) = v772;
                                                        v733 = __ROR4__(v772, 8);
                                                        v723 = __ROR4__(v771, 8);
                                                        --v732;
                                                      }
                                                      while ( v732 );
                                                      LOBYTE(v714) = v802;
                                                      v8 = v796;
                                                      v505 = (const void **)v812;
                                                      v504 = (unsigned __int8 *)v811;
                                                      v506 = (void *)Size;
                                                      v669 = v803;
                                                      v713 = (_DWORD *)v820;
                                                    }
                                                    v773 = 0LL;
                                                    if ( Src )
                                                    {
                                                      do
                                                        LOBYTE(v714) = *((_BYTE *)v713 + v773++) ^ v714;
                                                      while ( v773 < (unsigned __int64)Src );
                                                    }
                                                    v508 = (unsigned __int64)v810;
                                                    v774 = v669;
                                                    v827 = v505;
                                                    v803 = v669;
                                                    if ( (unsigned __int8)v714 != *(_QWORD *)((char *)v825 + (_QWORD)Src) )
                                                    {
                                                      MemoryFree(v713);
                                                      v775 = v815;
LABEL_794:
                                                      if ( v775 )
                                                      {
                                                        v794 = GetProcessHeap();
                                                        HeapFree(v794, 0, v775);
                                                      }
                                                      v518 = -805306367;
                                                      v852 = 0LL;
                                                      goto LABEL_602;
                                                    }
                                                    psza = (STRSAFE_PCNZWCH)v713;
                                                    LODWORD(v808) = 0;
                                                    if ( (unsigned int)Src >= 4 )
                                                    {
                                                      LODWORD(v800) = *v713;
                                                      v776 = RtlULongLongAdd(v713, 4LL, &psza, v810);
                                                      v777 = v827;
                                                      v778 = v776;
                                                      v852 = v779;
                                                      v505 = v827;
                                                      v810 = (LPVOID)v508;
                                                      v803 = v774;
                                                      if ( v776 < 0 )
                                                        goto LABEL_792;
                                                      v780 = RtlUIntAdd(0LL, 4LL, &v808);
                                                      v852 = v713;
                                                      v778 = v780;
                                                      v810 = (LPVOID)v508;
                                                      v803 = v774;
                                                      if ( v780 < 0 )
                                                        goto LABEL_792;
                                                      if ( (unsigned int)((_DWORD)Src - v808) >= 4 )
                                                      {
                                                        LODWORD(v809) = *(_DWORD *)psza;
                                                        v781 = RtlULongLongAdd(psza, 4LL, &psza, v508);
                                                        v852 = v782;
                                                        v778 = v781;
                                                        v810 = (LPVOID)v508;
                                                        v803 = v774;
                                                        if ( v781 < 0 )
                                                          goto LABEL_792;
                                                        v783 = RtlUIntAdd((unsigned int)v808, 4LL, &v808);
                                                        v852 = v713;
                                                        v778 = v783;
                                                        v810 = (LPVOID)v508;
                                                        v803 = v774;
                                                        if ( v783 < 0 )
                                                          goto LABEL_792;
                                                        if ( (int)Src - (int)v808 >= (unsigned int)v809 )
                                                        {
                                                          v784 = RtlUIntAdd(
                                                                   (unsigned int)v808,
                                                                   (unsigned int)v809,
                                                                   &v808);
                                                          v852 = v713;
                                                          v778 = v784;
                                                          v810 = (LPVOID)v508;
                                                          v803 = v774;
                                                          if ( v784 < 0 )
                                                            goto LABEL_792;
                                                          Size = (unsigned int)v809;
                                                          if ( (char *)v713 + (unsigned int)Src >= (char *)psza
                                                                                                 + (unsigned int)v809
                                                            && (unsigned __int64)(unsigned int)Src
                                                             + (char *)v713
                                                             - (unsigned int)v809
                                                             - (char *)psza < 8 )
                                                          {
                                                            v852 = v713;
                                                            v812 = 0LL;
                                                            v785 = 0LL;
                                                            LODWORD(v804) = 0;
                                                            v778 = 0;
                                                            v810 = (LPVOID)v508;
                                                            v505 = v777;
                                                            v803 = v774;
                                                            if ( !psza )
                                                            {
LABEL_780:
                                                              if ( (_DWORD)v809 )
                                                              {
                                                                v792 = GetProcessHeap();
                                                                v793 = Size;
                                                                v812 = (SIZE_T)HeapAlloc(v792, 8u, Size);
                                                                v785 = (void *)v812;
                                                                if ( !v812 )
                                                                {
                                                                  v778 = -1073741801;
                                                                  goto LABEL_792;
                                                                }
                                                                v778 = 0;
                                                              }
                                                              else
                                                              {
                                                                v793 = Size;
                                                              }
                                                              if ( psza )
                                                              {
                                                                memcpy_0(v785, psza, v793);
                                                                v785 = (void *)v812;
                                                              }
                                                              LODWORD(v834[0]) = v804;
                                                              v834[1] = v785;
                                                              if ( (_DWORD)v800 == (_DWORD)v804 )
                                                                goto LABEL_792;
LABEL_791:
                                                              v778 = -1073741762;
                                                              goto LABEL_792;
                                                            }
                                                            v815 = (void *)psza;
                                                            v778 = RtlULongLongAdd(psza, Size, &Src, v508);
                                                            v852 = v786;
                                                            v810 = (LPVOID)v508;
                                                            v803 = v774;
                                                            if ( v778 >= 0 )
                                                            {
                                                              v787 = (const void **)v815;
                                                              v852 = v786;
                                                              v810 = (LPVOID)v508;
                                                              v803 = v774;
                                                              if ( v815 < Src )
                                                              {
                                                                v852 = v786;
                                                                v803 = v774;
                                                                v810 = (LPVOID)v508;
                                                                while ( 1 )
                                                                {
                                                                  v778 = RtlULongLongAdd(v787, 4LL, &v816, v508);
                                                                  if ( v778 < 0 )
                                                                    goto LABEL_792;
                                                                  if ( (unsigned __int64)v816 > v789 )
                                                                    goto LABEL_776;
                                                                  v778 = RtlUIntAdd(4LL, *v788, &v806);
                                                                  if ( v778 < 0 )
                                                                    goto LABEL_792;
                                                                  v778 = RtlULongLongAdd(
                                                                           v815,
                                                                           (unsigned int)v806,
                                                                           &v827,
                                                                           v508);
                                                                  v852 = v790;
                                                                  v810 = (LPVOID)v508;
                                                                  v803 = v774;
                                                                  if ( v778 < 0 )
                                                                    goto LABEL_792;
                                                                  v787 = v827;
                                                                  v815 = v827;
                                                                  v852 = v790;
                                                                  v810 = (LPVOID)v508;
                                                                  v803 = v774;
                                                                  if ( v827 > v791 )
                                                                    goto LABEL_776;
                                                                  LODWORD(v804) = v804 + 1;
                                                                  if ( v827 >= v791 )
                                                                  {
                                                                    v852 = v790;
                                                                    v810 = (LPVOID)v508;
                                                                    v803 = v774;
                                                                    goto LABEL_778;
                                                                  }
                                                                }
                                                              }
                                                              v791 = (const void **)Src;
LABEL_778:
                                                              if ( v787 == v791 )
                                                              {
                                                                v785 = (void *)v812;
                                                                goto LABEL_780;
                                                              }
LABEL_776:
                                                              v778 = -1073741811;
                                                            }
LABEL_792:
                                                            v518 = v778 | 0x10000000;
                                                            goto LABEL_602;
                                                          }
                                                          v505 = v777;
                                                        }
                                                      }
                                                    }
                                                    v803 = v774;
                                                    v810 = (LPVOID)v508;
                                                    v852 = v713;
                                                    goto LABEL_791;
                                                  }
                                                }
                                                else
                                                {
                                                  v723 = 154101157;
                                                  dwBytes = 0;
                                                  v824 = 0;
                                                  LODWORD(v804) = 0;
                                                }
                                                v723 = v723 >> (8 * (4 - v717)) << (8 * (4 - v717));
                                                goto LABEL_747;
                                              }
                                              v723 = 0;
                                              dwBytes = 0;
                                              LODWORD(v804) = 0;
                                              goto LABEL_747;
                                            }
LABEL_700:
                                            v518 = -805306306;
                                            v803 = (LPVOID)v508;
                                            goto LABEL_602;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      v508 = 0LL;
                      goto LABEL_722;
                    }
LABEL_658:
                    v518 = -805306345;
                    goto LABEL_602;
                  }
                }
              }
              v584 = -1073741801;
              v816 = (void *)*((_QWORD *)v583 + 1);
              if ( v816 )
              {
                v602 = GetProcessHeap();
                HeapFree(v602, 0, v816);
                *((_QWORD *)v583 + 1) = 0LL;
              }
              v816 = (void *)*((_QWORD *)v583 + 3);
              if ( v816 )
              {
                v603 = GetProcessHeap();
                HeapFree(v603, 0, v816);
                *((_QWORD *)v583 + 3) = 0LL;
              }
              v816 = (void *)*((_QWORD *)v583 + 5);
              if ( v816 )
              {
                v604 = GetProcessHeap();
                HeapFree(v604, 0, v816);
                *((_QWORD *)v583 + 5) = 0LL;
              }
              v605 = GetProcessHeap();
              HeapFree(v605, 0, v583);
            }
            else
            {
              v584 = -1073741801;
            }
            v585 = (void **)pcchLength;
            goto LABEL_562;
          }
LABEL_630:
          v107 = v854;
          v108 = v807;
          goto LABEL_155;
        }
LABEL_153:
        v107 = v114;
        goto LABEL_154;
      }
LABEL_49:
      v44 = 4LL;
      v796 = RtlULongLongAdd(v47, 4LL, &v817, v47);
      v8 = v796;
      if ( v796 >= 0 )
      {
        if ( v51 + 41 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
          goto LABEL_44;
        v52 = v817;
        *v51 = 160;
        *v52 = *v11;
        v52[1] = v11[1];
        v52[2] = v11[2];
        v52[3] = v11[3];
        v52[4] = v11[4];
        v52[5] = v11[5];
        v52[6] = v11[6];
        v52[7] = v11[7];
        v52[8] = v11[8];
        v52[9] = v11[9];
        v46 = ++LODWORD(lpMem[0]);
LABEL_54:
        if ( lpMem[1] )
        {
          v64 = (unsigned int *)lpMem[1];
          pcchLength = (size_t)lpMem[1];
          if ( v46 )
          {
            do
            {
              v796 = RtlUIntAdd(4LL, *v64, &v800);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_27;
              v796 = RtlULongLongAdd(v65, (unsigned int)v800, &pcchLength, v65);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_27;
              v64 = (unsigned int *)pcchLength;
            }
            while ( v66 + 1 < v67 );
          }
          v796 = RtlULongLongAdd(v64, 4LL, &v817, v64);
          v8 = v796;
          if ( v796 < 0 )
          {
LABEL_57:
            if ( v8 < 0 )
              goto LABEL_27;
            goto LABEL_58;
          }
          if ( v68 + 3 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
            goto LABEL_44;
          v63 = v817;
          *v68 = 8;
          *v63 = *v14;
          v54 = (int)lpMem[0];
        }
        else
        {
          v796 = RtlUIntAdd(4LL, 8LL, &v800);
          v8 = v796;
          if ( v796 < 0 )
            goto LABEL_27;
          v53 = RtlUIntAdd(HIDWORD(lpMem[0]), (unsigned int)v800, (char *)lpMem + 4);
          v54 = (int)lpMem[0];
          v8 = v53;
          v796 = v53;
          if ( v53 < 0 )
            goto LABEL_57;
        }
        LODWORD(lpMem[0]) = ++v54;
LABEL_58:
        if ( !lpMem[1] )
        {
          v796 = RtlUIntAdd(4LL, 8LL, &v800);
          v8 = v796;
          if ( v796 < 0 )
            goto LABEL_27;
          v55 = RtlUIntAdd(HIDWORD(lpMem[0]), (unsigned int)v800, (char *)lpMem + 4);
          v57 = (int)lpMem[0];
          v8 = v55;
          v796 = v55;
          if ( v55 < 0 )
            goto LABEL_61;
LABEL_77:
          LODWORD(lpMem[0]) = v57 + 1;
LABEL_62:
          v58 = psza;
          if ( StringCchLengthW(psza, v56, &pcchLength) >= 0 )
          {
            v796 = RtlULongLongAdd(pcchLength, 1LL, &pcchLength, v59);
            v8 = v796;
            if ( v796 >= 0 )
            {
              if ( 2 * (_DWORD)pcchLength )
              {
                if ( lpMem[1] )
                {
                  v76 = (unsigned int *)lpMem[1];
                  v77 = 0;
                  pcchLength = (size_t)lpMem[1];
                  if ( v60 )
                  {
                    while ( 1 )
                    {
                      v796 = RtlUIntAdd(4LL, *v76, &v800);
                      v8 = v796;
                      if ( v796 < 0 )
                      {
                        v44 = v78;
                        goto LABEL_96;
                      }
                      v796 = RtlULongLongAdd(v79, (unsigned int)v800, &pcchLength, v79);
                      v8 = v796;
                      if ( v796 < 0 )
                        break;
                      v76 = (unsigned int *)pcchLength;
                      if ( ++v77 >= v60 )
                        goto LABEL_89;
                    }
                    v44 = 4LL;
                  }
                  else
                  {
LABEL_89:
                    v44 = 4LL;
                    v796 = RtlULongLongAdd(v76, 4LL, &v817, v76);
                    v8 = v796;
                    if ( v796 >= 0 )
                    {
                      if ( (char *)v80 + v81 + 4 <= (char *)lpMem[1] + HIDWORD(lpMem[0]) )
                      {
                        v82 = v817;
                        *v80 = v81;
                        memcpy_0(v82, v58, (unsigned int)v81);
                        v60 = ++LODWORD(lpMem[0]);
                      }
                      else
                      {
                        v8 = -1073741789;
                        v796 = -1073741789;
                      }
                    }
                  }
                }
                else
                {
                  v796 = RtlUIntAdd(4LL, (unsigned int)(2 * pcchLength), &v800);
                  v8 = v796;
                  if ( v796 >= 0 )
                  {
                    v61 = RtlUIntAdd(HIDWORD(lpMem[0]), (unsigned int)v800, (char *)lpMem + 4);
                    v60 = (unsigned int)lpMem[0];
                    v8 = v61;
                    v796 = v61;
                    if ( v61 >= 0 )
                    {
                      v60 = LODWORD(lpMem[0]) + 1;
                      v796 = v62;
                      ++LODWORD(lpMem[0]);
                      v8 = v62;
                    }
                  }
                }
              }
              else
              {
                v8 = -1073741811;
                v796 = -1073741811;
              }
            }
LABEL_96:
            v83 = 0LL;
            if ( v8 < 0 )
              goto LABEL_27;
            if ( lpMem[1] )
            {
              v94 = (unsigned int *)lpMem[1];
              pcchLength = (size_t)lpMem[1];
              if ( v60 )
              {
                do
                {
                  v796 = RtlUIntAdd((unsigned int)v44, *v94, &v800);
                  v8 = v796;
                  if ( v796 < 0 )
                    goto LABEL_126;
                  v796 = RtlULongLongAdd(v95, (unsigned int)v800, &pcchLength, v95);
                  v8 = v796;
                  if ( v796 < 0 )
                    goto LABEL_126;
                  v94 = (unsigned int *)pcchLength;
                }
                while ( v96 + 1 < v97 );
              }
              v796 = RtlULongLongAdd(v94, v44, &v817, v94);
              v8 = v796;
              if ( v796 < 0 )
              {
LABEL_100:
                if ( v8 < 0 )
                  goto LABEL_27;
                goto LABEL_101;
              }
              if ( v98 + 2 > (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                goto LABEL_125;
              v93 = v817;
              *v98 = v44;
              *v93 = 0;
              v85 = (int)lpMem[0];
            }
            else
            {
              v796 = RtlUIntAdd((unsigned int)v44, (unsigned int)v44, &v800);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_126;
              v84 = RtlUIntAdd(HIDWORD(lpMem[0]), (unsigned int)v800, (char *)lpMem + 4);
              v85 = (int)lpMem[0];
              v8 = v84;
              v796 = v84;
              if ( v84 < 0 )
                goto LABEL_100;
            }
            LODWORD(lpMem[0]) = ++v85;
LABEL_101:
            if ( !lpMem[1] )
            {
              v796 = RtlUIntAdd(4LL, 4LL, &v800);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_126;
              v796 = RtlUIntAdd(HIDWORD(lpMem[0]), (unsigned int)v800, (char *)lpMem + 4);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_104;
LABEL_163:
              ++LODWORD(lpMem[0]);
              goto LABEL_105;
            }
            v141 = (unsigned int *)lpMem[1];
            pcchLength = (size_t)lpMem[1];
            if ( v85 )
            {
              do
              {
                v796 = RtlUIntAdd((unsigned int)v44, *v141, &v800);
                v8 = v796;
                if ( v796 < 0 )
                  goto LABEL_126;
                v796 = RtlULongLongAdd(v142, (unsigned int)v800, &pcchLength, v142);
                v8 = v796;
                if ( v796 < 0 )
                  goto LABEL_126;
                v141 = (unsigned int *)pcchLength;
              }
              while ( v143 + 1 < v144 );
            }
            v796 = RtlULongLongAdd(v141, 4LL, &v817, v141);
            v8 = v796;
            if ( v796 < 0 )
            {
LABEL_104:
              if ( v8 < 0 )
                goto LABEL_27;
LABEL_105:
              v796 = RtlUIntAdd(v86, v86, &v800);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_126;
              dwBytes = v800;
              v796 = RtlUIntAdd(v87, 8LL, &v800);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_126;
              v796 = RtlUIntAdd(v88, (unsigned int)v800, &dwBytes);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_171;
              v796 = RtlUIntAdd(v89, v89, &v800);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_126;
              v796 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_171;
              v796 = RtlUIntAdd(v90, v90, &v800);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_126;
              v796 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_171;
              v796 = RtlUIntAdd(v91, v91, &v800);
              v8 = v796;
              if ( v796 < 0 )
                goto LABEL_126;
              v796 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
              v8 = v796;
              if ( v796 < 0 )
              {
LABEL_171:
                if ( v8 >= 0 )
                {
                  LODWORD(v808) = v837;
                  goto LABEL_173;
                }
                goto LABEL_27;
              }
              v796 = RtlUIntAdd(v92, v92, &v800);
              v8 = v796;
              if ( v796 >= 0 )
              {
                v796 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
                v8 = v796;
                if ( v796 >= 0 )
                {
                  LODWORD(v808) = dwBytes;
LABEL_173:
                  v807 = 0LL;
                  dwBytes = 0;
                  v146 = 0LL;
                  v812 = 0LL;
                  v6 = 0LL;
                  LODWORD(v804) = 0;
                  v806 = 0LL;
                  v803 = 0LL;
                  v853 = 0LL;
                  psza = (STRSAFE_PCNZWCH)__rdtsc();
                  v822 = 8;
                  v147 = RtlUIntAdd(8LL, HIDWORD(lpMem[0]), &v822);
                  if ( v147 >= 0 )
                  {
                    v148 = (v822 + 7) & 0xFFFFFFF8;
                    if ( v148 < v822 )
                    {
                      v8 = -805306219;
                      goto LABEL_29;
                    }
                    v822 = (v822 + 7) & 0xFFFFFFF8;
                    v149 = v148;
                    v150 = GetProcessHeap();
                    v151 = HeapAlloc(v150, 8u, v149);
                    if ( !v151 )
                    {
                      v8 = -805306345;
                      v796 = -805306345;
                      goto LABEL_126;
                    }
                    pcchLength = (size_t)v151;
                    *v151 = lpMem[0];
                    v147 = RtlULongLongAdd(v151, 4LL, &pcchLength, 4LL);
                    if ( v147 < 0
                      || (v153 = pcchLength,
                          *(_DWORD *)pcchLength = HIDWORD(lpMem[0]),
                          v147 = RtlULongLongAdd(v153, (unsigned int)v152, &pcchLength, v152),
                          v147 < 0) )
                    {
                      v154 = GetProcessHeap();
                      HeapFree(v154, 0, v151);
                      v16 = 0LL;
                    }
                    else
                    {
                      *(_QWORD *)((char *)v151 + v822 - 8) = psza;
                      memcpy_0((void *)pcchLength, lpMem[1], HIDWORD(lpMem[0]));
                      v16 = v822;
                      v83 = (unsigned __int8 *)v151;
                      dwBytes = v822;
                      v807 = (unsigned __int8 *)v151;
                    }
                  }
                  v8 = v147 | 0x10000000;
                  v796 = v8;
                  if ( v8 < 0 )
                    goto LABEL_265;
                  if ( !v83 )
                  {
                    v8 = -805306355;
                    v796 = -805306355;
                    goto LABEL_127;
                  }
                  v155 = (unsigned int)v16;
                  v852 = (void *)(unsigned int)v16;
                  if ( !(_DWORD)v16 || (Size = (unsigned int)v16 + 8LL, (Src = MemoryAlloc(Size)) == 0LL) )
                  {
                    v8 = -805306367;
                    v796 = -805306367;
LABEL_266:
                    v263 = GetProcessHeap();
                    HeapFree(v263, 0, v83);
LABEL_267:
                    if ( v146 )
                    {
                      v264 = (void *)*((_QWORD *)v146 + 1);
                      if ( v264 )
                      {
                        v265 = GetProcessHeap();
                        HeapFree(v265, 0, v264);
                        *((_QWORD *)v146 + 1) = 0LL;
                      }
                      v266 = (void *)*((_QWORD *)v146 + 3);
                      if ( v266 )
                      {
                        v267 = GetProcessHeap();
                        HeapFree(v267, 0, v266);
                        *((_QWORD *)v146 + 3) = 0LL;
                      }
                      v268 = (void *)*((_QWORD *)v146 + 5);
                      if ( v268 )
                      {
                        v269 = GetProcessHeap();
                        HeapFree(v269, 0, v268);
                        *((_QWORD *)v146 + 5) = 0LL;
                      }
                      v270 = GetProcessHeap();
                      HeapFree(v270, 0, v146);
                    }
                    if ( v6 )
                    {
                      v271 = GetProcessHeap();
                      HeapFree(v271, 0, v6);
                    }
                    v272 = v806;
                    LODWORD(v6) = 0;
                    if ( v806 )
                    {
                      v273 = GetProcessHeap();
                      HeapFree(v273, 0, v272);
                    }
                    v274 = v803;
                    if ( v803 )
                    {
                      v275 = (void *)*((_QWORD *)v803 + 1);
                      if ( v275 )
                      {
                        v276 = GetProcessHeap();
                        HeapFree(v276, 0, v275);
                        v274[1] = 0LL;
                      }
                      v277 = (void *)v274[3];
                      if ( v277 )
                      {
                        v278 = GetProcessHeap();
                        HeapFree(v278, 0, v277);
                        v274[3] = 0LL;
                      }
                      v279 = (void *)v274[5];
                      if ( v279 )
                      {
                        v280 = GetProcessHeap();
                        HeapFree(v280, 0, v279);
                        v274[5] = 0LL;
                      }
                      v281 = GetProcessHeap();
                      HeapFree(v281, 0, v274);
                    }
                    v282 = v853;
                    if ( v853 )
                    {
                      v283 = GetProcessHeap();
                      HeapFree(v283, 0, v282);
                    }
                    if ( v8 < 0 )
                      goto LABEL_126;
                    if ( LODWORD(v826[0]) )
                    {
                      if ( !v826[1] )
                        goto LABEL_443;
                      v284 = v826[1];
                      pcchLength = (size_t)v826[1];
                      v796 = RtlULongLongAdd(v826[1], 4LL, &pcchLength, v16);
                      v8 = v796;
                      if ( v796 < 0 )
                        goto LABEL_126;
                      v286 = (int *)pcchLength;
                      if ( !*v284 )
                        v286 = 0LL;
                      if ( *v284 != (_DWORD)v285 )
                      {
LABEL_441:
                        v8 = -1073741789;
                        goto LABEL_442;
                      }
                      v8 = *v286;
                      v796 = v8;
                      if ( v8 == -805306333 )
                      {
                        v287 = -2147024774;
                      }
                      else
                      {
                        v287 = v8;
                        if ( v8 != -2147024774 && v8 < 0 )
                          goto LABEL_126;
                      }
                      if ( LODWORD(v826[0]) == 6 )
                      {
                        if ( v826[1] )
                        {
                          pcchLength = (size_t)v826[1];
                          v796 = RtlULongLongAdd(v826[1], v285, &pcchLength, *(unsigned int *)v826[1]);
                          v8 = v796;
                          if ( v796 < 0 )
                            goto LABEL_126;
                          v796 = RtlULongLongAdd(pcchLength, (unsigned int)v441, &pcchLength, v441);
                          v8 = v796;
                          if ( v796 < 0 )
                            goto LABEL_126;
                          v796 = RtlULongLongAdd(pcchLength, v442, &pcchLength, *(unsigned int *)pcchLength);
                          v8 = v796;
                          if ( v796 < 0 )
                            goto LABEL_126;
                          v445 = (void **)pcchLength;
                          if ( !v443 )
                            v445 = 0LL;
                          if ( v443 == 8 )
                          {
                            v816 = *v445;
                            if ( v826[1] )
                            {
                              v446 = (STRSAFE_PCNZWCH)v826[1];
                              v447 = 0LL;
                              psza = (STRSAFE_PCNZWCH)v826[1];
                              while ( 1 )
                              {
                                v796 = RtlULongLongAdd(v446, v444, &psza, v447);
                                v8 = v796;
                                if ( v796 < 0 )
                                  goto LABEL_126;
                                v796 = RtlULongLongAdd(psza, v449, &psza, v448);
                                v8 = v796;
                                if ( v796 < 0 )
                                  goto LABEL_126;
                                v446 = psza;
                                v447 = (unsigned int)(v450 + 1);
                                if ( (unsigned int)v447 >= 2 )
                                {
                                  v796 = RtlULongLongAdd(psza, v444, &psza, *(unsigned int *)psza);
                                  v8 = v796;
                                  if ( v796 < 0 )
                                    goto LABEL_126;
                                  v453 = psza;
                                  if ( !v451 )
                                    v453 = 0LL;
                                  if ( v451 != (_DWORD)v452 )
                                    goto LABEL_441;
                                  LODWORD(v800) = *(_DWORD *)v453;
                                  if ( !v826[1] )
                                    goto LABEL_443;
                                  v454 = (STRSAFE_PCNZWCH)v826[1];
                                  v455 = 0LL;
                                  psza = (STRSAFE_PCNZWCH)v826[1];
                                  while ( 1 )
                                  {
                                    v796 = RtlULongLongAdd(v454, v452, &psza, v455);
                                    v8 = v796;
                                    if ( v796 < 0 )
                                      goto LABEL_126;
                                    v796 = RtlULongLongAdd(psza, v457, &psza, v456);
                                    v8 = v796;
                                    if ( v796 < 0 )
                                      goto LABEL_126;
                                    v454 = psza;
                                    v455 = (unsigned int)(v458 + 1);
                                    if ( (unsigned int)v455 >= 3 )
                                    {
                                      v796 = RtlULongLongAdd(psza, v452, &psza, v455);
                                      v8 = v796;
                                      if ( v796 < 0 )
                                        goto LABEL_126;
                                      v459 = (STRSAFE_PCNZWCH)v826[1];
                                      v460 = 0LL;
                                      psza = (STRSAFE_PCNZWCH)v826[1];
                                      while ( 1 )
                                      {
                                        v461 = *(_DWORD *)v459;
                                        v796 = RtlULongLongAdd(v459, 4LL, &psza, v460);
                                        v8 = v796;
                                        if ( v796 < 0 )
                                          goto LABEL_127;
                                        v796 = RtlULongLongAdd(psza, v461, &psza, v462);
                                        v8 = v796;
                                        if ( v796 < 0 )
                                          goto LABEL_127;
                                        v459 = psza;
                                        v460 = (unsigned int)(v463 + 1);
                                        if ( (unsigned int)v460 >= 4 )
                                        {
                                          v796 = RtlULongLongAdd(psza, 4LL, &psza, *(unsigned int *)psza);
                                          v8 = v796;
                                          if ( v796 < 0 )
                                            goto LABEL_127;
                                          v465 = psza;
                                          if ( !v464 )
                                            v465 = 0LL;
                                          if ( v464 != 4 )
                                          {
                                            v8 = -1073741789;
                                            goto LABEL_12;
                                          }
                                          v466 = (STRSAFE_PCNZWCH)v826[1];
                                          v467 = 0LL;
                                          v468 = *(_DWORD *)v465;
                                          psza = (STRSAFE_PCNZWCH)v826[1];
                                          while ( 1 )
                                          {
                                            v469 = *(_DWORD *)v466;
                                            v8 = RtlULongLongAdd(v466, 4LL, &psza, v467);
                                            v796 = v8;
                                            if ( v8 < 0 )
                                              goto LABEL_492;
                                            v796 = RtlULongLongAdd(psza, v469, &psza, v470);
                                            v8 = v796;
                                            if ( v796 < 0 )
                                              goto LABEL_126;
                                            v466 = psza;
                                            v467 = (unsigned int)(v471 + 1);
                                            if ( (unsigned int)v467 >= 5 )
                                            {
                                              v472 = RtlULongLongAdd(psza, 4LL, &psza, *(unsigned int *)psza);
                                              v796 = v472;
                                              v8 = v472;
                                              if ( v472 < 0 )
                                              {
                                                v796 = v472;
                                                goto LABEL_126;
                                              }
                                              v476 = psza;
                                              if ( !v473 )
                                                v476 = 0LL;
                                              if ( v473 == 4 )
                                              {
                                                if ( v827 != v816 )
                                                  goto LABEL_440;
                                                v477 = *(_DWORD *)v476;
                                                v831 = v800;
                                                dwBytes_4 = v477;
                                                if ( v468 > 4 || (unsigned int)v474 > 4 )
                                                {
                                                  v8 = -2147024774;
                                                  LODWORD(v6) = v477;
                                                  v796 = -2147024774;
                                                }
                                                else
                                                {
                                                  memcpy_0(v838, v475, v474);
                                                  LODWORD(v6) = dwBytes_4;
                                                  if ( v287 )
                                                  {
                                                    v8 = v287;
                                                    v796 = v287;
                                                  }
                                                }
                                                goto LABEL_127;
                                              }
                                              goto LABEL_441;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LABEL_443;
                          }
                          goto LABEL_441;
                        }
LABEL_443:
                        v8 = -1073741811;
                        goto LABEL_442;
                      }
                    }
LABEL_440:
                    v8 = -1073425151;
LABEL_442:
                    v796 = v8;
                    goto LABEL_126;
                  }
                  v156 = 0;
                  LOBYTE(v802) = 0;
                  v157 = 0LL;
                  if ( v155 )
                  {
                    do
                      v156 ^= v83[v157++];
                    while ( v157 < v155 );
                    LOBYTE(v802) = v156;
                  }
                  v158 = (char *)Src;
                  psza = (STRSAFE_PCNZWCH)Src;
                  v854 = (void *)0xC81ECB17B1B54A58LL;
                  v159 = -1;
                  v796 = 0;
                  LODWORD(v809) = 0;
                  v160 = v83;
                  v161 = 0;
                  v162 = v155 & 7;
                  if ( (v155 & 7) != 0 )
                  {
                    v163 = 0;
                    v164 = 0;
                    LODWORD(v800) = 0;
                    v165 = 56;
                    do
                    {
                      v166 = *v160++;
                      if ( v163 >= 4 )
                        v164 |= v166 << v165;
                      else
                        v161 |= v166 << (v165 - 32);
                      v165 -= 8;
                      v163 = v800 + 1;
                      v796 = v164;
                      LODWORD(v809) = v161;
                      LODWORD(v800) = v163;
                    }
                    while ( (int)v163 < (int)v162 );
                    v161 ^= 0xB17A307A;
                    v167 = (wchar_t *)psza;
                    v168 = v164 ^ 0x42F6B18D;
                    v169 = v168;
                    v807 = v83;
                    v170 = v161;
                    v171 = 0;
                    do
                    {
                      psza = (wchar_t *)((char *)v167 + 1);
                      if ( v171 >= 4 )
                      {
                        v169 = __ROL4__(v169, 8);
                        v172 = v169;
                      }
                      else
                      {
                        v170 = __ROL4__(v170, 8);
                        v172 = v170;
                      }
                      *(_BYTE *)v167 = v172;
                      ++v171;
                      v167 = (wchar_t *)psza;
                    }
                    while ( (int)v171 < (int)v162 );
                    v158 = (char *)psza;
                    v6 = 0LL;
                    if ( v162 <= 4 )
                    {
                      v159 = 0;
                      if ( v162 < 4 )
                      {
                        v161 = v161 >> (8 * (4 - v162)) << (8 * (4 - v162));
                        v158 = (char *)psza;
                      }
                    }
                    else
                    {
                      v159 = v168 >> (8 * (8 - v162)) << (8 * (8 - v162));
                      v158 = (char *)psza;
                    }
                  }
                  v173 = (char *)dwBytes;
                  psza = (STRSAFE_PCNZWCH)((unsigned __int64)dwBytes >> 3);
                  if ( psza )
                  {
                    v174 = (STRSAFE_PCNZWCH)(v160 + 2);
                    v175 = WORD2(v854);
                    v176 = psza;
                    v177 = v796;
                    v178 = v809;
                    LODWORD(v800) = WORD1(v854);
                    v179 = v158 + 7;
                    do
                    {
                      v180 = *((unsigned __int8 *)v174 + 1) | ((*(unsigned __int8 *)v174 | ((*((unsigned __int8 *)v174
                                                                                             - 1) | (*((unsigned __int8 *)v174 - 2) << 8)) << 8)) << 8);
                      v181 = *((unsigned __int8 *)v174 + 5) | ((*((unsigned __int8 *)v174 + 4) | ((*((unsigned __int8 *)v174 + 3) | (*((unsigned __int8 *)v174 + 2) << 8)) << 8)) << 8);
                      psza = v174 + 4;
                      v182 = v181 ^ v159;
                      v183 = v161 ^ v180 ^ (v182 - 19032);
                      v184 = __ROR4__(v183, 15);
                      v185 = HIDWORD(v854) ^ v183;
                      v186 = (__ROR4__(v185, 7) + WORD1(v854) * v184) ^ v182;
                      v187 = (v175 * __ROR4__(v186 - 1313519016, 9) - __ROR4__(v186, 10)) ^ v185;
                      v188 = (__ROL4__(v187, 5) + HIWORD(v854) * __ROL4__(v187 ^ v175, 4)) ^ v186;
                      v189 = (HIDWORD(v854) - (v188 ^ 0xB1B54A58)) ^ v187;
                      v190 = (WORD1(v854) * (v189 - 19032) - (v189 >> 6)) ^ v188;
                      v191 = (19032 * (v175 ^ __ROR4__(v190, 15))) ^ v189;
                      v192 = (v175 * (HIWORD(v854) + __ROR4__(~v191, 3))) ^ v190;
                      v193 = (v192 - 19032 - HIDWORD(v854)) ^ v191;
                      v194 = (v800 * (v193 ^ HIWORD(v854))) ^ __ROR4__(v193, 10) ^ v192;
                      v195 = __ROR4__(v194, 3) ^ (v175 * __ROL4__(v194 ^ 0x4A58, 6)) ^ v193;
                      v196 = (19032 * (__ROR4__(v195, 15) - HIWORD(v854))) ^ v194;
                      v197 = (v196 >> 15) ^ (19032 * __ROL4__(v196 - v175, 3)) ^ (v196 >> 1) ^ (19032
                                                                                              * (v196 ^ HIWORD(v854))) ^ v195;
                      v198 = (WORD1(v854) * (v197 - v175) - (v197 >> 13)) ^ v196;
                      v199 = __ROR4__(v198, 11) ^ (v175 * __ROR4__(-1313519016 - v198, 9)) ^ v197;
                      v200 = (v199 + 1313519016 - HIWORD(v854)) ^ v198;
                      v201 = (19032 * (v200 ^ WORD1(v854)) - __ROR4__(v200, 7)) ^ v199;
                      v202 = (WORD1(v854) * __ROL4__(v201 ^ HIWORD(v854), 4) - __ROR4__(v201, 16)) ^ v200;
                      v203 = (__ROR4__(v202, 4) + v175 * __ROR4__(-1313519016 - v202, 10)) ^ v201;
                      v204 = __ROR4__(v203, 9) ^ (HIWORD(v854) * __ROR4__(v203 + 1313519016, 4)) ^ v202;
                      v205 = (19032 * __ROL4__(v204 ^ HIDWORD(v854), 8) - __ROL4__(v204, 2)) ^ v203;
                      v206 = (WORD1(v854) * __ROR4__(HIDWORD(v854) - v205, 11) - __ROR4__(v205, 12)) ^ v204;
                      v207 = (v206 >> 8) ^ (v175 * (v206 ^ WORD1(v854))) ^ v205;
                      v174 = psza;
                      v208 = v207 ^ HIDWORD(v854) ^ 0xB1B54A58 ^ v206;
                      v209 = v178 ^ v207;
                      *(v179 - 4) = v209;
                      v210 = v177 ^ v208;
                      *v179 = v210;
                      v178 = v180;
                      v211 = __ROR4__(v209, 8);
                      v177 = v181;
                      *(v179 - 5) = v211;
                      v179 += 8;
                      v212 = __ROR4__(v210, 8);
                      *(v179 - 9) = v212;
                      v213 = __ROR4__(v211, 8);
                      *(v179 - 14) = v213;
                      v214 = __ROR4__(v212, 8);
                      *(v179 - 10) = v214;
                      v215 = __ROR4__(v213, 8);
                      v216 = __ROR4__(v214, 8);
                      *(v179 - 15) = v215;
                      *(v179 - 11) = v216;
                      v159 = __ROR4__(v216, 8);
                      v161 = __ROR4__(v215, 8);
                      v176 = (STRSAFE_PCNZWCH)((char *)v176 - 1);
                    }
                    while ( v176 );
                    v146 = (_DWORD *)v812;
                    v156 = v802;
                    v6 = (void *)v812;
                    v83 = v807;
                    v173 = (char *)v852;
                  }
                  *(_QWORD *)&v173[(_QWORD)Src] = v156;
                  v217 = Size;
                  v850 = 160LL;
                  v218 = GetProcessHeap();
                  v219 = HeapAlloc(v218, 8u, 0x30uLL);
                  if ( v219 )
                  {
                    *(_DWORD *)v219 = v217;
                    v221 = GetProcessHeap();
                    v222 = HeapAlloc(v221, 8u, v217);
                    if ( !v222 )
                      goto LABEL_214;
                    *((_QWORD *)v219 + 1) = v222;
                    memcpy_0(v222, Src, v217);
                    *((_DWORD *)v219 + 4) = 160;
                    v223 = GetProcessHeap();
                    v224 = HeapAlloc(v223, 8u, 0xA0uLL);
                    v220 = 0;
                    if ( !v224 )
                      goto LABEL_214;
                    *((_QWORD *)v219 + 3) = v224;
                    *v224 = xmmword_1801421E0[0];
                    v224[1] = xmmword_1801421E0[1];
                    v224[2] = xmmword_1801421E0[2];
                    v224[3] = xmmword_1801421E0[3];
                    v224[4] = xmmword_1801421E0[4];
                    v224[5] = xmmword_1801421E0[5];
                    v224[6] = xmmword_1801421E0[6];
                    v224[7] = xmmword_1801421E0[7];
                    v224[8] = xmmword_1801421E0[8];
                    v224[9] = xmmword_1801421E0[9];
                    *((_DWORD *)v219 + 8) = 8;
                    v225 = GetProcessHeap();
                    v226 = HeapAlloc(v225, 8u, 8uLL);
                    if ( v226 )
                    {
                      *((_QWORD *)v219 + 5) = v226;
                      *v226 = qword_180142280;
                      v146 = v219;
                    }
                    else
                    {
LABEL_214:
                      v220 = -1073741801;
                      psza = (STRSAFE_PCNZWCH)*((_QWORD *)v219 + 1);
                      if ( psza )
                      {
                        v227 = GetProcessHeap();
                        HeapFree(v227, 0, (LPVOID)psza);
                        *((_QWORD *)v219 + 1) = 0LL;
                      }
                      psza = (STRSAFE_PCNZWCH)*((_QWORD *)v219 + 3);
                      if ( psza )
                      {
                        v228 = GetProcessHeap();
                        HeapFree(v228, 0, (LPVOID)psza);
                        *((_QWORD *)v219 + 3) = 0LL;
                      }
                      psza = (STRSAFE_PCNZWCH)*((_QWORD *)v219 + 5);
                      if ( psza )
                      {
                        v229 = GetProcessHeap();
                        HeapFree(v229, 0, (LPVOID)psza);
                        *((_QWORD *)v219 + 5) = 0LL;
                      }
                      v230 = GetProcessHeap();
                      HeapFree(v230, 0, v219);
                    }
                  }
                  else
                  {
                    v220 = -1073741801;
                  }
                  v231 = GetProcessHeap();
                  HeapFree(v231, 0, Src);
                  v8 = v220 | 0x10000000;
                  v796 = v8;
                  if ( v8 < 0 )
                    goto LABEL_265;
                  v232 = (unsigned int)*v146;
                  dwBytes = 4;
                  v233 = 0;
                  v235 = RtlUIntAdd(4LL, v232, &dwBytes);
                  if ( v235 >= 0 )
                  {
                    v235 = RtlUIntAdd(dwBytes, v234, &dwBytes);
                    if ( v235 >= 0 )
                    {
                      v235 = RtlUIntAdd(dwBytes, (unsigned int)v146[4], &dwBytes);
                      if ( v235 >= 0 )
                      {
                        v235 = RtlUIntAdd(dwBytes, v236, &dwBytes);
                        if ( v235 >= 0 )
                        {
                          v235 = RtlUIntAdd(dwBytes, (unsigned int)v146[8], &dwBytes);
                          if ( v235 >= 0 )
                          {
                            LODWORD(v800) = dwBytes;
                            v237 = dwBytes;
                            v238 = GetProcessHeap();
                            v239 = HeapAlloc(v238, 8u, v237);
                            v240 = v239;
                            if ( !v239 )
                              goto LABEL_303;
                            v852 = v239;
                            *v239 = *v146;
                            v235 = RtlULongLongAdd(v239, 4LL, &v852, v16);
                            if ( v235 < 0 )
                              goto LABEL_236;
                            memcpy_0(v852, *((const void **)v146 + 1), (unsigned int)*v146);
                            v235 = RtlULongLongAdd(v852, (unsigned int)*v146, &v852, v241);
                            if ( v235 < 0 )
                              goto LABEL_236;
                            v243 = v852;
                            *(_DWORD *)v852 = v146[4];
                            v235 = RtlULongLongAdd(v243, 4LL, &v852, v242);
                            if ( v235 < 0
                              || (memcpy_0(v852, *((const void **)v146 + 3), (unsigned int)v146[4]),
                                  v235 = RtlULongLongAdd(v852, (unsigned int)v146[4], &v852, v244),
                                  v235 < 0)
                              || (v246 = v852,
                                  *(_DWORD *)v852 = v146[8],
                                  v235 = RtlULongLongAdd(v246, 4LL, &v852, v245),
                                  v235 < 0)
                              || (memcpy_0(v852, *((const void **)v146 + 5), (unsigned int)v146[8]),
                                  v235 = RtlULongLongAdd(v852, (unsigned int)v146[8], &v852, v247),
                                  v235 < 0) )
                            {
LABEL_236:
                              v248 = GetProcessHeap();
                              HeapFree(v248, 0, v240);
                              v233 = v804;
                            }
                            else
                            {
                              v6 = v240;
                              v233 = v800;
                              LODWORD(v804) = v800;
                            }
                          }
                        }
                      }
                    }
                  }
                  v8 = v235 | 0x10000000;
                  v796 = v8;
                  if ( v8 < 0 )
                    goto LABEL_265;
                  v828 = 8;
                  v249 = RtlUIntAdd(8LL, (unsigned int)v808, &v828);
                  v8 = v251 | v249;
                  v796 = v251 | v249;
                  if ( (v251 | v249) >= 0 )
                  {
                    v252 = (v828 + 7) & 0xFFFFFFF8;
                    if ( v252 < v828 )
                    {
                      v8 = -1073741675;
LABEL_264:
                      v796 = v8;
                      goto LABEL_265;
                    }
                    v833 = (v828 + 7) & 0xFFFFFFF8;
                    v796 = RtlUIntAdd(v252, v250, &v833);
                    v8 = v796;
                    if ( v796 < 0 )
                      goto LABEL_265;
                    if ( !lpMem[1] )
                      goto LABEL_260;
                    v16 = 1LL;
                    if ( LODWORD(lpMem[0]) <= 1 )
                      goto LABEL_260;
                    pcchLength = (size_t)lpMem[1];
                    v796 = RtlULongLongAdd(lpMem[1], 4LL, &pcchLength, 1LL);
                    v8 = v796;
                    if ( v796 < 0 )
                      goto LABEL_265;
                    v796 = RtlULongLongAdd(pcchLength, v253, &pcchLength, v16);
                    v8 = v796;
                    if ( v796 < 0 )
                      goto LABEL_265;
                    LODWORD(v800) = *(_DWORD *)pcchLength;
                    v796 = RtlULongLongAdd(pcchLength, (unsigned int)(v16 + 3), &pcchLength, v16);
                    v8 = v796;
                    if ( v796 < 0 )
                      goto LABEL_265;
                    if ( LODWORD(lpMem[0]) <= 2 )
                    {
LABEL_260:
                      v8 = -1073741811;
                      goto LABEL_264;
                    }
                    v254 = (unsigned int *)lpMem[1];
                    pcchLength = (size_t)lpMem[1];
                    LODWORD(v804) = v233;
                    while ( 1 )
                    {
                      v255 = *v254;
                      v796 = RtlULongLongAdd(v254, 4LL, &pcchLength, v16);
                      v8 = v796;
                      if ( v796 < 0 )
                        break;
                      v796 = RtlULongLongAdd(pcchLength, v255, &pcchLength, v16);
                      v8 = v796;
                      if ( v796 < 0 )
                        break;
                      v254 = (unsigned int *)pcchLength;
                      if ( (unsigned int)(v16 + v256) >= 2 )
                      {
                        v796 = RtlULongLongAdd(pcchLength, 4LL, &pcchLength, *(unsigned int *)pcchLength);
                        v8 = v796;
                        if ( v796 < 0 )
                          break;
                        dwBytes = v257;
                        v8 = RtlUIntAdd(v257, v258, &dwBytes);
                        v796 = v8;
                        v260 = 0;
                        if ( v8 < 0 )
                          goto LABEL_299;
                        v8 = RtlUIntAdd(dwBytes, v259, &dwBytes);
                        v796 = v8;
                        v260 = 0;
                        if ( v8 < 0 )
                          goto LABEL_299;
                        v8 = RtlUIntAdd(dwBytes, (unsigned int)v800, &dwBytes);
                        v796 = v8;
                        v260 = 0;
                        if ( v8 < 0 )
                          goto LABEL_299;
                        v8 = RtlUIntAdd(dwBytes, v261, &dwBytes);
                        v796 = v8;
                        v260 = 0;
                        if ( v8 < 0 )
                          goto LABEL_299;
                        v8 = RtlUIntAdd(dwBytes, (unsigned int)v16, &dwBytes);
                        v796 = v8;
                        v260 = 0;
                        if ( v8 < 0 )
                          goto LABEL_299;
                        v260 = dwBytes;
                        if ( dwBytes <= 0x400000 )
                          goto LABEL_300;
                        v8 = -2147418113;
                        goto LABEL_264;
                      }
                    }
LABEL_265:
                    if ( !v83 )
                      goto LABEL_267;
                    goto LABEL_266;
                  }
                  v260 = 0;
LABEL_299:
                  dwBytes = 0;
                  if ( v8 < 0 )
                    goto LABEL_265;
LABEL_300:
                  v810 = v83;
                  Size = (SIZE_T)v146;
                  v854 = v6;
                  v288 = v260;
                  v289 = GetProcessHeap();
                  v290 = (wchar_t *)HeapAlloc(v289, 8u, v288);
                  psza = v290;
                  v291 = (void **)v290;
                  if ( v290 )
                  {
                    if ( !v6 )
                    {
                      v8 = -2147024809;
                      v806 = v290;
LABEL_312:
                      v146 = (_DWORD *)Size;
                      v796 = v8;
                      goto LABEL_265;
                    }
                    v847 = v804;
                    v848 = dwBytes;
                    v846[0] = v6;
                    v846[1] = v290;
                    v849 = 0;
                    if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
                    {
                      v294 = GetProcAddress(phModule, "NtQuerySystemInformation");
                      if ( v294 )
                      {
                        v296 = ((__int64 (__fastcall *)(__int64, _QWORD *))v294)(134LL, v846);
                        v293 = dwBytes;
                        v8 = v296 | 0x10000000;
                        v796 = v296 | 0x10000000;
                        if ( v296 >= 0 )
                        {
                          v293 = v848;
                          v16 = (unsigned __int64)v291;
                          v297 = Size;
                          v298 = v6;
                          dwBytes = v848;
                          v299 = v83;
                          goto LABEL_322;
                        }
                      }
                      else
                      {
                        v295 = GetLastError();
                        v8 = v295;
                        if ( v295 > 0 )
                          v8 = (unsigned __int16)v295 | 0x80070000;
                        v293 = dwBytes;
                        if ( v8 >= 0 )
                          v8 = -2147467259;
                        v796 = v8;
                      }
                    }
                    else
                    {
                      v292 = GetLastError();
                      v8 = v292;
                      if ( v292 > 0 )
                        v8 = (unsigned __int16)v292 | 0x80070000;
                      v293 = dwBytes;
                      if ( v8 >= 0 )
                        v8 = -2147467259;
                      v796 = v8;
                    }
                    v806 = v291;
                    if ( v8 == -805306333 )
                    {
                      v8 = -2147024774;
                      goto LABEL_312;
                    }
                    v297 = Size;
                    v16 = (unsigned __int64)v291;
                    v146 = (_DWORD *)Size;
                    v298 = v6;
                    v299 = v83;
                    if ( v8 < 0 )
                      goto LABEL_265;
LABEL_322:
                    v796 = 0;
                    v852 = (void *)v16;
                    if ( v293 < 4 )
                    {
                      v6 = v298;
                      v146 = (_DWORD *)v297;
LABEL_325:
                      v8 = -805306306;
                      v806 = (LPVOID)v16;
                      v796 = -805306306;
                      v83 = v299;
                      goto LABEL_265;
                    }
                    LODWORD(v804) = *(_DWORD *)v16;
                    v300 = RtlULongLongAdd(v16, 4LL, &v852, v16);
                    v146 = (_DWORD *)Size;
                    v301 = v300;
                    v806 = v302;
                    v811 = v303;
                    v304 = v302;
                    v812 = Size;
                    v6 = v303;
                    v807 = v305;
                    v83 = v305;
                    if ( v300 >= 0 )
                    {
                      v301 = RtlUIntAdd(0LL, 4LL, &v796);
                      v806 = (LPVOID)v16;
                      v811 = v306;
                      v807 = v307;
                      v812 = (SIZE_T)v146;
                      if ( v301 >= 0 )
                      {
                        if ( dwBytes - v796 < (unsigned int)v804 )
                          goto LABEL_346;
                        Src = v852;
                        v808 = (unsigned int)v804;
                        v301 = RtlULongLongAdd(v852, (unsigned int)v804, &v852, v16);
                        v806 = v308;
                        v811 = v309;
                        v812 = (SIZE_T)v146;
                        v807 = v310;
                        if ( v301 >= 0 )
                        {
                          v301 = RtlUIntAdd((unsigned int)v796, (unsigned int)v804, &v796);
                          v806 = (LPVOID)v16;
                          v811 = v311;
                          v807 = v312;
                          v812 = (SIZE_T)v146;
                          if ( v301 >= 0 )
                          {
                            if ( dwBytes - v796 < 4 )
                              goto LABEL_346;
                            LODWORD(v809) = *(_DWORD *)v852;
                            v301 = RtlULongLongAdd(v852, 4LL, &v852, v16);
                            v806 = v313;
                            v811 = v314;
                            v812 = (SIZE_T)v146;
                            v807 = v315;
                            if ( v301 >= 0 )
                            {
                              v301 = RtlUIntAdd((unsigned int)v796, 4LL, &v796);
                              v806 = (LPVOID)v16;
                              v811 = v316;
                              v807 = v317;
                              v812 = (SIZE_T)v146;
                              if ( v301 >= 0 )
                              {
                                if ( dwBytes - v796 < (unsigned int)v809 )
                                  goto LABEL_346;
                                v816 = v852;
                                v301 = RtlULongLongAdd(v852, (unsigned int)v809, &v852, v16);
                                v806 = v318;
                                v811 = v319;
                                v812 = (SIZE_T)v146;
                                v807 = v320;
                                if ( v301 >= 0 )
                                {
                                  v301 = RtlUIntAdd((unsigned int)v796, (unsigned int)v809, &v796);
                                  v806 = (LPVOID)v16;
                                  v811 = v321;
                                  v807 = v322;
                                  v812 = (SIZE_T)v146;
                                  if ( v301 >= 0 )
                                  {
                                    if ( dwBytes - v796 < 4 )
                                      goto LABEL_346;
                                    LODWORD(v800) = *(_DWORD *)v852;
                                    v301 = RtlULongLongAdd(v852, 4LL, &v852, v16);
                                    v806 = v323;
                                    v811 = v324;
                                    v812 = (SIZE_T)v146;
                                    v807 = v325;
                                    if ( v301 >= 0 )
                                    {
                                      v301 = RtlUIntAdd((unsigned int)v796, 4LL, &v796);
                                      v806 = (LPVOID)v16;
                                      v811 = v326;
                                      v807 = v327;
                                      v812 = (SIZE_T)v146;
                                      if ( v301 >= 0 )
                                      {
                                        if ( dwBytes - v796 < (unsigned int)v800 )
                                          goto LABEL_346;
                                        v301 = RtlUIntAdd((unsigned int)v796, (unsigned int)v800, &v796);
                                        v806 = (LPVOID)v16;
                                        v811 = v328;
                                        v807 = v299;
                                        v329 = v146;
                                        v812 = (SIZE_T)v146;
                                        if ( v301 >= 0 )
                                        {
                                          if ( dwBytes == v796 )
                                          {
                                            v330 = (unsigned int)v809;
                                            v331 = v804;
                                            v332 = (unsigned int)v800;
                                            if ( (unsigned int)(v800 + v809 + v804) + 12LL != dwBytes )
                                            {
                                              v146 = v329;
                                              goto LABEL_325;
                                            }
                                            v333 = GetProcessHeap();
                                            v334 = HeapAlloc(v333, 8u, 0x30uLL);
                                            pcchLength = (size_t)v334;
                                            v335 = v334;
                                            if ( !v334 )
                                            {
                                              v8 = -805306345;
                                              v6 = v854;
                                              v146 = (_DWORD *)Size;
                                              v83 = (unsigned __int8 *)v810;
                                              v796 = -805306345;
                                              v806 = (LPVOID)psza;
                                              goto LABEL_265;
                                            }
                                            v336 = Src;
                                            if ( Src )
                                            {
                                              *(_DWORD *)v334 = v331;
                                              v337 = GetProcessHeap();
                                              v338 = v808;
                                              v339 = HeapAlloc(v337, 8u, v808);
                                              if ( !v339 )
                                                goto LABEL_358;
                                              v335[1] = v339;
                                              memcpy_0(v339, v336, v338);
                                            }
                                            else
                                            {
                                              *(_DWORD *)v334 = 0;
                                              v334[1] = 0LL;
                                            }
                                            v340 = v816;
                                            if ( !v816 )
                                            {
                                              *((_DWORD *)v335 + 4) = 0;
                                              v335[3] = 0LL;
                                              goto LABEL_355;
                                            }
                                            *((_DWORD *)v335 + 4) = v330;
                                            v341 = GetProcessHeap();
                                            v342 = HeapAlloc(v341, 8u, v330);
                                            if ( v342 )
                                            {
                                              v335[3] = v342;
                                              memcpy_0(v342, v340, v330);
LABEL_355:
                                              v343 = v852;
                                              if ( !v852 )
                                              {
                                                *((_DWORD *)v335 + 8) = 0;
                                                v335[5] = 0LL;
                                                goto LABEL_366;
                                              }
                                              *((_DWORD *)v335 + 8) = v332;
                                              v344 = GetProcessHeap();
                                              v345 = HeapAlloc(v344, 8u, v332);
                                              if ( v345 )
                                              {
                                                v335[5] = v345;
                                                memcpy_0(v345, v343, v332);
LABEL_366:
                                                v146 = (_DWORD *)Size;
                                                v301 = 0;
                                                v6 = v854;
                                                v83 = (unsigned __int8 *)v810;
                                                v803 = v335;
                                                v304 = (void *)psza;
                                                v806 = (LPVOID)psza;
                                                v811 = v854;
                                                v812 = Size;
                                                v807 = (unsigned __int8 *)v810;
                                                v16 = (unsigned __int64)v803;
                                                goto LABEL_368;
                                              }
                                            }
LABEL_358:
                                            v304 = (void *)psza;
                                            v301 = -1073741801;
                                            v6 = v854;
                                            v146 = (_DWORD *)Size;
                                            v83 = (unsigned __int8 *)v810;
                                            v806 = (LPVOID)psza;
                                            v811 = v854;
                                            v812 = Size;
                                            v807 = (unsigned __int8 *)v810;
                                            v803 = 0LL;
                                            v346 = pcchLength;
                                            v816 = *(void **)(pcchLength + 8);
                                            if ( v816 )
                                            {
                                              v347 = GetProcessHeap();
                                              HeapFree(v347, 0, v816);
                                              v346 = pcchLength;
                                              *(_QWORD *)(pcchLength + 8) = 0LL;
                                            }
                                            v816 = *(void **)(v346 + 24);
                                            if ( v816 )
                                            {
                                              v348 = GetProcessHeap();
                                              HeapFree(v348, 0, v816);
                                              v346 = pcchLength;
                                              *(_QWORD *)(pcchLength + 24) = 0LL;
                                            }
                                            v816 = *(void **)(v346 + 40);
                                            if ( v816 )
                                            {
                                              v349 = GetProcessHeap();
                                              HeapFree(v349, 0, v816);
                                              *(_QWORD *)(pcchLength + 40) = 0LL;
                                            }
                                            v350 = GetProcessHeap();
                                            HeapFree(v350, 0, (LPVOID)pcchLength);
                                            v16 = 0LL;
                                            v803 = 0LL;
                                            v806 = v304;
                                            v811 = v6;
                                            v812 = (SIZE_T)v146;
                                            v807 = v83;
LABEL_368:
                                            v8 = v301 | 0x10000000;
                                            v796 = v8;
                                            if ( v8 < 0 )
                                              goto LABEL_265;
                                            v810 = 0LL;
                                            if ( !v16 || (Src = *(void **)(v16 + 8)) == 0LL || !*(_DWORD *)v16 )
                                            {
                                              v8 = -805306355;
                                              goto LABEL_264;
                                            }
                                            Size = *(unsigned int *)v16 - 8LL;
                                            v351 = Size;
                                            v352 = MemoryAlloc(Size);
                                            v853 = v352;
                                            v353 = 0;
                                            if ( !v352 )
                                            {
                                              v418 = 0LL;
                                              goto LABEL_436;
                                            }
                                            v354 = (size_t)Src;
                                            LOBYTE(v802) = 0;
                                            v355 = (char *)v352;
                                            v852 = (void *)0x7F1137FAB69605ELL;
                                            pcchLength = (size_t)Src;
                                            psza = (STRSAFE_PCNZWCH)v352;
                                            v356 = v351 & 7;
                                            if ( (v351 & 7) == 0 )
                                            {
                                              LODWORD(v804) = 0;
                                              v796 = -1;
                                              v358 = 0;
                                              v363 = 0;
                                              goto LABEL_389;
                                            }
                                            v357 = 0;
                                            LODWORD(v800) = 0;
                                            v358 = 0;
                                            v359 = 0;
                                            if ( v356 )
                                            {
                                              v360 = 56;
                                              v361 = (unsigned __int8 *)pcchLength;
                                              do
                                              {
                                                v362 = *v361++;
                                                if ( v357 >= 4 )
                                                  v358 |= v362 << v360;
                                                else
                                                  v359 |= v362 << (v360 - 32);
                                                v360 -= 8;
                                                v357 = v800 + 1;
                                                LODWORD(v800) = v357;
                                              }
                                              while ( (int)v357 < v356 );
                                              LODWORD(v804) = v359;
                                              v363 = v359 ^ 0x92F65A5;
                                              v796 = v358;
                                              v364 = v358 ^ 0x699A899C;
                                              pcchLength = (size_t)v361;
                                              v365 = v364;
                                              v366 = v363;
                                              v806 = v304;
                                              v811 = v6;
                                              v812 = (SIZE_T)v146;
                                              v367 = v352;
                                              v807 = v83;
                                              do
                                              {
                                                v816 = v367 + 1;
                                                if ( v353 >= 4 )
                                                {
                                                  v365 = __ROL4__(v365, 8);
                                                  v368 = v365;
                                                }
                                                else
                                                {
                                                  v366 = __ROL4__(v366, 8);
                                                  v368 = v366;
                                                }
                                                *v367 = v368;
                                                ++v353;
                                                v367 = v816;
                                              }
                                              while ( (int)v353 < v356 );
                                              LOBYTE(v353) = v802;
                                              v355 = (char *)v816;
                                              v304 = v806;
                                              psza = (STRSAFE_PCNZWCH)v816;
                                              if ( (unsigned int)v356 > 4 )
                                              {
                                                v358 = v364 >> (8 * (8 - v356)) << (8 * (8 - v356));
                                                v355 = (char *)v816;
LABEL_388:
                                                v354 = pcchLength;
LABEL_389:
                                                v816 = (void *)(Size >> 3);
                                                if ( Size >> 3 )
                                                {
                                                  v369 = v355 + 7;
                                                  v370 = v804;
                                                  v371 = (unsigned __int8 *)(v354 + 2);
                                                  v372 = (char *)v816;
                                                  v373 = HIDWORD(v852);
                                                  v374 = HIDWORD(v852) ^ 0xAB69605E;
                                                  LODWORD(v808) = WORD2(v852);
                                                  LODWORD(v809) = WORD1(v852);
                                                  dwBytes = 24670;
                                                  v375 = v796;
                                                  do
                                                  {
                                                    v376 = *(v371 - 1) | (*(v371 - 2) << 8);
                                                    v377 = v371[2] << 8;
                                                    v378 = *v371;
                                                    v371 += 8;
                                                    v379 = *(v371 - 7) | ((v378 | (v376 << 8)) << 8);
                                                    v380 = v379 ^ v363;
                                                    v381 = *(v371 - 3) | ((*(v371 - 4) | ((*(v371 - 5) | v377) << 8)) << 8);
                                                    v382 = v374 ^ v380 ^ v381 ^ v358;
                                                    v383 = (__ROL4__(v382, 10) + v808 * __ROL4__(v382 + 1419157410, 5)) ^ v380;
                                                    v384 = (WORD1(v852) * __ROR4__(v373 + v383, 9) - __ROL4__(v383, 2)) ^ v382;
                                                    v385 = (dwBytes * (v384 - v808) - (v384 >> 13)) ^ v383;
                                                    v386 = (HIWORD(v852) * __ROL4__(WORD1(v852) ^ v385, 6)
                                                          - __ROL4__(v385, 2)) ^ v384;
                                                    v387 = (v373 - (v386 ^ 0xAB69605E)) ^ v385;
                                                    v388 = (v809 * (v808 ^ v387)) ^ __ROR4__(v387, 6) ^ v386;
                                                    v389 = (__ROL4__(v388, 2) + dwBytes * __ROR4__(v373 + v388, 15)) ^ v387;
                                                    v390 = (HIWORD(v852) * __ROR4__(v389 + 1419157410, 14)
                                                          - __ROL4__(v389, 8)) ^ v388;
                                                    v391 = __ROR4__(v390, 10) ^ (v808 * __ROR4__(v390 ^ 0xAB69605E, 12)) ^ v389;
                                                    v392 = (v391 >> 10) ^ (WORD1(v852) * (HIWORD(v852) ^ v391)) ^ v390;
                                                    v393 = (HIWORD(v852) * (dwBytes + __ROR4__(~v392, 5))) ^ v391;
                                                    v394 = (v393 - HIWORD(v852)) ^ 0xAB69605E ^ v392;
                                                    v395 = ((v394 >> 2) + v808 * __ROL4__(HIWORD(v852) ^ v394, 2)) ^ v393;
                                                    v396 = (__ROL4__(v395, 7) + WORD1(v852) * __ROR4__(v395 - v373, 6)) ^ v394;
                                                    v397 = (dwBytes * (v808 ^ v396) + __ROR4__(v396, 9)) ^ v395;
                                                    v398 = (__ROL4__(v397, 7)
                                                          + HIWORD(v852) * __ROL4__(WORD1(v852) ^ v397, 5)) ^ v396;
                                                    v399 = v374 ^ v398 ^ v397;
                                                    v400 = (v808 * (__ROR4__(v399, 3) - WORD1(v852))) ^ v398;
                                                    v401 = (dwBytes * __ROR4__(v400 - v373, 1) - __ROR4__(v400, 6)) ^ v399;
                                                    v402 = (__ROL4__(v401, 14)
                                                          + HIWORD(v852) * __ROL4__(v401 - 1419157410, 3)) ^ v400;
                                                    v403 = (v808 * __ROL4__(v402 - 1419157410, 15) - __ROR4__(v402, 14)) ^ v401;
                                                    v404 = (v403 >> 3) ^ (WORD1(v852) * (dwBytes ^ v403)) ^ v402;
                                                    v405 = v404 ^ v373;
                                                    v406 = v404;
                                                    v407 = v375 ^ v404;
                                                    v375 = v381;
                                                    v408 = v370 ^ __ROL4__(v406, 2) ^ (dwBytes * __ROL4__(v405, 4));
                                                    v370 = v379;
                                                    v409 = v408 ^ v403;
                                                    *(v369 - 4) = v409;
                                                    *v369 = v407;
                                                    v369 += 8;
                                                    v410 = __ROR4__(v409, 8);
                                                    *(v369 - 13) = v410;
                                                    v411 = __ROR4__(v407, 8);
                                                    *(v369 - 9) = v411;
                                                    v412 = __ROR4__(v410, 8);
                                                    *(v369 - 14) = v412;
                                                    v413 = __ROR4__(v411, 8);
                                                    *(v369 - 10) = v413;
                                                    v414 = __ROR4__(v412, 8);
                                                    v415 = __ROR4__(v413, 8);
                                                    *(v369 - 15) = v414;
                                                    *(v369 - 11) = v415;
                                                    v358 = __ROR4__(v415, 8);
                                                    v363 = __ROR4__(v414, 8);
                                                    --v372;
                                                  }
                                                  while ( v372 );
                                                  LOBYTE(v353) = v802;
                                                  v146 = (_DWORD *)v812;
                                                  v83 = v807;
                                                  v6 = v811;
                                                  v304 = v806;
                                                  v352 = v853;
                                                }
                                                for ( i = 0LL; i < Size; ++i )
                                                  LOBYTE(v353) = *((_BYTE *)v352 + i) ^ v353;
                                                v16 = (unsigned __int64)v803;
                                                v417 = v304;
                                                pcchLength = (size_t)v146;
                                                v806 = v304;
                                                if ( (unsigned __int8)v353 != *(_QWORD *)((char *)Src + Size) )
                                                {
                                                  MemoryFree(v352);
                                                  v418 = v810;
LABEL_436:
                                                  if ( v418 )
                                                  {
                                                    v440 = GetProcessHeap();
                                                    HeapFree(v440, 0, v418);
                                                  }
                                                  v8 = -805306367;
                                                  v796 = -805306367;
                                                  v853 = 0LL;
                                                  goto LABEL_265;
                                                }
                                                Src = v352;
                                                LODWORD(v808) = 0;
                                                if ( (unsigned int)Size < 4 )
                                                  goto LABEL_261;
                                                dwBytes = *v352;
                                                v419 = RtlULongLongAdd(v352, 4LL, &Src, v803);
                                                v146 = (_DWORD *)pcchLength;
                                                v262 = v419;
                                                v853 = v420;
                                                v803 = (LPVOID)v16;
                                                v806 = v421;
                                                if ( v419 < 0 )
                                                  goto LABEL_263;
                                                v422 = RtlUIntAdd(0LL, 4LL, &v808);
                                                v853 = v352;
                                                v262 = v422;
                                                v803 = (LPVOID)v16;
                                                v806 = v417;
                                                if ( v422 < 0 )
                                                  goto LABEL_263;
                                                if ( (unsigned int)(Size - v808) < 4 )
                                                  goto LABEL_261;
                                                LODWORD(v809) = *(_DWORD *)Src;
                                                v423 = RtlULongLongAdd(Src, 4LL, &Src, v16);
                                                v853 = v424;
                                                v262 = v423;
                                                v803 = (LPVOID)v16;
                                                v806 = v425;
                                                if ( v423 < 0 )
                                                  goto LABEL_263;
                                                v426 = RtlUIntAdd((unsigned int)v808, 4LL, &v808);
                                                v853 = v352;
                                                v262 = v426;
                                                v803 = (LPVOID)v16;
                                                v806 = v417;
                                                if ( v426 < 0 )
                                                  goto LABEL_263;
                                                if ( (int)Size - (int)v808 < (unsigned int)v809 )
                                                  goto LABEL_261;
                                                v427 = RtlUIntAdd((unsigned int)v808, (unsigned int)v809, &v808);
                                                v853 = v352;
                                                v262 = v427;
                                                v803 = (LPVOID)v16;
                                                v806 = v417;
                                                if ( v427 < 0 )
                                                  goto LABEL_263;
                                                v812 = (unsigned int)v809;
                                                if ( (char *)v352 + (unsigned int)Size < (char *)Src
                                                                                       + (unsigned int)v809
                                                  || (unsigned int)Size
                                                   + (char *)v352
                                                   - (_BYTE *)Src
                                                   - (unsigned __int64)(unsigned int)v809 >= 8 )
                                                {
LABEL_261:
                                                  v853 = v352;
                                                  v803 = (LPVOID)v16;
                                                  v806 = v417;
                                                }
                                                else
                                                {
                                                  v853 = v352;
                                                  v811 = 0LL;
                                                  v262 = 0;
                                                  LODWORD(v804) = 0;
                                                  v803 = (LPVOID)v16;
                                                  v806 = v417;
                                                  if ( Src )
                                                  {
                                                    Size = (SIZE_T)Src;
                                                    v262 = RtlULongLongAdd(Src, v812, &v852, v16);
                                                    v853 = v428;
                                                    v803 = (LPVOID)v16;
                                                    v806 = v429;
                                                    if ( v262 < 0 )
                                                      goto LABEL_263;
                                                    v853 = v428;
                                                    v803 = (LPVOID)v16;
                                                    v806 = v429;
                                                    if ( Size < (unsigned __int64)v852 )
                                                    {
                                                      v430 = v429;
                                                      v806 = v429;
                                                      v431 = Size;
                                                      v853 = v428;
                                                      v803 = (LPVOID)v16;
                                                      while ( 1 )
                                                      {
                                                        v810 = (LPVOID)v16;
                                                        v262 = RtlULongLongAdd(v431, 4LL, &v816, v16);
                                                        if ( v262 < 0 )
                                                          goto LABEL_263;
                                                        if ( v816 > v852 )
                                                          goto LABEL_423;
                                                        v262 = RtlUIntAdd(4LL, *v432, &v800);
                                                        if ( v262 < 0 )
                                                          goto LABEL_263;
                                                        v434 = RtlULongLongAdd(v433, (unsigned int)v800, &v854, v16);
                                                        v853 = v435;
                                                        v262 = v434;
                                                        v803 = (LPVOID)v16;
                                                        v806 = v430;
                                                        if ( v434 < 0 )
                                                          goto LABEL_263;
                                                        v431 = (SIZE_T)v854;
                                                        v436 = v852;
                                                        v853 = v435;
                                                        v803 = (LPVOID)v16;
                                                        v806 = v430;
                                                        if ( v854 > v852 )
                                                          goto LABEL_423;
                                                        LODWORD(v804) = v804 + 1;
                                                        if ( v854 >= v852 )
                                                        {
                                                          v853 = v435;
                                                          v803 = (LPVOID)v16;
                                                          v806 = v430;
                                                          goto LABEL_425;
                                                        }
                                                      }
                                                    }
                                                    v431 = Size;
                                                    v436 = v852;
LABEL_425:
                                                    if ( (void *)v431 != v436 )
                                                    {
LABEL_423:
                                                      v262 = -1073741811;
                                                      goto LABEL_263;
                                                    }
                                                  }
                                                  if ( (_DWORD)v809 )
                                                  {
                                                    v437 = GetProcessHeap();
                                                    v438 = v812;
                                                    v262 = 0;
                                                    v811 = HeapAlloc(v437, 8u, v812);
                                                    v439 = v811;
                                                    if ( !v811 )
                                                    {
                                                      v262 = -1073741801;
                                                      goto LABEL_263;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v438 = v812;
                                                    v439 = v811;
                                                  }
                                                  if ( Src )
                                                    memcpy_0(v439, Src, v438);
                                                  v826[1] = v811;
                                                  LODWORD(v826[0]) = v804;
                                                  if ( v262 < 0 || dwBytes == LODWORD(v826[0]) )
                                                    goto LABEL_263;
                                                }
                                                v262 = -1073741762;
LABEL_263:
                                                v8 = v262 | 0x10000000;
                                                goto LABEL_264;
                                              }
                                              v358 = 0;
                                              if ( (unsigned int)v356 >= 4 )
                                                goto LABEL_388;
                                              v354 = pcchLength;
                                            }
                                            else
                                            {
                                              v363 = 154101157;
                                              LODWORD(v804) = 0;
                                              v796 = 0;
                                            }
                                            v363 = v363 >> (8 * (4 - v356)) << (8 * (4 - v356));
                                            v355 = (char *)psza;
                                            goto LABEL_389;
                                          }
LABEL_346:
                                          v8 = -805306306;
                                          v806 = (LPVOID)v16;
                                          v796 = -805306306;
                                          goto LABEL_265;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    v16 = 0LL;
                    goto LABEL_368;
                  }
LABEL_303:
                  v8 = -805306345;
                  goto LABEL_264;
                }
                goto LABEL_171;
              }
LABEL_126:
              LODWORD(v6) = 0;
              goto LABEL_127;
            }
            if ( v145 + 2 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
            {
              v140 = v817;
              *v145 = v86;
              *v140 = v86;
              goto LABEL_163;
            }
LABEL_125:
            v8 = -1073741789;
            v796 = -1073741789;
            goto LABEL_126;
          }
          v8 = -1073741762;
LABEL_26:
          v796 = v8;
          goto LABEL_27;
        }
        v71 = (unsigned int *)lpMem[1];
        pcchLength = (size_t)lpMem[1];
        if ( v54 )
        {
          do
          {
            v796 = RtlUIntAdd(4LL, *v71, &v800);
            v8 = v796;
            if ( v796 < 0 )
              goto LABEL_27;
            v796 = RtlULongLongAdd(v72, (unsigned int)v800, &pcchLength, v72);
            v8 = v796;
            if ( v796 < 0 )
              goto LABEL_27;
            v71 = (unsigned int *)pcchLength;
          }
          while ( v73 + 1 < v74 );
        }
        v796 = RtlULongLongAdd(v71, 4LL, &v817, v71);
        v8 = v796;
        if ( v796 < 0 )
        {
LABEL_61:
          if ( v8 < 0 )
            goto LABEL_27;
          goto LABEL_62;
        }
        if ( v75 + 3 <= (_DWORD *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
        {
          v69 = v817;
          v70 = v827;
          *v75 = 8;
          *v69 = v70;
          v57 = (int)lpMem[0];
          goto LABEL_77;
        }
LABEL_44:
        v8 = -1073741789;
        goto LABEL_26;
      }
    }
    else
    {
      v44 = 4LL;
      v796 = RtlUIntAdd(4LL, 160LL, &v800);
      v8 = v796;
      if ( v796 < 0 )
        goto LABEL_126;
      v45 = RtlUIntAdd(HIDWORD(lpMem[0]), (unsigned int)v800, (char *)lpMem + 4);
      v46 = (int)lpMem[0];
      v8 = v45;
      v796 = v45;
      if ( v45 >= 0 )
      {
        v46 = ++LODWORD(lpMem[0]);
        goto LABEL_54;
      }
    }
    if ( v8 < 0 )
      goto LABEL_27;
    goto LABEL_54;
  }
  v4 = -2147024809;
LABEL_3:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v836);
  if ( v4 < 0 || !v2 )
    return 0;
  return v3;
}
