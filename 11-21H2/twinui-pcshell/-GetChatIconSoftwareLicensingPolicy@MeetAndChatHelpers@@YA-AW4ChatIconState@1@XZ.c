/*
 * XREFs of ?GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1805C1578
 * Callers:
 *     ?GetChatIconDefaultSetting@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1805C1514 (-GetChatIconDefaultSetting@MeetAndChatHelpers@@YA-AW4ChatIconState@1@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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

__int64 MeetAndChatHelpers::GetChatIconSoftwareLicensingPolicy()
{
  int v0; // eax
  void *v1; // rsi
  _BYTE *v2; // r15
  int v3; // r14d
  int v4; // eax
  int v5; // ebx
  int v6; // r11d
  _BYTE *v7; // r12
  unsigned __int8 *v8; // r13
  __int64 v9; // rsi
  int v10; // r10d
  int v11; // r9d
  int v12; // r11d
  unsigned int v13; // r8d
  int v14; // r11d
  unsigned int v15; // r8d
  int v16; // r11d
  int v17; // r8d
  unsigned int v18; // r11d
  int v19; // r8d
  int v20; // r11d
  int v21; // r8d
  unsigned int v22; // r11d
  int v23; // edx
  int v24; // r11d
  unsigned int v25; // ebx
  int v26; // r11d
  int v27; // ebx
  int v28; // edi
  int v29; // ebx
  unsigned int v30; // r11d
  int v31; // ebx
  int v32; // r11d
  int v33; // ebx
  unsigned int v34; // r11d
  int v35; // ebx
  int v36; // r11d
  int v37; // ebx
  int v38; // r11d
  int v39; // ebx
  int v40; // r11d
  int v41; // ebx
  int v42; // r11d
  int v43; // ebx
  char v44; // al
  unsigned __int64 v45; // rcx
  int v46; // r14d
  HANDLE ProcessHeap; // rax
  HMODULE *v48; // rdi
  __int64 v49; // rbx
  const WCHAR *v50; // rdi
  unsigned int v51; // r12d
  const WCHAR *v52; // rdx
  __int64 v53; // rax
  const WCHAR *v54; // rdi
  char *v55; // rbx
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned int v58; // r13d
  unsigned int i; // r15d
  const CHAR *v60; // rdx
  __int64 v61; // rax
  void **ProcAddress; // rcx
  int v63; // esi
  signed int LastError; // edi
  __int64 v65; // r14
  bool v66; // sf
  __int64 v67; // r9
  wchar_t *v68; // rbx
  wchar_t *v69; // r8
  signed int v70; // eax
  HDESK (__fastcall *v71)(WARBIRD_DELAY_LOAD *__hidden, unsigned int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v73; // r14
  bool v74; // sf
  __int64 v75; // r9
  wchar_t *v76; // rbx
  wchar_t *v77; // r8
  signed int v78; // eax
  HANDLE CurrentProcess; // rax
  int v80; // ebx
  __int64 v81; // r12
  HLOCAL v82; // rdi
  int v83; // r15d
  SIZE_T v84; // r11
  int v85; // esi
  int v86; // eax
  HMODULE *v87; // rdi
  __int64 v88; // rbx
  WCHAR *v89; // r13
  HANDLE v90; // rax
  WCHAR *v91; // r12
  int v92; // edi
  HANDLE v93; // rax
  _QWORD *v94; // rax
  _QWORD *v95; // r13
  __int64 v96; // rcx
  int v97; // eax
  __int64 v98; // r10
  int v99; // eax
  int v100; // r9d
  int v101; // eax
  int v102; // r9d
  int v103; // eax
  size_t v104; // rdx
  int v105; // r9d
  int v106; // eax
  int v107; // eax
  int v108; // r9d
  int v109; // eax
  int v110; // r9d
  unsigned int v111; // edi
  HANDLE v112; // rax
  _DWORD *v113; // rax
  _DWORD *v114; // rdi
  int v115; // r10d
  int v116; // r10d
  int v117; // r10d
  int *v118; // rdi
  int v119; // r9d
  unsigned int v120; // r10d
  _OWORD *v121; // rax
  int v122; // r10d
  int v123; // r10d
  int *v124; // rdi
  int v125; // r9d
  unsigned int v126; // r10d
  size_t v127; // rdx
  int v128; // r10d
  int *v129; // rdi
  int v130; // r9d
  unsigned int v131; // r10d
  unsigned int v132; // r10d
  int *v133; // rdi
  int v134; // r11d
  __int64 v135; // r9
  __int64 v136; // rcx
  int v137; // r10d
  int v138; // r10d
  int *v139; // rdi
  int v140; // r9d
  unsigned int v141; // r10d
  void *v142; // rbx
  HANDLE v143; // rax
  void *v144; // rbx
  HANDLE v145; // rax
  HANDLE v146; // rax
  HANDLE v147; // rax
  DWORD ModuleFileNameW; // eax
  WCHAR *v149; // r13
  int *v150; // rdi
  int v151; // r9d
  unsigned int v152; // r10d
  unsigned int v153; // ecx
  unsigned int v154; // edi
  unsigned __int8 *v155; // r13
  unsigned int v156; // edi
  _DWORD *v157; // rbx
  unsigned int *v158; // r12
  int v159; // r15d
  unsigned int v160; // eax
  unsigned int v161; // edi
  HANDLE v162; // rax
  char *v163; // rax
  char *v164; // rdi
  unsigned int v165; // r9d
  void *v166; // rcx
  HANDLE v167; // rax
  unsigned __int64 v168; // r15
  char *v169; // rdx
  unsigned __int8 v170; // al
  unsigned __int64 k; // rcx
  unsigned __int8 *v172; // rdi
  char *v173; // rcx
  unsigned int v174; // r9d
  int v175; // r10d
  unsigned int v176; // edx
  int v177; // r10d
  unsigned int v178; // ecx
  char v179; // r14
  int v180; // r8d
  unsigned int v181; // r10d
  unsigned int v182; // ecx
  unsigned int v183; // r8d
  unsigned int v184; // r11d
  _BYTE *v185; // rsi
  char v186; // r12
  unsigned __int64 v187; // r11
  int v188; // ebx
  _BYTE *v189; // r13
  unsigned __int8 *v190; // rax
  int v191; // r14d
  int v192; // r12d
  int v193; // r8d
  int v194; // edi
  int v195; // r10d
  int v196; // r9d
  int v197; // r10d
  int v198; // r9d
  int v199; // r10d
  unsigned int v200; // r9d
  int v201; // r10d
  int v202; // r9d
  int v203; // r10d
  int v204; // r9d
  int v205; // r10d
  int v206; // r9d
  unsigned int v207; // r10d
  unsigned int v208; // r9d
  int v209; // r10d
  int v210; // r9d
  int v211; // r10d
  int v212; // r9d
  int v213; // r10d
  int v214; // r9d
  int v215; // r10d
  int v216; // r9d
  unsigned int v217; // r10d
  int v218; // r9d
  unsigned int v219; // r10d
  int v220; // r9d
  int v221; // r10d
  int v222; // r9d
  int v223; // r10d
  int v224; // r9d
  int v225; // r10d
  int v226; // r9d
  int v227; // r10d
  unsigned int v228; // r15d
  HANDLE v229; // rax
  _DWORD *v230; // rax
  _DWORD *v231; // rdi
  int v232; // r15d
  _QWORD *v233; // rdi
  HANDLE v234; // rax
  HANDLE v235; // rax
  HANDLE v236; // rax
  HANDLE v237; // rax
  HANDLE v238; // rax
  int v239; // r10d
  int v240; // r15d
  int v241; // r10d
  HANDLE v242; // rax
  void *v243; // rax
  HANDLE v244; // rax
  _OWORD *v245; // rax
  HANDLE v246; // rax
  _QWORD *v247; // rax
  HANDLE v248; // rax
  HANDLE v249; // rax
  HANDLE v250; // rax
  HANDLE v251; // rax
  unsigned int v252; // edi
  HANDLE v253; // rax
  _DWORD *v254; // rax
  void *v255; // rdi
  void *v256; // rcx
  void *v257; // rcx
  HANDLE v258; // rax
  int v259; // eax
  int v260; // ecx
  int v261; // r10d
  unsigned int v262; // eax
  LPVOID v263; // r9
  unsigned int v264; // r9d
  int v265; // r11d
  LPVOID v266; // rcx
  unsigned int v267; // r11d
  int v268; // r9d
  int v269; // r10d
  int v270; // r10d
  int v271; // r10d
  int v272; // r9d
  unsigned int v273; // eax
  HANDLE v274; // rax
  void *v275; // rdi
  HANDLE v276; // rax
  void *v277; // rdi
  HANDLE v278; // rax
  void *v279; // rdi
  HANDLE v280; // rax
  HANDLE v281; // rax
  HANDLE v282; // rax
  HANDLE v283; // rax
  _QWORD *v284; // rdi
  void *v285; // rbx
  HANDLE v286; // rax
  void *v287; // rbx
  HANDLE v288; // rax
  void *v289; // rbx
  HANDLE v290; // rax
  HANDLE v291; // rax
  void *v292; // rdi
  HANDLE v293; // rax
  unsigned int v294; // edi
  HANDLE v295; // rax
  unsigned int *v296; // rax
  void *v297; // rdi
  signed int v298; // eax
  unsigned int v299; // r9d
  FARPROC v300; // rax
  int v301; // eax
  unsigned __int8 *v302; // rdx
  _DWORD *v303; // r8
  __int64 v304; // rcx
  unsigned int *v305; // r10
  unsigned int *v306; // r11
  SIZE_T v307; // r15
  unsigned int *v308; // rbx
  unsigned int v309; // r11d
  unsigned int *v310; // r10
  unsigned int v311; // ebx
  SIZE_T v312; // r13
  unsigned int v313; // r10d
  HANDLE v314; // rax
  _DWORD *v315; // rbx
  HANDLE v316; // rax
  void *v317; // rax
  HANDLE v318; // rax
  void *v319; // rax
  HANDLE v320; // rax
  void *v321; // rax
  int v322; // r15d
  _QWORD *v323; // rax
  HANDLE v324; // rax
  HANDLE v325; // rax
  HANDLE v326; // rax
  HANDLE v327; // rax
  _QWORD *v328; // rax
  unsigned int *v329; // r9
  _QWORD *v330; // rdi
  void *v331; // rbx
  HANDLE v332; // rax
  void *v333; // rbx
  HANDLE v334; // rax
  void *v335; // rbx
  HANDLE v336; // rax
  HANDLE v337; // rax
  SIZE_T v338; // r15
  int *v339; // r9
  unsigned __int8 v340; // al
  char *v341; // rdx
  SIZE_T v342; // rcx
  unsigned int v343; // r8d
  unsigned int v344; // ecx
  char v345; // r11
  unsigned __int8 *v346; // r14
  int v347; // r15d
  int v348; // eax
  int v349; // r10d
  int v350; // ecx
  unsigned int v351; // esi
  unsigned int v352; // edx
  _BYTE *v353; // rdi
  char v354; // r10
  unsigned int v355; // r10d
  SIZE_T v356; // rdi
  _BYTE *v357; // r12
  unsigned __int8 *v358; // rbx
  int v359; // esi
  int v360; // r15d
  SIZE_T v361; // rax
  int v362; // r9d
  int v363; // r13d
  int v364; // r8d
  int v365; // edi
  int v366; // r10d
  int v367; // r11d
  int v368; // r10d
  unsigned int v369; // r11d
  int v370; // r10d
  int v371; // r11d
  unsigned int v372; // r10d
  int v373; // r11d
  int v374; // r10d
  int v375; // r11d
  unsigned int v376; // r10d
  int v377; // r11d
  int v378; // r10d
  unsigned int v379; // r11d
  int v380; // r10d
  int v381; // r11d
  int v382; // r10d
  int v383; // r11d
  unsigned int v384; // r10d
  int v385; // r11d
  int v386; // r10d
  int v387; // r11d
  unsigned int v388; // r10d
  int v389; // r11d
  int v390; // r10d
  int v391; // r11d
  int v392; // r10d
  int v393; // r11d
  int v394; // r10d
  int v395; // r11d
  int v396; // r10d
  int v397; // r11d
  SIZE_T m; // rcx
  void *v399; // rdi
  void *v400; // r10
  int v401; // r15d
  void *v402; // r9
  void *v403; // r10
  _DWORD *v404; // rcx
  void *v405; // r9
  void *v406; // r10
  void *v407; // rcx
  void *v408; // r9
  void *v409; // r10
  unsigned __int64 v410; // r11
  SIZE_T v411; // rdx
  LPVOID v412; // r10
  int *v413; // r10
  unsigned __int64 v414; // r11
  unsigned __int64 v415; // r10
  void *v416; // r9
  HANDLE v417; // rax
  size_t v418; // rdi
  _DWORD *v419; // rbx
  int v420; // r9d
  _DWORD *v421; // rax
  int v422; // ebx
  unsigned int v423; // edi
  int v424; // edi
  _DWORD *v425; // rax
  int *v426; // rcx
  unsigned int v427; // edi
  unsigned int v428; // r10d
  int v429; // edi
  int *v430; // rax
  LPVOID v431; // rcx
  unsigned int v432; // edi
  unsigned int v433; // r10d
  int v434; // r9d
  int v435; // r11d
  LPVOID v436; // r10
  unsigned int *v437; // rcx
  unsigned int j; // edi
  unsigned int v439; // r12d
  unsigned int v440; // edi
  unsigned int *v441; // rax
  unsigned int *v442; // rcx
  unsigned int v443; // edi
  unsigned int v444; // r13d
  unsigned int v445; // r12d
  unsigned int v446; // edi
  int v447; // eax
  const void *v448; // r10
  size_t v449; // r11
  unsigned int *v450; // rax
  unsigned int v451; // edi
  int v452; // eax
  WCHAR *v453; // r12
  char *v454; // rax
  int v455; // r13d
  int v456; // r11d
  int v457; // ebx
  _BYTE *v458; // rsi
  unsigned __int8 *v459; // r14
  __int64 v460; // rdi
  int v461; // r10d
  int v462; // r9d
  int v463; // ebx
  unsigned int v464; // r11d
  int v465; // ebx
  unsigned int v466; // r11d
  int v467; // ebx
  int v468; // r11d
  unsigned int v469; // ebx
  int v470; // r11d
  int v471; // ebx
  int v472; // r11d
  unsigned int v473; // ebx
  int v474; // edx
  int v475; // ebx
  unsigned int v476; // r11d
  int v477; // ebx
  int v478; // r11d
  int v479; // ebx
  int v480; // r11d
  unsigned int v481; // ebx
  int v482; // r11d
  int v483; // ebx
  int v484; // r11d
  unsigned int v485; // ebx
  int v486; // r11d
  unsigned int v487; // ebx
  int v488; // r11d
  int v489; // ebx
  int v490; // r11d
  int v491; // ebx
  int v492; // r11d
  int v493; // ebx
  int v494; // r11d
  unsigned __int64 v495; // rcx
  char v496; // al
  int v497; // r13d
  HANDLE v498; // rax
  HMODULE *v499; // rbx
  __int64 v500; // r12
  WCHAR *v501; // rbx
  const WCHAR *v502; // rdx
  __int64 v503; // rax
  WCHAR *v504; // rbx
  HMODULE *v505; // r8
  __int64 v506; // rcx
  unsigned __int64 v507; // rcx
  unsigned int v508; // ecx
  const CHAR *v509; // rdx
  __int64 v510; // rax
  void **v511; // rcx
  int v512; // eax
  WCHAR *v513; // r12
  char *v514; // rcx
  int v515; // eax
  int v516; // ebx
  _BYTE *v517; // rsi
  unsigned __int8 *v518; // r14
  __int64 v519; // rdi
  int v520; // r11d
  int v521; // r10d
  int v522; // ebx
  unsigned int v523; // r9d
  int v524; // ebx
  unsigned int v525; // r9d
  int v526; // ebx
  int v527; // r9d
  unsigned int v528; // ebx
  int v529; // r9d
  int v530; // ebx
  int v531; // r9d
  unsigned int v532; // ebx
  int v533; // r9d
  int v534; // ebx
  unsigned int v535; // r13d
  int v536; // ebx
  int v537; // r13d
  int v538; // ebx
  int v539; // r13d
  unsigned int v540; // ebx
  int v541; // r13d
  int v542; // ebx
  int v543; // r13d
  unsigned int v544; // ebx
  int v545; // r13d
  unsigned int v546; // ebx
  int v547; // r13d
  int v548; // ebx
  int v549; // r13d
  int v550; // ebx
  int v551; // r13d
  int v552; // ebx
  int v553; // r13d
  unsigned __int64 v554; // rcx
  char v555; // al
  WCHAR *v556; // rbx
  const WCHAR *v557; // rdx
  __int64 v558; // rax
  WCHAR *v559; // rbx
  char *v560; // r13
  int v561; // ecx
  __int64 v562; // rdx
  unsigned __int64 v563; // rdx
  unsigned int v564; // edx
  const CHAR *v565; // r8
  __int64 v566; // rax
  void **v567; // rcx
  HANDLE v568; // rax
  HMODULE *v569; // rbx
  __int64 v570; // r12
  __int64 v571; // rbx
  int v572; // r13d
  signed int v573; // eax
  signed int v574; // r12d
  _DWORD *v575; // rdi
  signed int v576; // eax
  _DWORD *v577; // r13
  _DWORD *v578; // rdi
  unsigned int jj; // r14d
  __int64 v580; // rax
  unsigned int v581; // r10d
  unsigned int v582; // r9d
  __int64 v583; // r8
  unsigned int v584; // ecx
  unsigned int *v585; // rdx
  __int64 v586; // rdi
  const wchar_t *v587; // rcx
  const wchar_t **v588; // rdx
  __int64 v589; // r8
  __int64 v590; // rax
  char *v591; // rbx
  unsigned __int64 v592; // r13
  signed int v593; // eax
  int v594; // r14d
  int v595; // r11d
  int v596; // r10d
  _BYTE *v597; // r12
  unsigned __int8 *v598; // r13
  __int64 v599; // rsi
  int v600; // ebx
  int v601; // r9d
  int v602; // r8d
  int v603; // r10d
  unsigned int v604; // edi
  int v605; // r10d
  unsigned int v606; // edi
  int v607; // r10d
  int v608; // edi
  unsigned int v609; // r10d
  int v610; // edi
  int v611; // r10d
  int v612; // edi
  unsigned int v613; // r10d
  int v614; // edi
  int v615; // r10d
  unsigned int v616; // r11d
  int v617; // r10d
  int v618; // r11d
  int v619; // r10d
  int v620; // r11d
  unsigned int v621; // r10d
  int v622; // r11d
  int v623; // r10d
  int v624; // r11d
  unsigned int v625; // r10d
  int v626; // r11d
  int v627; // r10d
  int v628; // r11d
  int v629; // r10d
  int v630; // r11d
  int v631; // r10d
  int v632; // r11d
  int v633; // r10d
  int v634; // r11d
  unsigned __int64 v635; // rax
  __m128i v636; // xmm1
  WCHAR *v637; // rbx
  __m128i v638; // xmm0
  __m128i v639; // xmm1
  __m128i v640; // xmm1
  __m128i v641; // xmm1
  WCHAR **v642; // rdx
  __int64 v643; // rdi
  unsigned int ii; // ecx
  __int64 v645; // rax
  void **v646; // rdi
  void **v647; // rbx
  unsigned int v648; // r8d
  WCHAR *v649; // rdx
  __int16 *v650; // rcx
  __int64 v651; // rax
  __int16 v652; // r9
  __int16 *v653; // rcx
  __int64 v654; // r13
  __int64 v655; // rax
  int v656; // eax
  LPVOID v657; // rcx
  __int64 v658; // rax
  signed int v659; // eax
  signed int v660; // eax
  __int64 v661; // r13
  _WORD *v662; // rdi
  __int64 v663; // rcx
  int v664; // r13d
  unsigned int v665; // edi
  __int64 v666; // r13
  signed int v667; // eax
  __int64 v668; // rax
  signed int v669; // eax
  wchar_t *v670; // rax
  signed int v671; // eax
  __int64 v672; // rax
  signed int v673; // eax
  unsigned int v674; // edx
  int v675; // eax
  unsigned int v676; // r13d
  unsigned int v677; // ebx
  void *v678; // rdi
  void *v679; // rdi
  __int64 v680; // rdi
  bool v681; // sf
  unsigned int v682; // r13d
  __int64 v683; // rax
  bool v684; // sf
  void *v685; // rdi
  __int64 v686; // rbx
  int v687; // eax
  __int64 v688; // rdx
  int v689; // edx
  int v690; // r12d
  int v691; // ebx
  int v692; // edi
  __int64 v693; // rax
  int v694; // edx
  int v695; // ecx
  __int64 v696; // rax
  int v697; // eax
  HMODULE *v698; // rdi
  unsigned int v699; // edi
  int v700; // ebx
  __int64 v701; // rax
  int v702; // eax
  void *v703; // r13
  __int64 v704; // rax
  __int64 v705; // rax
  __int64 v706; // r12
  __int64 v707; // rax
  __int64 v708; // rdi
  bool v709; // sf
  int v710; // eax
  const WCHAR *v711; // rcx
  __int64 (__fastcall *v712)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v713; // rax
  int v714; // edx
  int v715; // edi
  int v716; // ecx
  int v717; // r8d
  int v718; // r13d
  __int64 v719; // r9
  int v720; // r11d
  const WCHAR *v721; // rdx
  const WCHAR *v722; // rax
  int v723; // edi
  unsigned __int8 *v724; // r9
  signed __int64 v725; // r10
  int v726; // r8d
  void *v727; // r13
  __int64 v728; // rax
  __int64 v729; // rax
  __int64 v730; // r12
  __int64 v731; // rax
  __int64 v732; // rdi
  signed int v733; // eax
  int v734; // eax
  const WCHAR *v735; // rcx
  __int64 (__fastcall *v736)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v737; // rax
  int v738; // eax
  int v739; // edi
  int v740; // r8d
  int v741; // ecx
  int v742; // edx
  int v743; // r13d
  int v744; // r11d
  const WCHAR *v745; // rdi
  const WCHAR *v746; // rax
  int v747; // r8d
  unsigned __int8 *v748; // r9
  signed __int64 v749; // r10
  char v750; // si
  int v751; // r8d
  __int64 v752; // rbx
  SIZE_T v753; // r12
  char v754; // al
  unsigned int v755; // r12d
  int v756; // edx
  int v757; // ebx
  int v758; // r13d
  int v759; // edi
  int v760; // r13d
  void *v761; // rax
  void *v762; // rbx
  __int64 v763; // rax
  __int64 v764; // rcx
  signed int v765; // ebx
  int v766; // edi
  __int64 v767; // rax
  signed int v768; // eax
  int v769; // eax
  __int64 v770; // rcx
  __int64 (__fastcall *v771)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v772; // rax
  LPCWSTR v773; // rdi
  int v774; // r9d
  int v775; // r10d
  int v776; // ecx
  int v777; // r8d
  int v778; // edx
  int v779; // r11d
  __int64 v780; // rdx
  unsigned int *v781; // rax
  int v782; // r14d
  int v783; // edi
  unsigned __int8 *v784; // r9
  __int64 v785; // r10
  int v786; // r8d
  void *v787; // rdi
  __int64 v788; // rax
  __int64 v789; // rax
  __int64 v790; // rdi
  signed int v791; // ebx
  int v792; // r13d
  SIZE_T v793; // rax
  bool v794; // sf
  int v795; // eax
  SIZE_T v796; // rcx
  int v797; // r13d
  __int64 (__fastcall *v798)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v799; // rax
  int v800; // eax
  int v801; // edx
  int v802; // r8d
  int v803; // ecx
  int v804; // r9d
  int v805; // r13d
  __int64 v806; // r10
  int v807; // r11d
  unsigned __int8 *v808; // rdx
  const WCHAR *v809; // rax
  int v810; // edi
  unsigned __int8 *v811; // r9
  signed __int64 v812; // r10
  char v813; // si
  int v814; // r8d
  __int64 v815; // r9
  __int64 v816; // r9
  __int64 v817; // rcx
  __int64 v818; // rcx
  __int64 v819; // rcx
  int v820; // eax
  HMODULE *v821; // rdi
  int v822; // eax
  WCHAR *v823; // r12
  char *v824; // rax
  int v825; // r14d
  int v826; // r12d
  int v827; // r11d
  _BYTE *v828; // rsi
  unsigned __int8 *v829; // r13
  __int64 v830; // rax
  int v831; // r10d
  int v832; // r9d
  int v833; // r11d
  int v834; // r8d
  int v835; // r11d
  unsigned int v836; // r8d
  int v837; // r11d
  int v838; // r8d
  unsigned int v839; // r11d
  int v840; // r8d
  int v841; // r11d
  int v842; // r8d
  unsigned int v843; // r11d
  int v844; // r8d
  int v845; // r11d
  unsigned int v846; // ebx
  int v847; // r11d
  int v848; // ebx
  int v849; // edi
  int v850; // ebx
  unsigned int v851; // r11d
  int v852; // ebx
  int v853; // r11d
  int v854; // ebx
  unsigned int v855; // r11d
  int v856; // ebx
  int v857; // r11d
  int v858; // ebx
  int v859; // r11d
  int v860; // ebx
  int v861; // r11d
  int v862; // ebx
  int v863; // r11d
  int v864; // ebx
  unsigned __int64 v865; // rcx
  char v866; // al
  int v867; // r13d
  HANDLE v868; // rax
  HMODULE *v869; // rdi
  __int64 v870; // rbx
  HMODULE *v871; // rdi
  WCHAR *v872; // rdi
  const WCHAR *v873; // rdx
  __int64 v874; // rax
  WCHAR *v875; // rdi
  char *v876; // rbx
  __int64 v877; // rcx
  unsigned __int64 v878; // rcx
  unsigned int v879; // ecx
  const CHAR *v880; // rdx
  __int64 v881; // rax
  void **v882; // rcx
  __int64 v883; // rbx
  int v884; // eax
  _QWORD *v885; // r12
  HANDLE v886; // rax
  WCHAR *v887; // rbx
  HANDLE v888; // rax
  _QWORD *v889; // rax
  unsigned __int64 v890; // r13
  int v891; // eax
  int v892; // r9d
  int v893; // eax
  int v894; // r9d
  int v895; // eax
  int v896; // r9d
  unsigned int v897; // edi
  HANDLE v898; // rax
  _DWORD *v899; // rax
  _DWORD *v900; // rdi
  __int64 v901; // rcx
  int v902; // r10d
  __int64 v903; // rbx
  int *v904; // rdi
  int v905; // r9d
  unsigned int v906; // r10d
  _OWORD *v907; // rax
  unsigned int v908; // edi
  int *v909; // r9
  unsigned __int64 v910; // r9
  int v911; // r10d
  _DWORD *v912; // r9
  unsigned int v913; // edi
  void *v914; // rdi
  HANDLE v915; // rax
  void *v916; // rdi
  HANDLE v917; // rax
  HANDLE v918; // rax
  HANDLE v919; // rax
  int *v920; // r9
  unsigned __int64 v921; // r9
  int v922; // r10d
  _DWORD *v923; // r9
  unsigned int v924; // ecx
  unsigned int v925; // edi
  WCHAR *v926; // r13
  unsigned int *v927; // rbx
  unsigned int *v928; // r12
  int v929; // edi
  unsigned int v930; // r9d
  unsigned int v931; // eax
  unsigned int v932; // edi
  HANDLE v933; // rax
  _DWORD *v934; // rax
  unsigned int v935; // r10d
  void *v936; // rcx
  __int64 v937; // r9
  HANDLE v938; // rax
  int v939; // edi
  unsigned __int64 v940; // rdi
  char *v941; // rdx
  unsigned __int8 v942; // al
  unsigned __int64 v943; // rcx
  WCHAR *v944; // rdi
  char *v945; // rcx
  unsigned int v946; // r9d
  int v947; // r10d
  unsigned __int64 v948; // r11
  int v949; // edx
  int v950; // r10d
  int v951; // ecx
  char v952; // si
  int v953; // r8d
  unsigned int v954; // r10d
  unsigned int v955; // ecx
  unsigned int v956; // r8d
  _BYTE *v957; // r14
  int v958; // r12d
  char v959; // bl
  unsigned __int64 v960; // rdx
  int v961; // r12d
  _BYTE *v962; // r11
  unsigned __int8 *v963; // r13
  unsigned __int64 v964; // r14
  int v965; // eax
  int v966; // r15d
  int v967; // r8d
  int v968; // edi
  int v969; // r10d
  int v970; // edx
  int v971; // r10d
  int v972; // r9d
  int v973; // r10d
  unsigned int v974; // r9d
  int v975; // r10d
  int v976; // r9d
  int v977; // r10d
  int v978; // r9d
  unsigned int v979; // r10d
  int v980; // r9d
  unsigned int v981; // r10d
  unsigned int v982; // r9d
  int v983; // r10d
  int v984; // r9d
  int v985; // r10d
  int v986; // r9d
  int v987; // r10d
  int v988; // r9d
  int v989; // r10d
  int v990; // r9d
  unsigned int v991; // r10d
  int v992; // r9d
  int v993; // ecx
  int v994; // r9d
  unsigned int v995; // r10d
  int v996; // r9d
  int v997; // r10d
  int v998; // r9d
  int v999; // r10d
  int v1000; // r9d
  int v1001; // r10d
  const void *v1002; // rdi
  HANDLE v1003; // rax
  unsigned int *v1004; // rsi
  int v1005; // edi
  _QWORD *v1006; // rsi
  HANDLE v1007; // rax
  HANDLE v1008; // rax
  HANDLE v1009; // rax
  HANDLE v1010; // rax
  HANDLE v1011; // rax
  int v1012; // edi
  int v1013; // r9d
  int v1014; // r9d
  HANDLE v1015; // rax
  void *v1016; // rax
  HANDLE v1017; // rax
  _OWORD *v1018; // rax
  HANDLE v1019; // rax
  _QWORD *v1020; // rax
  HANDLE v1021; // rax
  HANDLE v1022; // rax
  HANDLE v1023; // rax
  HANDLE v1024; // rax
  unsigned int v1025; // edi
  HANDLE v1026; // rax
  _DWORD *v1027; // rax
  void *v1028; // rsi
  void *v1029; // rcx
  void *v1030; // rcx
  int v1031; // esi
  HANDLE v1032; // rax
  int v1033; // eax
  int v1034; // ecx
  SIZE_T v1035; // r9
  unsigned int v1036; // eax
  HANDLE v1037; // rax
  void *v1038; // rsi
  HANDLE v1039; // rax
  void *v1040; // rsi
  HANDLE v1041; // rax
  void *v1042; // rsi
  HANDLE v1043; // rax
  HANDLE v1044; // rax
  void *v1045; // rbx
  HANDLE v1046; // rax
  HANDLE v1047; // rax
  _QWORD *v1048; // rbx
  void *v1049; // rsi
  HANDLE v1050; // rax
  void *v1051; // rsi
  HANDLE v1052; // rax
  void *v1053; // rsi
  HANDLE v1054; // rax
  HANDLE v1055; // rax
  void *v1056; // rbx
  HANDLE v1057; // rax
  unsigned int v1058; // r10d
  SIZE_T v1059; // r9
  unsigned int *v1060; // rcx
  unsigned int v1061; // esi
  int v1062; // r10d
  int v1063; // r11d
  int v1064; // r10d
  unsigned int v1065; // eax
  SIZE_T v1066; // rsi
  unsigned int v1067; // edi
  HANDLE v1068; // rax
  unsigned int *v1069; // rax
  signed int v1070; // eax
  unsigned int v1071; // r9d
  FARPROC v1072; // rax
  int v1073; // eax
  WCHAR *v1074; // rdx
  unsigned int *v1075; // r8
  __int64 v1076; // rcx
  unsigned int *v1077; // rdi
  unsigned int *v1078; // r11
  SIZE_T v1079; // rbx
  unsigned int *v1080; // rdi
  unsigned int v1081; // r11d
  unsigned int v1082; // r10d
  SIZE_T v1083; // r13
  unsigned int v1084; // edi
  HANDLE v1085; // rax
  _QWORD *v1086; // rdi
  HANDLE v1087; // rax
  void *v1088; // rax
  HANDLE v1089; // rax
  void *v1090; // rax
  HANDLE v1091; // rax
  void *v1092; // rax
  int v1093; // edi
  _QWORD *v1094; // rax
  HANDLE v1095; // rax
  HANDLE v1096; // rax
  HANDLE v1097; // rax
  HANDLE v1098; // rax
  _QWORD *v1099; // rax
  unsigned int *v1100; // r9
  _QWORD *v1101; // rdi
  void *v1102; // rbx
  HANDLE v1103; // rax
  void *v1104; // rbx
  HANDLE v1105; // rax
  void *v1106; // rbx
  HANDLE v1107; // rax
  HANDLE v1108; // rax
  unsigned __int64 v1109; // rdi
  int *v1110; // r9
  unsigned __int8 v1111; // al
  unsigned __int8 *v1112; // rdx
  int v1113; // r8d
  unsigned __int8 *v1114; // r14
  int v1115; // r9d
  char v1116; // r15
  int v1117; // r10d
  int v1118; // ecx
  unsigned int v1119; // r11d
  int v1120; // ecx
  int v1121; // eax
  _BYTE *v1122; // rdx
  int v1123; // edi
  char v1124; // si
  wchar_t *v1125; // rcx
  unsigned int v1126; // r10d
  unsigned __int64 v1127; // r8
  int v1128; // esi
  unsigned int v1129; // edi
  int v1130; // r15d
  _BYTE *v1131; // rbx
  unsigned __int8 *v1132; // r13
  int v1133; // eax
  unsigned __int64 v1134; // r12
  int v1135; // r9d
  int v1136; // r8d
  int v1137; // r10d
  int v1138; // edi
  int v1139; // r10d
  unsigned int v1140; // edi
  int v1141; // r10d
  int v1142; // edi
  unsigned int v1143; // r10d
  int v1144; // edi
  int v1145; // r10d
  int v1146; // edi
  unsigned int v1147; // r10d
  int v1148; // edi
  int v1149; // r10d
  unsigned int v1150; // r11d
  int v1151; // r10d
  int v1152; // r11d
  int v1153; // r10d
  int v1154; // r11d
  unsigned int v1155; // r10d
  int v1156; // r11d
  int v1157; // r10d
  int v1158; // r11d
  unsigned int v1159; // r10d
  int v1160; // r11d
  int v1161; // r10d
  int v1162; // r11d
  int v1163; // r10d
  int v1164; // r11d
  int v1165; // r10d
  int v1166; // r11d
  int v1167; // r10d
  int v1168; // r11d
  unsigned __int64 mm; // rcx
  void *v1170; // r11
  int v1171; // edi
  void *v1172; // r9
  void *v1173; // r11
  SIZE_T v1174; // r10
  SIZE_T v1175; // r10
  void *v1176; // r9
  void *v1177; // r11
  SIZE_T v1178; // r10
  void *v1179; // rcx
  unsigned __int64 v1180; // rcx
  void *v1181; // r9
  SIZE_T v1182; // r10
  void *v1183; // r11
  SIZE_T v1184; // rsi
  int *v1185; // rcx
  unsigned __int64 v1186; // r11
  void *v1187; // r9
  void *v1188; // r10
  SIZE_T v1189; // r11
  HANDLE v1190; // rax
  size_t v1191; // rsi
  unsigned int v1192; // edi
  unsigned int v1194; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v1195; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1196; // [rsp+60h] [rbp-A0h]
  unsigned int v1197; // [rsp+64h] [rbp-9Ch]
  int v1198; // [rsp+64h] [rbp-9Ch]
  int v1199; // [rsp+64h] [rbp-9Ch]
  int v1200; // [rsp+64h] [rbp-9Ch]
  unsigned int v1201; // [rsp+64h] [rbp-9Ch]
  unsigned int v1202; // [rsp+64h] [rbp-9Ch]
  int v1203; // [rsp+64h] [rbp-9Ch]
  int v1204; // [rsp+64h] [rbp-9Ch]
  int v1205; // [rsp+64h] [rbp-9Ch]
  unsigned int v1206; // [rsp+64h] [rbp-9Ch]
  unsigned int v1207; // [rsp+64h] [rbp-9Ch]
  unsigned int v1208; // [rsp+64h] [rbp-9Ch]
  int v1209; // [rsp+64h] [rbp-9Ch]
  unsigned int v1210; // [rsp+64h] [rbp-9Ch]
  unsigned int v1211; // [rsp+64h] [rbp-9Ch]
  int v1212; // [rsp+68h] [rbp-98h]
  int v1213; // [rsp+68h] [rbp-98h]
  unsigned int v1214; // [rsp+68h] [rbp-98h]
  unsigned int v1215; // [rsp+68h] [rbp-98h]
  int v1216; // [rsp+68h] [rbp-98h]
  unsigned int v1217; // [rsp+68h] [rbp-98h]
  unsigned int v1218; // [rsp+68h] [rbp-98h]
  unsigned int v1219; // [rsp+68h] [rbp-98h]
  int v1220; // [rsp+68h] [rbp-98h]
  int v1221; // [rsp+68h] [rbp-98h]
  int v1222; // [rsp+68h] [rbp-98h]
  int v1223; // [rsp+68h] [rbp-98h]
  SIZE_T v1224; // [rsp+70h] [rbp-90h]
  SIZE_T v1225; // [rsp+70h] [rbp-90h]
  SIZE_T v1226; // [rsp+70h] [rbp-90h]
  void *v1227; // [rsp+70h] [rbp-90h]
  void *v1228; // [rsp+70h] [rbp-90h]
  void *v1229; // [rsp+70h] [rbp-90h]
  void *v1230; // [rsp+70h] [rbp-90h]
  void *v1231; // [rsp+70h] [rbp-90h]
  void *v1232; // [rsp+70h] [rbp-90h]
  SIZE_T v1233; // [rsp+70h] [rbp-90h]
  void *v1234; // [rsp+70h] [rbp-90h]
  void *v1235; // [rsp+70h] [rbp-90h]
  void *v1236; // [rsp+70h] [rbp-90h]
  SIZE_T v1237; // [rsp+70h] [rbp-90h]
  SIZE_T v1238; // [rsp+70h] [rbp-90h]
  SIZE_T v1239; // [rsp+70h] [rbp-90h]
  char *v1240; // [rsp+70h] [rbp-90h]
  void *v1241; // [rsp+70h] [rbp-90h]
  void *v1242; // [rsp+70h] [rbp-90h]
  void *v1243; // [rsp+70h] [rbp-90h]
  wchar_t *v1244; // [rsp+78h] [rbp-88h]
  wchar_t *v1245; // [rsp+78h] [rbp-88h]
  wchar_t *v1246; // [rsp+78h] [rbp-88h]
  wchar_t *v1247; // [rsp+78h] [rbp-88h]
  wchar_t *v1248; // [rsp+78h] [rbp-88h]
  wchar_t *v1249; // [rsp+78h] [rbp-88h]
  wchar_t *v1250; // [rsp+78h] [rbp-88h]
  wchar_t *v1251; // [rsp+78h] [rbp-88h]
  wchar_t *v1252; // [rsp+78h] [rbp-88h]
  int v1253; // [rsp+78h] [rbp-88h]
  int v1254; // [rsp+78h] [rbp-88h]
  int v1255; // [rsp+78h] [rbp-88h]
  int v1256; // [rsp+78h] [rbp-88h]
  int v1257; // [rsp+78h] [rbp-88h]
  unsigned int v1258; // [rsp+78h] [rbp-88h]
  unsigned int v1259; // [rsp+78h] [rbp-88h]
  int v1260; // [rsp+78h] [rbp-88h]
  int v1261; // [rsp+78h] [rbp-88h]
  LPCWSTR lpModuleName; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNamea; // [rsp+80h] [rbp-80h]
  const wchar_t *lpModuleNameb; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamec; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamed; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamee; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamef; // [rsp+80h] [rbp-80h]
  int lpModuleNameg; // [rsp+80h] [rbp-80h]
  int lpModuleNameh; // [rsp+80h] [rbp-80h]
  int lpModuleNamei; // [rsp+80h] [rbp-80h]
  int lpModuleNamej; // [rsp+80h] [rbp-80h]
  int lpModuleNamek; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamel; // [rsp+80h] [rbp-80h]
  int lpModuleNamem; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNamen; // [rsp+80h] [rbp-80h]
  int lpModuleNameo; // [rsp+80h] [rbp-80h]
  int lpModuleNamep; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNameq; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamer; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNames; // [rsp+80h] [rbp-80h]
  int v1282; // [rsp+88h] [rbp-78h]
  int v1283; // [rsp+88h] [rbp-78h]
  unsigned int n; // [rsp+88h] [rbp-78h]
  int v1285; // [rsp+88h] [rbp-78h]
  int v1286; // [rsp+88h] [rbp-78h]
  int v1287; // [rsp+88h] [rbp-78h]
  int v1288; // [rsp+88h] [rbp-78h]
  int v1289; // [rsp+88h] [rbp-78h]
  int v1290; // [rsp+8Ch] [rbp-74h]
  int v1291; // [rsp+8Ch] [rbp-74h]
  unsigned int v1292; // [rsp+8Ch] [rbp-74h]
  int v1293; // [rsp+8Ch] [rbp-74h]
  unsigned int v1294; // [rsp+8Ch] [rbp-74h]
  unsigned int v1295; // [rsp+8Ch] [rbp-74h]
  int v1296; // [rsp+8Ch] [rbp-74h]
  int v1297; // [rsp+8Ch] [rbp-74h]
  SIZE_T v1298; // [rsp+90h] [rbp-70h]
  void *v1299; // [rsp+90h] [rbp-70h]
  SIZE_T v1300; // [rsp+90h] [rbp-70h]
  SIZE_T v1301; // [rsp+90h] [rbp-70h]
  SIZE_T v1302; // [rsp+90h] [rbp-70h]
  SIZE_T v1303; // [rsp+90h] [rbp-70h]
  SIZE_T v1304; // [rsp+90h] [rbp-70h]
  int v1305; // [rsp+90h] [rbp-70h]
  unsigned int v1306; // [rsp+90h] [rbp-70h]
  unsigned int v1307; // [rsp+90h] [rbp-70h]
  int v1308; // [rsp+90h] [rbp-70h]
  wchar_t *v1309; // [rsp+98h] [rbp-68h]
  wchar_t *v1310; // [rsp+98h] [rbp-68h]
  wchar_t *v1311; // [rsp+98h] [rbp-68h]
  wchar_t *v1312; // [rsp+98h] [rbp-68h]
  int v1313; // [rsp+98h] [rbp-68h]
  int v1314; // [rsp+98h] [rbp-68h]
  int v1315; // [rsp+98h] [rbp-68h]
  int v1316; // [rsp+98h] [rbp-68h]
  unsigned int v1317; // [rsp+98h] [rbp-68h]
  int v1318; // [rsp+98h] [rbp-68h]
  wchar_t *v1319; // [rsp+98h] [rbp-68h]
  int v1320; // [rsp+98h] [rbp-68h]
  LPCWSTR v1321; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1322; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1323; // [rsp+A0h] [rbp-60h]
  WCHAR *v1324; // [rsp+A0h] [rbp-60h]
  WCHAR *v1325; // [rsp+A0h] [rbp-60h]
  WCHAR *v1326; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1327; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1328; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1329; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1330; // [rsp+A0h] [rbp-60h]
  int v1331; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1332; // [rsp+A0h] [rbp-60h]
  unsigned int kk; // [rsp+A0h] [rbp-60h]
  int v1334; // [rsp+A0h] [rbp-60h]
  int v1335; // [rsp+A8h] [rbp-58h]
  int v1336; // [rsp+A8h] [rbp-58h]
  unsigned int v1337; // [rsp+A8h] [rbp-58h]
  unsigned int v1338; // [rsp+A8h] [rbp-58h]
  int v1339; // [rsp+A8h] [rbp-58h]
  int v1340; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1341; // [rsp+B0h] [rbp-50h]
  LPCWSTR v1342; // [rsp+B0h] [rbp-50h]
  LPCWSTR v1343; // [rsp+B0h] [rbp-50h]
  WCHAR *v1344; // [rsp+B0h] [rbp-50h]
  LPCWSTR v1345; // [rsp+B0h] [rbp-50h]
  WCHAR *v1346; // [rsp+B0h] [rbp-50h]
  WCHAR *v1347; // [rsp+B0h] [rbp-50h]
  WCHAR *v1348; // [rsp+B0h] [rbp-50h]
  WCHAR *v1349; // [rsp+B0h] [rbp-50h]
  WCHAR *v1350; // [rsp+B0h] [rbp-50h]
  WCHAR *v1351; // [rsp+B0h] [rbp-50h]
  LPCWSTR v1352; // [rsp+B0h] [rbp-50h]
  char *Src; // [rsp+B8h] [rbp-48h]
  _DWORD *Srca; // [rsp+B8h] [rbp-48h]
  char *Srcb; // [rsp+B8h] [rbp-48h]
  LPVOID Srcc; // [rsp+B8h] [rbp-48h]
  LPVOID Srcd; // [rsp+B8h] [rbp-48h]
  void *Srce; // [rsp+B8h] [rbp-48h]
  LPVOID Srcf; // [rsp+B8h] [rbp-48h]
  _QWORD *Srcg; // [rsp+B8h] [rbp-48h]
  unsigned int *Srch; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *Srci; // [rsp+B8h] [rbp-48h]
  LPVOID Srcj; // [rsp+B8h] [rbp-48h]
  int v1364; // [rsp+C0h] [rbp-40h]
  unsigned int v1365; // [rsp+C0h] [rbp-40h]
  unsigned int v1366; // [rsp+C0h] [rbp-40h]
  int v1367; // [rsp+C0h] [rbp-40h]
  int v1368; // [rsp+C0h] [rbp-40h]
  int v1369; // [rsp+C0h] [rbp-40h]
  int v1370; // [rsp+C0h] [rbp-40h]
  int v1371; // [rsp+C0h] [rbp-40h]
  __int64 v1372; // [rsp+C0h] [rbp-40h]
  unsigned int v1373; // [rsp+C8h] [rbp-38h] BYREF
  LPVOID v1374; // [rsp+D0h] [rbp-30h]
  LPVOID v1375; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v1376; // [rsp+E0h] [rbp-20h]
  SIZE_T v1377; // [rsp+E8h] [rbp-18h]
  SIZE_T Size; // [rsp+F0h] [rbp-10h]
  unsigned int *v1379; // [rsp+F8h] [rbp-8h]
  LPVOID v1380; // [rsp+100h] [rbp+0h]
  __int64 v1381; // [rsp+108h] [rbp+8h]
  SIZE_T v1382; // [rsp+110h] [rbp+10h] BYREF
  SIZE_T v1383; // [rsp+118h] [rbp+18h]
  WCHAR *v1384; // [rsp+120h] [rbp+20h]
  void *v1385; // [rsp+128h] [rbp+28h]
  int v1386; // [rsp+130h] [rbp+30h] BYREF
  int v1387; // [rsp+134h] [rbp+34h]
  int v1388; // [rsp+138h] [rbp+38h] BYREF
  LPVOID v1389; // [rsp+140h] [rbp+40h]
  LPVOID v1390; // [rsp+148h] [rbp+48h]
  LPVOID v1391; // [rsp+150h] [rbp+50h]
  unsigned int v1392; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v1393; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1394; // [rsp+160h] [rbp+60h] BYREF
  int v1395; // [rsp+164h] [rbp+64h] BYREF
  int v1396; // [rsp+168h] [rbp+68h] BYREF
  int v1397; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v1398; // [rsp+170h] [rbp+70h] BYREF
  SIZE_T v1399; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1400; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1401; // [rsp+180h] [rbp+80h] BYREF
  SIZE_T v1402; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1403; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1404; // [rsp+194h] [rbp+94h] BYREF
  int v1405; // [rsp+198h] [rbp+98h] BYREF
  int v1406; // [rsp+19Ch] [rbp+9Ch]
  unsigned int v1407; // [rsp+1A0h] [rbp+A0h] BYREF
  int v1408; // [rsp+1A4h] [rbp+A4h]
  unsigned int v1409; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1410; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1411; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int dwBytes; // [rsp+1B4h] [rbp+B4h] BYREF
  int dwBytes_4; // [rsp+1B8h] [rbp+B8h] BYREF
  int v1414; // [rsp+1BCh] [rbp+BCh] BYREF
  int v1415; // [rsp+1C0h] [rbp+C0h] BYREF
  int v1416; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1417; // [rsp+1C8h] [rbp+C8h] BYREF
  int v1418; // [rsp+1CCh] [rbp+CCh] BYREF
  int v1419; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1420; // [rsp+1D4h] [rbp+D4h] BYREF
  int v1421; // [rsp+1D8h] [rbp+D8h] BYREF
  int v1422; // [rsp+1DCh] [rbp+DCh] BYREF
  int v1423; // [rsp+1E0h] [rbp+E0h] BYREF
  int v1424; // [rsp+1E4h] [rbp+E4h] BYREF
  int v1425; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1426; // [rsp+1ECh] [rbp+ECh] BYREF
  int v1427; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1428; // [rsp+1F4h] [rbp+F4h] BYREF
  int v1429; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1430; // [rsp+1FCh] [rbp+FCh] BYREF
  int v1431; // [rsp+200h] [rbp+100h] BYREF
  int v1432; // [rsp+204h] [rbp+104h] BYREF
  int v1433; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1434; // [rsp+20Ch] [rbp+10Ch] BYREF
  SIZE_T v1435; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1436; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1437; // [rsp+21Ch] [rbp+11Ch] BYREF
  SIZE_T v1438; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1439; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1440; // [rsp+230h] [rbp+130h] BYREF
  LPVOID v1441; // [rsp+238h] [rbp+138h]
  unsigned int v1442; // [rsp+240h] [rbp+140h] BYREF
  int v1443; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1444; // [rsp+248h] [rbp+148h] BYREF
  int v1445; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1446; // [rsp+250h] [rbp+150h] BYREF
  int v1447; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v1448; // [rsp+258h] [rbp+158h] BYREF
  int v1449; // [rsp+25Ch] [rbp+15Ch] BYREF
  int v1450; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v1451; // [rsp+264h] [rbp+164h] BYREF
  wchar_t *v1452; // [rsp+268h] [rbp+168h] BYREF
  size_t pcchLength; // [rsp+270h] [rbp+170h] BYREF
  int *v1454; // [rsp+278h] [rbp+178h] BYREF
  int *v1455; // [rsp+280h] [rbp+180h] BYREF
  int *v1456; // [rsp+288h] [rbp+188h] BYREF
  size_t v1457; // [rsp+290h] [rbp+190h] BYREF
  int *v1458; // [rsp+298h] [rbp+198h] BYREF
  int *v1459; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v1460; // [rsp+2A8h] [rbp+1A8h] BYREF
  void *v1461[5]; // [rsp+2B0h] [rbp+1B0h] BYREF
  void *v1462; // [rsp+2D8h] [rbp+1D8h] BYREF
  int *v1463; // [rsp+2E0h] [rbp+1E0h] BYREF
  LPVOID v1464; // [rsp+2E8h] [rbp+1E8h] BYREF
  HMODULE phModule; // [rsp+2F0h] [rbp+1F0h] BYREF
  void *v1466; // [rsp+2F8h] [rbp+1F8h] BYREF
  unsigned __int64 v1467; // [rsp+300h] [rbp+200h] BYREF
  unsigned __int64 v1468; // [rsp+308h] [rbp+208h] BYREF
  void *v1469; // [rsp+310h] [rbp+210h] BYREF
  _DWORD *v1470; // [rsp+318h] [rbp+218h] BYREF
  _DWORD *v1471; // [rsp+320h] [rbp+220h] BYREF
  int *v1472; // [rsp+328h] [rbp+228h] BYREF
  LPVOID v1473; // [rsp+330h] [rbp+230h] BYREF
  unsigned int *v1474; // [rsp+338h] [rbp+238h] BYREF
  unsigned int *v1475; // [rsp+340h] [rbp+240h] BYREF
  SIZE_T v1476[3]; // [rsp+348h] [rbp+248h] BYREF
  void **v1477; // [rsp+360h] [rbp+260h] BYREF
  _DWORD *v1478; // [rsp+378h] [rbp+278h] BYREF
  WCHAR *v1479; // [rsp+380h] [rbp+280h] BYREF
  __int64 v1480; // [rsp+388h] [rbp+288h]
  void **v1481; // [rsp+390h] [rbp+290h] BYREF
  __int64 v1482; // [rsp+398h] [rbp+298h] BYREF
  _DWORD *v1483; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v1484; // [rsp+3A8h] [rbp+2A8h]
  __int64 v1485; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v1486; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int64 v1487; // [rsp+3C0h] [rbp+2C0h] BYREF
  unsigned int *v1488; // [rsp+3C8h] [rbp+2C8h] BYREF
  wchar_t *String1; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v1490; // [rsp+3E8h] [rbp+2E8h] BYREF
  wchar_t *v1491; // [rsp+3F0h] [rbp+2F0h] BYREF
  wchar_t *v1492; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v1493[3]; // [rsp+400h] [rbp+300h] BYREF
  int *v1494; // [rsp+418h] [rbp+318h] BYREF
  int *v1495; // [rsp+420h] [rbp+320h] BYREF
  int *v1496; // [rsp+428h] [rbp+328h] BYREF
  void *v1497[5]; // [rsp+430h] [rbp+330h] BYREF
  void *v1498; // [rsp+458h] [rbp+358h] BYREF
  int *v1499; // [rsp+460h] [rbp+360h] BYREF
  unsigned int *v1500; // [rsp+468h] [rbp+368h] BYREF
  HMODULE hModule; // [rsp+470h] [rbp+370h] BYREF
  void *v1502; // [rsp+478h] [rbp+378h] BYREF
  SIZE_T v1503; // [rsp+480h] [rbp+380h] BYREF
  unsigned __int64 v1504; // [rsp+488h] [rbp+388h] BYREF
  SIZE_T v1505; // [rsp+490h] [rbp+390h] BYREF
  LPVOID v1506[2]; // [rsp+498h] [rbp+398h] BYREF
  _DWORD *v1507; // [rsp+4A8h] [rbp+3A8h] BYREF
  __int128 v1508; // [rsp+4B0h] [rbp+3B0h]
  __int128 v1509; // [rsp+4C0h] [rbp+3C0h]
  _OWORD *v1510; // [rsp+4D8h] [rbp+3D8h] BYREF
  unsigned __int64 *v1511; // [rsp+4E8h] [rbp+3E8h] BYREF
  LPVOID lpMem[2]; // [rsp+4F0h] [rbp+3F0h] BYREF
  LPVOID v1513[2]; // [rsp+500h] [rbp+400h]
  size_t v1514; // [rsp+510h] [rbp+410h] BYREF
  LPVOID v1515; // [rsp+518h] [rbp+418h]
  _OWORD *v1516; // [rsp+528h] [rbp+428h] BYREF
  _QWORD *v1517; // [rsp+538h] [rbp+438h] BYREF
  wchar_t **v1518; // [rsp+548h] [rbp+448h] BYREF
  void *v1519; // [rsp+558h] [rbp+458h] BYREF
  int *v1520; // [rsp+568h] [rbp+468h] BYREF
  _DWORD *v1521; // [rsp+578h] [rbp+478h] BYREF
  _QWORD *v1522; // [rsp+588h] [rbp+488h] BYREF
  __int128 v1523; // [rsp+590h] [rbp+490h]
  __int128 v1524; // [rsp+5A0h] [rbp+4A0h] BYREF
  LPVOID v1525[3]; // [rsp+5B0h] [rbp+4B0h]
  _DWORD *v1526; // [rsp+5C8h] [rbp+4C8h] BYREF
  _QWORD v1527[2]; // [rsp+5D0h] [rbp+4D0h] BYREF
  int v1528; // [rsp+5E0h] [rbp+4E0h]
  unsigned int v1529; // [rsp+5E4h] [rbp+4E4h]
  int v1530; // [rsp+5E8h] [rbp+4E8h]
  _QWORD v1531[2]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v1532; // [rsp+600h] [rbp+500h]
  unsigned int v1533; // [rsp+604h] [rbp+504h]
  int v1534; // [rsp+608h] [rbp+508h]
  _BYTE v1535[24]; // [rsp+610h] [rbp+510h] BYREF
  __int64 v1536; // [rsp+628h] [rbp+528h]
  _BYTE v1537[4]; // [rsp+680h] [rbp+580h] BYREF
  int v1538; // [rsp+684h] [rbp+584h]
  int v1539; // [rsp+688h] [rbp+588h]
  __int16 v1540; // [rsp+692h] [rbp+592h]
  __int64 v1541; // [rsp+698h] [rbp+598h]
  _BYTE v1542[4]; // [rsp+6F0h] [rbp+5F0h] BYREF
  int v1543; // [rsp+6F4h] [rbp+5F4h]
  int v1544; // [rsp+6F8h] [rbp+5F8h]
  const WCHAR *v1545; // [rsp+708h] [rbp+608h]
  _BYTE v1546[24]; // [rsp+760h] [rbp+660h] BYREF
  const WCHAR *v1547; // [rsp+778h] [rbp+678h]
  _BYTE v1548[4]; // [rsp+7D0h] [rbp+6D0h] BYREF
  int v1549; // [rsp+7D4h] [rbp+6D4h]
  int v1550; // [rsp+7D8h] [rbp+6D8h]
  const WCHAR *v1551; // [rsp+7E8h] [rbp+6E8h]
  _BYTE v1552[24]; // [rsp+840h] [rbp+740h] BYREF
  const WCHAR *v1553; // [rsp+858h] [rbp+758h]
  _BYTE v1554[4]; // [rsp+8B0h] [rbp+7B0h] BYREF
  int v1555; // [rsp+8B4h] [rbp+7B4h]
  int v1556; // [rsp+8B8h] [rbp+7B8h]
  unsigned int *v1557; // [rsp+8C8h] [rbp+7C8h]
  _BYTE v1558[4]; // [rsp+920h] [rbp+820h] BYREF
  int v1559; // [rsp+924h] [rbp+824h]
  int v1560; // [rsp+928h] [rbp+828h]
  const WCHAR *v1561; // [rsp+938h] [rbp+838h]
  _BYTE v1562[24]; // [rsp+990h] [rbp+890h] BYREF
  SIZE_T v1563; // [rsp+9A8h] [rbp+8A8h]
  int v1564; // [rsp+A00h] [rbp+900h] BYREF
  int v1565; // [rsp+A04h] [rbp+904h]
  void *v1566; // [rsp+A08h] [rbp+908h]
  void *v1567; // [rsp+A10h] [rbp+910h]
  void *v1568; // [rsp+A18h] [rbp+918h]
  wchar_t *v1569; // [rsp+A20h] [rbp+920h]
  wchar_t *v1570; // [rsp+A28h] [rbp+928h]
  __int64 v1571; // [rsp+A30h] [rbp+930h]
  int v1572; // [rsp+A38h] [rbp+938h]
  __int128 v1573; // [rsp+A3Ch] [rbp+93Ch] BYREF
  __int128 v1574; // [rsp+A4Ch] [rbp+94Ch] BYREF
  unsigned int v1575; // [rsp+A5Ch] [rbp+95Ch] BYREF
  unsigned int v1576; // [rsp+A60h] [rbp+960h]
  unsigned int v1577; // [rsp+A64h] [rbp+964h]
  unsigned int v1578; // [rsp+A68h] [rbp+968h]
  __int64 v1579; // [rsp+A70h] [rbp+970h]
  unsigned __int64 v1580; // [rsp+A78h] [rbp+978h]
  unsigned __int64 v1581; // [rsp+A80h] [rbp+980h]
  __int64 v1582; // [rsp+A88h] [rbp+988h]
  __int128 v1583; // [rsp+A90h] [rbp+990h] BYREF
  __int128 v1584; // [rsp+AA0h] [rbp+9A0h]
  __int128 v1585; // [rsp+AB0h] [rbp+9B0h] BYREF
  __int128 v1586; // [rsp+AC0h] [rbp+9C0h] BYREF
  __int64 v1587; // [rsp+AD0h] [rbp+9D0h] BYREF
  unsigned int v1588; // [rsp+AD8h] [rbp+9D8h]
  int v1589; // [rsp+ADCh] [rbp+9DCh]
  __int128 v1590; // [rsp+AE0h] [rbp+9E0h] BYREF
  char v1591[12]; // [rsp+AF0h] [rbp+9F0h] BYREF
  unsigned int v1592; // [rsp+AFCh] [rbp+9FCh]
  __int128 v1593; // [rsp+B10h] [rbp+A10h] BYREF
  __int128 v1594; // [rsp+B20h] [rbp+A20h] BYREF
  __int64 v1595; // [rsp+B30h] [rbp+A30h]
  __int128 v1596; // [rsp+B38h] [rbp+A38h] BYREF
  __int128 v1597; // [rsp+B48h] [rbp+A48h] BYREF
  __int64 v1598; // [rsp+B58h] [rbp+A58h]
  __int128 v1599; // [rsp+B60h] [rbp+A60h] BYREF
  __int128 v1600; // [rsp+B70h] [rbp+A70h]
  __int64 v1601; // [rsp+B80h] [rbp+A80h]
  int v1602; // [rsp+B88h] [rbp+A88h]
  __int128 v1603; // [rsp+B90h] [rbp+A90h] BYREF
  __int128 v1604; // [rsp+BA0h] [rbp+AA0h]
  __int64 v1605; // [rsp+BB0h] [rbp+AB0h]
  int v1606; // [rsp+BB8h] [rbp+AB8h]
  __int128 v1607; // [rsp+BC0h] [rbp+AC0h] BYREF
  __int128 v1608; // [rsp+BD0h] [rbp+AD0h]
  __int64 v1609; // [rsp+BE0h] [rbp+AE0h]
  int v1610; // [rsp+BE8h] [rbp+AE8h]
  __int128 v1611; // [rsp+BF0h] [rbp+AF0h] BYREF
  __int128 v1612; // [rsp+C00h] [rbp+B00h]
  __int64 v1613; // [rsp+C10h] [rbp+B10h]
  int v1614; // [rsp+C18h] [rbp+B18h]
  __int128 v1615; // [rsp+C20h] [rbp+B20h] BYREF
  __int128 v1616; // [rsp+C30h] [rbp+B30h]
  __int64 v1617; // [rsp+C40h] [rbp+B40h]
  int v1618; // [rsp+C48h] [rbp+B48h]
  _DWORD v1619[6]; // [rsp+C50h] [rbp+B50h] BYREF
  char v1620; // [rsp+C6Ah] [rbp+B6Ah]
  wchar_t v1621[34]; // [rsp+C6Ch] [rbp+B6Ch] BYREF
  _DWORD v1622[6]; // [rsp+CB0h] [rbp+BB0h] BYREF
  char v1623; // [rsp+CCAh] [rbp+BCAh]
  wchar_t v1624[34]; // [rsp+CCCh] [rbp+BCCh] BYREF
  _DWORD v1625[6]; // [rsp+D10h] [rbp+C10h] BYREF
  char v1626; // [rsp+D2Ah] [rbp+C2Ah]
  wchar_t v1627[34]; // [rsp+D2Ch] [rbp+C2Ch] BYREF
  _BYTE v1628[68]; // [rsp+D70h] [rbp+C70h] BYREF
  __int16 v1629; // [rsp+DB4h] [rbp+CB4h]
  unsigned __int16 v1630; // [rsp+E16h] [rbp+D16h]
  __int64 v1631; // [rsp+E1Ch] [rbp+D1Ch]
  _QWORD v1632[6]; // [rsp+E50h] [rbp+D50h] BYREF
  int v1633; // [rsp+E80h] [rbp+D80h] BYREF
  __int128 v1634; // [rsp+E88h] [rbp+D88h]
  __int128 v1635; // [rsp+E98h] [rbp+D98h]
  __int128 v1636; // [rsp+EA8h] [rbp+DA8h]
  __int64 v1637; // [rsp+EB8h] [rbp+DB8h]
  _QWORD v1638[20]; // [rsp+EC0h] [rbp+DC0h] BYREF
  _WORD v1639[8]; // [rsp+F60h] [rbp+E60h] BYREF
  _BYTE v1640[176]; // [rsp+F70h] [rbp+E70h] BYREF
  WCHAR Filename[264]; // [rsp+1020h] [rbp+F20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1268h] [rbp+1168h]

  v1488 = 0LL;
  v1406 = 0;
  v1408 = 0;
  v1382 = 0LL;
  v1282 = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1387 = -1;
  v0 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_44;
  v1212 = 0;
  v1 = 0LL;
  v2 = MemoryAlloc(0x338uLL);
  if ( !v2 )
    goto LABEL_11;
  v3 = 0;
  v4 = -1;
  v5 = 0;
  v6 = 0;
  v7 = v2 + 7;
  v8 = (unsigned __int8 *)&unk_180697D32;
  v9 = 103LL;
  do
  {
    v10 = v8[1] | ((*v8 | ((*(v8 - 1) | (*(v8 - 2) << 8)) << 8)) << 8);
    v11 = v8[5] | ((v8[4] | ((v8[3] | (v8[2] << 8)) << 8)) << 8);
    v12 = v10 ^ v6;
    v8 += 8;
    v13 = v11 ^ v5 ^ v12 ^ 0xAC987321;
    v14 = (__ROL4__(v13, 10) + 4991 * __ROL4__(v13 + 1419157410, 5)) ^ v12;
    v15 = (43881 * __ROR4__(v14 + 133239679, 9) - __ROL4__(v14, 2)) ^ v13;
    v16 = (24670 * v15 - (v15 >> 13) - 123127970) ^ v14;
    v17 = (2033 * __ROL4__(v16 ^ 0xAB69, 6) - __ROL4__(v16, 2)) ^ v15;
    v18 = (133239679 - (v17 ^ 0xAB69605E)) ^ v16;
    v19 = (43881 * (v18 ^ 0x137F)) ^ __ROR4__(v18, 6) ^ v17;
    v20 = (__ROL4__(v19, 2) + 24670 * __ROR4__(v19 + 133239679, 15)) ^ v18;
    v21 = (2033 * __ROR4__(v20 + 1419157410, 14) - __ROL4__(v20, 8)) ^ v19;
    v22 = __ROR4__(v21, 10) ^ (4991 * __ROR4__(v21 ^ 0xAB69605E, 12)) ^ v20;
    v23 = v21 ^ (v22 >> 10) ^ (43881 * (v22 ^ 0x7F1));
    v24 = (2033 * (__ROR4__(~v23, 5) + 24670)) ^ v22;
    v25 = v23 ^ (v24 - 2033) ^ 0xAB69605E;
    v26 = ((v25 >> 2) + 4991 * __ROL4__(v23 ^ (v24 - 2033) ^ 0xAB6967AF, 2)) ^ v24;
    v27 = (__ROL4__(v26, 7) + 43881 * __ROR4__(v26 - 133239679, 6)) ^ v25;
    v28 = (24670 * (v27 ^ 0x137F) + __ROR4__(v27, 9)) ^ v26;
    v29 = (__ROL4__(v28, 7) + 2033 * __ROL4__(v28 ^ 0xAB69, 5)) ^ v27;
    v30 = v28 ^ v29 ^ 0xAC987321;
    v31 = (4991 * __ROR4__(v30, 3) - 219010071) ^ v29;
    v32 = (24670 * __ROR4__(v31 - 133239679, 1) - __ROR4__(v31, 6)) ^ v30;
    v33 = (__ROL4__(v32, 14) + 2033 * __ROL4__(v32 - 1419157410, 3)) ^ v31;
    v34 = (4991 * __ROL4__(v33 - 1419157410, 15) - __ROR4__(v33, 14)) ^ v32;
    v35 = (v34 >> 3) ^ (43881 * (v34 ^ 0x605E)) ^ v33;
    v36 = v3 ^ __ROL4__(v35, 2) ^ (24670 * __ROL4__(v35 ^ 0x7F1137F, 4)) ^ v34;
    v37 = v4 ^ v35;
    *(v7 - 4) = v36;
    v38 = __ROR4__(v36, 8);
    *v7 = v37;
    v39 = __ROR4__(v37, 8);
    *(v7 - 5) = v38;
    v40 = __ROR4__(v38, 8);
    *(v7 - 1) = v39;
    v41 = __ROR4__(v39, 8);
    *(v7 - 6) = v40;
    v42 = __ROR4__(v40, 8);
    *(v7 - 2) = v41;
    v43 = __ROR4__(v41, 8);
    *(v7 - 7) = v42;
    *(v7 - 3) = v43;
    v6 = __ROR4__(v42, 8);
    v5 = __ROR4__(v43, 8);
    v3 = v10;
    v4 = v11;
    v7 += 8;
    --v9;
  }
  while ( v9 );
  v44 = 0;
  v45 = 0LL;
  v1 = 0LL;
  v46 = 0;
  do
    v44 ^= v2[v45++];
  while ( v45 < 0x338 );
  if ( v44 != 64LL )
  {
    MemoryFree(v2);
LABEL_11:
    v46 = -1073741702;
    goto LABEL_12;
  }
  v1 = v2;
  v50 = (const WCHAR *)v2;
  v2[823] = 0;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  if ( *v2 )
  {
    v51 = 0;
    while ( 1 )
    {
      v52 = v50;
      v53 = -1LL;
      v46 = 0;
      do
        ++v53;
      while ( v50[v53] );
      v54 = &v50[v53];
      v55 = (char *)&WARBIRD::g_arModuleInfo + 24 * v51;
      if ( !GetModuleHandleExW(0, v52, (HMODULE *)v55) )
        break;
      if ( **(_WORD **)v55 == 23117
        && (v56 = *(int *)(*(_QWORD *)v55 + 60LL), (unsigned int)v56 < 0x10000000)
        && (v57 = *(_QWORD *)v55 + v56, v57 >= *(_QWORD *)v55)
        && *(_DWORD *)v57 == 17744 )
      {
        if ( ((*(_WORD *)(v57 + 24) - 267) & 0xFEFF) != 0 )
        {
          v46 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v55 + 12) = *(_QWORD *)(v57 + 136);
          *((_DWORD *)v55 + 2) = *(_DWORD *)(v57 + 80);
        }
      }
      else
      {
        v46 = -1073741701;
      }
      v58 = *(_DWORD *)(v54 + 1);
      v50 = v54 + 3;
      for ( i = 0; i < v58; ++i )
      {
        v60 = (const CHAR *)v50;
        v61 = -1LL;
        do
          ++v61;
        while ( *((_BYTE *)v50 + v61) );
        v50 = (const WCHAR *)((char *)v50 + v61 + 1);
        if ( v46 >= 0 )
        {
          ProcAddress = (void **)GetProcAddress(*(HMODULE *)v55, v60);
          if ( !ProcAddress )
            goto LABEL_12;
          (&WARBIRD::g_FuncAddress)[v1212] = ProcAddress;
        }
        ++v1212;
      }
      ++v51;
      if ( !*(_BYTE *)v50 )
        goto LABEL_12;
    }
    v46 = -1073741702;
LABEL_12:
    if ( !v1 )
      goto LABEL_14;
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v1);
LABEL_14:
  if ( v46 >= 0 )
  {
    v0 = g_WarbirdSecureFunctionsRefCount;
LABEL_44:
    g_WarbirdSecureFunctionsRefCount = v0 + 1;
    goto LABEL_45;
  }
  v48 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v49 = 4LL;
  do
  {
    if ( *v48 )
      FreeLibrary(*v48);
    v48 += 3;
    --v49;
  }
  while ( v49 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_45:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  String1 = 0LL;
  v1491 = 0LL;
  v63 = 0;
  LastError = 0;
  if ( NtCurrentPeb()->SessionId )
  {
    v65 = ((__int64 (*)(void))off_1807A9210)();
    if ( !v65 )
    {
LABEL_47:
      LastError = GetLastError();
      v66 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v66 = LastError < 0;
      }
      if ( !v66 )
        LastError = -2147467259;
      goto LABEL_98;
    }
    v1492 = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    while ( 1 )
    {
      v69 = 0LL;
      if ( v68 )
        v69 = v68;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1807A9230)(
                           v65,
                           2LL,
                           v69,
                           v67,
                           &v1409) )
      {
        String1 = v68;
        goto LABEL_66;
      }
      v70 = GetLastError();
      if ( v70 != 122 )
        break;
      if ( v68 )
        goto LABEL_60;
      v68 = (wchar_t *)MemoryAlloc(v1409);
      if ( !v68 )
      {
        LastError = -2147024882;
LABEL_66:
        v1492 = 0LL;
        goto LABEL_67;
      }
      v1492 = v68;
      v67 = v1409;
    }
    if ( !v70 )
    {
LABEL_60:
      LastError = -2147467259;
      goto LABEL_67;
    }
    if ( v70 > 0 )
      LastError = (unsigned __int16)v70 | 0x80070000;
    else
      LastError = v70;
LABEL_67:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1492);
    if ( LastError < 0 )
      goto LABEL_98;
    v71 = off_1807A9228;
    CurrentThreadId = GetCurrentThreadId();
    v73 = ((__int64 (__fastcall *)(_QWORD))v71)(CurrentThreadId);
    if ( !v73 )
    {
      LastError = GetLastError();
      v74 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v74 = LastError < 0;
      }
      if ( !v74 )
        LastError = -2147467259;
      goto LABEL_98;
    }
    v1452 = 0LL;
    LastError = 0;
    v75 = 0LL;
    v76 = 0LL;
    while ( 1 )
    {
      v77 = 0LL;
      if ( v76 )
        v77 = v76;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1807A9230)(
                           v73,
                           2LL,
                           v77,
                           v75,
                           &v1410) )
      {
        v1491 = v76;
        goto LABEL_88;
      }
      v78 = GetLastError();
      if ( v78 != 122 )
        break;
      if ( v76 )
        goto LABEL_82;
      v76 = (wchar_t *)MemoryAlloc(v1410);
      if ( !v76 )
      {
        LastError = -2147024882;
LABEL_88:
        v1452 = 0LL;
        goto LABEL_89;
      }
      v1452 = v76;
      v75 = v1410;
    }
    if ( !v78 )
    {
LABEL_82:
      LastError = -2147467259;
      goto LABEL_89;
    }
    if ( v78 > 0 )
      LastError = (unsigned __int16)v78 | 0x80070000;
    else
      LastError = v78;
LABEL_89:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1452);
    if ( LastError < 0 )
      goto LABEL_98;
    if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1491 && !wcscmp_0(v1491, L"Default") )
    {
      v1386 = 0;
      CurrentProcess = GetCurrentProcess();
      if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1386, 4LL) )
        goto LABEL_47;
      if ( (v1386 & 0xF) == 0 )
        v63 = 1;
    }
  }
  v1282 = v63;
LABEL_98:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1491);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&String1);
  v80 = 0;
  if ( LastError >= 0 )
    v80 = v1282;
  v1364 = v80;
  v81 = 4LL;
  v82 = LocalAlloc(0x40u, 4uLL);
  v1385 = v82;
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1382);
  if ( !v82 )
  {
    v1382 = 0LL;
    v83 = -2147024882;
    LODWORD(v84) = 0;
LABEL_102:
    v85 = v1386;
    goto LABEL_103;
  }
  v1382 = (SIZE_T)v82;
  v89 = 0LL;
  v1244 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  *(_OWORD *)v1513 = 0LL;
  v90 = GetProcessHeap();
  v91 = (WCHAR *)HeapAlloc(v90, 8u, 0xA0uLL);
  v83 = -1073741801;
  v84 = 0LL;
  if ( !v91 )
  {
    v1335 = -1073741801;
LABEL_116:
    v92 = v80;
    v81 = 4LL;
    goto LABEL_214;
  }
  *(_OWORD *)v91 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
  *((_OWORD *)v91 + 1) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
  *((_OWORD *)v91 + 2) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
  *((_OWORD *)v91 + 3) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
  *((_OWORD *)v91 + 4) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
  *((_OWORD *)v91 + 5) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
  *((_OWORD *)v91 + 6) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
  *((_OWORD *)v91 + 7) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
  *((_OWORD *)v91 + 8) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
  *((_OWORD *)v91 + 9) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
  lpModuleName = v91;
  v93 = GetProcessHeap();
  v94 = HeapAlloc(v93, 8u, 8uLL);
  v95 = v94;
  v84 = 0LL;
  if ( !v94 )
    goto LABEL_118;
  *v94 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v1244 = (wchar_t *)v94;
  v1309 = (wchar_t *)__rdtsc();
  dwBytes = 0;
  v83 = RtlUIntAdd(4u, 4, (unsigned int *)&v1405);
  v1335 = v83;
  if ( v83 < 0 )
  {
    v92 = v80;
    goto LABEL_616;
  }
  v97 = RtlUIntAdd(0, v1405, &dwBytes);
  v83 = v97 | 0x10000000;
  v1335 = v97 | 0x10000000;
  v92 = v80;
  if ( v97 < 0 )
    goto LABEL_130;
  v83 = RtlUIntAdd(v98, 160, (unsigned int *)&dwBytes_4);
  v1335 = v83;
  if ( v83 < 0 )
    goto LABEL_616;
  v99 = RtlUIntAdd(dwBytes, dwBytes_4, &dwBytes);
  v83 = v100 | v99;
  v1335 = v100 | v99;
  if ( (v100 | v99) < 0 )
    goto LABEL_130;
  v83 = RtlUIntAdd(v98, (int)v98 + 4, (unsigned int *)&v1414);
  v1335 = v83;
  if ( v83 < 0 )
    goto LABEL_616;
  v101 = RtlUIntAdd(dwBytes, v1414, &dwBytes);
  v83 = v102 | v101;
  v1335 = v102 | v101;
  if ( (v102 | v101) < 0 )
    goto LABEL_130;
  v83 = RtlUIntAdd(v98, (int)v98 + 4, (unsigned int *)&v1415);
  v1335 = v83;
  if ( v83 < 0 )
    goto LABEL_616;
  v103 = RtlUIntAdd(dwBytes, v1415, &dwBytes);
  v83 = v105 | v103;
  v1335 = v105 | v103;
  if ( (v105 | v103) < 0 )
  {
LABEL_130:
    v89 = v91;
    v81 = v98;
    goto LABEL_214;
  }
  if ( StringCchLengthW(L"Shell-ConfigureChatIcon-State", v104, &pcchLength) < 0 )
  {
    v83 = -1073741762;
    v1335 = -1073741762;
    goto LABEL_130;
  }
  v83 = RtlUIntAdd(v98, 2 * (int)++pcchLength, (unsigned int *)&v1416);
  v1335 = v83;
  if ( v83 >= 0 )
  {
    v106 = RtlUIntAdd(dwBytes, v1416, &dwBytes);
    v83 = v106 | 0x10000000;
    v1335 = v106 | 0x10000000;
    if ( v106 < 0 )
      goto LABEL_130;
    v83 = RtlUIntAdd(v98, v98, (unsigned int *)&v1418);
    v1335 = v83;
    if ( v83 >= 0 )
    {
      v107 = RtlUIntAdd(dwBytes, v1418, &dwBytes);
      v83 = v108 | v107;
      v1335 = v108 | v107;
      if ( (v108 | v107) < 0 )
        goto LABEL_130;
      v83 = RtlUIntAdd(v98, v98, (unsigned int *)&v1419);
      v1335 = v83;
      if ( v83 >= 0 )
      {
        v109 = RtlUIntAdd(dwBytes, v1419, &dwBytes);
        v83 = v110 | v109;
        v1335 = v110 | v109;
        if ( (v110 | v109) < 0 )
          goto LABEL_130;
        HIDWORD(lpMem[0]) = dwBytes;
        v111 = dwBytes;
        v112 = GetProcessHeap();
        v113 = HeapAlloc(v112, 8u, v111);
        v114 = v113;
        v84 = 0LL;
        if ( !v113 )
        {
          v83 = -1073741801;
LABEL_118:
          v1335 = v83;
LABEL_119:
          v89 = v91;
          goto LABEL_116;
        }
        lpMem[1] = v113;
        LODWORD(lpMem[0]) = 0;
        v83 = RtlULongLongAdd((unsigned __int64)v113, 4LL, (unsigned __int64 *)&v1507);
        v1335 = v83;
        if ( v83 < 0 )
          goto LABEL_119;
        if ( v114 + 2 > (_DWORD *)((char *)v114 + HIDWORD(lpMem[0])) )
        {
LABEL_141:
          v83 = -1073741789;
          goto LABEL_118;
        }
        *v114 = 4;
        *v1507 = v84;
        v115 = ++LODWORD(lpMem[0]);
        if ( lpMem[1] == (LPVOID)v84 )
        {
          v81 = 4LL;
          v83 = RtlUIntAdd(4u, 160, (unsigned int *)&v1431);
          v1335 = v83;
          if ( v83 < 0 )
            goto LABEL_166;
          v83 = RtlUIntAdd(HIDWORD(lpMem[0]), v1431, (unsigned int *)lpMem + 1);
          v1335 = v83;
          v116 = (int)lpMem[0];
          if ( v83 >= 0 )
          {
LABEL_145:
            v117 = v116 + 1;
            LODWORD(lpMem[0]) = v117;
            v81 = 4LL;
            if ( lpMem[1] != (LPVOID)v84 )
            {
              v124 = (int *)lpMem[1];
              v1455 = (int *)lpMem[1];
              if ( v117 )
              {
                do
                {
                  v83 = RtlUIntAdd(4u, *v124, &v1444);
                  v1335 = v83;
                  if ( v83 < 0 )
                    goto LABEL_166;
                  v83 = RtlULongLongAdd((unsigned __int64)v124, v1444, (unsigned __int64 *)&v1455);
                  v1335 = v83;
                  if ( v83 < 0 )
                    goto LABEL_166;
                  v124 = v1455;
                }
                while ( v125 + 1 < v126 );
              }
              v83 = RtlULongLongAdd((unsigned __int64)v124, 4LL, (unsigned __int64 *)&v1517);
              v1335 = v83;
              if ( v83 >= 0 )
              {
                if ( v124 + 3 > (int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                  goto LABEL_164;
                *v124 = 8;
                *v1517 = *v95;
                v122 = (int)lpMem[0];
LABEL_157:
                v123 = v122 + 1;
                LODWORD(lpMem[0]) = v123;
                if ( lpMem[1] == (LPVOID)v84 )
                {
                  v83 = RtlUIntAdd(4u, 8, (unsigned int *)&v1445);
                  v1335 = v83;
                  if ( v83 < 0 )
                    goto LABEL_166;
                  v83 = RtlUIntAdd(HIDWORD(lpMem[0]), v1445, (unsigned int *)lpMem + 1);
                  v1335 = v83;
                  v128 = (int)lpMem[0];
                  if ( v83 >= 0 )
                  {
LABEL_172:
                    LODWORD(lpMem[0]) = v128 + 1;
                    if ( StringCchLengthW(L"Shell-ConfigureChatIcon-State", v127, &v1457) < 0 )
                    {
                      v83 = -1073741762;
                      goto LABEL_165;
                    }
                    v83 = RtlULongLongAdd(v1457, 1LL, &v1457);
                    v1335 = v83;
                    if ( v83 >= 0 )
                    {
                      if ( 2 * (_DWORD)v1457 )
                      {
                        if ( lpMem[1] == (LPVOID)v84 )
                        {
                          v83 = RtlUIntAdd(4u, 2 * (int)v1457, (unsigned int *)&v1447);
                          v1335 = v83;
                          if ( v83 >= 0 )
                          {
                            v83 = RtlUIntAdd(HIDWORD(lpMem[0]), v1447, (unsigned int *)lpMem + 1);
                            v1335 = v83;
                            v132 = (unsigned int)lpMem[0];
                            if ( v83 >= 0 )
                            {
                              v132 = ++LODWORD(lpMem[0]);
                              v83 = v84;
                              v1335 = v84;
                            }
                          }
                        }
                        else
                        {
                          v133 = (int *)lpMem[1];
                          v1458 = (int *)lpMem[1];
                          if ( v132 )
                          {
                            while ( 1 )
                            {
                              v83 = RtlUIntAdd(4u, *v133, &v1448);
                              v1335 = v83;
                              if ( v83 < 0 )
                                break;
                              v83 = RtlULongLongAdd((unsigned __int64)v133, v1448, (unsigned __int64 *)&v1458);
                              v1335 = v83;
                              if ( v83 < 0 )
                                break;
                              v133 = v1458;
                              if ( v134 + 1 >= v132 )
                                goto LABEL_193;
                            }
                          }
                          else
                          {
LABEL_193:
                            v83 = RtlULongLongAdd((unsigned __int64)v133, 4LL, (unsigned __int64 *)&v1519);
                            v1335 = v83;
                            v84 = 0LL;
                            if ( v83 < 0 )
                              goto LABEL_199;
                            if ( (char *)v133 + v135 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
                            {
                              v83 = -1073741789;
                              v1335 = -1073741789;
                              goto LABEL_199;
                            }
                            *v133 = v135;
                            memcpy_0(v1519, L"Shell-ConfigureChatIcon-State", (unsigned int)v135);
                            v132 = ++LODWORD(lpMem[0]);
                          }
                          v84 = 0LL;
                        }
                      }
                      else
                      {
                        v83 = -1073741811;
                        v1335 = -1073741811;
                      }
                    }
LABEL_199:
                    v92 = v80;
                    if ( v83 < 0 )
                      goto LABEL_212;
                    if ( lpMem[1] == (LPVOID)v84 )
                    {
                      v83 = RtlUIntAdd(4u, 4, (unsigned int *)&v1449);
                      v1335 = v83;
                      if ( v83 >= 0 )
                      {
                        v83 = RtlUIntAdd(HIDWORD(lpMem[0]), v1449, (unsigned int *)lpMem + 1);
                        v1335 = v83;
                        v137 = (int)lpMem[0];
                        if ( v83 >= 0 )
                          goto LABEL_203;
                        goto LABEL_232;
                      }
                    }
                    else
                    {
                      v139 = (int *)lpMem[1];
                      v1459 = (int *)lpMem[1];
                      if ( !v132 )
                      {
LABEL_208:
                        v83 = RtlULongLongAdd((unsigned __int64)v139, 4LL, (unsigned __int64 *)&v1520);
                        v1335 = v83;
                        if ( v83 >= 0 )
                        {
                          if ( v139 + 2 > (int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                            goto LABEL_210;
                          *v139 = 4;
                          *v1520 = v80;
                          v137 = (int)lpMem[0];
LABEL_203:
                          v138 = v137 + 1;
                          LODWORD(lpMem[0]) = v138;
                          if ( lpMem[1] == (LPVOID)v84 )
                          {
                            v81 = 4LL;
                            v83 = RtlUIntAdd(4u, 4, (unsigned int *)&v1450);
                            v1335 = v83;
                            if ( v83 < 0 )
                              goto LABEL_166;
                            v83 = RtlUIntAdd(HIDWORD(lpMem[0]), v1450, (unsigned int *)lpMem + 1);
                            v1335 = v83;
                            if ( v83 >= 0 )
                            {
                              ++LODWORD(lpMem[0]);
LABEL_245:
                              v83 = RtlUIntAdd(4u, 4, &v1393);
                              v1335 = v83;
                              if ( v83 < 0 )
                                goto LABEL_166;
                              v154 = v1393;
                              v1394 = v1393;
                              v83 = RtlUIntAdd(v153, 8, (unsigned int *)&v1395);
                              v1335 = v83;
                              if ( v83 < 0 )
                                goto LABEL_166;
                              v83 = RtlUIntAdd(v154, v1395, &v1394);
                              v1335 = v83;
                              if ( v83 >= 0 )
                              {
                                v83 = RtlUIntAdd(4u, 4, (unsigned int *)&v1396);
                                v1335 = v83;
                                if ( v83 < 0 )
                                  goto LABEL_166;
                                v83 = RtlUIntAdd(v1394, v1396, &v1394);
                                v1335 = v83;
                                if ( v83 >= 0 )
                                {
                                  v83 = RtlUIntAdd(4u, 4, (unsigned int *)&v1397);
                                  v1335 = v83;
                                  if ( v83 < 0 )
                                    goto LABEL_166;
                                  v83 = RtlUIntAdd(v1394, v1397, &v1394);
                                  v1335 = v83;
                                  if ( v83 >= 0 )
                                  {
                                    v83 = RtlUIntAdd(4u, 4, (unsigned int *)&v1398);
                                    v1335 = v83;
                                    if ( v83 < 0 )
                                      goto LABEL_166;
                                    v83 = RtlUIntAdd(v1394, v1398, &v1394);
                                    v1335 = v83;
                                    if ( v83 >= 0 )
                                    {
                                      v83 = RtlUIntAdd(4u, 4, (unsigned int *)&v1388);
                                      v1335 = v83;
                                      if ( v83 < 0 )
                                        goto LABEL_166;
                                      v83 = RtlUIntAdd(v1394, v1388, &v1394);
                                      v1335 = v83;
                                      if ( v83 >= 0 )
                                      {
                                        v1213 = v1394;
                                        v155 = (unsigned __int8 *)v84;
                                        v1298 = v84;
                                        v156 = v84;
                                        v157 = (_DWORD *)v84;
                                        v1321 = (LPCWSTR)v84;
                                        v1375 = (LPVOID)v84;
                                        v1283 = v84;
                                        v158 = (unsigned int *)v84;
                                        v1389 = (LPVOID)v84;
                                        v1390 = (LPVOID)v84;
                                        v1374 = (LPVOID)__rdtsc();
                                        v1417 = 8;
                                        v159 = RtlUIntAdd(8u, SHIDWORD(lpMem[0]), &v1417);
                                        if ( v159 >= 0 )
                                        {
                                          v160 = (v1417 + 7) & 0xFFFFFFF8;
                                          if ( v160 < v1417 )
                                          {
                                            v83 = -805306219;
LABEL_261:
                                            v1335 = v83;
                                            v92 = v1364;
                                            goto LABEL_212;
                                          }
                                          v1417 = (v1417 + 7) & 0xFFFFFFF8;
                                          v161 = v160;
                                          v162 = GetProcessHeap();
                                          v163 = (char *)HeapAlloc(v162, 8u, v161);
                                          v164 = v163;
                                          v84 = 0LL;
                                          if ( !v163 )
                                          {
                                            v83 = -805306345;
                                            goto LABEL_261;
                                          }
                                          v1461[0] = v163;
                                          *(_DWORD *)v163 = lpMem[0];
                                          v159 = RtlULongLongAdd((unsigned __int64)v163, 4LL, (unsigned __int64 *)v1461);
                                          if ( v159 < 0
                                            || (v166 = v1461[0],
                                                *(_DWORD *)v1461[0] = HIDWORD(lpMem[0]),
                                                v159 = RtlULongLongAdd(
                                                         (unsigned __int64)v166,
                                                         v165,
                                                         (unsigned __int64 *)v1461),
                                                v159 < 0) )
                                          {
                                            v167 = GetProcessHeap();
                                            HeapFree(v167, 0, v164);
                                            v156 = (unsigned int)v157;
                                          }
                                          else
                                          {
                                            *(_QWORD *)&v164[v1417 - 8] = v1374;
                                            memcpy_0(v1461[0], lpMem[1], HIDWORD(lpMem[0]));
                                            v155 = (unsigned __int8 *)v164;
                                            v1298 = (SIZE_T)v164;
                                            v156 = v1417;
                                          }
                                          v84 = 0LL;
                                        }
                                        v83 = v159 | 0x10000000;
                                        v1335 = v83;
                                        if ( v83 < 0 )
                                          goto LABEL_364;
                                        v1374 = (LPVOID)v84;
                                        if ( !v155 )
                                        {
                                          v83 = -805306355;
                                          goto LABEL_261;
                                        }
                                        v168 = v156;
                                        v1376 = (unsigned __int8 *)v156;
                                        if ( !v156
                                          || (Size = v156 + 8LL, v169 = (char *)MemoryAlloc(Size), (Src = v169) == 0LL) )
                                        {
                                          v83 = -805306367;
                                          v1335 = -805306367;
LABEL_365:
                                          v274 = GetProcessHeap();
                                          HeapFree(v274, 0, v155);
                                          v84 = 0LL;
LABEL_366:
                                          if ( v157 )
                                          {
                                            v275 = (void *)*((_QWORD *)v157 + 1);
                                            if ( v275 )
                                            {
                                              v276 = GetProcessHeap();
                                              HeapFree(v276, 0, v275);
                                              *((_QWORD *)v157 + 1) = 0LL;
                                            }
                                            v277 = (void *)*((_QWORD *)v157 + 3);
                                            if ( v277 )
                                            {
                                              v278 = GetProcessHeap();
                                              HeapFree(v278, 0, v277);
                                              *((_QWORD *)v157 + 3) = 0LL;
                                            }
                                            v279 = (void *)*((_QWORD *)v157 + 5);
                                            if ( v279 )
                                            {
                                              v280 = GetProcessHeap();
                                              HeapFree(v280, 0, v279);
                                              *((_QWORD *)v157 + 5) = 0LL;
                                            }
                                            v281 = GetProcessHeap();
                                            HeapFree(v281, 0, v157);
                                            v84 = 0LL;
                                          }
                                          if ( v1375 )
                                          {
                                            v282 = GetProcessHeap();
                                            HeapFree(v282, 0, v1375);
                                            v84 = 0LL;
                                          }
                                          if ( v158 )
                                          {
                                            v283 = GetProcessHeap();
                                            HeapFree(v283, 0, v158);
                                            v84 = 0LL;
                                          }
                                          v284 = v1389;
                                          if ( v1389 )
                                          {
                                            v285 = (void *)*((_QWORD *)v1389 + 1);
                                            if ( v285 )
                                            {
                                              v286 = GetProcessHeap();
                                              HeapFree(v286, 0, v285);
                                              v284[1] = 0LL;
                                            }
                                            v287 = (void *)v284[3];
                                            if ( v287 )
                                            {
                                              v288 = GetProcessHeap();
                                              HeapFree(v288, 0, v287);
                                              v284[3] = 0LL;
                                            }
                                            v289 = (void *)v284[5];
                                            if ( v289 )
                                            {
                                              v290 = GetProcessHeap();
                                              HeapFree(v290, 0, v289);
                                              v284[5] = 0LL;
                                            }
                                            v291 = GetProcessHeap();
                                            HeapFree(v291, 0, v284);
                                            v84 = 0LL;
                                          }
                                          v292 = v1390;
                                          if ( v1390 )
                                          {
                                            v293 = GetProcessHeap();
                                            HeapFree(v293, 0, v292);
                                            v84 = 0LL;
                                          }
                                          v92 = v1364;
                                          if ( v83 < 0 )
                                            goto LABEL_212;
                                          if ( !LODWORD(v1513[0]) )
                                          {
                                            v83 = -1073425151;
LABEL_391:
                                            v1335 = v83;
                                            goto LABEL_212;
                                          }
                                          if ( v1513[1] == (LPVOID)v84 )
                                          {
                                            v83 = -1073741811;
                                            goto LABEL_391;
                                          }
                                          v81 = 4LL;
                                          if ( LODWORD(v1513[0]) <= (unsigned int)v84 )
                                          {
                                            v83 = -1073741811;
LABEL_546:
                                            v1335 = v83;
                                            goto LABEL_213;
                                          }
                                          v419 = v1513[1];
                                          v1470 = v1513[1];
                                          v83 = RtlULongLongAdd(
                                                  (unsigned __int64)v1513[1],
                                                  4LL,
                                                  (unsigned __int64 *)&v1470);
                                          v1335 = v83;
                                          if ( v83 < 0 )
                                            goto LABEL_213;
                                          v421 = v1470;
                                          if ( *v419 == (_DWORD)v84 )
                                            v421 = (_DWORD *)v84;
                                          v1470 = v421;
                                          if ( *v419 != 4 )
                                          {
                                            v83 = -1073741789;
                                            goto LABEL_546;
                                          }
                                          v83 = *v421;
                                          v1335 = *v421;
                                          if ( *v421 == -805306333 )
                                          {
                                            v422 = -2147024774;
                                          }
                                          else
                                          {
                                            v422 = *v421;
                                            if ( v83 != -2147024774 && v83 < 0 )
                                              goto LABEL_213;
                                          }
                                          if ( LODWORD(v1513[0]) == 6 )
                                          {
                                            if ( v1513[1] != (LPVOID)v84 )
                                            {
                                              v1471 = v1513[1];
                                              v423 = *(_DWORD *)v1513[1];
                                              v83 = RtlULongLongAdd(
                                                      (unsigned __int64)v1513[1],
                                                      4LL,
                                                      (unsigned __int64 *)&v1471);
                                              v1335 = v83;
                                              if ( v83 < 0 )
                                                goto LABEL_559;
                                              v83 = RtlULongLongAdd(
                                                      (unsigned __int64)v1471,
                                                      v423,
                                                      (unsigned __int64 *)&v1471);
                                              v1335 = v83;
                                              if ( v83 < 0 )
                                                goto LABEL_559;
                                              v424 = *v1471;
                                              v83 = RtlULongLongAdd(
                                                      (unsigned __int64)v1471,
                                                      4LL,
                                                      (unsigned __int64 *)&v1471);
                                              v1335 = v83;
                                              if ( v83 < 0 )
                                                goto LABEL_559;
                                              v425 = v1471;
                                              if ( !v424 )
                                                v425 = (_DWORD *)v84;
                                              v1471 = v425;
                                              if ( v424 != 8 )
                                              {
LABEL_568:
                                                v83 = -1073741789;
                                                goto LABEL_558;
                                              }
                                              v1237 = *(_QWORD *)v425;
                                              if ( v1513[1] != (LPVOID)v84 )
                                              {
                                                v426 = (int *)v1513[1];
                                                v1472 = (int *)v1513[1];
                                                v427 = v84;
                                                while ( 1 )
                                                {
                                                  v83 = RtlULongLongAdd(
                                                          (unsigned __int64)v426,
                                                          4LL,
                                                          (unsigned __int64 *)&v1472);
                                                  v1335 = v83;
                                                  if ( v83 < 0 )
                                                    goto LABEL_559;
                                                  v83 = RtlULongLongAdd(
                                                          (unsigned __int64)v1472,
                                                          v428,
                                                          (unsigned __int64 *)&v1472);
                                                  v1335 = v83;
                                                  if ( v83 < 0 )
                                                    goto LABEL_559;
                                                  ++v427;
                                                  v426 = v1472;
                                                  if ( v427 >= 2 )
                                                  {
                                                    v429 = *v1472;
                                                    v83 = RtlULongLongAdd(
                                                            (unsigned __int64)v1472,
                                                            4LL,
                                                            (unsigned __int64 *)&v1472);
                                                    v1335 = v83;
                                                    if ( v83 < 0 )
                                                      goto LABEL_559;
                                                    v430 = v1472;
                                                    if ( !v429 )
                                                      v430 = (int *)v84;
                                                    v1472 = v430;
                                                    if ( v429 != 4 )
                                                      goto LABEL_568;
                                                    v1205 = *v430;
                                                    if ( v1513[1] == (LPVOID)v84 )
                                                      break;
                                                    v431 = v1513[1];
                                                    v1473 = v1513[1];
                                                    v432 = v84;
                                                    while ( 1 )
                                                    {
                                                      v83 = RtlULongLongAdd(
                                                              (unsigned __int64)v431,
                                                              4LL,
                                                              (unsigned __int64 *)&v1473);
                                                      v1335 = v83;
                                                      if ( v83 < 0 )
                                                        goto LABEL_559;
                                                      v83 = RtlULongLongAdd(
                                                              (unsigned __int64)v1473,
                                                              v433,
                                                              (unsigned __int64 *)&v1473);
                                                      v1335 = v83;
                                                      if ( v83 < 0 )
                                                        goto LABEL_559;
                                                      ++v432;
                                                      v431 = v1473;
                                                      if ( v432 >= 3 )
                                                      {
                                                        v83 = RtlULongLongAdd(
                                                                (unsigned __int64)v1473,
                                                                4LL,
                                                                (unsigned __int64 *)&v1473);
                                                        v1335 = v83;
                                                        if ( v83 >= 0 )
                                                        {
                                                          v436 = v1473;
                                                          if ( !v435 )
                                                            v436 = 0LL;
                                                          v1473 = v436;
                                                          v437 = (unsigned int *)v1513[1];
                                                          v1474 = (unsigned int *)v1513[1];
                                                          for ( j = 0; j < 4; ++j )
                                                          {
                                                            v439 = *v437;
                                                            v83 = RtlULongLongAdd(
                                                                    (unsigned __int64)v437,
                                                                    4LL,
                                                                    (unsigned __int64 *)&v1474);
                                                            v1335 = v83;
                                                            if ( v83 < 0 )
                                                              goto LABEL_614;
                                                            v83 = RtlULongLongAdd(
                                                                    (unsigned __int64)v1474,
                                                                    v439,
                                                                    (unsigned __int64 *)&v1474);
                                                            v1335 = v83;
                                                            v81 = 4LL;
                                                            if ( v83 < 0 )
                                                              goto LABEL_596;
                                                            v437 = v1474;
                                                          }
                                                          v440 = *v1474;
                                                          v83 = RtlULongLongAdd(
                                                                  (unsigned __int64)v1474,
                                                                  4LL,
                                                                  (unsigned __int64 *)&v1474);
                                                          v1335 = v83;
                                                          if ( v83 < 0 )
                                                            goto LABEL_596;
                                                          v441 = v1474;
                                                          if ( !v440 )
                                                            v441 = 0LL;
                                                          v1474 = v441;
                                                          if ( v440 == 4 )
                                                          {
                                                            v442 = (unsigned int *)v1513[1];
                                                            v1475 = (unsigned int *)v1513[1];
                                                            v443 = 0;
                                                            v444 = *v441;
                                                            while ( 1 )
                                                            {
                                                              v445 = *v442;
                                                              v83 = RtlULongLongAdd(
                                                                      (unsigned __int64)v442,
                                                                      4LL,
                                                                      (unsigned __int64 *)&v1475);
                                                              v1335 = v83;
                                                              if ( v83 < 0 )
                                                                break;
                                                              v83 = RtlULongLongAdd(
                                                                      (unsigned __int64)v1475,
                                                                      v445,
                                                                      (unsigned __int64 *)&v1475);
                                                              v1335 = v83;
                                                              if ( v83 < 0 )
                                                                break;
                                                              ++v443;
                                                              v442 = v1475;
                                                              if ( v443 >= 5 )
                                                              {
                                                                v446 = *v1475;
                                                                v447 = RtlULongLongAdd(
                                                                         (unsigned __int64)v1475,
                                                                         4LL,
                                                                         (unsigned __int64 *)&v1475);
                                                                v83 = v447;
                                                                v1335 = v447;
                                                                if ( v447 < 0 )
                                                                {
                                                                  v1335 = v447;
                                                                  break;
                                                                }
                                                                v450 = v1475;
                                                                if ( !v446 )
                                                                  v450 = 0LL;
                                                                v1475 = v450;
                                                                v81 = 4LL;
                                                                if ( v446 == 4 )
                                                                {
                                                                  v92 = *v450;
                                                                  if ( v1309 != (wchar_t *)v1237 )
                                                                  {
                                                                    v83 = -1073425151;
                                                                    goto LABEL_595;
                                                                  }
                                                                  v1408 = v1205;
                                                                  if ( v444 > 4 || (unsigned int)v449 > 4 )
                                                                  {
                                                                    v83 = -2147024774;
                                                                    v1335 = -2147024774;
                                                                    goto LABEL_597;
                                                                  }
                                                                  memcpy_0(v1385, v448, v449);
                                                                  v84 = 0LL;
                                                                  v89 = (WCHAR *)lpModuleName;
                                                                  if ( v422 )
                                                                  {
                                                                    v83 = v422;
                                                                    v1335 = v422;
                                                                  }
                                                                  goto LABEL_214;
                                                                }
                                                                goto LABEL_594;
                                                              }
                                                            }
LABEL_614:
                                                            v92 = v434;
                                                            v84 = 0LL;
                                                            goto LABEL_212;
                                                          }
LABEL_594:
                                                          v83 = -1073741789;
LABEL_595:
                                                          v1335 = v83;
                                                        }
LABEL_596:
                                                        v92 = v434;
LABEL_597:
                                                        v84 = 0LL;
                                                        goto LABEL_213;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            v83 = -1073741811;
                                          }
                                          else
                                          {
                                            v83 = -1073425151;
                                          }
LABEL_558:
                                          v1335 = v83;
LABEL_559:
                                          v92 = v420;
                                          goto LABEL_213;
                                        }
                                        v170 = 0;
                                        for ( k = 0LL; k < v156; ++k )
                                          v170 ^= v155[k];
                                        v1195 = v170;
                                        v1580 = 0xC81ECB17B1B54A58uLL;
                                        v172 = v155;
                                        v173 = v169;
                                        v1225 = (SIZE_T)v169;
                                        v174 = 0;
                                        v175 = -1;
                                        v1336 = 0;
                                        v1290 = 0;
                                        v176 = v168 & 7;
                                        if ( (v168 & 7) != 0 )
                                        {
                                          v177 = 0;
                                          v178 = 0;
                                          v1197 = 0;
                                          v179 = 56;
                                          do
                                          {
                                            v180 = *v172++;
                                            if ( v178 >= 4 )
                                              v177 |= v180 << v179;
                                            else
                                              v174 |= v180 << (v179 - 32);
                                            v1336 = v177;
                                            v1290 = v174;
                                            v178 = v1197 + 1;
                                            v1197 = v178;
                                            v179 -= 8;
                                          }
                                          while ( (int)v178 < (int)v176 );
                                          v174 ^= 0xB17A307A;
                                          v181 = v177 ^ 0x42F6B18D;
                                          v182 = v174;
                                          v183 = v181;
                                          v1298 = (SIZE_T)v155;
                                          v184 = 0;
                                          v185 = (_BYTE *)v1225;
                                          do
                                          {
                                            v1226 = (SIZE_T)(v185 + 1);
                                            if ( v184 >= 4 )
                                            {
                                              v183 = __ROL4__(v183, 8);
                                              v186 = v183;
                                            }
                                            else
                                            {
                                              v182 = __ROL4__(v182, 8);
                                              v186 = v182;
                                            }
                                            *v185 = v186;
                                            ++v184;
                                            ++v185;
                                          }
                                          while ( (int)v184 < (int)v176 );
                                          v173 = (char *)v1226;
                                          v157 = v1321;
                                          v158 = (unsigned int *)v1321;
                                          if ( v176 <= 4 )
                                          {
                                            v175 = 0;
                                            if ( v176 >= 4 )
                                              goto LABEL_292;
                                            v174 = v174 >> (8 * (4 - v176)) << (8 * (4 - v176));
                                          }
                                          else
                                          {
                                            v175 = v181 >> (8 * (8 - v176)) << (8 * (8 - v176));
                                          }
                                          v173 = (char *)v1226;
                                        }
LABEL_292:
                                        v187 = v168 >> 3;
                                        if ( v168 >> 3 )
                                        {
                                          v1198 = WORD1(v1580);
                                          v188 = WORD2(v1580);
                                          v189 = v173 + 7;
                                          v190 = v172 + 2;
                                          v191 = v1336;
                                          v192 = v1290;
                                          do
                                          {
                                            v193 = v190[1] | ((*v190 | ((*(v190 - 1) | (*(v190 - 2) << 8)) << 8)) << 8);
                                            v194 = v190[5] | ((v190[4] | ((v190[3] | (v190[2] << 8)) << 8)) << 8);
                                            v195 = v194 ^ v175;
                                            v190 += 8;
                                            v196 = v193 ^ HIDWORD(v1580) ^ (v195 - 19032) ^ v174;
                                            v197 = (__ROR4__(v196, 7)
                                                  + WORD1(v1580) * __ROR4__(v196 ^ HIDWORD(v1580), 15)) ^ v195;
                                            v198 = (v188 * __ROR4__(v197 - 1313519016, 9) - __ROR4__(v197, 10)) ^ v196;
                                            v199 = (__ROL4__(v198, 5) + HIWORD(v1580) * __ROL4__(v198 ^ v188, 4)) ^ v197;
                                            v200 = (HIDWORD(v1580) - (v199 ^ 0xB1B54A58)) ^ v198;
                                            v201 = (WORD1(v1580) * (v200 - 19032) - (v200 >> 6)) ^ v199;
                                            v202 = (19032 * (v188 ^ __ROR4__(v201, 15))) ^ v200;
                                            v203 = (v188 * (HIWORD(v1580) + __ROR4__(~v202, 3))) ^ v201;
                                            v204 = (v203 - 19032 - HIDWORD(v1580)) ^ v202;
                                            v205 = (v1198 * (v204 ^ HIWORD(v1580))) ^ __ROR4__(v204, 10) ^ v203;
                                            v206 = __ROR4__(v205, 3) ^ (v188 * __ROL4__(v205 ^ 0x4A58, 6)) ^ v204;
                                            v207 = (19032 * (__ROR4__(v206, 15) - HIWORD(v1580))) ^ v205;
                                            v208 = (v207 >> 15) ^ (19032 * __ROL4__(v207 - v188, 3)) ^ (v207 >> 1) ^ (19032 * (v207 ^ HIWORD(v1580))) ^ v206;
                                            v209 = (WORD1(v1580) * (v208 - v188) - (v208 >> 13)) ^ v207;
                                            v210 = __ROR4__(v209, 11) ^ (v188 * __ROR4__(-1313519016 - v209, 9)) ^ v208;
                                            v211 = (v210 - HIWORD(v1580) + 1313519016) ^ v209;
                                            v212 = (19032 * (v211 ^ WORD1(v1580)) - __ROR4__(v211, 7)) ^ v210;
                                            v213 = (WORD1(v1580) * __ROL4__(v212 ^ HIWORD(v1580), 4) - __ROR4__(v212, 16)) ^ v211;
                                            v214 = (__ROR4__(v213, 4) + v188 * __ROR4__(-1313519016 - v213, 10)) ^ v212;
                                            v215 = __ROR4__(v214, 9) ^ (HIWORD(v1580) * __ROR4__(v214 + 1313519016, 4)) ^ v213;
                                            v216 = (19032 * __ROL4__(v215 ^ HIDWORD(v1580), 8) - __ROL4__(v215, 2)) ^ v214;
                                            v217 = (WORD1(v1580) * __ROR4__(HIDWORD(v1580) - v216, 11)
                                                  - __ROR4__(v216, 12)) ^ v215;
                                            v218 = (v217 >> 8) ^ (v188 * (v217 ^ WORD1(v1580))) ^ v216;
                                            v219 = v218 ^ HIDWORD(v1580) ^ 0xB1B54A58 ^ v217;
                                            v220 = v192 ^ v218;
                                            v221 = v191 ^ v219;
                                            *(v189 - 4) = v220;
                                            v222 = __ROR4__(v220, 8);
                                            *v189 = v221;
                                            v223 = __ROR4__(v221, 8);
                                            *(v189 - 5) = v222;
                                            v224 = __ROR4__(v222, 8);
                                            *(v189 - 1) = v223;
                                            v225 = __ROR4__(v223, 8);
                                            *(v189 - 6) = v224;
                                            v226 = __ROR4__(v224, 8);
                                            *(v189 - 2) = v225;
                                            v227 = __ROR4__(v225, 8);
                                            *(v189 - 7) = v226;
                                            *(v189 - 3) = v227;
                                            v174 = __ROR4__(v226, 8);
                                            v175 = __ROR4__(v227, 8);
                                            v192 = v193;
                                            v191 = v194;
                                            v189 += 8;
                                            --v187;
                                          }
                                          while ( v187 );
                                          v170 = v1195;
                                          v157 = v1321;
                                          v158 = (unsigned int *)v1321;
                                          v155 = (unsigned __int8 *)v1298;
                                          v168 = (unsigned __int64)v1376;
                                        }
                                        *(_QWORD *)&Src[v168] = v170;
                                        v228 = Size;
                                        v1461[3] = (void *)8;
                                        v1461[4] = (void *)160;
                                        v229 = GetProcessHeap();
                                        v230 = HeapAlloc(v229, 8u, 0x30uLL);
                                        v231 = v230;
                                        if ( v230 )
                                        {
                                          *v230 = Size;
                                          v242 = GetProcessHeap();
                                          v243 = HeapAlloc(v242, 8u, v228);
                                          if ( v243 )
                                          {
                                            *((_QWORD *)v231 + 1) = v243;
                                            memcpy_0(v243, Src, v228);
                                            v231[4] = 160;
                                            v244 = GetProcessHeap();
                                            v245 = HeapAlloc(v244, 8u, 0xA0uLL);
                                            v232 = 0;
                                            if ( v245 )
                                            {
                                              *((_QWORD *)v231 + 3) = v245;
                                              *v245 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                                              v245[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                                              v245[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                                              v245[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                                              v245[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                                              v245[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                                              v245[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                                              v245[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                                              v245[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                                              v245[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                                              v231[8] = 8;
                                              v246 = GetProcessHeap();
                                              v247 = HeapAlloc(v246, 8u, 8uLL);
                                              if ( v247 )
                                              {
                                                *((_QWORD *)v231 + 5) = v247;
                                                *v247 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                                                v157 = v231;
                                                v233 = 0LL;
LABEL_299:
                                                v234 = GetProcessHeap();
                                                HeapFree(v234, 0, Src);
                                                if ( v233 )
                                                {
                                                  v1227 = (void *)v233[1];
                                                  if ( v1227 )
                                                  {
                                                    v235 = GetProcessHeap();
                                                    HeapFree(v235, 0, v1227);
                                                    v233[1] = 0LL;
                                                  }
                                                  v1228 = (void *)v233[3];
                                                  if ( v1228 )
                                                  {
                                                    v236 = GetProcessHeap();
                                                    HeapFree(v236, 0, v1228);
                                                    v233[3] = 0LL;
                                                  }
                                                  v1229 = (void *)v233[5];
                                                  if ( v1229 )
                                                  {
                                                    v237 = GetProcessHeap();
                                                    HeapFree(v237, 0, v1229);
                                                    v233[5] = 0LL;
                                                  }
                                                  v238 = GetProcessHeap();
                                                  HeapFree(v238, 0, v233);
                                                }
                                                v83 = v232 | 0x10000000;
                                                v1335 = v83;
                                                if ( v83 < 0 )
                                                  goto LABEL_539;
                                                LODWORD(v1399) = 4;
                                                v240 = RtlUIntAdd(4u, *v157, (unsigned int *)&v1399);
                                                if ( v240 >= 0 )
                                                {
                                                  v240 = RtlUIntAdd(v1399, v239, (unsigned int *)&v1399);
                                                  if ( v240 >= 0 )
                                                  {
                                                    v240 = RtlUIntAdd(v1399, v157[4], (unsigned int *)&v1399);
                                                    if ( v240 >= 0 )
                                                    {
                                                      v240 = RtlUIntAdd(v1399, v241, (unsigned int *)&v1399);
                                                      if ( v240 >= 0 )
                                                      {
                                                        v240 = RtlUIntAdd(v1399, v157[8], (unsigned int *)&v1399);
                                                        if ( v240 >= 0 )
                                                        {
                                                          v1199 = v1399;
                                                          v252 = v1399;
                                                          v253 = GetProcessHeap();
                                                          v254 = HeapAlloc(v253, 8u, v252);
                                                          v255 = v254;
                                                          v84 = 0LL;
                                                          if ( !v254 )
                                                          {
LABEL_396:
                                                            v83 = -805306345;
LABEL_363:
                                                            v1335 = v83;
                                                            goto LABEL_364;
                                                          }
                                                          v1462 = v254;
                                                          *v254 = *v157;
                                                          v240 = RtlULongLongAdd(
                                                                   (unsigned __int64)v254,
                                                                   4LL,
                                                                   (unsigned __int64 *)&v1462);
                                                          if ( v240 >= 0 )
                                                          {
                                                            memcpy_0(
                                                              v1462,
                                                              *((const void **)v157 + 1),
                                                              (unsigned int)*v157);
                                                            v240 = RtlULongLongAdd(
                                                                     (unsigned __int64)v1462,
                                                                     (unsigned int)*v157,
                                                                     (unsigned __int64 *)&v1462);
                                                            if ( v240 >= 0 )
                                                            {
                                                              v256 = v1462;
                                                              *(_DWORD *)v1462 = v157[4];
                                                              v240 = RtlULongLongAdd(
                                                                       (unsigned __int64)v256,
                                                                       4LL,
                                                                       (unsigned __int64 *)&v1462);
                                                              if ( v240 >= 0 )
                                                              {
                                                                memcpy_0(
                                                                  v1462,
                                                                  *((const void **)v157 + 3),
                                                                  (unsigned int)v157[4]);
                                                                v240 = RtlULongLongAdd(
                                                                         (unsigned __int64)v1462,
                                                                         (unsigned int)v157[4],
                                                                         (unsigned __int64 *)&v1462);
                                                                if ( v240 >= 0 )
                                                                {
                                                                  v257 = v1462;
                                                                  *(_DWORD *)v1462 = v157[8];
                                                                  v240 = RtlULongLongAdd(
                                                                           (unsigned __int64)v257,
                                                                           4LL,
                                                                           (unsigned __int64 *)&v1462);
                                                                  if ( v240 >= 0 )
                                                                  {
                                                                    memcpy_0(
                                                                      v1462,
                                                                      *((const void **)v157 + 5),
                                                                      (unsigned int)v157[8]);
                                                                    v240 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1462,
                                                                             (unsigned int)v157[8],
                                                                             (unsigned __int64 *)&v1462);
                                                                    if ( v240 >= 0 )
                                                                    {
                                                                      v1375 = v255;
                                                                      v1283 = v1199;
                                                                      goto LABEL_336;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                          v258 = GetProcessHeap();
                                                          HeapFree(v258, 0, v255);
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                v255 = v1375;
LABEL_336:
                                                v83 = v240 | 0x10000000;
                                                v1335 = v83;
                                                if ( v83 < 0 )
                                                  goto LABEL_539;
                                                v1400 = 8;
                                                v259 = RtlUIntAdd(8u, v1213, &v1400);
                                                v83 = v261 | v259;
                                                v1335 = v261 | v259;
                                                if ( (v261 | v259) >= 0 )
                                                {
                                                  v262 = (v1400 + 7) & 0xFFFFFFF8;
                                                  if ( v262 < v1400 )
                                                  {
                                                    v83 = -1073741675;
LABEL_538:
                                                    v1335 = v83;
                                                    goto LABEL_539;
                                                  }
                                                  v1401 = (v1400 + 7) & 0xFFFFFFF8;
                                                  v83 = RtlUIntAdd(v262, v260, &v1401);
                                                  v1335 = v83;
                                                  if ( v83 >= 0 )
                                                  {
                                                    if ( lpMem[1] == v263 || LODWORD(lpMem[0]) <= 1 )
                                                    {
                                                      v83 = -1073741811;
                                                    }
                                                    else
                                                    {
                                                      v1463 = (int *)lpMem[1];
                                                      v83 = RtlULongLongAdd(
                                                              (unsigned __int64)lpMem[1],
                                                              4LL,
                                                              (unsigned __int64 *)&v1463);
                                                      v1335 = v83;
                                                      if ( v83 < 0 )
                                                        goto LABEL_539;
                                                      v83 = RtlULongLongAdd(
                                                              (unsigned __int64)v1463,
                                                              v264,
                                                              (unsigned __int64 *)&v1463);
                                                      v1335 = v83;
                                                      if ( v83 < 0 )
                                                        goto LABEL_539;
                                                      v1200 = *v1463;
                                                      v83 = RtlULongLongAdd(
                                                              (unsigned __int64)v1463,
                                                              4LL,
                                                              (unsigned __int64 *)&v1463);
                                                      v1335 = v83;
                                                      if ( v83 < 0 )
                                                        goto LABEL_539;
                                                      if ( LODWORD(lpMem[0]) > 2 )
                                                      {
                                                        v266 = lpMem[1];
                                                        v1464 = lpMem[1];
                                                        v1375 = v255;
                                                        v1283 = v265;
                                                        while ( 1 )
                                                        {
                                                          v83 = RtlULongLongAdd(
                                                                  (unsigned __int64)v266,
                                                                  4LL,
                                                                  (unsigned __int64 *)&v1464);
                                                          v1335 = v83;
                                                          if ( v83 < 0 )
                                                            goto LABEL_539;
                                                          v83 = RtlULongLongAdd(
                                                                  (unsigned __int64)v1464,
                                                                  v267,
                                                                  (unsigned __int64 *)&v1464);
                                                          v1335 = v83;
                                                          v84 = 0LL;
                                                          if ( v83 < 0 )
                                                            goto LABEL_364;
                                                          v266 = v1464;
                                                          if ( (unsigned int)(v268 + 1) >= 2 )
                                                          {
                                                            v83 = RtlULongLongAdd(
                                                                    (unsigned __int64)v1464,
                                                                    4LL,
                                                                    (unsigned __int64 *)&v1464);
                                                            v1335 = v83;
                                                            if ( v83 < 0 )
                                                              goto LABEL_364;
                                                            LODWORD(v1402) = v84 + 4;
                                                            v83 = RtlUIntAdd((int)v84 + 4, v269, (unsigned int *)&v1402);
                                                            v1335 = v83;
                                                            if ( v83 < 0 )
                                                              goto LABEL_394;
                                                            v83 = RtlUIntAdd(v1402, v270, (unsigned int *)&v1402);
                                                            v1335 = v83;
                                                            if ( v83 < 0 )
                                                              goto LABEL_394;
                                                            v83 = RtlUIntAdd(v1402, v1200, (unsigned int *)&v1402);
                                                            v1335 = v83;
                                                            if ( v83 < 0 )
                                                              goto LABEL_394;
                                                            v83 = RtlUIntAdd(v1402, v271, (unsigned int *)&v1402);
                                                            v1335 = v83;
                                                            if ( v83 < 0 )
                                                              goto LABEL_394;
                                                            v83 = RtlUIntAdd(v1402, v272, (unsigned int *)&v1402);
                                                            v1335 = v83;
                                                            if ( v83 < 0 )
                                                              goto LABEL_394;
                                                            v273 = v1402;
                                                            v1201 = v1402;
                                                            if ( (unsigned int)v1402 > 0x400000 )
                                                            {
                                                              v83 = -2147418113;
                                                              goto LABEL_363;
                                                            }
                                                            goto LABEL_395;
                                                          }
                                                        }
                                                      }
                                                      v83 = -1073741811;
                                                    }
                                                    goto LABEL_538;
                                                  }
LABEL_539:
                                                  v84 = 0LL;
                                                  goto LABEL_364;
                                                }
                                                v84 = 0LL;
LABEL_394:
                                                v273 = v84;
                                                v1201 = v84;
                                                if ( v83 >= 0 )
                                                {
LABEL_395:
                                                  v1233 = (SIZE_T)v155;
                                                  Srca = v157;
                                                  v1299 = v255;
                                                  v294 = v273;
                                                  v295 = GetProcessHeap();
                                                  v296 = (unsigned int *)HeapAlloc(v295, 8u, v294);
                                                  v84 = 0LL;
                                                  if ( !v296 )
                                                    goto LABEL_396;
                                                  v158 = v296;
                                                  v297 = v1299;
                                                  if ( !v1299 )
                                                  {
                                                    v83 = -2147024809;
                                                    v1335 = -2147024809;
                                                    v1375 = 0LL;
                                                    goto LABEL_364;
                                                  }
                                                  v1527[0] = v1299;
                                                  v1528 = v1283;
                                                  v1527[1] = v296;
                                                  v1529 = v1201;
                                                  v1530 = 0;
                                                  if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                                    && (v300 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                                                  {
                                                    v301 = ((__int64 (__fastcall *)(__int64, _QWORD *))v300)(
                                                             134LL,
                                                             v1527);
                                                    v83 = v301 | 0x10000000;
                                                    v1335 = v301 | 0x10000000;
                                                    v299 = v1201;
                                                    if ( v301 >= 0 )
                                                    {
                                                      v299 = v1529;
                                                      v302 = v155;
                                                      v303 = v157;
                                                      v84 = 0LL;
                                                      goto LABEL_412;
                                                    }
                                                    v84 = 0LL;
                                                  }
                                                  else
                                                  {
                                                    v298 = GetLastError();
                                                    v83 = v298;
                                                    v84 = 0LL;
                                                    if ( v298 > 0 )
                                                      v83 = (unsigned __int16)v298 | 0x80070000;
                                                    if ( v83 >= 0 )
                                                      v83 = -2147467259;
                                                    v1335 = v83;
                                                    v299 = v1201;
                                                  }
                                                  v1375 = v1299;
                                                  if ( v83 == -805306333 )
                                                  {
                                                    v83 = -2147024774;
                                                    v1335 = -2147024774;
                                                    goto LABEL_364;
                                                  }
                                                  v303 = v157;
                                                  v302 = v155;
                                                  if ( v83 >= 0 )
                                                  {
LABEL_412:
                                                    if ( v299 < 4 )
                                                      goto LABEL_413;
                                                    v304 = *v158;
                                                    v1202 = *v158;
                                                    v305 = v158 + 1;
                                                    if ( v158 + 1 < v158 )
                                                    {
                                                      v83 = -805306219;
                                                      goto LABEL_414;
                                                    }
                                                    if ( v299 - 4 < (unsigned int)v304 )
                                                    {
LABEL_413:
                                                      v83 = -805306306;
LABEL_414:
                                                      v1335 = v83;
                                                      v1375 = v1299;
                                                      v157 = v303;
                                                      v155 = v302;
                                                      goto LABEL_364;
                                                    }
                                                    v1300 = *v158;
                                                    v306 = (unsigned int *)((char *)v305 + v304);
                                                    if ( (unsigned int *)((char *)v305 + v304) < v305
                                                      || (unsigned int)(v304 + 4) < 4 )
                                                    {
                                                      goto LABEL_536;
                                                    }
                                                    if ( v299 - ((_DWORD)v304 + 4) < 4 )
                                                    {
LABEL_420:
                                                      v83 = -805306306;
LABEL_537:
                                                      v1375 = v297;
                                                      v157 = v303;
                                                      v155 = v302;
                                                      goto LABEL_538;
                                                    }
                                                    v307 = *v306;
                                                    v308 = v306 + 1;
                                                    v1322 = (LPCWSTR)(v306 + 1);
                                                    if ( v306 + 1 < v306 )
                                                      goto LABEL_536;
                                                    v309 = v304 + 8;
                                                    if ( (int)v304 + 8 < (unsigned int)(v304 + 4) )
                                                      goto LABEL_536;
                                                    if ( v299 - v309 < (unsigned int)v307 )
                                                      goto LABEL_420;
                                                    v310 = (unsigned int *)((char *)v308 + v307);
                                                    if ( (unsigned int *)((char *)v308 + v307) < v308 )
                                                      goto LABEL_536;
                                                    v311 = v309 + v307;
                                                    if ( v309 + (unsigned int)v307 < v309 )
                                                      goto LABEL_536;
                                                    if ( v299 - v311 < 4 )
                                                      goto LABEL_420;
                                                    v312 = *v310;
                                                    v1375 = v310 + 1;
                                                    if ( v310 + 1 < v310 )
                                                      goto LABEL_536;
                                                    v313 = v311 + 4;
                                                    if ( v311 + 4 < v311 )
                                                      goto LABEL_536;
                                                    if ( v299 - v313 < (unsigned int)v312 )
                                                      goto LABEL_420;
                                                    if ( v313 + (unsigned int)v312 < v313 )
                                                    {
LABEL_536:
                                                      v83 = -805306219;
                                                      goto LABEL_537;
                                                    }
                                                    if ( v299 != v313 + (_DWORD)v312
                                                      || (unsigned int)(v312 + v307 + v304) + 12LL != v299 )
                                                    {
                                                      goto LABEL_420;
                                                    }
                                                    v314 = GetProcessHeap();
                                                    v315 = HeapAlloc(v314, 8u, 0x30uLL);
                                                    v1374 = v315;
                                                    v84 = 0LL;
                                                    if ( !v315 )
                                                    {
                                                      v83 = -805306345;
                                                      v1335 = -805306345;
                                                      v1375 = v297;
                                                      v157 = Srca;
                                                      v155 = (unsigned __int8 *)v1233;
                                                      goto LABEL_364;
                                                    }
                                                    if ( v158 == (unsigned int *)-4LL )
                                                    {
                                                      *v315 = 0;
                                                      *((_QWORD *)v315 + 1) = 0LL;
                                                    }
                                                    else
                                                    {
                                                      *v315 = v1202;
                                                      v316 = GetProcessHeap();
                                                      v317 = HeapAlloc(v316, 8u, v1300);
                                                      if ( !v317 )
                                                        goto LABEL_445;
                                                      *((_QWORD *)v315 + 1) = v317;
                                                      memcpy_0(v317, v158 + 1, v1300);
                                                      v84 = 0LL;
                                                    }
                                                    if ( !v1322 )
                                                    {
                                                      v315[4] = 0;
                                                      *((_QWORD *)v315 + 3) = 0LL;
LABEL_443:
                                                      if ( v1375 )
                                                      {
                                                        v315[8] = v312;
                                                        v320 = GetProcessHeap();
                                                        v321 = HeapAlloc(v320, 8u, v312);
                                                        if ( !v321 )
                                                          goto LABEL_445;
                                                        *((_QWORD *)v315 + 5) = v321;
                                                        memcpy_0(v321, v1375, v312);
                                                        v84 = 0LL;
                                                      }
                                                      else
                                                      {
                                                        v315[8] = 0;
                                                        *((_QWORD *)v315 + 5) = 0LL;
                                                      }
                                                      v1389 = v315;
                                                      v322 = 0;
                                                      v1380 = v158;
                                                      v1375 = v297;
                                                      v157 = Srca;
                                                      v1323 = (LPCWSTR)Srca;
                                                      v155 = (unsigned __int8 *)v1233;
                                                      v1301 = v1233;
                                                      v329 = (unsigned int *)v1389;
                                                      goto LABEL_462;
                                                    }
                                                    v315[4] = v307;
                                                    v318 = GetProcessHeap();
                                                    v319 = HeapAlloc(v318, 8u, v307);
                                                    if ( v319 )
                                                    {
                                                      *((_QWORD *)v315 + 3) = v319;
                                                      memcpy_0(v319, v1322, v307);
                                                      v84 = 0LL;
                                                      goto LABEL_443;
                                                    }
LABEL_445:
                                                    v157 = Srca;
                                                    v155 = (unsigned __int8 *)v1233;
                                                    v322 = -1073741801;
                                                    v1380 = v158;
                                                    v1375 = v297;
                                                    v1389 = 0LL;
                                                    v323 = v1374;
                                                    v1234 = (void *)*((_QWORD *)v1374 + 1);
                                                    if ( v1234 )
                                                    {
                                                      v324 = GetProcessHeap();
                                                      HeapFree(v324, 0, v1234);
                                                      v323 = v1374;
                                                      *((_QWORD *)v1374 + 1) = 0LL;
                                                    }
                                                    v1235 = (void *)v323[3];
                                                    if ( v1235 )
                                                    {
                                                      v325 = GetProcessHeap();
                                                      HeapFree(v325, 0, v1235);
                                                      v323 = v1374;
                                                      *((_QWORD *)v1374 + 3) = 0LL;
                                                    }
                                                    v1236 = (void *)v323[5];
                                                    if ( v1236 )
                                                    {
                                                      v326 = GetProcessHeap();
                                                      HeapFree(v326, 0, v1236);
                                                      *((_QWORD *)v1374 + 5) = 0LL;
                                                    }
                                                    v327 = GetProcessHeap();
                                                    HeapFree(v327, 0, v1374);
                                                    v1374 = v297;
                                                    v328 = v1389;
                                                    v84 = 0LL;
                                                    v329 = 0LL;
                                                    v1389 = 0LL;
                                                    v1380 = v158;
                                                    v1375 = v297;
                                                    v1323 = (LPCWSTR)Srca;
                                                    v1301 = (SIZE_T)v155;
                                                    if ( v328 )
                                                    {
                                                      v330 = v328;
                                                      v331 = (void *)v328[1];
                                                      if ( v331 )
                                                      {
                                                        v332 = GetProcessHeap();
                                                        HeapFree(v332, 0, v331);
                                                        v330[1] = 0LL;
                                                      }
                                                      v333 = (void *)v330[3];
                                                      if ( v333 )
                                                      {
                                                        v334 = GetProcessHeap();
                                                        HeapFree(v334, 0, v333);
                                                        v330[3] = 0LL;
                                                      }
                                                      v335 = (void *)v330[5];
                                                      if ( v335 )
                                                      {
                                                        v336 = GetProcessHeap();
                                                        HeapFree(v336, 0, v335);
                                                        v330[5] = 0LL;
                                                      }
                                                      v337 = GetProcessHeap();
                                                      HeapFree(v337, 0, v330);
                                                      v84 = 0LL;
                                                      v329 = 0LL;
                                                      v1389 = 0LL;
                                                      v1380 = v158;
                                                      v297 = v1374;
                                                      v1375 = v1374;
                                                      v157 = Srca;
                                                      v1323 = (LPCWSTR)Srca;
                                                      v1301 = (SIZE_T)v155;
                                                    }
LABEL_462:
                                                    v83 = v322 | 0x10000000;
                                                    v1335 = v83;
                                                    if ( v83 < 0 )
                                                      goto LABEL_364;
                                                    if ( !v329
                                                      || (Srcb = (char *)*((_QWORD *)v329 + 1)) == 0LL
                                                      || !*v329 )
                                                    {
                                                      v83 = -805306355;
                                                      goto LABEL_363;
                                                    }
                                                    v338 = *v329 - 8LL;
                                                    v1374 = (LPVOID)v338;
                                                    v339 = (int *)MemoryAlloc(v338);
                                                    v1390 = v339;
                                                    v84 = 0LL;
                                                    if ( !v339 )
                                                    {
LABEL_493:
                                                      v83 = -805306367;
                                                      v1335 = -805306367;
                                                      v1390 = 0LL;
                                                      goto LABEL_364;
                                                    }
                                                    v340 = 0;
                                                    v1579 = 0x7F1137FAB69605ELL;
                                                    v341 = Srcb;
                                                    v1376 = (unsigned __int8 *)Srcb;
                                                    v342 = (SIZE_T)v339;
                                                    Size = (SIZE_T)v339;
                                                    v343 = v338 & 7;
                                                    if ( (v338 & 7) != 0 )
                                                    {
                                                      v344 = 0;
                                                      v1337 = 0;
                                                      v345 = 56;
                                                      v346 = v1376;
                                                      v347 = 0;
                                                      v348 = 0;
                                                      do
                                                      {
                                                        v349 = *v346++;
                                                        if ( v344 >= 4 )
                                                          v348 |= v349 << v345;
                                                        else
                                                          v347 |= v349 << (v345 - 32);
                                                        v344 = v1337 + 1;
                                                        v1337 = v344;
                                                        v345 -= 8;
                                                      }
                                                      while ( (int)v344 < (int)v343 );
                                                      v1203 = v348;
                                                      v1291 = v347;
                                                      v1338 = v347 ^ 0x92F65A5;
                                                      v1214 = v348 ^ 0x699A899C;
                                                      v340 = 0;
                                                      v1376 = v346;
                                                      v350 = v347 ^ 0x92F65A5;
                                                      v351 = v1214;
                                                      v1380 = v158;
                                                      v1375 = v297;
                                                      v1323 = (LPCWSTR)v157;
                                                      v1301 = (SIZE_T)v155;
                                                      v339 = (int *)v1390;
                                                      v338 = (SIZE_T)v1374;
                                                      v352 = 0;
                                                      v353 = v1390;
                                                      do
                                                      {
                                                        Size = (SIZE_T)(v353 + 1);
                                                        if ( v352 >= 4 )
                                                        {
                                                          v351 = __ROL4__(v351, 8);
                                                          v354 = v351;
                                                        }
                                                        else
                                                        {
                                                          v350 = __ROL4__(v350, 8);
                                                          v354 = v350;
                                                        }
                                                        *v353 = v354;
                                                        ++v352;
                                                        v353 = (_BYTE *)Size;
                                                      }
                                                      while ( (int)v352 < (int)v343 );
                                                      v342 = Size;
                                                      v158 = (unsigned int *)v1380;
                                                      v355 = v1338;
                                                      if ( v343 > 4 )
                                                      {
                                                        LODWORD(v84) = v1214 >> (8 * (8 - v343)) << (8 * (8 - v343));
                                                        v342 = Size;
LABEL_481:
                                                        v341 = (char *)v1376;
                                                        goto LABEL_482;
                                                      }
                                                      LODWORD(v84) = 0;
                                                      if ( v343 >= 4 )
                                                        goto LABEL_481;
                                                      v341 = (char *)v1376;
                                                      v355 = v1338 >> (8 * (4 - v343)) << (8 * (4 - v343));
                                                      v342 = Size;
                                                    }
                                                    else
                                                    {
                                                      v1291 = 0;
                                                      v1203 = -1;
                                                      v355 = 0;
                                                    }
LABEL_482:
                                                    v356 = v338 >> 3;
                                                    if ( v338 >> 3 )
                                                    {
                                                      v1339 = WORD1(v1579);
                                                      v357 = (_BYTE *)(v342 + 7);
                                                      v358 = (unsigned __int8 *)(v341 + 2);
                                                      v359 = v1291;
                                                      v360 = v1203;
                                                      v361 = v356;
                                                      v362 = HIDWORD(v1579);
                                                      v363 = WORD2(v1579);
                                                      do
                                                      {
                                                        v364 = v358[1] | ((*v358 | ((*(v358 - 1) | (*(v358 - 2) << 8)) << 8)) << 8);
                                                        v365 = v358[5] | ((v358[4] | ((v358[3] | (v358[2] << 8)) << 8)) << 8);
                                                        v366 = v364 ^ v355;
                                                        v358 += 8;
                                                        v367 = v366 ^ v362 ^ 0xAB69605E ^ v365 ^ v84;
                                                        v368 = (__ROL4__(v367, 10)
                                                              + v363 * __ROL4__(v367 + 1419157410, 5)) ^ v366;
                                                        v369 = (WORD1(v1579) * __ROR4__(v362 + v368, 9)
                                                              - __ROL4__(v368, 2)) ^ v367;
                                                        v370 = (24670 * (v369 - v363) - (v369 >> 13)) ^ v368;
                                                        v371 = (HIWORD(v1579) * __ROL4__(v370 ^ WORD1(v1579), 6)
                                                              - __ROL4__(v370, 2)) ^ v369;
                                                        v372 = (v362 - (v371 ^ 0xAB69605E)) ^ v370;
                                                        v373 = (v1339 * (v372 ^ v363)) ^ __ROR4__(v372, 6) ^ v371;
                                                        v374 = (__ROL4__(v373, 2) + 24670 * __ROR4__(v373 + v362, 15)) ^ v372;
                                                        v375 = (HIWORD(v1579) * __ROR4__(v374 + 1419157410, 14)
                                                              - __ROL4__(v374, 8)) ^ v373;
                                                        v376 = __ROR4__(v375, 10) ^ (v363
                                                                                   * __ROR4__(v375 ^ 0xAB69605E, 12)) ^ v374;
                                                        v377 = (v376 >> 10) ^ (WORD1(v1579) * (v376 ^ HIWORD(v1579))) ^ v375;
                                                        v378 = (HIWORD(v1579) * (__ROR4__(~v377, 5) + 24670)) ^ v376;
                                                        v379 = (v378 - HIWORD(v1579)) ^ 0xAB69605E ^ v377;
                                                        v380 = ((v379 >> 2) + v363 * __ROL4__(v379 ^ HIWORD(v1579), 2)) ^ v378;
                                                        v381 = (__ROL4__(v380, 7)
                                                              + WORD1(v1579) * __ROR4__(v380 - v362, 6)) ^ v379;
                                                        v382 = (24670 * (v381 ^ v363) + __ROR4__(v381, 9)) ^ v380;
                                                        v383 = (__ROL4__(v382, 7)
                                                              + HIWORD(v1579) * __ROL4__(v382 ^ WORD1(v1579), 5)) ^ v381;
                                                        v384 = v362 ^ v383 ^ 0xAB69605E ^ v382;
                                                        v385 = (v363 * (__ROR4__(v384, 3) - WORD1(v1579))) ^ v383;
                                                        v386 = (24670 * __ROR4__(v385 - v362, 1) - __ROR4__(v385, 6)) ^ v384;
                                                        v387 = (__ROL4__(v386, 14)
                                                              + HIWORD(v1579) * __ROL4__(v386 - 1419157410, 3)) ^ v385;
                                                        v388 = (v363 * __ROL4__(v387 - 1419157410, 15)
                                                              - __ROR4__(v387, 14)) ^ v386;
                                                        v389 = (v388 >> 3) ^ (WORD1(v1579) * (v388 ^ 0x605E)) ^ v387;
                                                        v390 = v359 ^ __ROL4__(v389, 2) ^ (24670
                                                                                         * __ROL4__(v362 ^ v389, 4)) ^ v388;
                                                        v391 = v360 ^ v389;
                                                        *(v357 - 4) = v390;
                                                        v392 = __ROR4__(v390, 8);
                                                        *v357 = v391;
                                                        v393 = __ROR4__(v391, 8);
                                                        *(v357 - 5) = v392;
                                                        v394 = __ROR4__(v392, 8);
                                                        *(v357 - 1) = v393;
                                                        v395 = __ROR4__(v393, 8);
                                                        *(v357 - 6) = v394;
                                                        v396 = __ROR4__(v394, 8);
                                                        *(v357 - 2) = v395;
                                                        v397 = __ROR4__(v395, 8);
                                                        *(v357 - 7) = v396;
                                                        *(v357 - 3) = v397;
                                                        v355 = __ROR4__(v396, 8);
                                                        LODWORD(v84) = __ROR4__(v397, 8);
                                                        v359 = v364;
                                                        v360 = v365;
                                                        v357 += 8;
                                                        --v361;
                                                      }
                                                      while ( v361 );
                                                      v340 = 0;
                                                      v157 = v1323;
                                                      v158 = (unsigned int *)v1380;
                                                      v155 = (unsigned __int8 *)v1301;
                                                      v339 = (int *)v1390;
                                                      v338 = (SIZE_T)v1374;
                                                    }
                                                    for ( m = 0LL; m < v338; ++m )
                                                      v340 ^= *((_BYTE *)v339 + m);
                                                    v399 = v1375;
                                                    v400 = v1389;
                                                    if ( v340 != *(_QWORD *)&Srcb[v338] )
                                                    {
                                                      MemoryFree(v339);
                                                      v84 = 0LL;
                                                      goto LABEL_493;
                                                    }
                                                    v1403 = 0;
                                                    v1466 = v339;
                                                    if ( (unsigned int)v338 >= 4 )
                                                    {
                                                      v1204 = *v339;
                                                      v401 = RtlULongLongAdd(
                                                               (unsigned __int64)v339,
                                                               4LL,
                                                               (unsigned __int64 *)&v1466);
                                                      v1390 = v402;
                                                      v1389 = v403;
                                                      if ( v401 < 0 )
                                                        goto LABEL_534;
                                                      v401 = RtlUIntAdd(0, 4, &v1403);
                                                      v1390 = v339;
                                                      v1389 = v400;
                                                      v404 = v157;
                                                      if ( v401 < 0 )
                                                        goto LABEL_534;
                                                      if ( (unsigned int)v1374 - v1403 < 4 )
                                                        goto LABEL_498;
                                                      v1292 = *(_DWORD *)v1466;
                                                      v401 = RtlULongLongAdd(
                                                               (unsigned __int64)v1466,
                                                               4LL,
                                                               (unsigned __int64 *)&v1466);
                                                      v1390 = v405;
                                                      v1389 = v406;
                                                      if ( v401 < 0 )
                                                        goto LABEL_534;
                                                      v401 = RtlUIntAdd(v1403, 4, &v1403);
                                                      v1390 = v339;
                                                      v1389 = v400;
                                                      v404 = v157;
                                                      if ( v401 < 0 )
                                                        goto LABEL_534;
                                                      if ( (unsigned int)v1374 - v1403 < v1292 )
                                                      {
LABEL_498:
                                                        v157 = v404;
                                                      }
                                                      else
                                                      {
                                                        v401 = RtlUIntAdd(v1403, v1292, &v1403);
                                                        v1390 = v339;
                                                        v1389 = v400;
                                                        if ( v401 < 0 )
                                                          goto LABEL_534;
                                                        if ( (char *)v339 + (unsigned int)v1374 >= (char *)v1466 + v1292
                                                          && (unsigned __int64)v339
                                                           + (unsigned int)v1374
                                                           - (unsigned __int64)v1292
                                                           - (_QWORD)v1466 < 8 )
                                                        {
                                                          v407 = 0LL;
                                                          Srcc = 0LL;
                                                          v401 = 0;
                                                          v1340 = 0;
                                                          v1390 = v339;
                                                          v1389 = v400;
                                                          if ( !v1466 )
                                                          {
LABEL_521:
                                                            v84 = 0LL;
                                                            if ( v1292 )
                                                            {
                                                              v417 = GetProcessHeap();
                                                              v418 = v1292;
                                                              v407 = HeapAlloc(v417, 8u, v1292);
                                                              Srcc = v407;
                                                              v84 = 0LL;
                                                              if ( !v407 )
                                                              {
                                                                v401 = -1073741801;
LABEL_535:
                                                                v83 = v401 | 0x10000000;
                                                                goto LABEL_363;
                                                              }
                                                              v401 = 0;
                                                            }
                                                            else
                                                            {
                                                              v418 = 0LL;
                                                            }
                                                            if ( v1466 )
                                                            {
                                                              memcpy_0(v407, v1466, v418);
                                                              v407 = Srcc;
                                                              v84 = 0LL;
                                                            }
                                                            v1513[1] = v407;
                                                            LODWORD(v1513[0]) = v1340;
LABEL_530:
                                                            if ( v401 >= 0 && v1204 != LODWORD(v1513[0]) )
                                                              v401 = -1073741762;
                                                            goto LABEL_535;
                                                          }
                                                          v1380 = v1466;
                                                          v401 = RtlULongLongAdd((unsigned __int64)v1466, v1292, &v1467);
                                                          v1390 = v408;
                                                          v1389 = v409;
                                                          if ( v401 < 0 )
                                                          {
LABEL_524:
                                                            v84 = 0LL;
                                                            goto LABEL_530;
                                                          }
                                                          v1390 = v408;
                                                          v1389 = v409;
                                                          v410 = v1467;
                                                          if ( (unsigned __int64)v1380 < v1467 )
                                                          {
                                                            v411 = (SIZE_T)v408;
                                                            v1390 = v408;
                                                            v1389 = v409;
                                                            v412 = v1380;
                                                            while ( 1 )
                                                            {
                                                              v1380 = v399;
                                                              Size = v411;
                                                              v401 = RtlULongLongAdd(
                                                                       (unsigned __int64)v412,
                                                                       4LL,
                                                                       &v1468);
                                                              if ( v401 < 0 )
                                                                goto LABEL_524;
                                                              if ( v1468 > v414 )
                                                                goto LABEL_517;
                                                              v401 = RtlUIntAdd(4u, *v413, &v1404);
                                                              if ( v401 < 0 )
                                                                goto LABEL_534;
                                                              v401 = RtlULongLongAdd(
                                                                       v415,
                                                                       v1404,
                                                                       (unsigned __int64 *)&v1469);
                                                              v1390 = (LPVOID)Size;
                                                              v1389 = v416;
                                                              v1375 = v399;
                                                              if ( v401 < 0 )
                                                                goto LABEL_524;
                                                              v412 = v1469;
                                                              v1390 = (LPVOID)Size;
                                                              v1389 = v416;
                                                              v1375 = v399;
                                                              if ( (unsigned __int64)v1469 > v410 )
                                                                goto LABEL_517;
                                                              ++v1340;
                                                              if ( (unsigned __int64)v1469 >= v410 )
                                                              {
                                                                v1390 = (LPVOID)Size;
                                                                v1389 = v416;
                                                                v1375 = v399;
                                                                goto LABEL_519;
                                                              }
                                                              v411 = Size;
                                                            }
                                                          }
                                                          v412 = v1380;
LABEL_519:
                                                          if ( v412 == (LPVOID)v410 )
                                                          {
                                                            v407 = 0LL;
                                                            goto LABEL_521;
                                                          }
LABEL_517:
                                                          v401 = -1073741811;
LABEL_534:
                                                          v84 = 0LL;
                                                          goto LABEL_535;
                                                        }
                                                      }
                                                    }
                                                    v401 = -1073741762;
                                                    v1390 = v339;
                                                    v1389 = v400;
                                                    goto LABEL_534;
                                                  }
                                                }
LABEL_364:
                                                if ( !v155 )
                                                  goto LABEL_366;
                                                goto LABEL_365;
                                              }
                                            }
                                          }
                                          v232 = -1073741801;
                                          v1230 = (void *)*((_QWORD *)v231 + 1);
                                          if ( v1230 )
                                          {
                                            v248 = GetProcessHeap();
                                            HeapFree(v248, 0, v1230);
                                            *((_QWORD *)v231 + 1) = 0LL;
                                          }
                                          v1231 = (void *)*((_QWORD *)v231 + 3);
                                          if ( v1231 )
                                          {
                                            v249 = GetProcessHeap();
                                            HeapFree(v249, 0, v1231);
                                            *((_QWORD *)v231 + 3) = 0LL;
                                          }
                                          v1232 = (void *)*((_QWORD *)v231 + 5);
                                          if ( v1232 )
                                          {
                                            v250 = GetProcessHeap();
                                            HeapFree(v250, 0, v1232);
                                            *((_QWORD *)v231 + 5) = 0LL;
                                          }
                                          v251 = GetProcessHeap();
                                          HeapFree(v251, 0, v231);
                                        }
                                        else
                                        {
                                          v232 = -1073741801;
                                        }
                                        v233 = v1374;
                                        goto LABEL_299;
                                      }
                                    }
                                  }
                                }
                              }
                              v92 = v80;
LABEL_212:
                              v81 = 4LL;
                              goto LABEL_213;
                            }
LABEL_244:
                            v92 = v80;
                            goto LABEL_212;
                          }
                          v150 = (int *)lpMem[1];
                          v1460 = (int *)lpMem[1];
                          if ( v138 )
                          {
                            do
                            {
                              v83 = RtlUIntAdd(4u, *v150, &v1392);
                              v1335 = v83;
                              if ( v83 < 0 )
                                goto LABEL_211;
                              v83 = RtlULongLongAdd((unsigned __int64)v150, v1392, (unsigned __int64 *)&v1460);
                              v1335 = v83;
                              if ( v83 < 0 )
                                goto LABEL_211;
                              v150 = v1460;
                            }
                            while ( v151 + 1 < v152 );
                          }
                          v83 = RtlULongLongAdd((unsigned __int64)v150, 4LL, (unsigned __int64 *)&v1521);
                          v1335 = v83;
                          if ( v83 < 0 )
                            goto LABEL_244;
                          if ( v150 + 2 <= (int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                          {
                            v81 = 4LL;
                            *v150 = 4;
                            *v1521 = 4;
                            ++LODWORD(lpMem[0]);
                            goto LABEL_245;
                          }
LABEL_210:
                          v83 = -1073741789;
                          v1335 = -1073741789;
LABEL_211:
                          v92 = v80;
                          goto LABEL_212;
                        }
LABEL_232:
                        v92 = v80;
                        goto LABEL_212;
                      }
                      while ( 1 )
                      {
                        v83 = RtlUIntAdd(4u, *v139, &v1411);
                        v1335 = v83;
                        if ( v83 < 0 )
                          break;
                        v83 = RtlULongLongAdd((unsigned __int64)v139, v1411, (unsigned __int64 *)&v1459);
                        v1335 = v83;
                        if ( v83 < 0 )
                          goto LABEL_211;
                        v139 = v1459;
                        if ( v140 + 1 >= v141 )
                          goto LABEL_208;
                      }
                      v92 = v80;
                    }
                    v81 = v136;
                    goto LABEL_213;
                  }
LABEL_180:
                  v92 = v80;
                  goto LABEL_212;
                }
                v129 = (int *)lpMem[1];
                v1456 = (int *)lpMem[1];
                if ( v123 )
                {
                  do
                  {
                    v83 = RtlUIntAdd(4u, *v129, &v1446);
                    v1335 = v83;
                    if ( v83 < 0 )
                      goto LABEL_166;
                    v83 = RtlULongLongAdd((unsigned __int64)v129, v1446, (unsigned __int64 *)&v1456);
                    v1335 = v83;
                    if ( v83 < 0 )
                      goto LABEL_166;
                    v129 = v1456;
                  }
                  while ( v130 + 1 < v131 );
                }
                v83 = RtlULongLongAdd((unsigned __int64)v129, 4LL, (unsigned __int64 *)&v1518);
                v1335 = v83;
                if ( v83 < 0 )
                  goto LABEL_180;
                if ( v129 + 3 <= (int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                {
                  *v129 = 8;
                  *v1518 = v1309;
                  v128 = (int)lpMem[0];
                  goto LABEL_172;
                }
LABEL_164:
                v83 = -1073741789;
LABEL_165:
                v1335 = v83;
                goto LABEL_166;
              }
LABEL_168:
              v92 = v80;
              goto LABEL_212;
            }
            v83 = RtlUIntAdd(4u, 8, (unsigned int *)&v1443);
            v1335 = v83;
            if ( v83 >= 0 )
            {
              v83 = RtlUIntAdd(HIDWORD(lpMem[0]), v1443, (unsigned int *)lpMem + 1);
              v1335 = v83;
              v122 = (int)lpMem[0];
              if ( v83 >= 0 )
                goto LABEL_157;
              goto LABEL_168;
            }
LABEL_166:
            v92 = v80;
LABEL_213:
            v89 = (WCHAR *)lpModuleName;
            goto LABEL_214;
          }
        }
        else
        {
          v118 = (int *)lpMem[1];
          v1454 = (int *)lpMem[1];
          if ( v115 )
          {
            do
            {
              v83 = RtlUIntAdd(4u, *v118, &v1442);
              v1335 = v83;
              if ( v83 < 0 )
                goto LABEL_119;
              v83 = RtlULongLongAdd((unsigned __int64)v118, v1442, (unsigned __int64 *)&v1454);
              v1335 = v83;
              if ( v83 < 0 )
                goto LABEL_119;
              v118 = v1454;
            }
            while ( v119 + 1 < v120 );
          }
          v83 = RtlULongLongAdd((unsigned __int64)v118, 4LL, (unsigned __int64 *)&v1516);
          v1335 = v83;
          if ( v83 >= 0 )
          {
            if ( v118 + 41 > (int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
              goto LABEL_141;
            *v118 = 160;
            v121 = v1516;
            *v1516 = *(_OWORD *)v91;
            v121[1] = *((_OWORD *)v91 + 1);
            v121[2] = *((_OWORD *)v91 + 2);
            v121[3] = *((_OWORD *)v91 + 3);
            v121[4] = *((_OWORD *)v91 + 4);
            v121[5] = *((_OWORD *)v91 + 5);
            v121[6] = *((_OWORD *)v91 + 6);
            v121[7] = *((_OWORD *)v91 + 7);
            v121[8] = *((_OWORD *)v91 + 8);
            v121[9] = *((_OWORD *)v91 + 9);
            v116 = (int)lpMem[0];
            goto LABEL_145;
          }
        }
        v92 = v80;
        goto LABEL_212;
      }
    }
  }
LABEL_616:
  v89 = v91;
  v81 = v96;
LABEL_214:
  lpMem[0] = 0LL;
  v142 = lpMem[1];
  if ( lpMem[1] )
  {
    v143 = GetProcessHeap();
    HeapFree(v143, 0, v142);
    v84 = 0LL;
    lpMem[1] = 0LL;
  }
  v1513[0] = 0LL;
  v144 = v1513[1];
  if ( v1513[1] )
  {
    v145 = GetProcessHeap();
    HeapFree(v145, 0, v144);
    v84 = 0LL;
    v1513[1] = 0LL;
  }
  if ( v89 )
  {
    v146 = GetProcessHeap();
    HeapFree(v146, 0, v89);
    v84 = 0LL;
  }
  if ( v1244 )
  {
    v147 = GetProcessHeap();
    HeapFree(v147, 0, v1244);
    v84 = 0LL;
  }
  if ( v83 < 0 )
    goto LABEL_102;
  if ( !v92 )
    goto LABEL_1269;
  v1476[0] = v84;
  g_WarbirdNotificationInformation = v92;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  v149 = 0LL;
  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    goto LABEL_1221;
  v1224 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
  if ( !v1224 )
  {
    GetLastError();
    goto LABEL_1221;
  }
  g_WarbirdPaintInitTime = ((__int64 (*)(void))off_1807A9198)();
  v451 = g_WarbirdNotificationInformation;
  v1206 = g_WarbirdNotificationInformation;
  memset_0(&v1564, 0, 0x70uLL);
  v1584 = 0LL;
  v1391 = 0LL;
  v1599 = 0LL;
  v1600 = 0LL;
  v1601 = 0LL;
  v1602 = 0;
  v1441 = 0LL;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v452 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_658;
  v1293 = 0;
  v1215 = 0;
  v453 = 0LL;
  v454 = (char *)MemoryAlloc(0x338uLL);
  lpModuleNamea = (WCHAR *)v454;
  if ( v454 )
  {
    v455 = -1;
    v456 = 0;
    v457 = 0;
    v458 = v454 + 7;
    v459 = (unsigned __int8 *)&unk_180697D32;
    v460 = 103LL;
    do
    {
      v461 = v459[1] | ((*v459 | ((*(v459 - 1) | (*(v459 - 2) << 8)) << 8)) << 8);
      v462 = v459[5] | ((v459[4] | ((v459[3] | (v459[2] << 8)) << 8)) << 8);
      v463 = v461 ^ v457;
      v459 += 8;
      v464 = v463 ^ v462 ^ v456 ^ 0xAC987321;
      v465 = (__ROL4__(v464, 10) + 4991 * __ROL4__(v464 + 1419157410, 5)) ^ v463;
      v466 = (43881 * __ROR4__(v465 + 133239679, 9) - __ROL4__(v465, 2)) ^ v464;
      v467 = (24670 * v466 - (v466 >> 13) - 123127970) ^ v465;
      v468 = (2033 * __ROL4__(v467 ^ 0xAB69, 6) - __ROL4__(v467, 2)) ^ v466;
      v469 = (133239679 - (v468 ^ 0xAB69605E)) ^ v467;
      v470 = (43881 * (v469 ^ 0x137F)) ^ __ROR4__(v469, 6) ^ v468;
      v471 = (__ROL4__(v470, 2) + 24670 * __ROR4__(v470 + 133239679, 15)) ^ v469;
      v472 = (2033 * __ROR4__(v471 + 1419157410, 14) - __ROL4__(v471, 8)) ^ v470;
      v473 = __ROR4__(v472, 10) ^ (4991 * __ROR4__(v472 ^ 0xAB69605E, 12)) ^ v471;
      v474 = v472 ^ (v473 >> 10) ^ (43881 * (v473 ^ 0x7F1));
      v475 = (2033 * (__ROR4__(~v474, 5) + 24670)) ^ v473;
      v476 = v474 ^ (v475 - 2033) ^ 0xAB69605E;
      v477 = ((v476 >> 2) + 4991 * __ROL4__(v474 ^ (v475 - 2033) ^ 0xAB6967AF, 2)) ^ v475;
      v478 = (__ROL4__(v477, 7) + 43881 * __ROR4__(v477 - 133239679, 6)) ^ v476;
      v479 = (24670 * (v478 ^ 0x137F) + __ROR4__(v478, 9)) ^ v477;
      v480 = (__ROL4__(v479, 7) + 2033 * __ROL4__(v479 ^ 0xAB69, 5)) ^ v478;
      v481 = v480 ^ v479 ^ 0xAC987321;
      v482 = (4991 * __ROR4__(v481, 3) - 219010071) ^ v480;
      v483 = (24670 * __ROR4__(v482 - 133239679, 1) - __ROR4__(v482, 6)) ^ v481;
      v484 = (__ROL4__(v483, 14) + 2033 * __ROL4__(v483 - 1419157410, 3)) ^ v482;
      v485 = (4991 * __ROL4__(v484 - 1419157410, 15) - __ROR4__(v484, 14)) ^ v483;
      v486 = (v485 >> 3) ^ (43881 * (v485 ^ 0x605E)) ^ v484;
      v487 = (unsigned int)v453 ^ __ROL4__(v486, 2) ^ (24670 * __ROL4__(v486 ^ 0x7F1137F, 4)) ^ v485;
      v488 = v455 ^ v486;
      *(v458 - 4) = v487;
      v489 = __ROR4__(v487, 8);
      *v458 = v488;
      v490 = __ROR4__(v488, 8);
      *(v458 - 5) = v489;
      v491 = __ROR4__(v489, 8);
      *(v458 - 1) = v490;
      v492 = __ROR4__(v490, 8);
      *(v458 - 6) = v491;
      v493 = __ROR4__(v491, 8);
      *(v458 - 2) = v492;
      v494 = __ROR4__(v492, 8);
      *(v458 - 7) = v493;
      *(v458 - 3) = v494;
      v457 = __ROR4__(v493, 8);
      v456 = __ROR4__(v494, 8);
      LODWORD(v453) = v461;
      v455 = v462;
      v458 += 8;
      --v460;
    }
    while ( v460 );
    v495 = 0LL;
    v496 = 0;
    v451 = v1206;
    v453 = 0LL;
    v497 = 0;
    do
      v496 ^= *((_BYTE *)lpModuleNamea + v495++);
    while ( v495 < 0x338 );
    if ( v496 == 64LL )
    {
      v453 = lpModuleNamea;
      v501 = lpModuleNamea;
      *((_BYTE *)lpModuleNamea + 823) = 0;
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      if ( !*(_BYTE *)lpModuleNamea )
      {
LABEL_629:
        v498 = GetProcessHeap();
        HeapFree(v498, 0, v453);
        goto LABEL_630;
      }
      while ( 1 )
      {
        v502 = v501;
        v503 = -1LL;
        do
          ++v503;
        while ( v501[v503] );
        v504 = &v501[v503];
        v1245 = (wchar_t *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1215);
        if ( !GetModuleHandleExW(0, v502, (HMODULE *)v1245) )
          break;
        v497 = 0;
        v505 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1215);
        if ( **(_WORD **)v1245 == 23117
          && (v506 = *(int *)(*(_QWORD *)v1245 + 60LL), (unsigned int)v506 < 0x10000000)
          && (v507 = *(_QWORD *)v1245 + v506, v507 >= *(_QWORD *)v1245)
          && *(_DWORD *)v507 == 17744 )
        {
          if ( ((*(_WORD *)(v507 + 24) - 267) & 0xFEFF) != 0 )
          {
            v497 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v1245 + 6) = *(_QWORD *)(v507 + 136);
            *((_DWORD *)v1245 + 2) = *(_DWORD *)(v507 + 80);
          }
        }
        else
        {
          v497 = -1073741701;
        }
        v1365 = *(_DWORD *)(v504 + 1);
        v501 = v504 + 3;
        v508 = 0;
        for ( n = 0; v508 < v1365; n = v508 )
        {
          v509 = (const CHAR *)v501;
          v510 = -1LL;
          do
            ++v510;
          while ( *((_BYTE *)v501 + v510) );
          v501 = (WCHAR *)((char *)v501 + v510 + 1);
          if ( v497 >= 0 )
          {
            v511 = (void **)GetProcAddress(*v505, v509);
            if ( !v511 )
              goto LABEL_628;
            (&WARBIRD::g_FuncAddress)[v1293] = v511;
            v505 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1215);
            v508 = n;
          }
          ++v1293;
          ++v508;
        }
        ++v1215;
        if ( !*(_BYTE *)v501 )
          goto LABEL_628;
      }
    }
    else
    {
      MemoryFree(lpModuleNamea);
    }
  }
  v497 = -1073741702;
LABEL_628:
  if ( v453 )
    goto LABEL_629;
LABEL_630:
  if ( v497 >= 0 )
  {
    v452 = g_WarbirdSecureFunctionsRefCount;
    LODWORD(v149) = 0;
LABEL_658:
    g_WarbirdSecureFunctionsRefCount = v452 + 1;
    goto LABEL_659;
  }
  v499 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v500 = 4LL;
  LODWORD(v149) = 0;
  do
  {
    if ( *v499 )
      FreeLibrary(*v499);
    v499 += 3;
    --v500;
  }
  while ( v500 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_659:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  v1294 = 0;
  v1366 = 0;
  v1477 = 0LL;
  v1246 = 0LL;
  lpModuleNameb = 0LL;
  v1310 = 0LL;
  v1523 = 0LL;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v512 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_702;
  v1216 = 0;
  v1285 = 0;
  LODWORD(Size) = 0;
  v513 = 0LL;
  v514 = (char *)MemoryAlloc(0x338uLL);
  v1324 = (WCHAR *)v514;
  if ( !v514 )
  {
LABEL_669:
    v1285 = -1073741702;
    goto LABEL_693;
  }
  v515 = -1;
  v516 = 0;
  v517 = v514 + 7;
  v518 = (unsigned __int8 *)&unk_180697D32;
  v519 = 103LL;
  do
  {
    v520 = v518[1] | ((*v518 | ((*(v518 - 1) | (*(v518 - 2) << 8)) << 8)) << 8);
    v521 = v518[5] | ((v518[4] | ((v518[3] | (v518[2] << 8)) << 8)) << 8);
    v522 = v520 ^ v516;
    v518 += 8;
    v523 = v521 ^ v522 ^ (unsigned int)v149 ^ 0xAC987321;
    v524 = (__ROL4__(v523, 10) + 4991 * __ROL4__(v523 + 1419157410, 5)) ^ v522;
    v525 = (43881 * __ROR4__(v524 + 133239679, 9) - __ROL4__(v524, 2)) ^ v523;
    v526 = (24670 * v525 - (v525 >> 13) - 123127970) ^ v524;
    v527 = (2033 * __ROL4__(v526 ^ 0xAB69, 6) - __ROL4__(v526, 2)) ^ v525;
    v528 = (133239679 - (v527 ^ 0xAB69605E)) ^ v526;
    v529 = (43881 * (v528 ^ 0x137F)) ^ __ROR4__(v528, 6) ^ v527;
    v530 = (__ROL4__(v529, 2) + 24670 * __ROR4__(v529 + 133239679, 15)) ^ v528;
    v531 = (2033 * __ROR4__(v530 + 1419157410, 14) - __ROL4__(v530, 8)) ^ v529;
    v532 = __ROR4__(v531, 10) ^ (4991 * __ROR4__(v531 ^ 0xAB69605E, 12)) ^ v530;
    v533 = (v532 >> 10) ^ (43881 * (v532 ^ 0x7F1)) ^ v531;
    v534 = (2033 * (__ROR4__(~v533, 5) + 24670)) ^ v532;
    v535 = v533 ^ (v534 - 2033) ^ 0xAB69605E;
    v536 = ((v535 >> 2) + 4991 * __ROL4__(v533 ^ (v534 - 2033) ^ 0xAB6967AF, 2)) ^ v534;
    v537 = (__ROL4__(v536, 7) + 43881 * __ROR4__(v536 - 133239679, 6)) ^ v535;
    v538 = (24670 * (v537 ^ 0x137F) + __ROR4__(v537, 9)) ^ v536;
    v539 = (__ROL4__(v538, 7) + 2033 * __ROL4__(v538 ^ 0xAB69, 5)) ^ v537;
    v540 = v539 ^ v538 ^ 0xAC987321;
    v541 = (4991 * __ROR4__(v540, 3) - 219010071) ^ v539;
    v542 = (24670 * __ROR4__(v541 - 133239679, 1) - __ROR4__(v541, 6)) ^ v540;
    v543 = (__ROL4__(v542, 14) + 2033 * __ROL4__(v542 - 1419157410, 3)) ^ v541;
    v544 = (4991 * __ROL4__(v543 - 1419157410, 15) - __ROR4__(v543, 14)) ^ v542;
    v545 = (v544 >> 3) ^ (43881 * (v544 ^ 0x605E)) ^ v543;
    v546 = (unsigned int)v513 ^ __ROL4__(v545, 2) ^ (24670 * __ROL4__(v545 ^ 0x7F1137F, 4)) ^ v544;
    v547 = v515 ^ v545;
    *(v517 - 4) = v546;
    v548 = __ROR4__(v546, 8);
    *v517 = v547;
    v549 = __ROR4__(v547, 8);
    *(v517 - 5) = v548;
    v550 = __ROR4__(v548, 8);
    *(v517 - 1) = v549;
    v551 = __ROR4__(v549, 8);
    *(v517 - 6) = v550;
    v552 = __ROR4__(v550, 8);
    *(v517 - 2) = v551;
    v553 = __ROR4__(v551, 8);
    *(v517 - 7) = v552;
    *(v517 - 3) = v553;
    v516 = __ROR4__(v552, 8);
    LODWORD(v149) = __ROR4__(v553, 8);
    LODWORD(v513) = v520;
    v515 = v521;
    v517 += 8;
    --v519;
  }
  while ( v519 );
  v554 = 0LL;
  v555 = 0;
  v451 = v1206;
  v83 = v1335;
  v513 = 0LL;
  do
    v555 ^= *((_BYTE *)v1324 + v554++);
  while ( v554 < 0x338 );
  if ( v555 != 64LL )
  {
    MemoryFree(v1324);
    goto LABEL_669;
  }
  v513 = v1324;
  v556 = v1324;
  *((_BYTE *)v1324 + 823) = 0;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  if ( !*(_BYTE *)v1324 )
    goto LABEL_694;
  while ( 1 )
  {
    v557 = v556;
    v558 = -1LL;
    do
      ++v558;
    while ( v556[v558] );
    v559 = &v556[v558];
    v560 = (char *)&WARBIRD::g_arModuleInfo + 24 * (unsigned int)Size;
    if ( !GetModuleHandleExW(0, v557, (HMODULE *)v560) )
      break;
    v561 = 0;
    v1285 = 0;
    if ( **(_WORD **)v560 == 23117
      && (v562 = *(int *)(*(_QWORD *)v560 + 60LL), (unsigned int)v562 < 0x10000000)
      && (v563 = *(_QWORD *)v560 + v562, v563 >= *(_QWORD *)v560)
      && *(_DWORD *)v563 == 17744 )
    {
      if ( ((*(_WORD *)(v563 + 24) - 267) & 0xFEFF) == 0 )
      {
        *(_QWORD *)(v560 + 12) = *(_QWORD *)(v563 + 136);
        *((_DWORD *)v560 + 2) = *(_DWORD *)(v563 + 80);
        goto LABEL_683;
      }
      v561 = -1073741811;
    }
    else
    {
      v561 = -1073741701;
    }
    v1285 = v561;
LABEL_683:
    v1207 = *(_DWORD *)(v559 + 1);
    v556 = v559 + 3;
    v564 = 0;
    for ( LODWORD(v1376) = 0; v564 < v1207; LODWORD(v1376) = v564 )
    {
      v565 = (const CHAR *)v556;
      v566 = -1LL;
      do
        ++v566;
      while ( *((_BYTE *)v556 + v566) );
      v556 = (WCHAR *)((char *)v556 + v566 + 1);
      if ( v561 >= 0 )
      {
        v567 = (void **)GetProcAddress(*(HMODULE *)v560, v565);
        if ( !v567 )
          goto LABEL_693;
        (&WARBIRD::g_FuncAddress)[v1216] = v567;
        v561 = v1285;
        v564 = (unsigned int)v1376;
      }
      ++v1216;
      ++v564;
    }
    LODWORD(Size) = Size + 1;
    if ( !*(_BYTE *)v556 )
      goto LABEL_693;
  }
  v1285 = -1073741702;
LABEL_693:
  if ( v513 )
  {
LABEL_694:
    v568 = GetProcessHeap();
    HeapFree(v568, 0, v513);
  }
  if ( v1285 >= 0 )
  {
    v512 = g_WarbirdSecureFunctionsRefCount;
LABEL_702:
    g_WarbirdSecureFunctionsRefCount = v512 + 1;
    goto LABEL_703;
  }
  v569 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v570 = 4LL;
  do
  {
    if ( *v569 )
      FreeLibrary(*v569);
    v569 += 3;
    --v570;
  }
  while ( v570 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_703:
  LODWORD(v571) = 0;
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  memset_0(&v1564, 0, 0x70uLL);
  v1584 = 0LL;
  v572 = v451 & 0xF;
  LODWORD(v1376) = v572;
  v1639[0] = (v451 >> 4) & 0xF;
  v1639[1] = (v451 >> 8) & 0xF;
  v1639[2] = (v451 >> 12) & 0xF;
  v1302 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
  LODWORD(Size) = 0xFFFFFF;
  if ( v1302 )
  {
    v575 = 0LL;
    v1478 = 0LL;
    v1479 = 0LL;
    v1480 = 0LL;
    v1481 = 0LL;
    v1482 = 0LL;
    v1483 = 0LL;
    v574 = 0;
    v1208 = 0;
    v1407 = 0;
    if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1807A91A0)(
                          8LL,
                          &v1373,
                          0LL,
                          &v1407) )
    {
      v576 = GetLastError();
LABEL_710:
      v574 = v576;
      if ( v576 > 0 )
        v574 = (unsigned __int16)v576 | 0x80070000;
      if ( v574 >= 0 )
        v574 = -2147467259;
LABEL_728:
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1483);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1482);
      if ( v574 < 0 )
      {
        v592 = v1480;
LABEL_747:
        if ( v1479 )
          memset(v1479, 0, v592);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1481);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1479);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1478);
        if ( v574 < 0 )
          goto LABEL_919;
        v1566 = *v1477;
        v1567 = v1477[1];
        v1568 = v1477[2];
        v1524 = 0LL;
        LODWORD(v1524) = 16;
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1807A9268)(
                              66LL,
                              0LL,
                              &v1524,
                              0LL) )
        {
          v593 = GetLastError();
          v574 = v593;
          if ( v593 > 0 )
            v574 = (unsigned __int16)v593 | 0x80070000;
          if ( v574 >= 0 )
            v574 = -2147467259;
          v1565 = 0;
          goto LABEL_919;
        }
        v1565 = BYTE4(v1524) & 1;
        v664 = (int)v1376;
        v1210 = 42;
        if ( (_DWORD)v1376 == 1 )
        {
          v1294 = 42;
        }
        else
        {
          if ( (_DWORD)v1376 != 2 )
          {
            if ( (_DWORD)v1376 == 3 )
            {
              v1294 = 225;
              v1366 = 225;
            }
LABEL_814:
            v665 = 96;
            v1219 = 96;
            memset_0(v1628, 0, 0xDCuLL);
            v1629 = 220;
            v574 = 0;
            if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *))off_1807A91E0)(
                                 0LL,
                                 0xFFFFFFFFLL,
                                 v1628) )
            {
              v665 = v1630;
              *(_QWORD *)&v1523 = 0LL;
              *((_QWORD *)&v1523 + 1) = v1631;
              if ( v1630 < 0x60u )
                v665 = 96;
              v1219 = v665;
            }
            v571 = (__int64)v1310;
            if ( v664 == 1 )
              v571 = (__int64)v1246;
            memset_0(v1619, 0, 0x5CuLL);
            v666 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
            if ( !v666 )
            {
              v667 = GetLastError();
              v574 = v667;
              LODWORD(v571) = 0;
              if ( v667 > 0 )
                v574 = (unsigned __int16)v667 | 0x80070000;
              if ( v574 >= 0 )
                v574 = -2147467259;
              goto LABEL_919;
            }
            v1619[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1294, v665, 72LL);
            v1619[4] = 400;
            v1620 = 5;
            StringCchCopyW(v1621, 32LL, (const wchar_t *)v571);
            v668 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1619);
            LODWORD(v571) = 0;
            if ( v668 )
            {
              v1569 = (wchar_t *)v668;
            }
            else
            {
              v669 = GetLastError();
              v574 = v669;
              if ( v669 > 0 )
                v574 = (unsigned __int16)v669 | 0x80070000;
              if ( v574 >= 0 )
                v574 = -2147467259;
            }
            ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v666);
            if ( v574 < 0 )
              goto LABEL_919;
            v572 = (int)v1376;
            v670 = v1310;
            if ( (_DWORD)v1376 == 1 )
              v670 = v1246;
            v1311 = v670;
            memset_0(v1622, 0, 0x5CuLL);
            v574 = 0;
            v571 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
            if ( !v571 )
            {
              v671 = GetLastError();
              v574 = v671;
              if ( v671 > 0 )
                v574 = (unsigned __int16)v671 | 0x80070000;
              if ( v574 < 0 )
                goto LABEL_920;
              goto LABEL_838;
            }
            v1622[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1366, v665, 72LL);
            v1622[4] = 400;
            v1623 = 5;
            StringCchCopyW(v1624, 32LL, v1311);
            v672 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1622);
            if ( v672 )
            {
              v1570 = (wchar_t *)v672;
            }
            else
            {
              v673 = GetLastError();
              v574 = v673;
              if ( v673 > 0 )
                v574 = (unsigned __int16)v673 | 0x80070000;
              if ( v574 >= 0 )
                v574 = -2147467259;
            }
            ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v571);
            LODWORD(v571) = 0;
            if ( v574 < 0 )
              goto LABEL_920;
            v674 = 0;
            if ( v572 != 1 )
            {
              if ( v572 == 2 )
              {
                LODWORD(v571) = SDWORD2(v1523) / 4;
                v674 = 0;
LABEL_850:
                *((_QWORD *)&v1584 + 1) = __PAIR64__(v674, v571);
                if ( v572 == 1 )
                {
                  v675 = 150;
                  v1367 = 32;
                }
                else
                {
                  if ( (unsigned int)(v572 - 2) > 1 )
                  {
                    v1367 = v1373;
                    v1210 = v1373;
                    v676 = v1373;
                    v675 = v1373;
                    goto LABEL_857;
                  }
                  v675 = 0;
                  v1210 = 0;
                  v1367 = 0;
                }
                v676 = 0;
LABEL_857:
                v1295 = v675;
                v677 = v571 - v675 - v676;
                DWORD2(v1574) = v677;
                DWORD2(v1573) = v677;
                v678 = v1566;
                v574 = 0;
                v1247 = (wchar_t *)((__int64 (__fastcall *)(SIZE_T, wchar_t *))off_1807A9178)(v1302, v1569);
                if ( !(unsigned int)((__int64 (__fastcall *)(SIZE_T, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                      v1302,
                                      v678,
                                      0xFFFFFFFFLL,
                                      &v1573,
                                      3152,
                                      0LL) )
                  v574 = -2147467259;
                if ( v1247 )
                  ((void (__fastcall *)(SIZE_T, wchar_t *))off_1807A9178)(v1302, v1247);
                if ( v574 >= 0 )
                {
                  v679 = v1567;
                  v574 = 0;
                  v1248 = (wchar_t *)((__int64 (__fastcall *)(SIZE_T, wchar_t *))off_1807A9178)(v1302, v1570);
                  if ( !(unsigned int)((__int64 (__fastcall *)(SIZE_T, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                        v1302,
                                        v679,
                                        0xFFFFFFFFLL,
                                        &v1574,
                                        3152,
                                        0LL) )
                    v574 = -2147467259;
                  if ( v1248 )
                    ((void (__fastcall *)(SIZE_T, wchar_t *))off_1807A9178)(v1302, v1248);
                  if ( v574 >= 0 )
                  {
                    if ( (unsigned int)((_DWORD)v1376 - 2) <= 1 )
                    {
                      v677 = DWORD2(v1574);
                      if ( SDWORD2(v1573) > SDWORD2(v1574) )
                        v677 = DWORD2(v1573);
                    }
                    if ( v1564 )
                    {
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                        &v1573,
                        v677 + v676 - DWORD2(v1573),
                        v1210);
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                        &v1574,
                        v677 + v676 - DWORD2(v1574),
                        (unsigned int)(v1367 + HIDWORD(v1573)));
                    }
                    else
                    {
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(&v1573, v1295, v1210);
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                        &v1574,
                        v1295,
                        (unsigned int)(v1367 + HIDWORD(v1573)));
                    }
                    v572 = (int)v1376;
                    if ( (unsigned int)((_DWORD)v1376 - 2) <= 1 )
                    {
                      *((_QWORD *)&v1584 + 1) = __PAIR64__(HIDWORD(v1574), v677);
                      v1572 = -5723992;
                      goto LABEL_904;
                    }
                    if ( (_DWORD)v1376 != 1 )
                      goto LABEL_904;
                    v1572 = 0xFFFFFF;
                    memset_0(v1625, 0, 0x5CuLL);
                    v574 = 0;
                    v680 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
                    if ( v680 )
                    {
                      v682 = v1219;
                      v1625[0] = -(int)((__int64 (__fastcall *)(__int64, _QWORD))off_1807A91B8)(11LL, v1219);
                      v1625[4] = 400;
                      v1626 = 5;
                      StringCchCopyW(v1627, 32LL, lpModuleNameb);
                      v683 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1625);
                      if ( v683 )
                      {
                        v1571 = v683;
                      }
                      else
                      {
                        v574 = GetLastError();
                        v684 = v574 < 0;
                        if ( v574 > 0 )
                        {
                          v574 = (unsigned __int16)v574 | 0x80070000;
                          v684 = v574 < 0;
                        }
                        if ( !v684 )
                          v574 = -2147467259;
                      }
                      ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v680);
                    }
                    else
                    {
                      v574 = GetLastError();
                      v681 = v574 < 0;
                      if ( v574 > 0 )
                      {
                        v574 = (unsigned __int16)v574 | 0x80070000;
                        v681 = v574 < 0;
                      }
                      if ( !v681 )
                      {
                        LODWORD(v571) = 0;
LABEL_838:
                        v574 = -2147467259;
LABEL_920:
                        ((void (__fastcall *)(_QWORD, SIZE_T))off_1807A9260)(0LL, v1302);
                        goto LABEL_921;
                      }
                      v682 = v1219;
                    }
                    if ( v574 >= 0 )
                    {
                      v1577 = v677;
                      v685 = v1568;
                      v574 = 0;
                      v686 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9178)(v1302, v1571);
                      if ( !(unsigned int)((__int64 (__fastcall *)(SIZE_T, void *, __int64, unsigned int *, int, _QWORD))off_1807A91D8)(
                                            v1302,
                                            v685,
                                            0xFFFFFFFFLL,
                                            &v1575,
                                            1120,
                                            0LL) )
                        v574 = -2147467259;
                      if ( v686 )
                        ((void (__fastcall *)(SIZE_T, __int64))off_1807A9178)(v1302, v686);
                      LODWORD(v571) = 0;
                      if ( v574 < 0 )
                        goto LABEL_919;
                      v687 = v1577 + 24;
                      if ( (int)(v1577 + 24) < 90 )
                        v687 = 90;
                      v1577 = v687;
                      v1578 = 32;
                      v1575 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1575, v682, 96LL);
                      v1576 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1576, v682, 96LL);
                      v1577 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1577, v682, 96LL);
                      v1578 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1578, v682, 96LL);
                      if ( v1564 )
                      {
                        v688 = (unsigned int)v1573;
                        if ( (int)v1573 >= (int)v1574 )
                          v688 = (unsigned int)v1574;
                      }
                      else
                      {
                        v689 = DWORD2(v1573);
                        if ( SDWORD2(v1573) <= SDWORD2(v1574) )
                          v689 = DWORD2(v1574);
                        v688 = v1575 + v689 - v1577;
                      }
                      ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_1807A9250)(
                        &v1575,
                        v688,
                        (unsigned int)(HIDWORD(v1574) + 36));
                      v572 = (int)v1376;
LABEL_904:
                      v690 = v1564;
                      v691 = HIDWORD(v1584);
                      v692 = DWORD2(v1584);
                      switch ( v572 )
                      {
                        case 1:
                          LODWORD(v571) = 0;
                          *(_QWORD *)&v1584 = 0LL;
                          goto LABEL_911;
                        case 2:
                          v1596 = 0LL;
                          v1597 = 0LL;
                          v1598 = 0LL;
                          v696 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1807A9248)(0LL, 1LL);
                          LODWORD(v1596) = 40;
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1807A9208)(v696, &v1596) )
                            goto LABEL_910;
                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1597 + 4);
                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1597 + 12);
                          if ( v690 )
                            v694 = DWORD1(v1597) + 5 * HIDWORD(v1597) / 100;
                          else
                            v694 = 95 * (HIDWORD(v1597) - v692) / 100;
                          v695 = 95 * (v1598 - v691);
                          break;
                        case 3:
                          v1593 = 0LL;
                          v1594 = 0LL;
                          v1595 = 0LL;
                          v693 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1807A9248)(0LL, 1LL);
                          LODWORD(v1593) = 40;
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1807A9208)(v693, &v1593) )
                            goto LABEL_910;
                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1594 + 4);
                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1594 + 12);
                          v694 = 50 * (HIDWORD(v1594) - v692) / 100;
                          v695 = 50 * (v1595 - v691);
                          break;
                        default:
                          goto LABEL_910;
                      }
                      LODWORD(v1584) = v694;
                      DWORD1(v1584) = v695 / 100;
LABEL_910:
                      LODWORD(v571) = 0;
LABEL_911:
                      v574 = 0;
                      goto LABEL_920;
                    }
                  }
                }
                LODWORD(v571) = 0;
LABEL_919:
                v572 = (int)v1376;
                goto LABEL_920;
              }
              if ( v572 != 3 )
                goto LABEL_850;
            }
            LODWORD(v571) = DWORD2(v1523);
            v674 = HIDWORD(v1523);
            goto LABEL_850;
          }
          v1294 = 15;
        }
        v1366 = 11;
        goto LABEL_814;
      }
      v581 = 0;
      v1217 = 0;
      v582 = 0;
      if ( v1208 )
      {
        v583 = 0LL;
        while ( 2 )
        {
          v584 = 0;
          v585 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
          do
          {
            if ( v575[v583] == *v585 )
            {
              v581 = v584;
              v1217 = v584;
              goto LABEL_737;
            }
            ++v584;
            ++v585;
          }
          while ( v584 < 0x26 );
          ++v582;
          ++v583;
          if ( v582 < v1208 )
            continue;
          break;
        }
      }
LABEL_737:
      v586 = v581;
      v1209 = 0;
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))off_1807A91A8)(
                           `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v581],
                           v1640,
                           85LL)
        && (int)((__int64 (__fastcall *)(_BYTE *, __int64, char *))off_1807A9190)(v1640, 88LL, v1591) > 0 )
      {
        v1209 = (v1592 >> 27) & 1;
        LOWORD(v571) = 0;
      }
      v587 = L"Segoe UI Light";
      v588 = (const wchar_t **)v1638;
      v589 = 19LL;
      do
      {
        *v588 = v587;
        v590 = -1LL;
        do
          ++v590;
        while ( v587[v590] != (_WORD)v571 );
        v587 += v590 + 1;
        ++v588;
        --v589;
      }
      while ( v589 );
      v1246 = (wchar_t *)v1638[(unsigned __int8)`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping[3 * v586]];
      lpModuleNameb = (const wchar_t *)v1638[(unsigned __int8)byte_18069BC41[3 * v586]];
      v1310 = (wchar_t *)v1638[(unsigned __int8)byte_18069BC42[3 * v586]];
      v591 = (char *)MemoryAlloc(0x1C90uLL);
      v1325 = (WCHAR *)v591;
      if ( !v591 )
      {
        v574 = -2147024882;
        v592 = 0LL;
LABEL_746:
        LODWORD(v571) = 0;
        goto LABEL_747;
      }
      v594 = 0;
      v595 = 0;
      v596 = 0;
      v597 = v591 + 7;
      v598 = (unsigned __int8 *)&unk_1806FCA92;
      v599 = 914LL;
      v600 = -1;
      do
      {
        v601 = v598[1] | ((*v598 | ((*(v598 - 1) | (*(v598 - 2) << 8)) << 8)) << 8);
        v602 = v598[5] | ((v598[4] | ((v598[3] | (v598[2] << 8)) << 8)) << 8);
        v603 = v601 ^ v596;
        v598 += 8;
        v604 = v603 ^ v602 ^ v595 ^ 0xAC987321;
        v605 = (__ROL4__(v604, 10) + 4991 * __ROL4__(v604 + 1419157410, 5)) ^ v603;
        v606 = (43881 * __ROR4__(v605 + 133239679, 9) - __ROL4__(v605, 2)) ^ v604;
        v607 = (24670 * v606 - (v606 >> 13) - 123127970) ^ v605;
        v608 = (2033 * __ROL4__(v607 ^ 0xAB69, 6) - __ROL4__(v607, 2)) ^ v606;
        v609 = (133239679 - (v608 ^ 0xAB69605E)) ^ v607;
        v610 = (43881 * (v609 ^ 0x137F)) ^ __ROR4__(v609, 6) ^ v608;
        v611 = (__ROL4__(v610, 2) + 24670 * __ROR4__(v610 + 133239679, 15)) ^ v609;
        v612 = (2033 * __ROR4__(v611 + 1419157410, 14) - __ROL4__(v611, 8)) ^ v610;
        v613 = __ROR4__(v612, 10) ^ (4991 * __ROR4__(v612 ^ 0xAB69605E, 12)) ^ v611;
        v614 = (v613 >> 10) ^ (43881 * (v613 ^ 0x7F1)) ^ v612;
        v615 = (2033 * (__ROR4__(~v614, 5) + 24670)) ^ v613;
        v616 = v614 ^ (v615 - 2033) ^ 0xAB69605E;
        v617 = ((v616 >> 2) + 4991 * __ROL4__(v614 ^ (v615 - 2033) ^ 0xAB6967AF, 2)) ^ v615;
        v618 = (__ROL4__(v617, 7) + 43881 * __ROR4__(v617 - 133239679, 6)) ^ v616;
        v619 = (24670 * (v618 ^ 0x137F) + __ROR4__(v618, 9)) ^ v617;
        v620 = (__ROL4__(v619, 7) + 2033 * __ROL4__(v619 ^ 0xAB69, 5)) ^ v618;
        v621 = v620 ^ v619 ^ 0xAC987321;
        v622 = (4991 * __ROR4__(v621, 3) - 219010071) ^ v620;
        v623 = (24670 * __ROR4__(v622 - 133239679, 1) - __ROR4__(v622, 6)) ^ v621;
        v624 = (__ROL4__(v623, 14) + 2033 * __ROL4__(v623 - 1419157410, 3)) ^ v622;
        v625 = (4991 * __ROL4__(v624 - 1419157410, 15) - __ROR4__(v624, 14)) ^ v623;
        v626 = (v625 >> 3) ^ (43881 * (v625 ^ 0x605E)) ^ v624;
        v627 = v594 ^ __ROL4__(v626, 2) ^ (24670 * __ROL4__(v626 ^ 0x7F1137F, 4)) ^ v625;
        v628 = v600 ^ v626;
        *(v597 - 4) = v627;
        v629 = __ROR4__(v627, 8);
        *v597 = v628;
        v630 = __ROR4__(v628, 8);
        *(v597 - 5) = v629;
        v631 = __ROR4__(v629, 8);
        *(v597 - 1) = v630;
        v632 = __ROR4__(v630, 8);
        *(v597 - 6) = v631;
        v633 = __ROR4__(v631, 8);
        *(v597 - 2) = v632;
        v634 = __ROR4__(v632, 8);
        *(v597 - 7) = v633;
        *(v597 - 3) = v634;
        v596 = __ROR4__(v633, 8);
        v595 = __ROR4__(v634, 8);
        v594 = v601;
        v600 = v602;
        v597 += 8;
        --v599;
      }
      while ( v599 );
      v635 = 0LL;
      v636 = 0LL;
      v83 = v1335;
      v637 = v1325;
      v592 = 7312LL;
      do
      {
        v638 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1325[v635]), v636);
        v636 = v638;
        v635 += 8LL;
      }
      while ( v635 < 3656 );
      v639 = _mm_xor_si128(v638, _mm_srli_si128(v638, 8));
      v640 = _mm_xor_si128(v639, _mm_srli_si128(v639, 4));
      v641 = _mm_xor_si128(v640, _mm_srli_si128(v640, 2));
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v641, _mm_srli_si128(v641, 1))) != 127LL )
      {
        MemoryFree(v1325);
        v574 = -1073425151;
LABEL_762:
        v592 = v1480;
        goto LABEL_746;
      }
      v1479 = v1325;
      v1480 = 7312LL;
      v574 = 0;
      v642 = (WCHAR **)v1632;
      v643 = 6LL;
      do
      {
        for ( ii = 0; ii < 0x26; ++ii )
        {
          if ( v1217 == ii )
            *v642 = v637;
          v645 = -1LL;
          do
            ++v645;
          while ( *((_BYTE *)v637 + v645) );
          v637 = (WCHAR *)((char *)v637 + v645 + 1);
        }
        ++v642;
        --v643;
      }
      while ( v643 );
      v646 = (void **)MemoryAlloc(0x18uLL);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1481);
      if ( !v646 )
      {
        v647 = 0LL;
        v1481 = 0LL;
        v574 = -2147024882;
LABEL_798:
        if ( !v647 )
          goto LABEL_746;
        v661 = 3LL;
        do
        {
          v662 = *v647;
          if ( *v647 )
          {
            v663 = -1LL;
            do
              ++v663;
            while ( v662[v663] );
            memset(v662, 0, 2 * v663 + 2);
            MemoryFree(*v647);
          }
          ++v647;
          --v661;
        }
        while ( v661 );
        goto LABEL_762;
      }
      v647 = v646;
      v1481 = v646;
      *(_OWORD *)v646 = 0LL;
      v646[2] = 0LL;
      v648 = 0;
      v1218 = 0;
      v649 = (WCHAR *)v646;
      v1326 = (WCHAR *)v646;
      v650 = v1639;
      v1375 = v1639;
      while ( 2 )
      {
        v651 = 0LL;
        v652 = *v650;
        v653 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
        while ( v652 != *v653 )
        {
          v651 = (unsigned int)(v651 + 1);
          ++v653;
          if ( (unsigned int)v651 >= 6 )
            goto LABEL_786;
        }
        v654 = v1632[v651];
        v655 = -1LL;
        do
          ++v655;
        while ( *(_BYTE *)(v655 + v654) );
        v656 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1807A91C0)(
                 65001LL,
                 0LL,
                 v654,
                 (unsigned int)(v655 + 1),
                 0LL,
                 0);
        v1286 = v656;
        if ( v656 )
        {
          v657 = MemoryAlloc(2LL * v656);
          *(_QWORD *)v1326 = v657;
          if ( v657 )
          {
            v658 = -1LL;
            do
              ++v658;
            while ( *(_BYTE *)(v658 + v654) );
            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, LPVOID, int))off_1807A91C0)(
                                  65001LL,
                                  0LL,
                                  v654,
                                  (unsigned int)(v658 + 1),
                                  v657,
                                  v1286) )
            {
              v659 = GetLastError();
              v574 = v659;
              if ( v659 > 0 )
                v574 = (unsigned __int16)v659 | 0x80070000;
              v592 = v1480;
              if ( v574 >= 0 )
                v574 = -2147467259;
              goto LABEL_798;
            }
            v649 = v1326;
            v648 = v1218;
LABEL_786:
            v1218 = ++v648;
            v650 = (__int16 *)((char *)v1375 + 2);
            v1375 = (char *)v1375 + 2;
            v649 += 4;
            v1326 = v649;
            if ( v648 < 3 )
              continue;
            v647 = 0LL;
            v1481 = 0LL;
            v1477 = v646;
            v1564 = v1209;
          }
          else
          {
            v574 = -2147024882;
          }
        }
        else
        {
          v660 = GetLastError();
          v574 = v660;
          if ( v660 > 0 )
            v574 = (unsigned __int16)v660 | 0x80070000;
          if ( v574 >= 0 )
            v574 = -2147467259;
        }
        break;
      }
      v592 = v1480;
      goto LABEL_798;
    }
    v571 = (__int64)MemoryAlloc(2LL * v1407);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1482);
    if ( !v571 )
    {
      v1482 = 0LL;
      v574 = -2147024882;
      goto LABEL_728;
    }
    v1482 = v571;
    v577 = MemoryAlloc(4LL * (v1373 + 1));
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1483);
    if ( v577 )
    {
      v1483 = v577;
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1807A91A0)(
                            8LL,
                            &v1373,
                            v571,
                            &v1407) )
      {
        v576 = GetLastError();
        LODWORD(v571) = 0;
        goto LABEL_710;
      }
      v578 = v577;
      if ( v1373 )
      {
        for ( jj = 0; jj < v1373; ++jj )
        {
          *v578 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1807A91B0)(v571, 0LL);
          v580 = -1LL;
          do
            ++v580;
          while ( *(_WORD *)(v571 + 2 * v580) );
          v571 += 2 * v580 + 2;
          ++v578;
        }
        v574 = 0;
      }
      *v578 = 1033;
      LODWORD(v571) = 0;
      v575 = v577;
      v1478 = v577;
      v1208 = v1373 + 1;
    }
    else
    {
      LODWORD(v571) = 0;
      v574 = -2147024882;
    }
    v1483 = 0LL;
    goto LABEL_728;
  }
  v573 = GetLastError();
  v574 = v573;
  if ( v573 > 0 )
    v574 = (unsigned __int16)v573 | 0x80070000;
  if ( v574 >= 0 )
    v574 = -2147467259;
LABEL_921:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v697 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v697 == 1 )
    {
      v698 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v571 = 4LL;
      do
      {
        if ( *v698 )
          FreeLibrary(*v698);
        v698 += 3;
        --v571;
      }
      while ( v571 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1477);
  if ( v574 < 0 )
    goto LABEL_1144;
  v699 = v1584;
  v1484 = v1584;
  memset_0(v1537, 0, 0x68uLL);
  v700 = 1;
  v701 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1224, 7LL);
  if ( !v701 || !(unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v701, 104LL, v1537) )
  {
    v700 = 0;
    goto LABEL_940;
  }
  if ( v1540 != 32 || !v1541 || v1538 <= 0 || v1539 <= 0 )
    v700 = 0;
  if ( v700 )
  {
LABEL_941:
    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(&v1573, v699, HIDWORD(v1484));
    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(&v1574, v699, HIDWORD(v1484));
    if ( v572 == 1 )
      v1441 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_1807A9128)(v1565 == 0 ? 0xB26720 : 0);
  }
  else
  {
LABEL_940:
    if ( v572 == 1 )
      goto LABEL_941;
  }
  v1211 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9180)(v1224, 1LL);
  v702 = 2064;
  if ( v1564 )
    v702 = 133138;
  v1296 = v702;
  if ( !v700 )
  {
    if ( v1565 || (v754 = -64, v572 == 1) )
      v754 = -1;
    LOWORD(v1374) = 0;
    BYTE2(v1374) = v754;
    BYTE3(v1374) = 1;
    v1371 = 0;
    v1223 = 0;
    v1289 = 0;
    v752 = ((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1224);
    Srcd = (LPVOID)v752;
    if ( !v752 )
    {
      GetLastError();
      goto LABEL_1141;
    }
    if ( v572 == 1 )
    {
      v755 = DWORD2(v1574) - v1574;
      if ( DWORD2(v1574) - (int)v1574 <= DWORD2(v1573) - (int)v1573 )
        v755 = DWORD2(v1573) - v1573;
      LODWORD(v1390) = v755;
      v756 = HIDWORD(v1574) - DWORD1(v1573);
      LODWORD(v1389) = HIDWORD(v1574) - DWORD1(v1573);
      v757 = 0;
      v758 = 0;
      if ( v1564 )
      {
        v757 = v755 + v1573 - DWORD2(v1573);
        v1371 = v757;
        v1289 = v755 + v1574 - DWORD2(v1574);
        v758 = v1289;
      }
      v759 = v757 + DWORD2(v1573) - v1573;
      LODWORD(v1380) = HIDWORD(v1573) - DWORD1(v1573);
      v760 = DWORD2(v1574) + v758 - v1574;
      LODWORD(v1375) = DWORD1(v1574) - DWORD1(v1573);
      v1331 = HIDWORD(v1574) - DWORD1(v1573);
      v752 = (__int64)Srcd;
    }
    else
    {
      v755 = DWORD2(v1584);
      LODWORD(v1390) = DWORD2(v1584);
      v756 = HIDWORD(v1584);
      LODWORD(v1389) = HIDWORD(v1584);
      v1508 = v1573;
      v1509 = v1574;
      LODWORD(v1380) = HIDWORD(v1573);
      v759 = DWORD2(v1573);
      v1223 = DWORD1(v1573);
      v1371 = v1573;
      v1331 = HIDWORD(v1574);
      v760 = DWORD2(v1574);
      LODWORD(v1375) = DWORD1(v1574);
      v1289 = v1574;
    }
    LODWORD(v1385) = v760;
    v1487 = 0LL;
    v1600 = 0LL;
    v1601 = 0LL;
    v1602 = 0;
    LODWORD(v1599) = 40;
    DWORD1(v1599) = v755;
    DWORD2(v1599) = -v756;
    HIDWORD(v1599) = 2097153;
    v761 = (void *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                     v752,
                     &v1599,
                     0LL,
                     &v1487,
                     0LL,
                     0);
    v1391 = v761;
    if ( !v761 )
    {
      GetLastError();
LABEL_1140:
      ((void (__fastcall *)(__int64))off_1807A9130)(v752);
      goto LABEL_1141;
    }
    ((void (__fastcall *)(__int64, void *))off_1807A9178)(v752, v761);
    if ( (_DWORD)v1376 == 1 && v1441 )
    {
      v1587 = 0LL;
      v1588 = v755;
      v1589 = (int)v1389;
      ((void (__fastcall *)(__int64, __int64 *))off_1807A91E8)(v752, &v1587);
    }
    v1305 = v1565;
    v1377 = (SIZE_T)v1569;
    v762 = v1566;
    v1383 = (SIZE_T)v1566;
    memset_0(v1554, 0, 0x68uLL);
    memset_0(v1535, 0, 0x68uLL);
    v1379 = 0LL;
    v1313 = 0;
    lpModuleNameg = 0;
    v1611 = 0LL;
    v1612 = 0LL;
    v1613 = 0LL;
    v1614 = 0;
    v1583 = 0LL;
    if ( !v762 )
      goto LABEL_1137;
    v752 = (__int64)Srcd;
    v763 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1807A9150)(Srcd, 7LL);
    if ( !v763 )
      goto LABEL_1050;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v763, 104LL, v1554) )
    {
      v1379 = v1557;
      v1313 = v1555;
      lpModuleNameg = v1556;
    }
    v764 = ((__int64 (__fastcall *)(LPVOID))off_1807A9110)(Srcd);
    v1341 = (LPCWSTR)v764;
    if ( !v764 )
      goto LABEL_1050;
    v1490 = 0LL;
    v765 = 0;
    v1612 = 0LL;
    v1613 = 0LL;
    v1614 = 0;
    LODWORD(v1611) = 40;
    v766 = v759 - v1371;
    DWORD1(v1611) = v766;
    DWORD2(v1611) = v1223 - (_DWORD)v1380;
    HIDWORD(v1611) = 2097153;
    v767 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
             v764,
             &v1611,
             0LL,
             &v1490,
             0LL,
             0);
    v1384 = (WCHAR *)v767;
    if ( v767 )
    {
      v769 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v767, 104LL, v1535);
      v770 = 0LL;
      if ( v769 )
        v770 = v1536;
      v1381 = v770;
      DWORD2(v1583) = v766;
      HIDWORD(v1583) = (_DWORD)v1380 - v1223;
      ((void (__fastcall *)(LPCWSTR, WCHAR *))off_1807A9178)(v1341, v1384);
      ((void (__fastcall *)(LPCWSTR, __int64))off_1807A9180)(v1341, 1LL);
      v1377 = ((__int64 (__fastcall *)(LPCWSTR, SIZE_T))off_1807A9178)(v1341, v1377);
      v771 = off_1807A91E8;
      v772 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
      ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v771)(v1341, &v1583, v772);
      v773 = v1341;
      ((void (__fastcall *)(LPCWSTR, SIZE_T, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
        v1341,
        v1383,
        0xFFFFFFFFLL,
        &v1583,
        v1296,
        0LL);
      if ( (_DWORD)v1376 == 1 )
      {
        if ( v1305 )
          v1306 = off_1807A9218((WARBIRD_DELAY_LOAD *)8, 0);
        else
          v1306 = 0xFFFFFF;
      }
      else
      {
        v1306 = -5723992;
      }
      v774 = -v1371;
      if ( v1371 >= 0 )
        v774 = 0;
      v775 = 0;
      if ( v1371 >= 0 )
        v775 = v1371;
      v776 = -v1223;
      if ( v1223 >= 0 )
        v776 = 0;
      v777 = 0;
      if ( v1223 >= 0 )
        v777 = v1223;
      v778 = DWORD2(v1583) - v774;
      if ( DWORD2(v1583) - v774 >= v1313 - v775 )
        v778 = v1313 - v775;
      LODWORD(v1380) = v778;
      v779 = HIDWORD(v1583) - v776;
      if ( HIDWORD(v1583) - v776 >= lpModuleNameg - v777 )
        v779 = lpModuleNameg - v777;
      if ( v778 > 0 && v779 > 0 )
      {
        v780 = v1381 + 4 * (v774 + (__int64)(DWORD2(v1583) * v776));
        v1381 = v780;
        v781 = &v1379[v775 + (__int64)(v1313 * v777)];
        v1379 = v781;
        lpModuleNameh = 0;
        v1383 = 4LL * SDWORD2(v1583);
        v1372 = v1313;
        v782 = (int)v1380;
        do
        {
          v783 = 0;
          v1314 = 0;
          v784 = (unsigned __int8 *)(v780 + 2);
          v785 = (__int64)v781 - v780;
          do
          {
            if ( (unsigned __int8)((*v784 + *(v784 - 2) + 2 * (unsigned int)*(v784 - 1)) >> 2) != 0xFF )
            {
              v786 = (unsigned __int8)~((*v784 + *(v784 - 2) + 2 * (unsigned int)*(v784 - 1)) >> 2);
              v784[v785] -= ~((*v784 + *(v784 - 2) + 2 * (unsigned int)*(v784 - 1)) >> 2) * (v1306 - v784[v785]);
              v784[v785 - 1] -= v786 * (BYTE1(v1306) - v784[v785 - 1]);
              v784[v785 - 2] -= v786 * (BYTE2(v1306) - v784[v785 - 2]);
              v784[v785 + 1] += v786 * (255 - v784[v785 + 1]) / 255;
              v783 = v1314;
            }
            v784 += 4;
            v1314 = ++v783;
          }
          while ( v783 < v782 );
          v780 = v1383 + v1381;
          v1381 += v1383;
          v781 = &v1379[v1372];
          v1379 = (unsigned int *)((char *)v1379 + v1372 * 4);
          ++lpModuleNameh;
        }
        while ( lpModuleNameh < v779 );
        v755 = (unsigned int)v1390;
        v765 = 0;
        v760 = (int)v1385;
        v773 = v1341;
      }
      ((void (__fastcall *)(WCHAR *))off_1807A9138)(v1384);
      if ( v1377 )
        ((void (__fastcall *)(LPCWSTR, SIZE_T))off_1807A9178)(v773, v1377);
    }
    else
    {
      v768 = GetLastError();
      v765 = v768;
      if ( v768 > 0 )
        v765 = (unsigned __int16)v768 | 0x80070000;
      if ( v765 >= 0 )
        v765 = -2147467259;
    }
    ((void (__fastcall *)(LPCWSTR))off_1807A9130)(v1341);
    if ( v765 < 0 )
      goto LABEL_1137;
    v1253 = v1565;
    v1381 = (__int64)v1570;
    v787 = v1567;
    v1384 = (WCHAR *)v1567;
    memset_0(v1558, 0, 0x68uLL);
    memset_0(v1562, 0, 0x68uLL);
    v1342 = 0LL;
    lpModuleNamei = 0;
    v1315 = 0;
    v1615 = 0LL;
    v1616 = 0LL;
    v1617 = 0LL;
    v1618 = 0;
    v1590 = 0LL;
    if ( !v787 )
      goto LABEL_1137;
    v752 = (__int64)Srcd;
    v788 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1807A9150)(Srcd, 7LL);
    if ( !v788 )
      goto LABEL_1050;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v788, 104LL, v1558) )
    {
      v1342 = v1561;
      lpModuleNamei = v1559;
      v1315 = v1560;
    }
    v789 = ((__int64 (__fastcall *)(LPVOID))off_1807A9110)(Srcd);
    v790 = v789;
    v1379 = (unsigned int *)v789;
    if ( !v789 )
    {
LABEL_1050:
      GetLastError();
      goto LABEL_1138;
    }
    v1493[0] = 0LL;
    v791 = 0;
    v1616 = 0LL;
    v1617 = 0LL;
    v1618 = 0;
    LODWORD(v1615) = 40;
    v792 = v760 - v1289;
    DWORD1(v1615) = v792;
    DWORD2(v1615) = (_DWORD)v1375 - v1331;
    HIDWORD(v1615) = 2097153;
    v793 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
             v789,
             &v1615,
             0LL,
             v1493,
             0LL,
             0);
    v1383 = v793;
    if ( !v793 )
    {
      v791 = GetLastError();
      v794 = v791 < 0;
      if ( v791 > 0 )
      {
        v791 = (unsigned __int16)v791 | 0x80070000;
        v794 = v791 < 0;
      }
      if ( !v794 )
        v791 = -2147467259;
      goto LABEL_1131;
    }
    v795 = ((__int64 (__fastcall *)(SIZE_T, __int64, _BYTE *))off_1807A9168)(v793, 104LL, v1562);
    v796 = 0LL;
    if ( v795 )
      v796 = v1563;
    v1377 = v796;
    DWORD2(v1590) = v792;
    v797 = (int)v1375;
    HIDWORD(v1590) = v1331 - (_DWORD)v1375;
    ((void (__fastcall *)(__int64, SIZE_T))off_1807A9178)(v790, v1383);
    ((void (__fastcall *)(__int64, __int64))off_1807A9180)(v790, 1LL);
    v1381 = ((__int64 (__fastcall *)(__int64, __int64))off_1807A9178)(v790, v1381);
    v798 = off_1807A91E8;
    v799 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
    ((void (__fastcall *)(unsigned int *, __int128 *, __int64))v798)(v1379, &v1590, v799);
    v790 = (__int64)v1379;
    ((void (__fastcall *)(unsigned int *, WCHAR *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
      v1379,
      v1384,
      0xFFFFFFFFLL,
      &v1590,
      v1296,
      0LL);
    if ( (_DWORD)v1376 == 1 )
    {
      if ( !v1253 )
      {
        v1254 = 0xFFFFFF;
LABEL_1108:
        v801 = -v1289;
        if ( v1289 >= 0 )
          v801 = 0;
        v802 = 0;
        if ( v1289 >= 0 )
          v802 = v1289;
        v803 = -v797;
        if ( v797 >= 0 )
          v803 = 0;
        v804 = 0;
        if ( v797 >= 0 )
          v804 = v797;
        v805 = DWORD2(v1590) - v801;
        v806 = lpModuleNamei;
        if ( DWORD2(v1590) - v801 >= lpModuleNamei - v802 )
          v805 = lpModuleNamei - v802;
        v807 = HIDWORD(v1590) - v803;
        if ( HIDWORD(v1590) - v803 >= v1315 - v804 )
          v807 = v1315 - v804;
        if ( v805 > 0 && v807 > 0 )
        {
          v808 = (unsigned __int8 *)(v1377 + 4 * (v801 + (__int64)(v803 * DWORD2(v1590))));
          v1384 = (WCHAR *)v808;
          v809 = &v1342[2 * v802 + 2 * (__int64)(v804 * lpModuleNamei)];
          v1343 = v809;
          lpModuleNamej = 0;
          v1377 = 4LL * SDWORD2(v1590);
          v1332 = (LPCWSTR)(4 * v806);
          do
          {
            v810 = 0;
            v1316 = 0;
            v811 = v808 + 2;
            v812 = (char *)v809 - (char *)v808;
            v813 = Size;
            do
            {
              if ( (unsigned __int8)((*v811 + *(v811 - 2) + 2 * (unsigned int)*(v811 - 1)) >> 2) != 0xFF )
              {
                v814 = (unsigned __int8)~((*v811 + *(v811 - 2) + 2 * (unsigned int)*(v811 - 1)) >> 2);
                v811[v812] -= ~((*v811 + *(v811 - 2) + 2 * (unsigned int)*(v811 - 1)) >> 2) * (v813 - v811[v812]);
                v811[v812 - 1] -= v814 * (BYTE1(v1254) - v811[v812 - 1]);
                v811[v812 - 2] -= v814 * (BYTE2(v1254) - v811[v812 - 2]);
                v811[v812 + 1] += v814 * (255 - v811[v812 + 1]) / 255;
                v810 = v1316;
              }
              v811 += 4;
              v1316 = ++v810;
            }
            while ( v810 < v805 );
            v808 = (unsigned __int8 *)v1384 + v1377;
            v1384 = (WCHAR *)((char *)v1384 + v1377);
            v809 = (LPCWSTR)((char *)v1343 + (_QWORD)v1332);
            v1343 = (LPCWSTR)((char *)v1343 + (_QWORD)v1332);
            ++lpModuleNamej;
          }
          while ( lpModuleNamej < v807 );
          v791 = 0;
          v790 = (__int64)v1379;
        }
        ((void (__fastcall *)(SIZE_T))off_1807A9138)(v1383);
        if ( v1381 )
          ((void (__fastcall *)(__int64, __int64))off_1807A9178)(v790, v1381);
LABEL_1131:
        ((void (__fastcall *)(__int64))off_1807A9130)(v790);
        if ( v791 >= 0 )
        {
          if ( (_DWORD)v1376 == 1 )
          {
            v752 = (__int64)Srcd;
            v815 = v755;
            v753 = v1224;
            ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, __int64, _DWORD, LPVOID, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
              v1224,
              (unsigned int)v1573,
              DWORD1(v1573),
              v815,
              (_DWORD)v1389,
              Srcd,
              0,
              0,
              13369376);
          }
          else
          {
            v1194 = v755;
            v752 = (__int64)Srcd;
            v816 = v755;
            v753 = v1224;
            ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, __int64, _DWORD, LPVOID, _DWORD, _DWORD, unsigned int, _DWORD, _DWORD))off_1807A9140)(
              v1224,
              (unsigned int)v1584,
              DWORD1(v1584),
              v816,
              (_DWORD)v1389,
              Srcd,
              0,
              0,
              v1194,
              (_DWORD)v1389,
              (_DWORD)v1374);
          }
LABEL_1135:
          ((void (__fastcall *)(SIZE_T, _QWORD))off_1807A9180)(v753, v1211);
          if ( !v1391 )
          {
LABEL_1139:
            if ( !v752 )
              goto LABEL_1141;
            goto LABEL_1140;
          }
LABEL_1138:
          ((void (*)(void))off_1807A9138)();
          goto LABEL_1139;
        }
LABEL_1137:
        v752 = (__int64)Srcd;
        goto LABEL_1138;
      }
      v800 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
    }
    else
    {
      v800 = -5723992;
    }
    v1254 = v800;
    LODWORD(Size) = v800;
    goto LABEL_1108;
  }
  v1368 = v1565;
  v1249 = v1569;
  v703 = v1566;
  memset_0(v1542, 0, 0x68uLL);
  memset_0(v1546, 0, 0x68uLL);
  LODWORD(v571) = 0;
  lpModuleNamec = 0LL;
  v1220 = 0;
  v1287 = 0;
  v1603 = 0LL;
  v1604 = 0LL;
  v1605 = 0LL;
  v1606 = 0;
  v1585 = 0LL;
  if ( !v703 )
    goto LABEL_1142;
  v704 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1224, 7LL);
  if ( !v704 )
    goto LABEL_948;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v704, 104LL, v1542) )
  {
    lpModuleNamec = v1545;
    v1220 = v1543;
    v1287 = v1544;
  }
  v705 = ((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1224);
  v706 = v705;
  if ( !v705 )
    goto LABEL_948;
  v1485 = 0LL;
  LODWORD(v1374) = 0;
  v1604 = 0LL;
  v1605 = 0LL;
  v1606 = 0;
  LODWORD(v1603) = 40;
  DWORD1(v1603) = DWORD2(v1573) - v1573;
  DWORD2(v1603) = DWORD1(v1573) - HIDWORD(v1573);
  HIDWORD(v1603) = 2097153;
  v707 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
           v705,
           &v1603,
           0LL,
           &v1485,
           0LL,
           0);
  v708 = v707;
  v1303 = v707;
  if ( v707 )
  {
    v710 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v707, 104LL, v1546);
    v711 = 0LL;
    if ( v710 )
      v711 = v1547;
    v1327 = v711;
    DWORD2(v1585) = DWORD2(v1573) - v1573;
    HIDWORD(v1585) = HIDWORD(v1573) - DWORD1(v1573);
    ((void (__fastcall *)(__int64, __int64))off_1807A9178)(v706, v708);
    ((void (__fastcall *)(__int64, __int64))off_1807A9180)(v706, 1LL);
    v1250 = (wchar_t *)((__int64 (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v706, v1249);
    v712 = off_1807A91E8;
    v713 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
    ((void (__fastcall *)(__int64, __int128 *, __int64))v712)(v706, &v1585, v713);
    ((void (__fastcall *)(__int64, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
      v706,
      v703,
      0xFFFFFFFFLL,
      &v1585,
      v1296,
      0LL);
    if ( (_DWORD)v1376 == 1 )
    {
      if ( v1368 )
        v1369 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
      else
        v1369 = 0xFFFFFF;
    }
    else
    {
      v1369 = -5723992;
    }
    v714 = -(int)v1573;
    if ( (int)v1573 >= 0 )
      v714 = 0;
    v715 = 0;
    if ( (int)v1573 >= 0 )
      v715 = v1573;
    v716 = -DWORD1(v1573);
    if ( (SDWORD1(v1573) & 0x80000000) == 0 )
      v716 = 0;
    v717 = 0;
    if ( (SDWORD1(v1573) & 0x80000000) == 0 )
      v717 = DWORD1(v1573);
    v718 = DWORD2(v1585) - v714;
    v719 = v1220;
    if ( DWORD2(v1585) - v714 >= v1220 - v715 )
      v718 = v1220 - v715;
    v720 = HIDWORD(v1585) - v716;
    if ( HIDWORD(v1585) - v716 >= v1287 - v717 )
      v720 = v1287 - v717;
    if ( v718 > 0 && v720 > 0 )
    {
      v721 = &v1327[2 * v714 + 2 * (__int64)(v716 * DWORD2(v1585))];
      v1328 = v721;
      v722 = &lpModuleNamec[2 * v715 + 2 * (__int64)(v717 * v1220)];
      lpModuleNamed = v722;
      v1221 = 0;
      v1375 = (LPVOID)(4LL * SDWORD2(v1585));
      v1385 = (void *)(4 * v719);
      do
      {
        v723 = 0;
        v1288 = 0;
        v724 = (unsigned __int8 *)(v721 + 1);
        v725 = (char *)v722 - (char *)v721;
        do
        {
          if ( (unsigned __int8)((*v724 + *(v724 - 2) + 2 * (unsigned int)*(v724 - 1)) >> 2) != 0xFF )
          {
            v726 = (unsigned __int8)~((*v724 + *(v724 - 2) + 2 * (unsigned int)*(v724 - 1)) >> 2);
            v724[v725] -= ~((*v724 + *(v724 - 2) + 2 * (unsigned int)*(v724 - 1)) >> 2) * (v1369 - v724[v725]);
            v724[v725 - 1] -= v726 * (BYTE1(v1369) - v724[v725 - 1]);
            v724[v725 - 2] -= v726 * (BYTE2(v1369) - v724[v725 - 2]);
            v724[v725 + 1] += v726 * (255 - v724[v725 + 1]) / 255;
            v723 = v1288;
          }
          v724 += 4;
          v1288 = ++v723;
        }
        while ( v723 < v718 );
        v721 = (LPCWSTR)((char *)v1328 + (_QWORD)v1375);
        v1328 = (LPCWSTR)((char *)v1328 + (_QWORD)v1375);
        v722 = (LPCWSTR)((char *)lpModuleNamed + (_QWORD)v1385);
        lpModuleNamed = (LPCWSTR)((char *)lpModuleNamed + (_QWORD)v1385);
        ++v1221;
      }
      while ( v1221 < v720 );
      LODWORD(v571) = (_DWORD)v1374;
    }
    ((void (__fastcall *)(SIZE_T))off_1807A9138)(v1303);
    if ( v1250 )
      ((void (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v706, v1250);
  }
  else
  {
    LODWORD(v571) = GetLastError();
    v709 = (int)v571 < 0;
    if ( (int)v571 > 0 )
    {
      LODWORD(v571) = (unsigned __int16)v571 | 0x80070000;
      v709 = (int)v571 < 0;
    }
    if ( !v709 )
      LODWORD(v571) = -2147467259;
  }
  ((void (__fastcall *)(__int64))off_1807A9130)(v706);
  if ( (int)v571 < 0 )
    goto LABEL_1141;
  LODWORD(v1374) = v1565;
  v1251 = v1570;
  v727 = v1567;
  memset_0(v1548, 0, 0x68uLL);
  memset_0(v1552, 0, 0x68uLL);
  LODWORD(v571) = 0;
  lpModuleNamee = 0LL;
  v1370 = 0;
  v1222 = 0;
  v1607 = 0LL;
  v1608 = 0LL;
  v1609 = 0LL;
  v1610 = 0;
  v1586 = 0LL;
  if ( v727 )
  {
    v728 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1224, 7LL);
    if ( v728 )
    {
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v728, 104LL, v1548) )
      {
        lpModuleNamee = v1551;
        v1370 = v1549;
        v1222 = v1550;
      }
      v729 = ((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1224);
      v730 = v729;
      v1312 = (wchar_t *)v729;
      if ( v729 )
      {
        v1486 = 0LL;
        v1608 = 0LL;
        v1609 = 0LL;
        v1610 = 0;
        LODWORD(v1607) = 40;
        DWORD1(v1607) = DWORD2(v1574) - v1574;
        DWORD2(v1607) = DWORD1(v1574) - HIDWORD(v1574);
        HIDWORD(v1607) = 2097153;
        v731 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                 v729,
                 &v1607,
                 0LL,
                 &v1486,
                 0LL,
                 0);
        v732 = v731;
        v1304 = v731;
        if ( !v731 )
        {
          v733 = GetLastError();
          LODWORD(v571) = v733;
          if ( v733 > 0 )
            LODWORD(v571) = (unsigned __int16)v733 | 0x80070000;
          if ( (int)v571 >= 0 )
            LODWORD(v571) = -2147467259;
          goto LABEL_1029;
        }
        v734 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v731, 104LL, v1552);
        v735 = 0LL;
        if ( v734 )
          v735 = v1553;
        v1329 = v735;
        DWORD2(v1586) = DWORD2(v1574) - v1574;
        HIDWORD(v1586) = HIDWORD(v1574) - DWORD1(v1574);
        ((void (__fastcall *)(__int64, __int64))off_1807A9178)(v730, v732);
        ((void (__fastcall *)(__int64, __int64))off_1807A9180)(v730, 1LL);
        v1252 = (wchar_t *)((__int64 (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v730, v1251);
        v736 = off_1807A91E8;
        v737 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
        ((void (__fastcall *)(__int64, __int128 *, __int64))v736)(v730, &v1586, v737);
        ((void (__fastcall *)(__int64, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
          v730,
          v727,
          0xFFFFFFFFLL,
          &v1586,
          v1296,
          0LL);
        if ( (_DWORD)v1376 == 1 )
        {
          if ( (_DWORD)v1374 )
          {
            v738 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
            goto LABEL_1005;
          }
          LODWORD(v1374) = 0xFFFFFF;
        }
        else
        {
          v738 = -5723992;
LABEL_1005:
          LODWORD(v1374) = v738;
          LODWORD(Size) = v738;
        }
        v739 = -(int)v1574;
        if ( (int)v1574 >= 0 )
          v739 = 0;
        v740 = 0;
        if ( (int)v1574 >= 0 )
          v740 = v1574;
        v741 = -DWORD1(v1574);
        if ( (SDWORD1(v1574) & 0x80000000) == 0 )
          v741 = 0;
        v742 = 0;
        if ( (SDWORD1(v1574) & 0x80000000) == 0 )
          v742 = DWORD1(v1574);
        v743 = DWORD2(v1586) - v739;
        if ( DWORD2(v1586) - v739 >= v1370 - v740 )
          v743 = v1370 - v740;
        v744 = HIDWORD(v1586) - v741;
        if ( HIDWORD(v1586) - v741 >= v1222 - v742 )
          v744 = v1222 - v742;
        if ( v743 > 0 && v744 > 0 )
        {
          v745 = &v1329[2 * v739 + 2 * (__int64)(DWORD2(v1586) * v741)];
          v1330 = v745;
          v746 = &lpModuleNamee[2 * v740 + 2 * (__int64)(v1370 * v742)];
          lpModuleNamef = v746;
          LODWORD(v1376) = 0;
          v1375 = (LPVOID)(4LL * SDWORD2(v1586));
          v1385 = (void *)(4LL * v1370);
          do
          {
            v747 = 0;
            v1297 = 0;
            v748 = (unsigned __int8 *)(v745 + 1);
            v749 = (char *)v746 - (char *)v745;
            v750 = Size;
            do
            {
              if ( (unsigned __int8)((*v748 + *(v748 - 2) + 2 * (unsigned int)*(v748 - 1)) >> 2) != 0xFF )
              {
                v751 = (unsigned __int8)~((*v748 + *(v748 - 2) + 2 * (unsigned int)*(v748 - 1)) >> 2);
                v748[v749] -= ~((*v748 + *(v748 - 2) + 2 * (unsigned int)*(v748 - 1)) >> 2) * (v750 - v748[v749]);
                v748[v749 - 1] -= v751 * (BYTE1(v1374) - v748[v749 - 1]);
                v748[v749 - 2] -= v751 * (BYTE2(v1374) - v748[v749 - 2]);
                v748[v749 + 1] += v751 * (255 - v748[v749 + 1]) / 255;
                v747 = v1297;
              }
              v748 += 4;
              v1297 = ++v747;
            }
            while ( v747 < v743 );
            v745 = (LPCWSTR)((char *)v1330 + (_QWORD)v1375);
            v1330 = (LPCWSTR)((char *)v1330 + (_QWORD)v1375);
            v746 = (LPCWSTR)((char *)lpModuleNamef + (_QWORD)v1385);
            lpModuleNamef = (LPCWSTR)((char *)lpModuleNamef + (_QWORD)v1385);
            LODWORD(v1376) = (_DWORD)v1376 + 1;
          }
          while ( (int)v1376 < v744 );
          LODWORD(v571) = 0;
          v730 = (__int64)v1312;
        }
        ((void (__fastcall *)(SIZE_T))off_1807A9138)(v1304);
        if ( v1252 )
          ((void (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v730, v1252);
LABEL_1029:
        ((void (__fastcall *)(__int64))off_1807A9130)(v730);
        if ( (int)v571 >= 0 )
        {
          v752 = 0LL;
          v753 = v1224;
          goto LABEL_1135;
        }
LABEL_1141:
        LODWORD(v571) = 0;
        goto LABEL_1142;
      }
    }
LABEL_948:
    GetLastError();
  }
LABEL_1142:
  if ( v1441 )
    ((void (__fastcall *)(LPVOID))off_1807A9138)(v1441);
LABEL_1144:
  if ( v1566 )
  {
    v817 = -1LL;
    do
      ++v817;
    while ( *((_WORD *)v1566 + v817) );
    memset(v1566, 0, 2 * v817 + 2);
    MemoryFree(v1566);
    v1566 = 0LL;
  }
  if ( v1567 )
  {
    v818 = -1LL;
    do
      ++v818;
    while ( *((_WORD *)v1567 + v818) );
    memset(v1567, 0, 2 * v818 + 2);
    MemoryFree(v1567);
    v1567 = 0LL;
  }
  if ( v1568 )
  {
    v819 = -1LL;
    do
      ++v819;
    while ( *((_WORD *)v1568 + v819) );
    memset(v1568, 0, 2 * v819 + 2);
    MemoryFree(v1568);
    v1568 = 0LL;
  }
  if ( v1569 )
  {
    ((void (*)(void))off_1807A9138)();
    v1569 = 0LL;
  }
  if ( v1570 )
  {
    ((void (*)(void))off_1807A9138)();
    v1570 = 0LL;
  }
  if ( v1571 )
  {
    ((void (*)(void))off_1807A9138)();
    v1571 = 0LL;
  }
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v820 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v820 == 1 )
    {
      v821 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v571 = 4LL;
      do
      {
        if ( *v821 )
          FreeLibrary(*v821);
        v821 += 3;
        --v571;
      }
      while ( v571 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  v1255 = g_WarbirdNotificationInformation;
  v1381 = (unsigned int)((__int64 (*)(void))off_1807A9198)() - (unsigned int)g_WarbirdPaintInitTime;
  v1634 = 0LL;
  v1635 = 0LL;
  v1636 = 0LL;
  v1637 = 0LL;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v822 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_1211;
  lpModuleNamek = 0;
  v1307 = 0;
  v823 = 0LL;
  v1384 = 0LL;
  v824 = (char *)MemoryAlloc(0x338uLL);
  v1344 = (WCHAR *)v824;
  if ( !v824 )
    goto LABEL_1180;
  v825 = 0;
  v826 = -1;
  v827 = 0;
  v828 = v824 + 7;
  v829 = (unsigned __int8 *)&unk_180697D32;
  v830 = 103LL;
  do
  {
    v831 = v829[1] | ((*v829 | ((*(v829 - 1) | (*(v829 - 2) << 8)) << 8)) << 8);
    v832 = v829[5] | ((v829[4] | ((v829[3] | (v829[2] << 8)) << 8)) << 8);
    v833 = v831 ^ v827;
    v829 += 8;
    v834 = v833 ^ v571 ^ v832 ^ 0xAC987321;
    v835 = (__ROL4__(v834, 10) + 4991 * __ROL4__(v834 + 1419157410, 5)) ^ v833;
    v836 = (43881 * __ROR4__(v835 + 133239679, 9) - __ROL4__(v835, 2)) ^ v834;
    v837 = (24670 * v836 - (v836 >> 13) - 123127970) ^ v835;
    v838 = (2033 * __ROL4__(v837 ^ 0xAB69, 6) - __ROL4__(v837, 2)) ^ v836;
    v839 = (133239679 - (v838 ^ 0xAB69605E)) ^ v837;
    v840 = (43881 * (v839 ^ 0x137F)) ^ __ROR4__(v839, 6) ^ v838;
    v841 = (__ROL4__(v840, 2) + 24670 * __ROR4__(v840 + 133239679, 15)) ^ v839;
    v842 = (2033 * __ROR4__(v841 + 1419157410, 14) - __ROL4__(v841, 8)) ^ v840;
    v843 = __ROR4__(v842, 10) ^ (4991 * __ROR4__(v842 ^ 0xAB69605E, 12)) ^ v841;
    v844 = (v843 >> 10) ^ (43881 * (v843 ^ 0x7F1)) ^ v842;
    v845 = (2033 * (__ROR4__(~v844, 5) + 24670)) ^ v843;
    v846 = v844 ^ (v845 - 2033) ^ 0xAB69605E;
    v847 = ((v846 >> 2) + 4991 * __ROL4__(v844 ^ (v845 - 2033) ^ 0xAB6967AF, 2)) ^ v845;
    v848 = (__ROL4__(v847, 7) + 43881 * __ROR4__(v847 - 133239679, 6)) ^ v846;
    v849 = (24670 * (v848 ^ 0x137F) + __ROR4__(v848, 9)) ^ v847;
    v850 = (__ROL4__(v849, 7) + 2033 * __ROL4__(v849 ^ 0xAB69, 5)) ^ v848;
    v851 = v849 ^ v850 ^ 0xAC987321;
    v852 = (4991 * __ROR4__(v851, 3) - 219010071) ^ v850;
    v853 = (24670 * __ROR4__(v852 - 133239679, 1) - __ROR4__(v852, 6)) ^ v851;
    v854 = (__ROL4__(v853, 14) + 2033 * __ROL4__(v853 - 1419157410, 3)) ^ v852;
    v855 = (4991 * __ROL4__(v854 - 1419157410, 15) - __ROR4__(v854, 14)) ^ v853;
    v856 = (v855 >> 3) ^ (43881 * (v855 ^ 0x605E)) ^ v854;
    v857 = v825 ^ __ROL4__(v856, 2) ^ (24670 * __ROL4__(v856 ^ 0x7F1137F, 4)) ^ v855;
    v858 = v826 ^ v856;
    *(v828 - 4) = v857;
    v859 = __ROR4__(v857, 8);
    *v828 = v858;
    v860 = __ROR4__(v858, 8);
    *(v828 - 5) = v859;
    v861 = __ROR4__(v859, 8);
    *(v828 - 1) = v860;
    v862 = __ROR4__(v860, 8);
    *(v828 - 6) = v861;
    v863 = __ROR4__(v861, 8);
    *(v828 - 2) = v862;
    v864 = __ROR4__(v862, 8);
    *(v828 - 7) = v863;
    *(v828 - 3) = v864;
    v827 = __ROR4__(v863, 8);
    LODWORD(v571) = __ROR4__(v864, 8);
    v825 = v831;
    v826 = v832;
    v828 += 8;
    --v830;
  }
  while ( v830 );
  v865 = 0LL;
  v866 = 0;
  v83 = v1335;
  v823 = v1384;
  v867 = (int)v1384;
  do
    v866 ^= *((_BYTE *)v1344 + v865++);
  while ( v865 < 0x338 );
  if ( v866 != 64LL )
  {
    MemoryFree(v1344);
    goto LABEL_1180;
  }
  v823 = v1344;
  v872 = v1344;
  *((_BYTE *)v1344 + 823) = 0;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  if ( !*(_BYTE *)v1344 )
    goto LABEL_1182;
  while ( 1 )
  {
    v873 = v872;
    v874 = -1LL;
    do
      ++v874;
    while ( v872[v874] );
    v875 = &v872[v874];
    v876 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1307;
    if ( !GetModuleHandleExW(0, v873, (HMODULE *)v876) )
      break;
    v867 = 0;
    if ( **(_WORD **)v876 == 23117
      && (v877 = *(int *)(*(_QWORD *)v876 + 60LL), (unsigned int)v877 < 0x10000000)
      && (v878 = *(_QWORD *)v876 + v877, v878 >= *(_QWORD *)v876)
      && *(_DWORD *)v878 == 17744 )
    {
      if ( ((*(_WORD *)(v878 + 24) - 267) & 0xFEFF) != 0 )
      {
        v867 = -1073741811;
      }
      else
      {
        *(_QWORD *)(v876 + 12) = *(_QWORD *)(v878 + 136);
        *((_DWORD *)v876 + 2) = *(_DWORD *)(v878 + 80);
      }
    }
    else
    {
      v867 = -1073741701;
    }
    v1317 = *(_DWORD *)(v875 + 1);
    v872 = v875 + 3;
    v879 = 0;
    for ( kk = 0; v879 < v1317; kk = v879 )
    {
      v880 = (const CHAR *)v872;
      v881 = -1LL;
      do
        ++v881;
      while ( *((_BYTE *)v872 + v881) );
      v872 = (WCHAR *)((char *)v872 + v881 + 1);
      if ( v867 >= 0 )
      {
        v882 = (void **)GetProcAddress(*(HMODULE *)v876, v880);
        if ( !v882 )
          goto LABEL_1181;
        (&WARBIRD::g_FuncAddress)[lpModuleNamek] = v882;
        v879 = kk;
      }
      ++lpModuleNamek;
      ++v879;
    }
    ++v1307;
    if ( !*(_BYTE *)v872 )
      goto LABEL_1181;
  }
LABEL_1180:
  v867 = -1073741702;
LABEL_1181:
  if ( v823 )
  {
LABEL_1182:
    v868 = GetProcessHeap();
    HeapFree(v868, 0, v823);
  }
  if ( v867 >= 0 )
  {
    v822 = g_WarbirdSecureFunctionsRefCount;
LABEL_1211:
    g_WarbirdSecureFunctionsRefCount = v822 + 1;
    v149 = 0LL;
    v871 = (HMODULE *)&WARBIRD::g_arModuleInfo;
    goto LABEL_1212;
  }
  v869 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v870 = 4LL;
  v149 = 0LL;
  do
  {
    if ( *v869 )
      FreeLibrary(*v869);
    v869 += 3;
    --v870;
  }
  while ( v870 );
  v871 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_1212:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  LODWORD(v1634) = v1381;
  v1633 = 1;
  LODWORD(v1635) = -1721306479;
  DWORD2(v1634) = 1;
  LODWORD(v1636) = 1;
  DWORD2(v1635) = 1;
  LODWORD(v1637) = v1255;
  DWORD2(v1636) = 1;
  v883 = 4LL;
  qword_1807A91D0(0LL, 8225LL, 4LL, &v1633);
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v884 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v884 == 1 )
    {
      do
      {
        if ( *v871 )
          FreeLibrary(*v871);
        v871 += 3;
        --v883;
      }
      while ( v883 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  ((void (__fastcall *)(_QWORD, SIZE_T))off_1807A9260)(0LL, v1224);
  v1385 = (void *)v1382;
LABEL_1221:
  SH<void *,SH_HANDLE>::Reset(v1476);
  v885 = 0LL;
  v1515 = 0LL;
  *(_OWORD *)v1525 = 0LL;
  v886 = GetProcessHeap();
  v887 = (WCHAR *)HeapAlloc(v886, 8u, 0xA0uLL);
  v84 = 0LL;
  if ( !v887 )
    goto LABEL_1261;
  *(_OWORD *)v887 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
  *((_OWORD *)v887 + 1) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
  *((_OWORD *)v887 + 2) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
  *((_OWORD *)v887 + 3) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
  *((_OWORD *)v887 + 4) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
  *((_OWORD *)v887 + 5) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
  *((_OWORD *)v887 + 6) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
  *((_OWORD *)v887 + 7) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
  *((_OWORD *)v887 + 8) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
  *((_OWORD *)v887 + 9) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
  v149 = v887;
  v1384 = v887;
  v888 = GetProcessHeap();
  v889 = HeapAlloc(v888, 8u, 8uLL);
  v885 = v889;
  v84 = 0LL;
  if ( !v889 )
  {
    v885 = 0LL;
    goto LABEL_1261;
  }
  *v889 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v1381 = (__int64)v889;
  v890 = __rdtsc();
  v1420 = 0;
  if ( (int)RtlUIntAdd(4u, 4, (unsigned int *)&v1421) < 0 )
    goto LABEL_1559;
  if ( (int)RtlUIntAdd(0, v1421, &v1420) < 0 )
    goto LABEL_1559;
  if ( (int)RtlUIntAdd(4u, 160, (unsigned int *)&v1422) < 0 )
    goto LABEL_1559;
  v891 = RtlUIntAdd(v1420, v1422, &v1420);
  if ( (v892 | v891) < 0 )
    goto LABEL_1559;
  if ( (int)RtlUIntAdd(4u, 8, (unsigned int *)&v1423) < 0 )
    goto LABEL_1559;
  v893 = RtlUIntAdd(v1420, v1423, &v1420);
  if ( (v894 | v893) < 0 )
    goto LABEL_1559;
  if ( (int)RtlUIntAdd(4u, 8, (unsigned int *)&v1424) < 0 )
    goto LABEL_1559;
  v895 = RtlUIntAdd(v1420, v1424, &v1420);
  if ( (v896 | v895) < 0 )
    goto LABEL_1559;
  HIDWORD(v1514) = v1420;
  v897 = v1420;
  v898 = GetProcessHeap();
  v899 = HeapAlloc(v898, 8u, v897);
  v900 = v899;
  v84 = 0LL;
  if ( !v899
    || (v1515 = v899,
        LODWORD(v1514) = 0,
        (int)RtlULongLongAdd((unsigned __int64)v899, 4LL, (unsigned __int64 *)&v1526) < 0)
    || v900 + 2 > (_DWORD *)((char *)v900 + HIDWORD(v1514)) )
  {
LABEL_1559:
    v149 = v887;
    goto LABEL_1261;
  }
  v901 = (unsigned int)(v84 + 4);
  *v900 = v901;
  *v1526 = v901;
  v902 = v1514 + 1;
  LODWORD(v1514) = v1514 + 1;
  if ( v1515 != (LPVOID)v84 )
  {
    v904 = (int *)v1515;
    v1494 = (int *)v1515;
    if ( v902 )
    {
      while ( (int)RtlUIntAdd(v901, *v904, &v1426) >= 0 )
      {
        if ( (int)RtlULongLongAdd((unsigned __int64)v904, v1426, (unsigned __int64 *)&v1494) < 0 )
          goto LABEL_1559;
        v904 = v1494;
        v901 = 4LL;
        if ( v905 + 1 >= v906 )
          goto LABEL_1242;
      }
      goto LABEL_1259;
    }
LABEL_1242:
    if ( (int)RtlULongLongAdd((unsigned __int64)v904, v901, (unsigned __int64 *)&v1510) >= 0
      && v904 + 41 <= (int *)((char *)v1515 + HIDWORD(v1514)) )
    {
      *v904 = 160;
      v907 = v1510;
      *v1510 = *(_OWORD *)v887;
      v907[1] = *((_OWORD *)v887 + 1);
      v907[2] = *((_OWORD *)v887 + 2);
      v907[3] = *((_OWORD *)v887 + 3);
      v907[4] = *((_OWORD *)v887 + 4);
      v907[5] = *((_OWORD *)v887 + 5);
      v907[6] = *((_OWORD *)v887 + 6);
      v907[7] = *((_OWORD *)v887 + 7);
      v907[8] = *((_OWORD *)v887 + 8);
      v907[9] = *((_OWORD *)v887 + 9);
      v903 = 4LL;
      goto LABEL_1245;
    }
    goto LABEL_1559;
  }
  v903 = (unsigned int)v901;
  if ( (int)RtlUIntAdd(v901, 160, (unsigned int *)&v1425) < 0 )
    goto LABEL_1259;
  if ( (int)RtlUIntAdd(HIDWORD(v1514), v1425, (unsigned int *)&v1514 + 1) < 0 )
    goto LABEL_1260;
LABEL_1245:
  v908 = v1514 + 1;
  LODWORD(v1514) = v1514 + 1;
  if ( v1515 == (LPVOID)v84 )
  {
    if ( (int)RtlUIntAdd(v903, 8, (unsigned int *)&v1427) >= 0 )
    {
      if ( (int)RtlUIntAdd(HIDWORD(v1514), v1427, (unsigned int *)&v1514 + 1) < 0 )
        goto LABEL_1260;
LABEL_1256:
      v913 = v1514 + 1;
      LODWORD(v1514) = v1514 + 1;
      if ( v1515 == (LPVOID)v84 )
      {
        if ( (int)RtlUIntAdd(v903, 8, (unsigned int *)&v1429) < 0
          || (int)RtlUIntAdd(HIDWORD(v1514), v1429, (unsigned int *)&v1514 + 1) < 0 )
        {
          goto LABEL_1259;
        }
LABEL_1277:
        LODWORD(v1514) = v1514 + 1;
        if ( (int)RtlUIntAdd(v903, v903, &v1440) >= 0 )
        {
          v925 = v1440;
          v1432 = v1440;
          if ( (int)RtlUIntAdd(v924, 8, (unsigned int *)&v1433) >= 0
            && (int)RtlUIntAdd(v925, v1433, (unsigned int *)&v1432) >= 0 )
          {
            v1256 = v1432;
            v926 = (WCHAR *)v84;
            v1345 = (LPCWSTR)v84;
            lpModuleNamel = v84;
            v927 = (unsigned int *)v84;
            v1379 = (unsigned int *)v84;
            v1383 = v84;
            v1318 = v84;
            v928 = (unsigned int *)v84;
            v1441 = (LPVOID)v84;
            v1391 = (LPVOID)v84;
            v1238 = __rdtsc();
            v1434 = 8;
            v929 = RtlUIntAdd(8u, SHIDWORD(v1514), &v1434);
            if ( v929 < 0 )
              goto LABEL_1288;
            v931 = (v1434 + 7) & 0xFFFFFFF8;
            if ( v931 >= v1434 )
            {
              v1434 = (v1434 + 7) & 0xFFFFFFF8;
              v932 = v931;
              v933 = GetProcessHeap();
              v934 = HeapAlloc(v933, 8u, v932);
              Srce = v934;
              v84 = 0LL;
              if ( v934 )
              {
                v1497[0] = v934;
                *v934 = v1514;
                v929 = RtlULongLongAdd((unsigned __int64)v934, 4LL, (unsigned __int64 *)v1497);
                if ( v929 < 0
                  || (v936 = v1497[0],
                      *(_DWORD *)v1497[0] = HIDWORD(v1514),
                      v929 = RtlULongLongAdd((unsigned __int64)v936, v935, (unsigned __int64 *)v1497),
                      v929 < 0) )
                {
                  v938 = GetProcessHeap();
                  HeapFree(v938, 0, Srce);
                  v930 = (unsigned int)v927;
                }
                else
                {
                  *(_QWORD *)(v1434 + v937 - 8) = v1238;
                  memcpy_0(v1497[0], v1515, HIDWORD(v1514));
                  v926 = (WCHAR *)Srce;
                  v1345 = (LPCWSTR)Srce;
                  v930 = v1434;
                  lpModuleNamel = v1434;
                }
                v84 = 0LL;
LABEL_1288:
                v939 = v929 | 0x10000000;
                if ( v939 < 0 )
                  goto LABEL_1359;
                v1239 = v84;
                if ( v926 )
                {
                  v940 = v930;
                  Srcf = (LPVOID)v930;
                  if ( v930 )
                  {
                    v1382 = v930 + 8LL;
                    v941 = (char *)MemoryAlloc(v1382);
                    v1380 = v941;
                    if ( v941 )
                    {
                      v942 = 0;
                      v1196 = 0;
                      v943 = 0LL;
                      if ( v940 )
                      {
                        do
                          v942 ^= *((_BYTE *)v926 + v943++);
                        while ( v943 < v940 );
                        v1196 = v942;
                      }
                      v1581 = 0xC81ECB17B1B54A58uLL;
                      v944 = v926;
                      v945 = v941;
                      v1375 = v941;
                      v946 = 0;
                      v947 = -1;
                      v1308 = 0;
                      v1334 = 0;
                      v948 = lpModuleNamel;
                      v949 = lpModuleNamel & 7;
                      if ( (lpModuleNamel & 7) != 0 )
                      {
                        v950 = 0;
                        v951 = 0;
                        lpModuleNamem = 0;
                        v952 = 56;
                        do
                        {
                          v953 = *(unsigned __int8 *)v944;
                          v944 = (WCHAR *)((char *)v944 + 1);
                          if ( v951 >= 4 )
                            v950 |= v953 << v952;
                          else
                            v946 |= v953 << (v952 - 32);
                          v1308 = v950;
                          v1334 = v946;
                          v951 = lpModuleNamem + 1;
                          lpModuleNamem = v951;
                          v952 -= 8;
                        }
                        while ( v951 < v949 );
                        v946 ^= 0xB17A307A;
                        v954 = v950 ^ 0x42F6B18D;
                        v955 = v946;
                        v956 = v954;
                        v1345 = v926;
                        v948 = (unsigned __int64)Srcf;
                        v957 = v1375;
                        v958 = (int)v927;
                        do
                        {
                          lpModuleNamen = (WCHAR *)(v957 + 1);
                          if ( v958 >= 4 )
                          {
                            v956 = __ROL4__(v956, 8);
                            v959 = v956;
                          }
                          else
                          {
                            v955 = __ROL4__(v955, 8);
                            v959 = v955;
                          }
                          *v957 = v959;
                          ++v958;
                          ++v957;
                        }
                        while ( v958 < v949 );
                        v945 = (char *)lpModuleNamen;
                        v1375 = lpModuleNamen;
                        v942 = v1196;
                        v927 = v1379;
                        v928 = v1379;
                        if ( (unsigned int)v949 > 4 )
                        {
                          v947 = v954 >> (8 * (8 - v949)) << (8 * (8 - v949));
                          goto LABEL_1310;
                        }
                        v947 = 0;
                        if ( (unsigned int)v949 < 4 )
                        {
                          v946 = v946 >> (8 * (4 - v949)) << (8 * (4 - v949));
LABEL_1310:
                          v945 = (char *)v1375;
                        }
                      }
                      v960 = v948 >> 3;
                      if ( v948 >> 3 )
                      {
                        lpModuleNameo = WORD1(v1581);
                        v961 = WORD2(v1581);
                        LODWORD(v1375) = HIWORD(v1581);
                        v962 = v945 + 7;
                        v963 = (unsigned __int8 *)(v944 + 1);
                        v964 = v960;
                        v965 = v1308;
                        v966 = v1334;
                        do
                        {
                          v967 = v963[1] | ((*v963 | ((*(v963 - 1) | (*(v963 - 2) << 8)) << 8)) << 8);
                          v968 = v963[5] | ((v963[4] | ((v963[3] | (v963[2] << 8)) << 8)) << 8);
                          v969 = v968 ^ v947;
                          v963 += 8;
                          v970 = v946 ^ v967 ^ (v969 - 19032);
                          v971 = (__ROR4__(HIDWORD(v1581) ^ v970, 7) + WORD1(v1581) * __ROR4__(v970, 15)) ^ v969;
                          v972 = (v961 * __ROR4__(v971 - 1313519016, 9) - __ROR4__(v971, 10)) ^ HIDWORD(v1581) ^ v970;
                          v973 = (__ROL4__(v972, 5) + HIWORD(v1581) * __ROL4__(v961 ^ v972, 4)) ^ v971;
                          v974 = (HIDWORD(v1581) - (v973 ^ 0xB1B54A58)) ^ v972;
                          v975 = (WORD1(v1581) * (v974 - 19032) - (v974 >> 6)) ^ v973;
                          v976 = (19032 * (v961 ^ __ROR4__(v975, 15))) ^ v974;
                          v977 = (v961 * (HIWORD(v1581) + __ROR4__(~v976, 3))) ^ v975;
                          v978 = (v977 - 19032 - HIDWORD(v1581)) ^ v976;
                          v979 = (lpModuleNameo * ((unsigned int)v1375 ^ v978)) ^ __ROR4__(v978, 10) ^ v977;
                          v980 = __ROR4__(v979, 3) ^ (v961 * __ROL4__(v979 ^ 0x4A58, 6)) ^ v978;
                          v981 = (19032 * (__ROR4__(v980, 15) - HIWORD(v1581))) ^ v979;
                          v982 = (v981 >> 15) ^ (19032 * __ROL4__(v981 - v961, 3)) ^ (v981 >> 1) ^ (19032
                                                                                                  * (HIWORD(v1581) ^ v981)) ^ v980;
                          v983 = (WORD1(v1581) * (v982 - v961) - (v982 >> 13)) ^ v981;
                          v984 = __ROR4__(v983, 11) ^ (v961 * __ROR4__(-1313519016 - v983, 9)) ^ v982;
                          v985 = (v984 - HIWORD(v1581) + 1313519016) ^ v983;
                          v986 = (19032 * (lpModuleNameo ^ v985) - __ROR4__(v985, 7)) ^ v984;
                          v987 = (WORD1(v1581) * __ROL4__(HIWORD(v1581) ^ v986, 4) - __ROR4__(v986, 16)) ^ v985;
                          v988 = (__ROR4__(v987, 4) + v961 * __ROR4__(-1313519016 - v987, 10)) ^ v986;
                          v989 = __ROR4__(v988, 9) ^ (HIWORD(v1581) * __ROR4__(v988 + 1313519016, 4)) ^ v987;
                          v990 = (19032 * __ROL4__(v989 ^ HIDWORD(v1581), 8) - __ROL4__(v989, 2)) ^ v988;
                          v991 = (WORD1(v1581) * __ROR4__(HIDWORD(v1581) - v990, 11) - __ROR4__(v990, 12)) ^ v989;
                          v992 = (v991 >> 8) ^ (v961 * (v991 ^ WORD1(v1581))) ^ v990;
                          v993 = HIDWORD(v1581) ^ v992;
                          v994 = v966 ^ v992;
                          v995 = v965 ^ v993 ^ v991 ^ 0xB1B54A58;
                          *(v962 - 4) = v994;
                          v996 = __ROR4__(v994, 8);
                          *v962 = v995;
                          v997 = __ROR4__(v995, 8);
                          *(v962 - 5) = v996;
                          v998 = __ROR4__(v996, 8);
                          *(v962 - 1) = v997;
                          v999 = __ROR4__(v997, 8);
                          *(v962 - 6) = v998;
                          v1000 = __ROR4__(v998, 8);
                          *(v962 - 2) = v999;
                          v1001 = __ROR4__(v999, 8);
                          *(v962 - 7) = v1000;
                          *(v962 - 3) = v1001;
                          v946 = __ROR4__(v1000, 8);
                          v947 = __ROR4__(v1001, 8);
                          v966 = v967;
                          v965 = v968;
                          v962 += 8;
                          --v964;
                        }
                        while ( v964 );
                        v942 = v1196;
                        v83 = v1335;
                        v927 = v1379;
                        v928 = v1379;
                        v926 = (WCHAR *)v1345;
                        v948 = (unsigned __int64)Srcf;
                      }
                      v1002 = v1380;
                      *(_QWORD *)((char *)v1380 + v948) = v942;
                      v1497[4] = (void *)160;
                      v1003 = GetProcessHeap();
                      v1004 = (unsigned int *)HeapAlloc(v1003, 8u, 0x30uLL);
                      if ( !v1004 )
                      {
                        v1005 = -1073741801;
                        goto LABEL_1317;
                      }
                      *v1004 = v1382;
                      v1015 = GetProcessHeap();
                      v1016 = HeapAlloc(v1015, 8u, (unsigned int)v1382);
                      if ( !v1016 )
                        goto LABEL_1336;
                      *((_QWORD *)v1004 + 1) = v1016;
                      memcpy_0(v1016, v1002, (unsigned int)v1382);
                      v1004[4] = 160;
                      v1017 = GetProcessHeap();
                      v1018 = HeapAlloc(v1017, 8u, 0xA0uLL);
                      v1005 = 0;
                      if ( !v1018 )
                        goto LABEL_1336;
                      *((_QWORD *)v1004 + 3) = v1018;
                      *v1018 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                      v1018[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                      v1018[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                      v1018[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                      v1018[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                      v1018[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                      v1018[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                      v1018[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                      v1018[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                      v1018[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                      v1004[8] = 8;
                      v1019 = GetProcessHeap();
                      v1020 = HeapAlloc(v1019, 8u, 8uLL);
                      if ( v1020 )
                      {
                        *((_QWORD *)v1004 + 5) = v1020;
                        *v1020 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                        v927 = v1004;
                        v1006 = 0LL;
                      }
                      else
                      {
LABEL_1336:
                        v1005 = -1073741801;
                        v1349 = (WCHAR *)*((_QWORD *)v1004 + 1);
                        if ( v1349 )
                        {
                          v1021 = GetProcessHeap();
                          HeapFree(v1021, 0, v1349);
                          *((_QWORD *)v1004 + 1) = 0LL;
                        }
                        v1350 = (WCHAR *)*((_QWORD *)v1004 + 3);
                        if ( v1350 )
                        {
                          v1022 = GetProcessHeap();
                          HeapFree(v1022, 0, v1350);
                          *((_QWORD *)v1004 + 3) = 0LL;
                        }
                        v1351 = (WCHAR *)*((_QWORD *)v1004 + 5);
                        if ( v1351 )
                        {
                          v1023 = GetProcessHeap();
                          HeapFree(v1023, 0, v1351);
                          *((_QWORD *)v1004 + 5) = 0LL;
                        }
                        v1024 = GetProcessHeap();
                        HeapFree(v1024, 0, v1004);
LABEL_1317:
                        v1006 = (_QWORD *)v1239;
                      }
                      v1007 = GetProcessHeap();
                      HeapFree(v1007, 0, v1380);
                      v84 = 0LL;
                      if ( v1006 )
                      {
                        v1346 = (WCHAR *)v1006[1];
                        if ( v1346 )
                        {
                          v1008 = GetProcessHeap();
                          HeapFree(v1008, 0, v1346);
                          v1006[1] = 0LL;
                        }
                        v1347 = (WCHAR *)v1006[3];
                        if ( v1347 )
                        {
                          v1009 = GetProcessHeap();
                          HeapFree(v1009, 0, v1347);
                          v1006[3] = 0LL;
                        }
                        v1348 = (WCHAR *)v1006[5];
                        if ( v1348 )
                        {
                          v1010 = GetProcessHeap();
                          HeapFree(v1010, 0, v1348);
                          v1006[5] = 0LL;
                        }
                        v1011 = GetProcessHeap();
                        HeapFree(v1011, 0, v1006);
                        v84 = 0LL;
                      }
                      v939 = v1005 | 0x10000000;
                      if ( v939 < 0 )
                        goto LABEL_1359;
                      LODWORD(v1435) = 4;
                      v1012 = RtlUIntAdd(4u, *v927, (unsigned int *)&v1435);
                      if ( v1012 < 0 )
                        goto LABEL_1354;
                      v1012 = RtlUIntAdd(v1435, v1013, (unsigned int *)&v1435);
                      if ( v1012 < 0 )
                        goto LABEL_1354;
                      v1012 = RtlUIntAdd(v1435, v927[4], (unsigned int *)&v1435);
                      if ( v1012 < 0 )
                        goto LABEL_1354;
                      v1012 = RtlUIntAdd(v1435, v1014, (unsigned int *)&v1435);
                      if ( v1012 < 0 )
                        goto LABEL_1354;
                      v1012 = RtlUIntAdd(v1435, v927[8], (unsigned int *)&v1435);
                      if ( v1012 < 0 )
                        goto LABEL_1354;
                      lpModuleNamep = v1435;
                      v1025 = v1435;
                      v1026 = GetProcessHeap();
                      v1027 = HeapAlloc(v1026, 8u, v1025);
                      v1028 = v1027;
                      v84 = 0LL;
                      if ( !v1027 )
                        goto LABEL_1413;
                      v1498 = v1027;
                      *v1027 = *v927;
                      v1012 = RtlULongLongAdd((unsigned __int64)v1027, 4LL, (unsigned __int64 *)&v1498);
                      if ( v1012 >= 0 )
                      {
                        memcpy_0(v1498, *((const void **)v927 + 1), *v927);
                        v1012 = RtlULongLongAdd((unsigned __int64)v1498, *v927, (unsigned __int64 *)&v1498);
                        if ( v1012 >= 0 )
                        {
                          v1029 = v1498;
                          *(_DWORD *)v1498 = v927[4];
                          v1012 = RtlULongLongAdd((unsigned __int64)v1029, 4LL, (unsigned __int64 *)&v1498);
                          if ( v1012 >= 0 )
                          {
                            memcpy_0(v1498, *((const void **)v927 + 3), v927[4]);
                            v1012 = RtlULongLongAdd((unsigned __int64)v1498, v927[4], (unsigned __int64 *)&v1498);
                            if ( v1012 >= 0 )
                            {
                              v1030 = v1498;
                              *(_DWORD *)v1498 = v927[8];
                              v1012 = RtlULongLongAdd((unsigned __int64)v1030, 4LL, (unsigned __int64 *)&v1498);
                              if ( v1012 >= 0 )
                              {
                                memcpy_0(v1498, *((const void **)v927 + 5), v927[8]);
                                v1012 = RtlULongLongAdd((unsigned __int64)v1498, v927[8], (unsigned __int64 *)&v1498);
                                v84 = 0LL;
                                if ( v1012 >= 0 )
                                {
                                  v1383 = (SIZE_T)v1028;
                                  v1031 = lpModuleNamep;
                                  v1318 = lpModuleNamep;
                                  goto LABEL_1355;
                                }
                              }
                            }
                          }
                        }
                      }
                      v1032 = GetProcessHeap();
                      HeapFree(v1032, 0, v1028);
                      v84 = 0LL;
LABEL_1354:
                      v1031 = v1383;
LABEL_1355:
                      v939 = v1012 | 0x10000000;
                      if ( v939 < 0 )
                        goto LABEL_1359;
                      v1436 = 8;
                      v1033 = RtlUIntAdd(8u, v1256, &v1436);
                      v939 = v1033 | 0x10000000;
                      if ( v1033 >= 0 )
                      {
                        v1036 = (v1436 + 7) & 0xFFFFFFF8;
                        if ( v1036 < v1436 )
                        {
                          v939 = -1073741675;
                          goto LABEL_1359;
                        }
                        v1437 = (v1436 + 7) & 0xFFFFFFF8;
                        v939 = RtlUIntAdd(v1036, v1034, &v1437);
                        if ( v939 >= 0 )
                        {
                          if ( v1515 && (unsigned int)v1514 > 1 )
                          {
                            v1499 = (int *)v1515;
                            v939 = RtlULongLongAdd((unsigned __int64)v1515, 4LL, (unsigned __int64 *)&v1499);
                            if ( v939 >= 0 )
                            {
                              v939 = RtlULongLongAdd((unsigned __int64)v1499, v1058, (unsigned __int64 *)&v1499);
                              if ( v939 >= 0 )
                              {
                                v1257 = *v1499;
                                v939 = RtlULongLongAdd((unsigned __int64)v1499, 4LL, (unsigned __int64 *)&v1499);
                                if ( v939 >= 0 )
                                {
                                  if ( (unsigned int)v1514 > 2 )
                                  {
                                    v1060 = (unsigned int *)v1515;
                                    v1500 = (unsigned int *)v1515;
                                    v1383 = v1059;
                                    v1318 = v1031;
                                    while ( 1 )
                                    {
                                      v1061 = *v1060;
                                      v939 = RtlULongLongAdd((unsigned __int64)v1060, 4LL, (unsigned __int64 *)&v1500);
                                      if ( v939 < 0 )
                                        break;
                                      v939 = RtlULongLongAdd((unsigned __int64)v1500, v1061, (unsigned __int64 *)&v1500);
                                      if ( v939 < 0 )
                                        break;
                                      v1060 = v1500;
                                      if ( (unsigned int)(v1062 + 1) >= 2 )
                                      {
                                        v939 = RtlULongLongAdd((unsigned __int64)v1500, 4LL, (unsigned __int64 *)&v1500);
                                        if ( v939 < 0 )
                                          break;
                                        LODWORD(v1438) = 4;
                                        v939 = RtlUIntAdd(4u, v1063, (unsigned int *)&v1438);
                                        v84 = 0LL;
                                        if ( v939 < 0 )
                                          goto LABEL_1411;
                                        v939 = RtlUIntAdd(v1438, 4, (unsigned int *)&v1438);
                                        if ( v939 < 0 )
                                          goto LABEL_1411;
                                        v939 = RtlUIntAdd(v1438, v1257, (unsigned int *)&v1438);
                                        if ( v939 < 0 )
                                          goto LABEL_1411;
                                        v939 = RtlUIntAdd(v1438, 4, (unsigned int *)&v1438);
                                        if ( v939 < 0 )
                                          goto LABEL_1411;
                                        v939 = RtlUIntAdd(v1438, v1064, (unsigned int *)&v1438);
                                        if ( v939 < 0 )
                                          goto LABEL_1411;
                                        v1065 = v1438;
                                        v1258 = v1438;
                                        if ( (unsigned int)v1438 > 0x400000 )
                                        {
                                          v939 = -2147418113;
                                          goto LABEL_1359;
                                        }
                                        goto LABEL_1412;
                                      }
                                    }
                                  }
                                  else
                                  {
                                    v939 = -1073741811;
                                  }
                                }
                              }
                            }
                          }
                          else
                          {
                            v939 = -1073741811;
                          }
LABEL_1555:
                          v84 = 0LL;
                        }
                        goto LABEL_1359;
                      }
LABEL_1411:
                      v1065 = v84;
                      v1258 = v84;
                      if ( v939 < 0 )
                        goto LABEL_1359;
LABEL_1412:
                      v1352 = v926;
                      v1379 = v927;
                      v1066 = v1035;
                      v1067 = v1065;
                      v1068 = GetProcessHeap();
                      v1069 = (unsigned int *)HeapAlloc(v1068, 8u, v1067);
                      v84 = 0LL;
                      if ( !v1069 )
                      {
LABEL_1413:
                        v939 = -805306345;
                        goto LABEL_1359;
                      }
                      v928 = v1069;
                      if ( !v1066 )
                      {
                        v939 = -2147024809;
                        v1383 = 0LL;
                        goto LABEL_1359;
                      }
                      v1531[0] = v1066;
                      v1532 = v1318;
                      v1531[1] = v1069;
                      v1533 = v1258;
                      v1534 = 0;
                      if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                        && (v1072 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                      {
                        v1073 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1072)(134LL, v1531);
                        v939 = v1073 | 0x10000000;
                        v1071 = v1258;
                        if ( v1073 >= 0 )
                        {
                          v1071 = v1533;
                          v1074 = v926;
                          v1075 = v927;
                          v84 = 0LL;
                          goto LABEL_1429;
                        }
                        v84 = 0LL;
                      }
                      else
                      {
                        v1070 = GetLastError();
                        v939 = v1070;
                        v84 = 0LL;
                        if ( v1070 > 0 )
                          v939 = (unsigned __int16)v1070 | 0x80070000;
                        if ( v939 >= 0 )
                          v939 = -2147467259;
                        v1071 = v1258;
                      }
                      v1383 = v1066;
                      if ( v939 == -805306333 )
                      {
                        v939 = -2147024774;
                        goto LABEL_1359;
                      }
                      v1075 = v927;
                      v1074 = v926;
                      if ( v939 >= 0 )
                      {
LABEL_1429:
                        if ( v1071 < 4 )
                          goto LABEL_1430;
                        v1076 = *v928;
                        v1259 = *v928;
                        v1077 = v928 + 1;
                        if ( v928 + 1 < v928 )
                        {
                          v939 = -805306219;
                        }
                        else
                        {
                          if ( v1071 - 4 >= (unsigned int)v1076 )
                          {
                            v1383 = *v928;
                            v1078 = (unsigned int *)((char *)v1077 + v1076);
                            v1377 = (SIZE_T)v1077 + v1076;
                            if ( (unsigned int *)((char *)v1077 + v1076) < v1077 || (unsigned int)(v1076 + 4) < 4 )
                              goto LABEL_1553;
                            if ( v1071 - ((_DWORD)v1076 + 4) < 4 )
                              goto LABEL_1437;
                            v1079 = *v1078;
                            v1080 = v1078 + 1;
                            if ( v1078 + 1 < v1078 )
                              goto LABEL_1553;
                            v1081 = v1076 + 8;
                            if ( (int)v1076 + 8 < (unsigned int)(v1076 + 4) )
                              goto LABEL_1553;
                            if ( v1071 - v1081 < (unsigned int)v1079 )
                              goto LABEL_1437;
                            if ( (unsigned int *)((char *)v1080 + v1079) < v1080 )
                              goto LABEL_1553;
                            v1082 = v1079 + v1081;
                            if ( (unsigned int)v1079 + v1081 < v1081 )
                              goto LABEL_1553;
                            if ( v1071 - v1082 < 4 )
                              goto LABEL_1437;
                            v1083 = *(unsigned int *)((char *)v1080 + v1079);
                            v1240 = (char *)v1080 + v1079 + 4;
                            if ( v1240 < (char *)v1080 + v1079 )
                              goto LABEL_1553;
                            v1084 = v1082 + 4;
                            if ( v1082 + 4 < v1082 )
                              goto LABEL_1553;
                            if ( v1071 - v1084 < (unsigned int)v1083 )
                              goto LABEL_1437;
                            if ( v1084 + (unsigned int)v1083 < v1084 )
                            {
LABEL_1553:
                              v939 = -805306219;
                            }
                            else
                            {
                              if ( v1071 == v1084 + (_DWORD)v1083
                                && (unsigned int)(v1079 + v1083 + v1076) + 12LL == v1071 )
                              {
                                v1085 = GetProcessHeap();
                                v1086 = HeapAlloc(v1085, 8u, 0x30uLL);
                                Srcg = v1086;
                                v84 = 0LL;
                                if ( !v1086 )
                                {
                                  v939 = -805306345;
                                  v1383 = v1066;
                                  v927 = v1379;
                                  v926 = (WCHAR *)v1352;
                                  goto LABEL_1359;
                                }
                                if ( v928 == (unsigned int *)-4LL )
                                {
                                  *(_DWORD *)v1086 = 0;
                                  v1086[1] = 0LL;
LABEL_1456:
                                  if ( v1377 == -4LL )
                                  {
                                    *((_DWORD *)v1086 + 4) = 0;
                                    v1086[3] = 0LL;
                                  }
                                  else
                                  {
                                    *((_DWORD *)v1086 + 4) = v1079;
                                    v1089 = GetProcessHeap();
                                    v1090 = HeapAlloc(v1089, 8u, v1079);
                                    if ( !v1090 )
                                      goto LABEL_1462;
                                    v1086[3] = v1090;
                                    memcpy_0(v1090, (const void *)(v1377 + 4), v1079);
                                    v84 = 0LL;
                                  }
                                  if ( v1240 )
                                  {
                                    *((_DWORD *)v1086 + 8) = v1083;
                                    v1091 = GetProcessHeap();
                                    v1092 = HeapAlloc(v1091, 8u, v1083);
                                    if ( !v1092 )
                                      goto LABEL_1462;
                                    v1086[5] = v1092;
                                    memcpy_0(v1092, v1240, v1083);
                                    v84 = 0LL;
                                  }
                                  else
                                  {
                                    *((_DWORD *)v1086 + 8) = 0;
                                    v1086[5] = 0LL;
                                  }
                                  v1441 = v1086;
                                  v1093 = 0;
                                  v1377 = (SIZE_T)v928;
                                  v1383 = v1066;
                                  v927 = v1379;
                                  v926 = (WCHAR *)v1352;
                                  v1100 = (unsigned int *)v1441;
                                }
                                else
                                {
                                  *(_DWORD *)v1086 = v1259;
                                  v1087 = GetProcessHeap();
                                  v1088 = HeapAlloc(v1087, 8u, v1383);
                                  if ( v1088 )
                                  {
                                    v1086[1] = v1088;
                                    memcpy_0(v1088, v928 + 1, v1383);
                                    v84 = 0LL;
                                    goto LABEL_1456;
                                  }
LABEL_1462:
                                  v927 = v1379;
                                  v926 = (WCHAR *)v1352;
                                  v1093 = -1073741801;
                                  v1377 = (SIZE_T)v928;
                                  v1383 = v1066;
                                  v1441 = 0LL;
                                  v1094 = Srcg;
                                  v1241 = (void *)Srcg[1];
                                  if ( v1241 )
                                  {
                                    v1095 = GetProcessHeap();
                                    HeapFree(v1095, 0, v1241);
                                    v1094 = Srcg;
                                    Srcg[1] = 0LL;
                                  }
                                  v1242 = (void *)v1094[3];
                                  if ( v1242 )
                                  {
                                    v1096 = GetProcessHeap();
                                    HeapFree(v1096, 0, v1242);
                                    v1094 = Srcg;
                                    Srcg[3] = 0LL;
                                  }
                                  v1243 = (void *)v1094[5];
                                  if ( v1243 )
                                  {
                                    v1097 = GetProcessHeap();
                                    HeapFree(v1097, 0, v1243);
                                    Srcg[5] = 0LL;
                                  }
                                  v1098 = GetProcessHeap();
                                  HeapFree(v1098, 0, Srcg);
                                  Srch = v927;
                                  v1099 = v1441;
                                  v1100 = 0LL;
                                  v84 = 0LL;
                                  v1441 = 0LL;
                                  v1377 = (SIZE_T)v928;
                                  v1383 = v1066;
                                  v1379 = v927;
                                  if ( v1099 )
                                  {
                                    v1101 = v1099;
                                    v1102 = (void *)v1099[1];
                                    if ( v1102 )
                                    {
                                      v1103 = GetProcessHeap();
                                      HeapFree(v1103, 0, v1102);
                                      v1101[1] = 0LL;
                                    }
                                    v1104 = (void *)v1101[3];
                                    if ( v1104 )
                                    {
                                      v1105 = GetProcessHeap();
                                      HeapFree(v1105, 0, v1104);
                                      v1101[3] = 0LL;
                                    }
                                    v1106 = (void *)v1101[5];
                                    if ( v1106 )
                                    {
                                      v1107 = GetProcessHeap();
                                      HeapFree(v1107, 0, v1106);
                                      v1101[5] = 0LL;
                                    }
                                    v1108 = GetProcessHeap();
                                    HeapFree(v1108, 0, v1101);
                                    v84 = 0LL;
                                    v1100 = 0LL;
                                    v1441 = 0LL;
                                    v1093 = -1073741801;
                                    v1377 = (SIZE_T)v928;
                                    v1383 = v1066;
                                    v927 = Srch;
                                    v1379 = Srch;
                                  }
                                }
                                v939 = v1093 | 0x10000000;
                                if ( v939 < 0 )
                                  goto LABEL_1359;
                                if ( !v1100 || (Srci = (unsigned __int8 *)*((_QWORD *)v1100 + 1)) == 0LL || !*v1100 )
                                {
                                  v939 = -805306355;
                                  goto LABEL_1359;
                                }
                                v1109 = *v1100 - 8LL;
                                v1382 = v1109;
                                v1110 = (int *)MemoryAlloc(v1109);
                                v1391 = v1110;
                                v84 = 0LL;
                                if ( !v1110 )
                                {
LABEL_1510:
                                  v939 = -805306367;
                                  v1391 = 0LL;
                                  goto LABEL_1359;
                                }
                                v1111 = 0;
                                v1582 = 0x7F1137FAB69605ELL;
                                v1112 = Srci;
                                v1113 = v1109 & 7;
                                v1260 = 0;
                                if ( (v1109 & 7) != 0 )
                                {
                                  v1114 = Srci;
                                  v1115 = 0;
                                  v1116 = 56;
                                  do
                                  {
                                    v1117 = *v1114++;
                                    if ( (int)v84 >= 4 )
                                    {
                                      v1115 |= v1117 << v1116;
                                      v1118 = v1260;
                                    }
                                    else
                                    {
                                      v1118 = (v1117 << (v1116 - 32)) | v1260;
                                      v1260 = v1118;
                                    }
                                    LODWORD(v84) = v84 + 1;
                                    v1116 -= 8;
                                  }
                                  while ( (int)v84 < v1113 );
                                  v1387 = v1115;
                                  lpModuleNameq = v1118 ^ 0x92F65A5;
                                  v1119 = v1115 ^ 0x699A899C;
                                  v1120 = v1118 ^ 0x92F65A5;
                                  v1121 = v1115 ^ 0x699A899C;
                                  v1377 = (SIZE_T)v928;
                                  v1383 = v1066;
                                  v1379 = v927;
                                  v1352 = v926;
                                  v1110 = (int *)v1391;
                                  v83 = v1335;
                                  v1122 = v1391;
                                  v1123 = 0;
                                  do
                                  {
                                    v1319 = (wchar_t *)(v1122 + 1);
                                    if ( v1123 >= 4 )
                                    {
                                      v1121 = __ROL4__(v1121, 8);
                                      v1124 = v1121;
                                    }
                                    else
                                    {
                                      v1120 = __ROL4__(v1120, 8);
                                      v1124 = v1120;
                                    }
                                    *v1122 = v1124;
                                    ++v1123;
                                    ++v1122;
                                  }
                                  while ( v1123 < v1113 );
                                  v1125 = v1319;
                                  v1111 = 0;
                                  v928 = (unsigned int *)v1377;
                                  v1066 = v1383;
                                  v1126 = lpModuleNameq;
                                  v1109 = v1382;
                                  if ( (unsigned int)v1113 > 4 )
                                  {
                                    LODWORD(v84) = v1119 >> (8 * (8 - v1113)) << (8 * (8 - v1113));
                                    v1125 = v1319;
                                    goto LABEL_1498;
                                  }
                                  LODWORD(v84) = 0;
                                  if ( (unsigned int)v1113 >= 4 )
                                  {
LABEL_1498:
                                    v1112 = v1114;
                                  }
                                  else
                                  {
                                    v1112 = v1114;
                                    v1126 = lpModuleNameq >> (8 * (4 - v1113)) << (8 * (4 - v1113));
                                    v1125 = v1319;
                                  }
                                }
                                else
                                {
                                  v1126 = 0;
                                  v1125 = (wchar_t *)v1110;
                                }
                                v1127 = v1109 >> 3;
                                if ( v1109 >> 3 )
                                {
                                  v1128 = HIDWORD(v1582);
                                  v1129 = HIDWORD(v1582) ^ 0xAB69605E;
                                  lpModuleNamer = HIDWORD(v1582) ^ 0xAB69605E;
                                  v1130 = WORD2(v1582);
                                  v1131 = (char *)v1125 + 7;
                                  v1132 = v1112 + 2;
                                  v1133 = v1260;
                                  v1134 = v1127;
                                  do
                                  {
                                    v1135 = v1132[1] | ((*v1132 | ((*(v1132 - 1) | (*(v1132 - 2) << 8)) << 8)) << 8);
                                    v1136 = v1132[5] | ((v1132[4] | ((v1132[3] | (v1132[2] << 8)) << 8)) << 8);
                                    v1137 = v1135 ^ v1126;
                                    v1132 += 8;
                                    v1138 = v1129 ^ v1137 ^ v1136 ^ v84;
                                    v1139 = (__ROL4__(v1138, 10) + v1130 * __ROL4__(v1138 + 1419157410, 5)) ^ v1137;
                                    v1140 = (WORD1(v1582) * __ROR4__(v1128 + v1139, 9) - __ROL4__(v1139, 2)) ^ v1138;
                                    v1141 = (24670 * (v1140 - v1130) - (v1140 >> 13)) ^ v1139;
                                    v1142 = (HIWORD(v1582) * __ROL4__(WORD1(v1582) ^ v1141, 6) - __ROL4__(v1141, 2)) ^ v1140;
                                    v1143 = (v1128 - (v1142 ^ 0xAB69605E)) ^ v1141;
                                    v1144 = (WORD1(v1582) * (v1130 ^ v1143)) ^ __ROR4__(v1143, 6) ^ v1142;
                                    v1145 = (__ROL4__(v1144, 2) + 24670 * __ROR4__(v1128 + v1144, 15)) ^ v1143;
                                    v1146 = (HIWORD(v1582) * __ROR4__(v1145 + 1419157410, 14) - __ROL4__(v1145, 8)) ^ v1144;
                                    v1147 = __ROR4__(v1146, 10) ^ (v1130 * __ROR4__(v1146 ^ 0xAB69605E, 12)) ^ v1145;
                                    v1148 = (v1147 >> 10) ^ (WORD1(v1582) * (HIWORD(v1582) ^ v1147)) ^ v1146;
                                    v1149 = (HIWORD(v1582) * (__ROR4__(~v1148, 5) + 24670)) ^ v1147;
                                    v1150 = v1148 ^ (v1149 - HIWORD(v1582)) ^ 0xAB69605E;
                                    v1151 = ((v1150 >> 2) + v1130 * __ROL4__(HIWORD(v1582) ^ v1150, 2)) ^ v1149;
                                    v1152 = (__ROL4__(v1151, 7) + WORD1(v1582) * __ROR4__(v1151 - v1128, 6)) ^ v1150;
                                    v1153 = (24670 * (v1130 ^ v1152) + __ROR4__(v1152, 9)) ^ v1151;
                                    v1154 = (__ROL4__(v1153, 7) + HIWORD(v1582) * __ROL4__(WORD1(v1582) ^ v1153, 5)) ^ v1152;
                                    v1155 = v1128 ^ v1154 ^ v1153 ^ 0xAB69605E;
                                    v1156 = (v1130 * (__ROR4__(v1155, 3) - WORD1(v1582))) ^ v1154;
                                    v1157 = (24670 * __ROR4__(v1156 - v1128, 1) - __ROR4__(v1156, 6)) ^ v1155;
                                    v1158 = (__ROL4__(v1157, 14) + HIWORD(v1582) * __ROL4__(v1157 - 1419157410, 3)) ^ v1156;
                                    v1159 = (v1130 * __ROL4__(v1158 - 1419157410, 15) - __ROR4__(v1158, 14)) ^ v1157;
                                    v1160 = (v1159 >> 3) ^ (WORD1(v1582) * (v1159 ^ 0x605E)) ^ v1158;
                                    v1161 = v1133 ^ __ROL4__(v1160, 2) ^ (24670 * __ROL4__(v1128 ^ v1160, 4)) ^ v1159;
                                    v1162 = v1387 ^ v1160;
                                    *(v1131 - 4) = v1161;
                                    v1163 = __ROR4__(v1161, 8);
                                    *v1131 = v1162;
                                    v1164 = __ROR4__(v1162, 8);
                                    *(v1131 - 5) = v1163;
                                    v1165 = __ROR4__(v1163, 8);
                                    *(v1131 - 1) = v1164;
                                    v1166 = __ROR4__(v1164, 8);
                                    *(v1131 - 6) = v1165;
                                    v1167 = __ROR4__(v1165, 8);
                                    *(v1131 - 2) = v1166;
                                    v1168 = __ROR4__(v1166, 8);
                                    *(v1131 - 7) = v1167;
                                    *(v1131 - 3) = v1168;
                                    v1126 = __ROR4__(v1167, 8);
                                    LODWORD(v84) = __ROR4__(v1168, 8);
                                    v1133 = v1135;
                                    v1387 = v1136;
                                    v1131 += 8;
                                    --v1134;
                                    v1129 = lpModuleNamer;
                                  }
                                  while ( v1134 );
                                  v1111 = 0;
                                  v83 = v1335;
                                  v927 = v1379;
                                  v928 = (unsigned int *)v1377;
                                  v926 = (WCHAR *)v1352;
                                  v1066 = v1383;
                                  v1110 = (int *)v1391;
                                  v1109 = v1382;
                                }
                                for ( mm = 0LL; mm < v1109; ++mm )
                                  v1111 ^= *((_BYTE *)v1110 + mm);
                                v1377 = v1066;
                                v1170 = v1441;
                                v1383 = v1066;
                                if ( v1111 != *(_QWORD *)&Srci[v1109] )
                                {
                                  MemoryFree(v1110);
                                  v84 = 0LL;
                                  goto LABEL_1510;
                                }
                                v1439 = 0;
                                v1502 = v1110;
                                if ( (unsigned int)v1109 < 4 )
                                {
                                  v1383 = v1066;
                                  goto LABEL_1550;
                                }
                                v1261 = *v1110;
                                v1171 = RtlULongLongAdd((unsigned __int64)v1110, 4LL, (unsigned __int64 *)&v1502);
                                v1391 = v1172;
                                v1441 = v1173;
                                v1383 = v1174;
                                if ( v1171 < 0 )
                                  goto LABEL_1551;
                                v1171 = RtlUIntAdd(0, 4, &v1439);
                                v1391 = v1110;
                                v1441 = v1170;
                                v1383 = v1175;
                                if ( v1171 < 0 )
                                  goto LABEL_1551;
                                if ( (unsigned int)v1382 - v1439 >= 4 )
                                {
                                  lpModuleNames = *(_DWORD *)v1502;
                                  v1171 = RtlULongLongAdd((unsigned __int64)v1502, 4LL, (unsigned __int64 *)&v1502);
                                  v1391 = v1176;
                                  v1441 = v1177;
                                  v1383 = v1178;
                                  if ( v1171 < 0 )
                                    goto LABEL_1551;
                                  v1171 = RtlUIntAdd(v1439, 4, &v1439);
                                  v1391 = v1110;
                                  v1441 = v1170;
                                  v1383 = v1175;
                                  if ( v1171 < 0 )
                                    goto LABEL_1551;
                                  if ( (unsigned int)v1382 - v1439 >= lpModuleNames )
                                  {
                                    v1171 = RtlUIntAdd(v1439, lpModuleNames, &v1439);
                                    v1391 = v1110;
                                    v1441 = v1170;
                                    v1383 = v1175;
                                    if ( v1171 < 0 )
                                      goto LABEL_1551;
                                    if ( (char *)v1110 + (unsigned int)v1382 >= (char *)v1502 + lpModuleNames
                                      && (unsigned __int64)v1110 + (unsigned int)v1382 - (_QWORD)v1502 - lpModuleNames < 8 )
                                    {
                                      v1179 = 0LL;
                                      Srcj = 0LL;
                                      v1171 = 0;
                                      v1320 = 0;
                                      v1391 = v1110;
                                      v1441 = v1170;
                                      v1383 = v1175;
                                      if ( !v1502 )
                                        goto LABEL_1537;
                                      v1382 = (SIZE_T)v1502;
                                      v1171 = RtlULongLongAdd((unsigned __int64)v1502, lpModuleNames, &v1503);
                                      v1391 = v1181;
                                      v1441 = v1183;
                                      v1383 = v1182;
                                      if ( v1171 < 0 )
                                        goto LABEL_1540;
                                      v1391 = v1181;
                                      v1441 = v1183;
                                      v1383 = v1182;
                                      if ( v1180 < v1503 )
                                      {
                                        v1391 = v1181;
                                        v1441 = v1183;
                                        v1184 = v1377;
                                        v1383 = v1377;
                                        while ( 1 )
                                        {
                                          v1171 = RtlULongLongAdd(v1180, 4LL, &v1504);
                                          if ( v1171 < 0 )
                                            break;
                                          if ( v1504 > v1186 )
                                            goto LABEL_1533;
                                          v1171 = RtlUIntAdd(4u, *v1185, &v1451);
                                          if ( v1171 < 0 )
                                            goto LABEL_1551;
                                          v1171 = RtlULongLongAdd(v1382, v1451, &v1505);
                                          v1391 = v1188;
                                          v1441 = v1187;
                                          v1383 = v1184;
                                          if ( v1171 < 0 )
                                            break;
                                          v1180 = v1505;
                                          v1382 = v1505;
                                          v1391 = v1188;
                                          v1441 = v1187;
                                          v1383 = v1184;
                                          if ( v1505 > v1189 )
                                            goto LABEL_1533;
                                          ++v1320;
                                          if ( v1505 >= v1189 )
                                          {
                                            v1391 = v1188;
                                            v1441 = v1187;
                                            v1383 = v1184;
                                            goto LABEL_1535;
                                          }
                                        }
LABEL_1540:
                                        v84 = 0LL;
LABEL_1546:
                                        if ( v1171 >= 0 && v1261 != LODWORD(v1525[0]) )
                                          v1171 = -1073741762;
LABEL_1552:
                                        v939 = v1171 | 0x10000000;
                                        goto LABEL_1359;
                                      }
                                      v1189 = v1503;
LABEL_1535:
                                      if ( v1180 == v1189 )
                                      {
                                        v1179 = 0LL;
LABEL_1537:
                                        v84 = 0LL;
                                        if ( lpModuleNames )
                                        {
                                          v1190 = GetProcessHeap();
                                          v1191 = lpModuleNames;
                                          v1179 = HeapAlloc(v1190, 8u, lpModuleNames);
                                          Srcj = v1179;
                                          v84 = 0LL;
                                          if ( !v1179 )
                                          {
                                            v1171 = -1073741801;
                                            goto LABEL_1552;
                                          }
                                          v1171 = 0;
                                        }
                                        else
                                        {
                                          v1191 = 0LL;
                                        }
                                        if ( v1502 )
                                        {
                                          memcpy_0(v1179, v1502, v1191);
                                          v1179 = Srcj;
                                          v84 = 0LL;
                                        }
                                        v1525[1] = v1179;
                                        LODWORD(v1525[0]) = v1320;
                                        goto LABEL_1546;
                                      }
LABEL_1533:
                                      v1171 = -1073741811;
LABEL_1551:
                                      v84 = 0LL;
                                      goto LABEL_1552;
                                    }
                                  }
                                }
                                v1383 = v1175;
LABEL_1550:
                                v1171 = -1073741762;
                                v1391 = v1110;
                                v1441 = v1170;
                                goto LABEL_1551;
                              }
LABEL_1437:
                              v939 = -805306306;
                            }
                            v1383 = v1066;
                            v927 = v1075;
                            v926 = v1074;
                            goto LABEL_1555;
                          }
LABEL_1430:
                          v939 = -805306306;
                        }
                        v1383 = v1066;
                        v927 = v1075;
                        v926 = v1074;
                      }
LABEL_1359:
                      if ( v926 )
                      {
LABEL_1360:
                        v1037 = GetProcessHeap();
                        HeapFree(v1037, 0, v926);
                        v84 = 0LL;
                      }
                      if ( v927 )
                      {
                        v1038 = (void *)*((_QWORD *)v927 + 1);
                        if ( v1038 )
                        {
                          v1039 = GetProcessHeap();
                          HeapFree(v1039, 0, v1038);
                          *((_QWORD *)v927 + 1) = 0LL;
                        }
                        v1040 = (void *)*((_QWORD *)v927 + 3);
                        if ( v1040 )
                        {
                          v1041 = GetProcessHeap();
                          HeapFree(v1041, 0, v1040);
                          *((_QWORD *)v927 + 3) = 0LL;
                        }
                        v1042 = (void *)*((_QWORD *)v927 + 5);
                        if ( v1042 )
                        {
                          v1043 = GetProcessHeap();
                          HeapFree(v1043, 0, v1042);
                          *((_QWORD *)v927 + 5) = 0LL;
                        }
                        v1044 = GetProcessHeap();
                        HeapFree(v1044, 0, v927);
                        v84 = 0LL;
                      }
                      v1045 = (void *)v1383;
                      if ( v1383 )
                      {
                        v1046 = GetProcessHeap();
                        HeapFree(v1046, 0, v1045);
                        v84 = 0LL;
                      }
                      if ( v928 )
                      {
                        v1047 = GetProcessHeap();
                        HeapFree(v1047, 0, v928);
                        v84 = 0LL;
                      }
                      v1048 = v1441;
                      if ( v1441 )
                      {
                        v1049 = (void *)*((_QWORD *)v1441 + 1);
                        if ( v1049 )
                        {
                          v1050 = GetProcessHeap();
                          HeapFree(v1050, 0, v1049);
                          v1048[1] = 0LL;
                        }
                        v1051 = (void *)v1048[3];
                        if ( v1051 )
                        {
                          v1052 = GetProcessHeap();
                          HeapFree(v1052, 0, v1051);
                          v1048[3] = 0LL;
                        }
                        v1053 = (void *)v1048[5];
                        if ( v1053 )
                        {
                          v1054 = GetProcessHeap();
                          HeapFree(v1054, 0, v1053);
                          v1048[5] = 0LL;
                        }
                        v1055 = GetProcessHeap();
                        HeapFree(v1055, 0, v1048);
                        v84 = 0LL;
                      }
                      v1056 = v1391;
                      if ( v1391 )
                      {
                        v1057 = GetProcessHeap();
                        HeapFree(v1057, 0, v1056);
                        v84 = 0LL;
                      }
                      if ( v939 >= 0 && LODWORD(v1525[0]) && v1525[1] )
                      {
                        v1506[0] = v1525[1];
                        RtlULongLongAdd((unsigned __int64)v1525[1], 4LL, (unsigned __int64 *)v1506);
                      }
                      goto LABEL_1259;
                    }
                  }
                  v939 = -805306367;
                  goto LABEL_1360;
                }
              }
            }
          }
        }
      }
      else
      {
        v920 = (int *)v1515;
        v1496 = (int *)v1515;
        if ( v913 )
        {
          while ( (int)RtlUIntAdd(v903, *v920, &v1430) >= 0
               && (int)RtlULongLongAdd(v921, v1430, (unsigned __int64 *)&v1496) >= 0 )
          {
            v920 = v1496;
            if ( v922 + 1 >= v913 )
              goto LABEL_1274;
          }
          goto LABEL_1259;
        }
LABEL_1274:
        if ( (int)RtlULongLongAdd((unsigned __int64)v920, v903, (unsigned __int64 *)&v1511) >= 0
          && v923 + 3 <= (_DWORD *)((char *)v1515 + HIDWORD(v1514)) )
        {
          *v923 = 8;
          *v1511 = v890;
          goto LABEL_1277;
        }
      }
    }
LABEL_1259:
    v885 = (_QWORD *)v1381;
    goto LABEL_1260;
  }
  v909 = (int *)v1515;
  v1495 = (int *)v1515;
  if ( v908 )
  {
    while ( (int)RtlUIntAdd(v903, *v909, &v1428) >= 0 )
    {
      if ( (int)RtlULongLongAdd(v910, v1428, (unsigned __int64 *)&v1495) < 0 )
        goto LABEL_1260;
      v909 = v1495;
      if ( v911 + 1 >= v908 )
        goto LABEL_1253;
    }
    goto LABEL_1259;
  }
LABEL_1253:
  if ( (int)RtlULongLongAdd((unsigned __int64)v909, v903, (unsigned __int64 *)&v1522) >= 0
    && v912 + 3 <= (_DWORD *)((char *)v1515 + HIDWORD(v1514)) )
  {
    *v912 = 8;
    *v1522 = *v885;
    goto LABEL_1256;
  }
LABEL_1260:
  v149 = v1384;
LABEL_1261:
  v1514 = 0LL;
  v914 = v1515;
  if ( v1515 )
  {
    v915 = GetProcessHeap();
    HeapFree(v915, 0, v914);
    v84 = 0LL;
    v1515 = 0LL;
  }
  v1525[0] = 0LL;
  v916 = v1525[1];
  if ( v1525[1] )
  {
    v917 = GetProcessHeap();
    HeapFree(v917, 0, v916);
    v84 = 0LL;
    v1525[1] = 0LL;
  }
  if ( v149 )
  {
    v918 = GetProcessHeap();
    HeapFree(v918, 0, v149);
    v84 = 0LL;
  }
  if ( v885 )
  {
    v919 = GetProcessHeap();
    HeapFree(v919, 0, v885);
    v84 = 0LL;
  }
LABEL_1269:
  v1382 = v84;
  v1488 = (unsigned int *)v1385;
  v85 = v1408;
  v81 = 4LL;
LABEL_103:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v86 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v86 == 1 )
    {
      v87 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v88 = v81;
      do
      {
        if ( *v87 )
          FreeLibrary(*v87);
        v87 += 3;
        --v88;
      }
      while ( v88 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
      LODWORD(v84) = 0;
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, v84);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1382);
  if ( v83 >= 0 )
  {
    if ( v85 != (_DWORD)v81 )
      goto LABEL_1565;
    v1192 = *v1488;
  }
  else
  {
    switch ( v83 )
    {
      case -805306316:
        v1406 = -1073418222;
        break;
      case -805306139:
      case -1073425151:
        v1406 = -1073418201;
        break;
      case -805306306:
        v1406 = -1073418200;
        break;
      default:
        v1406 = v83;
        if ( v83 == -2147024774 )
LABEL_1565:
          v1406 = -1073418210;
        break;
    }
    v1192 = 3;
  }
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1488);
  if ( v1406 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"internal\\shellcommondesktopbase\\inc\\MeetAndChatHelpers.h",
      (const char *)(unsigned int)v1406);
  return v1192;
}
