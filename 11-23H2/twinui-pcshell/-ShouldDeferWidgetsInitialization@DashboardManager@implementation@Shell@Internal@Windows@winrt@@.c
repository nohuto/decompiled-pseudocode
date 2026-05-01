/*
 * XREFs of ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180155034
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180184370 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180697554 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     RtlULongLongAdd @ 0x1800C4F80 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1800C4FA0 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1800C4FC0 (StringCchLengthW.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1801334E0 (-IsActiveSessionCountLimited@@YA_NXZ.c)
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

bool winrt::Windows::Internal::Shell::implementation::DashboardManager::ShouldDeferWidgetsInitialization(void)
{
  unsigned int v0; // r15d
  int v1; // eax
  _BYTE *v2; // rbx
  int v3; // esi
  _BYTE *v4; // r14
  int v5; // r12d
  unsigned __int8 *v6; // r15
  int v7; // r10d
  int v8; // r11d
  __int64 v9; // r13
  int v10; // r9d
  int v11; // r8d
  int v12; // eax
  int v13; // r9d
  int v14; // r11d
  int v15; // r8d
  unsigned int v16; // r10d
  int v17; // r11d
  unsigned int v18; // r10d
  int v19; // r11d
  int v20; // r10d
  unsigned int v21; // r11d
  int v22; // r10d
  int v23; // r11d
  int v24; // r10d
  unsigned int v25; // r11d
  int v26; // edx
  int v27; // r11d
  unsigned int v28; // r10d
  int v29; // r11d
  int v30; // r10d
  int v31; // r11d
  int v32; // r10d
  unsigned int v33; // r11d
  int v34; // r10d
  int v35; // r11d
  int v36; // r10d
  unsigned int v37; // r11d
  int v38; // r10d
  int v39; // edx
  int v40; // eax
  int v41; // r10d
  int v42; // edx
  int v43; // r11d
  int v44; // r11d
  int v45; // r10d
  int v46; // r11d
  int v47; // r10d
  int v48; // r11d
  int v49; // r10d
  unsigned __int64 v50; // rax
  char v51; // cl
  int v52; // esi
  unsigned int v53; // r12d
  int v54; // r13d
  __int64 v55; // rbx
  HMODULE *v56; // rdi
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
  signed int LastError; // edi
  __int64 v72; // r14
  wchar_t *v73; // rax
  bool v74; // sf
  wchar_t *v75; // rbx
  __int64 j; // r9
  wchar_t *v77; // r8
  signed int v78; // eax
  HDESK (__fastcall *v79)(WARBIRD_DELAY_LOAD *__hidden, unsigned int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v81; // r14
  wchar_t *v82; // rax
  bool v83; // sf
  wchar_t *v84; // rbx
  __int64 k; // r9
  wchar_t *v86; // r8
  signed int v87; // eax
  HANDLE CurrentProcess; // rax
  unsigned int v89; // r13d
  HLOCAL v90; // rax
  void *v91; // r15
  int v92; // r14d
  void *v93; // r12
  HANDLE v94; // rax
  _OWORD *v95; // rax
  unsigned int v96; // edi
  void *v97; // r13
  HANDLE v98; // rax
  void *v99; // r13
  HANDLE v100; // rax
  HANDLE v101; // rax
  HANDLE v102; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v104; // r12
  HANDLE v105; // rax
  _QWORD *v106; // r10
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
  int v126; // r11d
  _DWORD *v127; // rax
  int v128; // r10d
  int v129; // eax
  unsigned int v130; // r9d
  int v131; // r10d
  int *v132; // rdi
  int v133; // r9d
  unsigned int v134; // r10d
  unsigned int v135; // r11d
  unsigned int v136; // edi
  int v137; // eax
  int v138; // r10d
  __int64 v139; // rdi
  int *v140; // r9
  unsigned __int64 v141; // r9
  unsigned int v142; // r10d
  unsigned int *v143; // r9
  int v144; // eax
  size_t v145; // rdx
  int v146; // r10d
  int *v147; // rdi
  unsigned int v148; // r10d
  int v149; // r11d
  _QWORD *v150; // rax
  unsigned int v151; // r10d
  unsigned int v152; // r11d
  int v153; // eax
  int *v154; // rdi
  int v155; // r11d
  __int64 v156; // r9
  void *v157; // rcx
  int v158; // eax
  __int64 v159; // r9
  LPVOID v160; // r11
  int v161; // r10d
  int *v162; // rdi
  unsigned int v163; // r10d
  int v164; // eax
  unsigned int *v165; // rax
  unsigned int v166; // r9d
  int *v167; // rdi
  unsigned int v168; // r10d
  unsigned int *v169; // rax
  unsigned int v170; // ecx
  unsigned int v171; // edi
  unsigned int v172; // r9d
  unsigned __int8 *v173; // r11
  unsigned int v174; // r9d
  unsigned int v175; // r9d
  unsigned int v176; // r9d
  unsigned int v177; // edi
  unsigned __int8 *v178; // r13
  unsigned int v179; // r10d
  _QWORD *v180; // r11
  int v181; // r14d
  unsigned int v182; // ecx
  unsigned int v183; // edi
  HANDLE v184; // rax
  unsigned __int8 *v185; // r9
  int v186; // eax
  void *v187; // r9
  void *v188; // rcx
  int v189; // eax
  char *v190; // r9
  HANDLE v191; // rax
  unsigned __int64 v192; // r14
  unsigned __int8 v193; // al
  unsigned __int64 v194; // rcx
  _BYTE *v195; // rcx
  int v196; // r10d
  unsigned __int8 *v197; // r8
  unsigned int v198; // r9d
  unsigned int v199; // edx
  unsigned int v200; // ecx
  int v201; // r10d
  char v202; // si
  int v203; // r11d
  unsigned int v204; // r10d
  unsigned int v205; // ecx
  _BYTE *v206; // rbx
  unsigned int v207; // r11d
  char v208; // di
  unsigned __int64 v209; // r11
  _BYTE *v210; // r15
  int v211; // r14d
  int v212; // r12d
  unsigned __int8 *v213; // rdx
  unsigned int v214; // esi
  int v215; // eax
  int v216; // r8d
  int v217; // edi
  int v218; // r10d
  int v219; // r9d
  int v220; // r10d
  int v221; // r9d
  int v222; // r10d
  unsigned int v223; // r9d
  int v224; // r10d
  int v225; // r9d
  int v226; // r10d
  int v227; // r9d
  int v228; // r10d
  int v229; // r9d
  unsigned int v230; // r10d
  unsigned int v231; // r9d
  int v232; // r10d
  int v233; // r9d
  int v234; // r10d
  int v235; // r9d
  int v236; // r10d
  int v237; // r9d
  int v238; // r10d
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
  int v249; // r9d
  int v250; // r10d
  HANDLE v251; // rax
  int v252; // r14d
  int *v253; // rdi
  HANDLE v254; // rax
  _QWORD *v255; // rax
  HANDLE v256; // rax
  HANDLE v257; // rax
  HANDLE v258; // rax
  HANDLE v259; // rax
  int v260; // edx
  int v261; // r10d
  int v262; // r11d
  int v263; // r14d
  int v264; // r11d
  HANDLE v265; // rax
  void *v266; // rax
  HANDLE v267; // rax
  _OWORD *v268; // rax
  HANDLE v269; // rax
  LPVOID v270; // rax
  _QWORD *v271; // rax
  HANDLE v272; // rax
  HANDLE v273; // rax
  HANDLE v274; // rax
  HANDLE v275; // rax
  unsigned int v276; // edi
  HANDLE v277; // rax
  _DWORD *v278; // rax
  const void **v279; // r9
  void *v280; // rcx
  void *v281; // rcx
  void *v282; // r10
  void *v283; // rcx
  void *v284; // r10
  HANDLE v285; // rax
  int v286; // eax
  int v287; // ecx
  SIZE_T v288; // r11
  unsigned int v289; // eax
  SIZE_T v290; // r11
  LPVOID v291; // rcx
  unsigned int v292; // r11d
  int v293; // r10d
  LPVOID v294; // rcx
  unsigned int v295; // r11d
  int v296; // r10d
  unsigned int v297; // r11d
  void *v298; // r9
  int v299; // r11d
  int v300; // r11d
  int v301; // r10d
  unsigned int v302; // r14d
  HANDLE v303; // rax
  void *v304; // rax
  signed int v305; // eax
  unsigned int v306; // edx
  HANDLE v307; // rax
  _QWORD *v308; // rdi
  void *v309; // r13
  void *v310; // r13
  HANDLE v311; // rax
  void *v312; // r13
  HANDLE v313; // rax
  HANDLE v314; // rax
  HANDLE v315; // rax
  void *v316; // rdi
  HANDLE v317; // rax
  void *v318; // rdi
  HANDLE v319; // rax
  void *v320; // r13
  HANDLE v321; // rax
  void *v322; // r13
  HANDLE v323; // rax
  HANDLE v324; // rax
  HANDLE v325; // rax
  WCHAR *v326; // rdi
  HANDLE v327; // rax
  FARPROC v328; // rax
  int v329; // eax
  unsigned __int8 *v330; // r8
  void *v331; // r11
  void *v332; // rcx
  int *v333; // r9
  SIZE_T v334; // r14
  unsigned int v335; // r14d
  __int64 v336; // rcx
  unsigned __int64 v337; // r11
  int *v338; // rax
  unsigned int v339; // r8d
  unsigned int *v340; // r11
  unsigned int v341; // r14d
  unsigned int v342; // r8d
  void *v343; // rax
  HANDLE v344; // rax
  _QWORD *v345; // rdx
  int v346; // r14d
  HANDLE v347; // rax
  void *v348; // rcx
  void *v349; // r8
  HANDLE v350; // rax
  void *v351; // rcx
  void *v352; // rcx
  SIZE_T v353; // rax
  HANDLE v354; // rax
  void *v355; // rcx
  _QWORD *v356; // rax
  HANDLE v357; // rax
  HANDLE v358; // rax
  HANDLE v359; // rax
  HANDLE v360; // rax
  unsigned int *v361; // r11
  void *v362; // r14
  HANDLE v363; // rax
  void *v364; // r14
  HANDLE v365; // rax
  void *v366; // r14
  HANDLE v367; // rax
  HANDLE v368; // rax
  unsigned __int64 v369; // r14
  WCHAR *v370; // r10
  unsigned __int8 *v371; // r8
  unsigned __int8 v372; // dl
  unsigned __int8 *v373; // r9
  WCHAR *v374; // rcx
  unsigned int v375; // eax
  unsigned int v376; // ecx
  unsigned int v377; // r14d
  char v378; // dl
  int v379; // r10d
  unsigned __int8 *v380; // rsi
  int v381; // r14d
  unsigned int v382; // r11d
  unsigned int v383; // ecx
  int v384; // ebx
  int v385; // edi
  WCHAR *v386; // r8
  char v387; // r9
  _BYTE *v388; // r12
  int v389; // ebx
  unsigned __int8 *v390; // r15
  unsigned __int64 v391; // r10
  int v392; // r9d
  unsigned int v393; // r13d
  int v394; // edx
  int v395; // r8d
  int v396; // edi
  int v397; // eax
  int v398; // r8d
  int v399; // r11d
  int v400; // edi
  unsigned int v401; // r14d
  int v402; // r11d
  unsigned int v403; // r14d
  int v404; // r11d
  int v405; // r14d
  unsigned int v406; // r11d
  int v407; // r14d
  int v408; // r11d
  int v409; // r14d
  unsigned int v410; // r11d
  int v411; // r14d
  int v412; // r11d
  unsigned int v413; // r14d
  int v414; // r11d
  int v415; // r14d
  int v416; // r11d
  int v417; // r14d
  int v418; // r11d
  int v419; // r14d
  int v420; // r11d
  int v421; // r14d
  unsigned int v422; // r11d
  int v423; // r14d
  int v424; // ecx
  int v425; // eax
  int v426; // r14d
  int v427; // ecx
  int v428; // r11d
  int v429; // r11d
  int v430; // r14d
  int v431; // r11d
  int v432; // r14d
  int v433; // r11d
  int v434; // r14d
  unsigned __int64 jj; // rax
  unsigned __int8 *v436; // r11
  void *v437; // rdi
  int v438; // r14d
  const WCHAR *v439; // r10
  unsigned __int8 *v440; // r11
  void *v441; // r9
  const WCHAR *v442; // r10
  unsigned __int8 *v443; // r11
  void *v444; // r9
  void *v445; // r9
  const WCHAR *v446; // r10
  unsigned __int8 *v447; // r11
  const WCHAR *v448; // r9
  LPCWSTR v449; // r14
  unsigned __int64 v450; // rcx
  int *v451; // rcx
  void *v452; // r10
  unsigned __int8 *v453; // r11
  const WCHAR *v454; // r9
  HANDLE v455; // rax
  size_t v456; // rdi
  void *v457; // rcx
  _DWORD *v458; // r13
  unsigned int v459; // r9d
  __int64 v460; // r11
  _DWORD *v461; // rax
  int *v462; // rcx
  int v463; // edi
  unsigned int v464; // r10d
  int v465; // edi
  __int64 v466; // r11
  int *v467; // rax
  int *v468; // rcx
  int v469; // edi
  unsigned int v470; // r10d
  int v471; // edi
  __int64 v472; // r11
  int *v473; // rax
  int *v474; // rcx
  int v475; // edi
  unsigned int v476; // r10d
  int v477; // edi
  int *v478; // r11
  int *v479; // rcx
  int v480; // edi
  unsigned int v481; // r10d
  int v482; // edi
  int *v483; // rax
  _DWORD *v484; // rcx
  unsigned int v485; // edi
  unsigned int v486; // r9d
  int v487; // edi
  int v488; // eax
  const void *v489; // r11
  _DWORD *v490; // rax
  __int64 v491; // rax
  unsigned int v492; // edi
  int v493; // eax
  int v494; // r13d
  char *v495; // rax
  int v496; // ecx
  _BYTE *v497; // rbx
  int v498; // r11d
  unsigned __int8 *v499; // rsi
  __int64 v500; // rdi
  int v501; // r10d
  int v502; // r9d
  int v503; // eax
  int v504; // r10d
  int v505; // r13d
  int v506; // r9d
  unsigned int v507; // r11d
  int v508; // r13d
  unsigned int v509; // r11d
  int v510; // r13d
  int v511; // r11d
  unsigned int v512; // r13d
  int v513; // r11d
  int v514; // r13d
  int v515; // r11d
  unsigned int v516; // r13d
  int v517; // edx
  int v518; // r13d
  unsigned int v519; // r11d
  int v520; // r13d
  int v521; // r11d
  int v522; // r13d
  int v523; // r11d
  unsigned int v524; // r13d
  int v525; // r11d
  int v526; // r13d
  int v527; // r11d
  unsigned int v528; // r13d
  int v529; // r11d
  int v530; // edx
  int v531; // eax
  int v532; // r11d
  int v533; // edx
  int v534; // r13d
  int v535; // r13d
  int v536; // r11d
  int v537; // r13d
  int v538; // r11d
  int v539; // r13d
  int v540; // r11d
  WCHAR *v541; // r15
  unsigned __int64 v542; // rax
  char v543; // cl
  int v544; // r12d
  HMODULE *v545; // r15
  __int64 v546; // r12
  const WCHAR *v547; // rdx
  __int64 v548; // rax
  WCHAR *v549; // r15
  char *v550; // r13
  __int64 v551; // rcx
  unsigned __int64 v552; // rcx
  unsigned int v553; // eax
  unsigned int v554; // ecx
  const CHAR *v555; // rdx
  __int64 v556; // rax
  void **v557; // rax
  HANDLE v558; // rax
  int v559; // eax
  const WCHAR *v560; // rax
  _BYTE *v561; // rbx
  int v562; // r15d
  unsigned __int8 *v563; // rsi
  __int64 v564; // rdi
  int v565; // ecx
  int v566; // r12d
  int v567; // r11d
  int v568; // r10d
  int v569; // eax
  int v570; // r11d
  int v571; // r13d
  int v572; // r10d
  unsigned int v573; // r9d
  int v574; // r13d
  unsigned int v575; // r9d
  int v576; // r13d
  int v577; // r9d
  unsigned int v578; // r13d
  int v579; // r9d
  int v580; // r13d
  int v581; // r9d
  unsigned int v582; // r13d
  int v583; // r9d
  int v584; // r13d
  unsigned int v585; // r12d
  int v586; // r13d
  int v587; // r12d
  int v588; // r13d
  int v589; // r12d
  unsigned int v590; // r13d
  int v591; // r12d
  int v592; // r13d
  int v593; // r12d
  unsigned int v594; // r13d
  int v595; // r12d
  int v596; // edx
  int v597; // eax
  int v598; // r12d
  int v599; // edx
  int v600; // r13d
  int v601; // r13d
  int v602; // r12d
  int v603; // r13d
  int v604; // r12d
  int v605; // r13d
  int v606; // r12d
  char v607; // cl
  unsigned __int64 v608; // rax
  _BYTE *v609; // r15
  HMODULE *v610; // r15
  __int64 v611; // r12
  const WCHAR *v612; // rdx
  __int64 v613; // rax
  _BYTE *v614; // r15
  char *v615; // r13
  int v616; // r12d
  __int64 v617; // rcx
  unsigned __int64 v618; // rcx
  unsigned int v619; // eax
  unsigned int v620; // ecx
  const CHAR *v621; // rdx
  __int64 v622; // rax
  void **v623; // rax
  HANDLE v624; // rax
  int v625; // r13d
  signed int v626; // eax
  signed int v627; // r15d
  _DWORD *v628; // rdi
  signed int v629; // eax
  char *v630; // r13
  _DWORD *v631; // r12
  unsigned int ii; // esi
  __int64 v633; // rax
  unsigned int v634; // r10d
  unsigned int v635; // r9d
  __int64 v636; // r8
  unsigned int v637; // ecx
  unsigned int *v638; // rdx
  __int64 v639; // rdi
  const wchar_t *v640; // rcx
  __int64 v641; // r8
  const wchar_t **v642; // rdx
  __int64 v643; // rax
  __int64 v644; // rax
  char *v645; // rax
  const wchar_t *v646; // r13
  void **v647; // rax
  unsigned __int8 *v648; // r13
  int v649; // r11d
  int v650; // esi
  int v651; // r15d
  int v652; // r10d
  _BYTE *v653; // r12
  __int64 v654; // rbx
  int v655; // r9d
  int v656; // r8d
  int v657; // eax
  int v658; // r9d
  int v659; // r10d
  int v660; // r8d
  unsigned int v661; // edi
  int v662; // r10d
  unsigned int v663; // edi
  int v664; // r10d
  int v665; // edi
  unsigned int v666; // r10d
  int v667; // edi
  int v668; // r10d
  int v669; // edi
  unsigned int v670; // r10d
  int v671; // edi
  int v672; // r10d
  unsigned int v673; // r15d
  int v674; // r10d
  int v675; // r15d
  int v676; // r10d
  int v677; // r15d
  unsigned int v678; // r10d
  int v679; // r15d
  int v680; // r10d
  int v681; // r15d
  unsigned int v682; // r10d
  int v683; // r15d
  int v684; // ecx
  int v685; // eax
  int v686; // r15d
  int v687; // ecx
  int v688; // r10d
  int v689; // r10d
  int v690; // r15d
  int v691; // r10d
  int v692; // r15d
  int v693; // r10d
  int v694; // r15d
  char *v695; // r11
  unsigned __int64 v696; // rax
  __m128i v697; // xmm1
  __m128i v698; // xmm0
  __m128i v699; // xmm0
  __m128i v700; // xmm1
  __m128i v701; // xmm1
  __m128i v702; // xmm1
  _QWORD *v703; // rdx
  __int64 v704; // rdi
  unsigned int n; // ecx
  __int64 v706; // rax
  _QWORD *v707; // r12
  _QWORD *v708; // rdx
  __int16 *v709; // rcx
  unsigned int v710; // edi
  __int16 v711; // r8
  __int16 *v712; // rcx
  __int64 v713; // rax
  __int64 v714; // rdi
  __int64 v715; // rcx
  int v716; // eax
  void *v717; // rax
  __int64 v718; // rcx
  signed int v719; // eax
  signed int v720; // eax
  __int64 v721; // rcx
  _WORD *v722; // rdi
  __int64 v723; // rcx
  void **v724; // rax
  void **v725; // rax
  void *v726; // rax
  signed int v727; // eax
  unsigned int v728; // edi
  const wchar_t *v729; // r12
  signed int v730; // eax
  int v731; // eax
  __int64 v732; // rax
  signed int v733; // eax
  __int64 v734; // r12
  int v735; // eax
  __int64 v736; // rax
  signed int v737; // eax
  unsigned int v738; // edx
  unsigned int v739; // r13d
  int v740; // eax
  void *v741; // rdi
  unsigned int v742; // r12d
  void *v743; // rdx
  LPCWSTR v744; // rdi
  void *v745; // rdi
  void *v746; // rdx
  LPCWSTR v747; // rdi
  __int64 v748; // rdi
  bool v749; // sf
  unsigned int v750; // r13d
  int v751; // eax
  __int64 v752; // rax
  bool v753; // sf
  void *v754; // rdi
  __int64 v755; // r12
  void *v756; // rdx
  LPCWSTR v757; // rdi
  int v758; // eax
  __int64 v759; // rdx
  int v760; // edx
  int v761; // r12d
  int v762; // r15d
  int v763; // edi
  __int64 v764; // rax
  __int64 v765; // rax
  int v766; // edx
  int v767; // eax
  HMODULE *v768; // rdi
  unsigned int v769; // edi
  int v770; // r15d
  __int64 v771; // rax
  int v772; // eax
  int v773; // r13d
  void *v774; // r12
  __int64 v775; // rax
  SIZE_T v776; // r15
  LPCWSTR v777; // rdi
  signed int v778; // eax
  signed int v779; // edi
  bool v780; // zf
  SIZE_T v781; // rcx
  __int64 v782; // rax
  __int64 (__fastcall *v783)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v784; // rax
  int v785; // eax
  int v786; // r12d
  int v787; // r9d
  int v788; // edx
  int v789; // r10d
  int v790; // r8d
  int v791; // r13d
  int v792; // r11d
  __int64 v793; // rdi
  char *v794; // rdx
  wchar_t *v795; // rax
  void *v796; // rbx
  __int64 v797; // r10
  unsigned __int8 *v798; // r9
  int v799; // r8d
  int v800; // r8d
  int v801; // edi
  int v802; // edx
  int v803; // edi
  int v804; // edx
  int v805; // edi
  int v806; // ecx
  void *v807; // r12
  int v808; // r13d
  __int64 v809; // rax
  SIZE_T v810; // r15
  LPCWSTR v811; // rdi
  signed int v812; // eax
  signed int v813; // edi
  SIZE_T v814; // rcx
  __int64 v815; // rax
  __int64 (__fastcall *v816)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v817; // rax
  int v818; // eax
  int v819; // r10d
  int v820; // r9d
  int v821; // r8d
  int v822; // edx
  int v823; // r12d
  int v824; // r11d
  int v825; // r13d
  SIZE_T v826; // r13
  wchar_t *v827; // rax
  unsigned __int8 *v828; // r9
  char *v829; // r10
  int v830; // r8d
  int v831; // r8d
  int v832; // edi
  int v833; // edx
  int v834; // edi
  int v835; // edx
  int v836; // edi
  int v837; // ecx
  void *v838; // rdi
  size_t v839; // r12
  char v840; // al
  int v841; // r13d
  unsigned int v842; // r15d
  int v843; // edx
  int v844; // r11d
  int v845; // edi
  int v846; // r12d
  __int64 v847; // rax
  __int64 v848; // rax
  LPCWSTR v849; // rcx
  __int64 v850; // rcx
  __int64 v851; // rcx
  __int64 v852; // rcx
  int v853; // eax
  HMODULE *v854; // rdi
  __int64 v855; // r15
  int v856; // r13d
  int v857; // eax
  char *v858; // rax
  int v859; // esi
  _BYTE *v860; // rbx
  int v861; // r12d
  unsigned __int8 *v862; // rcx
  int v863; // r13d
  __int64 v864; // r15
  int v865; // r11d
  int v866; // r10d
  int v867; // r9d
  int v868; // eax
  int v869; // r10d
  int v870; // r11d
  int v871; // r9d
  unsigned int v872; // r8d
  int v873; // r11d
  unsigned int v874; // r8d
  int v875; // r11d
  int v876; // r8d
  unsigned int v877; // r11d
  int v878; // r8d
  int v879; // r11d
  int v880; // r8d
  unsigned int v881; // r11d
  int v882; // edx
  int v883; // r11d
  unsigned int v884; // r13d
  int v885; // r11d
  int v886; // r13d
  int v887; // r11d
  int v888; // r13d
  unsigned int v889; // r11d
  int v890; // r13d
  int v891; // r11d
  int v892; // r13d
  unsigned int v893; // r11d
  int v894; // r13d
  int v895; // edx
  int v896; // eax
  int v897; // r13d
  int v898; // edx
  int v899; // r11d
  int v900; // r11d
  int v901; // r13d
  int v902; // r11d
  int v903; // r13d
  int v904; // r11d
  int v905; // r13d
  WCHAR *v906; // r15
  int v907; // r12d
  unsigned __int64 v908; // rax
  char v909; // cl
  __int64 v910; // r15
  HMODULE *v911; // rdi
  int v912; // edi
  __int64 v913; // rax
  signed int v914; // eax
  signed int v915; // edi
  int v916; // eax
  void *v917; // rcx
  LPCWSTR v918; // rdi
  __int64 v919; // rax
  __int64 (__fastcall *v920)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v921; // rax
  int v922; // edx
  int v923; // r9d
  int v924; // r8d
  int v925; // r10d
  int v926; // ecx
  int v927; // r11d
  int v928; // esi
  char *v929; // rdx
  SIZE_T v930; // rax
  void *v931; // r12
  signed int v932; // r13d
  SIZE_T v933; // r10
  unsigned __int8 *v934; // r9
  int v935; // r8d
  int v936; // r8d
  int v937; // edi
  int v938; // edx
  int v939; // edi
  int v940; // edx
  int v941; // edi
  int v942; // ecx
  void *v943; // rdi
  __int64 v944; // rax
  LPCWSTR v945; // r13
  int v946; // r12d
  __int64 v947; // rax
  signed int v948; // eax
  signed int v949; // edi
  int v950; // eax
  int v951; // r12d
  void *v952; // rcx
  __int64 v953; // rax
  __int64 (__fastcall *v954)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v955; // rax
  int v956; // eax
  __int64 v957; // r10
  int v958; // edx
  int v959; // r8d
  int v960; // r9d
  int v961; // ecx
  int v962; // r12d
  int v963; // r11d
  char *v964; // rdx
  SIZE_T v965; // rax
  unsigned __int8 *v966; // r9
  SIZE_T v967; // r10
  int v968; // r8d
  int v969; // r8d
  int v970; // edi
  int v971; // edx
  int v972; // edi
  int v973; // edx
  int v974; // edi
  int v975; // ecx
  const WCHAR *v976; // rdx
  __int64 v977; // rax
  WCHAR *v978; // r15
  char *v979; // rdi
  __int64 v980; // rcx
  unsigned __int64 v981; // rcx
  unsigned int v982; // eax
  unsigned int v983; // ecx
  const CHAR *v984; // rdx
  __int64 v985; // rax
  void **v986; // rax
  HANDLE v987; // rax
  __int64 v988; // r15
  int v989; // eax
  HMODULE *v990; // rdi
  void *v991; // r15
  HANDLE v992; // rax
  _OWORD *v993; // rax
  HANDLE v994; // rax
  WCHAR *v995; // rax
  const WCHAR *v996; // r13
  unsigned int v997; // r11d
  int v998; // eax
  int v999; // r9d
  unsigned int v1000; // r11d
  int v1001; // r10d
  int v1002; // eax
  int v1003; // r9d
  unsigned int v1004; // r11d
  int v1005; // r10d
  int v1006; // eax
  int v1007; // r10d
  unsigned int v1008; // edi
  HANDLE v1009; // rax
  void *v1010; // rdi
  unsigned __int8 *v1011; // r13
  int v1012; // r10d
  _DWORD *v1013; // r11
  _DWORD *v1014; // rax
  int v1015; // r11d
  __int64 v1016; // r11
  int *v1017; // r9
  unsigned __int64 v1018; // r9
  unsigned int v1019; // r11d
  unsigned int *v1020; // r9
  unsigned int v1021; // r10d
  int v1022; // r9d
  int v1023; // r10d
  __int64 v1024; // r11
  int *v1025; // r10
  unsigned __int64 v1026; // r10
  unsigned int v1027; // r9d
  _DWORD *v1028; // r10
  unsigned int v1029; // edi
  int v1030; // r10d
  unsigned int v1031; // r11d
  int *v1032; // r9
  unsigned __int64 v1033; // r9
  _DWORD *v1034; // r9
  _QWORD *v1035; // rax
  unsigned int v1036; // ecx
  unsigned int v1037; // edi
  int v1038; // edi
  unsigned int v1039; // r9d
  _QWORD *v1040; // r11
  unsigned int v1041; // ecx
  unsigned int v1042; // edi
  HANDLE v1043; // rax
  _DWORD *v1044; // rax
  int v1045; // eax
  void *v1046; // r9
  void *v1047; // rcx
  int v1048; // eax
  char *v1049; // r9
  HANDLE v1050; // rax
  int v1051; // edi
  unsigned __int64 v1052; // rdi
  unsigned __int8 v1053; // al
  unsigned __int64 v1054; // rcx
  char *v1055; // rcx
  int v1056; // r9d
  unsigned __int64 v1057; // r11
  unsigned __int8 *v1058; // rdi
  unsigned int v1059; // r10d
  int v1060; // edx
  unsigned int v1061; // ecx
  int v1062; // r9d
  char v1063; // bl
  int v1064; // r8d
  _BYTE *v1065; // rsi
  unsigned int v1066; // r9d
  unsigned int v1067; // ecx
  unsigned int v1068; // r8d
  int v1069; // r11d
  char v1070; // di
  _BYTE *v1071; // r14
  int v1072; // r13d
  unsigned __int8 *v1073; // r12
  unsigned __int64 v1074; // rsi
  int v1075; // r15d
  unsigned int v1076; // r11d
  int v1077; // r8d
  int v1078; // edi
  int v1079; // ecx
  int v1080; // r8d
  int v1081; // edi
  int v1082; // r9d
  int v1083; // edx
  int v1084; // r9d
  int v1085; // r10d
  int v1086; // r9d
  unsigned int v1087; // r10d
  int v1088; // r9d
  int v1089; // r10d
  int v1090; // r9d
  int v1091; // r10d
  int v1092; // r9d
  int v1093; // r10d
  unsigned int v1094; // r9d
  unsigned int v1095; // r10d
  int v1096; // r9d
  int v1097; // r10d
  int v1098; // r9d
  int v1099; // r10d
  int v1100; // r9d
  int v1101; // r10d
  int v1102; // r9d
  int v1103; // r10d
  unsigned int v1104; // r9d
  int v1105; // r10d
  int v1106; // r9d
  int v1107; // r10d
  int v1108; // r9d
  int v1109; // r10d
  int v1110; // r9d
  int v1111; // r10d
  int v1112; // r9d
  int v1113; // r10d
  int v1114; // r9d
  HANDLE v1115; // rax
  unsigned int *v1116; // rbx
  int v1117; // edi
  HANDLE v1118; // rax
  void *v1119; // rax
  HANDLE v1120; // rax
  _OWORD *v1121; // rax
  HANDLE v1122; // rax
  _QWORD *v1123; // rax
  HANDLE v1124; // rax
  HANDLE v1125; // rax
  HANDLE v1126; // rax
  HANDLE v1127; // rax
  HANDLE v1128; // rax
  _QWORD *v1129; // rax
  HANDLE v1130; // rax
  HANDLE v1131; // rax
  HANDLE v1132; // rax
  HANDLE v1133; // rax
  int v1134; // edx
  int v1135; // edi
  int v1136; // r10d
  int v1137; // r10d
  unsigned int v1138; // edi
  HANDLE v1139; // rax
  _DWORD *v1140; // rax
  int v1141; // eax
  SIZE_T v1142; // rcx
  void *v1143; // rcx
  int v1144; // eax
  SIZE_T v1145; // r10
  void *v1146; // rcx
  int v1147; // eax
  SIZE_T v1148; // r10
  HANDLE v1149; // rax
  int v1150; // eax
  int v1151; // ecx
  void *v1152; // r10
  unsigned int v1153; // eax
  HANDLE v1154; // rax
  void *v1155; // rsi
  HANDLE v1156; // rax
  void *v1157; // rsi
  HANDLE v1158; // rax
  void *v1159; // rsi
  HANDLE v1160; // rax
  HANDLE v1161; // rax
  HANDLE v1162; // rax
  HANDLE v1163; // rax
  void *v1164; // rsi
  HANDLE v1165; // rax
  void *v1166; // rsi
  HANDLE v1167; // rax
  void *v1168; // rsi
  HANDLE v1169; // rax
  HANDLE v1170; // rax
  WCHAR *v1171; // rbx
  HANDLE v1172; // rax
  _DWORD *v1173; // rdi
  unsigned __int64 v1174; // rcx
  __int64 v1175; // r11
  int *v1176; // rax
  int v1177; // edi
  unsigned int v1178; // r9d
  void *v1179; // r10
  void *v1180; // rcx
  unsigned int v1181; // r11d
  int v1182; // r10d
  void *v1183; // rcx
  unsigned int v1184; // r11d
  int v1185; // r10d
  int v1186; // ecx
  int v1187; // r10d
  size_t v1188; // r9
  unsigned int v1189; // edi
  HANDLE v1190; // rax
  wchar_t *v1191; // rax
  signed int v1192; // eax
  unsigned int v1193; // edx
  FARPROC v1194; // rax
  int v1195; // eax
  unsigned __int8 *v1196; // r8
  void *v1197; // r11
  __int64 v1198; // rcx
  unsigned __int64 v1199; // r9
  __int64 v1200; // rdi
  void *v1201; // r9
  unsigned __int64 v1202; // rbx
  unsigned int v1203; // edi
  __int64 v1204; // r8
  char *v1205; // rcx
  unsigned int *v1206; // r11
  unsigned int v1207; // ecx
  unsigned int v1208; // edi
  wchar_t *v1209; // rax
  HANDLE v1210; // rax
  _DWORD *v1211; // rdx
  int v1212; // edi
  HANDLE v1213; // rax
  void *v1214; // rcx
  const void *v1215; // r8
  HANDLE v1216; // rax
  void *v1217; // rcx
  SIZE_T v1218; // rcx
  void *v1219; // rax
  HANDLE v1220; // rax
  void *v1221; // rcx
  _QWORD *v1222; // rax
  HANDLE v1223; // rax
  HANDLE v1224; // rax
  HANDLE v1225; // rax
  HANDLE v1226; // rax
  unsigned int *v1227; // r11
  _QWORD *v1228; // rdi
  void *v1229; // rbx
  HANDLE v1230; // rax
  void *v1231; // rbx
  HANDLE v1232; // rax
  void *v1233; // rbx
  HANDLE v1234; // rax
  HANDLE v1235; // rax
  char v1236; // di
  WCHAR *v1237; // rax
  unsigned int v1238; // r11d
  WCHAR *v1239; // r9
  unsigned __int8 *v1240; // rcx
  unsigned __int8 v1241; // dl
  _QWORD *v1242; // r10
  int v1243; // r9d
  int v1244; // r14d
  unsigned __int8 *v1245; // rsi
  int v1246; // r11d
  int v1247; // ecx
  int v1248; // r8d
  unsigned int v1249; // r8d
  int v1250; // ecx
  unsigned int v1251; // edx
  WCHAR *v1252; // rdi
  int v1253; // ebx
  unsigned int v1254; // eax
  char v1255; // r10
  unsigned __int64 v1256; // rdi
  unsigned __int8 *v1257; // r15
  int v1258; // r13d
  _BYTE *v1259; // r12
  unsigned int v1260; // edx
  int v1261; // ebx
  unsigned __int64 v1262; // r10
  int v1263; // r14d
  int v1264; // r9d
  int v1265; // r8d
  int v1266; // eax
  int v1267; // r9d
  int v1268; // r11d
  int v1269; // r8d
  unsigned int v1270; // edi
  int v1271; // r11d
  unsigned int v1272; // edi
  int v1273; // r11d
  int v1274; // edi
  unsigned int v1275; // r11d
  int v1276; // edi
  int v1277; // r11d
  int v1278; // edi
  unsigned int v1279; // r11d
  int v1280; // edi
  int v1281; // r11d
  unsigned int v1282; // edx
  int v1283; // r11d
  int v1284; // edx
  int v1285; // r11d
  int v1286; // edx
  unsigned int v1287; // r11d
  int v1288; // edx
  int v1289; // r11d
  int v1290; // edx
  unsigned int v1291; // r11d
  int v1292; // eax
  int v1293; // edx
  int v1294; // ecx
  int v1295; // r11d
  int v1296; // r11d
  int v1297; // edx
  int v1298; // r11d
  int v1299; // edx
  int v1300; // r11d
  int v1301; // edx
  unsigned __int64 m; // rax
  _QWORD *v1303; // r11
  int v1304; // edi
  const WCHAR *v1305; // r9
  _QWORD *v1306; // r11
  int v1307; // eax
  void *v1308; // r8
  const WCHAR *v1309; // r9
  _QWORD *v1310; // r11
  int v1311; // eax
  const WCHAR *v1312; // r9
  _QWORD *v1313; // r11
  SIZE_T v1314; // rcx
  void *v1315; // r10
  const WCHAR *v1316; // rsi
  int *v1317; // rcx
  unsigned int v1318; // r11d
  int v1319; // eax
  void *v1320; // r9
  _QWORD *v1321; // r10
  HANDLE v1322; // rax
  size_t v1323; // rbx
  void *v1324; // rsi
  void *v1325; // rdi
  HANDLE v1326; // rax
  void *v1327; // rdi
  HANDLE v1328; // rax
  HANDLE v1329; // rax
  HANDLE v1330; // rax
  int v1331; // esi
  int v1332; // eax
  __int64 v1333; // rbx
  HMODULE *v1334; // rdi
  unsigned __int8 v1336; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1337; // [rsp+60h] [rbp-A0h]
  void *v1338; // [rsp+68h] [rbp-98h]
  int *v1339; // [rsp+68h] [rbp-98h]
  void *v1340; // [rsp+68h] [rbp-98h]
  void *v1341; // [rsp+68h] [rbp-98h]
  void *v1342; // [rsp+68h] [rbp-98h]
  __int64 v1343; // [rsp+68h] [rbp-98h]
  int v1344; // [rsp+68h] [rbp-98h]
  int v1345; // [rsp+68h] [rbp-98h]
  int v1346; // [rsp+68h] [rbp-98h]
  int v1347; // [rsp+68h] [rbp-98h]
  int v1348; // [rsp+68h] [rbp-98h]
  unsigned int v1349; // [rsp+68h] [rbp-98h]
  unsigned int v1350; // [rsp+68h] [rbp-98h]
  int v1351; // [rsp+68h] [rbp-98h]
  int v1352; // [rsp+68h] [rbp-98h]
  int v1353; // [rsp+68h] [rbp-98h]
  int v1354; // [rsp+68h] [rbp-98h]
  int v1355; // [rsp+68h] [rbp-98h]
  int v1356; // [rsp+68h] [rbp-98h]
  void *v1357; // [rsp+70h] [rbp-90h]
  void *v1358; // [rsp+70h] [rbp-90h]
  void *v1359; // [rsp+70h] [rbp-90h]
  char *v1360; // [rsp+70h] [rbp-90h]
  _QWORD *v1361; // [rsp+70h] [rbp-90h]
  int v1362; // [rsp+70h] [rbp-90h]
  int v1363; // [rsp+70h] [rbp-90h]
  int v1364; // [rsp+70h] [rbp-90h]
  int v1365; // [rsp+70h] [rbp-90h]
  int v1366; // [rsp+70h] [rbp-90h]
  unsigned int v1367; // [rsp+70h] [rbp-90h]
  unsigned int v1368; // [rsp+70h] [rbp-90h]
  char *v1369; // [rsp+70h] [rbp-90h]
  int v1370; // [rsp+70h] [rbp-90h]
  int v1371; // [rsp+70h] [rbp-90h]
  int v1372; // [rsp+70h] [rbp-90h]
  int v1373; // [rsp+70h] [rbp-90h]
  unsigned int v1374; // [rsp+70h] [rbp-90h]
  unsigned int v1375; // [rsp+70h] [rbp-90h]
  size_t v1376; // [rsp+78h] [rbp-88h]
  void *v1377; // [rsp+78h] [rbp-88h]
  void *v1378; // [rsp+78h] [rbp-88h]
  void *v1379; // [rsp+78h] [rbp-88h]
  void *v1380; // [rsp+78h] [rbp-88h]
  SIZE_T v1381; // [rsp+78h] [rbp-88h]
  size_t v1382; // [rsp+78h] [rbp-88h]
  size_t v1383; // [rsp+78h] [rbp-88h]
  size_t v1384; // [rsp+78h] [rbp-88h]
  void *v1385; // [rsp+78h] [rbp-88h]
  void *v1386; // [rsp+78h] [rbp-88h]
  void *v1387; // [rsp+78h] [rbp-88h]
  void *v1388; // [rsp+78h] [rbp-88h]
  void *v1389; // [rsp+78h] [rbp-88h]
  void *v1390; // [rsp+78h] [rbp-88h]
  size_t v1391; // [rsp+78h] [rbp-88h]
  size_t v1392; // [rsp+78h] [rbp-88h]
  unsigned int v1393; // [rsp+80h] [rbp-80h]
  void *v1394; // [rsp+80h] [rbp-80h]
  void *v1395; // [rsp+80h] [rbp-80h]
  void *v1396; // [rsp+80h] [rbp-80h]
  _QWORD *v1397; // [rsp+80h] [rbp-80h]
  SIZE_T v1398; // [rsp+80h] [rbp-80h]
  WCHAR *v1399; // [rsp+80h] [rbp-80h]
  SIZE_T v1400; // [rsp+80h] [rbp-80h]
  SIZE_T v1401; // [rsp+80h] [rbp-80h]
  SIZE_T v1402; // [rsp+80h] [rbp-80h]
  SIZE_T v1403; // [rsp+80h] [rbp-80h]
  SIZE_T v1404; // [rsp+80h] [rbp-80h]
  SIZE_T v1405; // [rsp+80h] [rbp-80h]
  SIZE_T v1406; // [rsp+80h] [rbp-80h]
  SIZE_T v1407; // [rsp+80h] [rbp-80h]
  SIZE_T v1408; // [rsp+80h] [rbp-80h]
  SIZE_T v1409; // [rsp+80h] [rbp-80h]
  SIZE_T v1410; // [rsp+80h] [rbp-80h]
  void *v1411; // [rsp+80h] [rbp-80h]
  SIZE_T v1412; // [rsp+88h] [rbp-78h]
  SIZE_T v1413; // [rsp+88h] [rbp-78h]
  int v1414; // [rsp+88h] [rbp-78h]
  int v1415; // [rsp+88h] [rbp-78h]
  int v1416; // [rsp+88h] [rbp-78h]
  int v1417; // [rsp+88h] [rbp-78h]
  int v1418; // [rsp+88h] [rbp-78h]
  int v1419; // [rsp+88h] [rbp-78h]
  unsigned int v1420; // [rsp+88h] [rbp-78h]
  unsigned int v1421; // [rsp+88h] [rbp-78h]
  int v1422; // [rsp+88h] [rbp-78h]
  int v1423; // [rsp+88h] [rbp-78h]
  unsigned int v1424; // [rsp+88h] [rbp-78h]
  SIZE_T v1425; // [rsp+88h] [rbp-78h]
  void *v1426; // [rsp+90h] [rbp-70h]
  _QWORD *v1427; // [rsp+90h] [rbp-70h]
  SIZE_T v1428; // [rsp+90h] [rbp-70h]
  void *v1429; // [rsp+90h] [rbp-70h]
  void *v1430; // [rsp+90h] [rbp-70h]
  SIZE_T v1431; // [rsp+90h] [rbp-70h]
  SIZE_T v1432; // [rsp+90h] [rbp-70h]
  SIZE_T v1433; // [rsp+90h] [rbp-70h]
  SIZE_T v1434; // [rsp+90h] [rbp-70h]
  SIZE_T v1435; // [rsp+90h] [rbp-70h]
  SIZE_T v1436; // [rsp+90h] [rbp-70h]
  SIZE_T v1437; // [rsp+90h] [rbp-70h]
  SIZE_T v1438; // [rsp+90h] [rbp-70h]
  SIZE_T v1439; // [rsp+90h] [rbp-70h]
  _QWORD *v1440; // [rsp+90h] [rbp-70h]
  void *v1441; // [rsp+90h] [rbp-70h]
  void *v1442; // [rsp+90h] [rbp-70h]
  void *v1443; // [rsp+90h] [rbp-70h]
  SIZE_T v1444; // [rsp+98h] [rbp-68h]
  _QWORD *v1445; // [rsp+98h] [rbp-68h]
  void *v1446; // [rsp+98h] [rbp-68h]
  SIZE_T v1447; // [rsp+98h] [rbp-68h]
  SIZE_T v1448; // [rsp+98h] [rbp-68h]
  int v1449; // [rsp+98h] [rbp-68h]
  unsigned int v1450; // [rsp+98h] [rbp-68h]
  SIZE_T v1451; // [rsp+98h] [rbp-68h]
  unsigned int v1452; // [rsp+98h] [rbp-68h]
  unsigned int v1453; // [rsp+98h] [rbp-68h]
  SIZE_T v1454; // [rsp+98h] [rbp-68h]
  LPVOID v1455; // [rsp+A0h] [rbp-60h]
  _WORD *v1456; // [rsp+A0h] [rbp-60h]
  int v1457; // [rsp+A0h] [rbp-60h]
  int v1458; // [rsp+A0h] [rbp-60h]
  int v1459; // [rsp+A0h] [rbp-60h]
  int v1460; // [rsp+A0h] [rbp-60h]
  unsigned int v1461; // [rsp+A0h] [rbp-60h]
  int v1462; // [rsp+A0h] [rbp-60h]
  unsigned int v1463; // [rsp+A0h] [rbp-60h]
  unsigned int v1464; // [rsp+A0h] [rbp-60h]
  unsigned int v1465; // [rsp+A0h] [rbp-60h]
  _QWORD *v1466; // [rsp+A0h] [rbp-60h]
  void *v1467; // [rsp+A0h] [rbp-60h]
  int v1468; // [rsp+A0h] [rbp-60h]
  wchar_t *v1469; // [rsp+A8h] [rbp-58h]
  wchar_t *v1470; // [rsp+A8h] [rbp-58h]
  wchar_t *v1471; // [rsp+A8h] [rbp-58h]
  wchar_t *v1472; // [rsp+A8h] [rbp-58h]
  wchar_t *v1473; // [rsp+A8h] [rbp-58h]
  wchar_t *v1474; // [rsp+A8h] [rbp-58h]
  wchar_t *v1475; // [rsp+A8h] [rbp-58h]
  wchar_t *v1476; // [rsp+A8h] [rbp-58h]
  wchar_t *v1477; // [rsp+A8h] [rbp-58h]
  wchar_t *v1478; // [rsp+A8h] [rbp-58h]
  wchar_t *v1479; // [rsp+A8h] [rbp-58h]
  wchar_t *v1480; // [rsp+A8h] [rbp-58h]
  int v1481; // [rsp+B0h] [rbp-50h]
  unsigned int v1482; // [rsp+B0h] [rbp-50h]
  unsigned int v1483; // [rsp+B0h] [rbp-50h]
  int v1484; // [rsp+B0h] [rbp-50h]
  int v1485; // [rsp+B0h] [rbp-50h]
  unsigned int v1486; // [rsp+B0h] [rbp-50h]
  unsigned int v1487; // [rsp+B0h] [rbp-50h]
  unsigned int v1488; // [rsp+B0h] [rbp-50h]
  int v1489; // [rsp+B0h] [rbp-50h]
  SIZE_T v1490; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v1491; // [rsp+B8h] [rbp-48h]
  LPVOID v1492; // [rsp+B8h] [rbp-48h]
  void *v1493; // [rsp+B8h] [rbp-48h]
  int v1494; // [rsp+B8h] [rbp-48h]
  void *v1495; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v1496; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v1497; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v1498; // [rsp+C0h] [rbp-40h]
  unsigned int v1499; // [rsp+C0h] [rbp-40h]
  int v1500; // [rsp+C0h] [rbp-40h]
  unsigned int v1501; // [rsp+C0h] [rbp-40h]
  unsigned int v1502; // [rsp+C0h] [rbp-40h]
  _QWORD *v1503; // [rsp+C0h] [rbp-40h]
  int v1504; // [rsp+C0h] [rbp-40h]
  const WCHAR *v1505; // [rsp+C0h] [rbp-40h]
  unsigned int v1506; // [rsp+C0h] [rbp-40h]
  unsigned int v1507; // [rsp+C0h] [rbp-40h]
  int v1508; // [rsp+C0h] [rbp-40h]
  char v1509; // [rsp+C0h] [rbp-40h]
  const void *v1510; // [rsp+C0h] [rbp-40h]
  LPCWSTR v1511; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1512; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1513; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1514; // [rsp+C8h] [rbp-38h]
  WCHAR *v1515; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1516; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1517; // [rsp+C8h] [rbp-38h]
  _BYTE *Src; // [rsp+D0h] [rbp-30h]
  void *Srca; // [rsp+D0h] [rbp-30h]
  void *Srcb; // [rsp+D0h] [rbp-30h]
  void *Srcc; // [rsp+D0h] [rbp-30h]
  LPVOID Srcd; // [rsp+D0h] [rbp-30h]
  LPVOID Srce; // [rsp+D0h] [rbp-30h]
  _QWORD *Srcf; // [rsp+D0h] [rbp-30h]
  unsigned int *v1525; // [rsp+D8h] [rbp-28h]
  int v1526; // [rsp+D8h] [rbp-28h]
  unsigned int v1527; // [rsp+D8h] [rbp-28h]
  int v1528; // [rsp+D8h] [rbp-28h]
  int v1529; // [rsp+D8h] [rbp-28h]
  int v1530; // [rsp+D8h] [rbp-28h]
  int v1531; // [rsp+D8h] [rbp-28h]
  int v1532; // [rsp+D8h] [rbp-28h]
  int v1533; // [rsp+E0h] [rbp-20h]
  int v1534; // [rsp+E0h] [rbp-20h]
  int v1535; // [rsp+E0h] [rbp-20h]
  int v1536; // [rsp+E0h] [rbp-20h]
  unsigned int v1537; // [rsp+E0h] [rbp-20h]
  int v1538; // [rsp+E0h] [rbp-20h]
  int v1539; // [rsp+E0h] [rbp-20h]
  unsigned int v1540; // [rsp+E0h] [rbp-20h]
  unsigned int v1541; // [rsp+E0h] [rbp-20h]
  char *v1542; // [rsp+E0h] [rbp-20h]
  SIZE_T v1543; // [rsp+E0h] [rbp-20h]
  unsigned int v1544; // [rsp+E8h] [rbp-18h]
  unsigned int v1545; // [rsp+E8h] [rbp-18h]
  unsigned int v1546; // [rsp+E8h] [rbp-18h]
  unsigned int v1547; // [rsp+E8h] [rbp-18h]
  unsigned int v1548; // [rsp+E8h] [rbp-18h]
  unsigned int v1549; // [rsp+E8h] [rbp-18h]
  int v1550; // [rsp+E8h] [rbp-18h]
  int v1551; // [rsp+E8h] [rbp-18h]
  int v1552; // [rsp+E8h] [rbp-18h]
  int v1553; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v1554; // [rsp+F0h] [rbp-10h]
  SIZE_T v1555; // [rsp+F0h] [rbp-10h]
  SIZE_T v1556; // [rsp+F0h] [rbp-10h]
  SIZE_T v1557; // [rsp+F0h] [rbp-10h]
  SIZE_T v1558; // [rsp+F0h] [rbp-10h]
  SIZE_T v1559; // [rsp+F0h] [rbp-10h]
  SIZE_T v1560; // [rsp+F0h] [rbp-10h]
  SIZE_T v1561; // [rsp+F0h] [rbp-10h]
  _QWORD *v1562; // [rsp+F0h] [rbp-10h]
  char *v1563; // [rsp+F0h] [rbp-10h]
  SIZE_T v1564; // [rsp+F0h] [rbp-10h]
  SIZE_T v1565; // [rsp+F0h] [rbp-10h]
  int v1566; // [rsp+F8h] [rbp-8h]
  SIZE_T v1567; // [rsp+F8h] [rbp-8h]
  unsigned int v1568; // [rsp+F8h] [rbp-8h]
  unsigned int v1569; // [rsp+F8h] [rbp-8h]
  unsigned int v1570; // [rsp+F8h] [rbp-8h]
  unsigned int v1571; // [rsp+F8h] [rbp-8h]
  int v1572; // [rsp+F8h] [rbp-8h]
  int v1573; // [rsp+F8h] [rbp-8h]
  int v1574; // [rsp+F8h] [rbp-8h]
  int v1575; // [rsp+F8h] [rbp-8h]
  SIZE_T v1576; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v1577; // [rsp+100h] [rbp+0h] BYREF
  SIZE_T v1578; // [rsp+108h] [rbp+8h]
  LPVOID v1579; // [rsp+110h] [rbp+10h]
  LPCWSTR lpModuleName; // [rsp+118h] [rbp+18h]
  unsigned int v1581; // [rsp+120h] [rbp+20h]
  LPVOID v1582; // [rsp+128h] [rbp+28h]
  void *v1583; // [rsp+130h] [rbp+30h]
  size_t Size; // [rsp+138h] [rbp+38h]
  unsigned int v1585; // [rsp+140h] [rbp+40h] BYREF
  void *v1586; // [rsp+148h] [rbp+48h]
  unsigned int dwBytes; // [rsp+150h] [rbp+50h] BYREF
  int dwBytes_4; // [rsp+154h] [rbp+54h]
  int v1589; // [rsp+158h] [rbp+58h]
  int v1590; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v1591; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1592; // [rsp+164h] [rbp+64h] BYREF
  int v1593; // [rsp+168h] [rbp+68h] BYREF
  int v1594; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1595; // [rsp+170h] [rbp+70h] BYREF
  int v1596; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1597; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1598; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1599; // [rsp+180h] [rbp+80h] BYREF
  int v1600; // [rsp+184h] [rbp+84h] BYREF
  int v1601; // [rsp+188h] [rbp+88h] BYREF
  int v1602; // [rsp+18Ch] [rbp+8Ch] BYREF
  int v1603; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1604; // [rsp+194h] [rbp+94h] BYREF
  SIZE_T v1605; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1606; // [rsp+1A0h] [rbp+A0h] BYREF
  int v1607; // [rsp+1A4h] [rbp+A4h] BYREF
  SIZE_T v1608; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1609; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1610; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1611; // [rsp+1B8h] [rbp+B8h] BYREF
  int v1612; // [rsp+1BCh] [rbp+BCh]
  unsigned int v1613; // [rsp+1C0h] [rbp+C0h] BYREF
  int v1614; // [rsp+1C4h] [rbp+C4h]
  unsigned int v1615; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1616; // [rsp+1CCh] [rbp+CCh] BYREF
  int v1617; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1618; // [rsp+1D4h] [rbp+D4h] BYREF
  int v1619; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1620; // [rsp+1DCh] [rbp+DCh] BYREF
  int v1621; // [rsp+1E0h] [rbp+E0h] BYREF
  int v1622; // [rsp+1E4h] [rbp+E4h] BYREF
  int v1623; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1624[3]; // [rsp+1ECh] [rbp+ECh] BYREF
  int v1625; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1626; // [rsp+1FCh] [rbp+FCh] BYREF
  int v1627; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1628; // [rsp+204h] [rbp+104h] BYREF
  int v1629; // [rsp+208h] [rbp+108h] BYREF
  int v1630; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1631; // [rsp+210h] [rbp+110h] BYREF
  int v1632; // [rsp+214h] [rbp+114h] BYREF
  int v1633; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1634; // [rsp+21Ch] [rbp+11Ch] BYREF
  SIZE_T v1635; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1636; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1637; // [rsp+22Ch] [rbp+12Ch] BYREF
  SIZE_T v1638; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1639; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1640; // [rsp+23Ch] [rbp+13Ch] BYREF
  int v1641; // [rsp+240h] [rbp+140h]
  int v1642; // [rsp+244h] [rbp+144h] BYREF
  int v1643; // [rsp+248h] [rbp+148h] BYREF
  int v1644; // [rsp+24Ch] [rbp+14Ch] BYREF
  int v1645; // [rsp+250h] [rbp+150h] BYREF
  int v1646; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1647; // [rsp+260h] [rbp+160h] BYREF
  int v1648; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1649; // [rsp+268h] [rbp+168h] BYREF
  unsigned int v1650[3]; // [rsp+26Ch] [rbp+16Ch] BYREF
  wchar_t *String1; // [rsp+278h] [rbp+178h] BYREF
  wchar_t *v1652; // [rsp+280h] [rbp+180h] BYREF
  wchar_t *v1653; // [rsp+288h] [rbp+188h] BYREF
  wchar_t *v1654; // [rsp+290h] [rbp+190h] BYREF
  size_t pcchLength[2]; // [rsp+298h] [rbp+198h] BYREF
  int *v1656; // [rsp+2A8h] [rbp+1A8h] BYREF
  int *v1657; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v1658; // [rsp+2B8h] [rbp+1B8h] BYREF
  size_t v1659; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v1660; // [rsp+2C8h] [rbp+1C8h] BYREF
  int *v1661; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v1662; // [rsp+2D8h] [rbp+1D8h] BYREF
  void *v1663; // [rsp+2E0h] [rbp+1E0h] BYREF
  _QWORD v1664[5]; // [rsp+2E8h] [rbp+1E8h] BYREF
  void *v1665; // [rsp+310h] [rbp+210h] BYREF
  _DWORD *v1666; // [rsp+318h] [rbp+218h] BYREF
  LPVOID v1667; // [rsp+320h] [rbp+220h] BYREF
  HMODULE phModule; // [rsp+328h] [rbp+228h] BYREF
  int *v1669; // [rsp+330h] [rbp+230h] BYREF
  void *v1670; // [rsp+340h] [rbp+240h] BYREF
  void *v1671; // [rsp+348h] [rbp+248h] BYREF
  void *v1672; // [rsp+350h] [rbp+250h] BYREF
  void *v1673; // [rsp+358h] [rbp+258h] BYREF
  _DWORD *v1674; // [rsp+360h] [rbp+260h] BYREF
  int *v1675; // [rsp+368h] [rbp+268h] BYREF
  int *v1676; // [rsp+370h] [rbp+270h] BYREF
  int *v1677; // [rsp+378h] [rbp+278h] BYREF
  int *v1678; // [rsp+380h] [rbp+280h] BYREF
  _DWORD *v1679; // [rsp+388h] [rbp+288h] BYREF
  __int64 v1680; // [rsp+390h] [rbp+290h] BYREF
  WCHAR *v1681; // [rsp+3A0h] [rbp+2A0h]
  void **v1682; // [rsp+3A8h] [rbp+2A8h] BYREF
  LPVOID v1683; // [rsp+3B8h] [rbp+2B8h]
  void *v1684; // [rsp+3C0h] [rbp+2C0h] BYREF
  unsigned __int64 v1685; // [rsp+3C8h] [rbp+2C8h]
  _QWORD *v1686; // [rsp+3D0h] [rbp+2D0h] BYREF
  char *v1687; // [rsp+3D8h] [rbp+2D8h] BYREF
  _DWORD *v1688; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v1689; // [rsp+3E8h] [rbp+2E8h]
  __int64 v1690; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v1691; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v1692; // [rsp+400h] [rbp+300h] BYREF
  __int64 v1693; // [rsp+408h] [rbp+308h] BYREF
  _QWORD v1694[4]; // [rsp+410h] [rbp+310h] BYREF
  int *v1695; // [rsp+430h] [rbp+330h] BYREF
  int *v1696; // [rsp+438h] [rbp+338h] BYREF
  int *v1697; // [rsp+440h] [rbp+340h] BYREF
  void *v1698[5]; // [rsp+448h] [rbp+348h] BYREF
  void *v1699; // [rsp+470h] [rbp+370h] BYREF
  _DWORD *v1700; // [rsp+478h] [rbp+378h] BYREF
  void *v1701; // [rsp+480h] [rbp+380h] BYREF
  HMODULE hModule; // [rsp+488h] [rbp+388h] BYREF
  void *v1703; // [rsp+490h] [rbp+390h] BYREF
  SIZE_T v1704; // [rsp+498h] [rbp+398h] BYREF
  SIZE_T v1705; // [rsp+4A0h] [rbp+3A0h] BYREF
  SIZE_T v1706; // [rsp+4A8h] [rbp+3A8h] BYREF
  int *v1707; // [rsp+4B0h] [rbp+3B0h] BYREF
  unsigned __int64 v1708[2]; // [rsp+4B8h] [rbp+3B8h] BYREF
  _DWORD *v1709; // [rsp+4C8h] [rbp+3C8h] BYREF
  __int128 v1710; // [rsp+4D0h] [rbp+3D0h]
  __int128 v1711; // [rsp+4E0h] [rbp+3E0h]
  void *v1712; // [rsp+4F8h] [rbp+3F8h] BYREF
  _QWORD *v1713; // [rsp+508h] [rbp+408h] BYREF
  size_t v1714; // [rsp+510h] [rbp+410h] BYREF
  LPVOID lpMem; // [rsp+518h] [rbp+418h]
  LPVOID v1716[3]; // [rsp+520h] [rbp+420h]
  void *v1717; // [rsp+538h] [rbp+438h] BYREF
  void *v1718; // [rsp+548h] [rbp+448h] BYREF
  void *v1719; // [rsp+558h] [rbp+458h] BYREF
  _QWORD *v1720; // [rsp+568h] [rbp+468h] BYREF
  void *v1721; // [rsp+578h] [rbp+478h] BYREF
  unsigned int *v1722; // [rsp+588h] [rbp+488h] BYREF
  unsigned int *v1723; // [rsp+598h] [rbp+498h] BYREF
  size_t v1724; // [rsp+5A0h] [rbp+4A0h] BYREF
  void *v1725; // [rsp+5A8h] [rbp+4A8h]
  __int128 v1726; // [rsp+5B0h] [rbp+4B0h]
  __int128 v1727; // [rsp+5C0h] [rbp+4C0h] BYREF
  LPVOID v1728[3]; // [rsp+5D0h] [rbp+4D0h]
  _DWORD *v1729; // [rsp+5E8h] [rbp+4E8h] BYREF
  _QWORD v1730[2]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v1731; // [rsp+600h] [rbp+500h]
  unsigned int v1732; // [rsp+604h] [rbp+504h]
  int v1733; // [rsp+608h] [rbp+508h]
  _QWORD v1734[2]; // [rsp+610h] [rbp+510h] BYREF
  int v1735; // [rsp+620h] [rbp+520h]
  unsigned int v1736; // [rsp+624h] [rbp+524h]
  int v1737; // [rsp+628h] [rbp+528h]
  _BYTE v1738[24]; // [rsp+630h] [rbp+530h] BYREF
  void *v1739; // [rsp+648h] [rbp+548h]
  _BYTE v1740[4]; // [rsp+6A0h] [rbp+5A0h] BYREF
  int v1741; // [rsp+6A4h] [rbp+5A4h]
  int v1742; // [rsp+6A8h] [rbp+5A8h]
  __int16 v1743; // [rsp+6B2h] [rbp+5B2h]
  __int64 v1744; // [rsp+6B8h] [rbp+5B8h]
  _BYTE v1745[4]; // [rsp+710h] [rbp+610h] BYREF
  int v1746; // [rsp+714h] [rbp+614h]
  int v1747; // [rsp+718h] [rbp+618h]
  wchar_t *v1748; // [rsp+728h] [rbp+628h]
  _BYTE v1749[24]; // [rsp+780h] [rbp+680h] BYREF
  SIZE_T v1750; // [rsp+798h] [rbp+698h]
  _BYTE v1751[4]; // [rsp+7F0h] [rbp+6F0h] BYREF
  int v1752; // [rsp+7F4h] [rbp+6F4h]
  int v1753; // [rsp+7F8h] [rbp+6F8h]
  wchar_t *v1754; // [rsp+808h] [rbp+708h]
  _BYTE v1755[24]; // [rsp+860h] [rbp+760h] BYREF
  SIZE_T v1756; // [rsp+878h] [rbp+778h]
  _BYTE v1757[4]; // [rsp+8D0h] [rbp+7D0h] BYREF
  int v1758; // [rsp+8D4h] [rbp+7D4h]
  int v1759; // [rsp+8D8h] [rbp+7D8h]
  SIZE_T v1760; // [rsp+8E8h] [rbp+7E8h]
  _BYTE v1761[4]; // [rsp+940h] [rbp+840h] BYREF
  int v1762; // [rsp+944h] [rbp+844h]
  int v1763; // [rsp+948h] [rbp+848h]
  SIZE_T v1764; // [rsp+958h] [rbp+858h]
  _BYTE v1765[24]; // [rsp+9B0h] [rbp+8B0h] BYREF
  void *v1766; // [rsp+9C8h] [rbp+8C8h]
  int v1767; // [rsp+A20h] [rbp+920h] BYREF
  int v1768; // [rsp+A24h] [rbp+924h]
  void *v1769; // [rsp+A28h] [rbp+928h]
  void *v1770; // [rsp+A30h] [rbp+930h]
  void *v1771; // [rsp+A38h] [rbp+938h]
  SIZE_T v1772; // [rsp+A40h] [rbp+940h]
  SIZE_T v1773; // [rsp+A48h] [rbp+948h]
  __int64 v1774; // [rsp+A50h] [rbp+950h]
  int v1775; // [rsp+A58h] [rbp+958h]
  __int128 v1776; // [rsp+A5Ch] [rbp+95Ch] BYREF
  __int128 v1777; // [rsp+A6Ch] [rbp+96Ch] BYREF
  unsigned int v1778; // [rsp+A7Ch] [rbp+97Ch] BYREF
  unsigned int v1779; // [rsp+A80h] [rbp+980h]
  unsigned int v1780; // [rsp+A84h] [rbp+984h]
  unsigned int v1781; // [rsp+A88h] [rbp+988h]
  unsigned __int64 v1782; // [rsp+A90h] [rbp+990h]
  unsigned __int64 v1783; // [rsp+A98h] [rbp+998h]
  __int64 v1784; // [rsp+AA0h] [rbp+9A0h]
  __int64 v1785; // [rsp+AA8h] [rbp+9A8h]
  __int128 v1786; // [rsp+AB0h] [rbp+9B0h] BYREF
  __int128 v1787; // [rsp+AC0h] [rbp+9C0h]
  __int128 v1788; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int128 v1789; // [rsp+AE0h] [rbp+9E0h] BYREF
  __int64 v1790; // [rsp+AF0h] [rbp+9F0h] BYREF
  unsigned int v1791; // [rsp+AF8h] [rbp+9F8h]
  unsigned int v1792; // [rsp+AFCh] [rbp+9FCh]
  __int128 v1793; // [rsp+B00h] [rbp+A00h] BYREF
  char v1794[12]; // [rsp+B10h] [rbp+A10h] BYREF
  unsigned int v1795; // [rsp+B1Ch] [rbp+A1Ch]
  __int128 v1796; // [rsp+B30h] [rbp+A30h] BYREF
  __int128 v1797; // [rsp+B40h] [rbp+A40h] BYREF
  __int64 v1798; // [rsp+B50h] [rbp+A50h]
  __int128 v1799; // [rsp+B58h] [rbp+A58h] BYREF
  __int128 v1800; // [rsp+B68h] [rbp+A68h] BYREF
  __int64 v1801; // [rsp+B78h] [rbp+A78h]
  __int128 v1802; // [rsp+B80h] [rbp+A80h] BYREF
  __int128 v1803; // [rsp+B90h] [rbp+A90h]
  __int64 v1804; // [rsp+BA0h] [rbp+AA0h]
  int v1805; // [rsp+BA8h] [rbp+AA8h]
  __int128 v1806; // [rsp+BB0h] [rbp+AB0h] BYREF
  __int128 v1807; // [rsp+BC0h] [rbp+AC0h]
  __int64 v1808; // [rsp+BD0h] [rbp+AD0h]
  int v1809; // [rsp+BD8h] [rbp+AD8h]
  __int128 v1810; // [rsp+BE0h] [rbp+AE0h] BYREF
  __int128 v1811; // [rsp+BF0h] [rbp+AF0h]
  __int64 v1812; // [rsp+C00h] [rbp+B00h]
  int v1813; // [rsp+C08h] [rbp+B08h]
  __int128 v1814; // [rsp+C10h] [rbp+B10h] BYREF
  __int128 v1815; // [rsp+C20h] [rbp+B20h]
  __int64 v1816; // [rsp+C30h] [rbp+B30h]
  int v1817; // [rsp+C38h] [rbp+B38h]
  __int128 v1818; // [rsp+C40h] [rbp+B40h] BYREF
  __int128 v1819; // [rsp+C50h] [rbp+B50h]
  __int64 v1820; // [rsp+C60h] [rbp+B60h]
  int v1821; // [rsp+C68h] [rbp+B68h]
  _DWORD v1822[6]; // [rsp+C70h] [rbp+B70h] BYREF
  char v1823; // [rsp+C8Ah] [rbp+B8Ah]
  wchar_t v1824[34]; // [rsp+C8Ch] [rbp+B8Ch] BYREF
  _DWORD v1825[6]; // [rsp+CD0h] [rbp+BD0h] BYREF
  char v1826; // [rsp+CEAh] [rbp+BEAh]
  wchar_t v1827[34]; // [rsp+CECh] [rbp+BECh] BYREF
  _DWORD v1828[6]; // [rsp+D30h] [rbp+C30h] BYREF
  char v1829; // [rsp+D4Ah] [rbp+C4Ah]
  wchar_t v1830[34]; // [rsp+D4Ch] [rbp+C4Ch] BYREF
  _BYTE v1831[68]; // [rsp+D90h] [rbp+C90h] BYREF
  __int16 v1832; // [rsp+DD4h] [rbp+CD4h]
  unsigned __int16 v1833; // [rsp+E36h] [rbp+D36h]
  __int64 v1834; // [rsp+E3Ch] [rbp+D3Ch]
  _QWORD v1835[6]; // [rsp+E70h] [rbp+D70h] BYREF
  int v1836; // [rsp+EA0h] [rbp+DA0h] BYREF
  __int128 v1837; // [rsp+EA8h] [rbp+DA8h]
  __int128 v1838; // [rsp+EB8h] [rbp+DB8h]
  __int128 v1839; // [rsp+EC8h] [rbp+DC8h]
  __int64 v1840; // [rsp+ED8h] [rbp+DD8h]
  _QWORD v1841[20]; // [rsp+EE0h] [rbp+DE0h] BYREF
  _WORD v1842[8]; // [rsp+F80h] [rbp+E80h] BYREF
  _BYTE v1843[176]; // [rsp+F90h] [rbp+E90h] BYREF
  WCHAR Filename[264]; // [rsp+1040h] [rbp+F40h] BYREF

  v1669 = 0LL;
  v0 = 0;
  v1612 = 0;
  v1614 = 0;
  v1577 = 0LL;
  dwBytes = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1 = g_WarbirdSecureFunctionsRefCount;
  dwBytes_4 = -1;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_40;
  v2 = MemoryAlloc(0x338uLL);
  if ( !v2 )
    goto LABEL_11;
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
    v33 = v32 ^ v31 ^ 0xAC987321;
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
  if ( v51 == 64LL )
  {
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
        v1581 = v64;
        for ( i = 0; i < v1581; ++i )
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
              goto LABEL_38;
            (&WARBIRD::g_FuncAddress)[v54] = ProcAddress;
          }
          ++v54;
        }
        ++v53;
        if ( !*v2 )
          goto LABEL_38;
      }
      v52 = -1073741702;
    }
LABEL_38:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v57);
    v0 = dwBytes;
    if ( v52 < 0 )
      goto LABEL_11;
    v1 = g_WarbirdSecureFunctionsRefCount;
LABEL_40:
    g_WarbirdSecureFunctionsRefCount = v1 + 1;
    goto LABEL_41;
  }
  MemoryFree(v2);
  v0 = 0;
LABEL_11:
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
  memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_41:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  String1 = 0LL;
  v70 = 0;
  v1652 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_91;
  v72 = ((__int64 (*)(void))off_180985210)();
  v73 = 0LL;
  if ( !v72 )
  {
LABEL_43:
    LastError = GetLastError();
    v74 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v74 = LastError < 0;
    }
    if ( !v74 )
      LastError = -2147467259;
    goto LABEL_92;
  }
  v75 = 0LL;
  v1653 = 0LL;
  for ( j = 0LL; ; j = v1615 )
  {
    v77 = v75;
    if ( !v73 )
      v77 = 0LL;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180985230)(
                         v72,
                         2LL,
                         v77,
                         j,
                         &v1615) )
    {
      String1 = v75;
      v1653 = 0LL;
      goto LABEL_62;
    }
    v78 = GetLastError();
    if ( v78 != 122 )
      break;
    if ( v75 )
      goto LABEL_56;
    v75 = (wchar_t *)MemoryAlloc(v1615);
    SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1653);
    v1653 = v75;
    v73 = v75;
    if ( !v75 )
    {
      LastError = -2147024882;
      goto LABEL_62;
    }
  }
  if ( !v78 )
  {
LABEL_56:
    LastError = -2147467259;
    goto LABEL_62;
  }
  if ( v78 > 0 )
    LastError = (unsigned __int16)v78 | 0x80070000;
  else
    LastError = v78;
LABEL_62:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1653);
  if ( LastError >= 0 )
  {
    v79 = off_180985228;
    CurrentThreadId = GetCurrentThreadId();
    v81 = ((__int64 (__fastcall *)(_QWORD))v79)(CurrentThreadId);
    v82 = 0LL;
    if ( !v81 )
    {
      LastError = GetLastError();
      v83 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v83 = LastError < 0;
      }
      if ( !v83 )
        LastError = -2147467259;
      goto LABEL_92;
    }
    v84 = 0LL;
    v1654 = 0LL;
    LastError = 0;
    for ( k = 0LL; ; k = v1616 )
    {
      v86 = v84;
      if ( !v82 )
        v86 = 0LL;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180985230)(
                           v81,
                           2LL,
                           v86,
                           k,
                           &v1616) )
      {
        v1652 = v84;
        v1654 = 0LL;
        goto LABEL_83;
      }
      v87 = GetLastError();
      if ( v87 != 122 )
        break;
      if ( v84 )
        goto LABEL_77;
      v84 = (wchar_t *)MemoryAlloc(v1616);
      SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1654);
      v1654 = v84;
      v82 = v84;
      if ( !v84 )
      {
        LastError = -2147024882;
        goto LABEL_83;
      }
    }
    if ( !v87 )
    {
LABEL_77:
      LastError = -2147467259;
      goto LABEL_83;
    }
    LastError = v87 > 0 ? (unsigned __int16)v87 | 0x80070000 : v87;
LABEL_83:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1654);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1652 && !wcscmp_0(v1652, L"Default") )
      {
        v1590 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1590, 4LL) )
          goto LABEL_43;
        if ( (v1590 & 0xF) == 0 )
          v70 = 1;
      }
LABEL_91:
      v0 = v70;
    }
  }
LABEL_92:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1652);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&String1);
  v89 = 0;
  if ( LastError >= 0 )
    v89 = v0;
  v1581 = v89;
  v90 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v1577, v90);
  v91 = 0LL;
  v1583 = (void *)v1577;
  if ( v1577 )
  {
    v93 = 0LL;
    lpMem = 0LL;
    *(_OWORD *)v1716 = 0LL;
    v94 = GetProcessHeap();
    v95 = HeapAlloc(v94, 8u, 0xA0uLL);
    v1589 = 56;
    v92 = -1073741801;
    if ( !v95 )
    {
LABEL_97:
      LODWORD(v1586) = v92;
LABEL_98:
      v96 = v89;
      goto LABEL_99;
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
    v105 = GetProcessHeap();
    v106 = HeapAlloc(v105, 8u, 8uLL);
    if ( !v106 )
    {
      LODWORD(v1586) = -1073741801;
LABEL_116:
      v96 = v89;
      goto LABEL_99;
    }
    *v106 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
    v1455 = (LPVOID)__rdtsc();
    dwBytes = 0;
    v92 = RtlUIntAdd(4u, 4, (unsigned int *)&v1617);
    LODWORD(v1586) = v92;
    if ( v92 < 0 )
    {
      v96 = v89;
      v93 = v107;
      goto LABEL_99;
    }
    v108 = RtlUIntAdd(0, v1617, &dwBytes);
    v96 = v89;
    v92 = v108 | 0x10000000;
    v93 = v110;
    LODWORD(v1586) = v108 | 0x10000000;
    if ( v108 < 0 )
      goto LABEL_99;
    v92 = RtlUIntAdd(v109, 160, (unsigned int *)&v1619);
    LODWORD(v1586) = v92;
    if ( v92 < 0 )
      goto LABEL_99;
    v111 = RtlUIntAdd(dwBytes, v1619, &dwBytes);
    v92 = v111 | 0x10000000;
    LODWORD(v1586) = v111 | 0x10000000;
    if ( v111 < 0 )
      goto LABEL_99;
    v92 = RtlUIntAdd(v112, v112 + 4, (unsigned int *)&v1630);
    LODWORD(v1586) = v92;
    if ( v92 < 0 )
      goto LABEL_99;
    v113 = RtlUIntAdd(dwBytes, v1630, &dwBytes);
    v92 = v113 | 0x10000000;
    LODWORD(v1586) = v113 | 0x10000000;
    if ( v113 < 0 )
      goto LABEL_99;
    v92 = RtlUIntAdd(v114, v114 + 4, (unsigned int *)&v1642);
    LODWORD(v1586) = v92;
    if ( v92 < 0 )
      goto LABEL_99;
    v115 = RtlUIntAdd(dwBytes, v1642, &dwBytes);
    v92 = v115 | 0x10000000;
    LODWORD(v1586) = v115 | 0x10000000;
    if ( v115 < 0 )
      goto LABEL_99;
    if ( StringCchLengthW(L"DeferWidgetsInitialization", v116, pcchLength) < 0 )
    {
      v92 = -1073741762;
LABEL_127:
      LODWORD(v1586) = v92;
      goto LABEL_99;
    }
    ++pcchLength[0];
    v92 = RtlUIntAdd(4u, 2 * LODWORD(pcchLength[0]), (unsigned int *)&v1643);
    LODWORD(v1586) = v92;
    if ( v92 < 0 )
      goto LABEL_99;
    v117 = RtlUIntAdd(dwBytes, v1643, &dwBytes);
    v92 = v117 | 0x10000000;
    LODWORD(v1586) = v117 | 0x10000000;
    if ( v117 < 0 )
      goto LABEL_99;
    v92 = RtlUIntAdd(4u, 4, (unsigned int *)&v1644);
    LODWORD(v1586) = v92;
    if ( v92 < 0 )
      goto LABEL_99;
    v118 = RtlUIntAdd(dwBytes, v1644, &dwBytes);
    v92 = v118 | 0x10000000;
    LODWORD(v1586) = v118 | 0x10000000;
    if ( v118 < 0
      || (v92 = RtlUIntAdd(v119, v119, (unsigned int *)&v1645), LODWORD(v1586) = v92, v92 < 0)
      || (v120 = RtlUIntAdd(dwBytes, v1645, &dwBytes),
          v92 = v120 | 0x10000000,
          LODWORD(v1586) = v120 | 0x10000000,
          v120 < 0) )
    {
LABEL_99:
      v1714 = 0LL;
      v97 = lpMem;
      if ( lpMem )
      {
        v98 = GetProcessHeap();
        HeapFree(v98, 0, v97);
        lpMem = 0LL;
      }
      v1716[0] = 0LL;
      v99 = v1716[1];
      if ( v1716[1] )
      {
        v100 = GetProcessHeap();
        HeapFree(v100, 0, v99);
        v1716[1] = 0LL;
      }
      if ( v91 )
      {
        v101 = GetProcessHeap();
        HeapFree(v101, 0, v91);
      }
      if ( v93 )
      {
        v102 = GetProcessHeap();
        HeapFree(v102, 0, v93);
      }
      if ( v92 < 0 )
        goto LABEL_1574;
      if ( !v96 )
      {
LABEL_1573:
        v1331 = v1614;
        v1577 = 0LL;
        v1669 = (int *)v1583;
        goto LABEL_1575;
      }
      g_WarbirdNotificationInformation = v96;
      v1680 = 0LL;
      ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
      v104 = 0LL;
      if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
        goto LABEL_1219;
      v1376 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
      if ( !v1376 )
      {
        GetLastError();
LABEL_1219:
        SH<void *,SH_HANDLE>::Reset(&v1680);
        v1725 = 0LL;
        v991 = 0LL;
        *(_OWORD *)v1728 = 0LL;
        v992 = GetProcessHeap();
        v993 = HeapAlloc(v992, 8u, 0xA0uLL);
        if ( !v993 )
          goto LABEL_1565;
        v991 = v993;
        *v993 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
        v993[1] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
        v993[2] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
        v993[3] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
        v993[4] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
        v993[5] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
        v993[6] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
        v993[7] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
        v993[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
        v993[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
        v994 = GetProcessHeap();
        v995 = (WCHAR *)HeapAlloc(v994, 8u, 8uLL);
        v996 = v995;
        if ( !v995 )
          goto LABEL_1565;
        *(_QWORD *)v995 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
        v1495 = (void *)__rdtsc();
        v1620 = 0;
        v104 = (__int64)v996;
        if ( (int)RtlUIntAdd(4u, 4, (unsigned int *)&v1621) < 0 )
          goto LABEL_1565;
        if ( (int)RtlUIntAdd(0, v1621, &v1620) < 0 )
          goto LABEL_1565;
        if ( (int)RtlUIntAdd(v997, 160, (unsigned int *)&v1622) < 0 )
          goto LABEL_1565;
        v998 = RtlUIntAdd(v1620, v1622, &v1620);
        if ( (v1001 | v998) < 0 )
          goto LABEL_1565;
        if ( (int)RtlUIntAdd(v1000, v999 + 8, (unsigned int *)&v1623) < 0 )
          goto LABEL_1565;
        v1002 = RtlUIntAdd(v1620, v1623, &v1620);
        if ( (v1005 | v1002) < 0 )
          goto LABEL_1565;
        if ( (int)RtlUIntAdd(v1004, v1003 + 8, v1624) < 0 )
          goto LABEL_1565;
        v1006 = RtlUIntAdd(v1620, v1624[0], &v1620);
        if ( (v1007 | v1006) < 0 )
          goto LABEL_1565;
        HIDWORD(v1724) = v1620;
        v1008 = v1620;
        v1009 = GetProcessHeap();
        v1010 = HeapAlloc(v1009, 8u, v1008);
        if ( !v1010 )
          goto LABEL_1565;
        v1725 = v1010;
        LODWORD(v1724) = 0;
        v1694[3] = v1010;
        v1516 = v996;
        v1384 = (size_t)v991;
        v1011 = 0LL;
        if ( (int)RtlULongLongAdd((unsigned __int64)v1010, 4LL, (unsigned __int64 *)&v1729) < 0
          || v1013 + 2 > (_DWORD *)((char *)v1013 + HIDWORD(v1724)) )
        {
          goto LABEL_1565;
        }
        v1014 = v1729;
        *v1013 = 4;
        *v1014 = 4;
        v1015 = v1724 + 1;
        LODWORD(v1724) = v1724 + 1;
        if ( v1725 )
        {
          v1017 = (int *)v1725;
          v1695 = (int *)v1725;
          v1349 = 0;
          if ( v1015 )
          {
            do
            {
              if ( (int)RtlUIntAdd(4u, *v1017, &v1626) < 0
                || (int)RtlULongLongAdd(v1018, v1626, (unsigned __int64 *)&v1695) < 0 )
              {
                goto LABEL_1565;
              }
              v1017 = v1695;
              ++v1349;
              v1516 = (LPCWSTR)v104;
              v1384 = (size_t)v991;
            }
            while ( v1349 < v1019 );
            v1011 = 0LL;
          }
          if ( (int)RtlULongLongAdd((unsigned __int64)v1017, 4LL, (unsigned __int64 *)&v1712) < 0
            || (char *)v1020 + v1021 + 4 > (char *)v1725 + HIDWORD(v1724) )
          {
            goto LABEL_1565;
          }
          *v1020 = v1021;
          memcpy_0(v1712, v991, v1021);
          v1016 = 4LL;
        }
        else if ( (int)RtlUIntAdd(4u, v1012, (unsigned int *)&v1625) < 0
               || (int)RtlUIntAdd(HIDWORD(v1724), v1625, (unsigned int *)&v1724 + 1) < 0 )
        {
          goto LABEL_1565;
        }
        v1022 = v1724 + 1;
        LODWORD(v1724) = v1724 + 1;
        if ( v104 )
        {
          if ( v1725 )
          {
            v1025 = (int *)v1725;
            v1696 = (int *)v1725;
            v1350 = 0;
            if ( v1022 )
            {
              do
              {
                if ( (int)RtlUIntAdd(4u, *v1025, &v1628) < 0
                  || (int)RtlULongLongAdd(v1026, v1628, (unsigned __int64 *)&v1696) < 0 )
                {
                  goto LABEL_1565;
                }
                v1025 = v1696;
                ++v1350;
                v1516 = (LPCWSTR)v104;
                v1384 = (size_t)v991;
              }
              while ( v1350 < v1027 );
              v1011 = 0LL;
              v1016 = 4LL;
            }
            if ( (int)RtlULongLongAdd((unsigned __int64)v1025, v1016, (unsigned __int64 *)&v1717) < 0
              || v1028 + 3 > (_DWORD *)((char *)v1725 + HIDWORD(v1724)) )
            {
              goto LABEL_1565;
            }
            *v1028 = 8;
            memcpy_0(v1717, (const void *)v104, 8uLL);
            v1024 = 4LL;
            v1023 = 1;
          }
          else if ( (int)RtlUIntAdd(v1016, 8, (unsigned int *)&v1627) < 0
                 || (int)RtlUIntAdd(HIDWORD(v1724), v1627, (unsigned int *)&v1724 + 1) < 0 )
          {
            goto LABEL_1565;
          }
          v1029 = v1023 + v1724;
          LODWORD(v1724) = v1023 + v1724;
          if ( v1725 )
          {
            v1032 = (int *)v1725;
            v1697 = (int *)v1725;
            if ( v1029 )
            {
              do
              {
                if ( (int)RtlUIntAdd(4u, *v1032, &v1640) < 0
                  || (int)RtlULongLongAdd(v1033, v1640, (unsigned __int64 *)&v1697) < 0 )
                {
                  goto LABEL_1565;
                }
                v1032 = v1697;
                LODWORD(v1011) = (_DWORD)v1011 + 1;
                v1516 = (LPCWSTR)v104;
                v1384 = (size_t)v991;
              }
              while ( (unsigned int)v1011 < v1029 );
              v1024 = 4LL;
            }
            v1011 = 0LL;
            if ( (int)RtlULongLongAdd((unsigned __int64)v1032, v1024, (unsigned __int64 *)&v1713) < 0
              || v1034 + 3 > (_DWORD *)((char *)v1725 + HIDWORD(v1724)) )
            {
              goto LABEL_1565;
            }
            v1035 = v1713;
            *v1034 = 8;
            *v1035 = v1495;
            LODWORD(v1724) = v1724 + 1;
          }
          else
          {
            if ( (int)RtlUIntAdd(v1024, 8, (unsigned int *)&v1629) < 0
              || (int)RtlUIntAdd(HIDWORD(v1724), v1629, (unsigned int *)&v1724 + 1) < 0 )
            {
              goto LABEL_1565;
            }
            LODWORD(v1724) = v1030 + v1724;
          }
          if ( (int)RtlUIntAdd(v1031, v1031, &v1631) >= 0 )
          {
            v1037 = v1631;
            v1632 = v1631;
            if ( (int)RtlUIntAdd(v1036, 8, (unsigned int *)&v1633) >= 0
              && (int)RtlUIntAdd(v1037, v1633, (unsigned int *)&v1632) >= 0 )
            {
              v1367 = 0;
              Srcf = 0LL;
              v1411 = 0LL;
              v1462 = 0;
              v1480 = 0LL;
              v1440 = 0LL;
              lpModuleName = 0LL;
              v1351 = v1632;
              v1496 = 0LL;
              v1561 = __rdtsc();
              v1634 = 8;
              v1038 = RtlUIntAdd(8u, SHIDWORD(v1724), &v1634);
              if ( v1038 >= 0 )
              {
                v1041 = (v1634 + 7) & 0xFFFFFFF8;
                if ( v1041 < v1634 )
                  goto LABEL_1565;
                v1634 = (v1634 + 7) & 0xFFFFFFF8;
                v1042 = v1041;
                v1043 = GetProcessHeap();
                v1044 = HeapAlloc(v1043, 8u, v1042);
                v1578 = (SIZE_T)v1044;
                if ( !v1044 )
                  goto LABEL_1565;
                v1698[0] = v1044;
                *v1044 = v1724;
                v1045 = RtlULongLongAdd((unsigned __int64)v1044, 4LL, (unsigned __int64 *)v1698);
                v1582 = v1046;
                v1038 = v1045;
                v1516 = (LPCWSTR)v104;
                v1384 = (size_t)v991;
                if ( v1045 < 0
                  || (v1047 = v1698[0],
                      *(_DWORD *)v1698[0] = HIDWORD(v1724),
                      v1048 = RtlULongLongAdd((unsigned __int64)v1047, 4LL, (unsigned __int64 *)v1698),
                      v1582 = v1049,
                      v1038 = v1048,
                      v1516 = (LPCWSTR)v104,
                      v1384 = (size_t)v991,
                      v1048 < 0) )
                {
                  v1050 = GetProcessHeap();
                  HeapFree(v1050, 0, v1582);
                  v1039 = 0;
                }
                else
                {
                  *(_QWORD *)&v1049[v1634 - 8] = v1561;
                  memcpy_0(v1698[0], v1725, HIDWORD(v1724));
                  v1011 = (unsigned __int8 *)v1578;
                  v1039 = v1634;
                  v1496 = (unsigned __int8 *)v1578;
                  v1367 = v1634;
                  v1516 = (LPCWSTR)v104;
                  v1384 = (size_t)v991;
                }
                v1040 = 0LL;
              }
              v1051 = v1038 | 0x10000000;
              if ( v1051 < 0 )
                goto LABEL_1349;
              v1562 = v1040;
              if ( v1011 )
              {
                v1052 = v1039;
                v1577 = v1039;
                if ( !v1039 || (v1424 = v1039 + 8, (v1542 = (char *)MemoryAlloc(v1039 + 8LL)) == 0LL) )
                {
                  v1051 = -805306367;
LABEL_1350:
                  v1154 = GetProcessHeap();
                  HeapFree(v1154, 0, v1011);
LABEL_1351:
                  if ( Srcf )
                  {
                    v1155 = (void *)Srcf[1];
                    if ( v1155 )
                    {
                      v1156 = GetProcessHeap();
                      HeapFree(v1156, 0, v1155);
                      Srcf[1] = 0LL;
                    }
                    v1157 = (void *)Srcf[3];
                    if ( v1157 )
                    {
                      v1158 = GetProcessHeap();
                      HeapFree(v1158, 0, v1157);
                      Srcf[3] = 0LL;
                    }
                    v1159 = (void *)Srcf[5];
                    if ( v1159 )
                    {
                      v1160 = GetProcessHeap();
                      HeapFree(v1160, 0, v1159);
                      Srcf[5] = 0LL;
                    }
                    v1161 = GetProcessHeap();
                    HeapFree(v1161, 0, Srcf);
                  }
                  if ( v1411 )
                  {
                    v1162 = GetProcessHeap();
                    HeapFree(v1162, 0, v1411);
                  }
                  if ( v1480 )
                  {
                    v1163 = GetProcessHeap();
                    HeapFree(v1163, 0, v1480);
                  }
                  if ( v1440 )
                  {
                    v1164 = (void *)v1440[1];
                    if ( v1164 )
                    {
                      v1165 = GetProcessHeap();
                      HeapFree(v1165, 0, v1164);
                      v1440[1] = 0LL;
                    }
                    v1166 = (void *)v1440[3];
                    if ( v1166 )
                    {
                      v1167 = GetProcessHeap();
                      HeapFree(v1167, 0, v1166);
                      v1440[3] = 0LL;
                    }
                    v1168 = (void *)v1440[5];
                    if ( v1168 )
                    {
                      v1169 = GetProcessHeap();
                      HeapFree(v1169, 0, v1168);
                      v1440[5] = 0LL;
                    }
                    v1170 = GetProcessHeap();
                    HeapFree(v1170, 0, v1440);
                  }
                  v1171 = (WCHAR *)lpModuleName;
                  if ( lpModuleName )
                  {
                    v1172 = GetProcessHeap();
                    HeapFree(v1172, 0, v1171);
                  }
                  if ( v1051 >= 0 )
                  {
                    if ( LODWORD(v1728[0]) )
                    {
                      v1173 = v1728[1];
                      if ( v1728[1] )
                      {
                        v1707 = (int *)v1728[1];
                        if ( (int)RtlULongLongAdd((unsigned __int64)v1728[1], 4LL, (unsigned __int64 *)&v1707) >= 0 )
                        {
                          v1176 = v1707;
                          if ( !*v1173 )
                            v1176 = 0LL;
                          v1707 = v1176;
                          if ( *v1173 == (_DWORD)v1175 && *v1176 >= 0 && v1173 && LODWORD(v1728[0]) > 1 )
                          {
                            v1708[0] = v1174;
                            v1177 = 0;
                            while ( (int)RtlULongLongAdd(v1174, v1175, v1708) >= 0
                                 && (int)RtlULongLongAdd(v1708[0], v1178, v1708) >= 0 )
                            {
                              v1174 = v1708[0];
                              if ( ++v1177 )
                              {
                                RtlULongLongAdd(v1708[0], v1175, v1708);
                                goto LABEL_1565;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_1565;
                }
                v1053 = 0;
                v1054 = 0LL;
                v1337 = 0;
                if ( v1052 )
                {
                  do
                    v1053 ^= v1011[v1054++];
                  while ( v1054 < v1052 );
                  v1337 = v1053;
                }
                v1055 = v1542;
                v1582 = v1542;
                v1056 = -1;
                v1057 = v1367;
                v1783 = 0xC81ECB17B1B54A58uLL;
                LODWORD(v1579) = 0;
                v1058 = v1011;
                LODWORD(v1578) = 0;
                v1059 = 0;
                v1060 = v1367 & 7;
                if ( (v1367 & 7) != 0 )
                {
                  v1061 = 0;
                  v1062 = 0;
                  v1368 = 0;
                  v1063 = 56;
                  do
                  {
                    v1064 = *v1058++;
                    if ( v1061 >= 4 )
                      v1062 |= v1064 << v1063;
                    else
                      v1059 |= v1064 << (v1063 - 32);
                    v1063 -= 8;
                    v1061 = v1368 + 1;
                    LODWORD(v1579) = v1062;
                    LODWORD(v1578) = v1059;
                    v1368 = v1061;
                  }
                  while ( (int)v1061 < v1060 );
                  v92 = (int)v1586;
                  v1059 ^= 0xB17A307A;
                  v1065 = v1582;
                  v1066 = v1062 ^ 0x42F6B18D;
                  v1490 = (SIZE_T)v1058;
                  v1067 = v1059;
                  v1516 = (LPCWSTR)v104;
                  v1068 = v1066;
                  v1384 = (size_t)v991;
                  v1496 = v1011;
                  v1069 = 0;
                  do
                  {
                    v1369 = v1065 + 1;
                    if ( v1069 >= 4 )
                    {
                      v1068 = __ROL4__(v1068, 8);
                      v1070 = v1068;
                    }
                    else
                    {
                      v1067 = __ROL4__(v1067, 8);
                      v1070 = v1067;
                    }
                    *v1065 = v1070;
                    ++v1069;
                    ++v1065;
                  }
                  while ( v1069 < v1060 );
                  v1053 = v1337;
                  v1055 = v1369;
                  v1058 = (unsigned __int8 *)v1490;
                  v1057 = v1577;
                  v1582 = v1369;
                  if ( (unsigned int)v1060 <= 4 )
                  {
                    v1056 = 0;
                    if ( (unsigned int)v1060 >= 4 )
                      goto LABEL_1303;
                    v1059 = v1059 >> (8 * (4 - v1060)) << (8 * (4 - v1060));
                  }
                  else
                  {
                    v1056 = v1066 >> (8 * (8 - v1060)) << (8 * (8 - v1060));
                  }
                  v1055 = (char *)v1582;
                }
LABEL_1303:
                if ( v1057 >> 3 )
                {
                  v1071 = v1055 + 7;
                  v1072 = WORD2(v1783);
                  v1073 = v1058 + 2;
                  v1074 = v1057 >> 3;
                  v1075 = (int)v1579;
                  v1370 = WORD1(v1783);
                  v1076 = HIDWORD(v1783) ^ 0xB1B54A58;
                  do
                  {
                    v1077 = *(v1073 - 1) | (*(v1073 - 2) << 8);
                    v1078 = v1073[2] << 8;
                    v1079 = *v1073;
                    v1073 += 8;
                    v1080 = *(v1073 - 7) | ((v1079 | (v1077 << 8)) << 8);
                    v1081 = *(v1073 - 3) | ((*(v1073 - 4) | ((*(v1073 - 5) | v1078) << 8)) << 8);
                    v1082 = v1081 ^ v1056;
                    v1083 = v1059 ^ v1080 ^ (v1082 - 19032);
                    v1084 = (__ROR4__(v1083 ^ HIDWORD(v1783), 7) + WORD1(v1783) * __ROR4__(v1083, 15)) ^ v1082;
                    v1085 = (v1072 * __ROR4__(v1084 - 1313519016, 9) - __ROR4__(v1084, 10)) ^ v1083 ^ HIDWORD(v1783);
                    v1086 = (__ROL4__(v1085, 5) + HIWORD(v1783) * __ROL4__(v1085 ^ v1072, 4)) ^ v1084;
                    v1087 = (HIDWORD(v1783) - (v1086 ^ 0xB1B54A58)) ^ v1085;
                    v1088 = (WORD1(v1783) * (v1087 - 19032) - (v1087 >> 6)) ^ v1086;
                    v1089 = (19032 * (v1072 ^ __ROR4__(v1088, 15))) ^ v1087;
                    v1090 = (v1072 * (HIWORD(v1783) + __ROR4__(~v1089, 3))) ^ v1088;
                    v1091 = (v1090 - 19032 - HIDWORD(v1783)) ^ v1089;
                    v1092 = (v1370 * (v1091 ^ HIWORD(v1783))) ^ __ROR4__(v1091, 10) ^ v1090;
                    v1093 = __ROR4__(v1092, 3) ^ (v1072 * __ROL4__(v1092 ^ 0x4A58, 6)) ^ v1091;
                    v1094 = (19032 * (__ROR4__(v1093, 15) - HIWORD(v1783))) ^ v1092;
                    v1095 = (v1094 >> 15) ^ (19032 * __ROL4__(v1094 - v1072, 3)) ^ (v1094 >> 1) ^ (19032
                                                                                                 * (v1094 ^ HIWORD(v1783))) ^ v1093;
                    v1096 = (WORD1(v1783) * (v1095 - v1072) - (v1095 >> 13)) ^ v1094;
                    v1097 = __ROR4__(v1096, 11) ^ (v1072 * __ROR4__(-1313519016 - v1096, 9)) ^ v1095;
                    v1098 = (v1097 - HIWORD(v1783) + 1313519016) ^ v1096;
                    v1099 = (19032 * (v1098 ^ WORD1(v1783)) - __ROR4__(v1098, 7)) ^ v1097;
                    v1100 = (WORD1(v1783) * __ROL4__(v1099 ^ HIWORD(v1783), 4) - __ROR4__(v1099, 16)) ^ v1098;
                    v1101 = (__ROR4__(v1100, 4) + v1072 * __ROR4__(-1313519016 - v1100, 10)) ^ v1099;
                    v1102 = __ROR4__(v1101, 9) ^ (HIWORD(v1783) * __ROR4__(v1101 + 1313519016, 4)) ^ v1100;
                    v1103 = (19032 * __ROL4__(v1102 ^ HIDWORD(v1783), 8) - __ROL4__(v1102, 2)) ^ v1101;
                    v1104 = (WORD1(v1783) * __ROR4__(HIDWORD(v1783) - v1103, 11) - __ROR4__(v1103, 12)) ^ v1102;
                    v1105 = (v1104 >> 8) ^ (v1072 * (v1104 ^ WORD1(v1783))) ^ v1103;
                    v1106 = v1105 ^ v1076 ^ v1104;
                    v1107 = v1578 ^ v1105;
                    *(v1071 - 4) = v1107;
                    v1108 = v1075 ^ v1106;
                    *v1071 = v1108;
                    v1075 = v1081;
                    v1109 = __ROR4__(v1107, 8);
                    *(v1071 - 5) = v1109;
                    v1071 += 8;
                    v1110 = __ROR4__(v1108, 8);
                    *(v1071 - 9) = v1110;
                    v1111 = __ROR4__(v1109, 8);
                    *(v1071 - 14) = v1111;
                    v1112 = __ROR4__(v1110, 8);
                    *(v1071 - 10) = v1112;
                    v1113 = __ROR4__(v1111, 8);
                    v1114 = __ROR4__(v1112, 8);
                    *(v1071 - 15) = v1113;
                    *(v1071 - 11) = v1114;
                    v1056 = __ROR4__(v1114, 8);
                    v1059 = __ROR4__(v1113, 8);
                    LODWORD(v1578) = v1080;
                    --v1074;
                  }
                  while ( v1074 );
                  v1053 = v1337;
                  v92 = (int)v1586;
                  v991 = (void *)v1384;
                  v104 = (__int64)v1516;
                  v1011 = v1496;
                  v1057 = v1577;
                }
                *(_QWORD *)&v1542[v1057] = v1053;
                v1698[4] = (void *)160;
                v1115 = GetProcessHeap();
                v1116 = (unsigned int *)HeapAlloc(v1115, 8u, 0x30uLL);
                if ( v1116 )
                {
                  *v1116 = v1424;
                  v1118 = GetProcessHeap();
                  v1119 = HeapAlloc(v1118, 8u, v1424);
                  if ( !v1119 )
                    goto LABEL_1312;
                  *((_QWORD *)v1116 + 1) = v1119;
                  memcpy_0(v1119, v1542, v1424);
                  v1116[4] = 160;
                  v1120 = GetProcessHeap();
                  v1121 = HeapAlloc(v1120, 8u, 0xA0uLL);
                  if ( !v1121 )
                    goto LABEL_1312;
                  *((_QWORD *)v1116 + 3) = v1121;
                  *v1121 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                  v1121[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                  v1121[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                  v1121[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                  v1121[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                  v1121[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                  v1121[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                  v1121[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                  v1121[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                  v1121[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                  v1116[8] = 8;
                  v1122 = GetProcessHeap();
                  v1123 = HeapAlloc(v1122, 8u, 8uLL);
                  v1117 = 0;
                  if ( v1123 )
                  {
                    *((_QWORD *)v1116 + 5) = v1123;
                    *v1123 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                    v1562 = 0LL;
                  }
                  else
                  {
LABEL_1312:
                    v1117 = -1073741801;
                    v1385 = (void *)*((_QWORD *)v1116 + 1);
                    if ( v1385 )
                    {
                      v1124 = GetProcessHeap();
                      HeapFree(v1124, 0, v1385);
                      *((_QWORD *)v1116 + 1) = 0LL;
                    }
                    v1386 = (void *)*((_QWORD *)v1116 + 3);
                    if ( v1386 )
                    {
                      v1125 = GetProcessHeap();
                      HeapFree(v1125, 0, v1386);
                      *((_QWORD *)v1116 + 3) = 0LL;
                    }
                    v1387 = (void *)*((_QWORD *)v1116 + 5);
                    if ( v1387 )
                    {
                      v1126 = GetProcessHeap();
                      HeapFree(v1126, 0, v1387);
                      *((_QWORD *)v1116 + 5) = 0LL;
                    }
                    v1127 = GetProcessHeap();
                    HeapFree(v1127, 0, v1116);
                    v1116 = 0LL;
                  }
                }
                else
                {
                  v1117 = -1073741801;
                  v1116 = 0LL;
                }
                Srcf = v1116;
                v1128 = GetProcessHeap();
                HeapFree(v1128, 0, v1542);
                v1129 = v1562;
                if ( v1562 )
                {
                  v1388 = (void *)v1562[1];
                  if ( v1388 )
                  {
                    v1130 = GetProcessHeap();
                    HeapFree(v1130, 0, v1388);
                    v1129 = v1562;
                    v1562[1] = 0LL;
                  }
                  v1389 = (void *)v1129[3];
                  if ( v1389 )
                  {
                    v1131 = GetProcessHeap();
                    HeapFree(v1131, 0, v1389);
                    v1129 = v1562;
                    v1562[3] = 0LL;
                  }
                  v1390 = (void *)v1129[5];
                  if ( v1390 )
                  {
                    v1132 = GetProcessHeap();
                    HeapFree(v1132, 0, v1390);
                    v1562[5] = 0LL;
                  }
                  v1133 = GetProcessHeap();
                  HeapFree(v1133, 0, v1562);
                  Srcf = v1116;
                }
                v1051 = v1117 | 0x10000000;
                if ( v1051 < 0 )
                  goto LABEL_1349;
                v1134 = *v1116;
                LODWORD(v1635) = 4;
                v1135 = RtlUIntAdd(4u, v1134, (unsigned int *)&v1635);
                if ( v1135 >= 0 )
                {
                  v1135 = RtlUIntAdd(v1635, v1136, (unsigned int *)&v1635);
                  if ( v1135 >= 0 )
                  {
                    v1135 = RtlUIntAdd(v1635, v1116[4], (unsigned int *)&v1635);
                    if ( v1135 >= 0 )
                    {
                      v1135 = RtlUIntAdd(v1635, v1137, (unsigned int *)&v1635);
                      if ( v1135 >= 0 )
                      {
                        v1135 = RtlUIntAdd(v1635, v1116[8], (unsigned int *)&v1635);
                        if ( v1135 >= 0 )
                        {
                          v1371 = v1635;
                          v1138 = v1635;
                          v1139 = GetProcessHeap();
                          v1140 = HeapAlloc(v1139, 8u, v1138);
                          v1579 = v1140;
                          if ( !v1140 )
                            goto LABEL_1414;
                          v1699 = v1140;
                          *v1140 = *v1116;
                          v1141 = RtlULongLongAdd((unsigned __int64)v1140, 4LL, (unsigned __int64 *)&v1699);
                          v1578 = v1142;
                          v1135 = v1141;
                          Srcf = v1116;
                          if ( v1141 < 0 )
                            goto LABEL_1344;
                          memcpy_0(v1699, *((const void **)v1116 + 1), *v1116);
                          v1135 = RtlULongLongAdd((unsigned __int64)v1699, *v1116, (unsigned __int64 *)&v1699);
                          v1578 = (SIZE_T)v1579;
                          Srcf = v1116;
                          if ( v1135 < 0 )
                            goto LABEL_1344;
                          v1143 = v1699;
                          *(_DWORD *)v1699 = v1116[4];
                          v1144 = RtlULongLongAdd((unsigned __int64)v1143, 4LL, (unsigned __int64 *)&v1699);
                          v1578 = v1145;
                          v1135 = v1144;
                          Srcf = v1116;
                          if ( v1144 < 0 )
                            goto LABEL_1344;
                          memcpy_0(v1699, *((const void **)v1116 + 3), v1116[4]);
                          v1135 = RtlULongLongAdd((unsigned __int64)v1699, v1116[4], (unsigned __int64 *)&v1699);
                          v1578 = (SIZE_T)v1579;
                          Srcf = v1116;
                          if ( v1135 < 0 )
                            goto LABEL_1344;
                          v1146 = v1699;
                          *(_DWORD *)v1699 = v1116[8];
                          v1147 = RtlULongLongAdd((unsigned __int64)v1146, 4LL, (unsigned __int64 *)&v1699);
                          v1578 = v1148;
                          v1135 = v1147;
                          Srcf = v1116;
                          if ( v1147 < 0
                            || (memcpy_0(v1699, *((const void **)v1116 + 5), v1116[8]),
                                v1135 = RtlULongLongAdd((unsigned __int64)v1699, v1116[8], (unsigned __int64 *)&v1699),
                                Srcf = v1116,
                                v1578 = (SIZE_T)v1579,
                                v1135 < 0) )
                          {
LABEL_1344:
                            v1149 = GetProcessHeap();
                            HeapFree(v1149, 0, (LPVOID)v1578);
                          }
                          else
                          {
                            v1411 = v1579;
                            v1462 = v1371;
                            Srcf = v1116;
                          }
                        }
                      }
                    }
                  }
                }
                v1051 = v1135 | 0x10000000;
                if ( v1051 < 0 )
                  goto LABEL_1349;
                v1636 = 8;
                v1150 = RtlUIntAdd(8u, v1351, &v1636);
                v1051 = v1150 | 0x10000000;
                if ( v1150 < 0 )
                  goto LABEL_1349;
                v1153 = (v1636 + 7) & 0xFFFFFFF8;
                if ( v1153 < v1636 )
                {
                  v1051 = -1073741675;
                  goto LABEL_1349;
                }
                v1637 = (v1636 + 7) & 0xFFFFFFF8;
                v1411 = v1152;
                Srcf = v1116;
                v1051 = RtlUIntAdd(v1153, v1151, &v1637);
                if ( v1051 < 0 )
                  goto LABEL_1349;
                Srcf = v1116;
                v1411 = v1179;
                if ( !v1725 )
                  goto LABEL_1391;
                Srcf = v1116;
                v1411 = v1179;
                if ( (unsigned int)v1724 <= 1 )
                  goto LABEL_1391;
                v1180 = v1725;
                v1700 = v1725;
                do
                {
                  v1051 = RtlULongLongAdd((unsigned __int64)v1180, 4LL, (unsigned __int64 *)&v1700);
                  if ( v1051 < 0 )
                    goto LABEL_1349;
                  v1051 = RtlULongLongAdd((unsigned __int64)v1700, v1181, (unsigned __int64 *)&v1700);
                  if ( v1051 < 0 )
                    goto LABEL_1349;
                  v1180 = v1700;
                }
                while ( v1182 == -1 );
                v1352 = *v1700;
                v1051 = RtlULongLongAdd((unsigned __int64)v1700, 4LL, (unsigned __int64 *)&v1700);
                if ( v1051 < 0 )
                  goto LABEL_1349;
                if ( !v1725 || (unsigned int)v1724 <= 2 )
                {
LABEL_1391:
                  v1051 = -1073741811;
                  goto LABEL_1349;
                }
                v1183 = v1725;
                v1701 = v1725;
                do
                {
                  v1051 = RtlULongLongAdd((unsigned __int64)v1183, 4LL, (unsigned __int64 *)&v1701);
                  if ( v1051 < 0 )
                    goto LABEL_1349;
                  v1051 = RtlULongLongAdd((unsigned __int64)v1701, v1184, (unsigned __int64 *)&v1701);
                  if ( v1051 < 0 )
                    goto LABEL_1349;
                  v1183 = v1701;
                }
                while ( (unsigned int)(v1185 + 1) < 2 );
                v1051 = RtlULongLongAdd((unsigned __int64)v1701, 4LL, (unsigned __int64 *)&v1701);
                if ( v1051 < 0
                  || (LODWORD(v1638) = 4, v1051 = RtlUIntAdd(4u, v1637, (unsigned int *)&v1638), v1051 < 0)
                  || (v1051 = RtlUIntAdd(v1638, v1186, (unsigned int *)&v1638), v1051 < 0)
                  || (v1051 = RtlUIntAdd(v1638, v1352, (unsigned int *)&v1638), v1051 < 0)
                  || (v1051 = RtlUIntAdd(v1638, 4, (unsigned int *)&v1638), v1051 < 0)
                  || (v1051 = RtlUIntAdd(v1638, v1187, (unsigned int *)&v1638), v1051 < 0) )
                {
LABEL_1349:
                  if ( !v1011 )
                    goto LABEL_1351;
                  goto LABEL_1350;
                }
                v1452 = v1638;
                if ( (unsigned int)v1638 > 0x400000 )
                {
                  v1051 = -2147418113;
                  goto LABEL_1349;
                }
                v1391 = v1188;
                v1577 = (unsigned __int64)v1116;
                v1189 = v1638;
                v1190 = GetProcessHeap();
                v1191 = (wchar_t *)HeapAlloc(v1190, 8u, v1189);
                if ( !v1191 )
                {
LABEL_1414:
                  v1051 = -805306345;
                  goto LABEL_1349;
                }
                v1480 = v1191;
                if ( !v1391 )
                {
                  v1051 = -2147024809;
                  v1480 = v1191;
                  Srcf = (_QWORD *)v1577;
LABEL_1431:
                  v1411 = (void *)v1391;
                  goto LABEL_1349;
                }
                v1735 = v1462;
                v1736 = v1452;
                v1734[0] = v1391;
                v1734[1] = v1191;
                v1737 = 0;
                if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                  && (v1194 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                {
                  v1195 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1194)(134LL, v1734);
                  v1193 = v1452;
                  v1051 = v1195 | 0x10000000;
                  if ( v1195 >= 0 )
                  {
                    v1193 = v1736;
                    v1196 = v1011;
                    v1197 = v991;
                    v1198 = v104;
                    v1199 = v1577;
LABEL_1428:
                    v1579 = 0LL;
                    v991 = v1197;
                    v1011 = v1196;
                    if ( v1193 < 4 )
                    {
                      v1051 = -805306306;
LABEL_1430:
                      Srcf = (_QWORD *)v1199;
                      goto LABEL_1431;
                    }
                    v104 = v1198;
                    v1200 = *(unsigned int *)v1480;
                    v1353 = *(_DWORD *)v1480;
                    v1563 = (char *)(v1480 + 2);
                    if ( v1480 + 2 < v1480 )
                    {
                      v1051 = -805306219;
                      goto LABEL_1430;
                    }
                    v1201 = (void *)v1391;
                    v1411 = (void *)v1391;
                    v1202 = v1577;
                    Srcf = (_QWORD *)v1577;
                    if ( v1193 - 4 < (unsigned int)v1200 )
                    {
                      v1051 = -805306306;
LABEL_1435:
                      Srcf = (_QWORD *)v1577;
LABEL_1436:
                      v1411 = (void *)v1391;
                      goto LABEL_1349;
                    }
                    v1578 = *(unsigned int *)v1480;
                    v1582 = &v1563[v1200];
                    if ( &v1563[v1200] < v1563 )
                      goto LABEL_1562;
                    v1203 = v1200 + 4;
                    if ( v1203 < 4 )
                      goto LABEL_1562;
                    if ( v1193 - v1203 < 4 )
                      goto LABEL_1440;
                    v1411 = (void *)v1391;
                    Srcf = (_QWORD *)v1577;
                    v1204 = *(unsigned int *)v1582;
                    v1205 = (char *)v1582 + 4;
                    v1372 = *(_DWORD *)v1582;
                    if ( (char *)v1582 + 4 < v1582 )
                      goto LABEL_1561;
                    v991 = v1197;
                    v1463 = v1203 + 4;
                    if ( v1203 + 4 < v1203 )
                    {
                      v1051 = -805306219;
                      Srcf = (_QWORD *)v1577;
                      goto LABEL_1436;
                    }
                    if ( v1193 - (v1203 + 4) < (unsigned int)v1204 )
                    {
LABEL_1440:
                      v1051 = -805306306;
                      goto LABEL_1349;
                    }
                    v1206 = (unsigned int *)&v1205[v1204];
                    v1543 = *(unsigned int *)v1582;
                    v1411 = (void *)v1391;
                    Srcf = (_QWORD *)v1577;
                    if ( &v1205[v1204] < v1205 )
                    {
LABEL_1561:
                      v1051 = -805306219;
                      goto LABEL_1349;
                    }
                    v1207 = v1463 + v1204;
                    if ( v1463 + (unsigned int)v1204 < v1463 )
                    {
LABEL_1562:
                      v1051 = -805306219;
                      goto LABEL_1435;
                    }
                    if ( v1193 - v1207 < 4 )
                      goto LABEL_1440;
                    v1208 = *v1206;
                    v1453 = *v1206;
                    v1510 = v1206 + 1;
                    Srcf = (_QWORD *)v1577;
                    if ( v1206 + 1 < v1206 )
                    {
                      v1051 = -805306219;
                      goto LABEL_1436;
                    }
                    v1411 = (void *)v1391;
                    v1464 = v1207 + 4;
                    if ( v1207 + 4 < v1207 )
                    {
                      v1051 = -805306219;
                      goto LABEL_1453;
                    }
                    v1577 = v1391;
                    if ( v1193 - v1464 < v1208 )
                      goto LABEL_1440;
                    v1411 = (void *)v1391;
                    Srcf = (_QWORD *)v1202;
                    v1465 = v1464 + v1208;
                    if ( v1465 < v1207 + 4 )
                    {
                      v1051 = -805306219;
                      goto LABEL_1349;
                    }
                    v1209 = v1480;
                    v1497 = v1011;
                    v1392 = (size_t)v991;
                    v1517 = (LPCWSTR)v104;
                    if ( v1193 != v1465 )
                    {
LABEL_1452:
                      v1051 = -805306306;
                      v1480 = v1209;
LABEL_1453:
                      Srcf = (_QWORD *)v1202;
                      v1411 = v1201;
                      goto LABEL_1349;
                    }
                    if ( v1208 + (_DWORD)v1204 + v1353 + 12LL != v1193 )
                    {
                      v1209 = v1480;
                      goto LABEL_1452;
                    }
                    v1210 = GetProcessHeap();
                    v1211 = HeapAlloc(v1210, 8u, 0x30uLL);
                    v1466 = v1211;
                    if ( !v1211 )
                    {
                      v1051 = -805306345;
                      v1411 = (void *)v1577;
                      Srcf = (_QWORD *)v1202;
                      goto LABEL_1349;
                    }
                    v1212 = 0;
                    if ( v1480 == (wchar_t *)-4LL )
                    {
                      v1215 = v1510;
                      *v1211 = 0;
                      *((_QWORD *)v1211 + 1) = 0LL;
                    }
                    else
                    {
                      *v1211 = v1353;
                      v1213 = GetProcessHeap();
                      v1214 = HeapAlloc(v1213, 8u, v1578);
                      if ( !v1214 )
                        goto LABEL_1468;
                      v1466[1] = v1214;
                      memcpy_0(v1214, v1563, v1578);
                      v1211 = v1466;
                      v1215 = v1510;
                    }
                    v1497 = v1011;
                    v1392 = (size_t)v991;
                    v1517 = (LPCWSTR)v104;
                    Srcf = (_QWORD *)v1202;
                    v1466 = v1211;
                    if ( v1582 == (LPVOID)-4LL )
                    {
                      v1219 = v1411;
                      v1218 = (SIZE_T)v1480;
                      v1211[4] = 0;
                      *((_QWORD *)v1211 + 3) = 0LL;
LABEL_1466:
                      if ( v1215 )
                      {
                        v1211[8] = v1453;
                        v1220 = GetProcessHeap();
                        v1221 = HeapAlloc(v1220, 8u, v1453);
                        if ( !v1221 )
                          goto LABEL_1468;
                        v1466[5] = v1221;
                        v1212 = 0;
                        memcpy_0(v1221, v1510, v1453);
                        v1218 = (SIZE_T)v1480;
                        v1219 = v1411;
                        v1211 = v1466;
                        Srcf = (_QWORD *)v1202;
                        v1517 = (LPCWSTR)v104;
                        v1392 = (size_t)v991;
                        v1497 = v1011;
                      }
                      else
                      {
                        v1211[8] = 0;
                        *((_QWORD *)v1211 + 5) = 0LL;
                      }
                      v1579 = v1211;
                      goto LABEL_1478;
                    }
                    v1211[4] = v1372;
                    v1216 = GetProcessHeap();
                    v1217 = HeapAlloc(v1216, 8u, v1543);
                    if ( v1217 )
                    {
                      v1466[3] = v1217;
                      v1212 = 0;
                      memcpy_0(v1217, (char *)v1582 + 4, v1543);
                      v1211 = v1466;
                      v1215 = v1510;
                      v1218 = (SIZE_T)v1480;
                      v1219 = v1411;
                      Srcf = (_QWORD *)v1202;
                      v1517 = (LPCWSTR)v104;
                      v1392 = (size_t)v991;
                      v1497 = v1011;
                      goto LABEL_1466;
                    }
LABEL_1468:
                    v1212 = -1073741801;
                    v1222 = v1466;
                    v1441 = (void *)v1466[1];
                    if ( v1441 )
                    {
                      v1223 = GetProcessHeap();
                      HeapFree(v1223, 0, v1441);
                      v1222 = v1466;
                      v1466[1] = 0LL;
                    }
                    v1442 = (void *)v1222[3];
                    if ( v1442 )
                    {
                      v1224 = GetProcessHeap();
                      HeapFree(v1224, 0, v1442);
                      v1222 = v1466;
                      v1466[3] = 0LL;
                    }
                    v1443 = (void *)v1222[5];
                    if ( v1443 )
                    {
                      v1225 = GetProcessHeap();
                      HeapFree(v1225, 0, v1443);
                      v1466[5] = 0LL;
                    }
                    v1226 = GetProcessHeap();
                    HeapFree(v1226, 0, v1466);
                    v1219 = v1411;
                    v1218 = (SIZE_T)v1480;
                    v1211 = v1579;
LABEL_1478:
                    v1564 = (SIZE_T)v1219;
                    v1454 = v1202;
                    v1578 = v1218;
                    v1227 = 0LL;
                    v1354 = v1212;
                    if ( v1212 < 0 )
                    {
                      v1440 = 0LL;
                      v1480 = (wchar_t *)v1218;
                      Srcf = (_QWORD *)v1202;
                      v1517 = (LPCWSTR)v104;
                      v1392 = (size_t)v991;
                      v1497 = v1011;
                      v1411 = v1219;
                      if ( v1211 )
                      {
                        v1228 = v1579;
                        v1229 = (void *)*((_QWORD *)v1579 + 1);
                        if ( v1229 )
                        {
                          v1230 = GetProcessHeap();
                          HeapFree(v1230, 0, v1229);
                          v1228[1] = 0LL;
                        }
                        v1231 = (void *)v1228[3];
                        if ( v1231 )
                        {
                          v1232 = GetProcessHeap();
                          HeapFree(v1232, 0, v1231);
                          v1228[3] = 0LL;
                        }
                        v1233 = (void *)v1228[5];
                        if ( v1233 )
                        {
                          v1234 = GetProcessHeap();
                          HeapFree(v1234, 0, v1233);
                          v1228[5] = 0LL;
                        }
                        v1235 = GetProcessHeap();
                        HeapFree(v1235, 0, v1228);
                        v1227 = 0LL;
                        v1202 = v1454;
                        v1212 = v1354;
                        v1480 = (wchar_t *)v1578;
                        v1440 = 0LL;
                        v1411 = (void *)v1564;
                        Srcf = (_QWORD *)v1454;
                        v1517 = (LPCWSTR)v104;
                        v1392 = (size_t)v991;
                        v1497 = v1011;
                      }
                    }
                    else
                    {
                      v1227 = v1211;
                      v1440 = v1211;
                    }
                    v1051 = v1212 | 0x10000000;
                    if ( v1051 < 0 )
                      goto LABEL_1349;
                    if ( !v1227 || (v1565 = *((_QWORD *)v1227 + 1)) == 0 || !*v1227 )
                    {
                      v1051 = -805306355;
                      goto LABEL_1349;
                    }
                    v1577 = *v1227 - 8LL;
                    v1236 = v1577;
                    v1237 = (WCHAR *)MemoryAlloc(v1577);
                    v1238 = 0;
                    lpModuleName = v1237;
                    v1239 = v1237;
                    if ( !v1237 )
                    {
LABEL_1519:
                      v1051 = -805306367;
                      lpModuleName = 0LL;
                      goto LABEL_1349;
                    }
                    v1240 = (unsigned __int8 *)v1565;
                    v1241 = 0;
                    v1242 = v1440;
                    v1579 = v1237;
                    v1578 = v1236 & 7;
                    v1784 = 0x7F1137FAB69605ELL;
                    if ( (v1236 & 7) != 0 )
                    {
                      v1355 = 0;
                      v1243 = 0;
                      v1244 = 0;
                      v1245 = (unsigned __int8 *)v1565;
                      do
                      {
                        v1246 = *v1245++;
                        if ( (unsigned int)v1243 >= 4 )
                        {
                          v1247 = v1355;
                          v1244 |= v1246 << v1589;
                        }
                        else
                        {
                          v1247 = (v1246 << (v1589 - 32)) | v1355;
                          v1355 = v1247;
                        }
                        v1589 -= 8;
                        ++v1243;
                      }
                      while ( v1243 < (int)v1578 );
                      dwBytes_4 = v1244;
                      v1248 = v1244;
                      v1373 = v1247 ^ 0x92F65A5;
                      v92 = (int)v1586;
                      v1249 = v1248 ^ 0x699A899C;
                      v1250 = v1247 ^ 0x92F65A5;
                      v1239 = (WCHAR *)lpModuleName;
                      v1251 = v1249;
                      Srcf = (_QWORD *)v1202;
                      v1252 = (WCHAR *)lpModuleName;
                      v1253 = 0;
                      v1254 = v1578;
                      v1517 = (LPCWSTR)v104;
                      v1392 = (size_t)v991;
                      v1497 = v1011;
                      do
                      {
                        v1467 = (char *)v1252 + 1;
                        if ( v1253 >= 4 )
                        {
                          v1251 = __ROL4__(v1251, 8);
                          v1255 = v1251;
                        }
                        else
                        {
                          v1250 = __ROL4__(v1250, 8);
                          v1255 = v1250;
                        }
                        *(_BYTE *)v1252 = v1255;
                        ++v1253;
                        v1252 = (WCHAR *)((char *)v1252 + 1);
                      }
                      while ( v1253 < (int)v1254 );
                      v1241 = 0;
                      v1202 = (unsigned __int64)Srcf;
                      v1238 = v1373;
                      v1579 = v1467;
                      v1242 = v1440;
                      if ( v1254 <= 4 )
                      {
                        v1374 = 0;
                        if ( v1254 < 4 )
                          v1238 = v1238 >> (8 * (4 - v1254)) << (8 * (4 - v1254));
                      }
                      else
                      {
                        v1374 = v1249 >> (8 * (8 - v1254)) << (8 * (8 - v1254));
                      }
                      v1240 = v1245;
                    }
                    else
                    {
                      v1355 = 0;
                      v1374 = 0;
                    }
                    v1256 = v1577;
                    if ( v1577 >> 3 )
                    {
                      v1257 = v1240 + 2;
                      v1258 = HIDWORD(v1784);
                      v1259 = (char *)v1579 + 7;
                      v1260 = v1374;
                      v1261 = v1355;
                      v1262 = v1577 >> 3;
                      v1263 = WORD2(v1784);
                      do
                      {
                        v1264 = *(v1257 - 1) | (*(v1257 - 2) << 8);
                        v1265 = v1257[2] << 8;
                        v1266 = *v1257;
                        v1257 += 8;
                        v1267 = *(v1257 - 7) | ((v1266 | (v1264 << 8)) << 8);
                        v1268 = v1267 ^ v1238;
                        v1269 = *(v1257 - 3) | ((*(v1257 - 4) | ((*(v1257 - 5) | v1265) << 8)) << 8);
                        v1270 = v1258 ^ v1268 ^ v1269 ^ v1260 ^ 0xAB69605E;
                        v1271 = (__ROL4__(v1270, 10) + v1263 * __ROL4__(v1270 + 1419157410, 5)) ^ v1268;
                        v1272 = (WORD1(v1784) * __ROR4__(v1271 + v1258, 9) - __ROL4__(v1271, 2)) ^ v1270;
                        v1273 = (24670 * (v1272 - v1263) - (v1272 >> 13)) ^ v1271;
                        v1274 = (HIWORD(v1784) * __ROL4__(v1273 ^ WORD1(v1784), 6) - __ROL4__(v1273, 2)) ^ v1272;
                        v1275 = (v1258 - (v1274 ^ 0xAB69605E)) ^ v1273;
                        v1276 = (WORD1(v1784) * (v1275 ^ v1263)) ^ __ROR4__(v1275, 6) ^ v1274;
                        v1277 = (__ROL4__(v1276, 2) + 24670 * __ROR4__(v1276 + v1258, 15)) ^ v1275;
                        v1278 = (HIWORD(v1784) * __ROR4__(v1277 + 1419157410, 14) - __ROL4__(v1277, 8)) ^ v1276;
                        v1279 = __ROR4__(v1278, 10) ^ (v1263 * __ROR4__(v1278 ^ 0xAB69605E, 12)) ^ v1277;
                        v1280 = (v1279 >> 10) ^ (WORD1(v1784) * (v1279 ^ HIWORD(v1784))) ^ v1278;
                        v1281 = (HIWORD(v1784) * (__ROR4__(~v1280, 5) + 24670)) ^ v1279;
                        v1282 = v1280 ^ (v1281 - HIWORD(v1784)) ^ 0xAB69605E;
                        v1283 = ((v1282 >> 2) + v1263 * __ROL4__(HIWORD(v1784) ^ v1282, 2)) ^ v1281;
                        v1284 = (__ROL4__(v1283, 7) + WORD1(v1784) * __ROR4__(v1283 - v1258, 6)) ^ v1282;
                        v1285 = (24670 * (v1263 ^ v1284) + __ROR4__(v1284, 9)) ^ v1283;
                        v1286 = (__ROL4__(v1285, 7) + HIWORD(v1784) * __ROL4__(WORD1(v1784) ^ v1285, 5)) ^ v1284;
                        v1287 = v1258 ^ v1286 ^ v1285 ^ 0xAB69605E;
                        v1288 = (v1263 * (__ROR4__(v1287, 3) - WORD1(v1784))) ^ v1286;
                        v1289 = (24670 * __ROR4__(v1288 - v1258, 1) - __ROR4__(v1288, 6)) ^ v1287;
                        v1290 = (__ROL4__(v1289, 14) + HIWORD(v1784) * __ROL4__(v1289 - 1419157410, 3)) ^ v1288;
                        v1291 = (v1263 * __ROL4__(v1290 - 1419157410, 15) - __ROR4__(v1290, 14)) ^ v1289;
                        v1292 = (v1291 >> 3) ^ (WORD1(v1784) * (v1291 ^ 0x605E)) ^ v1290;
                        v1293 = dwBytes_4 ^ v1292;
                        dwBytes_4 = v1269;
                        v1294 = v1261 ^ __ROL4__(v1292, 2) ^ (24670 * __ROL4__(v1258 ^ v1292, 4));
                        v1261 = v1267;
                        v1295 = v1294 ^ v1291;
                        *(v1259 - 4) = v1295;
                        *v1259 = v1293;
                        v1259 += 8;
                        v1296 = __ROR4__(v1295, 8);
                        *(v1259 - 13) = v1296;
                        v1297 = __ROR4__(v1293, 8);
                        *(v1259 - 9) = v1297;
                        v1298 = __ROR4__(v1296, 8);
                        *(v1259 - 14) = v1298;
                        v1299 = __ROR4__(v1297, 8);
                        *(v1259 - 10) = v1299;
                        v1300 = __ROR4__(v1298, 8);
                        v1301 = __ROR4__(v1299, 8);
                        *(v1259 - 15) = v1300;
                        *(v1259 - 11) = v1301;
                        v1260 = __ROR4__(v1301, 8);
                        v1238 = __ROR4__(v1300, 8);
                        --v1262;
                      }
                      while ( v1262 );
                      v1241 = 0;
                      v92 = (int)v1586;
                      v991 = (void *)v1392;
                      v104 = (__int64)v1517;
                      v1011 = v1497;
                      v1202 = (unsigned __int64)Srcf;
                      v1242 = v1440;
                      v1239 = (WCHAR *)lpModuleName;
                      v1256 = v1577;
                    }
                    for ( m = 0LL; m < v1256; ++m )
                      v1241 ^= *((_BYTE *)v1239 + m);
                    v1303 = v1242;
                    v1579 = v1480;
                    Srcf = (_QWORD *)v1202;
                    v1440 = v1242;
                    if ( v1241 != *(_QWORD *)(v1256 + v1565) )
                    {
                      MemoryFree(v1239);
                      goto LABEL_1519;
                    }
                    v1703 = v1239;
                    v1639 = 0;
                    if ( (unsigned int)v1256 >= 4 )
                    {
                      v1356 = *(_DWORD *)v1239;
                      v1304 = RtlULongLongAdd((unsigned __int64)v1239, 4LL, (unsigned __int64 *)&v1703);
                      lpModuleName = v1305;
                      v1440 = v1306;
                      Srcf = (_QWORD *)v1202;
                      if ( v1304 < 0 )
                        goto LABEL_1556;
                      v1307 = RtlUIntAdd(0, 4, &v1639);
                      v1308 = v1411;
                      v1304 = v1307;
                      lpModuleName = v1239;
                      v1440 = v1303;
                      Srcf = (_QWORD *)v1202;
                      if ( v1307 < 0 )
                        goto LABEL_1556;
                      if ( (unsigned int)v1577 - v1639 < 4 )
                        goto LABEL_1524;
                      v1375 = *(_DWORD *)v1703;
                      v1304 = RtlULongLongAdd((unsigned __int64)v1703, 4LL, (unsigned __int64 *)&v1703);
                      lpModuleName = v1309;
                      v1440 = v1310;
                      Srcf = (_QWORD *)v1202;
                      if ( v1304 < 0 )
                        goto LABEL_1556;
                      v1311 = RtlUIntAdd(v1639, 4, &v1639);
                      v1308 = v1411;
                      v1304 = v1311;
                      lpModuleName = v1239;
                      v1440 = v1303;
                      Srcf = (_QWORD *)v1202;
                      if ( v1311 < 0 )
                        goto LABEL_1556;
                      if ( (unsigned int)v1577 - v1639 < v1375 )
                      {
LABEL_1524:
                        v1411 = v1308;
                      }
                      else
                      {
                        v1304 = RtlUIntAdd(v1639, v1375, &v1639);
                        lpModuleName = v1239;
                        v1440 = v1303;
                        Srcf = (_QWORD *)v1202;
                        if ( v1304 < 0 )
                          goto LABEL_1556;
                        if ( (char *)v1239 + (unsigned int)v1577 >= (char *)v1703 + v1375
                          && (unsigned __int64)(unsigned int)v1577 + (char *)v1239 - v1375 - (_BYTE *)v1703 < 8 )
                        {
                          lpModuleName = v1239;
                          v1577 = 0LL;
                          v1304 = 0;
                          v1468 = 0;
                          v1440 = v1303;
                          Srcf = (_QWORD *)v1202;
                          if ( !v1703 )
                          {
LABEL_1543:
                            if ( v1375 )
                            {
                              v1322 = GetProcessHeap();
                              v1323 = v1375;
                              v1304 = 0;
                              v1324 = HeapAlloc(v1322, 8u, v1375);
                              if ( !v1324 )
                              {
                                v1304 = -1073741801;
                                goto LABEL_1556;
                              }
                            }
                            else
                            {
                              v1323 = 0LL;
                              v1324 = (void *)v1577;
                            }
                            if ( v1703 )
                              memcpy_0(v1324, v1703, v1323);
                            LODWORD(v1728[0]) = v1468;
                            v1728[1] = v1324;
                            if ( v1304 < 0 || v1356 == LODWORD(v1728[0]) )
                              goto LABEL_1556;
LABEL_1555:
                            v1304 = -1073741762;
                            goto LABEL_1556;
                          }
                          v1578 = (SIZE_T)v1703;
                          v1304 = RtlULongLongAdd((unsigned __int64)v1703, v1375, &v1704);
                          lpModuleName = v1312;
                          v1440 = v1313;
                          Srcf = (_QWORD *)v1202;
                          if ( v1304 >= 0 )
                          {
                            v1314 = v1578;
                            lpModuleName = v1312;
                            v1440 = v1313;
                            Srcf = (_QWORD *)v1202;
                            if ( v1578 < v1704 )
                            {
                              v1315 = v1579;
                              v1316 = v1312;
                              lpModuleName = v1312;
                              v1480 = (wchar_t *)v1579;
                              v1440 = v1313;
                              Srcf = (_QWORD *)v1202;
                              while ( 1 )
                              {
                                v1582 = v1315;
                                v1425 = (SIZE_T)v1313;
                                v1304 = RtlULongLongAdd(v1314, 4LL, &v1705);
                                if ( v1304 < 0 )
                                  goto LABEL_1556;
                                if ( v1705 > v1704 )
                                  goto LABEL_1547;
                                v1304 = RtlUIntAdd(v1318, *v1317, v1650);
                                if ( v1304 < 0 )
                                  goto LABEL_1556;
                                v1319 = RtlULongLongAdd(v1578, v1650[0], &v1706);
                                v1440 = v1321;
                                v1304 = v1319;
                                v1315 = v1582;
                                v1480 = (wchar_t *)v1582;
                                lpModuleName = v1316;
                                Srcf = (_QWORD *)v1202;
                                v1411 = v1320;
                                if ( v1319 < 0 )
                                  goto LABEL_1556;
                                v1314 = v1706;
                                v1578 = v1706;
                                lpModuleName = v1316;
                                Srcf = (_QWORD *)v1202;
                                v1411 = v1320;
                                if ( v1706 > v1704 )
                                {
                                  v1304 = -1073741811;
                                  v1440 = (_QWORD *)v1425;
                                  v1480 = (wchar_t *)v1582;
                                  goto LABEL_1556;
                                }
                                ++v1468;
                                v1313 = (_QWORD *)v1425;
                                v1440 = (_QWORD *)v1425;
                                v1480 = (wchar_t *)v1582;
                                if ( v1706 >= v1704 )
                                {
                                  lpModuleName = v1316;
                                  v1480 = (wchar_t *)v1582;
                                  v1440 = (_QWORD *)v1425;
                                  Srcf = (_QWORD *)v1202;
                                  v1411 = v1320;
                                  break;
                                }
                              }
                            }
                            if ( v1314 != v1704 )
                            {
LABEL_1547:
                              v1304 = -1073741811;
                              goto LABEL_1556;
                            }
                            goto LABEL_1543;
                          }
LABEL_1556:
                          v1051 = v1304 | 0x10000000;
                          goto LABEL_1349;
                        }
                      }
                    }
                    lpModuleName = v1239;
                    v1440 = v1303;
                    Srcf = (_QWORD *)v1202;
                    goto LABEL_1555;
                  }
                }
                else
                {
                  v1192 = GetLastError();
                  v1051 = v1192;
                  if ( v1192 > 0 )
                    v1051 = (unsigned __int16)v1192 | 0x80070000;
                  v1193 = v1452;
                  if ( v1051 >= 0 )
                    v1051 = -2147467259;
                }
                v1411 = (void *)v1391;
                if ( v1051 == -805306333 )
                {
                  v1051 = -2147024774;
                  Srcf = (_QWORD *)v1577;
                  goto LABEL_1349;
                }
                v1199 = v1577;
                v1198 = v104;
                v1197 = v991;
                v1196 = v1011;
                Srcf = (_QWORD *)v1577;
                if ( v1051 < 0 )
                  goto LABEL_1349;
                goto LABEL_1428;
              }
            }
          }
        }
LABEL_1565:
        v1724 = 0LL;
        v1325 = v1725;
        if ( v1725 )
        {
          v1326 = GetProcessHeap();
          HeapFree(v1326, 0, v1325);
          v1725 = 0LL;
        }
        v1728[0] = 0LL;
        v1327 = v1728[1];
        if ( v1728[1] )
        {
          v1328 = GetProcessHeap();
          HeapFree(v1328, 0, v1327);
          v1728[1] = 0LL;
        }
        if ( v991 )
        {
          v1329 = GetProcessHeap();
          HeapFree(v1329, 0, v991);
        }
        if ( v104 )
        {
          v1330 = GetProcessHeap();
          HeapFree(v1330, 0, (LPVOID)v104);
        }
        goto LABEL_1573;
      }
      v491 = ((__int64 (*)(void))off_180985198)();
      v492 = g_WarbirdNotificationInformation;
      g_WarbirdPaintInitTime = v491;
      v1420 = g_WarbirdNotificationInformation;
      memset_0(&v1767, 0, 0x70uLL);
      v1514 = 0LL;
      v1787 = 0LL;
      v1804 = 0LL;
      v1805 = 0;
      v1802 = 0LL;
      Srce = 0LL;
      v1803 = 0LL;
      while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
        ;
      v493 = g_WarbirdSecureFunctionsRefCount;
      v494 = 0;
      if ( !g_WarbirdSecureFunctionsRefCount )
      {
        v1539 = 0;
        v1507 = 0;
        v495 = (char *)MemoryAlloc(0x338uLL);
        v1399 = (WCHAR *)v495;
        if ( !v495 )
          goto LABEL_626;
        v496 = -1;
        v497 = v495 + 7;
        v498 = 0;
        v499 = (unsigned __int8 *)&unk_180832662;
        v500 = 103LL;
        do
        {
          v501 = *(v499 - 1) | (*(v499 - 2) << 8);
          v502 = v499[2] << 8;
          v503 = *v499;
          v499 += 8;
          v504 = *(v499 - 7) | ((v503 | (v501 << 8)) << 8);
          v505 = v504 ^ v494;
          v506 = *(v499 - 3) | ((*(v499 - 4) | ((*(v499 - 5) | v502) << 8)) << 8);
          v507 = v505 ^ v506 ^ v498 ^ 0xAC987321;
          v508 = (__ROL4__(v507, 10) + 4991 * __ROL4__(v507 + 1419157410, 5)) ^ v505;
          v509 = (43881 * __ROR4__(v508 + 133239679, 9) - __ROL4__(v508, 2)) ^ v507;
          v510 = (24670 * v509 - (v509 >> 13) - 123127970) ^ v508;
          v511 = (2033 * __ROL4__(v510 ^ 0xAB69, 6) - __ROL4__(v510, 2)) ^ v509;
          v512 = (133239679 - (v511 ^ 0xAB69605E)) ^ v510;
          v513 = (43881 * (v512 ^ 0x137F)) ^ __ROR4__(v512, 6) ^ v511;
          v514 = (__ROL4__(v513, 2) + 24670 * __ROR4__(v513 + 133239679, 15)) ^ v512;
          v515 = (2033 * __ROR4__(v514 + 1419157410, 14) - __ROL4__(v514, 8)) ^ v513;
          v516 = __ROR4__(v515, 10) ^ (4991 * __ROR4__(v515 ^ 0xAB69605E, 12)) ^ v514;
          v517 = v515 ^ (v516 >> 10) ^ (43881 * (v516 ^ 0x7F1));
          v518 = (2033 * (__ROR4__(~v517, 5) + 24670)) ^ v516;
          v519 = v517 ^ (v518 - 2033) ^ 0xAB69605E;
          v520 = ((v519 >> 2) + 4991 * __ROL4__(v517 ^ (v518 - 2033) ^ 0xAB6967AF, 2)) ^ v518;
          v521 = (__ROL4__(v520, 7) + 43881 * __ROR4__(v520 - 133239679, 6)) ^ v519;
          v522 = (24670 * (v521 ^ 0x137F) + __ROR4__(v521, 9)) ^ v520;
          v523 = (__ROL4__(v522, 7) + 2033 * __ROL4__(v522 ^ 0xAB69, 5)) ^ v521;
          v524 = v523 ^ v522 ^ 0xAC987321;
          v525 = (4991 * __ROR4__(v524, 3) - 219010071) ^ v523;
          v526 = (24670 * __ROR4__(v525 - 133239679, 1) - __ROR4__(v525, 6)) ^ v524;
          v527 = (__ROL4__(v526, 14) + 2033 * __ROL4__(v526 - 1419157410, 3)) ^ v525;
          v528 = (4991 * __ROL4__(v527 - 1419157410, 15) - __ROR4__(v527, 14)) ^ v526;
          v529 = (v528 >> 3) ^ (43881 * (v528 ^ 0x605E)) ^ v527;
          v530 = 24670 * __ROL4__(v529 ^ 0x7F1137F, 4);
          v531 = v529;
          v532 = v496 ^ v529;
          v496 = v506;
          v533 = v104 ^ __ROL4__(v531, 2) ^ v530;
          LODWORD(v104) = v504;
          v534 = v533 ^ v528;
          *(v497 - 4) = v534;
          *v497 = v532;
          v497 += 8;
          v535 = __ROR4__(v534, 8);
          *(v497 - 13) = v535;
          v536 = __ROR4__(v532, 8);
          *(v497 - 9) = v536;
          v537 = __ROR4__(v535, 8);
          *(v497 - 14) = v537;
          v538 = __ROR4__(v536, 8);
          *(v497 - 10) = v538;
          v539 = __ROR4__(v537, 8);
          v540 = __ROR4__(v538, 8);
          *(v497 - 15) = v539;
          *(v497 - 11) = v540;
          v498 = __ROR4__(v540, 8);
          v494 = __ROR4__(v539, 8);
          --v500;
        }
        while ( v500 );
        v492 = v1420;
        v494 = 0;
        v541 = v1399;
        v542 = 0LL;
        v543 = 0;
        v544 = 0;
        do
          v543 ^= *((_BYTE *)v1399 + v542++);
        while ( v542 < 0x338 );
        if ( v543 != 64LL )
        {
          MemoryFree(v1399);
LABEL_626:
          v545 = (HMODULE *)&WARBIRD::g_arModuleInfo;
          v546 = 4LL;
          do
          {
            if ( *v545 )
              FreeLibrary(*v545);
            v545 += 3;
            --v546;
          }
          while ( v546 );
          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
          memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_660:
          v1540 = 0;
          _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
          v1682 = 0LL;
          v1726 = 0LL;
          v1488 = 0;
          v1400 = 0LL;
          v1471 = 0LL;
          v1431 = 0LL;
          while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
            ;
          v559 = g_WarbirdSecureFunctionsRefCount;
          if ( g_WarbirdSecureFunctionsRefCount )
            goto LABEL_704;
          v1508 = 0;
          LODWORD(v1525) = 0;
          v1568 = 0;
          v560 = (const WCHAR *)MemoryAlloc(0x338uLL);
          lpModuleName = v560;
          if ( !v560 )
            goto LABEL_670;
          v561 = (char *)v560 + 7;
          v562 = -1;
          v563 = (unsigned __int8 *)&unk_180832662;
          v564 = 103LL;
          v565 = 0;
          v566 = 0;
          do
          {
            v567 = *(v563 - 1) | (*(v563 - 2) << 8);
            v568 = v563[2] << 8;
            v569 = *v563;
            v563 += 8;
            v570 = *(v563 - 7) | ((v569 | (v567 << 8)) << 8);
            v571 = v570 ^ v494;
            v572 = *(v563 - 3) | ((*(v563 - 4) | ((*(v563 - 5) | v568) << 8)) << 8);
            v573 = v571 ^ v572 ^ v566 ^ 0xAC987321;
            v574 = (__ROL4__(v573, 10) + 4991 * __ROL4__(v573 + 1419157410, 5)) ^ v571;
            v575 = (43881 * __ROR4__(v574 + 133239679, 9) - __ROL4__(v574, 2)) ^ v573;
            v576 = (24670 * v575 - (v575 >> 13) - 123127970) ^ v574;
            v577 = (2033 * __ROL4__(v576 ^ 0xAB69, 6) - __ROL4__(v576, 2)) ^ v575;
            v578 = (133239679 - (v577 ^ 0xAB69605E)) ^ v576;
            v579 = (43881 * (v578 ^ 0x137F)) ^ __ROR4__(v578, 6) ^ v577;
            v580 = (__ROL4__(v579, 2) + 24670 * __ROR4__(v579 + 133239679, 15)) ^ v578;
            v581 = (2033 * __ROR4__(v580 + 1419157410, 14) - __ROL4__(v580, 8)) ^ v579;
            v582 = __ROR4__(v581, 10) ^ (4991 * __ROR4__(v581 ^ 0xAB69605E, 12)) ^ v580;
            v583 = (v582 >> 10) ^ (43881 * (v582 ^ 0x7F1)) ^ v581;
            v584 = (2033 * (__ROR4__(~v583, 5) + 24670)) ^ v582;
            v585 = v583 ^ (v584 - 2033) ^ 0xAB69605E;
            v586 = ((v585 >> 2) + 4991 * __ROL4__(v583 ^ (v584 - 2033) ^ 0xAB6967AF, 2)) ^ v584;
            v587 = (__ROL4__(v586, 7) + 43881 * __ROR4__(v586 - 133239679, 6)) ^ v585;
            v588 = (24670 * (v587 ^ 0x137F) + __ROR4__(v587, 9)) ^ v586;
            v589 = (__ROL4__(v588, 7) + 2033 * __ROL4__(v588 ^ 0xAB69, 5)) ^ v587;
            v590 = v589 ^ v588 ^ 0xAC987321;
            v591 = (4991 * __ROR4__(v590, 3) - 219010071) ^ v589;
            v592 = (24670 * __ROR4__(v591 - 133239679, 1) - __ROR4__(v591, 6)) ^ v590;
            v593 = (__ROL4__(v592, 14) + 2033 * __ROL4__(v592 - 1419157410, 3)) ^ v591;
            v594 = (4991 * __ROL4__(v593 - 1419157410, 15) - __ROR4__(v593, 14)) ^ v592;
            v595 = (v594 >> 3) ^ (43881 * (v594 ^ 0x605E)) ^ v593;
            v596 = 24670 * __ROL4__(v595 ^ 0x7F1137F, 4);
            v597 = v595;
            v598 = v562 ^ v595;
            v562 = v572;
            v599 = v565 ^ __ROL4__(v597, 2) ^ v596;
            v565 = v570;
            v600 = v599 ^ v594;
            *(v561 - 4) = v600;
            *v561 = v598;
            v561 += 8;
            v601 = __ROR4__(v600, 8);
            *(v561 - 13) = v601;
            v602 = __ROR4__(v598, 8);
            *(v561 - 9) = v602;
            v603 = __ROR4__(v601, 8);
            *(v561 - 14) = v603;
            v604 = __ROR4__(v602, 8);
            *(v561 - 10) = v604;
            v605 = __ROR4__(v603, 8);
            v606 = __ROR4__(v604, 8);
            *(v561 - 15) = v605;
            *(v561 - 11) = v606;
            v566 = __ROR4__(v606, 8);
            v494 = __ROR4__(v605, 8);
            --v564;
          }
          while ( v564 );
          v607 = 0;
          v492 = v1420;
          v608 = 0LL;
          v92 = (int)v1586;
          v609 = lpModuleName;
          do
            v607 ^= *((_BYTE *)lpModuleName + v608++);
          while ( v608 < 0x338 );
          if ( v607 != 64LL )
          {
            MemoryFree((void *)lpModuleName);
            goto LABEL_670;
          }
          *((_BYTE *)lpModuleName + 823) = 0;
          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
          if ( *v609 )
          {
            v1683 = v609;
            while ( 1 )
            {
              v612 = (const WCHAR *)v609;
              v613 = -1LL;
              do
                ++v613;
              while ( *(_WORD *)&v609[2 * v613] );
              v614 = &v609[2 * v613];
              v615 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1568;
              if ( !GetModuleHandleExW(0, v612, (HMODULE *)v615) )
                break;
              v616 = 0;
              if ( **(_WORD **)v615 == 23117
                && (v617 = *(int *)(*(_QWORD *)v615 + 60LL), (unsigned int)v617 < 0x10000000)
                && (v618 = *(_QWORD *)v615 + v617, v618 >= *(_QWORD *)v615)
                && *(_DWORD *)v618 == 17744 )
              {
                if ( ((*(_WORD *)(v618 + 24) - 267) & 0xFEFF) != 0 )
                {
                  v616 = -1073741811;
                }
                else
                {
                  *(_QWORD *)(v615 + 12) = *(_QWORD *)(v618 + 136);
                  *((_DWORD *)v615 + 2) = *(_DWORD *)(v618 + 80);
                }
              }
              else
              {
                v616 = -1073741701;
              }
              v619 = *(_DWORD *)(v614 + 2);
              v620 = 0;
              v609 = v614 + 6;
              v1421 = v619;
              for ( LODWORD(v1525) = 0; v620 < v1421; LODWORD(v1525) = v620 )
              {
                v621 = v609;
                v622 = -1LL;
                do
                  ++v622;
                while ( v609[v622] );
                v609 += v622 + 1;
                if ( v616 >= 0 )
                {
                  v623 = (void **)GetProcAddress(*(HMODULE *)v615, v621);
                  if ( !v623 )
                    goto LABEL_698;
                  (&WARBIRD::g_FuncAddress)[v1508] = v623;
                  v620 = (unsigned int)v1525;
                }
                ++v1508;
                ++v620;
              }
              ++v1568;
              if ( !*v609 )
                goto LABEL_698;
            }
            v616 = -1073741702;
LABEL_698:
            v609 = v1683;
            if ( !v1683 )
              goto LABEL_702;
          }
          else
          {
            v616 = 0;
          }
          v624 = GetProcessHeap();
          HeapFree(v624, 0, v609);
LABEL_702:
          if ( v616 < 0 )
          {
LABEL_670:
            v610 = (HMODULE *)&WARBIRD::g_arModuleInfo;
            v611 = 4LL;
            do
            {
              if ( *v610 )
                FreeLibrary(*v610);
              v610 += 3;
              --v611;
            }
            while ( v611 );
            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
            memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_705:
            v104 = 0LL;
            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
            memset_0(&v1767, 0, 0x70uLL);
            v1842[0] = (v492 >> 4) & 0xF;
            v625 = v492 & 0xF;
            v1422 = v625;
            v1842[1] = (v492 >> 8) & 0xF;
            v1787 = 0LL;
            v1842[2] = (v492 >> 12) & 0xF;
            lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
            v1509 = -1;
            if ( !lpModuleName )
            {
              v626 = GetLastError();
              v627 = v626;
              if ( v626 > 0 )
                v627 = (unsigned __int16)v626 | 0x80070000;
              if ( v627 >= 0 )
                v627 = -2147467259;
LABEL_924:
              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                ;
              v767 = g_WarbirdSecureFunctionsRefCount;
              if ( g_WarbirdSecureFunctionsRefCount > 0 )
              {
                --g_WarbirdSecureFunctionsRefCount;
                if ( v767 == 1 )
                {
                  v768 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                  v104 = 4LL;
                  do
                  {
                    if ( *v768 )
                      FreeLibrary(*v768);
                    v768 += 3;
                    --v104;
                  }
                  while ( v104 );
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                }
              }
              _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1682);
              if ( v627 < 0 )
              {
LABEL_1058:
                if ( v1769 )
                {
                  v850 = -1LL;
                  do
                    ++v850;
                  while ( *((_WORD *)v1769 + v850) );
                  memset(v1769, 0, 2 * v850 + 2);
                  MemoryFree(v1769);
                  v1769 = 0LL;
                }
                if ( v1770 )
                {
                  v851 = -1LL;
                  do
                    ++v851;
                  while ( *((_WORD *)v1770 + v851) );
                  memset(v1770, 0, 2 * v851 + 2);
                  MemoryFree(v1770);
                  v1770 = 0LL;
                }
                if ( v1771 )
                {
                  v852 = -1LL;
                  do
                    ++v852;
                  while ( *((_WORD *)v1771 + v852) );
                  memset(v1771, 0, 2 * v852 + 2);
                  MemoryFree(v1771);
                  v1771 = 0LL;
                }
                if ( v1772 )
                {
                  ((void (*)(void))off_180985138)();
                  v1772 = 0LL;
                }
                if ( v1773 )
                {
                  ((void (*)(void))off_180985138)();
                  v1773 = 0LL;
                }
                if ( v1774 )
                {
                  ((void (*)(void))off_180985138)();
                  v1774 = 0LL;
                }
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v853 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount > 0 )
                {
                  --g_WarbirdSecureFunctionsRefCount;
                  if ( v853 == 1 )
                  {
                    v854 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    v855 = 4LL;
                    do
                    {
                      if ( *v854 )
                        FreeLibrary(*v854);
                      v854 += 3;
                      --v855;
                    }
                    while ( v855 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                  }
                }
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                v1345 = g_WarbirdNotificationInformation;
                v856 = ((__int64 (*)(void))off_180985198)() - g_WarbirdPaintInitTime;
                v1494 = v856;
                v1840 = 0LL;
                v1837 = 0LL;
                v1838 = 0LL;
                v1839 = 0LL;
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v857 = g_WarbirdSecureFunctionsRefCount;
                if ( !g_WarbirdSecureFunctionsRefCount )
                {
                  v1363 = 0;
                  v1450 = 0;
                  v858 = (char *)MemoryAlloc(0x338uLL);
                  v1515 = (WCHAR *)v858;
                  if ( !v858 )
                    goto LABEL_1095;
                  v859 = 0;
                  v860 = v858 + 7;
                  v861 = -1;
                  v862 = (unsigned __int8 *)&unk_180832662;
                  v863 = 0;
                  v864 = 103LL;
                  v865 = 0;
                  do
                  {
                    v866 = *(v862 - 1) | (*(v862 - 2) << 8);
                    v867 = v862[2] << 8;
                    v868 = *v862;
                    v862 += 8;
                    v869 = *(v862 - 7) | ((v868 | (v866 << 8)) << 8);
                    v870 = v869 ^ v865;
                    v871 = *(v862 - 3) | ((*(v862 - 4) | ((*(v862 - 5) | v867) << 8)) << 8);
                    v872 = v870 ^ v863 ^ v871 ^ 0xAC987321;
                    v873 = (__ROL4__(v872, 10) + 4991 * __ROL4__(v872 + 1419157410, 5)) ^ v870;
                    v874 = (43881 * __ROR4__(v873 + 133239679, 9) - __ROL4__(v873, 2)) ^ v872;
                    v875 = (24670 * v874 - (v874 >> 13) - 123127970) ^ v873;
                    v876 = (2033 * __ROL4__(v875 ^ 0xAB69, 6) - __ROL4__(v875, 2)) ^ v874;
                    v877 = (133239679 - (v876 ^ 0xAB69605E)) ^ v875;
                    v878 = (43881 * (v877 ^ 0x137F)) ^ __ROR4__(v877, 6) ^ v876;
                    v879 = (__ROL4__(v878, 2) + 24670 * __ROR4__(v878 + 133239679, 15)) ^ v877;
                    v880 = (2033 * __ROR4__(v879 + 1419157410, 14) - __ROL4__(v879, 8)) ^ v878;
                    v881 = __ROR4__(v880, 10) ^ (4991 * __ROR4__(v880 ^ 0xAB69605E, 12)) ^ v879;
                    v882 = v880 ^ (v881 >> 10) ^ (43881 * (v881 ^ 0x7F1));
                    v883 = (2033 * (__ROR4__(~v882, 5) + 24670)) ^ v881;
                    v884 = v882 ^ (v883 - 2033) ^ 0xAB69605E;
                    v885 = ((v884 >> 2) + 4991 * __ROL4__(v882 ^ (v883 - 2033) ^ 0xAB6967AF, 2)) ^ v883;
                    v886 = (__ROL4__(v885, 7) + 43881 * __ROR4__(v885 - 133239679, 6)) ^ v884;
                    v887 = (24670 * (v886 ^ 0x137F) + __ROR4__(v886, 9)) ^ v885;
                    v888 = (__ROL4__(v887, 7) + 2033 * __ROL4__(v887 ^ 0xAB69, 5)) ^ v886;
                    v889 = v888 ^ v887 ^ 0xAC987321;
                    v890 = (4991 * __ROR4__(v889, 3) - 219010071) ^ v888;
                    v891 = (24670 * __ROR4__(v890 - 133239679, 1) - __ROR4__(v890, 6)) ^ v889;
                    v892 = (__ROL4__(v891, 14) + 2033 * __ROL4__(v891 - 1419157410, 3)) ^ v890;
                    v893 = (4991 * __ROL4__(v892 - 1419157410, 15) - __ROR4__(v892, 14)) ^ v891;
                    v894 = (v893 >> 3) ^ (43881 * (v893 ^ 0x605E)) ^ v892;
                    v895 = 24670 * __ROL4__(v894 ^ 0x7F1137F, 4);
                    v896 = v894;
                    v897 = v861 ^ v894;
                    v861 = v871;
                    v898 = v859 ^ __ROL4__(v896, 2) ^ v895;
                    v859 = v869;
                    v899 = v898 ^ v893;
                    *(v860 - 4) = v899;
                    *v860 = v897;
                    v860 += 8;
                    v900 = __ROR4__(v899, 8);
                    *(v860 - 13) = v900;
                    v901 = __ROR4__(v897, 8);
                    *(v860 - 9) = v901;
                    v902 = __ROR4__(v900, 8);
                    *(v860 - 14) = v902;
                    v903 = __ROR4__(v901, 8);
                    *(v860 - 10) = v903;
                    v904 = __ROR4__(v902, 8);
                    v905 = __ROR4__(v903, 8);
                    *(v860 - 15) = v904;
                    *(v860 - 11) = v905;
                    v863 = __ROR4__(v905, 8);
                    v865 = __ROR4__(v904, 8);
                    --v864;
                  }
                  while ( v864 );
                  v906 = v1515;
                  v907 = 0;
                  v908 = 0LL;
                  v909 = 0;
                  do
                    v909 ^= *((_BYTE *)v1515 + v908++);
                  while ( v908 < 0x338 );
                  if ( v909 != 64LL )
                  {
                    MemoryFree(v1515);
LABEL_1094:
                    v856 = v1494;
LABEL_1095:
                    v910 = 4LL;
                    v911 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    v104 = 0LL;
                    do
                    {
                      if ( *v911 )
                        FreeLibrary(*v911);
                      v911 += 3;
                      --v910;
                    }
                    while ( v910 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                    goto LABEL_1209;
                  }
                  *((_BYTE *)v1515 + 823) = 0;
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  if ( !*(_BYTE *)v1515 )
                    goto LABEL_1205;
                  while ( 1 )
                  {
                    v976 = v906;
                    v977 = -1LL;
                    do
                      ++v977;
                    while ( v906[v977] );
                    v978 = &v906[v977];
                    v979 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1450;
                    if ( !GetModuleHandleExW(0, v976, (HMODULE *)v979) )
                      break;
                    v907 = 0;
                    if ( **(_WORD **)v979 == 23117
                      && (v980 = *(int *)(*(_QWORD *)v979 + 60LL), (unsigned int)v980 < 0x10000000)
                      && (v981 = *(_QWORD *)v979 + v980, v981 >= *(_QWORD *)v979)
                      && *(_DWORD *)v981 == 17744 )
                    {
                      if ( ((*(_WORD *)(v981 + 24) - 267) & 0xFEFF) != 0 )
                      {
                        v907 = -1073741811;
                      }
                      else
                      {
                        *(_QWORD *)(v979 + 12) = *(_QWORD *)(v981 + 136);
                        *((_DWORD *)v979 + 2) = *(_DWORD *)(v981 + 80);
                      }
                    }
                    else
                    {
                      v907 = -1073741701;
                    }
                    v982 = *(_DWORD *)(v978 + 1);
                    v983 = 0;
                    v906 = v978 + 3;
                    v1461 = v982;
                    for ( LODWORD(v1579) = 0; v983 < v1461; LODWORD(v1579) = v983 )
                    {
                      v984 = (const CHAR *)v906;
                      v985 = -1LL;
                      do
                        ++v985;
                      while ( *((_BYTE *)v906 + v985) );
                      v906 = (WCHAR *)((char *)v906 + v985 + 1);
                      if ( v907 >= 0 )
                      {
                        v986 = (void **)GetProcAddress(*(HMODULE *)v979, v984);
                        if ( !v986 )
                          goto LABEL_1204;
                        (&WARBIRD::g_FuncAddress)[v1363] = v986;
                        v983 = (unsigned int)v1579;
                      }
                      ++v1363;
                      ++v983;
                    }
                    ++v1450;
                    if ( !*(_BYTE *)v906 )
                      goto LABEL_1204;
                  }
                  v907 = -1073741702;
LABEL_1204:
                  if ( v1515 )
                  {
LABEL_1205:
                    v987 = GetProcessHeap();
                    HeapFree(v987, 0, v1515);
                  }
                  if ( v907 < 0 )
                    goto LABEL_1094;
                  v857 = g_WarbirdSecureFunctionsRefCount;
                  v104 = 0LL;
                  v856 = v1494;
                }
                g_WarbirdSecureFunctionsRefCount = v857 + 1;
LABEL_1209:
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                LODWORD(v1840) = v1345;
                LODWORD(v1837) = v856;
                v1836 = 1;
                LODWORD(v1838) = -1721306479;
                DWORD2(v1837) = 1;
                LODWORD(v1839) = 1;
                DWORD2(v1838) = 1;
                DWORD2(v1839) = 1;
                v988 = 4LL;
                ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1809851D0)(0LL, 8225LL, 4LL, &v1836);
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v989 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount > 0 )
                {
                  --g_WarbirdSecureFunctionsRefCount;
                  if ( v989 == 1 )
                  {
                    v990 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    do
                    {
                      if ( *v990 )
                        FreeLibrary(*v990);
                      v990 += 3;
                      --v988;
                    }
                    while ( v988 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                  }
                }
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                ((void (__fastcall *)(_QWORD, size_t))off_180985260)(0LL, v1376);
                v1583 = (void *)v1577;
                goto LABEL_1219;
              }
              v769 = v1787;
              v1689 = v1787;
              memset_0(v1740, 0, 0x68uLL);
              v770 = 1;
              v771 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1376, 7LL);
              v104 = 0LL;
              if ( v771
                && (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(v771, 104LL, v1740) )
              {
                if ( v1743 != 32 || !v1744 || v1741 <= 0 || v1742 <= 0 )
                  v770 = 0;
                if ( v770 )
                {
LABEL_944:
                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1776, v769, HIDWORD(v1689));
                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1777, v769, HIDWORD(v1689));
                  if ( v625 == 1 )
                    Srce = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_180985128)(v1768 == 0 ? 0xB26720 : 0);
LABEL_946:
                  v1541 = ((__int64 (__fastcall *)(size_t, __int64))off_180985180)(v1376, 1LL);
                  v772 = 2064;
                  if ( v1767 )
                    v772 = 133138;
                  v1489 = v772;
                  if ( v770 )
                  {
                    v773 = v1768;
                    v774 = v1769;
                    v1403 = v1772;
                    memset_0(v1745, 0, 0x68uLL);
                    memset_0(v1749, 0, 0x68uLL);
                    v1472 = 0LL;
                    v1528 = 0;
                    v1572 = 0;
                    v1808 = 0LL;
                    v1809 = 0;
                    v1806 = 0LL;
                    v1807 = 0LL;
                    v1788 = 0LL;
                    if ( !v774 )
                      goto LABEL_952;
                    v775 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1376, 7LL);
                    if ( !v775 )
                      goto LABEL_951;
                    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                         v775,
                                         104LL,
                                         v1745) )
                    {
                      v1472 = v1748;
                      v1528 = v1746;
                      v1572 = v1747;
                    }
                    v1434 = ((__int64 (__fastcall *)(size_t))off_180985110)(v1376);
                    v776 = v1434;
                    if ( !v1434 )
                    {
LABEL_951:
                      GetLastError();
                      goto LABEL_952;
                    }
                    DWORD1(v1806) = DWORD2(v1776) - v1776;
                    DWORD2(v1806) = DWORD1(v1776) - HIDWORD(v1776);
                    v1690 = 0LL;
                    v1807 = 0LL;
                    v1808 = 0LL;
                    v1809 = 0;
                    LODWORD(v1806) = 40;
                    HIDWORD(v1806) = 2097153;
                    lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                                              v1434,
                                              &v1806,
                                              0LL,
                                              &v1690,
                                              0LL,
                                              0);
                    v777 = lpModuleName;
                    if ( !lpModuleName )
                    {
                      v778 = GetLastError();
                      v104 = 0LL;
                      v779 = v778;
                      if ( v778 > 0 )
                        v779 = (unsigned __int16)v778 | 0x80070000;
                      if ( v779 >= 0 )
                        v779 = -2147467259;
                      goto LABEL_989;
                    }
                    v780 = (unsigned int)((__int64 (__fastcall *)(LPCWSTR, __int64, _BYTE *))off_180985168)(
                                           lpModuleName,
                                           104LL,
                                           v1749) == 0;
                    v781 = 0LL;
                    if ( !v780 )
                      v781 = v1750;
                    DWORD2(v1788) = DWORD2(v1776) - v1776;
                    HIDWORD(v1788) = HIDWORD(v1776) - DWORD1(v1776);
                    v1555 = v781;
                    ((void (__fastcall *)(SIZE_T, LPCWSTR))off_180985178)(v1434, v777);
                    ((void (__fastcall *)(SIZE_T, __int64))off_180985180)(v1434, 1LL);
                    v782 = ((__int64 (__fastcall *)(SIZE_T, SIZE_T))off_180985178)(v1434, v1403);
                    v783 = off_1809851E8;
                    v1404 = v782;
                    v784 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                    ((void (__fastcall *)(SIZE_T, __int128 *, __int64))v783)(v1434, &v1788, v784);
                    v779 = 0;
                    ((void (__fastcall *)(SIZE_T, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                      v1434,
                      v774,
                      0xFFFFFFFFLL,
                      &v1788,
                      v1489,
                      0LL);
                    if ( v1422 == 1 )
                    {
                      if ( v773 )
                      {
                        v785 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                        LOBYTE(v786) = v785;
                        v1551 = v785;
LABEL_970:
                        v787 = 0;
                        v788 = -(int)v1776;
                        v789 = 0;
                        if ( (int)v1776 >= 0 )
                        {
                          v787 = v1776;
                          v788 = 0;
                        }
                        v790 = -DWORD1(v1776);
                        if ( (SDWORD1(v1776) & 0x80000000) == 0 )
                        {
                          v790 = 0;
                          v789 = DWORD1(v1776);
                        }
                        v791 = DWORD2(v1788) - v788;
                        if ( DWORD2(v1788) - v788 >= v1528 - v787 )
                          v791 = v1528 - v787;
                        v792 = HIDWORD(v1788) - v790;
                        if ( HIDWORD(v1788) - v790 >= v1572 - v789 )
                          v792 = v1572 - v789;
                        if ( v791 > 0 && v792 > 0 )
                        {
                          v793 = v1528;
                          v1529 = 0;
                          v794 = (char *)(v1555 + 4 * (v788 + (__int64)(v790 * DWORD2(v1788))));
                          v1556 = (SIZE_T)v794;
                          v795 = &v1472[2 * v787 + 2 * (__int64)(v789 * (int)v793)];
                          v1583 = (void *)(4LL * SDWORD2(v1788));
                          v796 = v1583;
                          v1343 = 2 * v793;
                          v1473 = v795;
                          do
                          {
                            v1573 = 0;
                            v797 = (char *)v795 - v794;
                            v798 = (unsigned __int8 *)(v794 + 2);
                            v799 = 0;
                            do
                            {
                              if ( (unsigned __int8)((*v798 + *(v798 - 2) + 2 * (unsigned int)*(v798 - 1)) >> 2) != 0xFF )
                              {
                                v800 = (unsigned __int8)~((*v798 + *(v798 - 2) + 2 * (unsigned int)*(v798 - 1)) >> 2);
                                v798[v797] -= ~((*v798 + *(v798 - 2) + 2 * (unsigned int)*(v798 - 1)) >> 2)
                                            * (v786 - v798[v797]);
                                v801 = v798[v797 - 1];
                                v802 = (unsigned __int64)(2155905153LL * v800 * (BYTE1(v1551) - v801)) >> 32;
                                v798[v797 - 1] = v801 + (v802 >> 7 < 0) + (v802 >> 7);
                                v803 = v798[v797 - 2];
                                v804 = (unsigned __int64)(2155905153LL * v800 * (BYTE2(v1551) - v803)) >> 32;
                                v798[v797 - 2] = v803 + (v804 >> 7 < 0) + (v804 >> 7);
                                v805 = v798[v797 + 1];
                                v806 = v800 * (255 - v805);
                                v799 = v1573;
                                v798[v797 + 1] = v805 + v806 / 255;
                              }
                              ++v799;
                              v798 += 4;
                              v1573 = v799;
                              v779 = 0;
                            }
                            while ( v799 < v791 );
                            v794 = (char *)v796 + v1556;
                            v795 = &v1473[v1343];
                            v1556 += (SIZE_T)v796;
                            v1473 = (wchar_t *)((char *)v1473 + v1343 * 2);
                            ++v1529;
                          }
                          while ( v1529 < v792 );
                          v92 = (int)v1586;
                          v776 = v1434;
                        }
                        ((void (__fastcall *)(LPCWSTR))off_180985138)(lpModuleName);
                        v104 = 0LL;
                        if ( v1404 )
                          ((void (__fastcall *)(SIZE_T, SIZE_T))off_180985178)(v776, v1404);
LABEL_989:
                        ((void (__fastcall *)(SIZE_T))off_180985130)(v776);
                        if ( v779 < 0 )
                          goto LABEL_1056;
                        v807 = v1770;
                        v1530 = v1768;
                        v1405 = v1773;
                        memset_0(v1751, 0, 0x68uLL);
                        memset_0(v1755, 0, 0x68uLL);
                        v1474 = 0LL;
                        v1574 = 0;
                        v808 = 0;
                        v1812 = 0LL;
                        v1813 = 0;
                        v1810 = 0LL;
                        v1811 = 0LL;
                        v1789 = 0LL;
                        if ( v807 )
                        {
                          v809 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1376, 7LL);
                          if ( v809 )
                          {
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                 v809,
                                                 104LL,
                                                 v1751) )
                            {
                              v808 = v1753;
                              v1474 = v1754;
                              v1574 = v1752;
                            }
                            v1435 = ((__int64 (__fastcall *)(size_t))off_180985110)(v1376);
                            v810 = v1435;
                            if ( v1435 )
                            {
                              DWORD1(v1810) = DWORD2(v1777) - v1777;
                              DWORD2(v1810) = DWORD1(v1777) - HIDWORD(v1777);
                              v1691 = 0LL;
                              v1811 = 0LL;
                              v1812 = 0LL;
                              v1813 = 0;
                              LODWORD(v1810) = 40;
                              HIDWORD(v1810) = 2097153;
                              lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                                                        v1435,
                                                        &v1810,
                                                        0LL,
                                                        &v1691,
                                                        0LL,
                                                        0);
                              v811 = lpModuleName;
                              if ( !lpModuleName )
                              {
                                v812 = GetLastError();
                                v104 = 0LL;
                                v813 = v812;
                                if ( v812 > 0 )
                                  v813 = (unsigned __int16)v812 | 0x80070000;
                                if ( v813 >= 0 )
                                  v813 = -2147467259;
LABEL_1028:
                                ((void (__fastcall *)(SIZE_T))off_180985130)(v810);
                                if ( v813 < 0 )
                                  goto LABEL_1056;
                                v838 = 0LL;
                                v839 = v1376;
LABEL_1179:
                                ((void (__fastcall *)(size_t, _QWORD))off_180985180)(v839, v1541);
                                v849 = v1514;
                                v104 = 0LL;
                                if ( !v1514 )
                                {
LABEL_1054:
                                  if ( !v838 )
                                    goto LABEL_1056;
                                  goto LABEL_1055;
                                }
LABEL_1053:
                                ((void (__fastcall *)(LPCWSTR))off_180985138)(v849);
                                goto LABEL_1054;
                              }
                              v780 = (unsigned int)((__int64 (__fastcall *)(LPCWSTR, __int64, _BYTE *))off_180985168)(
                                                     lpModuleName,
                                                     104LL,
                                                     v1755) == 0;
                              v814 = 0LL;
                              if ( !v780 )
                                v814 = v1756;
                              DWORD2(v1789) = DWORD2(v1777) - v1777;
                              HIDWORD(v1789) = HIDWORD(v1777) - DWORD1(v1777);
                              v1557 = v814;
                              ((void (__fastcall *)(SIZE_T, LPCWSTR))off_180985178)(v1435, v811);
                              ((void (__fastcall *)(SIZE_T, __int64))off_180985180)(v1435, 1LL);
                              v815 = ((__int64 (__fastcall *)(SIZE_T, SIZE_T))off_180985178)(v1435, v1405);
                              v816 = off_1809851E8;
                              v1406 = v815;
                              v817 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                              ((void (__fastcall *)(SIZE_T, __int128 *, __int64))v816)(v1435, &v1789, v817);
                              v813 = 0;
                              ((void (__fastcall *)(SIZE_T, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                v1435,
                                v807,
                                0xFFFFFFFFLL,
                                &v1789,
                                v1489,
                                0LL);
                              if ( v1422 == 1 )
                              {
                                if ( !v1530 )
                                {
                                  v1423 = 0xFFFFFF;
LABEL_1009:
                                  v819 = 0;
                                  v820 = -(int)v1777;
                                  v821 = 0;
                                  if ( (int)v1777 >= 0 )
                                  {
                                    v819 = v1777;
                                    v820 = 0;
                                  }
                                  v822 = -DWORD1(v1777);
                                  if ( (SDWORD1(v1777) & 0x80000000) == 0 )
                                  {
                                    v822 = 0;
                                    v821 = DWORD1(v1777);
                                  }
                                  v823 = DWORD2(v1789) - v820;
                                  if ( DWORD2(v1789) - v820 >= v1574 - v819 )
                                    v823 = v1574 - v819;
                                  v824 = HIDWORD(v1789) - v822;
                                  v825 = v808 - v821;
                                  if ( HIDWORD(v1789) - v822 >= v825 )
                                    v824 = v825;
                                  if ( v823 > 0 && v824 > 0 )
                                  {
                                    v1531 = 0;
                                    v826 = v1557 + 4 * (v820 + (__int64)(DWORD2(v1789) * v822));
                                    v827 = &v1474[2 * v819 + 2 * (__int64)(v1574 * v821)];
                                    v1558 = 4LL * SDWORD2(v1789);
                                    v1583 = (void *)(4LL * v1574);
                                    v1475 = v827;
                                    do
                                    {
                                      v828 = (unsigned __int8 *)(v826 + 2);
                                      v829 = (char *)v827 - v826;
                                      v1552 = 0;
                                      v830 = 0;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v828 + *(v828 - 2) + 2 * (unsigned int)*(v828 - 1)) >> 2) != 0xFF )
                                        {
                                          v831 = (unsigned __int8)~((*v828 + *(v828 - 2) + 2 * (unsigned int)*(v828 - 1)) >> 2);
                                          v828[(_QWORD)v829] -= ~((*v828 + *(v828 - 2) + 2 * (unsigned int)*(v828 - 1)) >> 2)
                                                              * (v1509 - v828[(_QWORD)v829]);
                                          v832 = v828[(_QWORD)v829 - 1];
                                          v833 = (unsigned __int64)(2155905153LL * v831 * (BYTE1(v1423) - v832)) >> 32;
                                          v828[(_QWORD)v829 - 1] = v832 + (v833 >> 7 < 0) + (v833 >> 7);
                                          v834 = v828[(_QWORD)v829 - 2];
                                          v835 = (unsigned __int64)(2155905153LL * v831 * (BYTE2(v1423) - v834)) >> 32;
                                          v828[(_QWORD)v829 - 2] = v834 + (v835 >> 7 < 0) + (v835 >> 7);
                                          v836 = v828[(_QWORD)v829 + 1];
                                          v837 = v831 * (255 - v836);
                                          v830 = v1552;
                                          v828[(_QWORD)v829 + 1] = v836 + v837 / 255;
                                        }
                                        ++v830;
                                        v828 += 4;
                                        v1552 = v830;
                                        v813 = 0;
                                      }
                                      while ( v830 < v823 );
                                      v827 = (wchar_t *)((char *)v1475 + (_QWORD)v1583);
                                      v826 += v1558;
                                      v1475 = (wchar_t *)((char *)v1475 + (_QWORD)v1583);
                                      ++v1531;
                                    }
                                    while ( v1531 < v824 );
                                    v810 = v1435;
                                  }
                                  ((void (__fastcall *)(LPCWSTR))off_180985138)(lpModuleName);
                                  v104 = 0LL;
                                  if ( v1406 )
                                    ((void (__fastcall *)(SIZE_T, SIZE_T))off_180985178)(v810, v1406);
                                  goto LABEL_1028;
                                }
                                v818 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                              }
                              else
                              {
                                v818 = -5723992;
                              }
                              v1423 = v818;
                              v1509 = v818;
                              goto LABEL_1009;
                            }
                          }
                          goto LABEL_951;
                        }
LABEL_952:
                        v104 = 0LL;
                        goto LABEL_1056;
                      }
                      v786 = 0xFFFFFF;
                    }
                    else
                    {
                      v786 = -5723992;
                    }
                    v1551 = v786;
                    goto LABEL_970;
                  }
                  if ( v1768 || (v840 = -64, v625 == 1) )
                    v840 = -1;
                  LOWORD(v1532) = 0;
                  v841 = 0;
                  BYTE2(v1532) = v840;
                  HIBYTE(v1532) = 1;
                  v1575 = 0;
                  v1553 = 0;
                  v1493 = (void *)((__int64 (__fastcall *)(size_t))off_180985110)(v1376);
                  if ( !v1493 )
                  {
                    GetLastError();
                    goto LABEL_1056;
                  }
                  if ( v1422 == 1 )
                  {
                    v842 = DWORD2(v1777) - v1777;
                    if ( DWORD2(v1777) - (int)v1777 <= DWORD2(v1776) - (int)v1776 )
                      v842 = DWORD2(v1776) - v1776;
                    v843 = HIDWORD(v1777) - DWORD1(v1776);
                    LODWORD(Size) = v842;
                    v844 = 0;
                    v1581 = HIDWORD(v1777) - DWORD1(v1776);
                    LODWORD(v1582) = 0;
                    if ( v1767 )
                    {
                      v841 = v842 + v1776 - DWORD2(v1776);
                      v844 = v841;
                      v1553 = v842 + v1777 - DWORD2(v1777);
                      LODWORD(v1582) = v1553;
                    }
                    LODWORD(v1578) = HIDWORD(v1776) - DWORD1(v1776);
                    v845 = v844 + DWORD2(v1776) - v1776;
                    v846 = (_DWORD)v1582 + DWORD2(v1777) - v1777;
                    LODWORD(v1579) = DWORD1(v1777) - DWORD1(v1776);
                    v1449 = HIDWORD(v1777) - DWORD1(v1776);
                  }
                  else
                  {
                    v842 = DWORD2(v1787);
                    v843 = HIDWORD(v1787);
                    v1710 = v1776;
                    v845 = DWORD2(v1776);
                    v841 = v1776;
                    LODWORD(v1578) = HIDWORD(v1776);
                    v1711 = v1777;
                    v846 = DWORD2(v1777);
                    v1575 = DWORD1(v1776);
                    v1449 = HIDWORD(v1777);
                    LODWORD(v1579) = DWORD1(v1777);
                    v1553 = v1777;
                    v1581 = HIDWORD(v1787);
                    LODWORD(Size) = DWORD2(v1787);
                  }
                  LODWORD(v1582) = v846;
                  v1692 = 0LL;
                  v1804 = 0LL;
                  v1803 = 0LL;
                  v1805 = 0;
                  DWORD2(v1802) = -v843;
                  LODWORD(v1802) = 40;
                  DWORD1(v1802) = v842;
                  HIDWORD(v1802) = 2097153;
                  v847 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                           v1493,
                           &v1802,
                           0LL,
                           &v1692,
                           0LL,
                           0);
                  v1514 = (LPCWSTR)v847;
                  if ( !v847 )
                  {
                    GetLastError();
                    v838 = v1493;
                    v104 = 0LL;
LABEL_1055:
                    ((void (__fastcall *)(void *))off_180985130)(v838);
LABEL_1056:
                    if ( Srce )
                      ((void (__fastcall *)(LPVOID))off_180985138)(Srce);
                    goto LABEL_1058;
                  }
                  ((void (__fastcall *)(void *, __int64))off_180985178)(v1493, v847);
                  if ( v1422 == 1 && Srce )
                  {
                    v1790 = 0LL;
                    v1792 = v1581;
                    v1791 = v842;
                    ((void (__fastcall *)(void *, __int64 *))off_1809851E8)(v1493, &v1790);
                  }
                  v1457 = v1768;
                  v1407 = v1772;
                  v1476 = (wchar_t *)v1769;
                  memset_0(v1757, 0, 0x68uLL);
                  memset_0(v1738, 0, 0x68uLL);
                  v1436 = 0LL;
                  v1362 = 0;
                  v1344 = 0;
                  v1814 = 0LL;
                  v1816 = 0LL;
                  v1815 = 0LL;
                  v1817 = 0;
                  v1786 = 0LL;
                  if ( v1476 )
                  {
                    v848 = ((__int64 (__fastcall *)(void *, __int64))off_180985150)(v1493, 7LL);
                    if ( !v848 )
                      goto LABEL_1049;
                    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                         v848,
                                         104LL,
                                         v1757) )
                    {
                      v1436 = v1760;
                      v1362 = v1758;
                      v1344 = v1759;
                    }
                    lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(void *))off_180985110)(v1493);
                    if ( lpModuleName )
                    {
                      v912 = v845 - v841;
                      DWORD2(v1814) = v1575 - v1578;
                      v1693 = 0LL;
                      v1815 = 0LL;
                      v1816 = 0LL;
                      v1817 = 0;
                      LODWORD(v1814) = 40;
                      DWORD1(v1814) = v912;
                      HIDWORD(v1814) = 2097153;
                      v913 = ((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                               lpModuleName,
                               &v1814,
                               0LL,
                               &v1693,
                               0LL,
                               0);
                      v1559 = v913;
                      if ( v913 )
                      {
                        v916 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(v913, 104LL, v1738);
                        DWORD2(v1786) = v912;
                        v917 = 0LL;
                        if ( v916 )
                          v917 = v1739;
                        HIDWORD(v1786) = v1578 - v1575;
                        v1583 = v917;
                        v918 = lpModuleName;
                        ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(lpModuleName, v1559);
                        ((void (__fastcall *)(LPCWSTR, __int64))off_180985180)(v918, 1LL);
                        v919 = ((__int64 (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(v918, v1407);
                        v920 = off_1809851E8;
                        v1408 = v919;
                        v921 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                        ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v920)(lpModuleName, &v1786, v921);
                        v915 = 0;
                        ((void (__fastcall *)(LPCWSTR, wchar_t *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                          lpModuleName,
                          v1476,
                          0xFFFFFFFFLL,
                          &v1786,
                          v1489,
                          0LL);
                        if ( v1422 == 1 )
                        {
                          if ( v1457 )
                            v1458 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                          else
                            v1458 = 0xFFFFFF;
                        }
                        else
                        {
                          v1458 = -5723992;
                        }
                        v922 = -v841;
                        v923 = 0;
                        if ( v841 >= 0 )
                        {
                          v923 = v841;
                          v922 = 0;
                        }
                        v924 = -v1575;
                        v925 = 0;
                        if ( v1575 >= 0 )
                        {
                          v925 = v1575;
                          v924 = 0;
                        }
                        v926 = DWORD2(v1786) - v922;
                        if ( DWORD2(v1786) - v922 >= v1362 - v923 )
                          v926 = v1362 - v923;
                        v927 = HIDWORD(v1786) - v924;
                        if ( HIDWORD(v1786) - v924 >= v1344 - v925 )
                          v927 = v1344 - v925;
                        if ( v926 > 0 && v927 > 0 )
                        {
                          v928 = v926;
                          v1346 = 0;
                          LODWORD(v1578) = 0;
                          v929 = (char *)v1583 + 4 * v922 + 4 * (__int64)(v924 * DWORD2(v1786));
                          v1477 = (wchar_t *)v929;
                          v930 = v1436 + 4 * (v923 + (__int64)(v925 * v1362));
                          v1583 = (void *)(4LL * SDWORD2(v1786));
                          v931 = v1583;
                          v932 = 0;
                          v1576 = 4LL * v1362;
                          v1437 = v930;
                          do
                          {
                            v1364 = 0;
                            v933 = v930 - (_QWORD)v929;
                            v934 = (unsigned __int8 *)(v929 + 2);
                            v935 = 0;
                            do
                            {
                              if ( (unsigned __int8)((*v934 + *(v934 - 2) + 2 * (unsigned int)*(v934 - 1)) >> 2) != 0xFF )
                              {
                                v936 = (unsigned __int8)~((*v934 + *(v934 - 2) + 2 * (unsigned int)*(v934 - 1)) >> 2);
                                v934[v933] -= ~((*v934 + *(v934 - 2) + 2 * (unsigned int)*(v934 - 1)) >> 2)
                                            * (v1458 - v934[v933]);
                                v937 = v934[v933 - 1];
                                v938 = (unsigned __int64)(2155905153LL * v936 * (BYTE1(v1458) - v937)) >> 32;
                                v934[v933 - 1] = v937 + (v938 >> 7 < 0) + (v938 >> 7);
                                v939 = v934[v933 - 2];
                                v940 = (unsigned __int64)(2155905153LL * v936 * (BYTE2(v1458) - v939)) >> 32;
                                v932 = v1578;
                                v934[v933 - 2] = v939 + (v940 >> 7 < 0) + (v940 >> 7);
                                v941 = v934[v933 + 1];
                                v942 = v936 * (255 - v941);
                                v935 = v1364;
                                v934[v933 + 1] = v941 + v942 / 255;
                              }
                              ++v935;
                              v934 += 4;
                              v1364 = v935;
                              v915 = v932;
                            }
                            while ( v935 < v928 );
                            v929 = (char *)v1477 + (_QWORD)v931;
                            v930 = v1576 + v1437;
                            v1477 = (wchar_t *)((char *)v1477 + (_QWORD)v931);
                            v1437 += v1576;
                            ++v1346;
                            LODWORD(v1578) = v932;
                          }
                          while ( v1346 < v927 );
                          v92 = (int)v1586;
                          v842 = Size;
                          v846 = (int)v1582;
                        }
                        ((void (__fastcall *)(SIZE_T))off_180985138)(v1559);
                        if ( v1408 )
                          ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(lpModuleName, v1408);
                      }
                      else
                      {
                        v914 = GetLastError();
                        v915 = v914;
                        if ( v914 > 0 )
                          v915 = (unsigned __int16)v914 | 0x80070000;
                        if ( v915 >= 0 )
                          v915 = -2147467259;
                      }
                      ((void (__fastcall *)(LPCWSTR))off_180985130)(lpModuleName);
                      if ( v915 >= 0 )
                      {
                        v943 = v1770;
                        v1347 = v1768;
                        v1409 = v1773;
                        v1478 = (wchar_t *)v1770;
                        memset_0(v1761, 0, 0x68uLL);
                        memset_0(v1765, 0, 0x68uLL);
                        v1438 = 0LL;
                        v1365 = 0;
                        v1459 = 0;
                        v1820 = 0LL;
                        v1821 = 0;
                        v1818 = 0LL;
                        v1819 = 0LL;
                        v1793 = 0LL;
                        if ( v943 )
                        {
                          v838 = v1493;
                          v944 = ((__int64 (__fastcall *)(void *, __int64))off_180985150)(v1493, 7LL);
                          if ( v944 )
                          {
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                 v944,
                                                 104LL,
                                                 v1761) )
                            {
                              v1438 = v1764;
                              v1365 = v1762;
                              v1459 = v1763;
                            }
                            lpModuleName = (LPCWSTR)((__int64 (__fastcall *)(void *))off_180985110)(v1493);
                            v945 = lpModuleName;
                            if ( lpModuleName )
                            {
                              v946 = v846 - v1553;
                              DWORD2(v1818) = (_DWORD)v1579 - v1449;
                              v1694[0] = 0LL;
                              v1819 = 0LL;
                              v1820 = 0LL;
                              v1821 = 0;
                              LODWORD(v1818) = 40;
                              DWORD1(v1818) = v946;
                              HIDWORD(v1818) = 2097153;
                              v947 = ((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_180985118)(
                                       lpModuleName,
                                       &v1818,
                                       0LL,
                                       v1694,
                                       0LL,
                                       0);
                              v1560 = v947;
                              if ( !v947 )
                              {
                                v948 = GetLastError();
                                v104 = 0LL;
                                v949 = v948;
                                if ( v948 > 0 )
                                  v949 = (unsigned __int16)v948 | 0x80070000;
                                if ( v949 >= 0 )
                                  v949 = -2147467259;
LABEL_1175:
                                ((void (__fastcall *)(LPCWSTR))off_180985130)(v945);
                                if ( v949 >= 0 )
                                {
                                  v838 = v1493;
                                  v839 = v1376;
                                  if ( v1422 == 1 )
                                    ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, unsigned int, void *, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                                      v1376,
                                      (unsigned int)v1776,
                                      DWORD1(v1776),
                                      v842,
                                      v1581,
                                      v1493,
                                      0,
                                      0,
                                      13369376);
                                  else
                                    ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, unsigned int, void *, _DWORD, _DWORD, unsigned int, unsigned int, int))off_180985140)(
                                      v1376,
                                      (unsigned int)v1787,
                                      DWORD1(v1787),
                                      v842,
                                      v1581,
                                      v1493,
                                      0,
                                      0,
                                      v842,
                                      v1581,
                                      v1532);
                                  goto LABEL_1179;
                                }
                                v838 = v1493;
LABEL_1052:
                                v849 = v1514;
                                goto LABEL_1053;
                              }
                              v950 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                       v947,
                                       104LL,
                                       v1765);
                              DWORD2(v1793) = v946;
                              v951 = (int)v1579;
                              v952 = 0LL;
                              if ( v950 )
                                v952 = v1766;
                              HIDWORD(v1793) = v1449 - (_DWORD)v1579;
                              v1583 = v952;
                              ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(v945, v1560);
                              ((void (__fastcall *)(LPCWSTR, __int64))off_180985180)(v945, 1LL);
                              v953 = ((__int64 (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(v945, v1409);
                              v954 = off_1809851E8;
                              v1410 = v953;
                              v955 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                              ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v954)(v945, &v1793, v955);
                              v949 = 0;
                              ((void (__fastcall *)(LPCWSTR, wchar_t *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                v945,
                                v1478,
                                0xFFFFFFFFLL,
                                &v1793,
                                v1489,
                                0LL);
                              if ( v1422 == 1 )
                              {
                                if ( !v1347 )
                                {
                                  v1348 = 0xFFFFFF;
LABEL_1156:
                                  v957 = v1365;
                                  v958 = -v1553;
                                  v959 = 0;
                                  v960 = 0;
                                  if ( v1553 >= 0 )
                                  {
                                    v959 = v1553;
                                    v958 = 0;
                                  }
                                  v961 = -v951;
                                  if ( v951 >= 0 )
                                  {
                                    v960 = v951;
                                    v961 = 0;
                                  }
                                  v962 = DWORD2(v1793) - v958;
                                  if ( DWORD2(v1793) - v958 >= v1365 - v959 )
                                    v962 = v1365 - v959;
                                  v963 = HIDWORD(v1793) - v961;
                                  if ( HIDWORD(v1793) - v961 >= v1459 - v960 )
                                    v963 = v1459 - v960;
                                  if ( v962 > 0 && v963 > 0 )
                                  {
                                    v1366 = 0;
                                    v964 = (char *)v1583 + 4 * v958 + 4 * (__int64)(v961 * DWORD2(v1793));
                                    v1479 = (wchar_t *)v964;
                                    v965 = v1438 + 4 * (v959 + (__int64)(v960 * (int)v957));
                                    v1583 = (void *)(4LL * SDWORD2(v1793));
                                    v1451 = 4 * v957;
                                    v1439 = v965;
                                    do
                                    {
                                      v966 = (unsigned __int8 *)(v964 + 2);
                                      v1460 = 0;
                                      v967 = v965 - (_QWORD)v964;
                                      v968 = 0;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v966 + *(v966 - 2) + 2 * (unsigned int)*(v966 - 1)) >> 2) != 0xFF )
                                        {
                                          v969 = (unsigned __int8)~((*v966 + *(v966 - 2) + 2 * (unsigned int)*(v966 - 1)) >> 2);
                                          v966[v967] -= ~((*v966 + *(v966 - 2) + 2 * (unsigned int)*(v966 - 1)) >> 2)
                                                      * (v1509 - v966[v967]);
                                          v970 = v966[v967 - 1];
                                          v971 = (unsigned __int64)(2155905153LL * v969 * (BYTE1(v1348) - v970)) >> 32;
                                          v966[v967 - 1] = v970 + (v971 >> 7 < 0) + (v971 >> 7);
                                          v972 = v966[v967 - 2];
                                          v973 = (unsigned __int64)(2155905153LL * v969 * (BYTE2(v1348) - v972)) >> 32;
                                          v966[v967 - 2] = v972 + (v973 >> 7 < 0) + (v973 >> 7);
                                          v974 = v966[v967 + 1];
                                          v975 = v969 * (255 - v974);
                                          v968 = v1460;
                                          v966[v967 + 1] = v974 + v975 / 255;
                                        }
                                        ++v968;
                                        v966 += 4;
                                        v1460 = v968;
                                        v949 = 0;
                                      }
                                      while ( v968 < v962 );
                                      v964 = (char *)v1479 + (_QWORD)v1583;
                                      v965 = v1451 + v1439;
                                      v1479 = (wchar_t *)((char *)v1479 + (_QWORD)v1583);
                                      v1439 += v1451;
                                      ++v1366;
                                    }
                                    while ( v1366 < v963 );
                                    v92 = (int)v1586;
                                    v842 = Size;
                                    v945 = lpModuleName;
                                  }
                                  ((void (__fastcall *)(SIZE_T))off_180985138)(v1560);
                                  v104 = 0LL;
                                  if ( v1410 )
                                    ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(v945, v1410);
                                  goto LABEL_1175;
                                }
                                v956 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                              }
                              else
                              {
                                v956 = -5723992;
                              }
                              v1348 = v956;
                              v1509 = v956;
                              goto LABEL_1156;
                            }
                          }
                          GetLastError();
LABEL_1051:
                          v104 = 0LL;
                          goto LABEL_1052;
                        }
                      }
                    }
                    else
                    {
LABEL_1049:
                      GetLastError();
                    }
                  }
                  v838 = v1493;
                  goto LABEL_1051;
                }
              }
              else
              {
                v770 = 0;
              }
              if ( v625 != 1 )
                goto LABEL_946;
              goto LABEL_944;
            }
            v628 = 0LL;
            v1664[0] = 0LL;
            v1684 = 0LL;
            v627 = 0;
            v1685 = 0LL;
            v1686 = 0LL;
            v1687 = 0LL;
            v1688 = 0LL;
            v1611 = 0;
            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1809851A0)(
                                  8LL,
                                  &v1585,
                                  0LL,
                                  &v1611) )
              goto LABEL_711;
            v630 = (char *)MemoryAlloc(2LL * v1611);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1687);
            if ( !v630 )
            {
              v1687 = 0LL;
              v627 = -2147024882;
              goto LABEL_727;
            }
            v1687 = v630;
            v631 = MemoryAlloc(4LL * (v1585 + 1));
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1688);
            if ( v631 )
            {
              v1688 = v631;
              if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1809851A0)(
                                    8LL,
                                    &v1585,
                                    v630,
                                    &v1611) )
              {
LABEL_711:
                v629 = GetLastError();
                v627 = v629;
                if ( v629 > 0 )
                  v627 = (unsigned __int16)v629 | 0x80070000;
                if ( v627 >= 0 )
                  v627 = -2147467259;
LABEL_727:
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1688);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1687);
                if ( v627 >= 0 )
                {
                  v634 = 0;
                  v635 = 0;
                  v1569 = 0;
                  if ( (_DWORD)v1525 )
                  {
                    v636 = 0LL;
LABEL_730:
                    v637 = 0;
                    v638 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
                    while ( v628[v636] != *v638 )
                    {
                      ++v638;
                      if ( ++v637 >= 0x26 )
                      {
                        ++v635;
                        ++v636;
                        if ( v635 >= (unsigned int)v1525 )
                          goto LABEL_736;
                        goto LABEL_730;
                      }
                    }
                    v634 = v637;
                    v1569 = v637;
                  }
LABEL_736:
                  v639 = v634;
                  v1526 = 0;
                  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))off_1809851A8)(
                                       `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v634],
                                       v1843,
                                       85LL)
                    && (int)((__int64 (__fastcall *)(_BYTE *, __int64, char *))off_180985190)(v1843, 88LL, v1794) > 0 )
                  {
                    v1526 = (v1795 >> 27) & 1;
                  }
                  v640 = L"Segoe UI Light";
                  v641 = 19LL;
                  v642 = (const wchar_t **)v1841;
                  do
                  {
                    *v642 = v640;
                    v643 = -1LL;
                    do
                      ++v643;
                    while ( v640[v643] );
                    ++v642;
                    v640 += v643 + 1;
                    --v641;
                  }
                  while ( v641 );
                  v1400 = v1841[*((unsigned __int8 *)&`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping
                                + 3 * v639)];
                  v644 = (unsigned __int8)byte_180836F32[3 * v639];
                  v1471 = (wchar_t *)v1841[(unsigned __int8)byte_180836F31[3 * v639]];
                  v1583 = v1471;
                  v1431 = v1841[v644];
                  v645 = (char *)MemoryAlloc(0x1C90uLL);
                  v1360 = v645;
                  if ( v645 )
                  {
                    v648 = (unsigned __int8 *)&unk_1808B5392;
                    v649 = -1;
                    v650 = 0;
                    v651 = 0;
                    v652 = 0;
                    v653 = v645 + 7;
                    v654 = 914LL;
                    do
                    {
                      v655 = *(v648 - 1) | (*(v648 - 2) << 8);
                      v656 = v648[2] << 8;
                      v657 = *v648;
                      v648 += 8;
                      v658 = *(v648 - 7) | ((v657 | (v655 << 8)) << 8);
                      v659 = v658 ^ v652;
                      v660 = *(v648 - 3) | ((*(v648 - 4) | ((*(v648 - 5) | v656) << 8)) << 8);
                      v661 = v659 ^ v660 ^ v651 ^ 0xAC987321;
                      v662 = (__ROL4__(v661, 10) + 4991 * __ROL4__(v661 + 1419157410, 5)) ^ v659;
                      v663 = (43881 * __ROR4__(v662 + 133239679, 9) - __ROL4__(v662, 2)) ^ v661;
                      v664 = (24670 * v663 - (v663 >> 13) - 123127970) ^ v662;
                      v665 = (2033 * __ROL4__(v664 ^ 0xAB69, 6) - __ROL4__(v664, 2)) ^ v663;
                      v666 = (133239679 - (v665 ^ 0xAB69605E)) ^ v664;
                      v667 = (43881 * (v666 ^ 0x137F)) ^ __ROR4__(v666, 6) ^ v665;
                      v668 = (__ROL4__(v667, 2) + 24670 * __ROR4__(v667 + 133239679, 15)) ^ v666;
                      v669 = (2033 * __ROR4__(v668 + 1419157410, 14) - __ROL4__(v668, 8)) ^ v667;
                      v670 = __ROR4__(v669, 10) ^ (4991 * __ROR4__(v669 ^ 0xAB69605E, 12)) ^ v668;
                      v671 = (v670 >> 10) ^ (43881 * (v670 ^ 0x7F1)) ^ v669;
                      v672 = (2033 * (__ROR4__(~v671, 5) + 24670)) ^ v670;
                      v673 = v671 ^ (v672 - 2033) ^ 0xAB69605E;
                      v674 = ((v673 >> 2) + 4991 * __ROL4__(v671 ^ (v672 - 2033) ^ 0xAB6967AF, 2)) ^ v672;
                      v675 = (__ROL4__(v674, 7) + 43881 * __ROR4__(v674 - 133239679, 6)) ^ v673;
                      v676 = (24670 * (v675 ^ 0x137F) + __ROR4__(v675, 9)) ^ v674;
                      v677 = (__ROL4__(v676, 7) + 2033 * __ROL4__(v676 ^ 0xAB69, 5)) ^ v675;
                      v678 = v677 ^ v676 ^ 0xAC987321;
                      v679 = (4991 * __ROR4__(v678, 3) - 219010071) ^ v677;
                      v680 = (24670 * __ROR4__(v679 - 133239679, 1) - __ROR4__(v679, 6)) ^ v678;
                      v681 = (__ROL4__(v680, 14) + 2033 * __ROL4__(v680 - 1419157410, 3)) ^ v679;
                      v682 = (4991 * __ROL4__(v681 - 1419157410, 15) - __ROR4__(v681, 14)) ^ v680;
                      v683 = (v682 >> 3) ^ (43881 * (v682 ^ 0x605E)) ^ v681;
                      v684 = 24670 * __ROL4__(v683 ^ 0x7F1137F, 4);
                      v685 = v683;
                      v686 = v649 ^ v683;
                      v649 = v660;
                      v687 = v650 ^ __ROL4__(v685, 2) ^ v684;
                      v650 = v658;
                      v688 = v687 ^ v682;
                      *(v653 - 4) = v688;
                      *v653 = v686;
                      v653 += 8;
                      v689 = __ROR4__(v688, 8);
                      *(v653 - 13) = v689;
                      v690 = __ROR4__(v686, 8);
                      *(v653 - 9) = v690;
                      v691 = __ROR4__(v689, 8);
                      *(v653 - 14) = v691;
                      v692 = __ROR4__(v690, 8);
                      *(v653 - 10) = v692;
                      v693 = __ROR4__(v691, 8);
                      v694 = __ROR4__(v692, 8);
                      *(v653 - 15) = v693;
                      *(v653 - 11) = v694;
                      v651 = __ROR4__(v694, 8);
                      v652 = __ROR4__(v693, 8);
                      --v654;
                    }
                    while ( v654 );
                    v695 = v1360;
                    v696 = 0LL;
                    v697 = 0LL;
                    do
                    {
                      v698 = _mm_loadu_si128((const __m128i *)&v1360[v696]);
                      v696 += 16LL;
                      v699 = _mm_xor_si128(v698, v697);
                      v697 = v699;
                    }
                    while ( v696 < 0x1C90 );
                    v700 = _mm_xor_si128(v699, _mm_srli_si128(v699, 8));
                    v701 = _mm_xor_si128(v700, _mm_srli_si128(v700, 4));
                    v702 = _mm_xor_si128(v701, _mm_srli_si128(v701, 2));
                    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v702, _mm_srli_si128(v702, 1))) == 127LL )
                    {
                      v1684 = v1360;
                      v627 = 0;
                      v1685 = 7312LL;
                      if ( v1360 )
                        v1685 = 7312LL;
                      else
                        v695 = 0LL;
                      v703 = v1835;
                      v704 = 6LL;
                      do
                      {
                        for ( n = 0; n < 0x26; ++n )
                        {
                          if ( v1569 == n )
                            *v703 = v695;
                          v706 = -1LL;
                          do
                            ++v706;
                          while ( v695[v706] );
                          v695 += v706 + 1;
                        }
                        ++v703;
                        --v704;
                      }
                      while ( v704 );
                      v707 = MemoryAlloc(0x18uLL);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1686);
                      if ( v707 )
                      {
                        v1686 = v707;
                        v1570 = 0;
                        v708 = v707;
                        v1448 = (SIZE_T)v707;
                        v709 = v1842;
                        v1361 = v707;
                        *(_OWORD *)v707 = 0LL;
                        v707[2] = 0LL;
                        v710 = 0;
                        v1456 = v1842;
                        v1685 = 7312LL;
                        while ( 2 )
                        {
                          v711 = *v709;
                          v712 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
                          v713 = 0LL;
                          while ( v711 != *v712 )
                          {
                            v713 = (unsigned int)(v713 + 1);
                            ++v712;
                            if ( (unsigned int)v713 >= 6 )
                              goto LABEL_784;
                          }
                          v714 = v1835[v713];
                          v715 = -1LL;
                          do
                            ++v715;
                          while ( *(_BYTE *)(v714 + v715) );
                          v716 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1809851C0)(
                                   65001LL,
                                   0LL,
                                   v714,
                                   (unsigned int)(v715 + 1),
                                   0LL,
                                   0);
                          v1550 = v716;
                          if ( !v716 )
                          {
                            v720 = GetLastError();
                            v627 = v720;
                            if ( v720 > 0 )
                              v627 = (unsigned __int16)v720 | 0x80070000;
                            if ( v627 >= 0 )
                              v627 = -2147467259;
                            goto LABEL_794;
                          }
                          v717 = MemoryAlloc(2LL * v716);
                          *v1361 = v717;
                          if ( !v717 )
                            goto LABEL_770;
                          v718 = -1LL;
                          do
                            ++v718;
                          while ( *(_BYTE *)(v714 + v718) );
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1809851C0)(
                                                65001LL,
                                                0LL,
                                                v714,
                                                (unsigned int)(v718 + 1),
                                                v717,
                                                v1550) )
                          {
                            v719 = GetLastError();
                            v627 = v719;
                            if ( v719 > 0 )
                              v627 = (unsigned __int16)v719 | 0x80070000;
                            if ( v627 >= 0 )
                              v627 = -2147467259;
                            goto LABEL_794;
                          }
                          v708 = v1361;
                          v710 = v1570;
LABEL_784:
                          ++v710;
                          v709 = v1456 + 1;
                          v1570 = v710;
                          ++v708;
                          ++v1456;
                          v1361 = v708;
                          if ( v710 < 3 )
                            continue;
                          break;
                        }
                        v707 = 0LL;
                        v1682 = (void **)v1448;
                        v1767 = v1526;
                        v1686 = 0LL;
                      }
                      else
                      {
                        v707 = 0LL;
                        v1686 = 0LL;
LABEL_770:
                        v627 = -2147024882;
                      }
LABEL_794:
                      if ( v707 )
                      {
                        v721 = 3LL;
                        v646 = (const wchar_t *)v1431;
                        v1432 = 3LL;
                        v1685 = 7312LL;
                        v1471 = (wchar_t *)v1583;
                        do
                        {
                          v722 = (_WORD *)*v707;
                          if ( *v707 )
                          {
                            v723 = -1LL;
                            do
                              ++v723;
                            while ( v722[v723] );
                            memset(v722, 0, 2 * v723 + 2);
                            MemoryFree((void *)*v707);
                            v721 = v1432;
                          }
                          ++v707;
                          v1432 = --v721;
                        }
                        while ( v721 );
LABEL_746:
                        if ( v1684 )
                          memset(v1684, 0, v1685);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1686);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1684);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(v1664);
                        if ( v627 < 0 )
                          goto LABEL_921;
                        if ( v1682 )
                          v647 = v1682;
                        else
                          v647 = 0LL;
                        v1769 = *v647;
                        if ( v1682 )
                          v724 = v1682;
                        else
                          v724 = 0LL;
                        v1770 = v724[1];
                        if ( v1682 )
                        {
                          v725 = v1682;
                          v104 = 0LL;
                        }
                        else
                        {
                          v104 = 0LL;
                          v725 = 0LL;
                        }
                        v726 = v725[2];
                        v1727 = 0LL;
                        LODWORD(v1727) = 16;
                        v1771 = v726;
                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_180985268)(
                                              66LL,
                                              0LL,
                                              &v1727,
                                              0LL) )
                        {
                          v727 = GetLastError();
                          v627 = v727;
                          if ( v727 > 0 )
                            v627 = (unsigned __int16)v727 | 0x80070000;
                          v1768 = 0;
                          if ( v627 >= 0 )
                            v627 = -2147467259;
                          goto LABEL_922;
                        }
                        v1768 = BYTE4(v1727) & 1;
                        v1527 = 42;
                        if ( v1422 == 1 )
                        {
                          v1540 = 42;
                        }
                        else
                        {
                          if ( v1422 != 2 )
                          {
                            if ( v1422 == 3 )
                            {
                              v1540 = 225;
                              v1488 = 225;
                            }
                            goto LABEL_822;
                          }
                          v1540 = 15;
                        }
                        v1488 = 11;
LABEL_822:
                        v728 = 96;
                        v1571 = 96;
                        memset_0(v1831, 0, 0xDCuLL);
                        v1832 = 220;
                        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *))off_1809851E0)(
                                             0LL,
                                             0xFFFFFFFFLL,
                                             v1831) )
                        {
                          v728 = v1833;
                          *((_QWORD *)&v1726 + 1) = v1834;
                          *(_QWORD *)&v1726 = 0LL;
                          if ( v1833 < 0x60u )
                            v728 = 96;
                          v1571 = v728;
                        }
                        v729 = v646;
                        if ( v1422 == 1 )
                          v729 = (const wchar_t *)v1400;
                        memset_0(v1822, 0, 0x5CuLL);
                        v627 = 0;
                        v1433 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
                        if ( !v1433 )
                          goto LABEL_829;
                        v731 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(v1540, v728, 72LL);
                        v1822[4] = 400;
                        v1823 = 5;
                        v1822[0] = -v731;
                        StringCchCopyW(v1824, 32LL, v729);
                        v732 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1822);
                        v104 = 0LL;
                        if ( v732 )
                        {
                          v1772 = v732;
                        }
                        else
                        {
                          v733 = GetLastError();
                          v627 = v733;
                          if ( v733 > 0 )
                            v627 = (unsigned __int16)v733 | 0x80070000;
                          if ( v627 >= 0 )
                            v627 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, SIZE_T))off_180985260)(0LL, v1433);
                        if ( v627 < 0 )
                          goto LABEL_922;
                        if ( v1422 == 1 )
                          v646 = (const wchar_t *)v1400;
                        memset_0(v1825, 0, 0x5CuLL);
                        v627 = 0;
                        v734 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
                        if ( !v734 )
                        {
LABEL_829:
                          v730 = GetLastError();
                          v104 = 0LL;
                          v627 = v730;
                          if ( v730 > 0 )
                            v627 = (unsigned __int16)v730 | 0x80070000;
                          if ( v627 >= 0 )
                            v627 = -2147467259;
                          goto LABEL_922;
                        }
                        v735 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(v1488, v728, 72LL);
                        v1825[4] = 400;
                        v1826 = 5;
                        v1825[0] = -v735;
                        StringCchCopyW(v1827, 32LL, v646);
                        v736 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1825);
                        if ( v736 )
                        {
                          v1773 = v736;
                        }
                        else
                        {
                          v737 = GetLastError();
                          v627 = v737;
                          if ( v737 > 0 )
                            v627 = (unsigned __int16)v737 | 0x80070000;
                          if ( v627 >= 0 )
                            v627 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, __int64))off_180985260)(0LL, v734);
                        v104 = 0LL;
                        if ( v627 < 0 )
                          goto LABEL_922;
                        v738 = 0;
                        if ( v1422 != 1 )
                        {
                          if ( v1422 == 2 )
                          {
                            v738 = 0;
                            LODWORD(v104) = SDWORD2(v1726) / 4;
LABEL_854:
                            *((_QWORD *)&v1787 + 1) = __PAIR64__(v738, v104);
                            if ( v1422 == 1 )
                            {
                              v740 = 150;
                              v1488 = 32;
                            }
                            else
                            {
                              if ( (unsigned int)(v1422 - 2) >= 2 )
                              {
                                v739 = v1585;
                                v1527 = v1585;
                                v740 = v1540;
                                goto LABEL_861;
                              }
                              v740 = 0;
                              v1527 = 0;
                              v1488 = 0;
                            }
                            v739 = 0;
                            v1540 = v740;
LABEL_861:
                            v741 = v1769;
                            v742 = v104 - v740 - v739;
                            v627 = 0;
                            DWORD2(v1777) = v742;
                            DWORD2(v1776) = v742;
                            v1401 = ((__int64 (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(lpModuleName, v1772);
                            v743 = v741;
                            v744 = lpModuleName;
                            if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                                  lpModuleName,
                                                  v743,
                                                  0xFFFFFFFFLL,
                                                  &v1776,
                                                  3152,
                                                  0LL) )
                              v627 = -2147467259;
                            if ( v1401 )
                              ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(v744, v1401);
                            if ( v627 >= 0 )
                            {
                              v745 = v1770;
                              v627 = 0;
                              v1402 = ((__int64 (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(lpModuleName, v1773);
                              v746 = v745;
                              v747 = lpModuleName;
                              if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                                    lpModuleName,
                                                    v746,
                                                    0xFFFFFFFFLL,
                                                    &v1777,
                                                    3152,
                                                    0LL) )
                                v627 = -2147467259;
                              if ( v1402 )
                                ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(v747, v1402);
                              if ( v627 >= 0 )
                              {
                                if ( (unsigned int)(v1422 - 2) <= 1 )
                                {
                                  v742 = DWORD2(v1777);
                                  if ( SDWORD2(v1776) > SDWORD2(v1777) )
                                    v742 = DWORD2(v1776);
                                }
                                if ( v1767 )
                                {
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1776,
                                    v742 + v739 - DWORD2(v1776),
                                    v1527);
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1777,
                                    v742 + v739 - DWORD2(v1777),
                                    v1488 + HIDWORD(v1776));
                                }
                                else
                                {
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1776, v1540, v1527);
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1777,
                                    v1540,
                                    v1488 + HIDWORD(v1776));
                                }
                                v625 = v1422;
                                if ( (unsigned int)(v1422 - 2) <= 1 )
                                {
                                  *((_QWORD *)&v1787 + 1) = __PAIR64__(HIDWORD(v1777), v742);
                                  v1775 = -5723992;
                                  goto LABEL_908;
                                }
                                if ( v1422 != 1 )
                                  goto LABEL_908;
                                v1775 = 0xFFFFFF;
                                memset_0(v1828, 0, 0x5CuLL);
                                v627 = 0;
                                v748 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(
                                         0LL,
                                         0LL,
                                         1027LL);
                                if ( v748 )
                                {
                                  v750 = v1571;
                                  v751 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1809851B8)(11LL, v1571);
                                  v1828[4] = 400;
                                  v1828[0] = -v751;
                                  v1829 = 5;
                                  StringCchCopyW(v1830, 32LL, v1471);
                                  v752 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1828);
                                  if ( v752 )
                                  {
                                    v1774 = v752;
                                  }
                                  else
                                  {
                                    v627 = GetLastError();
                                    v753 = v627 < 0;
                                    if ( v627 > 0 )
                                    {
                                      v627 = (unsigned __int16)v627 | 0x80070000;
                                      v753 = v627 < 0;
                                    }
                                    if ( !v753 )
                                      v627 = -2147467259;
                                  }
                                  ((void (__fastcall *)(_QWORD, __int64))off_180985260)(0LL, v748);
                                }
                                else
                                {
                                  v627 = GetLastError();
                                  v749 = v627 < 0;
                                  if ( v627 > 0 )
                                  {
                                    v627 = (unsigned __int16)v627 | 0x80070000;
                                    v749 = v627 < 0;
                                  }
                                  if ( !v749 )
                                  {
                                    v627 = -2147467259;
                                    v104 = 0LL;
LABEL_923:
                                    ((void (__fastcall *)(_QWORD, LPCWSTR))off_180985260)(0LL, lpModuleName);
                                    goto LABEL_924;
                                  }
                                  v750 = v1571;
                                }
                                if ( v627 >= 0 )
                                {
                                  v754 = v1771;
                                  v627 = 0;
                                  v1780 = v742;
                                  v755 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_180985178)(lpModuleName, v1774);
                                  v756 = v754;
                                  v757 = lpModuleName;
                                  if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1809851D8)(
                                                        lpModuleName,
                                                        v756,
                                                        0xFFFFFFFFLL,
                                                        &v1778,
                                                        1120,
                                                        0LL) )
                                    v627 = -2147467259;
                                  if ( v755 )
                                    ((void (__fastcall *)(LPCWSTR, __int64))off_180985178)(v757, v755);
                                  v104 = 0LL;
                                  if ( v627 < 0 )
                                    goto LABEL_922;
                                  v758 = v1780 + 24;
                                  if ( (int)(v1780 + 24) < 90 )
                                    v758 = 90;
                                  v1780 = v758;
                                  v1781 = 32;
                                  v1778 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1778,
                                            v750,
                                            96LL);
                                  v1779 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1779,
                                            v750,
                                            96LL);
                                  v1780 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1780,
                                            v750,
                                            96LL);
                                  v1781 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1781,
                                            v750,
                                            96LL);
                                  if ( v1767 )
                                  {
                                    v759 = (unsigned int)v1776;
                                    if ( (int)v1776 >= (int)v1777 )
                                      v759 = (unsigned int)v1777;
                                  }
                                  else
                                  {
                                    v760 = DWORD2(v1776);
                                    if ( SDWORD2(v1776) <= SDWORD2(v1777) )
                                      v760 = DWORD2(v1777);
                                    v759 = v1778 + v760 - v1780;
                                  }
                                  ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_180985250)(
                                    &v1778,
                                    v759,
                                    (unsigned int)(HIDWORD(v1777) + 36));
                                  v625 = v1422;
LABEL_908:
                                  v761 = v1767;
                                  v762 = HIDWORD(v1787);
                                  v763 = DWORD2(v1787);
                                  switch ( v625 )
                                  {
                                    case 1:
                                      v104 = 0LL;
                                      *(_QWORD *)&v1787 = 0LL;
                                      break;
                                    case 2:
                                      v1799 = 0LL;
                                      v1801 = 0LL;
                                      v1800 = 0LL;
                                      v765 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180985248)(0LL, 1LL);
                                      LODWORD(v1799) = 40;
                                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_180985208)(
                                                           v765,
                                                           &v1799) )
                                      {
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1800 + 4);
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1800 + 12);
                                        if ( v761 )
                                          v766 = DWORD1(v1800) + 5 * HIDWORD(v1800) / 100;
                                        else
                                          v766 = 95 * (HIDWORD(v1800) - v763) / 100;
                                        LODWORD(v1787) = v766;
                                        DWORD1(v1787) = 95 * ((int)v1801 - v762) / 100;
                                      }
                                      break;
                                    case 3:
                                      v1796 = 0LL;
                                      v1798 = 0LL;
                                      v1797 = 0LL;
                                      v764 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180985248)(0LL, 1LL);
                                      LODWORD(v1796) = 40;
                                      v104 = 0LL;
                                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_180985208)(
                                                           v764,
                                                           &v1796) )
                                      {
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1797 + 4);
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1797 + 12);
                                        LODWORD(v1787) = 50 * (HIDWORD(v1797) - v763) / 100;
                                        DWORD1(v1787) = 50 * ((int)v1798 - v762) / 100;
                                      }
                                      break;
                                    default:
                                      v104 = 0LL;
                                      break;
                                  }
                                  v627 = 0;
                                  goto LABEL_923;
                                }
                              }
                            }
LABEL_921:
                            v104 = 0LL;
LABEL_922:
                            v625 = v1422;
                            goto LABEL_923;
                          }
                          if ( v1422 != 3 )
                            goto LABEL_854;
                        }
                        LODWORD(v104) = DWORD2(v1726);
                        v738 = HIDWORD(v1726);
                        goto LABEL_854;
                      }
                    }
                    else
                    {
                      v627 = -1073425151;
                      MemoryFree(v1360);
                      v1685 = 0LL;
                    }
                  }
                  else
                  {
                    v627 = -2147024882;
                  }
                }
                v646 = (const wchar_t *)v1431;
                goto LABEL_746;
              }
              v628 = v631;
              if ( v1585 )
              {
                for ( ii = 0; ii < v1585; ++ii )
                {
                  *v631 = ((__int64 (__fastcall *)(char *, _QWORD))off_1809851B0)(v630, 0LL);
                  v633 = -1LL;
                  do
                    ++v633;
                  while ( *(_WORD *)&v630[2 * v633] );
                  ++v631;
                  v630 += 2 * v633 + 2;
                }
              }
              *v631 = 1033;
              v1664[0] = v628;
              LODWORD(v1525) = v1585 + 1;
            }
            else
            {
              v627 = -2147024882;
            }
            v1688 = 0LL;
            goto LABEL_727;
          }
          v559 = g_WarbirdSecureFunctionsRefCount;
LABEL_704:
          g_WarbirdSecureFunctionsRefCount = v559 + 1;
          goto LABEL_705;
        }
        *((_BYTE *)v1399 + 823) = 0;
        memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
        if ( !*(_BYTE *)v1399 )
          goto LABEL_656;
        v1681 = v1399;
        while ( 1 )
        {
          v547 = v541;
          v548 = -1LL;
          do
            ++v548;
          while ( v541[v548] );
          v549 = &v541[v548];
          v550 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1507;
          if ( !GetModuleHandleExW(0, v547, (HMODULE *)v550) )
            break;
          v544 = 0;
          if ( **(_WORD **)v550 == 23117
            && (v551 = *(int *)(*(_QWORD *)v550 + 60LL), (unsigned int)v551 < 0x10000000)
            && (v552 = *(_QWORD *)v550 + v551, v552 >= *(_QWORD *)v550)
            && *(_DWORD *)v552 == 17744 )
          {
            if ( ((*(_WORD *)(v552 + 24) - 267) & 0xFEFF) != 0 )
            {
              v544 = -1073741811;
            }
            else
            {
              *(_QWORD *)(v550 + 12) = *(_QWORD *)(v552 + 136);
              *((_DWORD *)v550 + 2) = *(_DWORD *)(v552 + 80);
            }
          }
          else
          {
            v544 = -1073741701;
          }
          v553 = *(_DWORD *)(v549 + 1);
          v554 = 0;
          v541 = v549 + 3;
          v1487 = v553;
          for ( LODWORD(v1525) = 0; v554 < v1487; LODWORD(v1525) = v554 )
          {
            v555 = (const CHAR *)v541;
            v556 = -1LL;
            do
              ++v556;
            while ( *((_BYTE *)v541 + v556) );
            v541 = (WCHAR *)((char *)v541 + v556 + 1);
            if ( v544 >= 0 )
            {
              v557 = (void **)GetProcAddress(*(HMODULE *)v550, v555);
              if ( !v557 )
                goto LABEL_654;
              (&WARBIRD::g_FuncAddress)[v1539] = v557;
              v554 = (unsigned int)v1525;
            }
            ++v1539;
            ++v554;
          }
          ++v1507;
          v494 = 0;
          if ( !*(_BYTE *)v541 )
            goto LABEL_655;
        }
        v544 = -1073741702;
LABEL_654:
        v494 = 0;
LABEL_655:
        v541 = v1681;
        if ( v1681 )
        {
LABEL_656:
          v558 = GetProcessHeap();
          HeapFree(v558, 0, v541);
        }
        if ( v544 < 0 )
          goto LABEL_626;
        v493 = g_WarbirdSecureFunctionsRefCount;
      }
      g_WarbirdSecureFunctionsRefCount = v493 + 1;
      goto LABEL_660;
    }
    HIDWORD(v1714) = dwBytes;
    v121 = dwBytes;
    v122 = GetProcessHeap();
    v123 = HeapAlloc(v122, 8u, v121);
    if ( !v123 )
    {
      v92 = -1073741801;
      goto LABEL_97;
    }
    lpMem = v123;
    LODWORD(v1714) = 0;
    v124 = v123;
    pcchLength[1] = (size_t)v123;
    v1338 = v93;
    LODWORD(Size) = 8;
    v1357 = v91;
    v125 = RtlULongLongAdd((unsigned __int64)v123, 4LL, (unsigned __int64 *)&v1709);
    v92 = v125;
    LODWORD(v1586) = v125;
    if ( v125 < 0 )
    {
      v96 = v89;
      goto LABEL_99;
    }
    if ( v124 + 2 > (_DWORD *)((char *)v124 + HIDWORD(v1714)) )
    {
LABEL_141:
      v92 = -1073741789;
      goto LABEL_97;
    }
    v127 = v1709;
    *v124 = 4;
    *v127 = 0;
    v128 = v1714 + 1;
    LODWORD(v1714) = v1714 + 1;
    if ( !v126 )
      goto LABEL_138;
    if ( lpMem )
    {
      v132 = (int *)lpMem;
      v1656 = (int *)lpMem;
      v1544 = 0;
      if ( v128 )
      {
        do
        {
          v92 = RtlUIntAdd(4u, *v132, &v1647);
          LODWORD(v1586) = v92;
          if ( v92 < 0 )
            goto LABEL_116;
          v92 = RtlULongLongAdd((unsigned __int64)v132, v1647, (unsigned __int64 *)&v1656);
          LODWORD(v1586) = v92;
          if ( v92 < 0 )
            goto LABEL_116;
          v132 = v1656;
          ++v1544;
        }
        while ( v1544 < v134 );
        v1338 = v93;
        LODWORD(Size) = v133;
        v1357 = v91;
      }
      v92 = RtlULongLongAdd((unsigned __int64)v132, 4LL, (unsigned __int64 *)&v1718);
      LODWORD(v1586) = v92;
      if ( v92 >= 0 )
      {
        if ( (char *)v132 + v135 + 4 > (char *)lpMem + HIDWORD(v1714) )
          goto LABEL_141;
        *v132 = v135;
        memcpy_0(v1718, v91, v135);
        v130 = 4;
        v131 = v1714 + 1;
        LODWORD(v1714) = v1714 + 1;
        goto LABEL_156;
      }
    }
    else
    {
      v92 = RtlUIntAdd(4u, v126, (unsigned int *)&v1646);
      LODWORD(v1586) = v92;
      if ( v92 < 0 )
        goto LABEL_116;
      v129 = RtlUIntAdd(HIDWORD(v1714), v1646, (unsigned int *)&v1714 + 1);
      v131 = v1714;
      v92 = v129;
      LODWORD(v1586) = v129;
      if ( v129 >= 0 )
      {
        v131 = v1714 + 1;
        LODWORD(v1714) = v1714 + 1;
LABEL_156:
        v136 = Size;
        if ( !v93 )
        {
          if ( (_DWORD)Size )
            goto LABEL_138;
LABEL_160:
          if ( lpMem )
          {
            v140 = (int *)lpMem;
            v1657 = (int *)lpMem;
            v1545 = 0;
            if ( v131 )
            {
              do
              {
                v92 = RtlUIntAdd(4u, *v140, &v1649);
                LODWORD(v1586) = v92;
                if ( v92 < 0 )
                  goto LABEL_116;
                v92 = RtlULongLongAdd(v141, v1649, (unsigned __int64 *)&v1657);
                LODWORD(v1586) = v92;
                if ( v92 < 0 )
                  goto LABEL_116;
                v140 = v1657;
                ++v1545;
              }
              while ( v1545 < v142 );
              v1338 = v93;
              v1357 = v91;
            }
            v92 = RtlULongLongAdd((unsigned __int64)v140, 4LL, (unsigned __int64 *)&v1719);
            LODWORD(v1586) = v92;
            if ( v92 >= 0 )
            {
              if ( (char *)v143 + v136 + 4 > (char *)lpMem + HIDWORD(v1714) )
                goto LABEL_141;
              *v143 = v136;
              if ( v93 )
                memcpy_0(v1719, v93, v136);
              v139 = 1LL;
              v138 = v1714 + 1;
              LODWORD(v1714) = v1714 + 1;
              goto LABEL_176;
            }
          }
          else
          {
            v92 = RtlUIntAdd(v130, Size, (unsigned int *)&v1648);
            LODWORD(v1586) = v92;
            if ( v92 < 0 )
              goto LABEL_116;
            v137 = RtlUIntAdd(HIDWORD(v1714), v1648, (unsigned int *)&v1714 + 1);
            v138 = v1714;
            v92 = v137;
            LODWORD(v1586) = v137;
            if ( v137 >= 0 )
            {
              v139 = 1LL;
              v138 = v1714 + 1;
              LODWORD(v1714) = v1714 + 1;
              goto LABEL_176;
            }
          }
          v96 = v89;
          if ( v92 < 0 )
            goto LABEL_99;
          v139 = 1LL;
LABEL_176:
          if ( lpMem )
          {
            v147 = (int *)lpMem;
            v1658 = (int *)lpMem;
            v1546 = 0;
            if ( v138 )
            {
              do
              {
                v92 = RtlUIntAdd(4u, *v147, &v1592);
                LODWORD(v1586) = v92;
                if ( v92 < 0 )
                  goto LABEL_116;
                v92 = RtlULongLongAdd((unsigned __int64)v147, v1592, (unsigned __int64 *)&v1658);
                LODWORD(v1586) = v92;
                if ( v92 < 0 )
                  goto LABEL_116;
                v147 = v1658;
                ++v1546;
              }
              while ( v1546 < v148 );
              v1338 = v93;
              v1357 = v91;
            }
            v92 = RtlULongLongAdd((unsigned __int64)v147, 4LL, (unsigned __int64 *)&v1720);
            LODWORD(v1586) = v92;
            if ( v92 >= 0 )
            {
              if ( v147 + 3 > (int *)((char *)lpMem + HIDWORD(v1714)) )
                goto LABEL_141;
              v150 = v1720;
              *v147 = 8;
              v139 = (unsigned int)(v149 - 3);
              *v150 = v1455;
              v146 = v1714;
              goto LABEL_179;
            }
          }
          else
          {
            v92 = RtlUIntAdd(4u, 8, (unsigned int *)&v1591);
            LODWORD(v1586) = v92;
            if ( v92 < 0 )
              goto LABEL_116;
            v144 = RtlUIntAdd(HIDWORD(v1714), v1591, (unsigned int *)&v1714 + 1);
            v146 = v1714;
            v92 = v144;
            LODWORD(v1586) = v144;
            if ( v144 >= 0 )
            {
LABEL_179:
              LODWORD(v1714) = v139 + v146;
              goto LABEL_190;
            }
          }
          v96 = v89;
          if ( v92 < 0 )
            goto LABEL_99;
          v139 = 1LL;
LABEL_190:
          if ( StringCchLengthW(L"DeferWidgetsInitialization", v145, &v1659) < 0 )
          {
            v92 = -1073741762;
            goto LABEL_97;
          }
          v92 = RtlULongLongAdd(v1659, v139, &v1659);
          LODWORD(v1586) = v92;
          if ( v92 >= 0 )
          {
            if ( 2 * (_DWORD)v1659 )
            {
              if ( !lpMem )
              {
                LODWORD(v1586) = RtlUIntAdd(v152, 2 * (int)v1659, (unsigned int *)&v1593);
                v92 = (int)v1586;
                if ( (int)v1586 >= 0 )
                {
                  v153 = RtlUIntAdd(HIDWORD(v1714), v1593, (unsigned int *)&v1714 + 1);
                  v151 = v1714;
                  v92 = v153;
                  LODWORD(v1586) = v153;
                  if ( v153 >= 0 )
                  {
                    v151 = v139 + v1714;
                    LODWORD(v1586) = 0;
                    LODWORD(v1714) = v139 + v1714;
                    v92 = 0;
                  }
                }
                goto LABEL_208;
              }
              v154 = (int *)lpMem;
              v1660 = (int *)lpMem;
              if ( v151 )
              {
                do
                {
                  LODWORD(v1586) = RtlUIntAdd(4u, *v154, &v1613);
                  v92 = (int)v1586;
                  if ( (int)v1586 < 0 )
                    goto LABEL_208;
                  LODWORD(v1586) = RtlULongLongAdd((unsigned __int64)v154, v1613, (unsigned __int64 *)&v1660);
                  v92 = (int)v1586;
                  if ( (int)v1586 < 0 )
                    goto LABEL_208;
                  v154 = v1660;
                }
                while ( v155 + 1 < v151 );
              }
              LODWORD(v1586) = RtlULongLongAdd((unsigned __int64)v154, 4LL, (unsigned __int64 *)&v1721);
              v92 = (int)v1586;
              if ( (int)v1586 < 0 )
                goto LABEL_208;
              if ( (char *)v154 + v156 + 4 <= (char *)lpMem + HIDWORD(v1714) )
              {
                v157 = v1721;
                *v154 = v156;
                memcpy_0(v157, L"DeferWidgetsInitialization", (unsigned int)v156);
                v151 = v1714 + 1;
                LODWORD(v1714) = v1714 + 1;
                goto LABEL_208;
              }
              v92 = -1073741789;
            }
            else
            {
              v92 = -1073741811;
            }
            LODWORD(v1586) = v92;
          }
LABEL_208:
          v96 = v89;
          if ( v92 < 0 )
            goto LABEL_99;
          if ( lpMem )
          {
            v162 = (int *)lpMem;
            v1661 = (int *)lpMem;
            v1547 = 0;
            if ( v151 )
            {
              do
              {
                v92 = RtlUIntAdd(4u, *v162, &v1595);
                LODWORD(v1586) = v92;
                if ( v92 < 0 )
                  goto LABEL_116;
                v92 = RtlULongLongAdd((unsigned __int64)v162, v1595, (unsigned __int64 *)&v1661);
                LODWORD(v1586) = v92;
                if ( v92 < 0 )
                  goto LABEL_116;
                v162 = v1661;
                ++v1547;
              }
              while ( v1547 < v163 );
              v1338 = v93;
              v1357 = v91;
            }
            v164 = RtlULongLongAdd((unsigned __int64)v162, 4LL, (unsigned __int64 *)&v1722);
            v160 = 0LL;
            LODWORD(v1586) = v164;
            v92 = v164;
            if ( v164 >= 0 )
            {
              if ( v162 + 2 > (int *)((char *)lpMem + HIDWORD(v1714)) )
                goto LABEL_141;
              v165 = v1722;
              *v162 = v159;
              *v165 = v89;
              v161 = v1714;
LABEL_212:
              LODWORD(v1714) = ++v161;
              goto LABEL_222;
            }
          }
          else
          {
            LODWORD(v1586) = RtlUIntAdd(4u, 4, (unsigned int *)&v1594);
            v92 = (int)v1586;
            if ( (int)v1586 < 0 )
              goto LABEL_99;
            v158 = RtlUIntAdd(HIDWORD(v1714), v1594, (unsigned int *)&v1714 + 1);
            v161 = v1714;
            v92 = v158;
            LODWORD(v1586) = v158;
            if ( v158 >= 0 )
              goto LABEL_212;
          }
          v96 = v89;
          if ( v92 < 0 )
            goto LABEL_99;
LABEL_222:
          if ( lpMem == v160 )
          {
            LODWORD(v1586) = RtlUIntAdd(v159, v159, (unsigned int *)&v1596);
            v92 = (int)v1586;
            if ( (int)v1586 < 0 )
              goto LABEL_98;
            LODWORD(v1586) = RtlUIntAdd(HIDWORD(v1714), v1596, (unsigned int *)&v1714 + 1);
            v92 = (int)v1586;
            if ( (int)v1586 >= 0 )
            {
              LODWORD(v1714) = v1714 + 1;
              goto LABEL_235;
            }
          }
          else
          {
            v167 = (int *)lpMem;
            v1662 = (int *)lpMem;
            v1548 = (unsigned int)v160;
            if ( v161 )
            {
              do
              {
                v92 = RtlUIntAdd(4u, *v167, &v1597);
                LODWORD(v1586) = v92;
                if ( v92 < 0 )
                  goto LABEL_116;
                v92 = RtlULongLongAdd((unsigned __int64)v167, v1597, (unsigned __int64 *)&v1662);
                LODWORD(v1586) = v92;
                if ( v92 < 0 )
                  goto LABEL_116;
                v167 = v1662;
                ++v1548;
              }
              while ( v1548 < v168 );
              v1338 = v93;
              v1357 = v91;
              v159 = 4LL;
            }
            LODWORD(v1586) = RtlULongLongAdd((unsigned __int64)v167, v159, (unsigned __int64 *)&v1723);
            v92 = (int)v1586;
            if ( (int)v1586 >= 0 )
            {
              if ( v167 + 2 > (int *)((char *)lpMem + HIDWORD(v1714)) )
                goto LABEL_141;
              v169 = v1723;
              *v167 = v166;
              *v169 = v166;
              LODWORD(v1714) = v1714 + 1;
              goto LABEL_235;
            }
          }
          v96 = v89;
          if ( v92 < 0 )
            goto LABEL_99;
LABEL_235:
          LODWORD(v1586) = RtlUIntAdd(v166, v166, &v1598);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
            goto LABEL_98;
          v171 = v1598;
          v1599 = v1598;
          LODWORD(v1586) = RtlUIntAdd(v170, 8, (unsigned int *)&v1600);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
            goto LABEL_98;
          LODWORD(v1586) = RtlUIntAdd(v171, v1600, &v1599);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
            goto LABEL_247;
          LODWORD(v1586) = RtlUIntAdd(v172, v172, (unsigned int *)&v1601);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
            goto LABEL_98;
          LODWORD(v1586) = RtlUIntAdd(v1599, v1601, &v1599);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
            goto LABEL_247;
          LODWORD(v1586) = RtlUIntAdd(v174, v174, (unsigned int *)&v1602);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
            goto LABEL_98;
          LODWORD(v1586) = RtlUIntAdd(v1599, v1602, &v1599);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
            goto LABEL_247;
          LODWORD(v1586) = RtlUIntAdd(v175, v175, (unsigned int *)&v1607);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
            goto LABEL_98;
          LODWORD(v1586) = RtlUIntAdd(v1599, v1607, &v1599);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
            goto LABEL_247;
          LODWORD(v1586) = RtlUIntAdd(v176, v176, (unsigned int *)&v1603);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
            goto LABEL_98;
          LODWORD(v1586) = RtlUIntAdd(v1599, v1603, &v1599);
          v92 = (int)v1586;
          if ( (int)v1586 < 0 )
          {
LABEL_247:
            v96 = v89;
            if ( v92 < 0 )
              goto LABEL_99;
            v177 = Size;
          }
          else
          {
            v177 = v1599;
          }
          v1549 = v177;
          v178 = v173;
          v1444 = (SIZE_T)v173;
          v1579 = v173;
          v1578 = (SIZE_T)v173;
          v1566 = (int)v173;
          v1582 = v173;
          LODWORD(v1525) = (_DWORD)v173;
          v1554 = v173;
          lpModuleName = (LPCWSTR)v173;
          v1412 = __rdtsc();
          v1604 = 8;
          v181 = RtlUIntAdd(8u, SHIDWORD(v1714), &v1604);
          if ( v181 >= 0 )
          {
            v182 = (v1604 + 7) & 0xFFFFFFF8;
            if ( v182 < v1604 )
            {
              v92 = -805306219;
LABEL_252:
              v96 = v1581;
              LODWORD(v1586) = v92;
              goto LABEL_99;
            }
            v1604 = (v1604 + 7) & 0xFFFFFFF8;
            LODWORD(v1586) = v177;
            v183 = v182;
            v184 = GetProcessHeap();
            v185 = (unsigned __int8 *)HeapAlloc(v184, 8u, v183);
            v1498 = v185;
            if ( !v185 )
            {
              v96 = v1581;
              v92 = -805306345;
              LODWORD(v1586) = -805306345;
              goto LABEL_99;
            }
            *(_DWORD *)v185 = v1714;
            v1663 = v185;
            v186 = RtlULongLongAdd((unsigned __int64)v185, 4LL, (unsigned __int64 *)&v1663);
            v177 = (unsigned int)v1586;
            v181 = v186;
            v1426 = v187;
            v1549 = (unsigned int)v1586;
            v1338 = v93;
            v1357 = v91;
            if ( v186 < 0 )
              goto LABEL_258;
            v188 = v1663;
            *(_DWORD *)v1663 = HIDWORD(v1714);
            v189 = RtlULongLongAdd((unsigned __int64)v188, 4LL, (unsigned __int64 *)&v1663);
            v1426 = v190;
            v181 = v189;
            v1549 = v177;
            v1338 = v93;
            v1357 = v91;
            if ( v189 < 0 )
            {
LABEL_258:
              v191 = GetProcessHeap();
              HeapFree(v191, 0, v1426);
              v179 = (unsigned int)v178;
            }
            else
            {
              *(_QWORD *)&v190[v1604 - 8] = v1412;
              memcpy_0(v1663, lpMem, HIDWORD(v1714));
              v178 = v1498;
              v179 = v1604;
              v1444 = (SIZE_T)v1498;
              v1549 = v177;
              v1338 = v93;
              v1357 = v91;
            }
            v180 = 0LL;
          }
          v92 = v181 | 0x10000000;
          LODWORD(v1586) = v92;
          if ( v92 < 0 )
            goto LABEL_371;
          v1427 = v180;
          if ( !v178 )
          {
            v92 = -805306355;
            goto LABEL_252;
          }
          v192 = v179;
          v1469 = (wchar_t *)v179;
          if ( !v179 || (v1393 = v179 + 8, (Src = MemoryAlloc(v179 + 8LL)) == 0LL) )
          {
            v92 = -805306367;
            LODWORD(v1586) = -805306367;
            goto LABEL_372;
          }
          v193 = 0;
          v194 = 0LL;
          v1336 = 0;
          if ( v192 )
          {
            do
              v193 ^= v178[v194++];
            while ( v194 < v192 );
            v1336 = v193;
          }
          v195 = Src;
          v1782 = 0xC81ECB17B1B54A58uLL;
          LODWORD(v1586) = 0;
          v196 = -1;
          LODWORD(Size) = 0;
          v197 = v178;
          v198 = 0;
          v199 = v192 & 7;
          if ( (v192 & 7) != 0 )
          {
            v200 = 0;
            v201 = 0;
            v1499 = 0;
            v202 = 56;
            do
            {
              v203 = *v197++;
              if ( v200 >= 4 )
                v201 |= v203 << v202;
              else
                v198 |= v203 << (v202 - 32);
              v202 -= 8;
              v200 = v1499 + 1;
              LODWORD(Size) = v201;
              LODWORD(v1586) = v198;
              v1499 = v200;
            }
            while ( (int)v200 < (int)v199 );
            v198 ^= 0xB17A307A;
            v1549 = v177;
            v204 = v201 ^ 0x42F6B18D;
            v1338 = v93;
            v1357 = v91;
            v1500 = 0;
            v205 = v198;
            v206 = Src;
            v207 = v204;
            v1444 = (SIZE_T)v178;
            do
            {
              v1413 = (SIZE_T)(v206 + 1);
              if ( v1500 >= 4 )
              {
                v207 = __ROL4__(v207, 8);
                v208 = v207;
              }
              else
              {
                v205 = __ROL4__(v205, 8);
                v208 = v205;
              }
              ++v1500;
              *v206++ = v208;
            }
            while ( v1500 < (int)v199 );
            v193 = v1336;
            v195 = (_BYTE *)v1413;
            v177 = v1549;
            if ( v199 <= 4 )
            {
              v196 = 0;
              if ( v199 >= 4 )
                goto LABEL_284;
              v198 = v198 >> (8 * (4 - v199)) << (8 * (4 - v199));
            }
            else
            {
              v196 = v204 >> (8 * (8 - v199)) << (8 * (8 - v199));
            }
            v195 = (_BYTE *)v1413;
          }
LABEL_284:
          v209 = v192 >> 3;
          if ( v192 >> 3 )
          {
            v210 = v195 + 7;
            v211 = Size;
            v212 = WORD2(v1782);
            v1481 = WORD1(v1782);
            v213 = v197 + 2;
            v214 = HIDWORD(v1782) ^ 0xB1B54A58;
            v1533 = HIWORD(v1782);
            v215 = (int)v1586;
            do
            {
              v216 = v213[1] | ((*v213 | ((*(v213 - 1) | (*(v213 - 2) << 8)) << 8)) << 8);
              v217 = v213[5] | ((v213[4] | ((v213[3] | (v213[2] << 8)) << 8)) << 8);
              v218 = v217 ^ v196;
              v219 = v216 ^ HIDWORD(v1782) ^ (v218 - 19032) ^ v198;
              v220 = (__ROR4__(v219, 7) + WORD1(v1782) * __ROR4__(HIDWORD(v1782) ^ v219, 15)) ^ v218;
              v221 = (v212 * __ROR4__(v220 - 1313519016, 9) - __ROR4__(v220, 10)) ^ v219;
              v222 = (__ROL4__(v221, 5) + HIWORD(v1782) * __ROL4__(v212 ^ v221, 4)) ^ v220;
              v223 = (HIDWORD(v1782) - (v222 ^ 0xB1B54A58)) ^ v221;
              v224 = (WORD1(v1782) * (v223 - 19032) - (v223 >> 6)) ^ v222;
              v225 = (19032 * (v212 ^ __ROR4__(v224, 15))) ^ v223;
              v226 = (v212 * (HIWORD(v1782) + __ROR4__(~v225, 3))) ^ v224;
              v227 = (v226 - HIDWORD(v1782) - 19032) ^ v225;
              v228 = (v1481 * (v1533 ^ v227)) ^ __ROR4__(v227, 10) ^ v226;
              v229 = __ROR4__(v228, 3) ^ (v212 * __ROL4__(v228 ^ 0x4A58, 6)) ^ v227;
              v230 = (19032 * (__ROR4__(v229, 15) - HIWORD(v1782))) ^ v228;
              v231 = (v230 >> 15) ^ (19032 * __ROL4__(v230 - v212, 3)) ^ (v230 >> 1) ^ (19032 * (HIWORD(v1782) ^ v230)) ^ v229;
              v232 = (WORD1(v1782) * (v231 - v212) - (v231 >> 13)) ^ v230;
              v233 = __ROR4__(v232, 11) ^ (v212 * __ROR4__(-1313519016 - v232, 9)) ^ v231;
              v234 = (v233 - HIWORD(v1782) + 1313519016) ^ v232;
              v235 = (19032 * (v234 ^ WORD1(v1782)) - __ROR4__(v234, 7)) ^ v233;
              v236 = (WORD1(v1782) * __ROL4__(v235 ^ HIWORD(v1782), 4) - __ROR4__(v235, 16)) ^ v234;
              v237 = (__ROR4__(v236, 4) + v212 * __ROR4__(-1313519016 - v236, 10)) ^ v235;
              v238 = __ROR4__(v237, 9) ^ (HIWORD(v1782) * __ROR4__(v237 + 1313519016, 4)) ^ v236;
              v239 = (19032 * __ROL4__(v238 ^ HIDWORD(v1782), 8) - __ROL4__(v238, 2)) ^ v237;
              v240 = (WORD1(v1782) * __ROR4__(HIDWORD(v1782) - v239, 11) - __ROR4__(v239, 12)) ^ v238;
              v241 = (v240 >> 8) ^ (v212 * (WORD1(v1782) ^ v240)) ^ v239;
              v213 += 8;
              v242 = v241 ^ v214 ^ v240;
              v243 = v215 ^ v241;
              *(v210 - 4) = v243;
              v244 = v211 ^ v242;
              *v210 = v244;
              v215 = v216;
              v245 = __ROR4__(v243, 8);
              v211 = v217;
              *(v210 - 5) = v245;
              v210 += 8;
              v246 = __ROR4__(v244, 8);
              *(v210 - 9) = v246;
              v247 = __ROR4__(v245, 8);
              *(v210 - 14) = v247;
              v248 = __ROR4__(v246, 8);
              *(v210 - 10) = v248;
              v249 = __ROR4__(v247, 8);
              v250 = __ROR4__(v248, 8);
              *(v210 - 15) = v249;
              *(v210 - 11) = v250;
              v196 = __ROR4__(v250, 8);
              v198 = __ROR4__(v249, 8);
              --v209;
            }
            while ( v209 );
            v193 = v1336;
            v91 = v1357;
            v93 = v1338;
            v178 = (unsigned __int8 *)v1444;
            v177 = v1549;
            v192 = (unsigned __int64)v1469;
          }
          *(_QWORD *)&Src[v192] = v193;
          v1664[4] = 160LL;
          v251 = GetProcessHeap();
          v1445 = HeapAlloc(v251, 8u, 0x30uLL);
          if ( !v1445 )
          {
            v252 = -1073741801;
LABEL_290:
            v253 = (int *)v1579;
LABEL_291:
            v1579 = v253;
            v254 = GetProcessHeap();
            HeapFree(v254, 0, Src);
            v255 = v1427;
            if ( v1427 )
            {
              Srca = (void *)v1427[1];
              if ( Srca )
              {
                v256 = GetProcessHeap();
                HeapFree(v256, 0, Srca);
                v255 = v1427;
                v1427[1] = 0LL;
              }
              Srcb = (void *)v255[3];
              if ( Srcb )
              {
                v257 = GetProcessHeap();
                HeapFree(v257, 0, Srcb);
                v255 = v1427;
                v1427[3] = 0LL;
              }
              Srcc = (void *)v255[5];
              if ( Srcc )
              {
                v258 = GetProcessHeap();
                HeapFree(v258, 0, Srcc);
                v1427[5] = 0LL;
              }
              v259 = GetProcessHeap();
              HeapFree(v259, 0, v1427);
              v1579 = v253;
            }
            v92 = v252 | 0x10000000;
            LODWORD(v1586) = v92;
            if ( v92 < 0 )
              goto LABEL_371;
            v260 = *v253;
            v1339 = v253;
            LODWORD(v1605) = 4;
            v263 = RtlUIntAdd(4u, v260, (unsigned int *)&v1605);
            if ( v263 >= 0 )
            {
              v263 = RtlUIntAdd(v1605, v262, (unsigned int *)&v1605);
              if ( v263 >= 0 )
              {
                v263 = RtlUIntAdd(v1605, v253[4], (unsigned int *)&v1605);
                if ( v263 >= 0 )
                {
                  v263 = RtlUIntAdd(v1605, v264, (unsigned int *)&v1605);
                  if ( v263 >= 0 )
                  {
                    v263 = RtlUIntAdd(v1605, v253[8], (unsigned int *)&v1605);
                    if ( v263 >= 0 )
                    {
                      v1534 = v1605;
                      v276 = v1605;
                      v277 = GetProcessHeap();
                      v278 = HeapAlloc(v277, 8u, v276);
                      v1358 = v278;
                      if ( !v278 )
                        goto LABEL_360;
                      v1665 = v278;
                      *v278 = *v1339;
                      v263 = RtlULongLongAdd((unsigned __int64)v278, 4LL, (unsigned __int64 *)&v1665);
                      v1446 = v280;
                      v253 = (int *)v279;
                      v1579 = v279;
                      if ( v263 < 0 )
                        goto LABEL_327;
                      memcpy_0(v1665, v279[1], *(unsigned int *)v279);
                      v263 = RtlULongLongAdd((unsigned __int64)v1665, (unsigned int)*v253, (unsigned __int64 *)&v1665);
                      v1446 = v1358;
                      v1579 = v253;
                      if ( v263 < 0 )
                        goto LABEL_327;
                      v281 = v1665;
                      *(_DWORD *)v1665 = v253[4];
                      v263 = RtlULongLongAdd((unsigned __int64)v281, 4LL, (unsigned __int64 *)&v1665);
                      v1446 = v282;
                      v1579 = v253;
                      if ( v263 < 0 )
                        goto LABEL_327;
                      memcpy_0(v1665, *((const void **)v253 + 3), (unsigned int)v253[4]);
                      v263 = RtlULongLongAdd((unsigned __int64)v1665, (unsigned int)v253[4], (unsigned __int64 *)&v1665);
                      v1446 = v1358;
                      v1579 = v253;
                      if ( v263 < 0 )
                        goto LABEL_327;
                      v283 = v1665;
                      *(_DWORD *)v1665 = v253[8];
                      v263 = RtlULongLongAdd((unsigned __int64)v283, 4LL, (unsigned __int64 *)&v1665);
                      v1446 = v284;
                      v1579 = v253;
                      if ( v263 < 0
                        || (memcpy_0(v1665, *((const void **)v253 + 5), (unsigned int)v253[8]),
                            v263 = RtlULongLongAdd(
                                     (unsigned __int64)v1665,
                                     (unsigned int)v253[8],
                                     (unsigned __int64 *)&v1665),
                            v261 = v1549,
                            v1446 = v1358,
                            v1579 = v253,
                            v263 < 0) )
                      {
LABEL_327:
                        v285 = GetProcessHeap();
                        HeapFree(v285, 0, v1446);
                        v261 = v1549;
                      }
                      else
                      {
                        v1578 = (SIZE_T)v1358;
                        v1566 = v1534;
                        v1579 = v253;
                      }
                    }
                  }
                }
              }
            }
            v92 = v263 | 0x10000000;
            LODWORD(v1586) = v92;
            if ( v92 < 0 )
              goto LABEL_371;
            v1606 = 8;
            v286 = RtlUIntAdd(8u, v261, &v1606);
            v92 = v286 | 0x10000000;
            LODWORD(v1586) = v286 | 0x10000000;
            if ( v286 < 0 )
              goto LABEL_371;
            v289 = (v1606 + 7) & 0xFFFFFFF8;
            if ( v289 < v1606 )
            {
              v92 = -1073741675;
LABEL_464:
              LODWORD(v1586) = v92;
              goto LABEL_371;
            }
            v1618 = (v1606 + 7) & 0xFFFFFFF8;
            v1578 = v288;
            v1579 = v253;
            LODWORD(v1586) = RtlUIntAdd(v289, v287, &v1618);
            v92 = (int)v1586;
            if ( (int)v1586 < 0 )
              goto LABEL_371;
            v1579 = v253;
            v1578 = v290;
            if ( !lpMem || (v1579 = v253, v1578 = v290, (unsigned int)v1714 <= 1) )
            {
LABEL_335:
              v92 = -1073741811;
              goto LABEL_464;
            }
            v291 = lpMem;
            v1666 = lpMem;
            do
            {
              LODWORD(v1586) = RtlULongLongAdd((unsigned __int64)v291, 4LL, (unsigned __int64 *)&v1666);
              v92 = (int)v1586;
              if ( (int)v1586 < 0 )
                goto LABEL_371;
              LODWORD(v1586) = RtlULongLongAdd((unsigned __int64)v1666, v292, (unsigned __int64 *)&v1666);
              v92 = (int)v1586;
              if ( (int)v1586 < 0 )
                goto LABEL_371;
              v291 = v1666;
            }
            while ( v293 == -1 );
            v1414 = *v1666;
            LODWORD(v1586) = RtlULongLongAdd((unsigned __int64)v1666, 4LL, (unsigned __int64 *)&v1666);
            v92 = (int)v1586;
            if ( (int)v1586 < 0 )
              goto LABEL_371;
            if ( !lpMem || (unsigned int)v1714 <= 2 )
              goto LABEL_335;
            v294 = lpMem;
            v1667 = lpMem;
            do
            {
              LODWORD(v1586) = RtlULongLongAdd((unsigned __int64)v294, 4LL, (unsigned __int64 *)&v1667);
              v92 = (int)v1586;
              if ( (int)v1586 < 0 )
                goto LABEL_371;
              LODWORD(v1586) = RtlULongLongAdd((unsigned __int64)v1667, v295, (unsigned __int64 *)&v1667);
              v92 = (int)v1586;
              if ( (int)v1586 < 0 )
                goto LABEL_371;
              v294 = v1667;
            }
            while ( (unsigned int)(v296 + 1) < 2 );
            LODWORD(v1586) = RtlULongLongAdd((unsigned __int64)v1667, 4LL, (unsigned __int64 *)&v1667);
            v92 = (int)v1586;
            if ( (int)v1586 < 0 )
              goto LABEL_371;
            LODWORD(v1608) = v297;
            LODWORD(v1586) = RtlUIntAdd(v297, v1618, (unsigned int *)&v1608);
            v92 = (int)v1586;
            if ( (int)v1586 < 0 )
              goto LABEL_354;
            LODWORD(v1586) = RtlUIntAdd(v1608, v299, (unsigned int *)&v1608);
            v92 = (int)v1586;
            if ( (int)v1586 < 0
              || (LODWORD(v1586) = RtlUIntAdd(v1608, v1414, (unsigned int *)&v1608), v92 = (int)v1586, (int)v1586 < 0)
              || (LODWORD(v1586) = RtlUIntAdd(v1608, v300, (unsigned int *)&v1608), v92 = (int)v1586, (int)v1586 < 0)
              || (LODWORD(v1586) = RtlUIntAdd(v1608, v301, (unsigned int *)&v1608), v92 = (int)v1586, (int)v1586 < 0) )
            {
LABEL_354:
              if ( v92 < 0 )
                goto LABEL_371;
              v302 = HIDWORD(v1608);
            }
            else
            {
              v302 = v1608;
            }
            LODWORD(v1525) = v302;
            if ( v302 > 0x400000 )
            {
              v92 = -2147418113;
              goto LABEL_464;
            }
            Srcd = v298;
            v303 = GetProcessHeap();
            v304 = HeapAlloc(v303, 8u, v302);
            if ( !v304 )
            {
LABEL_360:
              v92 = -805306345;
              goto LABEL_464;
            }
            v1582 = v304;
            if ( !Srcd )
            {
              v92 = -2147024809;
              v1582 = v304;
              v1579 = v253;
LABEL_405:
              LODWORD(v1586) = v92;
              v1578 = (SIZE_T)Srcd;
              goto LABEL_371;
            }
            v1731 = v1566;
            v1730[0] = Srcd;
            v1730[1] = v304;
            v1732 = v302;
            v1733 = 0;
            if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
              && (v328 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
            {
              v329 = ((__int64 (__fastcall *)(__int64, _QWORD *))v328)(134LL, v1730);
              v306 = v302;
              v92 = v329 | 0x10000000;
              LODWORD(v1586) = v329 | 0x10000000;
              if ( v329 >= 0 )
              {
                v306 = v1732;
                v330 = v178;
                v331 = v91;
                v332 = v93;
                v333 = v253;
                goto LABEL_402;
              }
            }
            else
            {
              v305 = GetLastError();
              v92 = v305;
              if ( v305 > 0 )
                v92 = (unsigned __int16)v305 | 0x80070000;
              v306 = (unsigned int)v1525;
              if ( v92 >= 0 )
                v92 = -2147467259;
              LODWORD(v1586) = v92;
            }
            v1578 = (SIZE_T)Srcd;
            if ( v92 == -805306333 )
            {
              v92 = -2147024774;
              LODWORD(v1586) = -2147024774;
              v1579 = v253;
              goto LABEL_371;
            }
            v333 = v253;
            v332 = v93;
            v331 = v91;
            v330 = v178;
            v1579 = v253;
            if ( v92 < 0 )
              goto LABEL_371;
LABEL_402:
            v1397 = 0LL;
            v91 = v331;
            v178 = v330;
            if ( v306 < 4 )
            {
              v92 = -805306306;
LABEL_404:
              v1579 = v333;
              goto LABEL_405;
            }
            v93 = v332;
            v334 = *(unsigned int *)v1582;
            v1415 = *(_DWORD *)v1582;
            v1470 = (wchar_t *)((char *)v1582 + 4);
            if ( (char *)v1582 + 4 < v1582 )
            {
              v92 = -805306219;
              goto LABEL_404;
            }
            v1578 = (SIZE_T)Srcd;
            v1579 = v253;
            if ( v306 - 4 < (unsigned int)v334 )
            {
              v92 = -805306306;
LABEL_409:
              v1579 = v253;
LABEL_410:
              LODWORD(v1586) = v92;
              v1578 = (SIZE_T)Srcd;
              goto LABEL_371;
            }
            v1428 = v334;
            if ( (wchar_t *)((char *)v1470 + v334) < v1470 || (v335 = v334 + 4, v335 < 4) )
            {
              v92 = -805306219;
              goto LABEL_409;
            }
            if ( v306 - v335 < 4 )
            {
LABEL_414:
              v92 = -805306306;
              goto LABEL_464;
            }
            v1578 = (SIZE_T)Srcd;
            v1579 = v253;
            v336 = *(unsigned int *)((char *)v1470 + v1428);
            v337 = (unsigned __int64)v1470 + v1428 + 4;
            v1535 = *(_DWORD *)((char *)v1470 + v1428);
            v1525 = (unsigned int *)v337;
            if ( v337 >= (unsigned __int64)v1470 + v1428 )
            {
              v178 = v330;
              v338 = v253;
              v339 = v335 + 4;
              if ( v335 + 4 < v335 )
                goto LABEL_540;
              if ( v306 - v339 < (unsigned int)v336 )
                goto LABEL_414;
              v340 = (unsigned int *)(v336 + v337);
              v1567 = *(unsigned int *)((char *)v1470 + v1428);
              v1578 = (SIZE_T)Srcd;
              v1579 = v253;
              if ( v340 >= v1525 )
              {
                v341 = v336 + v339;
                v338 = v253;
                if ( (unsigned int)v336 + v339 >= v339 )
                {
                  if ( v306 - v341 < 4 )
                    goto LABEL_414;
                  v342 = *v340;
                  v1482 = *v340;
                  v1586 = v340 + 1;
                  v1579 = v253;
                  if ( v340 + 1 < v340 )
                  {
                    v92 = -805306219;
                    goto LABEL_410;
                  }
                  v1578 = (SIZE_T)Srcd;
                  v1501 = v341 + 4;
                  if ( v341 + 4 < v341 )
                  {
                    v1579 = v253;
                  }
                  else
                  {
                    v1377 = v1582;
                    if ( v306 - v1501 < v342 )
                      goto LABEL_414;
                    v1579 = v253;
                    v1502 = v342 + v1501;
                    if ( v1502 >= v341 + 4 )
                    {
                      v343 = v1582;
                      v1578 = (SIZE_T)Srcd;
                      v1447 = (SIZE_T)v178;
                      v1359 = v91;
                      v1340 = v93;
                      if ( v306 != v1502 )
                      {
LABEL_426:
                        v92 = -805306306;
                        v1582 = v343;
                        LODWORD(v1586) = -805306306;
                        v1579 = v253;
                        v1578 = (SIZE_T)Srcd;
                        goto LABEL_371;
                      }
                      if ( v342 + v1415 + v1535 + 12LL != v306 )
                      {
                        v343 = v1582;
                        goto LABEL_426;
                      }
                      v344 = GetProcessHeap();
                      v345 = HeapAlloc(v344, 8u, 0x30uLL);
                      v1503 = v345;
                      if ( !v345 )
                      {
                        v92 = -805306345;
                        v1582 = v1377;
                        v1578 = (SIZE_T)Srcd;
                        LODWORD(v1586) = -805306345;
                        v1579 = v253;
                        goto LABEL_371;
                      }
                      v346 = 0;
                      if ( v1470 )
                      {
                        *(_DWORD *)v345 = v1415;
                        v347 = GetProcessHeap();
                        v348 = HeapAlloc(v347, 8u, v1428);
                        if ( !v348 )
                          goto LABEL_441;
                        v1503[1] = v348;
                        memcpy_0(v348, v1470, v1428);
                        v345 = v1503;
                        v349 = v1586;
                      }
                      else
                      {
                        v349 = v1586;
                        *(_DWORD *)v345 = 0;
                        v1586 = v349;
                        v345[1] = 0LL;
                      }
                      v1447 = (SIZE_T)v178;
                      v1359 = v91;
                      v1340 = v93;
                      v1579 = v253;
                      v1503 = v345;
                      if ( !v1525 )
                      {
                        v353 = v1578;
                        v352 = v1582;
                        *((_DWORD *)v345 + 4) = 0;
                        v345[3] = 0LL;
LABEL_439:
                        if ( v349 )
                        {
                          *((_DWORD *)v345 + 8) = v1482;
                          v354 = GetProcessHeap();
                          v355 = HeapAlloc(v354, 8u, v1482);
                          if ( !v355 )
                            goto LABEL_441;
                          v1503[5] = v355;
                          v346 = 0;
                          memcpy_0(v355, v1586, v1482);
                          v352 = v1582;
                          v353 = v1578;
                          v345 = v1503;
                          v1579 = v253;
                          v1340 = v93;
                          v1359 = v91;
                          v1447 = (SIZE_T)v178;
                        }
                        else
                        {
                          *((_DWORD *)v345 + 8) = 0;
                          v345[5] = 0LL;
                        }
                        v1397 = v345;
                        goto LABEL_451;
                      }
                      *((_DWORD *)v345 + 4) = v1535;
                      v350 = GetProcessHeap();
                      v351 = HeapAlloc(v350, 8u, v1567);
                      if ( v351 )
                      {
                        v1503[3] = v351;
                        v346 = 0;
                        memcpy_0(v351, v1525, v1567);
                        v345 = v1503;
                        v349 = v1586;
                        v352 = v1582;
                        v353 = v1578;
                        v1579 = v253;
                        v1340 = v93;
                        v1359 = v91;
                        v1447 = (SIZE_T)v178;
                        goto LABEL_439;
                      }
LABEL_441:
                      v346 = -1073741801;
                      v356 = v1503;
                      v1378 = (void *)v1503[1];
                      if ( v1378 )
                      {
                        v357 = GetProcessHeap();
                        HeapFree(v357, 0, v1378);
                        v356 = v1503;
                        v1503[1] = 0LL;
                      }
                      v1379 = (void *)v356[3];
                      if ( v1379 )
                      {
                        v358 = GetProcessHeap();
                        HeapFree(v358, 0, v1379);
                        v356 = v1503;
                        v1503[3] = 0LL;
                      }
                      v1380 = (void *)v356[5];
                      if ( v1380 )
                      {
                        v359 = GetProcessHeap();
                        HeapFree(v359, 0, v1380);
                        v1503[5] = 0LL;
                      }
                      v360 = GetProcessHeap();
                      HeapFree(v360, 0, v1503);
                      v353 = v1578;
                      v352 = v1582;
                      v345 = 0LL;
LABEL_451:
                      v1381 = v353;
                      v1429 = v352;
                      v361 = 0LL;
                      v1416 = v346;
                      if ( v346 < 0 )
                      {
                        v1554 = 0LL;
                        v1582 = v352;
                        v1579 = v253;
                        v1340 = v93;
                        v1359 = v91;
                        v1447 = (SIZE_T)v178;
                        v1578 = v353;
                        if ( v345 )
                        {
                          v362 = (void *)v1397[1];
                          if ( v362 )
                          {
                            v363 = GetProcessHeap();
                            HeapFree(v363, 0, v362);
                            v1397[1] = 0LL;
                          }
                          v364 = (void *)v1397[3];
                          if ( v364 )
                          {
                            v365 = GetProcessHeap();
                            HeapFree(v365, 0, v364);
                            v1397[3] = 0LL;
                          }
                          v366 = (void *)v1397[5];
                          if ( v366 )
                          {
                            v367 = GetProcessHeap();
                            HeapFree(v367, 0, v366);
                            v1397[5] = 0LL;
                          }
                          v368 = GetProcessHeap();
                          HeapFree(v368, 0, v1397);
                          v361 = 0LL;
                          v346 = v1416;
                          v1582 = v1429;
                          v1554 = 0LL;
                          v1578 = v1381;
                          v1579 = v253;
                          v1340 = v93;
                          v1359 = v91;
                          v1447 = (SIZE_T)v178;
                        }
                      }
                      else
                      {
                        v361 = (unsigned int *)v345;
                        v1554 = (unsigned __int8 *)v345;
                      }
                      v92 = v346 | 0x10000000;
                      LODWORD(v1586) = v92;
                      if ( v92 >= 0 )
                      {
                        if ( !v361 || (v1382 = *((_QWORD *)v361 + 1)) == 0 || !*v361 )
                        {
                          v92 = -805306355;
                          goto LABEL_464;
                        }
                        v369 = *v361 - 8LL;
                        v1491 = v369;
                        v370 = (WCHAR *)MemoryAlloc(v369);
                        v1511 = v370;
                        if ( !v370 )
                        {
LABEL_496:
                          lpModuleName = 0LL;
                          v92 = -805306367;
                          goto LABEL_464;
                        }
                        v371 = (unsigned __int8 *)v1382;
                        v372 = 0;
                        v373 = v1554;
                        v374 = v370;
                        v375 = v369 & 7;
                        v1785 = 0x7F1137FAB69605ELL;
                        v1398 = (SIZE_T)v370;
                        if ( (v369 & 7) != 0 )
                        {
                          v376 = 0;
                          v377 = 0;
                          v1417 = 0;
                          v1483 = 0;
                          if ( v375 )
                          {
                            v378 = 56;
                            v379 = 0;
                            v380 = (unsigned __int8 *)v1382;
                            do
                            {
                              v381 = *v380++;
                              if ( v376 >= 4 )
                                v1417 |= v381 << v378;
                              else
                                v379 |= v381 << (v378 - 32);
                              v378 -= 8;
                              v376 = v1483 + 1;
                              v1483 = v376;
                            }
                            while ( (int)v376 < (int)v375 );
                            v382 = v379 ^ 0x92F65A5;
                            v1536 = v379;
                            v370 = (WCHAR *)v1511;
                            v372 = 0;
                            v383 = v382;
                            v384 = v1417 ^ 0x699A899C;
                            v1579 = v253;
                            v385 = 0;
                            v386 = (WCHAR *)v1511;
                            v1340 = v93;
                            v1359 = v91;
                            v1447 = (SIZE_T)v178;
                            do
                            {
                              v1398 = (SIZE_T)v386 + 1;
                              if ( v385 >= 4 )
                              {
                                v384 = __ROL4__(v384, 8);
                                v387 = v384;
                              }
                              else
                              {
                                v383 = __ROL4__(v383, 8);
                                v387 = v383;
                              }
                              *(_BYTE *)v386 = v387;
                              ++v385;
                              v386 = (WCHAR *)((char *)v386 + 1);
                            }
                            while ( v385 < (int)v375 );
                            v374 = (WCHAR *)v1398;
                            v373 = v1554;
                            if ( v375 > 4 )
                            {
                              v377 = (v1417 ^ 0x699A899Cu) >> (8 * (8 - v375)) << (8 * (8 - v375));
                              v374 = (WCHAR *)v1398;
LABEL_482:
                              v371 = v380;
                              goto LABEL_483;
                            }
                            v377 = 0;
                            if ( v375 >= 4 )
                              goto LABEL_482;
                            v371 = v380;
                          }
                          else
                          {
                            v382 = 154101157;
                            v1536 = 0;
                            v1417 = 0;
                          }
                          v382 = v382 >> (8 * (4 - v375)) << (8 * (4 - v375));
                          v374 = (WCHAR *)v1398;
                        }
                        else
                        {
                          v1417 = -1;
                          v377 = 0;
                          v1536 = 0;
                          v382 = 0;
                        }
LABEL_483:
                        if ( v1491 >> 3 )
                        {
                          v388 = (char *)v374 + 7;
                          v389 = v1536;
                          v390 = v371 + 2;
                          v391 = v1491 >> 3;
                          v392 = HIDWORD(v1785);
                          v1484 = WORD2(v1785);
                          v393 = HIDWORD(v1785) ^ 0xAB69605E;
                          v1504 = WORD1(v1785);
                          LODWORD(v1525) = 24670;
                          v394 = v1417;
                          do
                          {
                            v395 = *(v390 - 1) | (*(v390 - 2) << 8);
                            v396 = v390[2] << 8;
                            v397 = *v390;
                            v390 += 8;
                            v398 = *(v390 - 7) | ((v397 | (v395 << 8)) << 8);
                            v399 = v398 ^ v382;
                            v400 = *(v390 - 3) | ((*(v390 - 4) | ((*(v390 - 5) | v396) << 8)) << 8);
                            v401 = v399 ^ v392 ^ 0xAB69605E ^ v400 ^ v377;
                            v402 = (__ROL4__(v401, 10) + v1484 * __ROL4__(v401 + 1419157410, 5)) ^ v399;
                            v403 = (WORD1(v1785) * __ROR4__(v392 + v402, 9) - __ROL4__(v402, 2)) ^ v401;
                            v404 = (24670 * (v403 - v1484) - (v403 >> 13)) ^ v402;
                            v405 = (HIWORD(v1785) * __ROL4__(v404 ^ WORD1(v1785), 6) - __ROL4__(v404, 2)) ^ v403;
                            v406 = (v392 - (v405 ^ 0xAB69605E)) ^ v404;
                            v407 = (v1504 * (v406 ^ v1484)) ^ __ROR4__(v406, 6) ^ v405;
                            v408 = (__ROL4__(v407, 2) + 24670 * __ROR4__(v392 + v407, 15)) ^ v406;
                            v409 = (HIWORD(v1785) * __ROR4__(v408 + 1419157410, 14) - __ROL4__(v408, 8)) ^ v407;
                            v410 = __ROR4__(v409, 10) ^ (v1484 * __ROR4__(v409 ^ 0xAB69605E, 12)) ^ v408;
                            v411 = (v410 >> 10) ^ (WORD1(v1785) * (v410 ^ HIWORD(v1785))) ^ v409;
                            v412 = (HIWORD(v1785) * (__ROR4__(~v411, 5) + 24670)) ^ v410;
                            v413 = (v412 - HIWORD(v1785)) ^ 0xAB69605E ^ v411;
                            v414 = ((v413 >> 2) + v1484 * __ROL4__(v413 ^ HIWORD(v1785), 2)) ^ v412;
                            v415 = (__ROL4__(v414, 7) + WORD1(v1785) * __ROR4__(v414 - v392, 6)) ^ v413;
                            v416 = (24670 * (v415 ^ v1484) + __ROR4__(v415, 9)) ^ v414;
                            v417 = (__ROL4__(v416, 7) + HIWORD(v1785) * __ROL4__(v416 ^ WORD1(v1785), 5)) ^ v415;
                            v418 = v417 ^ v393 ^ v416;
                            v419 = (v1484 * (__ROR4__(v418, 3) - WORD1(v1785))) ^ v417;
                            v420 = (24670 * __ROR4__(v419 - v392, 1) - __ROR4__(v419, 6)) ^ v418;
                            v421 = (__ROL4__(v420, 14) + HIWORD(v1785) * __ROL4__(v420 - 1419157410, 3)) ^ v419;
                            v422 = (v1484 * __ROL4__(v421 - 1419157410, 15) - __ROR4__(v421, 14)) ^ v420;
                            v423 = (v422 >> 3) ^ (WORD1(v1785) * (v422 ^ 0x605E)) ^ v421;
                            v424 = v423 ^ v392;
                            v425 = v423;
                            v426 = v394 ^ v423;
                            v394 = v400;
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
                            v377 = __ROR4__(v434, 8);
                            v382 = __ROR4__(v433, 8);
                            --v391;
                          }
                          while ( v391 );
                          v372 = 0;
                          v91 = v1359;
                          v93 = v1340;
                          v178 = (unsigned __int8 *)v1447;
                          v373 = v1554;
                          v370 = (WCHAR *)v1511;
                        }
                        for ( jj = 0LL; jj < v1491; ++jj )
                          v372 ^= *((_BYTE *)v370 + jj);
                        v436 = v373;
                        v1341 = v1582;
                        v1512 = (LPCWSTR)v1578;
                        v1430 = v1579;
                        v1554 = v373;
                        if ( v372 != *(_QWORD *)(v1491 + v1382) )
                        {
                          MemoryFree(v370);
                          goto LABEL_496;
                        }
                        v1670 = v370;
                        v1609 = 0;
                        if ( (unsigned int)v1491 >= 4 )
                        {
                          v1418 = *(_DWORD *)v370;
                          v437 = v1582;
                          v438 = RtlULongLongAdd((unsigned __int64)v370, 4LL, (unsigned __int64 *)&v1670);
                          v1578 = (SIZE_T)v1512;
                          lpModuleName = v439;
                          v1554 = v440;
                          v1582 = v1341;
                          v1579 = v1430;
                          if ( v438 < 0 )
                            goto LABEL_536;
                          v438 = RtlUIntAdd(0, 4, &v1609);
                          lpModuleName = v370;
                          v1578 = (SIZE_T)v1512;
                          v1554 = v436;
                          v1582 = v1341;
                          v1579 = v441;
                          if ( v438 < 0 )
                            goto LABEL_536;
                          if ( (unsigned int)v1491 - v1609 < 4 )
                            goto LABEL_501;
                          v1537 = *(_DWORD *)v1670;
                          v438 = RtlULongLongAdd((unsigned __int64)v1670, 4LL, (unsigned __int64 *)&v1670);
                          lpModuleName = v442;
                          v1578 = (SIZE_T)v1512;
                          v1554 = v443;
                          v1582 = v1341;
                          v1579 = v444;
                          if ( v438 < 0 )
                            goto LABEL_536;
                          v438 = RtlUIntAdd(v1609, 4, &v1609);
                          lpModuleName = v370;
                          v1578 = (SIZE_T)v1512;
                          v1554 = v436;
                          v1582 = v1341;
                          v1579 = v441;
                          if ( v438 < 0 )
                            goto LABEL_536;
                          if ( (unsigned int)v1491 - v1609 < v1537 )
                          {
LABEL_501:
                            v1579 = v441;
                          }
                          else
                          {
                            v438 = RtlUIntAdd(v1609, v1537, &v1609);
                            lpModuleName = v370;
                            v1578 = (SIZE_T)v1512;
                            v1554 = v436;
                            v1582 = v1341;
                            v1579 = v445;
                            if ( v438 < 0 )
                              goto LABEL_536;
                            if ( (char *)v370 + (unsigned int)v1491 >= (char *)v1670 + v1537
                              && (unsigned __int64)(unsigned int)v1491 + (char *)v370 - v1537 - (_BYTE *)v1670 < 8 )
                            {
                              v1578 = (SIZE_T)v1512;
                              v438 = 0;
                              v1492 = 0LL;
                              v1485 = 0;
                              lpModuleName = v370;
                              v1554 = v436;
                              v1582 = v1341;
                              v1579 = v445;
                              if ( !v1670 )
                              {
LABEL_524:
                                if ( v1537 )
                                {
                                  v455 = GetProcessHeap();
                                  v456 = v1537;
                                  v438 = 0;
                                  v1492 = HeapAlloc(v455, 8u, v1537);
                                  v457 = v1492;
                                  if ( !v1492 )
                                  {
                                    v438 = -1073741801;
                                    goto LABEL_536;
                                  }
                                }
                                else
                                {
                                  v456 = 0LL;
                                  v457 = 0LL;
                                }
                                if ( v1670 )
                                  memcpy_0(v457, v1670, v456);
                                v1716[1] = v1492;
                                LODWORD(v1716[0]) = v1485;
                                if ( v1418 == v1485 )
                                  goto LABEL_536;
LABEL_535:
                                v438 = -1073741762;
                                goto LABEL_536;
                              }
                              v1342 = v1670;
                              v438 = RtlULongLongAdd((unsigned __int64)v1670, v1537, (unsigned __int64 *)&v1671);
                              v1578 = (SIZE_T)v1512;
                              lpModuleName = v446;
                              v1554 = v447;
                              v1582 = v437;
                              v1579 = v1430;
                              if ( v438 >= 0 )
                              {
                                v448 = v1512;
                                lpModuleName = v446;
                                v1554 = v447;
                                v1582 = v437;
                                v1579 = v1430;
                                v1578 = (SIZE_T)v1512;
                                if ( v1342 < v1671 )
                                {
                                  v449 = v446;
                                  lpModuleName = v446;
                                  v1582 = v437;
                                  v1579 = v1430;
                                  v450 = (unsigned __int64)v1342;
                                  v1554 = v447;
                                  v1578 = (SIZE_T)v1512;
                                  while ( 1 )
                                  {
                                    v1513 = v448;
                                    v1505 = v449;
                                    v438 = RtlULongLongAdd(v450, 4LL, (unsigned __int64 *)&v1672);
                                    if ( v438 < 0 )
                                      goto LABEL_536;
                                    if ( v1672 > v1671 )
                                      goto LABEL_521;
                                    v438 = RtlUIntAdd(4u, *v451, &v1610);
                                    if ( v438 < 0 )
                                      goto LABEL_536;
                                    v438 = RtlULongLongAdd((unsigned __int64)v1342, v1610, (unsigned __int64 *)&v1673);
                                    lpModuleName = v454;
                                    v1579 = v1430;
                                    v1578 = (SIZE_T)v1513;
                                    v1554 = v453;
                                    v1582 = v452;
                                    if ( v438 < 0 )
                                      goto LABEL_536;
                                    v450 = (unsigned __int64)v1673;
                                    v1342 = v1673;
                                    v1554 = v453;
                                    v1582 = v452;
                                    v1578 = (SIZE_T)v1513;
                                    if ( v1673 > v1671 )
                                    {
                                      v438 = -1073741811;
                                      lpModuleName = v1505;
                                      v1579 = v1430;
                                      goto LABEL_536;
                                    }
                                    v448 = v1513;
                                    ++v1485;
                                    lpModuleName = v1505;
                                    v1579 = v1430;
                                    if ( v1673 >= v1671 )
                                    {
                                      lpModuleName = v1505;
                                      v1554 = v453;
                                      v1582 = v452;
                                      v1579 = v1430;
                                      v1578 = (SIZE_T)v1513;
                                      goto LABEL_523;
                                    }
                                    v449 = lpModuleName;
                                  }
                                }
                                v450 = (unsigned __int64)v1342;
LABEL_523:
                                if ( (void *)v450 == v1671 )
                                  goto LABEL_524;
LABEL_521:
                                v438 = -1073741811;
                              }
LABEL_536:
                              v92 = v438 | 0x10000000;
                              goto LABEL_464;
                            }
                            v1579 = v445;
                          }
                          v1582 = v1341;
                        }
                        v1578 = (SIZE_T)v1512;
                        v1554 = v436;
                        lpModuleName = v370;
                        goto LABEL_535;
                      }
LABEL_371:
                      if ( !v178 )
                      {
LABEL_373:
                        v308 = v1579;
                        v309 = 0LL;
                        if ( v1579 )
                        {
                          v310 = (void *)*((_QWORD *)v1579 + 1);
                          if ( v310 )
                          {
                            v311 = GetProcessHeap();
                            HeapFree(v311, 0, v310);
                            v308[1] = 0LL;
                          }
                          v312 = (void *)v308[3];
                          if ( v312 )
                          {
                            v313 = GetProcessHeap();
                            HeapFree(v313, 0, v312);
                            v308[3] = 0LL;
                          }
                          v309 = (void *)v308[5];
                          if ( v309 )
                          {
                            v314 = GetProcessHeap();
                            HeapFree(v314, 0, v309);
                            v309 = 0LL;
                            v308[5] = 0LL;
                          }
                          v315 = GetProcessHeap();
                          HeapFree(v315, 0, v308);
                        }
                        v316 = (void *)v1578;
                        if ( v1578 )
                        {
                          v317 = GetProcessHeap();
                          HeapFree(v317, 0, v316);
                        }
                        v318 = v1582;
                        if ( v1582 )
                        {
                          v319 = GetProcessHeap();
                          HeapFree(v319, 0, v318);
                        }
                        if ( v1554 )
                        {
                          v320 = (void *)*((_QWORD *)v1554 + 1);
                          if ( v320 )
                          {
                            v321 = GetProcessHeap();
                            HeapFree(v321, 0, v320);
                            *((_QWORD *)v1554 + 1) = 0LL;
                          }
                          v322 = (void *)*((_QWORD *)v1554 + 3);
                          if ( v322 )
                          {
                            v323 = GetProcessHeap();
                            HeapFree(v323, 0, v322);
                            *((_QWORD *)v1554 + 3) = 0LL;
                          }
                          v309 = (void *)*((_QWORD *)v1554 + 5);
                          if ( v309 )
                          {
                            v324 = GetProcessHeap();
                            HeapFree(v324, 0, v309);
                            v309 = 0LL;
                            *((_QWORD *)v1554 + 5) = 0LL;
                          }
                          v325 = GetProcessHeap();
                          HeapFree(v325, 0, v1554);
                        }
                        v326 = (WCHAR *)lpModuleName;
                        if ( lpModuleName )
                        {
                          v327 = GetProcessHeap();
                          HeapFree(v327, 0, v326);
                        }
                        v96 = v1581;
                        if ( v92 >= 0 )
                        {
                          if ( !LODWORD(v1716[0]) )
                          {
                            v92 = -1073425151;
                            goto LABEL_127;
                          }
                          if ( v1716[1] == v309 )
                          {
                            v92 = -1073741811;
                            goto LABEL_127;
                          }
                          v458 = v1716[1];
                          v1674 = v1716[1];
                          LODWORD(v1586) = RtlULongLongAdd((unsigned __int64)v1716[1], 4LL, (unsigned __int64 *)&v1674);
                          v92 = (int)v1586;
                          if ( (int)v1586 >= 0 )
                          {
                            v461 = v1674;
                            if ( !*v458 )
                              v461 = 0LL;
                            v1674 = v461;
                            if ( *v458 != (_DWORD)v460 )
                            {
                              v92 = -1073741789;
                              goto LABEL_127;
                            }
                            v92 = *v461;
                            LODWORD(v1586) = v92;
                            if ( v92 == -805306333 )
                            {
                              v1419 = -2147024774;
                              goto LABEL_554;
                            }
                            v1419 = v92;
                            if ( v92 == -2147024774 || (v1419 = v92, v92 >= 0) )
                            {
LABEL_554:
                              if ( LODWORD(v1716[0]) == 6 )
                              {
                                if ( v1716[1] )
                                {
                                  v462 = (int *)v1716[1];
                                  v463 = 0;
                                  v1675 = (int *)v1716[1];
                                  while ( 1 )
                                  {
                                    LODWORD(v1586) = RtlULongLongAdd(
                                                       (unsigned __int64)v462,
                                                       v460,
                                                       (unsigned __int64 *)&v1675);
                                    v92 = (int)v1586;
                                    if ( (int)v1586 < 0 )
                                      goto LABEL_557;
                                    LODWORD(v1586) = RtlULongLongAdd(
                                                       (unsigned __int64)v1675,
                                                       v464,
                                                       (unsigned __int64 *)&v1675);
                                    v92 = (int)v1586;
                                    if ( (int)v1586 < 0 )
                                      goto LABEL_557;
                                    v462 = v1675;
                                    if ( ++v463 )
                                    {
                                      v465 = *v1675;
                                      LODWORD(v1586) = RtlULongLongAdd(
                                                         (unsigned __int64)v1675,
                                                         v460,
                                                         (unsigned __int64 *)&v1675);
                                      v92 = (int)v1586;
                                      if ( (int)v1586 < 0 )
                                        goto LABEL_557;
                                      v467 = v1675;
                                      if ( !v465 )
                                        v467 = 0LL;
                                      v1675 = v467;
                                      if ( v465 != 8 )
                                      {
LABEL_571:
                                        v92 = -1073741789;
                                        goto LABEL_556;
                                      }
                                      v1383 = *(_QWORD *)v467;
                                      if ( v1716[1] )
                                      {
                                        v468 = (int *)v1716[1];
                                        v469 = 0;
                                        v1676 = (int *)v1716[1];
                                        while ( 1 )
                                        {
                                          LODWORD(v1586) = RtlULongLongAdd(
                                                             (unsigned __int64)v468,
                                                             v466,
                                                             (unsigned __int64 *)&v1676);
                                          v92 = (int)v1586;
                                          if ( (int)v1586 < 0 )
                                            goto LABEL_557;
                                          LODWORD(v1586) = RtlULongLongAdd(
                                                             (unsigned __int64)v1676,
                                                             v470,
                                                             (unsigned __int64 *)&v1676);
                                          v92 = (int)v1586;
                                          if ( (int)v1586 < 0 )
                                            goto LABEL_557;
                                          v468 = v1676;
                                          if ( (unsigned int)++v469 >= 2 )
                                          {
                                            v471 = *v1676;
                                            LODWORD(v1586) = RtlULongLongAdd(
                                                               (unsigned __int64)v1676,
                                                               v466,
                                                               (unsigned __int64 *)&v1676);
                                            v92 = (int)v1586;
                                            if ( (int)v1586 < 0 )
                                              goto LABEL_557;
                                            v473 = v1676;
                                            if ( !v471 )
                                              v473 = 0LL;
                                            v1676 = v473;
                                            if ( v471 != (_DWORD)v472 )
                                              goto LABEL_571;
                                            v1538 = *v473;
                                            if ( !v1716[1] )
                                              goto LABEL_562;
                                            v474 = (int *)v1716[1];
                                            v475 = 0;
                                            v1677 = (int *)v1716[1];
                                            while ( 1 )
                                            {
                                              LODWORD(v1586) = RtlULongLongAdd(
                                                                 (unsigned __int64)v474,
                                                                 v472,
                                                                 (unsigned __int64 *)&v1677);
                                              v92 = (int)v1586;
                                              if ( (int)v1586 < 0 )
                                                goto LABEL_557;
                                              LODWORD(v1586) = RtlULongLongAdd(
                                                                 (unsigned __int64)v1677,
                                                                 v476,
                                                                 (unsigned __int64 *)&v1677);
                                              v92 = (int)v1586;
                                              if ( (int)v1586 < 0 )
                                                goto LABEL_557;
                                              v474 = v1677;
                                              if ( (unsigned int)++v475 >= 3 )
                                              {
                                                v477 = *v1677;
                                                v1486 = *v1677;
                                                LODWORD(v1586) = RtlULongLongAdd(
                                                                   (unsigned __int64)v1677,
                                                                   v472,
                                                                   (unsigned __int64 *)&v1677);
                                                v92 = (int)v1586;
                                                if ( (int)v1586 < 0 )
                                                  goto LABEL_557;
                                                v478 = v1677;
                                                if ( !v477 )
                                                  v478 = 0LL;
                                                v1677 = v478;
                                                if ( v1716[1] )
                                                {
                                                  v479 = (int *)v1716[1];
                                                  v480 = 0;
                                                  v1678 = (int *)v1716[1];
                                                  while ( 1 )
                                                  {
                                                    LODWORD(v1586) = RtlULongLongAdd(
                                                                       (unsigned __int64)v479,
                                                                       4LL,
                                                                       (unsigned __int64 *)&v1678);
                                                    v92 = (int)v1586;
                                                    if ( (int)v1586 < 0 )
                                                      goto LABEL_557;
                                                    LODWORD(v1586) = RtlULongLongAdd(
                                                                       (unsigned __int64)v1678,
                                                                       v481,
                                                                       (unsigned __int64 *)&v1678);
                                                    v92 = (int)v1586;
                                                    if ( (int)v1586 < 0 )
                                                      goto LABEL_557;
                                                    v479 = v1678;
                                                    if ( (unsigned int)++v480 >= 4 )
                                                    {
                                                      v482 = *v1678;
                                                      LODWORD(v1586) = RtlULongLongAdd(
                                                                         (unsigned __int64)v1678,
                                                                         4LL,
                                                                         (unsigned __int64 *)&v1678);
                                                      v92 = (int)v1586;
                                                      if ( (int)v1586 < 0 )
                                                        goto LABEL_557;
                                                      v483 = v1678;
                                                      if ( !v482 )
                                                        v483 = 0LL;
                                                      v1678 = v483;
                                                      if ( v482 == 4 )
                                                      {
                                                        v1506 = *v483;
                                                        if ( !v1716[1] )
                                                          goto LABEL_562;
                                                        v484 = v1716[1];
                                                        v485 = 0;
                                                        v1679 = v1716[1];
                                                        do
                                                        {
                                                          LODWORD(v1525) = *v484;
                                                          v92 = RtlULongLongAdd(
                                                                  (unsigned __int64)v484,
                                                                  4LL,
                                                                  (unsigned __int64 *)&v1679);
                                                          LODWORD(v1586) = v92;
                                                          if ( v92 < 0
                                                            || (v92 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1679,
                                                                        (unsigned int)v1525,
                                                                        (unsigned __int64 *)&v1679),
                                                                LODWORD(v1586) = v92,
                                                                v92 < 0) )
                                                          {
                                                            v96 = v486;
                                                            goto LABEL_99;
                                                          }
                                                          v484 = v1679;
                                                          ++v485;
                                                        }
                                                        while ( v485 < 5 );
                                                        v487 = *v1679;
                                                        v488 = RtlULongLongAdd(
                                                                 (unsigned __int64)v1679,
                                                                 4LL,
                                                                 (unsigned __int64 *)&v1679);
                                                        LODWORD(v1586) = v488;
                                                        v92 = v488;
                                                        if ( v488 < 0 )
                                                        {
                                                          LODWORD(v1586) = v488;
                                                          goto LABEL_557;
                                                        }
                                                        v490 = v1679;
                                                        if ( !v487 )
                                                          v490 = 0LL;
                                                        v1679 = v490;
                                                        if ( v487 == 4 )
                                                        {
                                                          v96 = *v490;
                                                          if ( v1455 != (LPVOID)v1383 )
                                                            goto LABEL_555;
                                                          v1614 = v1538;
                                                          if ( v1506 > 4 || v1486 > 4 )
                                                          {
                                                            v92 = -2147024774;
                                                            goto LABEL_127;
                                                          }
                                                          memcpy_0(v1583, v489, v1486);
                                                          if ( v1419 )
                                                          {
                                                            v92 = v1419;
                                                            LODWORD(v1586) = v1419;
                                                          }
                                                          goto LABEL_99;
                                                        }
                                                      }
                                                      goto LABEL_571;
                                                    }
                                                  }
                                                }
                                                goto LABEL_562;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      break;
                                    }
                                  }
                                }
LABEL_562:
                                v92 = -1073741811;
                              }
                              else
                              {
LABEL_555:
                                v92 = -1073425151;
                              }
LABEL_556:
                              LODWORD(v1586) = v92;
LABEL_557:
                              v96 = v459;
                              goto LABEL_99;
                            }
                          }
                        }
                        goto LABEL_99;
                      }
LABEL_372:
                      v307 = GetProcessHeap();
                      HeapFree(v307, 0, v178);
                      goto LABEL_373;
                    }
                  }
                  v92 = -805306219;
                  LODWORD(v1586) = -805306219;
                  v1578 = (SIZE_T)Srcd;
                  goto LABEL_371;
                }
LABEL_540:
                v92 = -805306219;
                v1579 = v338;
                goto LABEL_410;
              }
            }
            v92 = -805306219;
            goto LABEL_464;
          }
          *(_DWORD *)v1445 = v1393;
          v1549 = v177;
          v265 = GetProcessHeap();
          v266 = HeapAlloc(v265, 8u, v1393);
          if ( v266 )
          {
            v1445[1] = v266;
            memcpy_0(v266, Src, v1393);
            *((_DWORD *)v1445 + 4) = 160;
            v267 = GetProcessHeap();
            v268 = HeapAlloc(v267, 8u, 0xA0uLL);
            if ( !v268 )
            {
LABEL_310:
              v252 = -1073741801;
              v271 = v1445;
              v1394 = (void *)v1445[1];
              if ( v1394 )
              {
                v272 = GetProcessHeap();
                HeapFree(v272, 0, v1394);
                v271 = v1445;
                v1445[1] = 0LL;
              }
              v1395 = (void *)v271[3];
              if ( v1395 )
              {
                v273 = GetProcessHeap();
                HeapFree(v273, 0, v1395);
                v271 = v1445;
                v1445[3] = 0LL;
              }
              v1396 = (void *)v271[5];
              if ( v1396 )
              {
                v274 = GetProcessHeap();
                HeapFree(v274, 0, v1396);
                v1445[5] = 0LL;
              }
              v275 = GetProcessHeap();
              HeapFree(v275, 0, v1445);
              goto LABEL_290;
            }
            v1445[3] = v268;
            v1549 = v177;
            *v268 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
            v268[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
            v268[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
            v268[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
            v268[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
            v268[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
            v268[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
            v268[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
            v268[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
            v268[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
            *((_DWORD *)v1445 + 8) = 8;
            v269 = GetProcessHeap();
            v270 = HeapAlloc(v269, 8u, 8uLL);
            if ( v270 )
            {
              v1445[5] = v270;
              v252 = 0;
              *(_QWORD *)v1445[5] = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
              v253 = (int *)v1445;
              v1427 = 0LL;
              goto LABEL_291;
            }
          }
          v1549 = v177;
          goto LABEL_310;
        }
        if ( (_DWORD)Size )
          goto LABEL_160;
LABEL_138:
        v92 = -1073741811;
        goto LABEL_97;
      }
    }
    v96 = v89;
    if ( v92 < 0 )
      goto LABEL_99;
    goto LABEL_156;
  }
  v92 = -2147024882;
LABEL_1574:
  v1331 = v1590;
LABEL_1575:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1332 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v1332 == 1 )
    {
      v1333 = 4LL;
      v1334 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      do
      {
        if ( *v1334 )
          FreeLibrary(*v1334);
        v1334 += 3;
        --v1333;
      }
      while ( v1333 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1577);
  if ( v92 >= 0 )
  {
    if ( v1331 != 4 )
    {
LABEL_1591:
      v1612 = -1073418210;
      goto LABEL_1595;
    }
    v1641 = *v1669;
  }
  else
  {
    switch ( v92 )
    {
      case -805306316:
        v1612 = -1073418222;
        break;
      case -805306139:
      case -1073425151:
        v1612 = -1073418201;
        break;
      case -805306306:
        v1612 = -1073418200;
        break;
      default:
        v1612 = v92;
        if ( v92 == -2147024774 )
          goto LABEL_1591;
        break;
    }
  }
LABEL_1595:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1669);
  if ( v1612 < 0 )
    return !IsActiveSessionCountLimited();
  else
    return v1641 != 0;
}
