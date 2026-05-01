/*
 * XREFs of ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x180154F58
 * Callers:
 *     ?IsWindowTabHostComponentEnabled@@YA_NXZ @ 0x18014F110 (-IsWindowTabHostComponentEnabled@@YA_NXZ.c)
 * Callees:
 *     RtlULongLongAdd @ 0x1800C4F80 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1800C4FA0 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1800C4FC0 (StringCchLengthW.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x180153944 (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x180163C3C (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x180166334 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180166378 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1801A2020 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     wcscmp_0 @ 0x1801CE4C6 (wcscmp_0.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x180286160 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x18074A364 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 */

bool IsWindowTabHostEnabledOnSKU(void)
{
  int v1; // eax
  _BYTE *v2; // rbx
  int v3; // esi
  _BYTE *v4; // r14
  int v5; // r12d
  unsigned __int8 *v6; // r15
  int v7; // r11d
  int v8; // r10d
  __int64 v9; // r13
  int v10; // r9d
  int v11; // r8d
  int v12; // eax
  int v13; // r9d
  int v14; // r10d
  int v15; // r8d
  unsigned int v16; // r11d
  int v17; // r10d
  unsigned int v18; // r11d
  int v19; // r10d
  int v20; // r11d
  unsigned int v21; // r10d
  int v22; // r11d
  int v23; // r10d
  int v24; // r11d
  unsigned int v25; // r10d
  int v26; // edx
  int v27; // r10d
  unsigned int v28; // r11d
  int v29; // r10d
  int v30; // r11d
  int v31; // r10d
  int v32; // r11d
  unsigned int v33; // r10d
  int v34; // r11d
  int v35; // r10d
  int v36; // r11d
  unsigned int v37; // r10d
  int v38; // r11d
  int v39; // edx
  int v40; // eax
  int v41; // r11d
  int v42; // edx
  int v43; // r10d
  int v44; // r10d
  int v45; // r11d
  int v46; // r10d
  int v47; // r11d
  int v48; // r10d
  int v49; // r11d
  unsigned __int64 v50; // rax
  char v51; // cl
  int v52; // esi
  unsigned int v53; // r12d
  int v54; // r13d
  HMODULE *v55; // rdi
  __int64 v56; // rbx
  void *v57; // r14
  __int64 v58; // rax
  const WCHAR *v59; // rdx
  _BYTE *v60; // rbx
  char *v61; // rdi
  __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  unsigned int v64; // eax
  unsigned int i; // r15d
  const CHAR *v66; // rdx
  __int64 v67; // rax
  void **ProcAddress; // rax
  HANDLE ProcessHeap; // rax
  int v70; // esi
  signed int v71; // edi
  __int64 v72; // r14
  wchar_t *v73; // rax
  wchar_t *v74; // rbx
  __int64 j; // r9
  wchar_t *v76; // r8
  signed int LastError; // eax
  bool v78; // sf
  HDESK (__fastcall *v79)(WARBIRD_DELAY_LOAD *__hidden, unsigned int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v81; // r14
  wchar_t *v82; // rax
  wchar_t *v83; // rbx
  __int64 k; // r9
  wchar_t *v85; // r8
  signed int v86; // eax
  HANDLE CurrentProcess; // rax
  bool v88; // sf
  int v89; // r13d
  HLOCAL v90; // rax
  void *v91; // r15
  int v92; // r14d
  void *v93; // r12
  HANDLE v94; // rax
  _OWORD *v95; // rax
  HANDLE v96; // rax
  _QWORD *v97; // r10
  int v98; // edi
  void *v99; // r13
  HANDLE v100; // rax
  void *v101; // r13
  HANDLE v102; // rax
  HANDLE v103; // rax
  HANDLE v104; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v106; // r12
  void *v107; // r10
  int v108; // eax
  unsigned int v109; // r9d
  void *v110; // r10
  int v111; // eax
  unsigned int v112; // r9d
  int v113; // eax
  unsigned int v114; // r9d
  int v115; // eax
  size_t v116; // rdx
  int v117; // eax
  int v118; // eax
  unsigned int v119; // r9d
  int v120; // eax
  unsigned int v121; // edi
  HANDLE v122; // rax
  void *v123; // rax
  _DWORD *v124; // rdi
  int v125; // eax
  int v126; // r9d
  int v127; // r11d
  int v128; // r10d
  int v129; // eax
  unsigned int v130; // r9d
  int v131; // r10d
  int *v132; // rdi
  unsigned int v133; // r9d
  unsigned int v134; // r10d
  unsigned int v135; // r11d
  int v136; // eax
  int v137; // r10d
  int *v138; // r9
  unsigned __int64 v139; // r9
  unsigned int v140; // r10d
  unsigned int *v141; // r9
  int v142; // eax
  size_t v143; // rdx
  int v144; // r10d
  SIZE_T *v145; // rax
  int *v146; // rdi
  unsigned int v147; // r10d
  unsigned int v148; // r10d
  unsigned int v149; // r11d
  int v150; // eax
  int *v151; // rdi
  int v152; // r11d
  __int64 v153; // r9
  void *v154; // rcx
  int v155; // eax
  __int64 v156; // r9
  LPVOID v157; // r11
  int v158; // r10d
  unsigned int v159; // r9d
  int *v160; // rax
  int *v161; // rdi
  unsigned int v162; // r10d
  int v163; // eax
  int *v164; // rdi
  unsigned int v165; // r10d
  unsigned int *v166; // rax
  unsigned int v167; // ecx
  unsigned int v168; // edi
  unsigned int v169; // r9d
  unsigned __int8 *v170; // r11
  unsigned int v171; // r9d
  unsigned int v172; // r9d
  unsigned int v173; // r9d
  unsigned int v174; // edi
  unsigned __int8 *v175; // r13
  unsigned int v176; // r10d
  _QWORD *v177; // r11
  int v178; // r14d
  unsigned int v179; // ecx
  unsigned int v180; // edi
  HANDLE v181; // rax
  WCHAR *v182; // r9
  void *v183; // r9
  void *v184; // rcx
  int v185; // eax
  char *v186; // r9
  HANDLE v187; // rax
  unsigned __int64 v188; // r14
  unsigned __int8 v189; // al
  unsigned __int64 v190; // rcx
  _BYTE *v191; // rcx
  int v192; // r10d
  unsigned __int8 *v193; // r8
  unsigned int v194; // r9d
  unsigned int v195; // edx
  unsigned int v196; // ecx
  int v197; // r10d
  char v198; // si
  int v199; // r11d
  unsigned int v200; // r10d
  _BYTE *v201; // rbx
  unsigned int v202; // ecx
  unsigned int v203; // r11d
  char v204; // di
  unsigned __int64 v205; // r11
  _BYTE *v206; // r12
  int v207; // r13d
  unsigned __int8 *v208; // r15
  int v209; // esi
  int v210; // r14d
  int v211; // r8d
  int v212; // edi
  int v213; // ecx
  int v214; // r8d
  int v215; // edi
  int v216; // r10d
  int v217; // r9d
  int v218; // r10d
  int v219; // r9d
  int v220; // r10d
  unsigned int v221; // r9d
  int v222; // r10d
  int v223; // r9d
  int v224; // r10d
  int v225; // r9d
  int v226; // r10d
  int v227; // r9d
  unsigned int v228; // r10d
  unsigned int v229; // r9d
  int v230; // r10d
  int v231; // r9d
  int v232; // r10d
  int v233; // r9d
  int v234; // r10d
  int v235; // r9d
  int v236; // r10d
  int v237; // r9d
  unsigned int v238; // r10d
  int v239; // r9d
  unsigned int v240; // r10d
  int v241; // r9d
  int v242; // r10d
  int v243; // r9d
  int v244; // r10d
  int v245; // r9d
  int v246; // r10d
  int v247; // r9d
  int v248; // r10d
  HANDLE v249; // rax
  int v250; // r14d
  int *v251; // rdi
  HANDLE v252; // rax
  _QWORD *v253; // rax
  HANDLE v254; // rax
  HANDLE v255; // rax
  HANDLE v256; // rax
  HANDLE v257; // rax
  int v258; // edx
  int v259; // r10d
  int v260; // r11d
  int v261; // r14d
  int v262; // r11d
  HANDLE v263; // rax
  void *v264; // rax
  HANDLE v265; // rax
  _OWORD *v266; // rax
  HANDLE v267; // rax
  LPVOID v268; // rax
  LPVOID v269; // rax
  HANDLE v270; // rax
  HANDLE v271; // rax
  HANDLE v272; // rax
  HANDLE v273; // rax
  unsigned int v274; // edi
  HANDLE v275; // rax
  _DWORD *v276; // rax
  const void **v277; // r9
  void *v278; // rcx
  void *v279; // rcx
  void *v280; // r10
  void *v281; // rcx
  void *v282; // r10
  HANDLE v283; // rax
  int v284; // eax
  int v285; // ecx
  SIZE_T v286; // r11
  unsigned int v287; // eax
  SIZE_T v288; // r11
  LPVOID v289; // rcx
  unsigned int v290; // r11d
  int v291; // r10d
  LPVOID v292; // rcx
  unsigned int v293; // r11d
  int v294; // r10d
  unsigned int v295; // r11d
  void *v296; // r9
  int v297; // r11d
  int v298; // r11d
  int v299; // r10d
  unsigned int v300; // r14d
  HANDLE v301; // rax
  void *v302; // rax
  FARPROC v303; // rax
  int v304; // eax
  unsigned int v305; // edx
  unsigned __int8 *v306; // r8
  void *v307; // r11
  void *v308; // rcx
  int *v309; // r9
  signed int v310; // eax
  HANDLE v311; // rax
  _QWORD *v312; // rdi
  void *v313; // r13
  void *v314; // r13
  HANDLE v315; // rax
  void *v316; // r13
  HANDLE v317; // rax
  HANDLE v318; // rax
  HANDLE v319; // rax
  void *v320; // rdi
  HANDLE v321; // rax
  void *v322; // rdi
  HANDLE v323; // rax
  void *v324; // r13
  HANDLE v325; // rax
  void *v326; // r13
  HANDLE v327; // rax
  HANDLE v328; // rax
  HANDLE v329; // rax
  HANDLE v330; // rax
  SIZE_T v331; // r14
  unsigned int v332; // r14d
  __int64 v333; // rcx
  unsigned __int64 v334; // r11
  int *v335; // rax
  unsigned int v336; // r8d
  unsigned int *v337; // r11
  unsigned int v338; // r14d
  unsigned int v339; // r8d
  void *v340; // rax
  HANDLE v341; // rax
  _QWORD *v342; // rdx
  int v343; // r14d
  HANDLE v344; // rax
  void *v345; // rcx
  void *v346; // r8
  HANDLE v347; // rax
  void *v348; // rcx
  void *v349; // rcx
  SIZE_T v350; // rax
  HANDLE v351; // rax
  void *v352; // rcx
  _QWORD *v353; // rax
  HANDLE v354; // rax
  HANDLE v355; // rax
  HANDLE v356; // rax
  HANDLE v357; // rax
  unsigned int *v358; // r11
  void *v359; // r14
  HANDLE v360; // rax
  void *v361; // r14
  HANDLE v362; // rax
  void *v363; // r14
  HANDLE v364; // rax
  HANDLE v365; // rax
  unsigned __int64 v366; // r14
  WCHAR *v367; // r10
  char *v368; // r8
  unsigned __int8 v369; // dl
  unsigned __int8 *v370; // r9
  LPCWSTR v371; // rcx
  unsigned int v372; // eax
  unsigned int v373; // ecx
  unsigned int v374; // r14d
  char v375; // dl
  int v376; // r10d
  unsigned __int8 *v377; // rsi
  int v378; // r14d
  int v379; // r14d
  int v380; // r11d
  int v381; // ebx
  int v382; // ecx
  int v383; // edi
  WCHAR *v384; // r8
  char v385; // r11
  unsigned int v386; // r11d
  int v387; // r9d
  _BYTE *v388; // r13
  int v389; // ebx
  unsigned __int8 *v390; // r12
  int v391; // edx
  char *v392; // r10
  int v393; // r15d
  int v394; // r8d
  int v395; // edi
  int v396; // eax
  int v397; // r8d
  int v398; // r11d
  int v399; // edi
  unsigned int v400; // r14d
  int v401; // r11d
  unsigned int v402; // r14d
  int v403; // r11d
  int v404; // r14d
  unsigned int v405; // r11d
  int v406; // r14d
  int v407; // r11d
  int v408; // r14d
  unsigned int v409; // r11d
  int v410; // r14d
  int v411; // r11d
  unsigned int v412; // r14d
  int v413; // r11d
  int v414; // r14d
  int v415; // r11d
  int v416; // r14d
  unsigned int v417; // r11d
  int v418; // r14d
  int v419; // r11d
  int v420; // r14d
  unsigned int v421; // r11d
  int v422; // ecx
  int v423; // r14d
  int v424; // ecx
  int v425; // r11d
  int v426; // r11d
  int v427; // r14d
  int v428; // r11d
  int v429; // r14d
  int v430; // r11d
  int v431; // r14d
  unsigned __int64 nn; // rax
  unsigned __int8 *v433; // r11
  void *v434; // rdi
  WCHAR *v435; // r10
  unsigned __int8 *v436; // r11
  void *v437; // r9
  WCHAR *v438; // r10
  unsigned __int8 *v439; // r11
  void *v440; // r9
  void *v441; // r9
  WCHAR *v442; // r10
  unsigned __int8 *v443; // r11
  const WCHAR *v444; // r9
  WCHAR *v445; // r14
  unsigned __int64 v446; // rcx
  int *v447; // rcx
  void *v448; // r10
  unsigned __int8 *v449; // r11
  WCHAR *v450; // r9
  HANDLE v451; // rax
  size_t v452; // rdi
  void *v453; // rcx
  _DWORD *v454; // r13
  int v455; // r9d
  __int64 v456; // r11
  _DWORD *v457; // rax
  int *v458; // rcx
  int v459; // edi
  unsigned int v460; // r10d
  int v461; // edi
  __int64 v462; // r11
  int *v463; // rax
  int *v464; // rcx
  int v465; // edi
  unsigned int v466; // r10d
  int v467; // edi
  __int64 v468; // r11
  int *v469; // rax
  int *v470; // rcx
  int v471; // edi
  unsigned int v472; // r10d
  int v473; // edi
  int *v474; // r11
  int *v475; // rcx
  int v476; // edi
  unsigned int v477; // r10d
  int v478; // edi
  __int64 v479; // r10
  int *v480; // rax
  unsigned int *v481; // rcx
  unsigned int v482; // edi
  int v483; // r9d
  unsigned int v484; // edi
  int v485; // eax
  unsigned int v486; // r10d
  const void *v487; // r11
  unsigned int *v488; // rax
  __int64 v489; // rax
  unsigned int v490; // edi
  int v491; // eax
  char *v492; // rax
  _BYTE *v493; // rbx
  int v494; // r15d
  unsigned __int8 *v495; // rsi
  int v496; // ecx
  int v497; // r13d
  __int64 v498; // rdi
  int v499; // r11d
  int v500; // r10d
  int v501; // eax
  int v502; // r11d
  int v503; // r13d
  int v504; // r10d
  int v505; // r9d
  int v506; // r13d
  unsigned int v507; // r9d
  int v508; // r13d
  int v509; // r9d
  unsigned int v510; // r13d
  int v511; // r9d
  int v512; // r13d
  int v513; // r9d
  unsigned int v514; // r13d
  int v515; // edx
  int v516; // r13d
  unsigned int v517; // r12d
  int v518; // r13d
  int v519; // r12d
  int v520; // r13d
  int v521; // r12d
  unsigned int v522; // r13d
  int v523; // r12d
  int v524; // r13d
  int v525; // r12d
  unsigned int v526; // r13d
  int v527; // r12d
  int v528; // edx
  int v529; // eax
  int v530; // r12d
  int v531; // edx
  int v532; // r13d
  int v533; // r13d
  int v534; // r12d
  int v535; // r13d
  int v536; // r12d
  int v537; // r13d
  int v538; // r12d
  int v539; // r13d
  unsigned __int64 v540; // rax
  WCHAR *v541; // r15
  char v542; // cl
  const WCHAR *v543; // rdx
  __int64 v544; // rax
  WCHAR *v545; // r15
  char *v546; // r13
  int v547; // r12d
  __int64 v548; // rcx
  unsigned __int64 v549; // rcx
  unsigned int v550; // eax
  unsigned int v551; // ecx
  const CHAR *v552; // rdx
  __int64 v553; // rax
  void **v554; // rax
  HANDLE v555; // rax
  HMODULE *v556; // r15
  __int64 v557; // r12
  int v558; // eax
  char *v559; // rax
  _BYTE *v560; // rbx
  int v561; // r15d
  unsigned __int8 *v562; // rsi
  __int64 v563; // rdi
  int v564; // ecx
  int v565; // r12d
  int v566; // r11d
  int v567; // r10d
  int v568; // eax
  int v569; // r11d
  int v570; // r13d
  int v571; // r10d
  unsigned int v572; // r9d
  int v573; // r13d
  unsigned int v574; // r9d
  int v575; // r13d
  int v576; // r9d
  unsigned int v577; // r13d
  int v578; // r9d
  int v579; // r13d
  int v580; // r9d
  unsigned int v581; // r13d
  int v582; // r9d
  int v583; // r13d
  unsigned int v584; // r12d
  int v585; // r13d
  int v586; // r12d
  int v587; // r13d
  int v588; // r12d
  unsigned int v589; // r13d
  int v590; // r12d
  int v591; // r13d
  int v592; // r12d
  unsigned int v593; // r13d
  int v594; // r12d
  int v595; // edx
  int v596; // eax
  int v597; // r12d
  int v598; // edx
  int v599; // r13d
  int v600; // r13d
  int v601; // r12d
  int v602; // r13d
  int v603; // r12d
  int v604; // r13d
  int v605; // r12d
  char v606; // cl
  unsigned __int64 v607; // rax
  WCHAR *v608; // r15
  HMODULE *v609; // r15
  __int64 v610; // r12
  const WCHAR *v611; // rdx
  __int64 v612; // rax
  WCHAR *v613; // r15
  char *v614; // r13
  int v615; // r12d
  __int64 v616; // rcx
  unsigned __int64 v617; // rcx
  unsigned int v618; // eax
  unsigned int v619; // ecx
  const CHAR *v620; // rdx
  __int64 v621; // rax
  void **v622; // rax
  HANDLE v623; // rax
  int v624; // r13d
  signed int v625; // eax
  signed int v626; // r15d
  _DWORD *v627; // rdi
  signed int v628; // eax
  char *v629; // r13
  _DWORD *v630; // r12
  unsigned int mm; // esi
  __int64 v632; // rax
  unsigned int v633; // r10d
  unsigned int v634; // r9d
  __int64 v635; // r8
  unsigned int v636; // ecx
  unsigned int *v637; // rdx
  __int64 v638; // rdi
  const wchar_t *v639; // rcx
  __int64 v640; // r8
  const wchar_t **v641; // rdx
  __int64 v642; // rax
  char *v643; // rax
  const wchar_t *v644; // r13
  void **v645; // rax
  unsigned __int8 *v646; // r13
  int v647; // r11d
  int v648; // esi
  int v649; // r15d
  int v650; // r10d
  _BYTE *v651; // r12
  __int64 v652; // rbx
  int v653; // r9d
  int v654; // r8d
  int v655; // eax
  int v656; // r9d
  int v657; // r10d
  int v658; // r8d
  unsigned int v659; // edi
  int v660; // r10d
  unsigned int v661; // edi
  int v662; // r10d
  int v663; // edi
  unsigned int v664; // r10d
  int v665; // edi
  int v666; // r10d
  int v667; // edi
  unsigned int v668; // r10d
  int v669; // edi
  int v670; // r10d
  unsigned int v671; // r15d
  int v672; // r10d
  int v673; // r15d
  int v674; // r10d
  int v675; // r15d
  unsigned int v676; // r10d
  int v677; // r15d
  int v678; // r10d
  int v679; // r15d
  unsigned int v680; // r10d
  int v681; // r15d
  int v682; // ecx
  int v683; // eax
  int v684; // r15d
  int v685; // ecx
  int v686; // r10d
  int v687; // r10d
  int v688; // r15d
  int v689; // r10d
  int v690; // r15d
  int v691; // r10d
  int v692; // r15d
  char *v693; // r11
  unsigned __int64 v694; // rax
  __m128i v695; // xmm1
  __m128i v696; // xmm0
  __m128i v697; // xmm0
  __m128i v698; // xmm1
  __m128i v699; // xmm1
  __m128i v700; // xmm1
  _QWORD *v701; // rdx
  __int64 v702; // rdi
  unsigned int kk; // ecx
  __int64 v704; // rax
  _QWORD *v705; // r12
  _QWORD *v706; // rdx
  __int16 *v707; // rcx
  unsigned int v708; // edi
  __int16 v709; // r8
  __int16 *v710; // rcx
  __int64 v711; // rax
  __int64 v712; // rdi
  __int64 v713; // rcx
  int v714; // eax
  void *v715; // rax
  __int64 v716; // rcx
  signed int v717; // eax
  signed int v718; // eax
  __int64 v719; // rax
  _WORD *v720; // rdi
  __int64 v721; // rcx
  void **v722; // rax
  void **v723; // rax
  void *v724; // rax
  signed int v725; // eax
  unsigned int v726; // edi
  const wchar_t *v727; // r12
  int v728; // eax
  __int64 v729; // rax
  signed int v730; // eax
  signed int v731; // eax
  __int64 v732; // r12
  int v733; // eax
  __int64 v734; // rax
  signed int v735; // eax
  unsigned int v736; // edx
  unsigned int v737; // r13d
  int v738; // eax
  void *v739; // rdi
  unsigned int v740; // r12d
  void *v741; // rdi
  __int64 v742; // rdi
  bool v743; // sf
  unsigned int v744; // r13d
  int v745; // eax
  __int64 v746; // rax
  bool v747; // sf
  void *v748; // rdi
  __int64 v749; // r12
  int v750; // eax
  __int64 v751; // rdx
  int v752; // edx
  int v753; // r12d
  int v754; // r15d
  int v755; // edi
  __int64 v756; // rax
  __int64 v757; // rax
  int v758; // edx
  int v759; // eax
  HMODULE *v760; // rdi
  unsigned int v761; // edi
  int v762; // r15d
  __int64 v763; // rax
  int v764; // eax
  int v765; // r13d
  void *v766; // r12
  __int64 v767; // rax
  size_t v768; // r15
  signed int v769; // eax
  signed int v770; // edi
  bool v771; // zf
  SIZE_T v772; // rcx
  __int64 v773; // rax
  __int64 (__fastcall *v774)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v775; // rax
  int v776; // eax
  int v777; // r12d
  int v778; // r9d
  int v779; // edx
  int v780; // r10d
  int v781; // r8d
  int v782; // r13d
  int v783; // r11d
  __int64 v784; // rdi
  SIZE_T v785; // rdx
  char *v786; // rax
  unsigned __int8 *v787; // r9
  int v788; // r8d
  char *v789; // r10
  int v790; // r8d
  int v791; // edi
  int v792; // edx
  int v793; // edi
  int v794; // edx
  int v795; // edi
  int v796; // ecx
  void *v797; // r12
  int v798; // r13d
  __int64 v799; // rax
  size_t v800; // r15
  signed int v801; // eax
  signed int v802; // edi
  SIZE_T v803; // rcx
  __int64 v804; // rax
  __int64 (__fastcall *v805)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v806; // rax
  int v807; // eax
  int v808; // r10d
  int v809; // r9d
  int v810; // r8d
  int v811; // edx
  int v812; // r12d
  int v813; // r11d
  int v814; // r13d
  SIZE_T v815; // r13
  char *v816; // rax
  unsigned __int8 *v817; // r9
  char *v818; // r10
  int v819; // r8d
  int v820; // r8d
  int v821; // edi
  int v822; // edx
  int v823; // edi
  int v824; // edx
  int v825; // edi
  int v826; // ecx
  void *v827; // rdi
  size_t v828; // r12
  char v829; // al
  int v830; // r13d
  unsigned int v831; // r15d
  int v832; // edx
  int v833; // r11d
  int v834; // edi
  int v835; // r12d
  __int64 v836; // rax
  __int64 v837; // rax
  int v838; // edi
  __int64 v839; // rax
  signed int v840; // eax
  signed int v841; // edi
  LPCWSTR v842; // rcx
  __int64 v843; // rcx
  __int64 v844; // rcx
  __int64 v845; // rcx
  int v846; // eax
  HMODULE *v847; // rdi
  __int64 v848; // r15
  int v849; // r13d
  int v850; // eax
  char *v851; // rax
  int v852; // ebx
  _BYTE *v853; // rsi
  int v854; // r12d
  unsigned __int8 *v855; // rcx
  int v856; // r13d
  __int64 v857; // r15
  int v858; // r11d
  int v859; // r10d
  int v860; // r9d
  int v861; // eax
  int v862; // r10d
  int v863; // r11d
  int v864; // r9d
  unsigned int v865; // r8d
  int v866; // r11d
  unsigned int v867; // r8d
  int v868; // r11d
  int v869; // r8d
  unsigned int v870; // r11d
  int v871; // r8d
  int v872; // r11d
  int v873; // r8d
  unsigned int v874; // r11d
  int v875; // r8d
  int v876; // r11d
  unsigned int v877; // r13d
  int v878; // r11d
  int v879; // r13d
  int v880; // edi
  int v881; // r13d
  unsigned int v882; // r11d
  int v883; // r13d
  int v884; // r11d
  int v885; // r13d
  unsigned int v886; // r11d
  int v887; // r13d
  int v888; // edx
  int v889; // eax
  int v890; // r13d
  int v891; // edx
  int v892; // r11d
  int v893; // r11d
  int v894; // r13d
  int v895; // r11d
  int v896; // r13d
  int v897; // r11d
  int v898; // r13d
  WCHAR *v899; // r15
  int v900; // r12d
  unsigned __int64 v901; // rax
  char v902; // cl
  __int64 v903; // r15
  HMODULE *v904; // rdi
  int v905; // eax
  char *v906; // rcx
  __int64 v907; // rax
  __int64 (__fastcall *v908)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v909; // rax
  int v910; // r9d
  int v911; // r10d
  int v912; // ecx
  int v913; // edx
  int v914; // r8d
  int v915; // r11d
  __int64 v916; // rdi
  int v917; // edx
  unsigned __int8 *v918; // r13
  size_t v919; // rax
  unsigned __int8 *v920; // r9
  int v921; // esi
  size_t v922; // r10
  int v923; // r8d
  int v924; // edi
  int v925; // edx
  int v926; // edi
  int v927; // edx
  int v928; // edi
  int v929; // ecx
  void *v930; // rdi
  __int64 v931; // rax
  LPCWSTR v932; // r13
  int v933; // r12d
  __int64 v934; // rax
  signed int v935; // eax
  signed int v936; // edi
  int v937; // eax
  char *v938; // rcx
  __int64 v939; // rax
  __int64 (__fastcall *v940)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v941; // rax
  int v942; // eax
  int v943; // r8d
  int v944; // r9d
  int v945; // edx
  int v946; // ecx
  int v947; // r12d
  int v948; // r11d
  unsigned __int8 *v949; // r8
  size_t v950; // rax
  unsigned __int8 *v951; // r9
  int v952; // esi
  size_t v953; // r10
  int v954; // r8d
  int v955; // edi
  int v956; // edx
  int v957; // edi
  int v958; // edx
  const WCHAR *v959; // rdx
  __int64 v960; // rax
  WCHAR *v961; // r15
  char *v962; // rdi
  __int64 v963; // rcx
  unsigned __int64 v964; // rcx
  unsigned int v965; // eax
  unsigned int v966; // ecx
  const CHAR *v967; // rdx
  __int64 v968; // rax
  void **v969; // rax
  HANDLE v970; // rax
  __int64 v971; // r15
  int v972; // eax
  HMODULE *v973; // rdi
  void *v974; // r15
  HANDLE v975; // rax
  _OWORD *v976; // rax
  HANDLE v977; // rax
  WCHAR *v978; // rax
  const WCHAR *v979; // r13
  unsigned int v980; // r11d
  int v981; // eax
  int v982; // r9d
  unsigned int v983; // r11d
  int v984; // r10d
  int v985; // eax
  int v986; // r9d
  unsigned int v987; // r11d
  int v988; // r10d
  int v989; // eax
  int v990; // r10d
  unsigned int v991; // edi
  HANDLE v992; // rax
  void *v993; // rdi
  unsigned __int8 *v994; // r13
  int v995; // r10d
  _DWORD *v996; // r11
  _DWORD *v997; // rax
  int v998; // r11d
  __int64 v999; // r11
  int *v1000; // r9
  unsigned __int64 v1001; // r9
  unsigned int v1002; // r11d
  unsigned int *v1003; // r9
  unsigned int v1004; // r10d
  int v1005; // r9d
  int v1006; // r10d
  __int64 v1007; // r11
  int *v1008; // r10
  unsigned __int64 v1009; // r10
  unsigned int v1010; // r9d
  _DWORD *v1011; // r10
  unsigned int v1012; // edi
  int v1013; // r10d
  unsigned int v1014; // r11d
  int *v1015; // r9
  unsigned __int64 v1016; // r9
  _DWORD *v1017; // r9
  _QWORD *v1018; // rax
  unsigned int v1019; // ecx
  unsigned int v1020; // edi
  int v1021; // edi
  unsigned int v1022; // r9d
  _QWORD *v1023; // r11
  unsigned int v1024; // ecx
  unsigned int v1025; // edi
  HANDLE v1026; // rax
  _DWORD *v1027; // rax
  int v1028; // eax
  void *v1029; // r9
  void *v1030; // rcx
  int v1031; // eax
  char *v1032; // r9
  HANDLE v1033; // rax
  int v1034; // edi
  unsigned __int64 v1035; // rdi
  unsigned __int8 v1036; // al
  unsigned __int64 v1037; // rcx
  SIZE_T v1038; // rcx
  int v1039; // r9d
  unsigned __int64 v1040; // r11
  unsigned __int8 *v1041; // rdi
  unsigned int v1042; // r10d
  int v1043; // edx
  unsigned int v1044; // ecx
  int v1045; // r9d
  char v1046; // bl
  int v1047; // r8d
  _BYTE *v1048; // rsi
  unsigned int v1049; // r9d
  unsigned int v1050; // ecx
  unsigned int v1051; // r8d
  int v1052; // r11d
  char v1053; // di
  _BYTE *v1054; // r13
  unsigned __int8 *v1055; // r14
  char *v1056; // rsi
  int v1057; // r12d
  int v1058; // r15d
  int v1059; // eax
  int v1060; // r8d
  int v1061; // edi
  int v1062; // ecx
  int v1063; // r8d
  int v1064; // edi
  int v1065; // r9d
  int v1066; // r10d
  int v1067; // edx
  int v1068; // r10d
  int v1069; // r9d
  int v1070; // r10d
  int v1071; // r9d
  unsigned int v1072; // r10d
  int v1073; // r9d
  int v1074; // r10d
  int v1075; // r9d
  int v1076; // r10d
  int v1077; // r9d
  int v1078; // r10d
  unsigned int v1079; // r9d
  unsigned int v1080; // r10d
  int v1081; // r9d
  int v1082; // r10d
  int v1083; // r9d
  int v1084; // r10d
  int v1085; // r9d
  int v1086; // r10d
  int v1087; // r9d
  int v1088; // r10d
  unsigned int v1089; // r9d
  int v1090; // r10d
  unsigned int v1091; // r9d
  int v1092; // r10d
  int v1093; // r9d
  int v1094; // r10d
  int v1095; // r9d
  int v1096; // r10d
  int v1097; // r9d
  int v1098; // r10d
  int v1099; // r9d
  void *v1100; // rdi
  HANDLE v1101; // rax
  unsigned int *v1102; // rbx
  int v1103; // edi
  HANDLE v1104; // rax
  void *v1105; // rax
  HANDLE v1106; // rax
  _OWORD *v1107; // rax
  HANDLE v1108; // rax
  _QWORD *v1109; // rax
  HANDLE v1110; // rax
  _QWORD *v1111; // rax
  HANDLE v1112; // rax
  HANDLE v1113; // rax
  HANDLE v1114; // rax
  HANDLE v1115; // rax
  int v1116; // edx
  int v1117; // edi
  int v1118; // r10d
  int v1119; // r10d
  HANDLE v1120; // rax
  HANDLE v1121; // rax
  HANDLE v1122; // rax
  HANDLE v1123; // rax
  unsigned int v1124; // edi
  HANDLE v1125; // rax
  _DWORD *v1126; // rax
  int v1127; // eax
  void *v1128; // rcx
  void *v1129; // rcx
  int v1130; // eax
  void *v1131; // r10
  void *v1132; // rcx
  int v1133; // eax
  void *v1134; // r10
  HANDLE v1135; // rax
  int v1136; // eax
  int v1137; // ecx
  WCHAR *v1138; // r10
  unsigned int v1139; // eax
  HANDLE v1140; // rax
  _QWORD *v1141; // rbx
  void *v1142; // rsi
  HANDLE v1143; // rax
  void *v1144; // rsi
  HANDLE v1145; // rax
  void *v1146; // rsi
  HANDLE v1147; // rax
  HANDLE v1148; // rax
  HANDLE v1149; // rax
  HANDLE v1150; // rax
  void *v1151; // rsi
  HANDLE v1152; // rax
  void *v1153; // rsi
  HANDLE v1154; // rax
  void *v1155; // rsi
  HANDLE v1156; // rax
  HANDLE v1157; // rax
  HANDLE v1158; // rax
  _DWORD *v1159; // rdi
  unsigned __int64 v1160; // rcx
  __int64 v1161; // r11
  int *v1162; // rax
  int v1163; // edi
  unsigned int v1164; // r9d
  WCHAR *v1165; // r10
  void *v1166; // rcx
  unsigned int v1167; // r11d
  int v1168; // r10d
  void *v1169; // rcx
  unsigned int v1170; // r11d
  int v1171; // r10d
  int v1172; // ecx
  int v1173; // r10d
  size_t v1174; // r9
  unsigned int v1175; // edi
  HANDLE v1176; // rax
  unsigned int *v1177; // rax
  FARPROC v1178; // rax
  int v1179; // eax
  unsigned int v1180; // edx
  unsigned __int8 *v1181; // r8
  void *v1182; // r11
  __int64 v1183; // rcx
  void *v1184; // r9
  signed int v1185; // eax
  SIZE_T v1186; // rdi
  WCHAR *v1187; // r9
  unsigned int *v1188; // rsi
  unsigned int v1189; // edi
  __int64 v1190; // r8
  unsigned int *v1191; // rcx
  unsigned int *v1192; // r11
  unsigned int v1193; // ecx
  unsigned int v1194; // edi
  unsigned int *v1195; // rax
  HANDLE v1196; // rax
  _QWORD *v1197; // rdx
  int v1198; // edi
  HANDLE v1199; // rax
  void *v1200; // rcx
  void *v1201; // r8
  HANDLE v1202; // rax
  void *v1203; // rcx
  unsigned int *v1204; // rcx
  WCHAR *v1205; // rax
  HANDLE v1206; // rax
  void *v1207; // rcx
  _QWORD *v1208; // rax
  HANDLE v1209; // rax
  HANDLE v1210; // rax
  HANDLE v1211; // rax
  HANDLE v1212; // rax
  unsigned int *v1213; // r11
  _QWORD *v1214; // rdi
  void *v1215; // rbx
  HANDLE v1216; // rax
  void *v1217; // rbx
  HANDLE v1218; // rax
  void *v1219; // rbx
  HANDLE v1220; // rax
  HANDLE v1221; // rax
  unsigned __int64 v1222; // rdi
  WCHAR *v1223; // rax
  unsigned int v1224; // r11d
  WCHAR *v1225; // r9
  unsigned __int8 *v1226; // rcx
  unsigned __int8 v1227; // dl
  _QWORD *v1228; // r10
  unsigned int v1229; // r9d
  int v1230; // r14d
  unsigned __int8 *v1231; // rsi
  int v1232; // r11d
  int v1233; // ecx
  int v1234; // r8d
  int v1235; // ecx
  int v1236; // edx
  int v1237; // ebx
  _BYTE *v1238; // rdi
  char v1239; // r10
  unsigned __int64 v1240; // rdi
  int v1241; // r10d
  unsigned __int8 *v1242; // r15
  unsigned int v1243; // edx
  int v1244; // ebx
  _BYTE *v1245; // r12
  unsigned __int64 v1246; // r13
  int v1247; // r14d
  int v1248; // r9d
  int v1249; // r8d
  int v1250; // eax
  int v1251; // r9d
  int v1252; // r11d
  int v1253; // r8d
  int v1254; // edi
  int v1255; // r11d
  unsigned int v1256; // edi
  int v1257; // r11d
  int v1258; // edi
  unsigned int v1259; // r11d
  int v1260; // edi
  int v1261; // r11d
  int v1262; // edi
  unsigned int v1263; // r11d
  int v1264; // edi
  int v1265; // r11d
  unsigned int v1266; // edx
  int v1267; // r11d
  int v1268; // edx
  int v1269; // r11d
  int v1270; // edx
  unsigned int v1271; // r11d
  int v1272; // edx
  int v1273; // r11d
  int v1274; // edx
  unsigned int v1275; // r11d
  int v1276; // eax
  int v1277; // edx
  int v1278; // ecx
  int v1279; // r11d
  int v1280; // r11d
  int v1281; // edx
  int v1282; // r11d
  int v1283; // edx
  int v1284; // r11d
  int v1285; // edx
  unsigned __int64 m; // rax
  _QWORD *v1287; // r11
  int v1288; // edi
  WCHAR *v1289; // r9
  _QWORD *v1290; // r11
  int v1291; // eax
  WCHAR *v1292; // r8
  WCHAR *v1293; // r9
  _QWORD *v1294; // r11
  int v1295; // eax
  WCHAR *v1296; // r9
  _QWORD *v1297; // r11
  void *v1298; // rcx
  unsigned int *v1299; // r10
  WCHAR *v1300; // rsi
  int *v1301; // rcx
  unsigned int v1302; // r11d
  int v1303; // eax
  WCHAR *v1304; // r9
  _QWORD *v1305; // r10
  HANDLE v1306; // rax
  size_t v1307; // rbx
  void *v1308; // rsi
  void *v1309; // rdi
  HANDLE v1310; // rax
  void *v1311; // rdi
  HANDLE v1312; // rax
  HANDLE v1313; // rax
  HANDLE v1314; // rax
  int v1315; // esi
  int v1316; // eax
  HMODULE *v1317; // rdi
  __int64 v1318; // rbx
  unsigned __int8 v1319; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1320; // [rsp+60h] [rbp-A0h]
  void *v1321; // [rsp+68h] [rbp-98h]
  int *v1322; // [rsp+68h] [rbp-98h]
  void *v1323; // [rsp+68h] [rbp-98h]
  char *v1324; // [rsp+68h] [rbp-98h]
  _QWORD *v1325; // [rsp+68h] [rbp-98h]
  int v1326; // [rsp+68h] [rbp-98h]
  int v1327; // [rsp+68h] [rbp-98h]
  int v1328; // [rsp+68h] [rbp-98h]
  int v1329; // [rsp+68h] [rbp-98h]
  unsigned int v1330; // [rsp+68h] [rbp-98h]
  unsigned int v1331; // [rsp+68h] [rbp-98h]
  void *v1332; // [rsp+68h] [rbp-98h]
  int v1333; // [rsp+68h] [rbp-98h]
  int v1334; // [rsp+68h] [rbp-98h]
  unsigned int v1335; // [rsp+68h] [rbp-98h]
  unsigned int v1336; // [rsp+68h] [rbp-98h]
  unsigned int v1337; // [rsp+68h] [rbp-98h]
  unsigned int v1338; // [rsp+68h] [rbp-98h]
  size_t v1339; // [rsp+70h] [rbp-90h]
  void *v1340; // [rsp+70h] [rbp-90h]
  void *v1341; // [rsp+70h] [rbp-90h]
  void *v1342; // [rsp+70h] [rbp-90h]
  void *v1343; // [rsp+70h] [rbp-90h]
  SIZE_T v1344; // [rsp+70h] [rbp-90h]
  char *v1345; // [rsp+70h] [rbp-90h]
  size_t v1346; // [rsp+70h] [rbp-90h]
  size_t v1347; // [rsp+70h] [rbp-90h]
  void *v1348; // [rsp+70h] [rbp-90h]
  void *v1349; // [rsp+70h] [rbp-90h]
  void *v1350; // [rsp+70h] [rbp-90h]
  void *v1351; // [rsp+70h] [rbp-90h]
  void *v1352; // [rsp+70h] [rbp-90h]
  void *v1353; // [rsp+70h] [rbp-90h]
  size_t v1354; // [rsp+70h] [rbp-90h]
  size_t v1355; // [rsp+70h] [rbp-90h]
  unsigned int v1356; // [rsp+78h] [rbp-88h]
  int v1357; // [rsp+78h] [rbp-88h]
  unsigned int v1358; // [rsp+78h] [rbp-88h]
  unsigned int v1359; // [rsp+78h] [rbp-88h]
  unsigned int v1360; // [rsp+78h] [rbp-88h]
  unsigned int v1361; // [rsp+78h] [rbp-88h]
  int v1362; // [rsp+78h] [rbp-88h]
  int v1363; // [rsp+78h] [rbp-88h]
  int v1364; // [rsp+78h] [rbp-88h]
  int v1365; // [rsp+78h] [rbp-88h]
  LPVOID v1366; // [rsp+80h] [rbp-80h]
  LPVOID v1367; // [rsp+80h] [rbp-80h]
  LPVOID v1368; // [rsp+80h] [rbp-80h]
  WCHAR *v1369; // [rsp+80h] [rbp-80h]
  _WORD *v1370; // [rsp+80h] [rbp-80h]
  int v1371; // [rsp+80h] [rbp-80h]
  int v1372; // [rsp+80h] [rbp-80h]
  int v1373; // [rsp+80h] [rbp-80h]
  int v1374; // [rsp+80h] [rbp-80h]
  unsigned int v1375; // [rsp+80h] [rbp-80h]
  int v1376; // [rsp+80h] [rbp-80h]
  unsigned int v1377; // [rsp+80h] [rbp-80h]
  unsigned int v1378; // [rsp+80h] [rbp-80h]
  unsigned int v1379; // [rsp+80h] [rbp-80h]
  _QWORD *v1380; // [rsp+80h] [rbp-80h]
  unsigned int *v1381; // [rsp+80h] [rbp-80h]
  unsigned int v1382; // [rsp+80h] [rbp-80h]
  int v1383; // [rsp+80h] [rbp-80h]
  LPCWSTR v1384; // [rsp+88h] [rbp-78h]
  LPCWSTR v1385; // [rsp+88h] [rbp-78h]
  WCHAR *v1386; // [rsp+88h] [rbp-78h]
  WCHAR *v1387; // [rsp+88h] [rbp-78h]
  WCHAR *v1388; // [rsp+88h] [rbp-78h]
  LPCWSTR v1389; // [rsp+88h] [rbp-78h]
  WCHAR *v1390; // [rsp+88h] [rbp-78h]
  LPCWSTR v1391; // [rsp+88h] [rbp-78h]
  WCHAR *v1392; // [rsp+88h] [rbp-78h]
  LPCWSTR v1393; // [rsp+88h] [rbp-78h]
  LPCWSTR v1394; // [rsp+88h] [rbp-78h]
  LPCWSTR v1395; // [rsp+88h] [rbp-78h]
  LPCWSTR v1396; // [rsp+88h] [rbp-78h]
  LPCWSTR v1397; // [rsp+88h] [rbp-78h]
  WCHAR *v1398; // [rsp+88h] [rbp-78h]
  LPCWSTR v1399; // [rsp+88h] [rbp-78h]
  _BYTE *Src; // [rsp+90h] [rbp-70h]
  void *Srca; // [rsp+90h] [rbp-70h]
  void *Srcb; // [rsp+90h] [rbp-70h]
  void *Srcc; // [rsp+90h] [rbp-70h]
  LPVOID Srcd; // [rsp+90h] [rbp-70h]
  void *Srce; // [rsp+90h] [rbp-70h]
  const wchar_t *Srcf; // [rsp+90h] [rbp-70h]
  char *Srcg; // [rsp+90h] [rbp-70h]
  char *Srch; // [rsp+90h] [rbp-70h]
  char *Srci; // [rsp+90h] [rbp-70h]
  char *Srcj; // [rsp+90h] [rbp-70h]
  void *Srck; // [rsp+90h] [rbp-70h]
  unsigned __int8 *Srcl; // [rsp+90h] [rbp-70h]
  void *Srcm; // [rsp+90h] [rbp-70h]
  unsigned __int8 *Srcn; // [rsp+90h] [rbp-70h]
  unsigned int *Srco; // [rsp+90h] [rbp-70h]
  unsigned int v1416; // [rsp+98h] [rbp-68h]
  unsigned int v1417; // [rsp+98h] [rbp-68h]
  unsigned int v1418; // [rsp+98h] [rbp-68h]
  unsigned int v1419; // [rsp+98h] [rbp-68h]
  unsigned int v1420; // [rsp+98h] [rbp-68h]
  unsigned int v1421; // [rsp+98h] [rbp-68h]
  unsigned int *v1422; // [rsp+98h] [rbp-68h]
  unsigned int v1423; // [rsp+98h] [rbp-68h]
  unsigned int n; // [rsp+98h] [rbp-68h]
  unsigned int ii; // [rsp+98h] [rbp-68h]
  unsigned int v1426; // [rsp+98h] [rbp-68h]
  int v1427; // [rsp+98h] [rbp-68h]
  unsigned int v1428; // [rsp+98h] [rbp-68h]
  int v1429; // [rsp+98h] [rbp-68h]
  int v1430; // [rsp+98h] [rbp-68h]
  int v1431; // [rsp+98h] [rbp-68h]
  int v1432; // [rsp+98h] [rbp-68h]
  int v1433; // [rsp+98h] [rbp-68h]
  __int64 v1434; // [rsp+A0h] [rbp-60h]
  int v1435; // [rsp+A0h] [rbp-60h]
  int v1436; // [rsp+A0h] [rbp-60h]
  int v1437; // [rsp+A0h] [rbp-60h]
  int v1438; // [rsp+A0h] [rbp-60h]
  unsigned int v1439; // [rsp+A0h] [rbp-60h]
  unsigned int v1440; // [rsp+A0h] [rbp-60h]
  int v1441; // [rsp+A0h] [rbp-60h]
  int v1442; // [rsp+A0h] [rbp-60h]
  unsigned int v1443; // [rsp+A0h] [rbp-60h]
  int v1444; // [rsp+A0h] [rbp-60h]
  int v1445; // [rsp+A0h] [rbp-60h]
  int v1446; // [rsp+A0h] [rbp-60h]
  unsigned int v1447; // [rsp+A8h] [rbp-58h]
  SIZE_T v1448; // [rsp+A8h] [rbp-58h]
  SIZE_T v1449; // [rsp+A8h] [rbp-58h]
  SIZE_T v1450; // [rsp+A8h] [rbp-58h]
  SIZE_T v1451; // [rsp+A8h] [rbp-58h]
  SIZE_T v1452; // [rsp+A8h] [rbp-58h]
  SIZE_T v1453; // [rsp+A8h] [rbp-58h]
  SIZE_T v1454; // [rsp+A8h] [rbp-58h]
  SIZE_T v1455; // [rsp+A8h] [rbp-58h]
  _QWORD *v1456; // [rsp+A8h] [rbp-58h]
  char *v1457; // [rsp+A8h] [rbp-58h]
  SIZE_T v1458; // [rsp+A8h] [rbp-58h]
  SIZE_T v1459; // [rsp+A8h] [rbp-58h]
  void *v1460; // [rsp+B0h] [rbp-50h]
  _BYTE *v1461; // [rsp+B0h] [rbp-50h]
  int v1462; // [rsp+B0h] [rbp-50h]
  int v1463; // [rsp+B0h] [rbp-50h]
  int v1464; // [rsp+B0h] [rbp-50h]
  int v1465; // [rsp+B0h] [rbp-50h]
  int v1466; // [rsp+B0h] [rbp-50h]
  int v1467; // [rsp+B0h] [rbp-50h]
  int v1468; // [rsp+B0h] [rbp-50h]
  unsigned int v1469; // [rsp+B0h] [rbp-50h]
  unsigned int v1470; // [rsp+B0h] [rbp-50h]
  int v1471; // [rsp+B0h] [rbp-50h]
  int v1472; // [rsp+B0h] [rbp-50h]
  void *v1473; // [rsp+B0h] [rbp-50h]
  void *v1474; // [rsp+B8h] [rbp-48h]
  _QWORD *v1475; // [rsp+B8h] [rbp-48h]
  _QWORD *v1476; // [rsp+B8h] [rbp-48h]
  void *v1477; // [rsp+B8h] [rbp-48h]
  size_t v1478; // [rsp+B8h] [rbp-48h]
  size_t v1479; // [rsp+B8h] [rbp-48h]
  size_t v1480; // [rsp+B8h] [rbp-48h]
  size_t v1481; // [rsp+B8h] [rbp-48h]
  size_t v1482; // [rsp+B8h] [rbp-48h]
  size_t v1483; // [rsp+B8h] [rbp-48h]
  size_t v1484; // [rsp+B8h] [rbp-48h]
  size_t v1485; // [rsp+B8h] [rbp-48h]
  _QWORD *v1486; // [rsp+B8h] [rbp-48h]
  void *v1487; // [rsp+B8h] [rbp-48h]
  void *v1488; // [rsp+B8h] [rbp-48h]
  void *v1489; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v1490; // [rsp+C0h] [rbp-40h]
  LPVOID v1491; // [rsp+C0h] [rbp-40h]
  void *v1492; // [rsp+C0h] [rbp-40h]
  int v1493; // [rsp+C0h] [rbp-40h]
  void *v1494; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v1495; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v1496; // [rsp+C0h] [rbp-40h]
  LPCWSTR lpModuleName; // [rsp+C8h] [rbp-38h]
  WCHAR *lpModuleNamea; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNameb; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNamec; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNamed; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNamee; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNamef; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNameg; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNameh; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNamei; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNamej; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNamek; // [rsp+C8h] [rbp-38h]
  LPCWSTR lpModuleNamel; // [rsp+C8h] [rbp-38h]
  WCHAR *lpModuleNamem; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *v1511; // [rsp+D0h] [rbp-30h]
  SIZE_T v1512; // [rsp+D0h] [rbp-30h]
  SIZE_T v1513; // [rsp+D0h] [rbp-30h]
  SIZE_T v1514; // [rsp+D0h] [rbp-30h]
  SIZE_T v1515; // [rsp+D0h] [rbp-30h]
  unsigned int v1516; // [rsp+D0h] [rbp-30h]
  void *v1517; // [rsp+D0h] [rbp-30h]
  WCHAR *v1518; // [rsp+D8h] [rbp-28h]
  __int64 v1519; // [rsp+D8h] [rbp-28h]
  __int64 v1520; // [rsp+D8h] [rbp-28h]
  char *v1521; // [rsp+D8h] [rbp-28h]
  __int64 v1522; // [rsp+D8h] [rbp-28h]
  char *v1523; // [rsp+D8h] [rbp-28h]
  __int64 v1524; // [rsp+D8h] [rbp-28h]
  LPVOID v1525; // [rsp+D8h] [rbp-28h]
  WCHAR *v1526; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v1527; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1528; // [rsp+E0h] [rbp-20h]
  LPCWSTR v1529; // [rsp+E0h] [rbp-20h]
  LPCWSTR v1530; // [rsp+E0h] [rbp-20h]
  LPCWSTR v1531; // [rsp+E0h] [rbp-20h]
  WCHAR *v1532; // [rsp+E0h] [rbp-20h]
  LPCWSTR v1533; // [rsp+E0h] [rbp-20h]
  LPCWSTR v1534; // [rsp+E0h] [rbp-20h]
  unsigned int v1535; // [rsp+E8h] [rbp-18h]
  int v1536; // [rsp+E8h] [rbp-18h]
  unsigned int v1537; // [rsp+E8h] [rbp-18h]
  unsigned int v1538; // [rsp+E8h] [rbp-18h]
  int v1539; // [rsp+E8h] [rbp-18h]
  int v1540; // [rsp+E8h] [rbp-18h]
  unsigned int v1541; // [rsp+E8h] [rbp-18h]
  unsigned int v1542; // [rsp+E8h] [rbp-18h]
  unsigned int v1543; // [rsp+E8h] [rbp-18h]
  int v1544; // [rsp+E8h] [rbp-18h]
  unsigned int v1545; // [rsp+F0h] [rbp-10h]
  int v1546; // [rsp+F0h] [rbp-10h]
  int v1547; // [rsp+F0h] [rbp-10h]
  int v1548; // [rsp+F0h] [rbp-10h]
  int v1549; // [rsp+F0h] [rbp-10h]
  int v1550; // [rsp+F0h] [rbp-10h]
  unsigned int v1551; // [rsp+F0h] [rbp-10h]
  int v1552; // [rsp+F0h] [rbp-10h]
  int v1553; // [rsp+F0h] [rbp-10h]
  unsigned int v1554; // [rsp+F0h] [rbp-10h]
  unsigned int v1555; // [rsp+F0h] [rbp-10h]
  SIZE_T v1556; // [rsp+F8h] [rbp-8h]
  SIZE_T v1557; // [rsp+F8h] [rbp-8h]
  int v1558; // [rsp+F8h] [rbp-8h]
  unsigned int v1559; // [rsp+F8h] [rbp-8h]
  unsigned int v1560; // [rsp+F8h] [rbp-8h]
  unsigned int v1561; // [rsp+F8h] [rbp-8h]
  SIZE_T v1562; // [rsp+F8h] [rbp-8h]
  unsigned int v1563; // [rsp+100h] [rbp+0h]
  unsigned int v1564; // [rsp+100h] [rbp+0h]
  unsigned int v1565; // [rsp+100h] [rbp+0h]
  _QWORD *v1566; // [rsp+100h] [rbp+0h]
  int v1567; // [rsp+100h] [rbp+0h]
  unsigned int v1568; // [rsp+100h] [rbp+0h]
  unsigned int v1569; // [rsp+100h] [rbp+0h]
  int v1570; // [rsp+100h] [rbp+0h]
  char v1571; // [rsp+100h] [rbp+0h]
  SIZE_T v1572; // [rsp+108h] [rbp+8h]
  LPVOID v1573; // [rsp+108h] [rbp+8h]
  void *v1574; // [rsp+108h] [rbp+8h]
  SIZE_T v1575; // [rsp+108h] [rbp+8h]
  int v1576; // [rsp+108h] [rbp+8h]
  unsigned int jj; // [rsp+108h] [rbp+8h]
  void *v1578; // [rsp+108h] [rbp+8h]
  int v1579; // [rsp+108h] [rbp+8h]
  SIZE_T v1580; // [rsp+108h] [rbp+8h]
  unsigned int v1581; // [rsp+108h] [rbp+8h]
  SIZE_T v1582; // [rsp+108h] [rbp+8h]
  int Size; // [rsp+110h] [rbp+10h]
  unsigned int Sizea; // [rsp+110h] [rbp+10h]
  int Sizeb; // [rsp+110h] [rbp+10h]
  int Sizec; // [rsp+110h] [rbp+10h]
  int Sized; // [rsp+110h] [rbp+10h]
  int Sizee; // [rsp+110h] [rbp+10h]
  int Sizef; // [rsp+110h] [rbp+10h]
  void *v1590; // [rsp+118h] [rbp+18h] BYREF
  void *v1591; // [rsp+120h] [rbp+20h]
  SIZE_T v1592; // [rsp+128h] [rbp+28h]
  SIZE_T v1593; // [rsp+130h] [rbp+30h]
  LPVOID v1594; // [rsp+138h] [rbp+38h]
  unsigned int v1595; // [rsp+140h] [rbp+40h] BYREF
  LPVOID v1596; // [rsp+148h] [rbp+48h]
  int v1597; // [rsp+150h] [rbp+50h]
  int v1598; // [rsp+154h] [rbp+54h] BYREF
  int v1599; // [rsp+158h] [rbp+58h]
  unsigned int v1600; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v1601; // [rsp+160h] [rbp+60h] BYREF
  int v1602; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1603; // [rsp+168h] [rbp+68h] BYREF
  int v1604; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1605; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1606; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1607; // [rsp+178h] [rbp+78h] BYREF
  int v1608; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v1609; // [rsp+180h] [rbp+80h] BYREF
  int v1610; // [rsp+184h] [rbp+84h] BYREF
  int v1611; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1612; // [rsp+18Ch] [rbp+8Ch] BYREF
  SIZE_T v1613; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1614; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1615; // [rsp+19Ch] [rbp+9Ch] BYREF
  unsigned int v1616; // [rsp+1A0h] [rbp+A0h] BYREF
  int v1617; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1618; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1619; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1620; // [rsp+1B0h] [rbp+B0h] BYREF
  int v1621; // [rsp+1B4h] [rbp+B4h]
  int v1622; // [rsp+1B8h] [rbp+B8h]
  void *v1623; // [rsp+1C0h] [rbp+C0h]
  unsigned int v1624; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1625; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1626; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int dwBytes; // [rsp+1D4h] [rbp+D4h] BYREF
  SIZE_T dwBytes_4; // [rsp+1D8h] [rbp+D8h] BYREF
  int v1629; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1630; // [rsp+1E4h] [rbp+E4h] BYREF
  int v1631; // [rsp+1E8h] [rbp+E8h] BYREF
  int v1632; // [rsp+1ECh] [rbp+ECh] BYREF
  int v1633; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1634[3]; // [rsp+1F4h] [rbp+F4h] BYREF
  int v1635; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1636; // [rsp+204h] [rbp+104h] BYREF
  int v1637; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1638; // [rsp+20Ch] [rbp+10Ch] BYREF
  int v1639; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1640; // [rsp+214h] [rbp+114h] BYREF
  int v1641; // [rsp+218h] [rbp+118h] BYREF
  int v1642; // [rsp+21Ch] [rbp+11Ch] BYREF
  int v1643; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1644; // [rsp+224h] [rbp+124h] BYREF
  SIZE_T v1645; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1646; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1647; // [rsp+234h] [rbp+134h] BYREF
  SIZE_T v1648; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1649; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1650; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1651; // [rsp+248h] [rbp+148h] BYREF
  int v1652; // [rsp+24Ch] [rbp+14Ch] BYREF
  int v1653; // [rsp+250h] [rbp+150h] BYREF
  int v1654; // [rsp+254h] [rbp+154h] BYREF
  int v1655; // [rsp+258h] [rbp+158h] BYREF
  int v1656; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1657; // [rsp+268h] [rbp+168h] BYREF
  int v1658; // [rsp+26Ch] [rbp+16Ch] BYREF
  unsigned int v1659; // [rsp+270h] [rbp+170h] BYREF
  int v1660; // [rsp+274h] [rbp+174h] BYREF
  int v1661; // [rsp+278h] [rbp+178h]
  wchar_t *String1; // [rsp+280h] [rbp+180h] BYREF
  wchar_t *v1663; // [rsp+288h] [rbp+188h] BYREF
  wchar_t *v1664; // [rsp+290h] [rbp+190h] BYREF
  wchar_t *v1665; // [rsp+298h] [rbp+198h] BYREF
  size_t pcchLength[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v1667; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v1668; // [rsp+2B8h] [rbp+1B8h] BYREF
  int *v1669; // [rsp+2C0h] [rbp+1C0h] BYREF
  size_t v1670; // [rsp+2C8h] [rbp+1C8h] BYREF
  int *v1671; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v1672; // [rsp+2D8h] [rbp+1D8h] BYREF
  int *v1673; // [rsp+2E0h] [rbp+1E0h] BYREF
  void *v1674[5]; // [rsp+2E8h] [rbp+1E8h] BYREF
  void *v1675; // [rsp+310h] [rbp+210h] BYREF
  _DWORD *v1676; // [rsp+318h] [rbp+218h] BYREF
  LPVOID v1677; // [rsp+320h] [rbp+220h] BYREF
  HMODULE phModule; // [rsp+328h] [rbp+228h] BYREF
  int *v1679; // [rsp+330h] [rbp+230h] BYREF
  void *v1680; // [rsp+348h] [rbp+248h] BYREF
  const WCHAR *v1681; // [rsp+350h] [rbp+250h] BYREF
  const WCHAR *v1682; // [rsp+358h] [rbp+258h] BYREF
  const WCHAR *v1683; // [rsp+360h] [rbp+260h] BYREF
  _DWORD *v1684; // [rsp+368h] [rbp+268h] BYREF
  int *v1685; // [rsp+370h] [rbp+270h] BYREF
  int *v1686; // [rsp+378h] [rbp+278h] BYREF
  int *v1687; // [rsp+380h] [rbp+280h] BYREF
  int *v1688; // [rsp+388h] [rbp+288h] BYREF
  unsigned int *v1689; // [rsp+390h] [rbp+290h] BYREF
  __int64 v1690; // [rsp+398h] [rbp+298h] BYREF
  LPVOID v1691; // [rsp+3A8h] [rbp+2A8h]
  void **v1692; // [rsp+3B0h] [rbp+2B0h] BYREF
  LPVOID v1693; // [rsp+3C0h] [rbp+2C0h]
  _DWORD *v1694; // [rsp+3C8h] [rbp+2C8h] BYREF
  void *v1695; // [rsp+3D0h] [rbp+2D0h] BYREF
  unsigned __int64 v1696; // [rsp+3D8h] [rbp+2D8h]
  _QWORD *v1697; // [rsp+3E0h] [rbp+2E0h] BYREF
  char *v1698; // [rsp+3E8h] [rbp+2E8h] BYREF
  _DWORD *v1699; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v1700; // [rsp+3F8h] [rbp+2F8h]
  __int64 v1701; // [rsp+400h] [rbp+300h] BYREF
  __int64 v1702; // [rsp+408h] [rbp+308h] BYREF
  __int64 v1703; // [rsp+410h] [rbp+310h] BYREF
  __int64 v1704; // [rsp+418h] [rbp+318h] BYREF
  _QWORD v1705[4]; // [rsp+420h] [rbp+320h] BYREF
  int *v1706; // [rsp+440h] [rbp+340h] BYREF
  int *v1707; // [rsp+448h] [rbp+348h] BYREF
  int *v1708; // [rsp+450h] [rbp+350h] BYREF
  void *v1709[5]; // [rsp+458h] [rbp+358h] BYREF
  void *v1710; // [rsp+480h] [rbp+380h] BYREF
  _DWORD *v1711; // [rsp+488h] [rbp+388h] BYREF
  void *v1712; // [rsp+490h] [rbp+390h] BYREF
  HMODULE hModule; // [rsp+498h] [rbp+398h] BYREF
  void *v1714; // [rsp+4A0h] [rbp+3A0h] BYREF
  void *v1715; // [rsp+4A8h] [rbp+3A8h] BYREF
  void *v1716; // [rsp+4B0h] [rbp+3B0h] BYREF
  void *v1717; // [rsp+4B8h] [rbp+3B8h] BYREF
  int *v1718; // [rsp+4C0h] [rbp+3C0h] BYREF
  unsigned __int64 v1719[2]; // [rsp+4C8h] [rbp+3C8h] BYREF
  _DWORD *v1720; // [rsp+4D8h] [rbp+3D8h] BYREF
  __int128 v1721; // [rsp+4E0h] [rbp+3E0h]
  __int128 v1722; // [rsp+4F0h] [rbp+3F0h]
  void *v1723; // [rsp+508h] [rbp+408h] BYREF
  _QWORD *v1724; // [rsp+518h] [rbp+418h] BYREF
  size_t v1725; // [rsp+520h] [rbp+420h] BYREF
  LPVOID lpMem; // [rsp+528h] [rbp+428h]
  LPVOID v1727[2]; // [rsp+530h] [rbp+430h]
  size_t v1728; // [rsp+540h] [rbp+440h] BYREF
  void *v1729; // [rsp+548h] [rbp+448h]
  void *v1730; // [rsp+558h] [rbp+458h] BYREF
  void *v1731; // [rsp+568h] [rbp+468h] BYREF
  SIZE_T *v1732; // [rsp+578h] [rbp+478h] BYREF
  void *v1733; // [rsp+588h] [rbp+488h] BYREF
  int *v1734; // [rsp+598h] [rbp+498h] BYREF
  unsigned int *v1735; // [rsp+5A8h] [rbp+4A8h] BYREF
  void *v1736; // [rsp+5B8h] [rbp+4B8h] BYREF
  __int128 v1737; // [rsp+5C0h] [rbp+4C0h]
  __int128 v1738; // [rsp+5D0h] [rbp+4D0h] BYREF
  LPVOID v1739[3]; // [rsp+5E0h] [rbp+4E0h]
  _DWORD *v1740; // [rsp+5F8h] [rbp+4F8h] BYREF
  _QWORD v1741[2]; // [rsp+600h] [rbp+500h] BYREF
  int v1742; // [rsp+610h] [rbp+510h]
  unsigned int v1743; // [rsp+614h] [rbp+514h]
  int v1744; // [rsp+618h] [rbp+518h]
  _QWORD v1745[2]; // [rsp+620h] [rbp+520h] BYREF
  int v1746; // [rsp+630h] [rbp+530h]
  unsigned int v1747; // [rsp+634h] [rbp+534h]
  int v1748; // [rsp+638h] [rbp+538h]
  _BYTE v1749[24]; // [rsp+640h] [rbp+540h] BYREF
  char *v1750; // [rsp+658h] [rbp+558h]
  _BYTE v1751[4]; // [rsp+6B0h] [rbp+5B0h] BYREF
  int v1752; // [rsp+6B4h] [rbp+5B4h]
  int v1753; // [rsp+6B8h] [rbp+5B8h]
  __int16 v1754; // [rsp+6C2h] [rbp+5C2h]
  __int64 v1755; // [rsp+6C8h] [rbp+5C8h]
  _BYTE v1756[4]; // [rsp+720h] [rbp+620h] BYREF
  int v1757; // [rsp+724h] [rbp+624h]
  int v1758; // [rsp+728h] [rbp+628h]
  char *v1759; // [rsp+738h] [rbp+638h]
  _BYTE v1760[24]; // [rsp+790h] [rbp+690h] BYREF
  SIZE_T v1761; // [rsp+7A8h] [rbp+6A8h]
  _BYTE v1762[4]; // [rsp+800h] [rbp+700h] BYREF
  int v1763; // [rsp+804h] [rbp+704h]
  int v1764; // [rsp+808h] [rbp+708h]
  char *v1765; // [rsp+818h] [rbp+718h]
  _BYTE v1766[24]; // [rsp+870h] [rbp+770h] BYREF
  SIZE_T v1767; // [rsp+888h] [rbp+788h]
  _BYTE v1768[4]; // [rsp+8E0h] [rbp+7E0h] BYREF
  int v1769; // [rsp+8E4h] [rbp+7E4h]
  int v1770; // [rsp+8E8h] [rbp+7E8h]
  size_t v1771; // [rsp+8F8h] [rbp+7F8h]
  _BYTE v1772[4]; // [rsp+950h] [rbp+850h] BYREF
  int v1773; // [rsp+954h] [rbp+854h]
  int v1774; // [rsp+958h] [rbp+858h]
  size_t v1775; // [rsp+968h] [rbp+868h]
  _BYTE v1776[24]; // [rsp+9C0h] [rbp+8C0h] BYREF
  char *v1777; // [rsp+9D8h] [rbp+8D8h]
  int v1778; // [rsp+A30h] [rbp+930h] BYREF
  int v1779; // [rsp+A34h] [rbp+934h]
  void *v1780; // [rsp+A38h] [rbp+938h]
  void *v1781; // [rsp+A40h] [rbp+940h]
  void *v1782; // [rsp+A48h] [rbp+948h]
  const WCHAR *v1783; // [rsp+A50h] [rbp+950h]
  const WCHAR *v1784; // [rsp+A58h] [rbp+958h]
  __int64 v1785; // [rsp+A60h] [rbp+960h]
  int v1786; // [rsp+A68h] [rbp+968h]
  __int128 v1787; // [rsp+A6Ch] [rbp+96Ch] BYREF
  __int128 v1788; // [rsp+A7Ch] [rbp+97Ch] BYREF
  unsigned int v1789; // [rsp+A8Ch] [rbp+98Ch] BYREF
  unsigned int v1790; // [rsp+A90h] [rbp+990h]
  unsigned int v1791; // [rsp+A94h] [rbp+994h]
  unsigned int v1792; // [rsp+A98h] [rbp+998h]
  unsigned __int64 v1793; // [rsp+AA0h] [rbp+9A0h]
  unsigned __int64 v1794; // [rsp+AA8h] [rbp+9A8h]
  __int64 v1795; // [rsp+AB0h] [rbp+9B0h]
  __int64 v1796; // [rsp+AB8h] [rbp+9B8h]
  __int128 v1797; // [rsp+AC0h] [rbp+9C0h] BYREF
  __int128 v1798; // [rsp+AD0h] [rbp+9D0h]
  __int128 v1799; // [rsp+AE0h] [rbp+9E0h] BYREF
  __int128 v1800; // [rsp+AF0h] [rbp+9F0h] BYREF
  __int64 v1801; // [rsp+B00h] [rbp+A00h] BYREF
  unsigned int v1802; // [rsp+B08h] [rbp+A08h]
  int v1803; // [rsp+B0Ch] [rbp+A0Ch]
  __int128 v1804; // [rsp+B10h] [rbp+A10h] BYREF
  char v1805[12]; // [rsp+B20h] [rbp+A20h] BYREF
  unsigned int v1806; // [rsp+B2Ch] [rbp+A2Ch]
  __int128 v1807; // [rsp+B40h] [rbp+A40h] BYREF
  __int128 v1808; // [rsp+B50h] [rbp+A50h] BYREF
  __int64 v1809; // [rsp+B60h] [rbp+A60h]
  __int128 v1810; // [rsp+B68h] [rbp+A68h] BYREF
  __int128 v1811; // [rsp+B78h] [rbp+A78h] BYREF
  __int64 v1812; // [rsp+B88h] [rbp+A88h]
  __int128 v1813; // [rsp+B90h] [rbp+A90h] BYREF
  __int128 v1814; // [rsp+BA0h] [rbp+AA0h]
  __int64 v1815; // [rsp+BB0h] [rbp+AB0h]
  int v1816; // [rsp+BB8h] [rbp+AB8h]
  __int128 v1817; // [rsp+BC0h] [rbp+AC0h] BYREF
  __int128 v1818; // [rsp+BD0h] [rbp+AD0h]
  __int64 v1819; // [rsp+BE0h] [rbp+AE0h]
  int v1820; // [rsp+BE8h] [rbp+AE8h]
  __int128 v1821; // [rsp+BF0h] [rbp+AF0h] BYREF
  __int128 v1822; // [rsp+C00h] [rbp+B00h]
  __int64 v1823; // [rsp+C10h] [rbp+B10h]
  int v1824; // [rsp+C18h] [rbp+B18h]
  __int128 v1825; // [rsp+C20h] [rbp+B20h] BYREF
  __int128 v1826; // [rsp+C30h] [rbp+B30h]
  __int64 v1827; // [rsp+C40h] [rbp+B40h]
  int v1828; // [rsp+C48h] [rbp+B48h]
  __int128 v1829; // [rsp+C50h] [rbp+B50h] BYREF
  __int128 v1830; // [rsp+C60h] [rbp+B60h]
  __int64 v1831; // [rsp+C70h] [rbp+B70h]
  int v1832; // [rsp+C78h] [rbp+B78h]
  _DWORD v1833[6]; // [rsp+C80h] [rbp+B80h] BYREF
  char v1834; // [rsp+C9Ah] [rbp+B9Ah]
  wchar_t v1835[34]; // [rsp+C9Ch] [rbp+B9Ch] BYREF
  _DWORD v1836[6]; // [rsp+CE0h] [rbp+BE0h] BYREF
  char v1837; // [rsp+CFAh] [rbp+BFAh]
  wchar_t v1838[34]; // [rsp+CFCh] [rbp+BFCh] BYREF
  _DWORD v1839[6]; // [rsp+D40h] [rbp+C40h] BYREF
  char v1840; // [rsp+D5Ah] [rbp+C5Ah]
  wchar_t v1841[34]; // [rsp+D5Ch] [rbp+C5Ch] BYREF
  _BYTE v1842[68]; // [rsp+DA0h] [rbp+CA0h] BYREF
  __int16 v1843; // [rsp+DE4h] [rbp+CE4h]
  unsigned __int16 v1844; // [rsp+E46h] [rbp+D46h]
  __int64 v1845; // [rsp+E4Ch] [rbp+D4Ch]
  _QWORD v1846[6]; // [rsp+E80h] [rbp+D80h] BYREF
  int v1847; // [rsp+EB0h] [rbp+DB0h] BYREF
  __int128 v1848; // [rsp+EB8h] [rbp+DB8h]
  __int128 v1849; // [rsp+EC8h] [rbp+DC8h]
  __int128 v1850; // [rsp+ED8h] [rbp+DD8h]
  __int64 v1851; // [rsp+EE8h] [rbp+DE8h]
  _QWORD v1852[20]; // [rsp+EF0h] [rbp+DF0h] BYREF
  _WORD v1853[8]; // [rsp+F90h] [rbp+E90h] BYREF
  _BYTE v1854[176]; // [rsp+FA0h] [rbp+EA0h] BYREF
  WCHAR Filename[264]; // [rsp+1050h] [rbp+F50h] BYREF

  v1679 = 0LL;
  v1621 = 0;
  v1622 = 0;
  v1590 = 0LL;
  Size = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1 = g_WarbirdSecureFunctionsRefCount;
  v1597 = -1;
  if ( !g_WarbirdSecureFunctionsRefCount )
  {
    v2 = MemoryAlloc(0x338uLL);
    if ( !v2 )
      goto LABEL_17;
    v3 = 0;
    v4 = v2 + 7;
    v5 = -1;
    v6 = (unsigned __int8 *)&unk_180832662;
    v7 = 0;
    v8 = 0;
    v9 = 103LL;
    do
    {
      v10 = *(v6 - 1) | (*(v6 - 2) << 8);
      v11 = v6[2] << 8;
      v12 = *v6;
      v6 += 8;
      v13 = *(v6 - 7) | ((v12 | (v10 << 8)) << 8);
      v14 = v13 ^ v8;
      v15 = *(v6 - 3) | ((*(v6 - 4) | ((*(v6 - 5) | v11) << 8)) << 8);
      v16 = v14 ^ v15 ^ v7 ^ 0xAC987321;
      v17 = (__ROL4__(v16, 10) + 4991 * __ROL4__(v16 + 1419157410, 5)) ^ v14;
      v18 = (43881 * __ROR4__(v17 + 133239679, 9) - __ROL4__(v17, 2)) ^ v16;
      v19 = (24670 * v18 - (v18 >> 13) - 123127970) ^ v17;
      v20 = (2033 * __ROL4__(v19 ^ 0xAB69, 6) - __ROL4__(v19, 2)) ^ v18;
      v21 = (133239679 - (v20 ^ 0xAB69605E)) ^ v19;
      v22 = (43881 * (v21 ^ 0x137F)) ^ __ROR4__(v21, 6) ^ v20;
      v23 = (__ROL4__(v22, 2) + 24670 * __ROR4__(v22 + 133239679, 15)) ^ v21;
      v24 = (2033 * __ROR4__(v23 + 1419157410, 14) - __ROL4__(v23, 8)) ^ v22;
      v25 = __ROR4__(v24, 10) ^ (4991 * __ROR4__(v24 ^ 0xAB69605E, 12)) ^ v23;
      v26 = v24 ^ (v25 >> 10) ^ (43881 * (v25 ^ 0x7F1));
      v27 = (2033 * (__ROR4__(~v26, 5) + 24670)) ^ v25;
      v28 = v26 ^ (v27 - 2033) ^ 0xAB69605E;
      v29 = ((v28 >> 2) + 4991 * __ROL4__(v26 ^ (v27 - 2033) ^ 0xAB6967AF, 2)) ^ v27;
      v30 = (__ROL4__(v29, 7) + 43881 * __ROR4__(v29 - 133239679, 6)) ^ v28;
      v31 = (24670 * (v30 ^ 0x137F) + __ROR4__(v30, 9)) ^ v29;
      v32 = (__ROL4__(v31, 7) + 2033 * __ROL4__(v31 ^ 0xAB69, 5)) ^ v30;
      v33 = v31 ^ v32 ^ 0xAC987321;
      v34 = (4991 * __ROR4__(v33, 3) - 219010071) ^ v32;
      v35 = (24670 * __ROR4__(v34 - 133239679, 1) - __ROR4__(v34, 6)) ^ v33;
      v36 = (__ROL4__(v35, 14) + 2033 * __ROL4__(v35 - 1419157410, 3)) ^ v34;
      v37 = (4991 * __ROL4__(v36 - 1419157410, 15) - __ROR4__(v36, 14)) ^ v35;
      v38 = (v37 >> 3) ^ (43881 * (v37 ^ 0x605E)) ^ v36;
      v39 = 24670 * __ROL4__(v38 ^ 0x7F1137F, 4);
      v40 = v38;
      v41 = v5 ^ v38;
      v5 = v15;
      v42 = v3 ^ __ROL4__(v40, 2) ^ v39;
      v3 = v13;
      v43 = v42 ^ v37;
      *(v4 - 4) = v43;
      *v4 = v41;
      v4 += 8;
      v44 = __ROR4__(v43, 8);
      *(v4 - 13) = v44;
      v45 = __ROR4__(v41, 8);
      *(v4 - 9) = v45;
      v46 = __ROR4__(v44, 8);
      *(v4 - 14) = v46;
      v47 = __ROR4__(v45, 8);
      *(v4 - 10) = v47;
      v48 = __ROR4__(v46, 8);
      v49 = __ROR4__(v47, 8);
      *(v4 - 15) = v48;
      *(v4 - 11) = v49;
      v7 = __ROR4__(v49, 8);
      v8 = __ROR4__(v48, 8);
      --v9;
    }
    while ( v9 );
    v50 = 0LL;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    do
      v51 ^= v2[v50++];
    while ( v50 < 0x338 );
    if ( v51 != 64LL )
    {
      MemoryFree(v2);
LABEL_17:
      v55 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v56 = 4LL;
      do
      {
        if ( *v55 )
          FreeLibrary(*v55);
        v55 += 3;
        --v56;
      }
      while ( v56 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
      goto LABEL_47;
    }
    v2[823] = 0;
    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
    v57 = v2;
    if ( *v2 )
    {
      while ( 1 )
      {
        v58 = -1LL;
        v59 = (const WCHAR *)v2;
        v52 = 0;
        do
          ++v58;
        while ( *(_WORD *)&v2[2 * v58] );
        v60 = &v2[2 * v58];
        v61 = (char *)&WARBIRD::g_arModuleInfo + 24 * v53;
        if ( !GetModuleHandleExW(0, v59, (HMODULE *)v61) )
          break;
        if ( **(_WORD **)v61 == 23117
          && (v62 = *(int *)(*(_QWORD *)v61 + 60LL), (unsigned int)v62 < 0x10000000)
          && (v63 = *(_QWORD *)v61 + v62, v63 >= *(_QWORD *)v61)
          && *(_DWORD *)v63 == 17744 )
        {
          if ( ((*(_WORD *)(v63 + 24) - 267) & 0xFEFF) != 0 )
          {
            v52 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v61 + 12) = *(_QWORD *)(v63 + 136);
            *((_DWORD *)v61 + 2) = *(_DWORD *)(v63 + 80);
          }
        }
        else
        {
          v52 = -1073741701;
        }
        v64 = *(_DWORD *)(v60 + 2);
        v2 = v60 + 6;
        v1356 = v64;
        for ( i = 0; i < v1356; ++i )
        {
          v66 = v2;
          v67 = -1LL;
          do
            ++v67;
          while ( v2[v67] );
          v2 += v67 + 1;
          if ( v52 >= 0 )
          {
            ProcAddress = (void **)GetProcAddress(*(HMODULE *)v61, v66);
            if ( !ProcAddress )
              goto LABEL_44;
            (&WARBIRD::g_FuncAddress)[v54] = ProcAddress;
          }
          ++v54;
        }
        ++v53;
        if ( !*v2 )
          goto LABEL_44;
      }
      v52 = -1073741702;
    }
LABEL_44:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v57);
    if ( v52 < 0 )
      goto LABEL_17;
    v1 = g_WarbirdSecureFunctionsRefCount;
  }
  g_WarbirdSecureFunctionsRefCount = v1 + 1;
LABEL_47:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  String1 = 0LL;
  v70 = 0;
  v1663 = 0LL;
  v71 = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_97;
  v72 = ((__int64 (*)(void))off_180985210)();
  v73 = 0LL;
  if ( !v72 )
    goto LABEL_57;
  v74 = 0LL;
  v1664 = 0LL;
  for ( j = 0LL; ; j = v1625 )
  {
    v76 = v74;
    if ( !v73 )
      v76 = 0LL;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180985230)(
                         v72,
                         2LL,
                         v76,
                         j,
                         &v1625) )
    {
      String1 = v74;
      v1664 = 0LL;
      goto LABEL_68;
    }
    LastError = GetLastError();
    if ( LastError != 122 )
      break;
    if ( v74 )
      goto LABEL_62;
    v74 = (wchar_t *)MemoryAlloc(v1625);
    v73 = v74;
    v1664 = v74;
    if ( !v74 )
    {
      v71 = -2147024882;
      goto LABEL_68;
    }
  }
  if ( !LastError )
  {
LABEL_62:
    v71 = -2147467259;
    goto LABEL_68;
  }
  if ( LastError > 0 )
    v71 = (unsigned __int16)LastError | 0x80070000;
  else
    v71 = LastError;
LABEL_68:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1664);
  if ( v71 < 0 )
    goto LABEL_98;
  v79 = off_180985228;
  CurrentThreadId = GetCurrentThreadId();
  v81 = ((__int64 (__fastcall *)(_QWORD))v79)(CurrentThreadId);
  v82 = 0LL;
  if ( !v81 )
  {
LABEL_57:
    v71 = GetLastError();
    v78 = v71 < 0;
    if ( v71 > 0 )
    {
      v71 = (unsigned __int16)v71 | 0x80070000;
      v78 = v71 < 0;
    }
    if ( !v78 )
      v71 = -2147467259;
    goto LABEL_98;
  }
  v83 = 0LL;
  v1665 = 0LL;
  v71 = 0;
  for ( k = 0LL; ; k = v1626 )
  {
    v85 = v83;
    if ( !v82 )
      v85 = 0LL;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180985230)(
                         v81,
                         2LL,
                         v85,
                         k,
                         &v1626) )
    {
      v1663 = v83;
      v1665 = 0LL;
      goto LABEL_85;
    }
    v86 = GetLastError();
    if ( v86 != 122 )
      break;
    if ( v83 )
      goto LABEL_79;
    v83 = (wchar_t *)MemoryAlloc(v1626);
    v82 = v83;
    v1665 = v83;
    if ( !v83 )
    {
      v71 = -2147024882;
      goto LABEL_85;
    }
  }
  if ( !v86 )
  {
LABEL_79:
    v71 = -2147467259;
    goto LABEL_85;
  }
  if ( v86 > 0 )
    v71 = (unsigned __int16)v86 | 0x80070000;
  else
    v71 = v86;
LABEL_85:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1665);
  if ( v71 >= 0 )
  {
    if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1663 && !wcscmp_0(v1663, L"Default") )
    {
      v1598 = 0;
      CurrentProcess = GetCurrentProcess();
      if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1598, 4LL) )
      {
        v71 = GetLastError();
        v88 = v71 < 0;
        if ( v71 > 0 )
        {
          v71 = (unsigned __int16)v71 | 0x80070000;
          v88 = v71 < 0;
        }
        if ( !v88 )
          v71 = -2147467259;
        goto LABEL_98;
      }
      if ( (v1598 & 0xF) == 0 )
        v70 = 1;
    }
LABEL_97:
    Size = v70;
  }
LABEL_98:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1663);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&String1);
  v89 = 0;
  if ( v71 >= 0 )
    v89 = Size;
  v1357 = v89;
  v90 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v1590, v90);
  v91 = 0LL;
  v1623 = v1590;
  if ( v1590 )
  {
    v93 = 0LL;
    lpMem = 0LL;
    *(_OWORD *)v1727 = 0LL;
    v94 = GetProcessHeap();
    v95 = HeapAlloc(v94, 8u, 0xA0uLL);
    v1434 = 3LL;
    v1599 = 56;
    v92 = -1073741801;
    if ( !v95 )
    {
LABEL_107:
      LODWORD(v1593) = v92;
LABEL_108:
      v98 = v89;
      goto LABEL_109;
    }
    v91 = v95;
    *v95 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
    v95[1] = *((_OWORD *)&_ImageBase + 625603);
    v95[2] = *((_OWORD *)&_ImageBase + 625604);
    v95[3] = *((_OWORD *)&_ImageBase + 625605);
    v95[4] = *((_OWORD *)&_ImageBase + 625606);
    v95[5] = *((_OWORD *)&_ImageBase + 625607);
    v95[6] = *((_OWORD *)&_ImageBase + 625608);
    v95[7] = *((_OWORD *)&_ImageBase + 625609);
    v95[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
    v95[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
    v96 = GetProcessHeap();
    v97 = HeapAlloc(v96, 8u, 8uLL);
    if ( !v97 )
    {
      LODWORD(v1593) = -1073741801;
LABEL_105:
      v98 = v89;
      goto LABEL_109;
    }
    *v97 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
    v1556 = __rdtsc();
    dwBytes = 0;
    v92 = RtlUIntAdd(4u, 4, (unsigned int *)&dwBytes_4);
    LODWORD(v1593) = v92;
    if ( v92 < 0 )
    {
      v98 = v89;
      v93 = v107;
      goto LABEL_109;
    }
    v108 = RtlUIntAdd(0, dwBytes_4, &dwBytes);
    v98 = v89;
    v92 = v108 | 0x10000000;
    v93 = v110;
    LODWORD(v1593) = v108 | 0x10000000;
    if ( v108 < 0 )
      goto LABEL_109;
    v92 = RtlUIntAdd(v109, 160, (unsigned int *)&v1629);
    LODWORD(v1593) = v92;
    if ( v92 < 0 )
      goto LABEL_109;
    v111 = RtlUIntAdd(dwBytes, v1629, &dwBytes);
    v92 = v111 | 0x10000000;
    LODWORD(v1593) = v111 | 0x10000000;
    if ( v111 < 0 )
      goto LABEL_109;
    v92 = RtlUIntAdd(v112, v112 + 4, (unsigned int *)&v1641);
    LODWORD(v1593) = v92;
    if ( v92 < 0 )
      goto LABEL_109;
    v113 = RtlUIntAdd(dwBytes, v1641, &dwBytes);
    v92 = v113 | 0x10000000;
    LODWORD(v1593) = v113 | 0x10000000;
    if ( v113 < 0 )
      goto LABEL_109;
    v92 = RtlUIntAdd(v114, v114 + 4, (unsigned int *)&v1652);
    LODWORD(v1593) = v92;
    if ( v92 < 0 )
      goto LABEL_109;
    v115 = RtlUIntAdd(dwBytes, v1652, &dwBytes);
    v92 = v115 | 0x10000000;
    LODWORD(v1593) = v115 | 0x10000000;
    if ( v115 < 0 )
      goto LABEL_109;
    if ( StringCchLengthW(L"Shell-WindowTabHost-Enabled", v116, pcchLength) < 0 )
    {
      v92 = -1073741762;
LABEL_135:
      LODWORD(v1593) = v92;
      goto LABEL_109;
    }
    ++pcchLength[0];
    v92 = RtlUIntAdd(4u, 2 * LODWORD(pcchLength[0]), (unsigned int *)&v1653);
    LODWORD(v1593) = v92;
    if ( v92 < 0 )
      goto LABEL_109;
    v117 = RtlUIntAdd(dwBytes, v1653, &dwBytes);
    v92 = v117 | 0x10000000;
    LODWORD(v1593) = v117 | 0x10000000;
    if ( v117 < 0 )
      goto LABEL_109;
    v92 = RtlUIntAdd(4u, 4, (unsigned int *)&v1654);
    LODWORD(v1593) = v92;
    if ( v92 < 0 )
      goto LABEL_109;
    v118 = RtlUIntAdd(dwBytes, v1654, &dwBytes);
    v92 = v118 | 0x10000000;
    LODWORD(v1593) = v118 | 0x10000000;
    if ( v118 < 0
      || (v92 = RtlUIntAdd(v119, v119, (unsigned int *)&v1655), LODWORD(v1593) = v92, v92 < 0)
      || (v120 = RtlUIntAdd(dwBytes, v1655, &dwBytes),
          v92 = v120 | 0x10000000,
          LODWORD(v1593) = v120 | 0x10000000,
          v120 < 0) )
    {
LABEL_109:
      v1725 = 0LL;
      v99 = lpMem;
      if ( lpMem )
      {
        v100 = GetProcessHeap();
        HeapFree(v100, 0, v99);
        lpMem = 0LL;
      }
      v1727[0] = 0LL;
      v101 = v1727[1];
      if ( v1727[1] )
      {
        v102 = GetProcessHeap();
        HeapFree(v102, 0, v101);
        v1727[1] = 0LL;
      }
      if ( v91 )
      {
        v103 = GetProcessHeap();
        HeapFree(v103, 0, v91);
      }
      if ( v93 )
      {
        v104 = GetProcessHeap();
        HeapFree(v104, 0, v93);
      }
      if ( v92 < 0 )
        goto LABEL_1586;
      if ( !v98 )
      {
LABEL_1585:
        v1315 = v1622;
        v1590 = 0LL;
        v1679 = (int *)v1623;
        goto LABEL_1587;
      }
      g_WarbirdNotificationInformation = v98;
      v1690 = 0LL;
      ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
      v106 = 0LL;
      if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
        goto LABEL_1230;
      v1339 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
      if ( !v1339 )
      {
        GetLastError();
LABEL_1230:
        SH<void *,SH_HANDLE>::Reset(&v1690);
        v1729 = 0LL;
        v974 = 0LL;
        *(_OWORD *)v1739 = 0LL;
        v975 = GetProcessHeap();
        v976 = HeapAlloc(v975, 8u, 0xA0uLL);
        if ( !v976 )
          goto LABEL_1577;
        v974 = v976;
        *v976 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
        v976[1] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
        v976[2] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
        v976[3] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
        v976[4] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
        v976[5] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
        v976[6] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
        v976[7] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
        v976[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
        v976[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
        v977 = GetProcessHeap();
        v978 = (WCHAR *)HeapAlloc(v977, 8u, 8uLL);
        v979 = v978;
        if ( !v978 )
          goto LABEL_1577;
        *(_QWORD *)v978 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
        v1494 = (void *)__rdtsc();
        v1630 = 0;
        v106 = (__int64)v979;
        if ( (int)RtlUIntAdd(4u, 4, (unsigned int *)&v1631) < 0 )
          goto LABEL_1577;
        if ( (int)RtlUIntAdd(0, v1631, &v1630) < 0 )
          goto LABEL_1577;
        if ( (int)RtlUIntAdd(v980, 160, (unsigned int *)&v1632) < 0 )
          goto LABEL_1577;
        v981 = RtlUIntAdd(v1630, v1632, &v1630);
        if ( (v984 | v981) < 0 )
          goto LABEL_1577;
        if ( (int)RtlUIntAdd(v983, v982 + 8, (unsigned int *)&v1633) < 0 )
          goto LABEL_1577;
        v985 = RtlUIntAdd(v1630, v1633, &v1630);
        if ( (v988 | v985) < 0 )
          goto LABEL_1577;
        if ( (int)RtlUIntAdd(v987, v986 + 8, v1634) < 0 )
          goto LABEL_1577;
        v989 = RtlUIntAdd(v1630, v1634[0], &v1630);
        if ( (v990 | v989) < 0 )
          goto LABEL_1577;
        HIDWORD(v1728) = v1630;
        v991 = v1630;
        v992 = GetProcessHeap();
        v993 = HeapAlloc(v992, 8u, v991);
        if ( !v993 )
          goto LABEL_1577;
        v1729 = v993;
        LODWORD(v1728) = 0;
        v1705[3] = v993;
        v1533 = v979;
        v1347 = (size_t)v974;
        v994 = 0LL;
        if ( (int)RtlULongLongAdd((unsigned __int64)v993, 4LL, (unsigned __int64 *)&v1740) < 0
          || v996 + 2 > (_DWORD *)((char *)v996 + HIDWORD(v1728)) )
        {
          goto LABEL_1577;
        }
        v997 = v1740;
        *v996 = 4;
        *v997 = 4;
        v998 = v1728 + 1;
        LODWORD(v1728) = v1728 + 1;
        if ( v1729 )
        {
          v1000 = (int *)v1729;
          v1706 = (int *)v1729;
          v1439 = 0;
          if ( v998 )
          {
            do
            {
              if ( (int)RtlUIntAdd(4u, *v1000, &v1636) < 0
                || (int)RtlULongLongAdd(v1001, v1636, (unsigned __int64 *)&v1706) < 0 )
              {
                goto LABEL_1577;
              }
              v1000 = v1706;
              ++v1439;
              v1533 = (LPCWSTR)v106;
              v1347 = (size_t)v974;
            }
            while ( v1439 < v1002 );
            v994 = 0LL;
          }
          if ( (int)RtlULongLongAdd((unsigned __int64)v1000, 4LL, (unsigned __int64 *)&v1723) < 0
            || (char *)v1003 + v1004 + 4 > (char *)v1729 + HIDWORD(v1728) )
          {
            goto LABEL_1577;
          }
          *v1003 = v1004;
          memcpy_0(v1723, v974, v1004);
          v999 = 4LL;
        }
        else if ( (int)RtlUIntAdd(4u, v995, (unsigned int *)&v1635) < 0
               || (int)RtlUIntAdd(HIDWORD(v1728), v1635, (unsigned int *)&v1728 + 1) < 0 )
        {
          goto LABEL_1577;
        }
        v1005 = v1728 + 1;
        LODWORD(v1728) = v1728 + 1;
        if ( v106 )
        {
          if ( v1729 )
          {
            v1008 = (int *)v1729;
            v1707 = (int *)v1729;
            v1440 = 0;
            if ( v1005 )
            {
              do
              {
                if ( (int)RtlUIntAdd(4u, *v1008, &v1638) < 0
                  || (int)RtlULongLongAdd(v1009, v1638, (unsigned __int64 *)&v1707) < 0 )
                {
                  goto LABEL_1577;
                }
                v1008 = v1707;
                ++v1440;
                v1533 = (LPCWSTR)v106;
                v1347 = (size_t)v974;
              }
              while ( v1440 < v1010 );
              v994 = 0LL;
              v999 = 4LL;
            }
            if ( (int)RtlULongLongAdd((unsigned __int64)v1008, v999, (unsigned __int64 *)&v1736) < 0
              || v1011 + 3 > (_DWORD *)((char *)v1729 + HIDWORD(v1728)) )
            {
              goto LABEL_1577;
            }
            *v1011 = 8;
            memcpy_0(v1736, (const void *)v106, 8uLL);
            v1007 = 4LL;
            v1006 = 1;
          }
          else if ( (int)RtlUIntAdd(v999, 8, (unsigned int *)&v1637) < 0
                 || (int)RtlUIntAdd(HIDWORD(v1728), v1637, (unsigned int *)&v1728 + 1) < 0 )
          {
            goto LABEL_1577;
          }
          v1012 = v1006 + v1728;
          LODWORD(v1728) = v1006 + v1728;
          if ( v1729 )
          {
            v1015 = (int *)v1729;
            v1708 = (int *)v1729;
            if ( v1012 )
            {
              do
              {
                if ( (int)RtlUIntAdd(4u, *v1015, &v1640) < 0
                  || (int)RtlULongLongAdd(v1016, v1640, (unsigned __int64 *)&v1708) < 0 )
                {
                  goto LABEL_1577;
                }
                v1015 = v1708;
                LODWORD(v994) = (_DWORD)v994 + 1;
                v1533 = (LPCWSTR)v106;
                v1347 = (size_t)v974;
              }
              while ( (unsigned int)v994 < v1012 );
              v1007 = 4LL;
            }
            v994 = 0LL;
            if ( (int)RtlULongLongAdd((unsigned __int64)v1015, v1007, (unsigned __int64 *)&v1724) < 0
              || v1017 + 3 > (_DWORD *)((char *)v1729 + HIDWORD(v1728)) )
            {
              goto LABEL_1577;
            }
            v1018 = v1724;
            *v1017 = 8;
            *v1018 = v1494;
            LODWORD(v1728) = v1728 + 1;
          }
          else
          {
            if ( (int)RtlUIntAdd(v1007, 8, (unsigned int *)&v1639) < 0
              || (int)RtlUIntAdd(HIDWORD(v1728), v1639, (unsigned int *)&v1728 + 1) < 0 )
            {
              goto LABEL_1577;
            }
            LODWORD(v1728) = v1013 + v1728;
          }
          if ( (int)RtlUIntAdd(v1014, v1014, &v1651) >= 0 )
          {
            v1020 = v1651;
            v1642 = v1651;
            if ( (int)RtlUIntAdd(v1019, 8, (unsigned int *)&v1643) >= 0
              && (int)RtlUIntAdd(v1020, v1643, (unsigned int *)&v1642) >= 0 )
            {
              v1330 = 0;
              v1591 = 0LL;
              lpModuleNamem = 0LL;
              v1376 = 0;
              Srco = 0LL;
              v1486 = 0LL;
              v1398 = 0LL;
              v1441 = v1642;
              v1495 = 0LL;
              v1455 = __rdtsc();
              v1644 = 8;
              v1021 = RtlUIntAdd(8u, SHIDWORD(v1728), &v1644);
              if ( v1021 >= 0 )
              {
                v1024 = (v1644 + 7) & 0xFFFFFFF8;
                if ( v1024 < v1644 )
                  goto LABEL_1577;
                v1644 = (v1644 + 7) & 0xFFFFFFF8;
                v1025 = v1024;
                v1026 = GetProcessHeap();
                v1027 = HeapAlloc(v1026, 8u, v1025);
                v1590 = v1027;
                if ( !v1027 )
                  goto LABEL_1577;
                v1709[0] = v1027;
                *v1027 = v1728;
                v1028 = RtlULongLongAdd((unsigned __int64)v1027, 4LL, (unsigned __int64 *)v1709);
                v1578 = v1029;
                v1021 = v1028;
                v1533 = (LPCWSTR)v106;
                v1347 = (size_t)v974;
                if ( v1028 < 0
                  || (v1030 = v1709[0],
                      *(_DWORD *)v1709[0] = HIDWORD(v1728),
                      v1031 = RtlULongLongAdd((unsigned __int64)v1030, 4LL, (unsigned __int64 *)v1709),
                      v1578 = v1032,
                      v1021 = v1031,
                      v1533 = (LPCWSTR)v106,
                      v1347 = (size_t)v974,
                      v1031 < 0) )
                {
                  v1033 = GetProcessHeap();
                  HeapFree(v1033, 0, v1578);
                  v1022 = 0;
                }
                else
                {
                  *(_QWORD *)&v1032[v1644 - 8] = v1455;
                  memcpy_0(v1709[0], v1729, HIDWORD(v1728));
                  v994 = (unsigned __int8 *)v1590;
                  v1022 = v1644;
                  v1495 = (unsigned __int8 *)v1590;
                  v1330 = v1644;
                  v1533 = (LPCWSTR)v106;
                  v1347 = (size_t)v974;
                }
                v1023 = 0LL;
              }
              v1034 = v1021 | 0x10000000;
              if ( v1034 < 0 )
                goto LABEL_1360;
              v1456 = v1023;
              if ( v994 )
              {
                v1035 = v1022;
                v1525 = (LPVOID)v1022;
                if ( !v1022 || (v1516 = v1022 + 8, (v1590 = MemoryAlloc(v1022 + 8LL)) == 0LL) )
                {
                  v1034 = -805306367;
LABEL_1361:
                  v1140 = GetProcessHeap();
                  HeapFree(v1140, 0, v994);
LABEL_1362:
                  v1141 = v1591;
                  if ( v1591 )
                  {
                    v1142 = (void *)*((_QWORD *)v1591 + 1);
                    if ( v1142 )
                    {
                      v1143 = GetProcessHeap();
                      HeapFree(v1143, 0, v1142);
                      v1141[1] = 0LL;
                    }
                    v1144 = (void *)v1141[3];
                    if ( v1144 )
                    {
                      v1145 = GetProcessHeap();
                      HeapFree(v1145, 0, v1144);
                      v1141[3] = 0LL;
                    }
                    v1146 = (void *)v1141[5];
                    if ( v1146 )
                    {
                      v1147 = GetProcessHeap();
                      HeapFree(v1147, 0, v1146);
                      v1141[5] = 0LL;
                    }
                    v1148 = GetProcessHeap();
                    HeapFree(v1148, 0, v1141);
                  }
                  if ( lpModuleNamem )
                  {
                    v1149 = GetProcessHeap();
                    HeapFree(v1149, 0, lpModuleNamem);
                  }
                  if ( Srco )
                  {
                    v1150 = GetProcessHeap();
                    HeapFree(v1150, 0, Srco);
                  }
                  if ( v1486 )
                  {
                    v1151 = (void *)v1486[1];
                    if ( v1151 )
                    {
                      v1152 = GetProcessHeap();
                      HeapFree(v1152, 0, v1151);
                      v1486[1] = 0LL;
                    }
                    v1153 = (void *)v1486[3];
                    if ( v1153 )
                    {
                      v1154 = GetProcessHeap();
                      HeapFree(v1154, 0, v1153);
                      v1486[3] = 0LL;
                    }
                    v1155 = (void *)v1486[5];
                    if ( v1155 )
                    {
                      v1156 = GetProcessHeap();
                      HeapFree(v1156, 0, v1155);
                      v1486[5] = 0LL;
                    }
                    v1157 = GetProcessHeap();
                    HeapFree(v1157, 0, v1486);
                  }
                  if ( v1398 )
                  {
                    v1158 = GetProcessHeap();
                    HeapFree(v1158, 0, v1398);
                  }
                  if ( v1034 >= 0 )
                  {
                    if ( LODWORD(v1739[0]) )
                    {
                      v1159 = v1739[1];
                      if ( v1739[1] )
                      {
                        v1718 = (int *)v1739[1];
                        if ( (int)RtlULongLongAdd((unsigned __int64)v1739[1], 4LL, (unsigned __int64 *)&v1718) >= 0 )
                        {
                          v1162 = v1718;
                          if ( !*v1159 )
                            v1162 = 0LL;
                          v1718 = v1162;
                          if ( *v1159 == (_DWORD)v1161 && *v1162 >= 0 && v1159 && LODWORD(v1739[0]) > 1 )
                          {
                            v1719[0] = v1160;
                            v1163 = 0;
                            while ( (int)RtlULongLongAdd(v1160, v1161, v1719) >= 0
                                 && (int)RtlULongLongAdd(v1719[0], v1164, v1719) >= 0 )
                            {
                              v1160 = v1719[0];
                              if ( ++v1163 )
                              {
                                RtlULongLongAdd(v1719[0], v1161, v1719);
                                goto LABEL_1577;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_1577;
                }
                v1036 = 0;
                v1037 = 0LL;
                v1320 = 0;
                if ( v1035 )
                {
                  do
                    v1036 ^= v994[v1037++];
                  while ( v1037 < v1035 );
                  v1320 = v1036;
                }
                v1038 = (SIZE_T)v1590;
                v1592 = (SIZE_T)v1590;
                v1039 = -1;
                v1040 = v1330;
                v1794 = 0xC81ECB17B1B54A58uLL;
                v1579 = 0;
                v1041 = v994;
                LODWORD(v1596) = 0;
                v1042 = 0;
                v1043 = v1330 & 7;
                if ( (v1330 & 7) != 0 )
                {
                  v1044 = 0;
                  v1045 = 0;
                  v1331 = 0;
                  v1046 = 56;
                  do
                  {
                    v1047 = *v1041++;
                    if ( v1044 >= 4 )
                      v1045 |= v1047 << v1046;
                    else
                      v1042 |= v1047 << (v1046 - 32);
                    v1046 -= 8;
                    v1044 = v1331 + 1;
                    v1579 = v1045;
                    LODWORD(v1596) = v1042;
                    v1331 = v1044;
                  }
                  while ( (int)v1044 < v1043 );
                  v92 = v1593;
                  v1042 ^= 0xB17A307A;
                  v1048 = (_BYTE *)v1592;
                  v1049 = v1045 ^ 0x42F6B18D;
                  v1594 = v1041;
                  v1050 = v1042;
                  v1495 = v994;
                  v1051 = v1049;
                  v1533 = (LPCWSTR)v106;
                  v1347 = (size_t)v974;
                  v1052 = 0;
                  do
                  {
                    v1332 = v1048 + 1;
                    if ( v1052 >= 4 )
                    {
                      v1051 = __ROL4__(v1051, 8);
                      v1053 = v1051;
                    }
                    else
                    {
                      v1050 = __ROL4__(v1050, 8);
                      v1053 = v1050;
                    }
                    *v1048 = v1053;
                    ++v1052;
                    ++v1048;
                  }
                  while ( v1052 < v1043 );
                  v1038 = (SIZE_T)v1332;
                  v1041 = (unsigned __int8 *)v1594;
                  v1036 = v1320;
                  v1040 = (unsigned __int64)v1525;
                  v1592 = (SIZE_T)v1332;
                  if ( (unsigned int)v1043 <= 4 )
                  {
                    v1039 = 0;
                    if ( (unsigned int)v1043 >= 4 )
                      goto LABEL_1314;
                    v1042 = v1042 >> (8 * (4 - v1043)) << (8 * (4 - v1043));
                  }
                  else
                  {
                    v1039 = v1049 >> (8 * (8 - v1043)) << (8 * (8 - v1043));
                  }
                  v1038 = v1592;
                }
LABEL_1314:
                v1594 = (LPVOID)(v1040 >> 3);
                if ( v1040 >> 3 )
                {
                  v1054 = (_BYTE *)(v1038 + 7);
                  v1055 = v1041 + 2;
                  v1056 = (char *)v1594;
                  v1057 = v1579;
                  v1058 = (int)v1596;
                  v1333 = WORD1(v1794);
                  v1059 = WORD2(v1794);
                  LODWORD(v1592) = HIWORD(v1794);
                  do
                  {
                    v1060 = *(v1055 - 1) | (*(v1055 - 2) << 8);
                    v1061 = v1055[2] << 8;
                    v1062 = *v1055;
                    v1055 += 8;
                    v1063 = *(v1055 - 7) | ((v1062 | (v1060 << 8)) << 8);
                    v1064 = *(v1055 - 3) | ((*(v1055 - 4) | ((*(v1055 - 5) | v1061) << 8)) << 8);
                    v1065 = v1064 ^ v1039;
                    v1066 = v1042 ^ v1063 ^ (v1065 - 19032);
                    v1067 = __ROR4__(v1066, 15);
                    v1068 = HIDWORD(v1794) ^ v1066;
                    v1069 = (__ROR4__(v1068, 7) + WORD1(v1794) * v1067) ^ v1065;
                    v1070 = (v1059 * __ROR4__(v1069 - 1313519016, 9) - __ROR4__(v1069, 10)) ^ v1068;
                    v1071 = (__ROL4__(v1070, 5) + HIWORD(v1794) * __ROL4__(v1059 ^ v1070, 4)) ^ v1069;
                    v1072 = (HIDWORD(v1794) - (v1071 ^ 0xB1B54A58)) ^ v1070;
                    v1073 = (WORD1(v1794) * (v1072 - 19032) - (v1072 >> 6)) ^ v1071;
                    v1074 = (19032 * (v1059 ^ __ROR4__(v1073, 15))) ^ v1072;
                    v1075 = (v1059 * (HIWORD(v1794) + __ROR4__(~v1074, 3))) ^ v1073;
                    v1076 = (v1075 - 19032 - HIDWORD(v1794)) ^ v1074;
                    v1077 = (v1333 * (v1592 ^ v1076)) ^ __ROR4__(v1076, 10) ^ v1075;
                    v1078 = __ROR4__(v1077, 3) ^ (v1059 * __ROL4__(v1077 ^ 0x4A58, 6)) ^ v1076;
                    v1079 = (19032 * (__ROR4__(v1078, 15) - HIWORD(v1794))) ^ v1077;
                    v1080 = (v1079 >> 15) ^ (19032 * __ROL4__(v1079 - v1059, 3)) ^ (v1079 >> 1) ^ (19032
                                                                                                 * (HIWORD(v1794) ^ v1079)) ^ v1078;
                    v1081 = (WORD1(v1794) * (v1080 - v1059) - (v1080 >> 13)) ^ v1079;
                    v1082 = __ROR4__(v1081, 11) ^ (v1059 * __ROR4__(-1313519016 - v1081, 9)) ^ v1080;
                    v1083 = (v1082 - HIWORD(v1794) + 1313519016) ^ v1081;
                    v1084 = (19032 * (v1333 ^ v1083) - __ROR4__(v1083, 7)) ^ v1082;
                    v1085 = (WORD1(v1794) * __ROL4__(HIWORD(v1794) ^ v1084, 4) - __ROR4__(v1084, 16)) ^ v1083;
                    v1086 = (__ROR4__(v1085, 4) + v1059 * __ROR4__(-1313519016 - v1085, 10)) ^ v1084;
                    v1087 = __ROR4__(v1086, 9) ^ (HIWORD(v1794) * __ROR4__(v1086 + 1313519016, 4)) ^ v1085;
                    v1088 = (19032 * __ROL4__(v1087 ^ HIDWORD(v1794), 8) - __ROL4__(v1087, 2)) ^ v1086;
                    v1089 = (WORD1(v1794) * __ROR4__(HIDWORD(v1794) - v1088, 11) - __ROR4__(v1088, 12)) ^ v1087;
                    v1090 = (v1089 >> 8) ^ (v1059 * (v1089 ^ WORD1(v1794))) ^ v1088;
                    v1091 = v1090 ^ HIDWORD(v1794) ^ v1089 ^ 0xB1B54A58;
                    v1092 = v1058 ^ v1090;
                    *(v1054 - 4) = v1092;
                    v1093 = v1057 ^ v1091;
                    *v1054 = v1093;
                    v1058 = v1063;
                    v1094 = __ROR4__(v1092, 8);
                    v1057 = v1064;
                    *(v1054 - 5) = v1094;
                    v1054 += 8;
                    v1095 = __ROR4__(v1093, 8);
                    *(v1054 - 9) = v1095;
                    v1096 = __ROR4__(v1094, 8);
                    *(v1054 - 14) = v1096;
                    v1097 = __ROR4__(v1095, 8);
                    *(v1054 - 10) = v1097;
                    v1098 = __ROR4__(v1096, 8);
                    v1099 = __ROR4__(v1097, 8);
                    *(v1054 - 15) = v1098;
                    *(v1054 - 11) = v1099;
                    v1039 = __ROR4__(v1099, 8);
                    v1042 = __ROR4__(v1098, 8);
                    --v1056;
                  }
                  while ( v1056 );
                  v1036 = v1320;
                  v92 = v1593;
                  v974 = (void *)v1347;
                  v106 = (__int64)v1533;
                  v994 = v1495;
                  v1040 = (unsigned __int64)v1525;
                }
                v1100 = v1590;
                *(_QWORD *)((char *)v1590 + v1040) = v1036;
                v1709[4] = (void *)160;
                v1101 = GetProcessHeap();
                v1102 = (unsigned int *)HeapAlloc(v1101, 8u, 0x30uLL);
                if ( v1102 )
                {
                  *v1102 = v1516;
                  v1104 = GetProcessHeap();
                  v1105 = HeapAlloc(v1104, 8u, v1516);
                  if ( !v1105 )
                    goto LABEL_1339;
                  *((_QWORD *)v1102 + 1) = v1105;
                  memcpy_0(v1105, v1100, v1516);
                  v1102[4] = 160;
                  v1106 = GetProcessHeap();
                  v1107 = HeapAlloc(v1106, 8u, 0xA0uLL);
                  if ( !v1107 )
                    goto LABEL_1339;
                  *((_QWORD *)v1102 + 3) = v1107;
                  *v1107 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                  v1107[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                  v1107[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                  v1107[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                  v1107[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                  v1107[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                  v1107[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                  v1107[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                  v1107[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                  v1107[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                  v1102[8] = 8;
                  v1108 = GetProcessHeap();
                  v1109 = HeapAlloc(v1108, 8u, 8uLL);
                  v1103 = 0;
                  if ( v1109 )
                  {
                    *((_QWORD *)v1102 + 5) = v1109;
                    *v1109 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                    v1456 = 0LL;
                  }
                  else
                  {
LABEL_1339:
                    v1103 = -1073741801;
                    v1351 = (void *)*((_QWORD *)v1102 + 1);
                    if ( v1351 )
                    {
                      v1120 = GetProcessHeap();
                      HeapFree(v1120, 0, v1351);
                      *((_QWORD *)v1102 + 1) = 0LL;
                    }
                    v1352 = (void *)*((_QWORD *)v1102 + 3);
                    if ( v1352 )
                    {
                      v1121 = GetProcessHeap();
                      HeapFree(v1121, 0, v1352);
                      *((_QWORD *)v1102 + 3) = 0LL;
                    }
                    v1353 = (void *)*((_QWORD *)v1102 + 5);
                    if ( v1353 )
                    {
                      v1122 = GetProcessHeap();
                      HeapFree(v1122, 0, v1353);
                      *((_QWORD *)v1102 + 5) = 0LL;
                    }
                    v1123 = GetProcessHeap();
                    HeapFree(v1123, 0, v1102);
                    v1102 = 0LL;
                  }
                }
                else
                {
                  v1103 = -1073741801;
                  v1102 = 0LL;
                }
                v1591 = v1102;
                v1110 = GetProcessHeap();
                HeapFree(v1110, 0, v1590);
                v1111 = v1456;
                if ( v1456 )
                {
                  v1348 = (void *)v1456[1];
                  if ( v1348 )
                  {
                    v1112 = GetProcessHeap();
                    HeapFree(v1112, 0, v1348);
                    v1111 = v1456;
                    v1456[1] = 0LL;
                  }
                  v1349 = (void *)v1111[3];
                  if ( v1349 )
                  {
                    v1113 = GetProcessHeap();
                    HeapFree(v1113, 0, v1349);
                    v1111 = v1456;
                    v1456[3] = 0LL;
                  }
                  v1350 = (void *)v1111[5];
                  if ( v1350 )
                  {
                    v1114 = GetProcessHeap();
                    HeapFree(v1114, 0, v1350);
                    v1456[5] = 0LL;
                  }
                  v1115 = GetProcessHeap();
                  HeapFree(v1115, 0, v1456);
                  v1591 = v1102;
                }
                v1034 = v1103 | 0x10000000;
                if ( v1034 < 0 )
                  goto LABEL_1360;
                v1116 = *v1102;
                LODWORD(v1645) = 4;
                v1117 = RtlUIntAdd(4u, v1116, (unsigned int *)&v1645);
                if ( v1117 >= 0 )
                {
                  v1117 = RtlUIntAdd(v1645, v1118, (unsigned int *)&v1645);
                  if ( v1117 >= 0 )
                  {
                    v1117 = RtlUIntAdd(v1645, v1102[4], (unsigned int *)&v1645);
                    if ( v1117 >= 0 )
                    {
                      v1117 = RtlUIntAdd(v1645, v1119, (unsigned int *)&v1645);
                      if ( v1117 >= 0 )
                      {
                        v1117 = RtlUIntAdd(v1645, v1102[8], (unsigned int *)&v1645);
                        if ( v1117 >= 0 )
                        {
                          v1334 = v1645;
                          v1124 = v1645;
                          v1125 = GetProcessHeap();
                          v1126 = HeapAlloc(v1125, 8u, v1124);
                          v1517 = v1126;
                          if ( !v1126 )
                            goto LABEL_1428;
                          v1710 = v1126;
                          *v1126 = *v1102;
                          v1127 = RtlULongLongAdd((unsigned __int64)v1126, 4LL, (unsigned __int64 *)&v1710);
                          v1590 = v1128;
                          v1117 = v1127;
                          v1591 = v1102;
                          if ( v1127 < 0 )
                            goto LABEL_1355;
                          memcpy_0(v1710, *((const void **)v1102 + 1), *v1102);
                          v1117 = RtlULongLongAdd((unsigned __int64)v1710, *v1102, (unsigned __int64 *)&v1710);
                          v1590 = v1517;
                          v1591 = v1102;
                          if ( v1117 < 0 )
                            goto LABEL_1355;
                          v1129 = v1710;
                          *(_DWORD *)v1710 = v1102[4];
                          v1130 = RtlULongLongAdd((unsigned __int64)v1129, 4LL, (unsigned __int64 *)&v1710);
                          v1590 = v1131;
                          v1117 = v1130;
                          v1591 = v1102;
                          if ( v1130 < 0 )
                            goto LABEL_1355;
                          memcpy_0(v1710, *((const void **)v1102 + 3), v1102[4]);
                          v1117 = RtlULongLongAdd((unsigned __int64)v1710, v1102[4], (unsigned __int64 *)&v1710);
                          v1590 = v1517;
                          v1591 = v1102;
                          if ( v1117 < 0 )
                            goto LABEL_1355;
                          v1132 = v1710;
                          *(_DWORD *)v1710 = v1102[8];
                          v1133 = RtlULongLongAdd((unsigned __int64)v1132, 4LL, (unsigned __int64 *)&v1710);
                          v1590 = v1134;
                          v1117 = v1133;
                          v1591 = v1102;
                          if ( v1133 < 0
                            || (memcpy_0(v1710, *((const void **)v1102 + 5), v1102[8]),
                                v1117 = RtlULongLongAdd((unsigned __int64)v1710, v1102[8], (unsigned __int64 *)&v1710),
                                v1591 = v1102,
                                v1590 = v1517,
                                v1117 < 0) )
                          {
LABEL_1355:
                            v1135 = GetProcessHeap();
                            HeapFree(v1135, 0, v1590);
                          }
                          else
                          {
                            lpModuleNamem = (WCHAR *)v1517;
                            v1376 = v1334;
                            v1591 = v1102;
                          }
                        }
                      }
                    }
                  }
                }
                v1034 = v1117 | 0x10000000;
                if ( v1034 < 0 )
                  goto LABEL_1360;
                v1646 = 8;
                v1136 = RtlUIntAdd(8u, v1441, &v1646);
                v1034 = v1136 | 0x10000000;
                if ( v1136 < 0 )
                  goto LABEL_1360;
                v1139 = (v1646 + 7) & 0xFFFFFFF8;
                if ( v1139 < v1646 )
                {
                  v1034 = -1073741675;
                  goto LABEL_1360;
                }
                v1647 = (v1646 + 7) & 0xFFFFFFF8;
                lpModuleNamem = v1138;
                v1591 = v1102;
                v1034 = RtlUIntAdd(v1139, v1137, &v1647);
                if ( v1034 < 0 )
                  goto LABEL_1360;
                v1591 = v1102;
                lpModuleNamem = v1165;
                if ( !v1729 )
                  goto LABEL_1420;
                v1591 = v1102;
                lpModuleNamem = v1165;
                if ( (unsigned int)v1728 <= 1 )
                  goto LABEL_1420;
                v1166 = v1729;
                v1711 = v1729;
                do
                {
                  v1034 = RtlULongLongAdd((unsigned __int64)v1166, 4LL, (unsigned __int64 *)&v1711);
                  if ( v1034 < 0 )
                    goto LABEL_1360;
                  v1034 = RtlULongLongAdd((unsigned __int64)v1711, v1167, (unsigned __int64 *)&v1711);
                  if ( v1034 < 0 )
                    goto LABEL_1360;
                  v1166 = v1711;
                }
                while ( v1168 == -1 );
                v1442 = *v1711;
                v1034 = RtlULongLongAdd((unsigned __int64)v1711, 4LL, (unsigned __int64 *)&v1711);
                if ( v1034 < 0 )
                  goto LABEL_1360;
                if ( !v1729 || (unsigned int)v1728 <= 2 )
                {
LABEL_1420:
                  v1034 = -1073741811;
                  goto LABEL_1360;
                }
                v1169 = v1729;
                v1712 = v1729;
                do
                {
                  v1034 = RtlULongLongAdd((unsigned __int64)v1169, 4LL, (unsigned __int64 *)&v1712);
                  if ( v1034 < 0 )
                    goto LABEL_1360;
                  v1034 = RtlULongLongAdd((unsigned __int64)v1712, v1170, (unsigned __int64 *)&v1712);
                  if ( v1034 < 0 )
                    goto LABEL_1360;
                  v1169 = v1712;
                }
                while ( (unsigned int)(v1171 + 1) < 2 );
                v1034 = RtlULongLongAdd((unsigned __int64)v1712, 4LL, (unsigned __int64 *)&v1712);
                if ( v1034 < 0 )
                  goto LABEL_1360;
                LODWORD(v1648) = 4;
                v1034 = RtlUIntAdd(4u, v1647, (unsigned int *)&v1648);
                if ( v1034 < 0 )
                  goto LABEL_1360;
                v1034 = RtlUIntAdd(v1648, v1172, (unsigned int *)&v1648);
                if ( v1034 < 0 )
                  goto LABEL_1360;
                v1034 = RtlUIntAdd(v1648, v1442, (unsigned int *)&v1648);
                if ( v1034 < 0 )
                  goto LABEL_1360;
                v1034 = RtlUIntAdd(v1648, 4, (unsigned int *)&v1648);
                if ( v1034 < 0 )
                  goto LABEL_1360;
                v1034 = RtlUIntAdd(v1648, v1173, (unsigned int *)&v1648);
                if ( v1034 < 0 )
                  goto LABEL_1360;
                v1560 = v1648;
                if ( (unsigned int)v1648 > 0x400000 )
                {
                  v1034 = -2147418113;
                  goto LABEL_1360;
                }
                v1354 = v1174;
                v1175 = v1648;
                v1176 = GetProcessHeap();
                v1177 = (unsigned int *)HeapAlloc(v1176, 8u, v1175);
                if ( v1177 )
                {
                  Srco = v1177;
                  if ( !v1354 )
                  {
                    v1034 = -2147024809;
                    Srco = v1177;
                    v1591 = v1102;
LABEL_1444:
                    lpModuleNamem = (WCHAR *)v1354;
                    goto LABEL_1360;
                  }
                  v1746 = v1376;
                  v1747 = v1560;
                  v1745[0] = v1354;
                  v1745[1] = v1177;
                  v1748 = 0;
                  if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                    && (v1178 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                  {
                    v1179 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1178)(134LL, v1745);
                    v1180 = v1560;
                    v1034 = v1179 | 0x10000000;
                    if ( v1179 >= 0 )
                    {
                      v1180 = v1747;
                      v1181 = v994;
                      v1182 = v974;
                      v1183 = v106;
                      v1184 = v1102;
                      goto LABEL_1440;
                    }
                  }
                  else
                  {
                    v1185 = GetLastError();
                    v1034 = v1185;
                    if ( v1185 > 0 )
                      v1034 = (unsigned __int16)v1185 | 0x80070000;
                    v1180 = v1560;
                    if ( v1034 >= 0 )
                      v1034 = -2147467259;
                  }
                  lpModuleNamem = (WCHAR *)v1354;
                  if ( v1034 == -805306333 )
                  {
                    v1034 = -2147024774;
                    v1591 = v1102;
                    goto LABEL_1360;
                  }
                  v1184 = v1102;
                  v1183 = v106;
                  v1182 = v974;
                  v1181 = v994;
                  v1591 = v1102;
                  if ( v1034 < 0 )
                    goto LABEL_1360;
LABEL_1440:
                  v1590 = 0LL;
                  v974 = v1182;
                  v994 = v1181;
                  if ( v1180 < 4 )
                  {
                    v1034 = -805306306;
LABEL_1443:
                    v1591 = v1184;
                    goto LABEL_1444;
                  }
                  v106 = v1183;
                  v1186 = *Srco;
                  v1443 = *Srco;
                  v1457 = (char *)(Srco + 1);
                  if ( Srco + 1 < Srco )
                  {
                    v1034 = -805306219;
                    goto LABEL_1443;
                  }
                  v1187 = (WCHAR *)v1354;
                  lpModuleNamem = (WCHAR *)v1354;
                  v1591 = v1102;
                  if ( v1180 - 4 < (unsigned int)v1186 )
                  {
                    v1034 = -805306306;
LABEL_1449:
                    v1591 = v1102;
LABEL_1452:
                    lpModuleNamem = (WCHAR *)v1354;
                    goto LABEL_1360;
                  }
                  v1580 = v1186;
                  v1188 = (unsigned int *)&v1457[v1186];
                  v1596 = &v1457[v1186];
                  if ( &v1457[v1186] >= v1457 )
                  {
                    v1189 = v1186 + 4;
                    if ( v1189 >= 4 )
                    {
                      if ( v1180 - v1189 < 4 )
                        goto LABEL_1470;
                      lpModuleNamem = (WCHAR *)v1354;
                      v1591 = v1102;
                      v1190 = *v1188;
                      v1191 = v1188 + 1;
                      v1335 = *v1188;
                      if ( v1188 + 1 < v1188 )
                        goto LABEL_1575;
                      v974 = v1182;
                      v1377 = v1189 + 4;
                      if ( v1189 + 4 < v1189 )
                      {
                        v1034 = -805306219;
                        v1591 = v1102;
                        goto LABEL_1452;
                      }
                      if ( v1180 - (v1189 + 4) < (unsigned int)v1190 )
                        goto LABEL_1470;
                      v1192 = (unsigned int *)((char *)v1191 + v1190);
                      v1592 = *v1188;
                      lpModuleNamem = (WCHAR *)v1354;
                      v1591 = v1102;
                      if ( (unsigned int *)((char *)v1191 + v1190) < v1191 )
                      {
LABEL_1575:
                        v1034 = -805306219;
                        goto LABEL_1360;
                      }
                      v1193 = v1190 + v1377;
                      if ( (unsigned int)v1190 + v1377 >= v1377 )
                      {
                        if ( v1180 - v1193 >= 4 )
                        {
                          v1194 = *v1192;
                          v1561 = *v1192;
                          v1473 = v1192 + 1;
                          v1591 = v1102;
                          if ( v1192 + 1 < v1192 )
                          {
                            v1034 = -805306219;
                            goto LABEL_1452;
                          }
                          lpModuleNamem = (WCHAR *)v1354;
                          v1378 = v1193 + 4;
                          if ( v1193 + 4 < v1193 )
                          {
                            v1034 = -805306219;
                            goto LABEL_1472;
                          }
                          v1526 = (WCHAR *)v1354;
                          if ( v1180 - v1378 >= v1194 )
                          {
                            lpModuleNamem = (WCHAR *)v1354;
                            v1591 = v1102;
                            v1379 = v1194 + v1378;
                            if ( v1379 < v1193 + 4 )
                            {
                              v1034 = -805306219;
                              goto LABEL_1360;
                            }
                            v1195 = Srco;
                            v1496 = v994;
                            v1355 = (size_t)v974;
                            v1534 = (LPCWSTR)v106;
                            if ( v1180 != v1379 )
                            {
LABEL_1469:
                              v1034 = -805306306;
                              Srco = v1195;
LABEL_1472:
                              v1591 = v1102;
                              lpModuleNamem = v1187;
                              goto LABEL_1360;
                            }
                            if ( v1194 + (_DWORD)v1190 + v1443 + 12LL != v1180 )
                            {
                              v1195 = Srco;
                              goto LABEL_1469;
                            }
                            v1196 = GetProcessHeap();
                            v1197 = HeapAlloc(v1196, 8u, 0x30uLL);
                            v1380 = v1197;
                            if ( !v1197 )
                            {
                              v1034 = -805306345;
                              lpModuleNamem = v1526;
                              v1591 = v1102;
                              goto LABEL_1360;
                            }
                            v1198 = 0;
                            if ( Srco == (unsigned int *)-4LL )
                            {
                              v1201 = v1473;
                              *(_DWORD *)v1197 = 0;
                              v1197[1] = 0LL;
                            }
                            else
                            {
                              *(_DWORD *)v1197 = v1443;
                              v1199 = GetProcessHeap();
                              v1200 = HeapAlloc(v1199, 8u, v1580);
                              if ( !v1200 )
                                goto LABEL_1486;
                              v1380[1] = v1200;
                              memcpy_0(v1200, v1457, v1580);
                              v1197 = v1380;
                              v1201 = v1473;
                            }
                            v1496 = v994;
                            v1355 = (size_t)v974;
                            v1534 = (LPCWSTR)v106;
                            v1591 = v1102;
                            v1380 = v1197;
                            if ( v1596 == (LPVOID)-4LL )
                            {
                              v1205 = lpModuleNamem;
                              v1204 = Srco;
                              *((_DWORD *)v1197 + 4) = 0;
                              v1197[3] = 0LL;
                            }
                            else
                            {
                              *((_DWORD *)v1197 + 4) = v1335;
                              v1202 = GetProcessHeap();
                              v1203 = HeapAlloc(v1202, 8u, v1592);
                              if ( !v1203 )
                                goto LABEL_1486;
                              v1380[3] = v1203;
                              v1198 = 0;
                              memcpy_0(v1203, (char *)v1596 + 4, v1592);
                              v1197 = v1380;
                              v1201 = v1473;
                              v1204 = Srco;
                              v1205 = lpModuleNamem;
                              v1591 = v1102;
                              v1534 = (LPCWSTR)v106;
                              v1355 = (size_t)v974;
                              v1496 = v994;
                            }
                            if ( !v1201 )
                            {
                              *((_DWORD *)v1197 + 8) = 0;
                              v1197[5] = 0LL;
                              goto LABEL_1494;
                            }
                            *((_DWORD *)v1197 + 8) = v1561;
                            v1206 = GetProcessHeap();
                            v1207 = HeapAlloc(v1206, 8u, v1561);
                            if ( v1207 )
                            {
                              v1380[5] = v1207;
                              v1198 = 0;
                              memcpy_0(v1207, v1473, v1561);
                              v1204 = Srco;
                              v1205 = lpModuleNamem;
                              v1197 = v1380;
                              v1591 = v1102;
                              v1534 = (LPCWSTR)v106;
                              v1355 = (size_t)v974;
                              v1496 = v994;
LABEL_1494:
                              v1590 = v1197;
                              goto LABEL_1495;
                            }
LABEL_1486:
                            v1198 = -1073741801;
                            v1208 = v1380;
                            v1487 = (void *)v1380[1];
                            if ( v1487 )
                            {
                              v1209 = GetProcessHeap();
                              HeapFree(v1209, 0, v1487);
                              v1208 = v1380;
                              v1380[1] = 0LL;
                            }
                            v1488 = (void *)v1208[3];
                            if ( v1488 )
                            {
                              v1210 = GetProcessHeap();
                              HeapFree(v1210, 0, v1488);
                              v1208 = v1380;
                              v1380[3] = 0LL;
                            }
                            v1489 = (void *)v1208[5];
                            if ( v1489 )
                            {
                              v1211 = GetProcessHeap();
                              HeapFree(v1211, 0, v1489);
                              v1380[5] = 0LL;
                            }
                            v1212 = GetProcessHeap();
                            HeapFree(v1212, 0, v1380);
                            v1205 = lpModuleNamem;
                            v1204 = Srco;
                            v1197 = v1590;
LABEL_1495:
                            v1458 = (SIZE_T)v1205;
                            v1381 = v1102;
                            v1562 = (SIZE_T)v1204;
                            v1213 = 0LL;
                            v1444 = v1198;
                            if ( v1198 < 0 )
                            {
                              v1486 = 0LL;
                              Srco = v1204;
                              v1591 = v1102;
                              v1534 = (LPCWSTR)v106;
                              v1355 = (size_t)v974;
                              v1496 = v994;
                              lpModuleNamem = v1205;
                              if ( v1197 )
                              {
                                v1214 = v1590;
                                v1215 = (void *)*((_QWORD *)v1590 + 1);
                                if ( v1215 )
                                {
                                  v1216 = GetProcessHeap();
                                  HeapFree(v1216, 0, v1215);
                                  v1214[1] = 0LL;
                                }
                                v1217 = (void *)v1214[3];
                                if ( v1217 )
                                {
                                  v1218 = GetProcessHeap();
                                  HeapFree(v1218, 0, v1217);
                                  v1214[3] = 0LL;
                                }
                                v1219 = (void *)v1214[5];
                                if ( v1219 )
                                {
                                  v1220 = GetProcessHeap();
                                  HeapFree(v1220, 0, v1219);
                                  v1214[5] = 0LL;
                                }
                                v1221 = GetProcessHeap();
                                HeapFree(v1221, 0, v1214);
                                v1213 = 0LL;
                                v1102 = v1381;
                                v1198 = v1444;
                                Srco = (unsigned int *)v1562;
                                v1486 = 0LL;
                                lpModuleNamem = (WCHAR *)v1458;
                                v1591 = v1381;
                                v1534 = (LPCWSTR)v106;
                                v1355 = (size_t)v974;
                                v1496 = v994;
                              }
                            }
                            else
                            {
                              v1213 = (unsigned int *)v1197;
                              v1486 = v1197;
                            }
                            v1034 = v1198 | 0x10000000;
                            if ( v1034 >= 0 )
                            {
                              if ( !v1213 || (v1459 = *((_QWORD *)v1213 + 1)) == 0 || !*v1213 )
                              {
                                v1034 = -805306355;
                                goto LABEL_1360;
                              }
                              v1222 = *v1213 - 8LL;
                              v1527 = v1222;
                              v1223 = (WCHAR *)MemoryAlloc(v1222);
                              v1224 = 0;
                              v1399 = v1223;
                              v1225 = v1223;
                              if ( !v1223 )
                                goto LABEL_1536;
                              v1226 = (unsigned __int8 *)v1459;
                              v1227 = 0;
                              v1228 = v1486;
                              v1590 = v1223;
                              v1581 = v1222 & 7;
                              v1795 = 0x7F1137FAB69605ELL;
                              if ( (v1222 & 7) != 0 )
                              {
                                v1445 = 0;
                                v1229 = 0;
                                v1230 = 0;
                                v1231 = (unsigned __int8 *)v1459;
                                do
                                {
                                  v1232 = *v1231++;
                                  if ( v1229 >= 4 )
                                  {
                                    v1233 = v1445;
                                    v1230 |= v1232 << v1599;
                                  }
                                  else
                                  {
                                    v1233 = (v1232 << (v1599 - 32)) | v1445;
                                    v1445 = v1233;
                                  }
                                  v1599 -= 8;
                                  ++v1229;
                                }
                                while ( (int)v1229 < (int)v1581 );
                                v1597 = v1230;
                                v1234 = v1230;
                                v1336 = v1233 ^ 0x92F65A5;
                                v92 = v1593;
                                v1235 = v1233 ^ 0x92F65A5;
                                v1225 = v1223;
                                v1236 = v1234 ^ 0x699A899C;
                                v1591 = v1102;
                                v1237 = 0;
                                v1238 = v1223;
                                v1534 = (LPCWSTR)v106;
                                v1355 = (size_t)v974;
                                v1496 = v994;
                                do
                                {
                                  v1590 = v1238 + 1;
                                  if ( v1237 >= 4 )
                                  {
                                    v1236 = __ROL4__(v1236, 8);
                                    v1239 = v1236;
                                  }
                                  else
                                  {
                                    v1235 = __ROL4__(v1235, 8);
                                    v1239 = v1235;
                                  }
                                  *v1238 = v1239;
                                  ++v1237;
                                  v1238 = v1590;
                                }
                                while ( v1237 < (int)v1581 );
                                v1227 = 0;
                                v1102 = (unsigned int *)v1591;
                                v1224 = v1336;
                                v1228 = v1486;
                                if ( v1581 <= 4 )
                                {
                                  v1382 = 0;
                                  if ( v1581 < 4 )
                                    v1224 = v1336 >> (8 * (4 - v1581)) << (8 * (4 - v1581));
                                }
                                else
                                {
                                  v1382 = (v1234 ^ 0x699A899Cu) >> (8 * (8 - v1581)) << (8 * (8 - v1581));
                                }
                                v1226 = v1231;
                              }
                              else
                              {
                                v1445 = 0;
                                v1382 = 0;
                              }
                              v1240 = v1527;
                              if ( v1527 >> 3 )
                              {
                                v1241 = HIDWORD(v1795);
                                v1242 = v1226 + 2;
                                v1243 = v1382;
                                v1244 = v1445;
                                v1245 = (char *)v1590 + 7;
                                v1246 = v1527 >> 3;
                                v1337 = HIDWORD(v1795) ^ 0xAB69605E;
                                v1247 = WORD2(v1795);
                                do
                                {
                                  v1248 = *(v1242 - 1) | (*(v1242 - 2) << 8);
                                  v1249 = v1242[2] << 8;
                                  v1250 = *v1242;
                                  v1242 += 8;
                                  v1251 = *(v1242 - 7) | ((v1250 | (v1248 << 8)) << 8);
                                  v1252 = v1251 ^ v1224;
                                  v1253 = *(v1242 - 3) | ((*(v1242 - 4) | ((*(v1242 - 5) | v1249) << 8)) << 8);
                                  v1254 = v1337 ^ v1252 ^ v1253 ^ v1243;
                                  v1255 = (__ROL4__(v1254, 10) + v1247 * __ROL4__(v1254 + 1419157410, 5)) ^ v1252;
                                  v1256 = (WORD1(v1795) * __ROR4__(v1241 + v1255, 9) - __ROL4__(v1255, 2)) ^ v1254;
                                  v1257 = (24670 * (v1256 - v1247) - (v1256 >> 13)) ^ v1255;
                                  v1258 = (HIWORD(v1795) * __ROL4__(WORD1(v1795) ^ v1257, 6) - __ROL4__(v1257, 2)) ^ v1256;
                                  v1259 = (v1241 - (v1258 ^ 0xAB69605E)) ^ v1257;
                                  v1260 = (WORD1(v1795) * (v1247 ^ v1259)) ^ __ROR4__(v1259, 6) ^ v1258;
                                  v1261 = (__ROL4__(v1260, 2) + 24670 * __ROR4__(v1241 + v1260, 15)) ^ v1259;
                                  v1262 = (HIWORD(v1795) * __ROR4__(v1261 + 1419157410, 14) - __ROL4__(v1261, 8)) ^ v1260;
                                  v1263 = __ROR4__(v1262, 10) ^ (v1247 * __ROR4__(v1262 ^ 0xAB69605E, 12)) ^ v1261;
                                  v1264 = (v1263 >> 10) ^ (WORD1(v1795) * (HIWORD(v1795) ^ v1263)) ^ v1262;
                                  v1265 = (HIWORD(v1795) * (__ROR4__(~v1264, 5) + 24670)) ^ v1263;
                                  v1266 = v1264 ^ (v1265 - HIWORD(v1795)) ^ 0xAB69605E;
                                  v1267 = ((v1266 >> 2) + v1247 * __ROL4__(HIWORD(v1795) ^ v1266, 2)) ^ v1265;
                                  v1268 = (__ROL4__(v1267, 7) + WORD1(v1795) * __ROR4__(v1267 - v1241, 6)) ^ v1266;
                                  v1269 = (24670 * (v1247 ^ v1268) + __ROR4__(v1268, 9)) ^ v1267;
                                  v1270 = (__ROL4__(v1269, 7) + HIWORD(v1795) * __ROL4__(WORD1(v1795) ^ v1269, 5)) ^ v1268;
                                  v1271 = v1241 ^ v1270 ^ v1269 ^ 0xAB69605E;
                                  v1272 = (v1247 * (__ROR4__(v1271, 3) - WORD1(v1795))) ^ v1270;
                                  v1273 = (24670 * __ROR4__(v1272 - v1241, 1) - __ROR4__(v1272, 6)) ^ v1271;
                                  v1274 = (__ROL4__(v1273, 14) + HIWORD(v1795) * __ROL4__(v1273 - 1419157410, 3)) ^ v1272;
                                  v1275 = (v1247 * __ROL4__(v1274 - 1419157410, 15) - __ROR4__(v1274, 14)) ^ v1273;
                                  v1276 = (v1275 >> 3) ^ (WORD1(v1795) * (v1275 ^ 0x605E)) ^ v1274;
                                  v1277 = v1597 ^ v1276;
                                  v1597 = v1253;
                                  v1278 = v1244 ^ __ROL4__(v1276, 2) ^ (24670 * __ROL4__(v1241 ^ v1276, 4));
                                  v1244 = v1251;
                                  v1279 = v1278 ^ v1275;
                                  *(v1245 - 4) = v1279;
                                  *v1245 = v1277;
                                  v1245 += 8;
                                  v1280 = __ROR4__(v1279, 8);
                                  *(v1245 - 13) = v1280;
                                  v1281 = __ROR4__(v1277, 8);
                                  *(v1245 - 9) = v1281;
                                  v1282 = __ROR4__(v1280, 8);
                                  *(v1245 - 14) = v1282;
                                  v1283 = __ROR4__(v1281, 8);
                                  *(v1245 - 10) = v1283;
                                  v1284 = __ROR4__(v1282, 8);
                                  v1285 = __ROR4__(v1283, 8);
                                  *(v1245 - 15) = v1284;
                                  *(v1245 - 11) = v1285;
                                  v1243 = __ROR4__(v1285, 8);
                                  v1224 = __ROR4__(v1284, 8);
                                  --v1246;
                                }
                                while ( v1246 );
                                v1227 = 0;
                                v92 = v1593;
                                v974 = (void *)v1355;
                                v106 = (__int64)v1534;
                                v994 = v1496;
                                v1102 = (unsigned int *)v1591;
                                v1228 = v1486;
                                v1225 = (WCHAR *)v1399;
                                v1240 = v1527;
                              }
                              for ( m = 0LL; m < v1240; ++m )
                                v1227 ^= *((_BYTE *)v1225 + m);
                              v1287 = v1228;
                              v1591 = v1102;
                              v1486 = v1228;
                              if ( v1227 != *(_QWORD *)(v1240 + v1459) )
                              {
                                MemoryFree(v1225);
LABEL_1536:
                                v1034 = -805306367;
                                v1398 = 0LL;
                                goto LABEL_1360;
                              }
                              v1714 = v1225;
                              v1649 = 0;
                              if ( (unsigned int)v1240 >= 4 )
                              {
                                v1446 = *(_DWORD *)v1225;
                                v1288 = RtlULongLongAdd((unsigned __int64)v1225, 4LL, (unsigned __int64 *)&v1714);
                                v1398 = v1289;
                                v1486 = v1290;
                                v1591 = v1102;
                                if ( v1288 < 0 )
                                  goto LABEL_1573;
                                v1291 = RtlUIntAdd(0, 4, &v1649);
                                v1292 = lpModuleNamem;
                                v1288 = v1291;
                                v1398 = v1225;
                                v1486 = v1287;
                                v1591 = v1102;
                                if ( v1291 < 0 )
                                  goto LABEL_1573;
                                if ( (unsigned int)v1527 - v1649 < 4 )
                                  goto LABEL_1562;
                                v1338 = *(_DWORD *)v1714;
                                v1288 = RtlULongLongAdd((unsigned __int64)v1714, 4LL, (unsigned __int64 *)&v1714);
                                v1398 = v1293;
                                v1486 = v1294;
                                v1591 = v1102;
                                if ( v1288 < 0 )
                                  goto LABEL_1573;
                                v1295 = RtlUIntAdd(v1649, 4, &v1649);
                                v1292 = lpModuleNamem;
                                v1288 = v1295;
                                v1398 = v1225;
                                v1486 = v1287;
                                v1591 = v1102;
                                if ( v1295 < 0 )
                                  goto LABEL_1573;
                                if ( (unsigned int)v1527 - v1649 < v1338 )
                                {
LABEL_1562:
                                  lpModuleNamem = v1292;
                                }
                                else
                                {
                                  v1288 = RtlUIntAdd(v1649, v1338, &v1649);
                                  v1398 = v1225;
                                  v1486 = v1287;
                                  v1591 = v1102;
                                  if ( v1288 < 0 )
                                    goto LABEL_1573;
                                  if ( (char *)v1225 + (unsigned int)v1527 >= (char *)v1714 + v1338
                                    && (unsigned int)v1527 + (char *)v1225 - (_BYTE *)v1714 - (unsigned __int64)v1338 < 8 )
                                  {
                                    v1398 = v1225;
                                    v1288 = 0;
                                    v1383 = 0;
                                    v1486 = v1287;
                                    v1591 = v1102;
                                    if ( !v1714 )
                                    {
LABEL_1559:
                                      if ( v1338 )
                                      {
                                        v1306 = GetProcessHeap();
                                        v1307 = v1338;
                                        v1288 = 0;
                                        v1308 = HeapAlloc(v1306, 8u, v1338);
                                        if ( !v1308 )
                                        {
                                          v1288 = -1073741801;
                                          goto LABEL_1573;
                                        }
                                      }
                                      else
                                      {
                                        v1307 = 0LL;
                                        v1308 = 0LL;
                                      }
                                      if ( v1714 )
                                        memcpy_0(v1308, v1714, v1307);
                                      LODWORD(v1739[0]) = v1383;
                                      v1739[1] = v1308;
                                      if ( v1288 < 0 || v1446 == LODWORD(v1739[0]) )
                                        goto LABEL_1573;
LABEL_1572:
                                      v1288 = -1073741762;
                                      goto LABEL_1573;
                                    }
                                    v1590 = v1714;
                                    v1288 = RtlULongLongAdd((unsigned __int64)v1714, v1338, (unsigned __int64 *)&v1715);
                                    v1398 = v1296;
                                    v1486 = v1297;
                                    v1591 = v1102;
                                    if ( v1288 >= 0 )
                                    {
                                      v1298 = v1590;
                                      v1398 = v1296;
                                      v1486 = v1297;
                                      v1591 = v1102;
                                      if ( v1590 < v1715 )
                                      {
                                        v1299 = Srco;
                                        v1300 = v1296;
                                        v1398 = v1296;
                                        v1486 = v1297;
                                        v1591 = v1102;
                                        while ( 1 )
                                        {
                                          v1582 = (SIZE_T)v1299;
                                          v1596 = v1297;
                                          v1288 = RtlULongLongAdd(
                                                    (unsigned __int64)v1298,
                                                    4LL,
                                                    (unsigned __int64 *)&v1716);
                                          if ( v1288 < 0 )
                                            goto LABEL_1573;
                                          if ( v1716 > v1715 )
                                            goto LABEL_1564;
                                          v1288 = RtlUIntAdd(v1302, *v1301, &v1650);
                                          if ( v1288 < 0 )
                                            goto LABEL_1573;
                                          v1303 = RtlULongLongAdd(
                                                    (unsigned __int64)v1590,
                                                    v1650,
                                                    (unsigned __int64 *)&v1717);
                                          v1486 = v1305;
                                          v1288 = v1303;
                                          v1299 = (unsigned int *)v1582;
                                          Srco = (unsigned int *)v1582;
                                          v1398 = v1300;
                                          v1591 = v1102;
                                          lpModuleNamem = v1304;
                                          if ( v1303 < 0 )
                                            goto LABEL_1573;
                                          v1298 = v1717;
                                          v1590 = v1717;
                                          v1398 = v1300;
                                          v1591 = v1102;
                                          lpModuleNamem = v1304;
                                          if ( v1717 > v1715 )
                                          {
                                            v1288 = -1073741811;
                                            v1486 = v1596;
                                            Srco = (unsigned int *)v1582;
                                            goto LABEL_1573;
                                          }
                                          ++v1383;
                                          v1297 = v1596;
                                          v1486 = v1596;
                                          Srco = (unsigned int *)v1582;
                                          if ( v1717 >= v1715 )
                                          {
                                            v1398 = v1300;
                                            Srco = (unsigned int *)v1582;
                                            v1486 = v1596;
                                            v1591 = v1102;
                                            lpModuleNamem = v1304;
                                            break;
                                          }
                                        }
                                      }
                                      if ( v1298 != v1715 )
                                      {
LABEL_1564:
                                        v1288 = -1073741811;
                                        goto LABEL_1573;
                                      }
                                      goto LABEL_1559;
                                    }
LABEL_1573:
                                    v1034 = v1288 | 0x10000000;
                                    goto LABEL_1360;
                                  }
                                }
                              }
                              v1398 = v1225;
                              v1486 = v1287;
                              v1591 = v1102;
                              goto LABEL_1572;
                            }
LABEL_1360:
                            if ( !v994 )
                              goto LABEL_1362;
                            goto LABEL_1361;
                          }
                        }
LABEL_1470:
                        v1034 = -805306306;
                        goto LABEL_1360;
                      }
                    }
                  }
                  v1034 = -805306219;
                  goto LABEL_1449;
                }
LABEL_1428:
                v1034 = -805306345;
                goto LABEL_1360;
              }
            }
          }
        }
LABEL_1577:
        v1728 = 0LL;
        v1309 = v1729;
        if ( v1729 )
        {
          v1310 = GetProcessHeap();
          HeapFree(v1310, 0, v1309);
          v1729 = 0LL;
        }
        v1739[0] = 0LL;
        v1311 = v1739[1];
        if ( v1739[1] )
        {
          v1312 = GetProcessHeap();
          HeapFree(v1312, 0, v1311);
          v1739[1] = 0LL;
        }
        if ( v974 )
        {
          v1313 = GetProcessHeap();
          HeapFree(v1313, 0, v974);
        }
        if ( v106 )
        {
          v1314 = GetProcessHeap();
          HeapFree(v1314, 0, (LPVOID)v106);
        }
        goto LABEL_1585;
      }
      v489 = ((__int64 (*)(void))off_180985198)();
      v490 = g_WarbirdNotificationInformation;
      g_WarbirdPaintInitTime = v489;
      v1469 = g_WarbirdNotificationInformation;
      memset_0(&v1778, 0, 0x70uLL);
      v1531 = 0LL;
      v1798 = 0LL;
      v1815 = 0LL;
      v1816 = 0;
      v1813 = 0LL;
      v1591 = 0LL;
      v1814 = 0LL;
      while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
        ;
      v491 = g_WarbirdSecureFunctionsRefCount;
      if ( g_WarbirdSecureFunctionsRefCount )
      {
        v539 = 0;
        goto LABEL_668;
      }
      v1553 = 0;
      v1569 = 0;
      v492 = (char *)MemoryAlloc(0x338uLL);
      lpModuleNamea = (WCHAR *)v492;
      if ( !v492 )
      {
        v539 = 0;
        goto LABEL_662;
      }
      v493 = v492 + 7;
      v494 = -1;
      v495 = (unsigned __int8 *)&unk_180832662;
      v496 = 0;
      v497 = 0;
      v498 = 103LL;
      do
      {
        v499 = *(v495 - 1) | (*(v495 - 2) << 8);
        v500 = v495[2] << 8;
        v501 = *v495;
        v495 += 8;
        v502 = *(v495 - 7) | ((v501 | (v499 << 8)) << 8);
        v503 = v502 ^ v497;
        v504 = *(v495 - 3) | ((*(v495 - 4) | ((*(v495 - 5) | v500) << 8)) << 8);
        v505 = v504 ^ v106 ^ v503 ^ 0xAC987321;
        v506 = (__ROL4__(v505, 10) + 4991 * __ROL4__(v505 + 1419157410, 5)) ^ v503;
        v507 = (43881 * __ROR4__(v506 + 133239679, 9) - __ROL4__(v506, 2)) ^ v505;
        v508 = (24670 * v507 - (v507 >> 13) - 123127970) ^ v506;
        v509 = (2033 * __ROL4__(v508 ^ 0xAB69, 6) - __ROL4__(v508, 2)) ^ v507;
        v510 = (133239679 - (v509 ^ 0xAB69605E)) ^ v508;
        v511 = (43881 * (v510 ^ 0x137F)) ^ __ROR4__(v510, 6) ^ v509;
        v512 = (__ROL4__(v511, 2) + 24670 * __ROR4__(v511 + 133239679, 15)) ^ v510;
        v513 = (2033 * __ROR4__(v512 + 1419157410, 14) - __ROL4__(v512, 8)) ^ v511;
        v514 = __ROR4__(v513, 10) ^ (4991 * __ROR4__(v513 ^ 0xAB69605E, 12)) ^ v512;
        v515 = v513 ^ (v514 >> 10) ^ (43881 * (v514 ^ 0x7F1));
        v516 = (2033 * (__ROR4__(~v515, 5) + 24670)) ^ v514;
        v517 = v515 ^ (v516 - 2033) ^ 0xAB69605E;
        v518 = ((v517 >> 2) + 4991 * __ROL4__(v515 ^ (v516 - 2033) ^ 0xAB6967AF, 2)) ^ v516;
        v519 = (__ROL4__(v518, 7) + 43881 * __ROR4__(v518 - 133239679, 6)) ^ v517;
        v520 = (24670 * (v519 ^ 0x137F) + __ROR4__(v519, 9)) ^ v518;
        v521 = (__ROL4__(v520, 7) + 2033 * __ROL4__(v520 ^ 0xAB69, 5)) ^ v519;
        v522 = v521 ^ v520 ^ 0xAC987321;
        v523 = (4991 * __ROR4__(v522, 3) - 219010071) ^ v521;
        v524 = (24670 * __ROR4__(v523 - 133239679, 1) - __ROR4__(v523, 6)) ^ v522;
        v525 = (__ROL4__(v524, 14) + 2033 * __ROL4__(v524 - 1419157410, 3)) ^ v523;
        v526 = (4991 * __ROL4__(v525 - 1419157410, 15) - __ROR4__(v525, 14)) ^ v524;
        v527 = (v526 >> 3) ^ (43881 * (v526 ^ 0x605E)) ^ v525;
        v528 = 24670 * __ROL4__(v527 ^ 0x7F1137F, 4);
        v529 = v527;
        v530 = v494 ^ v527;
        v494 = v504;
        v531 = v496 ^ __ROL4__(v529, 2) ^ v528;
        v496 = v502;
        v532 = v531 ^ v526;
        *(v493 - 4) = v532;
        *v493 = v530;
        v493 += 8;
        v533 = __ROR4__(v532, 8);
        *(v493 - 13) = v533;
        v534 = __ROR4__(v530, 8);
        *(v493 - 9) = v534;
        v535 = __ROR4__(v533, 8);
        *(v493 - 14) = v535;
        v536 = __ROR4__(v534, 8);
        *(v493 - 10) = v536;
        v537 = __ROR4__(v535, 8);
        v538 = __ROR4__(v536, 8);
        *(v493 - 15) = v537;
        *(v493 - 11) = v538;
        LODWORD(v106) = __ROR4__(v538, 8);
        v497 = __ROR4__(v537, 8);
        --v498;
      }
      while ( v498 );
      v490 = v1469;
      v539 = 0;
      v92 = v1593;
      v540 = 0LL;
      v541 = lpModuleNamea;
      v542 = 0;
      do
        v542 ^= *((_BYTE *)lpModuleNamea + v540++);
      while ( v540 < 0x338 );
      if ( v542 != 64LL )
      {
        MemoryFree(lpModuleNamea);
        goto LABEL_662;
      }
      *((_BYTE *)lpModuleNamea + 823) = 0;
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      if ( *(_BYTE *)lpModuleNamea )
      {
        v1691 = lpModuleNamea;
        while ( 1 )
        {
          v543 = v541;
          v544 = -1LL;
          do
            ++v544;
          while ( v541[v544] );
          v545 = &v541[v544];
          v546 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1569;
          if ( !GetModuleHandleExW(0, v543, (HMODULE *)v546) )
            break;
          v547 = 0;
          if ( **(_WORD **)v546 == 23117
            && (v548 = *(int *)(*(_QWORD *)v546 + 60LL), (unsigned int)v548 < 0x10000000)
            && (v549 = *(_QWORD *)v546 + v548, v549 >= *(_QWORD *)v546)
            && *(_DWORD *)v549 == 17744 )
          {
            if ( ((*(_WORD *)(v549 + 24) - 267) & 0xFEFF) != 0 )
            {
              v547 = -1073741811;
            }
            else
            {
              *(_QWORD *)(v546 + 12) = *(_QWORD *)(v549 + 136);
              *((_DWORD *)v546 + 2) = *(_DWORD *)(v549 + 80);
            }
          }
          else
          {
            v547 = -1073741701;
          }
          v550 = *(_DWORD *)(v545 + 1);
          v551 = 0;
          v541 = v545 + 3;
          v1542 = v550;
          for ( n = 0; v551 < v1542; n = v551 )
          {
            v552 = (const CHAR *)v541;
            v553 = -1LL;
            do
              ++v553;
            while ( *((_BYTE *)v541 + v553) );
            v541 = (WCHAR *)((char *)v541 + v553 + 1);
            if ( v547 >= 0 )
            {
              v554 = (void **)GetProcAddress(*(HMODULE *)v546, v552);
              if ( !v554 )
                goto LABEL_654;
              (&WARBIRD::g_FuncAddress)[v1553] = v554;
              v551 = n;
            }
            ++v1553;
            ++v551;
          }
          ++v1569;
          v539 = 0;
          if ( !*(_BYTE *)v541 )
            goto LABEL_655;
        }
        v547 = -1073741702;
LABEL_654:
        v539 = 0;
LABEL_655:
        v541 = (WCHAR *)v1691;
        if ( !v1691 )
        {
LABEL_659:
          if ( v547 >= 0 )
          {
            v491 = g_WarbirdSecureFunctionsRefCount;
LABEL_668:
            g_WarbirdSecureFunctionsRefCount = v491 + 1;
            goto LABEL_669;
          }
LABEL_662:
          v556 = (HMODULE *)&WARBIRD::g_arModuleInfo;
          v557 = 4LL;
          do
          {
            if ( *v556 )
              FreeLibrary(*v556);
            v556 += 3;
            --v557;
          }
          while ( v557 );
          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
          memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_669:
          v1554 = 0;
          _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
          v1692 = 0LL;
          v1737 = 0LL;
          v1543 = 0;
          lpModuleNameb = 0LL;
          Srcf = 0LL;
          v1478 = 0LL;
          while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
            ;
          v558 = g_WarbirdSecureFunctionsRefCount;
          if ( g_WarbirdSecureFunctionsRefCount )
            goto LABEL_713;
          v1570 = 0;
          v1358 = 0;
          v559 = (char *)MemoryAlloc(0x338uLL);
          v1392 = (WCHAR *)v559;
          if ( !v559 )
            goto LABEL_679;
          v560 = v559 + 7;
          v561 = -1;
          v562 = (unsigned __int8 *)&unk_180832662;
          v563 = 103LL;
          v564 = 0;
          v565 = 0;
          do
          {
            v566 = *(v562 - 1) | (*(v562 - 2) << 8);
            v567 = v562[2] << 8;
            v568 = *v562;
            v562 += 8;
            v569 = *(v562 - 7) | ((v568 | (v566 << 8)) << 8);
            v570 = v569 ^ v539;
            v571 = *(v562 - 3) | ((*(v562 - 4) | ((*(v562 - 5) | v567) << 8)) << 8);
            v572 = v570 ^ v571 ^ v565 ^ 0xAC987321;
            v573 = (__ROL4__(v572, 10) + 4991 * __ROL4__(v572 + 1419157410, 5)) ^ v570;
            v574 = (43881 * __ROR4__(v573 + 133239679, 9) - __ROL4__(v573, 2)) ^ v572;
            v575 = (24670 * v574 - (v574 >> 13) - 123127970) ^ v573;
            v576 = (2033 * __ROL4__(v575 ^ 0xAB69, 6) - __ROL4__(v575, 2)) ^ v574;
            v577 = (133239679 - (v576 ^ 0xAB69605E)) ^ v575;
            v578 = (43881 * (v577 ^ 0x137F)) ^ __ROR4__(v577, 6) ^ v576;
            v579 = (__ROL4__(v578, 2) + 24670 * __ROR4__(v578 + 133239679, 15)) ^ v577;
            v580 = (2033 * __ROR4__(v579 + 1419157410, 14) - __ROL4__(v579, 8)) ^ v578;
            v581 = __ROR4__(v580, 10) ^ (4991 * __ROR4__(v580 ^ 0xAB69605E, 12)) ^ v579;
            v582 = (v581 >> 10) ^ (43881 * (v581 ^ 0x7F1)) ^ v580;
            v583 = (2033 * (__ROR4__(~v582, 5) + 24670)) ^ v581;
            v584 = v582 ^ (v583 - 2033) ^ 0xAB69605E;
            v585 = ((v584 >> 2) + 4991 * __ROL4__(v582 ^ (v583 - 2033) ^ 0xAB6967AF, 2)) ^ v583;
            v586 = (__ROL4__(v585, 7) + 43881 * __ROR4__(v585 - 133239679, 6)) ^ v584;
            v587 = (24670 * (v586 ^ 0x137F) + __ROR4__(v586, 9)) ^ v585;
            v588 = (__ROL4__(v587, 7) + 2033 * __ROL4__(v587 ^ 0xAB69, 5)) ^ v586;
            v589 = v588 ^ v587 ^ 0xAC987321;
            v590 = (4991 * __ROR4__(v589, 3) - 219010071) ^ v588;
            v591 = (24670 * __ROR4__(v590 - 133239679, 1) - __ROR4__(v590, 6)) ^ v589;
            v592 = (__ROL4__(v591, 14) + 2033 * __ROL4__(v591 - 1419157410, 3)) ^ v590;
            v593 = (4991 * __ROL4__(v592 - 1419157410, 15) - __ROR4__(v592, 14)) ^ v591;
            v594 = (v593 >> 3) ^ (43881 * (v593 ^ 0x605E)) ^ v592;
            v595 = 24670 * __ROL4__(v594 ^ 0x7F1137F, 4);
            v596 = v594;
            v597 = v561 ^ v594;
            v561 = v571;
            v598 = v564 ^ __ROL4__(v596, 2) ^ v595;
            v564 = v569;
            v599 = v598 ^ v593;
            *(v560 - 4) = v599;
            *v560 = v597;
            v560 += 8;
            v600 = __ROR4__(v599, 8);
            *(v560 - 13) = v600;
            v601 = __ROR4__(v597, 8);
            *(v560 - 9) = v601;
            v602 = __ROR4__(v600, 8);
            *(v560 - 14) = v602;
            v603 = __ROR4__(v601, 8);
            *(v560 - 10) = v603;
            v604 = __ROR4__(v602, 8);
            v605 = __ROR4__(v603, 8);
            *(v560 - 15) = v604;
            *(v560 - 11) = v605;
            v565 = __ROR4__(v605, 8);
            v539 = __ROR4__(v604, 8);
            --v563;
          }
          while ( v563 );
          v606 = 0;
          v490 = v1469;
          v607 = 0LL;
          v92 = v1593;
          v608 = v1392;
          do
            v606 ^= *((_BYTE *)v1392 + v607++);
          while ( v607 < 0x338 );
          if ( v606 != 64LL )
          {
            MemoryFree(v1392);
            goto LABEL_679;
          }
          *((_BYTE *)v1392 + 823) = 0;
          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
          if ( *(_BYTE *)v1392 )
          {
            v1693 = v1392;
            while ( 1 )
            {
              v611 = v608;
              v612 = -1LL;
              do
                ++v612;
              while ( v608[v612] );
              v613 = &v608[v612];
              v614 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1358;
              if ( !GetModuleHandleExW(0, v611, (HMODULE *)v614) )
                break;
              v615 = 0;
              if ( **(_WORD **)v614 == 23117
                && (v616 = *(int *)(*(_QWORD *)v614 + 60LL), (unsigned int)v616 < 0x10000000)
                && (v617 = *(_QWORD *)v614 + v616, v617 >= *(_QWORD *)v614)
                && *(_DWORD *)v617 == 17744 )
              {
                if ( ((*(_WORD *)(v617 + 24) - 267) & 0xFEFF) != 0 )
                {
                  v615 = -1073741811;
                }
                else
                {
                  *(_QWORD *)(v614 + 12) = *(_QWORD *)(v617 + 136);
                  *((_DWORD *)v614 + 2) = *(_DWORD *)(v617 + 80);
                }
              }
              else
              {
                v615 = -1073741701;
              }
              v618 = *(_DWORD *)(v613 + 1);
              v619 = 0;
              v608 = v613 + 3;
              v1470 = v618;
              for ( ii = 0; v619 < v1470; ii = v619 )
              {
                v620 = (const CHAR *)v608;
                v621 = -1LL;
                do
                  ++v621;
                while ( *((_BYTE *)v608 + v621) );
                v608 = (WCHAR *)((char *)v608 + v621 + 1);
                if ( v615 >= 0 )
                {
                  v622 = (void **)GetProcAddress(*(HMODULE *)v614, v620);
                  if ( !v622 )
                    goto LABEL_707;
                  (&WARBIRD::g_FuncAddress)[v1570] = v622;
                  v619 = ii;
                }
                ++v1570;
                ++v619;
              }
              ++v1358;
              if ( !*(_BYTE *)v608 )
                goto LABEL_707;
            }
            v615 = -1073741702;
LABEL_707:
            v608 = (WCHAR *)v1693;
            if ( !v1693 )
              goto LABEL_711;
          }
          else
          {
            v615 = 0;
          }
          v623 = GetProcessHeap();
          HeapFree(v623, 0, v608);
LABEL_711:
          if ( v615 < 0 )
          {
LABEL_679:
            v609 = (HMODULE *)&WARBIRD::g_arModuleInfo;
            v610 = 4LL;
            do
            {
              if ( *v609 )
                FreeLibrary(*v609);
              v609 += 3;
              --v610;
            }
            while ( v610 );
            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
            memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_714:
            v106 = 0LL;
            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
            memset_0(&v1778, 0, 0x70uLL);
            v1853[0] = (v490 >> 4) & 0xF;
            v624 = v490 & 0xF;
            v1471 = v624;
            v1853[1] = (v490 >> 8) & 0xF;
            v1798 = 0LL;
            v1853[2] = (v490 >> 12) & 0xF;
            v1393 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
            v1571 = -1;
            if ( !v1393 )
            {
              v625 = GetLastError();
              v626 = v625;
              if ( v625 > 0 )
                v626 = (unsigned __int16)v625 | 0x80070000;
              if ( v626 >= 0 )
                v626 = -2147467259;
LABEL_935:
              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                ;
              v759 = g_WarbirdSecureFunctionsRefCount;
              if ( g_WarbirdSecureFunctionsRefCount > 0 )
              {
                --g_WarbirdSecureFunctionsRefCount;
                if ( v759 == 1 )
                {
                  v760 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                  v106 = 4LL;
                  do
                  {
                    if ( *v760 )
                      FreeLibrary(*v760);
                    v760 += 3;
                    --v106;
                  }
                  while ( v106 );
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                }
              }
              _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1692);
              if ( v626 < 0 )
              {
LABEL_1078:
                if ( v1780 )
                {
                  v843 = -1LL;
                  do
                    ++v843;
                  while ( *((_WORD *)v1780 + v843) );
                  memset(v1780, 0, 2 * v843 + 2);
                  MemoryFree(v1780);
                  v1780 = 0LL;
                }
                if ( v1781 )
                {
                  v844 = -1LL;
                  do
                    ++v844;
                  while ( *((_WORD *)v1781 + v844) );
                  memset(v1781, 0, 2 * v844 + 2);
                  MemoryFree(v1781);
                  v1781 = 0LL;
                }
                if ( v1782 )
                {
                  v845 = -1LL;
                  do
                    ++v845;
                  while ( *((_WORD *)v1782 + v845) );
                  memset(v1782, 0, 2 * v845 + 2);
                  MemoryFree(v1782);
                  v1782 = 0LL;
                }
                if ( v1783 )
                {
                  ((void (*)(void))off_180985138)();
                  v1783 = 0LL;
                }
                if ( v1784 )
                {
                  ((void (*)(void))off_180985138)();
                  v1784 = 0LL;
                }
                if ( v1785 )
                {
                  ((void (*)(void))off_180985138)();
                  v1785 = 0LL;
                }
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v846 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount > 0 )
                {
                  --g_WarbirdSecureFunctionsRefCount;
                  if ( v846 == 1 )
                  {
                    v847 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    v848 = 4LL;
                    do
                    {
                      if ( *v847 )
                        FreeLibrary(*v847);
                      v847 += 3;
                      --v848;
                    }
                    while ( v848 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                  }
                }
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                v1436 = g_WarbirdNotificationInformation;
                v849 = ((__int64 (*)(void))off_180985198)() - g_WarbirdPaintInitTime;
                v1493 = v849;
                v1851 = 0LL;
                v1848 = 0LL;
                v1849 = 0LL;
                v1850 = 0LL;
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v850 = g_WarbirdSecureFunctionsRefCount;
                if ( !g_WarbirdSecureFunctionsRefCount )
                {
                  v1327 = 0;
                  v1559 = 0;
                  v851 = (char *)MemoryAlloc(0x338uLL);
                  v1532 = (WCHAR *)v851;
                  if ( !v851 )
                    goto LABEL_1115;
                  v852 = 0;
                  v853 = v851 + 7;
                  v854 = -1;
                  v855 = (unsigned __int8 *)&unk_180832662;
                  v856 = 0;
                  v857 = 103LL;
                  v858 = 0;
                  do
                  {
                    v859 = *(v855 - 1) | (*(v855 - 2) << 8);
                    v860 = v855[2] << 8;
                    v861 = *v855;
                    v855 += 8;
                    v862 = *(v855 - 7) | ((v861 | (v859 << 8)) << 8);
                    v863 = v862 ^ v858;
                    v864 = *(v855 - 3) | ((*(v855 - 4) | ((*(v855 - 5) | v860) << 8)) << 8);
                    v865 = v863 ^ v864 ^ v856 ^ 0xAC987321;
                    v866 = (__ROL4__(v865, 10) + 4991 * __ROL4__(v865 + 1419157410, 5)) ^ v863;
                    v867 = (43881 * __ROR4__(v866 + 133239679, 9) - __ROL4__(v866, 2)) ^ v865;
                    v868 = (24670 * v867 - (v867 >> 13) - 123127970) ^ v866;
                    v869 = (2033 * __ROL4__(v868 ^ 0xAB69, 6) - __ROL4__(v868, 2)) ^ v867;
                    v870 = (133239679 - (v869 ^ 0xAB69605E)) ^ v868;
                    v871 = (43881 * (v870 ^ 0x137F)) ^ __ROR4__(v870, 6) ^ v869;
                    v872 = (__ROL4__(v871, 2) + 24670 * __ROR4__(v871 + 133239679, 15)) ^ v870;
                    v873 = (2033 * __ROR4__(v872 + 1419157410, 14) - __ROL4__(v872, 8)) ^ v871;
                    v874 = __ROR4__(v873, 10) ^ (4991 * __ROR4__(v873 ^ 0xAB69605E, 12)) ^ v872;
                    v875 = (v874 >> 10) ^ (43881 * (v874 ^ 0x7F1)) ^ v873;
                    v876 = (2033 * (__ROR4__(~v875, 5) + 24670)) ^ v874;
                    v877 = v875 ^ (v876 - 2033) ^ 0xAB69605E;
                    v878 = ((v877 >> 2) + 4991 * __ROL4__(v875 ^ (v876 - 2033) ^ 0xAB6967AF, 2)) ^ v876;
                    v879 = (__ROL4__(v878, 7) + 43881 * __ROR4__(v878 - 133239679, 6)) ^ v877;
                    v880 = (24670 * (v879 ^ 0x137F) + __ROR4__(v879, 9)) ^ v878;
                    v881 = (__ROL4__(v880, 7) + 2033 * __ROL4__(v880 ^ 0xAB69, 5)) ^ v879;
                    v882 = v880 ^ v881 ^ 0xAC987321;
                    v883 = (4991 * __ROR4__(v882, 3) - 219010071) ^ v881;
                    v884 = (24670 * __ROR4__(v883 - 133239679, 1) - __ROR4__(v883, 6)) ^ v882;
                    v885 = (__ROL4__(v884, 14) + 2033 * __ROL4__(v884 - 1419157410, 3)) ^ v883;
                    v886 = (4991 * __ROL4__(v885 - 1419157410, 15) - __ROR4__(v885, 14)) ^ v884;
                    v887 = (v886 >> 3) ^ (43881 * (v886 ^ 0x605E)) ^ v885;
                    v888 = 24670 * __ROL4__(v887 ^ 0x7F1137F, 4);
                    v889 = v887;
                    v890 = v854 ^ v887;
                    v854 = v864;
                    v891 = v852 ^ __ROL4__(v889, 2) ^ v888;
                    v852 = v862;
                    v892 = v891 ^ v886;
                    *(v853 - 4) = v892;
                    *v853 = v890;
                    v853 += 8;
                    v893 = __ROR4__(v892, 8);
                    *(v853 - 13) = v893;
                    v894 = __ROR4__(v890, 8);
                    *(v853 - 9) = v894;
                    v895 = __ROR4__(v893, 8);
                    *(v853 - 14) = v895;
                    v896 = __ROR4__(v894, 8);
                    *(v853 - 10) = v896;
                    v897 = __ROR4__(v895, 8);
                    v898 = __ROR4__(v896, 8);
                    *(v853 - 15) = v897;
                    *(v853 - 11) = v898;
                    v856 = __ROR4__(v898, 8);
                    v858 = __ROR4__(v897, 8);
                    --v857;
                  }
                  while ( v857 );
                  v899 = v1532;
                  v900 = 0;
                  v901 = 0LL;
                  v902 = 0;
                  do
                    v902 ^= *((_BYTE *)v1532 + v901++);
                  while ( v901 < 0x338 );
                  if ( v902 != 64LL )
                  {
                    MemoryFree(v1532);
LABEL_1114:
                    v849 = v1493;
LABEL_1115:
                    v903 = 4LL;
                    v904 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    v106 = 0LL;
                    do
                    {
                      if ( *v904 )
                        FreeLibrary(*v904);
                      v904 += 3;
                      --v903;
                    }
                    while ( v903 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                    goto LABEL_1220;
                  }
                  *((_BYTE *)v1532 + 823) = 0;
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  if ( !*(_BYTE *)v1532 )
                    goto LABEL_1216;
                  while ( 1 )
                  {
                    v959 = v899;
                    v960 = -1LL;
                    do
                      ++v960;
                    while ( v899[v960] );
                    v961 = &v899[v960];
                    v962 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1559;
                    if ( !GetModuleHandleExW(0, v959, (HMODULE *)v962) )
                      break;
                    v900 = 0;
                    if ( **(_WORD **)v962 == 23117
                      && (v963 = *(int *)(*(_QWORD *)v962 + 60LL), (unsigned int)v963 < 0x10000000)
                      && (v964 = *(_QWORD *)v962 + v963, v964 >= *(_QWORD *)v962)
                      && *(_DWORD *)v964 == 17744 )
                    {
                      if ( ((*(_WORD *)(v964 + 24) - 267) & 0xFEFF) != 0 )
                      {
                        v900 = -1073741811;
                      }
                      else
                      {
                        *(_QWORD *)(v962 + 12) = *(_QWORD *)(v964 + 136);
                        *((_DWORD *)v962 + 2) = *(_DWORD *)(v964 + 80);
                      }
                    }
                    else
                    {
                      v900 = -1073741701;
                    }
                    v965 = *(_DWORD *)(v961 + 1);
                    v966 = 0;
                    v899 = v961 + 3;
                    v1375 = v965;
                    for ( jj = 0; v966 < v1375; jj = v966 )
                    {
                      v967 = (const CHAR *)v899;
                      v968 = -1LL;
                      do
                        ++v968;
                      while ( *((_BYTE *)v899 + v968) );
                      v899 = (WCHAR *)((char *)v899 + v968 + 1);
                      if ( v900 >= 0 )
                      {
                        v969 = (void **)GetProcAddress(*(HMODULE *)v962, v967);
                        if ( !v969 )
                          goto LABEL_1215;
                        (&WARBIRD::g_FuncAddress)[v1327] = v969;
                        v966 = jj;
                      }
                      ++v1327;
                      ++v966;
                    }
                    ++v1559;
                    if ( !*(_BYTE *)v899 )
                      goto LABEL_1215;
                  }
                  v900 = -1073741702;
LABEL_1215:
                  if ( v1532 )
                  {
LABEL_1216:
                    v970 = GetProcessHeap();
                    HeapFree(v970, 0, v1532);
                  }
                  if ( v900 < 0 )
                    goto LABEL_1114;
                  v850 = g_WarbirdSecureFunctionsRefCount;
                  v106 = 0LL;
                  v849 = v1493;
                }
                g_WarbirdSecureFunctionsRefCount = v850 + 1;
LABEL_1220:
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                LODWORD(v1851) = v1436;
                LODWORD(v1848) = v849;
                v1847 = 1;
                LODWORD(v1849) = -1721306479;
                DWORD2(v1848) = 1;
                LODWORD(v1850) = 1;
                DWORD2(v1849) = 1;
                DWORD2(v1850) = 1;
                v971 = 4LL;
                ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1809851D0)(0LL, 8225LL, 4LL, &v1847);
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v972 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount > 0 )
                {
                  --g_WarbirdSecureFunctionsRefCount;
                  if ( v972 == 1 )
                  {
                    v973 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    do
                    {
                      if ( *v973 )
                        FreeLibrary(*v973);
                      v973 += 3;
                      --v971;
                    }
                    while ( v971 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                  }
                }
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                ((void (__fastcall *)(_QWORD, size_t))off_180985260)(0LL, v1339);
                v1623 = v1590;
                goto LABEL_1230;
              }
              v761 = v1798;
              v1700 = v1798;
              memset_0(v1751, 0, 0x68uLL);
              v762 = 1;
              v763 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1339, 7LL);
              v106 = 0LL;
              if ( v763
                && (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(v763, 104LL, v1751) )
              {
                if ( v1754 != 32 || !v1755 || v1752 <= 0 || v1753 <= 0 )
                  v762 = 0;
                if ( v762 )
                {
LABEL_952:
                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1787, v761, HIDWORD(v1700));
                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1788, v761, HIDWORD(v1700));
                  if ( v624 == 1 )
                    v1591 = (void *)((__int64 (__fastcall *)(_QWORD))off_180985128)(v1779 == 0 ? 0xB26720 : 0);
LABEL_954:
                  v1555 = ((__int64 (__fastcall *)(size_t, __int64))off_180985180)(v1339, 1LL);
                  v764 = 2064;
                  if ( v1778 )
                    v764 = 133138;
                  v1544 = v764;
                  if ( v762 )
                  {
                    v765 = v1779;
                    v766 = v1780;
                    lpModuleNamee = v1783;
                    memset_0(v1756, 0, 0x68uLL);
                    memset_0(v1760, 0, 0x68uLL);
                    Srcg = 0LL;
                    v1429 = 0;
                    v1362 = 0;
                    v1819 = 0LL;
                    v1820 = 0;
                    v1817 = 0LL;
                    v1818 = 0LL;
                    v1799 = 0LL;
                    if ( !v766 )
                      goto LABEL_972;
                    v767 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1339, 7LL);
                    if ( !v767 )
                      goto LABEL_971;
                    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                         v767,
                                         104LL,
                                         v1756) )
                    {
                      Srcg = v1759;
                      v1429 = v1757;
                      v1362 = v1758;
                    }
                    v1480 = ((__int64 (__fastcall *)(size_t))off_180985110)(v1339);
                    v768 = v1480;
                    if ( !v1480 )
                    {
LABEL_971:
                      GetLastError();
                      goto LABEL_972;
                    }
                    DWORD1(v1817) = DWORD2(v1787) - v1787;
                    DWORD2(v1817) = DWORD1(v1787) - HIDWORD(v1787);
                    v1701 = 0LL;
                    v1818 = 0LL;
                    v1819 = 0LL;
                    v1820 = 0;
                    LODWORD(v1817) = 40;
                    HIDWORD(v1817) = 2097153;
                    v1394 = (LPCWSTR)((__int64 (__fastcall *)(size_t, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                                       v1480,
                                       &v1817,
                                       0LL,
                                       &v1701,
                                       0LL,
                                       0);
                    if ( !v1394 )
                    {
                      v769 = GetLastError();
                      v106 = 0LL;
                      v770 = v769;
                      if ( v769 > 0 )
                        v770 = (unsigned __int16)v769 | 0x80070000;
                      if ( v770 >= 0 )
                        v770 = -2147467259;
                      goto LABEL_1000;
                    }
                    v771 = (unsigned int)((__int64 (__fastcall *)(LPCWSTR, __int64, _BYTE *))off_180985168)(
                                           v1394,
                                           104LL,
                                           v1760) == 0;
                    v772 = 0LL;
                    if ( !v771 )
                      v772 = v1761;
                    DWORD2(v1799) = DWORD2(v1787) - v1787;
                    HIDWORD(v1799) = HIDWORD(v1787) - DWORD1(v1787);
                    v1449 = v772;
                    ((void (__fastcall *)(size_t, LPCWSTR))off_180985178)(v1480, v1394);
                    ((void (__fastcall *)(size_t, __int64))off_180985180)(v1480, 1LL);
                    v773 = ((__int64 (__fastcall *)(size_t, LPCWSTR))off_180985178)(v1480, lpModuleNamee);
                    v774 = off_1809851E8;
                    lpModuleNamef = (LPCWSTR)v773;
                    v775 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                    ((void (__fastcall *)(size_t, __int128 *, __int64))v774)(v1480, &v1799, v775);
                    v770 = 0;
                    ((void (__fastcall *)(size_t, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                      v1480,
                      v766,
                      0xFFFFFFFFLL,
                      &v1799,
                      v1544,
                      0LL);
                    if ( v1471 == 1 )
                    {
                      if ( v765 )
                      {
                        v776 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                        LOBYTE(v777) = v776;
                        Sized = v776;
LABEL_981:
                        v778 = 0;
                        v779 = -(int)v1787;
                        v780 = 0;
                        if ( (int)v1787 >= 0 )
                        {
                          v778 = v1787;
                          v779 = 0;
                        }
                        v781 = -DWORD1(v1787);
                        if ( (SDWORD1(v1787) & 0x80000000) == 0 )
                        {
                          v781 = 0;
                          v780 = DWORD1(v1787);
                        }
                        v782 = DWORD2(v1799) - v779;
                        if ( DWORD2(v1799) - v779 >= v1429 - v778 )
                          v782 = v1429 - v778;
                        v783 = HIDWORD(v1799) - v781;
                        if ( HIDWORD(v1799) - v781 >= v1362 - v780 )
                          v783 = v1362 - v780;
                        if ( v782 > 0 && v783 > 0 )
                        {
                          v784 = v1429;
                          v1430 = 0;
                          v785 = v1449 + 4 * (v779 + (__int64)(v781 * DWORD2(v1799)));
                          v1450 = v785;
                          v786 = &Srcg[4 * v778 + 4 * (__int64)(v780 * (int)v784)];
                          v1519 = 4LL * SDWORD2(v1799);
                          v1512 = 4 * v784;
                          Srch = v786;
                          do
                          {
                            v1363 = 0;
                            v787 = (unsigned __int8 *)(v785 + 2);
                            v788 = 0;
                            v789 = &v786[-v785];
                            do
                            {
                              if ( (unsigned __int8)((*v787 + *(v787 - 2) + 2 * (unsigned int)*(v787 - 1)) >> 2) != 0xFF )
                              {
                                v790 = (unsigned __int8)~((*v787 + *(v787 - 2) + 2 * (unsigned int)*(v787 - 1)) >> 2);
                                v787[(_QWORD)v789] -= ~((*v787 + *(v787 - 2) + 2 * (unsigned int)*(v787 - 1)) >> 2)
                                                    * (v777 - v787[(_QWORD)v789]);
                                v791 = v787[(_QWORD)v789 - 1];
                                v792 = (unsigned __int64)(2155905153LL * v790 * (BYTE1(Sized) - v791)) >> 32;
                                v787[(_QWORD)v789 - 1] = v791 + (v792 >> 7 < 0) + (v792 >> 7);
                                v793 = v787[(_QWORD)v789 - 2];
                                v794 = (unsigned __int64)(2155905153LL * v790 * (BYTE2(Sized) - v793)) >> 32;
                                v787[(_QWORD)v789 - 2] = v793 + (v794 >> 7 < 0) + (v794 >> 7);
                                v795 = v787[(_QWORD)v789 + 1];
                                v796 = v790 * (255 - v795);
                                v788 = v1363;
                                v787[(_QWORD)v789 + 1] = v795 + v796 / 255;
                              }
                              ++v788;
                              v787 += 4;
                              v1363 = v788;
                              v770 = 0;
                            }
                            while ( v788 < v782 );
                            v785 = v1519 + v1450;
                            v786 = &Srch[v1512];
                            v1450 += v1519;
                            Srch += v1512;
                            ++v1430;
                          }
                          while ( v1430 < v783 );
                          v92 = v1593;
                          v768 = v1480;
                        }
                        ((void (__fastcall *)(LPCWSTR))off_180985138)(v1394);
                        v106 = 0LL;
                        if ( lpModuleNamef )
                          ((void (__fastcall *)(size_t, LPCWSTR))off_180985178)(v768, lpModuleNamef);
LABEL_1000:
                        ((void (__fastcall *)(size_t))off_180985130)(v768);
                        if ( v770 < 0 )
                          goto LABEL_1076;
                        v797 = v1781;
                        v1431 = v1779;
                        lpModuleNameg = v1784;
                        memset_0(v1762, 0, 0x68uLL);
                        memset_0(v1766, 0, 0x68uLL);
                        Srci = 0LL;
                        v1364 = 0;
                        v798 = 0;
                        v1823 = 0LL;
                        v1824 = 0;
                        v1821 = 0LL;
                        v1822 = 0LL;
                        v1800 = 0LL;
                        if ( v797 )
                        {
                          v799 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1339, 7LL);
                          if ( v799 )
                          {
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                 v799,
                                                 104LL,
                                                 v1762) )
                            {
                              v798 = v1764;
                              Srci = v1765;
                              v1364 = v1763;
                            }
                            v1481 = ((__int64 (__fastcall *)(size_t))off_180985110)(v1339);
                            v800 = v1481;
                            if ( v1481 )
                            {
                              DWORD1(v1821) = DWORD2(v1788) - v1788;
                              DWORD2(v1821) = DWORD1(v1788) - HIDWORD(v1788);
                              v1702 = 0LL;
                              v1822 = 0LL;
                              v1823 = 0LL;
                              v1824 = 0;
                              LODWORD(v1821) = 40;
                              HIDWORD(v1821) = 2097153;
                              v1395 = (LPCWSTR)((__int64 (__fastcall *)(size_t, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                                                 v1481,
                                                 &v1821,
                                                 0LL,
                                                 &v1702,
                                                 0LL,
                                                 0);
                              if ( !v1395 )
                              {
                                v801 = GetLastError();
                                v106 = 0LL;
                                v802 = v801;
                                if ( v801 > 0 )
                                  v802 = (unsigned __int16)v801 | 0x80070000;
                                if ( v802 >= 0 )
                                  v802 = -2147467259;
LABEL_1039:
                                ((void (__fastcall *)(size_t))off_180985130)(v800);
                                if ( v802 < 0 )
                                  goto LABEL_1076;
                                v827 = 0LL;
                                v828 = v1339;
LABEL_1190:
                                ((void (__fastcall *)(size_t, _QWORD))off_180985180)(v828, v1555);
                                v842 = v1531;
                                v106 = 0LL;
                                if ( !v1531 )
                                {
LABEL_1074:
                                  if ( !v827 )
                                    goto LABEL_1076;
                                  goto LABEL_1075;
                                }
LABEL_1073:
                                ((void (__fastcall *)(LPCWSTR))off_180985138)(v842);
                                goto LABEL_1074;
                              }
                              v771 = (unsigned int)((__int64 (__fastcall *)(LPCWSTR, __int64, _BYTE *))off_180985168)(
                                                     v1395,
                                                     104LL,
                                                     v1766) == 0;
                              v803 = 0LL;
                              if ( !v771 )
                                v803 = v1767;
                              DWORD2(v1800) = DWORD2(v1788) - v1788;
                              HIDWORD(v1800) = HIDWORD(v1788) - DWORD1(v1788);
                              v1451 = v803;
                              ((void (__fastcall *)(size_t, LPCWSTR))off_180985178)(v1481, v1395);
                              ((void (__fastcall *)(size_t, __int64))off_180985180)(v1481, 1LL);
                              v804 = ((__int64 (__fastcall *)(size_t, LPCWSTR))off_180985178)(v1481, lpModuleNameg);
                              v805 = off_1809851E8;
                              lpModuleNameh = (LPCWSTR)v804;
                              v806 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                              ((void (__fastcall *)(size_t, __int128 *, __int64))v805)(v1481, &v1800, v806);
                              v802 = 0;
                              ((void (__fastcall *)(size_t, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                v1481,
                                v797,
                                0xFFFFFFFFLL,
                                &v1800,
                                v1544,
                                0LL);
                              if ( v1471 == 1 )
                              {
                                if ( !v1431 )
                                {
                                  v1472 = 0xFFFFFF;
LABEL_1020:
                                  v808 = 0;
                                  v809 = -(int)v1788;
                                  v810 = 0;
                                  if ( (int)v1788 >= 0 )
                                  {
                                    v808 = v1788;
                                    v809 = 0;
                                  }
                                  v811 = -DWORD1(v1788);
                                  if ( (SDWORD1(v1788) & 0x80000000) == 0 )
                                  {
                                    v811 = 0;
                                    v810 = DWORD1(v1788);
                                  }
                                  v812 = DWORD2(v1800) - v809;
                                  if ( DWORD2(v1800) - v809 >= v1364 - v808 )
                                    v812 = v1364 - v808;
                                  v813 = HIDWORD(v1800) - v811;
                                  v814 = v798 - v810;
                                  if ( HIDWORD(v1800) - v811 >= v814 )
                                    v813 = v814;
                                  if ( v812 > 0 && v813 > 0 )
                                  {
                                    v1432 = 0;
                                    v815 = v1451 + 4 * (v809 + (__int64)(DWORD2(v1800) * v811));
                                    v1452 = v815;
                                    v816 = &Srci[4 * v808 + 4 * (__int64)(v1364 * v810)];
                                    v1520 = 4LL * SDWORD2(v1800);
                                    v1513 = 4LL * v1364;
                                    Srcj = v816;
                                    do
                                    {
                                      v817 = (unsigned __int8 *)(v815 + 2);
                                      Sizee = 0;
                                      v818 = &v816[-v815];
                                      v819 = 0;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v817 + *(v817 - 2) + 2 * (unsigned int)*(v817 - 1)) >> 2) != 0xFF )
                                        {
                                          v820 = (unsigned __int8)~((*v817 + *(v817 - 2) + 2 * (unsigned int)*(v817 - 1)) >> 2);
                                          v818[(_QWORD)v817] -= ~((*v817 + *(v817 - 2) + 2 * (unsigned int)*(v817 - 1)) >> 2)
                                                              * (v1571 - v818[(_QWORD)v817]);
                                          v821 = v817[(_QWORD)v818 - 1];
                                          v822 = (unsigned __int64)(2155905153LL * v820 * (BYTE1(v1472) - v821)) >> 32;
                                          v817[(_QWORD)v818 - 1] = v821 + (v822 >> 7 < 0) + (v822 >> 7);
                                          v823 = v817[(_QWORD)v818 - 2];
                                          v824 = (unsigned __int64)(2155905153LL * v820 * (BYTE2(v1472) - v823)) >> 32;
                                          v817[(_QWORD)v818 - 2] = v823 + (v824 >> 7 < 0) + (v824 >> 7);
                                          v825 = v817[(_QWORD)v818 + 1];
                                          v826 = v820 * (255 - v825);
                                          v819 = Sizee;
                                          v817[(_QWORD)v818 + 1] = v825 + v826 / 255;
                                        }
                                        ++v819;
                                        v817 += 4;
                                        Sizee = v819;
                                        v802 = 0;
                                      }
                                      while ( v819 < v812 );
                                      v815 = v1520 + v1452;
                                      v816 = &Srcj[v1513];
                                      v1452 += v1520;
                                      Srcj += v1513;
                                      ++v1432;
                                    }
                                    while ( v1432 < v813 );
                                    v92 = v1593;
                                    v800 = v1481;
                                  }
                                  ((void (__fastcall *)(LPCWSTR))off_180985138)(v1395);
                                  v106 = 0LL;
                                  if ( lpModuleNameh )
                                    ((void (__fastcall *)(size_t, LPCWSTR))off_180985178)(v800, lpModuleNameh);
                                  goto LABEL_1039;
                                }
                                v807 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                              }
                              else
                              {
                                v807 = -5723992;
                              }
                              v1472 = v807;
                              v1571 = v807;
                              goto LABEL_1020;
                            }
                          }
                          goto LABEL_971;
                        }
LABEL_972:
                        v106 = 0LL;
                        goto LABEL_1076;
                      }
                      v777 = 0xFFFFFF;
                    }
                    else
                    {
                      v777 = -5723992;
                    }
                    Sized = v777;
                    goto LABEL_981;
                  }
                  if ( v1779 || (v829 = -64, v624 == 1) )
                    v829 = -1;
                  LOWORD(v1433) = 0;
                  v830 = 0;
                  BYTE2(v1433) = v829;
                  HIBYTE(v1433) = 1;
                  v1365 = 0;
                  Sizef = 0;
                  v1492 = (void *)((__int64 (__fastcall *)(size_t))off_180985110)(v1339);
                  if ( !v1492 )
                  {
                    GetLastError();
                    goto LABEL_1076;
                  }
                  if ( v1471 == 1 )
                  {
                    v831 = DWORD2(v1788) - v1788;
                    if ( DWORD2(v1788) - (int)v1788 <= DWORD2(v1787) - (int)v1787 )
                      v831 = DWORD2(v1787) - v1787;
                    v832 = HIDWORD(v1788) - DWORD1(v1787);
                    LODWORD(v1594) = v831;
                    v833 = 0;
                    LODWORD(v1623) = HIDWORD(v1788) - DWORD1(v1787);
                    LODWORD(v1592) = 0;
                    if ( v1778 )
                    {
                      v830 = v831 + v1787 - DWORD2(v1787);
                      v833 = v830;
                      Sizef = v831 + v1788 - DWORD2(v1788);
                      LODWORD(v1592) = Sizef;
                    }
                    LODWORD(v1596) = HIDWORD(v1787) - DWORD1(v1787);
                    v834 = v833 + DWORD2(v1787) - v1787;
                    v835 = v1592 + DWORD2(v1788) - v1788;
                    v1576 = DWORD1(v1788) - DWORD1(v1787);
                    v1558 = HIDWORD(v1788) - DWORD1(v1787);
                  }
                  else
                  {
                    v831 = DWORD2(v1798);
                    v832 = HIDWORD(v1798);
                    v1721 = v1787;
                    v834 = DWORD2(v1787);
                    v830 = v1787;
                    LODWORD(v1596) = HIDWORD(v1787);
                    v1722 = v1788;
                    v835 = DWORD2(v1788);
                    v1365 = DWORD1(v1787);
                    v1558 = HIDWORD(v1788);
                    v1576 = DWORD1(v1788);
                    Sizef = v1788;
                    LODWORD(v1623) = HIDWORD(v1798);
                    LODWORD(v1594) = DWORD2(v1798);
                  }
                  LODWORD(v1592) = v835;
                  v1703 = 0LL;
                  v1815 = 0LL;
                  v1814 = 0LL;
                  v1816 = 0;
                  DWORD2(v1813) = -v832;
                  LODWORD(v1813) = 40;
                  DWORD1(v1813) = v831;
                  HIDWORD(v1813) = 2097153;
                  v836 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                           v1492,
                           &v1813,
                           0LL,
                           &v1703,
                           0LL,
                           0);
                  v1531 = (LPCWSTR)v836;
                  if ( !v836 )
                  {
                    GetLastError();
                    v827 = v1492;
                    v106 = 0LL;
LABEL_1075:
                    ((void (__fastcall *)(void *))off_180985130)(v827);
LABEL_1076:
                    if ( v1591 )
                      ((void (__fastcall *)(void *))off_180985138)(v1591);
                    goto LABEL_1078;
                  }
                  ((void (__fastcall *)(void *, __int64))off_180985178)(v1492, v836);
                  if ( v1471 == 1 && v1591 )
                  {
                    v1801 = 0LL;
                    v1803 = (int)v1623;
                    v1802 = v831;
                    ((void (__fastcall *)(void *, __int64 *))off_1809851E8)(v1492, &v1801);
                  }
                  v1371 = v1779;
                  lpModuleNamei = v1783;
                  Srck = v1780;
                  memset_0(v1768, 0, 0x68uLL);
                  memset_0(v1749, 0, 0x68uLL);
                  v1482 = 0LL;
                  v1326 = 0;
                  v1435 = 0;
                  v1825 = 0LL;
                  v1827 = 0LL;
                  v1826 = 0LL;
                  v1828 = 0;
                  v1797 = 0LL;
                  if ( Srck )
                  {
                    v837 = ((__int64 (__fastcall *)(void *, __int64))off_180985150)(v1492, 7LL);
                    if ( !v837 )
                      goto LABEL_1069;
                    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                         v837,
                                         104LL,
                                         v1768) )
                    {
                      v1482 = v1771;
                      v1326 = v1769;
                      v1435 = v1770;
                    }
                    v1396 = (LPCWSTR)((__int64 (__fastcall *)(void *))off_180985110)(v1492);
                    if ( v1396 )
                    {
                      v838 = v834 - v830;
                      DWORD2(v1825) = v1365 - (_DWORD)v1596;
                      v1704 = 0LL;
                      v1826 = 0LL;
                      v1827 = 0LL;
                      v1828 = 0;
                      LODWORD(v1825) = 40;
                      DWORD1(v1825) = v838;
                      HIDWORD(v1825) = 2097153;
                      v839 = ((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                               v1396,
                               &v1825,
                               0LL,
                               &v1704,
                               0LL,
                               0);
                      v1453 = v839;
                      if ( v839 )
                      {
                        v905 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(v839, 104LL, v1749);
                        DWORD2(v1797) = v838;
                        v906 = 0LL;
                        if ( v905 )
                          v906 = v1750;
                        HIDWORD(v1797) = (_DWORD)v1596 - v1365;
                        v1521 = v906;
                        ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(v1396, v1453);
                        ((void (__fastcall *)(LPCWSTR, __int64))off_180985180)(v1396, 1LL);
                        v907 = ((__int64 (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1396, lpModuleNamei);
                        v908 = off_1809851E8;
                        lpModuleNamej = (LPCWSTR)v907;
                        v909 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                        ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v908)(v1396, &v1797, v909);
                        v841 = 0;
                        ((void (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                          v1396,
                          Srck,
                          0xFFFFFFFFLL,
                          &v1797,
                          v1544,
                          0LL);
                        if ( v1471 == 1 )
                        {
                          if ( v1371 )
                            v1372 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                          else
                            v1372 = 0xFFFFFF;
                        }
                        else
                        {
                          v1372 = -5723992;
                        }
                        v910 = -v830;
                        v911 = 0;
                        if ( v830 >= 0 )
                        {
                          v910 = 0;
                          v911 = v830;
                        }
                        v912 = -v1365;
                        v913 = 0;
                        if ( v1365 >= 0 )
                        {
                          v913 = v1365;
                          v912 = 0;
                        }
                        v914 = DWORD2(v1797) - v910;
                        if ( DWORD2(v1797) - v910 >= v1326 - v911 )
                          v914 = v1326 - v911;
                        LODWORD(v1596) = v914;
                        v915 = HIDWORD(v1797) - v912;
                        if ( HIDWORD(v1797) - v912 >= v1435 - v913 )
                          v915 = v1435 - v913;
                        if ( v914 > 0 && v915 > 0 )
                        {
                          v916 = v1326;
                          v917 = v1326 * v913;
                          v1328 = 0;
                          v918 = (unsigned __int8 *)&v1521[4 * v910 + 4 * (__int64)(DWORD2(v1797) * v912)];
                          Srcl = v918;
                          v919 = v1482 + 4 * (v911 + (__int64)v917);
                          v1522 = 4LL * SDWORD2(v1797);
                          v1514 = 4 * v916;
                          v1483 = v919;
                          do
                          {
                            v920 = v918 + 2;
                            v921 = 0;
                            v922 = v919 - (_QWORD)v918;
                            do
                            {
                              if ( (unsigned __int8)((*v920 + *(v920 - 2) + 2 * (unsigned int)*(v920 - 1)) >> 2) != 0xFF )
                              {
                                v923 = (unsigned __int8)~((*v920 + *(v920 - 2) + 2 * (unsigned int)*(v920 - 1)) >> 2);
                                v920[v922] -= ~((*v920 + *(v920 - 2) + 2 * (unsigned int)*(v920 - 1)) >> 2)
                                            * (v1372 - v920[v922]);
                                v924 = v920[v922 - 1];
                                v925 = (unsigned __int64)(2155905153LL * v923 * (BYTE1(v1372) - v924)) >> 32;
                                v920[v922 - 1] = v924 + (v925 >> 7 < 0) + (v925 >> 7);
                                v926 = v920[v922 - 2];
                                v927 = (unsigned __int64)(2155905153LL * v923 * (BYTE2(v1372) - v926)) >> 32;
                                v920[v922 - 2] = v926 + (v927 >> 7 < 0) + (v927 >> 7);
                                v928 = v920[v922 + 1];
                                v929 = v923 * (255 - v928);
                                v914 = (int)v1596;
                                v920[v922 + 1] = v928 + v929 / 255;
                              }
                              v920 += 4;
                              ++v921;
                              v841 = 0;
                            }
                            while ( v921 < v914 );
                            v918 = &Srcl[v1522];
                            v919 = v1514 + v1483;
                            Srcl += v1522;
                            v1483 += v1514;
                            ++v1328;
                          }
                          while ( v1328 < v915 );
                          v92 = v1593;
                          v831 = (unsigned int)v1594;
                          v835 = v1592;
                        }
                        ((void (__fastcall *)(SIZE_T))off_180985138)(v1453);
                        if ( lpModuleNamej )
                          ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1396, lpModuleNamej);
                      }
                      else
                      {
                        v840 = GetLastError();
                        v841 = v840;
                        if ( v840 > 0 )
                          v841 = (unsigned __int16)v840 | 0x80070000;
                        if ( v841 >= 0 )
                          v841 = -2147467259;
                      }
                      ((void (__fastcall *)(LPCWSTR))off_180985130)(v1396);
                      if ( v841 >= 0 )
                      {
                        v930 = v1781;
                        v1437 = v1779;
                        lpModuleNamek = v1784;
                        Srcm = v1781;
                        memset_0(v1772, 0, 0x68uLL);
                        memset_0(v1776, 0, 0x68uLL);
                        v1484 = 0LL;
                        v1329 = 0;
                        v1373 = 0;
                        v1831 = 0LL;
                        v1832 = 0;
                        v1829 = 0LL;
                        v1830 = 0LL;
                        v1804 = 0LL;
                        if ( v930 )
                        {
                          v827 = v1492;
                          v931 = ((__int64 (__fastcall *)(void *, __int64))off_180985150)(v1492, 7LL);
                          if ( v931 )
                          {
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                 v931,
                                                 104LL,
                                                 v1772) )
                            {
                              v1484 = v1775;
                              v1329 = v1773;
                              v1373 = v1774;
                            }
                            v1397 = (LPCWSTR)((__int64 (__fastcall *)(void *))off_180985110)(v1492);
                            v932 = v1397;
                            if ( v1397 )
                            {
                              v933 = v835 - Sizef;
                              DWORD2(v1829) = v1576 - v1558;
                              v1705[0] = 0LL;
                              v1830 = 0LL;
                              v1831 = 0LL;
                              v1832 = 0;
                              LODWORD(v1829) = 40;
                              DWORD1(v1829) = v933;
                              HIDWORD(v1829) = 2097153;
                              v934 = ((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_180985118)(
                                       v1397,
                                       &v1829,
                                       0LL,
                                       v1705,
                                       0LL,
                                       0);
                              v1454 = v934;
                              if ( !v934 )
                              {
                                v935 = GetLastError();
                                v106 = 0LL;
                                v936 = v935;
                                if ( v935 > 0 )
                                  v936 = (unsigned __int16)v935 | 0x80070000;
                                if ( v936 >= 0 )
                                  v936 = -2147467259;
LABEL_1186:
                                ((void (__fastcall *)(LPCWSTR))off_180985130)(v932);
                                if ( v936 >= 0 )
                                {
                                  v827 = v1492;
                                  v828 = v1339;
                                  if ( v1471 == 1 )
                                    ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                                      v1339,
                                      (unsigned int)v1787,
                                      DWORD1(v1787),
                                      v831,
                                      (_DWORD)v1623,
                                      v1492,
                                      0,
                                      0,
                                      13369376);
                                  else
                                    ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, unsigned int, _DWORD, int))off_180985140)(
                                      v1339,
                                      (unsigned int)v1798,
                                      DWORD1(v1798),
                                      v831,
                                      (_DWORD)v1623,
                                      v1492,
                                      0,
                                      0,
                                      v831,
                                      (_DWORD)v1623,
                                      v1433);
                                  goto LABEL_1190;
                                }
                                v827 = v1492;
LABEL_1072:
                                v842 = v1531;
                                goto LABEL_1073;
                              }
                              v937 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                       v934,
                                       104LL,
                                       v1776);
                              DWORD2(v1804) = v933;
                              v938 = 0LL;
                              if ( v937 )
                                v938 = v1777;
                              HIDWORD(v1804) = v1558 - v1576;
                              v1523 = v938;
                              ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(v1397, v1454);
                              ((void (__fastcall *)(LPCWSTR, __int64))off_180985180)(v1397, 1LL);
                              v939 = ((__int64 (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1397, lpModuleNamek);
                              v940 = off_1809851E8;
                              lpModuleNamel = (LPCWSTR)v939;
                              v941 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                              ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v940)(v1397, &v1804, v941);
                              v936 = 0;
                              ((void (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                v1397,
                                Srcm,
                                0xFFFFFFFFLL,
                                &v1804,
                                v1544,
                                0LL);
                              if ( v1471 == 1 )
                              {
                                if ( !v1437 )
                                {
                                  v1438 = 0xFFFFFF;
LABEL_1167:
                                  v943 = -Sizef;
                                  v944 = 0;
                                  v945 = 0;
                                  if ( Sizef >= 0 )
                                  {
                                    v944 = Sizef;
                                    v943 = 0;
                                  }
                                  v946 = -v1576;
                                  if ( v1576 >= 0 )
                                  {
                                    v945 = v1576;
                                    v946 = 0;
                                  }
                                  v947 = DWORD2(v1804) - v943;
                                  if ( DWORD2(v1804) - v943 >= v1329 - v944 )
                                    v947 = v1329 - v944;
                                  v948 = HIDWORD(v1804) - v946;
                                  if ( HIDWORD(v1804) - v946 >= v1373 - v945 )
                                    v948 = v1373 - v945;
                                  if ( v947 > 0 && v948 > 0 )
                                  {
                                    v1374 = 0;
                                    v949 = (unsigned __int8 *)&v1523[4 * v943 + 4 * (__int64)(DWORD2(v1804) * v946)];
                                    Srcn = v949;
                                    v950 = v1484 + 4 * (v944 + (__int64)(v1329 * v945));
                                    v1524 = 4LL * SDWORD2(v1804);
                                    v1515 = 4LL * v1329;
                                    v1485 = v950;
                                    do
                                    {
                                      v951 = v949 + 2;
                                      v952 = 0;
                                      v953 = v950 - (_QWORD)v949;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v951 + *(v951 - 2) + 2 * (unsigned int)*(v951 - 1)) >> 2) != 0xFF )
                                        {
                                          v954 = (unsigned __int8)~((*v951 + *(v951 - 2) + 2 * (unsigned int)*(v951 - 1)) >> 2);
                                          v951[v953] -= ~((*v951 + *(v951 - 2) + 2 * (unsigned int)*(v951 - 1)) >> 2)
                                                      * (v1571 - v951[v953]);
                                          v955 = v951[v953 - 1];
                                          v956 = (unsigned __int64)(2155905153LL * v954 * (BYTE1(v1438) - v955)) >> 32;
                                          v951[v953 - 1] = v955 + (v956 >> 7 < 0) + (v956 >> 7);
                                          v957 = v951[v953 - 2];
                                          v958 = (unsigned __int64)(2155905153LL * v954 * (BYTE2(v1438) - v957)) >> 32;
                                          v951[v953 - 2] = v957 + (v958 >> 7 < 0) + (v958 >> 7);
                                          v951[v953 + 1] += v954 * (255 - v951[v953 + 1]) / 255;
                                        }
                                        v951 += 4;
                                        ++v952;
                                        v936 = 0;
                                      }
                                      while ( v952 < v947 );
                                      v949 = &Srcn[v1524];
                                      v950 = v1515 + v1485;
                                      Srcn += v1524;
                                      v1485 += v1515;
                                      ++v1374;
                                    }
                                    while ( v1374 < v948 );
                                    v92 = v1593;
                                    v831 = (unsigned int)v1594;
                                    v932 = v1397;
                                  }
                                  ((void (__fastcall *)(SIZE_T))off_180985138)(v1454);
                                  v106 = 0LL;
                                  if ( lpModuleNamel )
                                    ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v932, lpModuleNamel);
                                  goto LABEL_1186;
                                }
                                v942 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                              }
                              else
                              {
                                v942 = -5723992;
                              }
                              v1438 = v942;
                              v1571 = v942;
                              goto LABEL_1167;
                            }
                          }
                          GetLastError();
LABEL_1071:
                          v106 = 0LL;
                          goto LABEL_1072;
                        }
                      }
                    }
                    else
                    {
LABEL_1069:
                      GetLastError();
                    }
                  }
                  v827 = v1492;
                  goto LABEL_1071;
                }
              }
              else
              {
                v762 = 0;
              }
              if ( v624 != 1 )
                goto LABEL_954;
              goto LABEL_952;
            }
            v627 = 0LL;
            v1694 = 0LL;
            v1695 = 0LL;
            v626 = 0;
            v1696 = 0LL;
            v1697 = 0LL;
            v1698 = 0LL;
            v1699 = 0LL;
            v1426 = 0;
            v1620 = 0;
            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1809851A0)(
                                  8LL,
                                  &v1595,
                                  0LL,
                                  &v1620) )
              goto LABEL_720;
            v629 = (char *)MemoryAlloc(2LL * v1620);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1698);
            if ( !v629 )
            {
              v1698 = 0LL;
              v626 = -2147024882;
              goto LABEL_737;
            }
            v1698 = v629;
            v630 = MemoryAlloc(4LL * (v1595 + 1));
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1699);
            if ( v630 )
            {
              v1699 = v630;
              if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1809851A0)(
                                    8LL,
                                    &v1595,
                                    v629,
                                    &v1620) )
              {
LABEL_720:
                v628 = GetLastError();
                v626 = v628;
                if ( v628 > 0 )
                  v626 = (unsigned __int16)v628 | 0x80070000;
                if ( v626 >= 0 )
                  v626 = -2147467259;
LABEL_737:
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1699);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1698);
                if ( v626 >= 0 )
                {
                  v633 = 0;
                  v634 = 0;
                  v1359 = 0;
                  if ( v1426 )
                  {
                    v635 = 0LL;
                    while ( 2 )
                    {
                      v636 = 0;
                      v637 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
                      do
                      {
                        if ( v627[v635] == *v637 )
                        {
                          v633 = v636;
                          v1359 = v636;
                          goto LABEL_746;
                        }
                        ++v636;
                        ++v637;
                      }
                      while ( v636 < 0x26 );
                      ++v634;
                      ++v635;
                      if ( v634 < v1426 )
                        continue;
                      break;
                    }
                  }
LABEL_746:
                  v638 = v633;
                  v1427 = 0;
                  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))off_1809851A8)(
                                       `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v633],
                                       v1854,
                                       85LL)
                    && (int)((__int64 (__fastcall *)(_BYTE *, __int64, char *))off_180985190)(v1854, 88LL, v1805) > 0 )
                  {
                    v1427 = (v1806 >> 27) & 1;
                  }
                  v639 = L"Segoe UI Light";
                  v640 = 19LL;
                  v641 = (const wchar_t **)v1852;
                  do
                  {
                    *v641 = v639;
                    v642 = -1LL;
                    do
                      ++v642;
                    while ( v639[v642] );
                    ++v641;
                    v639 += v642 + 1;
                    --v640;
                  }
                  while ( v640 );
                  lpModuleNameb = (LPCWSTR)v1852[*((unsigned __int8 *)&`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping
                                                 + 3 * v638)];
                  Srcf = (const wchar_t *)v1852[(unsigned __int8)byte_180836F31[3 * v638]];
                  v1478 = v1852[(unsigned __int8)byte_180836F32[3 * v638]];
                  v643 = (char *)MemoryAlloc(0x1C90uLL);
                  v1324 = v643;
                  if ( v643 )
                  {
                    v646 = (unsigned __int8 *)&unk_1808B5392;
                    v647 = -1;
                    v648 = 0;
                    v649 = 0;
                    v650 = 0;
                    v651 = v643 + 7;
                    v652 = 914LL;
                    do
                    {
                      v653 = *(v646 - 1) | (*(v646 - 2) << 8);
                      v654 = v646[2] << 8;
                      v655 = *v646;
                      v646 += 8;
                      v656 = *(v646 - 7) | ((v655 | (v653 << 8)) << 8);
                      v657 = v656 ^ v650;
                      v658 = *(v646 - 3) | ((*(v646 - 4) | ((*(v646 - 5) | v654) << 8)) << 8);
                      v659 = v657 ^ v658 ^ v649 ^ 0xAC987321;
                      v660 = (__ROL4__(v659, 10) + 4991 * __ROL4__(v659 + 1419157410, 5)) ^ v657;
                      v661 = (43881 * __ROR4__(v660 + 133239679, 9) - __ROL4__(v660, 2)) ^ v659;
                      v662 = (24670 * v661 - (v661 >> 13) - 123127970) ^ v660;
                      v663 = (2033 * __ROL4__(v662 ^ 0xAB69, 6) - __ROL4__(v662, 2)) ^ v661;
                      v664 = (133239679 - (v663 ^ 0xAB69605E)) ^ v662;
                      v665 = (43881 * (v664 ^ 0x137F)) ^ __ROR4__(v664, 6) ^ v663;
                      v666 = (__ROL4__(v665, 2) + 24670 * __ROR4__(v665 + 133239679, 15)) ^ v664;
                      v667 = (2033 * __ROR4__(v666 + 1419157410, 14) - __ROL4__(v666, 8)) ^ v665;
                      v668 = __ROR4__(v667, 10) ^ (4991 * __ROR4__(v667 ^ 0xAB69605E, 12)) ^ v666;
                      v669 = (v668 >> 10) ^ (43881 * (v668 ^ 0x7F1)) ^ v667;
                      v670 = (2033 * (__ROR4__(~v669, 5) + 24670)) ^ v668;
                      v671 = v669 ^ (v670 - 2033) ^ 0xAB69605E;
                      v672 = ((v671 >> 2) + 4991 * __ROL4__(v669 ^ (v670 - 2033) ^ 0xAB6967AF, 2)) ^ v670;
                      v673 = (__ROL4__(v672, 7) + 43881 * __ROR4__(v672 - 133239679, 6)) ^ v671;
                      v674 = (24670 * (v673 ^ 0x137F) + __ROR4__(v673, 9)) ^ v672;
                      v675 = (__ROL4__(v674, 7) + 2033 * __ROL4__(v674 ^ 0xAB69, 5)) ^ v673;
                      v676 = v675 ^ v674 ^ 0xAC987321;
                      v677 = (4991 * __ROR4__(v676, 3) - 219010071) ^ v675;
                      v678 = (24670 * __ROR4__(v677 - 133239679, 1) - __ROR4__(v677, 6)) ^ v676;
                      v679 = (__ROL4__(v678, 14) + 2033 * __ROL4__(v678 - 1419157410, 3)) ^ v677;
                      v680 = (4991 * __ROL4__(v679 - 1419157410, 15) - __ROR4__(v679, 14)) ^ v678;
                      v681 = (v680 >> 3) ^ (43881 * (v680 ^ 0x605E)) ^ v679;
                      v682 = 24670 * __ROL4__(v681 ^ 0x7F1137F, 4);
                      v683 = v681;
                      v684 = v647 ^ v681;
                      v647 = v658;
                      v685 = v648 ^ __ROL4__(v683, 2) ^ v682;
                      v648 = v656;
                      v686 = v685 ^ v680;
                      *(v651 - 4) = v686;
                      *v651 = v684;
                      v651 += 8;
                      v687 = __ROR4__(v686, 8);
                      *(v651 - 13) = v687;
                      v688 = __ROR4__(v684, 8);
                      *(v651 - 9) = v688;
                      v689 = __ROR4__(v687, 8);
                      *(v651 - 14) = v689;
                      v690 = __ROR4__(v688, 8);
                      *(v651 - 10) = v690;
                      v691 = __ROR4__(v689, 8);
                      v692 = __ROR4__(v690, 8);
                      *(v651 - 15) = v691;
                      *(v651 - 11) = v692;
                      v649 = __ROR4__(v692, 8);
                      v650 = __ROR4__(v691, 8);
                      --v652;
                    }
                    while ( v652 );
                    v693 = v1324;
                    v694 = 0LL;
                    v695 = 0LL;
                    do
                    {
                      v696 = _mm_loadu_si128((const __m128i *)&v1324[v694]);
                      v694 += 16LL;
                      v697 = _mm_xor_si128(v696, v695);
                      v695 = v697;
                    }
                    while ( v694 < 0x1C90 );
                    v698 = _mm_xor_si128(v697, _mm_srli_si128(v697, 8));
                    v699 = _mm_xor_si128(v698, _mm_srli_si128(v698, 4));
                    v700 = _mm_xor_si128(v699, _mm_srli_si128(v699, 2));
                    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v700, _mm_srli_si128(v700, 1))) == 127LL )
                    {
                      v1695 = v1324;
                      v626 = 0;
                      v1696 = 7312LL;
                      if ( v1324 )
                        v1696 = 7312LL;
                      else
                        v693 = 0LL;
                      v701 = v1846;
                      v702 = 6LL;
                      do
                      {
                        for ( kk = 0; kk < 0x26; ++kk )
                        {
                          if ( v1359 == kk )
                            *v701 = v693;
                          v704 = -1LL;
                          do
                            ++v704;
                          while ( v693[v704] );
                          v693 += v704 + 1;
                        }
                        ++v701;
                        --v702;
                      }
                      while ( v702 );
                      v705 = MemoryAlloc(0x18uLL);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1697);
                      if ( v705 )
                      {
                        v1697 = v705;
                        v1360 = 0;
                        v706 = v705;
                        v1557 = (SIZE_T)v705;
                        v707 = v1853;
                        v1325 = v705;
                        *(_OWORD *)v705 = 0LL;
                        v705[2] = 0LL;
                        v708 = 0;
                        v1370 = v1853;
                        v1696 = 7312LL;
                        while ( 2 )
                        {
                          v709 = *v707;
                          v710 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
                          v711 = 0LL;
                          while ( v709 != *v710 )
                          {
                            v711 = (unsigned int)(v711 + 1);
                            ++v710;
                            if ( (unsigned int)v711 >= 6 )
                              goto LABEL_794;
                          }
                          v712 = v1846[v711];
                          v713 = -1LL;
                          do
                            ++v713;
                          while ( *(_BYTE *)(v712 + v713) );
                          v714 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1809851C0)(
                                   65001LL,
                                   0LL,
                                   v712,
                                   (unsigned int)(v713 + 1),
                                   0LL,
                                   0);
                          Sizec = v714;
                          if ( !v714 )
                          {
                            v718 = GetLastError();
                            v626 = v718;
                            if ( v718 > 0 )
                              v626 = (unsigned __int16)v718 | 0x80070000;
                            if ( v626 >= 0 )
                              v626 = -2147467259;
                            goto LABEL_804;
                          }
                          v715 = MemoryAlloc(2LL * v714);
                          *v1325 = v715;
                          if ( !v715 )
                            goto LABEL_780;
                          v716 = -1LL;
                          do
                            ++v716;
                          while ( *(_BYTE *)(v712 + v716) );
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1809851C0)(
                                                65001LL,
                                                0LL,
                                                v712,
                                                (unsigned int)(v716 + 1),
                                                v715,
                                                Sizec) )
                          {
                            v717 = GetLastError();
                            v626 = v717;
                            if ( v717 > 0 )
                              v626 = (unsigned __int16)v717 | 0x80070000;
                            if ( v626 >= 0 )
                              v626 = -2147467259;
                            goto LABEL_804;
                          }
                          v706 = v1325;
                          v708 = v1360;
LABEL_794:
                          ++v708;
                          v707 = v1370 + 1;
                          v1360 = v708;
                          ++v706;
                          ++v1370;
                          v1325 = v706;
                          if ( v708 < 3 )
                            continue;
                          break;
                        }
                        v705 = 0LL;
                        v1692 = (void **)v1557;
                        v1778 = v1427;
                        v1697 = 0LL;
                      }
                      else
                      {
                        v705 = 0LL;
                        v1697 = 0LL;
LABEL_780:
                        v626 = -2147024882;
                      }
LABEL_804:
                      if ( v705 )
                      {
                        v719 = 3LL;
                        v644 = (const wchar_t *)v1478;
                        v1696 = 7312LL;
                        do
                        {
                          v720 = (_WORD *)*v705;
                          if ( *v705 )
                          {
                            v721 = -1LL;
                            do
                              ++v721;
                            while ( v720[v721] );
                            memset(v720, 0, 2 * v721 + 2);
                            MemoryFree((void *)*v705);
                            v719 = v1434;
                          }
                          ++v705;
                          v1434 = --v719;
                        }
                        while ( v719 );
LABEL_756:
                        if ( v1695 )
                          memset(v1695, 0, v1696);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1697);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1695);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1694);
                        if ( v626 < 0 )
                        {
LABEL_932:
                          v106 = 0LL;
                          goto LABEL_933;
                        }
                        if ( v1692 )
                          v645 = v1692;
                        else
                          v645 = 0LL;
                        v1780 = *v645;
                        if ( v1692 )
                          v722 = v1692;
                        else
                          v722 = 0LL;
                        v1781 = v722[1];
                        if ( v1692 )
                        {
                          v723 = v1692;
                          v106 = 0LL;
                        }
                        else
                        {
                          v106 = 0LL;
                          v723 = 0LL;
                        }
                        v724 = v723[2];
                        v1738 = 0LL;
                        LODWORD(v1738) = 16;
                        v1782 = v724;
                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_180985268)(
                                              66LL,
                                              0LL,
                                              &v1738,
                                              0LL) )
                        {
                          v725 = GetLastError();
                          v626 = v725;
                          if ( v725 > 0 )
                            v626 = (unsigned __int16)v725 | 0x80070000;
                          v1779 = 0;
                          if ( v626 >= 0 )
                            v626 = -2147467259;
                          goto LABEL_933;
                        }
                        v1779 = BYTE4(v1738) & 1;
                        v1428 = 42;
                        if ( v1471 == 1 )
                        {
                          v1554 = 42;
                        }
                        else
                        {
                          if ( v1471 != 2 )
                          {
                            if ( v1471 == 3 )
                            {
                              v1554 = 225;
                              v1543 = 225;
                            }
                            goto LABEL_832;
                          }
                          v1554 = 15;
                        }
                        v1543 = 11;
LABEL_832:
                        v726 = 96;
                        v1361 = 96;
                        memset_0(v1842, 0, 0xDCuLL);
                        v1843 = 220;
                        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *))off_1809851E0)(
                                             0LL,
                                             0xFFFFFFFFLL,
                                             v1842) )
                        {
                          v726 = v1844;
                          *((_QWORD *)&v1737 + 1) = v1845;
                          *(_QWORD *)&v1737 = 0LL;
                          if ( v1844 < 0x60u )
                            v726 = 96;
                          v1361 = v726;
                        }
                        v727 = v644;
                        if ( v1471 == 1 )
                          v727 = lpModuleNameb;
                        memset_0(v1833, 0, 0x5CuLL);
                        v626 = 0;
                        v1479 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
                        if ( !v1479 )
                          goto LABEL_844;
                        v728 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(v1554, v726, 72LL);
                        v1833[4] = 400;
                        v1834 = 5;
                        v1833[0] = -v728;
                        StringCchCopyW(v1835, 32LL, v727);
                        v729 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1833);
                        v106 = 0LL;
                        if ( v729 )
                        {
                          v1783 = (const WCHAR *)v729;
                        }
                        else
                        {
                          v730 = GetLastError();
                          v626 = v730;
                          if ( v730 > 0 )
                            v626 = (unsigned __int16)v730 | 0x80070000;
                          if ( v626 >= 0 )
                            v626 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, size_t))off_180985260)(0LL, v1479);
                        if ( v626 < 0 )
                          goto LABEL_933;
                        if ( v1471 == 1 )
                          v644 = lpModuleNameb;
                        memset_0(v1836, 0, 0x5CuLL);
                        v626 = 0;
                        v732 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
                        if ( !v732 )
                        {
LABEL_844:
                          v731 = GetLastError();
                          v106 = 0LL;
                          v626 = v731;
                          if ( v731 > 0 )
                            v626 = (unsigned __int16)v731 | 0x80070000;
                          if ( v626 >= 0 )
                            v626 = -2147467259;
                          goto LABEL_933;
                        }
                        v733 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(v1543, v726, 72LL);
                        v1836[4] = 400;
                        v1837 = 5;
                        v1836[0] = -v733;
                        StringCchCopyW(v1838, 32LL, v644);
                        v734 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1836);
                        if ( v734 )
                        {
                          v1784 = (const WCHAR *)v734;
                        }
                        else
                        {
                          v735 = GetLastError();
                          v626 = v735;
                          if ( v735 > 0 )
                            v626 = (unsigned __int16)v735 | 0x80070000;
                          if ( v626 >= 0 )
                            v626 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, __int64))off_180985260)(0LL, v732);
                        v106 = 0LL;
                        if ( v626 < 0 )
                        {
LABEL_933:
                          v624 = v1471;
                          goto LABEL_934;
                        }
                        v736 = 0;
                        if ( v1471 != 1 )
                        {
                          if ( v1471 == 2 )
                          {
                            v736 = 0;
                            LODWORD(v106) = SDWORD2(v1737) / 4;
LABEL_864:
                            *((_QWORD *)&v1798 + 1) = __PAIR64__(v736, v106);
                            if ( v1471 == 1 )
                            {
                              v738 = 150;
                              v1543 = 32;
                            }
                            else
                            {
                              if ( (unsigned int)(v1471 - 2) >= 2 )
                              {
                                v737 = v1595;
                                v1428 = v1595;
                                v738 = v1554;
                                goto LABEL_871;
                              }
                              v738 = 0;
                              v1428 = 0;
                              v1543 = 0;
                            }
                            v737 = 0;
                            v1554 = v738;
LABEL_871:
                            v739 = v1780;
                            v740 = v106 - v738 - v737;
                            v626 = 0;
                            DWORD2(v1788) = v740;
                            DWORD2(v1787) = v740;
                            lpModuleNamec = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_180985178)(
                                                       v1393,
                                                       v1783);
                            if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                                  v1393,
                                                  v739,
                                                  0xFFFFFFFFLL,
                                                  &v1787,
                                                  3152,
                                                  0LL) )
                              v626 = -2147467259;
                            if ( lpModuleNamec )
                              ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1393, lpModuleNamec);
                            if ( v626 >= 0 )
                            {
                              v741 = v1781;
                              v626 = 0;
                              lpModuleNamed = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_180985178)(
                                                         v1393,
                                                         v1784);
                              if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                                    v1393,
                                                    v741,
                                                    0xFFFFFFFFLL,
                                                    &v1788,
                                                    3152,
                                                    0LL) )
                                v626 = -2147467259;
                              if ( lpModuleNamed )
                                ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1393, lpModuleNamed);
                              if ( v626 >= 0 )
                              {
                                if ( (unsigned int)(v1471 - 2) <= 1 )
                                {
                                  v740 = DWORD2(v1788);
                                  if ( SDWORD2(v1787) > SDWORD2(v1788) )
                                    v740 = DWORD2(v1787);
                                }
                                if ( v1778 )
                                {
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1787,
                                    v740 + v737 - DWORD2(v1787),
                                    v1428);
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1788,
                                    v740 + v737 - DWORD2(v1788),
                                    v1543 + HIDWORD(v1787));
                                }
                                else
                                {
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1787, v1554, v1428);
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1788,
                                    v1554,
                                    v1543 + HIDWORD(v1787));
                                }
                                v624 = v1471;
                                if ( (unsigned int)(v1471 - 2) <= 1 )
                                {
                                  *((_QWORD *)&v1798 + 1) = __PAIR64__(HIDWORD(v1788), v740);
                                  v1786 = -5723992;
                                  goto LABEL_919;
                                }
                                if ( v1471 != 1 )
                                  goto LABEL_919;
                                v1786 = 0xFFFFFF;
                                memset_0(v1839, 0, 0x5CuLL);
                                v626 = 0;
                                v742 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(
                                         0LL,
                                         0LL,
                                         1027LL);
                                if ( v742 )
                                {
                                  v744 = v1361;
                                  v745 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1809851B8)(11LL, v1361);
                                  v1839[4] = 400;
                                  v1839[0] = -v745;
                                  v1840 = 5;
                                  StringCchCopyW(v1841, 32LL, Srcf);
                                  v746 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1839);
                                  if ( v746 )
                                  {
                                    v1785 = v746;
                                  }
                                  else
                                  {
                                    v626 = GetLastError();
                                    v747 = v626 < 0;
                                    if ( v626 > 0 )
                                    {
                                      v626 = (unsigned __int16)v626 | 0x80070000;
                                      v747 = v626 < 0;
                                    }
                                    if ( !v747 )
                                      v626 = -2147467259;
                                  }
                                  ((void (__fastcall *)(_QWORD, __int64))off_180985260)(0LL, v742);
                                }
                                else
                                {
                                  v626 = GetLastError();
                                  v743 = v626 < 0;
                                  if ( v626 > 0 )
                                  {
                                    v626 = (unsigned __int16)v626 | 0x80070000;
                                    v743 = v626 < 0;
                                  }
                                  if ( !v743 )
                                  {
                                    v626 = -2147467259;
                                    v106 = 0LL;
LABEL_934:
                                    ((void (__fastcall *)(_QWORD, LPCWSTR))off_180985260)(0LL, v1393);
                                    goto LABEL_935;
                                  }
                                  v744 = v1361;
                                }
                                if ( v626 >= 0 )
                                {
                                  v748 = v1782;
                                  v626 = 0;
                                  v1791 = v740;
                                  v749 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_180985178)(v1393, v1785);
                                  if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1809851D8)(
                                                        v1393,
                                                        v748,
                                                        0xFFFFFFFFLL,
                                                        &v1789,
                                                        1120,
                                                        0LL) )
                                    v626 = -2147467259;
                                  if ( v749 )
                                    ((void (__fastcall *)(LPCWSTR, __int64))off_180985178)(v1393, v749);
                                  v106 = 0LL;
                                  if ( v626 < 0 )
                                    goto LABEL_933;
                                  v750 = v1791 + 24;
                                  if ( (int)(v1791 + 24) < 90 )
                                    v750 = 90;
                                  v1791 = v750;
                                  v1792 = 32;
                                  v1789 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1789,
                                            v744,
                                            96LL);
                                  v1790 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1790,
                                            v744,
                                            96LL);
                                  v1791 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1791,
                                            v744,
                                            96LL);
                                  v1792 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1792,
                                            v744,
                                            96LL);
                                  if ( v1778 )
                                  {
                                    v751 = (unsigned int)v1787;
                                    if ( (int)v1787 >= (int)v1788 )
                                      v751 = (unsigned int)v1788;
                                  }
                                  else
                                  {
                                    v752 = DWORD2(v1787);
                                    if ( SDWORD2(v1787) <= SDWORD2(v1788) )
                                      v752 = DWORD2(v1788);
                                    v751 = v1789 + v752 - v1791;
                                  }
                                  ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_180985250)(
                                    &v1789,
                                    v751,
                                    (unsigned int)(HIDWORD(v1788) + 36));
                                  v624 = v1471;
LABEL_919:
                                  v753 = v1778;
                                  v754 = HIDWORD(v1798);
                                  v755 = DWORD2(v1798);
                                  switch ( v624 )
                                  {
                                    case 1:
                                      v106 = 0LL;
                                      *(_QWORD *)&v1798 = 0LL;
                                      break;
                                    case 2:
                                      v1810 = 0LL;
                                      v1812 = 0LL;
                                      v1811 = 0LL;
                                      v757 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180985248)(0LL, 1LL);
                                      LODWORD(v1810) = 40;
                                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_180985208)(
                                                           v757,
                                                           &v1810) )
                                      {
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1811 + 4);
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1811 + 12);
                                        if ( v753 )
                                          v758 = DWORD1(v1811) + 5 * HIDWORD(v1811) / 100;
                                        else
                                          v758 = 95 * (HIDWORD(v1811) - v755) / 100;
                                        LODWORD(v1798) = v758;
                                        DWORD1(v1798) = 95 * ((int)v1812 - v754) / 100;
                                      }
                                      break;
                                    case 3:
                                      v1807 = 0LL;
                                      v1809 = 0LL;
                                      v1808 = 0LL;
                                      v756 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180985248)(0LL, 1LL);
                                      LODWORD(v1807) = 40;
                                      v106 = 0LL;
                                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_180985208)(
                                                           v756,
                                                           &v1807) )
                                      {
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1808 + 4);
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1808 + 12);
                                        LODWORD(v1798) = 50 * (HIDWORD(v1808) - v755) / 100;
                                        DWORD1(v1798) = 50 * ((int)v1809 - v754) / 100;
                                      }
                                      break;
                                    default:
                                      v106 = 0LL;
                                      break;
                                  }
                                  v626 = 0;
                                  goto LABEL_934;
                                }
                              }
                            }
                            goto LABEL_932;
                          }
                          if ( v1471 != 3 )
                            goto LABEL_864;
                        }
                        LODWORD(v106) = DWORD2(v1737);
                        v736 = HIDWORD(v1737);
                        goto LABEL_864;
                      }
                    }
                    else
                    {
                      v626 = -1073425151;
                      MemoryFree(v1324);
                      v1696 = 0LL;
                    }
                  }
                  else
                  {
                    v626 = -2147024882;
                  }
                }
                v644 = (const wchar_t *)v1478;
                goto LABEL_756;
              }
              v627 = v630;
              if ( v1595 )
              {
                for ( mm = 0; mm < v1595; ++mm )
                {
                  *v630 = ((__int64 (__fastcall *)(char *, _QWORD))off_1809851B0)(v629, 0LL);
                  v632 = -1LL;
                  do
                    ++v632;
                  while ( *(_WORD *)&v629[2 * v632] );
                  ++v630;
                  v629 += 2 * v632 + 2;
                }
                v626 = 0;
              }
              *v630 = 1033;
              v1694 = v627;
              v1426 = v1595 + 1;
            }
            else
            {
              v626 = -2147024882;
            }
            v1699 = 0LL;
            goto LABEL_737;
          }
          v558 = g_WarbirdSecureFunctionsRefCount;
LABEL_713:
          g_WarbirdSecureFunctionsRefCount = v558 + 1;
          goto LABEL_714;
        }
      }
      else
      {
        v547 = 0;
      }
      v555 = GetProcessHeap();
      HeapFree(v555, 0, v541);
      goto LABEL_659;
    }
    HIDWORD(v1725) = dwBytes;
    v121 = dwBytes;
    v122 = GetProcessHeap();
    v123 = HeapAlloc(v122, 8u, v121);
    if ( !v123 )
    {
      v92 = -1073741801;
      goto LABEL_107;
    }
    lpMem = v123;
    LODWORD(v1725) = 0;
    v124 = v123;
    pcchLength[1] = (size_t)v123;
    v1321 = v93;
    Sizea = 8;
    v1366 = v91;
    v125 = RtlULongLongAdd((unsigned __int64)v123, 4LL, (unsigned __int64 *)&v1720);
    v92 = v125;
    LODWORD(v1593) = v125;
    if ( v125 < 0 )
    {
      v98 = v89;
      goto LABEL_109;
    }
    if ( v124 + 2 > (_DWORD *)((char *)v124 + HIDWORD(v1725)) )
      goto LABEL_149;
    *v124 = v126 - 4;
    *v1720 = 0;
    v128 = v1725 + 1;
    LODWORD(v1725) = v1725 + 1;
    if ( !v127 )
      goto LABEL_106;
    if ( lpMem )
    {
      v132 = (int *)lpMem;
      v1667 = (int *)lpMem;
      v1416 = 0;
      if ( v128 )
      {
        do
        {
          v92 = RtlUIntAdd(4u, *v132, &v1657);
          LODWORD(v1593) = v92;
          if ( v92 < 0 )
            goto LABEL_105;
          v92 = RtlULongLongAdd((unsigned __int64)v132, v1657, (unsigned __int64 *)&v1667);
          LODWORD(v1593) = v92;
          if ( v92 < 0 )
            goto LABEL_105;
          v132 = v1667;
          ++v1416;
        }
        while ( v1416 < v134 );
        v1321 = v93;
        Sizea = v133;
        v1366 = v91;
      }
      v92 = RtlULongLongAdd((unsigned __int64)v132, 4LL, (unsigned __int64 *)&v1730);
      LODWORD(v1593) = v92;
      if ( v92 >= 0 )
      {
        if ( (char *)v132 + v135 + 4 > (char *)lpMem + HIDWORD(v1725) )
          goto LABEL_149;
        *v132 = v135;
        memcpy_0(v1730, v91, v135);
        v130 = 4;
        v131 = v1725 + 1;
        LODWORD(v1725) = v1725 + 1;
LABEL_164:
        if ( v93 )
        {
          if ( !Sizea )
          {
LABEL_106:
            v92 = -1073741811;
            goto LABEL_107;
          }
        }
        else if ( Sizea )
        {
          goto LABEL_106;
        }
        if ( lpMem )
        {
          v138 = (int *)lpMem;
          v1668 = (int *)lpMem;
          v1417 = 0;
          if ( v131 )
          {
            do
            {
              v92 = RtlUIntAdd(4u, *v138, &v1659);
              LODWORD(v1593) = v92;
              if ( v92 < 0 )
                goto LABEL_105;
              v92 = RtlULongLongAdd(v139, v1659, (unsigned __int64 *)&v1668);
              LODWORD(v1593) = v92;
              if ( v92 < 0 )
                goto LABEL_105;
              v138 = v1668;
              ++v1417;
            }
            while ( v1417 < v140 );
            v1321 = v93;
            v1366 = v91;
          }
          v92 = RtlULongLongAdd((unsigned __int64)v138, 4LL, (unsigned __int64 *)&v1731);
          LODWORD(v1593) = v92;
          if ( v92 >= 0 )
          {
            if ( (char *)v141 + Sizea + 4 > (char *)lpMem + HIDWORD(v1725) )
              goto LABEL_149;
            *v141 = Sizea;
            if ( v93 )
              memcpy_0(v1731, v93, Sizea);
            v137 = v1725 + 1;
            LODWORD(v1725) = v1725 + 1;
LABEL_183:
            if ( lpMem )
            {
              v146 = (int *)lpMem;
              v1669 = (int *)lpMem;
              v1418 = 0;
              if ( v137 )
              {
                do
                {
                  v92 = RtlUIntAdd(4u, *v146, &v1600);
                  LODWORD(v1593) = v92;
                  if ( v92 < 0 )
                    goto LABEL_105;
                  v92 = RtlULongLongAdd((unsigned __int64)v146, v1600, (unsigned __int64 *)&v1669);
                  LODWORD(v1593) = v92;
                  if ( v92 < 0 )
                    goto LABEL_105;
                  v146 = v1669;
                  ++v1418;
                }
                while ( v1418 < v147 );
                v1321 = v93;
                v1366 = v91;
              }
              v92 = RtlULongLongAdd((unsigned __int64)v146, 4LL, (unsigned __int64 *)&v1732);
              LODWORD(v1593) = v92;
              if ( v92 < 0 )
                goto LABEL_186;
              if ( v146 + 3 > (int *)((char *)lpMem + HIDWORD(v1725)) )
                goto LABEL_149;
              v145 = v1732;
              *v146 = 8;
              *v145 = v1556;
              v144 = v1725;
            }
            else
            {
              v92 = RtlUIntAdd(4u, 8, (unsigned int *)&v1660);
              LODWORD(v1593) = v92;
              if ( v92 < 0 )
                goto LABEL_105;
              v142 = RtlUIntAdd(HIDWORD(v1725), v1660, (unsigned int *)&v1725 + 1);
              v144 = v1725;
              v92 = v142;
              LODWORD(v1593) = v142;
              if ( v142 < 0 )
              {
LABEL_186:
                v98 = v89;
                if ( v92 < 0 )
                  goto LABEL_109;
LABEL_187:
                if ( StringCchLengthW(L"Shell-WindowTabHost-Enabled", v143, &v1670) < 0 )
                {
                  v92 = -1073741762;
                  goto LABEL_107;
                }
                v92 = RtlULongLongAdd(v1670, 1LL, &v1670);
                LODWORD(v1593) = v92;
                if ( v92 >= 0 )
                {
                  if ( 2 * (_DWORD)v1670 )
                  {
                    if ( !lpMem )
                    {
                      LODWORD(v1593) = RtlUIntAdd(v149, 2 * (int)v1670, (unsigned int *)&v1601);
                      v92 = v1593;
                      if ( (v1593 & 0x80000000) == 0LL )
                      {
                        v150 = RtlUIntAdd(HIDWORD(v1725), v1601, (unsigned int *)&v1725 + 1);
                        v148 = v1725;
                        v92 = v150;
                        LODWORD(v1593) = v150;
                        if ( v150 >= 0 )
                        {
                          v148 = v1725 + 1;
                          LODWORD(v1593) = 0;
                          LODWORD(v1725) = v1725 + 1;
                          v92 = 0;
                        }
                      }
                      goto LABEL_214;
                    }
                    v151 = (int *)lpMem;
                    v1671 = (int *)lpMem;
                    if ( v148 )
                    {
                      do
                      {
                        LODWORD(v1593) = RtlUIntAdd(4u, *v151, &v1624);
                        v92 = v1593;
                        if ( (v1593 & 0x80000000) != 0LL )
                          goto LABEL_214;
                        LODWORD(v1593) = RtlULongLongAdd((unsigned __int64)v151, v1624, (unsigned __int64 *)&v1671);
                        v92 = v1593;
                        if ( (v1593 & 0x80000000) != 0LL )
                          goto LABEL_214;
                        v151 = v1671;
                      }
                      while ( v152 + 1 < v148 );
                    }
                    LODWORD(v1593) = RtlULongLongAdd((unsigned __int64)v151, 4LL, (unsigned __int64 *)&v1733);
                    v92 = v1593;
                    if ( (v1593 & 0x80000000) != 0LL )
                      goto LABEL_214;
                    if ( (char *)v151 + v153 + 4 <= (char *)lpMem + HIDWORD(v1725) )
                    {
                      v154 = v1733;
                      *v151 = v153;
                      memcpy_0(v154, L"Shell-WindowTabHost-Enabled", (unsigned int)v153);
                      v148 = v1725 + 1;
                      LODWORD(v1725) = v1725 + 1;
                      goto LABEL_214;
                    }
                    v92 = -1073741789;
                  }
                  else
                  {
                    v92 = -1073741811;
                  }
                  LODWORD(v1593) = v92;
                }
LABEL_214:
                v98 = v89;
                if ( v92 < 0 )
                  goto LABEL_109;
                if ( lpMem )
                {
                  v161 = (int *)lpMem;
                  v1672 = (int *)lpMem;
                  v1419 = 0;
                  if ( v148 )
                  {
                    do
                    {
                      v92 = RtlUIntAdd(4u, *v161, &v1603);
                      LODWORD(v1593) = v92;
                      if ( v92 < 0 )
                        goto LABEL_105;
                      v92 = RtlULongLongAdd((unsigned __int64)v161, v1603, (unsigned __int64 *)&v1672);
                      LODWORD(v1593) = v92;
                      if ( v92 < 0 )
                        goto LABEL_105;
                      v161 = v1672;
                      ++v1419;
                    }
                    while ( v1419 < v162 );
                    v1321 = v93;
                    v1366 = v91;
                  }
                  v163 = RtlULongLongAdd((unsigned __int64)v161, 4LL, (unsigned __int64 *)&v1734);
                  v157 = 0LL;
                  LODWORD(v1593) = v163;
                  v92 = v163;
                  if ( v163 < 0 )
                    goto LABEL_218;
                  if ( v161 + 2 > (int *)((char *)lpMem + HIDWORD(v1725)) )
                    goto LABEL_149;
                  v160 = v1734;
                  *v161 = v156;
                  *v160 = v89;
                  v158 = v1725;
                }
                else
                {
                  LODWORD(v1593) = RtlUIntAdd(4u, 4, (unsigned int *)&v1602);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_109;
                  v155 = RtlUIntAdd(HIDWORD(v1725), v1602, (unsigned int *)&v1725 + 1);
                  v158 = v1725;
                  v92 = v155;
                  LODWORD(v1593) = v155;
                  if ( v155 < 0 )
                  {
LABEL_218:
                    v98 = v89;
                    if ( v92 < 0 )
                      goto LABEL_109;
                    goto LABEL_219;
                  }
                }
                LODWORD(v1725) = ++v158;
LABEL_219:
                if ( lpMem == v157 )
                {
                  LODWORD(v1593) = RtlUIntAdd(v156, v156, (unsigned int *)&v1604);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_108;
                  LODWORD(v1593) = RtlUIntAdd(HIDWORD(v1725), v1604, (unsigned int *)&v1725 + 1);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) == 0LL )
                  {
                    LODWORD(v1725) = v1725 + 1;
                    goto LABEL_241;
                  }
                  goto LABEL_240;
                }
                v164 = (int *)lpMem;
                v1673 = (int *)lpMem;
                v1420 = (unsigned int)v157;
                if ( v158 )
                {
                  do
                  {
                    v92 = RtlUIntAdd(4u, *v164, &v1605);
                    LODWORD(v1593) = v92;
                    if ( v92 < 0 )
                      goto LABEL_105;
                    v92 = RtlULongLongAdd((unsigned __int64)v164, v1605, (unsigned __int64 *)&v1673);
                    LODWORD(v1593) = v92;
                    if ( v92 < 0 )
                      goto LABEL_105;
                    v164 = v1673;
                    ++v1420;
                  }
                  while ( v1420 < v165 );
                  v1321 = v93;
                  v1366 = v91;
                  v156 = 4LL;
                }
                LODWORD(v1593) = RtlULongLongAdd((unsigned __int64)v164, v156, (unsigned __int64 *)&v1735);
                v92 = v1593;
                if ( (v1593 & 0x80000000) != 0LL )
                {
LABEL_240:
                  v98 = v89;
                  if ( v92 < 0 )
                    goto LABEL_109;
LABEL_241:
                  LODWORD(v1593) = RtlUIntAdd(v159, v159, &v1606);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_108;
                  v168 = v1606;
                  v1607 = v1606;
                  LODWORD(v1593) = RtlUIntAdd(v167, 8, (unsigned int *)&v1608);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_108;
                  LODWORD(v1593) = RtlUIntAdd(v168, v1608, &v1607);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_253;
                  LODWORD(v1593) = RtlUIntAdd(v169, v169, (unsigned int *)&v1609);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_108;
                  LODWORD(v1593) = RtlUIntAdd(v1607, v1609, &v1607);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_253;
                  LODWORD(v1593) = RtlUIntAdd(v171, v171, (unsigned int *)&v1610);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_108;
                  LODWORD(v1593) = RtlUIntAdd(v1607, v1610, &v1607);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_253;
                  LODWORD(v1593) = RtlUIntAdd(v172, v172, (unsigned int *)&v1617);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_108;
                  LODWORD(v1593) = RtlUIntAdd(v1607, v1617, &v1607);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_253;
                  LODWORD(v1593) = RtlUIntAdd(v173, v173, (unsigned int *)&v1611);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                    goto LABEL_108;
                  LODWORD(v1593) = RtlUIntAdd(v1607, v1611, &v1607);
                  v92 = v1593;
                  if ( (v1593 & 0x80000000) != 0LL )
                  {
LABEL_253:
                    v98 = v89;
                    if ( v92 < 0 )
                      goto LABEL_109;
                    v174 = v1593;
                  }
                  else
                  {
                    v174 = v1607;
                  }
                  v1421 = v174;
                  v175 = v170;
                  v1572 = (SIZE_T)v170;
                  v1596 = v170;
                  v1592 = (SIZE_T)v170;
                  Sizeb = (int)v170;
                  v1594 = v170;
                  v1511 = v170;
                  v1518 = (WCHAR *)v170;
                  v1460 = (void *)__rdtsc();
                  v1612 = 8;
                  v178 = RtlUIntAdd(8u, SHIDWORD(v1725), &v1612);
                  if ( v178 >= 0 )
                  {
                    v179 = (v1612 + 7) & 0xFFFFFFF8;
                    if ( v179 < v1612 )
                    {
                      v92 = -805306219;
LABEL_259:
                      v98 = v1357;
                      LODWORD(v1593) = v92;
                      goto LABEL_109;
                    }
                    v1612 = (v1612 + 7) & 0xFFFFFFF8;
                    v1535 = v174;
                    v180 = v179;
                    v181 = GetProcessHeap();
                    v182 = (WCHAR *)HeapAlloc(v181, 8u, v180);
                    v1384 = v182;
                    if ( !v182 )
                    {
                      v98 = v1357;
                      v92 = -805306345;
                      LODWORD(v1593) = -805306345;
                      goto LABEL_109;
                    }
                    *(_DWORD *)v182 = v1725;
                    v1674[0] = v182;
                    v174 = v1535;
                    v178 = RtlULongLongAdd((unsigned __int64)v182, 4LL, (unsigned __int64 *)v1674);
                    v1474 = v183;
                    v1421 = v1535;
                    v1321 = v93;
                    v1366 = v91;
                    if ( v178 < 0 )
                      goto LABEL_265;
                    v184 = v1674[0];
                    *(_DWORD *)v1674[0] = HIDWORD(v1725);
                    v185 = RtlULongLongAdd((unsigned __int64)v184, 4LL, (unsigned __int64 *)v1674);
                    v1474 = v186;
                    v178 = v185;
                    v1421 = v1535;
                    v1321 = v93;
                    v1366 = v91;
                    if ( v185 < 0 )
                    {
LABEL_265:
                      v187 = GetProcessHeap();
                      HeapFree(v187, 0, v1474);
                      v176 = (unsigned int)v175;
                    }
                    else
                    {
                      *(_QWORD *)&v186[v1612 - 8] = v1460;
                      memcpy_0(v1674[0], lpMem, HIDWORD(v1725));
                      v175 = (unsigned __int8 *)v1384;
                      v176 = v1612;
                      v1572 = (SIZE_T)v1384;
                      v1421 = v1535;
                      v1321 = v93;
                      v1366 = v91;
                    }
                    v177 = 0LL;
                  }
                  v92 = v178 | 0x10000000;
                  LODWORD(v1593) = v92;
                  if ( v92 < 0 )
                    goto LABEL_380;
                  v1475 = v177;
                  if ( !v175 )
                  {
                    v92 = -805306355;
                    goto LABEL_259;
                  }
                  v188 = v176;
                  v1385 = (LPCWSTR)v176;
                  if ( !v176 || (v1447 = v176 + 8, (Src = MemoryAlloc(v176 + 8LL)) == 0LL) )
                  {
                    v92 = -805306367;
                    LODWORD(v1593) = -805306367;
                    goto LABEL_381;
                  }
                  v189 = 0;
                  v190 = 0LL;
                  v1319 = 0;
                  if ( v188 )
                  {
                    do
                      v189 ^= v175[v190++];
                    while ( v190 < v188 );
                    v1319 = v189;
                  }
                  v191 = Src;
                  v1793 = 0xC81ECB17B1B54A58uLL;
                  LODWORD(v1593) = 0;
                  v192 = -1;
                  v1536 = 0;
                  v193 = v175;
                  v194 = 0;
                  v195 = v188 & 7;
                  if ( (v188 & 7) != 0 )
                  {
                    v196 = 0;
                    v197 = 0;
                    v1545 = 0;
                    v198 = 56;
                    do
                    {
                      v199 = *v193++;
                      if ( v196 >= 4 )
                        v197 |= v199 << v198;
                      else
                        v194 |= v199 << (v198 - 32);
                      v198 -= 8;
                      v196 = v1545 + 1;
                      v1536 = v197;
                      LODWORD(v1593) = v194;
                      v1545 = v196;
                    }
                    while ( (int)v196 < (int)v195 );
                    v194 ^= 0xB17A307A;
                    v1421 = v174;
                    v200 = v197 ^ 0x42F6B18D;
                    v1321 = v93;
                    v1366 = v91;
                    v1546 = 0;
                    v201 = Src;
                    v202 = v194;
                    v203 = v200;
                    v1572 = (SIZE_T)v175;
                    do
                    {
                      v1461 = v201 + 1;
                      if ( v1546 >= 4 )
                      {
                        v203 = __ROL4__(v203, 8);
                        v204 = v203;
                      }
                      else
                      {
                        v202 = __ROL4__(v202, 8);
                        v204 = v202;
                      }
                      ++v1546;
                      *v201++ = v204;
                    }
                    while ( v1546 < (int)v195 );
                    v188 = (unsigned __int64)v1385;
                    v191 = v1461;
                    v174 = v1421;
                    v189 = v1319;
                    if ( v195 <= 4 )
                    {
                      v192 = 0;
                      if ( v195 >= 4 )
                        goto LABEL_290;
                      v194 = v194 >> (8 * (4 - v195)) << (8 * (4 - v195));
                    }
                    else
                    {
                      v192 = v200 >> (8 * (8 - v195)) << (8 * (8 - v195));
                    }
                    v191 = v1461;
                  }
LABEL_290:
                  v205 = v188 >> 3;
                  if ( v188 >> 3 )
                  {
                    v206 = v191 + 7;
                    v207 = WORD2(v1793);
                    v208 = v193 + 2;
                    v209 = v1536;
                    v210 = v1593;
                    v1547 = WORD1(v1793);
                    v1462 = HIWORD(v1793);
                    do
                    {
                      v211 = *(v208 - 1) | (*(v208 - 2) << 8);
                      v212 = v208[2] << 8;
                      v213 = *v208;
                      v208 += 8;
                      v214 = *(v208 - 7) | ((v213 | (v211 << 8)) << 8);
                      v215 = *(v208 - 3) | ((*(v208 - 4) | ((*(v208 - 5) | v212) << 8)) << 8);
                      v216 = v215 ^ v192;
                      v217 = v214 ^ HIDWORD(v1793) ^ (v216 - 19032) ^ v194;
                      v218 = (__ROR4__(v217, 7) + WORD1(v1793) * __ROR4__(HIDWORD(v1793) ^ v217, 15)) ^ v216;
                      v219 = (v207 * __ROR4__(v218 - 1313519016, 9) - __ROR4__(v218, 10)) ^ v217;
                      v220 = (__ROL4__(v219, 5) + HIWORD(v1793) * __ROL4__(v207 ^ v219, 4)) ^ v218;
                      v221 = (HIDWORD(v1793) - (v220 ^ 0xB1B54A58)) ^ v219;
                      v222 = (WORD1(v1793) * (v221 - 19032) - (v221 >> 6)) ^ v220;
                      v223 = (19032 * (v207 ^ __ROR4__(v222, 15))) ^ v221;
                      v224 = (v207 * (HIWORD(v1793) + __ROR4__(~v223, 3))) ^ v222;
                      v225 = (v224 - HIDWORD(v1793) - 19032) ^ v223;
                      v226 = (v1547 * (v1462 ^ v225)) ^ __ROR4__(v225, 10) ^ v224;
                      v227 = __ROR4__(v226, 3) ^ (v207 * __ROL4__(v226 ^ 0x4A58, 6)) ^ v225;
                      v228 = (19032 * (__ROR4__(v227, 15) - HIWORD(v1793))) ^ v226;
                      v229 = (v228 >> 15) ^ (19032 * __ROL4__(v228 - v207, 3)) ^ (v228 >> 1) ^ (19032
                                                                                              * (HIWORD(v1793) ^ v228)) ^ v227;
                      v230 = (WORD1(v1793) * (v229 - v207) - (v229 >> 13)) ^ v228;
                      v231 = __ROR4__(v230, 11) ^ (v207 * __ROR4__(-1313519016 - v230, 9)) ^ v229;
                      v232 = (v231 - HIWORD(v1793) + 1313519016) ^ v230;
                      v233 = (19032 * (v232 ^ WORD1(v1793)) - __ROR4__(v232, 7)) ^ v231;
                      v234 = (WORD1(v1793) * __ROL4__(v233 ^ HIWORD(v1793), 4) - __ROR4__(v233, 16)) ^ v232;
                      v235 = (__ROR4__(v234, 4) + v207 * __ROR4__(-1313519016 - v234, 10)) ^ v233;
                      v236 = __ROR4__(v235, 9) ^ (HIWORD(v1793) * __ROR4__(v235 + 1313519016, 4)) ^ v234;
                      v237 = (19032 * __ROL4__(v236 ^ HIDWORD(v1793), 8) - __ROL4__(v236, 2)) ^ v235;
                      v238 = (WORD1(v1793) * __ROR4__(HIDWORD(v1793) - v237, 11) - __ROR4__(v237, 12)) ^ v236;
                      v239 = (v238 >> 8) ^ (v207 * (v238 ^ WORD1(v1793))) ^ v237;
                      v240 = v239 ^ HIDWORD(v1793) ^ v238 ^ 0xB1B54A58;
                      v241 = v210 ^ v239;
                      *(v206 - 4) = v241;
                      v242 = v209 ^ v240;
                      *v206 = v242;
                      v210 = v214;
                      v243 = __ROR4__(v241, 8);
                      v209 = v215;
                      *(v206 - 5) = v243;
                      v206 += 8;
                      v244 = __ROR4__(v242, 8);
                      *(v206 - 9) = v244;
                      v245 = __ROR4__(v243, 8);
                      *(v206 - 14) = v245;
                      v246 = __ROR4__(v244, 8);
                      *(v206 - 10) = v246;
                      v247 = __ROR4__(v245, 8);
                      v248 = __ROR4__(v246, 8);
                      *(v206 - 15) = v247;
                      *(v206 - 11) = v248;
                      v192 = __ROR4__(v248, 8);
                      v194 = __ROR4__(v247, 8);
                      --v205;
                    }
                    while ( v205 );
                    v189 = v1319;
                    v91 = v1366;
                    v93 = v1321;
                    v175 = (unsigned __int8 *)v1572;
                    v174 = v1421;
                    v188 = (unsigned __int64)v1385;
                  }
                  *(_QWORD *)&Src[v188] = v189;
                  v1674[4] = (void *)160;
                  v249 = GetProcessHeap();
                  v1573 = HeapAlloc(v249, 8u, 0x30uLL);
                  if ( !v1573 )
                  {
                    v250 = -1073741801;
LABEL_296:
                    v251 = (int *)v1596;
                    goto LABEL_297;
                  }
                  *(_DWORD *)v1573 = v1447;
                  v1421 = v174;
                  v263 = GetProcessHeap();
                  v264 = HeapAlloc(v263, 8u, v1447);
                  if ( v264 )
                  {
                    *((_QWORD *)v1573 + 1) = v264;
                    memcpy_0(v264, Src, v1447);
                    *((_DWORD *)v1573 + 4) = 160;
                    v265 = GetProcessHeap();
                    v266 = HeapAlloc(v265, 8u, 0xA0uLL);
                    if ( !v266 )
                    {
LABEL_316:
                      v250 = -1073741801;
                      v269 = v1573;
                      v1386 = (WCHAR *)*((_QWORD *)v1573 + 1);
                      if ( v1386 )
                      {
                        v270 = GetProcessHeap();
                        HeapFree(v270, 0, v1386);
                        v269 = v1573;
                        *((_QWORD *)v1573 + 1) = 0LL;
                      }
                      v1387 = (WCHAR *)*((_QWORD *)v269 + 3);
                      if ( v1387 )
                      {
                        v271 = GetProcessHeap();
                        HeapFree(v271, 0, v1387);
                        v269 = v1573;
                        *((_QWORD *)v1573 + 3) = 0LL;
                      }
                      v1388 = (WCHAR *)*((_QWORD *)v269 + 5);
                      if ( v1388 )
                      {
                        v272 = GetProcessHeap();
                        HeapFree(v272, 0, v1388);
                        *((_QWORD *)v1573 + 5) = 0LL;
                      }
                      v273 = GetProcessHeap();
                      HeapFree(v273, 0, v1573);
                      goto LABEL_296;
                    }
                    *((_QWORD *)v1573 + 3) = v266;
                    v1421 = v174;
                    *v266 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                    v266[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                    v266[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                    v266[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                    v266[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                    v266[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                    v266[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                    v266[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                    v266[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                    v266[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                    *((_DWORD *)v1573 + 8) = 8;
                    v267 = GetProcessHeap();
                    v268 = HeapAlloc(v267, 8u, 8uLL);
                    if ( v268 )
                    {
                      *((_QWORD *)v1573 + 5) = v268;
                      v250 = 0;
                      **((_QWORD **)v1573 + 5) = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                      v251 = (int *)v1573;
                      v1475 = 0LL;
LABEL_297:
                      v1596 = v251;
                      v252 = GetProcessHeap();
                      HeapFree(v252, 0, Src);
                      v253 = v1475;
                      if ( v1475 )
                      {
                        Srca = (void *)v1475[1];
                        if ( Srca )
                        {
                          v254 = GetProcessHeap();
                          HeapFree(v254, 0, Srca);
                          v253 = v1475;
                          v1475[1] = 0LL;
                        }
                        Srcb = (void *)v253[3];
                        if ( Srcb )
                        {
                          v255 = GetProcessHeap();
                          HeapFree(v255, 0, Srcb);
                          v253 = v1475;
                          v1475[3] = 0LL;
                        }
                        Srcc = (void *)v253[5];
                        if ( Srcc )
                        {
                          v256 = GetProcessHeap();
                          HeapFree(v256, 0, Srcc);
                          v1475[5] = 0LL;
                        }
                        v257 = GetProcessHeap();
                        HeapFree(v257, 0, v1475);
                        v1596 = v251;
                      }
                      v92 = v250 | 0x10000000;
                      LODWORD(v1593) = v92;
                      if ( v92 < 0 )
                        goto LABEL_380;
                      v258 = *v251;
                      v1322 = v251;
                      LODWORD(v1613) = 4;
                      v261 = RtlUIntAdd(4u, v258, (unsigned int *)&v1613);
                      if ( v261 >= 0 )
                      {
                        v261 = RtlUIntAdd(v1613, v260, (unsigned int *)&v1613);
                        if ( v261 >= 0 )
                        {
                          v261 = RtlUIntAdd(v1613, v251[4], (unsigned int *)&v1613);
                          if ( v261 >= 0 )
                          {
                            v261 = RtlUIntAdd(v1613, v262, (unsigned int *)&v1613);
                            if ( v261 >= 0 )
                            {
                              v261 = RtlUIntAdd(v1613, v251[8], (unsigned int *)&v1613);
                              if ( v261 >= 0 )
                              {
                                v1548 = v1613;
                                v274 = v1613;
                                v275 = GetProcessHeap();
                                v276 = HeapAlloc(v275, 8u, v274);
                                v1367 = v276;
                                if ( !v276 )
                                  goto LABEL_368;
                                v1675 = v276;
                                *v276 = *v1322;
                                v261 = RtlULongLongAdd((unsigned __int64)v276, 4LL, (unsigned __int64 *)&v1675);
                                v1574 = v278;
                                v251 = (int *)v277;
                                v1596 = v277;
                                if ( v261 < 0 )
                                  goto LABEL_333;
                                memcpy_0(v1675, v277[1], *(unsigned int *)v277);
                                v261 = RtlULongLongAdd(
                                         (unsigned __int64)v1675,
                                         (unsigned int)*v251,
                                         (unsigned __int64 *)&v1675);
                                v1574 = v1367;
                                v1596 = v251;
                                if ( v261 < 0 )
                                  goto LABEL_333;
                                v279 = v1675;
                                *(_DWORD *)v1675 = v251[4];
                                v261 = RtlULongLongAdd((unsigned __int64)v279, 4LL, (unsigned __int64 *)&v1675);
                                v1574 = v280;
                                v1596 = v251;
                                if ( v261 < 0 )
                                  goto LABEL_333;
                                memcpy_0(v1675, *((const void **)v251 + 3), (unsigned int)v251[4]);
                                v261 = RtlULongLongAdd(
                                         (unsigned __int64)v1675,
                                         (unsigned int)v251[4],
                                         (unsigned __int64 *)&v1675);
                                v1574 = v1367;
                                v1596 = v251;
                                if ( v261 < 0 )
                                  goto LABEL_333;
                                v281 = v1675;
                                *(_DWORD *)v1675 = v251[8];
                                v261 = RtlULongLongAdd((unsigned __int64)v281, 4LL, (unsigned __int64 *)&v1675);
                                v1574 = v282;
                                v1596 = v251;
                                if ( v261 < 0
                                  || (memcpy_0(v1675, *((const void **)v251 + 5), (unsigned int)v251[8]),
                                      v261 = RtlULongLongAdd(
                                               (unsigned __int64)v1675,
                                               (unsigned int)v251[8],
                                               (unsigned __int64 *)&v1675),
                                      v259 = v1421,
                                      v1574 = v1367,
                                      v1596 = v251,
                                      v261 < 0) )
                                {
LABEL_333:
                                  v283 = GetProcessHeap();
                                  HeapFree(v283, 0, v1574);
                                  v259 = v1421;
                                }
                                else
                                {
                                  v1592 = (SIZE_T)v1367;
                                  Sizeb = v1548;
                                  v1596 = v251;
                                }
                              }
                            }
                          }
                        }
                      }
                      v92 = v261 | 0x10000000;
                      LODWORD(v1593) = v92;
                      if ( v92 < 0 )
                        goto LABEL_380;
                      v1614 = 8;
                      v284 = RtlUIntAdd(8u, v259, &v1614);
                      v92 = v284 | 0x10000000;
                      LODWORD(v1593) = v284 | 0x10000000;
                      if ( v284 < 0 )
                        goto LABEL_380;
                      v287 = (v1614 + 7) & 0xFFFFFFF8;
                      if ( v287 < v1614 )
                      {
                        v92 = -1073741675;
LABEL_487:
                        LODWORD(v1593) = v92;
                        goto LABEL_380;
                      }
                      v1615 = (v1614 + 7) & 0xFFFFFFF8;
                      v1592 = v286;
                      v1596 = v251;
                      LODWORD(v1593) = RtlUIntAdd(v287, v285, &v1615);
                      v92 = v1593;
                      if ( (v1593 & 0x80000000) != 0LL )
                        goto LABEL_380;
                      v1596 = v251;
                      v1592 = v288;
                      if ( !lpMem )
                        goto LABEL_359;
                      v1596 = v251;
                      v1592 = v288;
                      if ( (unsigned int)v1725 <= 1 )
                        goto LABEL_359;
                      v289 = lpMem;
                      v1676 = lpMem;
                      do
                      {
                        LODWORD(v1593) = RtlULongLongAdd((unsigned __int64)v289, 4LL, (unsigned __int64 *)&v1676);
                        v92 = v1593;
                        if ( (v1593 & 0x80000000) != 0LL )
                          goto LABEL_380;
                        LODWORD(v1593) = RtlULongLongAdd((unsigned __int64)v1676, v290, (unsigned __int64 *)&v1676);
                        v92 = v1593;
                        if ( (v1593 & 0x80000000) != 0LL )
                          goto LABEL_380;
                        v289 = v1676;
                      }
                      while ( v291 == -1 );
                      v1463 = *v1676;
                      LODWORD(v1593) = RtlULongLongAdd((unsigned __int64)v1676, 4LL, (unsigned __int64 *)&v1676);
                      v92 = v1593;
                      if ( (v1593 & 0x80000000) != 0LL )
                        goto LABEL_380;
                      if ( !lpMem || (unsigned int)v1725 <= 2 )
                      {
LABEL_359:
                        v92 = -1073741811;
                        goto LABEL_487;
                      }
                      v292 = lpMem;
                      v1677 = lpMem;
                      do
                      {
                        LODWORD(v1593) = RtlULongLongAdd((unsigned __int64)v292, 4LL, (unsigned __int64 *)&v1677);
                        v92 = v1593;
                        if ( (v1593 & 0x80000000) != 0LL )
                          goto LABEL_380;
                        LODWORD(v1593) = RtlULongLongAdd((unsigned __int64)v1677, v293, (unsigned __int64 *)&v1677);
                        v92 = v1593;
                        if ( (v1593 & 0x80000000) != 0LL )
                          goto LABEL_380;
                        v292 = v1677;
                      }
                      while ( (unsigned int)(v294 + 1) < 2 );
                      LODWORD(v1593) = RtlULongLongAdd((unsigned __int64)v1677, 4LL, (unsigned __int64 *)&v1677);
                      v92 = v1593;
                      if ( (v1593 & 0x80000000) != 0LL )
                        goto LABEL_380;
                      v1616 = v295;
                      LODWORD(v1593) = RtlUIntAdd(v295, v1615, &v1616);
                      v92 = v1593;
                      if ( (v1593 & 0x80000000) != 0LL )
                        goto LABEL_360;
                      LODWORD(v1593) = RtlUIntAdd(v1616, v297, &v1616);
                      v92 = v1593;
                      if ( (v1593 & 0x80000000) != 0LL
                        || (LODWORD(v1593) = RtlUIntAdd(v1616, v1463, &v1616), v92 = v1593, (v1593 & 0x80000000) != 0LL)
                        || (LODWORD(v1593) = RtlUIntAdd(v1616, v298, &v1616), v92 = v1593, (v1593 & 0x80000000) != 0LL)
                        || (LODWORD(v1593) = RtlUIntAdd(v1616, v299, &v1616), v92 = v1593, (v1593 & 0x80000000) != 0LL) )
                      {
LABEL_360:
                        if ( v92 < 0 )
                          goto LABEL_380;
                        v300 = HIDWORD(dwBytes_4);
                      }
                      else
                      {
                        v300 = v1616;
                      }
                      v1563 = v300;
                      if ( v300 > 0x400000 )
                      {
                        v92 = -2147418113;
                        goto LABEL_487;
                      }
                      Srcd = v296;
                      v301 = GetProcessHeap();
                      v302 = HeapAlloc(v301, 8u, v300);
                      if ( v302 )
                      {
                        v1594 = v302;
                        if ( !Srcd )
                        {
                          v92 = -2147024809;
                          v1594 = v302;
                          v1596 = v251;
LABEL_412:
                          LODWORD(v1593) = v92;
                          v1592 = (SIZE_T)Srcd;
                          goto LABEL_380;
                        }
                        v1742 = Sizeb;
                        v1741[0] = Srcd;
                        v1741[1] = v302;
                        v1743 = v300;
                        v1744 = 0;
                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                          && (v303 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                        {
                          v304 = ((__int64 (__fastcall *)(__int64, _QWORD *))v303)(134LL, v1741);
                          v305 = v300;
                          v92 = v304 | 0x10000000;
                          LODWORD(v1593) = v304 | 0x10000000;
                          if ( v304 >= 0 )
                          {
                            v305 = v1743;
                            v306 = v175;
                            v307 = v91;
                            v308 = v93;
                            v309 = v251;
                            goto LABEL_408;
                          }
                        }
                        else
                        {
                          v310 = GetLastError();
                          v92 = v310;
                          if ( v310 > 0 )
                            v92 = (unsigned __int16)v310 | 0x80070000;
                          v305 = v1563;
                          if ( v92 >= 0 )
                            v92 = -2147467259;
                          LODWORD(v1593) = v92;
                        }
                        v1592 = (SIZE_T)Srcd;
                        if ( v92 == -805306333 )
                        {
                          v92 = -2147024774;
                          LODWORD(v1593) = -2147024774;
                          v1596 = v251;
                          goto LABEL_380;
                        }
                        v309 = v251;
                        v308 = v93;
                        v307 = v91;
                        v306 = v175;
                        v1596 = v251;
                        if ( v92 < 0 )
                          goto LABEL_380;
LABEL_408:
                        v1476 = 0LL;
                        v91 = v307;
                        v175 = v306;
                        if ( v305 < 4 )
                        {
                          v92 = -805306306;
LABEL_411:
                          v1596 = v309;
                          goto LABEL_412;
                        }
                        v93 = v308;
                        v331 = *(unsigned int *)v1594;
                        v1464 = *(_DWORD *)v1594;
                        v1389 = (LPCWSTR)((char *)v1594 + 4);
                        if ( (char *)v1594 + 4 < v1594 )
                        {
                          v92 = -805306219;
                          goto LABEL_411;
                        }
                        v1592 = (SIZE_T)Srcd;
                        v1596 = v251;
                        if ( v305 - 4 < (unsigned int)v331 )
                        {
                          v92 = -805306306;
LABEL_417:
                          v1596 = v251;
LABEL_420:
                          LODWORD(v1593) = v92;
                          v1592 = (SIZE_T)Srcd;
                          goto LABEL_380;
                        }
                        v1448 = v331;
                        if ( (LPCWSTR)((char *)v1389 + v331) < v1389 || (v332 = v331 + 4, v332 < 4) )
                        {
                          v92 = -805306219;
                          goto LABEL_417;
                        }
                        if ( v305 - v332 < 4 )
                          goto LABEL_438;
                        v1592 = (SIZE_T)Srcd;
                        v1596 = v251;
                        v333 = *(unsigned int *)((char *)v1389 + v1448);
                        v334 = (unsigned __int64)v1389 + v1448 + 4;
                        v1549 = *(_DWORD *)((char *)v1389 + v1448);
                        v1422 = (unsigned int *)v334;
                        if ( v334 >= (unsigned __int64)v1389 + v1448 )
                        {
                          v175 = v306;
                          v335 = v251;
                          v336 = v332 + 4;
                          if ( v332 + 4 < v332 )
                            goto LABEL_418;
                          if ( v305 - v336 < (unsigned int)v333 )
                            goto LABEL_438;
                          v337 = (unsigned int *)(v333 + v334);
                          v1593 = *(unsigned int *)((char *)v1389 + v1448);
                          v1592 = (SIZE_T)Srcd;
                          v1596 = v251;
                          if ( v337 >= v1422 )
                          {
                            v338 = v336 + v333;
                            v335 = v251;
                            if ( v336 + (unsigned int)v333 >= v336 )
                            {
                              if ( v305 - v338 >= 4 )
                              {
                                v339 = *v337;
                                v1537 = *v337;
                                v1591 = v337 + 1;
                                v1596 = v251;
                                if ( v337 + 1 < v337 )
                                {
                                  v92 = -805306219;
                                  goto LABEL_420;
                                }
                                v1592 = (SIZE_T)Srcd;
                                v1564 = v338 + 4;
                                if ( v338 + 4 < v338 )
                                {
                                  v1596 = v251;
                                  goto LABEL_548;
                                }
                                v1340 = v1594;
                                if ( v305 - v1564 >= v339 )
                                {
                                  v1596 = v251;
                                  v1565 = v1564 + v339;
                                  if ( v1565 >= v338 + 4 )
                                  {
                                    v340 = v1594;
                                    v1592 = (SIZE_T)Srcd;
                                    v1575 = (SIZE_T)v175;
                                    v1368 = v91;
                                    v1323 = v93;
                                    if ( v305 != v1565 )
                                    {
LABEL_437:
                                      v92 = -805306306;
                                      v1594 = v340;
                                      LODWORD(v1593) = -805306306;
                                      v1596 = v251;
                                      v1592 = (SIZE_T)Srcd;
                                      goto LABEL_380;
                                    }
                                    if ( v339 + v1464 + v1549 + 12LL != v305 )
                                    {
                                      v340 = v1594;
                                      goto LABEL_437;
                                    }
                                    v341 = GetProcessHeap();
                                    v342 = HeapAlloc(v341, 8u, 0x30uLL);
                                    v1566 = v342;
                                    if ( !v342 )
                                    {
                                      v92 = -805306345;
                                      v1594 = v1340;
                                      v1592 = (SIZE_T)Srcd;
                                      LODWORD(v1593) = -805306345;
                                      v1596 = v251;
                                      goto LABEL_380;
                                    }
                                    v343 = 0;
                                    if ( v1389 )
                                    {
                                      *(_DWORD *)v342 = v1464;
                                      v344 = GetProcessHeap();
                                      v345 = HeapAlloc(v344, 8u, v1448);
                                      if ( !v345 )
                                        goto LABEL_452;
                                      v1566[1] = v345;
                                      memcpy_0(v345, v1389, v1448);
                                      v342 = v1566;
                                      v346 = v1591;
                                    }
                                    else
                                    {
                                      v346 = v1591;
                                      *(_DWORD *)v342 = 0;
                                      v1591 = v346;
                                      v342[1] = 0LL;
                                    }
                                    v1575 = (SIZE_T)v175;
                                    v1368 = v91;
                                    v1323 = v93;
                                    v1596 = v251;
                                    v1566 = v342;
                                    if ( v1422 )
                                    {
                                      *((_DWORD *)v342 + 4) = v1549;
                                      v347 = GetProcessHeap();
                                      v348 = HeapAlloc(v347, 8u, v1593);
                                      if ( !v348 )
                                        goto LABEL_452;
                                      v1566[3] = v348;
                                      v343 = 0;
                                      memcpy_0(v348, v1422, v1593);
                                      v342 = v1566;
                                      v346 = v1591;
                                      v349 = v1594;
                                      v350 = v1592;
                                      v1596 = v251;
                                      v1323 = v93;
                                      v1368 = v91;
                                      v1575 = (SIZE_T)v175;
                                    }
                                    else
                                    {
                                      v350 = v1592;
                                      v349 = v1594;
                                      *((_DWORD *)v342 + 4) = 0;
                                      v342[3] = 0LL;
                                    }
                                    if ( !v346 )
                                    {
                                      *((_DWORD *)v342 + 8) = 0;
                                      v342[5] = 0LL;
                                      goto LABEL_460;
                                    }
                                    *((_DWORD *)v342 + 8) = v1537;
                                    v351 = GetProcessHeap();
                                    v352 = HeapAlloc(v351, 8u, v1537);
                                    if ( v352 )
                                    {
                                      v1566[5] = v352;
                                      v343 = 0;
                                      memcpy_0(v352, v1591, v1537);
                                      v349 = v1594;
                                      v350 = v1592;
                                      v342 = v1566;
                                      v1596 = v251;
                                      v1323 = v93;
                                      v1368 = v91;
                                      v1575 = (SIZE_T)v175;
LABEL_460:
                                      v1476 = v342;
                                      goto LABEL_461;
                                    }
LABEL_452:
                                    v343 = -1073741801;
                                    v353 = v1566;
                                    v1341 = (void *)v1566[1];
                                    if ( v1341 )
                                    {
                                      v354 = GetProcessHeap();
                                      HeapFree(v354, 0, v1341);
                                      v353 = v1566;
                                      v1566[1] = 0LL;
                                    }
                                    v1342 = (void *)v353[3];
                                    if ( v1342 )
                                    {
                                      v355 = GetProcessHeap();
                                      HeapFree(v355, 0, v1342);
                                      v353 = v1566;
                                      v1566[3] = 0LL;
                                    }
                                    v1343 = (void *)v353[5];
                                    if ( v1343 )
                                    {
                                      v356 = GetProcessHeap();
                                      HeapFree(v356, 0, v1343);
                                      v1566[5] = 0LL;
                                    }
                                    v357 = GetProcessHeap();
                                    HeapFree(v357, 0, v1566);
                                    v350 = v1592;
                                    v349 = v1594;
                                    v342 = 0LL;
LABEL_461:
                                    v1344 = v350;
                                    Srce = v349;
                                    v358 = 0LL;
                                    v1465 = v343;
                                    if ( v343 < 0 )
                                    {
                                      v1511 = 0LL;
                                      v1594 = v349;
                                      v1596 = v251;
                                      v1323 = v93;
                                      v1368 = v91;
                                      v1575 = (SIZE_T)v175;
                                      v1592 = v350;
                                      if ( v342 )
                                      {
                                        v359 = (void *)v1476[1];
                                        if ( v359 )
                                        {
                                          v360 = GetProcessHeap();
                                          HeapFree(v360, 0, v359);
                                          v1476[1] = 0LL;
                                        }
                                        v361 = (void *)v1476[3];
                                        if ( v361 )
                                        {
                                          v362 = GetProcessHeap();
                                          HeapFree(v362, 0, v361);
                                          v1476[3] = 0LL;
                                        }
                                        v363 = (void *)v1476[5];
                                        if ( v363 )
                                        {
                                          v364 = GetProcessHeap();
                                          HeapFree(v364, 0, v363);
                                          v1476[5] = 0LL;
                                        }
                                        v365 = GetProcessHeap();
                                        HeapFree(v365, 0, v1476);
                                        v358 = 0LL;
                                        v343 = v1465;
                                        v1594 = Srce;
                                        v1511 = 0LL;
                                        v1592 = v1344;
                                        v1596 = v251;
                                        v1323 = v93;
                                        v1368 = v91;
                                        v1575 = (SIZE_T)v175;
                                      }
                                    }
                                    else
                                    {
                                      v358 = (unsigned int *)v342;
                                      v1511 = (unsigned __int8 *)v342;
                                    }
                                    v92 = v343 | 0x10000000;
                                    LODWORD(v1593) = v92;
                                    if ( v92 >= 0 )
                                    {
                                      if ( !v358 || (v1345 = (char *)*((_QWORD *)v358 + 1)) == 0LL || !*v358 )
                                      {
                                        v92 = -805306355;
                                        goto LABEL_487;
                                      }
                                      v366 = *v358 - 8LL;
                                      v1490 = v366;
                                      v367 = (WCHAR *)MemoryAlloc(v366);
                                      v1528 = v367;
                                      if ( !v367 )
                                      {
LABEL_511:
                                        v1518 = 0LL;
                                        v92 = -805306367;
                                        goto LABEL_487;
                                      }
                                      v368 = v1345;
                                      v369 = 0;
                                      v370 = v1511;
                                      v371 = v367;
                                      v372 = v366 & 7;
                                      v1796 = 0x7F1137FAB69605ELL;
                                      v1591 = v1345;
                                      lpModuleName = v367;
                                      if ( (v366 & 7) != 0 )
                                      {
                                        v373 = 0;
                                        v374 = 0;
                                        v1466 = 0;
                                        v1538 = 0;
                                        if ( v372 )
                                        {
                                          v375 = 56;
                                          v376 = 0;
                                          v377 = (unsigned __int8 *)v1591;
                                          do
                                          {
                                            v378 = *v377++;
                                            if ( v373 >= 4 )
                                              v1466 |= v378 << v375;
                                            else
                                              v376 |= v378 << (v375 - 32);
                                            v375 -= 8;
                                            v373 = v1538 + 1;
                                            v1538 = v373;
                                          }
                                          while ( (int)v373 < (int)v372 );
                                          v380 = v376;
                                          v1550 = v376;
                                          v367 = (WCHAR *)v1528;
                                          v369 = 0;
                                          v1591 = v377;
                                          v381 = v1466 ^ 0x699A899C;
                                          v382 = v380 ^ 0x92F65A5;
                                          v1596 = v251;
                                          v383 = 0;
                                          v1539 = v380 ^ 0x92F65A5;
                                          v384 = (WCHAR *)v1528;
                                          v1323 = v93;
                                          v1368 = v91;
                                          v1575 = (SIZE_T)v175;
                                          do
                                          {
                                            lpModuleName = (WCHAR *)((char *)v384 + 1);
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
                                            *(_BYTE *)v384 = v385;
                                            ++v383;
                                            v384 = (WCHAR *)((char *)v384 + 1);
                                          }
                                          while ( v383 < (int)v372 );
                                          v371 = lpModuleName;
                                          v386 = v1539;
                                          v370 = v1511;
                                          if ( v372 > 4 )
                                          {
                                            v374 = (v1466 ^ 0x699A899Cu) >> (8 * (8 - v372)) << (8 * (8 - v372));
                                            v371 = lpModuleName;
LABEL_497:
                                            v368 = (char *)v1591;
                                            goto LABEL_498;
                                          }
                                          v374 = 0;
                                          if ( v372 >= 4 )
                                            goto LABEL_497;
                                          v368 = (char *)v1591;
                                        }
                                        else
                                        {
                                          v386 = 154101157;
                                          v1550 = 0;
                                          v1466 = 0;
                                        }
                                        v386 = v386 >> (8 * (4 - v372)) << (8 * (4 - v372));
                                        v371 = lpModuleName;
                                      }
                                      else
                                      {
                                        v1466 = -1;
                                        v374 = 0;
                                        v1550 = 0;
                                        v386 = 0;
                                      }
LABEL_498:
                                      v1591 = (void *)(v1490 >> 3);
                                      if ( v1490 >> 3 )
                                      {
                                        v387 = HIDWORD(v1796);
                                        v388 = (char *)v371 + 7;
                                        v389 = v1550;
                                        v390 = (unsigned __int8 *)(v368 + 2);
                                        v391 = v1466;
                                        v392 = (char *)v1591;
                                        v393 = WORD2(v1796);
                                        v1567 = WORD1(v1796);
                                        do
                                        {
                                          v394 = *(v390 - 1) | (*(v390 - 2) << 8);
                                          v395 = v390[2] << 8;
                                          v396 = *v390;
                                          v390 += 8;
                                          v397 = *(v390 - 7) | ((v396 | (v394 << 8)) << 8);
                                          v398 = v397 ^ v386;
                                          v399 = *(v390 - 3) | ((*(v390 - 4) | ((*(v390 - 5) | v395) << 8)) << 8);
                                          v400 = v398 ^ v387 ^ 0xAB69605E ^ v399 ^ v374;
                                          v401 = (__ROL4__(v400, 10) + v393 * __ROL4__(v400 + 1419157410, 5)) ^ v398;
                                          v402 = (WORD1(v1796) * __ROR4__(v401 + v387, 9) - __ROL4__(v401, 2)) ^ v400;
                                          v403 = (24670 * (v402 - v393) - (v402 >> 13)) ^ v401;
                                          v404 = (HIWORD(v1796) * __ROL4__(v403 ^ WORD1(v1796), 6) - __ROL4__(v403, 2)) ^ v402;
                                          v405 = (v387 - (v404 ^ 0xAB69605E)) ^ v403;
                                          v406 = (v1567 * (v405 ^ v393)) ^ __ROR4__(v405, 6) ^ v404;
                                          v407 = (__ROL4__(v406, 2) + 24670 * __ROR4__(v406 + v387, 15)) ^ v405;
                                          v408 = (HIWORD(v1796) * __ROR4__(v407 + 1419157410, 14) - __ROL4__(v407, 8)) ^ v406;
                                          v409 = __ROR4__(v408, 10) ^ (v393 * __ROR4__(v408 ^ 0xAB69605E, 12)) ^ v407;
                                          v410 = (v409 >> 10) ^ (WORD1(v1796) * (v409 ^ HIWORD(v1796))) ^ v408;
                                          v411 = (HIWORD(v1796) * (__ROR4__(~v410, 5) + 24670)) ^ v409;
                                          v412 = (v411 - HIWORD(v1796)) ^ 0xAB69605E ^ v410;
                                          v413 = ((v412 >> 2) + v393 * __ROL4__(v412 ^ HIWORD(v1796), 2)) ^ v411;
                                          v414 = (__ROL4__(v413, 7) + WORD1(v1796) * __ROR4__(v413 - v387, 6)) ^ v412;
                                          v415 = (24670 * (v414 ^ v393) + __ROR4__(v414, 9)) ^ v413;
                                          v416 = (__ROL4__(v415, 7) + HIWORD(v1796) * __ROL4__(v415 ^ WORD1(v1796), 5)) ^ v414;
                                          v417 = v387 ^ v416 ^ 0xAB69605E ^ v415;
                                          v418 = (v393 * (__ROR4__(v417, 3) - WORD1(v1796))) ^ v416;
                                          v419 = (24670 * __ROR4__(v418 - v387, 1) - __ROR4__(v418, 6)) ^ v417;
                                          v420 = (__ROL4__(v419, 14) + HIWORD(v1796) * __ROL4__(v419 - 1419157410, 3)) ^ v418;
                                          v421 = (v393 * __ROL4__(v420 - 1419157410, 15) - __ROR4__(v420, 14)) ^ v419;
                                          v422 = (v421 >> 3) ^ (WORD1(v1796) * (v421 ^ 0x605E)) ^ v420;
                                          v423 = v391 ^ v422;
                                          v391 = v399;
                                          v424 = v389 ^ __ROL4__(v422, 2) ^ (24670 * __ROL4__(v387 ^ v422, 4));
                                          v389 = v397;
                                          v425 = v424 ^ v421;
                                          *(v388 - 4) = v425;
                                          *v388 = v423;
                                          v388 += 8;
                                          v426 = __ROR4__(v425, 8);
                                          *(v388 - 13) = v426;
                                          v427 = __ROR4__(v423, 8);
                                          *(v388 - 9) = v427;
                                          v428 = __ROR4__(v426, 8);
                                          *(v388 - 14) = v428;
                                          v429 = __ROR4__(v427, 8);
                                          *(v388 - 10) = v429;
                                          v430 = __ROR4__(v428, 8);
                                          v431 = __ROR4__(v429, 8);
                                          *(v388 - 15) = v430;
                                          *(v388 - 11) = v431;
                                          v374 = __ROR4__(v431, 8);
                                          v386 = __ROR4__(v430, 8);
                                          --v392;
                                        }
                                        while ( v392 );
                                        v369 = 0;
                                        v91 = v1368;
                                        v93 = v1323;
                                        v175 = (unsigned __int8 *)v1575;
                                        v370 = v1511;
                                        v367 = (WCHAR *)v1528;
                                      }
                                      for ( nn = 0LL; nn < v1490; ++nn )
                                        v369 ^= *((_BYTE *)v367 + nn);
                                      v433 = v370;
                                      v1390 = (WCHAR *)v1594;
                                      v1529 = (LPCWSTR)v1592;
                                      v1477 = v1596;
                                      v1511 = v370;
                                      if ( v369 != *(_QWORD *)&v1345[v1490] )
                                      {
                                        MemoryFree(v367);
                                        goto LABEL_511;
                                      }
                                      v1680 = v367;
                                      v1618 = 0;
                                      if ( (unsigned int)v1490 >= 4 )
                                      {
                                        v1467 = *(_DWORD *)v367;
                                        v434 = v1594;
                                        v379 = RtlULongLongAdd((unsigned __int64)v367, 4LL, (unsigned __int64 *)&v1680);
                                        v1592 = (SIZE_T)v1529;
                                        v1518 = v435;
                                        v1511 = v436;
                                        v1594 = v1390;
                                        v1596 = v1477;
                                        if ( v379 < 0 )
                                          goto LABEL_486;
                                        v379 = RtlUIntAdd(0, 4, &v1618);
                                        v1518 = v367;
                                        v1592 = (SIZE_T)v1529;
                                        v1511 = v433;
                                        v1594 = v1390;
                                        v1596 = v437;
                                        if ( v379 < 0 )
                                          goto LABEL_486;
                                        if ( (unsigned int)v1490 - v1618 < 4 )
                                          goto LABEL_526;
                                        v1551 = *(_DWORD *)v1680;
                                        v379 = RtlULongLongAdd((unsigned __int64)v1680, 4LL, (unsigned __int64 *)&v1680);
                                        v1518 = v438;
                                        v1592 = (SIZE_T)v1529;
                                        v1511 = v439;
                                        v1594 = v1390;
                                        v1596 = v440;
                                        if ( v379 < 0 )
                                          goto LABEL_486;
                                        v379 = RtlUIntAdd(v1618, 4, &v1618);
                                        v1518 = v367;
                                        v1592 = (SIZE_T)v1529;
                                        v1511 = v433;
                                        v1594 = v1390;
                                        v1596 = v437;
                                        if ( v379 < 0 )
                                          goto LABEL_486;
                                        if ( (unsigned int)v1490 - v1618 < v1551 )
                                        {
LABEL_526:
                                          v1596 = v437;
                                        }
                                        else
                                        {
                                          v379 = RtlUIntAdd(v1618, v1551, &v1618);
                                          v1518 = v367;
                                          v1592 = (SIZE_T)v1529;
                                          v1511 = v433;
                                          v1594 = v1390;
                                          v1596 = v441;
                                          if ( v379 < 0 )
                                            goto LABEL_486;
                                          if ( (char *)v367 + (unsigned int)v1490 >= (char *)v1680 + v1551
                                            && (unsigned __int64)(unsigned int)v1490
                                             + (char *)v367
                                             - v1551
                                             - (_BYTE *)v1680 < 8 )
                                          {
                                            v1592 = (SIZE_T)v1529;
                                            v379 = 0;
                                            v1491 = 0LL;
                                            v1540 = 0;
                                            v1518 = v367;
                                            v1511 = v433;
                                            v1594 = v1390;
                                            v1596 = v441;
                                            if ( v1680 )
                                            {
                                              v1391 = (LPCWSTR)v1680;
                                              v379 = RtlULongLongAdd(
                                                       (unsigned __int64)v1680,
                                                       v1551,
                                                       (unsigned __int64 *)&v1681);
                                              v1592 = (SIZE_T)v1529;
                                              v1518 = v442;
                                              v1511 = v443;
                                              v1594 = v434;
                                              v1596 = v1477;
                                              if ( v379 < 0 )
                                                goto LABEL_486;
                                              v444 = v1529;
                                              v1518 = v442;
                                              v1511 = v443;
                                              v1594 = v434;
                                              v1596 = v1477;
                                              v1592 = (SIZE_T)v1529;
                                              if ( v1391 < v1681 )
                                              {
                                                v445 = v442;
                                                v1518 = v442;
                                                v1594 = v434;
                                                v1596 = v1477;
                                                v446 = (unsigned __int64)v1391;
                                                v1511 = v443;
                                                v1592 = (SIZE_T)v1529;
                                                while ( 1 )
                                                {
                                                  v1530 = v444;
                                                  v1369 = v445;
                                                  v379 = RtlULongLongAdd(v446, 4LL, (unsigned __int64 *)&v1682);
                                                  if ( v379 < 0 )
                                                    goto LABEL_486;
                                                  if ( v1682 > v1681 )
                                                    goto LABEL_536;
                                                  v379 = RtlUIntAdd(4u, *v447, &v1619);
                                                  if ( v379 < 0 )
                                                    goto LABEL_486;
                                                  v379 = RtlULongLongAdd(
                                                           (unsigned __int64)v1391,
                                                           v1619,
                                                           (unsigned __int64 *)&v1683);
                                                  v1518 = v450;
                                                  v1596 = v1477;
                                                  v1592 = (SIZE_T)v1530;
                                                  v1511 = v449;
                                                  v1594 = v448;
                                                  if ( v379 < 0 )
                                                    goto LABEL_486;
                                                  v446 = (unsigned __int64)v1683;
                                                  v1391 = v1683;
                                                  v1511 = v449;
                                                  v1594 = v448;
                                                  v1592 = (SIZE_T)v1530;
                                                  if ( v1683 > v1681 )
                                                  {
                                                    v379 = -1073741811;
                                                    v1518 = v1369;
                                                    v1596 = v1477;
                                                    goto LABEL_486;
                                                  }
                                                  v444 = v1530;
                                                  ++v1540;
                                                  v1518 = v1369;
                                                  v1596 = v1477;
                                                  if ( v1683 >= v1681 )
                                                  {
                                                    v1518 = v1369;
                                                    v1511 = v449;
                                                    v1594 = v448;
                                                    v1596 = v1477;
                                                    v1592 = (SIZE_T)v1530;
                                                    goto LABEL_538;
                                                  }
                                                  v445 = v1369;
                                                }
                                              }
                                              v446 = (unsigned __int64)v1391;
LABEL_538:
                                              if ( (const WCHAR *)v446 != v1681 )
                                              {
LABEL_536:
                                                v379 = -1073741811;
                                                goto LABEL_486;
                                              }
                                            }
                                            if ( v1551 )
                                            {
                                              v451 = GetProcessHeap();
                                              v452 = v1551;
                                              v379 = 0;
                                              v1491 = HeapAlloc(v451, 8u, v1551);
                                              v453 = v1491;
                                              if ( !v1491 )
                                              {
                                                v379 = -1073741801;
                                                goto LABEL_486;
                                              }
                                            }
                                            else
                                            {
                                              v452 = 0LL;
                                              v453 = 0LL;
                                            }
                                            if ( v1680 )
                                              memcpy_0(v453, v1680, v452);
                                            v1727[1] = v1491;
                                            LODWORD(v1727[0]) = v1540;
                                            if ( v1467 == v1540 )
                                              goto LABEL_486;
                                            goto LABEL_485;
                                          }
                                          v1596 = v441;
                                        }
                                        v1594 = v1390;
                                      }
                                      v1592 = (SIZE_T)v1529;
                                      v1511 = v433;
                                      v1518 = v367;
LABEL_485:
                                      v379 = -1073741762;
LABEL_486:
                                      v92 = v379 | 0x10000000;
                                      goto LABEL_487;
                                    }
LABEL_380:
                                    if ( !v175 )
                                    {
LABEL_382:
                                      v312 = v1596;
                                      v313 = 0LL;
                                      if ( v1596 )
                                      {
                                        v314 = (void *)*((_QWORD *)v1596 + 1);
                                        if ( v314 )
                                        {
                                          v315 = GetProcessHeap();
                                          HeapFree(v315, 0, v314);
                                          v312[1] = 0LL;
                                        }
                                        v316 = (void *)v312[3];
                                        if ( v316 )
                                        {
                                          v317 = GetProcessHeap();
                                          HeapFree(v317, 0, v316);
                                          v312[3] = 0LL;
                                        }
                                        v313 = (void *)v312[5];
                                        if ( v313 )
                                        {
                                          v318 = GetProcessHeap();
                                          HeapFree(v318, 0, v313);
                                          v313 = 0LL;
                                          v312[5] = 0LL;
                                        }
                                        v319 = GetProcessHeap();
                                        HeapFree(v319, 0, v312);
                                      }
                                      v320 = (void *)v1592;
                                      if ( v1592 )
                                      {
                                        v321 = GetProcessHeap();
                                        HeapFree(v321, 0, v320);
                                      }
                                      v322 = v1594;
                                      if ( v1594 )
                                      {
                                        v323 = GetProcessHeap();
                                        HeapFree(v323, 0, v322);
                                      }
                                      if ( v1511 )
                                      {
                                        v324 = (void *)*((_QWORD *)v1511 + 1);
                                        if ( v324 )
                                        {
                                          v325 = GetProcessHeap();
                                          HeapFree(v325, 0, v324);
                                          *((_QWORD *)v1511 + 1) = 0LL;
                                        }
                                        v326 = (void *)*((_QWORD *)v1511 + 3);
                                        if ( v326 )
                                        {
                                          v327 = GetProcessHeap();
                                          HeapFree(v327, 0, v326);
                                          *((_QWORD *)v1511 + 3) = 0LL;
                                        }
                                        v313 = (void *)*((_QWORD *)v1511 + 5);
                                        if ( v313 )
                                        {
                                          v328 = GetProcessHeap();
                                          HeapFree(v328, 0, v313);
                                          v313 = 0LL;
                                          *((_QWORD *)v1511 + 5) = 0LL;
                                        }
                                        v329 = GetProcessHeap();
                                        HeapFree(v329, 0, v1511);
                                      }
                                      if ( v1518 )
                                      {
                                        v330 = GetProcessHeap();
                                        HeapFree(v330, 0, v1518);
                                      }
                                      v98 = v1357;
                                      if ( v92 >= 0 )
                                      {
                                        if ( !LODWORD(v1727[0]) )
                                        {
                                          v92 = -1073425151;
                                          goto LABEL_135;
                                        }
                                        if ( v1727[1] == v313 )
                                        {
                                          v92 = -1073741811;
                                          goto LABEL_135;
                                        }
                                        v454 = v1727[1];
                                        v1684 = v1727[1];
                                        LODWORD(v1593) = RtlULongLongAdd(
                                                           (unsigned __int64)v1727[1],
                                                           4LL,
                                                           (unsigned __int64 *)&v1684);
                                        v92 = v1593;
                                        if ( (v1593 & 0x80000000) == 0LL )
                                        {
                                          v457 = v1684;
                                          if ( !*v454 )
                                            v457 = 0LL;
                                          v1684 = v457;
                                          if ( *v454 != (_DWORD)v456 )
                                          {
                                            v92 = -1073741789;
                                            goto LABEL_135;
                                          }
                                          v92 = *v457;
                                          LODWORD(v1593) = v92;
                                          if ( v92 == -805306333 )
                                          {
                                            v1468 = -2147024774;
                                            goto LABEL_560;
                                          }
                                          v1468 = v92;
                                          if ( v92 == -2147024774 || (v1468 = v92, v92 >= 0) )
                                          {
LABEL_560:
                                            if ( LODWORD(v1727[0]) == 6 )
                                            {
                                              if ( v1727[1] )
                                              {
                                                v458 = (int *)v1727[1];
                                                v459 = 0;
                                                v1685 = (int *)v1727[1];
                                                while ( 1 )
                                                {
                                                  LODWORD(v1593) = RtlULongLongAdd(
                                                                     (unsigned __int64)v458,
                                                                     v456,
                                                                     (unsigned __int64 *)&v1685);
                                                  v92 = v1593;
                                                  if ( (v1593 & 0x80000000) != 0LL )
                                                    goto LABEL_617;
                                                  LODWORD(v1593) = RtlULongLongAdd(
                                                                     (unsigned __int64)v1685,
                                                                     v460,
                                                                     (unsigned __int64 *)&v1685);
                                                  v92 = v1593;
                                                  if ( (v1593 & 0x80000000) != 0LL )
                                                    goto LABEL_617;
                                                  v458 = v1685;
                                                  if ( ++v459 )
                                                  {
                                                    v461 = *v1685;
                                                    LODWORD(v1593) = RtlULongLongAdd(
                                                                       (unsigned __int64)v1685,
                                                                       v456,
                                                                       (unsigned __int64 *)&v1685);
                                                    v92 = v1593;
                                                    if ( (v1593 & 0x80000000) != 0LL )
                                                      goto LABEL_617;
                                                    v463 = v1685;
                                                    if ( !v461 )
                                                      v463 = 0LL;
                                                    v1685 = v463;
                                                    if ( v461 != 8 )
                                                    {
LABEL_614:
                                                      v92 = -1073741789;
                                                      goto LABEL_615;
                                                    }
                                                    v1346 = *(_QWORD *)v463;
                                                    if ( !v1727[1] )
                                                      break;
                                                    v464 = (int *)v1727[1];
                                                    v465 = 0;
                                                    v1686 = (int *)v1727[1];
                                                    while ( 1 )
                                                    {
                                                      LODWORD(v1593) = RtlULongLongAdd(
                                                                         (unsigned __int64)v464,
                                                                         v462,
                                                                         (unsigned __int64 *)&v1686);
                                                      v92 = v1593;
                                                      if ( (v1593 & 0x80000000) != 0LL )
                                                        goto LABEL_617;
                                                      LODWORD(v1593) = RtlULongLongAdd(
                                                                         (unsigned __int64)v1686,
                                                                         v466,
                                                                         (unsigned __int64 *)&v1686);
                                                      v92 = v1593;
                                                      if ( (v1593 & 0x80000000) != 0LL )
                                                        goto LABEL_617;
                                                      v464 = v1686;
                                                      if ( (unsigned int)++v465 >= 2 )
                                                      {
                                                        v467 = *v1686;
                                                        LODWORD(v1593) = RtlULongLongAdd(
                                                                           (unsigned __int64)v1686,
                                                                           v462,
                                                                           (unsigned __int64 *)&v1686);
                                                        v92 = v1593;
                                                        if ( (v1593 & 0x80000000) != 0LL )
                                                          goto LABEL_617;
                                                        v469 = v1686;
                                                        if ( !v467 )
                                                          v469 = 0LL;
                                                        v1686 = v469;
                                                        if ( v467 != (_DWORD)v468 )
                                                          goto LABEL_614;
                                                        v1552 = *v469;
                                                        if ( !v1727[1] )
                                                          goto LABEL_618;
                                                        v470 = (int *)v1727[1];
                                                        v471 = 0;
                                                        v1687 = (int *)v1727[1];
                                                        while ( 1 )
                                                        {
                                                          LODWORD(v1593) = RtlULongLongAdd(
                                                                             (unsigned __int64)v470,
                                                                             v468,
                                                                             (unsigned __int64 *)&v1687);
                                                          v92 = v1593;
                                                          if ( (v1593 & 0x80000000) != 0LL )
                                                            goto LABEL_617;
                                                          LODWORD(v1593) = RtlULongLongAdd(
                                                                             (unsigned __int64)v1687,
                                                                             v472,
                                                                             (unsigned __int64 *)&v1687);
                                                          v92 = v1593;
                                                          if ( (v1593 & 0x80000000) != 0LL )
                                                            goto LABEL_617;
                                                          v470 = v1687;
                                                          if ( (unsigned int)++v471 >= 3 )
                                                          {
                                                            v473 = *v1687;
                                                            v1541 = *v1687;
                                                            LODWORD(v1593) = RtlULongLongAdd(
                                                                               (unsigned __int64)v1687,
                                                                               v468,
                                                                               (unsigned __int64 *)&v1687);
                                                            v92 = v1593;
                                                            if ( (v1593 & 0x80000000) != 0LL )
                                                              goto LABEL_617;
                                                            v474 = v1687;
                                                            if ( !v473 )
                                                              v474 = 0LL;
                                                            v1687 = v474;
                                                            if ( v1727[1] )
                                                            {
                                                              v475 = (int *)v1727[1];
                                                              v476 = 0;
                                                              v1688 = (int *)v1727[1];
                                                              while ( 1 )
                                                              {
                                                                LODWORD(v1593) = RtlULongLongAdd(
                                                                                   (unsigned __int64)v475,
                                                                                   4LL,
                                                                                   (unsigned __int64 *)&v1688);
                                                                v92 = v1593;
                                                                if ( (v1593 & 0x80000000) != 0LL )
                                                                  goto LABEL_617;
                                                                LODWORD(v1593) = RtlULongLongAdd(
                                                                                   (unsigned __int64)v1688,
                                                                                   v477,
                                                                                   (unsigned __int64 *)&v1688);
                                                                v92 = v1593;
                                                                if ( (v1593 & 0x80000000) != 0LL )
                                                                  goto LABEL_617;
                                                                v475 = v1688;
                                                                if ( (unsigned int)++v476 >= 4 )
                                                                {
                                                                  v478 = *v1688;
                                                                  LODWORD(v1593) = RtlULongLongAdd(
                                                                                     (unsigned __int64)v1688,
                                                                                     4LL,
                                                                                     (unsigned __int64 *)&v1688);
                                                                  v92 = v1593;
                                                                  if ( (v1593 & 0x80000000) != 0LL )
                                                                    goto LABEL_617;
                                                                  v480 = v1688;
                                                                  if ( !v478 )
                                                                    v480 = 0LL;
                                                                  v1688 = v480;
                                                                  if ( v478 == (_DWORD)v479 )
                                                                  {
                                                                    v1568 = *v480;
                                                                    if ( !v1727[1] )
                                                                      goto LABEL_618;
                                                                    v481 = (unsigned int *)v1727[1];
                                                                    v482 = 0;
                                                                    v1689 = (unsigned int *)v1727[1];
                                                                    do
                                                                    {
                                                                      v1423 = *v481;
                                                                      v92 = RtlULongLongAdd(
                                                                              (unsigned __int64)v481,
                                                                              v479,
                                                                              (unsigned __int64 *)&v1689);
                                                                      LODWORD(v1593) = v92;
                                                                      if ( v92 < 0
                                                                        || (v92 = RtlULongLongAdd(
                                                                                    (unsigned __int64)v1689,
                                                                                    v1423,
                                                                                    (unsigned __int64 *)&v1689),
                                                                            LODWORD(v1593) = v92,
                                                                            v92 < 0) )
                                                                      {
                                                                        v98 = v483;
                                                                        goto LABEL_109;
                                                                      }
                                                                      v481 = v1689;
                                                                      ++v482;
                                                                    }
                                                                    while ( v482 < 5 );
                                                                    v484 = *v1689;
                                                                    v485 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1689,
                                                                             v479,
                                                                             (unsigned __int64 *)&v1689);
                                                                    LODWORD(v1593) = v485;
                                                                    v92 = v485;
                                                                    if ( v485 < 0 )
                                                                    {
                                                                      LODWORD(v1593) = v485;
                                                                      goto LABEL_617;
                                                                    }
                                                                    v488 = v1689;
                                                                    if ( !v484 )
                                                                      v488 = 0LL;
                                                                    v1689 = v488;
                                                                    if ( v484 == v486 )
                                                                    {
                                                                      v98 = *v488;
                                                                      if ( v1556 != v1346 )
                                                                        goto LABEL_613;
                                                                      v1622 = v1552;
                                                                      if ( v1568 > v486 || v1541 > v486 )
                                                                      {
                                                                        v92 = -2147024774;
                                                                        goto LABEL_135;
                                                                      }
                                                                      memcpy_0(v1623, v487, v1541);
                                                                      if ( v1468 )
                                                                      {
                                                                        v92 = v1468;
                                                                        LODWORD(v1593) = v1468;
                                                                      }
                                                                      goto LABEL_109;
                                                                    }
                                                                  }
                                                                  goto LABEL_614;
                                                                }
                                                              }
                                                            }
                                                            goto LABEL_618;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
LABEL_618:
                                              v92 = -1073741811;
                                            }
                                            else
                                            {
LABEL_613:
                                              v92 = -1073425151;
                                            }
LABEL_615:
                                            LODWORD(v1593) = v92;
LABEL_617:
                                            v98 = v455;
                                            goto LABEL_109;
                                          }
                                        }
                                      }
                                      goto LABEL_109;
                                    }
LABEL_381:
                                    v311 = GetProcessHeap();
                                    HeapFree(v311, 0, v175);
                                    goto LABEL_382;
                                  }
LABEL_548:
                                  v92 = -805306219;
                                  LODWORD(v1593) = -805306219;
                                  v1592 = (SIZE_T)Srcd;
                                  goto LABEL_380;
                                }
                              }
LABEL_438:
                              v92 = -805306306;
                              goto LABEL_487;
                            }
LABEL_418:
                            v92 = -805306219;
                            v1596 = v335;
                            goto LABEL_420;
                          }
                        }
                        v92 = -805306219;
                        goto LABEL_487;
                      }
LABEL_368:
                      v92 = -805306345;
                      goto LABEL_487;
                    }
                  }
                  v1421 = v174;
                  goto LABEL_316;
                }
                if ( v164 + 2 <= (int *)((char *)lpMem + HIDWORD(v1725)) )
                {
                  v166 = v1735;
                  *v164 = v159;
                  *v166 = v159;
                  LODWORD(v1725) = v1725 + 1;
                  goto LABEL_241;
                }
LABEL_149:
                v92 = -1073741789;
                goto LABEL_107;
              }
            }
            LODWORD(v1725) = v144 + 1;
            goto LABEL_187;
          }
        }
        else
        {
          v92 = RtlUIntAdd(v130, Sizea, (unsigned int *)&v1658);
          LODWORD(v1593) = v92;
          if ( v92 < 0 )
            goto LABEL_105;
          v136 = RtlUIntAdd(HIDWORD(v1725), v1658, (unsigned int *)&v1725 + 1);
          v137 = v1725;
          v92 = v136;
          LODWORD(v1593) = v136;
          if ( v136 >= 0 )
          {
            v137 = v1725 + 1;
            LODWORD(v1725) = v1725 + 1;
            goto LABEL_183;
          }
        }
        v98 = v89;
        if ( v92 < 0 )
          goto LABEL_109;
        goto LABEL_183;
      }
    }
    else
    {
      v92 = RtlUIntAdd(4u, v127, (unsigned int *)&v1656);
      LODWORD(v1593) = v92;
      if ( v92 < 0 )
        goto LABEL_105;
      v129 = RtlUIntAdd(HIDWORD(v1725), v1656, (unsigned int *)&v1725 + 1);
      v131 = v1725;
      v92 = v129;
      LODWORD(v1593) = v129;
      if ( v129 >= 0 )
      {
        v131 = v1725 + 1;
        LODWORD(v1725) = v1725 + 1;
        goto LABEL_164;
      }
    }
    v98 = v89;
    if ( v92 < 0 )
      goto LABEL_109;
    goto LABEL_164;
  }
  v92 = -2147024882;
LABEL_1586:
  v1315 = v1598;
LABEL_1587:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1316 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v1316 == 1 )
    {
      v1317 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v1318 = 4LL;
      do
      {
        if ( *v1317 )
          FreeLibrary(*v1317);
        v1317 += 3;
        --v1318;
      }
      while ( v1318 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1590);
  if ( v92 >= 0 )
  {
    if ( v1315 == 4 )
    {
      v1661 = *v1679;
      goto LABEL_4;
    }
    goto LABEL_6;
  }
  switch ( v92 )
  {
    case -805306316:
      v1621 = -1073418222;
      break;
    case -805306139:
    case -1073425151:
      v1621 = -1073418201;
      break;
    case -805306306:
      v1621 = -1073418200;
      break;
    default:
      v1621 = v92;
      if ( v92 == -2147024774 )
LABEL_6:
        v1621 = -1073418210;
      break;
  }
LABEL_4:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1679);
  return v1621 >= 0 && v1661 != 0;
}
