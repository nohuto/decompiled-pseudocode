/*
 * XREFs of ??R_lambda_75e5b5e40d3ee59a799a62b8fd66d884_@@QEBA_NXZ @ 0x1800CAD78
 * Callers:
 *     ?AreVirtualDesktopsEnabled@@YA_NXZ @ 0x1800CAD10 (-AreVirtualDesktopsEnabled@@YA_NXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopOptional@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CAF04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopOptional@@@details@wil@@QEA.c)
 *     RtlULongLongAdd @ 0x1800CB900 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1800CB920 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1800CB940 (StringCchLengthW.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1801446FC (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x180144730 (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18015A450 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1801802F4 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1801EACD7 (wcscmp_0.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1805F3EA4 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1805F3ED4 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

char __fastcall _lambda_75e5b5e40d3ee59a799a62b8fd66d884_::operator()(__int64 a1, __int64 a2)
{
  bool v2; // al
  int v3; // edi
  bool v4; // zf
  int v6; // eax
  void *v7; // rbx
  char *v8; // rax
  _BYTE *v9; // r14
  unsigned __int8 *v10; // r12
  int v11; // r13d
  int v12; // esi
  _BYTE *v13; // r15
  int v14; // r10d
  int v15; // r11d
  __int64 v16; // rbx
  int v17; // r9d
  int v18; // r8d
  int v19; // ecx
  int v20; // r9d
  int v21; // r11d
  int v22; // r8d
  unsigned int v23; // r10d
  int v24; // r11d
  unsigned int v25; // r10d
  int v26; // r11d
  int v27; // r10d
  unsigned int v28; // r11d
  int v29; // r10d
  int v30; // r11d
  int v31; // r10d
  unsigned int v32; // r11d
  int v33; // edx
  int v34; // r11d
  unsigned int v35; // r10d
  int v36; // r11d
  int v37; // r10d
  int v38; // r11d
  int v39; // r10d
  unsigned int v40; // r11d
  int v41; // r10d
  int v42; // r11d
  int v43; // r10d
  unsigned int v44; // r11d
  int v45; // r10d
  int v46; // edx
  int v47; // ecx
  int v48; // r10d
  int v49; // edx
  int v50; // r11d
  int v51; // r11d
  int v52; // r10d
  int v53; // r11d
  int v54; // r10d
  int v55; // r11d
  int v56; // r10d
  unsigned __int64 v57; // rcx
  char v58; // al
  int v59; // esi
  unsigned int v60; // r13d
  HANDLE ProcessHeap; // rax
  __int64 v62; // rbx
  HMODULE *v63; // rdi
  const WCHAR *v64; // rdi
  __int64 v65; // rax
  const WCHAR *v66; // rdx
  const WCHAR *v67; // rdi
  char *v68; // r14
  __int64 v69; // rcx
  unsigned __int64 v70; // rcx
  unsigned int v71; // r12d
  unsigned int i; // r15d
  __int64 v73; // rax
  const CHAR *v74; // rdx
  void **ProcAddress; // rcx
  int v76; // esi
  signed int v77; // edi
  __int64 v78; // r14
  __int64 v79; // r9
  wchar_t *j; // rbx
  wchar_t *v81; // r8
  signed int LastError; // eax
  bool v83; // sf
  HDESK (__fastcall *v84)(WARBIRD_DELAY_LOAD *__hidden, unsigned int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v86; // r14
  bool v87; // sf
  __int64 v88; // r9
  wchar_t *k; // rbx
  wchar_t *v90; // r8
  signed int v91; // eax
  HANDLE CurrentProcess; // rax
  int v93; // ebx
  __int64 v94; // r12
  int v95; // r15d
  int v96; // esi
  int v97; // eax
  HMODULE *v98; // rdi
  __int64 v99; // rbx
  WCHAR *v100; // r13
  HANDLE v101; // rax
  WCHAR *v102; // r12
  int v103; // edi
  HANDLE v104; // rax
  _QWORD *v105; // rax
  _QWORD *v106; // r13
  __int64 v107; // rcx
  int v108; // eax
  __int64 v109; // r11
  int v110; // eax
  int v111; // r10d
  int v112; // r9d
  int v113; // eax
  int v114; // r10d
  int v115; // r9d
  int v116; // eax
  size_t v117; // rdx
  int v118; // r9d
  int v119; // eax
  int v120; // eax
  int v121; // r9d
  int v122; // eax
  int v123; // r9d
  unsigned int v124; // edi
  HANDLE v125; // rax
  _DWORD *v126; // rax
  _DWORD *v127; // rdi
  LPVOID v128; // r11
  _DWORD *v129; // rax
  int v130; // r10d
  int v131; // eax
  LPVOID v132; // r11
  int v133; // r10d
  int v134; // eax
  LPVOID v135; // r11
  int v136; // r10d
  int v137; // eax
  size_t v138; // rdx
  int v139; // r10d
  _OWORD *v140; // rax
  unsigned int *v141; // rdi
  int v142; // r9d
  unsigned int v143; // r10d
  _QWORD *v144; // rax
  unsigned int *v145; // rdi
  int v146; // r9d
  unsigned int v147; // r10d
  wchar_t **v148; // rax
  unsigned int *v149; // rdi
  int v150; // r9d
  unsigned int v151; // r10d
  unsigned int v152; // r10d
  LPVOID v153; // r11
  int v154; // eax
  _DWORD *v155; // rdi
  int v156; // r11d
  int v157; // eax
  __int64 v158; // r9
  void *v159; // rcx
  __int64 v160; // rcx
  int v161; // eax
  LPVOID v162; // r11
  int v163; // r10d
  int *v164; // rax
  unsigned int *v165; // rdi
  int v166; // r9d
  unsigned int v167; // r10d
  void *v168; // rbx
  HANDLE v169; // rax
  void *v170; // rbx
  HANDLE v171; // rax
  HANDLE v172; // rax
  HANDLE v173; // rax
  DWORD ModuleFileNameW; // eax
  WCHAR *v175; // r13
  unsigned int *v176; // rdi
  int v177; // r9d
  unsigned int v178; // r10d
  _DWORD *v179; // rax
  __int64 v180; // rcx
  unsigned int v181; // edi
  const void **v182; // r11
  const void **v183; // rbx
  unsigned __int8 *v184; // r13
  unsigned int v185; // edi
  unsigned int *v186; // r12
  _QWORD *v187; // r11
  int v188; // r15d
  unsigned int v189; // ecx
  unsigned int v190; // edi
  HANDLE v191; // rax
  _DWORD *v192; // rdi
  unsigned int v193; // r10d
  void *v194; // rcx
  HANDLE v195; // rax
  unsigned __int64 v196; // r15
  unsigned __int8 v197; // al
  unsigned __int64 m; // rcx
  _BYTE *v199; // rcx
  int v200; // r10d
  unsigned __int8 *v201; // rdi
  unsigned int v202; // r9d
  unsigned int v203; // edx
  unsigned int v204; // ecx
  int v205; // r10d
  char v206; // r11
  int v207; // r8d
  _BYTE *v208; // rsi
  unsigned int v209; // r10d
  unsigned int v210; // r11d
  unsigned int v211; // ecx
  unsigned int v212; // r8d
  char v213; // r12
  unsigned __int64 v214; // r11
  _BYTE *v215; // r13
  int v216; // ebx
  int v217; // r14d
  int v218; // r12d
  unsigned __int8 *v219; // rax
  int v220; // r8d
  int v221; // edi
  int v222; // ecx
  int v223; // r8d
  int v224; // edi
  int v225; // r10d
  int v226; // r9d
  int v227; // r10d
  int v228; // r9d
  int v229; // r10d
  unsigned int v230; // r9d
  int v231; // r10d
  int v232; // r9d
  int v233; // r10d
  int v234; // r9d
  int v235; // r10d
  int v236; // r9d
  unsigned int v237; // r10d
  unsigned int v238; // r9d
  int v239; // r10d
  int v240; // r9d
  int v241; // r10d
  int v242; // r9d
  int v243; // r10d
  int v244; // r9d
  int v245; // r10d
  int v246; // r9d
  unsigned int v247; // r10d
  int v248; // r9d
  unsigned int v249; // ecx
  int v250; // r9d
  int v251; // r10d
  int v252; // r9d
  int v253; // r10d
  int v254; // r9d
  int v255; // r10d
  int v256; // r9d
  int v257; // r10d
  HANDLE v258; // rax
  unsigned int *v259; // rax
  unsigned int *v260; // rdi
  int v261; // r15d
  _QWORD *v262; // rdi
  HANDLE v263; // rax
  HANDLE v264; // rax
  HANDLE v265; // rax
  HANDLE v266; // rax
  HANDLE v267; // rax
  __int64 v268; // rdx
  unsigned int v269; // r10d
  int v270; // r15d
  unsigned int v271; // r10d
  HANDLE v272; // rax
  void *v273; // rax
  HANDLE v274; // rax
  _OWORD *v275; // rax
  HANDLE v276; // rax
  _QWORD *v277; // rax
  HANDLE v278; // rax
  HANDLE v279; // rax
  HANDLE v280; // rax
  HANDLE v281; // rax
  unsigned int v282; // edi
  HANDLE v283; // rax
  _DWORD *v284; // rax
  void *v285; // rdi
  void *v286; // rcx
  void *v287; // rcx
  HANDLE v288; // rax
  int v289; // eax
  unsigned int v290; // ecx
  int v291; // r10d
  unsigned int v292; // eax
  unsigned int v293; // r9d
  int v294; // r11d
  HANDLE v295; // rax
  void *v296; // rdi
  HANDLE v297; // rax
  void *v298; // rdi
  HANDLE v299; // rax
  void *v300; // rdi
  HANDLE v301; // rax
  HANDLE v302; // rax
  void *v303; // rdi
  HANDLE v304; // rax
  HANDLE v305; // rax
  _QWORD *v306; // rdi
  void *v307; // rbx
  HANDLE v308; // rax
  void *v309; // rbx
  HANDLE v310; // rax
  void *v311; // rbx
  HANDLE v312; // rax
  HANDLE v313; // rax
  HANDLE v314; // rax
  LPVOID v315; // rcx
  unsigned int v316; // r11d
  int v317; // r9d
  unsigned int v318; // r10d
  unsigned int v319; // r10d
  unsigned int v320; // eax
  unsigned int v321; // r10d
  unsigned int v322; // r9d
  int v323; // r15d
  unsigned int v324; // edi
  HANDLE v325; // rax
  unsigned int *v326; // rax
  void *v327; // rdi
  FARPROC v328; // rax
  int v329; // eax
  unsigned int v330; // r9d
  unsigned __int8 *v331; // rdx
  const void **v332; // r8
  signed int v333; // eax
  __int64 v334; // rcx
  unsigned int *v335; // r10
  unsigned int *v336; // r11
  SIZE_T v337; // r15
  unsigned int *v338; // rbx
  unsigned int v339; // r11d
  unsigned int *v340; // r10
  unsigned int v341; // ebx
  SIZE_T v342; // r13
  unsigned int v343; // r10d
  HANDLE v344; // rax
  unsigned int *v345; // rax
  HANDLE v346; // rax
  void *v347; // rax
  HANDLE v348; // rax
  void *v349; // rax
  HANDLE v350; // rax
  void *v351; // rax
  int v352; // r15d
  _QWORD *v353; // rax
  HANDLE v354; // rax
  HANDLE v355; // rax
  HANDLE v356; // rax
  HANDLE v357; // rax
  _QWORD *v358; // rax
  unsigned int *v359; // r9
  void *v360; // rbx
  _QWORD *v361; // rdi
  HANDLE v362; // rax
  void *v363; // rbx
  HANDLE v364; // rax
  void *v365; // rbx
  HANDLE v366; // rax
  HANDLE v367; // rax
  unsigned __int64 v368; // r15
  _DWORD *v369; // r9
  int v370; // eax
  unsigned __int8 *v371; // rdx
  _DWORD *v372; // rcx
  unsigned int v373; // r8d
  unsigned int v374; // ecx
  char v375; // r11
  unsigned __int8 *v376; // r14
  int v377; // r15d
  int v378; // r10d
  int v379; // r10d
  unsigned int v380; // r11d
  unsigned int v381; // esi
  int v382; // ecx
  unsigned int v383; // edx
  _BYTE *v384; // rdi
  char v385; // r10
  unsigned int v386; // r10d
  unsigned int v387; // r11d
  _BYTE *v388; // rbx
  int v389; // esi
  unsigned __int8 *v390; // r13
  int v391; // r15d
  int v392; // r9d
  unsigned int v393; // r12d
  char *v394; // rax
  int v395; // r8d
  int v396; // edi
  int v397; // ecx
  int v398; // r8d
  int v399; // r10d
  int v400; // edi
  unsigned int v401; // r11d
  int v402; // r10d
  unsigned int v403; // r11d
  int v404; // r10d
  int v405; // r11d
  unsigned int v406; // r10d
  int v407; // r11d
  int v408; // r10d
  int v409; // r11d
  unsigned int v410; // r10d
  int v411; // r11d
  int v412; // r10d
  unsigned int v413; // r11d
  int v414; // r10d
  int v415; // r11d
  int v416; // r10d
  int v417; // r11d
  int v418; // r10d
  int v419; // r11d
  int v420; // r10d
  int v421; // r11d
  unsigned int v422; // r10d
  int v423; // r11d
  int v424; // edx
  int v425; // ecx
  int v426; // r11d
  int v427; // edx
  int v428; // r10d
  int v429; // r10d
  int v430; // r11d
  int v431; // r10d
  int v432; // r11d
  int v433; // r10d
  int v434; // r11d
  unsigned __int64 n; // rcx
  void *v436; // rdi
  void *v437; // r10
  const void **v438; // r9
  void *v439; // r10
  int v440; // eax
  const void **v441; // rcx
  const void **v442; // r9
  void *v443; // r10
  int v444; // eax
  const void **v445; // r9
  void *v446; // r10
  void *v447; // r11
  const void **v448; // rdx
  void *v449; // r10
  unsigned int *v450; // r10
  unsigned __int64 v451; // r11
  __int64 v452; // r10
  void *v453; // r9
  HANDLE v454; // rax
  size_t v455; // rdi
  void *v456; // rcx
  _DWORD *v457; // rbx
  int v458; // r9d
  _DWORD *v459; // rax
  int v460; // ebx
  unsigned int v461; // edi
  int v462; // edi
  _QWORD *v463; // rax
  int *v464; // rcx
  unsigned int v465; // edi
  unsigned int v466; // r10d
  int v467; // r11d
  int v468; // edi
  int *v469; // rax
  LPVOID v470; // rcx
  unsigned int v471; // edi
  unsigned int v472; // r10d
  int v473; // r11d
  int v474; // r11d
  void *v475; // r10
  unsigned int *v476; // rcx
  unsigned int v477; // edi
  unsigned int v478; // r12d
  int v479; // r9d
  unsigned int v480; // edi
  unsigned int *v481; // rax
  unsigned int *v482; // rcx
  unsigned int v483; // edi
  unsigned int v484; // r13d
  unsigned int v485; // r12d
  int v486; // r9d
  unsigned int v487; // edi
  int v488; // eax
  const void *v489; // r10
  size_t v490; // r11
  unsigned int *v491; // rax
  __int64 v492; // rax
  unsigned int v493; // edi
  int v494; // eax
  WCHAR *v495; // r12
  int v496; // eax
  _BYTE *v497; // r14
  int v498; // esi
  unsigned __int8 *v499; // rdi
  int v500; // ebx
  __int64 v501; // r12
  int v502; // r11d
  int v503; // r10d
  int v504; // ecx
  int v505; // r11d
  int v506; // ebx
  int v507; // r10d
  unsigned int v508; // r9d
  int v509; // ebx
  unsigned int v510; // r9d
  int v511; // ebx
  int v512; // r9d
  unsigned int v513; // ebx
  int v514; // r9d
  int v515; // ebx
  int v516; // r9d
  unsigned int v517; // ebx
  int v518; // edx
  int v519; // ebx
  unsigned int v520; // esi
  int v521; // ebx
  int v522; // esi
  int v523; // ebx
  int v524; // esi
  unsigned int v525; // ebx
  int v526; // esi
  int v527; // ebx
  int v528; // esi
  unsigned int v529; // ebx
  int v530; // esi
  int v531; // edx
  int v532; // ecx
  int v533; // esi
  unsigned int v534; // edx
  int v535; // ebx
  int v536; // ebx
  int v537; // esi
  int v538; // ebx
  int v539; // esi
  int v540; // ebx
  int v541; // esi
  unsigned __int64 v542; // rcx
  char v543; // al
  int v544; // r13d
  HANDLE v545; // rax
  __int64 v546; // r12
  HMODULE *v547; // rbx
  WCHAR *v548; // rbx
  const WCHAR *v549; // rdx
  __int64 v550; // rax
  WCHAR *v551; // rbx
  HMODULE *v552; // r8
  __int64 v553; // rcx
  unsigned __int64 v554; // rcx
  unsigned int v555; // eax
  unsigned int v556; // ecx
  const CHAR *v557; // rdx
  __int64 v558; // rax
  void **v559; // rcx
  int v560; // eax
  WCHAR *v561; // r12
  char *v562; // rax
  int v563; // r13d
  _BYTE *v564; // rsi
  int v565; // eax
  unsigned __int8 *v566; // rdi
  int v567; // r14d
  __int64 v568; // r12
  int v569; // ebx
  int v570; // r11d
  int v571; // r10d
  int v572; // ecx
  int v573; // r11d
  int v574; // ebx
  int v575; // r10d
  unsigned int v576; // r9d
  int v577; // ebx
  unsigned int v578; // r9d
  int v579; // ebx
  int v580; // r9d
  unsigned int v581; // ebx
  int v582; // r9d
  int v583; // ebx
  int v584; // r9d
  unsigned int v585; // ebx
  int v586; // edx
  int v587; // ebx
  unsigned int v588; // r14d
  int v589; // ebx
  int v590; // r14d
  int v591; // ebx
  int v592; // r14d
  unsigned int v593; // r8d
  int v594; // r14d
  int v595; // r8d
  int v596; // r14d
  unsigned int v597; // r8d
  int v598; // r14d
  int v599; // ebx
  int v600; // ecx
  int v601; // r14d
  int v602; // ebx
  int v603; // ebx
  int v604; // r14d
  int v605; // ebx
  int v606; // r14d
  int v607; // ebx
  int v608; // r14d
  unsigned __int64 v609; // rcx
  int v610; // r13d
  char v611; // al
  HANDLE v612; // rax
  HMODULE *v613; // rbx
  __int64 v614; // r12
  WCHAR *v615; // rbx
  const WCHAR *v616; // rdx
  __int64 v617; // rax
  WCHAR *v618; // rbx
  HMODULE *v619; // r8
  __int64 v620; // rcx
  unsigned __int64 v621; // rcx
  unsigned int v622; // eax
  unsigned int v623; // ecx
  const CHAR *v624; // rdx
  __int64 v625; // rax
  void **v626; // rcx
  __int64 v627; // rbx
  int v628; // r13d
  signed int v629; // eax
  signed int v630; // r12d
  _DWORD *v631; // rdi
  signed int v632; // eax
  _DWORD *v633; // r13
  _DWORD *v634; // rdi
  unsigned int nn; // r14d
  __int64 v636; // rax
  unsigned int v637; // r10d
  unsigned int v638; // r9d
  __int64 v639; // r8
  unsigned int v640; // ecx
  unsigned int *v641; // rdx
  __int64 v642; // rdi
  const wchar_t *v643; // rcx
  __int64 v644; // r8
  const wchar_t **v645; // rdx
  __int64 v646; // rax
  char *v647; // rbx
  unsigned __int64 v648; // r13
  void *v649; // rcx
  signed int v650; // eax
  _BYTE *v651; // r12
  int v652; // ebx
  unsigned __int8 *v653; // r13
  int v654; // r14d
  int v655; // r11d
  int v656; // r10d
  __int64 v657; // rsi
  int v658; // r9d
  int v659; // r8d
  int v660; // eax
  int v661; // r9d
  int v662; // r10d
  int v663; // r8d
  unsigned int v664; // edi
  int v665; // r10d
  unsigned int v666; // edi
  int v667; // r10d
  int v668; // edi
  unsigned int v669; // r10d
  int v670; // edi
  int v671; // r10d
  int v672; // edi
  unsigned int v673; // r10d
  int v674; // edi
  int v675; // r10d
  unsigned int v676; // r11d
  int v677; // r10d
  int v678; // r11d
  int v679; // r10d
  int v680; // r11d
  unsigned int v681; // r10d
  int v682; // r11d
  int v683; // r10d
  int v684; // r11d
  unsigned int v685; // r10d
  int v686; // r11d
  int v687; // ecx
  int v688; // eax
  int v689; // r11d
  int v690; // ecx
  int v691; // r10d
  int v692; // r10d
  int v693; // r11d
  int v694; // r10d
  int v695; // r11d
  int v696; // r10d
  int v697; // r11d
  WCHAR *v698; // rbx
  unsigned __int64 v699; // rax
  __m128i v700; // xmm1
  __m128i v701; // xmm0
  __m128i v702; // xmm0
  __m128i v703; // xmm1
  __m128i v704; // xmm1
  __m128i v705; // xmm1
  WCHAR **v706; // rdx
  __int64 v707; // rdi
  unsigned int mm; // ecx
  __int64 v709; // rax
  void **v710; // rdi
  void **v711; // rbx
  __int16 *v712; // rcx
  WCHAR *v713; // rdx
  unsigned int v714; // r8d
  __int16 v715; // r9
  __int16 *v716; // rcx
  __int64 v717; // rax
  __int64 v718; // r13
  __int64 v719; // rax
  int v720; // eax
  void *v721; // rcx
  __int64 v722; // rax
  signed int v723; // eax
  signed int v724; // eax
  __int64 v725; // rax
  _WORD *v726; // rdi
  __int64 v727; // rcx
  unsigned int v728; // edi
  __int64 v729; // r13
  signed int v730; // eax
  int v731; // eax
  __int64 v732; // rax
  signed int v733; // eax
  wchar_t *v734; // rax
  signed int v735; // eax
  int v736; // eax
  __int64 v737; // rax
  signed int v738; // eax
  unsigned int v739; // edx
  int v740; // eax
  int v741; // r13d
  void *v742; // rdi
  unsigned int v743; // ebx
  void *v744; // rdi
  __int64 v745; // rdi
  bool v746; // sf
  unsigned int v747; // r13d
  int v748; // eax
  __int64 v749; // rax
  bool v750; // sf
  void *v751; // rdi
  __int64 v752; // rbx
  int v753; // eax
  __int64 v754; // rdx
  int v755; // edx
  int v756; // r12d
  int v757; // ebx
  int v758; // edi
  __int64 v759; // rax
  int v760; // edx
  int v761; // ecx
  __int64 v762; // rax
  int v763; // eax
  HMODULE *v764; // rdi
  unsigned int v765; // edi
  int v766; // ebx
  __int64 v767; // rax
  int v768; // eax
  void *v769; // r13
  __int64 v770; // rax
  __int64 v771; // r12
  bool v772; // sf
  char *v773; // rcx
  __int64 v774; // rax
  __int64 (__fastcall *v775)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v776; // rax
  int v777; // edi
  __int64 v778; // r9
  int v779; // edx
  int v780; // r8d
  int v781; // ecx
  int v782; // r13d
  int v783; // r11d
  unsigned __int8 *v784; // rdx
  int v785; // eax
  __int64 v786; // rax
  unsigned __int8 *v787; // r9
  int v788; // edi
  __int64 v789; // r10
  int v790; // r8d
  int v791; // edi
  int v792; // edx
  int v793; // edi
  int v794; // edx
  void *v795; // r13
  __int64 v796; // rax
  LPCWSTR v797; // r12
  signed int v798; // eax
  char *v799; // rcx
  __int64 v800; // rax
  __int64 (__fastcall *v801)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v802; // rax
  int v803; // eax
  int v804; // r8d
  int v805; // edi
  int v806; // edx
  int v807; // ecx
  int v808; // r13d
  int v809; // r11d
  unsigned __int8 *v810; // rdi
  __int64 v811; // rax
  unsigned __int8 *v812; // r9
  __int64 v813; // r10
  int kk; // r8d
  int v815; // r8d
  int v816; // edi
  int v817; // edx
  int v818; // edi
  int v819; // edx
  int v820; // edi
  int v821; // ecx
  LPVOID v822; // rbx
  SIZE_T v823; // r12
  char v824; // al
  unsigned int v825; // r12d
  int v826; // edx
  int v827; // ebx
  int v828; // r11d
  int v829; // edi
  int v830; // r13d
  __int64 v831; // rax
  void *v832; // rbx
  __int64 v833; // rax
  signed int v834; // ebx
  int v835; // edi
  __int64 v836; // rax
  signed int v837; // eax
  int v838; // eax
  __int64 v839; // rcx
  __int64 v840; // rax
  __int64 (__fastcall *v841)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v842; // rax
  LPCWSTR v843; // rdi
  int v844; // r10d
  int v845; // r9d
  int v846; // r8d
  int v847; // ecx
  int v848; // edx
  int v849; // r11d
  int v850; // r14d
  __int64 v851; // rdx
  __int64 v852; // rax
  unsigned __int8 *v853; // r9
  int v854; // edi
  __int64 v855; // r10
  int v856; // r8d
  int v857; // edi
  int v858; // edx
  int v859; // edi
  int v860; // edx
  void *v861; // rdi
  __int64 v862; // rax
  __int64 v863; // rdi
  signed int v864; // ebx
  int v865; // r13d
  SIZE_T v866; // rax
  bool v867; // sf
  int v868; // eax
  __int64 v869; // rcx
  __int64 v870; // rax
  __int64 (__fastcall *v871)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v872; // rax
  int v873; // eax
  int v874; // r8d
  int v875; // r9d
  int v876; // edx
  int v877; // ecx
  int v878; // r13d
  int v879; // r11d
  unsigned __int8 *v880; // rdi
  const WCHAR *v881; // rax
  unsigned __int8 *v882; // r9
  int v883; // r8d
  signed __int64 v884; // r10
  int v885; // r8d
  int v886; // edi
  int v887; // edx
  int v888; // edi
  int v889; // edx
  int v890; // edi
  int v891; // ecx
  __int64 v892; // r9
  __int64 v893; // rcx
  __int64 v894; // rcx
  __int64 v895; // rcx
  int v896; // eax
  HMODULE *v897; // rdi
  int v898; // eax
  WCHAR *v899; // r12
  char *v900; // rax
  int v901; // r12d
  _BYTE *v902; // rsi
  int v903; // r11d
  unsigned __int8 *v904; // r13
  __int64 v905; // rax
  int v906; // r14d
  int v907; // r10d
  int v908; // r9d
  int v909; // ecx
  int v910; // r10d
  int v911; // r11d
  int v912; // r9d
  int v913; // r8d
  int v914; // r11d
  unsigned int v915; // r8d
  int v916; // r11d
  int v917; // r8d
  unsigned int v918; // r11d
  int v919; // r8d
  int v920; // r11d
  int v921; // r8d
  unsigned int v922; // r11d
  int v923; // r8d
  int v924; // r11d
  unsigned int v925; // ebx
  int v926; // r11d
  int v927; // ebx
  int v928; // r11d
  int v929; // ebx
  unsigned int v930; // r11d
  int v931; // ebx
  int v932; // r11d
  int v933; // ebx
  unsigned int v934; // r11d
  int v935; // ebx
  int v936; // edx
  int v937; // ecx
  int v938; // ebx
  int v939; // edx
  int v940; // r11d
  int v941; // r11d
  int v942; // ebx
  int v943; // r11d
  int v944; // ebx
  int v945; // r11d
  int v946; // ebx
  char v947; // al
  unsigned __int64 v948; // rcx
  int v949; // r13d
  HANDLE v950; // rax
  HMODULE *v951; // rdi
  __int64 v952; // rbx
  HMODULE *v953; // rdi
  WCHAR *v954; // rdi
  const WCHAR *v955; // rdx
  __int64 v956; // rax
  WCHAR *v957; // rdi
  char *v958; // rbx
  __int64 v959; // rcx
  unsigned __int64 v960; // rcx
  unsigned int v961; // eax
  unsigned int v962; // ecx
  const CHAR *v963; // rdx
  __int64 v964; // rax
  void **v965; // rcx
  __int64 v966; // rbx
  int v967; // eax
  _QWORD *v968; // r12
  HANDLE v969; // rax
  WCHAR *v970; // rax
  WCHAR *v971; // rbx
  HANDLE v972; // rax
  _QWORD *v973; // rax
  unsigned __int64 v974; // r13
  int v975; // eax
  int v976; // r9d
  int v977; // eax
  int v978; // r9d
  int v979; // eax
  int v980; // r9d
  unsigned int v981; // edi
  HANDLE v982; // rax
  _DWORD *v983; // rax
  _DWORD *v984; // rdi
  LPVOID v985; // r11
  _DWORD *v986; // rax
  __int64 v987; // rcx
  int v988; // r10d
  __int64 v989; // rbx
  LPVOID v990; // r11
  _DWORD *v991; // rdi
  int v992; // r9d
  unsigned int v993; // r10d
  _OWORD *v994; // rax
  __int128 v995; // xmm1
  unsigned int v996; // edi
  LPVOID v997; // r11
  unsigned int *v998; // r9
  __int64 v999; // r9
  int v1000; // r10d
  _DWORD *v1001; // r9
  _QWORD *v1002; // rax
  unsigned int v1003; // edi
  void *v1004; // rdi
  HANDLE v1005; // rax
  void *v1006; // rdi
  HANDLE v1007; // rax
  HANDLE v1008; // rax
  HANDLE v1009; // rax
  unsigned int *v1010; // r9
  __int64 v1011; // r9
  int v1012; // r10d
  _DWORD *v1013; // r9
  unsigned __int64 *v1014; // rax
  __int64 v1015; // rcx
  unsigned int v1016; // edi
  const void **v1017; // r11
  const void **v1018; // rbx
  WCHAR *v1019; // r13
  unsigned int *v1020; // r12
  int v1021; // edi
  unsigned int v1022; // r9d
  _QWORD *v1023; // r11
  unsigned int v1024; // ecx
  unsigned int v1025; // edi
  HANDLE v1026; // rax
  _DWORD *v1027; // rax
  unsigned int v1028; // r10d
  void *v1029; // rcx
  __int64 v1030; // r9
  HANDLE v1031; // rax
  int v1032; // edi
  unsigned __int64 v1033; // rdi
  unsigned __int8 v1034; // al
  unsigned __int64 v1035; // rcx
  char *v1036; // rcx
  unsigned int v1037; // r10d
  int v1038; // r9d
  WCHAR *v1039; // rdi
  SIZE_T v1040; // r11
  int v1041; // edx
  int v1042; // ecx
  int v1043; // r9d
  char v1044; // si
  int v1045; // r8d
  _BYTE *v1046; // r14
  unsigned int v1047; // r9d
  unsigned int v1048; // ecx
  unsigned int v1049; // r8d
  int v1050; // r12d
  char v1051; // bl
  SIZE_T v1052; // rdx
  _BYTE *v1053; // r11
  int v1054; // r12d
  unsigned __int8 *v1055; // r13
  int v1056; // r15d
  SIZE_T v1057; // r14
  int v1058; // eax
  int v1059; // r8d
  int v1060; // edi
  int v1061; // ecx
  int v1062; // r8d
  int v1063; // edi
  int v1064; // r9d
  int v1065; // r10d
  int v1066; // edx
  int v1067; // r10d
  int v1068; // r9d
  int v1069; // r10d
  int v1070; // r9d
  unsigned int v1071; // r10d
  int v1072; // r9d
  int v1073; // r10d
  int v1074; // r9d
  int v1075; // r10d
  int v1076; // r9d
  int v1077; // r10d
  unsigned int v1078; // r9d
  unsigned int v1079; // r10d
  int v1080; // r9d
  int v1081; // r10d
  int v1082; // r9d
  int v1083; // r10d
  int v1084; // r9d
  int v1085; // r10d
  int v1086; // r9d
  int v1087; // r10d
  unsigned int v1088; // r9d
  int v1089; // r10d
  unsigned int v1090; // r9d
  int v1091; // r10d
  int v1092; // r9d
  int v1093; // r10d
  int v1094; // r9d
  int v1095; // r10d
  int v1096; // r9d
  int v1097; // r10d
  int v1098; // r9d
  const void *v1099; // rdi
  HANDLE v1100; // rax
  unsigned int *v1101; // rsi
  int v1102; // edi
  _QWORD *v1103; // rsi
  HANDLE v1104; // rax
  HANDLE v1105; // rax
  HANDLE v1106; // rax
  HANDLE v1107; // rax
  HANDLE v1108; // rax
  __int64 v1109; // rdx
  int v1110; // edi
  unsigned int v1111; // r9d
  unsigned int v1112; // r9d
  HANDLE v1113; // rax
  void *v1114; // rax
  HANDLE v1115; // rax
  _OWORD *v1116; // rax
  HANDLE v1117; // rax
  _QWORD *v1118; // rax
  HANDLE v1119; // rax
  HANDLE v1120; // rax
  HANDLE v1121; // rax
  HANDLE v1122; // rax
  unsigned int v1123; // edi
  HANDLE v1124; // rax
  _DWORD *v1125; // rax
  void *v1126; // rsi
  void *v1127; // rcx
  void *v1128; // rcx
  int v1129; // esi
  HANDLE v1130; // rax
  int v1131; // eax
  unsigned int v1132; // ecx
  SIZE_T v1133; // r9
  unsigned int v1134; // r11d
  unsigned int v1135; // eax
  HANDLE v1136; // rax
  void *v1137; // rsi
  HANDLE v1138; // rax
  void *v1139; // rsi
  HANDLE v1140; // rax
  void *v1141; // rsi
  HANDLE v1142; // rax
  HANDLE v1143; // rax
  void *v1144; // rbx
  HANDLE v1145; // rax
  HANDLE v1146; // rax
  _QWORD *v1147; // rbx
  void *v1148; // rsi
  HANDLE v1149; // rax
  void *v1150; // rsi
  HANDLE v1151; // rax
  void *v1152; // rsi
  HANDLE v1153; // rax
  HANDLE v1154; // rax
  HANDLE v1155; // rax
  unsigned int v1156; // r10d
  SIZE_T v1157; // r9
  unsigned int *v1158; // rcx
  unsigned int v1159; // esi
  int v1160; // r10d
  unsigned int v1161; // r11d
  int v1162; // eax
  unsigned int v1163; // r10d
  unsigned int v1164; // eax
  SIZE_T v1165; // rsi
  unsigned int v1166; // edi
  HANDLE v1167; // rax
  unsigned int *v1168; // rax
  FARPROC v1169; // rax
  int v1170; // eax
  unsigned int v1171; // r9d
  WCHAR *v1172; // rdx
  const void **v1173; // r8
  signed int v1174; // eax
  __int64 v1175; // rcx
  unsigned int *v1176; // rdi
  unsigned int *v1177; // r11
  SIZE_T v1178; // rbx
  unsigned int *v1179; // rdi
  unsigned int v1180; // r11d
  unsigned int v1181; // r10d
  SIZE_T v1182; // r13
  unsigned int v1183; // edi
  HANDLE v1184; // rax
  HANDLE v1185; // rax
  void *v1186; // rax
  HANDLE v1187; // rax
  void *v1188; // rax
  HANDLE v1189; // rax
  void *v1190; // rax
  int v1191; // edi
  _QWORD *v1192; // rax
  HANDLE v1193; // rax
  HANDLE v1194; // rax
  HANDLE v1195; // rax
  HANDLE v1196; // rax
  _QWORD *v1197; // rax
  unsigned int *v1198; // r9
  void *v1199; // rbx
  _QWORD *v1200; // rdi
  HANDLE v1201; // rax
  void *v1202; // rbx
  HANDLE v1203; // rax
  void *v1204; // rbx
  HANDLE v1205; // rax
  HANDLE v1206; // rax
  SIZE_T v1207; // rdi
  WCHAR *v1208; // rax
  int v1209; // r11d
  WCHAR *v1210; // r9
  unsigned __int8 *v1211; // rdx
  unsigned __int8 v1212; // al
  unsigned int v1213; // r8d
  char v1214; // r15
  unsigned __int8 *v1215; // r14
  int v1216; // r9d
  int v1217; // r10d
  int v1218; // ecx
  int v1219; // r11d
  unsigned int v1220; // r11d
  int v1221; // edi
  int v1222; // ecx
  unsigned int v1223; // eax
  _BYTE *v1224; // rdx
  char v1225; // si
  LPCWSTR v1226; // rcx
  unsigned int v1227; // r10d
  SIZE_T v1228; // r8
  int v1229; // esi
  _BYTE *v1230; // rbx
  unsigned __int8 *v1231; // r13
  int v1232; // eax
  unsigned int v1233; // edi
  SIZE_T v1234; // r12
  int v1235; // r15d
  int v1236; // r9d
  int v1237; // r8d
  int v1238; // ecx
  int v1239; // r9d
  int v1240; // r10d
  int v1241; // r8d
  int v1242; // edi
  int v1243; // r10d
  unsigned int v1244; // edi
  int v1245; // r10d
  int v1246; // edi
  unsigned int v1247; // r10d
  int v1248; // edi
  int v1249; // r10d
  int v1250; // edi
  unsigned int v1251; // r10d
  int v1252; // edi
  int v1253; // r10d
  unsigned int v1254; // r11d
  int v1255; // r10d
  int v1256; // r11d
  int v1257; // r10d
  int v1258; // r11d
  unsigned int v1259; // r10d
  int v1260; // r11d
  int v1261; // r10d
  int v1262; // r11d
  unsigned int v1263; // r10d
  int v1264; // ecx
  int v1265; // r11d
  int v1266; // edx
  int v1267; // r10d
  int v1268; // r10d
  int v1269; // r11d
  int v1270; // r10d
  int v1271; // r11d
  int v1272; // r10d
  int v1273; // r11d
  SIZE_T ii; // rcx
  void *v1275; // r11
  int v1276; // eax
  void *v1277; // r9
  int v1278; // edi
  void *v1279; // r11
  SIZE_T v1280; // r10
  int v1281; // eax
  SIZE_T v1282; // r10
  int v1283; // eax
  void *v1284; // r9
  void *v1285; // r11
  SIZE_T v1286; // r10
  int v1287; // eax
  int v1288; // eax
  void *v1289; // rcx
  void *v1290; // r9
  SIZE_T v1291; // r10
  void *v1292; // r11
  SIZE_T v1293; // rcx
  unsigned int *v1294; // rcx
  unsigned __int64 v1295; // r11
  void *v1296; // r9
  void *v1297; // r10
  SIZE_T v1298; // r11
  HANDLE v1299; // rax
  size_t v1300; // rsi
  unsigned int v1301; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v1302; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1303; // [rsp+60h] [rbp-A0h]
  unsigned int v1304; // [rsp+64h] [rbp-9Ch]
  int v1305; // [rsp+64h] [rbp-9Ch]
  int v1306; // [rsp+64h] [rbp-9Ch]
  unsigned int v1307; // [rsp+64h] [rbp-9Ch]
  unsigned int v1308; // [rsp+64h] [rbp-9Ch]
  unsigned int v1309; // [rsp+64h] [rbp-9Ch]
  int v1310; // [rsp+64h] [rbp-9Ch]
  unsigned int v1311; // [rsp+64h] [rbp-9Ch]
  int v1312; // [rsp+64h] [rbp-9Ch]
  unsigned int v1313; // [rsp+64h] [rbp-9Ch]
  unsigned int v1314; // [rsp+64h] [rbp-9Ch]
  int v1315; // [rsp+64h] [rbp-9Ch]
  int v1316; // [rsp+64h] [rbp-9Ch]
  int v1317; // [rsp+68h] [rbp-98h]
  unsigned int v1318; // [rsp+68h] [rbp-98h]
  int v1319; // [rsp+68h] [rbp-98h]
  unsigned int i2; // [rsp+68h] [rbp-98h]
  unsigned int i1; // [rsp+68h] [rbp-98h]
  unsigned int v1322; // [rsp+68h] [rbp-98h]
  int v1323; // [rsp+68h] [rbp-98h]
  unsigned int v1324; // [rsp+68h] [rbp-98h]
  int v1325; // [rsp+68h] [rbp-98h]
  int v1326; // [rsp+68h] [rbp-98h]
  int v1327; // [rsp+68h] [rbp-98h]
  int v1328; // [rsp+68h] [rbp-98h]
  wchar_t *v1329; // [rsp+70h] [rbp-90h]
  wchar_t *v1330; // [rsp+70h] [rbp-90h]
  wchar_t *v1331; // [rsp+70h] [rbp-90h]
  wchar_t *v1332; // [rsp+70h] [rbp-90h]
  wchar_t *v1333; // [rsp+70h] [rbp-90h]
  wchar_t *v1334; // [rsp+70h] [rbp-90h]
  wchar_t *v1335; // [rsp+70h] [rbp-90h]
  wchar_t *v1336; // [rsp+70h] [rbp-90h]
  wchar_t *v1337; // [rsp+70h] [rbp-90h]
  int v1338; // [rsp+70h] [rbp-90h]
  int v1339; // [rsp+70h] [rbp-90h]
  int v1340; // [rsp+70h] [rbp-90h]
  unsigned int v1341; // [rsp+70h] [rbp-90h]
  unsigned int v1342; // [rsp+70h] [rbp-90h]
  unsigned int v1343; // [rsp+70h] [rbp-90h]
  unsigned int v1344; // [rsp+70h] [rbp-90h]
  int v1345; // [rsp+70h] [rbp-90h]
  int v1346; // [rsp+70h] [rbp-90h]
  int v1347; // [rsp+78h] [rbp-88h]
  int v1348; // [rsp+78h] [rbp-88h]
  unsigned int v1349; // [rsp+78h] [rbp-88h]
  unsigned int v1350; // [rsp+78h] [rbp-88h]
  int v1351; // [rsp+78h] [rbp-88h]
  int v1352; // [rsp+78h] [rbp-88h]
  int v1353; // [rsp+78h] [rbp-88h]
  int v1354; // [rsp+78h] [rbp-88h]
  __int64 v1355; // [rsp+80h] [rbp-80h]
  __int64 v1356; // [rsp+80h] [rbp-80h]
  __int64 v1357; // [rsp+80h] [rbp-80h]
  __int64 v1358; // [rsp+80h] [rbp-80h]
  __int64 v1359; // [rsp+80h] [rbp-80h]
  int v1360; // [rsp+80h] [rbp-80h]
  int v1361; // [rsp+80h] [rbp-80h]
  int v1362; // [rsp+80h] [rbp-80h]
  int v1363; // [rsp+80h] [rbp-80h]
  unsigned int v1364; // [rsp+80h] [rbp-80h]
  int v1365; // [rsp+80h] [rbp-80h]
  char *v1366; // [rsp+80h] [rbp-80h]
  int v1367; // [rsp+80h] [rbp-80h]
  int v1368; // [rsp+80h] [rbp-80h]
  unsigned int v1369; // [rsp+80h] [rbp-80h]
  unsigned int v1370; // [rsp+80h] [rbp-80h]
  unsigned int v1371; // [rsp+80h] [rbp-80h]
  SIZE_T v1372; // [rsp+88h] [rbp-78h]
  SIZE_T v1373; // [rsp+88h] [rbp-78h]
  void *v1374; // [rsp+88h] [rbp-78h]
  void *v1375; // [rsp+88h] [rbp-78h]
  void *v1376; // [rsp+88h] [rbp-78h]
  void *v1377; // [rsp+88h] [rbp-78h]
  void *v1378; // [rsp+88h] [rbp-78h]
  void *v1379; // [rsp+88h] [rbp-78h]
  SIZE_T v1380; // [rsp+88h] [rbp-78h]
  void *v1381; // [rsp+88h] [rbp-78h]
  void *v1382; // [rsp+88h] [rbp-78h]
  void *v1383; // [rsp+88h] [rbp-78h]
  SIZE_T v1384; // [rsp+88h] [rbp-78h]
  void *v1385; // [rsp+88h] [rbp-78h]
  SIZE_T v1386; // [rsp+88h] [rbp-78h]
  LPCWSTR lpModuleName; // [rsp+90h] [rbp-70h]
  WCHAR *lpModuleNamea; // [rsp+90h] [rbp-70h]
  const wchar_t *lpModuleNameb; // [rsp+90h] [rbp-70h]
  LPCWSTR lpModuleNamec; // [rsp+90h] [rbp-70h]
  int lpModuleNamed; // [rsp+90h] [rbp-70h]
  int lpModuleNamee; // [rsp+90h] [rbp-70h]
  int lpModuleNamef; // [rsp+90h] [rbp-70h]
  int lpModuleNameg; // [rsp+90h] [rbp-70h]
  unsigned int lpModuleNameh; // [rsp+90h] [rbp-70h]
  int lpModuleNamei; // [rsp+90h] [rbp-70h]
  LPCWSTR lpModuleNamej; // [rsp+90h] [rbp-70h]
  int lpModuleNamek; // [rsp+90h] [rbp-70h]
  const void **v1399; // [rsp+98h] [rbp-68h]
  unsigned int *v1400; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v1401; // [rsp+98h] [rbp-68h]
  char *v1402; // [rsp+98h] [rbp-68h]
  void *v1403; // [rsp+98h] [rbp-68h]
  char *v1404; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v1405; // [rsp+98h] [rbp-68h]
  char *v1406; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v1407; // [rsp+98h] [rbp-68h]
  int v1408; // [rsp+98h] [rbp-68h]
  int v1409; // [rsp+98h] [rbp-68h]
  unsigned int jj; // [rsp+98h] [rbp-68h]
  int v1411; // [rsp+98h] [rbp-68h]
  LPVOID v1412; // [rsp+A0h] [rbp-60h]
  _QWORD *v1413; // [rsp+A0h] [rbp-60h]
  _QWORD *v1414; // [rsp+A0h] [rbp-60h]
  char *v1415; // [rsp+A0h] [rbp-60h]
  unsigned int v1416; // [rsp+A0h] [rbp-60h]
  unsigned int v1417; // [rsp+A0h] [rbp-60h]
  unsigned int v1418; // [rsp+A0h] [rbp-60h]
  _BYTE *Src; // [rsp+A8h] [rbp-58h]
  const WCHAR *Srca; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *Srcb; // [rsp+A8h] [rbp-58h]
  void *Srcc; // [rsp+A8h] [rbp-58h]
  LPVOID Srcd; // [rsp+A8h] [rbp-58h]
  LPVOID Srce; // [rsp+A8h] [rbp-58h]
  _QWORD *Srcf; // [rsp+A8h] [rbp-58h]
  char *Srcg; // [rsp+A8h] [rbp-58h]
  void *Srch; // [rsp+A8h] [rbp-58h]
  void *Srci; // [rsp+A8h] [rbp-58h]
  void *Srcj; // [rsp+A8h] [rbp-58h]
  unsigned int Size; // [rsp+B0h] [rbp-50h]
  void *Sizea; // [rsp+B0h] [rbp-50h]
  SIZE_T Sizeb; // [rsp+B0h] [rbp-50h]
  void *Sizec; // [rsp+B0h] [rbp-50h]
  SIZE_T Sized; // [rsp+B0h] [rbp-50h]
  void *Sizee; // [rsp+B0h] [rbp-50h]
  SIZE_T Sizef; // [rsp+B0h] [rbp-50h]
  void *Sizeg; // [rsp+B0h] [rbp-50h]
  SIZE_T Sizeh; // [rsp+B0h] [rbp-50h]
  _QWORD *Sizei; // [rsp+B0h] [rbp-50h]
  SIZE_T Sizej; // [rsp+B0h] [rbp-50h]
  LPVOID Sizek; // [rsp+B0h] [rbp-50h]
  LPCWSTR v1442; // [rsp+B8h] [rbp-48h]
  LPCWSTR v1443; // [rsp+B8h] [rbp-48h]
  LPCWSTR v1444; // [rsp+B8h] [rbp-48h]
  WCHAR *v1445; // [rsp+B8h] [rbp-48h]
  LPCWSTR v1446; // [rsp+B8h] [rbp-48h]
  WCHAR *v1447; // [rsp+B8h] [rbp-48h]
  WCHAR *v1448; // [rsp+B8h] [rbp-48h]
  WCHAR *v1449; // [rsp+B8h] [rbp-48h]
  WCHAR *v1450; // [rsp+B8h] [rbp-48h]
  WCHAR *v1451; // [rsp+B8h] [rbp-48h]
  WCHAR *v1452; // [rsp+B8h] [rbp-48h]
  LPCWSTR v1453; // [rsp+B8h] [rbp-48h]
  LPCWSTR v1454; // [rsp+C0h] [rbp-40h]
  LPCWSTR v1455; // [rsp+C0h] [rbp-40h]
  LPCWSTR v1456; // [rsp+C0h] [rbp-40h]
  WCHAR *v1457; // [rsp+C0h] [rbp-40h]
  WCHAR *v1458; // [rsp+C0h] [rbp-40h]
  WCHAR *v1459; // [rsp+C0h] [rbp-40h]
  LPCWSTR v1460; // [rsp+C0h] [rbp-40h]
  LPCWSTR v1461; // [rsp+C0h] [rbp-40h]
  int v1462; // [rsp+C0h] [rbp-40h]
  LPCWSTR v1463; // [rsp+C0h] [rbp-40h]
  int v1464; // [rsp+C0h] [rbp-40h]
  wchar_t *v1465; // [rsp+C8h] [rbp-38h]
  wchar_t *v1466; // [rsp+C8h] [rbp-38h]
  wchar_t *v1467; // [rsp+C8h] [rbp-38h]
  wchar_t *v1468; // [rsp+C8h] [rbp-38h]
  wchar_t *v1469; // [rsp+C8h] [rbp-38h]
  int v1470; // [rsp+C8h] [rbp-38h]
  unsigned int v1471; // [rsp+C8h] [rbp-38h]
  unsigned int v1472; // [rsp+C8h] [rbp-38h]
  int v1473; // [rsp+C8h] [rbp-38h]
  int v1474; // [rsp+D0h] [rbp-30h]
  int v1475; // [rsp+D0h] [rbp-30h]
  int v1476; // [rsp+D0h] [rbp-30h]
  unsigned int v1477; // [rsp+D0h] [rbp-30h]
  unsigned int v1478; // [rsp+D0h] [rbp-30h]
  int v1479; // [rsp+D0h] [rbp-30h]
  int v1480; // [rsp+D0h] [rbp-30h]
  int v1481; // [rsp+D0h] [rbp-30h]
  int v1482; // [rsp+D0h] [rbp-30h]
  int v1483; // [rsp+D0h] [rbp-30h]
  __int64 v1484; // [rsp+D0h] [rbp-30h]
  int v1485; // [rsp+D8h] [rbp-28h]
  unsigned int v1486; // [rsp+D8h] [rbp-28h]
  int v1487; // [rsp+D8h] [rbp-28h]
  char v1488; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v1489; // [rsp+E0h] [rbp-20h]
  _BYTE *v1490; // [rsp+E0h] [rbp-20h]
  int v1491; // [rsp+E0h] [rbp-20h]
  int v1492; // [rsp+E0h] [rbp-20h]
  unsigned int v1493; // [rsp+E0h] [rbp-20h]
  unsigned int v1494; // [rsp+E0h] [rbp-20h]
  int v1495; // [rsp+E0h] [rbp-20h]
  int v1496; // [rsp+E0h] [rbp-20h]
  int v1497; // [rsp+E8h] [rbp-18h]
  int v1498; // [rsp+E8h] [rbp-18h]
  unsigned int v1499; // [rsp+E8h] [rbp-18h]
  unsigned int v1500; // [rsp+E8h] [rbp-18h]
  int v1501; // [rsp+E8h] [rbp-18h]
  const void **v1502; // [rsp+E8h] [rbp-18h]
  wchar_t *v1503; // [rsp+F0h] [rbp-10h]
  __int64 v1504; // [rsp+F0h] [rbp-10h]
  __int64 v1505; // [rsp+F0h] [rbp-10h]
  __int64 v1506; // [rsp+F0h] [rbp-10h]
  char *v1507; // [rsp+F0h] [rbp-10h]
  unsigned int *v1508; // [rsp+F0h] [rbp-10h]
  __int64 v1509; // [rsp+F8h] [rbp-8h]
  __int64 v1510; // [rsp+F8h] [rbp-8h]
  __int64 v1511; // [rsp+F8h] [rbp-8h]
  const void **v1512; // [rsp+F8h] [rbp-8h]
  const void **v1513; // [rsp+F8h] [rbp-8h]
  const void **v1514; // [rsp+100h] [rbp+0h]
  _DWORD *v1515; // [rsp+100h] [rbp+0h]
  int v1516; // [rsp+100h] [rbp+0h]
  int v1517; // [rsp+100h] [rbp+0h]
  int v1518; // [rsp+100h] [rbp+0h]
  __int64 v1519; // [rsp+108h] [rbp+8h]
  __int64 v1520; // [rsp+108h] [rbp+8h]
  wchar_t *v1521; // [rsp+108h] [rbp+8h]
  __int64 v1522; // [rsp+108h] [rbp+8h]
  int v1523; // [rsp+108h] [rbp+8h]
  _QWORD *v1524; // [rsp+108h] [rbp+8h]
  unsigned int *v1525; // [rsp+110h] [rbp+10h]
  int v1526; // [rsp+110h] [rbp+10h]
  void *v1527; // [rsp+118h] [rbp+18h]
  _WORD *v1528; // [rsp+118h] [rbp+18h]
  __int64 v1529; // [rsp+118h] [rbp+18h]
  __int64 v1530; // [rsp+118h] [rbp+18h]
  SIZE_T v1531; // [rsp+120h] [rbp+20h] BYREF
  SIZE_T v1532; // [rsp+128h] [rbp+28h]
  WCHAR *v1533; // [rsp+130h] [rbp+30h]
  int v1534; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v1535; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v1536; // [rsp+140h] [rbp+40h]
  LPVOID v1537; // [rsp+148h] [rbp+48h]
  unsigned int v1538; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1539; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1540; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v1541; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1542; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1543; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1544; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1545; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1546; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1547; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1548; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1549; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1550; // [rsp+180h] [rbp+80h] BYREF
  SIZE_T v1551; // [rsp+184h] [rbp+84h] BYREF
  unsigned int v1552; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1553; // [rsp+190h] [rbp+90h] BYREF
  SIZE_T v1554; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1555; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1556; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1557; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1558; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1559; // [rsp+1B0h] [rbp+B0h] BYREF
  ULONG ReturnLength; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1561; // [rsp+1B8h] [rbp+B8h] BYREF
  LPVOID v1562; // [rsp+1C0h] [rbp+C0h]
  int pvData; // [rsp+1C8h] [rbp+C8h] BYREF
  DWORD pcbData[2]; // [rsp+1CCh] [rbp+CCh] BYREF
  int v1565; // [rsp+1D4h] [rbp+D4h]
  int v1566; // [rsp+1D8h] [rbp+D8h]
  unsigned int v1567; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1568; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1569; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1570; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1571; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1572; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1573; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1574; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1575; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1576; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1577; // [rsp+204h] [rbp+104h] BYREF
  unsigned int v1578; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1579; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1580; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1581; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v1582; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1583; // [rsp+21Ch] [rbp+11Ch] BYREF
  unsigned int v1584; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1585; // [rsp+224h] [rbp+124h] BYREF
  SIZE_T v1586; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1587; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1588; // [rsp+234h] [rbp+134h] BYREF
  SIZE_T v1589; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1590; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1591; // [rsp+248h] [rbp+148h] BYREF
  unsigned int v1592; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1593; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v1594; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1595; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1596; // [rsp+260h] [rbp+160h] BYREF
  LPVOID v1597; // [rsp+268h] [rbp+168h]
  unsigned int v1598; // [rsp+270h] [rbp+170h] BYREF
  unsigned int v1599; // [rsp+274h] [rbp+174h] BYREF
  unsigned int v1600; // [rsp+278h] [rbp+178h] BYREF
  unsigned int v1601; // [rsp+27Ch] [rbp+17Ch] BYREF
  unsigned int v1602; // [rsp+280h] [rbp+180h] BYREF
  wchar_t *v1603; // [rsp+288h] [rbp+188h] BYREF
  wchar_t *v1604; // [rsp+290h] [rbp+190h] BYREF
  wchar_t *v1605; // [rsp+298h] [rbp+198h] BYREF
  size_t pcchLength; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned int *v1607; // [rsp+2A8h] [rbp+1A8h] BYREF
  unsigned int *v1608; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int *v1609; // [rsp+2B8h] [rbp+1B8h] BYREF
  size_t v1610; // [rsp+2C0h] [rbp+1C0h] BYREF
  _DWORD *v1611; // [rsp+2C8h] [rbp+1C8h] BYREF
  unsigned int *v1612; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int *v1613; // [rsp+2D8h] [rbp+1D8h] BYREF
  void *v1614[5]; // [rsp+2E0h] [rbp+1E0h] BYREF
  void *v1615; // [rsp+308h] [rbp+208h] BYREF
  unsigned int *v1616; // [rsp+310h] [rbp+210h] BYREF
  LPVOID v1617; // [rsp+318h] [rbp+218h] BYREF
  HMODULE phModule; // [rsp+320h] [rbp+220h] BYREF
  void *v1619; // [rsp+328h] [rbp+228h] BYREF
  unsigned __int64 v1620; // [rsp+330h] [rbp+230h] BYREF
  unsigned __int64 v1621; // [rsp+338h] [rbp+238h] BYREF
  void *v1622; // [rsp+340h] [rbp+240h] BYREF
  _DWORD *v1623; // [rsp+348h] [rbp+248h] BYREF
  _DWORD *v1624; // [rsp+350h] [rbp+250h] BYREF
  int *v1625; // [rsp+358h] [rbp+258h] BYREF
  LPVOID v1626; // [rsp+360h] [rbp+260h] BYREF
  unsigned int *v1627; // [rsp+368h] [rbp+268h] BYREF
  unsigned int *v1628; // [rsp+370h] [rbp+270h] BYREF
  __int64 v1629[3]; // [rsp+378h] [rbp+278h] BYREF
  void **v1630; // [rsp+390h] [rbp+290h] BYREF
  _DWORD *v1631; // [rsp+3A8h] [rbp+2A8h] BYREF
  WCHAR *v1632; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v1633; // [rsp+3B8h] [rbp+2B8h]
  void **v1634; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v1635; // [rsp+3C8h] [rbp+2C8h] BYREF
  _DWORD *v1636; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v1637; // [rsp+3D8h] [rbp+2D8h]
  __int64 v1638; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v1639; // [rsp+3E8h] [rbp+2E8h] BYREF
  __int64 v1640; // [rsp+3F0h] [rbp+2F0h] BYREF
  int SystemInformation; // [rsp+3F8h] [rbp+2F8h] BYREF
  char v1642; // [rsp+3FCh] [rbp+2FCh]
  int *v1643; // [rsp+400h] [rbp+300h] BYREF
  __int64 v1644; // [rsp+410h] [rbp+310h] BYREF
  wchar_t *String1; // [rsp+420h] [rbp+320h] BYREF
  __int64 v1646[3]; // [rsp+428h] [rbp+328h] BYREF
  _DWORD *v1647; // [rsp+440h] [rbp+340h] BYREF
  unsigned int *v1648; // [rsp+448h] [rbp+348h] BYREF
  unsigned int *v1649; // [rsp+450h] [rbp+350h] BYREF
  void *v1650[5]; // [rsp+458h] [rbp+358h] BYREF
  void *v1651; // [rsp+480h] [rbp+380h] BYREF
  unsigned int *v1652; // [rsp+488h] [rbp+388h] BYREF
  unsigned int *v1653; // [rsp+490h] [rbp+390h] BYREF
  HMODULE hModule; // [rsp+498h] [rbp+398h] BYREF
  void *v1655; // [rsp+4A0h] [rbp+3A0h] BYREF
  SIZE_T v1656; // [rsp+4A8h] [rbp+3A8h] BYREF
  unsigned __int64 v1657; // [rsp+4B0h] [rbp+3B0h] BYREF
  SIZE_T v1658; // [rsp+4B8h] [rbp+3B8h] BYREF
  LPVOID v1659[2]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _DWORD *v1660; // [rsp+4D0h] [rbp+3D0h] BYREF
  __int128 v1661; // [rsp+4D8h] [rbp+3D8h]
  __int128 v1662; // [rsp+4E8h] [rbp+3E8h]
  _OWORD *v1663; // [rsp+500h] [rbp+400h] BYREF
  unsigned __int64 *v1664; // [rsp+510h] [rbp+410h] BYREF
  LPVOID lpMem[2]; // [rsp+518h] [rbp+418h] BYREF
  LPVOID v1666[3]; // [rsp+528h] [rbp+428h]
  _QWORD *v1667; // [rsp+540h] [rbp+440h] BYREF
  _OWORD *v1668; // [rsp+550h] [rbp+450h] BYREF
  _QWORD *v1669; // [rsp+560h] [rbp+460h] BYREF
  wchar_t **v1670; // [rsp+570h] [rbp+470h] BYREF
  void *v1671; // [rsp+580h] [rbp+480h] BYREF
  int *v1672; // [rsp+590h] [rbp+490h] BYREF
  _DWORD *v1673; // [rsp+5A0h] [rbp+4A0h] BYREF
  size_t v1674; // [rsp+5A8h] [rbp+4A8h] BYREF
  LPVOID v1675; // [rsp+5B0h] [rbp+4B0h]
  __int128 v1676; // [rsp+5B8h] [rbp+4B8h]
  __int128 v1677; // [rsp+5C8h] [rbp+4C8h] BYREF
  LPVOID v1678[3]; // [rsp+5D8h] [rbp+4D8h]
  _DWORD *v1679; // [rsp+5F0h] [rbp+4F0h] BYREF
  _QWORD v1680[2]; // [rsp+5F8h] [rbp+4F8h] BYREF
  int v1681; // [rsp+608h] [rbp+508h]
  unsigned int v1682; // [rsp+60Ch] [rbp+50Ch]
  int v1683; // [rsp+610h] [rbp+510h]
  _QWORD v1684[2]; // [rsp+618h] [rbp+518h] BYREF
  int v1685; // [rsp+628h] [rbp+528h]
  unsigned int v1686; // [rsp+62Ch] [rbp+52Ch]
  int v1687; // [rsp+630h] [rbp+530h]
  _BYTE v1688[24]; // [rsp+640h] [rbp+540h] BYREF
  __int64 v1689; // [rsp+658h] [rbp+558h]
  _BYTE v1690[4]; // [rsp+6B0h] [rbp+5B0h] BYREF
  int v1691; // [rsp+6B4h] [rbp+5B4h]
  int v1692; // [rsp+6B8h] [rbp+5B8h]
  __int16 v1693; // [rsp+6C2h] [rbp+5C2h]
  __int64 v1694; // [rsp+6C8h] [rbp+5C8h]
  _BYTE v1695[4]; // [rsp+720h] [rbp+620h] BYREF
  int v1696; // [rsp+724h] [rbp+624h]
  int v1697; // [rsp+728h] [rbp+628h]
  __int64 v1698; // [rsp+738h] [rbp+638h]
  _BYTE v1699[24]; // [rsp+790h] [rbp+690h] BYREF
  char *v1700; // [rsp+7A8h] [rbp+6A8h]
  _BYTE v1701[4]; // [rsp+800h] [rbp+700h] BYREF
  int v1702; // [rsp+804h] [rbp+704h]
  int v1703; // [rsp+808h] [rbp+708h]
  __int64 v1704; // [rsp+818h] [rbp+718h]
  _BYTE v1705[24]; // [rsp+870h] [rbp+770h] BYREF
  char *v1706; // [rsp+888h] [rbp+788h]
  _BYTE v1707[4]; // [rsp+8E0h] [rbp+7E0h] BYREF
  int v1708; // [rsp+8E4h] [rbp+7E4h]
  int v1709; // [rsp+8E8h] [rbp+7E8h]
  __int64 v1710; // [rsp+8F8h] [rbp+7F8h]
  _BYTE v1711[4]; // [rsp+950h] [rbp+850h] BYREF
  int v1712; // [rsp+954h] [rbp+854h]
  int v1713; // [rsp+958h] [rbp+858h]
  const WCHAR *v1714; // [rsp+968h] [rbp+868h]
  _BYTE v1715[24]; // [rsp+9C0h] [rbp+8C0h] BYREF
  __int64 v1716; // [rsp+9D8h] [rbp+8D8h]
  int v1717; // [rsp+A30h] [rbp+930h] BYREF
  int v1718; // [rsp+A34h] [rbp+934h]
  void *v1719; // [rsp+A38h] [rbp+938h]
  void *v1720; // [rsp+A40h] [rbp+940h]
  void *v1721; // [rsp+A48h] [rbp+948h]
  wchar_t *v1722; // [rsp+A50h] [rbp+950h]
  wchar_t *v1723; // [rsp+A58h] [rbp+958h]
  __int64 v1724; // [rsp+A60h] [rbp+960h]
  int v1725; // [rsp+A68h] [rbp+968h]
  __int128 v1726; // [rsp+A6Ch] [rbp+96Ch] BYREF
  __int128 v1727; // [rsp+A7Ch] [rbp+97Ch] BYREF
  unsigned int v1728; // [rsp+A8Ch] [rbp+98Ch] BYREF
  unsigned int v1729; // [rsp+A90h] [rbp+990h]
  unsigned int v1730; // [rsp+A94h] [rbp+994h]
  unsigned int v1731; // [rsp+A98h] [rbp+998h]
  unsigned __int64 v1732; // [rsp+AA0h] [rbp+9A0h]
  unsigned __int64 v1733; // [rsp+AA8h] [rbp+9A8h]
  __int64 v1734; // [rsp+AB0h] [rbp+9B0h]
  __int64 v1735; // [rsp+AB8h] [rbp+9B8h]
  __int128 v1736; // [rsp+AC0h] [rbp+9C0h] BYREF
  __int128 v1737; // [rsp+AD0h] [rbp+9D0h]
  __int128 v1738; // [rsp+AE0h] [rbp+9E0h] BYREF
  __int128 v1739; // [rsp+AF0h] [rbp+9F0h] BYREF
  __int64 v1740; // [rsp+B00h] [rbp+A00h] BYREF
  unsigned int v1741; // [rsp+B08h] [rbp+A08h]
  int v1742; // [rsp+B0Ch] [rbp+A0Ch]
  __int128 v1743; // [rsp+B10h] [rbp+A10h] BYREF
  char v1744[12]; // [rsp+B20h] [rbp+A20h] BYREF
  unsigned int v1745; // [rsp+B2Ch] [rbp+A2Ch]
  __int128 v1746; // [rsp+B40h] [rbp+A40h] BYREF
  __int128 v1747; // [rsp+B50h] [rbp+A50h] BYREF
  __int64 v1748; // [rsp+B60h] [rbp+A60h]
  __int128 v1749; // [rsp+B68h] [rbp+A68h] BYREF
  __int128 v1750; // [rsp+B78h] [rbp+A78h] BYREF
  __int64 v1751; // [rsp+B88h] [rbp+A88h]
  __int128 v1752; // [rsp+B90h] [rbp+A90h] BYREF
  __int128 v1753; // [rsp+BA0h] [rbp+AA0h]
  __int64 v1754; // [rsp+BB0h] [rbp+AB0h]
  int v1755; // [rsp+BB8h] [rbp+AB8h]
  __int128 v1756; // [rsp+BC0h] [rbp+AC0h] BYREF
  __int128 v1757; // [rsp+BD0h] [rbp+AD0h]
  __int64 v1758; // [rsp+BE0h] [rbp+AE0h]
  int v1759; // [rsp+BE8h] [rbp+AE8h]
  __int128 v1760; // [rsp+BF0h] [rbp+AF0h] BYREF
  __int128 v1761; // [rsp+C00h] [rbp+B00h]
  __int64 v1762; // [rsp+C10h] [rbp+B10h]
  int v1763; // [rsp+C18h] [rbp+B18h]
  __int128 v1764; // [rsp+C20h] [rbp+B20h] BYREF
  __int128 v1765; // [rsp+C30h] [rbp+B30h]
  __int64 v1766; // [rsp+C40h] [rbp+B40h]
  int v1767; // [rsp+C48h] [rbp+B48h]
  __int128 v1768; // [rsp+C50h] [rbp+B50h] BYREF
  __int128 v1769; // [rsp+C60h] [rbp+B60h]
  __int64 v1770; // [rsp+C70h] [rbp+B70h]
  int v1771; // [rsp+C78h] [rbp+B78h]
  _DWORD v1772[6]; // [rsp+C80h] [rbp+B80h] BYREF
  char v1773; // [rsp+C9Ah] [rbp+B9Ah]
  wchar_t v1774[34]; // [rsp+C9Ch] [rbp+B9Ch] BYREF
  _DWORD v1775[6]; // [rsp+CE0h] [rbp+BE0h] BYREF
  char v1776; // [rsp+CFAh] [rbp+BFAh]
  wchar_t v1777[34]; // [rsp+CFCh] [rbp+BFCh] BYREF
  _DWORD v1778[6]; // [rsp+D40h] [rbp+C40h] BYREF
  char v1779; // [rsp+D5Ah] [rbp+C5Ah]
  wchar_t v1780[34]; // [rsp+D5Ch] [rbp+C5Ch] BYREF
  _BYTE v1781[68]; // [rsp+DA0h] [rbp+CA0h] BYREF
  __int16 v1782; // [rsp+DE4h] [rbp+CE4h]
  unsigned __int16 v1783; // [rsp+E46h] [rbp+D46h]
  __int64 v1784; // [rsp+E4Ch] [rbp+D4Ch]
  _QWORD v1785[6]; // [rsp+E80h] [rbp+D80h] BYREF
  int v1786; // [rsp+EB0h] [rbp+DB0h] BYREF
  __int128 v1787; // [rsp+EB8h] [rbp+DB8h]
  __int128 v1788; // [rsp+EC8h] [rbp+DC8h]
  __int128 v1789; // [rsp+ED8h] [rbp+DD8h]
  __int64 v1790; // [rsp+EE8h] [rbp+DE8h]
  _QWORD v1791[20]; // [rsp+EF0h] [rbp+DF0h] BYREF
  _WORD v1792[8]; // [rsp+F90h] [rbp+E90h] BYREF
  _BYTE v1793[176]; // [rsp+FA0h] [rbp+EA0h] BYREF
  WCHAR Filename[264]; // [rsp+1050h] [rbp+F50h] BYREF

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopOptional>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopOptional>::GetImpl'::`2'::impl,
    a2);
  SystemInformation = 8;
  v2 = NtQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength) >= 0
    && (v1642 & 2) != 0
    || v1642 < 0;
  pvData = 0;
  pcbData[0] = 4;
  if ( v2
    && !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
          L"VirtualDesktopsEnabled",
          0x10u,
          0LL,
          &pvData,
          pcbData) )
  {
    v4 = pvData == 0;
    return !v4;
  }
  v1643 = 0LL;
  v1565 = 0;
  v1566 = 0;
  v1531 = 0LL;
  v1347 = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v6 = g_WarbirdSecureFunctionsRefCount;
  v1536 = -1;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_57;
  v1317 = 0;
  v7 = 0LL;
  v8 = (char *)MemoryAlloc(0x338uLL);
  v9 = v8;
  if ( !v8 )
    goto LABEL_25;
  v10 = (unsigned __int8 *)&unk_180697D32;
  v11 = -1;
  v12 = 0;
  v13 = v8 + 7;
  v14 = 0;
  v15 = 0;
  v16 = 103LL;
  do
  {
    v17 = *(v10 - 1) | (*(v10 - 2) << 8);
    v18 = v10[2] << 8;
    v19 = *v10;
    v10 += 8;
    v20 = *(v10 - 7) | ((v19 | (v17 << 8)) << 8);
    v21 = v20 ^ v15;
    v22 = *(v10 - 3) | ((*(v10 - 4) | ((*(v10 - 5) | v18) << 8)) << 8);
    v23 = v21 ^ v22 ^ v14 ^ 0xAC987321;
    v24 = (__ROL4__(v23, 10) + 4991 * __ROL4__(v23 + 1419157410, 5)) ^ v21;
    v25 = (43881 * __ROR4__(v24 + 133239679, 9) - __ROL4__(v24, 2)) ^ v23;
    v26 = (24670 * v25 - (v25 >> 13) - 123127970) ^ v24;
    v27 = (2033 * __ROL4__(v26 ^ 0xAB69, 6) - __ROL4__(v26, 2)) ^ v25;
    v28 = (133239679 - (v27 ^ 0xAB69605E)) ^ v26;
    v29 = (43881 * (v28 ^ 0x137F)) ^ __ROR4__(v28, 6) ^ v27;
    v30 = (__ROL4__(v29, 2) + 24670 * __ROR4__(v29 + 133239679, 15)) ^ v28;
    v31 = (2033 * __ROR4__(v30 + 1419157410, 14) - __ROL4__(v30, 8)) ^ v29;
    v32 = __ROR4__(v31, 10) ^ (4991 * __ROR4__(v31 ^ 0xAB69605E, 12)) ^ v30;
    v33 = v31 ^ (v32 >> 10) ^ (43881 * (v32 ^ 0x7F1));
    v34 = (2033 * (__ROR4__(~v33, 5) + 24670)) ^ v32;
    v35 = v33 ^ (v34 - 2033) ^ 0xAB69605E;
    v36 = ((v35 >> 2) + 4991 * __ROL4__(v33 ^ (v34 - 2033) ^ 0xAB6967AF, 2)) ^ v34;
    v37 = (__ROL4__(v36, 7) + 43881 * __ROR4__(v36 - 133239679, 6)) ^ v35;
    v38 = (24670 * (v37 ^ 0x137F) + __ROR4__(v37, 9)) ^ v36;
    v39 = (__ROL4__(v38, 7) + 2033 * __ROL4__(v38 ^ 0xAB69, 5)) ^ v37;
    v40 = v39 ^ v38 ^ 0xAC987321;
    v41 = (4991 * __ROR4__(v40, 3) - 219010071) ^ v39;
    v42 = (24670 * __ROR4__(v41 - 133239679, 1) - __ROR4__(v41, 6)) ^ v40;
    v43 = (__ROL4__(v42, 14) + 2033 * __ROL4__(v42 - 1419157410, 3)) ^ v41;
    v44 = (4991 * __ROL4__(v43 - 1419157410, 15) - __ROR4__(v43, 14)) ^ v42;
    v45 = (v44 >> 3) ^ (43881 * (v44 ^ 0x605E)) ^ v43;
    v46 = 24670 * __ROL4__(v45 ^ 0x7F1137F, 4);
    v47 = v45;
    v48 = v11 ^ v45;
    v11 = v22;
    v49 = v12 ^ __ROL4__(v47, 2) ^ v46;
    v12 = v20;
    v50 = v49 ^ v44;
    *(v13 - 4) = v50;
    *v13 = v48;
    v13 += 8;
    v51 = __ROR4__(v50, 8);
    *(v13 - 13) = v51;
    v52 = __ROR4__(v48, 8);
    *(v13 - 9) = v52;
    v53 = __ROR4__(v51, 8);
    *(v13 - 14) = v53;
    v54 = __ROR4__(v52, 8);
    *(v13 - 10) = v54;
    v55 = __ROR4__(v53, 8);
    v56 = __ROR4__(v54, 8);
    *(v13 - 15) = v55;
    *(v13 - 11) = v56;
    v14 = __ROR4__(v56, 8);
    v15 = __ROR4__(v55, 8);
    --v16;
  }
  while ( v16 );
  v57 = 0LL;
  v58 = 0;
  v7 = 0LL;
  v59 = 0;
  v60 = 0;
  do
    v58 ^= v9[v57++];
  while ( v57 < 0x338 );
  if ( v58 != 64LL )
  {
    MemoryFree(v9);
LABEL_25:
    v59 = -1073741702;
    goto LABEL_26;
  }
  v9[823] = 0;
  v7 = v9;
  v64 = (const WCHAR *)v9;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  if ( *v9 )
  {
    while ( 1 )
    {
      v65 = -1LL;
      v66 = v64;
      v59 = 0;
      do
        ++v65;
      while ( v64[v65] );
      v67 = &v64[v65];
      v68 = (char *)&WARBIRD::g_arModuleInfo + 24 * v60;
      if ( !GetModuleHandleExW(0, v66, (HMODULE *)v68) )
        break;
      if ( **(_WORD **)v68 == 23117
        && (v69 = *(int *)(*(_QWORD *)v68 + 60LL), (unsigned int)v69 < 0x10000000)
        && (v70 = *(_QWORD *)v68 + v69, v70 >= *(_QWORD *)v68)
        && *(_DWORD *)v70 == 17744 )
      {
        if ( ((*(_WORD *)(v70 + 24) - 267) & 0xFEFF) != 0 )
        {
          v59 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v68 + 12) = *(_QWORD *)(v70 + 136);
          *((_DWORD *)v68 + 2) = *(_DWORD *)(v70 + 80);
        }
      }
      else
      {
        v59 = -1073741701;
      }
      v71 = *(_DWORD *)(v67 + 1);
      v64 = v67 + 3;
      for ( i = 0; i < v71; ++i )
      {
        v73 = -1LL;
        v74 = (const CHAR *)v64;
        do
          ++v73;
        while ( *((_BYTE *)v64 + v73) );
        v64 = (const WCHAR *)((char *)v64 + v73 + 1);
        if ( v59 >= 0 )
        {
          ProcAddress = (void **)GetProcAddress(*(HMODULE *)v68, v74);
          if ( !ProcAddress )
            goto LABEL_26;
          (&WARBIRD::g_FuncAddress)[v1317] = ProcAddress;
        }
        ++v1317;
      }
      ++v60;
      if ( !*(_BYTE *)v64 )
        goto LABEL_26;
    }
    v59 = -1073741702;
LABEL_26:
    if ( !v7 )
      goto LABEL_28;
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v7);
LABEL_28:
  if ( v59 >= 0 )
  {
    v6 = g_WarbirdSecureFunctionsRefCount;
LABEL_57:
    g_WarbirdSecureFunctionsRefCount = v6 + 1;
    goto LABEL_58;
  }
  v62 = 4LL;
  v63 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  do
  {
    if ( *v63 )
      FreeLibrary(*v63);
    v63 += 3;
    --v62;
  }
  while ( v62 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_58:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  String1 = 0LL;
  v76 = 0;
  v1603 = 0LL;
  v77 = 0;
  if ( NtCurrentPeb()->SessionId )
  {
    v78 = ((__int64 (*)(void))off_1807A9210)();
    if ( !v78 )
      goto LABEL_68;
    v1604 = 0LL;
    v79 = 0LL;
    for ( j = 0LL; ; v1604 = j )
    {
      v81 = 0LL;
      if ( j )
        v81 = j;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1807A9230)(
                           v78,
                           2LL,
                           v81,
                           v79,
                           &v1568) )
      {
        String1 = j;
        goto LABEL_79;
      }
      LastError = GetLastError();
      if ( LastError != 122 )
        break;
      if ( j )
        goto LABEL_73;
      j = (wchar_t *)MemoryAlloc(v1568);
      if ( !j )
      {
        v77 = -2147024882;
LABEL_79:
        v1604 = 0LL;
        goto LABEL_80;
      }
      v79 = v1568;
    }
    if ( !LastError )
    {
LABEL_73:
      v77 = -2147467259;
      goto LABEL_80;
    }
    if ( LastError > 0 )
      v77 = (unsigned __int16)LastError | 0x80070000;
    else
      v77 = LastError;
LABEL_80:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1604);
    if ( v77 < 0 )
      goto LABEL_111;
    v84 = off_1807A9228;
    CurrentThreadId = GetCurrentThreadId();
    v86 = ((__int64 (__fastcall *)(_QWORD))v84)(CurrentThreadId);
    if ( !v86 )
    {
      v77 = GetLastError();
      v87 = v77 < 0;
      if ( v77 > 0 )
      {
        v77 = (unsigned __int16)v77 | 0x80070000;
        v87 = v77 < 0;
      }
      if ( !v87 )
        v77 = -2147467259;
      goto LABEL_111;
    }
    v1605 = 0LL;
    v77 = 0;
    v88 = 0LL;
    for ( k = 0LL; ; v1605 = k )
    {
      v90 = 0LL;
      if ( k )
        v90 = k;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1807A9230)(
                           v86,
                           2LL,
                           v90,
                           v88,
                           &v1555) )
      {
        v1603 = k;
        goto LABEL_101;
      }
      v91 = GetLastError();
      if ( v91 != 122 )
        break;
      if ( k )
        goto LABEL_95;
      k = (wchar_t *)MemoryAlloc(v1555);
      if ( !k )
      {
        v77 = -2147024882;
LABEL_101:
        v1605 = 0LL;
        goto LABEL_102;
      }
      v88 = v1555;
    }
    if ( !v91 )
    {
LABEL_95:
      v77 = -2147467259;
      goto LABEL_102;
    }
    if ( v91 > 0 )
      v77 = (unsigned __int16)v91 | 0x80070000;
    else
      v77 = v91;
LABEL_102:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1605);
    if ( v77 < 0 )
      goto LABEL_111;
    if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1603 && !wcscmp_0(v1603, L"Default") )
    {
      v1534 = 0;
      CurrentProcess = GetCurrentProcess();
      if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1534, 4LL) )
      {
        if ( (v1534 & 0xF) == 0 )
          v76 = 1;
        goto LABEL_110;
      }
LABEL_68:
      v77 = GetLastError();
      v83 = v77 < 0;
      if ( v77 > 0 )
      {
        v77 = (unsigned __int16)v77 | 0x80070000;
        v83 = v77 < 0;
      }
      if ( !v83 )
        v77 = -2147467259;
      goto LABEL_111;
    }
  }
LABEL_110:
  v1347 = v76;
LABEL_111:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1603);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&String1);
  v93 = 0;
  if ( v77 >= 0 )
    v93 = v1347;
  v1485 = v93;
  v94 = 4LL;
  v1527 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1531);
  if ( !v1527 )
  {
    v1531 = 0LL;
    v95 = -2147024882;
LABEL_115:
    v96 = v1534;
    goto LABEL_116;
  }
  v1531 = (SIZE_T)v1527;
  v1329 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  v100 = 0LL;
  *(_OWORD *)v1666 = 0LL;
  v101 = GetProcessHeap();
  v1355 = 3LL;
  v102 = (WCHAR *)HeapAlloc(v101, 8u, 0xA0uLL);
  v95 = -1073741801;
  if ( !v102 )
  {
    v1497 = -1073741801;
    v103 = v93;
LABEL_130:
    v94 = 4LL;
    goto LABEL_237;
  }
  lpModuleName = v102;
  *(_OWORD *)v102 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
  *((_OWORD *)v102 + 1) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
  *((_OWORD *)v102 + 2) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
  *((_OWORD *)v102 + 3) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
  *((_OWORD *)v102 + 4) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
  *((_OWORD *)v102 + 5) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
  *((_OWORD *)v102 + 6) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
  *((_OWORD *)v102 + 7) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
  *((_OWORD *)v102 + 8) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
  *((_OWORD *)v102 + 9) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
  v104 = GetProcessHeap();
  v105 = HeapAlloc(v104, 8u, 8uLL);
  v106 = v105;
  if ( !v105 )
    goto LABEL_144;
  *v105 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v1329 = (wchar_t *)v105;
  v1465 = (wchar_t *)__rdtsc();
  v1569 = 0;
  v1497 = RtlUIntAdd(4LL, 4LL, &v1570);
  v95 = v1497;
  if ( v1497 < 0 )
  {
    v103 = v93;
    goto LABEL_617;
  }
  v108 = RtlUIntAdd(0LL, v1570, &v1569);
  v95 = v108 | 0x10000000;
  v103 = v93;
  v1497 = v108 | 0x10000000;
  if ( v108 < 0 )
    goto LABEL_142;
  v1497 = RtlUIntAdd((unsigned int)v109, 160LL, &v1580);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_617;
  v110 = RtlUIntAdd(v1569, v1580, &v1569);
  v95 = v112 | v110;
  v1497 = v112 | v110;
  if ( (v112 | v110) < 0 )
    goto LABEL_142;
  v1497 = RtlUIntAdd((unsigned int)v109, (unsigned int)(v111 + 8), &v1592);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_617;
  v113 = RtlUIntAdd(v1569, v1592, &v1569);
  v95 = v115 | v113;
  v1497 = v115 | v113;
  if ( (v115 | v113) < 0 )
    goto LABEL_142;
  v1497 = RtlUIntAdd((unsigned int)v109, (unsigned int)(v114 + 8), &v1593);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_617;
  v116 = RtlUIntAdd(v1569, v1593, &v1569);
  v95 = v118 | v116;
  v1497 = v118 | v116;
  if ( (v118 | v116) < 0 )
  {
LABEL_142:
    v100 = v102;
    v94 = v109;
    goto LABEL_237;
  }
  if ( StringCchLengthW(L"Shell-VirtualDesktop-Enabled", v117, &pcchLength) < 0 )
  {
    v95 = -1073741762;
    v1497 = -1073741762;
    goto LABEL_142;
  }
  v1497 = RtlUIntAdd((unsigned int)v109, (unsigned int)(2 * ++pcchLength), &v1594);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_617;
  v119 = RtlUIntAdd(v1569, v1594, &v1569);
  v95 = v119 | 0x10000000;
  v1497 = v119 | 0x10000000;
  if ( v119 < 0 )
    goto LABEL_142;
  v1497 = RtlUIntAdd((unsigned int)v109, (unsigned int)v109, &v1595);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_617;
  v120 = RtlUIntAdd(v1569, v1595, &v1569);
  v95 = v121 | v120;
  v1497 = v121 | v120;
  if ( (v121 | v120) < 0 )
    goto LABEL_142;
  v1497 = RtlUIntAdd((unsigned int)v109, (unsigned int)v109, &v1596);
  v95 = v1497;
  if ( v1497 < 0 )
  {
LABEL_617:
    v100 = v102;
    v94 = v107;
    goto LABEL_237;
  }
  v122 = RtlUIntAdd(v1569, v1596, &v1569);
  v95 = v123 | v122;
  v1497 = v123 | v122;
  if ( (v123 | v122) < 0 )
    goto LABEL_142;
  HIDWORD(lpMem[0]) = v1569;
  v124 = v1569;
  v125 = GetProcessHeap();
  v126 = HeapAlloc(v125, 8u, v124);
  v127 = v126;
  if ( !v126 )
  {
    v95 = -1073741801;
    goto LABEL_144;
  }
  lpMem[1] = v126;
  LODWORD(lpMem[0]) = 0;
  v1497 = RtlULongLongAdd(v126, 4LL, &v1660);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_145;
  if ( v127 + 2 > (_DWORD *)((char *)v127 + HIDWORD(lpMem[0])) )
    goto LABEL_143;
  v129 = v1660;
  *v127 = 4;
  *v129 = (_DWORD)v128;
  v130 = ++LODWORD(lpMem[0]);
  if ( lpMem[1] == v128 )
  {
    v94 = 4LL;
    v1497 = RtlUIntAdd(4LL, 160LL, &v1598);
    v95 = v1497;
    if ( v1497 < 0 )
      goto LABEL_173;
    v131 = RtlUIntAdd(HIDWORD(lpMem[0]), v1598, (char *)lpMem + 4);
    v133 = (int)lpMem[0];
    v95 = v131;
    v1497 = v131;
    if ( v131 < 0 )
      goto LABEL_159;
LABEL_170:
    LODWORD(lpMem[0]) = ++v133;
    goto LABEL_160;
  }
  v141 = (unsigned int *)lpMem[1];
  v1607 = (unsigned int *)lpMem[1];
  if ( v130 )
  {
    do
    {
      v1497 = RtlUIntAdd(4LL, *v141, &v1599);
      v95 = v1497;
      if ( v1497 < 0 )
        goto LABEL_145;
      v1497 = RtlULongLongAdd(v141, v1599, &v1607);
      v95 = v1497;
      if ( v1497 < 0 )
        goto LABEL_145;
      v141 = v1607;
    }
    while ( v142 + 1 < v143 );
  }
  v1497 = RtlULongLongAdd(v141, 4LL, &v1668);
  v95 = v1497;
  if ( v1497 >= 0 )
  {
    if ( v141 + 41 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
    {
      v140 = v1668;
      *v141 = 160;
      *v140 = *(_OWORD *)v102;
      v140[1] = *((_OWORD *)v102 + 1);
      v140[2] = *((_OWORD *)v102 + 2);
      v140[3] = *((_OWORD *)v102 + 3);
      v140[4] = *((_OWORD *)v102 + 4);
      v140[5] = *((_OWORD *)v102 + 5);
      v140[6] = *((_OWORD *)v102 + 6);
      v140[7] = *((_OWORD *)v102 + 7);
      v140[8] = *((_OWORD *)v102 + 8);
      v140[9] = *((_OWORD *)v102 + 9);
      v133 = (int)lpMem[0];
      goto LABEL_170;
    }
LABEL_143:
    v95 = -1073741789;
LABEL_144:
    v1497 = v95;
LABEL_145:
    v100 = v102;
    v103 = v93;
    v94 = 4LL;
    goto LABEL_237;
  }
LABEL_159:
  v103 = v93;
  if ( v95 < 0 )
    goto LABEL_235;
LABEL_160:
  v94 = 4LL;
  if ( lpMem[1] == v132 )
  {
    v1497 = RtlUIntAdd(4LL, 8LL, &v1600);
    v95 = v1497;
    if ( v1497 < 0 )
      goto LABEL_173;
    v134 = RtlUIntAdd(HIDWORD(lpMem[0]), v1600, (char *)lpMem + 4);
    v136 = (int)lpMem[0];
    v95 = v134;
    v1497 = v134;
    if ( v134 < 0 )
      goto LABEL_163;
LABEL_182:
    LODWORD(lpMem[0]) = ++v136;
    goto LABEL_164;
  }
  v145 = (unsigned int *)lpMem[1];
  v1608 = (unsigned int *)lpMem[1];
  if ( v133 )
  {
    do
    {
      v1497 = RtlUIntAdd(4LL, *v145, &v1601);
      v95 = v1497;
      if ( v1497 < 0 )
        goto LABEL_173;
      v1497 = RtlULongLongAdd(v145, v1601, &v1608);
      v95 = v1497;
      if ( v1497 < 0 )
        goto LABEL_173;
      v145 = v1608;
    }
    while ( v146 + 1 < v147 );
  }
  v1497 = RtlULongLongAdd(v145, 4LL, &v1669);
  v95 = v1497;
  if ( v1497 >= 0 )
  {
    if ( v145 + 3 > (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
      goto LABEL_171;
    v144 = v1669;
    *v145 = 8;
    *v144 = *v106;
    v136 = (int)lpMem[0];
    goto LABEL_182;
  }
LABEL_163:
  v103 = v93;
  if ( v95 < 0 )
    goto LABEL_235;
LABEL_164:
  if ( lpMem[1] == v135 )
  {
    v1497 = RtlUIntAdd(4LL, 8LL, &v1538);
    v95 = v1497;
    if ( v1497 >= 0 )
    {
      v137 = RtlUIntAdd(HIDWORD(lpMem[0]), v1538, (char *)lpMem + 4);
      v139 = (int)lpMem[0];
      v95 = v137;
      v1497 = v137;
      if ( v137 < 0 )
        goto LABEL_167;
LABEL_190:
      LODWORD(lpMem[0]) = v139 + 1;
      goto LABEL_168;
    }
LABEL_173:
    v103 = v93;
LABEL_236:
    v100 = (WCHAR *)lpModuleName;
    goto LABEL_237;
  }
  v149 = (unsigned int *)lpMem[1];
  v1609 = (unsigned int *)lpMem[1];
  if ( v136 )
  {
    do
    {
      v1497 = RtlUIntAdd(4LL, *v149, &v1539);
      v95 = v1497;
      if ( v1497 < 0 )
        goto LABEL_173;
      v1497 = RtlULongLongAdd(v149, v1539, &v1609);
      v95 = v1497;
      if ( v1497 < 0 )
        goto LABEL_173;
      v149 = v1609;
    }
    while ( v150 + 1 < v151 );
  }
  v1497 = RtlULongLongAdd(v149, 4LL, &v1670);
  v95 = v1497;
  if ( v1497 >= 0 )
  {
    if ( v149 + 3 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
    {
      v148 = v1670;
      *v149 = 8;
      *v148 = v1465;
      v139 = (int)lpMem[0];
      goto LABEL_190;
    }
LABEL_171:
    v95 = -1073741789;
    goto LABEL_172;
  }
LABEL_167:
  v103 = v93;
  if ( v95 < 0 )
    goto LABEL_235;
LABEL_168:
  if ( StringCchLengthW(L"Shell-VirtualDesktop-Enabled", v138, &v1610) < 0 )
  {
    v95 = -1073741762;
LABEL_172:
    v1497 = v95;
    goto LABEL_173;
  }
  v1497 = RtlULongLongAdd(v1610, 1LL, &v1610);
  v95 = v1497;
  if ( v1497 >= 0 )
  {
    if ( 2 * (_DWORD)v1610 )
    {
      if ( lpMem[1] == v153 )
      {
        v1497 = RtlUIntAdd(4LL, (unsigned int)(2 * v1610), &v1561);
        v95 = v1497;
        if ( v1497 >= 0 )
        {
          v154 = RtlUIntAdd(HIDWORD(lpMem[0]), v1561, (char *)lpMem + 4);
          v152 = (unsigned int)lpMem[0];
          v95 = v154;
          v1497 = v154;
          if ( v154 >= 0 )
          {
            v152 = LODWORD(lpMem[0]) + 1;
            v1497 = (int)v153;
            ++LODWORD(lpMem[0]);
            v95 = (int)v153;
          }
        }
      }
      else
      {
        v155 = lpMem[1];
        v1611 = lpMem[1];
        if ( v152 )
        {
          while ( 1 )
          {
            v1497 = RtlUIntAdd(4LL, (unsigned int)*v155, &v1540);
            v95 = v1497;
            if ( v1497 < 0 )
              break;
            v1497 = RtlULongLongAdd(v155, v1540, &v1611);
            v95 = v1497;
            if ( v1497 < 0 )
              break;
            v155 = v1611;
            if ( v156 + 1 >= v152 )
              goto LABEL_208;
          }
        }
        else
        {
LABEL_208:
          v157 = RtlULongLongAdd(v155, 4LL, &v1671);
          v153 = 0LL;
          v1497 = v157;
          v95 = v157;
          if ( v157 < 0 )
            goto LABEL_214;
          if ( (char *)v155 + v158 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
          {
            v95 = -1073741789;
            v1497 = -1073741789;
            goto LABEL_214;
          }
          v159 = v1671;
          *v155 = v158;
          memcpy_0(v159, L"Shell-VirtualDesktop-Enabled", (unsigned int)v158);
          v152 = ++LODWORD(lpMem[0]);
        }
        v153 = 0LL;
      }
    }
    else
    {
      v95 = -1073741811;
      v1497 = -1073741811;
    }
  }
LABEL_214:
  v103 = v93;
  if ( v95 < 0 )
    goto LABEL_235;
  if ( lpMem[1] == v153 )
  {
    v1497 = RtlUIntAdd(4LL, 4LL, &v1541);
    v95 = v1497;
    if ( v1497 >= 0 )
    {
      v161 = RtlUIntAdd(HIDWORD(lpMem[0]), v1541, (char *)lpMem + 4);
      v163 = (int)lpMem[0];
      v95 = v161;
      v1497 = v161;
      if ( v161 < 0 )
        goto LABEL_218;
LABEL_224:
      LODWORD(lpMem[0]) = ++v163;
      goto LABEL_219;
    }
LABEL_226:
    v94 = v160;
    goto LABEL_236;
  }
  v165 = (unsigned int *)lpMem[1];
  v1612 = (unsigned int *)lpMem[1];
  if ( v152 )
  {
    while ( 1 )
    {
      v1497 = RtlUIntAdd(4LL, *v165, &v1542);
      v95 = v1497;
      if ( v1497 < 0 )
        break;
      v1497 = RtlULongLongAdd(v165, v1542, &v1612);
      v95 = v1497;
      if ( v1497 < 0 )
        goto LABEL_234;
      v165 = v1612;
      if ( v166 + 1 >= v167 )
        goto LABEL_231;
    }
    v103 = v93;
    goto LABEL_226;
  }
LABEL_231:
  v1497 = RtlULongLongAdd(v165, 4LL, &v1672);
  v95 = v1497;
  if ( v1497 >= 0 )
  {
    if ( v165 + 2 > (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
    {
LABEL_233:
      v95 = -1073741789;
      v1497 = -1073741789;
LABEL_234:
      v103 = v93;
      goto LABEL_235;
    }
    v164 = v1672;
    *v165 = 4;
    *v164 = v93;
    v163 = (int)lpMem[0];
    goto LABEL_224;
  }
LABEL_218:
  v103 = v93;
  if ( v95 < 0 )
    goto LABEL_235;
LABEL_219:
  if ( lpMem[1] == v162 )
  {
    v94 = 4LL;
    v1497 = RtlUIntAdd(4LL, 4LL, &v1543);
    v95 = v1497;
    if ( v1497 < 0 )
      goto LABEL_173;
    v1497 = RtlUIntAdd(HIDWORD(lpMem[0]), v1543, (char *)lpMem + 4);
    v95 = v1497;
    if ( v1497 >= 0 )
    {
      ++LODWORD(lpMem[0]);
      goto LABEL_262;
    }
    goto LABEL_261;
  }
  v176 = (unsigned int *)lpMem[1];
  v1613 = (unsigned int *)lpMem[1];
  if ( v163 )
  {
    do
    {
      v1497 = RtlUIntAdd(4LL, *v176, &v1544);
      v95 = v1497;
      if ( v1497 < 0 )
        goto LABEL_234;
      v1497 = RtlULongLongAdd(v176, v1544, &v1613);
      v95 = v1497;
      if ( v1497 < 0 )
        goto LABEL_234;
      v176 = v1613;
    }
    while ( v177 + 1 < v178 );
  }
  v1497 = RtlULongLongAdd(v176, 4LL, &v1673);
  v95 = v1497;
  if ( v1497 >= 0 )
  {
    if ( v176 + 2 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
    {
      v179 = v1673;
      v94 = 4LL;
      *v176 = 4;
      *v179 = 4;
      ++LODWORD(lpMem[0]);
      goto LABEL_262;
    }
    goto LABEL_233;
  }
  v94 = 4LL;
LABEL_261:
  v103 = v93;
  if ( v95 < 0 )
    goto LABEL_235;
LABEL_262:
  v1497 = RtlUIntAdd(4LL, 4LL, &v1545);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_173;
  v181 = v1545;
  v1546 = v1545;
  v1497 = RtlUIntAdd(v180, 8LL, &v1547);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_173;
  v1497 = RtlUIntAdd(v181, v1547, &v1546);
  v95 = v1497;
  if ( v1497 >= 0 )
  {
    v1497 = RtlUIntAdd(4LL, 4LL, &v1548);
    v95 = v1497;
    if ( v1497 < 0 )
      goto LABEL_173;
    v1497 = RtlUIntAdd(v1546, v1548, &v1546);
    v95 = v1497;
    if ( v1497 >= 0 )
    {
      v1497 = RtlUIntAdd(4LL, 4LL, &v1567);
      v95 = v1497;
      if ( v1497 < 0 )
        goto LABEL_173;
      v1497 = RtlUIntAdd(v1546, v1567, &v1546);
      v95 = v1497;
      if ( v1497 >= 0 )
      {
        v1497 = RtlUIntAdd(4LL, 4LL, &v1549);
        v95 = v1497;
        if ( v1497 < 0 )
          goto LABEL_173;
        v1497 = RtlUIntAdd(v1546, v1549, &v1546);
        v95 = v1497;
        if ( v1497 >= 0 )
        {
          v1497 = RtlUIntAdd(4LL, 4LL, &v1535);
          v95 = v1497;
          if ( v1497 < 0 )
            goto LABEL_173;
          v1497 = RtlUIntAdd(v1546, v1535, &v1546);
          v95 = v1497;
          if ( v1497 >= 0 )
          {
            v1318 = v1546;
            goto LABEL_276;
          }
        }
      }
    }
  }
  v103 = v93;
  if ( v95 < 0 )
  {
LABEL_235:
    v94 = 4LL;
    goto LABEL_236;
  }
  v1318 = v1535;
LABEL_276:
  v183 = v182;
  v1399 = v182;
  v1454 = (LPCWSTR)v182;
  v184 = (unsigned __int8 *)v182;
  v185 = (unsigned int)v182;
  v1537 = v182;
  v1348 = (int)v182;
  v186 = (unsigned int *)v182;
  v1562 = v182;
  v1514 = v182;
  v1412 = (LPVOID)__rdtsc();
  v1550 = 8;
  v188 = RtlUIntAdd(8LL, HIDWORD(lpMem[0]), &v1550);
  if ( v188 >= 0 )
  {
    v189 = (v1550 + 7) & 0xFFFFFFF8;
    if ( v189 < v1550 )
    {
      v95 = -805306219;
LABEL_280:
      v103 = v1485;
      v1497 = v95;
      goto LABEL_235;
    }
    v1550 = (v1550 + 7) & 0xFFFFFFF8;
    v190 = v189;
    v191 = GetProcessHeap();
    v192 = HeapAlloc(v191, 8u, v190);
    if ( !v192 )
    {
      v95 = -805306345;
      goto LABEL_280;
    }
    v1614[0] = v192;
    *v192 = lpMem[0];
    v188 = RtlULongLongAdd(v192, 4LL, v1614);
    if ( v188 < 0
      || (v194 = v1614[0], *(_DWORD *)v1614[0] = HIDWORD(lpMem[0]), v188 = RtlULongLongAdd(v194, v193, v1614), v188 < 0) )
    {
      v195 = GetProcessHeap();
      HeapFree(v195, 0, v192);
      v185 = (unsigned int)v183;
    }
    else
    {
      *(_QWORD *)((char *)v192 + v1550 - 8) = v1412;
      memcpy_0(v1614[0], lpMem[1], HIDWORD(lpMem[0]));
      v184 = (unsigned __int8 *)v192;
      v1399 = (const void **)v192;
      v185 = v1550;
    }
    v187 = 0LL;
  }
  v95 = v188 | 0x10000000;
  v1497 = v95;
  if ( v95 < 0 )
    goto LABEL_366;
  v1413 = v187;
  if ( !v184 )
  {
    v95 = -805306355;
    goto LABEL_280;
  }
  v196 = v185;
  v1489 = v185;
  if ( v185 )
  {
    Size = v185 + 8;
    Src = MemoryAlloc(v185 + 8LL);
    if ( Src )
    {
      v197 = 0;
      for ( m = 0LL; m < v185; ++m )
        v197 ^= v184[m];
      v1302 = v197;
      v199 = Src;
      v1732 = 0xC81ECB17B1B54A58uLL;
      v200 = -1;
      v1498 = 0;
      v1474 = 0;
      v201 = v184;
      v202 = 0;
      v203 = v196 & 7;
      if ( (v196 & 7) != 0 )
      {
        v204 = 0;
        v205 = 0;
        v1304 = 0;
        v206 = 56;
        do
        {
          v207 = *v201++;
          if ( v204 >= 4 )
            v205 |= v207 << v206;
          else
            v202 |= v207 << (v206 - 32);
          v206 -= 8;
          v204 = v1304 + 1;
          v1498 = v205;
          v1474 = v202;
          v1304 = v204;
        }
        while ( (int)v204 < (int)v203 );
        v202 ^= 0xB17A307A;
        v208 = Src;
        v209 = v205 ^ 0x42F6B18D;
        v210 = 0;
        v1399 = (const void **)v184;
        v211 = v202;
        v212 = v209;
        do
        {
          v1373 = (SIZE_T)(v208 + 1);
          if ( v210 >= 4 )
          {
            v212 = __ROL4__(v212, 8);
            v213 = v212;
          }
          else
          {
            v211 = __ROL4__(v211, 8);
            v213 = v211;
          }
          *v208 = v213;
          ++v210;
          ++v208;
        }
        while ( (int)v210 < (int)v203 );
        v199 = (_BYTE *)v1373;
        v183 = (const void **)v1454;
        v186 = (unsigned int *)v1454;
        if ( v203 <= 4 )
        {
          v200 = 0;
          if ( v203 >= 4 )
            goto LABEL_310;
          v202 = v202 >> (8 * (4 - v203)) << (8 * (4 - v203));
        }
        else
        {
          v200 = v209 >> (8 * (8 - v203)) << (8 * (8 - v203));
        }
        v199 = (_BYTE *)v1373;
      }
LABEL_310:
      v214 = v196 >> 3;
      if ( v196 >> 3 )
      {
        v215 = v199 + 7;
        v216 = WORD2(v1732);
        v217 = v1498;
        v218 = v1474;
        v1305 = WORD1(v1732);
        v219 = v201 + 2;
        do
        {
          v220 = *(v219 - 1) | (*(v219 - 2) << 8);
          v221 = v219[2] << 8;
          v222 = *v219;
          v219 += 8;
          v223 = *(v219 - 7) | ((v222 | (v220 << 8)) << 8);
          v224 = *(v219 - 3) | ((*(v219 - 4) | ((*(v219 - 5) | v221) << 8)) << 8);
          v225 = v224 ^ v200;
          v226 = v223 ^ HIDWORD(v1732) ^ (v225 - 19032) ^ v202;
          v227 = (__ROR4__(v226, 7) + WORD1(v1732) * __ROR4__(v226 ^ HIDWORD(v1732), 15)) ^ v225;
          v228 = (v216 * __ROR4__(v227 - 1313519016, 9) - __ROR4__(v227, 10)) ^ v226;
          v229 = (__ROL4__(v228, 5) + HIWORD(v1732) * __ROL4__(v228 ^ v216, 4)) ^ v227;
          v230 = (HIDWORD(v1732) - (v229 ^ 0xB1B54A58)) ^ v228;
          v231 = (WORD1(v1732) * (v230 - 19032) - (v230 >> 6)) ^ v229;
          v232 = (19032 * (v216 ^ __ROR4__(v231, 15))) ^ v230;
          v233 = (v216 * (HIWORD(v1732) + __ROR4__(~v232, 3))) ^ v231;
          v234 = (v233 - 19032 - HIDWORD(v1732)) ^ v232;
          v235 = (v1305 * (v234 ^ HIWORD(v1732))) ^ __ROR4__(v234, 10) ^ v233;
          v236 = __ROR4__(v235, 3) ^ (v216 * __ROL4__(v235 ^ 0x4A58, 6)) ^ v234;
          v237 = (19032 * (__ROR4__(v236, 15) - HIWORD(v1732))) ^ v235;
          v238 = (v237 >> 15) ^ (19032 * __ROL4__(v237 - v216, 3)) ^ (v237 >> 1) ^ (19032 * (v237 ^ HIWORD(v1732))) ^ v236;
          v239 = (WORD1(v1732) * (v238 - v216) - (v238 >> 13)) ^ v237;
          v240 = __ROR4__(v239, 11) ^ (v216 * __ROR4__(-1313519016 - v239, 9)) ^ v238;
          v241 = (v240 - HIWORD(v1732) + 1313519016) ^ v239;
          v242 = (19032 * (v241 ^ WORD1(v1732)) - __ROR4__(v241, 7)) ^ v240;
          v243 = (WORD1(v1732) * __ROL4__(v242 ^ HIWORD(v1732), 4) - __ROR4__(v242, 16)) ^ v241;
          v244 = (__ROR4__(v243, 4) + v216 * __ROR4__(-1313519016 - v243, 10)) ^ v242;
          v245 = __ROR4__(v244, 9) ^ (HIWORD(v1732) * __ROR4__(v244 + 1313519016, 4)) ^ v243;
          v246 = (19032 * __ROL4__(v245 ^ HIDWORD(v1732), 8) - __ROL4__(v245, 2)) ^ v244;
          v247 = (WORD1(v1732) * __ROR4__(HIDWORD(v1732) - v246, 11) - __ROR4__(v246, 12)) ^ v245;
          v248 = (v247 >> 8) ^ (v216 * (v247 ^ WORD1(v1732))) ^ v246;
          v249 = v248 ^ HIDWORD(v1732) ^ 0xB1B54A58;
          v250 = v218 ^ v248;
          *(v215 - 4) = v250;
          v251 = v217 ^ v249 ^ v247;
          v252 = __ROR4__(v250, 8);
          *v215 = v251;
          v218 = v223;
          *(v215 - 5) = v252;
          v215 += 8;
          v253 = __ROR4__(v251, 8);
          v217 = v224;
          *(v215 - 9) = v253;
          v254 = __ROR4__(v252, 8);
          *(v215 - 14) = v254;
          v255 = __ROR4__(v253, 8);
          *(v215 - 10) = v255;
          v256 = __ROR4__(v254, 8);
          v257 = __ROR4__(v255, 8);
          *(v215 - 15) = v256;
          *(v215 - 11) = v257;
          v200 = __ROR4__(v257, 8);
          v202 = __ROR4__(v256, 8);
          --v214;
        }
        while ( v214 );
        v183 = (const void **)v1454;
        v197 = v1302;
        v186 = (unsigned int *)v1454;
        v184 = (unsigned __int8 *)v1399;
        v196 = v1489;
      }
      *(_QWORD *)&Src[v196] = v197;
      v1614[3] = (void *)8;
      v1614[4] = (void *)160;
      v258 = GetProcessHeap();
      v259 = (unsigned int *)HeapAlloc(v258, 8u, 0x30uLL);
      v260 = v259;
      if ( v259 )
      {
        *v259 = Size;
        v272 = GetProcessHeap();
        v273 = HeapAlloc(v272, 8u, Size);
        if ( v273 )
        {
          *((_QWORD *)v260 + 1) = v273;
          memcpy_0(v273, Src, Size);
          v260[4] = 160;
          v274 = GetProcessHeap();
          v275 = HeapAlloc(v274, 8u, 0xA0uLL);
          v261 = 0;
          if ( v275 )
          {
            *((_QWORD *)v260 + 3) = v275;
            *v275 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
            v275[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
            v275[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
            v275[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
            v275[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
            v275[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
            v275[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
            v275[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
            v275[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
            v275[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
            v260[8] = 8;
            v276 = GetProcessHeap();
            v277 = HeapAlloc(v276, 8u, 8uLL);
            if ( v277 )
            {
              *((_QWORD *)v260 + 5) = v277;
              *v277 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
              v183 = (const void **)v260;
              v262 = 0LL;
LABEL_317:
              v263 = GetProcessHeap();
              HeapFree(v263, 0, Src);
              if ( v262 )
              {
                v1374 = (void *)v262[1];
                if ( v1374 )
                {
                  v264 = GetProcessHeap();
                  HeapFree(v264, 0, v1374);
                  v262[1] = 0LL;
                }
                v1375 = (void *)v262[3];
                if ( v1375 )
                {
                  v265 = GetProcessHeap();
                  HeapFree(v265, 0, v1375);
                  v262[3] = 0LL;
                }
                v1376 = (void *)v262[5];
                if ( v1376 )
                {
                  v266 = GetProcessHeap();
                  HeapFree(v266, 0, v1376);
                  v262[5] = 0LL;
                }
                v267 = GetProcessHeap();
                HeapFree(v267, 0, v262);
              }
              v95 = v261 | 0x10000000;
              v1497 = v95;
              if ( v95 < 0 )
                goto LABEL_366;
              v268 = *(unsigned int *)v183;
              LODWORD(v1551) = 4;
              v270 = RtlUIntAdd(4LL, v268, &v1551);
              if ( v270 >= 0 )
              {
                v270 = RtlUIntAdd((unsigned int)v1551, v269, &v1551);
                if ( v270 >= 0 )
                {
                  v270 = RtlUIntAdd((unsigned int)v1551, *((unsigned int *)v183 + 4), &v1551);
                  if ( v270 >= 0 )
                  {
                    v270 = RtlUIntAdd((unsigned int)v1551, v271, &v1551);
                    if ( v270 >= 0 )
                    {
                      v270 = RtlUIntAdd((unsigned int)v1551, *((unsigned int *)v183 + 8), &v1551);
                      if ( v270 >= 0 )
                      {
                        v1306 = v1551;
                        v282 = v1551;
                        v283 = GetProcessHeap();
                        v284 = HeapAlloc(v283, 8u, v282);
                        v285 = v284;
                        if ( !v284 )
                          goto LABEL_416;
                        v1615 = v284;
                        *v284 = *(_DWORD *)v183;
                        v270 = RtlULongLongAdd(v284, 4LL, &v1615);
                        if ( v270 >= 0 )
                        {
                          memcpy_0(v1615, v183[1], *(unsigned int *)v183);
                          v270 = RtlULongLongAdd(v1615, *(unsigned int *)v183, &v1615);
                          if ( v270 >= 0 )
                          {
                            v286 = v1615;
                            *(_DWORD *)v1615 = *((_DWORD *)v183 + 4);
                            v270 = RtlULongLongAdd(v286, 4LL, &v1615);
                            if ( v270 >= 0 )
                            {
                              memcpy_0(v1615, v183[3], *((unsigned int *)v183 + 4));
                              v270 = RtlULongLongAdd(v1615, *((unsigned int *)v183 + 4), &v1615);
                              if ( v270 >= 0 )
                              {
                                v287 = v1615;
                                *(_DWORD *)v1615 = *((_DWORD *)v183 + 8);
                                v270 = RtlULongLongAdd(v287, 4LL, &v1615);
                                if ( v270 >= 0 )
                                {
                                  memcpy_0(v1615, v183[5], *((unsigned int *)v183 + 8));
                                  v270 = RtlULongLongAdd(v1615, *((unsigned int *)v183 + 8), &v1615);
                                  if ( v270 >= 0 )
                                  {
                                    v1348 = v1306;
                                    v1537 = v285;
                                    goto LABEL_354;
                                  }
                                }
                              }
                            }
                          }
                        }
                        v288 = GetProcessHeap();
                        HeapFree(v288, 0, v285);
                      }
                    }
                  }
                }
              }
              v285 = v1537;
LABEL_354:
              v95 = v270 | 0x10000000;
              v1497 = v95;
              if ( v95 < 0 )
                goto LABEL_366;
              v1552 = 8;
              v289 = RtlUIntAdd(8LL, v1318, &v1552);
              v95 = v291 | v289;
              v1497 = v291 | v289;
              if ( (v291 | v289) >= 0 )
              {
                v292 = (v1552 + 7) & 0xFFFFFFF8;
                if ( v292 < v1552 )
                {
                  v95 = -1073741675;
LABEL_410:
                  v1497 = v95;
                  goto LABEL_366;
                }
                v1553 = (v1552 + 7) & 0xFFFFFFF8;
                v1497 = RtlUIntAdd(v292, v290, &v1553);
                v95 = v1497;
                if ( v1497 < 0 )
                  goto LABEL_366;
                if ( !lpMem[1] || LODWORD(lpMem[0]) <= 1 )
                {
                  v95 = -1073741811;
                  goto LABEL_410;
                }
                v1616 = (unsigned int *)lpMem[1];
                v1497 = RtlULongLongAdd(lpMem[1], 4LL, &v1616);
                v95 = v1497;
                if ( v1497 >= 0 )
                {
                  v1497 = RtlULongLongAdd(v1616, v293, &v1616);
                  v95 = v1497;
                  if ( v1497 >= 0 )
                  {
                    v1307 = *v1616;
                    v95 = RtlULongLongAdd(v1616, 4LL, &v1616);
                    v1497 = v95;
                    if ( v95 >= 0 )
                    {
                      if ( LODWORD(lpMem[0]) > 2 )
                      {
                        v315 = lpMem[1];
                        v1617 = lpMem[1];
                        v1537 = v285;
                        v1348 = v294;
                        while ( 1 )
                        {
                          v1497 = RtlULongLongAdd(v315, 4LL, &v1617);
                          v95 = v1497;
                          if ( v1497 < 0 )
                            break;
                          v1497 = RtlULongLongAdd(v1617, v316, &v1617);
                          v95 = v1497;
                          if ( v1497 < 0 )
                            break;
                          v315 = v1617;
                          if ( (unsigned int)(v317 + 1) >= 2 )
                          {
                            v1497 = RtlULongLongAdd(v1617, 4LL, &v1617);
                            v95 = v1497;
                            if ( v1497 < 0 )
                              break;
                            LODWORD(v1554) = 4;
                            v95 = RtlUIntAdd(4LL, v318, &v1554);
                            v1497 = v95;
                            v320 = 0;
                            if ( v95 < 0 )
                              goto LABEL_412;
                            v95 = RtlUIntAdd((unsigned int)v1554, v319, &v1554);
                            v1497 = v95;
                            v320 = 0;
                            if ( v95 < 0 )
                              goto LABEL_412;
                            v95 = RtlUIntAdd((unsigned int)v1554, v1307, &v1554);
                            v1497 = v95;
                            v320 = 0;
                            if ( v95 < 0 )
                              goto LABEL_412;
                            v95 = RtlUIntAdd((unsigned int)v1554, v321, &v1554);
                            v1497 = v95;
                            v320 = 0;
                            if ( v95 < 0 )
                              goto LABEL_412;
                            v95 = RtlUIntAdd((unsigned int)v1554, v322, &v1554);
                            v1497 = v95;
                            v320 = 0;
                            if ( v95 < 0 )
                              goto LABEL_412;
                            v320 = v1554;
                            v1308 = v1554;
                            if ( (unsigned int)v1554 <= 0x400000 )
                              goto LABEL_413;
                            v95 = -2147418113;
                            goto LABEL_410;
                          }
                        }
                      }
                      else
                      {
                        v95 = -1073741811;
                        v1497 = -1073741811;
                      }
                    }
                  }
                }
LABEL_366:
                if ( !v184 )
                  goto LABEL_368;
                goto LABEL_367;
              }
              v320 = 0;
LABEL_412:
              v1308 = 0;
              if ( v95 < 0 )
                goto LABEL_366;
LABEL_413:
              Sizea = v285;
              v324 = v320;
              v1380 = (SIZE_T)v184;
              Srca = (const WCHAR *)v183;
              v325 = GetProcessHeap();
              v326 = (unsigned int *)HeapAlloc(v325, 8u, v324);
              if ( v326 )
              {
                v186 = v326;
                v327 = Sizea;
                if ( !Sizea )
                {
                  v95 = -2147024809;
                  v1537 = 0LL;
LABEL_428:
                  v1497 = v95;
                  goto LABEL_366;
                }
                v1681 = v1348;
                v1682 = v1308;
                v1680[0] = Sizea;
                v1680[1] = v326;
                v1683 = 0;
                if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                  && (v328 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                {
                  v329 = ((__int64 (__fastcall *)(__int64, _QWORD *))v328)(134LL, v1680);
                  v330 = v1308;
                  v95 = v329 | 0x10000000;
                  v1497 = v329 | 0x10000000;
                  if ( v329 >= 0 )
                  {
                    v330 = v1682;
                    v331 = v184;
                    v332 = v183;
                    goto LABEL_430;
                  }
                }
                else
                {
                  v333 = GetLastError();
                  v95 = v333;
                  if ( v333 > 0 )
                    v95 = (unsigned __int16)v333 | 0x80070000;
                  v330 = v1308;
                  if ( v95 >= 0 )
                    v95 = -2147467259;
                  v1497 = v95;
                }
                v1537 = Sizea;
                if ( v95 == -805306333 )
                {
                  v95 = -2147024774;
                  goto LABEL_428;
                }
                v332 = v183;
                v331 = v184;
                if ( v95 < 0 )
                  goto LABEL_366;
LABEL_430:
                if ( v330 >= 4 )
                {
                  v334 = *v186;
                  v335 = v186 + 1;
                  v1309 = *v186;
                  if ( v186 + 1 < v186 )
                    goto LABEL_451;
                  if ( v330 - 4 >= (unsigned int)v334 )
                  {
                    v336 = (unsigned int *)((char *)v335 + v334);
                    Sizeb = *v186;
                    if ( (unsigned int *)((char *)v335 + v334) < v335 || (unsigned int)(v334 + 4) < 4 )
                      goto LABEL_451;
                    if ( v330 - ((_DWORD)v334 + 4) >= 4 )
                    {
                      v337 = *v336;
                      v338 = v336 + 1;
                      v1400 = v336 + 1;
                      if ( v336 + 1 < v336 )
                        goto LABEL_451;
                      v339 = v334 + 8;
                      if ( (int)v334 + 8 < (unsigned int)(v334 + 4) )
                        goto LABEL_451;
                      if ( v330 - v339 >= (unsigned int)v337 )
                      {
                        v340 = (unsigned int *)((char *)v338 + v337);
                        if ( (unsigned int *)((char *)v338 + v337) < v338 )
                          goto LABEL_451;
                        v341 = v339 + v337;
                        if ( v339 + (unsigned int)v337 < v339 )
                          goto LABEL_451;
                        if ( v330 - v341 >= 4 )
                        {
                          v342 = *v340;
                          v1455 = (LPCWSTR)(v340 + 1);
                          if ( v340 + 1 < v340 )
                            goto LABEL_451;
                          v343 = v341 + 4;
                          if ( v341 + 4 < v341 )
                            goto LABEL_451;
                          if ( v330 - v343 >= (unsigned int)v342 )
                          {
                            if ( v343 + (unsigned int)v342 >= v343 )
                            {
                              if ( v330 == v343 + (_DWORD)v342 && (unsigned int)(v342 + v337 + v334) + 12LL == v330 )
                              {
                                v344 = GetProcessHeap();
                                v1414 = HeapAlloc(v344, 8u, 0x30uLL);
                                if ( !v1414 )
                                {
                                  v183 = (const void **)Srca;
                                  v95 = -805306345;
                                  v184 = (unsigned __int8 *)v1380;
                                  v1497 = -805306345;
                                  v1537 = v327;
                                  goto LABEL_366;
                                }
                                v345 = v186 + 1;
                                if ( v186 == (unsigned int *)-4LL )
                                {
                                  *(_DWORD *)v1414 = (_DWORD)v345;
                                  v1414[1] = v345;
                                }
                                else
                                {
                                  *(_DWORD *)v1414 = v1309;
                                  v346 = GetProcessHeap();
                                  v347 = HeapAlloc(v346, 8u, Sizeb);
                                  if ( !v347 )
                                    goto LABEL_464;
                                  v1414[1] = v347;
                                  memcpy_0(v347, v186 + 1, Sizeb);
                                  v345 = 0LL;
                                }
                                if ( v1400 == v345 )
                                {
                                  *((_DWORD *)v1414 + 4) = (_DWORD)v345;
                                  v1414[3] = v345;
                                }
                                else
                                {
                                  *((_DWORD *)v1414 + 4) = v337;
                                  v348 = GetProcessHeap();
                                  v349 = HeapAlloc(v348, 8u, v337);
                                  if ( !v349 )
                                    goto LABEL_464;
                                  v1414[3] = v349;
                                  memcpy_0(v349, v1400, v337);
                                  v345 = 0LL;
                                }
                                if ( v1455 == (LPCWSTR)v345 )
                                {
                                  *((_DWORD *)v1414 + 8) = (_DWORD)v345;
                                  v1414[5] = v345;
                                  goto LABEL_479;
                                }
                                *((_DWORD *)v1414 + 8) = v342;
                                v350 = GetProcessHeap();
                                v351 = HeapAlloc(v350, 8u, v342);
                                if ( v351 )
                                {
                                  v1414[5] = v351;
                                  memcpy_0(v351, v1455, v342);
                                  LODWORD(v345) = 0;
LABEL_479:
                                  v184 = (unsigned __int8 *)v1380;
                                  v352 = (int)v345;
                                  v1562 = v1414;
                                  v183 = (const void **)Srca;
                                  v1456 = Srca;
                                  v1525 = v186;
                                  v1537 = v327;
                                  v1401 = (unsigned __int8 *)v1380;
                                  v359 = (unsigned int *)v1414;
                                  goto LABEL_480;
                                }
LABEL_464:
                                v183 = (const void **)Srca;
                                v352 = -1073741801;
                                v184 = (unsigned __int8 *)v1380;
                                v1537 = v327;
                                v353 = v1414;
                                v1562 = 0LL;
                                v1381 = (void *)v1414[1];
                                if ( v1381 )
                                {
                                  v354 = GetProcessHeap();
                                  HeapFree(v354, 0, v1381);
                                  v353 = v1414;
                                  v1414[1] = 0LL;
                                }
                                v1382 = (void *)v353[3];
                                if ( v1382 )
                                {
                                  v355 = GetProcessHeap();
                                  HeapFree(v355, 0, v1382);
                                  v353 = v1414;
                                  v1414[3] = 0LL;
                                }
                                v1383 = (void *)v353[5];
                                if ( v1383 )
                                {
                                  v356 = GetProcessHeap();
                                  HeapFree(v356, 0, v1383);
                                  v1414[5] = 0LL;
                                }
                                v357 = GetProcessHeap();
                                HeapFree(v357, 0, v1414);
                                v358 = v1562;
                                Sizec = v327;
                                v1562 = 0LL;
                                v359 = 0LL;
                                v1525 = v186;
                                v1537 = v327;
                                v1456 = Srca;
                                v1401 = v184;
                                if ( v358 )
                                {
                                  v360 = (void *)v358[1];
                                  v361 = v358;
                                  if ( v360 )
                                  {
                                    v362 = GetProcessHeap();
                                    HeapFree(v362, 0, v360);
                                    v361[1] = 0LL;
                                  }
                                  v363 = (void *)v361[3];
                                  if ( v363 )
                                  {
                                    v364 = GetProcessHeap();
                                    HeapFree(v364, 0, v363);
                                    v361[3] = 0LL;
                                  }
                                  v365 = (void *)v361[5];
                                  if ( v365 )
                                  {
                                    v366 = GetProcessHeap();
                                    HeapFree(v366, 0, v365);
                                    v361[5] = 0LL;
                                  }
                                  v367 = GetProcessHeap();
                                  HeapFree(v367, 0, v361);
                                  v327 = Sizec;
                                  v359 = 0LL;
                                  v183 = (const void **)Srca;
                                  v1562 = 0LL;
                                  v352 = -1073741801;
                                  v1537 = Sizec;
                                  v1456 = Srca;
                                  v1525 = v186;
                                  v1401 = v184;
                                }
LABEL_480:
                                v95 = v352 | 0x10000000;
                                v1497 = v95;
                                if ( v95 < 0 )
                                  goto LABEL_366;
                                if ( !v359 || (Srcb = (unsigned __int8 *)*((_QWORD *)v359 + 1)) == 0LL || !*v359 )
                                {
                                  v95 = -805306355;
                                  goto LABEL_410;
                                }
                                v368 = *v359 - 8LL;
                                Sized = v368;
                                v369 = MemoryAlloc(v368);
                                v1515 = v369;
                                v370 = 0;
                                if ( !v369 )
                                  goto LABEL_545;
                                v371 = Srcb;
                                v372 = v369;
                                v1735 = 0x7F1137FAB69605ELL;
                                v373 = v368 & 7;
                                if ( (v368 & 7) != 0 )
                                {
                                  v374 = 0;
                                  v1499 = 0;
                                  v375 = 56;
                                  v376 = Srcb;
                                  v377 = 0;
                                  do
                                  {
                                    v378 = *v376++;
                                    if ( v374 >= 4 )
                                      v370 |= v378 << v375;
                                    else
                                      v377 |= v378 << (v375 - 32);
                                    v375 -= 8;
                                    v374 = v1499 + 1;
                                    v1499 = v374;
                                  }
                                  while ( (int)v374 < (int)v373 );
                                  v379 = v377 ^ 0x92F65A5;
                                  v1310 = v370;
                                  v1475 = v377;
                                  v368 = Sized;
                                  v380 = v370 ^ 0x699A899C;
                                  LOBYTE(v370) = 0;
                                  v381 = v380;
                                  v382 = v379;
                                  v1525 = v186;
                                  v1537 = v327;
                                  v1500 = v379;
                                  v383 = 0;
                                  v1456 = (LPCWSTR)v183;
                                  v384 = v369;
                                  v1401 = v184;
                                  do
                                  {
                                    v1490 = v384 + 1;
                                    if ( v383 >= 4 )
                                    {
                                      v381 = __ROL4__(v381, 8);
                                      v385 = v381;
                                    }
                                    else
                                    {
                                      v382 = __ROL4__(v382, 8);
                                      v385 = v382;
                                    }
                                    *v384 = v385;
                                    ++v383;
                                    ++v384;
                                  }
                                  while ( (int)v383 < (int)v373 );
                                  v372 = v1490;
                                  v386 = v1500;
                                  if ( v373 > 4 )
                                  {
                                    v387 = v380 >> (8 * (8 - v373)) << (8 * (8 - v373));
                                    v372 = v1490;
LABEL_499:
                                    v371 = v376;
                                    goto LABEL_500;
                                  }
                                  v387 = 0;
                                  if ( v373 >= 4 )
                                    goto LABEL_499;
                                  v371 = v376;
                                  v386 = v1500 >> (8 * (4 - v373)) << (8 * (4 - v373));
                                  v372 = v1490;
                                }
                                else
                                {
                                  v1475 = 0;
                                  v1310 = -1;
                                  v387 = 0;
                                  v386 = 0;
                                }
LABEL_500:
                                v1415 = (char *)(v368 >> 3);
                                if ( v368 >> 3 )
                                {
                                  v388 = (char *)v372 + 7;
                                  v389 = v1475;
                                  v390 = v371 + 2;
                                  v391 = v1310;
                                  v392 = HIDWORD(v1735);
                                  v1501 = WORD2(v1735);
                                  v1319 = WORD1(v1735);
                                  v393 = HIDWORD(v1735) ^ 0xAB69605E;
                                  v394 = v1415;
                                  do
                                  {
                                    v395 = *(v390 - 1) | (*(v390 - 2) << 8);
                                    v396 = v390[2] << 8;
                                    v397 = *v390;
                                    v390 += 8;
                                    v398 = *(v390 - 7) | ((v397 | (v395 << 8)) << 8);
                                    v399 = v398 ^ v386;
                                    v400 = *(v390 - 3) | ((*(v390 - 4) | ((*(v390 - 5) | v396) << 8)) << 8);
                                    v401 = v399 ^ v392 ^ 0xAB69605E ^ v400 ^ v387;
                                    v402 = (__ROL4__(v401, 10) + v1501 * __ROL4__(v401 + 1419157410, 5)) ^ v399;
                                    v403 = (WORD1(v1735) * __ROR4__(v402 + v392, 9) - __ROL4__(v402, 2)) ^ v401;
                                    v404 = (24670 * (v403 - v1501) - (v403 >> 13)) ^ v402;
                                    v405 = (HIWORD(v1735) * __ROL4__(v404 ^ WORD1(v1735), 6) - __ROL4__(v404, 2)) ^ v403;
                                    v406 = (v392 - (v405 ^ 0xAB69605E)) ^ v404;
                                    v407 = (v1319 * (v406 ^ v1501)) ^ __ROR4__(v406, 6) ^ v405;
                                    v408 = (__ROL4__(v407, 2) + 24670 * __ROR4__(v407 + v392, 15)) ^ v406;
                                    v409 = (HIWORD(v1735) * __ROR4__(v408 + 1419157410, 14) - __ROL4__(v408, 8)) ^ v407;
                                    v410 = __ROR4__(v409, 10) ^ (v1501 * __ROR4__(v409 ^ 0xAB69605E, 12)) ^ v408;
                                    v411 = (v410 >> 10) ^ (WORD1(v1735) * (v410 ^ HIWORD(v1735))) ^ v409;
                                    v412 = (HIWORD(v1735) * (__ROR4__(~v411, 5) + 24670)) ^ v410;
                                    v413 = (v412 - HIWORD(v1735)) ^ 0xAB69605E ^ v411;
                                    v414 = ((v413 >> 2) + v1501 * __ROL4__(v413 ^ HIWORD(v1735), 2)) ^ v412;
                                    v415 = (__ROL4__(v414, 7) + WORD1(v1735) * __ROR4__(v414 - v392, 6)) ^ v413;
                                    v416 = (24670 * (v415 ^ v1501) + __ROR4__(v415, 9)) ^ v414;
                                    v417 = (__ROL4__(v416, 7) + HIWORD(v1735) * __ROL4__(v416 ^ WORD1(v1735), 5)) ^ v415;
                                    v418 = v417 ^ v393 ^ v416;
                                    v419 = (v1501 * (__ROR4__(v418, 3) - WORD1(v1735))) ^ v417;
                                    v420 = (24670 * __ROR4__(v419 - v392, 1) - __ROR4__(v419, 6)) ^ v418;
                                    v421 = (__ROL4__(v420, 14) + HIWORD(v1735) * __ROL4__(v420 - 1419157410, 3)) ^ v419;
                                    v422 = (v1501 * __ROL4__(v421 - 1419157410, 15) - __ROR4__(v421, 14)) ^ v420;
                                    v423 = (v422 >> 3) ^ (WORD1(v1735) * (v422 ^ 0x605E)) ^ v421;
                                    v424 = v423 ^ v392;
                                    v425 = v423;
                                    v426 = v391 ^ v423;
                                    v391 = v400;
                                    v427 = v389 ^ __ROL4__(v425, 2) ^ (24670 * __ROL4__(v424, 4));
                                    v389 = v398;
                                    v428 = v427 ^ v422;
                                    *(v388 - 4) = v428;
                                    *v388 = v426;
                                    v388 += 8;
                                    v429 = __ROR4__(v428, 8);
                                    *(v388 - 13) = v429;
                                    v430 = __ROR4__(v426, 8);
                                    *(v388 - 9) = v430;
                                    v431 = __ROR4__(v429, 8);
                                    *(v388 - 14) = v431;
                                    v432 = __ROR4__(v430, 8);
                                    *(v388 - 10) = v432;
                                    v433 = __ROR4__(v431, 8);
                                    v434 = __ROR4__(v432, 8);
                                    *(v388 - 15) = v433;
                                    *(v388 - 11) = v434;
                                    v387 = __ROR4__(v434, 8);
                                    v386 = __ROR4__(v433, 8);
                                    --v394;
                                  }
                                  while ( v394 );
                                  LOBYTE(v370) = 0;
                                  v183 = (const void **)v1456;
                                  v186 = v1525;
                                  v184 = v1401;
                                  v369 = v1515;
                                  v368 = Sized;
                                }
                                for ( n = 0LL; n < v368; ++n )
                                  LOBYTE(v370) = *((_BYTE *)v369 + n) ^ v370;
                                v436 = v1537;
                                v437 = v1562;
                                if ( (unsigned __int8)v370 != *(_QWORD *)&Srcb[v368] )
                                {
                                  MemoryFree(v369);
LABEL_545:
                                  v95 = -805306367;
                                  v1497 = -805306367;
                                  v1514 = 0LL;
                                  goto LABEL_366;
                                }
                                v1619 = v369;
                                v1556 = 0;
                                if ( (unsigned int)v368 >= 4 )
                                {
                                  v1491 = *v369;
                                  v323 = RtlULongLongAdd(v369, 4LL, &v1619);
                                  v1514 = v438;
                                  v1562 = v439;
                                  v1537 = v436;
                                  if ( v323 < 0 )
                                    goto LABEL_409;
                                  v440 = RtlUIntAdd(0LL, 4LL, &v1556);
                                  v1514 = (const void **)v369;
                                  v323 = v440;
                                  v1562 = v437;
                                  v441 = v183;
                                  v1537 = v436;
                                  if ( v440 < 0 )
                                    goto LABEL_409;
                                  if ( (unsigned int)Sized - v1556 < 4 )
                                    goto LABEL_525;
                                  v1311 = *(_DWORD *)v1619;
                                  v323 = RtlULongLongAdd(v1619, 4LL, &v1619);
                                  v1514 = v442;
                                  v1562 = v443;
                                  v1537 = v436;
                                  if ( v323 < 0 )
                                    goto LABEL_409;
                                  v444 = RtlUIntAdd(v1556, 4LL, &v1556);
                                  v1514 = (const void **)v369;
                                  v323 = v444;
                                  v1562 = v437;
                                  v441 = v183;
                                  v1537 = v436;
                                  if ( v444 < 0 )
                                    goto LABEL_409;
                                  if ( (unsigned int)Sized - v1556 < v1311 )
                                  {
LABEL_525:
                                    v183 = v441;
                                  }
                                  else
                                  {
                                    v323 = RtlUIntAdd(v1556, v1311, &v1556);
                                    v1514 = (const void **)v369;
                                    v1562 = v437;
                                    v1537 = v436;
                                    if ( v323 < 0 )
                                      goto LABEL_409;
                                    if ( (char *)v369 + (unsigned int)Sized >= (char *)v1619 + v1311
                                      && (unsigned __int64)(unsigned int)Sized + (char *)v369 - v1311 - (_BYTE *)v1619 < 8 )
                                    {
                                      v1514 = (const void **)v369;
                                      Srcc = 0LL;
                                      v323 = 0;
                                      v1476 = 0;
                                      v1562 = v437;
                                      v1537 = v436;
                                      if ( v1619 )
                                      {
                                        Sizee = v1619;
                                        v323 = RtlULongLongAdd(v1619, v1311, &v1620);
                                        v1514 = v445;
                                        v1562 = v446;
                                        v1537 = v436;
                                        if ( v323 < 0 )
                                          goto LABEL_409;
                                        v447 = (void *)v1620;
                                        v1514 = v445;
                                        v1562 = v446;
                                        v1537 = v436;
                                        if ( (unsigned __int64)Sizee < v1620 )
                                        {
                                          v448 = v445;
                                          v1562 = v446;
                                          v1514 = v445;
                                          v449 = Sizee;
                                          v1537 = v436;
                                          while ( 1 )
                                          {
                                            v1502 = v448;
                                            v323 = RtlULongLongAdd(v449, 4LL, &v1621);
                                            if ( v323 < 0 )
                                              goto LABEL_409;
                                            if ( v1621 > v451 )
                                              goto LABEL_534;
                                            v323 = RtlUIntAdd(4LL, *v450, &v1557);
                                            if ( v323 < 0 )
                                              goto LABEL_409;
                                            v323 = RtlULongLongAdd(v452, v1557, &v1622);
                                            v1514 = v1502;
                                            v1562 = v453;
                                            v1537 = v436;
                                            if ( v323 < 0 )
                                              goto LABEL_409;
                                            v449 = v1622;
                                            v1514 = v1502;
                                            v1562 = v453;
                                            v1537 = v436;
                                            if ( v1622 > v447 )
                                              goto LABEL_534;
                                            ++v1476;
                                            if ( v1622 >= v447 )
                                            {
                                              v1514 = v1502;
                                              v1537 = v436;
                                              v1562 = v453;
                                              goto LABEL_536;
                                            }
                                            v448 = v1502;
                                          }
                                        }
                                        v449 = Sizee;
LABEL_536:
                                        if ( v449 != v447 )
                                        {
LABEL_534:
                                          v323 = -1073741811;
                                          goto LABEL_409;
                                        }
                                      }
                                      if ( v1311 )
                                      {
                                        v454 = GetProcessHeap();
                                        v455 = v1311;
                                        v323 = 0;
                                        Srcc = HeapAlloc(v454, 8u, v1311);
                                        v456 = Srcc;
                                        if ( !Srcc )
                                        {
                                          v323 = -1073741801;
                                          goto LABEL_409;
                                        }
                                      }
                                      else
                                      {
                                        v455 = 0LL;
                                        v456 = 0LL;
                                      }
                                      if ( v1619 )
                                        memcpy_0(v456, v1619, v455);
                                      v1666[1] = Srcc;
                                      LODWORD(v1666[0]) = v1476;
                                      if ( v1491 == v1476 )
                                        goto LABEL_409;
                                      goto LABEL_408;
                                    }
                                  }
                                  v1537 = v436;
                                }
                                v1562 = v437;
                                v1514 = (const void **)v369;
LABEL_408:
                                v323 = -1073741762;
LABEL_409:
                                v95 = v323 | 0x10000000;
                                goto LABEL_410;
                              }
                              goto LABEL_450;
                            }
LABEL_451:
                            v95 = -805306219;
                            goto LABEL_452;
                          }
                        }
                      }
                    }
                  }
                }
LABEL_450:
                v95 = -805306306;
LABEL_452:
                v1497 = v95;
                v183 = v332;
                v1537 = v327;
                v184 = v331;
                goto LABEL_366;
              }
LABEL_416:
              v95 = -805306345;
              goto LABEL_410;
            }
          }
        }
        v261 = -1073741801;
        v1377 = (void *)*((_QWORD *)v260 + 1);
        if ( v1377 )
        {
          v278 = GetProcessHeap();
          HeapFree(v278, 0, v1377);
          *((_QWORD *)v260 + 1) = 0LL;
        }
        v1378 = (void *)*((_QWORD *)v260 + 3);
        if ( v1378 )
        {
          v279 = GetProcessHeap();
          HeapFree(v279, 0, v1378);
          *((_QWORD *)v260 + 3) = 0LL;
        }
        v1379 = (void *)*((_QWORD *)v260 + 5);
        if ( v1379 )
        {
          v280 = GetProcessHeap();
          HeapFree(v280, 0, v1379);
          *((_QWORD *)v260 + 5) = 0LL;
        }
        v281 = GetProcessHeap();
        HeapFree(v281, 0, v260);
      }
      else
      {
        v261 = -1073741801;
      }
      v262 = v1413;
      goto LABEL_317;
    }
  }
  v95 = -805306367;
  v1497 = -805306367;
LABEL_367:
  v295 = GetProcessHeap();
  HeapFree(v295, 0, v184);
LABEL_368:
  if ( v183 )
  {
    v296 = (void *)v183[1];
    if ( v296 )
    {
      v297 = GetProcessHeap();
      HeapFree(v297, 0, v296);
      v183[1] = 0LL;
    }
    v298 = (void *)v183[3];
    if ( v298 )
    {
      v299 = GetProcessHeap();
      HeapFree(v299, 0, v298);
      v183[3] = 0LL;
    }
    v300 = (void *)v183[5];
    if ( v300 )
    {
      v301 = GetProcessHeap();
      HeapFree(v301, 0, v300);
      v183[5] = 0LL;
    }
    v302 = GetProcessHeap();
    HeapFree(v302, 0, v183);
  }
  v303 = v1537;
  if ( v1537 )
  {
    v304 = GetProcessHeap();
    HeapFree(v304, 0, v303);
  }
  if ( v186 )
  {
    v305 = GetProcessHeap();
    HeapFree(v305, 0, v186);
  }
  v306 = v1562;
  if ( v1562 )
  {
    v307 = (void *)*((_QWORD *)v1562 + 1);
    if ( v307 )
    {
      v308 = GetProcessHeap();
      HeapFree(v308, 0, v307);
      v306[1] = 0LL;
    }
    v309 = (void *)v306[3];
    if ( v309 )
    {
      v310 = GetProcessHeap();
      HeapFree(v310, 0, v309);
      v306[3] = 0LL;
    }
    v311 = (void *)v306[5];
    if ( v311 )
    {
      v312 = GetProcessHeap();
      HeapFree(v312, 0, v311);
      v306[5] = 0LL;
    }
    v313 = GetProcessHeap();
    HeapFree(v313, 0, v306);
  }
  if ( v1514 )
  {
    v314 = GetProcessHeap();
    HeapFree(v314, 0, v1514);
  }
  v103 = v1485;
  if ( v95 < 0 )
    goto LABEL_235;
  if ( !LODWORD(v1666[0]) )
  {
    v95 = -1073425151;
LABEL_548:
    v1497 = v95;
    goto LABEL_235;
  }
  if ( !v1666[1] )
  {
    v95 = -1073741811;
    goto LABEL_548;
  }
  v94 = 4LL;
  v457 = v1666[1];
  v1623 = v1666[1];
  v1497 = RtlULongLongAdd(v1666[1], 4LL, &v1623);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_236;
  v459 = v1623;
  if ( !*v457 )
    v459 = 0LL;
  v1623 = v459;
  if ( *v457 != 4 )
  {
    v95 = -1073741789;
    v1497 = -1073741789;
    goto LABEL_236;
  }
  v95 = *v459;
  v1497 = *v459;
  if ( *v459 == -805306333 )
  {
    v460 = -2147024774;
  }
  else
  {
    v460 = *v459;
    if ( v95 != -2147024774 && v95 < 0 )
      goto LABEL_236;
  }
  if ( LODWORD(v1666[0]) != 6 )
  {
    v95 = -1073425151;
LABEL_563:
    v1497 = v95;
LABEL_564:
    v103 = v458;
    goto LABEL_236;
  }
  if ( !v1666[1] )
    goto LABEL_606;
  v1624 = v1666[1];
  v461 = *(_DWORD *)v1666[1];
  v1497 = RtlULongLongAdd(v1666[1], 4LL, &v1624);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_564;
  v1497 = RtlULongLongAdd(v1624, v461, &v1624);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_564;
  v462 = *v1624;
  v1497 = RtlULongLongAdd(v1624, 4LL, &v1624);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_564;
  v463 = v1624;
  if ( !v462 )
    v463 = 0LL;
  v1624 = v463;
  if ( v462 != 8 )
    goto LABEL_562;
  v1384 = *v463;
  if ( !v1666[1] )
    goto LABEL_606;
  v464 = (int *)v1666[1];
  v465 = 0;
  v1625 = (int *)v1666[1];
  do
  {
    v1497 = RtlULongLongAdd(v464, 4LL, &v1625);
    v95 = v1497;
    if ( v1497 < 0 )
      goto LABEL_564;
    v1497 = RtlULongLongAdd(v1625, v466, &v1625);
    v95 = v1497;
    if ( v1497 < 0 )
      goto LABEL_564;
    v464 = v1625;
    v465 += v467;
  }
  while ( v465 < 2 );
  v468 = *v1625;
  v1497 = RtlULongLongAdd(v1625, 4LL, &v1625);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_564;
  v469 = v1625;
  if ( !v468 )
    v469 = 0LL;
  v1625 = v469;
  if ( v468 != 4 )
  {
LABEL_562:
    v95 = -1073741789;
    goto LABEL_563;
  }
  v1492 = *v469;
  if ( !v1666[1] )
  {
LABEL_606:
    v95 = -1073741811;
    goto LABEL_563;
  }
  v470 = v1666[1];
  v471 = 0;
  v1626 = v1666[1];
  do
  {
    v1497 = RtlULongLongAdd(v470, 4LL, &v1626);
    v95 = v1497;
    if ( v1497 < 0 )
      goto LABEL_564;
    v1497 = RtlULongLongAdd(v1626, v472, &v1626);
    v95 = v1497;
    if ( v1497 < 0 )
      goto LABEL_564;
    v470 = v1626;
    v471 += v473;
  }
  while ( v471 < 3 );
  v1497 = RtlULongLongAdd(v1626, 4LL, &v1626);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_564;
  v475 = v1626;
  v476 = (unsigned int *)v1666[1];
  v477 = 0;
  if ( !v474 )
    v475 = 0LL;
  v1627 = (unsigned int *)v1666[1];
  v1626 = v475;
  do
  {
    v478 = *v476;
    v1497 = RtlULongLongAdd(v476, 4LL, &v1627);
    v95 = v1497;
    if ( v1497 < 0 )
      goto LABEL_615;
    v1497 = RtlULongLongAdd(v1627, v478, &v1627);
    v95 = v1497;
    v94 = 4LL;
    if ( v1497 < 0 )
      goto LABEL_564;
    v476 = v1627;
    ++v477;
  }
  while ( v477 < 4 );
  v480 = *v1627;
  v1497 = RtlULongLongAdd(v1627, 4LL, &v1627);
  v95 = v1497;
  if ( v1497 < 0 )
    goto LABEL_564;
  v481 = v1627;
  if ( !v480 )
    v481 = 0LL;
  v1627 = v481;
  if ( v480 != 4 )
    goto LABEL_562;
  v482 = (unsigned int *)v1666[1];
  v483 = 0;
  v484 = *v481;
  v1628 = (unsigned int *)v1666[1];
  do
  {
    v485 = *v482;
    v95 = RtlULongLongAdd(v482, 4LL, &v1628);
    v1497 = v95;
    if ( v95 < 0 )
    {
      v100 = (WCHAR *)lpModuleName;
      v103 = v486;
      goto LABEL_130;
    }
    v1497 = RtlULongLongAdd(v1628, v485, &v1628);
    v95 = v1497;
    if ( v1497 < 0 )
      goto LABEL_615;
    v482 = v1628;
    ++v483;
  }
  while ( v483 < 5 );
  v487 = *v1628;
  v488 = RtlULongLongAdd(v1628, 4LL, &v1628);
  v1497 = v488;
  v95 = v488;
  if ( v488 < 0 )
  {
    v1497 = v488;
LABEL_615:
    v103 = v479;
    goto LABEL_235;
  }
  v491 = v1628;
  v160 = 4LL;
  if ( !v487 )
    v491 = 0LL;
  v1628 = v491;
  if ( v487 != 4 )
  {
    v95 = -1073741789;
LABEL_608:
    v1497 = v95;
    v103 = v479;
    goto LABEL_226;
  }
  v103 = *v491;
  if ( v1465 != (wchar_t *)v1384 )
  {
    v95 = -1073425151;
    goto LABEL_608;
  }
  v1566 = v1492;
  if ( v484 > 4 || (unsigned int)v490 > 4 )
  {
    v95 = -2147024774;
    v1497 = -2147024774;
    goto LABEL_226;
  }
  memcpy_0(v1527, v489, v490);
  v100 = (WCHAR *)lpModuleName;
  v94 = 4LL;
  if ( v460 )
  {
    v95 = v460;
    v1497 = v460;
  }
LABEL_237:
  lpMem[0] = 0LL;
  v168 = lpMem[1];
  if ( lpMem[1] )
  {
    v169 = GetProcessHeap();
    HeapFree(v169, 0, v168);
    lpMem[1] = 0LL;
  }
  v1666[0] = 0LL;
  v170 = v1666[1];
  if ( v1666[1] )
  {
    v171 = GetProcessHeap();
    HeapFree(v171, 0, v170);
    v1666[1] = 0LL;
  }
  if ( v100 )
  {
    v172 = GetProcessHeap();
    HeapFree(v172, 0, v100);
  }
  if ( v1329 )
  {
    v173 = GetProcessHeap();
    HeapFree(v173, 0, v1329);
  }
  if ( v95 < 0 )
    goto LABEL_115;
  if ( v103 )
  {
    g_WarbirdNotificationInformation = v103;
    v1629[0] = 0LL;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
    v175 = 0LL;
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
      goto LABEL_1205;
    v1372 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
    if ( !v1372 )
    {
      GetLastError();
      goto LABEL_1205;
    }
    v492 = ((__int64 (*)(void))off_1807A9198)();
    v493 = g_WarbirdNotificationInformation;
    g_WarbirdPaintInitTime = v492;
    v1493 = g_WarbirdNotificationInformation;
    memset_0(&v1717, 0, 0x70uLL);
    Sizef = 0LL;
    v1737 = 0LL;
    v1754 = 0LL;
    v1755 = 0;
    v1752 = 0LL;
    v1597 = 0LL;
    v1753 = 0LL;
    while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
      ;
    v494 = g_WarbirdSecureFunctionsRefCount;
    if ( g_WarbirdSecureFunctionsRefCount )
      goto LABEL_659;
    v1312 = 0;
    v1486 = 0;
    v495 = 0LL;
    lpModuleNamea = (WCHAR *)MemoryAlloc(0x338uLL);
    if ( lpModuleNamea )
    {
      v496 = -1;
      v497 = (char *)lpModuleNamea + 7;
      v498 = 0;
      v499 = (unsigned __int8 *)&unk_180697D32;
      v500 = 0;
      v501 = 103LL;
      do
      {
        v502 = *(v499 - 1) | (*(v499 - 2) << 8);
        v503 = v499[2] << 8;
        v504 = *v499;
        v499 += 8;
        v505 = *(v499 - 7) | ((v504 | (v502 << 8)) << 8);
        v506 = v505 ^ v500;
        v507 = *(v499 - 3) | ((*(v499 - 4) | ((*(v499 - 5) | v503) << 8)) << 8);
        v508 = v507 ^ v498 ^ v506 ^ 0xAC987321;
        v509 = (__ROL4__(v508, 10) + 4991 * __ROL4__(v508 + 1419157410, 5)) ^ v506;
        v510 = (43881 * __ROR4__(v509 + 133239679, 9) - __ROL4__(v509, 2)) ^ v508;
        v511 = (24670 * v510 - (v510 >> 13) - 123127970) ^ v509;
        v512 = (2033 * __ROL4__(v511 ^ 0xAB69, 6) - __ROL4__(v511, 2)) ^ v510;
        v513 = (133239679 - (v512 ^ 0xAB69605E)) ^ v511;
        v514 = (43881 * (v513 ^ 0x137F)) ^ __ROR4__(v513, 6) ^ v512;
        v515 = (__ROL4__(v514, 2) + 24670 * __ROR4__(v514 + 133239679, 15)) ^ v513;
        v516 = (2033 * __ROR4__(v515 + 1419157410, 14) - __ROL4__(v515, 8)) ^ v514;
        v517 = __ROR4__(v516, 10) ^ (4991 * __ROR4__(v516 ^ 0xAB69605E, 12)) ^ v515;
        v518 = v516 ^ (v517 >> 10) ^ (43881 * (v517 ^ 0x7F1));
        v519 = (2033 * (__ROR4__(~v518, 5) + 24670)) ^ v517;
        v520 = v518 ^ (v519 - 2033) ^ 0xAB69605E;
        v521 = ((v520 >> 2) + 4991 * __ROL4__(v518 ^ (v519 - 2033) ^ 0xAB6967AF, 2)) ^ v519;
        v522 = (__ROL4__(v521, 7) + 43881 * __ROR4__(v521 - 133239679, 6)) ^ v520;
        v523 = (24670 * (v522 ^ 0x137F) + __ROR4__(v522, 9)) ^ v521;
        v524 = (__ROL4__(v523, 7) + 2033 * __ROL4__(v523 ^ 0xAB69, 5)) ^ v522;
        v525 = v524 ^ v523 ^ 0xAC987321;
        v526 = (4991 * __ROR4__(v525, 3) - 219010071) ^ v524;
        v527 = (24670 * __ROR4__(v526 - 133239679, 1) - __ROR4__(v526, 6)) ^ v525;
        v528 = (__ROL4__(v527, 14) + 2033 * __ROL4__(v527 - 1419157410, 3)) ^ v526;
        v529 = (4991 * __ROL4__(v528 - 1419157410, 15) - __ROR4__(v528, 14)) ^ v527;
        v530 = (v529 >> 3) ^ (43881 * (v529 ^ 0x605E)) ^ v528;
        v531 = 24670 * __ROL4__(v530 ^ 0x7F1137F, 4);
        v532 = v530;
        v533 = v496 ^ v530;
        v496 = v507;
        v534 = (unsigned int)v175 ^ __ROL4__(v532, 2) ^ v531;
        LODWORD(v175) = v505;
        v535 = v534 ^ v529;
        *(v497 - 4) = v535;
        *v497 = v533;
        v497 += 8;
        v536 = __ROR4__(v535, 8);
        *(v497 - 13) = v536;
        v537 = __ROR4__(v533, 8);
        *(v497 - 9) = v537;
        v538 = __ROR4__(v536, 8);
        *(v497 - 14) = v538;
        v539 = __ROR4__(v537, 8);
        *(v497 - 10) = v539;
        v540 = __ROR4__(v538, 8);
        v541 = __ROR4__(v539, 8);
        *(v497 - 15) = v540;
        *(v497 - 11) = v541;
        v498 = __ROR4__(v541, 8);
        v500 = __ROR4__(v540, 8);
        --v501;
      }
      while ( v501 );
      v493 = v1493;
      v95 = v1497;
      v542 = 0LL;
      v543 = 0;
      v495 = 0LL;
      v544 = 0;
      do
        v543 ^= *((_BYTE *)lpModuleNamea + v542++);
      while ( v542 < 0x338 );
      if ( v543 == 64LL )
      {
        *((_BYTE *)lpModuleNamea + 823) = 0;
        v495 = lpModuleNamea;
        v548 = lpModuleNamea;
        memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
        if ( !*(_BYTE *)lpModuleNamea )
        {
LABEL_630:
          v545 = GetProcessHeap();
          HeapFree(v545, 0, v495);
LABEL_631:
          if ( v544 < 0 )
          {
            v546 = 4LL;
            v547 = (HMODULE *)&WARBIRD::g_arModuleInfo;
            do
            {
              if ( *v547 )
                FreeLibrary(*v547);
              v547 += 3;
              --v546;
            }
            while ( v546 );
            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
            memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_660:
            v1313 = 0;
            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
            v1630 = 0LL;
            v1676 = 0LL;
            v1478 = 0;
            v1331 = 0LL;
            lpModuleNameb = 0LL;
            v1466 = 0LL;
            while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
              ;
            v560 = g_WarbirdSecureFunctionsRefCount;
            if ( g_WarbirdSecureFunctionsRefCount )
              goto LABEL_701;
            v1487 = 0;
            v1349 = 0;
            v561 = 0LL;
            v562 = (char *)MemoryAlloc(0x338uLL);
            v1457 = (WCHAR *)v562;
            if ( v562 )
            {
              v563 = 0;
              v564 = v562 + 7;
              v565 = -1;
              v566 = (unsigned __int8 *)&unk_180697D32;
              v567 = 0;
              v568 = 103LL;
              v569 = 0;
              do
              {
                v570 = *(v566 - 1) | (*(v566 - 2) << 8);
                v571 = v566[2] << 8;
                v572 = *v566;
                v566 += 8;
                v573 = *(v566 - 7) | ((v572 | (v570 << 8)) << 8);
                v574 = v573 ^ v569;
                v575 = *(v566 - 3) | ((*(v566 - 4) | ((*(v566 - 5) | v571) << 8)) << 8);
                v576 = v567 ^ v575 ^ v574 ^ 0xAC987321;
                v577 = (__ROL4__(v576, 10) + 4991 * __ROL4__(v576 + 1419157410, 5)) ^ v574;
                v578 = (43881 * __ROR4__(v577 + 133239679, 9) - __ROL4__(v577, 2)) ^ v576;
                v579 = (24670 * v578 - (v578 >> 13) - 123127970) ^ v577;
                v580 = (2033 * __ROL4__(v579 ^ 0xAB69, 6) - __ROL4__(v579, 2)) ^ v578;
                v581 = (133239679 - (v580 ^ 0xAB69605E)) ^ v579;
                v582 = (43881 * (v581 ^ 0x137F)) ^ __ROR4__(v581, 6) ^ v580;
                v583 = (__ROL4__(v582, 2) + 24670 * __ROR4__(v582 + 133239679, 15)) ^ v581;
                v584 = (2033 * __ROR4__(v583 + 1419157410, 14) - __ROL4__(v583, 8)) ^ v582;
                v585 = __ROR4__(v584, 10) ^ (4991 * __ROR4__(v584 ^ 0xAB69605E, 12)) ^ v583;
                v586 = v584 ^ (v585 >> 10) ^ (43881 * (v585 ^ 0x7F1));
                v587 = (2033 * (__ROR4__(~v586, 5) + 24670)) ^ v585;
                v588 = v586 ^ (v587 - 2033) ^ 0xAB69605E;
                v589 = ((v588 >> 2) + 4991 * __ROL4__(v586 ^ (v587 - 2033) ^ 0xAB6967AF, 2)) ^ v587;
                v590 = (__ROL4__(v589, 7) + 43881 * __ROR4__(v589 - 133239679, 6)) ^ v588;
                v591 = (24670 * (v590 ^ 0x137F) + __ROR4__(v590, 9)) ^ v589;
                v592 = (__ROL4__(v591, 7) + 2033 * __ROL4__(v591 ^ 0xAB69, 5)) ^ v590;
                v593 = v592 ^ v591 ^ 0xAC987321;
                v594 = (4991 * __ROR4__(v593, 3) - 219010071) ^ v592;
                v595 = (24670 * __ROR4__(v594 - 133239679, 1) - __ROR4__(v594, 6)) ^ v593;
                v596 = (__ROL4__(v595, 14) + 2033 * __ROL4__(v595 - 1419157410, 3)) ^ v594;
                v597 = (4991 * __ROL4__(v596 - 1419157410, 15) - __ROR4__(v596, 14)) ^ v595;
                v598 = (v597 >> 3) ^ (43881 * (v597 ^ 0x605E)) ^ v596;
                v599 = 24670 * __ROL4__(v598 ^ 0x7F1137F, 4);
                v600 = v598;
                v601 = v565 ^ v598;
                v565 = v575;
                v602 = v563 ^ v597 ^ __ROL4__(v600, 2) ^ v599;
                v563 = v573;
                *(v564 - 4) = v602;
                *v564 = v601;
                v564 += 8;
                v603 = __ROR4__(v602, 8);
                *(v564 - 13) = v603;
                v604 = __ROR4__(v601, 8);
                *(v564 - 9) = v604;
                v605 = __ROR4__(v603, 8);
                *(v564 - 14) = v605;
                v606 = __ROR4__(v604, 8);
                *(v564 - 10) = v606;
                v607 = __ROR4__(v605, 8);
                v608 = __ROR4__(v606, 8);
                *(v564 - 15) = v607;
                *(v564 - 11) = v608;
                v567 = __ROR4__(v608, 8);
                v569 = __ROR4__(v607, 8);
                --v568;
              }
              while ( v568 );
              v493 = v1493;
              v95 = v1497;
              v609 = 0LL;
              v610 = 0;
              v611 = 0;
              v561 = 0LL;
              do
                v611 ^= *((_BYTE *)v1457 + v609++);
              while ( v609 < 0x338 );
              if ( v611 == 64LL )
              {
                *((_BYTE *)v1457 + 823) = 0;
                v561 = v1457;
                v615 = v1457;
                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                if ( !*(_BYTE *)v1457 )
                {
LABEL_672:
                  v612 = GetProcessHeap();
                  HeapFree(v612, 0, v561);
LABEL_673:
                  if ( v610 < 0 )
                  {
                    v613 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    v614 = 4LL;
                    do
                    {
                      if ( *v613 )
                        FreeLibrary(*v613);
                      v613 += 3;
                      --v614;
                    }
                    while ( v614 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_702:
                    LODWORD(v627) = 0;
                    _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                    memset_0(&v1717, 0, 0x70uLL);
                    v1792[0] = (v493 >> 4) & 0xF;
                    v628 = v493 & 0xF;
                    v1495 = v628;
                    v1792[1] = (v493 >> 8) & 0xF;
                    v1737 = 0LL;
                    v1792[2] = (v493 >> 12) & 0xF;
                    v1403 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
                    v1488 = -1;
                    if ( !v1403 )
                    {
                      v629 = GetLastError();
                      v630 = v629;
                      if ( v629 > 0 )
                        v630 = (unsigned __int16)v629 | 0x80070000;
                      if ( v630 >= 0 )
                        v630 = -2147467259;
LABEL_921:
                      while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                        ;
                      v763 = g_WarbirdSecureFunctionsRefCount;
                      if ( g_WarbirdSecureFunctionsRefCount > 0 )
                      {
                        --g_WarbirdSecureFunctionsRefCount;
                        if ( v763 == 1 )
                        {
                          v764 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                          v627 = 4LL;
                          do
                          {
                            if ( *v764 )
                              FreeLibrary(*v764);
                            v764 += 3;
                            --v627;
                          }
                          while ( v627 );
                          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                          memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
                        }
                      }
                      _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1630);
                      if ( v630 < 0 )
                      {
LABEL_1128:
                        if ( v1719 )
                        {
                          v893 = -1LL;
                          do
                            ++v893;
                          while ( *((_WORD *)v1719 + v893) );
                          memset(v1719, 0, 2 * v893 + 2);
                          MemoryFree(v1719);
                          v1719 = 0LL;
                        }
                        if ( v1720 )
                        {
                          v894 = -1LL;
                          do
                            ++v894;
                          while ( *((_WORD *)v1720 + v894) );
                          memset(v1720, 0, 2 * v894 + 2);
                          MemoryFree(v1720);
                          v1720 = 0LL;
                        }
                        if ( v1721 )
                        {
                          v895 = -1LL;
                          do
                            ++v895;
                          while ( *((_WORD *)v1721 + v895) );
                          memset(v1721, 0, 2 * v895 + 2);
                          MemoryFree(v1721);
                          v1721 = 0LL;
                        }
                        if ( v1722 )
                        {
                          ((void (*)(void))off_1807A9138)();
                          v1722 = 0LL;
                        }
                        if ( v1723 )
                        {
                          ((void (*)(void))off_1807A9138)();
                          v1723 = 0LL;
                        }
                        if ( v1724 )
                        {
                          ((void (*)(void))off_1807A9138)();
                          v1724 = 0LL;
                        }
                        while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                          ;
                        v896 = g_WarbirdSecureFunctionsRefCount;
                        if ( g_WarbirdSecureFunctionsRefCount > 0 )
                        {
                          --g_WarbirdSecureFunctionsRefCount;
                          if ( v896 == 1 )
                          {
                            v627 = 4LL;
                            v897 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                            do
                            {
                              if ( *v897 )
                                FreeLibrary(*v897);
                              v897 += 3;
                              --v627;
                            }
                            while ( v627 );
                            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                            memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
                          }
                        }
                        _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                        v1340 = g_WarbirdNotificationInformation;
                        v1523 = ((__int64 (*)(void))off_1807A9198)() - g_WarbirdPaintInitTime;
                        v1790 = 0LL;
                        v1787 = 0LL;
                        v1788 = 0LL;
                        v1789 = 0LL;
                        while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                          ;
                        v898 = g_WarbirdSecureFunctionsRefCount;
                        if ( g_WarbirdSecureFunctionsRefCount )
                          goto LABEL_1195;
                        v1363 = 0;
                        v1472 = 0;
                        v899 = 0LL;
                        v1533 = 0LL;
                        v900 = (char *)MemoryAlloc(0x338uLL);
                        v1445 = (WCHAR *)v900;
                        if ( v900 )
                        {
                          v901 = -1;
                          v902 = v900 + 7;
                          v903 = 0;
                          v904 = (unsigned __int8 *)&unk_180697D32;
                          v905 = 103LL;
                          v906 = 0;
                          do
                          {
                            v907 = *(v904 - 1) | (*(v904 - 2) << 8);
                            v908 = v904[2] << 8;
                            v909 = *v904;
                            v904 += 8;
                            v910 = *(v904 - 7) | ((v909 | (v907 << 8)) << 8);
                            v911 = v910 ^ v903;
                            v912 = *(v904 - 3) | ((*(v904 - 4) | ((*(v904 - 5) | v908) << 8)) << 8);
                            v913 = v911 ^ v627 ^ v912 ^ 0xAC987321;
                            v914 = (__ROL4__(v913, 10) + 4991 * __ROL4__(v913 + 1419157410, 5)) ^ v911;
                            v915 = (43881 * __ROR4__(v914 + 133239679, 9) - __ROL4__(v914, 2)) ^ v913;
                            v916 = (24670 * v915 - (v915 >> 13) - 123127970) ^ v914;
                            v917 = (2033 * __ROL4__(v916 ^ 0xAB69, 6) - __ROL4__(v916, 2)) ^ v915;
                            v918 = (133239679 - (v917 ^ 0xAB69605E)) ^ v916;
                            v919 = (43881 * (v918 ^ 0x137F)) ^ __ROR4__(v918, 6) ^ v917;
                            v920 = (__ROL4__(v919, 2) + 24670 * __ROR4__(v919 + 133239679, 15)) ^ v918;
                            v921 = (2033 * __ROR4__(v920 + 1419157410, 14) - __ROL4__(v920, 8)) ^ v919;
                            v922 = __ROR4__(v921, 10) ^ (4991 * __ROR4__(v921 ^ 0xAB69605E, 12)) ^ v920;
                            v923 = (v922 >> 10) ^ (43881 * (v922 ^ 0x7F1)) ^ v921;
                            v924 = (2033 * (__ROR4__(~v923, 5) + 24670)) ^ v922;
                            v925 = v923 ^ (v924 - 2033) ^ 0xAB69605E;
                            v926 = ((v925 >> 2) + 4991 * __ROL4__(v923 ^ (v924 - 2033) ^ 0xAB6967AF, 2)) ^ v924;
                            v927 = (__ROL4__(v926, 7) + 43881 * __ROR4__(v926 - 133239679, 6)) ^ v925;
                            v928 = (24670 * (v927 ^ 0x137F) + __ROR4__(v927, 9)) ^ v926;
                            v929 = (__ROL4__(v928, 7) + 2033 * __ROL4__(v928 ^ 0xAB69, 5)) ^ v927;
                            v930 = v928 ^ v929 ^ 0xAC987321;
                            v931 = (4991 * __ROR4__(v930, 3) - 219010071) ^ v929;
                            v932 = (24670 * __ROR4__(v931 - 133239679, 1) - __ROR4__(v931, 6)) ^ v930;
                            v933 = (__ROL4__(v932, 14) + 2033 * __ROL4__(v932 - 1419157410, 3)) ^ v931;
                            v934 = (4991 * __ROL4__(v933 - 1419157410, 15) - __ROR4__(v933, 14)) ^ v932;
                            v935 = (v934 >> 3) ^ (43881 * (v934 ^ 0x605E)) ^ v933;
                            v936 = 24670 * __ROL4__(v935 ^ 0x7F1137F, 4);
                            v937 = v935;
                            v938 = v901 ^ v935;
                            v901 = v912;
                            v939 = v906 ^ __ROL4__(v937, 2) ^ v936;
                            v906 = v910;
                            v940 = v939 ^ v934;
                            *(v902 - 4) = v940;
                            *v902 = v938;
                            v902 += 8;
                            v941 = __ROR4__(v940, 8);
                            *(v902 - 13) = v941;
                            v942 = __ROR4__(v938, 8);
                            *(v902 - 9) = v942;
                            v943 = __ROR4__(v941, 8);
                            *(v902 - 14) = v943;
                            v944 = __ROR4__(v942, 8);
                            *(v902 - 10) = v944;
                            v945 = __ROR4__(v943, 8);
                            v946 = __ROR4__(v944, 8);
                            *(v902 - 15) = v945;
                            *(v902 - 11) = v946;
                            LODWORD(v627) = __ROR4__(v946, 8);
                            v903 = __ROR4__(v945, 8);
                            --v905;
                          }
                          while ( v905 );
                          v899 = v1533;
                          v947 = 0;
                          v948 = 0LL;
                          v95 = v1497;
                          v949 = (int)v1533;
                          do
                            v947 ^= *((_BYTE *)v1445 + v948++);
                          while ( v948 < 0x338 );
                          if ( v947 == 64LL )
                          {
                            *((_BYTE *)v1445 + 823) = 0;
                            v899 = v1445;
                            v954 = v1445;
                            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                            if ( !*(_BYTE *)v1445 )
                            {
LABEL_1166:
                              v950 = GetProcessHeap();
                              HeapFree(v950, 0, v899);
LABEL_1167:
                              if ( v949 < 0 )
                              {
                                v951 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                                v175 = 0LL;
                                v952 = 4LL;
                                do
                                {
                                  if ( *v951 )
                                    FreeLibrary(*v951);
                                  v951 += 3;
                                  --v952;
                                }
                                while ( v952 );
                                v953 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                                memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
                                goto LABEL_1196;
                              }
                              v898 = g_WarbirdSecureFunctionsRefCount;
LABEL_1195:
                              v953 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                              g_WarbirdSecureFunctionsRefCount = v898 + 1;
                              v175 = 0LL;
LABEL_1196:
                              _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                              LODWORD(v1790) = v1340;
                              LODWORD(v1787) = v1523;
                              v1786 = 1;
                              LODWORD(v1788) = -1721306479;
                              DWORD2(v1787) = 1;
                              LODWORD(v1789) = 1;
                              DWORD2(v1788) = 1;
                              DWORD2(v1789) = 1;
                              v966 = 4LL;
                              ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1807A91D0)(
                                0LL,
                                8225LL,
                                4LL,
                                &v1786);
                              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                                ;
                              v967 = g_WarbirdSecureFunctionsRefCount;
                              if ( g_WarbirdSecureFunctionsRefCount > 0 )
                              {
                                --g_WarbirdSecureFunctionsRefCount;
                                if ( v967 == 1 )
                                {
                                  do
                                  {
                                    if ( *v953 )
                                      FreeLibrary(*v953);
                                    v953 += 3;
                                    --v966;
                                  }
                                  while ( v966 );
                                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                                  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
                                }
                              }
                              _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                              ((void (__fastcall *)(_QWORD, SIZE_T))off_1807A9260)(0LL, v1372);
                              v1527 = (void *)v1531;
LABEL_1205:
                              SH<void *,SH_HANDLE>::Reset(v1629);
                              v968 = 0LL;
                              v1675 = 0LL;
                              *(_OWORD *)v1678 = 0LL;
                              v969 = GetProcessHeap();
                              v970 = (WCHAR *)HeapAlloc(v969, 8u, 0xA0uLL);
                              v971 = v970;
                              if ( !v970 )
                              {
LABEL_1245:
                                v1674 = 0LL;
                                v1004 = v1675;
                                if ( v1675 )
                                {
                                  v1005 = GetProcessHeap();
                                  HeapFree(v1005, 0, v1004);
                                  v1675 = 0LL;
                                }
                                v1678[0] = 0LL;
                                v1006 = v1678[1];
                                if ( v1678[1] )
                                {
                                  v1007 = GetProcessHeap();
                                  HeapFree(v1007, 0, v1006);
                                  v1678[1] = 0LL;
                                }
                                if ( v175 )
                                {
                                  v1008 = GetProcessHeap();
                                  HeapFree(v1008, 0, v175);
                                }
                                if ( v968 )
                                {
                                  v1009 = GetProcessHeap();
                                  HeapFree(v1009, 0, v968);
                                }
                                goto LABEL_1253;
                              }
                              v1533 = v970;
                              v175 = v970;
                              *(_OWORD *)v970 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
                              *((_OWORD *)v970 + 1) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
                              *((_OWORD *)v970 + 2) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
                              *((_OWORD *)v970 + 3) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
                              *((_OWORD *)v970 + 4) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
                              *((_OWORD *)v970 + 5) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
                              *((_OWORD *)v970 + 6) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
                              *((_OWORD *)v970 + 7) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
                              *((_OWORD *)v970 + 8) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
                              *((_OWORD *)v970 + 9) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
                              v972 = GetProcessHeap();
                              v973 = HeapAlloc(v972, 8u, 8uLL);
                              v968 = v973;
                              if ( !v973 )
                              {
                                v968 = 0LL;
                                goto LABEL_1245;
                              }
                              *v973 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
                              v1524 = v973;
                              v974 = __rdtsc();
                              v1571 = 0;
                              if ( (int)RtlUIntAdd(4LL, 4LL, &v1572) >= 0
                                && (int)RtlUIntAdd(0LL, v1572, &v1571) >= 0
                                && (int)RtlUIntAdd(4LL, 160LL, &v1573) >= 0 )
                              {
                                v975 = RtlUIntAdd(v1571, v1573, &v1571);
                                if ( (v976 | v975) >= 0 && (int)RtlUIntAdd(4LL, 8LL, &v1574) >= 0 )
                                {
                                  v977 = RtlUIntAdd(v1571, v1574, &v1571);
                                  if ( (v978 | v977) >= 0 && (int)RtlUIntAdd(4LL, 8LL, &v1575) >= 0 )
                                  {
                                    v979 = RtlUIntAdd(v1571, v1575, &v1571);
                                    if ( (v980 | v979) >= 0 )
                                    {
                                      HIDWORD(v1674) = v1571;
                                      v981 = v1571;
                                      v982 = GetProcessHeap();
                                      v983 = HeapAlloc(v982, 8u, v981);
                                      v984 = v983;
                                      if ( v983 )
                                      {
                                        v1675 = v983;
                                        LODWORD(v1674) = 0;
                                        if ( (int)RtlULongLongAdd(v983, 4LL, &v1679) >= 0
                                          && v984 + 2 <= (_DWORD *)((char *)v984 + HIDWORD(v1674)) )
                                        {
                                          v986 = v1679;
                                          v987 = (unsigned int)((_DWORD)v985 + 4);
                                          *v984 = v987;
                                          *v986 = v987;
                                          v988 = v1674 + 1;
                                          LODWORD(v1674) = v1674 + 1;
                                          if ( v1675 == v985 )
                                          {
                                            v989 = (unsigned int)v987;
                                            if ( (int)RtlUIntAdd(v987, 160LL, &v1576) < 0 )
                                              goto LABEL_1243;
                                            if ( (int)RtlUIntAdd(HIDWORD(v1674), v1576, (char *)&v1674 + 4) < 0 )
                                              goto LABEL_1244;
                                            goto LABEL_1229;
                                          }
                                          v991 = v1675;
                                          v1647 = v1675;
                                          if ( v988 )
                                          {
                                            while ( (int)RtlUIntAdd(v987, (unsigned int)*v991, &v1577) >= 0 )
                                            {
                                              if ( (int)RtlULongLongAdd(v991, v1577, &v1647) < 0 )
                                                goto LABEL_1535;
                                              v991 = v1647;
                                              v987 = 4LL;
                                              if ( v992 + 1 >= v993 )
                                                goto LABEL_1226;
                                            }
                                            goto LABEL_1243;
                                          }
LABEL_1226:
                                          if ( (int)RtlULongLongAdd(v991, v987, &v1663) >= 0
                                            && v991 + 41 <= (_DWORD *)((char *)v1675 + HIDWORD(v1674)) )
                                          {
                                            v994 = v1663;
                                            *v991 = 160;
                                            *v994 = *(_OWORD *)v971;
                                            v994[1] = *((_OWORD *)v971 + 1);
                                            v994[2] = *((_OWORD *)v971 + 2);
                                            v994[3] = *((_OWORD *)v971 + 3);
                                            v994[4] = *((_OWORD *)v971 + 4);
                                            v994[5] = *((_OWORD *)v971 + 5);
                                            v994[6] = *((_OWORD *)v971 + 6);
                                            v994[7] = *((_OWORD *)v971 + 7);
                                            v994[8] = *((_OWORD *)v971 + 8);
                                            v995 = *((_OWORD *)v971 + 9);
                                            v989 = 4LL;
                                            v994[9] = v995;
LABEL_1229:
                                            v996 = v1674 + 1;
                                            LODWORD(v1674) = v1674 + 1;
                                            if ( v1675 != v990 )
                                            {
                                              v998 = (unsigned int *)v1675;
                                              v1648 = (unsigned int *)v1675;
                                              if ( v996 )
                                              {
                                                while ( (int)RtlUIntAdd((unsigned int)v989, *v998, &v1579) >= 0 )
                                                {
                                                  if ( (int)RtlULongLongAdd(v999, v1579, &v1648) < 0 )
                                                    goto LABEL_1244;
                                                  v998 = v1648;
                                                  if ( v1000 + 1 >= v996 )
                                                    goto LABEL_1237;
                                                }
                                                goto LABEL_1243;
                                              }
LABEL_1237:
                                              if ( (int)RtlULongLongAdd(v998, v989, &v1667) < 0
                                                || v1001 + 3 > (_DWORD *)((char *)v1675 + HIDWORD(v1674)) )
                                              {
                                                goto LABEL_1244;
                                              }
                                              v1002 = v1667;
                                              *v1001 = 8;
                                              *v1002 = *v968;
                                              goto LABEL_1240;
                                            }
                                            if ( (int)RtlUIntAdd((unsigned int)v989, 8LL, &v1578) < 0 )
                                              goto LABEL_1243;
                                            if ( (int)RtlUIntAdd(HIDWORD(v1674), v1578, (char *)&v1674 + 4) >= 0 )
                                            {
LABEL_1240:
                                              v1003 = v1674 + 1;
                                              LODWORD(v1674) = v1674 + 1;
                                              if ( v1675 == v997 )
                                              {
                                                if ( (int)RtlUIntAdd((unsigned int)v989, 8LL, &v1590) < 0
                                                  || (int)RtlUIntAdd(HIDWORD(v1674), v1590, (char *)&v1674 + 4) < 0 )
                                                {
                                                  goto LABEL_1243;
                                                }
                                              }
                                              else
                                              {
                                                v1010 = (unsigned int *)v1675;
                                                v1649 = (unsigned int *)v1675;
                                                if ( v1003 )
                                                {
                                                  while ( (int)RtlUIntAdd((unsigned int)v989, *v1010, &v1581) >= 0
                                                       && (int)RtlULongLongAdd(v1011, v1581, &v1649) >= 0 )
                                                  {
                                                    v1010 = v1649;
                                                    if ( v1012 + 1 >= v1003 )
                                                      goto LABEL_1258;
                                                  }
                                                  goto LABEL_1243;
                                                }
LABEL_1258:
                                                if ( (int)RtlULongLongAdd(v1010, v989, &v1664) < 0
                                                  || v1013 + 3 > (_DWORD *)((char *)v1675 + HIDWORD(v1674)) )
                                                {
                                                  goto LABEL_1243;
                                                }
                                                v1014 = v1664;
                                                *v1013 = 8;
                                                *v1014 = v974;
                                              }
                                              LODWORD(v1674) = v1674 + 1;
                                              if ( (int)RtlUIntAdd((unsigned int)v989, (unsigned int)v989, &v1582) < 0 )
                                                goto LABEL_1243;
                                              v1016 = v1582;
                                              v1583 = v1582;
                                              if ( (int)RtlUIntAdd(v1015, 8LL, &v1584) < 0
                                                || (int)RtlUIntAdd(v1016, v1584, &v1583) < 0 )
                                              {
                                                goto LABEL_1243;
                                              }
                                              v1018 = v1017;
                                              v1512 = v1017;
                                              v1019 = (WCHAR *)v1017;
                                              v1341 = v1583;
                                              v1446 = (LPCWSTR)v1017;
                                              v1020 = (unsigned int *)v1017;
                                              v1364 = (unsigned int)v1017;
                                              v1532 = (SIZE_T)v1017;
                                              lpModuleNamei = (int)v1017;
                                              v1597 = v1017;
                                              v1385 = v1017;
                                              Srce = (LPVOID)__rdtsc();
                                              v1585 = 8;
                                              v1021 = RtlUIntAdd(8LL, HIDWORD(v1674), &v1585);
                                              if ( v1021 >= 0 )
                                              {
                                                v1024 = (v1585 + 7) & 0xFFFFFFF8;
                                                if ( v1024 < v1585 )
                                                  goto LABEL_1243;
                                                v1585 = (v1585 + 7) & 0xFFFFFFF8;
                                                v1025 = v1024;
                                                v1026 = GetProcessHeap();
                                                v1027 = HeapAlloc(v1026, 8u, v1025);
                                                Sizeg = v1027;
                                                if ( !v1027 )
                                                  goto LABEL_1243;
                                                v1650[0] = v1027;
                                                *v1027 = v1674;
                                                v1021 = RtlULongLongAdd(v1027, 4LL, v1650);
                                                if ( v1021 < 0
                                                  || (v1029 = v1650[0],
                                                      *(_DWORD *)v1650[0] = HIDWORD(v1674),
                                                      v1021 = RtlULongLongAdd(v1029, v1028, v1650),
                                                      v1021 < 0) )
                                                {
                                                  v1031 = GetProcessHeap();
                                                  HeapFree(v1031, 0, Sizeg);
                                                  v1022 = (unsigned int)v1018;
                                                }
                                                else
                                                {
                                                  *(_QWORD *)(v1585 + v1030 - 8) = Srce;
                                                  memcpy_0(v1650[0], v1675, HIDWORD(v1674));
                                                  v1019 = (WCHAR *)Sizeg;
                                                  v1022 = v1585;
                                                  v1446 = (LPCWSTR)Sizeg;
                                                  v1364 = v1585;
                                                }
                                                v1023 = 0LL;
                                              }
                                              v1032 = v1021 | 0x10000000;
                                              if ( v1032 < 0 )
                                                goto LABEL_1343;
                                              Srcf = v1023;
                                              if ( v1019 )
                                              {
                                                v1033 = v1022;
                                                Sizeh = v1022;
                                                if ( !v1022
                                                  || (v1531 = v1022 + 8LL, (v1537 = MemoryAlloc(v1531)) == 0LL) )
                                                {
                                                  v1032 = -805306367;
                                                  goto LABEL_1344;
                                                }
                                                v1034 = 0;
                                                v1035 = 0LL;
                                                v1303 = 0;
                                                if ( v1033 )
                                                {
                                                  do
                                                    v1034 ^= *((_BYTE *)v1019 + v1035++);
                                                  while ( v1035 < v1033 );
                                                  v1303 = v1034;
                                                }
                                                v1036 = (char *)v1537;
                                                v1037 = 0;
                                                v1038 = -1;
                                                v1473 = 0;
                                                v1411 = 0;
                                                v1039 = v1019;
                                                v1040 = v1364;
                                                v1733 = 0xC81ECB17B1B54A58uLL;
                                                v1041 = v1364 & 7;
                                                if ( (v1364 & 7) != 0 )
                                                {
                                                  v1042 = 0;
                                                  v1043 = 0;
                                                  v1365 = 0;
                                                  v1044 = 56;
                                                  do
                                                  {
                                                    v1045 = *(unsigned __int8 *)v1039;
                                                    v1039 = (WCHAR *)((char *)v1039 + 1);
                                                    if ( v1042 >= 4 )
                                                      v1043 |= v1045 << v1044;
                                                    else
                                                      v1037 |= v1045 << (v1044 - 32);
                                                    v1044 -= 8;
                                                    v1042 = v1365 + 1;
                                                    v1473 = v1043;
                                                    v1411 = v1037;
                                                    v1365 = v1042;
                                                  }
                                                  while ( v1042 < v1041 );
                                                  v1040 = Sizeh;
                                                  v1037 ^= 0xB17A307A;
                                                  v1046 = v1537;
                                                  v1047 = v1043 ^ 0x42F6B18D;
                                                  v1446 = v1019;
                                                  v1048 = v1037;
                                                  v1049 = v1047;
                                                  v1050 = (int)v1018;
                                                  do
                                                  {
                                                    v1366 = v1046 + 1;
                                                    if ( v1050 >= 4 )
                                                    {
                                                      v1049 = __ROL4__(v1049, 8);
                                                      v1051 = v1049;
                                                    }
                                                    else
                                                    {
                                                      v1048 = __ROL4__(v1048, 8);
                                                      v1051 = v1048;
                                                    }
                                                    *v1046 = v1051;
                                                    ++v1050;
                                                    ++v1046;
                                                  }
                                                  while ( v1050 < v1041 );
                                                  v1036 = v1366;
                                                  v1018 = v1512;
                                                  v1034 = v1303;
                                                  v1020 = (unsigned int *)v1512;
                                                  if ( (unsigned int)v1041 <= 4 )
                                                  {
                                                    v1038 = 0;
                                                    if ( (unsigned int)v1041 >= 4 )
                                                      goto LABEL_1295;
                                                    v1037 = v1037 >> (8 * (4 - v1041)) << (8 * (4 - v1041));
                                                  }
                                                  else
                                                  {
                                                    v1038 = v1047 >> (8 * (8 - v1041)) << (8 * (8 - v1041));
                                                  }
                                                  v1036 = v1366;
                                                }
LABEL_1295:
                                                v1052 = v1040 >> 3;
                                                if ( v1040 >> 3 )
                                                {
                                                  v1053 = v1036 + 7;
                                                  v1054 = WORD2(v1733);
                                                  v1055 = (unsigned __int8 *)(v1039 + 1);
                                                  v1056 = v1411;
                                                  v1057 = v1052;
                                                  v1367 = WORD1(v1733);
                                                  v1464 = HIWORD(v1733);
                                                  v1058 = v1473;
                                                  do
                                                  {
                                                    v1059 = *(v1055 - 1) | (*(v1055 - 2) << 8);
                                                    v1060 = v1055[2] << 8;
                                                    v1061 = *v1055;
                                                    v1055 += 8;
                                                    v1062 = *(v1055 - 7) | ((v1061 | (v1059 << 8)) << 8);
                                                    v1063 = *(v1055 - 3) | ((*(v1055 - 4) | ((*(v1055 - 5) | v1060) << 8)) << 8);
                                                    v1064 = v1063 ^ v1038;
                                                    v1065 = v1037 ^ v1062 ^ (v1064 - 19032);
                                                    v1066 = __ROR4__(v1065, 15);
                                                    v1067 = HIDWORD(v1733) ^ v1065;
                                                    v1068 = (__ROR4__(v1067, 7) + WORD1(v1733) * v1066) ^ v1064;
                                                    v1069 = (v1054 * __ROR4__(v1068 - 1313519016, 9)
                                                           - __ROR4__(v1068, 10)) ^ v1067;
                                                    v1070 = (__ROL4__(v1069, 5)
                                                           + HIWORD(v1733) * __ROL4__(v1054 ^ v1069, 4)) ^ v1068;
                                                    v1071 = (HIDWORD(v1733) - (v1070 ^ 0xB1B54A58)) ^ v1069;
                                                    v1072 = (WORD1(v1733) * (v1071 - 19032) - (v1071 >> 6)) ^ v1070;
                                                    v1073 = (19032 * (v1054 ^ __ROR4__(v1072, 15))) ^ v1071;
                                                    v1074 = (v1054 * (HIWORD(v1733) + __ROR4__(~v1073, 3))) ^ v1072;
                                                    v1075 = (v1074 - 19032 - HIDWORD(v1733)) ^ v1073;
                                                    v1076 = (v1367 * (v1464 ^ v1075)) ^ __ROR4__(v1075, 10) ^ v1074;
                                                    v1077 = __ROR4__(v1076, 3) ^ (v1054 * __ROL4__(v1076 ^ 0x4A58, 6)) ^ v1075;
                                                    v1078 = (19032 * (__ROR4__(v1077, 15) - HIWORD(v1733))) ^ v1076;
                                                    v1079 = (v1078 >> 15) ^ (19032 * __ROL4__(v1078 - v1054, 3)) ^ (v1078 >> 1) ^ (19032 * (HIWORD(v1733) ^ v1078)) ^ v1077;
                                                    v1080 = (WORD1(v1733) * (v1079 - v1054) - (v1079 >> 13)) ^ v1078;
                                                    v1081 = __ROR4__(v1080, 11) ^ (v1054
                                                                                 * __ROR4__(-1313519016 - v1080, 9)) ^ v1079;
                                                    v1082 = (v1081 - HIWORD(v1733) + 1313519016) ^ v1080;
                                                    v1083 = (19032 * (v1082 ^ WORD1(v1733)) - __ROR4__(v1082, 7)) ^ v1081;
                                                    v1084 = (WORD1(v1733) * __ROL4__(v1083 ^ HIWORD(v1733), 4)
                                                           - __ROR4__(v1083, 16)) ^ v1082;
                                                    v1085 = (__ROR4__(v1084, 4)
                                                           + v1054 * __ROR4__(-1313519016 - v1084, 10)) ^ v1083;
                                                    v1086 = __ROR4__(v1085, 9) ^ (HIWORD(v1733)
                                                                                * __ROR4__(v1085 + 1313519016, 4)) ^ v1084;
                                                    v1087 = (19032 * __ROL4__(v1086 ^ HIDWORD(v1733), 8)
                                                           - __ROL4__(v1086, 2)) ^ v1085;
                                                    v1088 = (WORD1(v1733) * __ROR4__(HIDWORD(v1733) - v1087, 11)
                                                           - __ROR4__(v1087, 12)) ^ v1086;
                                                    v1089 = (v1088 >> 8) ^ (v1054 * (v1088 ^ WORD1(v1733))) ^ v1087;
                                                    v1090 = v1089 ^ HIDWORD(v1733) ^ v1088 ^ 0xB1B54A58;
                                                    v1091 = v1056 ^ v1089;
                                                    *(v1053 - 4) = v1091;
                                                    v1092 = v1058 ^ v1090;
                                                    *v1053 = v1092;
                                                    v1056 = v1062;
                                                    v1093 = __ROR4__(v1091, 8);
                                                    v1058 = v1063;
                                                    *(v1053 - 5) = v1093;
                                                    v1053 += 8;
                                                    v1094 = __ROR4__(v1092, 8);
                                                    *(v1053 - 9) = v1094;
                                                    v1095 = __ROR4__(v1093, 8);
                                                    *(v1053 - 14) = v1095;
                                                    v1096 = __ROR4__(v1094, 8);
                                                    *(v1053 - 10) = v1096;
                                                    v1097 = __ROR4__(v1095, 8);
                                                    v1098 = __ROR4__(v1096, 8);
                                                    *(v1053 - 15) = v1097;
                                                    *(v1053 - 11) = v1098;
                                                    v1038 = __ROR4__(v1098, 8);
                                                    v1037 = __ROR4__(v1097, 8);
                                                    --v1057;
                                                  }
                                                  while ( v1057 );
                                                  v1018 = v1512;
                                                  v1034 = v1303;
                                                  v1020 = (unsigned int *)v1512;
                                                  v95 = v1497;
                                                  v1019 = (WCHAR *)v1446;
                                                  v1040 = Sizeh;
                                                }
                                                v1099 = v1537;
                                                *(_QWORD *)((char *)v1537 + v1040) = v1034;
                                                v1650[4] = (void *)160;
                                                v1100 = GetProcessHeap();
                                                v1101 = (unsigned int *)HeapAlloc(v1100, 8u, 0x30uLL);
                                                if ( v1101 )
                                                {
                                                  *v1101 = v1531;
                                                  v1113 = GetProcessHeap();
                                                  v1114 = HeapAlloc(v1113, 8u, (unsigned int)v1531);
                                                  if ( v1114 )
                                                  {
                                                    *((_QWORD *)v1101 + 1) = v1114;
                                                    memcpy_0(v1114, v1099, (unsigned int)v1531);
                                                    v1101[4] = 160;
                                                    v1115 = GetProcessHeap();
                                                    v1116 = HeapAlloc(v1115, 8u, 0xA0uLL);
                                                    v1102 = 0;
                                                    if ( v1116 )
                                                    {
                                                      *((_QWORD *)v1101 + 3) = v1116;
                                                      *v1116 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                                                      v1116[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                                                      v1116[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                                                      v1116[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                                                      v1116[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                                                      v1116[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                                                      v1116[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                                                      v1116[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                                                      v1116[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                                                      v1116[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                                                      v1101[8] = 8;
                                                      v1117 = GetProcessHeap();
                                                      v1118 = HeapAlloc(v1117, 8u, 8uLL);
                                                      if ( v1118 )
                                                      {
                                                        *((_QWORD *)v1101 + 5) = v1118;
                                                        *v1118 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                                                        v1018 = (const void **)v1101;
                                                        v1103 = 0LL;
LABEL_1302:
                                                        v1104 = GetProcessHeap();
                                                        HeapFree(v1104, 0, v1537);
                                                        if ( v1103 )
                                                        {
                                                          v1447 = (WCHAR *)v1103[1];
                                                          if ( v1447 )
                                                          {
                                                            v1105 = GetProcessHeap();
                                                            HeapFree(v1105, 0, v1447);
                                                            v1103[1] = 0LL;
                                                          }
                                                          v1448 = (WCHAR *)v1103[3];
                                                          if ( v1448 )
                                                          {
                                                            v1106 = GetProcessHeap();
                                                            HeapFree(v1106, 0, v1448);
                                                            v1103[3] = 0LL;
                                                          }
                                                          v1449 = (WCHAR *)v1103[5];
                                                          if ( v1449 )
                                                          {
                                                            v1107 = GetProcessHeap();
                                                            HeapFree(v1107, 0, v1449);
                                                            v1103[5] = 0LL;
                                                          }
                                                          v1108 = GetProcessHeap();
                                                          HeapFree(v1108, 0, v1103);
                                                        }
                                                        v1032 = v1102 | 0x10000000;
                                                        if ( v1032 < 0 )
                                                          goto LABEL_1343;
                                                        v1109 = *(unsigned int *)v1018;
                                                        LODWORD(v1586) = 4;
                                                        v1110 = RtlUIntAdd(4LL, v1109, &v1586);
                                                        if ( v1110 >= 0 )
                                                        {
                                                          v1110 = RtlUIntAdd((unsigned int)v1586, v1111, &v1586);
                                                          if ( v1110 >= 0 )
                                                          {
                                                            v1110 = RtlUIntAdd(
                                                                      (unsigned int)v1586,
                                                                      *((unsigned int *)v1018 + 4),
                                                                      &v1586);
                                                            if ( v1110 >= 0 )
                                                            {
                                                              v1110 = RtlUIntAdd((unsigned int)v1586, v1112, &v1586);
                                                              if ( v1110 >= 0 )
                                                              {
                                                                v1110 = RtlUIntAdd(
                                                                          (unsigned int)v1586,
                                                                          *((unsigned int *)v1018 + 8),
                                                                          &v1586);
                                                                if ( v1110 >= 0 )
                                                                {
                                                                  v1368 = v1586;
                                                                  v1123 = v1586;
                                                                  v1124 = GetProcessHeap();
                                                                  v1125 = HeapAlloc(v1124, 8u, v1123);
                                                                  v1126 = v1125;
                                                                  if ( !v1125 )
                                                                    goto LABEL_1400;
                                                                  v1651 = v1125;
                                                                  *v1125 = *(_DWORD *)v1018;
                                                                  v1110 = RtlULongLongAdd(v1125, 4LL, &v1651);
                                                                  if ( v1110 >= 0 )
                                                                  {
                                                                    memcpy_0(v1651, v1018[1], *(unsigned int *)v1018);
                                                                    v1110 = RtlULongLongAdd(
                                                                              v1651,
                                                                              *(unsigned int *)v1018,
                                                                              &v1651);
                                                                    if ( v1110 >= 0 )
                                                                    {
                                                                      v1127 = v1651;
                                                                      *(_DWORD *)v1651 = *((_DWORD *)v1018 + 4);
                                                                      v1110 = RtlULongLongAdd(v1127, 4LL, &v1651);
                                                                      if ( v1110 >= 0 )
                                                                      {
                                                                        memcpy_0(
                                                                          v1651,
                                                                          v1018[3],
                                                                          *((unsigned int *)v1018 + 4));
                                                                        v1110 = RtlULongLongAdd(
                                                                                  v1651,
                                                                                  *((unsigned int *)v1018 + 4),
                                                                                  &v1651);
                                                                        if ( v1110 >= 0 )
                                                                        {
                                                                          v1128 = v1651;
                                                                          *(_DWORD *)v1651 = *((_DWORD *)v1018 + 8);
                                                                          v1110 = RtlULongLongAdd(v1128, 4LL, &v1651);
                                                                          if ( v1110 >= 0 )
                                                                          {
                                                                            memcpy_0(
                                                                              v1651,
                                                                              v1018[5],
                                                                              *((unsigned int *)v1018 + 8));
                                                                            v1110 = RtlULongLongAdd(
                                                                                      v1651,
                                                                                      *((unsigned int *)v1018 + 8),
                                                                                      &v1651);
                                                                            if ( v1110 >= 0 )
                                                                            {
                                                                              v1532 = (SIZE_T)v1126;
                                                                              v1129 = v1368;
                                                                              lpModuleNamei = v1368;
                                                                              goto LABEL_1339;
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                  v1130 = GetProcessHeap();
                                                                  HeapFree(v1130, 0, v1126);
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                        v1129 = v1532;
LABEL_1339:
                                                        v1032 = v1110 | 0x10000000;
                                                        if ( v1032 < 0 )
                                                          goto LABEL_1343;
                                                        v1587 = 8;
                                                        v1131 = RtlUIntAdd(8LL, v1341, &v1587);
                                                        v1032 = v1131 | 0x10000000;
                                                        if ( v1131 >= 0 )
                                                        {
                                                          v1135 = (v1587 + 7) & 0xFFFFFFF8;
                                                          if ( v1135 >= v1587 )
                                                          {
                                                            v1588 = (v1587 + 7) & 0xFFFFFFF8;
                                                            v1032 = RtlUIntAdd(v1135, v1132, &v1588);
                                                            if ( v1032 >= 0 )
                                                            {
                                                              if ( v1675 && (unsigned int)v1674 > 1 )
                                                              {
                                                                v1652 = (unsigned int *)v1675;
                                                                v1032 = RtlULongLongAdd(v1675, 4LL, &v1652);
                                                                if ( v1032 >= 0 )
                                                                {
                                                                  v1032 = RtlULongLongAdd(v1652, v1156, &v1652);
                                                                  if ( v1032 >= 0 )
                                                                  {
                                                                    v1342 = *v1652;
                                                                    v1032 = RtlULongLongAdd(v1652, 4LL, &v1652);
                                                                    if ( v1032 >= 0 )
                                                                    {
                                                                      if ( (unsigned int)v1674 > 2 )
                                                                      {
                                                                        v1158 = (unsigned int *)v1675;
                                                                        v1653 = (unsigned int *)v1675;
                                                                        v1532 = v1157;
                                                                        lpModuleNamei = v1129;
                                                                        while ( 1 )
                                                                        {
                                                                          v1159 = *v1158;
                                                                          v1032 = RtlULongLongAdd(v1158, 4LL, &v1653);
                                                                          if ( v1032 < 0 )
                                                                            break;
                                                                          v1032 = RtlULongLongAdd(v1653, v1159, &v1653);
                                                                          if ( v1032 < 0 )
                                                                            break;
                                                                          v1158 = v1653;
                                                                          if ( (unsigned int)(v1160 + 1) >= 2 )
                                                                          {
                                                                            v1032 = RtlULongLongAdd(v1653, 4LL, &v1653);
                                                                            if ( v1032 < 0 )
                                                                              goto LABEL_1343;
                                                                            LODWORD(v1589) = 4;
                                                                            v1162 = RtlUIntAdd(4LL, v1161, &v1589);
                                                                            v1134 = 0;
                                                                            v1032 = v1162;
                                                                            if ( v1162 < 0
                                                                              || (v1032 = RtlUIntAdd(
                                                                                            (unsigned int)v1589,
                                                                                            4LL,
                                                                                            &v1589),
                                                                                  v1032 < 0)
                                                                              || (v1032 = RtlUIntAdd(
                                                                                            (unsigned int)v1589,
                                                                                            v1342,
                                                                                            &v1589),
                                                                                  v1032 < 0)
                                                                              || (v1032 = RtlUIntAdd(
                                                                                            (unsigned int)v1589,
                                                                                            4LL,
                                                                                            &v1589),
                                                                                  v1032 < 0)
                                                                              || (v1032 = RtlUIntAdd(
                                                                                            (unsigned int)v1589,
                                                                                            v1163,
                                                                                            &v1589),
                                                                                  v1032 < 0) )
                                                                            {
                                                                              if ( v1032 < 0 )
                                                                                goto LABEL_1396;
                                                                              v1164 = HIDWORD(v1589);
                                                                            }
                                                                            else
                                                                            {
                                                                              v1164 = v1589;
                                                                            }
                                                                            v1343 = v1164;
                                                                            if ( v1164 > 0x400000 )
                                                                            {
                                                                              v1032 = -2147418113;
                                                                              goto LABEL_1343;
                                                                            }
                                                                            goto LABEL_1397;
                                                                          }
                                                                        }
                                                                      }
                                                                      else
                                                                      {
                                                                        v1032 = -1073741811;
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v1032 = -1073741811;
                                                              }
                                                            }
                                                          }
                                                          else
                                                          {
                                                            v1032 = -1073741675;
                                                          }
                                                          goto LABEL_1343;
                                                        }
LABEL_1396:
                                                        v1164 = v1134;
                                                        v1343 = v1134;
                                                        if ( v1032 < 0 )
                                                          goto LABEL_1343;
LABEL_1397:
                                                        v1453 = v1019;
                                                        v1165 = v1133;
                                                        v1513 = v1018;
                                                        v1166 = v1164;
                                                        v1167 = GetProcessHeap();
                                                        v1168 = (unsigned int *)HeapAlloc(v1167, 8u, v1166);
                                                        if ( v1168 )
                                                        {
                                                          v1020 = v1168;
                                                          if ( !v1165 )
                                                          {
                                                            v1032 = -2147024809;
                                                            v1532 = 0LL;
                                                            goto LABEL_1343;
                                                          }
                                                          v1685 = lpModuleNamei;
                                                          v1686 = v1343;
                                                          v1684[0] = v1165;
                                                          v1684[1] = v1168;
                                                          v1687 = 0;
                                                          if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                                            && (v1169 = GetProcAddress(
                                                                          hModule,
                                                                          "NtQuerySystemInformation")) != 0LL )
                                                          {
                                                            v1170 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1169)(
                                                                      134LL,
                                                                      v1684);
                                                            v1171 = v1343;
                                                            v1032 = v1170 | 0x10000000;
                                                            if ( v1170 >= 0 )
                                                            {
                                                              v1171 = v1686;
                                                              v1172 = v1019;
                                                              v1173 = v1018;
                                                              goto LABEL_1412;
                                                            }
                                                          }
                                                          else
                                                          {
                                                            v1174 = GetLastError();
                                                            v1032 = v1174;
                                                            if ( v1174 > 0 )
                                                              v1032 = (unsigned __int16)v1174 | 0x80070000;
                                                            v1171 = v1343;
                                                            if ( v1032 >= 0 )
                                                              v1032 = -2147467259;
                                                          }
                                                          v1532 = v1165;
                                                          if ( v1032 == -805306333 )
                                                          {
                                                            v1032 = -2147024774;
                                                            goto LABEL_1343;
                                                          }
                                                          v1173 = v1018;
                                                          v1172 = v1019;
                                                          if ( v1032 < 0 )
                                                          {
LABEL_1343:
                                                            if ( !v1019 )
                                                            {
LABEL_1345:
                                                              if ( v1018 )
                                                              {
                                                                v1137 = (void *)v1018[1];
                                                                if ( v1137 )
                                                                {
                                                                  v1138 = GetProcessHeap();
                                                                  HeapFree(v1138, 0, v1137);
                                                                  v1018[1] = 0LL;
                                                                }
                                                                v1139 = (void *)v1018[3];
                                                                if ( v1139 )
                                                                {
                                                                  v1140 = GetProcessHeap();
                                                                  HeapFree(v1140, 0, v1139);
                                                                  v1018[3] = 0LL;
                                                                }
                                                                v1141 = (void *)v1018[5];
                                                                if ( v1141 )
                                                                {
                                                                  v1142 = GetProcessHeap();
                                                                  HeapFree(v1142, 0, v1141);
                                                                  v1018[5] = 0LL;
                                                                }
                                                                v1143 = GetProcessHeap();
                                                                HeapFree(v1143, 0, v1018);
                                                              }
                                                              v1144 = (void *)v1532;
                                                              if ( v1532 )
                                                              {
                                                                v1145 = GetProcessHeap();
                                                                HeapFree(v1145, 0, v1144);
                                                              }
                                                              if ( v1020 )
                                                              {
                                                                v1146 = GetProcessHeap();
                                                                HeapFree(v1146, 0, v1020);
                                                              }
                                                              v1147 = v1597;
                                                              if ( v1597 )
                                                              {
                                                                v1148 = (void *)*((_QWORD *)v1597 + 1);
                                                                if ( v1148 )
                                                                {
                                                                  v1149 = GetProcessHeap();
                                                                  HeapFree(v1149, 0, v1148);
                                                                  v1147[1] = 0LL;
                                                                }
                                                                v1150 = (void *)v1147[3];
                                                                if ( v1150 )
                                                                {
                                                                  v1151 = GetProcessHeap();
                                                                  HeapFree(v1151, 0, v1150);
                                                                  v1147[3] = 0LL;
                                                                }
                                                                v1152 = (void *)v1147[5];
                                                                if ( v1152 )
                                                                {
                                                                  v1153 = GetProcessHeap();
                                                                  HeapFree(v1153, 0, v1152);
                                                                  v1147[5] = 0LL;
                                                                }
                                                                v1154 = GetProcessHeap();
                                                                HeapFree(v1154, 0, v1147);
                                                              }
                                                              if ( v1385 )
                                                              {
                                                                v1155 = GetProcessHeap();
                                                                HeapFree(v1155, 0, v1385);
                                                              }
                                                              if ( v1032 >= 0 && LODWORD(v1678[0]) && v1678[1] )
                                                              {
                                                                v1659[0] = v1678[1];
                                                                RtlULongLongAdd(v1678[1], 4LL, v1659);
                                                              }
                                                              goto LABEL_1243;
                                                            }
LABEL_1344:
                                                            v1136 = GetProcessHeap();
                                                            HeapFree(v1136, 0, v1019);
                                                            goto LABEL_1345;
                                                          }
LABEL_1412:
                                                          if ( v1171 >= 4 )
                                                          {
                                                            v1175 = *v1020;
                                                            v1176 = v1020 + 1;
                                                            v1344 = *v1020;
                                                            if ( v1020 + 1 < v1020 )
                                                              goto LABEL_1433;
                                                            if ( v1171 - 4 >= (unsigned int)v1175 )
                                                            {
                                                              v1177 = (unsigned int *)((char *)v1176 + v1175);
                                                              v1532 = *v1020;
                                                              v1507 = (char *)v1176 + v1175;
                                                              if ( (unsigned int *)((char *)v1176 + v1175) < v1176
                                                                || (unsigned int)(v1175 + 4) < 4 )
                                                              {
                                                                goto LABEL_1433;
                                                              }
                                                              if ( v1171 - ((_DWORD)v1175 + 4) >= 4 )
                                                              {
                                                                v1178 = *v1177;
                                                                v1179 = v1177 + 1;
                                                                if ( v1177 + 1 < v1177 )
                                                                  goto LABEL_1433;
                                                                v1180 = v1175 + 8;
                                                                if ( (int)v1175 + 8 < (unsigned int)(v1175 + 4) )
                                                                  goto LABEL_1433;
                                                                if ( v1171 - v1180 >= (unsigned int)v1178 )
                                                                {
                                                                  if ( (unsigned int *)((char *)v1179 + v1178) < v1179 )
                                                                    goto LABEL_1433;
                                                                  v1181 = v1178 + v1180;
                                                                  if ( (unsigned int)v1178 + v1180 < v1180 )
                                                                    goto LABEL_1433;
                                                                  if ( v1171 - v1181 >= 4 )
                                                                  {
                                                                    v1182 = *(unsigned int *)((char *)v1179 + v1178);
                                                                    Srcg = (char *)v1179 + v1178 + 4;
                                                                    if ( Srcg < (char *)v1179 + v1178 )
                                                                      goto LABEL_1433;
                                                                    v1183 = v1181 + 4;
                                                                    if ( v1181 + 4 < v1181 )
                                                                      goto LABEL_1433;
                                                                    if ( v1171 - v1183 >= (unsigned int)v1182 )
                                                                    {
                                                                      if ( v1183 + (unsigned int)v1182 >= v1183 )
                                                                      {
                                                                        if ( v1171 == v1183 + (_DWORD)v1182
                                                                          && (unsigned int)(v1178 + v1182 + v1175)
                                                                           + 12LL == v1171 )
                                                                        {
                                                                          v1184 = GetProcessHeap();
                                                                          Sizei = HeapAlloc(v1184, 8u, 0x30uLL);
                                                                          if ( !Sizei )
                                                                          {
                                                                            v1018 = v1513;
                                                                            v1032 = -805306345;
                                                                            v1019 = (WCHAR *)v1453;
                                                                            v1532 = v1165;
                                                                            goto LABEL_1343;
                                                                          }
                                                                          if ( v1020 == (unsigned int *)-4LL )
                                                                          {
                                                                            *(_DWORD *)Sizei = 0;
                                                                            Sizei[1] = 0LL;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)Sizei = v1344;
                                                                            v1185 = GetProcessHeap();
                                                                            v1186 = HeapAlloc(v1185, 8u, v1532);
                                                                            if ( !v1186 )
                                                                              goto LABEL_1446;
                                                                            Sizei[1] = v1186;
                                                                            memcpy_0(v1186, v1020 + 1, v1532);
                                                                          }
                                                                          if ( v1507 == (char *)-4LL )
                                                                          {
                                                                            *((_DWORD *)Sizei + 4) = 0;
                                                                            Sizei[3] = 0LL;
                                                                          }
                                                                          else
                                                                          {
                                                                            *((_DWORD *)Sizei + 4) = v1178;
                                                                            v1187 = GetProcessHeap();
                                                                            v1188 = HeapAlloc(v1187, 8u, v1178);
                                                                            if ( !v1188 )
                                                                              goto LABEL_1446;
                                                                            Sizei[3] = v1188;
                                                                            memcpy_0(v1188, v1507 + 4, v1178);
                                                                          }
                                                                          if ( !Srcg )
                                                                          {
                                                                            *((_DWORD *)Sizei + 8) = 0;
                                                                            Sizei[5] = 0LL;
                                                                            goto LABEL_1461;
                                                                          }
                                                                          *((_DWORD *)Sizei + 8) = v1182;
                                                                          v1189 = GetProcessHeap();
                                                                          v1190 = HeapAlloc(v1189, 8u, v1182);
                                                                          if ( v1190 )
                                                                          {
                                                                            Sizei[5] = v1190;
                                                                            memcpy_0(v1190, Srcg, v1182);
LABEL_1461:
                                                                            v1018 = v1513;
                                                                            v1019 = (WCHAR *)v1453;
                                                                            v1597 = Sizei;
                                                                            v1191 = 0;
                                                                            v1508 = v1020;
                                                                            v1532 = v1165;
                                                                            v1198 = (unsigned int *)Sizei;
                                                                            goto LABEL_1462;
                                                                          }
LABEL_1446:
                                                                          v1018 = v1513;
                                                                          v1191 = -1073741801;
                                                                          v1019 = (WCHAR *)v1453;
                                                                          v1532 = v1165;
                                                                          v1192 = Sizei;
                                                                          v1597 = 0LL;
                                                                          Srch = (void *)Sizei[1];
                                                                          if ( Srch )
                                                                          {
                                                                            v1193 = GetProcessHeap();
                                                                            HeapFree(v1193, 0, Srch);
                                                                            v1192 = Sizei;
                                                                            Sizei[1] = 0LL;
                                                                          }
                                                                          Srci = (void *)v1192[3];
                                                                          if ( Srci )
                                                                          {
                                                                            v1194 = GetProcessHeap();
                                                                            HeapFree(v1194, 0, Srci);
                                                                            v1192 = Sizei;
                                                                            Sizei[3] = 0LL;
                                                                          }
                                                                          Srcj = (void *)v1192[5];
                                                                          if ( Srcj )
                                                                          {
                                                                            v1195 = GetProcessHeap();
                                                                            HeapFree(v1195, 0, Srcj);
                                                                            Sizei[5] = 0LL;
                                                                          }
                                                                          v1196 = GetProcessHeap();
                                                                          HeapFree(v1196, 0, Sizei);
                                                                          v1197 = v1597;
                                                                          v1198 = 0LL;
                                                                          v1597 = 0LL;
                                                                          v1508 = v1020;
                                                                          v1532 = v1165;
                                                                          if ( v1197 )
                                                                          {
                                                                            v1199 = (void *)v1197[1];
                                                                            v1200 = v1197;
                                                                            if ( v1199 )
                                                                            {
                                                                              v1201 = GetProcessHeap();
                                                                              HeapFree(v1201, 0, v1199);
                                                                              v1200[1] = 0LL;
                                                                            }
                                                                            v1202 = (void *)v1200[3];
                                                                            if ( v1202 )
                                                                            {
                                                                              v1203 = GetProcessHeap();
                                                                              HeapFree(v1203, 0, v1202);
                                                                              v1200[3] = 0LL;
                                                                            }
                                                                            v1204 = (void *)v1200[5];
                                                                            if ( v1204 )
                                                                            {
                                                                              v1205 = GetProcessHeap();
                                                                              HeapFree(v1205, 0, v1204);
                                                                              v1200[5] = 0LL;
                                                                            }
                                                                            v1206 = GetProcessHeap();
                                                                            HeapFree(v1206, 0, v1200);
                                                                            v1018 = v1513;
                                                                            v1191 = -1073741801;
                                                                            v1198 = 0LL;
                                                                            v1597 = 0LL;
                                                                            v1508 = v1020;
                                                                            v1532 = v1165;
                                                                          }
LABEL_1462:
                                                                          v1032 = v1191 | 0x10000000;
                                                                          if ( v1032 < 0 )
                                                                            goto LABEL_1343;
                                                                          if ( !v1198
                                                                            || (Sizej = *((_QWORD *)v1198 + 1)) == 0
                                                                            || !*v1198 )
                                                                          {
                                                                            v1032 = -805306355;
                                                                            goto LABEL_1343;
                                                                          }
                                                                          v1531 = *v1198 - 8LL;
                                                                          v1207 = v1531;
                                                                          v1208 = (WCHAR *)MemoryAlloc(v1531);
                                                                          v1209 = 0;
                                                                          v1386 = (SIZE_T)v1208;
                                                                          v1210 = v1208;
                                                                          if ( !v1208 )
                                                                            goto LABEL_1493;
                                                                          v1211 = (unsigned __int8 *)Sizej;
                                                                          v1734 = 0x7F1137FAB69605ELL;
                                                                          v1212 = 0;
                                                                          v1345 = 0;
                                                                          v1213 = v1207 & 7;
                                                                          if ( (v1207 & 7) != 0 )
                                                                          {
                                                                            v1214 = 56;
                                                                            v1215 = (unsigned __int8 *)Sizej;
                                                                            v1216 = 0;
                                                                            do
                                                                            {
                                                                              v1217 = *v1215++;
                                                                              if ( v1209 >= 4 )
                                                                              {
                                                                                v1218 = v1345;
                                                                                v1216 |= v1217 << v1214;
                                                                              }
                                                                              else
                                                                              {
                                                                                v1218 = (v1217 << (v1214 - 32)) | v1345;
                                                                                v1345 = v1218;
                                                                              }
                                                                              ++v1209;
                                                                              v1214 -= 8;
                                                                            }
                                                                            while ( v1209 < (int)v1213 );
                                                                            v95 = v1497;
                                                                            v1508 = v1020;
                                                                            v1219 = v1216;
                                                                            v1536 = v1216;
                                                                            v1210 = (WCHAR *)v1386;
                                                                            v1220 = v1219 ^ 0x699A899C;
                                                                            v1369 = v1218 ^ 0x92F65A5;
                                                                            v1221 = 0;
                                                                            v1222 = v1218 ^ 0x92F65A5;
                                                                            v1223 = v1220;
                                                                            v1532 = v1165;
                                                                            v1513 = v1018;
                                                                            v1224 = (_BYTE *)v1386;
                                                                            v1453 = v1019;
                                                                            do
                                                                            {
                                                                              lpModuleNamej = (LPCWSTR)(v1224 + 1);
                                                                              if ( v1221 >= 4 )
                                                                              {
                                                                                v1223 = __ROL4__(v1223, 8);
                                                                                v1225 = v1223;
                                                                              }
                                                                              else
                                                                              {
                                                                                v1222 = __ROL4__(v1222, 8);
                                                                                v1225 = v1222;
                                                                              }
                                                                              *v1224 = v1225;
                                                                              ++v1221;
                                                                              ++v1224;
                                                                            }
                                                                            while ( v1221 < (int)v1213 );
                                                                            v1212 = 0;
                                                                            v1226 = lpModuleNamej;
                                                                            v1165 = v1532;
                                                                            v1227 = v1369;
                                                                            v1207 = v1531;
                                                                            if ( v1213 > 4 )
                                                                            {
                                                                              v1209 = v1220 >> (8 * (8 - v1213)) << (8 * (8 - v1213));
                                                                              v1226 = lpModuleNamej;
LABEL_1481:
                                                                              v1211 = v1215;
                                                                              goto LABEL_1482;
                                                                            }
                                                                            v1209 = 0;
                                                                            if ( v1213 >= 4 )
                                                                              goto LABEL_1481;
                                                                            v1211 = v1215;
                                                                            v1227 = v1369 >> (8 * (4 - v1213)) << (8 * (4 - v1213));
                                                                            v1226 = lpModuleNamej;
                                                                          }
                                                                          else
                                                                          {
                                                                            v1227 = 0;
                                                                            v1226 = v1210;
                                                                          }
LABEL_1482:
                                                                          v1228 = v1207 >> 3;
                                                                          if ( v1207 >> 3 )
                                                                          {
                                                                            v1229 = HIDWORD(v1734);
                                                                            v1230 = (char *)v1226 + 7;
                                                                            v1231 = v1211 + 2;
                                                                            v1232 = v1345;
                                                                            v1233 = HIDWORD(v1734) ^ 0xAB69605E;
                                                                            v1370 = HIDWORD(v1734) ^ 0xAB69605E;
                                                                            v1234 = v1228;
                                                                            v1235 = WORD2(v1734);
                                                                            do
                                                                            {
                                                                              v1236 = *(v1231 - 1) | (*(v1231 - 2) << 8);
                                                                              v1237 = v1231[2] << 8;
                                                                              v1238 = *v1231;
                                                                              v1231 += 8;
                                                                              v1239 = *(v1231 - 7) | ((v1238 | (v1236 << 8)) << 8);
                                                                              v1240 = v1239 ^ v1227;
                                                                              v1241 = *(v1231 - 3) | ((*(v1231 - 4) | ((*(v1231 - 5) | v1237) << 8)) << 8);
                                                                              v1242 = v1233 ^ v1240 ^ v1241 ^ v1209;
                                                                              v1243 = (__ROL4__(v1242, 10)
                                                                                     + v1235
                                                                                     * __ROL4__(v1242 + 1419157410, 5)) ^ v1240;
                                                                              v1244 = (WORD1(v1734)
                                                                                     * __ROR4__(v1243 + v1229, 9)
                                                                                     - __ROL4__(v1243, 2)) ^ v1242;
                                                                              v1245 = (24670 * (v1244 - v1235)
                                                                                     - (v1244 >> 13)) ^ v1243;
                                                                              v1246 = (HIWORD(v1734)
                                                                                     * __ROL4__(WORD1(v1734) ^ v1245, 6)
                                                                                     - __ROL4__(v1245, 2)) ^ v1244;
                                                                              v1247 = (v1229 - (v1246 ^ 0xAB69605E)) ^ v1245;
                                                                              v1248 = (WORD1(v1734) * (v1235 ^ v1247)) ^ __ROR4__(v1247, 6) ^ v1246;
                                                                              v1249 = (__ROL4__(v1248, 2)
                                                                                     + 24670
                                                                                     * __ROR4__(v1248 + v1229, 15)) ^ v1247;
                                                                              v1250 = (HIWORD(v1734)
                                                                                     * __ROR4__(v1249 + 1419157410, 14)
                                                                                     - __ROL4__(v1249, 8)) ^ v1248;
                                                                              v1251 = __ROR4__(v1250, 10) ^ (v1235 * __ROR4__(v1250 ^ 0xAB69605E, 12)) ^ v1249;
                                                                              v1252 = (v1251 >> 10) ^ (WORD1(v1734) * (HIWORD(v1734) ^ v1251)) ^ v1250;
                                                                              v1253 = (HIWORD(v1734)
                                                                                     * (__ROR4__(~v1252, 5) + 24670)) ^ v1251;
                                                                              v1254 = v1252 ^ (v1253 - HIWORD(v1734)) ^ 0xAB69605E;
                                                                              v1255 = ((v1254 >> 2)
                                                                                     + v1235
                                                                                     * __ROL4__(
                                                                                         HIWORD(v1734) ^ v1254,
                                                                                         2)) ^ v1253;
                                                                              v1256 = (__ROL4__(v1255, 7)
                                                                                     + WORD1(v1734)
                                                                                     * __ROR4__(v1255 - v1229, 6)) ^ v1254;
                                                                              v1257 = (24670 * (v1235 ^ v1256)
                                                                                     + __ROR4__(v1256, 9)) ^ v1255;
                                                                              v1258 = (__ROL4__(v1257, 7)
                                                                                     + HIWORD(v1734)
                                                                                     * __ROL4__(WORD1(v1734) ^ v1257, 5)) ^ v1256;
                                                                              v1259 = v1229 ^ v1258 ^ v1257 ^ 0xAB69605E;
                                                                              v1260 = (v1235
                                                                                     * (__ROR4__(v1259, 3) - WORD1(v1734))) ^ v1258;
                                                                              v1261 = (24670
                                                                                     * __ROR4__(v1260 - v1229, 1)
                                                                                     - __ROR4__(v1260, 6)) ^ v1259;
                                                                              v1262 = (__ROL4__(v1261, 14)
                                                                                     + HIWORD(v1734)
                                                                                     * __ROL4__(v1261 - 1419157410, 3)) ^ v1260;
                                                                              v1263 = (v1235
                                                                                     * __ROL4__(v1262 - 1419157410, 15)
                                                                                     - __ROR4__(v1262, 14)) ^ v1261;
                                                                              v1233 = v1370;
                                                                              v1264 = (v1263 >> 3) ^ (WORD1(v1734) * (v1263 ^ 0x605E)) ^ v1262;
                                                                              v1265 = v1536 ^ v1264;
                                                                              v1536 = v1241;
                                                                              v1266 = v1232 ^ __ROL4__(v1264, 2) ^ (24670 * __ROL4__(v1229 ^ v1264, 4));
                                                                              v1232 = v1239;
                                                                              v1267 = v1266 ^ v1263;
                                                                              *(v1230 - 4) = v1267;
                                                                              *v1230 = v1265;
                                                                              v1230 += 8;
                                                                              v1268 = __ROR4__(v1267, 8);
                                                                              *(v1230 - 13) = v1268;
                                                                              v1269 = __ROR4__(v1265, 8);
                                                                              *(v1230 - 9) = v1269;
                                                                              v1270 = __ROR4__(v1268, 8);
                                                                              *(v1230 - 14) = v1270;
                                                                              v1271 = __ROR4__(v1269, 8);
                                                                              *(v1230 - 10) = v1271;
                                                                              v1272 = __ROR4__(v1270, 8);
                                                                              v1273 = __ROR4__(v1271, 8);
                                                                              *(v1230 - 15) = v1272;
                                                                              *(v1230 - 11) = v1273;
                                                                              v1209 = __ROR4__(v1273, 8);
                                                                              v1227 = __ROR4__(v1272, 8);
                                                                              --v1234;
                                                                            }
                                                                            while ( v1234 );
                                                                            v1212 = 0;
                                                                            v95 = v1497;
                                                                            v1018 = v1513;
                                                                            v1020 = v1508;
                                                                            v1019 = (WCHAR *)v1453;
                                                                            v1165 = v1532;
                                                                            v1210 = (WCHAR *)v1386;
                                                                            v1207 = v1531;
                                                                          }
                                                                          for ( ii = 0LL; ii < v1207; ++ii )
                                                                            v1212 ^= *((_BYTE *)v1210 + ii);
                                                                          v1275 = v1597;
                                                                          v1532 = v1165;
                                                                          if ( v1212 != *(_QWORD *)(v1207 + Sizej) )
                                                                          {
                                                                            MemoryFree(v1210);
LABEL_1493:
                                                                            v1032 = -805306367;
                                                                            v1385 = 0LL;
                                                                            goto LABEL_1343;
                                                                          }
                                                                          v1655 = v1210;
                                                                          v1602 = 0;
                                                                          if ( (unsigned int)v1207 < 4 )
                                                                          {
                                                                            v1532 = v1165;
LABEL_1530:
                                                                            v1385 = v1210;
                                                                            v1597 = v1275;
LABEL_1531:
                                                                            v1278 = -1073741762;
                                                                            goto LABEL_1532;
                                                                          }
                                                                          v1346 = *(_DWORD *)v1210;
                                                                          v1276 = RtlULongLongAdd(v1210, 4LL, &v1655);
                                                                          v1385 = v1277;
                                                                          v1278 = v1276;
                                                                          v1597 = v1279;
                                                                          v1532 = v1280;
                                                                          if ( v1276 < 0 )
                                                                            goto LABEL_1532;
                                                                          v1281 = RtlUIntAdd(0LL, 4LL, &v1602);
                                                                          v1385 = v1210;
                                                                          v1278 = v1281;
                                                                          v1597 = v1275;
                                                                          v1532 = v1282;
                                                                          if ( v1281 < 0 )
                                                                            goto LABEL_1532;
                                                                          if ( (unsigned int)v1531 - v1602 >= 4 )
                                                                          {
                                                                            v1371 = *(_DWORD *)v1655;
                                                                            v1283 = RtlULongLongAdd(v1655, 4LL, &v1655);
                                                                            v1385 = v1284;
                                                                            v1278 = v1283;
                                                                            v1597 = v1285;
                                                                            v1532 = v1286;
                                                                            if ( v1283 < 0 )
                                                                              goto LABEL_1532;
                                                                            v1287 = RtlUIntAdd(v1602, 4LL, &v1602);
                                                                            v1385 = v1210;
                                                                            v1278 = v1287;
                                                                            v1597 = v1275;
                                                                            v1532 = v1282;
                                                                            if ( v1287 < 0 )
                                                                              goto LABEL_1532;
                                                                            if ( (unsigned int)v1531 - v1602 >= v1371 )
                                                                            {
                                                                              v1288 = RtlUIntAdd(v1602, v1371, &v1602);
                                                                              v1385 = v1210;
                                                                              v1278 = v1288;
                                                                              v1597 = v1275;
                                                                              v1532 = v1282;
                                                                              if ( v1288 < 0 )
                                                                                goto LABEL_1532;
                                                                              if ( (char *)v1210 + (unsigned int)v1531 >= (char *)v1655 + v1371
                                                                                && (unsigned __int64)(unsigned int)v1531
                                                                                 + (char *)v1210
                                                                                 - v1371
                                                                                 - (_BYTE *)v1655 < 8 )
                                                                              {
                                                                                v1385 = v1210;
                                                                                Sizek = 0LL;
                                                                                v1289 = 0LL;
                                                                                lpModuleNamek = 0;
                                                                                v1278 = 0;
                                                                                v1597 = v1275;
                                                                                v1532 = v1282;
                                                                                if ( !v1655 )
                                                                                  goto LABEL_1520;
                                                                                v1531 = (SIZE_T)v1655;
                                                                                v1278 = RtlULongLongAdd(
                                                                                          v1655,
                                                                                          v1371,
                                                                                          &v1656);
                                                                                v1385 = v1290;
                                                                                v1597 = v1292;
                                                                                v1532 = v1291;
                                                                                if ( v1278 >= 0 )
                                                                                {
                                                                                  v1293 = v1531;
                                                                                  v1385 = v1290;
                                                                                  v1597 = v1292;
                                                                                  v1532 = v1291;
                                                                                  if ( v1531 < v1656 )
                                                                                  {
                                                                                    v1385 = v1290;
                                                                                    v1597 = v1292;
                                                                                    v1532 = v1165;
                                                                                    while ( 1 )
                                                                                    {
                                                                                      v1278 = RtlULongLongAdd(
                                                                                                v1293,
                                                                                                4LL,
                                                                                                &v1657);
                                                                                      if ( v1278 < 0 )
                                                                                        goto LABEL_1532;
                                                                                      if ( v1657 > v1295 )
                                                                                        goto LABEL_1516;
                                                                                      v1278 = RtlUIntAdd(
                                                                                                4LL,
                                                                                                *v1294,
                                                                                                &v1591);
                                                                                      if ( v1278 < 0 )
                                                                                        goto LABEL_1532;
                                                                                      v1278 = RtlULongLongAdd(
                                                                                                v1531,
                                                                                                v1591,
                                                                                                &v1658);
                                                                                      v1385 = v1297;
                                                                                      v1597 = v1296;
                                                                                      v1532 = v1165;
                                                                                      if ( v1278 < 0 )
                                                                                        goto LABEL_1532;
                                                                                      v1293 = v1658;
                                                                                      v1531 = v1658;
                                                                                      v1385 = v1297;
                                                                                      v1597 = v1296;
                                                                                      v1532 = v1165;
                                                                                      if ( v1658 > v1298 )
                                                                                        goto LABEL_1516;
                                                                                      ++lpModuleNamek;
                                                                                      if ( v1658 >= v1298 )
                                                                                      {
                                                                                        v1385 = v1297;
                                                                                        v1597 = v1296;
                                                                                        v1532 = v1165;
                                                                                        goto LABEL_1518;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  v1298 = v1656;
LABEL_1518:
                                                                                  if ( v1293 == v1298 )
                                                                                  {
                                                                                    v1289 = 0LL;
LABEL_1520:
                                                                                    if ( v1371 )
                                                                                    {
                                                                                      v1299 = GetProcessHeap();
                                                                                      v1300 = v1371;
                                                                                      Sizek = HeapAlloc(
                                                                                                v1299,
                                                                                                8u,
                                                                                                v1371);
                                                                                      v1289 = Sizek;
                                                                                      if ( !Sizek )
                                                                                      {
                                                                                        v1278 = -1073741801;
                                                                                        goto LABEL_1532;
                                                                                      }
                                                                                      v1278 = 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      v1300 = 0LL;
                                                                                    }
                                                                                    if ( v1655 )
                                                                                    {
                                                                                      memcpy_0(v1289, v1655, v1300);
                                                                                      v1289 = Sizek;
                                                                                    }
                                                                                    LODWORD(v1678[0]) = lpModuleNamek;
                                                                                    v1678[1] = v1289;
                                                                                    if ( v1346 == lpModuleNamek )
                                                                                      goto LABEL_1532;
                                                                                    goto LABEL_1531;
                                                                                  }
LABEL_1516:
                                                                                  v1278 = -1073741811;
                                                                                }
LABEL_1532:
                                                                                v1032 = v1278 | 0x10000000;
                                                                                goto LABEL_1343;
                                                                              }
                                                                            }
                                                                          }
                                                                          v1532 = v1282;
                                                                          goto LABEL_1530;
                                                                        }
                                                                        goto LABEL_1432;
                                                                      }
LABEL_1433:
                                                                      v1032 = -805306219;
                                                                      goto LABEL_1434;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
LABEL_1432:
                                                          v1032 = -805306306;
LABEL_1434:
                                                          v1532 = v1165;
                                                          v1018 = v1173;
                                                          v1019 = v1172;
                                                          goto LABEL_1343;
                                                        }
LABEL_1400:
                                                        v1032 = -805306345;
                                                        goto LABEL_1343;
                                                      }
                                                    }
                                                  }
                                                  v1102 = -1073741801;
                                                  v1450 = (WCHAR *)*((_QWORD *)v1101 + 1);
                                                  if ( v1450 )
                                                  {
                                                    v1119 = GetProcessHeap();
                                                    HeapFree(v1119, 0, v1450);
                                                    *((_QWORD *)v1101 + 1) = 0LL;
                                                  }
                                                  v1451 = (WCHAR *)*((_QWORD *)v1101 + 3);
                                                  if ( v1451 )
                                                  {
                                                    v1120 = GetProcessHeap();
                                                    HeapFree(v1120, 0, v1451);
                                                    *((_QWORD *)v1101 + 3) = 0LL;
                                                  }
                                                  v1452 = (WCHAR *)*((_QWORD *)v1101 + 5);
                                                  if ( v1452 )
                                                  {
                                                    v1121 = GetProcessHeap();
                                                    HeapFree(v1121, 0, v1452);
                                                    *((_QWORD *)v1101 + 5) = 0LL;
                                                  }
                                                  v1122 = GetProcessHeap();
                                                  HeapFree(v1122, 0, v1101);
                                                }
                                                else
                                                {
                                                  v1102 = -1073741801;
                                                }
                                                v1103 = Srcf;
                                                goto LABEL_1302;
                                              }
LABEL_1243:
                                              v968 = v1524;
                                            }
LABEL_1244:
                                            v175 = v1533;
                                            goto LABEL_1245;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
LABEL_1535:
                              v175 = v971;
                              goto LABEL_1245;
                            }
                            while ( 1 )
                            {
                              v955 = v954;
                              v956 = -1LL;
                              do
                                ++v956;
                              while ( v954[v956] );
                              v957 = &v954[v956];
                              v958 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1472;
                              if ( !GetModuleHandleExW(0, v955, (HMODULE *)v958) )
                                break;
                              v949 = 0;
                              if ( **(_WORD **)v958 == 23117
                                && (v959 = *(int *)(*(_QWORD *)v958 + 60LL), (unsigned int)v959 < 0x10000000)
                                && (v960 = *(_QWORD *)v958 + v959, v960 >= *(_QWORD *)v958)
                                && *(_DWORD *)v960 == 17744 )
                              {
                                if ( ((*(_WORD *)(v960 + 24) - 267) & 0xFEFF) != 0 )
                                {
                                  v949 = -1073741811;
                                }
                                else
                                {
                                  *(_QWORD *)(v958 + 12) = *(_QWORD *)(v960 + 136);
                                  *((_DWORD *)v958 + 2) = *(_DWORD *)(v960 + 80);
                                }
                              }
                              else
                              {
                                v949 = -1073741701;
                              }
                              v961 = *(_DWORD *)(v957 + 1);
                              v962 = 0;
                              v954 = v957 + 3;
                              lpModuleNameh = v961;
                              for ( jj = 0; v962 < lpModuleNameh; jj = v962 )
                              {
                                v963 = (const CHAR *)v954;
                                v964 = -1LL;
                                do
                                  ++v964;
                                while ( *((_BYTE *)v954 + v964) );
                                v954 = (WCHAR *)((char *)v954 + v964 + 1);
                                if ( v949 >= 0 )
                                {
                                  v965 = (void **)GetProcAddress(*(HMODULE *)v958, v963);
                                  if ( !v965 )
                                    goto LABEL_1165;
                                  (&WARBIRD::g_FuncAddress)[v1363] = v965;
                                  v962 = jj;
                                }
                                ++v1363;
                                ++v962;
                              }
                              ++v1472;
                              if ( !*(_BYTE *)v954 )
                                goto LABEL_1165;
                            }
                          }
                          else
                          {
                            MemoryFree(v1445);
                          }
                        }
                        v949 = -1073741702;
LABEL_1165:
                        if ( !v899 )
                          goto LABEL_1167;
                        goto LABEL_1166;
                      }
                      v765 = v1737;
                      v1637 = v1737;
                      memset_0(v1690, 0, 0x68uLL);
                      v766 = 1;
                      v767 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1372, 7LL);
                      if ( v767
                        && (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                           v767,
                                           104LL,
                                           v1690) )
                      {
                        if ( v1693 != 32 || !v1694 || v1691 <= 0 || v1692 <= 0 )
                          v766 = 0;
                        if ( v766 )
                        {
LABEL_938:
                          ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(&v1726, v765, HIDWORD(v1637));
                          ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(&v1727, v765, HIDWORD(v1637));
                          if ( v628 == 1 )
                            v1597 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_1807A9128)(v1718 == 0 ? 0xB26720 : 0);
LABEL_940:
                          v1418 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9180)(v1372, 1LL);
                          v768 = 2064;
                          if ( v1717 )
                            v768 = 133138;
                          v1315 = v768;
                          if ( v766 )
                          {
                            v769 = v1719;
                            v1480 = v1718;
                            v1334 = v1722;
                            memset_0(v1695, 0, 0x68uLL);
                            memset_0(v1699, 0, 0x68uLL);
                            LODWORD(v627) = 0;
                            v1356 = 0LL;
                            v1325 = 0;
                            v1352 = 0;
                            v1758 = 0LL;
                            v1759 = 0;
                            v1756 = 0LL;
                            v1757 = 0LL;
                            v1738 = 0LL;
                            if ( !v769 )
                              goto LABEL_1126;
                            v770 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1372, 7LL);
                            if ( !v770 )
                              goto LABEL_956;
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                                 v770,
                                                 104LL,
                                                 v1695) )
                            {
                              v1356 = v1698;
                              v1325 = v1696;
                              v1352 = v1697;
                            }
                            v771 = ((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1372);
                            if ( !v771 )
                              goto LABEL_956;
                            DWORD1(v1756) = DWORD2(v1726) - v1726;
                            DWORD2(v1756) = DWORD1(v1726) - HIDWORD(v1726);
                            v1638 = 0LL;
                            v1757 = 0LL;
                            v1758 = 0LL;
                            v1759 = 0;
                            LODWORD(v1756) = 40;
                            HIDWORD(v1756) = 2097153;
                            v1468 = (wchar_t *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                                                 v771,
                                                 &v1756,
                                                 0LL,
                                                 &v1638,
                                                 0LL,
                                                 0);
                            if ( v1468 )
                            {
                              v4 = (unsigned int)((__int64 (__fastcall *)(wchar_t *, __int64, _BYTE *))off_1807A9168)(
                                                   v1468,
                                                   104LL,
                                                   v1699) == 0;
                              v773 = 0LL;
                              if ( !v4 )
                                v773 = v1700;
                              DWORD2(v1738) = DWORD2(v1726) - v1726;
                              HIDWORD(v1738) = HIDWORD(v1726) - DWORD1(v1726);
                              v1404 = v773;
                              ((void (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v771, v1468);
                              ((void (__fastcall *)(__int64, __int64))off_1807A9180)(v771, 1LL);
                              v774 = ((__int64 (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v771, v1334);
                              v775 = off_1807A91E8;
                              v1335 = (wchar_t *)v774;
                              v776 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
                              ((void (__fastcall *)(__int64, __int128 *, __int64))v775)(v771, &v1738, v776);
                              ((void (__fastcall *)(__int64, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                v771,
                                v769,
                                0xFFFFFFFFLL,
                                &v1738,
                                v1315,
                                0LL);
                              if ( v1495 == 1 )
                              {
                                if ( v1480 )
                                  v1481 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
                                else
                                  v1481 = 0xFFFFFF;
                              }
                              else
                              {
                                v1481 = -5723992;
                              }
                              v777 = 0;
                              v778 = v1325;
                              v779 = -(int)v1726;
                              v780 = 0;
                              if ( (int)v1726 >= 0 )
                              {
                                v777 = v1726;
                                v779 = 0;
                              }
                              v781 = -DWORD1(v1726);
                              if ( (SDWORD1(v1726) & 0x80000000) == 0 )
                              {
                                v781 = 0;
                                v780 = DWORD1(v1726);
                              }
                              v782 = DWORD2(v1738) - v779;
                              if ( DWORD2(v1738) - v779 >= v1325 - v777 )
                                v782 = v1325 - v777;
                              v783 = HIDWORD(v1738) - v781;
                              if ( HIDWORD(v1738) - v781 >= v1352 - v780 )
                                v783 = v1352 - v780;
                              if ( v782 > 0 && v783 > 0 )
                              {
                                v784 = (unsigned __int8 *)&v1404[4 * v779 + 4 * (__int64)(v781 * DWORD2(v1738))];
                                v785 = v780 * v1325;
                                v1405 = v784;
                                v1326 = 0;
                                v786 = v1356 + 4 * (v777 + (__int64)v785);
                                v1460 = (LPCWSTR)(4LL * SDWORD2(v1738));
                                v1529 = 4 * v778;
                                v1357 = v786;
                                do
                                {
                                  v1353 = 0;
                                  v787 = v784 + 2;
                                  v788 = 0;
                                  v789 = v786 - (_QWORD)v784;
                                  do
                                  {
                                    if ( (unsigned __int8)((*v787 + *(v787 - 2) + 2 * (unsigned int)*(v787 - 1)) >> 2) != 0xFF )
                                    {
                                      v790 = (unsigned __int8)~((*v787 + *(v787 - 2) + 2 * (unsigned int)*(v787 - 1)) >> 2);
                                      v787[v789] -= ~((*v787 + *(v787 - 2) + 2 * (unsigned int)*(v787 - 1)) >> 2)
                                                  * (v1481 - v787[v789]);
                                      v791 = v787[v789 - 1];
                                      v792 = (unsigned __int64)(2155905153LL * v790 * (BYTE1(v1481) - v791)) >> 32;
                                      v787[v789 - 1] = v791 + (v792 >> 7 < 0) + (v792 >> 7);
                                      v793 = v787[v789 - 2];
                                      v794 = (unsigned __int64)(2155905153LL * v790 * (BYTE2(v1481) - v793)) >> 32;
                                      v787[v789 - 2] = v793 + (v794 >> 7 < 0) + (v794 >> 7);
                                      v788 = v1353;
                                      v787[v789 + 1] += v790 * (255 - v787[v789 + 1]) / 255;
                                    }
                                    ++v788;
                                    v787 += 4;
                                    v1353 = v788;
                                  }
                                  while ( v788 < v782 );
                                  v784 = &v1405[(_QWORD)v1460];
                                  v786 = v1529 + v1357;
                                  v1405 = &v1405[(_QWORD)v1460];
                                  v1357 += v1529;
                                  ++v1326;
                                }
                                while ( v1326 < v783 );
                                LODWORD(v627) = 0;
                              }
                              ((void (__fastcall *)(wchar_t *))off_1807A9138)(v1468);
                              if ( v1335 )
                                ((void (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v771, v1335);
                            }
                            else
                            {
                              LODWORD(v627) = GetLastError();
                              v772 = (int)v627 < 0;
                              if ( (int)v627 > 0 )
                              {
                                LODWORD(v627) = (unsigned __int16)v627 | 0x80070000;
                                v772 = (int)v627 < 0;
                              }
                              if ( !v772 )
                                LODWORD(v627) = -2147467259;
                            }
                            ((void (__fastcall *)(__int64))off_1807A9130)(v771);
                            if ( (int)v627 < 0 )
                              goto LABEL_1125;
                            v795 = v1720;
                            v1516 = v1718;
                            v1336 = v1723;
                            memset_0(v1701, 0, 0x68uLL);
                            memset_0(v1705, 0, 0x68uLL);
                            LODWORD(v627) = 0;
                            v1358 = 0LL;
                            v1482 = 0;
                            v1327 = 0;
                            v1762 = 0LL;
                            v1763 = 0;
                            v1760 = 0LL;
                            v1761 = 0LL;
                            v1739 = 0LL;
                            if ( !v795 )
                              goto LABEL_1126;
                            v796 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1372, 7LL);
                            if ( !v796 )
                              goto LABEL_956;
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                                 v796,
                                                 104LL,
                                                 v1701) )
                            {
                              v1358 = v1704;
                              v1482 = v1702;
                              v1327 = v1703;
                            }
                            lpModuleNamec = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1372);
                            v797 = lpModuleNamec;
                            if ( !lpModuleNamec )
                            {
LABEL_956:
                              GetLastError();
                              goto LABEL_1126;
                            }
                            DWORD1(v1760) = DWORD2(v1727) - v1727;
                            DWORD2(v1760) = DWORD1(v1727) - HIDWORD(v1727);
                            v1639 = 0LL;
                            v1761 = 0LL;
                            v1762 = 0LL;
                            v1763 = 0;
                            LODWORD(v1760) = 40;
                            HIDWORD(v1760) = 2097153;
                            v1469 = (wchar_t *)((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                                                 lpModuleNamec,
                                                 &v1760,
                                                 0LL,
                                                 &v1639,
                                                 0LL,
                                                 0);
                            if ( !v1469 )
                            {
                              v798 = GetLastError();
                              LODWORD(v627) = v798;
                              if ( v798 > 0 )
                                LODWORD(v627) = (unsigned __int16)v798 | 0x80070000;
                              if ( (int)v627 >= 0 )
                                LODWORD(v627) = -2147467259;
LABEL_1021:
                              ((void (__fastcall *)(LPCWSTR))off_1807A9130)(v797);
                              if ( (int)v627 < 0 )
                                goto LABEL_1125;
                              v822 = 0LL;
                              v823 = v1372;
LABEL_1119:
                              ((void (__fastcall *)(SIZE_T, _QWORD))off_1807A9180)(v823, v1418);
                              if ( !Sizef )
                              {
LABEL_1123:
                                if ( v822 )
                                  goto LABEL_1124;
LABEL_1125:
                                LODWORD(v627) = 0;
LABEL_1126:
                                if ( v1597 )
                                  ((void (__fastcall *)(LPVOID))off_1807A9138)(v1597);
                                goto LABEL_1128;
                              }
LABEL_1122:
                              ((void (*)(void))off_1807A9138)();
                              goto LABEL_1123;
                            }
                            v4 = (unsigned int)((__int64 (__fastcall *)(wchar_t *, __int64, _BYTE *))off_1807A9168)(
                                                 v1469,
                                                 104LL,
                                                 v1705) == 0;
                            v799 = 0LL;
                            if ( !v4 )
                              v799 = v1706;
                            DWORD2(v1739) = DWORD2(v1727) - v1727;
                            HIDWORD(v1739) = HIDWORD(v1727) - DWORD1(v1727);
                            v1406 = v799;
                            ((void (__fastcall *)(LPCWSTR, wchar_t *))off_1807A9178)(lpModuleNamec, v1469);
                            ((void (__fastcall *)(LPCWSTR, __int64))off_1807A9180)(lpModuleNamec, 1LL);
                            v800 = ((__int64 (__fastcall *)(LPCWSTR, wchar_t *))off_1807A9178)(lpModuleNamec, v1336);
                            v801 = off_1807A91E8;
                            v1337 = (wchar_t *)v800;
                            v802 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
                            ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v801)(lpModuleNamec, &v1739, v802);
                            ((void (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                              lpModuleNamec,
                              v795,
                              0xFFFFFFFFLL,
                              &v1739,
                              v1315,
                              0LL);
                            if ( v1495 == 1 )
                            {
                              if ( !v1516 )
                              {
                                v1517 = 0xFFFFFF;
LABEL_1002:
                                v804 = 0;
                                v805 = -(int)v1727;
                                v806 = 0;
                                if ( (int)v1727 >= 0 )
                                {
                                  v804 = v1727;
                                  v805 = 0;
                                }
                                v807 = -DWORD1(v1727);
                                if ( (SDWORD1(v1727) & 0x80000000) == 0 )
                                {
                                  v807 = 0;
                                  v806 = DWORD1(v1727);
                                }
                                v808 = DWORD2(v1739) - v805;
                                if ( DWORD2(v1739) - v805 >= v1482 - v804 )
                                  v808 = v1482 - v804;
                                v809 = HIDWORD(v1739) - v807;
                                if ( HIDWORD(v1739) - v807 >= v1327 - v806 )
                                  v809 = v1327 - v806;
                                if ( v808 > 0 && v809 > 0 )
                                {
                                  v1496 = 0;
                                  v810 = (unsigned __int8 *)&v1406[4 * v805 + 4 * (__int64)(DWORD2(v1739) * v807)];
                                  v1407 = v810;
                                  v811 = v1358 + 4 * (v804 + (__int64)(v1482 * v806));
                                  v1461 = (LPCWSTR)(4LL * SDWORD2(v1739));
                                  v1530 = 4LL * v1482;
                                  v1359 = v811;
                                  do
                                  {
                                    v812 = v810 + 2;
                                    v1316 = 0;
                                    v813 = v811 - (_QWORD)v810;
                                    for ( kk = 0; kk < v808; v1316 = kk )
                                    {
                                      if ( (unsigned __int8)((*v812 + *(v812 - 2) + 2 * (unsigned int)*(v812 - 1)) >> 2) != 0xFF )
                                      {
                                        v815 = (unsigned __int8)~((*v812 + *(v812 - 2) + 2 * (unsigned int)*(v812 - 1)) >> 2);
                                        v812[v813] -= ~((*v812 + *(v812 - 2) + 2 * (unsigned int)*(v812 - 1)) >> 2)
                                                    * (v1488 - v812[v813]);
                                        v816 = v812[v813 - 1];
                                        v817 = (unsigned __int64)(2155905153LL * v815 * (BYTE1(v1517) - v816)) >> 32;
                                        v812[v813 - 1] = v816 + (v817 >> 7 < 0) + (v817 >> 7);
                                        v818 = v812[v813 - 2];
                                        v819 = (unsigned __int64)(2155905153LL * v815 * (BYTE2(v1517) - v818)) >> 32;
                                        v812[v813 - 2] = v818 + (v819 >> 7 < 0) + (v819 >> 7);
                                        v820 = v812[v813 + 1];
                                        v821 = v815 * (255 - v820);
                                        kk = v1316;
                                        v812[v813 + 1] = v820 + v821 / 255;
                                      }
                                      ++kk;
                                      v812 += 4;
                                    }
                                    v810 = &v1407[(_QWORD)v1461];
                                    v811 = v1530 + v1359;
                                    v1407 = &v1407[(_QWORD)v1461];
                                    v1359 += v1530;
                                    ++v1496;
                                  }
                                  while ( v1496 < v809 );
                                  LODWORD(v627) = 0;
                                  v797 = lpModuleNamec;
                                }
                                ((void (__fastcall *)(wchar_t *))off_1807A9138)(v1469);
                                if ( v1337 )
                                  ((void (__fastcall *)(LPCWSTR, wchar_t *))off_1807A9178)(v797, v1337);
                                goto LABEL_1021;
                              }
                              v803 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
                            }
                            else
                            {
                              v803 = -5723992;
                            }
                            v1517 = v803;
                            v1488 = v803;
                            goto LABEL_1002;
                          }
                          if ( v1718 || (v824 = -64, v628 == 1) )
                            v824 = -1;
                          LOWORD(v1518) = 0;
                          BYTE2(v1518) = v824;
                          HIBYTE(v1518) = 1;
                          v1483 = 0;
                          v1328 = 0;
                          v1354 = 0;
                          Srcd = (LPVOID)((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1372);
                          v822 = Srcd;
                          if ( !Srcd )
                          {
                            GetLastError();
                            goto LABEL_1125;
                          }
                          if ( v628 == 1 )
                          {
                            v825 = DWORD2(v1727) - v1727;
                            if ( DWORD2(v1727) - (int)v1727 <= DWORD2(v1726) - (int)v1726 )
                              v825 = DWORD2(v1726) - v1726;
                            v826 = HIDWORD(v1727) - DWORD1(v1726);
                            LODWORD(v1562) = v825;
                            v827 = 0;
                            v1526 = HIDWORD(v1727) - DWORD1(v1726);
                            v828 = 0;
                            if ( v1717 )
                            {
                              v827 = v825 + v1726 - DWORD2(v1726);
                              v1483 = v827;
                              v1354 = v825 + v1727 - DWORD2(v1727);
                              v828 = v1354;
                            }
                            v829 = v827 + DWORD2(v1726) - v1726;
                            v830 = v828 + DWORD2(v1727) - v1727;
                            v1462 = DWORD1(v1727) - DWORD1(v1726);
                            LODWORD(v1537) = HIDWORD(v1726) - DWORD1(v1726);
                            v822 = Srcd;
                            v1408 = HIDWORD(v1727) - DWORD1(v1726);
                          }
                          else
                          {
                            v825 = DWORD2(v1737);
                            v826 = HIDWORD(v1737);
                            v1661 = v1726;
                            v829 = DWORD2(v1726);
                            LODWORD(v1537) = HIDWORD(v1726);
                            v1328 = DWORD1(v1726);
                            v1662 = v1727;
                            v830 = DWORD2(v1727);
                            v1483 = v1726;
                            v1408 = HIDWORD(v1727);
                            v1462 = DWORD1(v1727);
                            v1354 = v1727;
                            v1526 = HIDWORD(v1737);
                            LODWORD(v1562) = DWORD2(v1737);
                          }
                          v1640 = 0LL;
                          v1754 = 0LL;
                          v1753 = 0LL;
                          v1755 = 0;
                          DWORD2(v1752) = -v826;
                          LODWORD(v1752) = 40;
                          DWORD1(v1752) = v825;
                          HIDWORD(v1752) = 2097153;
                          v831 = ((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                                   v822,
                                   &v1752,
                                   0LL,
                                   &v1640,
                                   0LL,
                                   0);
                          Sizef = v831;
                          if ( !v831 )
                          {
                            GetLastError();
LABEL_1124:
                            ((void (__fastcall *)(LPVOID))off_1807A9130)(v822);
                            goto LABEL_1125;
                          }
                          ((void (__fastcall *)(LPVOID, __int64))off_1807A9178)(v822, v831);
                          if ( v1495 == 1 && v1597 )
                          {
                            v1740 = 0LL;
                            v1742 = v1526;
                            v1741 = v825;
                            ((void (__fastcall *)(LPVOID, __int64 *))off_1807A91E8)(v822, &v1740);
                          }
                          v832 = v1719;
                          v1470 = v1718;
                          v1503 = v1722;
                          v1532 = (SIZE_T)v1719;
                          memset_0(v1707, 0, 0x68uLL);
                          memset_0(v1688, 0, 0x68uLL);
                          v1509 = 0LL;
                          lpModuleNamed = 0;
                          v1360 = 0;
                          v1766 = 0LL;
                          v1767 = 0;
                          v1764 = 0LL;
                          v1765 = 0LL;
                          v1736 = 0LL;
                          if ( !v832 )
                          {
LABEL_1121:
                            v822 = Srcd;
                            goto LABEL_1122;
                          }
                          v822 = Srcd;
                          v833 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1807A9150)(Srcd, 7LL);
                          if ( !v833 )
                            goto LABEL_1050;
                          if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                               v833,
                                               104LL,
                                               v1707) )
                          {
                            v1509 = v1710;
                            lpModuleNamed = v1708;
                            v1360 = v1709;
                          }
                          v1442 = (LPCWSTR)((__int64 (__fastcall *)(LPVOID))off_1807A9110)(Srcd);
                          if ( !v1442 )
                            goto LABEL_1050;
                          v834 = 0;
                          v835 = v829 - v1483;
                          DWORD2(v1764) = v1328 - (_DWORD)v1537;
                          v1644 = 0LL;
                          v1765 = 0LL;
                          v1766 = 0LL;
                          v1767 = 0;
                          LODWORD(v1764) = 40;
                          DWORD1(v1764) = v835;
                          HIDWORD(v1764) = 2097153;
                          v836 = ((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                                   v1442,
                                   &v1764,
                                   0LL,
                                   &v1644,
                                   0LL,
                                   0);
                          v1533 = (WCHAR *)v836;
                          if ( v836 )
                          {
                            v838 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                     v836,
                                     104LL,
                                     v1688);
                            DWORD2(v1736) = v835;
                            v839 = 0LL;
                            if ( v838 )
                              v839 = v1689;
                            HIDWORD(v1736) = (_DWORD)v1537 - v1328;
                            v1519 = v839;
                            ((void (__fastcall *)(LPCWSTR, WCHAR *))off_1807A9178)(v1442, v1533);
                            ((void (__fastcall *)(LPCWSTR, __int64))off_1807A9180)(v1442, 1LL);
                            v840 = ((__int64 (__fastcall *)(LPCWSTR, wchar_t *))off_1807A9178)(v1442, v1503);
                            v841 = off_1807A91E8;
                            v1504 = v840;
                            v842 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
                            ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v841)(v1442, &v1736, v842);
                            v843 = v1442;
                            ((void (__fastcall *)(LPCWSTR, SIZE_T, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                              v1442,
                              v1532,
                              0xFFFFFFFFLL,
                              &v1736,
                              v1315,
                              0LL);
                            if ( v1495 == 1 )
                            {
                              if ( v1470 )
                                v1471 = off_1807A9218((WARBIRD_DELAY_LOAD *)8, 0);
                              else
                                v1471 = 0xFFFFFF;
                            }
                            else
                            {
                              v1471 = -5723992;
                            }
                            v844 = 0;
                            v845 = -v1483;
                            v846 = 0;
                            if ( v1483 >= 0 )
                            {
                              v844 = v1483;
                              v845 = 0;
                            }
                            v847 = -v1328;
                            if ( v1328 >= 0 )
                            {
                              v847 = 0;
                              v846 = v1328;
                            }
                            v848 = DWORD2(v1736) - v845;
                            if ( DWORD2(v1736) - v845 >= lpModuleNamed - v844 )
                              v848 = lpModuleNamed - v844;
                            LODWORD(v1537) = v848;
                            v849 = HIDWORD(v1736) - v847;
                            if ( HIDWORD(v1736) - v847 >= v1360 - v846 )
                              v849 = v1360 - v846;
                            if ( v848 > 0 && v849 > 0 )
                            {
                              v850 = (int)v1537;
                              v851 = v1519 + 4 * (v845 + (__int64)(DWORD2(v1736) * v847));
                              v1520 = v851;
                              v1361 = 0;
                              v852 = v1509 + 4 * (v844 + (__int64)(lpModuleNamed * v846));
                              v1532 = 4LL * SDWORD2(v1736);
                              v1484 = 4LL * lpModuleNamed;
                              v1510 = v852;
                              do
                              {
                                lpModuleNamee = 0;
                                v853 = (unsigned __int8 *)(v851 + 2);
                                v854 = 0;
                                v855 = v852 - v851;
                                do
                                {
                                  if ( (unsigned __int8)((*v853 + *(v853 - 2) + 2 * (unsigned int)*(v853 - 1)) >> 2) != 0xFF )
                                  {
                                    v856 = (unsigned __int8)~((*v853 + *(v853 - 2) + 2 * (unsigned int)*(v853 - 1)) >> 2);
                                    v853[v855] -= ~((*v853 + *(v853 - 2) + 2 * (unsigned int)*(v853 - 1)) >> 2)
                                                * (v1471 - v853[v855]);
                                    v857 = v853[v855 - 1];
                                    v858 = (unsigned __int64)(2155905153LL * v856 * (BYTE1(v1471) - v857)) >> 32;
                                    v853[v855 - 1] = v857 + (v858 >> 7 < 0) + (v858 >> 7);
                                    v859 = v853[v855 - 2];
                                    v860 = (unsigned __int64)(2155905153LL * v856 * (BYTE2(v1471) - v859)) >> 32;
                                    v853[v855 - 2] = v859 + (v860 >> 7 < 0) + (v860 >> 7);
                                    v854 = lpModuleNamee;
                                    v853[v855 + 1] += v856 * (255 - v853[v855 + 1]) / 255;
                                  }
                                  ++v854;
                                  v853 += 4;
                                  lpModuleNamee = v854;
                                }
                                while ( v854 < v850 );
                                v851 = v1532 + v1520;
                                v852 = v1484 + v1510;
                                v1520 += v1532;
                                v1510 += v1484;
                                ++v1361;
                              }
                              while ( v1361 < v849 );
                              v825 = (unsigned int)v1562;
                              v834 = 0;
                              v843 = v1442;
                            }
                            ((void (__fastcall *)(WCHAR *))off_1807A9138)(v1533);
                            if ( v1504 )
                              ((void (__fastcall *)(LPCWSTR, __int64))off_1807A9178)(v843, v1504);
                          }
                          else
                          {
                            v837 = GetLastError();
                            v834 = v837;
                            if ( v837 > 0 )
                              v834 = (unsigned __int16)v837 | 0x80070000;
                            if ( v834 >= 0 )
                              v834 = -2147467259;
                          }
                          ((void (__fastcall *)(LPCWSTR))off_1807A9130)(v1442);
                          if ( v834 < 0 )
                            goto LABEL_1121;
                          v861 = v1720;
                          v1338 = v1718;
                          v1521 = v1723;
                          v1533 = (WCHAR *)v1720;
                          memset_0(v1711, 0, 0x68uLL);
                          memset_0(v1715, 0, 0x68uLL);
                          v1443 = 0LL;
                          v1362 = 0;
                          lpModuleNamef = 0;
                          v1770 = 0LL;
                          v1771 = 0;
                          v1768 = 0LL;
                          v1769 = 0LL;
                          v1743 = 0LL;
                          if ( !v861 )
                            goto LABEL_1121;
                          v822 = Srcd;
                          v862 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1807A9150)(Srcd, 7LL);
                          if ( !v862 )
                            goto LABEL_1050;
                          if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                               v862,
                                               104LL,
                                               v1711) )
                          {
                            v1443 = v1714;
                            v1362 = v1712;
                            lpModuleNamef = v1713;
                          }
                          v1511 = ((__int64 (__fastcall *)(LPVOID))off_1807A9110)(Srcd);
                          v863 = v1511;
                          if ( !v1511 )
                          {
LABEL_1050:
                            GetLastError();
                            goto LABEL_1122;
                          }
                          v864 = 0;
                          v865 = v830 - v1354;
                          DWORD2(v1768) = v1462 - v1408;
                          v1646[0] = 0LL;
                          v1769 = 0LL;
                          v1770 = 0LL;
                          v1771 = 0;
                          LODWORD(v1768) = 40;
                          DWORD1(v1768) = v865;
                          HIDWORD(v1768) = 2097153;
                          v866 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                                   v1511,
                                   &v1768,
                                   0LL,
                                   v1646,
                                   0LL,
                                   0);
                          v1532 = v866;
                          if ( !v866 )
                          {
                            v864 = GetLastError();
                            v867 = v864 < 0;
                            if ( v864 > 0 )
                            {
                              v864 = (unsigned __int16)v864 | 0x80070000;
                              v867 = v864 < 0;
                            }
                            if ( !v867 )
                              v864 = -2147467259;
                            goto LABEL_1115;
                          }
                          v868 = ((__int64 (__fastcall *)(SIZE_T, __int64, _BYTE *))off_1807A9168)(v866, 104LL, v1715);
                          DWORD2(v1743) = v865;
                          v869 = 0LL;
                          if ( v868 )
                            v869 = v1716;
                          HIDWORD(v1743) = v1408 - v1462;
                          v1505 = v869;
                          ((void (__fastcall *)(__int64, SIZE_T))off_1807A9178)(v1511, v1532);
                          ((void (__fastcall *)(__int64, __int64))off_1807A9180)(v1511, 1LL);
                          v870 = ((__int64 (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v1511, v1521);
                          v871 = off_1807A91E8;
                          v1522 = v870;
                          v872 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
                          ((void (__fastcall *)(__int64, __int128 *, __int64))v871)(v1511, &v1743, v872);
                          v863 = v1511;
                          ((void (__fastcall *)(__int64, WCHAR *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                            v1511,
                            v1533,
                            0xFFFFFFFFLL,
                            &v1743,
                            v1315,
                            0LL);
                          if ( v1495 == 1 )
                          {
                            if ( !v1338 )
                            {
                              v1339 = 0xFFFFFF;
LABEL_1096:
                              v874 = -v1354;
                              v875 = 0;
                              v876 = 0;
                              if ( v1354 >= 0 )
                              {
                                v875 = v1354;
                                v874 = 0;
                              }
                              v877 = -v1462;
                              if ( v1462 >= 0 )
                              {
                                v876 = v1462;
                                v877 = 0;
                              }
                              v878 = DWORD2(v1743) - v874;
                              if ( DWORD2(v1743) - v874 >= v1362 - v875 )
                                v878 = v1362 - v875;
                              v879 = HIDWORD(v1743) - v877;
                              if ( HIDWORD(v1743) - v877 >= lpModuleNamef - v876 )
                                v879 = lpModuleNamef - v876;
                              if ( v878 > 0 && v879 > 0 )
                              {
                                lpModuleNameg = 0;
                                v880 = (unsigned __int8 *)(v1505 + 4 * (v874 + (__int64)(DWORD2(v1743) * v877)));
                                v1533 = (WCHAR *)v880;
                                v881 = &v1443[2 * v875 + 2 * (__int64)(v1362 * v876)];
                                v1506 = 2LL * SDWORD2(v1743);
                                v1463 = (LPCWSTR)(4LL * v1362);
                                v1444 = v881;
                                do
                                {
                                  v882 = v880 + 2;
                                  v1409 = 0;
                                  v883 = 0;
                                  v884 = (char *)v881 - (char *)v880;
                                  do
                                  {
                                    if ( (unsigned __int8)((*v882 + *(v882 - 2) + 2 * (unsigned int)*(v882 - 1)) >> 2) != 0xFF )
                                    {
                                      v885 = (unsigned __int8)~((*v882 + *(v882 - 2) + 2 * (unsigned int)*(v882 - 1)) >> 2);
                                      v882[v884] -= ~((*v882 + *(v882 - 2) + 2 * (unsigned int)*(v882 - 1)) >> 2)
                                                  * (v1488 - v882[v884]);
                                      v886 = v882[v884 - 1];
                                      v887 = (unsigned __int64)(2155905153LL * v885 * (BYTE1(v1339) - v886)) >> 32;
                                      v882[v884 - 1] = v886 + (v887 >> 7 < 0) + (v887 >> 7);
                                      v888 = v882[v884 - 2];
                                      v889 = (unsigned __int64)(2155905153LL * v885 * (BYTE2(v1339) - v888)) >> 32;
                                      v882[v884 - 2] = v888 + (v889 >> 7 < 0) + (v889 >> 7);
                                      v890 = v882[v884 + 1];
                                      v891 = v885 * (255 - v890);
                                      v883 = v1409;
                                      v882[v884 + 1] = v890 + v891 / 255;
                                    }
                                    ++v883;
                                    v882 += 4;
                                    v1409 = v883;
                                  }
                                  while ( v883 < v878 );
                                  v880 = (unsigned __int8 *)&v1533[v1506];
                                  v881 = (LPCWSTR)((char *)v1444 + (_QWORD)v1463);
                                  v1533 = (WCHAR *)((char *)v1533 + v1506 * 2);
                                  v1444 = (LPCWSTR)((char *)v1444 + (_QWORD)v1463);
                                  ++lpModuleNameg;
                                }
                                while ( lpModuleNameg < v879 );
                                v864 = 0;
                                v863 = v1511;
                              }
                              ((void (__fastcall *)(SIZE_T))off_1807A9138)(v1532);
                              if ( v1522 )
                                ((void (__fastcall *)(__int64, __int64))off_1807A9178)(v863, v1522);
LABEL_1115:
                              ((void (__fastcall *)(__int64))off_1807A9130)(v863);
                              if ( v864 >= 0 )
                              {
                                v892 = v825;
                                v822 = Srcd;
                                if ( v1495 == 1 )
                                {
                                  v823 = v1372;
                                  ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, __int64, int, LPVOID, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                                    v1372,
                                    (unsigned int)v1726,
                                    DWORD1(v1726),
                                    v892,
                                    v1526,
                                    Srcd,
                                    0,
                                    0,
                                    13369376);
                                }
                                else
                                {
                                  v1301 = v825;
                                  v823 = v1372;
                                  ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, __int64, int, LPVOID, _DWORD, _DWORD, unsigned int, int, int))off_1807A9140)(
                                    v1372,
                                    (unsigned int)v1737,
                                    DWORD1(v1737),
                                    v892,
                                    v1526,
                                    Srcd,
                                    0,
                                    0,
                                    v1301,
                                    v1526,
                                    v1518);
                                }
                                goto LABEL_1119;
                              }
                              goto LABEL_1121;
                            }
                            v873 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
                          }
                          else
                          {
                            v873 = -5723992;
                          }
                          v1339 = v873;
                          v1488 = v873;
                          goto LABEL_1096;
                        }
                      }
                      else
                      {
                        v766 = 0;
                      }
                      if ( v628 != 1 )
                        goto LABEL_940;
                      goto LABEL_938;
                    }
                    v631 = 0LL;
                    v1631 = 0LL;
                    v1632 = 0LL;
                    v630 = 0;
                    v1633 = 0LL;
                    v1634 = 0LL;
                    v1635 = 0LL;
                    v1636 = 0LL;
                    v1322 = 0;
                    v1558 = 0;
                    if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1807A91A0)(
                                          8LL,
                                          &v1559,
                                          0LL,
                                          &v1558) )
                    {
                      v632 = GetLastError();
LABEL_710:
                      v630 = v632;
                      if ( v632 > 0 )
                        v630 = (unsigned __int16)v632 | 0x80070000;
                      if ( v630 >= 0 )
                        v630 = -2147467259;
LABEL_727:
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1636);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1635);
                      if ( v630 < 0 )
                      {
                        v648 = v1633;
LABEL_746:
                        if ( v1632 )
                          memset(v1632, 0, v648);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1634);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1632);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1631);
                        if ( v630 < 0 )
                          goto LABEL_919;
                        v1719 = *v1630;
                        v1720 = v1630[1];
                        v649 = v1630[2];
                        v1677 = 0LL;
                        v1721 = v649;
                        LODWORD(v1677) = 16;
                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1807A9268)(
                                              66LL,
                                              0LL,
                                              &v1677,
                                              0LL) )
                        {
                          v650 = GetLastError();
                          v630 = v650;
                          if ( v650 > 0 )
                            v630 = (unsigned __int16)v650 | 0x80070000;
                          v1718 = 0;
                          if ( v630 >= 0 )
                            v630 = -2147467259;
                          goto LABEL_919;
                        }
                        v1718 = BYTE4(v1677) & 1;
                        v1417 = 42;
                        if ( v1495 == 1 )
                        {
                          v1313 = 42;
                        }
                        else
                        {
                          if ( v1495 != 2 )
                          {
                            if ( v1495 == 3 )
                            {
                              v1313 = 225;
                              v1478 = 225;
                            }
LABEL_812:
                            v728 = 96;
                            v1324 = 96;
                            memset_0(v1781, 0, 0xDCuLL);
                            v1782 = 220;
                            v630 = 0;
                            if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *))off_1807A91E0)(
                                                 0LL,
                                                 0xFFFFFFFFLL,
                                                 v1781) )
                            {
                              v728 = v1783;
                              *((_QWORD *)&v1676 + 1) = v1784;
                              *(_QWORD *)&v1676 = 0LL;
                              if ( v1783 < 0x60u )
                                v728 = 96;
                              v1324 = v728;
                            }
                            v627 = (__int64)v1466;
                            if ( v1495 == 1 )
                              v627 = (__int64)v1331;
                            memset_0(v1772, 0, 0x5CuLL);
                            v729 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
                            if ( !v729 )
                            {
                              v730 = GetLastError();
                              LODWORD(v627) = 0;
                              v630 = v730;
                              if ( v730 > 0 )
                                v630 = (unsigned __int16)v730 | 0x80070000;
                              if ( v630 >= 0 )
                                v630 = -2147467259;
                              goto LABEL_919;
                            }
                            v731 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1313, v728, 72LL);
                            v1772[4] = 400;
                            v1773 = 5;
                            v1772[0] = -v731;
                            StringCchCopyW(v1774, 0x20uLL, (const wchar_t *)v627);
                            v732 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1772);
                            LODWORD(v627) = 0;
                            if ( v732 )
                            {
                              v1722 = (wchar_t *)v732;
                            }
                            else
                            {
                              v733 = GetLastError();
                              v630 = v733;
                              if ( v733 > 0 )
                                v630 = (unsigned __int16)v733 | 0x80070000;
                              if ( v630 >= 0 )
                                v630 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v729);
                            if ( v630 < 0 )
                              goto LABEL_919;
                            v628 = v1495;
                            v734 = v1466;
                            if ( v1495 == 1 )
                              v734 = v1331;
                            v1467 = v734;
                            memset_0(v1775, 0, 0x5CuLL);
                            v630 = 0;
                            v627 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
                            if ( !v627 )
                            {
                              v735 = GetLastError();
                              v630 = v735;
                              if ( v735 > 0 )
                                v630 = (unsigned __int16)v735 | 0x80070000;
                              if ( v630 < 0 )
                                goto LABEL_920;
                              goto LABEL_838;
                            }
                            v736 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1478, v728, 72LL);
                            v1775[4] = 400;
                            v1775[0] = -v736;
                            v1776 = 5;
                            StringCchCopyW(v1777, 0x20uLL, v1467);
                            v737 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1775);
                            if ( v737 )
                            {
                              v1723 = (wchar_t *)v737;
                            }
                            else
                            {
                              v738 = GetLastError();
                              v630 = v738;
                              if ( v738 > 0 )
                                v630 = (unsigned __int16)v738 | 0x80070000;
                              if ( v630 >= 0 )
                                v630 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v627);
                            LODWORD(v627) = 0;
                            if ( v630 < 0 )
                              goto LABEL_920;
                            v739 = 0;
                            if ( v1495 != 1 )
                            {
                              if ( v1495 == 2 )
                              {
                                v739 = 0;
                                LODWORD(v627) = SDWORD2(v1676) / 4;
LABEL_850:
                                *((_QWORD *)&v1737 + 1) = __PAIR64__(v739, v627);
                                if ( v1495 == 1 )
                                {
                                  v740 = 150;
                                  v1479 = 32;
                                }
                                else
                                {
                                  if ( (unsigned int)(v1495 - 2) > 1 )
                                  {
                                    v1479 = 42;
                                    v741 = 42;
                                    v740 = 42;
                                    goto LABEL_857;
                                  }
                                  v740 = 0;
                                  v1417 = 0;
                                  v1479 = 0;
                                }
                                v741 = 0;
LABEL_857:
                                v1314 = v740;
                                v742 = v1719;
                                v743 = v627 - v740 - v741;
                                v630 = 0;
                                DWORD2(v1727) = v743;
                                DWORD2(v1726) = v743;
                                v1332 = (wchar_t *)((__int64 (__fastcall *)(void *, wchar_t *))off_1807A9178)(
                                                     v1403,
                                                     v1722);
                                if ( !(unsigned int)((__int64 (__fastcall *)(void *, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                                      v1403,
                                                      v742,
                                                      0xFFFFFFFFLL,
                                                      &v1726,
                                                      3152,
                                                      0LL) )
                                  v630 = -2147467259;
                                if ( v1332 )
                                  ((void (__fastcall *)(void *, wchar_t *))off_1807A9178)(v1403, v1332);
                                if ( v630 >= 0 )
                                {
                                  v744 = v1720;
                                  v630 = 0;
                                  v1333 = (wchar_t *)((__int64 (__fastcall *)(void *, wchar_t *))off_1807A9178)(
                                                       v1403,
                                                       v1723);
                                  if ( !(unsigned int)((__int64 (__fastcall *)(void *, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                                        v1403,
                                                        v744,
                                                        0xFFFFFFFFLL,
                                                        &v1727,
                                                        3152,
                                                        0LL) )
                                    v630 = -2147467259;
                                  if ( v1333 )
                                    ((void (__fastcall *)(void *, wchar_t *))off_1807A9178)(v1403, v1333);
                                  if ( v630 >= 0 )
                                  {
                                    if ( (unsigned int)(v1495 - 2) <= 1 )
                                    {
                                      v743 = DWORD2(v1727);
                                      if ( SDWORD2(v1726) > SDWORD2(v1727) )
                                        v743 = DWORD2(v1726);
                                    }
                                    if ( v1717 )
                                    {
                                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                                        &v1726,
                                        v743 + v741 - DWORD2(v1726),
                                        v1417);
                                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                                        &v1727,
                                        v743 + v741 - DWORD2(v1727),
                                        (unsigned int)(HIDWORD(v1726) + v1479));
                                    }
                                    else
                                    {
                                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                                        &v1726,
                                        v1314,
                                        v1417);
                                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                                        &v1727,
                                        v1314,
                                        (unsigned int)(HIDWORD(v1726) + v1479));
                                    }
                                    v628 = v1495;
                                    if ( (unsigned int)(v1495 - 2) <= 1 )
                                    {
                                      *((_QWORD *)&v1737 + 1) = __PAIR64__(HIDWORD(v1727), v743);
                                      v1725 = -5723992;
                                      goto LABEL_904;
                                    }
                                    if ( v1495 != 1 )
                                      goto LABEL_904;
                                    v1725 = 0xFFFFFF;
                                    memset_0(v1778, 0, 0x5CuLL);
                                    v630 = 0;
                                    v745 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(
                                             0LL,
                                             0LL,
                                             1027LL);
                                    if ( v745 )
                                    {
                                      v747 = v1324;
                                      v748 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1807A91B8)(11LL, v1324);
                                      v1778[4] = 400;
                                      v1778[0] = -v748;
                                      v1779 = 5;
                                      StringCchCopyW(v1780, 0x20uLL, lpModuleNameb);
                                      v749 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1778);
                                      if ( v749 )
                                      {
                                        v1724 = v749;
                                      }
                                      else
                                      {
                                        v630 = GetLastError();
                                        v750 = v630 < 0;
                                        if ( v630 > 0 )
                                        {
                                          v630 = (unsigned __int16)v630 | 0x80070000;
                                          v750 = v630 < 0;
                                        }
                                        if ( !v750 )
                                          v630 = -2147467259;
                                      }
                                      ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v745);
                                    }
                                    else
                                    {
                                      v630 = GetLastError();
                                      v746 = v630 < 0;
                                      if ( v630 > 0 )
                                      {
                                        v630 = (unsigned __int16)v630 | 0x80070000;
                                        v746 = v630 < 0;
                                      }
                                      if ( !v746 )
                                      {
                                        LODWORD(v627) = 0;
LABEL_838:
                                        v630 = -2147467259;
LABEL_920:
                                        ((void (__fastcall *)(_QWORD, void *))off_1807A9260)(0LL, v1403);
                                        goto LABEL_921;
                                      }
                                      v747 = v1324;
                                    }
                                    if ( v630 >= 0 )
                                    {
                                      v751 = v1721;
                                      v630 = 0;
                                      v1730 = v743;
                                      v752 = ((__int64 (__fastcall *)(void *, __int64))off_1807A9178)(v1403, v1724);
                                      if ( !(unsigned int)((__int64 (__fastcall *)(void *, void *, __int64, unsigned int *, int, _QWORD))off_1807A91D8)(
                                                            v1403,
                                                            v751,
                                                            0xFFFFFFFFLL,
                                                            &v1728,
                                                            1120,
                                                            0LL) )
                                        v630 = -2147467259;
                                      if ( v752 )
                                        ((void (__fastcall *)(void *, __int64))off_1807A9178)(v1403, v752);
                                      LODWORD(v627) = 0;
                                      if ( v630 < 0 )
                                        goto LABEL_919;
                                      v753 = v1730 + 24;
                                      if ( (int)(v1730 + 24) < 90 )
                                        v753 = 90;
                                      v1730 = v753;
                                      v1731 = 32;
                                      v1728 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(
                                                v1728,
                                                v747,
                                                96LL);
                                      v1729 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(
                                                v1729,
                                                v747,
                                                96LL);
                                      v1730 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(
                                                v1730,
                                                v747,
                                                96LL);
                                      v1731 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(
                                                v1731,
                                                v747,
                                                96LL);
                                      if ( v1717 )
                                      {
                                        v754 = (unsigned int)v1726;
                                        if ( (int)v1726 >= (int)v1727 )
                                          v754 = (unsigned int)v1727;
                                      }
                                      else
                                      {
                                        v755 = DWORD2(v1726);
                                        if ( SDWORD2(v1726) <= SDWORD2(v1727) )
                                          v755 = DWORD2(v1727);
                                        v754 = v1728 + v755 - v1730;
                                      }
                                      ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_1807A9250)(
                                        &v1728,
                                        v754,
                                        (unsigned int)(HIDWORD(v1727) + 36));
                                      v628 = v1495;
LABEL_904:
                                      v756 = v1717;
                                      v757 = HIDWORD(v1737);
                                      v758 = DWORD2(v1737);
                                      switch ( v628 )
                                      {
                                        case 1:
                                          LODWORD(v627) = 0;
                                          *(_QWORD *)&v1737 = 0LL;
                                          goto LABEL_913;
                                        case 2:
                                          v1749 = 0LL;
                                          v1751 = 0LL;
                                          v1750 = 0LL;
                                          v762 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1807A9248)(0LL, 1LL);
                                          LODWORD(v1749) = 40;
                                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1807A9208)(
                                                                v762,
                                                                &v1749) )
                                            goto LABEL_912;
                                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1750 + 4);
                                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1750 + 12);
                                          if ( v756 )
                                            v760 = DWORD1(v1750) + 5 * HIDWORD(v1750) / 100;
                                          else
                                            v760 = 95 * (HIDWORD(v1750) - v758) / 100;
                                          v761 = 95 * (v1751 - v757);
                                          break;
                                        case 3:
                                          v1746 = 0LL;
                                          v1748 = 0LL;
                                          v1747 = 0LL;
                                          v759 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1807A9248)(0LL, 1LL);
                                          LODWORD(v1746) = 40;
                                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1807A9208)(
                                                                v759,
                                                                &v1746) )
                                            goto LABEL_912;
                                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1747 + 4);
                                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1747 + 12);
                                          v760 = 50 * (HIDWORD(v1747) - v758) / 100;
                                          v761 = 50 * (v1748 - v757);
                                          break;
                                        default:
                                          goto LABEL_912;
                                      }
                                      LODWORD(v1737) = v760;
                                      DWORD1(v1737) = v761 / 100;
LABEL_912:
                                      LODWORD(v627) = 0;
LABEL_913:
                                      v630 = 0;
                                      goto LABEL_920;
                                    }
                                  }
                                }
                                LODWORD(v627) = 0;
LABEL_919:
                                v628 = v1495;
                                goto LABEL_920;
                              }
                              if ( v1495 != 3 )
                                goto LABEL_850;
                            }
                            LODWORD(v627) = DWORD2(v1676);
                            v739 = HIDWORD(v1676);
                            goto LABEL_850;
                          }
                          v1313 = 15;
                        }
                        v1478 = 11;
                        goto LABEL_812;
                      }
                      v637 = 0;
                      v638 = 0;
                      v1350 = 0;
                      if ( v1322 )
                      {
                        v639 = 0LL;
                        while ( 2 )
                        {
                          v640 = 0;
                          v641 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
                          do
                          {
                            if ( v631[v639] == *v641 )
                            {
                              v637 = v640;
                              v1350 = v640;
                              goto LABEL_736;
                            }
                            ++v640;
                            ++v641;
                          }
                          while ( v640 < 0x26 );
                          ++v638;
                          ++v639;
                          if ( v638 < v1322 )
                            continue;
                          break;
                        }
                      }
LABEL_736:
                      v642 = v637;
                      v1323 = 0;
                      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))off_1807A91A8)(
                                           `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v637],
                                           v1793,
                                           85LL)
                        && (int)((__int64 (__fastcall *)(_BYTE *, __int64, char *))off_1807A9190)(v1793, 88LL, v1744) > 0 )
                      {
                        v1323 = (v1745 >> 27) & 1;
                        LOWORD(v627) = 0;
                      }
                      v643 = L"Segoe UI Light";
                      v644 = 19LL;
                      v645 = (const wchar_t **)v1791;
                      do
                      {
                        *v645 = v643;
                        v646 = -1LL;
                        do
                          ++v646;
                        while ( v643[v646] != (_WORD)v627 );
                        ++v645;
                        v643 += v646 + 1;
                        --v644;
                      }
                      while ( v644 );
                      v1331 = (wchar_t *)v1791[(unsigned __int8)`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping[3 * v642]];
                      lpModuleNameb = (const wchar_t *)v1791[(unsigned __int8)byte_18069BC41[3 * v642]];
                      v1466 = (wchar_t *)v1791[(unsigned __int8)byte_18069BC42[3 * v642]];
                      v647 = (char *)MemoryAlloc(0x1C90uLL);
                      v1458 = (WCHAR *)v647;
                      if ( !v647 )
                      {
                        v630 = -2147024882;
                        v648 = 0LL;
LABEL_745:
                        LODWORD(v627) = 0;
                        goto LABEL_746;
                      }
                      v651 = v647 + 7;
                      v652 = -1;
                      v653 = (unsigned __int8 *)&unk_1806FCA92;
                      v654 = 0;
                      v655 = 0;
                      v656 = 0;
                      v657 = 914LL;
                      do
                      {
                        v658 = *(v653 - 1) | (*(v653 - 2) << 8);
                        v659 = v653[2] << 8;
                        v660 = *v653;
                        v653 += 8;
                        v661 = *(v653 - 7) | ((v660 | (v658 << 8)) << 8);
                        v662 = v661 ^ v656;
                        v663 = *(v653 - 3) | ((*(v653 - 4) | ((*(v653 - 5) | v659) << 8)) << 8);
                        v664 = v662 ^ v663 ^ v655 ^ 0xAC987321;
                        v665 = (__ROL4__(v664, 10) + 4991 * __ROL4__(v664 + 1419157410, 5)) ^ v662;
                        v666 = (43881 * __ROR4__(v665 + 133239679, 9) - __ROL4__(v665, 2)) ^ v664;
                        v667 = (24670 * v666 - (v666 >> 13) - 123127970) ^ v665;
                        v668 = (2033 * __ROL4__(v667 ^ 0xAB69, 6) - __ROL4__(v667, 2)) ^ v666;
                        v669 = (133239679 - (v668 ^ 0xAB69605E)) ^ v667;
                        v670 = (43881 * (v669 ^ 0x137F)) ^ __ROR4__(v669, 6) ^ v668;
                        v671 = (__ROL4__(v670, 2) + 24670 * __ROR4__(v670 + 133239679, 15)) ^ v669;
                        v672 = (2033 * __ROR4__(v671 + 1419157410, 14) - __ROL4__(v671, 8)) ^ v670;
                        v673 = __ROR4__(v672, 10) ^ (4991 * __ROR4__(v672 ^ 0xAB69605E, 12)) ^ v671;
                        v674 = (v673 >> 10) ^ (43881 * (v673 ^ 0x7F1)) ^ v672;
                        v675 = (2033 * (__ROR4__(~v674, 5) + 24670)) ^ v673;
                        v676 = v674 ^ (v675 - 2033) ^ 0xAB69605E;
                        v677 = ((v676 >> 2) + 4991 * __ROL4__(v674 ^ (v675 - 2033) ^ 0xAB6967AF, 2)) ^ v675;
                        v678 = (__ROL4__(v677, 7) + 43881 * __ROR4__(v677 - 133239679, 6)) ^ v676;
                        v679 = (24670 * (v678 ^ 0x137F) + __ROR4__(v678, 9)) ^ v677;
                        v680 = (__ROL4__(v679, 7) + 2033 * __ROL4__(v679 ^ 0xAB69, 5)) ^ v678;
                        v681 = v680 ^ v679 ^ 0xAC987321;
                        v682 = (4991 * __ROR4__(v681, 3) - 219010071) ^ v680;
                        v683 = (24670 * __ROR4__(v682 - 133239679, 1) - __ROR4__(v682, 6)) ^ v681;
                        v684 = (__ROL4__(v683, 14) + 2033 * __ROL4__(v683 - 1419157410, 3)) ^ v682;
                        v685 = (4991 * __ROL4__(v684 - 1419157410, 15) - __ROR4__(v684, 14)) ^ v683;
                        v686 = (v685 >> 3) ^ (43881 * (v685 ^ 0x605E)) ^ v684;
                        v687 = 24670 * __ROL4__(v686 ^ 0x7F1137F, 4);
                        v688 = v686;
                        v689 = v652 ^ v686;
                        v652 = v663;
                        v690 = v654 ^ __ROL4__(v688, 2) ^ v687;
                        v654 = v661;
                        v691 = v690 ^ v685;
                        *(v651 - 4) = v691;
                        *v651 = v689;
                        v651 += 8;
                        v692 = __ROR4__(v691, 8);
                        *(v651 - 13) = v692;
                        v693 = __ROR4__(v689, 8);
                        *(v651 - 9) = v693;
                        v694 = __ROR4__(v692, 8);
                        *(v651 - 14) = v694;
                        v695 = __ROR4__(v693, 8);
                        *(v651 - 10) = v695;
                        v696 = __ROR4__(v694, 8);
                        v697 = __ROR4__(v695, 8);
                        *(v651 - 15) = v696;
                        *(v651 - 11) = v697;
                        v655 = __ROR4__(v697, 8);
                        v656 = __ROR4__(v696, 8);
                        --v657;
                      }
                      while ( v657 );
                      v95 = v1497;
                      v698 = v1458;
                      v699 = 0LL;
                      v700 = 0LL;
                      v648 = 7312LL;
                      do
                      {
                        v701 = _mm_loadu_si128((const __m128i *)&v1458[v699]);
                        v699 += 8LL;
                        v702 = _mm_xor_si128(v701, v700);
                        v700 = v702;
                      }
                      while ( v699 < 3656 );
                      v703 = _mm_xor_si128(v702, _mm_srli_si128(v702, 8));
                      v704 = _mm_xor_si128(v703, _mm_srli_si128(v703, 4));
                      v705 = _mm_xor_si128(v704, _mm_srli_si128(v704, 2));
                      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v705, _mm_srli_si128(v705, 1))) != 127LL )
                      {
                        MemoryFree(v1458);
                        v648 = v1633;
                        v630 = -1073425151;
                        goto LABEL_745;
                      }
                      v706 = (WCHAR **)v1785;
                      v1632 = v1458;
                      v630 = 0;
                      v1633 = 7312LL;
                      v707 = 6LL;
                      do
                      {
                        for ( mm = 0; mm < 0x26; ++mm )
                        {
                          if ( v1350 == mm )
                            *v706 = v698;
                          v709 = -1LL;
                          do
                            ++v709;
                          while ( *((_BYTE *)v698 + v709) );
                          v698 = (WCHAR *)((char *)v698 + v709 + 1);
                        }
                        ++v706;
                        --v707;
                      }
                      while ( v707 );
                      v710 = (void **)MemoryAlloc(0x18uLL);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1634);
                      if ( !v710 )
                      {
                        v711 = 0LL;
                        v630 = -2147024882;
                        v1634 = 0LL;
LABEL_796:
                        if ( v711 )
                        {
                          v725 = 3LL;
                          do
                          {
                            v726 = *v711;
                            if ( *v711 )
                            {
                              v727 = -1LL;
                              do
                                ++v727;
                              while ( v726[v727] );
                              memset(v726, 0, 2 * v727 + 2);
                              MemoryFree(*v711);
                              v725 = v1355;
                            }
                            ++v711;
                            v1355 = --v725;
                          }
                          while ( v725 );
                        }
                        goto LABEL_745;
                      }
                      v1416 = 0;
                      v711 = v710;
                      v712 = v1792;
                      v1634 = v710;
                      v713 = (WCHAR *)v710;
                      v1528 = v1792;
                      *(_OWORD *)v710 = 0LL;
                      v710[2] = 0LL;
                      v714 = 0;
                      v1459 = (WCHAR *)v710;
                      while ( 2 )
                      {
                        v715 = *v712;
                        v716 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
                        v717 = 0LL;
                        while ( v715 != *v716 )
                        {
                          v717 = (unsigned int)(v717 + 1);
                          ++v716;
                          if ( (unsigned int)v717 >= 6 )
                            goto LABEL_784;
                        }
                        v718 = v1785[v717];
                        v719 = -1LL;
                        do
                          ++v719;
                        while ( *(_BYTE *)(v719 + v718) );
                        v720 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1807A91C0)(
                                 65001LL,
                                 0LL,
                                 v718,
                                 (unsigned int)(v719 + 1),
                                 0LL,
                                 0);
                        v1351 = v720;
                        if ( v720 )
                        {
                          v721 = MemoryAlloc(2LL * v720);
                          *(_QWORD *)v1459 = v721;
                          if ( v721 )
                          {
                            v722 = -1LL;
                            do
                              ++v722;
                            while ( *(_BYTE *)(v722 + v718) );
                            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1807A91C0)(
                                                  65001LL,
                                                  0LL,
                                                  v718,
                                                  (unsigned int)(v722 + 1),
                                                  v721,
                                                  v1351) )
                            {
                              v723 = GetLastError();
                              v630 = v723;
                              if ( v723 > 0 )
                                v630 = (unsigned __int16)v723 | 0x80070000;
                              v648 = v1633;
                              if ( v630 >= 0 )
                                v630 = -2147467259;
                              goto LABEL_796;
                            }
                            v713 = v1459;
                            v714 = v1416;
LABEL_784:
                            ++v714;
                            v712 = v1528 + 1;
                            v1416 = v714;
                            v713 += 4;
                            ++v1528;
                            v1459 = v713;
                            if ( v714 < 3 )
                              continue;
                            v711 = 0LL;
                            v1634 = 0LL;
                            v1630 = v710;
                            v1717 = v1323;
                          }
                          else
                          {
                            v630 = -2147024882;
                          }
                        }
                        else
                        {
                          v724 = GetLastError();
                          v630 = v724;
                          if ( v724 > 0 )
                            v630 = (unsigned __int16)v724 | 0x80070000;
                          if ( v630 >= 0 )
                            v630 = -2147467259;
                        }
                        break;
                      }
                      v648 = v1633;
                      goto LABEL_796;
                    }
                    v627 = (__int64)MemoryAlloc(2LL * v1558);
                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1635);
                    if ( !v627 )
                    {
                      v1635 = 0LL;
                      v630 = -2147024882;
                      goto LABEL_727;
                    }
                    v1635 = v627;
                    v633 = MemoryAlloc(4LL * (v1559 + 1));
                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1636);
                    if ( v633 )
                    {
                      v1636 = v633;
                      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1807A91A0)(
                                            8LL,
                                            &v1559,
                                            v627,
                                            &v1558) )
                      {
                        v632 = GetLastError();
                        LODWORD(v627) = 0;
                        goto LABEL_710;
                      }
                      v634 = v633;
                      if ( v1559 )
                      {
                        for ( nn = 0; nn < v1559; ++nn )
                        {
                          *v634 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1807A91B0)(v627, 0LL);
                          v636 = -1LL;
                          do
                            ++v636;
                          while ( *(_WORD *)(v627 + 2 * v636) );
                          ++v634;
                          v627 += 2 * v636 + 2;
                        }
                        v630 = 0;
                      }
                      *v634 = 1033;
                      LODWORD(v627) = 0;
                      v631 = v633;
                      v1631 = v633;
                      v1322 = v1559 + 1;
                    }
                    else
                    {
                      LODWORD(v627) = 0;
                      v630 = -2147024882;
                    }
                    v1636 = 0LL;
                    goto LABEL_727;
                  }
                  v560 = g_WarbirdSecureFunctionsRefCount;
LABEL_701:
                  g_WarbirdSecureFunctionsRefCount = v560 + 1;
                  goto LABEL_702;
                }
                while ( 1 )
                {
                  v616 = v615;
                  v617 = -1LL;
                  do
                    ++v617;
                  while ( v615[v617] );
                  v618 = &v615[v617];
                  v1402 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1349;
                  if ( !GetModuleHandleExW(0, v616, (HMODULE *)v1402) )
                    break;
                  v619 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1349);
                  v610 = 0;
                  if ( **(_WORD **)v1402 == 23117
                    && (v620 = *(int *)(*(_QWORD *)v1402 + 60LL), (unsigned int)v620 < 0x10000000)
                    && (v621 = *(_QWORD *)v1402 + v620, v621 >= *(_QWORD *)v1402)
                    && *(_DWORD *)v621 == 17744 )
                  {
                    if ( ((*(_WORD *)(v621 + 24) - 267) & 0xFEFF) != 0 )
                    {
                      v610 = -1073741811;
                    }
                    else
                    {
                      *(_QWORD *)(v1402 + 12) = *(_QWORD *)(v621 + 136);
                      *((_DWORD *)v1402 + 2) = *(_DWORD *)(v621 + 80);
                    }
                  }
                  else
                  {
                    v610 = -1073741701;
                  }
                  v622 = *(_DWORD *)(v618 + 1);
                  v623 = 0;
                  v615 = v618 + 3;
                  v1494 = v622;
                  for ( i1 = 0; v623 < v1494; i1 = v623 )
                  {
                    v624 = (const CHAR *)v615;
                    v625 = -1LL;
                    do
                      ++v625;
                    while ( *((_BYTE *)v615 + v625) );
                    v615 = (WCHAR *)((char *)v615 + v625 + 1);
                    if ( v610 >= 0 )
                    {
                      v626 = (void **)GetProcAddress(*v619, v624);
                      if ( !v626 )
                        goto LABEL_671;
                      v619 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1349);
                      (&WARBIRD::g_FuncAddress)[v1487] = v626;
                      v623 = i1;
                    }
                    ++v1487;
                    ++v623;
                  }
                  ++v1349;
                  if ( !*(_BYTE *)v615 )
                    goto LABEL_671;
                }
              }
              else
              {
                MemoryFree(v1457);
              }
            }
            v610 = -1073741702;
LABEL_671:
            if ( !v561 )
              goto LABEL_673;
            goto LABEL_672;
          }
          v494 = g_WarbirdSecureFunctionsRefCount;
LABEL_659:
          g_WarbirdSecureFunctionsRefCount = v494 + 1;
          goto LABEL_660;
        }
        while ( 1 )
        {
          v549 = v548;
          v550 = -1LL;
          do
            ++v550;
          while ( v548[v550] );
          v551 = &v548[v550];
          v1330 = (wchar_t *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1486);
          if ( !GetModuleHandleExW(0, v549, (HMODULE *)v1330) )
            break;
          v552 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1486);
          v544 = 0;
          if ( **(_WORD **)v1330 == 23117
            && (v553 = *(int *)(*(_QWORD *)v1330 + 60LL), (unsigned int)v553 < 0x10000000)
            && (v554 = *(_QWORD *)v1330 + v553, v554 >= *(_QWORD *)v1330)
            && *(_DWORD *)v554 == 17744 )
          {
            if ( ((*(_WORD *)(v554 + 24) - 267) & 0xFEFF) != 0 )
            {
              v544 = -1073741811;
            }
            else
            {
              *(_QWORD *)(v1330 + 6) = *(_QWORD *)(v554 + 136);
              *((_DWORD *)v1330 + 2) = *(_DWORD *)(v554 + 80);
            }
          }
          else
          {
            v544 = -1073741701;
          }
          v555 = *(_DWORD *)(v551 + 1);
          v556 = 0;
          v548 = v551 + 3;
          v1477 = v555;
          for ( i2 = 0; v556 < v1477; i2 = v556 )
          {
            v557 = (const CHAR *)v548;
            v558 = -1LL;
            do
              ++v558;
            while ( *((_BYTE *)v548 + v558) );
            v548 = (WCHAR *)((char *)v548 + v558 + 1);
            if ( v544 >= 0 )
            {
              v559 = (void **)GetProcAddress(*v552, v557);
              if ( !v559 )
                goto LABEL_629;
              v552 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1486);
              (&WARBIRD::g_FuncAddress)[v1312] = v559;
              v556 = i2;
            }
            ++v1312;
            ++v556;
          }
          ++v1486;
          if ( !*(_BYTE *)v548 )
            goto LABEL_629;
        }
      }
      else
      {
        MemoryFree(lpModuleNamea);
      }
    }
    v544 = -1073741702;
LABEL_629:
    if ( !v495 )
      goto LABEL_631;
    goto LABEL_630;
  }
LABEL_1253:
  v96 = v1566;
  v94 = 4LL;
  v1531 = 0LL;
  v1643 = (int *)v1527;
LABEL_116:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v97 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v97 == 1 )
    {
      v98 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v99 = v94;
      do
      {
        if ( *v98 )
          FreeLibrary(*v98);
        v98 += 3;
        --v99;
      }
      while ( v99 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1531);
  if ( v95 >= 0 )
  {
    if ( v96 == (_DWORD)v94 )
    {
      v3 = *v1643;
      goto LABEL_9;
    }
    goto LABEL_1541;
  }
  if ( v95 != -805306316 )
  {
    if ( v95 == -805306139 || v95 == -1073425151 )
    {
      v1565 = -1073418201;
      goto LABEL_1543;
    }
    if ( v95 == -805306306 )
    {
      v1565 = -1073418200;
      goto LABEL_1543;
    }
    v1565 = v95;
    if ( v95 != -2147024774 )
      goto LABEL_1543;
LABEL_1541:
    v1565 = -1073418210;
    goto LABEL_1543;
  }
  v1565 = -1073418222;
LABEL_1543:
  v3 = 0;
LABEL_9:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1643);
  if ( v1565 >= 0 )
  {
    v4 = v3 == 0;
    return !v4;
  }
  return 1;
}
