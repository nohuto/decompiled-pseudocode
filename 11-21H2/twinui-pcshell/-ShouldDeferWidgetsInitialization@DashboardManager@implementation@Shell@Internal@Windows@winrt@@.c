/*
 * XREFs of ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x1800CB57C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
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

bool winrt::Windows::Internal::Shell::implementation::DashboardManager::ShouldDeferWidgetsInitialization(void)
{
  int v1; // eax
  void *v2; // rsi
  _BYTE *v3; // r15
  _BYTE *v4; // r12
  int v5; // r14d
  int v6; // ecx
  int v7; // ebx
  unsigned __int8 *v8; // r13
  int v9; // r11d
  __int64 v10; // rsi
  int v11; // r10d
  int v12; // r9d
  int v13; // eax
  int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  unsigned int v17; // r8d
  int v18; // r11d
  unsigned int v19; // r8d
  int v20; // r11d
  int v21; // r8d
  unsigned int v22; // r11d
  int v23; // r8d
  int v24; // r11d
  int v25; // r8d
  unsigned int v26; // r11d
  int v27; // edx
  int v28; // r11d
  unsigned int v29; // ebx
  int v30; // r11d
  int v31; // ebx
  int v32; // r11d
  int v33; // ebx
  unsigned int v34; // r11d
  int v35; // ebx
  int v36; // r11d
  int v37; // ebx
  unsigned int v38; // r11d
  int v39; // ebx
  int v40; // edx
  int v41; // eax
  int v42; // ebx
  int v43; // edx
  int v44; // r11d
  int v45; // r11d
  int v46; // ebx
  int v47; // r11d
  int v48; // ebx
  int v49; // r11d
  int v50; // ebx
  unsigned __int64 v51; // rax
  char v52; // cl
  int v53; // r14d
  HANDLE ProcessHeap; // rax
  __int64 v55; // rbx
  HMODULE *v56; // rdi
  const WCHAR *v57; // rdi
  unsigned int v58; // r12d
  __int64 v59; // rax
  const WCHAR *v60; // rdx
  const WCHAR *v61; // rdi
  char *v62; // rbx
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned int v65; // r13d
  unsigned int i; // r15d
  __int64 v67; // rax
  const CHAR *v68; // rdx
  void **ProcAddress; // rdx
  int v70; // eax
  int v71; // esi
  signed int v72; // edi
  __int64 v73; // r14
  __int64 v74; // r9
  wchar_t *j; // rbx
  wchar_t *v76; // r8
  signed int LastError; // eax
  bool v78; // sf
  HDESK (__fastcall *v79)(WARBIRD_DELAY_LOAD *__hidden, unsigned int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v81; // r14
  bool v82; // sf
  __int64 v83; // r9
  wchar_t *k; // rbx
  wchar_t *v85; // r8
  signed int v86; // eax
  HANDLE CurrentProcess; // rax
  int v88; // ebx
  __int64 v89; // r12
  void *v90; // rdi
  int v91; // r15d
  SIZE_T v92; // r11
  int v93; // esi
  int v94; // eax
  __int64 v95; // rbx
  HMODULE *v96; // rdi
  WCHAR *v97; // r13
  HANDLE v98; // rax
  WCHAR *v99; // rax
  WCHAR *v100; // r12
  int v101; // edi
  HANDLE v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // r13
  __int64 v105; // rcx
  int v106; // eax
  __int64 v107; // r10
  int v108; // eax
  int v109; // r9d
  int v110; // eax
  int v111; // r9d
  int v112; // eax
  size_t v113; // rdx
  int v114; // r9d
  int v115; // eax
  int v116; // eax
  int v117; // r9d
  int v118; // eax
  int v119; // r9d
  unsigned int v120; // edi
  HANDLE v121; // rax
  _DWORD *v122; // rax
  _DWORD *v123; // rdi
  _DWORD *v124; // rax
  int v125; // r10d
  int v126; // eax
  int v127; // r10d
  int v128; // eax
  int v129; // r10d
  int v130; // eax
  size_t v131; // rdx
  int v132; // r10d
  _OWORD *v133; // rax
  unsigned int *v134; // rdi
  int v135; // r9d
  unsigned int v136; // r10d
  _QWORD *v137; // rax
  unsigned int *v138; // rdi
  int v139; // r9d
  unsigned int v140; // r10d
  wchar_t **v141; // rax
  unsigned int *v142; // rdi
  int v143; // r9d
  unsigned int v144; // r10d
  unsigned int v145; // r10d
  int v146; // eax
  _DWORD *v147; // rdi
  int v148; // r11d
  int v149; // eax
  __int64 v150; // r9
  void *v151; // rcx
  __int64 v152; // rcx
  int v153; // eax
  int v154; // r10d
  int *v155; // rax
  unsigned int *v156; // rdi
  int v157; // r9d
  unsigned int v158; // r10d
  void *v159; // rbx
  HANDLE v160; // rax
  void *v161; // rbx
  HANDLE v162; // rax
  HANDLE v163; // rax
  HANDLE v164; // rax
  DWORD ModuleFileNameW; // eax
  WCHAR *v166; // r13
  unsigned int *v167; // rdi
  int v168; // r9d
  unsigned int v169; // r10d
  _DWORD *v170; // rax
  __int64 v171; // rcx
  unsigned int v172; // edi
  _DWORD *v173; // rbx
  unsigned __int8 *v174; // r13
  unsigned int v175; // edi
  unsigned int *v176; // r12
  int v177; // r15d
  unsigned int v178; // ecx
  unsigned int v179; // edi
  HANDLE v180; // rax
  char *v181; // rax
  char *v182; // rdi
  unsigned int v183; // r9d
  void *v184; // rcx
  HANDLE v185; // rax
  unsigned __int64 v186; // r15
  unsigned __int8 v187; // al
  unsigned __int64 m; // rcx
  _BYTE *v189; // rcx
  int v190; // r10d
  unsigned __int8 *v191; // rdi
  unsigned int v192; // r9d
  unsigned int v193; // edx
  unsigned int v194; // ecx
  int v195; // r10d
  char v196; // r14
  int v197; // r8d
  _BYTE *v198; // rsi
  unsigned int v199; // r10d
  unsigned int v200; // r8d
  unsigned int v201; // r11d
  unsigned int v202; // ecx
  char v203; // r12
  unsigned __int64 v204; // r11
  _BYTE *v205; // r13
  int v206; // ebx
  int v207; // r14d
  int v208; // r12d
  unsigned __int8 *v209; // rax
  int v210; // r8d
  int v211; // edi
  int v212; // ecx
  int v213; // r8d
  int v214; // edi
  int v215; // r10d
  int v216; // r9d
  int v217; // r10d
  int v218; // r9d
  int v219; // r10d
  unsigned int v220; // r9d
  int v221; // r10d
  int v222; // r9d
  int v223; // r10d
  int v224; // r9d
  int v225; // r10d
  int v226; // r9d
  unsigned int v227; // r10d
  unsigned int v228; // r9d
  int v229; // r10d
  int v230; // r9d
  int v231; // r10d
  int v232; // r9d
  int v233; // r10d
  int v234; // r9d
  int v235; // r10d
  int v236; // r9d
  unsigned int v237; // r10d
  int v238; // r9d
  unsigned int v239; // r10d
  int v240; // r9d
  int v241; // r10d
  int v242; // r9d
  int v243; // r10d
  int v244; // r9d
  int v245; // r10d
  int v246; // r9d
  int v247; // r10d
  HANDLE v248; // rax
  _DWORD *v249; // rax
  _DWORD *v250; // rdi
  int v251; // r15d
  _QWORD *v252; // rdi
  HANDLE v253; // rax
  HANDLE v254; // rax
  HANDLE v255; // rax
  HANDLE v256; // rax
  HANDLE v257; // rax
  __int64 v258; // rdx
  unsigned int v259; // r10d
  int v260; // r15d
  unsigned int v261; // r10d
  HANDLE v262; // rax
  void *v263; // rax
  HANDLE v264; // rax
  _OWORD *v265; // rax
  HANDLE v266; // rax
  _QWORD *v267; // rax
  HANDLE v268; // rax
  HANDLE v269; // rax
  HANDLE v270; // rax
  HANDLE v271; // rax
  unsigned int v272; // edi
  HANDLE v273; // rax
  _DWORD *v274; // rax
  void *v275; // rdi
  void *v276; // rcx
  void *v277; // rcx
  HANDLE v278; // rax
  int v279; // eax
  unsigned int v280; // ecx
  int v281; // r10d
  unsigned int v282; // eax
  LPVOID v283; // r9
  unsigned int v284; // r9d
  int v285; // r11d
  LPVOID v286; // rcx
  unsigned int v287; // r11d
  int v288; // eax
  int v289; // r9d
  unsigned int v290; // r10d
  unsigned int v291; // r10d
  unsigned int v292; // r10d
  unsigned int v293; // r9d
  unsigned int v294; // eax
  int v295; // r15d
  HANDLE v296; // rax
  void *v297; // rdi
  HANDLE v298; // rax
  void *v299; // rdi
  HANDLE v300; // rax
  void *v301; // rdi
  HANDLE v302; // rax
  HANDLE v303; // rax
  void *v304; // rdi
  HANDLE v305; // rax
  HANDLE v306; // rax
  _QWORD *v307; // rdi
  void *v308; // rbx
  HANDLE v309; // rax
  void *v310; // rbx
  HANDLE v311; // rax
  void *v312; // rbx
  HANDLE v313; // rax
  HANDLE v314; // rax
  HANDLE v315; // rax
  unsigned int v316; // edi
  HANDLE v317; // rax
  unsigned int *v318; // rax
  void *v319; // rdi
  FARPROC v320; // rax
  int v321; // eax
  unsigned int v322; // r9d
  unsigned __int8 *v323; // rdx
  _DWORD *v324; // r8
  signed int v325; // eax
  __int64 v326; // rcx
  unsigned int *v327; // r10
  unsigned int *v328; // r11
  SIZE_T v329; // r15
  unsigned int *v330; // rbx
  unsigned int v331; // r11d
  unsigned int *v332; // r10
  unsigned int v333; // ebx
  SIZE_T v334; // r13
  unsigned int v335; // r10d
  HANDLE v336; // rax
  _QWORD *v337; // rax
  _QWORD *v338; // rbx
  HANDLE v339; // rax
  void *v340; // rax
  HANDLE v341; // rax
  void *v342; // rax
  HANDLE v343; // rax
  void *v344; // rax
  int v345; // r15d
  _QWORD *v346; // rax
  HANDLE v347; // rax
  HANDLE v348; // rax
  HANDLE v349; // rax
  HANDLE v350; // rax
  _QWORD *v351; // rax
  unsigned int *v352; // r9
  void *v353; // rbx
  _QWORD *v354; // rdi
  HANDLE v355; // rax
  void *v356; // rbx
  HANDLE v357; // rax
  void *v358; // rbx
  HANDLE v359; // rax
  HANDLE v360; // rax
  unsigned __int64 v361; // r15
  void *v362; // rax
  _DWORD *v363; // r9
  char *v364; // rax
  unsigned __int8 v365; // dl
  _DWORD *v366; // rcx
  unsigned int v367; // r8d
  unsigned int v368; // ecx
  char v369; // r11
  unsigned __int8 *v370; // r14
  int v371; // r15d
  int v372; // edx
  int v373; // r10d
  int v374; // r10d
  int v375; // r11d
  int v376; // esi
  int v377; // ecx
  unsigned int v378; // eax
  _BYTE *v379; // rdi
  char v380; // r10
  unsigned int v381; // r10d
  unsigned __int64 v382; // rdi
  int v383; // r9d
  _BYTE *v384; // r12
  int v385; // esi
  unsigned __int8 *v386; // rbx
  int v387; // r15d
  int v388; // r13d
  unsigned __int64 v389; // rdx
  int v390; // r8d
  int v391; // edi
  int v392; // eax
  int v393; // r8d
  int v394; // r10d
  int v395; // edi
  int v396; // r11d
  int v397; // r10d
  unsigned int v398; // r11d
  int v399; // r10d
  int v400; // r11d
  unsigned int v401; // r10d
  int v402; // r11d
  int v403; // r10d
  int v404; // r11d
  unsigned int v405; // r10d
  int v406; // r11d
  int v407; // r10d
  unsigned int v408; // r11d
  int v409; // r10d
  int v410; // r11d
  int v411; // r10d
  int v412; // r11d
  unsigned int v413; // r10d
  int v414; // r11d
  int v415; // r10d
  int v416; // r11d
  unsigned int v417; // r10d
  int v418; // ecx
  int v419; // r11d
  int v420; // ecx
  int v421; // r10d
  int v422; // r10d
  int v423; // r11d
  int v424; // r10d
  int v425; // r11d
  int v426; // r10d
  int v427; // r11d
  unsigned __int64 n; // rax
  void *v429; // rdi
  void *v430; // r10
  int v431; // eax
  void *v432; // r9
  void *v433; // r10
  int v434; // eax
  _DWORD *v435; // rcx
  void *v436; // r9
  void *v437; // r10
  int v438; // eax
  void *v439; // rcx
  void *v440; // r9
  void *v441; // r10
  void *v442; // r11
  void *v443; // rdx
  void *v444; // r10
  unsigned int *v445; // r10
  unsigned __int64 v446; // r11
  __int64 v447; // r10
  void *v448; // r9
  HANDLE v449; // rax
  size_t v450; // rdi
  LPVOID v451; // rax
  _DWORD *v452; // rbx
  int v453; // r9d
  _DWORD *v454; // rax
  int v455; // ebx
  unsigned int v456; // edi
  int v457; // edi
  _QWORD *v458; // rax
  int *v459; // rcx
  int v460; // edi
  unsigned int v461; // r10d
  int v462; // edi
  int *v463; // rax
  LPVOID v464; // rcx
  int v465; // edi
  unsigned int v466; // r10d
  int v467; // r9d
  int v468; // r11d
  void *v469; // r10
  unsigned int *v470; // rcx
  unsigned int v471; // edi
  unsigned int v472; // r12d
  unsigned int v473; // edi
  unsigned int *v474; // rax
  unsigned int *v475; // rcx
  int v476; // edi
  unsigned int v477; // r13d
  unsigned int v478; // r12d
  unsigned int v479; // edi
  int v480; // eax
  const void *v481; // r10
  size_t v482; // r11
  unsigned int *v483; // rax
  __int64 v484; // rax
  unsigned int v485; // edi
  int v486; // eax
  WCHAR *v487; // r12
  char *v488; // rax
  int v489; // ecx
  _BYTE *v490; // rsi
  unsigned __int8 *v491; // r14
  int v492; // ebx
  __int64 v493; // rdi
  int v494; // r11d
  int v495; // r10d
  int v496; // eax
  int v497; // r11d
  int v498; // ebx
  int v499; // r10d
  unsigned int v500; // r9d
  int v501; // ebx
  unsigned int v502; // r9d
  int v503; // ebx
  int v504; // r9d
  unsigned int v505; // ebx
  int v506; // r9d
  int v507; // ebx
  int v508; // r9d
  unsigned int v509; // ebx
  int v510; // edx
  int v511; // ebx
  unsigned int v512; // r13d
  int v513; // ebx
  int v514; // r13d
  int v515; // ebx
  int v516; // r13d
  unsigned int v517; // ebx
  int v518; // r13d
  int v519; // ebx
  int v520; // r13d
  unsigned int v521; // ebx
  int v522; // r13d
  int v523; // edx
  int v524; // eax
  int v525; // r13d
  unsigned int v526; // edx
  int v527; // ebx
  int v528; // ebx
  int v529; // r13d
  int v530; // ebx
  int v531; // r13d
  int v532; // ebx
  int v533; // r13d
  unsigned __int64 v534; // rax
  char v535; // cl
  WCHAR *v536; // rbx
  const WCHAR *v537; // rdx
  __int64 v538; // rax
  WCHAR *v539; // rbx
  char *v540; // r13
  int v541; // ecx
  __int64 v542; // rdx
  unsigned __int64 v543; // rdx
  unsigned int v544; // eax
  unsigned int v545; // edx
  const CHAR *v546; // r8
  __int64 v547; // rax
  void **v548; // rax
  HANDLE v549; // rax
  HMODULE *v550; // rbx
  __int64 v551; // r12
  int v552; // eax
  WCHAR *v553; // r12
  char *v554; // rax
  int v555; // ecx
  _BYTE *v556; // rsi
  int v557; // ebx
  unsigned __int8 *v558; // r14
  __int64 v559; // rdi
  int v560; // r11d
  int v561; // r10d
  int v562; // eax
  int v563; // r11d
  int v564; // ebx
  int v565; // r10d
  unsigned int v566; // r9d
  int v567; // ebx
  unsigned int v568; // r9d
  int v569; // ebx
  int v570; // r9d
  unsigned int v571; // ebx
  int v572; // r9d
  int v573; // ebx
  int v574; // r9d
  unsigned int v575; // ebx
  int v576; // r9d
  int v577; // ebx
  unsigned int v578; // r13d
  int v579; // ebx
  int v580; // r13d
  int v581; // ebx
  int v582; // r13d
  unsigned int v583; // ebx
  int v584; // r13d
  int v585; // ebx
  int v586; // r13d
  unsigned int v587; // ebx
  int v588; // r13d
  int v589; // edx
  int v590; // eax
  int v591; // r13d
  unsigned int v592; // edx
  int v593; // ebx
  int v594; // ebx
  int v595; // r13d
  int v596; // ebx
  int v597; // r13d
  int v598; // ebx
  int v599; // r13d
  char v600; // cl
  unsigned __int64 v601; // rax
  WCHAR *v602; // rbx
  const WCHAR *v603; // rdx
  __int64 v604; // rax
  WCHAR *v605; // rbx
  HMODULE *v606; // r13
  int v607; // ecx
  __int64 v608; // rdx
  char *v609; // rdx
  unsigned int v610; // eax
  unsigned int v611; // edx
  const CHAR *v612; // r8
  __int64 v613; // rax
  void **v614; // rax
  HANDLE v615; // rax
  HMODULE *v616; // rbx
  __int64 v617; // r12
  __int64 v618; // rbx
  int v619; // r13d
  signed int v620; // eax
  signed int v621; // r12d
  _DWORD *v622; // rdi
  signed int v623; // eax
  _DWORD *v624; // r13
  _DWORD *v625; // rdi
  unsigned int kk; // r14d
  __int64 v627; // rax
  unsigned int v628; // r10d
  unsigned int v629; // r9d
  __int64 v630; // r8
  unsigned int v631; // ecx
  unsigned int *v632; // rdx
  __int64 v633; // rdi
  const wchar_t *v634; // rcx
  __int64 v635; // r8
  const wchar_t **v636; // rdx
  __int64 v637; // rax
  char *v638; // rbx
  unsigned __int64 v639; // r13
  void *v640; // rcx
  signed int v641; // eax
  _BYTE *v642; // r12
  int v643; // ebx
  unsigned __int8 *v644; // r13
  int v645; // r14d
  int v646; // r11d
  int v647; // r10d
  __int64 v648; // rsi
  int v649; // r9d
  int v650; // r8d
  int v651; // eax
  int v652; // r9d
  int v653; // r10d
  int v654; // r8d
  unsigned int v655; // edi
  int v656; // r10d
  unsigned int v657; // edi
  int v658; // r10d
  int v659; // edi
  unsigned int v660; // r10d
  int v661; // edi
  int v662; // r10d
  int v663; // edi
  unsigned int v664; // r10d
  int v665; // edi
  int v666; // r10d
  unsigned int v667; // r11d
  int v668; // r10d
  int v669; // r11d
  int v670; // r10d
  int v671; // r11d
  unsigned int v672; // r10d
  int v673; // r11d
  int v674; // r10d
  int v675; // r11d
  unsigned int v676; // r10d
  int v677; // r11d
  int v678; // ecx
  int v679; // eax
  int v680; // r11d
  int v681; // ecx
  int v682; // r10d
  int v683; // r10d
  int v684; // r11d
  int v685; // r10d
  int v686; // r11d
  int v687; // r10d
  int v688; // r11d
  WCHAR *v689; // rbx
  unsigned __int64 v690; // rax
  __m128i v691; // xmm1
  __m128i v692; // xmm0
  __m128i v693; // xmm0
  __m128i v694; // xmm1
  __m128i v695; // xmm1
  __m128i v696; // xmm1
  WCHAR **v697; // rdx
  __int64 v698; // rdi
  unsigned int jj; // ecx
  __int64 v700; // rax
  void **v701; // rdi
  void **v702; // rbx
  __int16 *v703; // rcx
  WCHAR *v704; // rdx
  unsigned int v705; // r8d
  __int16 v706; // r9
  __int16 *v707; // rcx
  __int64 v708; // rax
  __int64 v709; // r13
  __int64 v710; // rcx
  int v711; // eax
  void *v712; // rax
  __int64 v713; // rcx
  signed int v714; // eax
  signed int v715; // eax
  __int64 v716; // rax
  _WORD *v717; // rdi
  __int64 v718; // rcx
  int v719; // r13d
  unsigned int v720; // edi
  __int64 v721; // r13
  signed int v722; // eax
  int v723; // eax
  __int64 v724; // rax
  signed int v725; // eax
  wchar_t *v726; // rax
  signed int v727; // eax
  int v728; // eax
  __int64 v729; // rax
  signed int v730; // eax
  unsigned int v731; // edx
  int v732; // eax
  unsigned int v733; // r13d
  void *v734; // rdi
  unsigned int v735; // ebx
  void *v736; // rdi
  __int64 v737; // rdi
  bool v738; // sf
  unsigned int v739; // r13d
  int v740; // eax
  __int64 v741; // rax
  bool v742; // sf
  void *v743; // rdi
  __int64 v744; // rbx
  int v745; // eax
  __int64 v746; // rdx
  int v747; // edx
  int v748; // r12d
  int v749; // ebx
  int v750; // edi
  __int64 v751; // rax
  int v752; // edx
  int v753; // ecx
  __int64 v754; // rax
  int v755; // eax
  HMODULE *v756; // rdi
  unsigned int v757; // edi
  int v758; // ebx
  __int64 v759; // rax
  int v760; // eax
  void *v761; // r13
  __int64 v762; // rax
  __int64 v763; // r12
  bool v764; // sf
  bool v765; // zf
  char *v766; // rcx
  __int64 v767; // rax
  __int64 (__fastcall *v768)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v769; // rax
  int v770; // edi
  __int64 v771; // r9
  int v772; // edx
  int v773; // r8d
  int v774; // ecx
  int v775; // r13d
  int v776; // r11d
  char *v777; // rdx
  int v778; // eax
  const WCHAR *v779; // rax
  unsigned __int8 *v780; // r9
  int v781; // edi
  signed __int64 v782; // r10
  int v783; // r8d
  int v784; // edi
  int v785; // edx
  int v786; // edi
  int v787; // edx
  void *v788; // r13
  __int64 v789; // rax
  LPCWSTR v790; // r12
  bool v791; // sf
  char *v792; // rcx
  __int64 v793; // rax
  __int64 (__fastcall *v794)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v795; // rax
  int v796; // eax
  int v797; // r8d
  int v798; // edi
  int v799; // edx
  int v800; // ecx
  int v801; // r13d
  int v802; // r11d
  char *v803; // rdi
  const WCHAR *v804; // rax
  unsigned __int8 *v805; // r9
  signed __int64 v806; // r10
  int nn; // r8d
  int v808; // r8d
  int v809; // ecx
  int v810; // edi
  int v811; // edx
  int v812; // ecx
  int v813; // edi
  int v814; // edx
  int v815; // edi
  int v816; // ecx
  SIZE_T v817; // rdi
  LPVOID v818; // r12
  char v819; // al
  unsigned int v820; // ebx
  int v821; // edx
  int v822; // edi
  int v823; // r13d
  int v824; // edi
  int v825; // r13d
  __int64 v826; // rax
  void *v827; // r12
  __int64 v828; // rax
  signed int v829; // r12d
  int v830; // edi
  __int64 v831; // rax
  bool v832; // sf
  int v833; // eax
  __int64 v834; // rcx
  __int64 v835; // rax
  __int64 (__fastcall *v836)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v837; // rax
  LPCWSTR v838; // rdi
  int v839; // r10d
  int v840; // r9d
  int v841; // r8d
  int v842; // ecx
  int v843; // edx
  int v844; // r11d
  int v845; // r14d
  __int64 v846; // rdx
  __int64 v847; // rax
  unsigned __int8 *v848; // r9
  int v849; // edi
  __int64 v850; // r10
  int v851; // r8d
  int v852; // edi
  int v853; // edx
  int v854; // edi
  int v855; // edx
  void *v856; // rdi
  __int64 v857; // rax
  __int64 v858; // rdi
  signed int v859; // r12d
  int v860; // r13d
  SIZE_T v861; // rax
  bool v862; // sf
  int v863; // eax
  SIZE_T v864; // rcx
  __int64 v865; // rax
  __int64 (__fastcall *v866)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v867; // rax
  int v868; // eax
  int v869; // edx
  int v870; // r8d
  int v871; // r9d
  int v872; // ecx
  __int64 v873; // r10
  int v874; // r13d
  int v875; // r11d
  unsigned __int8 *v876; // rdx
  const WCHAR *v877; // rax
  unsigned __int8 *v878; // r9
  signed __int64 v879; // r10
  int mm; // edi
  int v881; // r8d
  int v882; // edi
  int v883; // edx
  int v884; // edi
  int v885; // edx
  __int64 v886; // rcx
  __int64 v887; // rcx
  __int64 v888; // rcx
  int v889; // eax
  HMODULE *v890; // rdi
  int v891; // eax
  WCHAR *v892; // r12
  char *v893; // rax
  int v894; // r12d
  _BYTE *v895; // rsi
  int v896; // r11d
  unsigned __int8 *v897; // r13
  __int64 v898; // rcx
  int v899; // r14d
  int v900; // r10d
  int v901; // r9d
  int v902; // eax
  int v903; // r10d
  int v904; // r11d
  int v905; // r9d
  int v906; // r8d
  int v907; // r11d
  unsigned int v908; // r8d
  int v909; // r11d
  int v910; // r8d
  unsigned int v911; // r11d
  int v912; // r8d
  int v913; // r11d
  int v914; // r8d
  unsigned int v915; // r11d
  int v916; // r8d
  int v917; // r11d
  unsigned int v918; // ebx
  int v919; // r11d
  int v920; // ebx
  int v921; // r11d
  int v922; // ebx
  unsigned int v923; // r11d
  int v924; // ebx
  int v925; // r11d
  int v926; // ebx
  unsigned int v927; // r11d
  int v928; // ebx
  int v929; // edx
  int v930; // eax
  int v931; // ebx
  int v932; // edx
  int v933; // r11d
  int v934; // r11d
  int v935; // ebx
  int v936; // r11d
  int v937; // ebx
  int v938; // r11d
  int v939; // ebx
  char v940; // cl
  unsigned __int64 v941; // rax
  int v942; // r13d
  HANDLE v943; // rax
  HMODULE *v944; // rdi
  __int64 v945; // rbx
  HMODULE *v946; // rdi
  WCHAR *v947; // rdi
  const WCHAR *v948; // rdx
  __int64 v949; // rax
  WCHAR *v950; // rdi
  char *v951; // rbx
  __int64 v952; // rcx
  unsigned __int64 v953; // rcx
  unsigned int v954; // eax
  unsigned int v955; // ecx
  const CHAR *v956; // rdx
  __int64 v957; // rax
  void **v958; // rax
  __int64 v959; // rbx
  int v960; // eax
  _QWORD *v961; // r12
  HANDLE v962; // rax
  WCHAR *v963; // rax
  WCHAR *v964; // rbx
  HANDLE v965; // rax
  _QWORD *v966; // rax
  unsigned __int64 v967; // r13
  int v968; // eax
  int v969; // r9d
  int v970; // eax
  int v971; // r9d
  int v972; // eax
  int v973; // r9d
  unsigned int v974; // edi
  HANDLE v975; // rax
  _DWORD *v976; // rax
  _DWORD *v977; // rdi
  _DWORD *v978; // rax
  __int64 v979; // rcx
  int v980; // r10d
  __int64 v981; // rbx
  _DWORD *v982; // rdi
  int v983; // r9d
  unsigned int v984; // r10d
  _OWORD *v985; // rax
  __int128 v986; // xmm1
  unsigned int v987; // edi
  unsigned int *v988; // r9
  __int64 v989; // r9
  int v990; // r10d
  _DWORD *v991; // r9
  _QWORD *v992; // rax
  unsigned int v993; // edi
  void *v994; // rdi
  HANDLE v995; // rax
  void *v996; // rdi
  HANDLE v997; // rax
  HANDLE v998; // rax
  HANDLE v999; // rax
  unsigned int *v1000; // r9
  __int64 v1001; // r9
  int v1002; // r10d
  _DWORD *v1003; // r9
  unsigned __int64 *v1004; // rax
  __int64 v1005; // rcx
  unsigned int v1006; // edi
  const void **v1007; // rbx
  WCHAR *v1008; // r13
  unsigned int *v1009; // r12
  int v1010; // edi
  unsigned int v1011; // r9d
  unsigned int v1012; // ecx
  unsigned int v1013; // edi
  HANDLE v1014; // rax
  _DWORD *v1015; // rax
  unsigned int v1016; // r10d
  void *v1017; // rcx
  __int64 v1018; // r9
  HANDLE v1019; // rax
  int v1020; // edi
  unsigned __int64 v1021; // rdi
  unsigned __int8 v1022; // al
  unsigned __int64 v1023; // rcx
  char *v1024; // rcx
  unsigned int v1025; // r10d
  int v1026; // r9d
  WCHAR *v1027; // rdi
  SIZE_T v1028; // r11
  int v1029; // edx
  int v1030; // ecx
  int v1031; // r9d
  char v1032; // si
  int v1033; // r8d
  _BYTE *v1034; // r14
  unsigned int v1035; // r9d
  unsigned int v1036; // ecx
  unsigned int v1037; // r8d
  int v1038; // r12d
  char v1039; // bl
  SIZE_T v1040; // rdx
  _BYTE *v1041; // r11
  int v1042; // r12d
  unsigned __int8 *v1043; // r13
  int v1044; // r15d
  SIZE_T v1045; // r14
  int v1046; // eax
  int v1047; // r8d
  int v1048; // edi
  int v1049; // ecx
  int v1050; // r8d
  int v1051; // edi
  int v1052; // r9d
  int v1053; // r10d
  int v1054; // edx
  int v1055; // r10d
  int v1056; // r9d
  int v1057; // r10d
  int v1058; // r9d
  unsigned int v1059; // r10d
  int v1060; // r9d
  int v1061; // r10d
  int v1062; // r9d
  int v1063; // r10d
  int v1064; // r9d
  int v1065; // r10d
  unsigned int v1066; // r9d
  unsigned int v1067; // r10d
  int v1068; // r9d
  int v1069; // r10d
  int v1070; // r9d
  int v1071; // r10d
  int v1072; // r9d
  int v1073; // r10d
  int v1074; // r9d
  int v1075; // r10d
  unsigned int v1076; // r9d
  int v1077; // r10d
  int v1078; // r9d
  int v1079; // r10d
  int v1080; // r9d
  unsigned int v1081; // r9d
  int v1082; // r10d
  int v1083; // r9d
  int v1084; // r10d
  int v1085; // r9d
  int v1086; // r10d
  int v1087; // r9d
  const void *v1088; // rdi
  HANDLE v1089; // rax
  unsigned int *v1090; // rsi
  int v1091; // edi
  _QWORD *v1092; // rsi
  HANDLE v1093; // rax
  HANDLE v1094; // rax
  HANDLE v1095; // rax
  HANDLE v1096; // rax
  HANDLE v1097; // rax
  __int64 v1098; // rdx
  int v1099; // edi
  unsigned int v1100; // r9d
  unsigned int v1101; // r9d
  HANDLE v1102; // rax
  void *v1103; // rax
  HANDLE v1104; // rax
  _OWORD *v1105; // rax
  HANDLE v1106; // rax
  _QWORD *v1107; // rax
  HANDLE v1108; // rax
  HANDLE v1109; // rax
  HANDLE v1110; // rax
  HANDLE v1111; // rax
  unsigned int v1112; // edi
  HANDLE v1113; // rax
  _DWORD *v1114; // rax
  void *v1115; // rsi
  void *v1116; // rcx
  void *v1117; // rcx
  int v1118; // eax
  int v1119; // esi
  HANDLE v1120; // rax
  int v1121; // eax
  unsigned int v1122; // ecx
  SIZE_T v1123; // r9
  unsigned int v1124; // eax
  HANDLE v1125; // rax
  void *v1126; // rsi
  HANDLE v1127; // rax
  void *v1128; // rsi
  HANDLE v1129; // rax
  void *v1130; // rsi
  HANDLE v1131; // rax
  HANDLE v1132; // rax
  void *v1133; // rbx
  HANDLE v1134; // rax
  HANDLE v1135; // rax
  _QWORD *v1136; // rbx
  void *v1137; // rsi
  HANDLE v1138; // rax
  void *v1139; // rsi
  HANDLE v1140; // rax
  void *v1141; // rsi
  HANDLE v1142; // rax
  HANDLE v1143; // rax
  HANDLE v1144; // rax
  unsigned int v1145; // r10d
  SIZE_T v1146; // r9
  unsigned int *v1147; // rcx
  unsigned int v1148; // esi
  int v1149; // r10d
  unsigned int v1150; // r11d
  int v1151; // eax
  unsigned int v1152; // r10d
  unsigned int v1153; // eax
  SIZE_T v1154; // rsi
  unsigned int v1155; // edi
  HANDLE v1156; // rax
  unsigned int *v1157; // rax
  FARPROC v1158; // rax
  int v1159; // eax
  unsigned int v1160; // r9d
  WCHAR *v1161; // rdx
  const void **v1162; // r8
  signed int v1163; // eax
  __int64 v1164; // rcx
  unsigned int *v1165; // rdi
  unsigned int *v1166; // r11
  SIZE_T v1167; // rbx
  unsigned int *v1168; // rdi
  unsigned int v1169; // r11d
  unsigned int v1170; // r10d
  SIZE_T v1171; // r13
  unsigned int v1172; // edi
  HANDLE v1173; // rax
  _QWORD *v1174; // rax
  _DWORD *v1175; // rdi
  HANDLE v1176; // rax
  void *v1177; // rax
  HANDLE v1178; // rax
  void *v1179; // rax
  HANDLE v1180; // rax
  void *v1181; // rax
  int v1182; // edi
  _QWORD *v1183; // rax
  HANDLE v1184; // rax
  HANDLE v1185; // rax
  HANDLE v1186; // rax
  HANDLE v1187; // rax
  _QWORD *v1188; // rax
  unsigned int *v1189; // r9
  void *v1190; // rbx
  _QWORD *v1191; // rdi
  HANDLE v1192; // rax
  void *v1193; // rbx
  HANDLE v1194; // rax
  void *v1195; // rbx
  HANDLE v1196; // rax
  HANDLE v1197; // rax
  SIZE_T v1198; // rdi
  wchar_t *v1199; // rax
  wchar_t *v1200; // r9
  unsigned __int8 *v1201; // rax
  unsigned __int8 v1202; // dl
  int v1203; // r8d
  char v1204; // r15
  unsigned __int8 *v1205; // r14
  int v1206; // r9d
  int v1207; // r10d
  int v1208; // ecx
  int v1209; // r11d
  unsigned int v1210; // r11d
  int v1211; // edi
  int v1212; // ecx
  unsigned int v1213; // edx
  _BYTE *v1214; // rax
  char v1215; // si
  wchar_t *v1216; // rcx
  unsigned int v1217; // r10d
  SIZE_T v1218; // r8
  int v1219; // esi
  _BYTE *v1220; // rbx
  unsigned __int8 *v1221; // r13
  int v1222; // edx
  unsigned int v1223; // edi
  SIZE_T v1224; // r12
  int v1225; // r15d
  int v1226; // r9d
  int v1227; // r8d
  int v1228; // eax
  int v1229; // r9d
  int v1230; // r10d
  int v1231; // r8d
  int v1232; // edi
  int v1233; // r10d
  unsigned int v1234; // edi
  int v1235; // r10d
  int v1236; // edi
  unsigned int v1237; // r10d
  int v1238; // edi
  int v1239; // r10d
  int v1240; // edi
  unsigned int v1241; // r10d
  int v1242; // edi
  int v1243; // r10d
  unsigned int v1244; // r11d
  int v1245; // r10d
  int v1246; // r11d
  int v1247; // r10d
  int v1248; // r11d
  unsigned int v1249; // r10d
  int v1250; // r11d
  int v1251; // r10d
  int v1252; // r11d
  unsigned int v1253; // r10d
  int v1254; // eax
  int v1255; // r11d
  int v1256; // ecx
  int v1257; // r10d
  int v1258; // r10d
  int v1259; // r11d
  int v1260; // r10d
  int v1261; // r11d
  int v1262; // r10d
  int v1263; // r11d
  SIZE_T i2; // rax
  void *v1265; // r11
  int v1266; // eax
  void *v1267; // r9
  int v1268; // edi
  void *v1269; // r11
  SIZE_T v1270; // r10
  int v1271; // eax
  SIZE_T v1272; // r10
  int v1273; // eax
  void *v1274; // r9
  void *v1275; // r11
  SIZE_T v1276; // r10
  int v1277; // eax
  int v1278; // eax
  void *v1279; // rcx
  void *v1280; // r9
  SIZE_T v1281; // r10
  void *v1282; // r11
  SIZE_T v1283; // r14
  SIZE_T v1284; // rsi
  SIZE_T v1285; // r11
  unsigned int *v1286; // r11
  __int64 v1287; // r11
  void *v1288; // r9
  void *v1289; // r10
  HANDLE v1290; // rax
  size_t v1291; // rsi
  LPVOID v1292; // rax
  unsigned __int8 v1293; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1294; // [rsp+60h] [rbp-A0h]
  int v1295; // [rsp+64h] [rbp-9Ch]
  unsigned int v1296; // [rsp+64h] [rbp-9Ch]
  int v1297; // [rsp+64h] [rbp-9Ch]
  unsigned int v1298; // [rsp+64h] [rbp-9Ch]
  int v1299; // [rsp+64h] [rbp-9Ch]
  unsigned int v1300; // [rsp+64h] [rbp-9Ch]
  unsigned int v1301; // [rsp+64h] [rbp-9Ch]
  unsigned int v1302; // [rsp+64h] [rbp-9Ch]
  int v1303; // [rsp+64h] [rbp-9Ch]
  int v1304; // [rsp+64h] [rbp-9Ch]
  int v1305; // [rsp+64h] [rbp-9Ch]
  int v1306; // [rsp+64h] [rbp-9Ch]
  unsigned int v1307; // [rsp+68h] [rbp-98h]
  int v1308; // [rsp+68h] [rbp-98h]
  int v1309; // [rsp+68h] [rbp-98h]
  unsigned int v1310; // [rsp+68h] [rbp-98h]
  unsigned int v1311; // [rsp+68h] [rbp-98h]
  unsigned int v1312; // [rsp+68h] [rbp-98h]
  int v1313; // [rsp+68h] [rbp-98h]
  int v1314; // [rsp+68h] [rbp-98h]
  int v1315; // [rsp+68h] [rbp-98h]
  unsigned int v1316; // [rsp+68h] [rbp-98h]
  unsigned int v1317; // [rsp+68h] [rbp-98h]
  char v1318; // [rsp+68h] [rbp-98h]
  int v1319; // [rsp+6Ch] [rbp-94h]
  int v1320; // [rsp+6Ch] [rbp-94h]
  unsigned int v1321; // [rsp+6Ch] [rbp-94h]
  unsigned int v1322; // [rsp+6Ch] [rbp-94h]
  int v1323; // [rsp+6Ch] [rbp-94h]
  int v1324; // [rsp+6Ch] [rbp-94h]
  int v1325; // [rsp+6Ch] [rbp-94h]
  int v1326; // [rsp+6Ch] [rbp-94h]
  wchar_t *v1327; // [rsp+70h] [rbp-90h]
  wchar_t *v1328; // [rsp+70h] [rbp-90h]
  wchar_t *v1329; // [rsp+70h] [rbp-90h]
  wchar_t *v1330; // [rsp+70h] [rbp-90h]
  wchar_t *v1331; // [rsp+70h] [rbp-90h]
  wchar_t *v1332; // [rsp+70h] [rbp-90h]
  wchar_t *v1333; // [rsp+70h] [rbp-90h]
  wchar_t *v1334; // [rsp+70h] [rbp-90h]
  int v1335; // [rsp+70h] [rbp-90h]
  int v1336; // [rsp+70h] [rbp-90h]
  int v1337; // [rsp+70h] [rbp-90h]
  unsigned int v1338; // [rsp+70h] [rbp-90h]
  unsigned int v1339; // [rsp+70h] [rbp-90h]
  unsigned int v1340; // [rsp+70h] [rbp-90h]
  unsigned int v1341; // [rsp+70h] [rbp-90h]
  int v1342; // [rsp+70h] [rbp-90h]
  int v1343; // [rsp+70h] [rbp-90h]
  __int64 lpModuleName; // [rsp+78h] [rbp-88h]
  LPCWSTR lpModuleNamea; // [rsp+78h] [rbp-88h]
  LPCWSTR lpModuleNameb; // [rsp+78h] [rbp-88h]
  LPCWSTR lpModuleNamec; // [rsp+78h] [rbp-88h]
  LPCWSTR lpModuleNamed; // [rsp+78h] [rbp-88h]
  int lpModuleNamee; // [rsp+78h] [rbp-88h]
  int lpModuleNamef; // [rsp+78h] [rbp-88h]
  int lpModuleNameg; // [rsp+78h] [rbp-88h]
  int lpModuleNameh; // [rsp+78h] [rbp-88h]
  int lpModuleNamei; // [rsp+78h] [rbp-88h]
  unsigned int lpModuleNamej; // [rsp+78h] [rbp-88h]
  int lpModuleNamek; // [rsp+78h] [rbp-88h]
  LPCWSTR lpModuleNamel; // [rsp+78h] [rbp-88h]
  int lpModuleNamem; // [rsp+78h] [rbp-88h]
  int lpModuleNamen; // [rsp+78h] [rbp-88h]
  unsigned int lpModuleNameo; // [rsp+78h] [rbp-88h]
  unsigned int lpModuleNamep; // [rsp+78h] [rbp-88h]
  unsigned int lpModuleNameq; // [rsp+78h] [rbp-88h]
  SIZE_T v1362; // [rsp+80h] [rbp-80h]
  SIZE_T v1363; // [rsp+80h] [rbp-80h]
  void *v1364; // [rsp+80h] [rbp-80h]
  void *v1365; // [rsp+80h] [rbp-80h]
  void *v1366; // [rsp+80h] [rbp-80h]
  void *v1367; // [rsp+80h] [rbp-80h]
  void *v1368; // [rsp+80h] [rbp-80h]
  void *v1369; // [rsp+80h] [rbp-80h]
  SIZE_T v1370; // [rsp+80h] [rbp-80h]
  void *v1371; // [rsp+80h] [rbp-80h]
  void *v1372; // [rsp+80h] [rbp-80h]
  void *v1373; // [rsp+80h] [rbp-80h]
  SIZE_T v1374; // [rsp+80h] [rbp-80h]
  void *v1375; // [rsp+80h] [rbp-80h]
  SIZE_T v1376; // [rsp+80h] [rbp-80h]
  int v1377; // [rsp+88h] [rbp-78h]
  int v1378; // [rsp+88h] [rbp-78h]
  unsigned int v1379; // [rsp+88h] [rbp-78h]
  int v1380; // [rsp+88h] [rbp-78h]
  unsigned int v1381; // [rsp+88h] [rbp-78h]
  int v1382; // [rsp+88h] [rbp-78h]
  int v1383; // [rsp+88h] [rbp-78h]
  int v1384; // [rsp+88h] [rbp-78h]
  unsigned __int8 *v1385; // [rsp+90h] [rbp-70h]
  void *v1386; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v1387; // [rsp+90h] [rbp-70h]
  void *v1388; // [rsp+90h] [rbp-70h]
  char *v1389; // [rsp+90h] [rbp-70h]
  char *v1390; // [rsp+90h] [rbp-70h]
  char *v1391; // [rsp+90h] [rbp-70h]
  char *v1392; // [rsp+90h] [rbp-70h]
  int v1393; // [rsp+90h] [rbp-70h]
  __int64 v1394; // [rsp+90h] [rbp-70h]
  unsigned int i1; // [rsp+90h] [rbp-70h]
  int v1396; // [rsp+90h] [rbp-70h]
  int v1397; // [rsp+98h] [rbp-68h]
  int v1398; // [rsp+98h] [rbp-68h]
  unsigned int v1399; // [rsp+98h] [rbp-68h]
  unsigned int v1400; // [rsp+98h] [rbp-68h]
  int v1401; // [rsp+98h] [rbp-68h]
  LPCWSTR v1402; // [rsp+A0h] [rbp-60h]
  WCHAR *v1403; // [rsp+A0h] [rbp-60h]
  const wchar_t *v1404; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1405; // [rsp+A0h] [rbp-60h]
  int v1406; // [rsp+A0h] [rbp-60h]
  int v1407; // [rsp+A0h] [rbp-60h]
  int v1408; // [rsp+A0h] [rbp-60h]
  int v1409; // [rsp+A0h] [rbp-60h]
  unsigned int v1410; // [rsp+A0h] [rbp-60h]
  int v1411; // [rsp+A0h] [rbp-60h]
  int v1412; // [rsp+A0h] [rbp-60h]
  _BYTE *Src; // [rsp+A8h] [rbp-58h]
  _DWORD *Srca; // [rsp+A8h] [rbp-58h]
  char *Srcb; // [rsp+A8h] [rbp-58h]
  LPVOID Srcc; // [rsp+A8h] [rbp-58h]
  LPVOID Srcd; // [rsp+A8h] [rbp-58h]
  LPVOID Srce; // [rsp+A8h] [rbp-58h]
  _QWORD *Srcf; // [rsp+A8h] [rbp-58h]
  char *Srcg; // [rsp+A8h] [rbp-58h]
  void *Srch; // [rsp+A8h] [rbp-58h]
  void *Srci; // [rsp+A8h] [rbp-58h]
  void *Srcj; // [rsp+A8h] [rbp-58h]
  int v1424; // [rsp+B0h] [rbp-50h]
  int v1425; // [rsp+B0h] [rbp-50h]
  int v1426; // [rsp+B0h] [rbp-50h]
  unsigned int v1427; // [rsp+B0h] [rbp-50h]
  int v1428; // [rsp+B0h] [rbp-50h]
  unsigned int v1429; // [rsp+B0h] [rbp-50h]
  int v1430; // [rsp+B0h] [rbp-50h]
  int v1431; // [rsp+B0h] [rbp-50h]
  int v1432; // [rsp+B0h] [rbp-50h]
  int v1433; // [rsp+B0h] [rbp-50h]
  __int64 v1434; // [rsp+B0h] [rbp-50h]
  unsigned int Size; // [rsp+B8h] [rbp-48h]
  void *Sizea; // [rsp+B8h] [rbp-48h]
  SIZE_T Sizeb; // [rsp+B8h] [rbp-48h]
  void *Sizec; // [rsp+B8h] [rbp-48h]
  SIZE_T Sized; // [rsp+B8h] [rbp-48h]
  void *Sizee; // [rsp+B8h] [rbp-48h]
  SIZE_T Sizef; // [rsp+B8h] [rbp-48h]
  void *Sizeg; // [rsp+B8h] [rbp-48h]
  SIZE_T Sizeh; // [rsp+B8h] [rbp-48h]
  _QWORD *Sizei; // [rsp+B8h] [rbp-48h]
  SIZE_T Sizej; // [rsp+B8h] [rbp-48h]
  SIZE_T Sizek; // [rsp+B8h] [rbp-48h]
  SIZE_T Sizel; // [rsp+B8h] [rbp-48h]
  LPCWSTR v1448; // [rsp+C0h] [rbp-40h]
  LPCWSTR v1449; // [rsp+C0h] [rbp-40h]
  LPCWSTR v1450; // [rsp+C0h] [rbp-40h]
  WCHAR *v1451; // [rsp+C0h] [rbp-40h]
  LPCWSTR v1452; // [rsp+C0h] [rbp-40h]
  WCHAR *v1453; // [rsp+C0h] [rbp-40h]
  WCHAR *v1454; // [rsp+C0h] [rbp-40h]
  WCHAR *v1455; // [rsp+C0h] [rbp-40h]
  WCHAR *v1456; // [rsp+C0h] [rbp-40h]
  WCHAR *v1457; // [rsp+C0h] [rbp-40h]
  WCHAR *v1458; // [rsp+C0h] [rbp-40h]
  LPCWSTR v1459; // [rsp+C0h] [rbp-40h]
  wchar_t *v1460; // [rsp+C8h] [rbp-38h]
  wchar_t *v1461; // [rsp+C8h] [rbp-38h]
  wchar_t *v1462; // [rsp+C8h] [rbp-38h]
  wchar_t *v1463; // [rsp+C8h] [rbp-38h]
  wchar_t *v1464; // [rsp+C8h] [rbp-38h]
  int v1465; // [rsp+C8h] [rbp-38h]
  unsigned int v1466; // [rsp+C8h] [rbp-38h]
  unsigned int v1467; // [rsp+C8h] [rbp-38h]
  int v1468; // [rsp+C8h] [rbp-38h]
  wchar_t *v1469; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1470; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1471; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1472; // [rsp+D0h] [rbp-30h]
  WCHAR *v1473; // [rsp+D0h] [rbp-30h]
  WCHAR *v1474; // [rsp+D0h] [rbp-30h]
  WCHAR *v1475; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1476; // [rsp+D0h] [rbp-30h]
  LPCWSTR v1477; // [rsp+D0h] [rbp-30h]
  int v1478; // [rsp+D0h] [rbp-30h]
  int v1479; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v1480; // [rsp+D8h] [rbp-28h]
  _BYTE *v1481; // [rsp+D8h] [rbp-28h]
  void *v1482; // [rsp+D8h] [rbp-28h]
  unsigned int ii; // [rsp+D8h] [rbp-28h]
  unsigned int v1484; // [rsp+D8h] [rbp-28h]
  unsigned int v1485; // [rsp+D8h] [rbp-28h]
  unsigned int v1486; // [rsp+D8h] [rbp-28h]
  unsigned int v1487; // [rsp+E0h] [rbp-20h] BYREF
  LPVOID v1488; // [rsp+E8h] [rbp-18h]
  SIZE_T v1489; // [rsp+F0h] [rbp-10h]
  __int64 v1490; // [rsp+F8h] [rbp-8h]
  LPVOID v1491; // [rsp+100h] [rbp+0h]
  __int64 v1492; // [rsp+108h] [rbp+8h]
  SIZE_T v1493; // [rsp+110h] [rbp+10h] BYREF
  WCHAR *v1494; // [rsp+118h] [rbp+18h]
  SIZE_T v1495; // [rsp+120h] [rbp+20h]
  void *v1496; // [rsp+128h] [rbp+28h]
  unsigned int *v1497; // [rsp+130h] [rbp+30h]
  int v1498; // [rsp+138h] [rbp+38h] BYREF
  int v1499; // [rsp+13Ch] [rbp+3Ch]
  unsigned int v1500; // [rsp+140h] [rbp+40h] BYREF
  LPVOID v1501; // [rsp+148h] [rbp+48h]
  unsigned int v1502; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1503; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1504; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v1505; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1506; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1507; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1508; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1509; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1510; // [rsp+170h] [rbp+70h] BYREF
  SIZE_T v1511; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1512; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1513; // [rsp+180h] [rbp+80h] BYREF
  SIZE_T v1514; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1515; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1516; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v1517; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1518; // [rsp+19Ch] [rbp+9Ch] BYREF
  int v1519; // [rsp+1A0h] [rbp+A0h]
  int v1520; // [rsp+1A4h] [rbp+A4h]
  LPVOID v1521; // [rsp+1A8h] [rbp+A8h]
  unsigned int v1522; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1523; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1524; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int dwBytes; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int dwBytes_4; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1527; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1528; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1529; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1530; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1531; // [rsp+1D4h] [rbp+D4h] BYREF
  unsigned int v1532; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1533; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1534; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1535; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1536; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1537; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1538; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1539; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1540; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1541; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1542; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1543; // [rsp+204h] [rbp+104h] BYREF
  unsigned int v1544; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1545; // [rsp+20Ch] [rbp+10Ch] BYREF
  SIZE_T v1546; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1547; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1548; // [rsp+21Ch] [rbp+11Ch] BYREF
  SIZE_T v1549; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1550; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1551; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1552; // [rsp+234h] [rbp+134h] BYREF
  int v1553; // [rsp+238h] [rbp+138h]
  unsigned int v1554; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1555; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1556; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1557; // [rsp+248h] [rbp+148h] BYREF
  LPVOID v1558; // [rsp+250h] [rbp+150h]
  unsigned int v1559; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1560; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1561; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v1562; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1563; // [rsp+268h] [rbp+168h] BYREF
  wchar_t *v1564; // [rsp+270h] [rbp+170h] BYREF
  wchar_t *v1565; // [rsp+278h] [rbp+178h] BYREF
  size_t pcchLength; // [rsp+280h] [rbp+180h] BYREF
  unsigned int *v1567; // [rsp+288h] [rbp+188h] BYREF
  unsigned int *v1568; // [rsp+290h] [rbp+190h] BYREF
  unsigned int *v1569; // [rsp+298h] [rbp+198h] BYREF
  size_t v1570; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD *v1571; // [rsp+2A8h] [rbp+1A8h] BYREF
  unsigned int *v1572; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int *v1573; // [rsp+2B8h] [rbp+1B8h] BYREF
  void *v1574[5]; // [rsp+2C0h] [rbp+1C0h] BYREF
  void *v1575; // [rsp+2E8h] [rbp+1E8h] BYREF
  unsigned int *v1576; // [rsp+2F0h] [rbp+1F0h] BYREF
  LPVOID v1577; // [rsp+2F8h] [rbp+1F8h] BYREF
  HMODULE phModule; // [rsp+300h] [rbp+200h] BYREF
  void *v1579; // [rsp+308h] [rbp+208h] BYREF
  unsigned __int64 v1580; // [rsp+310h] [rbp+210h] BYREF
  unsigned __int64 v1581; // [rsp+318h] [rbp+218h] BYREF
  void *v1582; // [rsp+320h] [rbp+220h] BYREF
  _DWORD *v1583; // [rsp+328h] [rbp+228h] BYREF
  _DWORD *v1584; // [rsp+330h] [rbp+230h] BYREF
  int *v1585; // [rsp+338h] [rbp+238h] BYREF
  LPVOID v1586; // [rsp+340h] [rbp+240h] BYREF
  unsigned int *v1587; // [rsp+348h] [rbp+248h] BYREF
  unsigned int *v1588; // [rsp+350h] [rbp+250h] BYREF
  SIZE_T v1589[3]; // [rsp+358h] [rbp+258h] BYREF
  void **v1590; // [rsp+370h] [rbp+270h] BYREF
  _DWORD *v1591; // [rsp+388h] [rbp+288h] BYREF
  WCHAR *v1592; // [rsp+390h] [rbp+290h] BYREF
  __int64 v1593; // [rsp+398h] [rbp+298h]
  void **v1594; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v1595; // [rsp+3A8h] [rbp+2A8h] BYREF
  _DWORD *v1596; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v1597; // [rsp+3B8h] [rbp+2B8h]
  __int64 v1598; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v1599; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v1600; // [rsp+3D0h] [rbp+2D0h] BYREF
  int *v1601; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v1602; // [rsp+3F0h] [rbp+2F0h] BYREF
  wchar_t *String1; // [rsp+3F8h] [rbp+2F8h] BYREF
  wchar_t *v1604; // [rsp+400h] [rbp+300h] BYREF
  __int64 v1605[3]; // [rsp+408h] [rbp+308h] BYREF
  _DWORD *v1606; // [rsp+420h] [rbp+320h] BYREF
  unsigned int *v1607; // [rsp+428h] [rbp+328h] BYREF
  unsigned int *v1608; // [rsp+430h] [rbp+330h] BYREF
  void *v1609[5]; // [rsp+438h] [rbp+338h] BYREF
  void *v1610; // [rsp+460h] [rbp+360h] BYREF
  unsigned int *v1611; // [rsp+468h] [rbp+368h] BYREF
  unsigned int *v1612; // [rsp+470h] [rbp+370h] BYREF
  HMODULE hModule; // [rsp+478h] [rbp+378h] BYREF
  void *v1614; // [rsp+480h] [rbp+380h] BYREF
  SIZE_T v1615; // [rsp+488h] [rbp+388h] BYREF
  SIZE_T v1616; // [rsp+490h] [rbp+390h] BYREF
  SIZE_T v1617; // [rsp+498h] [rbp+398h] BYREF
  LPVOID v1618[2]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _DWORD *v1619; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int128 v1620; // [rsp+4B8h] [rbp+3B8h]
  __int128 v1621; // [rsp+4C8h] [rbp+3C8h]
  _OWORD *v1622; // [rsp+4E0h] [rbp+3E0h] BYREF
  unsigned __int64 *v1623; // [rsp+4F0h] [rbp+3F0h] BYREF
  LPVOID lpMem[2]; // [rsp+4F8h] [rbp+3F8h] BYREF
  LPVOID v1625[3]; // [rsp+508h] [rbp+408h]
  _QWORD *v1626; // [rsp+520h] [rbp+420h] BYREF
  _OWORD *v1627; // [rsp+530h] [rbp+430h] BYREF
  _QWORD *v1628; // [rsp+540h] [rbp+440h] BYREF
  wchar_t **v1629; // [rsp+550h] [rbp+450h] BYREF
  void *v1630; // [rsp+560h] [rbp+460h] BYREF
  int *v1631; // [rsp+570h] [rbp+470h] BYREF
  _DWORD *v1632; // [rsp+580h] [rbp+480h] BYREF
  size_t v1633; // [rsp+588h] [rbp+488h] BYREF
  LPVOID v1634; // [rsp+590h] [rbp+490h]
  __int128 v1635; // [rsp+598h] [rbp+498h]
  __int128 v1636; // [rsp+5A8h] [rbp+4A8h] BYREF
  LPVOID v1637[3]; // [rsp+5B8h] [rbp+4B8h]
  _DWORD *v1638; // [rsp+5D0h] [rbp+4D0h] BYREF
  _QWORD v1639[2]; // [rsp+5D8h] [rbp+4D8h] BYREF
  int v1640; // [rsp+5E8h] [rbp+4E8h]
  unsigned int v1641; // [rsp+5ECh] [rbp+4ECh]
  int v1642; // [rsp+5F0h] [rbp+4F0h]
  _QWORD v1643[2]; // [rsp+5F8h] [rbp+4F8h] BYREF
  int v1644; // [rsp+608h] [rbp+508h]
  unsigned int v1645; // [rsp+60Ch] [rbp+50Ch]
  int v1646; // [rsp+610h] [rbp+510h]
  _BYTE v1647[24]; // [rsp+620h] [rbp+520h] BYREF
  __int64 v1648; // [rsp+638h] [rbp+538h]
  _BYTE v1649[4]; // [rsp+690h] [rbp+590h] BYREF
  int v1650; // [rsp+694h] [rbp+594h]
  int v1651; // [rsp+698h] [rbp+598h]
  __int16 v1652; // [rsp+6A2h] [rbp+5A2h]
  __int64 v1653; // [rsp+6A8h] [rbp+5A8h]
  _BYTE v1654[4]; // [rsp+700h] [rbp+600h] BYREF
  int v1655; // [rsp+704h] [rbp+604h]
  int v1656; // [rsp+708h] [rbp+608h]
  const WCHAR *v1657; // [rsp+718h] [rbp+618h]
  _BYTE v1658[24]; // [rsp+770h] [rbp+670h] BYREF
  char *v1659; // [rsp+788h] [rbp+688h]
  _BYTE v1660[4]; // [rsp+7E0h] [rbp+6E0h] BYREF
  int v1661; // [rsp+7E4h] [rbp+6E4h]
  int v1662; // [rsp+7E8h] [rbp+6E8h]
  const WCHAR *v1663; // [rsp+7F8h] [rbp+6F8h]
  _BYTE v1664[24]; // [rsp+850h] [rbp+750h] BYREF
  char *v1665; // [rsp+868h] [rbp+768h]
  _BYTE v1666[4]; // [rsp+8C0h] [rbp+7C0h] BYREF
  int v1667; // [rsp+8C4h] [rbp+7C4h]
  int v1668; // [rsp+8C8h] [rbp+7C8h]
  __int64 v1669; // [rsp+8D8h] [rbp+7D8h]
  _BYTE v1670[4]; // [rsp+930h] [rbp+830h] BYREF
  int v1671; // [rsp+934h] [rbp+834h]
  int v1672; // [rsp+938h] [rbp+838h]
  const WCHAR *v1673; // [rsp+948h] [rbp+848h]
  _BYTE v1674[24]; // [rsp+9A0h] [rbp+8A0h] BYREF
  SIZE_T v1675; // [rsp+9B8h] [rbp+8B8h]
  int v1676; // [rsp+A10h] [rbp+910h] BYREF
  int v1677; // [rsp+A14h] [rbp+914h]
  void *v1678; // [rsp+A18h] [rbp+918h]
  void *v1679; // [rsp+A20h] [rbp+920h]
  void *v1680; // [rsp+A28h] [rbp+928h]
  wchar_t *v1681; // [rsp+A30h] [rbp+930h]
  wchar_t *v1682; // [rsp+A38h] [rbp+938h]
  __int64 v1683; // [rsp+A40h] [rbp+940h]
  int v1684; // [rsp+A48h] [rbp+948h]
  __int128 v1685; // [rsp+A4Ch] [rbp+94Ch] BYREF
  __int128 v1686; // [rsp+A5Ch] [rbp+95Ch] BYREF
  unsigned int v1687; // [rsp+A6Ch] [rbp+96Ch] BYREF
  unsigned int v1688; // [rsp+A70h] [rbp+970h]
  unsigned int v1689; // [rsp+A74h] [rbp+974h]
  unsigned int v1690; // [rsp+A78h] [rbp+978h]
  unsigned __int64 v1691; // [rsp+A80h] [rbp+980h]
  unsigned __int64 v1692; // [rsp+A88h] [rbp+988h]
  __int64 v1693; // [rsp+A90h] [rbp+990h]
  __int64 v1694; // [rsp+A98h] [rbp+998h]
  __int128 v1695; // [rsp+AA0h] [rbp+9A0h] BYREF
  __int128 v1696; // [rsp+AB0h] [rbp+9B0h]
  __int128 v1697; // [rsp+AC0h] [rbp+9C0h] BYREF
  __int128 v1698; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int64 v1699; // [rsp+AE0h] [rbp+9E0h] BYREF
  unsigned int v1700; // [rsp+AE8h] [rbp+9E8h]
  int v1701; // [rsp+AECh] [rbp+9ECh]
  __int128 v1702; // [rsp+AF0h] [rbp+9F0h] BYREF
  char v1703[12]; // [rsp+B00h] [rbp+A00h] BYREF
  unsigned int v1704; // [rsp+B0Ch] [rbp+A0Ch]
  __int128 v1705; // [rsp+B20h] [rbp+A20h] BYREF
  __int128 v1706; // [rsp+B30h] [rbp+A30h] BYREF
  __int64 v1707; // [rsp+B40h] [rbp+A40h]
  __int128 v1708; // [rsp+B48h] [rbp+A48h] BYREF
  __int128 v1709; // [rsp+B58h] [rbp+A58h] BYREF
  __int64 v1710; // [rsp+B68h] [rbp+A68h]
  __int128 v1711; // [rsp+B70h] [rbp+A70h] BYREF
  __int128 v1712; // [rsp+B80h] [rbp+A80h]
  __int64 v1713; // [rsp+B90h] [rbp+A90h]
  int v1714; // [rsp+B98h] [rbp+A98h]
  __int128 v1715; // [rsp+BA0h] [rbp+AA0h] BYREF
  __int128 v1716; // [rsp+BB0h] [rbp+AB0h]
  __int64 v1717; // [rsp+BC0h] [rbp+AC0h]
  int v1718; // [rsp+BC8h] [rbp+AC8h]
  __int128 v1719; // [rsp+BD0h] [rbp+AD0h] BYREF
  __int128 v1720; // [rsp+BE0h] [rbp+AE0h]
  __int64 v1721; // [rsp+BF0h] [rbp+AF0h]
  int v1722; // [rsp+BF8h] [rbp+AF8h]
  __int128 v1723; // [rsp+C00h] [rbp+B00h] BYREF
  __int128 v1724; // [rsp+C10h] [rbp+B10h]
  __int64 v1725; // [rsp+C20h] [rbp+B20h]
  int v1726; // [rsp+C28h] [rbp+B28h]
  __int128 v1727; // [rsp+C30h] [rbp+B30h] BYREF
  __int128 v1728; // [rsp+C40h] [rbp+B40h]
  __int64 v1729; // [rsp+C50h] [rbp+B50h]
  int v1730; // [rsp+C58h] [rbp+B58h]
  _DWORD v1731[6]; // [rsp+C60h] [rbp+B60h] BYREF
  char v1732; // [rsp+C7Ah] [rbp+B7Ah]
  wchar_t v1733[34]; // [rsp+C7Ch] [rbp+B7Ch] BYREF
  _DWORD v1734[6]; // [rsp+CC0h] [rbp+BC0h] BYREF
  char v1735; // [rsp+CDAh] [rbp+BDAh]
  wchar_t v1736[34]; // [rsp+CDCh] [rbp+BDCh] BYREF
  _DWORD v1737[6]; // [rsp+D20h] [rbp+C20h] BYREF
  char v1738; // [rsp+D3Ah] [rbp+C3Ah]
  wchar_t v1739[34]; // [rsp+D3Ch] [rbp+C3Ch] BYREF
  _BYTE v1740[68]; // [rsp+D80h] [rbp+C80h] BYREF
  __int16 v1741; // [rsp+DC4h] [rbp+CC4h]
  unsigned __int16 v1742; // [rsp+E26h] [rbp+D26h]
  __int64 v1743; // [rsp+E2Ch] [rbp+D2Ch]
  _QWORD v1744[6]; // [rsp+E60h] [rbp+D60h] BYREF
  int v1745; // [rsp+E90h] [rbp+D90h] BYREF
  __int128 v1746; // [rsp+E98h] [rbp+D98h]
  __int128 v1747; // [rsp+EA8h] [rbp+DA8h]
  __int128 v1748; // [rsp+EB8h] [rbp+DB8h]
  __int64 v1749; // [rsp+EC8h] [rbp+DC8h]
  _QWORD v1750[20]; // [rsp+ED0h] [rbp+DD0h] BYREF
  _WORD v1751[8]; // [rsp+F70h] [rbp+E70h] BYREF
  _BYTE v1752[176]; // [rsp+F80h] [rbp+E80h] BYREF
  WCHAR Filename[264]; // [rsp+1030h] [rbp+F30h] BYREF

  v1601 = 0LL;
  v1519 = 0;
  v1520 = 0;
  v1493 = 0LL;
  v1319 = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1 = g_WarbirdSecureFunctionsRefCount;
  v1499 = -1;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_51;
  v1295 = 0;
  v2 = 0LL;
  v3 = MemoryAlloc(0x338uLL);
  if ( !v3 )
    goto LABEL_17;
  v4 = v3 + 7;
  v5 = 0;
  v6 = -1;
  v7 = 0;
  v8 = (unsigned __int8 *)&unk_180697D32;
  v9 = 0;
  v10 = 103LL;
  do
  {
    v11 = *(v8 - 1) | (*(v8 - 2) << 8);
    v12 = v8[2] << 8;
    v13 = *v8;
    v8 += 8;
    v14 = *(v8 - 7) | ((v13 | (v11 << 8)) << 8);
    v15 = v14 ^ v9;
    v16 = *(v8 - 3) | ((*(v8 - 4) | ((*(v8 - 5) | v12) << 8)) << 8);
    v17 = v16 ^ v7 ^ v15 ^ 0xAC987321;
    v18 = (__ROL4__(v17, 10) + 4991 * __ROL4__(v17 + 1419157410, 5)) ^ v15;
    v19 = (43881 * __ROR4__(v18 + 133239679, 9) - __ROL4__(v18, 2)) ^ v17;
    v20 = (24670 * v19 - (v19 >> 13) - 123127970) ^ v18;
    v21 = (2033 * __ROL4__(v20 ^ 0xAB69, 6) - __ROL4__(v20, 2)) ^ v19;
    v22 = (133239679 - (v21 ^ 0xAB69605E)) ^ v20;
    v23 = (43881 * (v22 ^ 0x137F)) ^ __ROR4__(v22, 6) ^ v21;
    v24 = (__ROL4__(v23, 2) + 24670 * __ROR4__(v23 + 133239679, 15)) ^ v22;
    v25 = (2033 * __ROR4__(v24 + 1419157410, 14) - __ROL4__(v24, 8)) ^ v23;
    v26 = __ROR4__(v25, 10) ^ (4991 * __ROR4__(v25 ^ 0xAB69605E, 12)) ^ v24;
    v27 = v25 ^ (v26 >> 10) ^ (43881 * (v26 ^ 0x7F1));
    v28 = (2033 * (__ROR4__(~v27, 5) + 24670)) ^ v26;
    v29 = v27 ^ (v28 - 2033) ^ 0xAB69605E;
    v30 = ((v29 >> 2) + 4991 * __ROL4__(v27 ^ (v28 - 2033) ^ 0xAB6967AF, 2)) ^ v28;
    v31 = (__ROL4__(v30, 7) + 43881 * __ROR4__(v30 - 133239679, 6)) ^ v29;
    v32 = (24670 * (v31 ^ 0x137F) + __ROR4__(v31, 9)) ^ v30;
    v33 = (__ROL4__(v32, 7) + 2033 * __ROL4__(v32 ^ 0xAB69, 5)) ^ v31;
    v34 = v32 ^ v33 ^ 0xAC987321;
    v35 = (4991 * __ROR4__(v34, 3) - 219010071) ^ v33;
    v36 = (24670 * __ROR4__(v35 - 133239679, 1) - __ROR4__(v35, 6)) ^ v34;
    v37 = (__ROL4__(v36, 14) + 2033 * __ROL4__(v36 - 1419157410, 3)) ^ v35;
    v38 = (4991 * __ROL4__(v37 - 1419157410, 15) - __ROR4__(v37, 14)) ^ v36;
    v39 = (v38 >> 3) ^ (43881 * (v38 ^ 0x605E)) ^ v37;
    v40 = 24670 * __ROL4__(v39 ^ 0x7F1137F, 4);
    v41 = v39;
    v42 = v6 ^ v39;
    v6 = v16;
    v43 = v5 ^ __ROL4__(v41, 2) ^ v40;
    v5 = v14;
    v44 = v43 ^ v38;
    *(v4 - 4) = v44;
    *v4 = v42;
    v4 += 8;
    v45 = __ROR4__(v44, 8);
    *(v4 - 13) = v45;
    v46 = __ROR4__(v42, 8);
    *(v4 - 9) = v46;
    v47 = __ROR4__(v45, 8);
    *(v4 - 14) = v47;
    v48 = __ROR4__(v46, 8);
    *(v4 - 10) = v48;
    v49 = __ROR4__(v47, 8);
    v50 = __ROR4__(v48, 8);
    *(v4 - 15) = v49;
    *(v4 - 11) = v50;
    v7 = __ROR4__(v50, 8);
    v9 = __ROR4__(v49, 8);
    --v10;
  }
  while ( v10 );
  v51 = 0LL;
  v52 = 0;
  v2 = 0LL;
  v53 = 0;
  do
    v52 ^= v3[v51++];
  while ( v51 < 0x338 );
  if ( v52 != 64LL )
  {
    MemoryFree(v3);
LABEL_17:
    v53 = -1073741702;
    goto LABEL_18;
  }
  v3[823] = 0;
  v2 = v3;
  v57 = (const WCHAR *)v3;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  if ( *v3 )
  {
    v58 = 0;
    while ( 1 )
    {
      v59 = -1LL;
      v60 = v57;
      v53 = 0;
      do
        ++v59;
      while ( v57[v59] );
      v61 = &v57[v59];
      v62 = (char *)&WARBIRD::g_arModuleInfo + 24 * v58;
      if ( !GetModuleHandleExW(0, v60, (HMODULE *)v62) )
        break;
      if ( **(_WORD **)v62 == 23117
        && (v63 = *(int *)(*(_QWORD *)v62 + 60LL), (unsigned int)v63 < 0x10000000)
        && (v64 = *(_QWORD *)v62 + v63, v64 >= *(_QWORD *)v62)
        && *(_DWORD *)v64 == 17744 )
      {
        if ( ((*(_WORD *)(v64 + 24) - 267) & 0xFEFF) != 0 )
        {
          v53 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v62 + 12) = *(_QWORD *)(v64 + 136);
          *((_DWORD *)v62 + 2) = *(_DWORD *)(v64 + 80);
        }
      }
      else
      {
        v53 = -1073741701;
      }
      v65 = *(_DWORD *)(v61 + 1);
      v57 = v61 + 3;
      for ( i = 0; i < v65; v1295 = v70 + 1 )
      {
        v67 = -1LL;
        v68 = (const CHAR *)v57;
        do
          ++v67;
        while ( *((_BYTE *)v57 + v67) );
        v57 = (const WCHAR *)((char *)v57 + v67 + 1);
        if ( v53 < 0 )
        {
          v70 = v1295;
        }
        else
        {
          ProcAddress = (void **)GetProcAddress(*(HMODULE *)v62, v68);
          if ( !ProcAddress )
            goto LABEL_18;
          v70 = v1295;
          (&WARBIRD::g_FuncAddress)[v1295] = ProcAddress;
        }
        ++i;
      }
      ++v58;
      if ( !*(_BYTE *)v57 )
        goto LABEL_18;
    }
    v53 = -1073741702;
LABEL_18:
    if ( !v2 )
      goto LABEL_20;
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v2);
LABEL_20:
  if ( v53 >= 0 )
  {
    v1 = g_WarbirdSecureFunctionsRefCount;
LABEL_51:
    g_WarbirdSecureFunctionsRefCount = v1 + 1;
    goto LABEL_52;
  }
  v55 = 4LL;
  v56 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  do
  {
    if ( *v56 )
      FreeLibrary(*v56);
    v56 += 3;
    --v55;
  }
  while ( v55 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_52:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  String1 = 0LL;
  v71 = 0;
  v1604 = 0LL;
  v72 = 0;
  if ( NtCurrentPeb()->SessionId )
  {
    v73 = ((__int64 (*)(void))off_1807A9210)();
    if ( !v73 )
      goto LABEL_62;
    v1564 = 0LL;
    v74 = 0LL;
    for ( j = 0LL; ; v1564 = j )
    {
      v76 = 0LL;
      if ( j )
        v76 = j;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1807A9230)(
                           v73,
                           2LL,
                           v76,
                           v74,
                           &v1522) )
      {
        String1 = j;
        goto LABEL_73;
      }
      LastError = GetLastError();
      if ( LastError != 122 )
        break;
      if ( j )
        goto LABEL_67;
      j = (wchar_t *)MemoryAlloc(v1522);
      if ( !j )
      {
        v72 = -2147024882;
LABEL_73:
        v1564 = 0LL;
        goto LABEL_74;
      }
      v74 = v1522;
    }
    if ( !LastError )
    {
LABEL_67:
      v72 = -2147467259;
      goto LABEL_74;
    }
    if ( LastError > 0 )
      v72 = (unsigned __int16)LastError | 0x80070000;
    else
      v72 = LastError;
LABEL_74:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1564);
    if ( v72 < 0 )
      goto LABEL_105;
    v79 = off_1807A9228;
    CurrentThreadId = GetCurrentThreadId();
    v81 = ((__int64 (__fastcall *)(_QWORD))v79)(CurrentThreadId);
    if ( !v81 )
    {
      v72 = GetLastError();
      v82 = v72 < 0;
      if ( v72 > 0 )
      {
        v72 = (unsigned __int16)v72 | 0x80070000;
        v82 = v72 < 0;
      }
      if ( !v82 )
        v72 = -2147467259;
      goto LABEL_105;
    }
    v1565 = 0LL;
    v72 = 0;
    v83 = 0LL;
    for ( k = 0LL; ; v1565 = k )
    {
      v85 = 0LL;
      if ( k )
        v85 = k;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1807A9230)(
                           v81,
                           2LL,
                           v85,
                           v83,
                           &v1523) )
      {
        v1604 = k;
        goto LABEL_95;
      }
      v86 = GetLastError();
      if ( v86 != 122 )
        break;
      if ( k )
        goto LABEL_89;
      k = (wchar_t *)MemoryAlloc(v1523);
      if ( !k )
      {
        v72 = -2147024882;
LABEL_95:
        v1565 = 0LL;
        goto LABEL_96;
      }
      v83 = v1523;
    }
    if ( !v86 )
    {
LABEL_89:
      v72 = -2147467259;
      goto LABEL_96;
    }
    if ( v86 > 0 )
      v72 = (unsigned __int16)v86 | 0x80070000;
    else
      v72 = v86;
LABEL_96:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1565);
    if ( v72 < 0 )
      goto LABEL_105;
    if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1604 && !wcscmp_0(v1604, L"Default") )
    {
      v1498 = 0;
      CurrentProcess = GetCurrentProcess();
      if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1498, 4LL) )
      {
        if ( (v1498 & 0xF) == 0 )
          v71 = 1;
        goto LABEL_104;
      }
LABEL_62:
      v72 = GetLastError();
      v78 = v72 < 0;
      if ( v72 > 0 )
      {
        v72 = (unsigned __int16)v72 | 0x80070000;
        v78 = v72 < 0;
      }
      if ( !v78 )
        v72 = -2147467259;
      goto LABEL_105;
    }
  }
LABEL_104:
  v1319 = v71;
LABEL_105:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1604);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&String1);
  v88 = 0;
  if ( v72 >= 0 )
    v88 = v1319;
  v1424 = v88;
  v89 = 4LL;
  v1496 = LocalAlloc(0x40u, 4uLL);
  v90 = v1496;
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1493);
  if ( !v90 )
  {
    v1493 = 0LL;
    v91 = -2147024882;
    LODWORD(v92) = 0;
LABEL_109:
    v93 = v1498;
    goto LABEL_110;
  }
  v1493 = (SIZE_T)v90;
  v1327 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  v97 = 0LL;
  *(_OWORD *)v1625 = 0LL;
  v98 = GetProcessHeap();
  v99 = (WCHAR *)HeapAlloc(v98, 8u, 0xA0uLL);
  v92 = 0LL;
  lpModuleName = 3LL;
  v100 = v99;
  v91 = -1073741801;
  if ( !v99 )
  {
    v1397 = -1073741801;
LABEL_126:
    v101 = v88;
    v89 = 4LL;
    goto LABEL_230;
  }
  v1402 = v99;
  *(_OWORD *)v99 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
  *((_OWORD *)v99 + 1) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
  *((_OWORD *)v99 + 2) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
  *((_OWORD *)v99 + 3) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
  *((_OWORD *)v99 + 4) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
  *((_OWORD *)v99 + 5) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
  *((_OWORD *)v99 + 6) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
  *((_OWORD *)v99 + 7) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
  *((_OWORD *)v99 + 8) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
  *((_OWORD *)v99 + 9) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
  v102 = GetProcessHeap();
  v103 = HeapAlloc(v102, 8u, 8uLL);
  v92 = 0LL;
  v104 = v103;
  if ( !v103 )
    goto LABEL_124;
  *v103 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v1327 = (wchar_t *)v103;
  v1460 = (wchar_t *)__rdtsc();
  dwBytes = 0;
  v1397 = RtlUIntAdd(4LL, 4LL, &v1517);
  v91 = v1397;
  if ( v1397 < 0 )
  {
    v101 = v88;
    goto LABEL_628;
  }
  v106 = RtlUIntAdd(0LL, v1517, &dwBytes);
  v91 = v106 | 0x10000000;
  v101 = v88;
  v1397 = v106 | 0x10000000;
  if ( v106 < 0 )
    goto LABEL_138;
  v1397 = RtlUIntAdd((unsigned int)v107, 160LL, &dwBytes_4);
  v91 = v1397;
  if ( v1397 < 0 )
    goto LABEL_628;
  v108 = RtlUIntAdd(dwBytes, dwBytes_4, &dwBytes);
  v91 = v109 | v108;
  v1397 = v109 | v108;
  if ( (v109 | v108) < 0 )
    goto LABEL_138;
  v1397 = RtlUIntAdd((unsigned int)v107, (unsigned int)(v92 + 8), &v1527);
  v91 = v1397;
  if ( v1397 < 0 )
    goto LABEL_628;
  v110 = RtlUIntAdd(dwBytes, v1527, &dwBytes);
  v91 = v111 | v110;
  v1397 = v111 | v110;
  if ( (v111 | v110) < 0 )
    goto LABEL_138;
  v1397 = RtlUIntAdd((unsigned int)v107, (unsigned int)(v92 + 8), &v1528);
  v91 = v1397;
  if ( v1397 < 0 )
    goto LABEL_628;
  v112 = RtlUIntAdd(dwBytes, v1528, &dwBytes);
  v91 = v114 | v112;
  v1397 = v114 | v112;
  if ( (v114 | v112) < 0 )
  {
LABEL_138:
    v97 = v100;
    v89 = v107;
    goto LABEL_230;
  }
  if ( StringCchLengthW(L"DeferWidgetsInitialization", v113, &pcchLength) < 0 )
  {
    v91 = -1073741762;
    v1397 = -1073741762;
    goto LABEL_138;
  }
  v1397 = RtlUIntAdd((unsigned int)v107, (unsigned int)(2 * ++pcchLength), &v1529);
  v91 = v1397;
  if ( v1397 >= 0 )
  {
    v115 = RtlUIntAdd(dwBytes, v1529, &dwBytes);
    v91 = v115 | 0x10000000;
    v1397 = v115 | 0x10000000;
    if ( v115 < 0 )
      goto LABEL_138;
    v1397 = RtlUIntAdd((unsigned int)v107, (unsigned int)v107, &v1530);
    v91 = v1397;
    if ( v1397 >= 0 )
    {
      v116 = RtlUIntAdd(dwBytes, v1530, &dwBytes);
      v91 = v117 | v116;
      v1397 = v117 | v116;
      if ( (v117 | v116) < 0 )
        goto LABEL_138;
      v1397 = RtlUIntAdd((unsigned int)v107, (unsigned int)v107, &v1543);
      v91 = v1397;
      if ( v1397 >= 0 )
      {
        v118 = RtlUIntAdd(dwBytes, v1543, &dwBytes);
        v91 = v119 | v118;
        v1397 = v119 | v118;
        if ( (v119 | v118) < 0 )
          goto LABEL_138;
        HIDWORD(lpMem[0]) = dwBytes;
        v120 = dwBytes;
        v121 = GetProcessHeap();
        v122 = HeapAlloc(v121, 8u, v120);
        v92 = 0LL;
        v123 = v122;
        if ( !v122 )
        {
          v91 = -1073741801;
          goto LABEL_124;
        }
        lpMem[1] = v122;
        LODWORD(lpMem[0]) = 0;
        v1397 = RtlULongLongAdd(v122, 4LL, &v1619);
        v91 = v1397;
        if ( v1397 < 0 )
          goto LABEL_125;
        if ( v123 + 2 <= (_DWORD *)((char *)v123 + HIDWORD(lpMem[0])) )
        {
          v124 = v1619;
          *v123 = 4;
          *v124 = v92;
          v125 = ++LODWORD(lpMem[0]);
          if ( lpMem[1] == (LPVOID)v92 )
          {
            v89 = 4LL;
            v1397 = RtlUIntAdd(4LL, 160LL, &v1554);
            v91 = v1397;
            if ( v1397 < 0 )
              goto LABEL_166;
            v126 = RtlUIntAdd(HIDWORD(lpMem[0]), v1554, (char *)lpMem + 4);
            v127 = (int)lpMem[0];
            v91 = v126;
            v1397 = v126;
            if ( v126 < 0 )
              goto LABEL_152;
LABEL_163:
            LODWORD(lpMem[0]) = ++v127;
            goto LABEL_153;
          }
          v134 = (unsigned int *)lpMem[1];
          v1567 = (unsigned int *)lpMem[1];
          if ( v125 )
          {
            do
            {
              v1397 = RtlUIntAdd(4LL, *v134, &v1555);
              v91 = v1397;
              if ( v1397 < 0 )
                goto LABEL_125;
              v1397 = RtlULongLongAdd(v134, v1555, &v1567);
              v91 = v1397;
              if ( v1397 < 0 )
                goto LABEL_125;
              v134 = v1567;
            }
            while ( v135 + 1 < v136 );
          }
          v1397 = RtlULongLongAdd(v134, 4LL, &v1627);
          v91 = v1397;
          if ( v1397 < 0 )
          {
LABEL_152:
            v101 = v88;
            if ( v91 < 0 )
              goto LABEL_228;
LABEL_153:
            v89 = 4LL;
            if ( lpMem[1] == (LPVOID)v92 )
            {
              v1397 = RtlUIntAdd(4LL, 8LL, &v1556);
              v91 = v1397;
              if ( v1397 < 0 )
                goto LABEL_166;
              v128 = RtlUIntAdd(HIDWORD(lpMem[0]), v1556, (char *)lpMem + 4);
              v129 = (int)lpMem[0];
              v91 = v128;
              v1397 = v128;
              if ( v128 < 0 )
                goto LABEL_156;
            }
            else
            {
              v138 = (unsigned int *)lpMem[1];
              v1568 = (unsigned int *)lpMem[1];
              if ( v127 )
              {
                do
                {
                  v1397 = RtlUIntAdd(4LL, *v138, &v1557);
                  v91 = v1397;
                  if ( v1397 < 0 )
                    goto LABEL_166;
                  v1397 = RtlULongLongAdd(v138, v1557, &v1568);
                  v91 = v1397;
                  if ( v1397 < 0 )
                    goto LABEL_166;
                  v138 = v1568;
                }
                while ( v139 + 1 < v140 );
              }
              v1397 = RtlULongLongAdd(v138, 4LL, &v1628);
              v91 = v1397;
              if ( v1397 < 0 )
              {
LABEL_156:
                v101 = v88;
                if ( v91 < 0 )
                  goto LABEL_228;
                goto LABEL_157;
              }
              if ( v138 + 3 > (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                goto LABEL_164;
              v137 = v1628;
              *v138 = 8;
              *v137 = *v104;
              v129 = (int)lpMem[0];
            }
            LODWORD(lpMem[0]) = ++v129;
LABEL_157:
            if ( lpMem[1] == (LPVOID)v92 )
            {
              v1397 = RtlUIntAdd(4LL, 8LL, &v1559);
              v91 = v1397;
              if ( v1397 >= 0 )
              {
                v130 = RtlUIntAdd(HIDWORD(lpMem[0]), v1559, (char *)lpMem + 4);
                v132 = (int)lpMem[0];
                v91 = v130;
                v1397 = v130;
                if ( v130 < 0 )
                  goto LABEL_160;
LABEL_183:
                LODWORD(lpMem[0]) = v132 + 1;
                goto LABEL_161;
              }
LABEL_166:
              v101 = v88;
LABEL_229:
              v97 = (WCHAR *)v1402;
              goto LABEL_230;
            }
            v142 = (unsigned int *)lpMem[1];
            v1569 = (unsigned int *)lpMem[1];
            if ( v129 )
            {
              do
              {
                v1397 = RtlUIntAdd(4LL, *v142, &v1560);
                v91 = v1397;
                if ( v1397 < 0 )
                  goto LABEL_166;
                v1397 = RtlULongLongAdd(v142, v1560, &v1569);
                v91 = v1397;
                if ( v1397 < 0 )
                  goto LABEL_166;
                v142 = v1569;
              }
              while ( v143 + 1 < v144 );
            }
            v1397 = RtlULongLongAdd(v142, 4LL, &v1629);
            v91 = v1397;
            if ( v1397 < 0 )
            {
LABEL_160:
              v101 = v88;
              if ( v91 < 0 )
                goto LABEL_228;
LABEL_161:
              if ( StringCchLengthW(L"DeferWidgetsInitialization", v131, &v1570) < 0 )
              {
                v91 = -1073741762;
LABEL_165:
                v1397 = v91;
                goto LABEL_166;
              }
              v1397 = RtlULongLongAdd(v1570, 1LL, &v1570);
              v91 = v1397;
              if ( v1397 >= 0 )
              {
                if ( 2 * (_DWORD)v1570 )
                {
                  if ( lpMem[1] == (LPVOID)v92 )
                  {
                    v1397 = RtlUIntAdd(4LL, (unsigned int)(2 * v1570), &v1561);
                    v91 = v1397;
                    if ( v1397 >= 0 )
                    {
                      v146 = RtlUIntAdd(HIDWORD(lpMem[0]), v1561, (char *)lpMem + 4);
                      v145 = (unsigned int)lpMem[0];
                      v91 = v146;
                      v1397 = v146;
                      if ( v146 >= 0 )
                      {
                        v145 = LODWORD(lpMem[0]) + 1;
                        v1397 = v92;
                        ++LODWORD(lpMem[0]);
                        v91 = v92;
                      }
                    }
                  }
                  else
                  {
                    v147 = lpMem[1];
                    v1571 = lpMem[1];
                    if ( v145 )
                    {
                      while ( 1 )
                      {
                        v1397 = RtlUIntAdd(4LL, (unsigned int)*v147, &v1562);
                        v91 = v1397;
                        if ( v1397 < 0 )
                          break;
                        v1397 = RtlULongLongAdd(v147, v1562, &v1571);
                        v91 = v1397;
                        if ( v1397 < 0 )
                          break;
                        v147 = v1571;
                        if ( v148 + 1 >= v145 )
                          goto LABEL_201;
                      }
                    }
                    else
                    {
LABEL_201:
                      v149 = RtlULongLongAdd(v147, 4LL, &v1630);
                      v92 = 0LL;
                      v1397 = v149;
                      v91 = v149;
                      if ( v149 < 0 )
                        goto LABEL_207;
                      if ( (char *)v147 + v150 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
                      {
                        v91 = -1073741789;
                        v1397 = -1073741789;
                        goto LABEL_207;
                      }
                      v151 = v1630;
                      *v147 = v150;
                      memcpy_0(v151, L"DeferWidgetsInitialization", (unsigned int)v150);
                      v145 = ++LODWORD(lpMem[0]);
                    }
                    v92 = 0LL;
                  }
                }
                else
                {
                  v91 = -1073741811;
                  v1397 = -1073741811;
                }
              }
LABEL_207:
              v101 = v88;
              if ( v91 < 0 )
                goto LABEL_228;
              if ( lpMem[1] == (LPVOID)v92 )
              {
                v1397 = RtlUIntAdd(4LL, 4LL, &v1563);
                v91 = v1397;
                if ( v1397 >= 0 )
                {
                  v153 = RtlUIntAdd(HIDWORD(lpMem[0]), v1563, (char *)lpMem + 4);
                  v154 = (int)lpMem[0];
                  v91 = v153;
                  v1397 = v153;
                  if ( v153 < 0 )
                    goto LABEL_211;
                  goto LABEL_217;
                }
              }
              else
              {
                v156 = (unsigned int *)lpMem[1];
                v1572 = (unsigned int *)lpMem[1];
                if ( !v145 )
                {
LABEL_224:
                  v1397 = RtlULongLongAdd(v156, 4LL, &v1631);
                  v91 = v1397;
                  if ( v1397 < 0 )
                  {
LABEL_211:
                    v101 = v88;
                    if ( v91 < 0 )
                      goto LABEL_228;
                    goto LABEL_212;
                  }
                  if ( v156 + 2 > (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                    goto LABEL_226;
                  v155 = v1631;
                  *v156 = 4;
                  *v155 = v88;
                  v154 = (int)lpMem[0];
LABEL_217:
                  LODWORD(lpMem[0]) = ++v154;
LABEL_212:
                  if ( lpMem[1] == (LPVOID)v92 )
                  {
                    v89 = 4LL;
                    v1397 = RtlUIntAdd(4LL, 4LL, &v1524);
                    v91 = v1397;
                    if ( v1397 < 0 )
                      goto LABEL_166;
                    v1397 = RtlUIntAdd(HIDWORD(lpMem[0]), v1524, (char *)lpMem + 4);
                    v91 = v1397;
                    if ( v1397 >= 0 )
                    {
                      ++LODWORD(lpMem[0]);
LABEL_254:
                      v1397 = RtlUIntAdd(4LL, 4LL, &v1504);
                      v91 = v1397;
                      if ( v1397 < 0 )
                        goto LABEL_166;
                      v172 = v1504;
                      v1505 = v1504;
                      v1397 = RtlUIntAdd(v171, 8LL, &v1506);
                      v91 = v1397;
                      if ( v1397 < 0 )
                        goto LABEL_166;
                      v1397 = RtlUIntAdd(v172, v1506, &v1505);
                      v91 = v1397;
                      if ( v1397 >= 0 )
                      {
                        v1397 = RtlUIntAdd(4LL, 4LL, &v1507);
                        v91 = v1397;
                        if ( v1397 < 0 )
                          goto LABEL_166;
                        v1397 = RtlUIntAdd(v1505, v1507, &v1505);
                        v91 = v1397;
                        if ( v1397 >= 0 )
                        {
                          v1397 = RtlUIntAdd(4LL, 4LL, &v1508);
                          v91 = v1397;
                          if ( v1397 < 0 )
                            goto LABEL_166;
                          v1397 = RtlUIntAdd(v1505, v1508, &v1505);
                          v91 = v1397;
                          if ( v1397 >= 0 )
                          {
                            v1397 = RtlUIntAdd(4LL, 4LL, &v1509);
                            v91 = v1397;
                            if ( v1397 < 0 )
                              goto LABEL_166;
                            v1397 = RtlUIntAdd(v1505, v1509, &v1505);
                            v91 = v1397;
                            if ( v1397 >= 0 )
                            {
                              v1397 = RtlUIntAdd(4LL, 4LL, &v1500);
                              v91 = v1397;
                              if ( v1397 < 0 )
                                goto LABEL_166;
                              v1397 = RtlUIntAdd(v1505, v1500, &v1505);
                              v91 = v1397;
                              if ( v1397 >= 0 )
                              {
                                v1296 = v1505;
                                goto LABEL_268;
                              }
                            }
                          }
                        }
                      }
                      v101 = v88;
                      if ( v91 >= 0 )
                      {
                        v1296 = v1500;
LABEL_268:
                        v173 = (_DWORD *)v92;
                        v1385 = (unsigned __int8 *)v92;
                        v1470 = (LPCWSTR)v92;
                        v174 = (unsigned __int8 *)v92;
                        v175 = v92;
                        v1501 = (LPVOID)v92;
                        v1320 = v92;
                        v176 = (unsigned int *)v92;
                        v1521 = (LPVOID)v92;
                        v1491 = (LPVOID)v92;
                        v1488 = (LPVOID)__rdtsc();
                        v1510 = 8;
                        v177 = RtlUIntAdd(8LL, HIDWORD(lpMem[0]), &v1510);
                        if ( v177 >= 0 )
                        {
                          v178 = (v1510 + 7) & 0xFFFFFFF8;
                          if ( v178 < v1510 )
                          {
                            v91 = -805306219;
LABEL_272:
                            v101 = v1424;
                            v1397 = v91;
                            goto LABEL_228;
                          }
                          v1510 = (v1510 + 7) & 0xFFFFFFF8;
                          v179 = v178;
                          v180 = GetProcessHeap();
                          v181 = (char *)HeapAlloc(v180, 8u, v179);
                          v92 = 0LL;
                          v182 = v181;
                          if ( !v181 )
                          {
                            v91 = -805306345;
                            goto LABEL_272;
                          }
                          v1574[0] = v181;
                          *(_DWORD *)v181 = lpMem[0];
                          v177 = RtlULongLongAdd(v181, 4LL, v1574);
                          if ( v177 < 0
                            || (v184 = v1574[0],
                                *(_DWORD *)v1574[0] = HIDWORD(lpMem[0]),
                                v177 = RtlULongLongAdd(v184, v183, v1574),
                                v177 < 0) )
                          {
                            v185 = GetProcessHeap();
                            HeapFree(v185, 0, v182);
                            v175 = (unsigned int)v173;
                          }
                          else
                          {
                            *(_QWORD *)&v182[v1510 - 8] = v1488;
                            memcpy_0(v1574[0], lpMem[1], HIDWORD(lpMem[0]));
                            v174 = (unsigned __int8 *)v182;
                            v1385 = (unsigned __int8 *)v182;
                            v175 = v1510;
                          }
                          v92 = 0LL;
                        }
                        v91 = v177 | 0x10000000;
                        v1397 = v91;
                        if ( v91 < 0 )
                          goto LABEL_379;
                        v1488 = (LPVOID)v92;
                        if ( !v174 )
                        {
                          v91 = -805306355;
                          goto LABEL_272;
                        }
                        v186 = v175;
                        v1480 = v175;
                        if ( !v175 || (Size = v175 + 8, (Src = MemoryAlloc(v175 + 8LL)) == 0LL) )
                        {
                          v91 = -805306367;
                          v1397 = -805306367;
LABEL_380:
                          v296 = GetProcessHeap();
                          HeapFree(v296, 0, v174);
                          v92 = 0LL;
LABEL_381:
                          if ( v173 )
                          {
                            v297 = (void *)*((_QWORD *)v173 + 1);
                            if ( v297 )
                            {
                              v298 = GetProcessHeap();
                              HeapFree(v298, 0, v297);
                              *((_QWORD *)v173 + 1) = 0LL;
                            }
                            v299 = (void *)*((_QWORD *)v173 + 3);
                            if ( v299 )
                            {
                              v300 = GetProcessHeap();
                              HeapFree(v300, 0, v299);
                              *((_QWORD *)v173 + 3) = 0LL;
                            }
                            v301 = (void *)*((_QWORD *)v173 + 5);
                            if ( v301 )
                            {
                              v302 = GetProcessHeap();
                              HeapFree(v302, 0, v301);
                              *((_QWORD *)v173 + 5) = 0LL;
                            }
                            v303 = GetProcessHeap();
                            HeapFree(v303, 0, v173);
                            v92 = 0LL;
                          }
                          v304 = v1501;
                          if ( v1501 )
                          {
                            v305 = GetProcessHeap();
                            HeapFree(v305, 0, v304);
                            v92 = 0LL;
                          }
                          if ( v176 )
                          {
                            v306 = GetProcessHeap();
                            HeapFree(v306, 0, v176);
                            v92 = 0LL;
                          }
                          v307 = v1521;
                          if ( v1521 )
                          {
                            v308 = (void *)*((_QWORD *)v1521 + 1);
                            if ( v308 )
                            {
                              v309 = GetProcessHeap();
                              HeapFree(v309, 0, v308);
                              v307[1] = 0LL;
                            }
                            v310 = (void *)v307[3];
                            if ( v310 )
                            {
                              v311 = GetProcessHeap();
                              HeapFree(v311, 0, v310);
                              v307[3] = 0LL;
                            }
                            v312 = (void *)v307[5];
                            if ( v312 )
                            {
                              v313 = GetProcessHeap();
                              HeapFree(v313, 0, v312);
                              v307[5] = 0LL;
                            }
                            v314 = GetProcessHeap();
                            HeapFree(v314, 0, v307);
                            v92 = 0LL;
                          }
                          if ( v1491 )
                          {
                            v315 = GetProcessHeap();
                            HeapFree(v315, 0, v1491);
                            v92 = 0LL;
                          }
                          v101 = v1424;
                          if ( v91 < 0 )
                            goto LABEL_228;
                          if ( !LODWORD(v1625[0]) )
                          {
                            v91 = -1073425151;
LABEL_554:
                            v1397 = v91;
                            goto LABEL_228;
                          }
                          if ( v1625[1] == (LPVOID)v92 )
                          {
                            v91 = -1073741811;
                            goto LABEL_554;
                          }
                          v89 = 4LL;
                          if ( LODWORD(v1625[0]) <= (unsigned int)v92 )
                          {
                            v91 = -1073741811;
LABEL_559:
                            v1397 = v91;
                            goto LABEL_229;
                          }
                          v452 = v1625[1];
                          v1583 = v1625[1];
                          v1397 = RtlULongLongAdd(v1625[1], 4LL, &v1583);
                          v91 = v1397;
                          if ( v1397 < 0 )
                            goto LABEL_229;
                          v454 = v1583;
                          if ( *v452 == (_DWORD)v92 )
                            v454 = (_DWORD *)v92;
                          v1583 = v454;
                          if ( *v452 != 4 )
                          {
                            v91 = -1073741789;
                            goto LABEL_559;
                          }
                          v91 = *v454;
                          v1397 = *v454;
                          if ( *v454 == -805306333 )
                          {
                            v455 = -2147024774;
                          }
                          else
                          {
                            v455 = *v454;
                            if ( v91 != -2147024774 && v91 < 0 )
                              goto LABEL_229;
                          }
                          if ( LODWORD(v1625[0]) != 6 )
                          {
                            v91 = -1073425151;
LABEL_571:
                            v1397 = v91;
LABEL_572:
                            v101 = v453;
                            goto LABEL_229;
                          }
                          if ( v1625[1] != (LPVOID)v92 )
                          {
                            v1584 = v1625[1];
                            v456 = *(_DWORD *)v1625[1];
                            v1397 = RtlULongLongAdd(v1625[1], 4LL, &v1584);
                            v91 = v1397;
                            if ( v1397 < 0 )
                              goto LABEL_572;
                            v1397 = RtlULongLongAdd(v1584, v456, &v1584);
                            v91 = v1397;
                            if ( v1397 < 0 )
                              goto LABEL_572;
                            v457 = *v1584;
                            v1397 = RtlULongLongAdd(v1584, 4LL, &v1584);
                            v91 = v1397;
                            if ( v1397 < 0 )
                              goto LABEL_572;
                            v458 = v1584;
                            if ( !v457 )
                              v458 = (_QWORD *)v92;
                            v1584 = v458;
                            if ( v457 != 8 )
                            {
LABEL_570:
                              v91 = -1073741789;
                              goto LABEL_571;
                            }
                            v1374 = *v458;
                            if ( v1625[1] != (LPVOID)v92 )
                            {
                              v459 = (int *)v1625[1];
                              v460 = v92;
                              v1585 = (int *)v1625[1];
                              while ( 1 )
                              {
                                v1397 = RtlULongLongAdd(v459, 4LL, &v1585);
                                v91 = v1397;
                                if ( v1397 < 0 )
                                  goto LABEL_572;
                                v1397 = RtlULongLongAdd(v1585, v461, &v1585);
                                v91 = v1397;
                                if ( v1397 < 0 )
                                  goto LABEL_572;
                                v459 = v1585;
                                if ( (unsigned int)++v460 >= 2 )
                                {
                                  v462 = *v1585;
                                  v1397 = RtlULongLongAdd(v1585, 4LL, &v1585);
                                  v91 = v1397;
                                  if ( v1397 < 0 )
                                    goto LABEL_572;
                                  v463 = v1585;
                                  if ( !v462 )
                                    v463 = (int *)v92;
                                  v1585 = v463;
                                  if ( v462 != 4 )
                                    goto LABEL_570;
                                  v1315 = *v463;
                                  if ( v1625[1] == (LPVOID)v92 )
                                    break;
                                  v464 = v1625[1];
                                  v465 = v92;
                                  v1586 = v1625[1];
                                  while ( 1 )
                                  {
                                    v1397 = RtlULongLongAdd(v464, 4LL, &v1586);
                                    v91 = v1397;
                                    if ( v1397 < 0 )
                                      goto LABEL_572;
                                    v1397 = RtlULongLongAdd(v1586, v466, &v1586);
                                    v91 = v1397;
                                    if ( v1397 < 0 )
                                      goto LABEL_572;
                                    v464 = v1586;
                                    if ( (unsigned int)++v465 >= 3 )
                                    {
                                      v1397 = RtlULongLongAdd(v1586, 4LL, &v1586);
                                      v91 = v1397;
                                      if ( v1397 >= 0 )
                                      {
                                        v469 = v1586;
                                        v470 = (unsigned int *)v1625[1];
                                        v471 = 0;
                                        if ( !v468 )
                                          v469 = 0LL;
                                        v1587 = (unsigned int *)v1625[1];
                                        v1586 = v469;
                                        do
                                        {
                                          v472 = *v470;
                                          v1397 = RtlULongLongAdd(v470, 4LL, &v1587);
                                          v91 = v1397;
                                          if ( v1397 < 0 )
                                            goto LABEL_626;
                                          v1397 = RtlULongLongAdd(v1587, v472, &v1587);
                                          v91 = v1397;
                                          v89 = 4LL;
                                          if ( v1397 < 0 )
                                            goto LABEL_622;
                                          v470 = v1587;
                                          ++v471;
                                        }
                                        while ( v471 < 4 );
                                        v473 = *v1587;
                                        v1397 = RtlULongLongAdd(v1587, 4LL, &v1587);
                                        v91 = v1397;
                                        if ( v1397 < 0 )
                                          goto LABEL_622;
                                        v474 = v1587;
                                        if ( !v473 )
                                          v474 = 0LL;
                                        v1587 = v474;
                                        if ( v473 == 4 )
                                        {
                                          v475 = (unsigned int *)v1625[1];
                                          v476 = 0;
                                          v477 = *v474;
                                          v1588 = (unsigned int *)v1625[1];
                                          while ( 1 )
                                          {
                                            v478 = *v475;
                                            v1397 = RtlULongLongAdd(v475, 4LL, &v1588);
                                            v91 = v1397;
                                            if ( v1397 < 0 )
                                              break;
                                            v1397 = RtlULongLongAdd(v1588, v478, &v1588);
                                            v91 = v1397;
                                            if ( v1397 < 0 )
                                              break;
                                            v475 = v1588;
                                            if ( (unsigned int)++v476 >= 5 )
                                            {
                                              v479 = *v1588;
                                              v480 = RtlULongLongAdd(v1588, 4LL, &v1588);
                                              v1397 = v480;
                                              v91 = v480;
                                              if ( v480 < 0 )
                                              {
                                                v1397 = v480;
                                                break;
                                              }
                                              v483 = v1588;
                                              if ( !v479 )
                                                v483 = 0LL;
                                              v89 = 4LL;
                                              v1588 = v483;
                                              if ( v479 == 4 )
                                              {
                                                v101 = *v483;
                                                if ( v1460 != (wchar_t *)v1374 )
                                                {
                                                  v91 = -1073425151;
                                                  goto LABEL_621;
                                                }
                                                v1520 = v1315;
                                                if ( v477 > 4 || (unsigned int)v482 > 4 )
                                                {
                                                  v91 = -2147024774;
                                                  v1397 = -2147024774;
                                                  goto LABEL_624;
                                                }
                                                memcpy_0(v1496, v481, v482);
                                                v97 = (WCHAR *)v1402;
                                                v92 = 0LL;
                                                if ( v455 )
                                                {
                                                  v91 = v455;
                                                  v1397 = v455;
                                                }
                                                goto LABEL_230;
                                              }
                                              goto LABEL_619;
                                            }
                                          }
LABEL_626:
                                          v101 = v467;
                                          v92 = 0LL;
                                          goto LABEL_228;
                                        }
LABEL_619:
                                        v91 = -1073741789;
LABEL_621:
                                        v1397 = v91;
                                      }
LABEL_622:
                                      v101 = v467;
LABEL_624:
                                      v92 = 0LL;
                                      goto LABEL_229;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          v91 = -1073741811;
                          goto LABEL_571;
                        }
                        v187 = 0;
                        for ( m = 0LL; m < v175; ++m )
                          v187 ^= v174[m];
                        v1293 = v187;
                        v189 = Src;
                        v1691 = 0xC81ECB17B1B54A58uLL;
                        v190 = -1;
                        v1398 = 0;
                        v1377 = 0;
                        v191 = v174;
                        v192 = 0;
                        v193 = v186 & 7;
                        if ( (v186 & 7) != 0 )
                        {
                          v194 = 0;
                          v195 = 0;
                          v1307 = 0;
                          v196 = 56;
                          do
                          {
                            v197 = *v191++;
                            if ( v194 >= 4 )
                              v195 |= v197 << v196;
                            else
                              v192 |= v197 << (v196 - 32);
                            v196 -= 8;
                            v194 = v1307 + 1;
                            v1398 = v195;
                            v1377 = v192;
                            v1307 = v194;
                          }
                          while ( (int)v194 < (int)v193 );
                          v192 ^= 0xB17A307A;
                          v198 = Src;
                          v199 = v195 ^ 0x42F6B18D;
                          v200 = v199;
                          v201 = 0;
                          v202 = v192;
                          v1385 = v174;
                          do
                          {
                            v1363 = (SIZE_T)(v198 + 1);
                            if ( v201 >= 4 )
                            {
                              v200 = __ROL4__(v200, 8);
                              v203 = v200;
                            }
                            else
                            {
                              v202 = __ROL4__(v202, 8);
                              v203 = v202;
                            }
                            *v198 = v203;
                            ++v201;
                            ++v198;
                          }
                          while ( (int)v201 < (int)v193 );
                          v189 = (_BYTE *)v1363;
                          v173 = v1470;
                          v176 = (unsigned int *)v1470;
                          if ( v193 <= 4 )
                          {
                            v190 = 0;
                            if ( v193 >= 4 )
                              goto LABEL_302;
                            v192 = v192 >> (8 * (4 - v193)) << (8 * (4 - v193));
                          }
                          else
                          {
                            v190 = v199 >> (8 * (8 - v193)) << (8 * (8 - v193));
                          }
                          v189 = (_BYTE *)v1363;
                        }
LABEL_302:
                        v204 = v186 >> 3;
                        if ( v186 >> 3 )
                        {
                          v205 = v189 + 7;
                          v206 = WORD2(v1691);
                          v207 = v1398;
                          v208 = v1377;
                          v1308 = WORD1(v1691);
                          v209 = v191 + 2;
                          do
                          {
                            v210 = *(v209 - 1) | (*(v209 - 2) << 8);
                            v211 = v209[2] << 8;
                            v212 = *v209;
                            v209 += 8;
                            v213 = *(v209 - 7) | ((v212 | (v210 << 8)) << 8);
                            v214 = *(v209 - 3) | ((*(v209 - 4) | ((*(v209 - 5) | v211) << 8)) << 8);
                            v215 = v214 ^ v190;
                            v216 = v213 ^ HIDWORD(v1691) ^ (v215 - 19032) ^ v192;
                            v217 = (__ROR4__(v216, 7) + WORD1(v1691) * __ROR4__(v216 ^ HIDWORD(v1691), 15)) ^ v215;
                            v218 = (v206 * __ROR4__(v217 - 1313519016, 9) - __ROR4__(v217, 10)) ^ v216;
                            v219 = (__ROL4__(v218, 5) + HIWORD(v1691) * __ROL4__(v218 ^ v206, 4)) ^ v217;
                            v220 = (HIDWORD(v1691) - (v219 ^ 0xB1B54A58)) ^ v218;
                            v221 = (WORD1(v1691) * (v220 - 19032) - (v220 >> 6)) ^ v219;
                            v222 = (19032 * (v206 ^ __ROR4__(v221, 15))) ^ v220;
                            v223 = (v206 * (HIWORD(v1691) + __ROR4__(~v222, 3))) ^ v221;
                            v224 = (v223 - 19032 - HIDWORD(v1691)) ^ v222;
                            v225 = (v1308 * (v224 ^ HIWORD(v1691))) ^ __ROR4__(v224, 10) ^ v223;
                            v226 = __ROR4__(v225, 3) ^ (v206 * __ROL4__(v225 ^ 0x4A58, 6)) ^ v224;
                            v227 = (19032 * (__ROR4__(v226, 15) - HIWORD(v1691))) ^ v225;
                            v228 = (v227 >> 15) ^ (19032 * __ROL4__(v227 - v206, 3)) ^ (v227 >> 1) ^ (19032 * (v227 ^ HIWORD(v1691))) ^ v226;
                            v229 = (WORD1(v1691) * (v228 - v206) - (v228 >> 13)) ^ v227;
                            v230 = __ROR4__(v229, 11) ^ (v206 * __ROR4__(-1313519016 - v229, 9)) ^ v228;
                            v231 = (v230 - HIWORD(v1691) + 1313519016) ^ v229;
                            v232 = (19032 * (v231 ^ WORD1(v1691)) - __ROR4__(v231, 7)) ^ v230;
                            v233 = (WORD1(v1691) * __ROL4__(v232 ^ HIWORD(v1691), 4) - __ROR4__(v232, 16)) ^ v231;
                            v234 = (__ROR4__(v233, 4) + v206 * __ROR4__(-1313519016 - v233, 10)) ^ v232;
                            v235 = __ROR4__(v234, 9) ^ (HIWORD(v1691) * __ROR4__(v234 + 1313519016, 4)) ^ v233;
                            v236 = (19032 * __ROL4__(v235 ^ HIDWORD(v1691), 8) - __ROL4__(v235, 2)) ^ v234;
                            v237 = (WORD1(v1691) * __ROR4__(HIDWORD(v1691) - v236, 11) - __ROR4__(v236, 12)) ^ v235;
                            v238 = (v237 >> 8) ^ (v206 * (v237 ^ WORD1(v1691))) ^ v236;
                            v239 = v238 ^ HIDWORD(v1691) ^ 0xB1B54A58 ^ v237;
                            v240 = v208 ^ v238;
                            *(v205 - 4) = v240;
                            v241 = v207 ^ v239;
                            *v205 = v241;
                            v208 = v213;
                            v242 = __ROR4__(v240, 8);
                            v207 = v214;
                            *(v205 - 5) = v242;
                            v205 += 8;
                            v243 = __ROR4__(v241, 8);
                            *(v205 - 9) = v243;
                            v244 = __ROR4__(v242, 8);
                            *(v205 - 14) = v244;
                            v245 = __ROR4__(v243, 8);
                            *(v205 - 10) = v245;
                            v246 = __ROR4__(v244, 8);
                            v247 = __ROR4__(v245, 8);
                            *(v205 - 15) = v246;
                            *(v205 - 11) = v247;
                            v190 = __ROR4__(v247, 8);
                            v192 = __ROR4__(v246, 8);
                            --v204;
                          }
                          while ( v204 );
                          v173 = v1470;
                          v187 = v1293;
                          v176 = (unsigned int *)v1470;
                          v174 = v1385;
                          v186 = v1480;
                        }
                        *(_QWORD *)&Src[v186] = v187;
                        v1574[3] = (void *)8;
                        v1574[4] = (void *)160;
                        v248 = GetProcessHeap();
                        v249 = HeapAlloc(v248, 8u, 0x30uLL);
                        v250 = v249;
                        if ( v249 )
                        {
                          *v249 = Size;
                          v262 = GetProcessHeap();
                          v263 = HeapAlloc(v262, 8u, Size);
                          if ( v263 )
                          {
                            *((_QWORD *)v250 + 1) = v263;
                            memcpy_0(v263, Src, Size);
                            v250[4] = 160;
                            v264 = GetProcessHeap();
                            v265 = HeapAlloc(v264, 8u, 0xA0uLL);
                            v251 = 0;
                            if ( v265 )
                            {
                              *((_QWORD *)v250 + 3) = v265;
                              *v265 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                              v265[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                              v265[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                              v265[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                              v265[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                              v265[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                              v265[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                              v265[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                              v265[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                              v265[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                              v250[8] = 8;
                              v266 = GetProcessHeap();
                              v267 = HeapAlloc(v266, 8u, 8uLL);
                              if ( v267 )
                              {
                                *((_QWORD *)v250 + 5) = v267;
                                *v267 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                                v173 = v250;
                                v252 = 0LL;
LABEL_309:
                                v253 = GetProcessHeap();
                                HeapFree(v253, 0, Src);
                                if ( v252 )
                                {
                                  v1364 = (void *)v252[1];
                                  if ( v1364 )
                                  {
                                    v254 = GetProcessHeap();
                                    HeapFree(v254, 0, v1364);
                                    v252[1] = 0LL;
                                  }
                                  v1365 = (void *)v252[3];
                                  if ( v1365 )
                                  {
                                    v255 = GetProcessHeap();
                                    HeapFree(v255, 0, v1365);
                                    v252[3] = 0LL;
                                  }
                                  v1366 = (void *)v252[5];
                                  if ( v1366 )
                                  {
                                    v256 = GetProcessHeap();
                                    HeapFree(v256, 0, v1366);
                                    v252[5] = 0LL;
                                  }
                                  v257 = GetProcessHeap();
                                  HeapFree(v257, 0, v252);
                                }
                                v91 = v251 | 0x10000000;
                                v1397 = v91;
                                if ( v91 < 0 )
                                  goto LABEL_551;
                                v258 = (unsigned int)*v173;
                                LODWORD(v1511) = 4;
                                v260 = RtlUIntAdd(4LL, v258, &v1511);
                                if ( v260 >= 0 )
                                {
                                  v260 = RtlUIntAdd((unsigned int)v1511, v259, &v1511);
                                  if ( v260 >= 0 )
                                  {
                                    v260 = RtlUIntAdd((unsigned int)v1511, (unsigned int)v173[4], &v1511);
                                    if ( v260 >= 0 )
                                    {
                                      v260 = RtlUIntAdd((unsigned int)v1511, v261, &v1511);
                                      if ( v260 >= 0 )
                                      {
                                        v260 = RtlUIntAdd((unsigned int)v1511, (unsigned int)v173[8], &v1511);
                                        if ( v260 >= 0 )
                                        {
                                          v1309 = v1511;
                                          v272 = v1511;
                                          v273 = GetProcessHeap();
                                          v274 = HeapAlloc(v273, 8u, v272);
                                          v92 = 0LL;
                                          v275 = v274;
                                          if ( !v274 )
                                            goto LABEL_412;
                                          v1575 = v274;
                                          *v274 = *v173;
                                          v260 = RtlULongLongAdd(v274, 4LL, &v1575);
                                          if ( v260 >= 0 )
                                          {
                                            memcpy_0(v1575, *((const void **)v173 + 1), (unsigned int)*v173);
                                            v260 = RtlULongLongAdd(v1575, (unsigned int)*v173, &v1575);
                                            if ( v260 >= 0 )
                                            {
                                              v276 = v1575;
                                              *(_DWORD *)v1575 = v173[4];
                                              v260 = RtlULongLongAdd(v276, 4LL, &v1575);
                                              if ( v260 >= 0 )
                                              {
                                                memcpy_0(v1575, *((const void **)v173 + 3), (unsigned int)v173[4]);
                                                v260 = RtlULongLongAdd(v1575, (unsigned int)v173[4], &v1575);
                                                if ( v260 >= 0 )
                                                {
                                                  v277 = v1575;
                                                  *(_DWORD *)v1575 = v173[8];
                                                  v260 = RtlULongLongAdd(v277, 4LL, &v1575);
                                                  if ( v260 >= 0 )
                                                  {
                                                    memcpy_0(v1575, *((const void **)v173 + 5), (unsigned int)v173[8]);
                                                    v260 = RtlULongLongAdd(v1575, (unsigned int)v173[8], &v1575);
                                                    if ( v260 >= 0 )
                                                    {
                                                      v1320 = v1309;
                                                      v1501 = v275;
LABEL_346:
                                                      v91 = v260 | 0x10000000;
                                                      v1397 = v91;
                                                      if ( v91 < 0 )
                                                        goto LABEL_551;
                                                      v1512 = 8;
                                                      v279 = RtlUIntAdd(8LL, v1296, &v1512);
                                                      v91 = v281 | v279;
                                                      v1397 = v281 | v279;
                                                      if ( (v281 | v279) >= 0 )
                                                      {
                                                        v282 = (v1512 + 7) & 0xFFFFFFF8;
                                                        if ( v282 < v1512 )
                                                        {
                                                          v91 = -1073741675;
LABEL_550:
                                                          v1397 = v91;
                                                          goto LABEL_551;
                                                        }
                                                        v1513 = (v1512 + 7) & 0xFFFFFFF8;
                                                        v1397 = RtlUIntAdd(v282, v280, &v1513);
                                                        v91 = v1397;
                                                        if ( v1397 >= 0 )
                                                        {
                                                          if ( lpMem[1] == v283 || LODWORD(lpMem[0]) <= 1 )
                                                          {
                                                            v91 = -1073741811;
                                                          }
                                                          else
                                                          {
                                                            v1576 = (unsigned int *)lpMem[1];
                                                            v1397 = RtlULongLongAdd(lpMem[1], 4LL, &v1576);
                                                            v91 = v1397;
                                                            if ( v1397 < 0 )
                                                              goto LABEL_551;
                                                            v1397 = RtlULongLongAdd(v1576, v284, &v1576);
                                                            v91 = v1397;
                                                            if ( v1397 < 0 )
                                                              goto LABEL_551;
                                                            v1310 = *v1576;
                                                            v1397 = RtlULongLongAdd(v1576, 4LL, &v1576);
                                                            v91 = v1397;
                                                            if ( v1397 < 0 )
                                                              goto LABEL_551;
                                                            if ( LODWORD(lpMem[0]) > 2 )
                                                            {
                                                              v286 = lpMem[1];
                                                              v1577 = lpMem[1];
                                                              v1501 = v275;
                                                              v1320 = v285;
                                                              while ( 1 )
                                                              {
                                                                v1397 = RtlULongLongAdd(v286, 4LL, &v1577);
                                                                v91 = v1397;
                                                                if ( v1397 < 0 )
                                                                  goto LABEL_551;
                                                                v288 = RtlULongLongAdd(v1577, v287, &v1577);
                                                                v92 = 0LL;
                                                                v1397 = v288;
                                                                v91 = v288;
                                                                if ( v288 < 0 )
                                                                  goto LABEL_379;
                                                                v286 = v1577;
                                                                if ( (unsigned int)(v289 + 1) >= 2 )
                                                                {
                                                                  v1397 = RtlULongLongAdd(v1577, 4LL, &v1577);
                                                                  v91 = v1397;
                                                                  if ( v1397 < 0 )
                                                                    goto LABEL_379;
                                                                  LODWORD(v1514) = v92 + 4;
                                                                  v1397 = RtlUIntAdd(
                                                                            (unsigned int)(v92 + 4),
                                                                            v290,
                                                                            &v1514);
                                                                  v91 = v1397;
                                                                  if ( v1397 < 0 )
                                                                    goto LABEL_370;
                                                                  v1397 = RtlUIntAdd((unsigned int)v1514, v291, &v1514);
                                                                  v91 = v1397;
                                                                  if ( v1397 < 0
                                                                    || (v1397 = RtlUIntAdd(
                                                                                  (unsigned int)v1514,
                                                                                  v1310,
                                                                                  &v1514),
                                                                        v91 = v1397,
                                                                        v1397 < 0)
                                                                    || (v1397 = RtlUIntAdd(
                                                                                  (unsigned int)v1514,
                                                                                  v292,
                                                                                  &v1514),
                                                                        v91 = v1397,
                                                                        v1397 < 0)
                                                                    || (v1397 = RtlUIntAdd(
                                                                                  (unsigned int)v1514,
                                                                                  v293,
                                                                                  &v1514),
                                                                        v91 = v1397,
                                                                        v1397 < 0) )
                                                                  {
LABEL_370:
                                                                    if ( v91 < 0 )
                                                                      goto LABEL_408;
                                                                    v294 = HIDWORD(v1514);
                                                                  }
                                                                  else
                                                                  {
                                                                    v294 = v1514;
                                                                  }
                                                                  v1311 = v294;
                                                                  if ( v294 > 0x400000 )
                                                                  {
                                                                    v91 = -2147418113;
                                                                    goto LABEL_378;
                                                                  }
                                                                  goto LABEL_409;
                                                                }
                                                              }
                                                            }
                                                            v91 = -1073741811;
                                                          }
                                                          goto LABEL_550;
                                                        }
LABEL_551:
                                                        v92 = 0LL;
                                                        goto LABEL_379;
                                                      }
                                                      v92 = 0LL;
LABEL_408:
                                                      v294 = v92;
                                                      v1311 = v92;
                                                      if ( v91 < 0 )
                                                        goto LABEL_379;
LABEL_409:
                                                      Sizea = v275;
                                                      v316 = v294;
                                                      v1370 = (SIZE_T)v174;
                                                      Srca = v173;
                                                      v317 = GetProcessHeap();
                                                      v318 = (unsigned int *)HeapAlloc(v317, 8u, v316);
                                                      v92 = 0LL;
                                                      if ( v318 )
                                                      {
                                                        v176 = v318;
                                                        v319 = Sizea;
                                                        if ( !Sizea )
                                                        {
                                                          v91 = -2147024809;
                                                          v1501 = 0LL;
                                                          v1397 = -2147024809;
                                                          goto LABEL_379;
                                                        }
                                                        v1640 = v1320;
                                                        v1641 = v1311;
                                                        v1639[0] = Sizea;
                                                        v1639[1] = v318;
                                                        v1642 = 0;
                                                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                                          && (v320 = GetProcAddress(
                                                                       phModule,
                                                                       "NtQuerySystemInformation")) != 0LL )
                                                        {
                                                          v321 = ((__int64 (__fastcall *)(__int64, _QWORD *))v320)(
                                                                   134LL,
                                                                   v1639);
                                                          v322 = v1311;
                                                          v91 = v321 | 0x10000000;
                                                          v1397 = v321 | 0x10000000;
                                                          if ( v321 >= 0 )
                                                          {
                                                            v322 = v1641;
                                                            v323 = v174;
                                                            v324 = v173;
                                                            v92 = 0LL;
                                                            goto LABEL_426;
                                                          }
                                                          v92 = 0LL;
                                                        }
                                                        else
                                                        {
                                                          v325 = GetLastError();
                                                          v92 = 0LL;
                                                          v91 = v325;
                                                          if ( v325 > 0 )
                                                            v91 = (unsigned __int16)v325 | 0x80070000;
                                                          v322 = v1311;
                                                          if ( v91 >= 0 )
                                                            v91 = -2147467259;
                                                          v1397 = v91;
                                                        }
                                                        v1501 = Sizea;
                                                        if ( v91 == -805306333 )
                                                        {
                                                          v91 = -2147024774;
                                                          v1397 = -2147024774;
                                                          goto LABEL_379;
                                                        }
                                                        v324 = v173;
                                                        v323 = v174;
                                                        if ( v91 >= 0 )
                                                        {
LABEL_426:
                                                          if ( v322 >= 4 )
                                                          {
                                                            v326 = *v176;
                                                            v327 = v176 + 1;
                                                            v1312 = *v176;
                                                            if ( v176 + 1 < v176 )
                                                            {
                                                              v91 = -805306219;
                                                              goto LABEL_448;
                                                            }
                                                            if ( v322 - 4 >= (unsigned int)v326 )
                                                            {
                                                              v328 = (unsigned int *)((char *)v327 + v326);
                                                              Sizeb = *v176;
                                                              if ( (unsigned int *)((char *)v327 + v326) < v327
                                                                || (unsigned int)(v326 + 4) < 4 )
                                                              {
                                                                goto LABEL_548;
                                                              }
                                                              if ( v322 - ((_DWORD)v326 + 4) >= 4 )
                                                              {
                                                                v329 = *v328;
                                                                v330 = v328 + 1;
                                                                v1386 = v328 + 1;
                                                                if ( v328 + 1 < v328 )
                                                                  goto LABEL_548;
                                                                v331 = v326 + 8;
                                                                if ( (int)v326 + 8 < (unsigned int)(v326 + 4) )
                                                                  goto LABEL_548;
                                                                if ( v322 - v331 >= (unsigned int)v329 )
                                                                {
                                                                  v332 = (unsigned int *)((char *)v330 + v329);
                                                                  if ( (unsigned int *)((char *)v330 + v329) < v330 )
                                                                    goto LABEL_548;
                                                                  v333 = v331 + v329;
                                                                  if ( v331 + (unsigned int)v329 < v331 )
                                                                    goto LABEL_548;
                                                                  if ( v322 - v333 >= 4 )
                                                                  {
                                                                    v334 = *v332;
                                                                    v1471 = (LPCWSTR)(v332 + 1);
                                                                    if ( v332 + 1 < v332 )
                                                                      goto LABEL_548;
                                                                    v335 = v333 + 4;
                                                                    if ( v333 + 4 < v333 )
                                                                      goto LABEL_548;
                                                                    if ( v322 - v335 >= (unsigned int)v334 )
                                                                    {
                                                                      if ( v335 + (unsigned int)v334 >= v335 )
                                                                      {
                                                                        if ( v322 == v335 + (_DWORD)v334
                                                                          && (unsigned int)(v334 + v329 + v326) + 12LL == v322 )
                                                                        {
                                                                          v336 = GetProcessHeap();
                                                                          v337 = HeapAlloc(v336, 8u, 0x30uLL);
                                                                          v92 = 0LL;
                                                                          v1488 = v337;
                                                                          v338 = v337;
                                                                          if ( !v337 )
                                                                          {
                                                                            v173 = Srca;
                                                                            v91 = -805306345;
                                                                            v174 = (unsigned __int8 *)v1370;
                                                                            v1397 = -805306345;
                                                                            v1501 = v319;
                                                                            goto LABEL_379;
                                                                          }
                                                                          if ( v176 == (unsigned int *)-4LL )
                                                                          {
                                                                            *(_DWORD *)v337 = 0;
                                                                            v337[1] = 0LL;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)v337 = v1312;
                                                                            v339 = GetProcessHeap();
                                                                            v340 = HeapAlloc(v339, 8u, Sizeb);
                                                                            if ( !v340 )
                                                                              goto LABEL_461;
                                                                            v338[1] = v340;
                                                                            memcpy_0(v340, v176 + 1, Sizeb);
                                                                            v92 = 0LL;
                                                                          }
                                                                          if ( v1386 )
                                                                          {
                                                                            *((_DWORD *)v338 + 4) = v329;
                                                                            v341 = GetProcessHeap();
                                                                            v342 = HeapAlloc(v341, 8u, v329);
                                                                            if ( !v342 )
                                                                              goto LABEL_461;
                                                                            v338[3] = v342;
                                                                            memcpy_0(v342, v1386, v329);
                                                                            v92 = 0LL;
                                                                          }
                                                                          else
                                                                          {
                                                                            *((_DWORD *)v338 + 4) = 0;
                                                                            v338[3] = 0LL;
                                                                          }
                                                                          if ( !v1471 )
                                                                          {
                                                                            *((_DWORD *)v338 + 8) = 0;
                                                                            v338[5] = 0LL;
                                                                            goto LABEL_476;
                                                                          }
                                                                          *((_DWORD *)v338 + 8) = v334;
                                                                          v343 = GetProcessHeap();
                                                                          v344 = HeapAlloc(v343, 8u, v334);
                                                                          if ( v344 )
                                                                          {
                                                                            v338[5] = v344;
                                                                            memcpy_0(v344, v1471, v334);
                                                                            v92 = 0LL;
LABEL_476:
                                                                            v174 = (unsigned __int8 *)v1370;
                                                                            v345 = 0;
                                                                            v1521 = v338;
                                                                            v173 = Srca;
                                                                            v1472 = (LPCWSTR)Srca;
                                                                            v1497 = v176;
                                                                            v1501 = v319;
                                                                            v1387 = (unsigned __int8 *)v1370;
                                                                            v352 = (unsigned int *)v1521;
                                                                            goto LABEL_477;
                                                                          }
LABEL_461:
                                                                          v173 = Srca;
                                                                          v345 = -1073741801;
                                                                          v174 = (unsigned __int8 *)v1370;
                                                                          v1497 = v176;
                                                                          v1501 = v319;
                                                                          v346 = v1488;
                                                                          v1521 = 0LL;
                                                                          v1371 = (void *)*((_QWORD *)v1488 + 1);
                                                                          if ( v1371 )
                                                                          {
                                                                            v347 = GetProcessHeap();
                                                                            HeapFree(v347, 0, v1371);
                                                                            v346 = v1488;
                                                                            *((_QWORD *)v1488 + 1) = 0LL;
                                                                          }
                                                                          v1372 = (void *)v346[3];
                                                                          if ( v1372 )
                                                                          {
                                                                            v348 = GetProcessHeap();
                                                                            HeapFree(v348, 0, v1372);
                                                                            v346 = v1488;
                                                                            *((_QWORD *)v1488 + 3) = 0LL;
                                                                          }
                                                                          v1373 = (void *)v346[5];
                                                                          if ( v1373 )
                                                                          {
                                                                            v349 = GetProcessHeap();
                                                                            HeapFree(v349, 0, v1373);
                                                                            *((_QWORD *)v1488 + 5) = 0LL;
                                                                          }
                                                                          v350 = GetProcessHeap();
                                                                          HeapFree(v350, 0, v1488);
                                                                          v351 = v1521;
                                                                          Sizec = v319;
                                                                          v92 = 0LL;
                                                                          v1521 = 0LL;
                                                                          v352 = 0LL;
                                                                          v1497 = v176;
                                                                          v1501 = v319;
                                                                          v1472 = (LPCWSTR)Srca;
                                                                          v1387 = v174;
                                                                          if ( v351 )
                                                                          {
                                                                            v353 = (void *)v351[1];
                                                                            v354 = v351;
                                                                            if ( v353 )
                                                                            {
                                                                              v355 = GetProcessHeap();
                                                                              HeapFree(v355, 0, v353);
                                                                              v354[1] = 0LL;
                                                                            }
                                                                            v356 = (void *)v354[3];
                                                                            if ( v356 )
                                                                            {
                                                                              v357 = GetProcessHeap();
                                                                              HeapFree(v357, 0, v356);
                                                                              v354[3] = 0LL;
                                                                            }
                                                                            v358 = (void *)v354[5];
                                                                            if ( v358 )
                                                                            {
                                                                              v359 = GetProcessHeap();
                                                                              HeapFree(v359, 0, v358);
                                                                              v354[5] = 0LL;
                                                                            }
                                                                            v360 = GetProcessHeap();
                                                                            HeapFree(v360, 0, v354);
                                                                            v319 = Sizec;
                                                                            v92 = 0LL;
                                                                            v173 = Srca;
                                                                            v352 = 0LL;
                                                                            v1521 = 0LL;
                                                                            v1497 = v176;
                                                                            v1501 = Sizec;
                                                                            v1472 = (LPCWSTR)Srca;
                                                                            v1387 = v174;
                                                                          }
LABEL_477:
                                                                          v91 = v345 | 0x10000000;
                                                                          v1397 = v91;
                                                                          if ( v91 < 0 )
                                                                            goto LABEL_379;
                                                                          if ( !v352
                                                                            || (Srcb = (char *)*((_QWORD *)v352 + 1)) == 0LL
                                                                            || !*v352 )
                                                                          {
                                                                            v91 = -805306355;
                                                                            goto LABEL_378;
                                                                          }
                                                                          v361 = *v352 - 8LL;
                                                                          Sized = v361;
                                                                          v362 = MemoryAlloc(v361);
                                                                          v92 = 0LL;
                                                                          v1491 = v362;
                                                                          v363 = v362;
                                                                          if ( !v362 )
                                                                          {
LABEL_508:
                                                                            v91 = -805306367;
                                                                            v1491 = 0LL;
                                                                            v1397 = -805306367;
                                                                            goto LABEL_379;
                                                                          }
                                                                          v364 = Srcb;
                                                                          v1694 = 0x7F1137FAB69605ELL;
                                                                          v365 = 0;
                                                                          v366 = v363;
                                                                          v1488 = Srcb;
                                                                          v367 = v361 & 7;
                                                                          if ( (v361 & 7) != 0 )
                                                                          {
                                                                            v368 = 0;
                                                                            v1399 = 0;
                                                                            v369 = 56;
                                                                            v370 = (unsigned __int8 *)v1488;
                                                                            v371 = 0;
                                                                            v372 = 0;
                                                                            do
                                                                            {
                                                                              v373 = *v370++;
                                                                              if ( v368 >= 4 )
                                                                                v372 |= v373 << v369;
                                                                              else
                                                                                v371 |= v373 << (v369 - 32);
                                                                              v369 -= 8;
                                                                              v368 = v1399 + 1;
                                                                              v1399 = v368;
                                                                            }
                                                                            while ( (int)v368 < (int)v367 );
                                                                            v363 = v1491;
                                                                            v374 = v371 ^ 0x92F65A5;
                                                                            v1497 = v176;
                                                                            v375 = v372;
                                                                            v1313 = v372;
                                                                            v365 = 0;
                                                                            v1378 = v371;
                                                                            v361 = Sized;
                                                                            v376 = v375 ^ 0x699A899C;
                                                                            v377 = v374;
                                                                            v1488 = v370;
                                                                            v378 = 0;
                                                                            v1501 = v319;
                                                                            v379 = v1491;
                                                                            v1400 = v374;
                                                                            v1472 = (LPCWSTR)v173;
                                                                            v1387 = v174;
                                                                            do
                                                                            {
                                                                              v1481 = v379 + 1;
                                                                              if ( v378 >= 4 )
                                                                              {
                                                                                v376 = __ROL4__(v376, 8);
                                                                                v380 = v376;
                                                                              }
                                                                              else
                                                                              {
                                                                                v377 = __ROL4__(v377, 8);
                                                                                v380 = v377;
                                                                              }
                                                                              *v379 = v380;
                                                                              ++v378;
                                                                              ++v379;
                                                                            }
                                                                            while ( (int)v378 < (int)v367 );
                                                                            v366 = v1481;
                                                                            v381 = v1400;
                                                                            v176 = v1497;
                                                                            if ( v367 > 4 )
                                                                            {
                                                                              LODWORD(v92) = (v375 ^ 0x699A899Cu) >> (8 * (8 - v367)) << (8 * (8 - v367));
                                                                              v366 = v1481;
LABEL_496:
                                                                              v364 = (char *)v1488;
                                                                              goto LABEL_497;
                                                                            }
                                                                            LODWORD(v92) = 0;
                                                                            if ( v367 >= 4 )
                                                                              goto LABEL_496;
                                                                            v364 = (char *)v1488;
                                                                            v381 = v1400 >> (8 * (4 - v367)) << (8 * (4 - v367));
                                                                            v366 = v1481;
                                                                          }
                                                                          else
                                                                          {
                                                                            v1378 = 0;
                                                                            v1313 = -1;
                                                                            v381 = 0;
                                                                          }
LABEL_497:
                                                                          v382 = v361 >> 3;
                                                                          if ( v361 >> 3 )
                                                                          {
                                                                            v383 = HIDWORD(v1694);
                                                                            v384 = (char *)v366 + 7;
                                                                            v385 = v1378;
                                                                            v386 = (unsigned __int8 *)(v364 + 2);
                                                                            v387 = v1313;
                                                                            v388 = WORD2(v1694);
                                                                            v1297 = WORD1(v1694);
                                                                            v389 = v382;
                                                                            do
                                                                            {
                                                                              v390 = *(v386 - 1) | (*(v386 - 2) << 8);
                                                                              v391 = v386[2] << 8;
                                                                              v392 = *v386;
                                                                              v386 += 8;
                                                                              v393 = *(v386 - 7) | ((v392 | (v390 << 8)) << 8);
                                                                              v394 = v393 ^ v381;
                                                                              v395 = *(v386 - 3) | ((*(v386 - 4) | ((*(v386 - 5) | v391) << 8)) << 8);
                                                                              v396 = v394 ^ v383 ^ 0xAB69605E ^ v395 ^ v92;
                                                                              v397 = (__ROL4__(v396, 10)
                                                                                    + v388
                                                                                    * __ROL4__(v396 + 1419157410, 5)) ^ v394;
                                                                              v398 = (WORD1(v1694)
                                                                                    * __ROR4__(v383 + v397, 9)
                                                                                    - __ROL4__(v397, 2)) ^ v396;
                                                                              v399 = (24670 * (v398 - v388)
                                                                                    - (v398 >> 13)) ^ v397;
                                                                              v400 = (HIWORD(v1694)
                                                                                    * __ROL4__(v399 ^ WORD1(v1694), 6)
                                                                                    - __ROL4__(v399, 2)) ^ v398;
                                                                              v401 = (v383 - (v400 ^ 0xAB69605E)) ^ v399;
                                                                              v402 = (v1297 * (v401 ^ v388)) ^ __ROR4__(v401, 6) ^ v400;
                                                                              v403 = (__ROL4__(v402, 2)
                                                                                    + 24670 * __ROR4__(v402 + v383, 15)) ^ v401;
                                                                              v404 = (HIWORD(v1694)
                                                                                    * __ROR4__(v403 + 1419157410, 14)
                                                                                    - __ROL4__(v403, 8)) ^ v402;
                                                                              v405 = __ROR4__(v404, 10) ^ (v388 * __ROR4__(v404 ^ 0xAB69605E, 12)) ^ v403;
                                                                              v406 = (v405 >> 10) ^ (WORD1(v1694) * (v405 ^ HIWORD(v1694))) ^ v404;
                                                                              v407 = (HIWORD(v1694)
                                                                                    * (__ROR4__(~v406, 5) + 24670)) ^ v405;
                                                                              v408 = (v407 - HIWORD(v1694)) ^ 0xAB69605E ^ v406;
                                                                              v409 = ((v408 >> 2)
                                                                                    + v388
                                                                                    * __ROL4__(v408 ^ HIWORD(v1694), 2)) ^ v407;
                                                                              v410 = (__ROL4__(v409, 7)
                                                                                    + WORD1(v1694)
                                                                                    * __ROR4__(v409 - v383, 6)) ^ v408;
                                                                              v411 = (24670 * (v410 ^ v388)
                                                                                    + __ROR4__(v410, 9)) ^ v409;
                                                                              v412 = (__ROL4__(v411, 7)
                                                                                    + HIWORD(v1694)
                                                                                    * __ROL4__(v411 ^ WORD1(v1694), 5)) ^ v410;
                                                                              v413 = v383 ^ v412 ^ 0xAB69605E ^ v411;
                                                                              v414 = (v388
                                                                                    * (__ROR4__(v413, 3) - WORD1(v1694))) ^ v412;
                                                                              v415 = (24670 * __ROR4__(v414 - v383, 1)
                                                                                    - __ROR4__(v414, 6)) ^ v413;
                                                                              v416 = (__ROL4__(v415, 14)
                                                                                    + HIWORD(v1694)
                                                                                    * __ROL4__(v415 - 1419157410, 3)) ^ v414;
                                                                              v417 = (v388
                                                                                    * __ROL4__(v416 - 1419157410, 15)
                                                                                    - __ROR4__(v416, 14)) ^ v415;
                                                                              v418 = (v417 >> 3) ^ (WORD1(v1694)
                                                                                                  * (v417 ^ 0x605E)) ^ v416;
                                                                              v419 = v387 ^ v418;
                                                                              v387 = v395;
                                                                              v420 = v385 ^ __ROL4__(v418, 2) ^ (24670 * __ROL4__(v383 ^ v418, 4));
                                                                              v385 = v393;
                                                                              v421 = v420 ^ v417;
                                                                              *(v384 - 4) = v421;
                                                                              *v384 = v419;
                                                                              v384 += 8;
                                                                              v422 = __ROR4__(v421, 8);
                                                                              *(v384 - 13) = v422;
                                                                              v423 = __ROR4__(v419, 8);
                                                                              *(v384 - 9) = v423;
                                                                              v424 = __ROR4__(v422, 8);
                                                                              *(v384 - 14) = v424;
                                                                              v425 = __ROR4__(v423, 8);
                                                                              *(v384 - 10) = v425;
                                                                              v426 = __ROR4__(v424, 8);
                                                                              v427 = __ROR4__(v425, 8);
                                                                              *(v384 - 15) = v426;
                                                                              *(v384 - 11) = v427;
                                                                              LODWORD(v92) = __ROR4__(v427, 8);
                                                                              v381 = __ROR4__(v426, 8);
                                                                              --v389;
                                                                            }
                                                                            while ( v389 );
                                                                            v365 = 0;
                                                                            v173 = v1472;
                                                                            v176 = v1497;
                                                                            v174 = v1387;
                                                                            v363 = v1491;
                                                                            v361 = Sized;
                                                                          }
                                                                          for ( n = 0LL; n < v361; ++n )
                                                                            v365 ^= *((_BYTE *)v363 + n);
                                                                          v429 = v1501;
                                                                          v430 = v1521;
                                                                          if ( v365 != *(_QWORD *)&Srcb[v361] )
                                                                          {
                                                                            MemoryFree(v363);
                                                                            v92 = 0LL;
                                                                            goto LABEL_508;
                                                                          }
                                                                          v1579 = v363;
                                                                          v1515 = 0;
                                                                          if ( (unsigned int)v361 >= 4 )
                                                                          {
                                                                            v1314 = *v363;
                                                                            v431 = RtlULongLongAdd(v363, 4LL, &v1579);
                                                                            v1491 = v432;
                                                                            v295 = v431;
                                                                            v1521 = v433;
                                                                            v1501 = v429;
                                                                            if ( v431 < 0 )
                                                                              goto LABEL_376;
                                                                            v434 = RtlUIntAdd(0LL, 4LL, &v1515);
                                                                            v1491 = v363;
                                                                            v295 = v434;
                                                                            v1521 = v430;
                                                                            v435 = v173;
                                                                            v1501 = v429;
                                                                            if ( v434 < 0 )
                                                                              goto LABEL_376;
                                                                            if ( (unsigned int)Sized - v1515 < 4 )
                                                                              goto LABEL_523;
                                                                            v1379 = *(_DWORD *)v1579;
                                                                            v295 = RtlULongLongAdd(v1579, 4LL, &v1579);
                                                                            v1491 = v436;
                                                                            v1521 = v437;
                                                                            v1501 = v429;
                                                                            if ( v295 < 0 )
                                                                              goto LABEL_376;
                                                                            v438 = RtlUIntAdd(v1515, 4LL, &v1515);
                                                                            v1491 = v363;
                                                                            v295 = v438;
                                                                            v1521 = v430;
                                                                            v435 = v173;
                                                                            v1501 = v429;
                                                                            if ( v438 < 0 )
                                                                              goto LABEL_376;
                                                                            if ( (unsigned int)Sized - v1515 < v1379 )
                                                                            {
LABEL_523:
                                                                              v173 = v435;
                                                                            }
                                                                            else
                                                                            {
                                                                              v295 = RtlUIntAdd(v1515, v1379, &v1515);
                                                                              v1491 = v363;
                                                                              v1521 = v430;
                                                                              v1501 = v429;
                                                                              if ( v295 < 0 )
                                                                                goto LABEL_376;
                                                                              if ( (char *)v363 + (unsigned int)Sized >= (char *)v1579 + v1379
                                                                                && (unsigned __int64)v363
                                                                                 + (unsigned int)Sized
                                                                                 - (unsigned __int64)v1379
                                                                                 - (_QWORD)v1579 < 8 )
                                                                              {
                                                                                v1491 = v363;
                                                                                Srcc = 0LL;
                                                                                v439 = 0LL;
                                                                                v1401 = 0;
                                                                                v295 = 0;
                                                                                v1521 = v430;
                                                                                v1501 = v429;
                                                                                if ( !v1579 )
                                                                                  goto LABEL_536;
                                                                                Sizee = v1579;
                                                                                v295 = RtlULongLongAdd(
                                                                                         v1579,
                                                                                         v1379,
                                                                                         &v1580);
                                                                                v1491 = v440;
                                                                                v1521 = v441;
                                                                                v1501 = v429;
                                                                                if ( v295 < 0 )
                                                                                {
LABEL_539:
                                                                                  v92 = 0LL;
LABEL_545:
                                                                                  if ( v295 >= 0
                                                                                    && v1314 != LODWORD(v1625[0]) )
                                                                                  {
                                                                                    v295 = -1073741762;
                                                                                  }
                                                                                  goto LABEL_377;
                                                                                }
                                                                                v442 = (void *)v1580;
                                                                                v1491 = v440;
                                                                                v1521 = v441;
                                                                                v1501 = v429;
                                                                                if ( (unsigned __int64)Sizee < v1580 )
                                                                                {
                                                                                  v443 = v440;
                                                                                  v1521 = v441;
                                                                                  v1491 = v440;
                                                                                  v444 = Sizee;
                                                                                  v1501 = v429;
                                                                                  while ( 1 )
                                                                                  {
                                                                                    v1482 = v443;
                                                                                    v295 = RtlULongLongAdd(
                                                                                             v444,
                                                                                             4LL,
                                                                                             &v1581);
                                                                                    if ( v295 < 0 )
                                                                                      goto LABEL_539;
                                                                                    if ( v1581 > v446 )
                                                                                      goto LABEL_532;
                                                                                    v295 = RtlUIntAdd(
                                                                                             4LL,
                                                                                             *v445,
                                                                                             &v1516);
                                                                                    if ( v295 < 0 )
                                                                                      goto LABEL_376;
                                                                                    v295 = RtlULongLongAdd(
                                                                                             v447,
                                                                                             v1516,
                                                                                             &v1582);
                                                                                    v1491 = v1482;
                                                                                    v1521 = v448;
                                                                                    v1501 = v429;
                                                                                    if ( v295 < 0 )
                                                                                      goto LABEL_539;
                                                                                    v444 = v1582;
                                                                                    v1491 = v1482;
                                                                                    v1521 = v448;
                                                                                    v1501 = v429;
                                                                                    if ( v1582 > v442 )
                                                                                      goto LABEL_532;
                                                                                    ++v1401;
                                                                                    if ( v1582 >= v442 )
                                                                                    {
                                                                                      v1491 = v1482;
                                                                                      v1501 = v429;
                                                                                      v1521 = v448;
                                                                                      goto LABEL_534;
                                                                                    }
                                                                                    v443 = v1482;
                                                                                  }
                                                                                }
                                                                                v444 = Sizee;
LABEL_534:
                                                                                if ( v444 == v442 )
                                                                                {
                                                                                  v439 = 0LL;
LABEL_536:
                                                                                  v92 = 0LL;
                                                                                  if ( v1379 )
                                                                                  {
                                                                                    v449 = GetProcessHeap();
                                                                                    v450 = v1379;
                                                                                    v451 = HeapAlloc(v449, 8u, v1379);
                                                                                    v92 = 0LL;
                                                                                    Srcc = v451;
                                                                                    v439 = v451;
                                                                                    if ( !v451 )
                                                                                    {
                                                                                      v295 = -1073741801;
                                                                                      goto LABEL_377;
                                                                                    }
                                                                                    v295 = 0;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    v450 = 0LL;
                                                                                  }
                                                                                  if ( v1579 )
                                                                                  {
                                                                                    memcpy_0(v439, v1579, v450);
                                                                                    v439 = Srcc;
                                                                                    v92 = 0LL;
                                                                                  }
                                                                                  LODWORD(v1625[0]) = v1401;
                                                                                  v1625[1] = v439;
                                                                                  goto LABEL_545;
                                                                                }
LABEL_532:
                                                                                v295 = -1073741811;
LABEL_376:
                                                                                v92 = 0LL;
LABEL_377:
                                                                                v91 = v295 | 0x10000000;
LABEL_378:
                                                                                v1397 = v91;
                                                                                goto LABEL_379;
                                                                              }
                                                                            }
                                                                            v1501 = v429;
                                                                          }
                                                                          v295 = -1073741762;
                                                                          v1491 = v363;
                                                                          v1521 = v430;
                                                                          goto LABEL_376;
                                                                        }
                                                                        goto LABEL_449;
                                                                      }
LABEL_548:
                                                                      v91 = -805306219;
                                                                      goto LABEL_549;
                                                                    }
                                                                  }
                                                                }
                                                              }
LABEL_449:
                                                              v91 = -805306306;
LABEL_549:
                                                              v1501 = v319;
                                                              v173 = v324;
                                                              v174 = v323;
                                                              goto LABEL_550;
                                                            }
                                                          }
                                                          v91 = -805306306;
LABEL_448:
                                                          v1397 = v91;
                                                          v173 = v324;
                                                          v1501 = Sizea;
                                                          v174 = v323;
                                                        }
LABEL_379:
                                                        if ( !v174 )
                                                          goto LABEL_381;
                                                        goto LABEL_380;
                                                      }
LABEL_412:
                                                      v91 = -805306345;
                                                      goto LABEL_378;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          v278 = GetProcessHeap();
                                          HeapFree(v278, 0, v275);
                                        }
                                      }
                                    }
                                  }
                                }
                                v275 = v1501;
                                goto LABEL_346;
                              }
                            }
                          }
                          v251 = -1073741801;
                          v1367 = (void *)*((_QWORD *)v250 + 1);
                          if ( v1367 )
                          {
                            v268 = GetProcessHeap();
                            HeapFree(v268, 0, v1367);
                            *((_QWORD *)v250 + 1) = 0LL;
                          }
                          v1368 = (void *)*((_QWORD *)v250 + 3);
                          if ( v1368 )
                          {
                            v269 = GetProcessHeap();
                            HeapFree(v269, 0, v1368);
                            *((_QWORD *)v250 + 3) = 0LL;
                          }
                          v1369 = (void *)*((_QWORD *)v250 + 5);
                          if ( v1369 )
                          {
                            v270 = GetProcessHeap();
                            HeapFree(v270, 0, v1369);
                            *((_QWORD *)v250 + 5) = 0LL;
                          }
                          v271 = GetProcessHeap();
                          HeapFree(v271, 0, v250);
                        }
                        else
                        {
                          v251 = -1073741801;
                        }
                        v252 = v1488;
                        goto LABEL_309;
                      }
LABEL_228:
                      v89 = 4LL;
                      goto LABEL_229;
                    }
LABEL_253:
                    v101 = v88;
                    if ( v91 < 0 )
                      goto LABEL_228;
                    goto LABEL_254;
                  }
                  v167 = (unsigned int *)lpMem[1];
                  v1573 = (unsigned int *)lpMem[1];
                  if ( v154 )
                  {
                    do
                    {
                      v1397 = RtlUIntAdd(4LL, *v167, &v1503);
                      v91 = v1397;
                      if ( v1397 < 0 )
                        goto LABEL_227;
                      v1397 = RtlULongLongAdd(v167, v1503, &v1573);
                      v91 = v1397;
                      if ( v1397 < 0 )
                        goto LABEL_227;
                      v167 = v1573;
                    }
                    while ( v168 + 1 < v169 );
                  }
                  v1397 = RtlULongLongAdd(v167, 4LL, &v1632);
                  v91 = v1397;
                  if ( v1397 < 0 )
                  {
                    v89 = 4LL;
                    goto LABEL_253;
                  }
                  if ( v167 + 2 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                  {
                    v170 = v1632;
                    v89 = 4LL;
                    *v167 = 4;
                    *v170 = 4;
                    ++LODWORD(lpMem[0]);
                    goto LABEL_254;
                  }
LABEL_226:
                  v91 = -1073741789;
                  v1397 = -1073741789;
LABEL_227:
                  v101 = v88;
                  goto LABEL_228;
                }
                while ( 1 )
                {
                  v1397 = RtlUIntAdd(4LL, *v156, &v1502);
                  v91 = v1397;
                  if ( v1397 < 0 )
                    break;
                  v1397 = RtlULongLongAdd(v156, v1502, &v1572);
                  v91 = v1397;
                  if ( v1397 < 0 )
                    goto LABEL_227;
                  v156 = v1572;
                  if ( v157 + 1 >= v158 )
                    goto LABEL_224;
                }
                v101 = v88;
              }
              v89 = v152;
              goto LABEL_229;
            }
            if ( v142 + 3 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
            {
              v141 = v1629;
              *v142 = 8;
              *v141 = v1460;
              v132 = (int)lpMem[0];
              goto LABEL_183;
            }
LABEL_164:
            v91 = -1073741789;
            goto LABEL_165;
          }
          if ( v134 + 41 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
          {
            v133 = v1627;
            *v134 = 160;
            *v133 = *(_OWORD *)v100;
            v133[1] = *((_OWORD *)v100 + 1);
            v133[2] = *((_OWORD *)v100 + 2);
            v133[3] = *((_OWORD *)v100 + 3);
            v133[4] = *((_OWORD *)v100 + 4);
            v133[5] = *((_OWORD *)v100 + 5);
            v133[6] = *((_OWORD *)v100 + 6);
            v133[7] = *((_OWORD *)v100 + 7);
            v133[8] = *((_OWORD *)v100 + 8);
            v133[9] = *((_OWORD *)v100 + 9);
            v127 = (int)lpMem[0];
            goto LABEL_163;
          }
        }
        v91 = -1073741789;
LABEL_124:
        v1397 = v91;
LABEL_125:
        v97 = v100;
        goto LABEL_126;
      }
    }
  }
LABEL_628:
  v97 = v100;
  v89 = v105;
LABEL_230:
  lpMem[0] = 0LL;
  v159 = lpMem[1];
  if ( lpMem[1] )
  {
    v160 = GetProcessHeap();
    HeapFree(v160, 0, v159);
    v92 = 0LL;
    lpMem[1] = 0LL;
  }
  v1625[0] = 0LL;
  v161 = v1625[1];
  if ( v1625[1] )
  {
    v162 = GetProcessHeap();
    HeapFree(v162, 0, v161);
    v92 = 0LL;
    v1625[1] = 0LL;
  }
  if ( v97 )
  {
    v163 = GetProcessHeap();
    HeapFree(v163, 0, v97);
    v92 = 0LL;
  }
  if ( v1327 )
  {
    v164 = GetProcessHeap();
    HeapFree(v164, 0, v1327);
    v92 = 0LL;
  }
  if ( v91 < 0 )
    goto LABEL_109;
  if ( !v101 )
    goto LABEL_1269;
  g_WarbirdNotificationInformation = v101;
  v1589[0] = v92;
  ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
  v166 = 0LL;
  if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
    goto LABEL_1221;
  v1362 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
  if ( !v1362 )
  {
    GetLastError();
    goto LABEL_1221;
  }
  v484 = ((__int64 (*)(void))off_1807A9198)();
  v485 = g_WarbirdNotificationInformation;
  g_WarbirdPaintInitTime = v484;
  v1316 = g_WarbirdNotificationInformation;
  memset_0(&v1676, 0, 0x70uLL);
  Sizef = 0LL;
  v1713 = 0LL;
  v1696 = 0LL;
  v1714 = 0;
  v1558 = 0LL;
  v1711 = 0LL;
  v1712 = 0LL;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v486 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
  {
LABEL_673:
    g_WarbirdSecureFunctionsRefCount = v486 + 1;
    goto LABEL_674;
  }
  v1380 = 0;
  v1425 = 0;
  v487 = 0LL;
  v1298 = 0;
  v488 = (char *)MemoryAlloc(0x338uLL);
  v1403 = (WCHAR *)v488;
  if ( !v488 )
  {
LABEL_639:
    v1425 = -1073741702;
    goto LABEL_664;
  }
  v489 = -1;
  v490 = v488 + 7;
  v491 = (unsigned __int8 *)&unk_180697D32;
  v492 = 0;
  v493 = 103LL;
  do
  {
    v494 = *(v491 - 1) | (*(v491 - 2) << 8);
    v495 = v491[2] << 8;
    v496 = *v491;
    v491 += 8;
    v497 = *(v491 - 7) | ((v496 | (v494 << 8)) << 8);
    v498 = v497 ^ v492;
    v499 = *(v491 - 3) | ((*(v491 - 4) | ((*(v491 - 5) | v495) << 8)) << 8);
    v500 = v499 ^ (unsigned int)v166 ^ v498 ^ 0xAC987321;
    v501 = (__ROL4__(v500, 10) + 4991 * __ROL4__(v500 + 1419157410, 5)) ^ v498;
    v502 = (43881 * __ROR4__(v501 + 133239679, 9) - __ROL4__(v501, 2)) ^ v500;
    v503 = (24670 * v502 - (v502 >> 13) - 123127970) ^ v501;
    v504 = (2033 * __ROL4__(v503 ^ 0xAB69, 6) - __ROL4__(v503, 2)) ^ v502;
    v505 = (133239679 - (v504 ^ 0xAB69605E)) ^ v503;
    v506 = (43881 * (v505 ^ 0x137F)) ^ __ROR4__(v505, 6) ^ v504;
    v507 = (__ROL4__(v506, 2) + 24670 * __ROR4__(v506 + 133239679, 15)) ^ v505;
    v508 = (2033 * __ROR4__(v507 + 1419157410, 14) - __ROL4__(v507, 8)) ^ v506;
    v509 = __ROR4__(v508, 10) ^ (4991 * __ROR4__(v508 ^ 0xAB69605E, 12)) ^ v507;
    v510 = v508 ^ (v509 >> 10) ^ (43881 * (v509 ^ 0x7F1));
    v511 = (2033 * (__ROR4__(~v510, 5) + 24670)) ^ v509;
    v512 = v510 ^ (v511 - 2033) ^ 0xAB69605E;
    v513 = ((v512 >> 2) + 4991 * __ROL4__(v510 ^ (v511 - 2033) ^ 0xAB6967AF, 2)) ^ v511;
    v514 = (__ROL4__(v513, 7) + 43881 * __ROR4__(v513 - 133239679, 6)) ^ v512;
    v515 = (24670 * (v514 ^ 0x137F) + __ROR4__(v514, 9)) ^ v513;
    v516 = (__ROL4__(v515, 7) + 2033 * __ROL4__(v515 ^ 0xAB69, 5)) ^ v514;
    v517 = v516 ^ v515 ^ 0xAC987321;
    v518 = (4991 * __ROR4__(v517, 3) - 219010071) ^ v516;
    v519 = (24670 * __ROR4__(v518 - 133239679, 1) - __ROR4__(v518, 6)) ^ v517;
    v520 = (__ROL4__(v519, 14) + 2033 * __ROL4__(v519 - 1419157410, 3)) ^ v518;
    v521 = (4991 * __ROL4__(v520 - 1419157410, 15) - __ROR4__(v520, 14)) ^ v519;
    v522 = (v521 >> 3) ^ (43881 * (v521 ^ 0x605E)) ^ v520;
    v523 = 24670 * __ROL4__(v522 ^ 0x7F1137F, 4);
    v524 = v522;
    v525 = v489 ^ v522;
    v489 = v499;
    v526 = (unsigned int)v487 ^ __ROL4__(v524, 2) ^ v523;
    LODWORD(v487) = v497;
    v527 = v526 ^ v521;
    *(v490 - 4) = v527;
    *v490 = v525;
    v490 += 8;
    v528 = __ROR4__(v527, 8);
    *(v490 - 13) = v528;
    v529 = __ROR4__(v525, 8);
    *(v490 - 9) = v529;
    v530 = __ROR4__(v528, 8);
    *(v490 - 14) = v530;
    v531 = __ROR4__(v529, 8);
    *(v490 - 10) = v531;
    v532 = __ROR4__(v530, 8);
    v533 = __ROR4__(v531, 8);
    *(v490 - 15) = v532;
    *(v490 - 11) = v533;
    LODWORD(v166) = __ROR4__(v533, 8);
    v492 = __ROR4__(v532, 8);
    --v493;
  }
  while ( v493 );
  v485 = v1316;
  LODWORD(v166) = 0;
  v91 = v1397;
  v534 = 0LL;
  v535 = 0;
  v487 = 0LL;
  do
    v535 ^= *((_BYTE *)v1403 + v534++);
  while ( v534 < 0x338 );
  if ( v535 != 64LL )
  {
    MemoryFree(v1403);
    goto LABEL_639;
  }
  v487 = v1403;
  *((_BYTE *)v1403 + 823) = 0;
  v536 = v1403;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  if ( !*(_BYTE *)v1403 )
    goto LABEL_665;
  while ( 1 )
  {
    v537 = v536;
    v538 = -1LL;
    do
      ++v538;
    while ( v536[v538] );
    v539 = &v536[v538];
    v540 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1298;
    if ( !GetModuleHandleExW(0, v537, (HMODULE *)v540) )
      break;
    v541 = 0;
    v1425 = 0;
    if ( **(_WORD **)v540 == 23117
      && (v542 = *(int *)(*(_QWORD *)v540 + 60LL), (unsigned int)v542 < 0x10000000)
      && (v543 = *(_QWORD *)v540 + v542, v543 >= *(_QWORD *)v540)
      && *(_DWORD *)v543 == 17744 )
    {
      if ( ((*(_WORD *)(v543 + 24) - 267) & 0xFEFF) == 0 )
      {
        *(_QWORD *)(v540 + 12) = *(_QWORD *)(v543 + 136);
        *((_DWORD *)v540 + 2) = *(_DWORD *)(v543 + 80);
        goto LABEL_653;
      }
      v541 = -1073741811;
    }
    else
    {
      v541 = -1073741701;
    }
    v1425 = v541;
LABEL_653:
    v544 = *(_DWORD *)(v539 + 1);
    v545 = 0;
    v536 = v539 + 3;
    v1321 = v544;
    for ( ii = 0; v545 < v1321; ii = v545 )
    {
      v546 = (const CHAR *)v536;
      v547 = -1LL;
      do
        ++v547;
      while ( *((_BYTE *)v536 + v547) );
      v536 = (WCHAR *)((char *)v536 + v547 + 1);
      if ( v541 >= 0 )
      {
        v548 = (void **)GetProcAddress(*(HMODULE *)v540, v546);
        if ( !v548 )
          goto LABEL_663;
        (&WARBIRD::g_FuncAddress)[v1380] = v548;
        v541 = v1425;
        v545 = ii;
      }
      ++v1380;
      ++v545;
    }
    ++v1298;
    LODWORD(v166) = 0;
    if ( !*(_BYTE *)v536 )
      goto LABEL_664;
  }
  v1425 = -1073741702;
LABEL_663:
  LODWORD(v166) = 0;
LABEL_664:
  if ( v487 )
  {
LABEL_665:
    v549 = GetProcessHeap();
    HeapFree(v549, 0, v487);
  }
  if ( v1425 >= 0 )
  {
    v486 = g_WarbirdSecureFunctionsRefCount;
    goto LABEL_673;
  }
  v550 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v551 = 4LL;
  do
  {
    if ( *v550 )
      FreeLibrary(*v550);
    v550 += 3;
    --v551;
  }
  while ( v551 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_674:
  v1484 = 0;
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  v1590 = 0LL;
  v1635 = 0LL;
  v1381 = 0;
  v1328 = 0LL;
  v1404 = 0LL;
  v1461 = 0LL;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v552 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
  {
LABEL_717:
    g_WarbirdSecureFunctionsRefCount = v552 + 1;
    goto LABEL_718;
  }
  v1426 = 0;
  v1299 = 0;
  v553 = 0LL;
  v1322 = 0;
  v554 = (char *)MemoryAlloc(0x338uLL);
  v1473 = (WCHAR *)v554;
  if ( !v554 )
  {
LABEL_684:
    v1299 = -1073741702;
    goto LABEL_708;
  }
  v555 = -1;
  v556 = v554 + 7;
  v557 = 0;
  v558 = (unsigned __int8 *)&unk_180697D32;
  v559 = 103LL;
  do
  {
    v560 = *(v558 - 1) | (*(v558 - 2) << 8);
    v561 = v558[2] << 8;
    v562 = *v558;
    v558 += 8;
    v563 = *(v558 - 7) | ((v562 | (v560 << 8)) << 8);
    v564 = v563 ^ v557;
    v565 = *(v558 - 3) | ((*(v558 - 4) | ((*(v558 - 5) | v561) << 8)) << 8);
    v566 = v564 ^ v565 ^ (unsigned int)v166 ^ 0xAC987321;
    v567 = (__ROL4__(v566, 10) + 4991 * __ROL4__(v566 + 1419157410, 5)) ^ v564;
    v568 = (43881 * __ROR4__(v567 + 133239679, 9) - __ROL4__(v567, 2)) ^ v566;
    v569 = (24670 * v568 - (v568 >> 13) - 123127970) ^ v567;
    v570 = (2033 * __ROL4__(v569 ^ 0xAB69, 6) - __ROL4__(v569, 2)) ^ v568;
    v571 = (133239679 - (v570 ^ 0xAB69605E)) ^ v569;
    v572 = (43881 * (v571 ^ 0x137F)) ^ __ROR4__(v571, 6) ^ v570;
    v573 = (__ROL4__(v572, 2) + 24670 * __ROR4__(v572 + 133239679, 15)) ^ v571;
    v574 = (2033 * __ROR4__(v573 + 1419157410, 14) - __ROL4__(v573, 8)) ^ v572;
    v575 = __ROR4__(v574, 10) ^ (4991 * __ROR4__(v574 ^ 0xAB69605E, 12)) ^ v573;
    v576 = (v575 >> 10) ^ (43881 * (v575 ^ 0x7F1)) ^ v574;
    v577 = (2033 * (__ROR4__(~v576, 5) + 24670)) ^ v575;
    v578 = v576 ^ (v577 - 2033) ^ 0xAB69605E;
    v579 = ((v578 >> 2) + 4991 * __ROL4__(v576 ^ (v577 - 2033) ^ 0xAB6967AF, 2)) ^ v577;
    v580 = (__ROL4__(v579, 7) + 43881 * __ROR4__(v579 - 133239679, 6)) ^ v578;
    v581 = (24670 * (v580 ^ 0x137F) + __ROR4__(v580, 9)) ^ v579;
    v582 = (__ROL4__(v581, 7) + 2033 * __ROL4__(v581 ^ 0xAB69, 5)) ^ v580;
    v583 = v582 ^ v581 ^ 0xAC987321;
    v584 = (4991 * __ROR4__(v583, 3) - 219010071) ^ v582;
    v585 = (24670 * __ROR4__(v584 - 133239679, 1) - __ROR4__(v584, 6)) ^ v583;
    v586 = (__ROL4__(v585, 14) + 2033 * __ROL4__(v585 - 1419157410, 3)) ^ v584;
    v587 = (4991 * __ROL4__(v586 - 1419157410, 15) - __ROR4__(v586, 14)) ^ v585;
    v588 = (v587 >> 3) ^ (43881 * (v587 ^ 0x605E)) ^ v586;
    v589 = 24670 * __ROL4__(v588 ^ 0x7F1137F, 4);
    v590 = v588;
    v591 = v555 ^ v588;
    v555 = v565;
    v592 = (unsigned int)v553 ^ __ROL4__(v590, 2) ^ v589;
    LODWORD(v553) = v563;
    v593 = v592 ^ v587;
    *(v556 - 4) = v593;
    *v556 = v591;
    v556 += 8;
    v594 = __ROR4__(v593, 8);
    *(v556 - 13) = v594;
    v595 = __ROR4__(v591, 8);
    *(v556 - 9) = v595;
    v596 = __ROR4__(v594, 8);
    *(v556 - 14) = v596;
    v597 = __ROR4__(v595, 8);
    *(v556 - 10) = v597;
    v598 = __ROR4__(v596, 8);
    v599 = __ROR4__(v597, 8);
    *(v556 - 15) = v598;
    *(v556 - 11) = v599;
    LODWORD(v166) = __ROR4__(v599, 8);
    v557 = __ROR4__(v598, 8);
    --v559;
  }
  while ( v559 );
  v600 = 0;
  v485 = v1316;
  v601 = 0LL;
  v91 = v1397;
  v553 = 0LL;
  do
    v600 ^= *((_BYTE *)v1473 + v601++);
  while ( v601 < 0x338 );
  if ( v600 != 64LL )
  {
    MemoryFree(v1473);
    goto LABEL_684;
  }
  v553 = v1473;
  *((_BYTE *)v1473 + 823) = 0;
  v602 = v1473;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  if ( !*(_BYTE *)v1473 )
    goto LABEL_709;
  while ( 2 )
  {
    v603 = v602;
    v604 = -1LL;
    do
      ++v604;
    while ( v602[v604] );
    v605 = &v602[v604];
    v606 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1322);
    if ( GetModuleHandleExW(0, v603, v606) )
    {
      v607 = 0;
      v1299 = 0;
      if ( *(_WORD *)*v606 == 23117
        && (v608 = *((int *)*v606 + 15), (unsigned int)v608 < 0x10000000)
        && (v609 = (char *)*v606 + v608, v609 >= (char *)*v606)
        && *(_DWORD *)v609 == 17744 )
      {
        if ( ((*((_WORD *)v609 + 12) - 267) & 0xFEFF) != 0 )
        {
          v607 = -1073741811;
          goto LABEL_696;
        }
        *(HMODULE *)((char *)v606 + 12) = (HMODULE)*((_QWORD *)v609 + 17);
        *((_DWORD *)v606 + 2) = *((_DWORD *)v609 + 20);
      }
      else
      {
        v607 = -1073741701;
LABEL_696:
        v1299 = v607;
      }
      v610 = *(_DWORD *)(v605 + 1);
      v611 = 0;
      v602 = v605 + 3;
      v1317 = v610;
      for ( LODWORD(v1488) = 0; v611 < v1317; LODWORD(v1488) = v611 )
      {
        v612 = (const CHAR *)v602;
        v613 = -1LL;
        do
          ++v613;
        while ( *((_BYTE *)v602 + v613) );
        v602 = (WCHAR *)((char *)v602 + v613 + 1);
        if ( v607 >= 0 )
        {
          v614 = (void **)GetProcAddress(*v606, v612);
          if ( !v614 )
            goto LABEL_708;
          (&WARBIRD::g_FuncAddress)[v1426] = v614;
          v607 = v1299;
          v611 = (unsigned int)v1488;
        }
        ++v1426;
        ++v611;
      }
      ++v1322;
      if ( !*(_BYTE *)v602 )
        goto LABEL_708;
      continue;
    }
    break;
  }
  v1299 = -1073741702;
LABEL_708:
  if ( v553 )
  {
LABEL_709:
    v615 = GetProcessHeap();
    HeapFree(v615, 0, v553);
  }
  if ( v1299 >= 0 )
  {
    v552 = g_WarbirdSecureFunctionsRefCount;
    goto LABEL_717;
  }
  v616 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v617 = 4LL;
  do
  {
    if ( *v616 )
      FreeLibrary(*v616);
    v616 += 3;
    --v617;
  }
  while ( v617 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_718:
  LODWORD(v618) = 0;
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  memset_0(&v1676, 0, 0x70uLL);
  v1751[0] = (v485 >> 4) & 0xF;
  v619 = v485 & 0xF;
  LODWORD(v1488) = v619;
  v1751[1] = (v485 >> 8) & 0xF;
  v1696 = 0LL;
  v1751[2] = (v485 >> 12) & 0xF;
  v1388 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
  v1318 = -1;
  if ( v1388 )
  {
    v622 = 0LL;
    v1591 = 0LL;
    v1592 = 0LL;
    v621 = 0;
    v1593 = 0LL;
    v1594 = 0LL;
    v1595 = 0LL;
    v1596 = 0LL;
    v1427 = 0;
    v1518 = 0;
    if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1807A91A0)(
                          8LL,
                          &v1487,
                          0LL,
                          &v1518) )
    {
      v623 = GetLastError();
LABEL_726:
      v621 = v623;
      if ( v623 > 0 )
        v621 = (unsigned __int16)v623 | 0x80070000;
      if ( v621 >= 0 )
        v621 = -2147467259;
LABEL_743:
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1596);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1595);
      if ( v621 < 0 )
      {
        v639 = v1593;
LABEL_762:
        if ( v1592 )
          memset(v1592, 0, v639);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1594);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1592);
        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1591);
        if ( v621 < 0 )
          goto LABEL_935;
        v1678 = *v1590;
        v1679 = v1590[1];
        v640 = v1590[2];
        v1636 = 0LL;
        v1680 = v640;
        LODWORD(v1636) = 16;
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1807A9268)(
                              66LL,
                              0LL,
                              &v1636,
                              0LL) )
        {
          v641 = GetLastError();
          v621 = v641;
          if ( v641 > 0 )
            v621 = (unsigned __int16)v641 | 0x80070000;
          v1677 = 0;
          if ( v621 >= 0 )
            v621 = -2147467259;
          goto LABEL_935;
        }
        v1677 = BYTE4(v1636) & 1;
        v719 = (int)v1488;
        v1429 = 42;
        if ( (_DWORD)v1488 == 1 )
        {
          v1484 = 42;
        }
        else
        {
          if ( (_DWORD)v1488 != 2 )
          {
            if ( (_DWORD)v1488 == 3 )
            {
              v1484 = 225;
              v1381 = 225;
            }
LABEL_828:
            v720 = 96;
            v1302 = 96;
            memset_0(v1740, 0, 0xDCuLL);
            v1741 = 220;
            v621 = 0;
            if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *))off_1807A91E0)(
                                 0LL,
                                 0xFFFFFFFFLL,
                                 v1740) )
            {
              v720 = v1742;
              *((_QWORD *)&v1635 + 1) = v1743;
              *(_QWORD *)&v1635 = 0LL;
              if ( v1742 < 0x60u )
                v720 = 96;
              v1302 = v720;
            }
            v618 = (__int64)v1461;
            if ( v719 == 1 )
              v618 = (__int64)v1328;
            memset_0(v1731, 0, 0x5CuLL);
            v721 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
            if ( !v721 )
            {
              v722 = GetLastError();
              LODWORD(v618) = 0;
              v621 = v722;
              if ( v722 > 0 )
                v621 = (unsigned __int16)v722 | 0x80070000;
              if ( v621 >= 0 )
                v621 = -2147467259;
              goto LABEL_935;
            }
            v723 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1484, v720, 72LL);
            v1731[4] = 400;
            v1732 = 5;
            v1731[0] = -v723;
            StringCchCopyW(v1733, 0x20uLL, (const wchar_t *)v618);
            v724 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1731);
            LODWORD(v618) = 0;
            if ( v724 )
            {
              v1681 = (wchar_t *)v724;
            }
            else
            {
              v725 = GetLastError();
              v621 = v725;
              if ( v725 > 0 )
                v621 = (unsigned __int16)v725 | 0x80070000;
              if ( v621 >= 0 )
                v621 = -2147467259;
            }
            ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v721);
            if ( v621 < 0 )
              goto LABEL_935;
            v619 = (int)v1488;
            v726 = v1461;
            if ( (_DWORD)v1488 == 1 )
              v726 = v1328;
            v1462 = v726;
            memset_0(v1734, 0, 0x5CuLL);
            v621 = 0;
            v618 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
            if ( !v618 )
            {
              v727 = GetLastError();
              v621 = v727;
              if ( v727 > 0 )
                v621 = (unsigned __int16)v727 | 0x80070000;
              if ( v621 < 0 )
                goto LABEL_936;
              goto LABEL_854;
            }
            v728 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1381, v720, 72LL);
            v1734[4] = 400;
            v1734[0] = -v728;
            v1735 = 5;
            StringCchCopyW(v1736, 0x20uLL, v1462);
            v729 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1734);
            if ( v729 )
            {
              v1682 = (wchar_t *)v729;
            }
            else
            {
              v730 = GetLastError();
              v621 = v730;
              if ( v730 > 0 )
                v621 = (unsigned __int16)v730 | 0x80070000;
              if ( v621 >= 0 )
                v621 = -2147467259;
            }
            ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v618);
            LODWORD(v618) = 0;
            if ( v621 < 0 )
              goto LABEL_936;
            v731 = 0;
            if ( v619 != 1 )
            {
              if ( v619 == 2 )
              {
                v731 = 0;
                LODWORD(v618) = SDWORD2(v1635) / 4;
LABEL_866:
                *((_QWORD *)&v1696 + 1) = __PAIR64__(v731, v618);
                if ( v619 == 1 )
                {
                  v732 = 150;
                  v1382 = 32;
                }
                else
                {
                  if ( (unsigned int)(v619 - 2) > 1 )
                  {
                    v733 = v1487;
                    v1382 = v1487;
                    v1429 = v1487;
                    v732 = v1487;
                    goto LABEL_873;
                  }
                  v732 = 0;
                  v1429 = 0;
                  v1382 = 0;
                }
                v733 = 0;
LABEL_873:
                v1485 = v732;
                v734 = v1678;
                v735 = v618 - v732 - v733;
                v621 = 0;
                DWORD2(v1686) = v735;
                DWORD2(v1685) = v735;
                v1329 = (wchar_t *)((__int64 (__fastcall *)(void *, wchar_t *))off_1807A9178)(v1388, v1681);
                if ( !(unsigned int)((__int64 (__fastcall *)(void *, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                      v1388,
                                      v734,
                                      0xFFFFFFFFLL,
                                      &v1685,
                                      3152,
                                      0LL) )
                  v621 = -2147467259;
                if ( v1329 )
                  ((void (__fastcall *)(void *, wchar_t *))off_1807A9178)(v1388, v1329);
                if ( v621 >= 0 )
                {
                  v736 = v1679;
                  v621 = 0;
                  v1330 = (wchar_t *)((__int64 (__fastcall *)(void *, wchar_t *))off_1807A9178)(v1388, v1682);
                  if ( !(unsigned int)((__int64 (__fastcall *)(void *, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                        v1388,
                                        v736,
                                        0xFFFFFFFFLL,
                                        &v1686,
                                        3152,
                                        0LL) )
                    v621 = -2147467259;
                  if ( v1330 )
                    ((void (__fastcall *)(void *, wchar_t *))off_1807A9178)(v1388, v1330);
                  if ( v621 >= 0 )
                  {
                    if ( (unsigned int)((_DWORD)v1488 - 2) <= 1 )
                    {
                      v735 = DWORD2(v1686);
                      if ( SDWORD2(v1685) > SDWORD2(v1686) )
                        v735 = DWORD2(v1685);
                    }
                    if ( v1676 )
                    {
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                        &v1685,
                        v735 + v733 - DWORD2(v1685),
                        v1429);
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                        &v1686,
                        v735 + v733 - DWORD2(v1686),
                        (unsigned int)(v1382 + HIDWORD(v1685)));
                    }
                    else
                    {
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(&v1685, v1485, v1429);
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                        &v1686,
                        v1485,
                        (unsigned int)(v1382 + HIDWORD(v1685)));
                    }
                    v619 = (int)v1488;
                    if ( (unsigned int)((_DWORD)v1488 - 2) <= 1 )
                    {
                      *((_QWORD *)&v1696 + 1) = __PAIR64__(HIDWORD(v1686), v735);
                      v1684 = -5723992;
                      goto LABEL_920;
                    }
                    if ( (_DWORD)v1488 != 1 )
                      goto LABEL_920;
                    v1684 = 0xFFFFFF;
                    memset_0(v1737, 0, 0x5CuLL);
                    v621 = 0;
                    v737 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
                    if ( v737 )
                    {
                      v739 = v1302;
                      v740 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1807A91B8)(11LL, v1302);
                      v1737[4] = 400;
                      v1737[0] = -v740;
                      v1738 = 5;
                      StringCchCopyW(v1739, 0x20uLL, v1404);
                      v741 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1737);
                      if ( v741 )
                      {
                        v1683 = v741;
                      }
                      else
                      {
                        v621 = GetLastError();
                        v742 = v621 < 0;
                        if ( v621 > 0 )
                        {
                          v621 = (unsigned __int16)v621 | 0x80070000;
                          v742 = v621 < 0;
                        }
                        if ( !v742 )
                          v621 = -2147467259;
                      }
                      ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v737);
                    }
                    else
                    {
                      v621 = GetLastError();
                      v738 = v621 < 0;
                      if ( v621 > 0 )
                      {
                        v621 = (unsigned __int16)v621 | 0x80070000;
                        v738 = v621 < 0;
                      }
                      if ( !v738 )
                      {
                        LODWORD(v618) = 0;
LABEL_854:
                        v621 = -2147467259;
LABEL_936:
                        ((void (__fastcall *)(_QWORD, void *))off_1807A9260)(0LL, v1388);
                        goto LABEL_937;
                      }
                      v739 = v1302;
                    }
                    if ( v621 >= 0 )
                    {
                      v743 = v1680;
                      v621 = 0;
                      v1689 = v735;
                      v744 = ((__int64 (__fastcall *)(void *, __int64))off_1807A9178)(v1388, v1683);
                      if ( !(unsigned int)((__int64 (__fastcall *)(void *, void *, __int64, unsigned int *, int, _QWORD))off_1807A91D8)(
                                            v1388,
                                            v743,
                                            0xFFFFFFFFLL,
                                            &v1687,
                                            1120,
                                            0LL) )
                        v621 = -2147467259;
                      if ( v744 )
                        ((void (__fastcall *)(void *, __int64))off_1807A9178)(v1388, v744);
                      LODWORD(v618) = 0;
                      if ( v621 < 0 )
                        goto LABEL_935;
                      v745 = v1689 + 24;
                      if ( (int)(v1689 + 24) < 90 )
                        v745 = 90;
                      v1689 = v745;
                      v1690 = 32;
                      v1687 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1687, v739, 96LL);
                      v1688 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1688, v739, 96LL);
                      v1689 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1689, v739, 96LL);
                      v1690 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(v1690, v739, 96LL);
                      if ( v1676 )
                      {
                        v746 = (unsigned int)v1685;
                        if ( (int)v1685 >= (int)v1686 )
                          v746 = (unsigned int)v1686;
                      }
                      else
                      {
                        v747 = DWORD2(v1685);
                        if ( SDWORD2(v1685) <= SDWORD2(v1686) )
                          v747 = DWORD2(v1686);
                        v746 = v1687 + v747 - v1689;
                      }
                      ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_1807A9250)(
                        &v1687,
                        v746,
                        (unsigned int)(HIDWORD(v1686) + 36));
                      v619 = (int)v1488;
LABEL_920:
                      v748 = v1676;
                      v749 = HIDWORD(v1696);
                      v750 = DWORD2(v1696);
                      switch ( v619 )
                      {
                        case 1:
                          LODWORD(v618) = 0;
                          *(_QWORD *)&v1696 = 0LL;
                          goto LABEL_929;
                        case 2:
                          v1708 = 0LL;
                          v1710 = 0LL;
                          v1709 = 0LL;
                          v754 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1807A9248)(0LL, 1LL);
                          LODWORD(v1708) = 40;
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1807A9208)(v754, &v1708) )
                            goto LABEL_928;
                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1709 + 4);
                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1709 + 12);
                          if ( v748 )
                            v752 = DWORD1(v1709) + 5 * HIDWORD(v1709) / 100;
                          else
                            v752 = 95 * (HIDWORD(v1709) - v750) / 100;
                          v753 = 95 * (v1710 - v749);
                          break;
                        case 3:
                          v1705 = 0LL;
                          v1707 = 0LL;
                          v1706 = 0LL;
                          v751 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1807A9248)(0LL, 1LL);
                          LODWORD(v1705) = 40;
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1807A9208)(v751, &v1705) )
                            goto LABEL_928;
                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1706 + 4);
                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1706 + 12);
                          v752 = 50 * (HIDWORD(v1706) - v750) / 100;
                          v753 = 50 * (v1707 - v749);
                          break;
                        default:
                          goto LABEL_928;
                      }
                      LODWORD(v1696) = v752;
                      DWORD1(v1696) = v753 / 100;
LABEL_928:
                      LODWORD(v618) = 0;
LABEL_929:
                      v621 = 0;
                      goto LABEL_936;
                    }
                  }
                }
                LODWORD(v618) = 0;
LABEL_935:
                v619 = (int)v1488;
                goto LABEL_936;
              }
              if ( v619 != 3 )
                goto LABEL_866;
            }
            LODWORD(v618) = DWORD2(v1635);
            v731 = HIDWORD(v1635);
            goto LABEL_866;
          }
          v1484 = 15;
        }
        v1381 = 11;
        goto LABEL_828;
      }
      v628 = 0;
      v629 = 0;
      v1300 = 0;
      if ( v1427 )
      {
        v630 = 0LL;
        while ( 2 )
        {
          v631 = 0;
          v632 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
          do
          {
            if ( v622[v630] == *v632 )
            {
              v628 = v631;
              v1300 = v631;
              goto LABEL_752;
            }
            ++v631;
            ++v632;
          }
          while ( v631 < 0x26 );
          ++v629;
          ++v630;
          if ( v629 < v1427 )
            continue;
          break;
        }
      }
LABEL_752:
      v633 = v628;
      v1428 = 0;
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))off_1807A91A8)(
                           `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v628],
                           v1752,
                           85LL)
        && (int)((__int64 (__fastcall *)(_BYTE *, __int64, char *))off_1807A9190)(v1752, 88LL, v1703) > 0 )
      {
        v1428 = (v1704 >> 27) & 1;
        LOWORD(v618) = 0;
      }
      v634 = L"Segoe UI Light";
      v635 = 19LL;
      v636 = (const wchar_t **)v1750;
      do
      {
        *v636 = v634;
        v637 = -1LL;
        do
          ++v637;
        while ( v634[v637] != (_WORD)v618 );
        ++v636;
        v634 += v637 + 1;
        --v635;
      }
      while ( v635 );
      v1328 = (wchar_t *)v1750[(unsigned __int8)`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping[3 * v633]];
      v1404 = (const wchar_t *)v1750[(unsigned __int8)byte_18069BC41[3 * v633]];
      v1461 = (wchar_t *)v1750[(unsigned __int8)byte_18069BC42[3 * v633]];
      v638 = (char *)MemoryAlloc(0x1C90uLL);
      v1474 = (WCHAR *)v638;
      if ( !v638 )
      {
        v621 = -2147024882;
        v639 = 0LL;
LABEL_761:
        LODWORD(v618) = 0;
        goto LABEL_762;
      }
      v642 = v638 + 7;
      v643 = -1;
      v644 = (unsigned __int8 *)&unk_1806FCA92;
      v645 = 0;
      v646 = 0;
      v647 = 0;
      v648 = 914LL;
      do
      {
        v649 = *(v644 - 1) | (*(v644 - 2) << 8);
        v650 = v644[2] << 8;
        v651 = *v644;
        v644 += 8;
        v652 = *(v644 - 7) | ((v651 | (v649 << 8)) << 8);
        v653 = v652 ^ v647;
        v654 = *(v644 - 3) | ((*(v644 - 4) | ((*(v644 - 5) | v650) << 8)) << 8);
        v655 = v653 ^ v654 ^ v646 ^ 0xAC987321;
        v656 = (__ROL4__(v655, 10) + 4991 * __ROL4__(v655 + 1419157410, 5)) ^ v653;
        v657 = (43881 * __ROR4__(v656 + 133239679, 9) - __ROL4__(v656, 2)) ^ v655;
        v658 = (24670 * v657 - (v657 >> 13) - 123127970) ^ v656;
        v659 = (2033 * __ROL4__(v658 ^ 0xAB69, 6) - __ROL4__(v658, 2)) ^ v657;
        v660 = (133239679 - (v659 ^ 0xAB69605E)) ^ v658;
        v661 = (43881 * (v660 ^ 0x137F)) ^ __ROR4__(v660, 6) ^ v659;
        v662 = (__ROL4__(v661, 2) + 24670 * __ROR4__(v661 + 133239679, 15)) ^ v660;
        v663 = (2033 * __ROR4__(v662 + 1419157410, 14) - __ROL4__(v662, 8)) ^ v661;
        v664 = __ROR4__(v663, 10) ^ (4991 * __ROR4__(v663 ^ 0xAB69605E, 12)) ^ v662;
        v665 = (v664 >> 10) ^ (43881 * (v664 ^ 0x7F1)) ^ v663;
        v666 = (2033 * (__ROR4__(~v665, 5) + 24670)) ^ v664;
        v667 = v665 ^ (v666 - 2033) ^ 0xAB69605E;
        v668 = ((v667 >> 2) + 4991 * __ROL4__(v665 ^ (v666 - 2033) ^ 0xAB6967AF, 2)) ^ v666;
        v669 = (__ROL4__(v668, 7) + 43881 * __ROR4__(v668 - 133239679, 6)) ^ v667;
        v670 = (24670 * (v669 ^ 0x137F) + __ROR4__(v669, 9)) ^ v668;
        v671 = (__ROL4__(v670, 7) + 2033 * __ROL4__(v670 ^ 0xAB69, 5)) ^ v669;
        v672 = v671 ^ v670 ^ 0xAC987321;
        v673 = (4991 * __ROR4__(v672, 3) - 219010071) ^ v671;
        v674 = (24670 * __ROR4__(v673 - 133239679, 1) - __ROR4__(v673, 6)) ^ v672;
        v675 = (__ROL4__(v674, 14) + 2033 * __ROL4__(v674 - 1419157410, 3)) ^ v673;
        v676 = (4991 * __ROL4__(v675 - 1419157410, 15) - __ROR4__(v675, 14)) ^ v674;
        v677 = (v676 >> 3) ^ (43881 * (v676 ^ 0x605E)) ^ v675;
        v678 = 24670 * __ROL4__(v677 ^ 0x7F1137F, 4);
        v679 = v677;
        v680 = v643 ^ v677;
        v643 = v654;
        v681 = v645 ^ __ROL4__(v679, 2) ^ v678;
        v645 = v652;
        v682 = v681 ^ v676;
        *(v642 - 4) = v682;
        *v642 = v680;
        v642 += 8;
        v683 = __ROR4__(v682, 8);
        *(v642 - 13) = v683;
        v684 = __ROR4__(v680, 8);
        *(v642 - 9) = v684;
        v685 = __ROR4__(v683, 8);
        *(v642 - 14) = v685;
        v686 = __ROR4__(v684, 8);
        *(v642 - 10) = v686;
        v687 = __ROR4__(v685, 8);
        v688 = __ROR4__(v686, 8);
        *(v642 - 15) = v687;
        *(v642 - 11) = v688;
        v646 = __ROR4__(v688, 8);
        v647 = __ROR4__(v687, 8);
        --v648;
      }
      while ( v648 );
      v91 = v1397;
      v689 = v1474;
      v690 = 0LL;
      v691 = 0LL;
      v639 = 7312LL;
      do
      {
        v692 = _mm_loadu_si128((const __m128i *)&v1474[v690]);
        v690 += 8LL;
        v693 = _mm_xor_si128(v692, v691);
        v691 = v693;
      }
      while ( v690 < 3656 );
      v694 = _mm_xor_si128(v693, _mm_srli_si128(v693, 8));
      v695 = _mm_xor_si128(v694, _mm_srli_si128(v694, 4));
      v696 = _mm_xor_si128(v695, _mm_srli_si128(v695, 2));
      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v696, _mm_srli_si128(v696, 1))) != 127LL )
      {
        MemoryFree(v1474);
        v639 = v1593;
        v621 = -1073425151;
        goto LABEL_761;
      }
      v697 = (WCHAR **)v1744;
      v1592 = v1474;
      v621 = 0;
      v1593 = 7312LL;
      v698 = 6LL;
      do
      {
        for ( jj = 0; jj < 0x26; ++jj )
        {
          if ( v1300 == jj )
            *v697 = v689;
          v700 = -1LL;
          do
            ++v700;
          while ( *((_BYTE *)v689 + v700) );
          v689 = (WCHAR *)((char *)v689 + v700 + 1);
        }
        ++v697;
        --v698;
      }
      while ( v698 );
      v701 = (void **)MemoryAlloc(0x18uLL);
      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1594);
      if ( !v701 )
      {
        v702 = 0LL;
        v621 = -2147024882;
        v1594 = 0LL;
LABEL_812:
        if ( v702 )
        {
          v716 = 3LL;
          do
          {
            v717 = *v702;
            if ( *v702 )
            {
              v718 = -1LL;
              do
                ++v718;
              while ( v717[v718] );
              memset(v717, 0, 2 * v718 + 2);
              MemoryFree(*v702);
              v716 = lpModuleName;
            }
            ++v702;
            lpModuleName = --v716;
          }
          while ( v716 );
        }
        goto LABEL_761;
      }
      v1301 = 0;
      v702 = v701;
      v703 = v1751;
      v1594 = v701;
      v704 = (WCHAR *)v701;
      v1496 = v1751;
      *(_OWORD *)v701 = 0LL;
      v701[2] = 0LL;
      v705 = 0;
      v1475 = (WCHAR *)v701;
      while ( 2 )
      {
        v706 = *v703;
        v707 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
        v708 = 0LL;
        while ( v706 != *v707 )
        {
          v708 = (unsigned int)(v708 + 1);
          ++v707;
          if ( (unsigned int)v708 >= 6 )
            goto LABEL_800;
        }
        v709 = v1744[v708];
        v710 = -1LL;
        do
          ++v710;
        while ( *(_BYTE *)(v710 + v709) );
        v711 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1807A91C0)(
                 65001LL,
                 0LL,
                 v709,
                 (unsigned int)(v710 + 1),
                 0LL,
                 0);
        v1323 = v711;
        if ( v711 )
        {
          v712 = MemoryAlloc(2LL * v711);
          *(_QWORD *)v1475 = v712;
          if ( v712 )
          {
            v713 = -1LL;
            do
              ++v713;
            while ( *(_BYTE *)(v713 + v709) );
            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1807A91C0)(
                                  65001LL,
                                  0LL,
                                  v709,
                                  (unsigned int)(v713 + 1),
                                  v712,
                                  v1323) )
            {
              v714 = GetLastError();
              v621 = v714;
              if ( v714 > 0 )
                v621 = (unsigned __int16)v714 | 0x80070000;
              v639 = v1593;
              if ( v621 >= 0 )
                v621 = -2147467259;
              goto LABEL_812;
            }
            v704 = v1475;
            v705 = v1301;
LABEL_800:
            ++v705;
            v703 = (__int16 *)((char *)v1496 + 2);
            v1301 = v705;
            v704 += 4;
            v1496 = (char *)v1496 + 2;
            v1475 = v704;
            if ( v705 < 3 )
              continue;
            v702 = 0LL;
            v1594 = 0LL;
            v1590 = v701;
            v1676 = v1428;
          }
          else
          {
            v621 = -2147024882;
          }
        }
        else
        {
          v715 = GetLastError();
          v621 = v715;
          if ( v715 > 0 )
            v621 = (unsigned __int16)v715 | 0x80070000;
          if ( v621 >= 0 )
            v621 = -2147467259;
        }
        break;
      }
      v639 = v1593;
      goto LABEL_812;
    }
    v618 = (__int64)MemoryAlloc(2LL * v1518);
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1595);
    if ( !v618 )
    {
      v1595 = 0LL;
      v621 = -2147024882;
      goto LABEL_743;
    }
    v1595 = v618;
    v624 = MemoryAlloc(4LL * (v1487 + 1));
    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1596);
    if ( v624 )
    {
      v1596 = v624;
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))off_1807A91A0)(
                            8LL,
                            &v1487,
                            v618,
                            &v1518) )
      {
        v623 = GetLastError();
        LODWORD(v618) = 0;
        goto LABEL_726;
      }
      v625 = v624;
      if ( v1487 )
      {
        for ( kk = 0; kk < v1487; ++kk )
        {
          *v625 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1807A91B0)(v618, 0LL);
          v627 = -1LL;
          do
            ++v627;
          while ( *(_WORD *)(v618 + 2 * v627) );
          ++v625;
          v618 += 2 * v627 + 2;
        }
        v621 = 0;
      }
      *v625 = 1033;
      LODWORD(v618) = 0;
      v622 = v624;
      v1591 = v624;
      v1427 = v1487 + 1;
    }
    else
    {
      LODWORD(v618) = 0;
      v621 = -2147024882;
    }
    v1596 = 0LL;
    goto LABEL_743;
  }
  v620 = GetLastError();
  v621 = v620;
  if ( v620 > 0 )
    v621 = (unsigned __int16)v620 | 0x80070000;
  if ( v621 >= 0 )
    v621 = -2147467259;
LABEL_937:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v755 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v755 == 1 )
    {
      v756 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v618 = 4LL;
      do
      {
        if ( *v756 )
          FreeLibrary(*v756);
        v756 += 3;
        --v618;
      }
      while ( v618 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1590);
  if ( v621 < 0 )
    goto LABEL_1144;
  v757 = v1696;
  v1597 = v1696;
  memset_0(v1649, 0, 0x68uLL);
  v758 = 1;
  v759 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1362, 7LL);
  if ( v759 && (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v759, 104LL, v1649) )
  {
    if ( v1652 != 32 || !v1653 || v1650 <= 0 || v1651 <= 0 )
      v758 = 0;
    if ( v758 )
    {
LABEL_954:
      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(&v1685, v757, HIDWORD(v1597));
      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(&v1686, v757, HIDWORD(v1597));
      if ( v619 == 1 )
        v1558 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_1807A9128)(v1677 == 0 ? 0xB26720 : 0);
      goto LABEL_956;
    }
  }
  else
  {
    v758 = 0;
  }
  if ( v619 == 1 )
    goto LABEL_954;
LABEL_956:
  v1486 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9180)(v1362, 1LL);
  v760 = 2064;
  if ( v1676 )
    v760 = 133138;
  v1383 = v760;
  if ( !v758 )
  {
    LODWORD(v618) = 0;
    if ( v1677 || (v819 = -64, v619 == 1) )
      v819 = -1;
    LOWORD(v1491) = 0;
    BYTE2(v1491) = v819;
    BYTE3(v1491) = 1;
    v1433 = 0;
    v1306 = 0;
    v1326 = 0;
    Srcd = (LPVOID)((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1362);
    v818 = Srcd;
    if ( !Srcd )
      goto LABEL_1048;
    if ( v619 == 1 )
    {
      v820 = DWORD2(v1686) - v1686;
      if ( DWORD2(v1686) - (int)v1686 <= DWORD2(v1685) - (int)v1685 )
        v820 = DWORD2(v1685) - v1685;
      v821 = HIDWORD(v1686) - DWORD1(v1685);
      LODWORD(v1521) = v820;
      v822 = 0;
      LODWORD(v1497) = HIDWORD(v1686) - DWORD1(v1685);
      v823 = 0;
      if ( v1676 )
      {
        v1433 = v820 + v1685 - DWORD2(v1685);
        v1326 = v820 + v1686 - DWORD2(v1686);
        v823 = v1326;
        v822 = v1433;
      }
      v824 = DWORD2(v1685) + v822 - v1685;
      v825 = DWORD2(v1686) + v823 - v1686;
      v1478 = DWORD1(v1686) - DWORD1(v1685);
      v818 = Srcd;
      v1393 = HIDWORD(v1686) - DWORD1(v1685);
      LODWORD(v1501) = HIDWORD(v1685) - DWORD1(v1685);
    }
    else
    {
      v820 = DWORD2(v1696);
      v821 = HIDWORD(v1696);
      v1620 = v1685;
      v824 = DWORD2(v1685);
      LODWORD(v1501) = HIDWORD(v1685);
      v1306 = DWORD1(v1685);
      v1621 = v1686;
      v825 = DWORD2(v1686);
      v1433 = v1685;
      v1393 = HIDWORD(v1686);
      v1478 = DWORD1(v1686);
      v1326 = v1686;
      LODWORD(v1497) = HIDWORD(v1696);
      LODWORD(v1521) = DWORD2(v1696);
    }
    LODWORD(v1496) = v825;
    v1600 = 0LL;
    v1713 = 0LL;
    v1712 = 0LL;
    v1714 = 0;
    DWORD2(v1711) = -v821;
    LODWORD(v1711) = 40;
    DWORD1(v1711) = v820;
    HIDWORD(v1711) = 2097153;
    v826 = ((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
             v818,
             &v1711,
             0LL,
             &v1600,
             0LL,
             0);
    Sizef = v826;
    if ( !v826 )
    {
      GetLastError();
      LODWORD(v618) = 0;
      goto LABEL_1140;
    }
    ((void (__fastcall *)(LPVOID, __int64))off_1807A9178)(v818, v826);
    if ( (_DWORD)v1488 == 1 && v1558 )
    {
      v1699 = 0LL;
      v1701 = (int)v1497;
      v1700 = v820;
      ((void (__fastcall *)(LPVOID, __int64 *))off_1807A91E8)(v818, &v1699);
    }
    v827 = v1678;
    v1465 = v1677;
    v1489 = (SIZE_T)v1681;
    v1495 = (SIZE_T)v1678;
    memset_0(v1666, 0, 0x68uLL);
    memset_0(v1647, 0, 0x68uLL);
    v1490 = 0LL;
    v1406 = 0;
    lpModuleNamee = 0;
    v1725 = 0LL;
    v1726 = 0;
    v1723 = 0LL;
    v1724 = 0LL;
    v1695 = 0LL;
    if ( v827 )
    {
      v818 = Srcd;
      v828 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1807A9150)(Srcd, 7LL);
      if ( !v828 )
        goto LABEL_1065;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v828, 104LL, v1666) )
      {
        v1490 = v1669;
        v1406 = v1667;
        lpModuleNamee = v1668;
      }
      v1448 = (LPCWSTR)((__int64 (__fastcall *)(LPVOID))off_1807A9110)(Srcd);
      if ( !v1448 )
        goto LABEL_1065;
      v829 = 0;
      v830 = v824 - v1433;
      DWORD2(v1723) = v1306 - (_DWORD)v1501;
      v1602 = 0LL;
      v1724 = 0LL;
      v1725 = 0LL;
      v1726 = 0;
      LODWORD(v1723) = 40;
      DWORD1(v1723) = v830;
      HIDWORD(v1723) = 2097153;
      v831 = ((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
               v1448,
               &v1723,
               0LL,
               &v1602,
               0LL,
               0);
      v1494 = (WCHAR *)v831;
      if ( v831 )
      {
        v833 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v831, 104LL, v1647);
        DWORD2(v1695) = v830;
        v834 = 0LL;
        if ( v833 )
          v834 = v1648;
        HIDWORD(v1695) = (_DWORD)v1501 - v1306;
        v1492 = v834;
        ((void (__fastcall *)(LPCWSTR, WCHAR *))off_1807A9178)(v1448, v1494);
        ((void (__fastcall *)(LPCWSTR, __int64))off_1807A9180)(v1448, 1LL);
        v835 = ((__int64 (__fastcall *)(LPCWSTR, SIZE_T))off_1807A9178)(v1448, v1489);
        v836 = off_1807A91E8;
        v1489 = v835;
        v837 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
        ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v836)(v1448, &v1695, v837);
        v838 = v1448;
        ((void (__fastcall *)(LPCWSTR, SIZE_T, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
          v1448,
          v1495,
          0xFFFFFFFFLL,
          &v1695,
          v1383,
          0LL);
        if ( (_DWORD)v1488 == 1 )
        {
          if ( v1465 )
            v1466 = off_1807A9218((WARBIRD_DELAY_LOAD *)8, 0);
          else
            v1466 = 0xFFFFFF;
        }
        else
        {
          v1466 = -5723992;
        }
        v839 = 0;
        v840 = -v1433;
        v841 = 0;
        if ( v1433 >= 0 )
        {
          v839 = v1433;
          v840 = 0;
        }
        v842 = -v1306;
        if ( v1306 >= 0 )
        {
          v842 = 0;
          v841 = v1306;
        }
        v843 = DWORD2(v1695) - v840;
        if ( DWORD2(v1695) - v840 >= v1406 - v839 )
          v843 = v1406 - v839;
        LODWORD(v1501) = v843;
        v844 = HIDWORD(v1695) - v842;
        if ( HIDWORD(v1695) - v842 >= lpModuleNamee - v841 )
          v844 = lpModuleNamee - v841;
        if ( v843 > 0 && v844 > 0 )
        {
          v845 = (int)v1501;
          v846 = v1492 + 4 * (v840 + (__int64)(DWORD2(v1695) * v842));
          v1492 = v846;
          lpModuleNamef = 0;
          v847 = v1490 + 4 * (v839 + (__int64)(v1406 * v841));
          v1495 = 4LL * SDWORD2(v1695);
          v1434 = 4LL * v1406;
          v1490 = v847;
          do
          {
            v1407 = 0;
            v848 = (unsigned __int8 *)(v846 + 2);
            v849 = 0;
            v850 = v847 - v846;
            do
            {
              if ( (unsigned __int8)((*v848 + *(v848 - 2) + 2 * (unsigned int)*(v848 - 1)) >> 2) != 0xFF )
              {
                v851 = (unsigned __int8)~((*v848 + *(v848 - 2) + 2 * (unsigned int)*(v848 - 1)) >> 2);
                v848[v850] -= ~((*v848 + *(v848 - 2) + 2 * (unsigned int)*(v848 - 1)) >> 2) * (v1466 - v848[v850]);
                v852 = v848[v850 - 1];
                v853 = (unsigned __int64)(2155905153LL * v851 * (BYTE1(v1466) - v852)) >> 32;
                v848[v850 - 1] = v852 + (v853 >> 7 < 0) + (v853 >> 7);
                v854 = v848[v850 - 2];
                v855 = (unsigned __int64)(2155905153LL * v851 * (BYTE2(v1466) - v854)) >> 32;
                v848[v850 - 2] = v854 + (v855 >> 7 < 0) + (v855 >> 7);
                v849 = v1407;
                v848[v850 + 1] += v851 * (255 - v848[v850 + 1]) / 255;
              }
              ++v849;
              v848 += 4;
              v1407 = v849;
            }
            while ( v849 < v845 );
            v846 = v1495 + v1492;
            v847 = v1434 + v1490;
            v1492 += v1495;
            v1490 += v1434;
            ++lpModuleNamef;
          }
          while ( lpModuleNamef < v844 );
          v820 = (unsigned int)v1521;
          v829 = 0;
          v825 = (int)v1496;
          v838 = v1448;
        }
        ((void (__fastcall *)(WCHAR *))off_1807A9138)(v1494);
        if ( v1489 )
          ((void (__fastcall *)(LPCWSTR, SIZE_T))off_1807A9178)(v838, v1489);
      }
      else
      {
        v829 = GetLastError();
        v832 = v829 < 0;
        if ( v829 > 0 )
        {
          v829 = (unsigned __int16)v829 | 0x80070000;
          v832 = v829 < 0;
        }
        if ( !v832 )
          v829 = -2147467259;
      }
      ((void (__fastcall *)(LPCWSTR))off_1807A9130)(v1448);
      if ( v829 >= 0 )
      {
        v856 = v1679;
        v1335 = v1677;
        v1492 = (__int64)v1682;
        v1494 = (WCHAR *)v1679;
        memset_0(v1670, 0, 0x68uLL);
        memset_0(v1674, 0, 0x68uLL);
        v1449 = 0LL;
        lpModuleNameg = 0;
        v1408 = 0;
        v1729 = 0LL;
        v1730 = 0;
        v1727 = 0LL;
        v1728 = 0LL;
        v1702 = 0LL;
        if ( v856 )
        {
          v818 = Srcd;
          v857 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1807A9150)(Srcd, 7LL);
          if ( v857 )
          {
            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v857, 104LL, v1670) )
            {
              v1449 = v1673;
              lpModuleNameg = v1671;
              v1408 = v1672;
            }
            v1490 = ((__int64 (__fastcall *)(LPVOID))off_1807A9110)(Srcd);
            v858 = v1490;
            if ( v1490 )
            {
              v859 = 0;
              v860 = v825 - v1326;
              DWORD2(v1727) = v1478 - v1393;
              v1605[0] = 0LL;
              v1728 = 0LL;
              v1729 = 0LL;
              v1730 = 0;
              LODWORD(v1727) = 40;
              DWORD1(v1727) = v860;
              HIDWORD(v1727) = 2097153;
              v861 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                       v1490,
                       &v1727,
                       0LL,
                       v1605,
                       0LL,
                       0);
              v1495 = v861;
              if ( !v861 )
              {
                v859 = GetLastError();
                v862 = v859 < 0;
                if ( v859 > 0 )
                {
                  v859 = (unsigned __int16)v859 | 0x80070000;
                  v862 = v859 < 0;
                }
                if ( !v862 )
                  v859 = -2147467259;
                goto LABEL_1130;
              }
              v863 = ((__int64 (__fastcall *)(SIZE_T, __int64, _BYTE *))off_1807A9168)(v861, 104LL, v1674);
              DWORD2(v1702) = v860;
              v864 = 0LL;
              if ( v863 )
                v864 = v1675;
              HIDWORD(v1702) = v1393 - v1478;
              v1489 = v864;
              ((void (__fastcall *)(__int64, SIZE_T))off_1807A9178)(v858, v1495);
              ((void (__fastcall *)(__int64, __int64))off_1807A9180)(v858, 1LL);
              v865 = ((__int64 (__fastcall *)(__int64, __int64))off_1807A9178)(v858, v1492);
              v866 = off_1807A91E8;
              v1492 = v865;
              v867 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
              ((void (__fastcall *)(__int64, __int128 *, __int64))v866)(v1490, &v1702, v867);
              v858 = v1490;
              ((void (__fastcall *)(__int64, WCHAR *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                v1490,
                v1494,
                0xFFFFFFFFLL,
                &v1702,
                v1383,
                0LL);
              if ( (_DWORD)v1488 == 1 )
              {
                if ( !v1335 )
                {
                  v1336 = 0xFFFFFF;
LABEL_1111:
                  v869 = -v1326;
                  v870 = 0;
                  v871 = 0;
                  if ( v1326 >= 0 )
                  {
                    v870 = v1326;
                    v869 = 0;
                  }
                  v872 = -v1478;
                  if ( v1478 >= 0 )
                  {
                    v871 = v1478;
                    v872 = 0;
                  }
                  v873 = lpModuleNameg;
                  v874 = DWORD2(v1702) - v869;
                  if ( DWORD2(v1702) - v869 >= lpModuleNameg - v870 )
                    v874 = lpModuleNameg - v870;
                  v875 = HIDWORD(v1702) - v872;
                  if ( HIDWORD(v1702) - v872 >= v1408 - v871 )
                    v875 = v1408 - v871;
                  if ( v874 > 0 && v875 > 0 )
                  {
                    v876 = (unsigned __int8 *)(v1489 + 4 * (v869 + (__int64)(v872 * DWORD2(v1702))));
                    v1494 = (WCHAR *)v876;
                    lpModuleNameh = 0;
                    v877 = &v1449[2 * v870 + 2 * (__int64)(v871 * (int)v873)];
                    v1489 = 4LL * SDWORD2(v1702);
                    v1394 = 2 * v873;
                    v1450 = v877;
                    do
                    {
                      v878 = v876 + 2;
                      v1409 = 0;
                      v879 = (char *)v877 - (char *)v876;
                      for ( mm = 0; mm < v874; v1409 = mm )
                      {
                        if ( (unsigned __int8)((*v878 + *(v878 - 2) + 2 * (unsigned int)*(v878 - 1)) >> 2) != 0xFF )
                        {
                          v881 = (unsigned __int8)~((*v878 + *(v878 - 2) + 2 * (unsigned int)*(v878 - 1)) >> 2);
                          v878[v879] -= ~((*v878 + *(v878 - 2) + 2 * (unsigned int)*(v878 - 1)) >> 2)
                                      * (v1318 - v878[v879]);
                          v882 = v878[v879 - 1];
                          v883 = (unsigned __int64)(2155905153LL * v881 * (BYTE1(v1336) - v882)) >> 32;
                          v878[v879 - 1] = v882 + (v883 >> 7 < 0) + (v883 >> 7);
                          v884 = v878[v879 - 2];
                          v885 = (unsigned __int64)(2155905153LL * v881 * (BYTE2(v1336) - v884)) >> 32;
                          v878[v879 - 2] = v884 + (v885 >> 7 < 0) + (v885 >> 7);
                          mm = v1409;
                          v878[v879 + 1] += v881 * (255 - v878[v879 + 1]) / 255;
                        }
                        ++mm;
                        v878 += 4;
                      }
                      v876 = (unsigned __int8 *)v1494 + v1489;
                      v877 = &v1450[v1394];
                      v1494 = (WCHAR *)((char *)v1494 + v1489);
                      v1450 = (LPCWSTR)((char *)v1450 + v1394 * 2);
                      ++lpModuleNameh;
                    }
                    while ( lpModuleNameh < v875 );
                    v859 = 0;
                    v858 = v1490;
                  }
                  ((void (__fastcall *)(SIZE_T))off_1807A9138)(v1495);
                  if ( v1492 )
                    ((void (__fastcall *)(__int64, __int64))off_1807A9178)(v858, v1492);
LABEL_1130:
                  ((void (__fastcall *)(__int64))off_1807A9130)(v858);
                  if ( v859 >= 0 )
                  {
                    v818 = Srcd;
                    v817 = v1362;
                    if ( (_DWORD)v1488 == 1 )
                      ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                        v1362,
                        (unsigned int)v1685,
                        DWORD1(v1685),
                        v820,
                        (_DWORD)v1497,
                        Srcd,
                        0,
                        0,
                        13369376);
                    else
                      ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, unsigned int, _DWORD, _DWORD))off_1807A9140)(
                        v1362,
                        (unsigned int)v1696,
                        DWORD1(v1696),
                        v820,
                        (_DWORD)v1497,
                        Srcd,
                        0,
                        0,
                        v820,
                        (_DWORD)v1497,
                        (_DWORD)v1491);
LABEL_1134:
                    ((void (__fastcall *)(SIZE_T, _QWORD))off_1807A9180)(v817, v1486);
                    LODWORD(v618) = 0;
                    if ( !Sizef )
                    {
LABEL_1139:
                      if ( !v818 )
                        goto LABEL_1142;
LABEL_1140:
                      ((void (__fastcall *)(LPVOID))off_1807A9130)(v818);
                      goto LABEL_1142;
                    }
LABEL_1138:
                    ((void (*)(void))off_1807A9138)();
                    goto LABEL_1139;
                  }
                  goto LABEL_1136;
                }
                v868 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
              }
              else
              {
                v868 = -5723992;
              }
              v1336 = v868;
              v1318 = v868;
              goto LABEL_1111;
            }
          }
LABEL_1065:
          GetLastError();
LABEL_1137:
          LODWORD(v618) = 0;
          goto LABEL_1138;
        }
      }
    }
LABEL_1136:
    v818 = Srcd;
    goto LABEL_1137;
  }
  v761 = v1678;
  v1430 = v1677;
  v1331 = v1681;
  memset_0(v1654, 0, 0x68uLL);
  memset_0(v1658, 0, 0x68uLL);
  LODWORD(v618) = 0;
  lpModuleNamea = 0LL;
  v1303 = 0;
  v1324 = 0;
  v1717 = 0LL;
  v1718 = 0;
  v1715 = 0LL;
  v1716 = 0LL;
  v1697 = 0LL;
  if ( !v761 )
    goto LABEL_1142;
  v762 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1362, 7LL);
  if ( !v762 )
    goto LABEL_1048;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v762, 104LL, v1654) )
  {
    lpModuleNamea = v1657;
    v1303 = v1655;
    v1324 = v1656;
  }
  v763 = ((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1362);
  if ( !v763 )
    goto LABEL_1048;
  DWORD1(v1715) = DWORD2(v1685) - v1685;
  DWORD2(v1715) = DWORD1(v1685) - HIDWORD(v1685);
  v1598 = 0LL;
  LODWORD(v1491) = 0;
  v1716 = 0LL;
  v1717 = 0LL;
  v1718 = 0;
  LODWORD(v1715) = 40;
  HIDWORD(v1715) = 2097153;
  v1463 = (wchar_t *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                       v763,
                       &v1715,
                       0LL,
                       &v1598,
                       0LL,
                       0);
  if ( v1463 )
  {
    v765 = (unsigned int)((__int64 (__fastcall *)(wchar_t *, __int64, _BYTE *))off_1807A9168)(v1463, 104LL, v1658) == 0;
    v766 = 0LL;
    if ( !v765 )
      v766 = v1659;
    DWORD2(v1697) = DWORD2(v1685) - v1685;
    HIDWORD(v1697) = HIDWORD(v1685) - DWORD1(v1685);
    v1389 = v766;
    ((void (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v763, v1463);
    ((void (__fastcall *)(__int64, __int64))off_1807A9180)(v763, 1LL);
    v767 = ((__int64 (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v763, v1331);
    v768 = off_1807A91E8;
    v1332 = (wchar_t *)v767;
    v769 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
    ((void (__fastcall *)(__int64, __int128 *, __int64))v768)(v763, &v1697, v769);
    ((void (__fastcall *)(__int64, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
      v763,
      v761,
      0xFFFFFFFFLL,
      &v1697,
      v1383,
      0LL);
    if ( (_DWORD)v1488 == 1 )
    {
      if ( v1430 )
        v1431 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
      else
        v1431 = 0xFFFFFF;
    }
    else
    {
      v1431 = -5723992;
    }
    v770 = 0;
    v771 = v1303;
    v772 = -(int)v1685;
    v773 = 0;
    if ( (int)v1685 >= 0 )
    {
      v770 = v1685;
      v772 = 0;
    }
    v774 = -DWORD1(v1685);
    if ( (SDWORD1(v1685) & 0x80000000) == 0 )
    {
      v774 = 0;
      v773 = DWORD1(v1685);
    }
    v775 = DWORD2(v1697) - v772;
    if ( DWORD2(v1697) - v772 >= v1303 - v770 )
      v775 = v1303 - v770;
    v776 = HIDWORD(v1697) - v774;
    if ( HIDWORD(v1697) - v774 >= v1324 - v773 )
      v776 = v1324 - v773;
    if ( v775 > 0 && v776 > 0 )
    {
      v777 = &v1389[4 * v772 + 4 * (__int64)(v774 * DWORD2(v1697))];
      v778 = v773 * v1303;
      v1390 = v777;
      v1304 = 0;
      v779 = &lpModuleNamea[2 * v770 + 2 * (__int64)v778];
      v1476 = (LPCWSTR)(4LL * SDWORD2(v1697));
      v1496 = (void *)(4 * v771);
      lpModuleNameb = v779;
      do
      {
        v1325 = 0;
        v780 = (unsigned __int8 *)(v777 + 2);
        v781 = 0;
        v782 = (char *)v779 - v777;
        do
        {
          if ( (unsigned __int8)((*v780 + *(v780 - 2) + 2 * (unsigned int)*(v780 - 1)) >> 2) != 0xFF )
          {
            v783 = (unsigned __int8)~((*v780 + *(v780 - 2) + 2 * (unsigned int)*(v780 - 1)) >> 2);
            v780[v782] -= ~((*v780 + *(v780 - 2) + 2 * (unsigned int)*(v780 - 1)) >> 2) * (v1431 - v780[v782]);
            v784 = v780[v782 - 1];
            v785 = (unsigned __int64)(2155905153LL * v783 * (BYTE1(v1431) - v784)) >> 32;
            v780[v782 - 1] = v784 + (v785 >> 7 < 0) + (v785 >> 7);
            v786 = v780[v782 - 2];
            v787 = (unsigned __int64)(2155905153LL * v783 * (BYTE2(v1431) - v786)) >> 32;
            v780[v782 - 2] = v786 + (v787 >> 7 < 0) + (v787 >> 7);
            v781 = v1325;
            v780[v782 + 1] += v783 * (255 - v780[v782 + 1]) / 255;
          }
          ++v781;
          v780 += 4;
          v1325 = v781;
        }
        while ( v781 < v775 );
        v777 = &v1390[(_QWORD)v1476];
        v779 = (LPCWSTR)((char *)lpModuleNameb + (_QWORD)v1496);
        v1390 = &v1390[(_QWORD)v1476];
        lpModuleNameb = (LPCWSTR)((char *)lpModuleNameb + (_QWORD)v1496);
        ++v1304;
      }
      while ( v1304 < v776 );
      LODWORD(v618) = (_DWORD)v1491;
    }
    ((void (__fastcall *)(wchar_t *))off_1807A9138)(v1463);
    if ( v1332 )
      ((void (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v763, v1332);
  }
  else
  {
    LODWORD(v618) = GetLastError();
    v764 = (int)v618 < 0;
    if ( (int)v618 > 0 )
    {
      LODWORD(v618) = (unsigned __int16)v618 | 0x80070000;
      v764 = (int)v618 < 0;
    }
    if ( !v764 )
      LODWORD(v618) = -2147467259;
  }
  ((void (__fastcall *)(__int64))off_1807A9130)(v763);
  if ( (int)v618 < 0 )
    goto LABEL_1141;
  v788 = v1679;
  LODWORD(v1491) = v1677;
  v1333 = v1682;
  memset_0(v1660, 0, 0x68uLL);
  memset_0(v1664, 0, 0x68uLL);
  LODWORD(v618) = 0;
  lpModuleNamec = 0LL;
  v1432 = 0;
  v1305 = 0;
  v1721 = 0LL;
  v1722 = 0;
  v1719 = 0LL;
  v1720 = 0LL;
  v1698 = 0LL;
  if ( v788 )
  {
    v789 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1362, 7LL);
    if ( v789 )
    {
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(v789, 104LL, v1660) )
      {
        lpModuleNamec = v1663;
        v1432 = v1661;
        v1305 = v1662;
      }
      v1405 = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1362);
      v790 = v1405;
      if ( v1405 )
      {
        DWORD1(v1719) = DWORD2(v1686) - v1686;
        DWORD2(v1719) = DWORD1(v1686) - HIDWORD(v1686);
        v1599 = 0LL;
        v1720 = 0LL;
        v1721 = 0LL;
        v1722 = 0;
        LODWORD(v1719) = 40;
        HIDWORD(v1719) = 2097153;
        v1464 = (wchar_t *)((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                             v1405,
                             &v1719,
                             0LL,
                             &v1599,
                             0LL,
                             0);
        if ( !v1464 )
        {
          LODWORD(v618) = GetLastError();
          v791 = (int)v618 < 0;
          if ( (int)v618 > 0 )
          {
            LODWORD(v618) = (unsigned __int16)v618 | 0x80070000;
            v791 = (int)v618 < 0;
          }
          if ( !v791 )
            LODWORD(v618) = -2147467259;
          goto LABEL_1036;
        }
        v765 = (unsigned int)((__int64 (__fastcall *)(wchar_t *, __int64, _BYTE *))off_1807A9168)(v1464, 104LL, v1664) == 0;
        v792 = 0LL;
        if ( !v765 )
          v792 = v1665;
        DWORD2(v1698) = DWORD2(v1686) - v1686;
        HIDWORD(v1698) = HIDWORD(v1686) - DWORD1(v1686);
        v1391 = v792;
        ((void (__fastcall *)(LPCWSTR, wchar_t *))off_1807A9178)(v1405, v1464);
        ((void (__fastcall *)(LPCWSTR, __int64))off_1807A9180)(v1405, 1LL);
        v793 = ((__int64 (__fastcall *)(LPCWSTR, wchar_t *))off_1807A9178)(v1405, v1333);
        v794 = off_1807A91E8;
        v1334 = (wchar_t *)v793;
        v795 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
        ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v794)(v1405, &v1698, v795);
        ((void (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
          v1405,
          v788,
          0xFFFFFFFFLL,
          &v1698,
          v1383,
          0LL);
        if ( (_DWORD)v1488 == 1 )
        {
          if ( (_DWORD)v1491 )
          {
            v796 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
            goto LABEL_1016;
          }
          LODWORD(v1491) = 0xFFFFFF;
        }
        else
        {
          v796 = -5723992;
LABEL_1016:
          LODWORD(v1491) = v796;
          v1318 = v796;
        }
        v797 = 0;
        v798 = -(int)v1686;
        v799 = 0;
        if ( (int)v1686 >= 0 )
        {
          v797 = v1686;
          v798 = 0;
        }
        v800 = -DWORD1(v1686);
        if ( (SDWORD1(v1686) & 0x80000000) == 0 )
        {
          v800 = 0;
          v799 = DWORD1(v1686);
        }
        v801 = DWORD2(v1698) - v798;
        if ( DWORD2(v1698) - v798 >= v1432 - v797 )
          v801 = v1432 - v797;
        v802 = HIDWORD(v1698) - v800;
        if ( HIDWORD(v1698) - v800 >= v1305 - v799 )
          v802 = v1305 - v799;
        if ( v801 > 0 && v802 > 0 )
        {
          LODWORD(v1488) = 0;
          v803 = &v1391[4 * v798 + 4 * (__int64)(DWORD2(v1698) * v800)];
          v1392 = v803;
          v804 = &lpModuleNamec[2 * v797 + 2 * (__int64)(v1432 * v799)];
          v1477 = (LPCWSTR)(4LL * SDWORD2(v1698));
          v1496 = (void *)(4LL * v1432);
          lpModuleNamed = v804;
          do
          {
            v805 = (unsigned __int8 *)(v803 + 2);
            v1384 = 0;
            v806 = (char *)v804 - v803;
            for ( nn = 0; nn < v801; v1384 = nn )
            {
              if ( (unsigned __int8)((*v805 + *(v805 - 2) + 2 * (unsigned int)*(v805 - 1)) >> 2) != 0xFF )
              {
                v808 = (unsigned __int8)~((*v805 + *(v805 - 2) + 2 * (unsigned int)*(v805 - 1)) >> 2);
                v809 = BYTE1(v1491);
                v805[v806] -= ~((*v805 + *(v805 - 2) + 2 * (unsigned int)*(v805 - 1)) >> 2) * (v1318 - v805[v806]);
                v810 = v805[v806 - 1];
                v811 = (unsigned __int64)(2155905153LL * v808 * (v809 - v810)) >> 32;
                v812 = BYTE2(v1491);
                v805[v806 - 1] = v810 + (v811 >> 7 < 0) + (v811 >> 7);
                v813 = v805[v806 - 2];
                v814 = (unsigned __int64)(2155905153LL * v808 * (v812 - v813)) >> 32;
                v805[v806 - 2] = v813 + (v814 >> 7 < 0) + (v814 >> 7);
                v815 = v805[v806 + 1];
                v816 = v808 * (255 - v815);
                nn = v1384;
                v805[v806 + 1] = v815 + v816 / 255;
              }
              ++nn;
              v805 += 4;
            }
            v803 = &v1392[(_QWORD)v1477];
            v804 = (LPCWSTR)((char *)lpModuleNamed + (_QWORD)v1496);
            v1392 = &v1392[(_QWORD)v1477];
            lpModuleNamed = (LPCWSTR)((char *)lpModuleNamed + (_QWORD)v1496);
            LODWORD(v1488) = (_DWORD)v1488 + 1;
          }
          while ( (int)v1488 < v802 );
          LODWORD(v618) = 0;
          v790 = v1405;
        }
        ((void (__fastcall *)(wchar_t *))off_1807A9138)(v1464);
        if ( v1334 )
          ((void (__fastcall *)(LPCWSTR, wchar_t *))off_1807A9178)(v790, v1334);
LABEL_1036:
        ((void (__fastcall *)(LPCWSTR))off_1807A9130)(v790);
        if ( (int)v618 >= 0 )
        {
          v817 = v1362;
          v818 = 0LL;
          goto LABEL_1134;
        }
LABEL_1141:
        LODWORD(v618) = 0;
        goto LABEL_1142;
      }
    }
LABEL_1048:
    GetLastError();
  }
LABEL_1142:
  if ( v1558 )
    ((void (__fastcall *)(LPVOID))off_1807A9138)(v1558);
LABEL_1144:
  if ( v1678 )
  {
    v886 = -1LL;
    do
      ++v886;
    while ( *((_WORD *)v1678 + v886) );
    memset(v1678, 0, 2 * v886 + 2);
    MemoryFree(v1678);
    v1678 = 0LL;
  }
  if ( v1679 )
  {
    v887 = -1LL;
    do
      ++v887;
    while ( *((_WORD *)v1679 + v887) );
    memset(v1679, 0, 2 * v887 + 2);
    MemoryFree(v1679);
    v1679 = 0LL;
  }
  if ( v1680 )
  {
    v888 = -1LL;
    do
      ++v888;
    while ( *((_WORD *)v1680 + v888) );
    memset(v1680, 0, 2 * v888 + 2);
    MemoryFree(v1680);
    v1680 = 0LL;
  }
  if ( v1681 )
  {
    ((void (*)(void))off_1807A9138)();
    v1681 = 0LL;
  }
  if ( v1682 )
  {
    ((void (*)(void))off_1807A9138)();
    v1682 = 0LL;
  }
  if ( v1683 )
  {
    ((void (*)(void))off_1807A9138)();
    v1683 = 0LL;
  }
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v889 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v889 == 1 )
    {
      v618 = 4LL;
      v890 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      do
      {
        if ( *v890 )
          FreeLibrary(*v890);
        v890 += 3;
        --v618;
      }
      while ( v618 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  v1337 = g_WarbirdNotificationInformation;
  v1492 = (unsigned int)((__int64 (*)(void))off_1807A9198)() - (unsigned int)g_WarbirdPaintInitTime;
  v1749 = 0LL;
  v1746 = 0LL;
  v1747 = 0LL;
  v1748 = 0LL;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v891 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_1211;
  lpModuleNamei = 0;
  v1467 = 0;
  v892 = 0LL;
  v1494 = 0LL;
  v893 = (char *)MemoryAlloc(0x338uLL);
  v1451 = (WCHAR *)v893;
  if ( !v893 )
    goto LABEL_1180;
  v894 = -1;
  v895 = v893 + 7;
  v896 = 0;
  v897 = (unsigned __int8 *)&unk_180697D32;
  v898 = 103LL;
  v899 = 0;
  do
  {
    v900 = *(v897 - 1) | (*(v897 - 2) << 8);
    v901 = v897[2] << 8;
    v902 = *v897;
    v897 += 8;
    v903 = *(v897 - 7) | ((v902 | (v900 << 8)) << 8);
    v904 = v903 ^ v896;
    v905 = *(v897 - 3) | ((*(v897 - 4) | ((*(v897 - 5) | v901) << 8)) << 8);
    v906 = v904 ^ v905 ^ v618 ^ 0xAC987321;
    v907 = (__ROL4__(v906, 10) + 4991 * __ROL4__(v906 + 1419157410, 5)) ^ v904;
    v908 = (43881 * __ROR4__(v907 + 133239679, 9) - __ROL4__(v907, 2)) ^ v906;
    v909 = (24670 * v908 - (v908 >> 13) - 123127970) ^ v907;
    v910 = (2033 * __ROL4__(v909 ^ 0xAB69, 6) - __ROL4__(v909, 2)) ^ v908;
    v911 = (133239679 - (v910 ^ 0xAB69605E)) ^ v909;
    v912 = (43881 * (v911 ^ 0x137F)) ^ __ROR4__(v911, 6) ^ v910;
    v913 = (__ROL4__(v912, 2) + 24670 * __ROR4__(v912 + 133239679, 15)) ^ v911;
    v914 = (2033 * __ROR4__(v913 + 1419157410, 14) - __ROL4__(v913, 8)) ^ v912;
    v915 = __ROR4__(v914, 10) ^ (4991 * __ROR4__(v914 ^ 0xAB69605E, 12)) ^ v913;
    v916 = (v915 >> 10) ^ (43881 * (v915 ^ 0x7F1)) ^ v914;
    v917 = (2033 * (__ROR4__(~v916, 5) + 24670)) ^ v915;
    v918 = v916 ^ (v917 - 2033) ^ 0xAB69605E;
    v919 = ((v918 >> 2) + 4991 * __ROL4__(v916 ^ (v917 - 2033) ^ 0xAB6967AF, 2)) ^ v917;
    v920 = (__ROL4__(v919, 7) + 43881 * __ROR4__(v919 - 133239679, 6)) ^ v918;
    v921 = (24670 * (v920 ^ 0x137F) + __ROR4__(v920, 9)) ^ v919;
    v922 = (__ROL4__(v921, 7) + 2033 * __ROL4__(v921 ^ 0xAB69, 5)) ^ v920;
    v923 = v921 ^ v922 ^ 0xAC987321;
    v924 = (4991 * __ROR4__(v923, 3) - 219010071) ^ v922;
    v925 = (24670 * __ROR4__(v924 - 133239679, 1) - __ROR4__(v924, 6)) ^ v923;
    v926 = (__ROL4__(v925, 14) + 2033 * __ROL4__(v925 - 1419157410, 3)) ^ v924;
    v927 = (4991 * __ROL4__(v926 - 1419157410, 15) - __ROR4__(v926, 14)) ^ v925;
    v928 = (v927 >> 3) ^ (43881 * (v927 ^ 0x605E)) ^ v926;
    v929 = 24670 * __ROL4__(v928 ^ 0x7F1137F, 4);
    v930 = v928;
    v931 = v894 ^ v928;
    v894 = v905;
    v932 = v899 ^ __ROL4__(v930, 2) ^ v929;
    v899 = v903;
    v933 = v932 ^ v927;
    *(v895 - 4) = v933;
    *v895 = v931;
    v895 += 8;
    v934 = __ROR4__(v933, 8);
    *(v895 - 13) = v934;
    v935 = __ROR4__(v931, 8);
    *(v895 - 9) = v935;
    v936 = __ROR4__(v934, 8);
    *(v895 - 14) = v936;
    v937 = __ROR4__(v935, 8);
    *(v895 - 10) = v937;
    v938 = __ROR4__(v936, 8);
    v939 = __ROR4__(v937, 8);
    *(v895 - 15) = v938;
    *(v895 - 11) = v939;
    LODWORD(v618) = __ROR4__(v939, 8);
    v896 = __ROR4__(v938, 8);
    --v898;
  }
  while ( v898 );
  v892 = v1494;
  v940 = 0;
  v941 = 0LL;
  v91 = v1397;
  v942 = (int)v1494;
  do
    v940 ^= *((_BYTE *)v1451 + v941++);
  while ( v941 < 0x338 );
  if ( v940 != 64LL )
  {
    MemoryFree(v1451);
    goto LABEL_1180;
  }
  *((_BYTE *)v1451 + 823) = 0;
  v892 = v1451;
  v947 = v1451;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  if ( !*(_BYTE *)v1451 )
    goto LABEL_1182;
  while ( 1 )
  {
    v948 = v947;
    v949 = -1LL;
    do
      ++v949;
    while ( v947[v949] );
    v950 = &v947[v949];
    v951 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1467;
    if ( !GetModuleHandleExW(0, v948, (HMODULE *)v951) )
      break;
    v942 = 0;
    if ( **(_WORD **)v951 == 23117
      && (v952 = *(int *)(*(_QWORD *)v951 + 60LL), (unsigned int)v952 < 0x10000000)
      && (v953 = *(_QWORD *)v951 + v952, v953 >= *(_QWORD *)v951)
      && *(_DWORD *)v953 == 17744 )
    {
      if ( ((*(_WORD *)(v953 + 24) - 267) & 0xFEFF) != 0 )
      {
        v942 = -1073741811;
      }
      else
      {
        *(_QWORD *)(v951 + 12) = *(_QWORD *)(v953 + 136);
        *((_DWORD *)v951 + 2) = *(_DWORD *)(v953 + 80);
      }
    }
    else
    {
      v942 = -1073741701;
    }
    v954 = *(_DWORD *)(v950 + 1);
    v955 = 0;
    v947 = v950 + 3;
    v1410 = v954;
    for ( i1 = 0; v955 < v1410; i1 = v955 )
    {
      v956 = (const CHAR *)v947;
      v957 = -1LL;
      do
        ++v957;
      while ( *((_BYTE *)v947 + v957) );
      v947 = (WCHAR *)((char *)v947 + v957 + 1);
      if ( v942 >= 0 )
      {
        v958 = (void **)GetProcAddress(*(HMODULE *)v951, v956);
        if ( !v958 )
          goto LABEL_1181;
        (&WARBIRD::g_FuncAddress)[lpModuleNamei] = v958;
        v955 = i1;
      }
      ++lpModuleNamei;
      ++v955;
    }
    ++v1467;
    if ( !*(_BYTE *)v947 )
      goto LABEL_1181;
  }
LABEL_1180:
  v942 = -1073741702;
LABEL_1181:
  if ( v892 )
  {
LABEL_1182:
    v943 = GetProcessHeap();
    HeapFree(v943, 0, v892);
  }
  if ( v942 >= 0 )
  {
    v891 = g_WarbirdSecureFunctionsRefCount;
LABEL_1211:
    v946 = (HMODULE *)&WARBIRD::g_arModuleInfo;
    g_WarbirdSecureFunctionsRefCount = v891 + 1;
    v166 = 0LL;
    goto LABEL_1212;
  }
  v944 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v166 = 0LL;
  v945 = 4LL;
  do
  {
    if ( *v944 )
      FreeLibrary(*v944);
    v944 += 3;
    --v945;
  }
  while ( v945 );
  v946 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_1212:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  LODWORD(v1749) = v1337;
  LODWORD(v1746) = v1492;
  v1745 = 1;
  LODWORD(v1747) = -1721306479;
  DWORD2(v1746) = 1;
  LODWORD(v1748) = 1;
  DWORD2(v1747) = 1;
  DWORD2(v1748) = 1;
  v959 = 4LL;
  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1807A91D0)(0LL, 8225LL, 4LL, &v1745);
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v960 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v960 == 1 )
    {
      do
      {
        if ( *v946 )
          FreeLibrary(*v946);
        v946 += 3;
        --v959;
      }
      while ( v959 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  ((void (__fastcall *)(_QWORD, SIZE_T))off_1807A9260)(0LL, v1362);
  v1496 = (void *)v1493;
LABEL_1221:
  SH<void *,SH_HANDLE>::Reset(v1589);
  v961 = 0LL;
  v1634 = 0LL;
  *(_OWORD *)v1637 = 0LL;
  v962 = GetProcessHeap();
  v963 = (WCHAR *)HeapAlloc(v962, 8u, 0xA0uLL);
  v92 = 0LL;
  v964 = v963;
  if ( !v963 )
    goto LABEL_1261;
  v1494 = v963;
  v166 = v963;
  *(_OWORD *)v963 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
  *((_OWORD *)v963 + 1) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
  *((_OWORD *)v963 + 2) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
  *((_OWORD *)v963 + 3) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
  *((_OWORD *)v963 + 4) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
  *((_OWORD *)v963 + 5) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
  *((_OWORD *)v963 + 6) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
  *((_OWORD *)v963 + 7) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
  *((_OWORD *)v963 + 8) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
  *((_OWORD *)v963 + 9) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
  v965 = GetProcessHeap();
  v966 = HeapAlloc(v965, 8u, 8uLL);
  v92 = 0LL;
  v961 = v966;
  if ( !v966 )
  {
    v961 = 0LL;
    goto LABEL_1261;
  }
  *v966 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v1492 = (__int64)v966;
  v967 = __rdtsc();
  v1531 = 0;
  if ( (int)RtlUIntAdd(4LL, 4LL, &v1532) < 0 )
    goto LABEL_1560;
  if ( (int)RtlUIntAdd(0LL, v1532, &v1531) < 0 )
    goto LABEL_1560;
  if ( (int)RtlUIntAdd(4LL, 160LL, &v1533) < 0 )
    goto LABEL_1560;
  v968 = RtlUIntAdd(v1531, v1533, &v1531);
  if ( (v969 | v968) < 0 )
    goto LABEL_1560;
  if ( (int)RtlUIntAdd(4LL, 8LL, &v1534) < 0 )
    goto LABEL_1560;
  v970 = RtlUIntAdd(v1531, v1534, &v1531);
  if ( (v971 | v970) < 0 )
    goto LABEL_1560;
  if ( (int)RtlUIntAdd(4LL, 8LL, &v1535) < 0 )
    goto LABEL_1560;
  v972 = RtlUIntAdd(v1531, v1535, &v1531);
  if ( (v973 | v972) < 0 )
    goto LABEL_1560;
  HIDWORD(v1633) = v1531;
  v974 = v1531;
  v975 = GetProcessHeap();
  v976 = HeapAlloc(v975, 8u, v974);
  v92 = 0LL;
  v977 = v976;
  if ( !v976
    || (v1634 = v976, LODWORD(v1633) = 0, (int)RtlULongLongAdd(v976, 4LL, &v1638) < 0)
    || v977 + 2 > (_DWORD *)((char *)v977 + HIDWORD(v1633)) )
  {
LABEL_1560:
    v166 = v964;
    goto LABEL_1261;
  }
  v978 = v1638;
  v979 = (unsigned int)(v92 + 4);
  *v977 = v979;
  *v978 = v979;
  v980 = v1633 + 1;
  LODWORD(v1633) = v1633 + 1;
  if ( v1634 != (LPVOID)v92 )
  {
    v982 = v1634;
    v1606 = v1634;
    if ( v980 )
    {
      while ( (int)RtlUIntAdd(v979, (unsigned int)*v982, &v1537) >= 0 )
      {
        if ( (int)RtlULongLongAdd(v982, v1537, &v1606) < 0 )
          goto LABEL_1560;
        v982 = v1606;
        v979 = 4LL;
        if ( v983 + 1 >= v984 )
          goto LABEL_1242;
      }
      goto LABEL_1259;
    }
LABEL_1242:
    if ( (int)RtlULongLongAdd(v982, v979, &v1622) >= 0 && v982 + 41 <= (_DWORD *)((char *)v1634 + HIDWORD(v1633)) )
    {
      v985 = v1622;
      *v982 = 160;
      *v985 = *(_OWORD *)v964;
      v985[1] = *((_OWORD *)v964 + 1);
      v985[2] = *((_OWORD *)v964 + 2);
      v985[3] = *((_OWORD *)v964 + 3);
      v985[4] = *((_OWORD *)v964 + 4);
      v985[5] = *((_OWORD *)v964 + 5);
      v985[6] = *((_OWORD *)v964 + 6);
      v985[7] = *((_OWORD *)v964 + 7);
      v985[8] = *((_OWORD *)v964 + 8);
      v986 = *((_OWORD *)v964 + 9);
      v981 = 4LL;
      v985[9] = v986;
      goto LABEL_1245;
    }
    goto LABEL_1560;
  }
  v981 = (unsigned int)v979;
  if ( (int)RtlUIntAdd(v979, 160LL, &v1536) < 0 )
    goto LABEL_1259;
  if ( (int)RtlUIntAdd(HIDWORD(v1633), v1536, (char *)&v1633 + 4) >= 0 )
  {
LABEL_1245:
    v987 = v1633 + 1;
    LODWORD(v1633) = v1633 + 1;
    if ( v1634 == (LPVOID)v92 )
    {
      if ( (int)RtlUIntAdd((unsigned int)v981, 8LL, &v1538) < 0 )
        goto LABEL_1259;
      if ( (int)RtlUIntAdd(HIDWORD(v1633), v1538, (char *)&v1633 + 4) >= 0 )
      {
LABEL_1256:
        v993 = v1633 + 1;
        LODWORD(v1633) = v1633 + 1;
        if ( v1634 == (LPVOID)v92 )
        {
          if ( (int)RtlUIntAdd((unsigned int)v981, 8LL, &v1540) < 0
            || (int)RtlUIntAdd(HIDWORD(v1633), v1540, (char *)&v1633 + 4) < 0 )
          {
            goto LABEL_1259;
          }
LABEL_1277:
          LODWORD(v1633) = v1633 + 1;
          if ( (int)RtlUIntAdd((unsigned int)v981, (unsigned int)v981, &v1542) < 0 )
            goto LABEL_1259;
          v1006 = v1542;
          v1552 = v1542;
          if ( (int)RtlUIntAdd(v1005, 8LL, &v1544) < 0 || (int)RtlUIntAdd(v1006, v1544, &v1552) < 0 )
            goto LABEL_1259;
          v1007 = (const void **)v92;
          v1490 = v92;
          v1008 = (WCHAR *)v92;
          v1338 = v1552;
          v1452 = (LPCWSTR)v92;
          v1009 = (unsigned int *)v92;
          lpModuleNamej = v92;
          v1495 = v92;
          v1411 = v92;
          v1558 = (LPVOID)v92;
          v1375 = (void *)v92;
          Srce = (LPVOID)__rdtsc();
          v1545 = 8;
          v1010 = RtlUIntAdd(8LL, HIDWORD(v1633), &v1545);
          if ( v1010 >= 0 )
          {
            v1012 = (v1545 + 7) & 0xFFFFFFF8;
            if ( v1012 < v1545 )
              goto LABEL_1259;
            v1545 = (v1545 + 7) & 0xFFFFFFF8;
            v1013 = v1012;
            v1014 = GetProcessHeap();
            v1015 = HeapAlloc(v1014, 8u, v1013);
            v92 = 0LL;
            Sizeg = v1015;
            if ( !v1015 )
              goto LABEL_1259;
            v1609[0] = v1015;
            *v1015 = v1633;
            v1010 = RtlULongLongAdd(v1015, 4LL, v1609);
            if ( v1010 < 0
              || (v1017 = v1609[0],
                  *(_DWORD *)v1609[0] = HIDWORD(v1633),
                  v1010 = RtlULongLongAdd(v1017, v1016, v1609),
                  v1010 < 0) )
            {
              v1019 = GetProcessHeap();
              HeapFree(v1019, 0, Sizeg);
              v1011 = (unsigned int)v1007;
            }
            else
            {
              *(_QWORD *)(v1545 + v1018 - 8) = Srce;
              memcpy_0(v1609[0], v1634, HIDWORD(v1633));
              v1008 = (WCHAR *)Sizeg;
              v1011 = v1545;
              v1452 = (LPCWSTR)Sizeg;
              lpModuleNamej = v1545;
            }
            v92 = 0LL;
          }
          v1020 = v1010 | 0x10000000;
          if ( v1020 < 0 )
            goto LABEL_1359;
          Srcf = (_QWORD *)v92;
          if ( !v1008 )
            goto LABEL_1259;
          v1021 = v1011;
          Sizeh = v1011;
          if ( !v1011 || (v1493 = v1011 + 8LL, (v1501 = MemoryAlloc(v1493)) == 0LL) )
          {
            v1020 = -805306367;
            goto LABEL_1360;
          }
          v1022 = 0;
          v1023 = 0LL;
          v1294 = 0;
          if ( v1021 )
          {
            do
              v1022 ^= *((_BYTE *)v1008 + v1023++);
            while ( v1023 < v1021 );
            v1294 = v1022;
          }
          v1024 = (char *)v1501;
          v1025 = 0;
          v1026 = -1;
          v1468 = 0;
          v1396 = 0;
          v1027 = v1008;
          v1028 = lpModuleNamej;
          v1692 = 0xC81ECB17B1B54A58uLL;
          v1029 = lpModuleNamej & 7;
          if ( (lpModuleNamej & 7) != 0 )
          {
            v1030 = 0;
            v1031 = 0;
            lpModuleNamek = 0;
            v1032 = 56;
            do
            {
              v1033 = *(unsigned __int8 *)v1027;
              v1027 = (WCHAR *)((char *)v1027 + 1);
              if ( v1030 >= 4 )
                v1031 |= v1033 << v1032;
              else
                v1025 |= v1033 << (v1032 - 32);
              v1032 -= 8;
              v1030 = lpModuleNamek + 1;
              v1468 = v1031;
              v1396 = v1025;
              lpModuleNamek = v1030;
            }
            while ( v1030 < v1029 );
            v1028 = Sizeh;
            v1025 ^= 0xB17A307A;
            v1034 = v1501;
            v1035 = v1031 ^ 0x42F6B18D;
            v1452 = v1008;
            v1036 = v1025;
            v1037 = v1035;
            v1038 = (int)v1007;
            do
            {
              lpModuleNamel = (LPCWSTR)(v1034 + 1);
              if ( v1038 >= 4 )
              {
                v1037 = __ROL4__(v1037, 8);
                v1039 = v1037;
              }
              else
              {
                v1036 = __ROL4__(v1036, 8);
                v1039 = v1036;
              }
              *v1034 = v1039;
              ++v1038;
              ++v1034;
            }
            while ( v1038 < v1029 );
            v1024 = (char *)lpModuleNamel;
            v1007 = (const void **)v1490;
            v1022 = v1294;
            v1009 = (unsigned int *)v1490;
            if ( (unsigned int)v1029 > 4 )
            {
              v1026 = v1035 >> (8 * (8 - v1029)) << (8 * (8 - v1029));
              goto LABEL_1310;
            }
            v1026 = 0;
            if ( (unsigned int)v1029 < 4 )
            {
              v1025 = v1025 >> (8 * (4 - v1029)) << (8 * (4 - v1029));
LABEL_1310:
              v1024 = (char *)lpModuleNamel;
            }
          }
          v1040 = v1028 >> 3;
          if ( v1028 >> 3 )
          {
            v1041 = v1024 + 7;
            v1042 = WORD2(v1692);
            v1043 = (unsigned __int8 *)(v1027 + 1);
            v1044 = v1396;
            v1045 = v1040;
            lpModuleNamem = WORD1(v1692);
            v1479 = HIWORD(v1692);
            v1046 = v1468;
            do
            {
              v1047 = *(v1043 - 1) | (*(v1043 - 2) << 8);
              v1048 = v1043[2] << 8;
              v1049 = *v1043;
              v1043 += 8;
              v1050 = *(v1043 - 7) | ((v1049 | (v1047 << 8)) << 8);
              v1051 = *(v1043 - 3) | ((*(v1043 - 4) | ((*(v1043 - 5) | v1048) << 8)) << 8);
              v1052 = v1051 ^ v1026;
              v1053 = v1025 ^ v1050 ^ (v1052 - 19032);
              v1054 = __ROR4__(v1053, 15);
              v1055 = HIDWORD(v1692) ^ v1053;
              v1056 = (__ROR4__(v1055, 7) + WORD1(v1692) * v1054) ^ v1052;
              v1057 = (v1042 * __ROR4__(v1056 - 1313519016, 9) - __ROR4__(v1056, 10)) ^ v1055;
              v1058 = (__ROL4__(v1057, 5) + HIWORD(v1692) * __ROL4__(v1042 ^ v1057, 4)) ^ v1056;
              v1059 = (HIDWORD(v1692) - (v1058 ^ 0xB1B54A58)) ^ v1057;
              v1060 = (WORD1(v1692) * (v1059 - 19032) - (v1059 >> 6)) ^ v1058;
              v1061 = (19032 * (v1042 ^ __ROR4__(v1060, 15))) ^ v1059;
              v1062 = (v1042 * (HIWORD(v1692) + __ROR4__(~v1061, 3))) ^ v1060;
              v1063 = (v1062 - 19032 - HIDWORD(v1692)) ^ v1061;
              v1064 = (lpModuleNamem * (v1479 ^ v1063)) ^ __ROR4__(v1063, 10) ^ v1062;
              v1065 = __ROR4__(v1064, 3) ^ (v1042 * __ROL4__(v1064 ^ 0x4A58, 6)) ^ v1063;
              v1066 = (19032 * (__ROR4__(v1065, 15) - HIWORD(v1692))) ^ v1064;
              v1067 = (v1066 >> 15) ^ (19032 * __ROL4__(v1066 - v1042, 3)) ^ (v1066 >> 1) ^ (19032
                                                                                           * (HIWORD(v1692) ^ v1066)) ^ v1065;
              v1068 = (WORD1(v1692) * (v1067 - v1042) - (v1067 >> 13)) ^ v1066;
              v1069 = __ROR4__(v1068, 11) ^ (v1042 * __ROR4__(-1313519016 - v1068, 9)) ^ v1067;
              v1070 = (v1069 - HIWORD(v1692) + 1313519016) ^ v1068;
              v1071 = (19032 * (lpModuleNamem ^ v1070) - __ROR4__(v1070, 7)) ^ v1069;
              v1072 = (WORD1(v1692) * __ROL4__(HIWORD(v1692) ^ v1071, 4) - __ROR4__(v1071, 16)) ^ v1070;
              v1073 = (__ROR4__(v1072, 4) + v1042 * __ROR4__(-1313519016 - v1072, 10)) ^ v1071;
              v1074 = __ROR4__(v1073, 9) ^ (HIWORD(v1692) * __ROR4__(v1073 + 1313519016, 4)) ^ v1072;
              v1075 = (19032 * __ROL4__(v1074 ^ HIDWORD(v1692), 8) - __ROL4__(v1074, 2)) ^ v1073;
              v1076 = (WORD1(v1692) * __ROR4__(HIDWORD(v1692) - v1075, 11) - __ROR4__(v1075, 12)) ^ v1074;
              v1077 = (v1076 >> 8) ^ (v1042 * (v1076 ^ WORD1(v1692))) ^ v1075;
              v1078 = v1077 ^ v1076;
              v1079 = v1044 ^ v1077;
              v1080 = HIDWORD(v1692) ^ v1078;
              v1044 = v1050;
              *(v1041 - 4) = v1079;
              v1081 = v1046 ^ v1080 ^ 0xB1B54A58;
              v1082 = __ROR4__(v1079, 8);
              *v1041 = v1081;
              v1046 = v1051;
              *(v1041 - 5) = v1082;
              v1041 += 8;
              v1083 = __ROR4__(v1081, 8);
              *(v1041 - 9) = v1083;
              v1084 = __ROR4__(v1082, 8);
              *(v1041 - 14) = v1084;
              v1085 = __ROR4__(v1083, 8);
              *(v1041 - 10) = v1085;
              v1086 = __ROR4__(v1084, 8);
              v1087 = __ROR4__(v1085, 8);
              *(v1041 - 15) = v1086;
              *(v1041 - 11) = v1087;
              v1026 = __ROR4__(v1087, 8);
              v1025 = __ROR4__(v1086, 8);
              --v1045;
            }
            while ( v1045 );
            v1007 = (const void **)v1490;
            v1022 = v1294;
            v1009 = (unsigned int *)v1490;
            v91 = v1397;
            v1008 = (WCHAR *)v1452;
            v1028 = Sizeh;
          }
          v1088 = v1501;
          *(_QWORD *)((char *)v1501 + v1028) = v1022;
          v1609[4] = (void *)160;
          v1089 = GetProcessHeap();
          v1090 = (unsigned int *)HeapAlloc(v1089, 8u, 0x30uLL);
          if ( !v1090 )
          {
            v1091 = -1073741801;
            goto LABEL_1317;
          }
          *v1090 = v1493;
          v1102 = GetProcessHeap();
          v1103 = HeapAlloc(v1102, 8u, (unsigned int)v1493);
          if ( !v1103 )
            goto LABEL_1337;
          *((_QWORD *)v1090 + 1) = v1103;
          memcpy_0(v1103, v1088, (unsigned int)v1493);
          v1090[4] = 160;
          v1104 = GetProcessHeap();
          v1105 = HeapAlloc(v1104, 8u, 0xA0uLL);
          v1091 = 0;
          if ( !v1105 )
            goto LABEL_1337;
          *((_QWORD *)v1090 + 3) = v1105;
          *v1105 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
          v1105[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
          v1105[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
          v1105[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
          v1105[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
          v1105[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
          v1105[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
          v1105[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
          v1105[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
          v1105[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
          v1090[8] = 8;
          v1106 = GetProcessHeap();
          v1107 = HeapAlloc(v1106, 8u, 8uLL);
          if ( v1107 )
          {
            *((_QWORD *)v1090 + 5) = v1107;
            *v1107 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
            v1007 = (const void **)v1090;
            v1092 = 0LL;
          }
          else
          {
LABEL_1337:
            v1091 = -1073741801;
            v1456 = (WCHAR *)*((_QWORD *)v1090 + 1);
            if ( v1456 )
            {
              v1108 = GetProcessHeap();
              HeapFree(v1108, 0, v1456);
              *((_QWORD *)v1090 + 1) = 0LL;
            }
            v1457 = (WCHAR *)*((_QWORD *)v1090 + 3);
            if ( v1457 )
            {
              v1109 = GetProcessHeap();
              HeapFree(v1109, 0, v1457);
              *((_QWORD *)v1090 + 3) = 0LL;
            }
            v1458 = (WCHAR *)*((_QWORD *)v1090 + 5);
            if ( v1458 )
            {
              v1110 = GetProcessHeap();
              HeapFree(v1110, 0, v1458);
              *((_QWORD *)v1090 + 5) = 0LL;
            }
            v1111 = GetProcessHeap();
            HeapFree(v1111, 0, v1090);
LABEL_1317:
            v1092 = Srcf;
          }
          v1093 = GetProcessHeap();
          HeapFree(v1093, 0, v1501);
          v92 = 0LL;
          if ( v1092 )
          {
            v1453 = (WCHAR *)v1092[1];
            if ( v1453 )
            {
              v1094 = GetProcessHeap();
              HeapFree(v1094, 0, v1453);
              v1092[1] = 0LL;
            }
            v1454 = (WCHAR *)v1092[3];
            if ( v1454 )
            {
              v1095 = GetProcessHeap();
              HeapFree(v1095, 0, v1454);
              v1092[3] = 0LL;
            }
            v1455 = (WCHAR *)v1092[5];
            if ( v1455 )
            {
              v1096 = GetProcessHeap();
              HeapFree(v1096, 0, v1455);
              v1092[5] = 0LL;
            }
            v1097 = GetProcessHeap();
            HeapFree(v1097, 0, v1092);
            v92 = 0LL;
          }
          v1020 = v1091 | 0x10000000;
          if ( v1020 < 0 )
            goto LABEL_1359;
          v1098 = *(unsigned int *)v1007;
          LODWORD(v1546) = 4;
          v1099 = RtlUIntAdd(4LL, v1098, &v1546);
          if ( v1099 < 0 )
            goto LABEL_1354;
          v1099 = RtlUIntAdd((unsigned int)v1546, v1100, &v1546);
          if ( v1099 < 0 )
            goto LABEL_1354;
          v1099 = RtlUIntAdd((unsigned int)v1546, *((unsigned int *)v1007 + 4), &v1546);
          if ( v1099 < 0 )
            goto LABEL_1354;
          v1099 = RtlUIntAdd((unsigned int)v1546, v1101, &v1546);
          if ( v1099 < 0 )
            goto LABEL_1354;
          v1099 = RtlUIntAdd((unsigned int)v1546, *((unsigned int *)v1007 + 8), &v1546);
          if ( v1099 < 0 )
            goto LABEL_1354;
          lpModuleNamen = v1546;
          v1112 = v1546;
          v1113 = GetProcessHeap();
          v1114 = HeapAlloc(v1113, 8u, v1112);
          v92 = 0LL;
          v1115 = v1114;
          if ( !v1114 )
            goto LABEL_1416;
          v1610 = v1114;
          *v1114 = *(_DWORD *)v1007;
          v1099 = RtlULongLongAdd(v1114, 4LL, &v1610);
          if ( v1099 >= 0 )
          {
            memcpy_0(v1610, v1007[1], *(unsigned int *)v1007);
            v1099 = RtlULongLongAdd(v1610, *(unsigned int *)v1007, &v1610);
            if ( v1099 >= 0 )
            {
              v1116 = v1610;
              *(_DWORD *)v1610 = *((_DWORD *)v1007 + 4);
              v1099 = RtlULongLongAdd(v1116, 4LL, &v1610);
              if ( v1099 >= 0 )
              {
                memcpy_0(v1610, v1007[3], *((unsigned int *)v1007 + 4));
                v1099 = RtlULongLongAdd(v1610, *((unsigned int *)v1007 + 4), &v1610);
                if ( v1099 >= 0 )
                {
                  v1117 = v1610;
                  *(_DWORD *)v1610 = *((_DWORD *)v1007 + 8);
                  v1099 = RtlULongLongAdd(v1117, 4LL, &v1610);
                  if ( v1099 >= 0 )
                  {
                    memcpy_0(v1610, v1007[5], *((unsigned int *)v1007 + 8));
                    v1118 = RtlULongLongAdd(v1610, *((unsigned int *)v1007 + 8), &v1610);
                    v92 = 0LL;
                    v1099 = v1118;
                    if ( v1118 >= 0 )
                    {
                      v1495 = (SIZE_T)v1115;
                      v1119 = lpModuleNamen;
                      v1411 = lpModuleNamen;
                      goto LABEL_1355;
                    }
                  }
                }
              }
            }
          }
          v1120 = GetProcessHeap();
          HeapFree(v1120, 0, v1115);
          v92 = 0LL;
LABEL_1354:
          v1119 = v1495;
LABEL_1355:
          v1020 = v1099 | 0x10000000;
          if ( v1020 < 0 )
            goto LABEL_1359;
          v1547 = 8;
          v1121 = RtlUIntAdd(8LL, v1338, &v1547);
          v1020 = v1121 | 0x10000000;
          if ( v1121 >= 0 )
          {
            v1124 = (v1547 + 7) & 0xFFFFFFF8;
            if ( v1124 < v1547 )
            {
              v1020 = -1073741675;
              goto LABEL_1359;
            }
            v1548 = (v1547 + 7) & 0xFFFFFFF8;
            v1020 = RtlUIntAdd(v1124, v1122, &v1548);
            if ( v1020 >= 0 )
            {
              if ( v1634 && (unsigned int)v1633 > 1 )
              {
                v1611 = (unsigned int *)v1634;
                v1020 = RtlULongLongAdd(v1634, 4LL, &v1611);
                if ( v1020 >= 0 )
                {
                  v1020 = RtlULongLongAdd(v1611, v1145, &v1611);
                  if ( v1020 >= 0 )
                  {
                    v1339 = *v1611;
                    v1020 = RtlULongLongAdd(v1611, 4LL, &v1611);
                    if ( v1020 >= 0 )
                    {
                      if ( (unsigned int)v1633 > 2 )
                      {
                        v1147 = (unsigned int *)v1634;
                        v1612 = (unsigned int *)v1634;
                        v1495 = v1146;
                        v1411 = v1119;
                        while ( 1 )
                        {
                          v1148 = *v1147;
                          v1020 = RtlULongLongAdd(v1147, 4LL, &v1612);
                          if ( v1020 < 0 )
                            break;
                          v1020 = RtlULongLongAdd(v1612, v1148, &v1612);
                          if ( v1020 < 0 )
                            break;
                          v1147 = v1612;
                          if ( (unsigned int)(v1149 + 1) >= 2 )
                          {
                            v1020 = RtlULongLongAdd(v1612, 4LL, &v1612);
                            if ( v1020 < 0 )
                              break;
                            LODWORD(v1549) = 4;
                            v1151 = RtlUIntAdd(4LL, v1150, &v1549);
                            v92 = 0LL;
                            v1020 = v1151;
                            if ( v1151 < 0
                              || (v1020 = RtlUIntAdd((unsigned int)v1549, 4LL, &v1549), v1020 < 0)
                              || (v1020 = RtlUIntAdd((unsigned int)v1549, v1339, &v1549), v1020 < 0)
                              || (v1020 = RtlUIntAdd((unsigned int)v1549, 4LL, &v1549), v1020 < 0)
                              || (v1020 = RtlUIntAdd((unsigned int)v1549, v1152, &v1549), v1020 < 0) )
                            {
                              if ( v1020 < 0 )
                                goto LABEL_1412;
                              v1153 = HIDWORD(v1549);
                            }
                            else
                            {
                              v1153 = v1549;
                            }
                            v1340 = v1153;
                            if ( v1153 > 0x400000 )
                            {
                              v1020 = -2147418113;
                              goto LABEL_1359;
                            }
                            goto LABEL_1413;
                          }
                        }
                      }
                      else
                      {
                        v1020 = -1073741811;
                      }
                    }
                  }
                }
              }
              else
              {
                v1020 = -1073741811;
              }
LABEL_1557:
              v92 = 0LL;
            }
            goto LABEL_1359;
          }
LABEL_1412:
          v1153 = v92;
          v1340 = v92;
          if ( v1020 < 0 )
            goto LABEL_1359;
LABEL_1413:
          v1459 = v1008;
          v1154 = v1123;
          v1490 = (__int64)v1007;
          v1155 = v1153;
          v1156 = GetProcessHeap();
          v1157 = (unsigned int *)HeapAlloc(v1156, 8u, v1155);
          v92 = 0LL;
          if ( !v1157 )
          {
LABEL_1416:
            v1020 = -805306345;
            goto LABEL_1359;
          }
          v1009 = v1157;
          if ( !v1154 )
          {
            v1020 = -2147024809;
            v1495 = 0LL;
            goto LABEL_1359;
          }
          v1644 = v1411;
          v1645 = v1340;
          v1643[0] = v1154;
          v1643[1] = v1157;
          v1646 = 0;
          if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
            && (v1158 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
          {
            v1159 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1158)(134LL, v1643);
            v1160 = v1340;
            v1020 = v1159 | 0x10000000;
            if ( v1159 >= 0 )
            {
              v1160 = v1645;
              v1161 = v1008;
              v1162 = v1007;
              v92 = 0LL;
              goto LABEL_1430;
            }
            v92 = 0LL;
          }
          else
          {
            v1163 = GetLastError();
            v92 = 0LL;
            v1020 = v1163;
            if ( v1163 > 0 )
              v1020 = (unsigned __int16)v1163 | 0x80070000;
            v1160 = v1340;
            if ( v1020 >= 0 )
              v1020 = -2147467259;
          }
          v1495 = v1154;
          if ( v1020 == -805306333 )
          {
            v1020 = -2147024774;
            goto LABEL_1359;
          }
          v1162 = v1007;
          v1161 = v1008;
          if ( v1020 >= 0 )
          {
LABEL_1430:
            if ( v1160 < 4 )
              goto LABEL_1450;
            v1164 = *v1009;
            v1165 = v1009 + 1;
            v1341 = *v1009;
            if ( v1009 + 1 < v1009 )
            {
              v1020 = -805306219;
            }
            else
            {
              if ( v1160 - 4 >= (unsigned int)v1164 )
              {
                v1166 = (unsigned int *)((char *)v1165 + v1164);
                v1495 = *v1009;
                v1489 = (SIZE_T)v1165 + v1164;
                if ( (unsigned int *)((char *)v1165 + v1164) < v1165 || (unsigned int)(v1164 + 4) < 4 )
                  goto LABEL_1555;
                if ( v1160 - ((_DWORD)v1164 + 4) < 4 )
                  goto LABEL_1453;
                v1167 = *v1166;
                v1168 = v1166 + 1;
                if ( v1166 + 1 < v1166 )
                  goto LABEL_1555;
                v1169 = v1164 + 8;
                if ( (int)v1164 + 8 < (unsigned int)(v1164 + 4) )
                  goto LABEL_1555;
                if ( v1160 - v1169 < (unsigned int)v1167 )
                  goto LABEL_1453;
                if ( (unsigned int *)((char *)v1168 + v1167) < v1168 )
                  goto LABEL_1555;
                v1170 = v1167 + v1169;
                if ( (unsigned int)v1167 + v1169 < v1169 )
                  goto LABEL_1555;
                if ( v1160 - v1170 < 4 )
                  goto LABEL_1453;
                v1171 = *(unsigned int *)((char *)v1168 + v1167);
                Srcg = (char *)v1168 + v1167 + 4;
                if ( Srcg < (char *)v1168 + v1167 )
                  goto LABEL_1555;
                v1172 = v1170 + 4;
                if ( v1170 + 4 < v1170 )
                  goto LABEL_1555;
                if ( v1160 - v1172 < (unsigned int)v1171 )
                  goto LABEL_1453;
                if ( v1172 + (unsigned int)v1171 < v1172 )
                {
LABEL_1555:
                  v1020 = -805306219;
                }
                else
                {
                  if ( v1160 == v1172 + (_DWORD)v1171 && (unsigned int)(v1167 + v1171 + v1164) + 12LL == v1160 )
                  {
                    v1173 = GetProcessHeap();
                    v1174 = HeapAlloc(v1173, 8u, 0x30uLL);
                    v92 = 0LL;
                    Sizei = v1174;
                    v1175 = v1174;
                    if ( !v1174 )
                    {
                      v1007 = (const void **)v1490;
                      v1020 = -805306345;
                      v1008 = (WCHAR *)v1459;
                      v1495 = v1154;
                      goto LABEL_1359;
                    }
                    if ( v1009 == (unsigned int *)-4LL )
                    {
                      *(_DWORD *)v1174 = 0;
                      v1174[1] = 0LL;
LABEL_1458:
                      if ( v1489 == -4LL )
                      {
                        v1175[4] = 0;
                        *((_QWORD *)v1175 + 3) = 0LL;
                      }
                      else
                      {
                        v1175[4] = v1167;
                        v1178 = GetProcessHeap();
                        v1179 = HeapAlloc(v1178, 8u, v1167);
                        if ( !v1179 )
                          goto LABEL_1465;
                        *((_QWORD *)v1175 + 3) = v1179;
                        memcpy_0(v1179, (const void *)(v1489 + 4), v1167);
                        v92 = 0LL;
                      }
                      if ( Srcg )
                      {
                        v1175[8] = v1171;
                        v1180 = GetProcessHeap();
                        v1181 = HeapAlloc(v1180, 8u, v1171);
                        if ( !v1181 )
                          goto LABEL_1465;
                        *((_QWORD *)v1175 + 5) = v1181;
                        memcpy_0(v1181, Srcg, v1171);
                        v92 = 0LL;
                      }
                      else
                      {
                        v1175[8] = 0;
                        *((_QWORD *)v1175 + 5) = 0LL;
                      }
                      v1007 = (const void **)v1490;
                      v1008 = (WCHAR *)v1459;
                      v1558 = v1175;
                      v1182 = 0;
                      v1489 = (SIZE_T)v1009;
                      v1495 = v1154;
                      v1189 = (unsigned int *)v1558;
                    }
                    else
                    {
                      *(_DWORD *)v1174 = v1341;
                      v1176 = GetProcessHeap();
                      v1177 = HeapAlloc(v1176, 8u, v1495);
                      if ( v1177 )
                      {
                        *((_QWORD *)v1175 + 1) = v1177;
                        memcpy_0(v1177, v1009 + 1, v1495);
                        v92 = 0LL;
                        goto LABEL_1458;
                      }
LABEL_1465:
                      v1007 = (const void **)v1490;
                      v1182 = -1073741801;
                      v1008 = (WCHAR *)v1459;
                      v1489 = (SIZE_T)v1009;
                      v1495 = v1154;
                      v1183 = Sizei;
                      v1558 = 0LL;
                      Srch = (void *)Sizei[1];
                      if ( Srch )
                      {
                        v1184 = GetProcessHeap();
                        HeapFree(v1184, 0, Srch);
                        v1183 = Sizei;
                        Sizei[1] = 0LL;
                      }
                      Srci = (void *)v1183[3];
                      if ( Srci )
                      {
                        v1185 = GetProcessHeap();
                        HeapFree(v1185, 0, Srci);
                        v1183 = Sizei;
                        Sizei[3] = 0LL;
                      }
                      Srcj = (void *)v1183[5];
                      if ( Srcj )
                      {
                        v1186 = GetProcessHeap();
                        HeapFree(v1186, 0, Srcj);
                        Sizei[5] = 0LL;
                      }
                      v1187 = GetProcessHeap();
                      HeapFree(v1187, 0, Sizei);
                      v1188 = v1558;
                      Sizej = (SIZE_T)v1007;
                      v1189 = 0LL;
                      v92 = 0LL;
                      v1558 = 0LL;
                      v1489 = (SIZE_T)v1009;
                      v1495 = v1154;
                      v1490 = (__int64)v1007;
                      if ( v1188 )
                      {
                        v1190 = (void *)v1188[1];
                        v1191 = v1188;
                        if ( v1190 )
                        {
                          v1192 = GetProcessHeap();
                          HeapFree(v1192, 0, v1190);
                          v1191[1] = 0LL;
                        }
                        v1193 = (void *)v1191[3];
                        if ( v1193 )
                        {
                          v1194 = GetProcessHeap();
                          HeapFree(v1194, 0, v1193);
                          v1191[3] = 0LL;
                        }
                        v1195 = (void *)v1191[5];
                        if ( v1195 )
                        {
                          v1196 = GetProcessHeap();
                          HeapFree(v1196, 0, v1195);
                          v1191[5] = 0LL;
                        }
                        v1197 = GetProcessHeap();
                        HeapFree(v1197, 0, v1191);
                        v1007 = (const void **)Sizej;
                        v92 = 0LL;
                        v1182 = -1073741801;
                        v1189 = 0LL;
                        v1558 = 0LL;
                        v1489 = (SIZE_T)v1009;
                        v1495 = v1154;
                        v1490 = Sizej;
                      }
                    }
                    v1020 = v1182 | 0x10000000;
                    if ( v1020 < 0 )
                      goto LABEL_1359;
                    if ( !v1189 || (Sizek = *((_QWORD *)v1189 + 1)) == 0 || !*v1189 )
                    {
                      v1020 = -805306355;
                      goto LABEL_1359;
                    }
                    v1493 = *v1189 - 8LL;
                    v1198 = v1493;
                    v1199 = (wchar_t *)MemoryAlloc(v1493);
                    v92 = 0LL;
                    v1376 = (SIZE_T)v1199;
                    v1200 = v1199;
                    if ( !v1199 )
                    {
LABEL_1512:
                      v1020 = -805306367;
                      v1375 = 0LL;
                      goto LABEL_1359;
                    }
                    v1201 = (unsigned __int8 *)Sizek;
                    v1693 = 0x7F1137FAB69605ELL;
                    v1202 = 0;
                    v1342 = 0;
                    v1203 = v1198 & 7;
                    if ( (v1198 & 7) != 0 )
                    {
                      v1204 = 56;
                      v1205 = (unsigned __int8 *)Sizek;
                      v1206 = 0;
                      do
                      {
                        v1207 = *v1205++;
                        if ( (int)v92 >= 4 )
                        {
                          v1208 = v1342;
                          v1206 |= v1207 << v1204;
                        }
                        else
                        {
                          v1208 = (v1207 << (v1204 - 32)) | v1342;
                          v1342 = v1208;
                        }
                        LODWORD(v92) = v92 + 1;
                        v1204 -= 8;
                      }
                      while ( (int)v92 < v1203 );
                      v91 = v1397;
                      v1489 = (SIZE_T)v1009;
                      v1209 = v1206;
                      v1499 = v1206;
                      v1200 = (wchar_t *)v1376;
                      v1210 = v1209 ^ 0x699A899C;
                      lpModuleNameo = v1208 ^ 0x92F65A5;
                      v1211 = 0;
                      v1212 = v1208 ^ 0x92F65A5;
                      v1495 = v1154;
                      v1213 = v1210;
                      v1490 = (__int64)v1007;
                      v1459 = v1008;
                      v1214 = (_BYTE *)v1376;
                      do
                      {
                        v1469 = (wchar_t *)(v1214 + 1);
                        if ( v1211 >= 4 )
                        {
                          v1213 = __ROL4__(v1213, 8);
                          v1215 = v1213;
                        }
                        else
                        {
                          v1212 = __ROL4__(v1212, 8);
                          v1215 = v1212;
                        }
                        *v1214 = v1215;
                        ++v1211;
                        ++v1214;
                      }
                      while ( v1211 < v1203 );
                      v1202 = 0;
                      v1216 = v1469;
                      v1154 = v1495;
                      v1009 = (unsigned int *)v1489;
                      v1217 = lpModuleNameo;
                      v1198 = v1493;
                      if ( (unsigned int)v1203 > 4 )
                      {
                        LODWORD(v92) = v1210 >> (8 * (8 - v1203)) << (8 * (8 - v1203));
                        v1216 = v1469;
                        goto LABEL_1500;
                      }
                      LODWORD(v92) = 0;
                      if ( (unsigned int)v1203 >= 4 )
                      {
LABEL_1500:
                        v1201 = v1205;
                      }
                      else
                      {
                        v1201 = v1205;
                        v1217 = lpModuleNameo >> (8 * (4 - v1203)) << (8 * (4 - v1203));
                        v1216 = v1469;
                      }
                    }
                    else
                    {
                      v1217 = 0;
                      v1216 = v1200;
                    }
                    v1218 = v1198 >> 3;
                    if ( v1198 >> 3 )
                    {
                      v1219 = HIDWORD(v1693);
                      v1220 = (char *)v1216 + 7;
                      v1221 = v1201 + 2;
                      v1222 = v1342;
                      v1223 = HIDWORD(v1693) ^ 0xAB69605E;
                      lpModuleNamep = HIDWORD(v1693) ^ 0xAB69605E;
                      v1224 = v1218;
                      v1225 = WORD2(v1693);
                      do
                      {
                        v1226 = *(v1221 - 1) | (*(v1221 - 2) << 8);
                        v1227 = v1221[2] << 8;
                        v1228 = *v1221;
                        v1221 += 8;
                        v1229 = *(v1221 - 7) | ((v1228 | (v1226 << 8)) << 8);
                        v1230 = v1229 ^ v1217;
                        v1231 = *(v1221 - 3) | ((*(v1221 - 4) | ((*(v1221 - 5) | v1227) << 8)) << 8);
                        v1232 = v1223 ^ v1230 ^ v1231 ^ v92;
                        v1233 = (__ROL4__(v1232, 10) + v1225 * __ROL4__(v1232 + 1419157410, 5)) ^ v1230;
                        v1234 = (WORD1(v1693) * __ROR4__(v1219 + v1233, 9) - __ROL4__(v1233, 2)) ^ v1232;
                        v1235 = (24670 * (v1234 - v1225) - (v1234 >> 13)) ^ v1233;
                        v1236 = (HIWORD(v1693) * __ROL4__(WORD1(v1693) ^ v1235, 6) - __ROL4__(v1235, 2)) ^ v1234;
                        v1237 = (v1219 - (v1236 ^ 0xAB69605E)) ^ v1235;
                        v1238 = (WORD1(v1693) * (v1225 ^ v1237)) ^ __ROR4__(v1237, 6) ^ v1236;
                        v1239 = (__ROL4__(v1238, 2) + 24670 * __ROR4__(v1219 + v1238, 15)) ^ v1237;
                        v1240 = (HIWORD(v1693) * __ROR4__(v1239 + 1419157410, 14) - __ROL4__(v1239, 8)) ^ v1238;
                        v1241 = __ROR4__(v1240, 10) ^ (v1225 * __ROR4__(v1240 ^ 0xAB69605E, 12)) ^ v1239;
                        v1242 = (v1241 >> 10) ^ (WORD1(v1693) * (HIWORD(v1693) ^ v1241)) ^ v1240;
                        v1243 = (HIWORD(v1693) * (__ROR4__(~v1242, 5) + 24670)) ^ v1241;
                        v1244 = v1242 ^ (v1243 - HIWORD(v1693)) ^ 0xAB69605E;
                        v1245 = ((v1244 >> 2) + v1225 * __ROL4__(HIWORD(v1693) ^ v1244, 2)) ^ v1243;
                        v1246 = (__ROL4__(v1245, 7) + WORD1(v1693) * __ROR4__(v1245 - v1219, 6)) ^ v1244;
                        v1247 = (24670 * (v1225 ^ v1246) + __ROR4__(v1246, 9)) ^ v1245;
                        v1248 = (__ROL4__(v1247, 7) + HIWORD(v1693) * __ROL4__(WORD1(v1693) ^ v1247, 5)) ^ v1246;
                        v1249 = v1219 ^ v1248 ^ v1247 ^ 0xAB69605E;
                        v1250 = (v1225 * (__ROR4__(v1249, 3) - WORD1(v1693))) ^ v1248;
                        v1251 = (24670 * __ROR4__(v1250 - v1219, 1) - __ROR4__(v1250, 6)) ^ v1249;
                        v1252 = (__ROL4__(v1251, 14) + HIWORD(v1693) * __ROL4__(v1251 - 1419157410, 3)) ^ v1250;
                        v1253 = (v1225 * __ROL4__(v1252 - 1419157410, 15) - __ROR4__(v1252, 14)) ^ v1251;
                        v1223 = lpModuleNamep;
                        v1254 = (v1253 >> 3) ^ (WORD1(v1693) * (v1253 ^ 0x605E)) ^ v1252;
                        v1255 = v1499 ^ v1254;
                        v1499 = v1231;
                        v1256 = v1222 ^ __ROL4__(v1254, 2) ^ (24670 * __ROL4__(v1219 ^ v1254, 4));
                        v1222 = v1229;
                        v1257 = v1256 ^ v1253;
                        *(v1220 - 4) = v1257;
                        *v1220 = v1255;
                        v1220 += 8;
                        v1258 = __ROR4__(v1257, 8);
                        *(v1220 - 13) = v1258;
                        v1259 = __ROR4__(v1255, 8);
                        *(v1220 - 9) = v1259;
                        v1260 = __ROR4__(v1258, 8);
                        *(v1220 - 14) = v1260;
                        v1261 = __ROR4__(v1259, 8);
                        *(v1220 - 10) = v1261;
                        v1262 = __ROR4__(v1260, 8);
                        v1263 = __ROR4__(v1261, 8);
                        *(v1220 - 15) = v1262;
                        *(v1220 - 11) = v1263;
                        LODWORD(v92) = __ROR4__(v1263, 8);
                        v1217 = __ROR4__(v1262, 8);
                        --v1224;
                      }
                      while ( v1224 );
                      v1202 = 0;
                      v91 = v1397;
                      v1007 = (const void **)v1490;
                      v1009 = (unsigned int *)v1489;
                      v1008 = (WCHAR *)v1459;
                      v1154 = v1495;
                      v1200 = (wchar_t *)v1376;
                      v1198 = v1493;
                    }
                    for ( i2 = 0LL; i2 < v1198; ++i2 )
                      v1202 ^= *((_BYTE *)v1200 + i2);
                    v1265 = v1558;
                    v1489 = v1154;
                    v1495 = v1154;
                    if ( v1202 != *(_QWORD *)(v1198 + Sizek) )
                    {
                      MemoryFree(v1200);
                      v92 = 0LL;
                      goto LABEL_1512;
                    }
                    v1614 = v1200;
                    v1550 = 0;
                    if ( (unsigned int)v1198 < 4 )
                    {
                      v1495 = v1154;
                      goto LABEL_1552;
                    }
                    v1343 = *(_DWORD *)v1200;
                    v1266 = RtlULongLongAdd(v1200, 4LL, &v1614);
                    v1375 = v1267;
                    v1268 = v1266;
                    v1558 = v1269;
                    v1495 = v1270;
                    if ( v1266 < 0 )
                      goto LABEL_1553;
                    v1271 = RtlUIntAdd(0LL, 4LL, &v1550);
                    v1375 = v1200;
                    v1268 = v1271;
                    v1558 = v1265;
                    v1495 = v1272;
                    if ( v1271 < 0 )
                      goto LABEL_1553;
                    if ( (unsigned int)v1493 - v1550 >= 4 )
                    {
                      lpModuleNameq = *(_DWORD *)v1614;
                      v1273 = RtlULongLongAdd(v1614, 4LL, &v1614);
                      v1375 = v1274;
                      v1268 = v1273;
                      v1558 = v1275;
                      v1495 = v1276;
                      if ( v1273 < 0 )
                        goto LABEL_1553;
                      v1277 = RtlUIntAdd(v1550, 4LL, &v1550);
                      v1375 = v1200;
                      v1268 = v1277;
                      v1558 = v1265;
                      v1495 = v1272;
                      if ( v1277 < 0 )
                        goto LABEL_1553;
                      if ( (unsigned int)v1493 - v1550 >= lpModuleNameq )
                      {
                        v1278 = RtlUIntAdd(v1550, lpModuleNameq, &v1550);
                        v1375 = v1200;
                        v1268 = v1278;
                        v1558 = v1265;
                        v1495 = v1272;
                        if ( v1278 < 0 )
                          goto LABEL_1553;
                        if ( (char *)v1200 + (unsigned int)v1493 >= (char *)v1614 + lpModuleNameq
                          && (unsigned __int64)v1200 + (unsigned int)v1493 - (_QWORD)v1614 - lpModuleNameq < 8 )
                        {
                          v1375 = v1200;
                          v1412 = 0;
                          v1279 = 0LL;
                          Sizel = 0LL;
                          v1268 = 0;
                          v1558 = v1265;
                          v1495 = v1272;
                          if ( !v1614 )
                            goto LABEL_1539;
                          v1493 = (SIZE_T)v1614;
                          v1268 = RtlULongLongAdd(v1614, lpModuleNameq, &v1615);
                          v1375 = v1280;
                          v1558 = v1282;
                          v1495 = v1281;
                          if ( v1268 < 0 )
                            goto LABEL_1542;
                          v1283 = v1615;
                          v1375 = v1280;
                          v1558 = v1282;
                          v1495 = v1281;
                          if ( v1493 < v1615 )
                          {
                            v1284 = v1489;
                            v1375 = v1280;
                            v1558 = v1282;
                            v1285 = v1493;
                            v1495 = v1489;
                            while ( 1 )
                            {
                              v1268 = RtlULongLongAdd(v1285, 4LL, &v1616);
                              if ( v1268 < 0 )
                                break;
                              if ( v1616 > v1283 )
                                goto LABEL_1535;
                              v1268 = RtlUIntAdd(4LL, *v1286, &v1551);
                              if ( v1268 < 0 )
                                goto LABEL_1553;
                              v1268 = RtlULongLongAdd(v1287, v1551, &v1617);
                              v1375 = v1289;
                              v1558 = v1288;
                              v1495 = v1284;
                              if ( v1268 < 0 )
                                break;
                              v1285 = v1617;
                              v1375 = v1289;
                              v1558 = v1288;
                              v1495 = v1284;
                              if ( v1617 > v1283 )
                                goto LABEL_1535;
                              ++v1412;
                              if ( v1617 >= v1283 )
                              {
                                v1375 = v1289;
                                v1558 = v1288;
                                v1495 = v1284;
                                goto LABEL_1537;
                              }
                            }
LABEL_1542:
                            v92 = 0LL;
LABEL_1548:
                            if ( v1268 >= 0 && v1343 != LODWORD(v1637[0]) )
                              v1268 = -1073741762;
LABEL_1554:
                            v1020 = v1268 | 0x10000000;
                            goto LABEL_1359;
                          }
                          v1285 = v1493;
LABEL_1537:
                          if ( v1285 == v1283 )
                          {
                            v1279 = 0LL;
LABEL_1539:
                            v92 = 0LL;
                            if ( lpModuleNameq )
                            {
                              v1290 = GetProcessHeap();
                              v1291 = lpModuleNameq;
                              v1292 = HeapAlloc(v1290, 8u, lpModuleNameq);
                              v92 = 0LL;
                              Sizel = (SIZE_T)v1292;
                              v1279 = v1292;
                              if ( !v1292 )
                              {
                                v1268 = -1073741801;
                                goto LABEL_1554;
                              }
                              v1268 = 0;
                            }
                            else
                            {
                              v1291 = 0LL;
                            }
                            if ( v1614 )
                            {
                              memcpy_0(v1279, v1614, v1291);
                              v1279 = (void *)Sizel;
                              v92 = 0LL;
                            }
                            LODWORD(v1637[0]) = v1412;
                            v1637[1] = v1279;
                            goto LABEL_1548;
                          }
LABEL_1535:
                          v1268 = -1073741811;
LABEL_1553:
                          v92 = 0LL;
                          goto LABEL_1554;
                        }
                      }
                    }
                    v1495 = v1272;
LABEL_1552:
                    v1268 = -1073741762;
                    v1375 = v1200;
                    v1558 = v1265;
                    goto LABEL_1553;
                  }
LABEL_1453:
                  v1020 = -805306306;
                }
                v1495 = v1154;
                v1007 = v1162;
                v1008 = v1161;
                goto LABEL_1557;
              }
LABEL_1450:
              v1020 = -805306306;
            }
            v1495 = v1154;
            v1007 = v1162;
            v1008 = v1161;
          }
LABEL_1359:
          if ( v1008 )
          {
LABEL_1360:
            v1125 = GetProcessHeap();
            HeapFree(v1125, 0, v1008);
            v92 = 0LL;
          }
          if ( v1007 )
          {
            v1126 = (void *)v1007[1];
            if ( v1126 )
            {
              v1127 = GetProcessHeap();
              HeapFree(v1127, 0, v1126);
              v1007[1] = 0LL;
            }
            v1128 = (void *)v1007[3];
            if ( v1128 )
            {
              v1129 = GetProcessHeap();
              HeapFree(v1129, 0, v1128);
              v1007[3] = 0LL;
            }
            v1130 = (void *)v1007[5];
            if ( v1130 )
            {
              v1131 = GetProcessHeap();
              HeapFree(v1131, 0, v1130);
              v1007[5] = 0LL;
            }
            v1132 = GetProcessHeap();
            HeapFree(v1132, 0, v1007);
            v92 = 0LL;
          }
          v1133 = (void *)v1495;
          if ( v1495 )
          {
            v1134 = GetProcessHeap();
            HeapFree(v1134, 0, v1133);
            v92 = 0LL;
          }
          if ( v1009 )
          {
            v1135 = GetProcessHeap();
            HeapFree(v1135, 0, v1009);
            v92 = 0LL;
          }
          v1136 = v1558;
          if ( v1558 )
          {
            v1137 = (void *)*((_QWORD *)v1558 + 1);
            if ( v1137 )
            {
              v1138 = GetProcessHeap();
              HeapFree(v1138, 0, v1137);
              v1136[1] = 0LL;
            }
            v1139 = (void *)v1136[3];
            if ( v1139 )
            {
              v1140 = GetProcessHeap();
              HeapFree(v1140, 0, v1139);
              v1136[3] = 0LL;
            }
            v1141 = (void *)v1136[5];
            if ( v1141 )
            {
              v1142 = GetProcessHeap();
              HeapFree(v1142, 0, v1141);
              v1136[5] = 0LL;
            }
            v1143 = GetProcessHeap();
            HeapFree(v1143, 0, v1136);
            v92 = 0LL;
          }
          if ( v1375 )
          {
            v1144 = GetProcessHeap();
            HeapFree(v1144, 0, v1375);
            v92 = 0LL;
          }
          if ( v1020 >= 0 && LODWORD(v1637[0]) && v1637[1] )
          {
            v1618[0] = v1637[1];
            RtlULongLongAdd(v1637[1], 4LL, v1618);
          }
        }
        else
        {
          v1000 = (unsigned int *)v1634;
          v1608 = (unsigned int *)v1634;
          if ( v993 )
          {
            while ( (int)RtlUIntAdd((unsigned int)v981, *v1000, &v1541) >= 0
                 && (int)RtlULongLongAdd(v1001, v1541, &v1608) >= 0 )
            {
              v1000 = v1608;
              if ( v1002 + 1 >= v993 )
                goto LABEL_1274;
            }
          }
          else
          {
LABEL_1274:
            if ( (int)RtlULongLongAdd(v1000, v981, &v1623) >= 0
              && v1003 + 3 <= (_DWORD *)((char *)v1634 + HIDWORD(v1633)) )
            {
              v1004 = v1623;
              *v1003 = 8;
              *v1004 = v967;
              goto LABEL_1277;
            }
          }
        }
LABEL_1259:
        v961 = (_QWORD *)v1492;
      }
    }
    else
    {
      v988 = (unsigned int *)v1634;
      v1607 = (unsigned int *)v1634;
      if ( v987 )
      {
        while ( (int)RtlUIntAdd((unsigned int)v981, *v988, &v1539) >= 0 )
        {
          if ( (int)RtlULongLongAdd(v989, v1539, &v1607) < 0 )
            goto LABEL_1260;
          v988 = v1607;
          if ( v990 + 1 >= v987 )
            goto LABEL_1253;
        }
        goto LABEL_1259;
      }
LABEL_1253:
      if ( (int)RtlULongLongAdd(v988, v981, &v1626) >= 0 && v991 + 3 <= (_DWORD *)((char *)v1634 + HIDWORD(v1633)) )
      {
        v992 = v1626;
        *v991 = 8;
        *v992 = *v961;
        goto LABEL_1256;
      }
    }
  }
LABEL_1260:
  v166 = v1494;
LABEL_1261:
  v1633 = 0LL;
  v994 = v1634;
  if ( v1634 )
  {
    v995 = GetProcessHeap();
    HeapFree(v995, 0, v994);
    v92 = 0LL;
    v1634 = 0LL;
  }
  v1637[0] = 0LL;
  v996 = v1637[1];
  if ( v1637[1] )
  {
    v997 = GetProcessHeap();
    HeapFree(v997, 0, v996);
    v92 = 0LL;
    v1637[1] = 0LL;
  }
  if ( v166 )
  {
    v998 = GetProcessHeap();
    HeapFree(v998, 0, v166);
    v92 = 0LL;
  }
  if ( v961 )
  {
    v999 = GetProcessHeap();
    HeapFree(v999, 0, v961);
    v92 = 0LL;
  }
LABEL_1269:
  v89 = 4LL;
  v93 = v1520;
  v1601 = (int *)v1496;
  v1493 = v92;
LABEL_110:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v94 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v94 == 1 )
    {
      v95 = v89;
      v96 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      do
      {
        if ( *v96 )
          FreeLibrary(*v96);
        v96 += 3;
        --v95;
      }
      while ( v95 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
      LODWORD(v92) = 0;
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, v92);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1493);
  if ( v91 >= 0 )
  {
    if ( v93 == (_DWORD)v89 )
    {
      v1553 = *v1601;
      goto LABEL_4;
    }
    goto LABEL_6;
  }
  switch ( v91 )
  {
    case -805306316:
      v1519 = -1073418222;
      break;
    case -805306139:
    case -1073425151:
      v1519 = -1073418201;
      break;
    case -805306306:
      v1519 = -1073418200;
      break;
    default:
      v1519 = v91;
      if ( v91 == -2147024774 )
LABEL_6:
        v1519 = -1073418210;
      break;
  }
LABEL_4:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1601);
  return v1519 >= 0 && v1553 != 0;
}
