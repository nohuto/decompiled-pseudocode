/*
 * XREFs of ?GetChatIconSoftwareLicensingPolicy@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1806B1D04
 * Callers:
 *     ?GetChatIconDefaultSetting@MeetAndChatHelpers@@YA?AW4ChatIconState@1@XZ @ 0x1806B1C74 (-GetChatIconDefaultSetting@MeetAndChatHelpers@@YA-AW4ChatIconState@1@XZ.c)
 * Callees:
 *     RtlULongLongAdd @ 0x1800C4F80 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1800C4FA0 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1800C4FC0 (StringCchLengthW.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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

__int64 MeetAndChatHelpers::GetChatIconSoftwareLicensingPolicy()
{
  int v0; // eax
  char *v1; // rax
  _BYTE *v2; // rbx
  int v3; // esi
  int v4; // r12d
  int v5; // r11d
  int v6; // r10d
  _BYTE *v7; // r14
  unsigned __int8 *v8; // r15
  __int64 v9; // r13
  int v10; // r9d
  int v11; // r8d
  int v12; // r10d
  unsigned int v13; // r11d
  int v14; // r10d
  unsigned int v15; // r11d
  int v16; // r10d
  int v17; // r11d
  unsigned int v18; // r10d
  int v19; // r11d
  int v20; // r10d
  int v21; // r11d
  unsigned int v22; // r10d
  int v23; // edx
  int v24; // r10d
  unsigned int v25; // r11d
  int v26; // r10d
  int v27; // r11d
  int v28; // edi
  int v29; // r11d
  unsigned int v30; // r10d
  int v31; // r11d
  int v32; // r10d
  int v33; // r11d
  unsigned int v34; // r10d
  int v35; // r11d
  int v36; // r10d
  int v37; // r11d
  int v38; // r10d
  int v39; // r11d
  int v40; // r10d
  int v41; // r11d
  int v42; // r10d
  int v43; // r11d
  unsigned __int64 v44; // rcx
  char v45; // al
  int v46; // esi
  unsigned int v47; // r12d
  int v48; // r13d
  HMODULE *v49; // rdi
  __int64 v50; // rbx
  void *v51; // r14
  const WCHAR *v52; // rdx
  __int64 v53; // rax
  _BYTE *v54; // rbx
  char *v55; // rdi
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned int i; // r15d
  const CHAR *v59; // rdx
  __int64 v60; // rax
  void **ProcAddress; // rcx
  HANDLE ProcessHeap; // rax
  int v63; // esi
  signed int LastError; // edi
  __int64 v65; // r14
  wchar_t *v66; // rax
  bool v67; // sf
  wchar_t *v68; // rbx
  __int64 j; // r9
  wchar_t *v70; // r8
  signed int v71; // eax
  HDESK (__fastcall *v72)(WARBIRD_DELAY_LOAD *__hidden, unsigned int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v74; // r14
  wchar_t *v75; // rax
  wchar_t *v76; // rbx
  __int64 k; // r9
  wchar_t *v78; // r8
  signed int v79; // eax
  HANDLE CurrentProcess; // rax
  bool v81; // sf
  unsigned int v82; // r13d
  HLOCAL v83; // rax
  void *v84; // r15
  int v85; // r14d
  void *v86; // r12
  HANDLE v87; // rax
  _OWORD *v88; // rax
  unsigned int v89; // edi
  void *v90; // r13
  HANDLE v91; // rax
  void *v92; // r13
  HANDLE v93; // rax
  HANDLE v94; // rax
  HANDLE v95; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v97; // r12
  HANDLE v98; // rax
  _QWORD *v99; // r10
  void *v100; // r10
  int v101; // eax
  unsigned int v102; // r9d
  void *v103; // r10
  int v104; // eax
  unsigned int v105; // r9d
  int v106; // eax
  unsigned int v107; // r9d
  int v108; // eax
  size_t v109; // rdx
  int v110; // eax
  int v111; // eax
  unsigned int v112; // r9d
  int v113; // eax
  unsigned int v114; // edi
  HANDLE v115; // rax
  void *v116; // rax
  _DWORD *v117; // rdi
  int v118; // eax
  int v119; // r11d
  int v120; // r10d
  unsigned int v121; // r9d
  int v122; // r10d
  int *v123; // rdi
  int v124; // r9d
  unsigned int v125; // r10d
  unsigned int v126; // r11d
  unsigned int v127; // edi
  __int64 v128; // rdi
  int v129; // r10d
  int *v130; // r9
  unsigned __int64 v131; // r9
  unsigned int v132; // r10d
  unsigned int *v133; // r9
  size_t v134; // rdx
  int v135; // r10d
  int *v136; // rdi
  unsigned int v137; // r10d
  int v138; // r11d
  unsigned int v139; // r10d
  unsigned int v140; // r11d
  int *v141; // rdi
  int v142; // r11d
  __int64 v143; // r9
  __int64 v144; // r9
  LPVOID v145; // r11
  int v146; // r10d
  int v147; // r10d
  int *v148; // rdi
  unsigned int v149; // r10d
  unsigned int v150; // r9d
  int *v151; // rdi
  unsigned int v152; // r10d
  unsigned int v153; // ecx
  unsigned int v154; // edi
  unsigned int v155; // r9d
  unsigned int v156; // r9d
  unsigned int v157; // r9d
  unsigned int v158; // r9d
  unsigned __int8 *v159; // r11
  unsigned int v160; // edi
  unsigned __int8 *v161; // r13
  unsigned int v162; // r10d
  _QWORD *v163; // r11
  int v164; // r14d
  unsigned int v165; // ecx
  unsigned int v166; // edi
  HANDLE v167; // rax
  WCHAR *v168; // r9
  void *v169; // r9
  void *v170; // rcx
  char *v171; // r9
  HANDLE v172; // rax
  unsigned __int64 v173; // r14
  char *v174; // rdx
  unsigned __int8 v175; // al
  unsigned __int64 v176; // rcx
  unsigned __int8 *v177; // r8
  char *v178; // rcx
  unsigned int v179; // r9d
  int v180; // r10d
  unsigned int v181; // edx
  int v182; // r10d
  unsigned int v183; // ecx
  char v184; // si
  int v185; // r11d
  unsigned int v186; // r10d
  unsigned int v187; // ecx
  unsigned int v188; // r11d
  char *v189; // rbx
  char v190; // di
  unsigned __int64 v191; // r11
  int v192; // r13d
  _BYTE *v193; // r12
  unsigned __int8 *v194; // r15
  int v195; // esi
  int v196; // r14d
  int v197; // r8d
  int v198; // edi
  int v199; // r10d
  int v200; // r9d
  int v201; // r10d
  int v202; // r9d
  int v203; // r10d
  unsigned int v204; // r9d
  int v205; // r10d
  int v206; // r9d
  int v207; // r10d
  int v208; // r9d
  int v209; // r10d
  int v210; // r9d
  unsigned int v211; // r10d
  unsigned int v212; // r9d
  int v213; // r10d
  int v214; // r9d
  int v215; // r10d
  int v216; // r9d
  int v217; // r10d
  int v218; // r9d
  int v219; // r10d
  int v220; // r9d
  unsigned int v221; // r10d
  int v222; // r9d
  unsigned int v223; // r10d
  int v224; // r9d
  int v225; // r10d
  int v226; // r9d
  int v227; // r10d
  int v228; // r9d
  int v229; // r10d
  int v230; // r9d
  int v231; // r10d
  HANDLE v232; // rax
  _QWORD *v233; // r14
  int v234; // r14d
  const void **v235; // rdi
  HANDLE v236; // rax
  _QWORD *v237; // rax
  HANDLE v238; // rax
  HANDLE v239; // rax
  HANDLE v240; // rax
  HANDLE v241; // rax
  int v242; // r10d
  int v243; // r11d
  int v244; // r14d
  int v245; // r11d
  HANDLE v246; // rax
  void *v247; // rax
  HANDLE v248; // rax
  _OWORD *v249; // rax
  HANDLE v250; // rax
  LPVOID v251; // rax
  _QWORD *v252; // rax
  HANDLE v253; // rax
  HANDLE v254; // rax
  HANDLE v255; // rax
  HANDLE v256; // rax
  unsigned int v257; // edi
  HANDLE v258; // rax
  _DWORD *v259; // rax
  const void **v260; // r9
  void *v261; // rcx
  void *v262; // rcx
  void *v263; // r10
  void *v264; // rcx
  void *v265; // r10
  HANDLE v266; // rax
  int v267; // eax
  int v268; // ecx
  SIZE_T v269; // r11
  unsigned int v270; // eax
  SIZE_T v271; // r11
  LPVOID v272; // rcx
  unsigned int v273; // r11d
  int v274; // r10d
  LPVOID v275; // rcx
  unsigned int v276; // r11d
  int v277; // r10d
  unsigned int v278; // r11d
  int v279; // r11d
  int v280; // r11d
  int v281; // r10d
  void *v282; // r9
  unsigned int v283; // r14d
  HANDLE v284; // rax
  void *v285; // rax
  signed int v286; // eax
  unsigned int v287; // edx
  HANDLE v288; // rax
  _QWORD *v289; // rdi
  void *v290; // r13
  void *v291; // r13
  HANDLE v292; // rax
  void *v293; // r13
  HANDLE v294; // rax
  HANDLE v295; // rax
  HANDLE v296; // rax
  void *v297; // rdi
  HANDLE v298; // rax
  void *v299; // rdi
  HANDLE v300; // rax
  _QWORD *v301; // rdi
  void *v302; // r13
  HANDLE v303; // rax
  void *v304; // r13
  HANDLE v305; // rax
  HANDLE v306; // rax
  HANDLE v307; // rax
  HANDLE v308; // rax
  FARPROC v309; // rax
  int v310; // eax
  unsigned __int8 *v311; // r8
  void *v312; // r11
  void *v313; // rcx
  const void **v314; // r9
  SIZE_T v315; // r14
  unsigned int v316; // r14d
  SIZE_T v317; // rcx
  unsigned __int64 v318; // r11
  const void **v319; // rax
  unsigned int v320; // r8d
  _DWORD *v321; // r11
  unsigned int v322; // r14d
  unsigned int v323; // r8d
  unsigned int v324; // ecx
  void *v325; // rax
  HANDLE v326; // rax
  _QWORD *v327; // rdx
  int v328; // r14d
  HANDLE v329; // rax
  void *v330; // rcx
  LPCWSTR v331; // r8
  HANDLE v332; // rax
  void *v333; // rcx
  void *v334; // rcx
  SIZE_T v335; // rax
  HANDLE v336; // rax
  void *v337; // rcx
  _QWORD *v338; // rax
  HANDLE v339; // rax
  HANDLE v340; // rax
  HANDLE v341; // rax
  HANDLE v342; // rax
  unsigned int *v343; // r11
  void *v344; // r14
  HANDLE v345; // rax
  void *v346; // r14
  HANDLE v347; // rax
  void *v348; // r14
  HANDLE v349; // rax
  HANDLE v350; // rax
  int v351; // r14d
  WCHAR *v352; // r10
  unsigned __int8 v353; // al
  char *v354; // rdx
  WCHAR *v355; // r8
  int v356; // ecx
  unsigned int v357; // r14d
  SIZE_T v358; // r9
  char v359; // al
  unsigned __int8 *v360; // r14
  unsigned int mm; // r10d
  int v362; // r11d
  int v363; // ebx
  int v364; // esi
  int v365; // edx
  WCHAR *v366; // rdi
  char v367; // r8
  unsigned int v368; // r11d
  _BYTE *v369; // r13
  unsigned __int8 *v370; // r12
  int v371; // ebx
  int v372; // eax
  SIZE_T v373; // r10
  int v374; // r9d
  int v375; // r15d
  int v376; // r8d
  int v377; // edi
  int v378; // r11d
  unsigned int v379; // r14d
  int v380; // r11d
  unsigned int v381; // r14d
  int v382; // r11d
  int v383; // r14d
  unsigned int v384; // r11d
  int v385; // r14d
  int v386; // r11d
  int v387; // r14d
  unsigned int v388; // r11d
  int v389; // r14d
  int v390; // r11d
  unsigned int v391; // r14d
  int v392; // r11d
  int v393; // r14d
  int v394; // r11d
  int v395; // r14d
  unsigned int v396; // r11d
  int v397; // r14d
  int v398; // r11d
  int v399; // r14d
  unsigned int v400; // r11d
  int v401; // r14d
  int v402; // r11d
  int v403; // r14d
  int v404; // r11d
  int v405; // r14d
  int v406; // r11d
  int v407; // r14d
  int v408; // r11d
  int v409; // r14d
  SIZE_T nn; // rcx
  SIZE_T v411; // r11
  int v412; // r14d
  WCHAR *v413; // r10
  SIZE_T v414; // r11
  WCHAR *v415; // rdi
  void *v416; // r9
  WCHAR *v417; // r10
  SIZE_T v418; // r11
  void *v419; // r9
  void *v420; // r9
  WCHAR *v421; // r10
  SIZE_T v422; // r11
  const WCHAR *v423; // r9
  WCHAR *v424; // r14
  unsigned __int64 v425; // rcx
  int *v426; // rcx
  void *v427; // r10
  SIZE_T v428; // r11
  WCHAR *v429; // r9
  HANDLE v430; // rax
  size_t v431; // rdi
  void *v432; // rcx
  _DWORD *v433; // r13
  unsigned int v434; // r9d
  __int64 v435; // r11
  _DWORD *v436; // rax
  int *v437; // rcx
  int v438; // edi
  unsigned int v439; // r10d
  int v440; // edi
  __int64 v441; // r11
  int *v442; // rax
  int *v443; // rcx
  unsigned int v444; // edi
  unsigned int v445; // r10d
  int v446; // edi
  __int64 v447; // r11
  int *v448; // rax
  int *v449; // rcx
  unsigned int v450; // edi
  unsigned int v451; // r10d
  int v452; // edi
  int *v453; // r11
  int *v454; // rcx
  unsigned int v455; // edi
  unsigned int v456; // r10d
  int v457; // edi
  __int64 v458; // r10
  int *v459; // rax
  unsigned int *v460; // rcx
  unsigned int i1; // edi
  unsigned int v462; // r9d
  unsigned int v463; // edi
  int v464; // eax
  unsigned int v465; // r10d
  const void *v466; // r11
  unsigned int *v467; // rax
  unsigned int v468; // edi
  int v469; // eax
  char *v470; // r15
  int v471; // eax
  int v472; // r13d
  _BYTE *v473; // rsi
  unsigned __int8 *v474; // rbx
  __int64 v475; // rdi
  int v476; // r15d
  int v477; // r11d
  int v478; // r10d
  int v479; // r13d
  int v480; // r9d
  int v481; // r13d
  unsigned int v482; // r9d
  int v483; // r13d
  int v484; // r9d
  unsigned int v485; // r13d
  int v486; // r9d
  int v487; // r13d
  int v488; // r9d
  unsigned int v489; // r13d
  int v490; // edx
  int v491; // r13d
  unsigned int v492; // r12d
  int v493; // r13d
  int v494; // r12d
  int v495; // r13d
  int v496; // r12d
  unsigned int v497; // r13d
  int v498; // r12d
  int v499; // r13d
  int v500; // r12d
  unsigned int v501; // r13d
  int v502; // r12d
  int v503; // r13d
  int v504; // r12d
  int v505; // r13d
  int v506; // r12d
  int v507; // r13d
  int v508; // r12d
  int v509; // r13d
  int v510; // r12d
  int v511; // r13d
  unsigned __int64 v512; // rcx
  char v513; // al
  WCHAR *v514; // r15
  const WCHAR *v515; // rdx
  __int64 v516; // rax
  WCHAR *v517; // r15
  char *v518; // r13
  int v519; // r12d
  __int64 v520; // rcx
  unsigned __int64 v521; // rcx
  unsigned int v522; // ecx
  const CHAR *v523; // rdx
  __int64 v524; // rax
  void **v525; // rcx
  HANDLE v526; // rax
  HMODULE *v527; // r15
  __int64 v528; // r12
  int v529; // eax
  char *v530; // r15
  int v531; // eax
  int v532; // r12d
  _BYTE *v533; // rsi
  unsigned __int8 *v534; // rbx
  __int64 v535; // rdi
  int v536; // r15d
  int v537; // r11d
  int v538; // r10d
  int v539; // r13d
  unsigned int v540; // r9d
  int v541; // r13d
  unsigned int v542; // r9d
  int v543; // r13d
  int v544; // r9d
  unsigned int v545; // r13d
  int v546; // r9d
  int v547; // r13d
  int v548; // r9d
  unsigned int v549; // r13d
  int v550; // r9d
  int v551; // r13d
  unsigned int v552; // r12d
  int v553; // r13d
  int v554; // r12d
  int v555; // r13d
  int v556; // r12d
  unsigned int v557; // r13d
  int v558; // r12d
  int v559; // r13d
  int v560; // r12d
  unsigned int v561; // r13d
  int v562; // r12d
  int v563; // r13d
  int v564; // r12d
  int v565; // r13d
  int v566; // r12d
  int v567; // r13d
  int v568; // r12d
  int v569; // r13d
  int v570; // r12d
  unsigned __int64 v571; // rcx
  char v572; // al
  WCHAR *v573; // r15
  HMODULE *v574; // r15
  __int64 v575; // r12
  const WCHAR *v576; // rdx
  __int64 v577; // rax
  WCHAR *v578; // r15
  char *v579; // r13
  int v580; // r12d
  __int64 v581; // rcx
  unsigned __int64 v582; // rcx
  unsigned int v583; // ecx
  const CHAR *v584; // rdx
  __int64 v585; // rax
  void **v586; // rcx
  HANDLE v587; // rax
  int v588; // r13d
  signed int v589; // eax
  signed int v590; // r15d
  char *v591; // rdi
  signed int v592; // eax
  char *v593; // r13
  _DWORD *v594; // r12
  unsigned int kk; // ebx
  __int64 v596; // rax
  unsigned int v597; // r10d
  unsigned int v598; // r9d
  __int64 v599; // r8
  unsigned int v600; // ecx
  unsigned int *v601; // rdx
  __int64 v602; // rdi
  const wchar_t *v603; // rcx
  const wchar_t **v604; // rdx
  __int64 v605; // r8
  __int64 v606; // rax
  char *v607; // rax
  const wchar_t *v608; // r13
  void **v609; // rax
  int v610; // ebx
  int v611; // r15d
  int v612; // r10d
  _BYTE *v613; // r12
  unsigned __int8 *v614; // r13
  __int64 v615; // rsi
  int v616; // r11d
  int v617; // r9d
  int v618; // r8d
  int v619; // r10d
  unsigned int v620; // edi
  int v621; // r10d
  unsigned int v622; // edi
  int v623; // r10d
  int v624; // edi
  unsigned int v625; // r10d
  int v626; // edi
  int v627; // r10d
  int v628; // edi
  unsigned int v629; // r10d
  int v630; // edi
  int v631; // r10d
  unsigned int v632; // r15d
  int v633; // r10d
  int v634; // r15d
  int v635; // r10d
  int v636; // r15d
  unsigned int v637; // r10d
  int v638; // r15d
  int v639; // r10d
  int v640; // r15d
  unsigned int v641; // r10d
  int v642; // r15d
  int v643; // r10d
  int v644; // r15d
  int v645; // r10d
  int v646; // r15d
  int v647; // r10d
  int v648; // r15d
  int v649; // r10d
  int v650; // r15d
  unsigned __int64 v651; // rax
  __m128i v652; // xmm1
  char *v653; // r11
  __m128i v654; // xmm0
  __m128i v655; // xmm1
  __m128i v656; // xmm1
  __m128i v657; // xmm1
  _QWORD *v658; // rdx
  __int64 v659; // rdi
  unsigned int jj; // ecx
  __int64 v661; // rax
  _QWORD *v662; // r12
  unsigned int v663; // edi
  _QWORD *v664; // rdx
  __int16 *v665; // rcx
  __int64 v666; // rax
  __int16 v667; // r8
  __int16 *v668; // rcx
  __int64 v669; // rdi
  __int64 v670; // rax
  int v671; // eax
  LPVOID v672; // rcx
  __int64 v673; // rax
  signed int v674; // eax
  signed int v675; // eax
  __int64 v676; // rcx
  _WORD *v677; // rdi
  __int64 v678; // rcx
  void **v679; // rax
  void **v680; // rax
  signed int v681; // eax
  unsigned int v682; // edi
  const wchar_t *v683; // r12
  signed int v684; // eax
  __int64 v685; // rax
  signed int v686; // eax
  __int64 v687; // r12
  __int64 v688; // rax
  signed int v689; // eax
  unsigned int v690; // edx
  unsigned int v691; // r13d
  int v692; // eax
  unsigned int v693; // r12d
  void *v694; // rdi
  void *v695; // rdi
  __int64 v696; // rdi
  bool v697; // sf
  unsigned int v698; // r13d
  __int64 v699; // rax
  bool v700; // sf
  void *v701; // rdi
  __int64 v702; // r12
  int v703; // eax
  __int64 v704; // rdx
  int v705; // edx
  int v706; // r12d
  int v707; // r15d
  int v708; // edi
  __int64 v709; // rax
  __int64 v710; // rax
  int v711; // edx
  int v712; // eax
  HMODULE *v713; // rdi
  unsigned int v714; // edi
  int v715; // r15d
  __int64 v716; // rax
  int v717; // eax
  int v718; // r13d
  void *v719; // r12
  __int64 v720; // rax
  __int64 v721; // rax
  size_t v722; // r15
  __int64 v723; // rax
  __int64 v724; // rdi
  signed int v725; // eax
  signed int v726; // edi
  int v727; // eax
  SIZE_T v728; // rcx
  __int64 (__fastcall *v729)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v730; // rax
  int v731; // eax
  int v732; // r12d
  int v733; // edx
  int v734; // r9d
  int v735; // r8d
  int v736; // r10d
  int v737; // r13d
  int v738; // r11d
  SIZE_T v739; // rdx
  __int64 v740; // rdi
  char *v741; // rax
  int v742; // r8d
  unsigned __int8 *v743; // r9
  char *v744; // r10
  int v745; // r8d
  void *v746; // r12
  int v747; // r13d
  __int64 v748; // rax
  __int64 v749; // rax
  size_t v750; // r15
  __int64 v751; // rax
  __int64 v752; // rdi
  signed int v753; // eax
  signed int v754; // edi
  int v755; // eax
  SIZE_T v756; // rcx
  __int64 (__fastcall *v757)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v758; // rax
  int v759; // eax
  int v760; // r9d
  int v761; // r10d
  int v762; // edx
  int v763; // r8d
  int v764; // r12d
  int v765; // r11d
  int v766; // r13d
  SIZE_T v767; // r13
  char *v768; // rax
  int v769; // r8d
  unsigned __int8 *v770; // r9
  char *v771; // r10
  int v772; // r8d
  void *v773; // rdi
  size_t v774; // r12
  char v775; // al
  int v776; // r13d
  unsigned int v777; // r15d
  int v778; // edx
  int v779; // r11d
  int v780; // edi
  int v781; // r12d
  __int64 v782; // rax
  __int64 v783; // rax
  LPCWSTR v784; // rcx
  __int64 v785; // rcx
  __int64 v786; // rcx
  __int64 v787; // rcx
  int v788; // eax
  HMODULE *v789; // rdi
  __int64 v790; // r15
  int v791; // r13d
  int v792; // eax
  char *v793; // rax
  int v794; // esi
  int v795; // r12d
  int v796; // r13d
  int v797; // r11d
  _BYTE *v798; // rbx
  unsigned __int8 *v799; // rax
  __int64 v800; // r15
  int v801; // r10d
  int v802; // r9d
  int v803; // r11d
  unsigned int v804; // r8d
  int v805; // r11d
  unsigned int v806; // r8d
  int v807; // r11d
  int v808; // r8d
  unsigned int v809; // r11d
  int v810; // r8d
  int v811; // r11d
  int v812; // r8d
  unsigned int v813; // r11d
  int v814; // r8d
  int v815; // r11d
  unsigned int v816; // r13d
  int v817; // r11d
  int v818; // r13d
  int v819; // edi
  int v820; // r13d
  unsigned int v821; // r11d
  int v822; // r13d
  int v823; // r11d
  int v824; // r13d
  unsigned int v825; // r11d
  int v826; // r13d
  int v827; // r11d
  int v828; // r13d
  int v829; // r11d
  int v830; // r13d
  int v831; // r11d
  int v832; // r13d
  int v833; // r11d
  int v834; // r13d
  unsigned __int64 v835; // rcx
  char v836; // al
  WCHAR *v837; // r15
  int v838; // r12d
  HMODULE *v839; // rdi
  __int64 v840; // r15
  __int64 v841; // rcx
  int v842; // edi
  __int64 v843; // rax
  signed int v844; // eax
  signed int v845; // edi
  int v846; // eax
  char *v847; // rcx
  __int64 (__fastcall *v848)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v849; // rax
  int v850; // r9d
  int v851; // r10d
  int v852; // ecx
  int v853; // edx
  __int64 v854; // r13
  int v855; // r8d
  int v856; // r11d
  char *v857; // rsi
  char *v858; // rax
  int v859; // ebx
  unsigned __int8 *v860; // r9
  signed __int64 v861; // r10
  int v862; // r8d
  void *v863; // rdi
  __int64 v864; // rax
  __int64 v865; // rax
  __int64 v866; // r13
  int v867; // r12d
  __int64 v868; // rax
  signed int v869; // eax
  signed int v870; // edi
  int v871; // eax
  char *v872; // rcx
  int v873; // r12d
  __int64 (__fastcall *v874)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v875; // rax
  int v876; // eax
  int v877; // r8d
  int v878; // r9d
  int v879; // ecx
  int v880; // edx
  int v881; // r12d
  int v882; // r11d
  char *v883; // r8
  char *v884; // rax
  int v885; // ebx
  unsigned __int8 *v886; // r9
  char *v887; // r10
  int v888; // r8d
  const WCHAR *v889; // rdx
  __int64 v890; // rax
  WCHAR *v891; // r15
  char *v892; // rdi
  __int64 v893; // rcx
  unsigned __int64 v894; // rcx
  unsigned int v895; // ecx
  const CHAR *v896; // rdx
  __int64 v897; // rax
  void **v898; // rcx
  HANDLE v899; // rax
  __int64 v900; // r15
  int v901; // eax
  HMODULE *v902; // rdi
  void *v903; // r15
  HANDLE v904; // rax
  _OWORD *v905; // rax
  HANDLE v906; // rax
  WCHAR *v907; // rax
  const WCHAR *v908; // r13
  unsigned int v909; // r11d
  int v910; // eax
  int v911; // r9d
  unsigned int v912; // r11d
  int v913; // r10d
  int v914; // eax
  int v915; // r9d
  unsigned int v916; // r11d
  int v917; // r10d
  int v918; // eax
  int v919; // r10d
  unsigned int v920; // edi
  HANDLE v921; // rax
  void *v922; // rdi
  unsigned __int8 *v923; // r13
  int v924; // r10d
  _DWORD *v925; // r11
  int v926; // r11d
  __int64 v927; // r11
  int *v928; // r9
  unsigned __int64 v929; // r9
  unsigned int v930; // r11d
  unsigned int *v931; // r9
  unsigned int v932; // r10d
  int v933; // r9d
  int v934; // r10d
  __int64 v935; // r11
  int *v936; // r10
  unsigned __int64 v937; // r10
  unsigned int v938; // r9d
  _DWORD *v939; // r10
  unsigned int v940; // edi
  int v941; // r10d
  unsigned int v942; // r11d
  int *v943; // r9
  unsigned __int64 v944; // r9
  _DWORD *v945; // r9
  unsigned int v946; // ecx
  unsigned int v947; // edi
  int v948; // edi
  unsigned int v949; // r9d
  _QWORD *v950; // r11
  unsigned int v951; // ecx
  unsigned int v952; // edi
  HANDLE v953; // rax
  _DWORD *v954; // rax
  SIZE_T v955; // r9
  void *v956; // rcx
  SIZE_T v957; // r9
  HANDLE v958; // rax
  int v959; // edi
  unsigned __int64 v960; // rdi
  char *v961; // rdx
  unsigned __int8 v962; // al
  unsigned __int64 v963; // rcx
  unsigned __int8 *v964; // rdi
  char *v965; // rcx
  unsigned int v966; // r10d
  int v967; // r9d
  unsigned __int64 v968; // r11
  int v969; // edx
  int v970; // r9d
  unsigned int v971; // ecx
  char v972; // bl
  int v973; // r8d
  unsigned int v974; // r9d
  unsigned int v975; // ecx
  unsigned int v976; // r8d
  _BYTE *v977; // rsi
  int v978; // r11d
  char v979; // di
  int v980; // eax
  _BYTE *v981; // r13
  unsigned __int8 *v982; // r14
  unsigned __int64 v983; // rsi
  int v984; // r12d
  int v985; // r15d
  int v986; // r8d
  int v987; // edi
  int v988; // r9d
  int v989; // edx
  int v990; // r9d
  int v991; // r10d
  int v992; // r9d
  unsigned int v993; // r10d
  int v994; // r9d
  int v995; // r10d
  int v996; // r9d
  int v997; // r10d
  unsigned int v998; // r9d
  int v999; // r10d
  unsigned int v1000; // r9d
  unsigned int v1001; // r10d
  int v1002; // r9d
  int v1003; // r10d
  int v1004; // r9d
  int v1005; // r10d
  int v1006; // r9d
  int v1007; // r10d
  int v1008; // r9d
  int v1009; // r10d
  unsigned int v1010; // r9d
  int v1011; // r10d
  unsigned int v1012; // r9d
  int v1013; // r10d
  int v1014; // r9d
  int v1015; // r10d
  int v1016; // r9d
  int v1017; // r10d
  int v1018; // r9d
  int v1019; // r10d
  int v1020; // r9d
  const void *v1021; // rdi
  HANDLE v1022; // rax
  unsigned int *v1023; // rbx
  int v1024; // edi
  HANDLE v1025; // rax
  void *v1026; // rax
  HANDLE v1027; // rax
  _OWORD *v1028; // rax
  HANDLE v1029; // rax
  _QWORD *v1030; // rax
  HANDLE v1031; // rax
  HANDLE v1032; // rax
  HANDLE v1033; // rax
  HANDLE v1034; // rax
  HANDLE v1035; // rax
  _QWORD *v1036; // rax
  HANDLE v1037; // rax
  HANDLE v1038; // rax
  HANDLE v1039; // rax
  HANDLE v1040; // rax
  int v1041; // edi
  int v1042; // r10d
  int v1043; // r10d
  unsigned int v1044; // edi
  HANDLE v1045; // rax
  _DWORD *v1046; // rax
  void *v1047; // rcx
  void *v1048; // rcx
  void *v1049; // r10
  void *v1050; // rcx
  void *v1051; // r10
  HANDLE v1052; // rax
  int v1053; // eax
  int v1054; // ecx
  WCHAR *v1055; // r10
  unsigned int v1056; // eax
  HANDLE v1057; // rax
  _QWORD *v1058; // rbx
  void *v1059; // rsi
  HANDLE v1060; // rax
  void *v1061; // rsi
  HANDLE v1062; // rax
  void *v1063; // rsi
  HANDLE v1064; // rax
  HANDLE v1065; // rax
  HANDLE v1066; // rax
  HANDLE v1067; // rax
  void *v1068; // rsi
  HANDLE v1069; // rax
  void *v1070; // rsi
  HANDLE v1071; // rax
  void *v1072; // rsi
  HANDLE v1073; // rax
  HANDLE v1074; // rax
  HANDLE v1075; // rax
  _DWORD *v1076; // rdi
  unsigned __int64 v1077; // rcx
  __int64 v1078; // r11
  int *v1079; // rax
  int v1080; // edi
  unsigned int v1081; // r9d
  WCHAR *v1082; // r10
  void *v1083; // rcx
  unsigned int v1084; // r11d
  int v1085; // r10d
  void *v1086; // rcx
  unsigned int v1087; // r11d
  int v1088; // r10d
  int v1089; // ecx
  int v1090; // r10d
  size_t v1091; // r9
  unsigned int v1092; // edi
  HANDLE v1093; // rax
  unsigned int *v1094; // rax
  signed int v1095; // eax
  unsigned int v1096; // edx
  FARPROC v1097; // rax
  int v1098; // eax
  unsigned __int8 *v1099; // r8
  void *v1100; // r11
  __int64 v1101; // rcx
  void *v1102; // r9
  SIZE_T v1103; // rdi
  WCHAR *v1104; // r9
  unsigned int v1105; // edi
  SIZE_T v1106; // r8
  char *v1107; // rcx
  unsigned int *v1108; // r11
  unsigned int v1109; // ecx
  unsigned int v1110; // edi
  unsigned int *v1111; // rax
  HANDLE v1112; // rax
  _DWORD *v1113; // rdx
  int v1114; // edi
  HANDLE v1115; // rax
  void *v1116; // rcx
  void *v1117; // r8
  HANDLE v1118; // rax
  void *v1119; // rcx
  unsigned int *v1120; // rcx
  WCHAR *v1121; // rax
  HANDLE v1122; // rax
  void *v1123; // rcx
  _QWORD *v1124; // rax
  HANDLE v1125; // rax
  HANDLE v1126; // rax
  HANDLE v1127; // rax
  HANDLE v1128; // rax
  unsigned int *v1129; // r11
  _QWORD *v1130; // rdi
  void *v1131; // rbx
  HANDLE v1132; // rax
  void *v1133; // rbx
  HANDLE v1134; // rax
  void *v1135; // rbx
  HANDLE v1136; // rax
  HANDLE v1137; // rax
  int v1138; // edi
  WCHAR *v1139; // r9
  unsigned __int8 v1140; // al
  unsigned __int8 *v1141; // r11
  _BYTE *v1142; // rdx
  _QWORD *v1143; // r10
  int v1144; // esi
  int v1145; // r14d
  int v1146; // r8d
  int v1147; // ecx
  unsigned int v1148; // ecx
  unsigned int v1149; // r8d
  int v1150; // eax
  int v1151; // r9d
  int v1152; // edi
  char v1153; // bl
  unsigned int v1154; // r11d
  SIZE_T v1155; // rdi
  int v1156; // r10d
  int v1157; // r15d
  _BYTE *v1158; // r13
  unsigned __int8 *v1159; // r12
  unsigned int v1160; // eax
  int v1161; // ebx
  SIZE_T v1162; // r14
  int v1163; // r9d
  int v1164; // r8d
  int v1165; // r11d
  int v1166; // edi
  int v1167; // r11d
  unsigned int v1168; // edi
  int v1169; // r11d
  int v1170; // edi
  unsigned int v1171; // r11d
  int v1172; // edi
  int v1173; // r11d
  int v1174; // edi
  unsigned int v1175; // r11d
  int v1176; // edi
  int v1177; // r11d
  unsigned int v1178; // eax
  int v1179; // r11d
  int v1180; // eax
  int v1181; // r11d
  int v1182; // eax
  unsigned int v1183; // r11d
  int v1184; // eax
  int v1185; // r11d
  int v1186; // eax
  unsigned int v1187; // r11d
  int v1188; // eax
  int v1189; // r11d
  int v1190; // eax
  int v1191; // r11d
  int v1192; // eax
  int v1193; // r11d
  int v1194; // eax
  int v1195; // r11d
  int v1196; // eax
  SIZE_T m; // rcx
  _QWORD *v1198; // r11
  int v1199; // edi
  WCHAR *v1200; // r9
  _QWORD *v1201; // r11
  WCHAR *v1202; // r8
  WCHAR *v1203; // r9
  _QWORD *v1204; // r11
  WCHAR *v1205; // r9
  _QWORD *v1206; // r11
  LPVOID v1207; // rcx
  WCHAR *v1208; // rsi
  SIZE_T v1209; // r10
  int *v1210; // rcx
  unsigned int v1211; // r11d
  WCHAR *v1212; // r9
  _QWORD *v1213; // r10
  HANDLE v1214; // rax
  size_t v1215; // rbx
  void *v1216; // rsi
  void *v1217; // rdi
  HANDLE v1218; // rax
  void *v1219; // rdi
  HANDLE v1220; // rax
  HANDLE v1221; // rax
  HANDLE v1222; // rax
  int v1223; // esi
  int v1224; // eax
  HMODULE *v1225; // rdi
  __int64 v1226; // rbx
  unsigned int v1227; // edi
  unsigned __int8 v1229; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1230; // [rsp+60h] [rbp-A0h]
  void *v1231; // [rsp+68h] [rbp-98h]
  const void **v1232; // [rsp+68h] [rbp-98h]
  void *v1233; // [rsp+68h] [rbp-98h]
  __int64 v1234; // [rsp+68h] [rbp-98h]
  __int64 v1235; // [rsp+68h] [rbp-98h]
  int v1236; // [rsp+68h] [rbp-98h]
  int v1237; // [rsp+68h] [rbp-98h]
  int v1238; // [rsp+68h] [rbp-98h]
  int v1239; // [rsp+68h] [rbp-98h]
  unsigned int v1240; // [rsp+68h] [rbp-98h]
  unsigned int v1241; // [rsp+68h] [rbp-98h]
  int v1242; // [rsp+68h] [rbp-98h]
  int v1243; // [rsp+68h] [rbp-98h]
  unsigned int v1244; // [rsp+68h] [rbp-98h]
  int v1245; // [rsp+68h] [rbp-98h]
  int v1246; // [rsp+68h] [rbp-98h]
  int v1247; // [rsp+68h] [rbp-98h]
  void *v1248; // [rsp+70h] [rbp-90h]
  void *v1249; // [rsp+70h] [rbp-90h]
  void *v1250; // [rsp+70h] [rbp-90h]
  WCHAR *v1251; // [rsp+70h] [rbp-90h]
  char *v1252; // [rsp+70h] [rbp-90h]
  _QWORD *v1253; // [rsp+70h] [rbp-90h]
  int v1254; // [rsp+70h] [rbp-90h]
  int v1255; // [rsp+70h] [rbp-90h]
  int v1256; // [rsp+70h] [rbp-90h]
  int v1257; // [rsp+70h] [rbp-90h]
  unsigned int v1258; // [rsp+70h] [rbp-90h]
  unsigned int v1259; // [rsp+70h] [rbp-90h]
  char *v1260; // [rsp+70h] [rbp-90h]
  int v1261; // [rsp+70h] [rbp-90h]
  int v1262; // [rsp+70h] [rbp-90h]
  int v1263; // [rsp+70h] [rbp-90h]
  unsigned int v1264; // [rsp+70h] [rbp-90h]
  unsigned int v1265; // [rsp+70h] [rbp-90h]
  size_t v1266; // [rsp+78h] [rbp-88h]
  void *v1267; // [rsp+78h] [rbp-88h]
  void *v1268; // [rsp+78h] [rbp-88h]
  void *v1269; // [rsp+78h] [rbp-88h]
  void *v1270; // [rsp+78h] [rbp-88h]
  SIZE_T v1271; // [rsp+78h] [rbp-88h]
  char *v1272; // [rsp+78h] [rbp-88h]
  size_t v1273; // [rsp+78h] [rbp-88h]
  size_t v1274; // [rsp+78h] [rbp-88h]
  void *v1275; // [rsp+78h] [rbp-88h]
  void *v1276; // [rsp+78h] [rbp-88h]
  void *v1277; // [rsp+78h] [rbp-88h]
  void *v1278; // [rsp+78h] [rbp-88h]
  void *v1279; // [rsp+78h] [rbp-88h]
  void *v1280; // [rsp+78h] [rbp-88h]
  size_t v1281; // [rsp+78h] [rbp-88h]
  SIZE_T v1282; // [rsp+78h] [rbp-88h]
  unsigned int v1283; // [rsp+80h] [rbp-80h]
  unsigned int v1284; // [rsp+80h] [rbp-80h]
  unsigned int v1285; // [rsp+80h] [rbp-80h]
  unsigned int v1286; // [rsp+80h] [rbp-80h]
  unsigned int v1287; // [rsp+80h] [rbp-80h]
  unsigned int v1288; // [rsp+80h] [rbp-80h]
  int v1289; // [rsp+80h] [rbp-80h]
  int v1290; // [rsp+80h] [rbp-80h]
  int v1291; // [rsp+80h] [rbp-80h]
  int v1292; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1293; // [rsp+88h] [rbp-78h]
  char *v1294; // [rsp+88h] [rbp-78h]
  char *v1295; // [rsp+88h] [rbp-78h]
  int v1296; // [rsp+88h] [rbp-78h]
  int v1297; // [rsp+88h] [rbp-78h]
  int v1298; // [rsp+88h] [rbp-78h]
  int v1299; // [rsp+88h] [rbp-78h]
  int v1300; // [rsp+88h] [rbp-78h]
  int v1301; // [rsp+88h] [rbp-78h]
  int v1302; // [rsp+88h] [rbp-78h]
  unsigned int v1303; // [rsp+88h] [rbp-78h]
  unsigned int v1304; // [rsp+88h] [rbp-78h]
  int v1305; // [rsp+88h] [rbp-78h]
  int v1306; // [rsp+88h] [rbp-78h]
  unsigned __int8 *v1307; // [rsp+88h] [rbp-78h]
  LPCWSTR v1308; // [rsp+90h] [rbp-70h]
  LPCWSTR v1309; // [rsp+90h] [rbp-70h]
  WCHAR *v1310; // [rsp+90h] [rbp-70h]
  WCHAR *v1311; // [rsp+90h] [rbp-70h]
  WCHAR *v1312; // [rsp+90h] [rbp-70h]
  LPCWSTR v1313; // [rsp+90h] [rbp-70h]
  WCHAR *v1314; // [rsp+90h] [rbp-70h]
  LPCWSTR v1315; // [rsp+90h] [rbp-70h]
  WCHAR *v1316; // [rsp+90h] [rbp-70h]
  LPCWSTR v1317; // [rsp+90h] [rbp-70h]
  LPCWSTR v1318; // [rsp+90h] [rbp-70h]
  LPCWSTR v1319; // [rsp+90h] [rbp-70h]
  LPCWSTR v1320; // [rsp+90h] [rbp-70h]
  LPCWSTR v1321; // [rsp+90h] [rbp-70h]
  WCHAR *v1322; // [rsp+90h] [rbp-70h]
  LPCWSTR v1323; // [rsp+90h] [rbp-70h]
  char *Src; // [rsp+98h] [rbp-68h]
  void *Srca; // [rsp+98h] [rbp-68h]
  void *Srcb; // [rsp+98h] [rbp-68h]
  void *Srcc; // [rsp+98h] [rbp-68h]
  LPVOID Srcd; // [rsp+98h] [rbp-68h]
  void *Srce; // [rsp+98h] [rbp-68h]
  const wchar_t *Srcf; // [rsp+98h] [rbp-68h]
  char *Srcg; // [rsp+98h] [rbp-68h]
  char *Srch; // [rsp+98h] [rbp-68h]
  char *Srci; // [rsp+98h] [rbp-68h]
  char *Srcj; // [rsp+98h] [rbp-68h]
  void *Srck; // [rsp+98h] [rbp-68h]
  char *Srcl; // [rsp+98h] [rbp-68h]
  void *Srcm; // [rsp+98h] [rbp-68h]
  char *Srcn; // [rsp+98h] [rbp-68h]
  unsigned int *Srco; // [rsp+98h] [rbp-68h]
  unsigned int v1340; // [rsp+A0h] [rbp-60h]
  unsigned int v1341; // [rsp+A0h] [rbp-60h]
  unsigned int v1342; // [rsp+A0h] [rbp-60h]
  unsigned int v1343; // [rsp+A0h] [rbp-60h]
  unsigned int v1344; // [rsp+A0h] [rbp-60h]
  unsigned int v1345; // [rsp+A0h] [rbp-60h]
  _DWORD *v1346; // [rsp+A0h] [rbp-60h]
  unsigned int v1347; // [rsp+A0h] [rbp-60h]
  unsigned int n; // [rsp+A0h] [rbp-60h]
  unsigned int ii; // [rsp+A0h] [rbp-60h]
  unsigned int v1350; // [rsp+A0h] [rbp-60h]
  int v1351; // [rsp+A0h] [rbp-60h]
  unsigned int v1352; // [rsp+A0h] [rbp-60h]
  int v1353; // [rsp+A0h] [rbp-60h]
  int v1354; // [rsp+A0h] [rbp-60h]
  int v1355; // [rsp+A0h] [rbp-60h]
  int v1356; // [rsp+A0h] [rbp-60h]
  int v1357; // [rsp+A0h] [rbp-60h]
  unsigned int v1358; // [rsp+A8h] [rbp-58h]
  SIZE_T v1359; // [rsp+A8h] [rbp-58h]
  SIZE_T v1360; // [rsp+A8h] [rbp-58h]
  SIZE_T v1361; // [rsp+A8h] [rbp-58h]
  SIZE_T v1362; // [rsp+A8h] [rbp-58h]
  SIZE_T v1363; // [rsp+A8h] [rbp-58h]
  SIZE_T v1364; // [rsp+A8h] [rbp-58h]
  SIZE_T v1365; // [rsp+A8h] [rbp-58h]
  SIZE_T v1366; // [rsp+A8h] [rbp-58h]
  _QWORD *v1367; // [rsp+A8h] [rbp-58h]
  char *v1368; // [rsp+A8h] [rbp-58h]
  SIZE_T v1369; // [rsp+A8h] [rbp-58h]
  SIZE_T v1370; // [rsp+A8h] [rbp-58h]
  void *v1371; // [rsp+B0h] [rbp-50h]
  _QWORD *v1372; // [rsp+B0h] [rbp-50h]
  _QWORD *v1373; // [rsp+B0h] [rbp-50h]
  void *v1374; // [rsp+B0h] [rbp-50h]
  size_t v1375; // [rsp+B0h] [rbp-50h]
  size_t v1376; // [rsp+B0h] [rbp-50h]
  size_t v1377; // [rsp+B0h] [rbp-50h]
  size_t v1378; // [rsp+B0h] [rbp-50h]
  size_t v1379; // [rsp+B0h] [rbp-50h]
  size_t v1380; // [rsp+B0h] [rbp-50h]
  size_t v1381; // [rsp+B0h] [rbp-50h]
  size_t v1382; // [rsp+B0h] [rbp-50h]
  size_t v1383; // [rsp+B0h] [rbp-50h]
  _QWORD *v1384; // [rsp+B0h] [rbp-50h]
  void *v1385; // [rsp+B0h] [rbp-50h]
  void *v1386; // [rsp+B0h] [rbp-50h]
  void *v1387; // [rsp+B0h] [rbp-50h]
  SIZE_T v1388; // [rsp+B8h] [rbp-48h]
  _QWORD *v1389; // [rsp+B8h] [rbp-48h]
  void *v1390; // [rsp+B8h] [rbp-48h]
  SIZE_T v1391; // [rsp+B8h] [rbp-48h]
  void **v1392; // [rsp+B8h] [rbp-48h]
  int v1393; // [rsp+B8h] [rbp-48h]
  unsigned int v1394; // [rsp+B8h] [rbp-48h]
  unsigned int v1395; // [rsp+B8h] [rbp-48h]
  unsigned int v1396; // [rsp+B8h] [rbp-48h]
  SIZE_T v1397; // [rsp+B8h] [rbp-48h]
  SIZE_T v1398; // [rsp+B8h] [rbp-48h]
  SIZE_T v1399; // [rsp+C0h] [rbp-40h]
  void *v1400; // [rsp+C0h] [rbp-40h]
  void *v1401; // [rsp+C0h] [rbp-40h]
  int v1402; // [rsp+C0h] [rbp-40h]
  void *v1403; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v1404; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v1405; // [rsp+C0h] [rbp-40h]
  LPVOID v1406; // [rsp+C8h] [rbp-38h]
  _WORD *v1407; // [rsp+C8h] [rbp-38h]
  int v1408; // [rsp+C8h] [rbp-38h]
  int v1409; // [rsp+C8h] [rbp-38h]
  int v1410; // [rsp+C8h] [rbp-38h]
  int v1411; // [rsp+C8h] [rbp-38h]
  unsigned int v1412; // [rsp+C8h] [rbp-38h]
  int v1413; // [rsp+C8h] [rbp-38h]
  unsigned int v1414; // [rsp+C8h] [rbp-38h]
  unsigned int v1415; // [rsp+C8h] [rbp-38h]
  unsigned int v1416; // [rsp+C8h] [rbp-38h]
  _QWORD *v1417; // [rsp+C8h] [rbp-38h]
  unsigned int *v1418; // [rsp+C8h] [rbp-38h]
  unsigned int v1419; // [rsp+C8h] [rbp-38h]
  int v1420; // [rsp+C8h] [rbp-38h]
  WCHAR *v1421; // [rsp+D0h] [rbp-30h]
  __int64 v1422; // [rsp+D0h] [rbp-30h]
  __int64 v1423; // [rsp+D0h] [rbp-30h]
  char *v1424; // [rsp+D0h] [rbp-30h]
  __int64 v1425; // [rsp+D0h] [rbp-30h]
  char *v1426; // [rsp+D0h] [rbp-30h]
  __int64 v1427; // [rsp+D0h] [rbp-30h]
  LPVOID v1428; // [rsp+D0h] [rbp-30h]
  WCHAR *v1429; // [rsp+D0h] [rbp-30h]
  SIZE_T v1430; // [rsp+D0h] [rbp-30h]
  LPCWSTR lpModuleName; // [rsp+D8h] [rbp-28h]
  WCHAR *lpModuleNamea; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNameb; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNamec; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNamed; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNamee; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNamef; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNameg; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNameh; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNamei; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNamej; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNamek; // [rsp+D8h] [rbp-28h]
  LPCWSTR lpModuleNamel; // [rsp+D8h] [rbp-28h]
  WCHAR *lpModuleNamem; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1445; // [rsp+E0h] [rbp-20h]
  LPCWSTR v1446; // [rsp+E0h] [rbp-20h]
  LPCWSTR v1447; // [rsp+E0h] [rbp-20h]
  LPCWSTR v1448; // [rsp+E0h] [rbp-20h]
  WCHAR *v1449; // [rsp+E0h] [rbp-20h]
  LPCWSTR v1450; // [rsp+E0h] [rbp-20h]
  LPCWSTR v1451; // [rsp+E0h] [rbp-20h]
  unsigned int v1452; // [rsp+E8h] [rbp-18h]
  int v1453; // [rsp+E8h] [rbp-18h]
  unsigned int v1454; // [rsp+E8h] [rbp-18h]
  int v1455; // [rsp+E8h] [rbp-18h]
  int v1456; // [rsp+E8h] [rbp-18h]
  unsigned int v1457; // [rsp+E8h] [rbp-18h]
  unsigned int v1458; // [rsp+E8h] [rbp-18h]
  unsigned int v1459; // [rsp+E8h] [rbp-18h]
  int v1460; // [rsp+E8h] [rbp-18h]
  unsigned int v1461; // [rsp+F0h] [rbp-10h]
  int v1462; // [rsp+F0h] [rbp-10h]
  int v1463; // [rsp+F0h] [rbp-10h]
  int v1464; // [rsp+F0h] [rbp-10h]
  int v1465; // [rsp+F0h] [rbp-10h]
  int v1466; // [rsp+F0h] [rbp-10h]
  unsigned int v1467; // [rsp+F0h] [rbp-10h]
  int v1468; // [rsp+F0h] [rbp-10h]
  int v1469; // [rsp+F0h] [rbp-10h]
  unsigned int v1470; // [rsp+F0h] [rbp-10h]
  unsigned int v1471; // [rsp+F0h] [rbp-10h]
  void *v1472; // [rsp+F0h] [rbp-10h]
  unsigned int v1473; // [rsp+F8h] [rbp-8h]
  _QWORD *v1474; // [rsp+F8h] [rbp-8h]
  unsigned int v1475; // [rsp+F8h] [rbp-8h]
  unsigned int v1476; // [rsp+F8h] [rbp-8h]
  int v1477; // [rsp+F8h] [rbp-8h]
  char v1478; // [rsp+F8h] [rbp-8h]
  SIZE_T v1479; // [rsp+100h] [rbp+0h] BYREF
  size_t Size; // [rsp+108h] [rbp+8h]
  LPVOID v1481; // [rsp+110h] [rbp+10h]
  LPVOID v1482; // [rsp+118h] [rbp+18h]
  LPVOID v1483; // [rsp+120h] [rbp+20h]
  SIZE_T v1484; // [rsp+128h] [rbp+28h]
  SIZE_T v1485; // [rsp+130h] [rbp+30h]
  unsigned int v1486; // [rsp+138h] [rbp+38h] BYREF
  SIZE_T v1487; // [rsp+140h] [rbp+40h]
  int v1488; // [rsp+148h] [rbp+48h]
  int v1489; // [rsp+14Ch] [rbp+4Ch]
  int v1490; // [rsp+150h] [rbp+50h] BYREF
  int v1491; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1492; // [rsp+158h] [rbp+58h] BYREF
  int v1493; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v1494; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1495; // [rsp+164h] [rbp+64h] BYREF
  int v1496; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1497; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1498; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1499; // [rsp+174h] [rbp+74h] BYREF
  int v1500; // [rsp+178h] [rbp+78h] BYREF
  int v1501; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v1502; // [rsp+180h] [rbp+80h] BYREF
  int v1503; // [rsp+184h] [rbp+84h] BYREF
  unsigned int v1504; // [rsp+188h] [rbp+88h] BYREF
  SIZE_T v1505; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1506; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v1507; // [rsp+198h] [rbp+98h] BYREF
  int v1508; // [rsp+19Ch] [rbp+9Ch] BYREF
  unsigned int v1509; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1510; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1511; // [rsp+1ACh] [rbp+ACh] BYREF
  char *v1512; // [rsp+1B0h] [rbp+B0h]
  void *v1513; // [rsp+1B8h] [rbp+B8h]
  unsigned int v1514; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1515; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1516; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int dwBytes; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int dwBytes_4; // [rsp+1D0h] [rbp+D0h] BYREF
  int v1519; // [rsp+1D4h] [rbp+D4h] BYREF
  int v1520; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1521; // [rsp+1DCh] [rbp+DCh] BYREF
  int v1522; // [rsp+1E0h] [rbp+E0h] BYREF
  int v1523; // [rsp+1E4h] [rbp+E4h] BYREF
  int v1524; // [rsp+1E8h] [rbp+E8h] BYREF
  int v1525; // [rsp+1ECh] [rbp+ECh] BYREF
  int v1526; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1527; // [rsp+1FCh] [rbp+FCh] BYREF
  int v1528; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1529; // [rsp+204h] [rbp+104h] BYREF
  int v1530; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1531; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1532; // [rsp+210h] [rbp+110h] BYREF
  int v1533; // [rsp+214h] [rbp+114h] BYREF
  int v1534; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1535; // [rsp+21Ch] [rbp+11Ch] BYREF
  SIZE_T v1536; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1537; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1538; // [rsp+22Ch] [rbp+12Ch] BYREF
  SIZE_T v1539; // [rsp+230h] [rbp+130h] BYREF
  int v1540; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1541; // [rsp+23Ch] [rbp+13Ch] BYREF
  int v1542; // [rsp+240h] [rbp+140h] BYREF
  int v1543; // [rsp+244h] [rbp+144h] BYREF
  int v1544; // [rsp+248h] [rbp+148h] BYREF
  int v1545; // [rsp+24Ch] [rbp+14Ch] BYREF
  int v1546; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1547; // [rsp+25Ch] [rbp+15Ch] BYREF
  int v1548; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v1549; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1550; // [rsp+268h] [rbp+168h] BYREF
  wchar_t *String1; // [rsp+270h] [rbp+170h] BYREF
  wchar_t *v1552; // [rsp+278h] [rbp+178h] BYREF
  wchar_t *v1553; // [rsp+280h] [rbp+180h] BYREF
  wchar_t *v1554; // [rsp+288h] [rbp+188h] BYREF
  size_t pcchLength[2]; // [rsp+290h] [rbp+190h] BYREF
  int *v1556; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v1557; // [rsp+2A8h] [rbp+1A8h] BYREF
  int *v1558; // [rsp+2B0h] [rbp+1B0h] BYREF
  size_t v1559; // [rsp+2B8h] [rbp+1B8h] BYREF
  int *v1560; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v1561; // [rsp+2C8h] [rbp+1C8h] BYREF
  int *v1562; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v1563[5]; // [rsp+2D8h] [rbp+1D8h] BYREF
  void *v1564; // [rsp+300h] [rbp+200h] BYREF
  _DWORD *v1565; // [rsp+308h] [rbp+208h] BYREF
  LPVOID v1566; // [rsp+310h] [rbp+210h] BYREF
  HMODULE phModule; // [rsp+318h] [rbp+218h] BYREF
  unsigned int *v1568; // [rsp+320h] [rbp+220h] BYREF
  void *v1569; // [rsp+338h] [rbp+238h] BYREF
  const WCHAR *v1570; // [rsp+340h] [rbp+240h] BYREF
  const WCHAR *v1571; // [rsp+348h] [rbp+248h] BYREF
  const WCHAR *v1572; // [rsp+350h] [rbp+250h] BYREF
  _DWORD *v1573; // [rsp+358h] [rbp+258h] BYREF
  int *v1574; // [rsp+360h] [rbp+260h] BYREF
  int *v1575; // [rsp+368h] [rbp+268h] BYREF
  int *v1576; // [rsp+370h] [rbp+270h] BYREF
  int *v1577; // [rsp+378h] [rbp+278h] BYREF
  unsigned int *v1578; // [rsp+380h] [rbp+280h] BYREF
  __int64 v1579; // [rsp+388h] [rbp+288h] BYREF
  LPVOID v1580; // [rsp+398h] [rbp+298h]
  void **v1581; // [rsp+3A0h] [rbp+2A0h] BYREF
  LPVOID v1582; // [rsp+3B0h] [rbp+2B0h]
  void *v1583; // [rsp+3B8h] [rbp+2B8h] BYREF
  void *v1584; // [rsp+3C0h] [rbp+2C0h] BYREF
  unsigned __int64 v1585; // [rsp+3C8h] [rbp+2C8h]
  void *v1586; // [rsp+3D0h] [rbp+2D0h] BYREF
  void *v1587; // [rsp+3D8h] [rbp+2D8h] BYREF
  void *v1588; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v1589; // [rsp+3E8h] [rbp+2E8h]
  __int64 v1590; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v1591; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v1592; // [rsp+400h] [rbp+300h] BYREF
  __int64 v1593; // [rsp+408h] [rbp+308h] BYREF
  _QWORD v1594[4]; // [rsp+410h] [rbp+310h] BYREF
  int *v1595; // [rsp+430h] [rbp+330h] BYREF
  int *v1596; // [rsp+438h] [rbp+338h] BYREF
  int *v1597; // [rsp+440h] [rbp+340h] BYREF
  void *v1598[5]; // [rsp+448h] [rbp+348h] BYREF
  void *v1599; // [rsp+470h] [rbp+370h] BYREF
  _DWORD *v1600; // [rsp+478h] [rbp+378h] BYREF
  void *v1601; // [rsp+480h] [rbp+380h] BYREF
  HMODULE hModule; // [rsp+488h] [rbp+388h] BYREF
  void *v1603; // [rsp+490h] [rbp+390h] BYREF
  LPVOID v1604; // [rsp+498h] [rbp+398h] BYREF
  LPVOID v1605; // [rsp+4A0h] [rbp+3A0h] BYREF
  void *v1606; // [rsp+4A8h] [rbp+3A8h] BYREF
  int *v1607; // [rsp+4B0h] [rbp+3B0h] BYREF
  unsigned __int64 v1608[2]; // [rsp+4B8h] [rbp+3B8h] BYREF
  _DWORD *v1609; // [rsp+4C8h] [rbp+3C8h] BYREF
  __int128 v1610; // [rsp+4D0h] [rbp+3D0h]
  __int128 v1611; // [rsp+4E0h] [rbp+3E0h]
  void *v1612; // [rsp+4F8h] [rbp+3F8h] BYREF
  _QWORD *v1613; // [rsp+508h] [rbp+408h] BYREF
  size_t v1614; // [rsp+510h] [rbp+410h] BYREF
  LPVOID lpMem; // [rsp+518h] [rbp+418h]
  LPVOID v1616[2]; // [rsp+520h] [rbp+420h]
  size_t v1617; // [rsp+530h] [rbp+430h] BYREF
  void *v1618; // [rsp+538h] [rbp+438h]
  void *v1619; // [rsp+548h] [rbp+448h] BYREF
  void *v1620; // [rsp+558h] [rbp+458h] BYREF
  _QWORD *v1621; // [rsp+568h] [rbp+468h] BYREF
  void *v1622; // [rsp+578h] [rbp+478h] BYREF
  unsigned int *v1623; // [rsp+588h] [rbp+488h] BYREF
  unsigned int *v1624; // [rsp+598h] [rbp+498h] BYREF
  void *v1625; // [rsp+5A8h] [rbp+4A8h] BYREF
  __int128 v1626; // [rsp+5B0h] [rbp+4B0h]
  __int128 v1627; // [rsp+5C0h] [rbp+4C0h] BYREF
  LPVOID v1628[2]; // [rsp+5D0h] [rbp+4D0h]
  _DWORD *v1629; // [rsp+5E8h] [rbp+4E8h] BYREF
  _QWORD v1630[2]; // [rsp+5F0h] [rbp+4F0h] BYREF
  int v1631; // [rsp+600h] [rbp+500h]
  unsigned int v1632; // [rsp+604h] [rbp+504h]
  int v1633; // [rsp+608h] [rbp+508h]
  _QWORD v1634[2]; // [rsp+610h] [rbp+510h] BYREF
  int v1635; // [rsp+620h] [rbp+520h]
  unsigned int v1636; // [rsp+624h] [rbp+524h]
  int v1637; // [rsp+628h] [rbp+528h]
  _BYTE v1638[24]; // [rsp+630h] [rbp+530h] BYREF
  char *v1639; // [rsp+648h] [rbp+548h]
  _BYTE v1640[4]; // [rsp+6A0h] [rbp+5A0h] BYREF
  int v1641; // [rsp+6A4h] [rbp+5A4h]
  int v1642; // [rsp+6A8h] [rbp+5A8h]
  __int16 v1643; // [rsp+6B2h] [rbp+5B2h]
  __int64 v1644; // [rsp+6B8h] [rbp+5B8h]
  _BYTE v1645[4]; // [rsp+710h] [rbp+610h] BYREF
  int v1646; // [rsp+714h] [rbp+614h]
  int v1647; // [rsp+718h] [rbp+618h]
  char *v1648; // [rsp+728h] [rbp+628h]
  _BYTE v1649[24]; // [rsp+780h] [rbp+680h] BYREF
  SIZE_T v1650; // [rsp+798h] [rbp+698h]
  _BYTE v1651[4]; // [rsp+7F0h] [rbp+6F0h] BYREF
  int v1652; // [rsp+7F4h] [rbp+6F4h]
  int v1653; // [rsp+7F8h] [rbp+6F8h]
  char *v1654; // [rsp+808h] [rbp+708h]
  _BYTE v1655[24]; // [rsp+860h] [rbp+760h] BYREF
  SIZE_T v1656; // [rsp+878h] [rbp+778h]
  _BYTE v1657[4]; // [rsp+8D0h] [rbp+7D0h] BYREF
  int v1658; // [rsp+8D4h] [rbp+7D4h]
  int v1659; // [rsp+8D8h] [rbp+7D8h]
  size_t v1660; // [rsp+8E8h] [rbp+7E8h]
  _BYTE v1661[4]; // [rsp+940h] [rbp+840h] BYREF
  int v1662; // [rsp+944h] [rbp+844h]
  int v1663; // [rsp+948h] [rbp+848h]
  size_t v1664; // [rsp+958h] [rbp+858h]
  _BYTE v1665[24]; // [rsp+9B0h] [rbp+8B0h] BYREF
  char *v1666; // [rsp+9C8h] [rbp+8C8h]
  int v1667; // [rsp+A20h] [rbp+920h] BYREF
  int v1668; // [rsp+A24h] [rbp+924h]
  void *v1669; // [rsp+A28h] [rbp+928h]
  void *v1670; // [rsp+A30h] [rbp+930h]
  void *v1671; // [rsp+A38h] [rbp+938h]
  const WCHAR *v1672; // [rsp+A40h] [rbp+940h]
  const WCHAR *v1673; // [rsp+A48h] [rbp+948h]
  __int64 v1674; // [rsp+A50h] [rbp+950h]
  int v1675; // [rsp+A58h] [rbp+958h]
  __int128 v1676; // [rsp+A5Ch] [rbp+95Ch] BYREF
  __int128 v1677; // [rsp+A6Ch] [rbp+96Ch] BYREF
  unsigned int v1678; // [rsp+A7Ch] [rbp+97Ch] BYREF
  unsigned int v1679; // [rsp+A80h] [rbp+980h]
  unsigned int v1680; // [rsp+A84h] [rbp+984h]
  unsigned int v1681; // [rsp+A88h] [rbp+988h]
  unsigned __int64 v1682; // [rsp+A90h] [rbp+990h]
  unsigned __int64 v1683; // [rsp+A98h] [rbp+998h]
  __int64 v1684; // [rsp+AA0h] [rbp+9A0h]
  __int64 v1685; // [rsp+AA8h] [rbp+9A8h]
  __int128 v1686; // [rsp+AB0h] [rbp+9B0h] BYREF
  __int128 v1687; // [rsp+AC0h] [rbp+9C0h]
  __int128 v1688; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int128 v1689; // [rsp+AE0h] [rbp+9E0h] BYREF
  __int64 v1690; // [rsp+AF0h] [rbp+9F0h] BYREF
  unsigned int v1691; // [rsp+AF8h] [rbp+9F8h]
  int v1692; // [rsp+AFCh] [rbp+9FCh]
  __int128 v1693; // [rsp+B00h] [rbp+A00h] BYREF
  char v1694; // [rsp+B10h] [rbp+A10h] BYREF
  unsigned int v1695; // [rsp+B1Ch] [rbp+A1Ch]
  __int128 v1696; // [rsp+B30h] [rbp+A30h] BYREF
  __int128 v1697; // [rsp+B40h] [rbp+A40h] BYREF
  __int64 v1698; // [rsp+B50h] [rbp+A50h]
  __int128 v1699; // [rsp+B58h] [rbp+A58h] BYREF
  __int128 v1700; // [rsp+B68h] [rbp+A68h] BYREF
  __int64 v1701; // [rsp+B78h] [rbp+A78h]
  __int128 v1702; // [rsp+B80h] [rbp+A80h] BYREF
  __int128 v1703; // [rsp+B90h] [rbp+A90h]
  __int64 v1704; // [rsp+BA0h] [rbp+AA0h]
  int v1705; // [rsp+BA8h] [rbp+AA8h]
  __int128 v1706; // [rsp+BB0h] [rbp+AB0h] BYREF
  __int128 v1707; // [rsp+BC0h] [rbp+AC0h]
  __int64 v1708; // [rsp+BD0h] [rbp+AD0h]
  int v1709; // [rsp+BD8h] [rbp+AD8h]
  __int128 v1710; // [rsp+BE0h] [rbp+AE0h] BYREF
  __int128 v1711; // [rsp+BF0h] [rbp+AF0h]
  __int64 v1712; // [rsp+C00h] [rbp+B00h]
  int v1713; // [rsp+C08h] [rbp+B08h]
  __int128 v1714; // [rsp+C10h] [rbp+B10h] BYREF
  __int128 v1715; // [rsp+C20h] [rbp+B20h]
  __int64 v1716; // [rsp+C30h] [rbp+B30h]
  int v1717; // [rsp+C38h] [rbp+B38h]
  __int128 v1718; // [rsp+C40h] [rbp+B40h] BYREF
  __int128 v1719; // [rsp+C50h] [rbp+B50h]
  __int64 v1720; // [rsp+C60h] [rbp+B60h]
  int v1721; // [rsp+C68h] [rbp+B68h]
  _DWORD v1722[6]; // [rsp+C70h] [rbp+B70h] BYREF
  char v1723; // [rsp+C8Ah] [rbp+B8Ah]
  wchar_t v1724; // [rsp+C8Ch] [rbp+B8Ch] BYREF
  _DWORD v1725[6]; // [rsp+CD0h] [rbp+BD0h] BYREF
  char v1726; // [rsp+CEAh] [rbp+BEAh]
  wchar_t v1727; // [rsp+CECh] [rbp+BECh] BYREF
  _DWORD v1728[6]; // [rsp+D30h] [rbp+C30h] BYREF
  char v1729; // [rsp+D4Ah] [rbp+C4Ah]
  wchar_t v1730; // [rsp+D4Ch] [rbp+C4Ch] BYREF
  _BYTE v1731[68]; // [rsp+D90h] [rbp+C90h] BYREF
  __int16 v1732; // [rsp+DD4h] [rbp+CD4h]
  unsigned __int16 v1733; // [rsp+E36h] [rbp+D36h]
  __int64 v1734; // [rsp+E3Ch] [rbp+D3Ch]
  _QWORD v1735[6]; // [rsp+E70h] [rbp+D70h] BYREF
  int v1736; // [rsp+EA0h] [rbp+DA0h] BYREF
  __int128 v1737; // [rsp+EA8h] [rbp+DA8h]
  __int128 v1738; // [rsp+EB8h] [rbp+DB8h]
  __int128 v1739; // [rsp+EC8h] [rbp+DC8h]
  __int64 v1740; // [rsp+ED8h] [rbp+DD8h]
  _QWORD v1741[20]; // [rsp+EE0h] [rbp+DE0h] BYREF
  _WORD v1742[8]; // [rsp+F80h] [rbp+E80h] BYREF
  _BYTE v1743[176]; // [rsp+F90h] [rbp+E90h] BYREF
  WCHAR Filename; // [rsp+1040h] [rbp+F40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1288h] [rbp+1188h]

  v1568 = 0LL;
  v1512 = 0LL;
  v1479 = 0LL;
  LODWORD(Size) = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1488 = -1;
  v0 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_42;
  v1 = (char *)MemoryAlloc(0x338uLL);
  v2 = v1;
  if ( !v1 )
    goto LABEL_11;
  v3 = 0;
  v4 = -1;
  v5 = 0;
  v6 = 0;
  v7 = v1 + 7;
  v8 = (unsigned __int8 *)&unk_180832662;
  v9 = 103LL;
  do
  {
    v10 = v8[1] | ((*v8 | ((*(v8 - 1) | (*(v8 - 2) << 8)) << 8)) << 8);
    v11 = v8[5] | ((v8[4] | ((v8[3] | (v8[2] << 8)) << 8)) << 8);
    v12 = v10 ^ v6;
    v8 += 8;
    v13 = v12 ^ v11 ^ v5 ^ 0xAC987321;
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
  v44 = 0LL;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  do
    v45 ^= v2[v44++];
  while ( v44 < 0x338 );
  if ( v45 == 64LL )
  {
    v2[823] = 0;
    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
    v51 = v2;
    if ( !*v2 )
      goto LABEL_39;
    while ( 1 )
    {
      v52 = (const WCHAR *)v2;
      v53 = -1LL;
      v46 = 0;
      do
        ++v53;
      while ( *(_WORD *)&v2[2 * v53] );
      v54 = &v2[2 * v53];
      v55 = (char *)&WARBIRD::g_arModuleInfo + 24 * v47;
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
      v1283 = *(_DWORD *)(v54 + 2);
      v2 = v54 + 6;
      for ( i = 0; i < v1283; ++i )
      {
        v59 = v2;
        v60 = -1LL;
        do
          ++v60;
        while ( v2[v60] );
        v2 += v60 + 1;
        if ( v46 >= 0 )
        {
          ProcAddress = (void **)GetProcAddress(*(HMODULE *)v55, v59);
          if ( !ProcAddress )
            goto LABEL_38;
          (&WARBIRD::g_FuncAddress)[v48] = ProcAddress;
        }
        ++v48;
      }
      ++v47;
      if ( !*v2 )
        goto LABEL_38;
    }
    v46 = -1073741702;
LABEL_38:
    if ( v51 )
    {
LABEL_39:
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v51);
    }
    if ( v46 < 0 )
      goto LABEL_11;
    v0 = g_WarbirdSecureFunctionsRefCount;
LABEL_42:
    g_WarbirdSecureFunctionsRefCount = v0 + 1;
    goto LABEL_43;
  }
  MemoryFree(v2);
LABEL_11:
  v49 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v50 = 4LL;
  do
  {
    if ( *v49 )
      FreeLibrary(*v49);
    v49 += 3;
    --v50;
  }
  while ( v50 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_43:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  String1 = 0LL;
  v1552 = 0LL;
  v63 = 0;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_93;
  v65 = ((__int64 (*)(void))off_180985210)();
  v66 = 0LL;
  if ( !v65 )
  {
LABEL_45:
    LastError = GetLastError();
    v67 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v67 = LastError < 0;
    }
    if ( !v67 )
      LastError = -2147467259;
    goto LABEL_94;
  }
  v68 = 0LL;
  v1553 = 0LL;
  for ( j = 0LL; ; j = v1515 )
  {
    v70 = v68;
    if ( !v66 )
      v70 = 0LL;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180985230)(
                         v65,
                         2LL,
                         v70,
                         j,
                         &v1515) )
    {
      v1553 = 0LL;
      String1 = v68;
      goto LABEL_64;
    }
    v71 = GetLastError();
    if ( v71 != 122 )
      break;
    if ( v68 )
      goto LABEL_58;
    v68 = (wchar_t *)MemoryAlloc(v1515);
    v66 = v68;
    v1553 = v68;
    if ( !v68 )
    {
      LastError = -2147024882;
      goto LABEL_64;
    }
  }
  if ( !v71 )
  {
LABEL_58:
    LastError = -2147467259;
    goto LABEL_64;
  }
  if ( v71 > 0 )
    LastError = (unsigned __int16)v71 | 0x80070000;
  else
    LastError = v71;
LABEL_64:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1553);
  if ( LastError >= 0 )
  {
    v72 = off_180985228;
    CurrentThreadId = GetCurrentThreadId();
    v74 = ((__int64 (__fastcall *)(_QWORD))v72)(CurrentThreadId);
    v75 = 0LL;
    if ( !v74 )
      goto LABEL_45;
    v76 = 0LL;
    v1554 = 0LL;
    LastError = 0;
    for ( k = 0LL; ; k = v1516 )
    {
      v78 = v76;
      if ( !v75 )
        v78 = 0LL;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180985230)(
                           v74,
                           2LL,
                           v78,
                           k,
                           &v1516) )
      {
        v1554 = 0LL;
        v1552 = v76;
        goto LABEL_81;
      }
      v79 = GetLastError();
      if ( v79 != 122 )
        break;
      if ( v76 )
        goto LABEL_75;
      v76 = (wchar_t *)MemoryAlloc(v1516);
      v75 = v76;
      v1554 = v76;
      if ( !v76 )
      {
        LastError = -2147024882;
        goto LABEL_81;
      }
    }
    if ( !v79 )
    {
LABEL_75:
      LastError = -2147467259;
      goto LABEL_81;
    }
    LastError = v79 > 0 ? (unsigned __int16)v79 | 0x80070000 : v79;
LABEL_81:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1554);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1552 && !wcscmp_0(v1552, L"Default") )
      {
        v1490 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1490, 4LL) )
        {
          LastError = GetLastError();
          v81 = LastError < 0;
          if ( LastError > 0 )
          {
            LastError = (unsigned __int16)LastError | 0x80070000;
            v81 = LastError < 0;
          }
          if ( !v81 )
            LastError = -2147467259;
          goto LABEL_94;
        }
        if ( (v1490 & 0xF) == 0 )
          v63 = 1;
      }
LABEL_93:
      LODWORD(Size) = v63;
    }
  }
LABEL_94:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1552);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&String1);
  v82 = 0;
  if ( LastError >= 0 )
    v82 = Size;
  v1284 = v82;
  v83 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach((HLOCAL *)&v1479, v83);
  v1513 = (void *)v1479;
  v84 = 0LL;
  if ( v1479 )
  {
    v86 = 0LL;
    lpMem = 0LL;
    *(_OWORD *)v1616 = 0LL;
    v87 = GetProcessHeap();
    v88 = HeapAlloc(v87, 8u, 0xA0uLL);
    v85 = -1073741801;
    v1489 = 56;
    if ( !v88 )
    {
LABEL_99:
      LODWORD(v1485) = v85;
LABEL_100:
      v89 = v82;
      goto LABEL_101;
    }
    v84 = v88;
    *v88 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
    v88[1] = *((_OWORD *)&_ImageBase + 625603);
    v88[2] = *((_OWORD *)&_ImageBase + 625604);
    v88[3] = *((_OWORD *)&_ImageBase + 625605);
    v88[4] = *((_OWORD *)&_ImageBase + 625606);
    v88[5] = *((_OWORD *)&_ImageBase + 625607);
    v88[6] = *((_OWORD *)&_ImageBase + 625608);
    v88[7] = *((_OWORD *)&_ImageBase + 625609);
    v88[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
    v88[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
    v98 = GetProcessHeap();
    v99 = HeapAlloc(v98, 8u, 8uLL);
    if ( !v99 )
    {
      LODWORD(v1485) = -1073741801;
LABEL_118:
      v89 = v82;
      goto LABEL_101;
    }
    *v99 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
    v1406 = (LPVOID)__rdtsc();
    dwBytes = 0;
    v85 = RtlUIntAdd(4u, 4, (unsigned int *)&v1519);
    LODWORD(v1485) = v85;
    if ( v85 < 0 )
    {
      v89 = v82;
      v86 = v100;
      goto LABEL_101;
    }
    v101 = RtlUIntAdd(0, v1519, &dwBytes);
    v85 = v101 | 0x10000000;
    LODWORD(v1485) = v101 | 0x10000000;
    v89 = v82;
    v86 = v103;
    if ( v101 < 0 )
      goto LABEL_101;
    v85 = RtlUIntAdd(v102, 160, (unsigned int *)&v1520);
    LODWORD(v1485) = v85;
    if ( v85 < 0 )
      goto LABEL_101;
    v104 = RtlUIntAdd(dwBytes, v1520, &dwBytes);
    v85 = v104 | 0x10000000;
    LODWORD(v1485) = v104 | 0x10000000;
    if ( v104 < 0 )
      goto LABEL_101;
    v85 = RtlUIntAdd(v105, v105 + 4, (unsigned int *)&v1530);
    LODWORD(v1485) = v85;
    if ( v85 < 0 )
      goto LABEL_101;
    v106 = RtlUIntAdd(dwBytes, v1530, &dwBytes);
    v85 = v106 | 0x10000000;
    LODWORD(v1485) = v106 | 0x10000000;
    if ( v106 < 0 )
      goto LABEL_101;
    v85 = RtlUIntAdd(v107, v107 + 4, (unsigned int *)&v1542);
    LODWORD(v1485) = v85;
    if ( v85 < 0 )
      goto LABEL_101;
    v108 = RtlUIntAdd(dwBytes, v1542, &dwBytes);
    v85 = v108 | 0x10000000;
    LODWORD(v1485) = v108 | 0x10000000;
    if ( v108 < 0 )
      goto LABEL_101;
    if ( StringCchLengthW(L"Shell-ConfigureChatIcon-State", v109, pcchLength) < 0 )
    {
      v85 = -1073741762;
LABEL_129:
      LODWORD(v1485) = v85;
      goto LABEL_101;
    }
    ++pcchLength[0];
    v85 = RtlUIntAdd(4u, 2 * LODWORD(pcchLength[0]), (unsigned int *)&v1543);
    LODWORD(v1485) = v85;
    if ( v85 < 0 )
      goto LABEL_101;
    v110 = RtlUIntAdd(dwBytes, v1543, &dwBytes);
    v85 = v110 | 0x10000000;
    LODWORD(v1485) = v110 | 0x10000000;
    if ( v110 < 0 )
      goto LABEL_101;
    v85 = RtlUIntAdd(4u, 4, (unsigned int *)&v1544);
    LODWORD(v1485) = v85;
    if ( v85 < 0 )
      goto LABEL_101;
    v111 = RtlUIntAdd(dwBytes, v1544, &dwBytes);
    v85 = v111 | 0x10000000;
    LODWORD(v1485) = v111 | 0x10000000;
    if ( v111 < 0
      || (v85 = RtlUIntAdd(v112, v112, (unsigned int *)&v1545), LODWORD(v1485) = v85, v85 < 0)
      || (v113 = RtlUIntAdd(dwBytes, v1545, &dwBytes),
          v85 = v113 | 0x10000000,
          LODWORD(v1485) = v113 | 0x10000000,
          v113 < 0) )
    {
LABEL_101:
      v1614 = 0LL;
      v90 = lpMem;
      if ( lpMem )
      {
        v91 = GetProcessHeap();
        HeapFree(v91, 0, v90);
        lpMem = 0LL;
      }
      v1616[0] = 0LL;
      v92 = v1616[1];
      if ( v1616[1] )
      {
        v93 = GetProcessHeap();
        HeapFree(v93, 0, v92);
        v1616[1] = 0LL;
      }
      if ( v84 )
      {
        v94 = GetProcessHeap();
        HeapFree(v94, 0, v84);
      }
      if ( v86 )
      {
        v95 = GetProcessHeap();
        HeapFree(v95, 0, v86);
      }
      if ( v85 < 0 )
        goto LABEL_1595;
      if ( !v89 )
      {
LABEL_1594:
        v1479 = 0LL;
        v1568 = (unsigned int *)v1513;
        v1223 = HIDWORD(v1512);
        goto LABEL_1596;
      }
      v1579 = 0LL;
      g_WarbirdNotificationInformation = v89;
      ModuleFileNameW = GetModuleFileNameW(&_ImageBase, &Filename, 0x104u);
      v97 = 0LL;
      if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
        goto LABEL_1241;
      v1266 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
      if ( !v1266 )
      {
        GetLastError();
LABEL_1241:
        SH<void *,SH_HANDLE>::Reset(&v1579);
        v903 = 0LL;
        v1618 = 0LL;
        *(_OWORD *)v1628 = 0LL;
        v904 = GetProcessHeap();
        v905 = HeapAlloc(v904, 8u, 0xA0uLL);
        if ( !v905 )
          goto LABEL_1586;
        v903 = v905;
        *v905 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
        v905[1] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
        v905[2] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
        v905[3] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
        v905[4] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
        v905[5] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
        v905[6] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
        v905[7] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
        v905[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
        v905[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
        v906 = GetProcessHeap();
        v907 = (WCHAR *)HeapAlloc(v906, 8u, 8uLL);
        v908 = v907;
        if ( !v907 )
          goto LABEL_1586;
        *(_QWORD *)v907 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
        v1403 = (void *)__rdtsc();
        v1521 = 0;
        v97 = (__int64)v908;
        if ( (int)RtlUIntAdd(4u, 4, (unsigned int *)&v1522) < 0 )
          goto LABEL_1586;
        if ( (int)RtlUIntAdd(0, v1522, &v1521) < 0 )
          goto LABEL_1586;
        if ( (int)RtlUIntAdd(v909, 160, (unsigned int *)&v1523) < 0 )
          goto LABEL_1586;
        v910 = RtlUIntAdd(v1521, v1523, &v1521);
        if ( (v913 | v910) < 0 )
          goto LABEL_1586;
        if ( (int)RtlUIntAdd(v912, v911 + 8, (unsigned int *)&v1524) < 0 )
          goto LABEL_1586;
        v914 = RtlUIntAdd(v1521, v1524, &v1521);
        if ( (v917 | v914) < 0 )
          goto LABEL_1586;
        if ( (int)RtlUIntAdd(v916, v915 + 8, (unsigned int *)&v1525) < 0 )
          goto LABEL_1586;
        v918 = RtlUIntAdd(v1521, v1525, &v1521);
        if ( (v919 | v918) < 0 )
          goto LABEL_1586;
        HIDWORD(v1617) = v1521;
        v920 = v1521;
        v921 = GetProcessHeap();
        v922 = HeapAlloc(v921, 8u, v920);
        if ( !v922 )
          goto LABEL_1586;
        v1618 = v922;
        LODWORD(v1617) = 0;
        v1594[3] = v922;
        v1450 = v908;
        v1274 = (size_t)v903;
        v923 = 0LL;
        if ( (int)RtlULongLongAdd((unsigned __int64)v922, 4LL, (unsigned __int64 *)&v1629) < 0
          || v925 + 2 > (_DWORD *)((char *)v925 + HIDWORD(v1617)) )
        {
          goto LABEL_1586;
        }
        *v925 = 4;
        *v1629 = 4;
        v926 = v1617 + 1;
        LODWORD(v1617) = v1617 + 1;
        if ( v1618 )
        {
          v928 = (int *)v1618;
          v1595 = (int *)v1618;
          v1240 = 0;
          if ( v926 )
          {
            do
            {
              if ( (int)RtlUIntAdd(4u, *v928, &v1527) < 0
                || (int)RtlULongLongAdd(v929, v1527, (unsigned __int64 *)&v1595) < 0 )
              {
                goto LABEL_1586;
              }
              ++v1240;
              v1450 = (LPCWSTR)v97;
              v1274 = (size_t)v903;
              v928 = v1595;
            }
            while ( v1240 < v930 );
            v923 = 0LL;
          }
          if ( (int)RtlULongLongAdd((unsigned __int64)v928, 4LL, (unsigned __int64 *)&v1612) < 0
            || (char *)v931 + v932 + 4 > (char *)v1618 + HIDWORD(v1617) )
          {
            goto LABEL_1586;
          }
          *v931 = v932;
          memcpy_0(v1612, v903, v932);
          v927 = 4LL;
        }
        else if ( (int)RtlUIntAdd(4u, v924, (unsigned int *)&v1526) < 0
               || (int)RtlUIntAdd(HIDWORD(v1617), v1526, (unsigned int *)&v1617 + 1) < 0 )
        {
          goto LABEL_1586;
        }
        v933 = v1617 + 1;
        LODWORD(v1617) = v1617 + 1;
        if ( v97 )
        {
          if ( v1618 )
          {
            v936 = (int *)v1618;
            v1596 = (int *)v1618;
            v1241 = 0;
            if ( v933 )
            {
              do
              {
                if ( (int)RtlUIntAdd(4u, *v936, &v1529) < 0
                  || (int)RtlULongLongAdd(v937, v1529, (unsigned __int64 *)&v1596) < 0 )
                {
                  goto LABEL_1586;
                }
                ++v1241;
                v1450 = (LPCWSTR)v97;
                v1274 = (size_t)v903;
                v936 = v1596;
              }
              while ( v1241 < v938 );
              v923 = 0LL;
              v927 = 4LL;
            }
            if ( (int)RtlULongLongAdd((unsigned __int64)v936, v927, (unsigned __int64 *)&v1625) < 0
              || v939 + 3 > (_DWORD *)((char *)v1618 + HIDWORD(v1617)) )
            {
              goto LABEL_1586;
            }
            *v939 = 8;
            memcpy_0(v1625, (const void *)v97, 8uLL);
            v935 = 4LL;
            v934 = 1;
          }
          else if ( (int)RtlUIntAdd(v927, 8, (unsigned int *)&v1528) < 0
                 || (int)RtlUIntAdd(HIDWORD(v1617), v1528, (unsigned int *)&v1617 + 1) < 0 )
          {
            goto LABEL_1586;
          }
          v940 = v934 + v1617;
          LODWORD(v1617) = v934 + v1617;
          if ( v1618 )
          {
            v943 = (int *)v1618;
            v1597 = (int *)v1618;
            if ( v940 )
            {
              do
              {
                if ( (int)RtlUIntAdd(4u, *v943, &v1531) < 0
                  || (int)RtlULongLongAdd(v944, v1531, (unsigned __int64 *)&v1597) < 0 )
                {
                  goto LABEL_1586;
                }
                LODWORD(v923) = (_DWORD)v923 + 1;
                v1450 = (LPCWSTR)v97;
                v1274 = (size_t)v903;
                v943 = v1597;
              }
              while ( (unsigned int)v923 < v940 );
              v935 = 4LL;
            }
            v923 = 0LL;
            if ( (int)RtlULongLongAdd((unsigned __int64)v943, v935, (unsigned __int64 *)&v1613) < 0
              || v945 + 3 > (_DWORD *)((char *)v1618 + HIDWORD(v1617)) )
            {
              goto LABEL_1586;
            }
            *v945 = 8;
            *v1613 = v1403;
            LODWORD(v1617) = v1617 + 1;
          }
          else
          {
            if ( (int)RtlUIntAdd(v935, 8, (unsigned int *)&v1540) < 0
              || (int)RtlUIntAdd(HIDWORD(v1617), v1540, (unsigned int *)&v1617 + 1) < 0 )
            {
              goto LABEL_1586;
            }
            LODWORD(v1617) = v941 + v1617;
          }
          if ( (int)RtlUIntAdd(v942, v942, &v1532) >= 0 )
          {
            v947 = v1532;
            v1533 = v1532;
            if ( (int)RtlUIntAdd(v946, 8, (unsigned int *)&v1534) >= 0
              && (int)RtlUIntAdd(v947, v1534, (unsigned int *)&v1533) >= 0 )
            {
              v1242 = v1533;
              v1404 = 0LL;
              v1258 = 0;
              v1482 = 0LL;
              lpModuleNamem = 0LL;
              v1413 = 0;
              Srco = 0LL;
              v1384 = 0LL;
              v1322 = 0LL;
              v1366 = __rdtsc();
              v1535 = 8;
              v948 = RtlUIntAdd(8u, SHIDWORD(v1617), &v1535);
              if ( v948 >= 0 )
              {
                v951 = (v1535 + 7) & 0xFFFFFFF8;
                if ( v951 < v1535 )
                  goto LABEL_1586;
                v1535 = (v1535 + 7) & 0xFFFFFFF8;
                v952 = v951;
                v953 = GetProcessHeap();
                v954 = HeapAlloc(v953, 8u, v952);
                v1481 = v954;
                if ( !v954 )
                  goto LABEL_1586;
                v1598[0] = v954;
                *v954 = v1617;
                v948 = RtlULongLongAdd((unsigned __int64)v954, 4LL, (unsigned __int64 *)v1598);
                v1484 = v955;
                v1450 = (LPCWSTR)v97;
                v1274 = (size_t)v903;
                if ( v948 < 0
                  || (v956 = v1598[0],
                      *(_DWORD *)v1598[0] = HIDWORD(v1617),
                      v948 = RtlULongLongAdd((unsigned __int64)v956, 4LL, (unsigned __int64 *)v1598),
                      v1484 = v957,
                      v1450 = (LPCWSTR)v97,
                      v1274 = (size_t)v903,
                      v948 < 0) )
                {
                  v958 = GetProcessHeap();
                  HeapFree(v958, 0, (LPVOID)v1484);
                  v949 = 0;
                }
                else
                {
                  *(_QWORD *)(v1535 + v957 - 8) = v1366;
                  memcpy_0(v1598[0], v1618, HIDWORD(v1617));
                  v923 = (unsigned __int8 *)v1481;
                  v1404 = (unsigned __int8 *)v1481;
                  v949 = v1535;
                  v1258 = v1535;
                  v1450 = (LPCWSTR)v97;
                  v1274 = (size_t)v903;
                }
                v950 = 0LL;
              }
              v959 = v948 | 0x10000000;
              if ( v959 < 0 )
                goto LABEL_1371;
              v1367 = v950;
              if ( v923 )
              {
                v960 = v949;
                v1428 = (LPVOID)v949;
                if ( !v949 || (v1479 = v949 + 8LL, v961 = (char *)MemoryAlloc(v1479), (v1487 = (SIZE_T)v961) == 0) )
                {
                  v959 = -805306367;
LABEL_1372:
                  v1057 = GetProcessHeap();
                  HeapFree(v1057, 0, v923);
LABEL_1373:
                  v1058 = v1482;
                  if ( v1482 )
                  {
                    v1059 = (void *)*((_QWORD *)v1482 + 1);
                    if ( v1059 )
                    {
                      v1060 = GetProcessHeap();
                      HeapFree(v1060, 0, v1059);
                      v1058[1] = 0LL;
                    }
                    v1061 = (void *)v1058[3];
                    if ( v1061 )
                    {
                      v1062 = GetProcessHeap();
                      HeapFree(v1062, 0, v1061);
                      v1058[3] = 0LL;
                    }
                    v1063 = (void *)v1058[5];
                    if ( v1063 )
                    {
                      v1064 = GetProcessHeap();
                      HeapFree(v1064, 0, v1063);
                      v1058[5] = 0LL;
                    }
                    v1065 = GetProcessHeap();
                    HeapFree(v1065, 0, v1058);
                  }
                  if ( lpModuleNamem )
                  {
                    v1066 = GetProcessHeap();
                    HeapFree(v1066, 0, lpModuleNamem);
                  }
                  if ( Srco )
                  {
                    v1067 = GetProcessHeap();
                    HeapFree(v1067, 0, Srco);
                  }
                  if ( v1384 )
                  {
                    v1068 = (void *)v1384[1];
                    if ( v1068 )
                    {
                      v1069 = GetProcessHeap();
                      HeapFree(v1069, 0, v1068);
                      v1384[1] = 0LL;
                    }
                    v1070 = (void *)v1384[3];
                    if ( v1070 )
                    {
                      v1071 = GetProcessHeap();
                      HeapFree(v1071, 0, v1070);
                      v1384[3] = 0LL;
                    }
                    v1072 = (void *)v1384[5];
                    if ( v1072 )
                    {
                      v1073 = GetProcessHeap();
                      HeapFree(v1073, 0, v1072);
                      v1384[5] = 0LL;
                    }
                    v1074 = GetProcessHeap();
                    HeapFree(v1074, 0, v1384);
                  }
                  if ( v1322 )
                  {
                    v1075 = GetProcessHeap();
                    HeapFree(v1075, 0, v1322);
                  }
                  if ( v959 >= 0 )
                  {
                    if ( LODWORD(v1628[0]) )
                    {
                      v1076 = v1628[1];
                      if ( v1628[1] )
                      {
                        v1607 = (int *)v1628[1];
                        if ( (int)RtlULongLongAdd((unsigned __int64)v1628[1], 4LL, (unsigned __int64 *)&v1607) >= 0 )
                        {
                          v1079 = v1607;
                          if ( !*v1076 )
                            v1079 = 0LL;
                          v1607 = v1079;
                          if ( *v1076 == (_DWORD)v1078 && *v1079 >= 0 && v1076 && LODWORD(v1628[0]) > 1 )
                          {
                            v1608[0] = v1077;
                            v1080 = 0;
                            while ( (int)RtlULongLongAdd(v1077, v1078, v1608) >= 0
                                 && (int)RtlULongLongAdd(v1608[0], v1081, v1608) >= 0 )
                            {
                              ++v1080;
                              v1077 = v1608[0];
                              if ( v1080 )
                              {
                                RtlULongLongAdd(v1608[0], v1078, v1608);
                                goto LABEL_1586;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_1586;
                }
                v962 = 0;
                v1230 = 0;
                v963 = 0LL;
                if ( v960 )
                {
                  do
                    v962 ^= v923[v963++];
                  while ( v963 < v960 );
                  v1230 = v962;
                }
                v1683 = 0xC81ECB17B1B54A58uLL;
                v964 = v923;
                v965 = v961;
                v1483 = v961;
                v966 = 0;
                v967 = -1;
                LODWORD(v1481) = 0;
                LODWORD(v1484) = 0;
                v968 = v1258;
                v969 = v1258 & 7;
                if ( (v1258 & 7) != 0 )
                {
                  v970 = 0;
                  v971 = 0;
                  v1259 = 0;
                  v972 = 56;
                  do
                  {
                    v973 = *v964++;
                    if ( v971 >= 4 )
                      v970 |= v973 << v972;
                    else
                      v966 |= v973 << (v972 - 32);
                    LODWORD(v1481) = v970;
                    LODWORD(v1484) = v966;
                    v971 = v1259 + 1;
                    v1259 = v971;
                    v972 -= 8;
                  }
                  while ( (int)v971 < v969 );
                  v1307 = v964;
                  v966 ^= 0xB17A307A;
                  v974 = v970 ^ 0x42F6B18D;
                  v975 = v966;
                  v976 = v974;
                  v1450 = (LPCWSTR)v97;
                  v1274 = (size_t)v903;
                  v1404 = v923;
                  v85 = v1485;
                  v977 = v1483;
                  v978 = 0;
                  do
                  {
                    v1260 = v977 + 1;
                    if ( v978 >= 4 )
                    {
                      v976 = __ROL4__(v976, 8);
                      v979 = v976;
                    }
                    else
                    {
                      v975 = __ROL4__(v975, 8);
                      v979 = v975;
                    }
                    *v977 = v979;
                    ++v978;
                    ++v977;
                  }
                  while ( v978 < v969 );
                  v965 = v1260;
                  v1483 = v1260;
                  v962 = v1230;
                  v964 = v1307;
                  v968 = (unsigned __int64)v1428;
                  if ( (unsigned int)v969 <= 4 )
                  {
                    v967 = 0;
                    if ( (unsigned int)v969 >= 4 )
                      goto LABEL_1325;
                    v966 = v966 >> (8 * (4 - v969)) << (8 * (4 - v969));
                  }
                  else
                  {
                    v967 = v974 >> (8 * (8 - v969)) << (8 * (8 - v969));
                  }
                  v965 = (char *)v1483;
                }
LABEL_1325:
                if ( v968 >> 3 )
                {
                  v1261 = WORD1(v1683);
                  v980 = WORD2(v1683);
                  LODWORD(v1483) = HIWORD(v1683);
                  v981 = v965 + 7;
                  v982 = v964 + 2;
                  v983 = v968 >> 3;
                  v984 = (int)v1481;
                  v985 = v1484;
                  do
                  {
                    v986 = v982[1] | ((*v982 | ((*(v982 - 1) | (*(v982 - 2) << 8)) << 8)) << 8);
                    v987 = v982[5] | ((v982[4] | ((v982[3] | (v982[2] << 8)) << 8)) << 8);
                    v988 = v987 ^ v967;
                    v982 += 8;
                    v989 = v966 ^ v986 ^ (v988 - 19032);
                    v990 = (__ROR4__(HIDWORD(v1683) ^ v989, 7) + WORD1(v1683) * __ROR4__(v989, 15)) ^ v988;
                    v991 = (v980 * __ROR4__(v990 - 1313519016, 9) - __ROR4__(v990, 10)) ^ HIDWORD(v1683) ^ v989;
                    v992 = (__ROL4__(v991, 5) + HIWORD(v1683) * __ROL4__(v980 ^ v991, 4)) ^ v990;
                    v993 = (HIDWORD(v1683) - (v992 ^ 0xB1B54A58)) ^ v991;
                    v994 = (WORD1(v1683) * (v993 - 19032) - (v993 >> 6)) ^ v992;
                    v995 = (19032 * (v980 ^ __ROR4__(v994, 15))) ^ v993;
                    v996 = (v980 * (HIWORD(v1683) + __ROR4__(~v995, 3))) ^ v994;
                    v997 = (v996 - 19032 - HIDWORD(v1683)) ^ v995;
                    v998 = (v1261 * ((unsigned int)v1483 ^ v997)) ^ __ROR4__(v997, 10) ^ v996;
                    v999 = __ROR4__(v998, 3) ^ (v980 * __ROL4__(v998 ^ 0x4A58, 6)) ^ v997;
                    v1000 = (19032 * (__ROR4__(v999, 15) - HIWORD(v1683))) ^ v998;
                    v1001 = (v1000 >> 15) ^ (19032 * __ROL4__(v1000 - v980, 3)) ^ (v1000 >> 1) ^ (19032
                                                                                                * (HIWORD(v1683) ^ v1000)) ^ v999;
                    v1002 = (WORD1(v1683) * (v1001 - v980) - (v1001 >> 13)) ^ v1000;
                    v1003 = __ROR4__(v1002, 11) ^ (v980 * __ROR4__(-1313519016 - v1002, 9)) ^ v1001;
                    v1004 = (v1003 - HIWORD(v1683) + 1313519016) ^ v1002;
                    v1005 = (19032 * (v1261 ^ v1004) - __ROR4__(v1004, 7)) ^ v1003;
                    v1006 = (WORD1(v1683) * __ROL4__(HIWORD(v1683) ^ v1005, 4) - __ROR4__(v1005, 16)) ^ v1004;
                    v1007 = (__ROR4__(v1006, 4) + v980 * __ROR4__(-1313519016 - v1006, 10)) ^ v1005;
                    v1008 = __ROR4__(v1007, 9) ^ (HIWORD(v1683) * __ROR4__(v1007 + 1313519016, 4)) ^ v1006;
                    v1009 = (19032 * __ROL4__(v1008 ^ HIDWORD(v1683), 8) - __ROL4__(v1008, 2)) ^ v1007;
                    v1010 = (WORD1(v1683) * __ROR4__(HIDWORD(v1683) - v1009, 11) - __ROR4__(v1009, 12)) ^ v1008;
                    v1011 = (v1010 >> 8) ^ (v980 * (v1010 ^ WORD1(v1683))) ^ v1009;
                    v1012 = v1011 ^ HIDWORD(v1683) ^ v1010 ^ 0xB1B54A58;
                    v1013 = v985 ^ v1011;
                    v1014 = v984 ^ v1012;
                    *(v981 - 4) = v1013;
                    v1015 = __ROR4__(v1013, 8);
                    *v981 = v1014;
                    v1016 = __ROR4__(v1014, 8);
                    *(v981 - 5) = v1015;
                    v1017 = __ROR4__(v1015, 8);
                    *(v981 - 1) = v1016;
                    v1018 = __ROR4__(v1016, 8);
                    *(v981 - 6) = v1017;
                    v1019 = __ROR4__(v1017, 8);
                    *(v981 - 2) = v1018;
                    v1020 = __ROR4__(v1018, 8);
                    *(v981 - 7) = v1019;
                    *(v981 - 3) = v1020;
                    v966 = __ROR4__(v1019, 8);
                    v967 = __ROR4__(v1020, 8);
                    v985 = v986;
                    v984 = v987;
                    v981 += 8;
                    --v983;
                  }
                  while ( v983 );
                  v962 = v1230;
                  v85 = v1485;
                  v903 = (void *)v1274;
                  v97 = (__int64)v1450;
                  v923 = v1404;
                  v968 = (unsigned __int64)v1428;
                }
                v1021 = (const void *)v1487;
                *(_QWORD *)(v1487 + v968) = v962;
                v1598[4] = (void *)160;
                v1022 = GetProcessHeap();
                v1023 = (unsigned int *)HeapAlloc(v1022, 8u, 0x30uLL);
                if ( v1023 )
                {
                  *v1023 = v1479;
                  v1025 = GetProcessHeap();
                  v1026 = HeapAlloc(v1025, 8u, (unsigned int)v1479);
                  if ( !v1026 )
                    goto LABEL_1334;
                  *((_QWORD *)v1023 + 1) = v1026;
                  memcpy_0(v1026, v1021, (unsigned int)v1479);
                  v1023[4] = 160;
                  v1027 = GetProcessHeap();
                  v1028 = HeapAlloc(v1027, 8u, 0xA0uLL);
                  if ( !v1028 )
                    goto LABEL_1334;
                  *((_QWORD *)v1023 + 3) = v1028;
                  *v1028 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                  v1028[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                  v1028[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                  v1028[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                  v1028[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                  v1028[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                  v1028[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                  v1028[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                  v1028[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                  v1028[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                  v1023[8] = 8;
                  v1029 = GetProcessHeap();
                  v1030 = HeapAlloc(v1029, 8u, 8uLL);
                  v1024 = 0;
                  if ( v1030 )
                  {
                    *((_QWORD *)v1023 + 5) = v1030;
                    *v1030 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                    v1367 = 0LL;
                  }
                  else
                  {
LABEL_1334:
                    v1024 = -1073741801;
                    v1275 = (void *)*((_QWORD *)v1023 + 1);
                    if ( v1275 )
                    {
                      v1031 = GetProcessHeap();
                      HeapFree(v1031, 0, v1275);
                      *((_QWORD *)v1023 + 1) = 0LL;
                    }
                    v1276 = (void *)*((_QWORD *)v1023 + 3);
                    if ( v1276 )
                    {
                      v1032 = GetProcessHeap();
                      HeapFree(v1032, 0, v1276);
                      *((_QWORD *)v1023 + 3) = 0LL;
                    }
                    v1277 = (void *)*((_QWORD *)v1023 + 5);
                    if ( v1277 )
                    {
                      v1033 = GetProcessHeap();
                      HeapFree(v1033, 0, v1277);
                      *((_QWORD *)v1023 + 5) = 0LL;
                    }
                    v1034 = GetProcessHeap();
                    HeapFree(v1034, 0, v1023);
                    v1023 = 0LL;
                  }
                }
                else
                {
                  v1024 = -1073741801;
                  v1023 = 0LL;
                }
                v1482 = v1023;
                v1035 = GetProcessHeap();
                HeapFree(v1035, 0, (LPVOID)v1487);
                v1036 = v1367;
                if ( v1367 )
                {
                  v1278 = (void *)v1367[1];
                  if ( v1278 )
                  {
                    v1037 = GetProcessHeap();
                    HeapFree(v1037, 0, v1278);
                    v1036 = v1367;
                    v1367[1] = 0LL;
                  }
                  v1279 = (void *)v1036[3];
                  if ( v1279 )
                  {
                    v1038 = GetProcessHeap();
                    HeapFree(v1038, 0, v1279);
                    v1036 = v1367;
                    v1367[3] = 0LL;
                  }
                  v1280 = (void *)v1036[5];
                  if ( v1280 )
                  {
                    v1039 = GetProcessHeap();
                    HeapFree(v1039, 0, v1280);
                    v1367[5] = 0LL;
                  }
                  v1040 = GetProcessHeap();
                  HeapFree(v1040, 0, v1367);
                  v1482 = v1023;
                }
                v959 = v1024 | 0x10000000;
                if ( v959 < 0 )
                  goto LABEL_1371;
                LODWORD(v1536) = 4;
                v1041 = RtlUIntAdd(4u, *v1023, (unsigned int *)&v1536);
                if ( v1041 >= 0 )
                {
                  v1041 = RtlUIntAdd(v1536, v1042, (unsigned int *)&v1536);
                  if ( v1041 >= 0 )
                  {
                    v1041 = RtlUIntAdd(v1536, v1023[4], (unsigned int *)&v1536);
                    if ( v1041 >= 0 )
                    {
                      v1041 = RtlUIntAdd(v1536, v1043, (unsigned int *)&v1536);
                      if ( v1041 >= 0 )
                      {
                        v1041 = RtlUIntAdd(v1536, v1023[8], (unsigned int *)&v1536);
                        if ( v1041 >= 0 )
                        {
                          v1262 = v1536;
                          v1044 = v1536;
                          v1045 = GetProcessHeap();
                          v1046 = HeapAlloc(v1045, 8u, v1044);
                          v1479 = (SIZE_T)v1046;
                          if ( !v1046 )
                            goto LABEL_1436;
                          v1599 = v1046;
                          *v1046 = *v1023;
                          v1041 = RtlULongLongAdd((unsigned __int64)v1046, 4LL, (unsigned __int64 *)&v1599);
                          v1481 = v1047;
                          v1482 = v1023;
                          if ( v1041 < 0 )
                            goto LABEL_1366;
                          memcpy_0(v1599, *((const void **)v1023 + 1), *v1023);
                          v1041 = RtlULongLongAdd((unsigned __int64)v1599, *v1023, (unsigned __int64 *)&v1599);
                          v1481 = (LPVOID)v1479;
                          v1482 = v1023;
                          if ( v1041 < 0 )
                            goto LABEL_1366;
                          v1048 = v1599;
                          *(_DWORD *)v1599 = v1023[4];
                          v1041 = RtlULongLongAdd((unsigned __int64)v1048, 4LL, (unsigned __int64 *)&v1599);
                          v1481 = v1049;
                          v1482 = v1023;
                          if ( v1041 < 0 )
                            goto LABEL_1366;
                          memcpy_0(v1599, *((const void **)v1023 + 3), v1023[4]);
                          v1041 = RtlULongLongAdd((unsigned __int64)v1599, v1023[4], (unsigned __int64 *)&v1599);
                          v1481 = (LPVOID)v1479;
                          v1482 = v1023;
                          if ( v1041 < 0 )
                            goto LABEL_1366;
                          v1050 = v1599;
                          *(_DWORD *)v1599 = v1023[8];
                          v1041 = RtlULongLongAdd((unsigned __int64)v1050, 4LL, (unsigned __int64 *)&v1599);
                          v1481 = v1051;
                          v1482 = v1023;
                          if ( v1041 < 0
                            || (memcpy_0(v1599, *((const void **)v1023 + 5), v1023[8]),
                                v1041 = RtlULongLongAdd((unsigned __int64)v1599, v1023[8], (unsigned __int64 *)&v1599),
                                v1481 = (LPVOID)v1479,
                                v1482 = v1023,
                                v1041 < 0) )
                          {
LABEL_1366:
                            v1052 = GetProcessHeap();
                            HeapFree(v1052, 0, v1481);
                          }
                          else
                          {
                            lpModuleNamem = (WCHAR *)v1479;
                            v1413 = v1262;
                            v1482 = v1023;
                          }
                        }
                      }
                    }
                  }
                }
                v959 = v1041 | 0x10000000;
                if ( v959 < 0 )
                  goto LABEL_1371;
                v1537 = 8;
                v1053 = RtlUIntAdd(8u, v1242, &v1537);
                v959 = v1053 | 0x10000000;
                if ( v1053 < 0 )
                  goto LABEL_1371;
                v1056 = (v1537 + 7) & 0xFFFFFFF8;
                if ( v1056 < v1537 )
                {
                  v959 = -1073741675;
                  goto LABEL_1371;
                }
                v1538 = (v1537 + 7) & 0xFFFFFFF8;
                lpModuleNamem = v1055;
                v1482 = v1023;
                v959 = RtlUIntAdd(v1056, v1054, &v1538);
                if ( v959 < 0 )
                  goto LABEL_1371;
                v1482 = v1023;
                lpModuleNamem = v1082;
                if ( !v1618 )
                  goto LABEL_1413;
                v1482 = v1023;
                lpModuleNamem = v1082;
                if ( (unsigned int)v1617 <= 1 )
                  goto LABEL_1413;
                v1083 = v1618;
                v1600 = v1618;
                do
                {
                  v959 = RtlULongLongAdd((unsigned __int64)v1083, 4LL, (unsigned __int64 *)&v1600);
                  if ( v959 < 0 )
                    goto LABEL_1371;
                  v959 = RtlULongLongAdd((unsigned __int64)v1600, v1084, (unsigned __int64 *)&v1600);
                  if ( v959 < 0 )
                    goto LABEL_1371;
                  v1083 = v1600;
                }
                while ( v1085 == -1 );
                v1243 = *v1600;
                v959 = RtlULongLongAdd((unsigned __int64)v1600, 4LL, (unsigned __int64 *)&v1600);
                if ( v959 < 0 )
                  goto LABEL_1371;
                if ( !v1618 || (unsigned int)v1617 <= 2 )
                {
LABEL_1413:
                  v959 = -1073741811;
                  goto LABEL_1371;
                }
                v1086 = v1618;
                v1601 = v1618;
                do
                {
                  v959 = RtlULongLongAdd((unsigned __int64)v1086, 4LL, (unsigned __int64 *)&v1601);
                  if ( v959 < 0 )
                    goto LABEL_1371;
                  v959 = RtlULongLongAdd((unsigned __int64)v1601, v1087, (unsigned __int64 *)&v1601);
                  if ( v959 < 0 )
                    goto LABEL_1371;
                  v1086 = v1601;
                }
                while ( (unsigned int)(v1088 + 1) < 2 );
                v959 = RtlULongLongAdd((unsigned __int64)v1601, 4LL, (unsigned __int64 *)&v1601);
                if ( v959 < 0
                  || (LODWORD(v1539) = 4, v959 = RtlUIntAdd(4u, v1538, (unsigned int *)&v1539), v959 < 0)
                  || (v959 = RtlUIntAdd(v1539, v1089, (unsigned int *)&v1539), v959 < 0)
                  || (v959 = RtlUIntAdd(v1539, v1243, (unsigned int *)&v1539), v959 < 0)
                  || (v959 = RtlUIntAdd(v1539, 4, (unsigned int *)&v1539), v959 < 0)
                  || (v959 = RtlUIntAdd(v1539, v1090, (unsigned int *)&v1539), v959 < 0) )
                {
LABEL_1371:
                  if ( !v923 )
                    goto LABEL_1373;
                  goto LABEL_1372;
                }
                v1395 = v1539;
                if ( (unsigned int)v1539 > 0x400000 )
                {
                  v959 = -2147418113;
                  goto LABEL_1371;
                }
                v1281 = v1091;
                v1092 = v1539;
                v1093 = GetProcessHeap();
                v1094 = (unsigned int *)HeapAlloc(v1093, 8u, v1092);
                if ( !v1094 )
                {
LABEL_1436:
                  v959 = -805306345;
                  goto LABEL_1371;
                }
                Srco = v1094;
                if ( !v1281 )
                {
                  v959 = -2147024809;
                  Srco = v1094;
                  v1482 = v1023;
LABEL_1454:
                  lpModuleNamem = (WCHAR *)v1281;
                  goto LABEL_1371;
                }
                v1634[0] = v1281;
                v1635 = v1413;
                v1634[1] = v1094;
                v1636 = v1395;
                v1637 = 0;
                if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                  && (v1097 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                {
                  v1098 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1097)(134LL, v1634);
                  v959 = v1098 | 0x10000000;
                  v1096 = v1395;
                  if ( v1098 >= 0 )
                  {
                    v1096 = v1636;
                    v1099 = v923;
                    v1100 = v903;
                    v1101 = v97;
                    v1102 = v1023;
LABEL_1451:
                    v1481 = 0LL;
                    v903 = v1100;
                    v923 = v1099;
                    if ( v1096 < 4 )
                    {
                      v959 = -805306306;
LABEL_1453:
                      v1482 = v1102;
                      goto LABEL_1454;
                    }
                    v1103 = *Srco;
                    v1244 = *Srco;
                    v1368 = (char *)(Srco + 1);
                    v97 = v1101;
                    if ( Srco + 1 < Srco )
                    {
                      v959 = -805306219;
                      goto LABEL_1453;
                    }
                    v1104 = (WCHAR *)v1281;
                    lpModuleNamem = (WCHAR *)v1281;
                    v1482 = v1023;
                    if ( v1096 - 4 < (unsigned int)v1103 )
                    {
                      v959 = -805306306;
LABEL_1458:
                      v1482 = v1023;
LABEL_1459:
                      lpModuleNamem = (WCHAR *)v1281;
                      goto LABEL_1371;
                    }
                    v1484 = v1103;
                    v1483 = &v1368[v1103];
                    if ( &v1368[v1103] < v1368 )
                      goto LABEL_1583;
                    v1105 = v1103 + 4;
                    if ( v1105 < 4 )
                      goto LABEL_1583;
                    if ( v1096 - v1105 < 4 )
                      goto LABEL_1463;
                    v1106 = *(unsigned int *)v1483;
                    v1263 = *(_DWORD *)v1483;
                    v1107 = (char *)v1483 + 4;
                    lpModuleNamem = (WCHAR *)v1281;
                    v1482 = v1023;
                    if ( (char *)v1483 + 4 < v1483 )
                      goto LABEL_1582;
                    v903 = v1100;
                    v1414 = v1105 + 4;
                    if ( v1105 + 4 < v1105 )
                    {
                      v959 = -805306219;
                      v1482 = v1023;
                      goto LABEL_1459;
                    }
                    if ( v1096 - (v1105 + 4) < (unsigned int)v1106 )
                    {
LABEL_1463:
                      v959 = -805306306;
                      goto LABEL_1371;
                    }
                    v1487 = v1106;
                    v1108 = (unsigned int *)&v1107[v1106];
                    lpModuleNamem = (WCHAR *)v1281;
                    v1482 = v1023;
                    if ( &v1107[v1106] < v1107 )
                    {
LABEL_1582:
                      v959 = -805306219;
                      goto LABEL_1371;
                    }
                    v1109 = v1106 + v1414;
                    if ( (unsigned int)v1106 + v1414 < v1414 )
                    {
LABEL_1583:
                      v959 = -805306219;
                      goto LABEL_1458;
                    }
                    if ( v1096 - v1109 < 4 )
                      goto LABEL_1463;
                    v1110 = *v1108;
                    v1396 = *v1108;
                    v1472 = v1108 + 1;
                    v1482 = v1023;
                    if ( v1108 + 1 < v1108 )
                    {
                      v959 = -805306219;
                      goto LABEL_1459;
                    }
                    lpModuleNamem = (WCHAR *)v1281;
                    v1415 = v1109 + 4;
                    if ( v1109 + 4 < v1109 )
                    {
                      v959 = -805306219;
                      goto LABEL_1476;
                    }
                    v1429 = (WCHAR *)v1281;
                    if ( v1096 - v1415 < v1110 )
                      goto LABEL_1463;
                    v1416 = v1110 + v1415;
                    lpModuleNamem = (WCHAR *)v1281;
                    v1482 = v1023;
                    if ( v1416 < v1109 + 4 )
                    {
                      v959 = -805306219;
                      goto LABEL_1371;
                    }
                    v1405 = v923;
                    v1282 = (SIZE_T)v903;
                    v1451 = (LPCWSTR)v97;
                    v1111 = Srco;
                    if ( v1096 != v1416 )
                    {
LABEL_1475:
                      v959 = -805306306;
                      Srco = v1111;
LABEL_1476:
                      v1482 = v1023;
                      lpModuleNamem = v1104;
                      goto LABEL_1371;
                    }
                    if ( v1110 + (_DWORD)v1106 + v1244 + 12LL != v1096 )
                    {
                      v1111 = Srco;
                      goto LABEL_1475;
                    }
                    v1112 = GetProcessHeap();
                    v1113 = HeapAlloc(v1112, 8u, 0x30uLL);
                    v1417 = v1113;
                    if ( !v1113 )
                    {
                      v959 = -805306345;
                      v1482 = v1023;
                      lpModuleNamem = v1429;
                      goto LABEL_1371;
                    }
                    v1114 = 0;
                    if ( Srco == (unsigned int *)-4LL )
                    {
                      *v1113 = 0;
                      *((_QWORD *)v1113 + 1) = 0LL;
                      v1117 = v1472;
                    }
                    else
                    {
                      *v1113 = v1244;
                      v1115 = GetProcessHeap();
                      v1116 = HeapAlloc(v1115, 8u, v1484);
                      if ( !v1116 )
                        goto LABEL_1491;
                      v1417[1] = v1116;
                      memcpy_0(v1116, v1368, v1484);
                      v1113 = v1417;
                      v1117 = v1472;
                    }
                    v1405 = v923;
                    v1282 = (SIZE_T)v903;
                    v1451 = (LPCWSTR)v97;
                    v1482 = v1023;
                    v1417 = v1113;
                    if ( v1483 == (LPVOID)-4LL )
                    {
                      v1113[4] = 0;
                      *((_QWORD *)v1113 + 3) = 0LL;
                      v1121 = lpModuleNamem;
                      v1120 = Srco;
LABEL_1489:
                      if ( v1117 )
                      {
                        v1113[8] = v1396;
                        v1122 = GetProcessHeap();
                        v1123 = HeapAlloc(v1122, 8u, v1396);
                        if ( !v1123 )
                          goto LABEL_1491;
                        v1417[5] = v1123;
                        v1114 = 0;
                        memcpy_0(v1123, v1472, v1396);
                        v1113 = v1417;
                        v1120 = Srco;
                        v1482 = v1023;
                        v1451 = (LPCWSTR)v97;
                        v1282 = (SIZE_T)v903;
                        v1405 = v923;
                        v1121 = lpModuleNamem;
                      }
                      else
                      {
                        v1113[8] = 0;
                        *((_QWORD *)v1113 + 5) = 0LL;
                      }
                      v1481 = v1113;
                      goto LABEL_1501;
                    }
                    v1113[4] = v1263;
                    v1118 = GetProcessHeap();
                    v1119 = HeapAlloc(v1118, 8u, v1487);
                    if ( v1119 )
                    {
                      v1417[3] = v1119;
                      v1114 = 0;
                      memcpy_0(v1119, (char *)v1483 + 4, v1487);
                      v1113 = v1417;
                      v1117 = v1472;
                      v1120 = Srco;
                      v1482 = v1023;
                      v1451 = (LPCWSTR)v97;
                      v1282 = (SIZE_T)v903;
                      v1405 = v923;
                      v1121 = lpModuleNamem;
                      goto LABEL_1489;
                    }
LABEL_1491:
                    v1114 = -1073741801;
                    v1124 = v1417;
                    v1385 = (void *)v1417[1];
                    if ( v1385 )
                    {
                      v1125 = GetProcessHeap();
                      HeapFree(v1125, 0, v1385);
                      v1124 = v1417;
                      v1417[1] = 0LL;
                    }
                    v1386 = (void *)v1124[3];
                    if ( v1386 )
                    {
                      v1126 = GetProcessHeap();
                      HeapFree(v1126, 0, v1386);
                      v1124 = v1417;
                      v1417[3] = 0LL;
                    }
                    v1387 = (void *)v1124[5];
                    if ( v1387 )
                    {
                      v1127 = GetProcessHeap();
                      HeapFree(v1127, 0, v1387);
                      v1417[5] = 0LL;
                    }
                    v1128 = GetProcessHeap();
                    HeapFree(v1128, 0, v1417);
                    v1121 = lpModuleNamem;
                    v1120 = Srco;
                    v1113 = v1481;
LABEL_1501:
                    v1369 = (SIZE_T)v1121;
                    v1479 = (SIZE_T)v903;
                    v1418 = v1023;
                    v1397 = (SIZE_T)v1120;
                    v1245 = v1114;
                    v1129 = 0LL;
                    if ( v1114 < 0 )
                    {
                      v1384 = 0LL;
                      Srco = v1120;
                      v1482 = v1023;
                      v1451 = (LPCWSTR)v97;
                      v1282 = (SIZE_T)v903;
                      v1405 = v923;
                      lpModuleNamem = v1121;
                      if ( v1113 )
                      {
                        v1130 = v1481;
                        v1131 = (void *)*((_QWORD *)v1481 + 1);
                        if ( v1131 )
                        {
                          v1132 = GetProcessHeap();
                          HeapFree(v1132, 0, v1131);
                          v1130[1] = 0LL;
                        }
                        v1133 = (void *)v1130[3];
                        if ( v1133 )
                        {
                          v1134 = GetProcessHeap();
                          HeapFree(v1134, 0, v1133);
                          v1130[3] = 0LL;
                        }
                        v1135 = (void *)v1130[5];
                        if ( v1135 )
                        {
                          v1136 = GetProcessHeap();
                          HeapFree(v1136, 0, v1135);
                          v1130[5] = 0LL;
                        }
                        v1137 = GetProcessHeap();
                        HeapFree(v1137, 0, v1130);
                        v1129 = 0LL;
                        v1384 = 0LL;
                        Srco = (unsigned int *)v1397;
                        v1023 = v1418;
                        v1482 = v1418;
                        v1451 = (LPCWSTR)v97;
                        v903 = (void *)v1479;
                        v1282 = v1479;
                        v1405 = v923;
                        v1114 = v1245;
                        lpModuleNamem = (WCHAR *)v1369;
                      }
                    }
                    else
                    {
                      v1129 = v1113;
                      v1384 = v1113;
                    }
                    v959 = v1114 | 0x10000000;
                    if ( v959 < 0 )
                      goto LABEL_1371;
                    if ( !v1129 || (v1370 = *((_QWORD *)v1129 + 1)) == 0 || !*v1129 )
                    {
                      v959 = -805306355;
                      goto LABEL_1371;
                    }
                    v1138 = *v1129 - 8;
                    v1430 = *v1129 - 8LL;
                    v1139 = (WCHAR *)MemoryAlloc(v1430);
                    v1323 = v1139;
                    if ( !v1139 )
                    {
LABEL_1541:
                      v959 = -805306367;
                      v1322 = 0LL;
                      goto LABEL_1371;
                    }
                    v1140 = 0;
                    v1684 = 0x7F1137FAB69605ELL;
                    v1141 = (unsigned __int8 *)v1370;
                    v1479 = v1370;
                    v1142 = v1139;
                    v1398 = (SIZE_T)v1139;
                    v1481 = (LPVOID)(v1138 & 7);
                    v1143 = v1384;
                    if ( (v1138 & 7) != 0 )
                    {
                      v1488 = 0;
                      v1144 = 0;
                      v1145 = 0;
                      do
                      {
                        v1146 = *v1141++;
                        v1147 = v1489;
                        if ( (unsigned int)v1145 >= 4 )
                        {
                          v1488 |= v1146 << v1489;
                        }
                        else
                        {
                          v1144 |= v1146 << (v1489 - 32);
                          v1147 = v1489;
                        }
                        ++v1145;
                        v1489 = v1147 - 8;
                        v1148 = (unsigned int)v1481;
                      }
                      while ( v1145 < (int)v1481 );
                      v1246 = v1144;
                      v1479 = (SIZE_T)v1141;
                      v1149 = v1488 ^ 0x699A899C;
                      v1150 = v1144 ^ 0x92F65A5;
                      v1151 = v1488 ^ 0x699A899C;
                      v1482 = v1023;
                      v1451 = (LPCWSTR)v97;
                      v1282 = (SIZE_T)v903;
                      v1405 = v923;
                      v85 = v1485;
                      v1142 = (_BYTE *)v1398;
                      v1152 = 0;
                      do
                      {
                        if ( v1152 >= 4 )
                        {
                          v1151 = __ROL4__(v1151, 8);
                          v1153 = v1151;
                        }
                        else
                        {
                          v1150 = __ROL4__(v1150, 8);
                          v1153 = v1150;
                        }
                        *v1142 = v1153;
                        ++v1152;
                        ++v1142;
                      }
                      while ( v1152 < (int)v1148 );
                      v1140 = 0;
                      v1023 = (unsigned int *)v1482;
                      v1143 = v1384;
                      v1154 = v1144 ^ 0x92F65A5;
                      v1139 = (WCHAR *)v1323;
                      if ( v1148 <= 4 )
                      {
                        v1264 = 0;
                        if ( v1148 < 4 )
                          v1154 = v1154 >> (8 * (4 - (_BYTE)v1481)) << (8 * (4 - (_BYTE)v1481));
                      }
                      else
                      {
                        v1264 = v1149 >> (8 * (8 - (_BYTE)v1481)) << (8 * (8 - (_BYTE)v1481));
                      }
                    }
                    else
                    {
                      v1246 = 0;
                      v1264 = 0;
                      v1154 = 0;
                    }
                    v1155 = v1430;
                    if ( v1430 >> 3 )
                    {
                      v1156 = HIDWORD(v1684);
                      v1419 = HIDWORD(v1684) ^ 0xAB69605E;
                      v1157 = WORD2(v1684);
                      v1158 = v1142 + 7;
                      v1159 = (unsigned __int8 *)(v1479 + 2);
                      v1160 = v1264;
                      v1161 = v1246;
                      v1162 = v1430 >> 3;
                      do
                      {
                        v1163 = v1159[1] | ((*v1159 | ((*(v1159 - 1) | (*(v1159 - 2) << 8)) << 8)) << 8);
                        v1164 = v1159[5] | ((v1159[4] | ((v1159[3] | (v1159[2] << 8)) << 8)) << 8);
                        v1165 = v1163 ^ v1154;
                        v1159 += 8;
                        v1166 = v1419 ^ v1165 ^ v1164 ^ v1160;
                        v1167 = (__ROL4__(v1166, 10) + v1157 * __ROL4__(v1166 + 1419157410, 5)) ^ v1165;
                        v1168 = (WORD1(v1684) * __ROR4__(v1156 + v1167, 9) - __ROL4__(v1167, 2)) ^ v1166;
                        v1169 = (24670 * (v1168 - v1157) - (v1168 >> 13)) ^ v1167;
                        v1170 = (HIWORD(v1684) * __ROL4__(WORD1(v1684) ^ v1169, 6) - __ROL4__(v1169, 2)) ^ v1168;
                        v1171 = (v1156 - (v1170 ^ 0xAB69605E)) ^ v1169;
                        v1172 = (WORD1(v1684) * (v1157 ^ v1171)) ^ __ROR4__(v1171, 6) ^ v1170;
                        v1173 = (__ROL4__(v1172, 2) + 24670 * __ROR4__(v1156 + v1172, 15)) ^ v1171;
                        v1174 = (HIWORD(v1684) * __ROR4__(v1173 + 1419157410, 14) - __ROL4__(v1173, 8)) ^ v1172;
                        v1175 = __ROR4__(v1174, 10) ^ (v1157 * __ROR4__(v1174 ^ 0xAB69605E, 12)) ^ v1173;
                        v1176 = (v1175 >> 10) ^ (WORD1(v1684) * (HIWORD(v1684) ^ v1175)) ^ v1174;
                        v1177 = (HIWORD(v1684) * (__ROR4__(~v1176, 5) + 24670)) ^ v1175;
                        v1178 = v1176 ^ (v1177 - HIWORD(v1684)) ^ 0xAB69605E;
                        v1179 = ((v1178 >> 2) + v1157 * __ROL4__(HIWORD(v1684) ^ v1178, 2)) ^ v1177;
                        v1180 = (__ROL4__(v1179, 7) + WORD1(v1684) * __ROR4__(v1179 - v1156, 6)) ^ v1178;
                        v1181 = (24670 * (v1157 ^ v1180) + __ROR4__(v1180, 9)) ^ v1179;
                        v1182 = (__ROL4__(v1181, 7) + HIWORD(v1684) * __ROL4__(WORD1(v1684) ^ v1181, 5)) ^ v1180;
                        v1183 = v1156 ^ v1182 ^ v1181 ^ 0xAB69605E;
                        v1184 = (v1157 * (__ROR4__(v1183, 3) - WORD1(v1684))) ^ v1182;
                        v1185 = (24670 * __ROR4__(v1184 - v1156, 1) - __ROR4__(v1184, 6)) ^ v1183;
                        v1186 = (__ROL4__(v1185, 14) + HIWORD(v1684) * __ROL4__(v1185 - 1419157410, 3)) ^ v1184;
                        v1187 = (v1157 * __ROL4__(v1186 - 1419157410, 15) - __ROR4__(v1186, 14)) ^ v1185;
                        v1188 = (v1187 >> 3) ^ (WORD1(v1684) * (v1187 ^ 0x605E)) ^ v1186;
                        v1189 = v1161 ^ __ROL4__(v1188, 2) ^ (24670 * __ROL4__(v1156 ^ v1188, 4)) ^ v1187;
                        v1190 = v1488 ^ v1188;
                        *(v1158 - 4) = v1189;
                        v1191 = __ROR4__(v1189, 8);
                        *v1158 = v1190;
                        v1192 = __ROR4__(v1190, 8);
                        *(v1158 - 5) = v1191;
                        v1193 = __ROR4__(v1191, 8);
                        *(v1158 - 1) = v1192;
                        v1194 = __ROR4__(v1192, 8);
                        *(v1158 - 6) = v1193;
                        v1195 = __ROR4__(v1193, 8);
                        *(v1158 - 2) = v1194;
                        v1196 = __ROR4__(v1194, 8);
                        *(v1158 - 7) = v1195;
                        *(v1158 - 3) = v1196;
                        v1154 = __ROR4__(v1195, 8);
                        v1160 = __ROR4__(v1196, 8);
                        v1161 = v1163;
                        v1488 = v1164;
                        v1158 += 8;
                        --v1162;
                      }
                      while ( v1162 );
                      v1140 = 0;
                      v85 = v1485;
                      v903 = (void *)v1282;
                      v97 = (__int64)v1451;
                      v923 = v1405;
                      v1023 = (unsigned int *)v1482;
                      v1143 = v1384;
                      v1139 = (WCHAR *)v1323;
                      v1155 = v1430;
                    }
                    for ( m = 0LL; m < v1155; ++m )
                      v1140 ^= *((_BYTE *)v1139 + m);
                    v1198 = v1143;
                    v1482 = v1023;
                    v1384 = v1143;
                    if ( v1140 != *(_QWORD *)(v1155 + v1370) )
                    {
                      MemoryFree(v1139);
                      goto LABEL_1541;
                    }
                    v1550 = 0;
                    v1603 = v1139;
                    if ( (unsigned int)v1155 >= 4 )
                    {
                      v1247 = *(_DWORD *)v1139;
                      v1199 = RtlULongLongAdd((unsigned __int64)v1139, 4LL, (unsigned __int64 *)&v1603);
                      v1322 = v1200;
                      v1384 = v1201;
                      v1482 = v1023;
                      if ( v1199 < 0 )
                        goto LABEL_1577;
                      v1199 = RtlUIntAdd(0, 4, &v1550);
                      v1322 = v1139;
                      v1384 = v1198;
                      v1482 = v1023;
                      v1202 = lpModuleNamem;
                      if ( v1199 < 0 )
                        goto LABEL_1577;
                      if ( (unsigned int)v1430 - v1550 < 4 )
                        goto LABEL_1546;
                      v1265 = *(_DWORD *)v1603;
                      v1199 = RtlULongLongAdd((unsigned __int64)v1603, 4LL, (unsigned __int64 *)&v1603);
                      v1322 = v1203;
                      v1384 = v1204;
                      v1482 = v1023;
                      if ( v1199 < 0 )
                        goto LABEL_1577;
                      v1199 = RtlUIntAdd(v1550, 4, &v1550);
                      v1322 = v1139;
                      v1384 = v1198;
                      v1482 = v1023;
                      v1202 = lpModuleNamem;
                      if ( v1199 < 0 )
                        goto LABEL_1577;
                      if ( (unsigned int)v1430 - v1550 < v1265 )
                      {
LABEL_1546:
                        lpModuleNamem = v1202;
                      }
                      else
                      {
                        v1199 = RtlUIntAdd(v1550, v1265, &v1550);
                        v1322 = v1139;
                        v1384 = v1198;
                        v1482 = v1023;
                        if ( v1199 < 0 )
                          goto LABEL_1577;
                        if ( (char *)v1139 + (unsigned int)v1430 >= (char *)v1603 + v1265
                          && (unsigned int)v1430 + (char *)v1139 - (_BYTE *)v1603 - (unsigned __int64)v1265 < 8 )
                        {
                          v1199 = 0;
                          v1420 = 0;
                          v1322 = v1139;
                          v1384 = v1198;
                          v1482 = v1023;
                          if ( !v1603 )
                          {
LABEL_1565:
                            if ( v1265 )
                            {
                              v1214 = GetProcessHeap();
                              v1215 = v1265;
                              v1216 = HeapAlloc(v1214, 8u, v1265);
                              v1199 = 0;
                              if ( !v1216 )
                              {
                                v1199 = -1073741801;
                                goto LABEL_1577;
                              }
                            }
                            else
                            {
                              v1215 = 0LL;
                              v1216 = 0LL;
                            }
                            if ( v1603 )
                              memcpy_0(v1216, v1603, v1215);
                            v1628[1] = v1216;
                            LODWORD(v1628[0]) = v1420;
                            if ( v1247 == v1420 )
                              goto LABEL_1577;
LABEL_1576:
                            v1199 = -1073741762;
                            goto LABEL_1577;
                          }
                          v1481 = v1603;
                          v1199 = RtlULongLongAdd((unsigned __int64)v1603, v1265, (unsigned __int64 *)&v1604);
                          v1322 = v1205;
                          v1384 = v1206;
                          v1482 = v1023;
                          if ( v1199 >= 0 )
                          {
                            v1322 = v1205;
                            v1384 = v1206;
                            v1482 = v1023;
                            v1207 = v1481;
                            if ( v1481 < v1604 )
                            {
                              v1208 = v1205;
                              v1322 = v1205;
                              v1384 = v1206;
                              v1209 = (SIZE_T)Srco;
                              v1482 = v1023;
                              while ( 1 )
                              {
                                v1484 = v1209;
                                v1483 = v1206;
                                v1199 = RtlULongLongAdd((unsigned __int64)v1207, 4LL, (unsigned __int64 *)&v1605);
                                if ( v1199 < 0 )
                                  goto LABEL_1577;
                                if ( v1605 > v1604 )
                                  goto LABEL_1569;
                                v1199 = RtlUIntAdd(v1211, *v1210, &v1541);
                                if ( v1199 < 0 )
                                  goto LABEL_1577;
                                v1199 = RtlULongLongAdd((unsigned __int64)v1481, v1541, (unsigned __int64 *)&v1606);
                                v1322 = v1208;
                                v1384 = v1213;
                                v1209 = v1484;
                                Srco = (unsigned int *)v1484;
                                v1482 = v1023;
                                lpModuleNamem = v1212;
                                if ( v1199 < 0 )
                                  goto LABEL_1577;
                                v1207 = v1606;
                                v1481 = v1606;
                                v1322 = v1208;
                                v1482 = v1023;
                                lpModuleNamem = v1212;
                                if ( v1606 > v1604 )
                                {
                                  v1199 = -1073741811;
                                  v1384 = v1483;
                                  Srco = (unsigned int *)v1484;
                                  goto LABEL_1577;
                                }
                                ++v1420;
                                v1206 = v1483;
                                v1384 = v1483;
                                Srco = (unsigned int *)v1484;
                                if ( v1606 >= v1604 )
                                {
                                  v1322 = v1208;
                                  v1384 = v1483;
                                  Srco = (unsigned int *)v1484;
                                  v1482 = v1023;
                                  lpModuleNamem = v1212;
                                  break;
                                }
                              }
                            }
                            if ( v1207 != v1604 )
                            {
LABEL_1569:
                              v1199 = -1073741811;
                              goto LABEL_1577;
                            }
                            goto LABEL_1565;
                          }
LABEL_1577:
                          v959 = v1199 | 0x10000000;
                          goto LABEL_1371;
                        }
                      }
                    }
                    v1322 = v1139;
                    v1384 = v1198;
                    v1482 = v1023;
                    goto LABEL_1576;
                  }
                }
                else
                {
                  v1095 = GetLastError();
                  v959 = v1095;
                  if ( v1095 > 0 )
                    v959 = (unsigned __int16)v1095 | 0x80070000;
                  if ( v959 >= 0 )
                    v959 = -2147467259;
                  v1096 = v1395;
                }
                lpModuleNamem = (WCHAR *)v1281;
                if ( v959 == -805306333 )
                {
                  v959 = -2147024774;
                  v1482 = v1023;
                  goto LABEL_1371;
                }
                v1102 = v1023;
                v1482 = v1023;
                v1101 = v97;
                v1100 = v903;
                v1099 = v923;
                if ( v959 < 0 )
                  goto LABEL_1371;
                goto LABEL_1451;
              }
            }
          }
        }
LABEL_1586:
        v1617 = 0LL;
        v1217 = v1618;
        if ( v1618 )
        {
          v1218 = GetProcessHeap();
          HeapFree(v1218, 0, v1217);
          v1618 = 0LL;
        }
        v1628[0] = 0LL;
        v1219 = v1628[1];
        if ( v1628[1] )
        {
          v1220 = GetProcessHeap();
          HeapFree(v1220, 0, v1219);
          v1628[1] = 0LL;
        }
        if ( v903 )
        {
          v1221 = GetProcessHeap();
          HeapFree(v1221, 0, v903);
        }
        if ( v97 )
        {
          v1222 = GetProcessHeap();
          HeapFree(v1222, 0, (LPVOID)v97);
        }
        goto LABEL_1594;
      }
      g_WarbirdPaintInitTime = ((__int64 (*)(void))off_180985198)();
      v468 = g_WarbirdNotificationInformation;
      v1303 = g_WarbirdNotificationInformation;
      memset_0(&v1667, 0, 0x70uLL);
      v1687 = 0LL;
      v1448 = 0LL;
      v1702 = 0LL;
      v1703 = 0LL;
      v1704 = 0LL;
      v1705 = 0;
      v1482 = 0LL;
      while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
        ;
      v469 = g_WarbirdSecureFunctionsRefCount;
      if ( g_WarbirdSecureFunctionsRefCount )
      {
        v511 = 0;
        goto LABEL_664;
      }
      v1469 = 0;
      v1476 = 0;
      v470 = (char *)MemoryAlloc(0x338uLL);
      lpModuleNamea = (WCHAR *)v470;
      if ( !v470 )
      {
        v511 = 0;
        goto LABEL_658;
      }
      v471 = 0;
      v472 = 0;
      v473 = v470 + 7;
      v474 = (unsigned __int8 *)&unk_180832662;
      v475 = 103LL;
      v476 = -1;
      do
      {
        v477 = v474[1] | ((*v474 | ((*(v474 - 1) | (*(v474 - 2) << 8)) << 8)) << 8);
        v478 = v474[5] | ((v474[4] | ((v474[3] | (v474[2] << 8)) << 8)) << 8);
        v479 = v477 ^ v472;
        v474 += 8;
        v480 = v478 ^ v97 ^ v479 ^ 0xAC987321;
        v481 = (__ROL4__(v480, 10) + 4991 * __ROL4__(v480 + 1419157410, 5)) ^ v479;
        v482 = (43881 * __ROR4__(v481 + 133239679, 9) - __ROL4__(v481, 2)) ^ v480;
        v483 = (24670 * v482 - (v482 >> 13) - 123127970) ^ v481;
        v484 = (2033 * __ROL4__(v483 ^ 0xAB69, 6) - __ROL4__(v483, 2)) ^ v482;
        v485 = (133239679 - (v484 ^ 0xAB69605E)) ^ v483;
        v486 = (43881 * (v485 ^ 0x137F)) ^ __ROR4__(v485, 6) ^ v484;
        v487 = (__ROL4__(v486, 2) + 24670 * __ROR4__(v486 + 133239679, 15)) ^ v485;
        v488 = (2033 * __ROR4__(v487 + 1419157410, 14) - __ROL4__(v487, 8)) ^ v486;
        v489 = __ROR4__(v488, 10) ^ (4991 * __ROR4__(v488 ^ 0xAB69605E, 12)) ^ v487;
        v490 = v488 ^ (v489 >> 10) ^ (43881 * (v489 ^ 0x7F1));
        v491 = (2033 * (__ROR4__(~v490, 5) + 24670)) ^ v489;
        v492 = v490 ^ (v491 - 2033) ^ 0xAB69605E;
        v493 = ((v492 >> 2) + 4991 * __ROL4__(v490 ^ (v491 - 2033) ^ 0xAB6967AF, 2)) ^ v491;
        v494 = (__ROL4__(v493, 7) + 43881 * __ROR4__(v493 - 133239679, 6)) ^ v492;
        v495 = (24670 * (v494 ^ 0x137F) + __ROR4__(v494, 9)) ^ v493;
        v496 = (__ROL4__(v495, 7) + 2033 * __ROL4__(v495 ^ 0xAB69, 5)) ^ v494;
        v497 = v496 ^ v495 ^ 0xAC987321;
        v498 = (4991 * __ROR4__(v497, 3) - 219010071) ^ v496;
        v499 = (24670 * __ROR4__(v498 - 133239679, 1) - __ROR4__(v498, 6)) ^ v497;
        v500 = (__ROL4__(v499, 14) + 2033 * __ROL4__(v499 - 1419157410, 3)) ^ v498;
        v501 = (4991 * __ROL4__(v500 - 1419157410, 15) - __ROR4__(v500, 14)) ^ v499;
        v502 = (v501 >> 3) ^ (43881 * (v501 ^ 0x605E)) ^ v500;
        v503 = v471 ^ __ROL4__(v502, 2) ^ (24670 * __ROL4__(v502 ^ 0x7F1137F, 4)) ^ v501;
        v504 = v476 ^ v502;
        *(v473 - 4) = v503;
        v505 = __ROR4__(v503, 8);
        *v473 = v504;
        v506 = __ROR4__(v504, 8);
        *(v473 - 5) = v505;
        v507 = __ROR4__(v505, 8);
        *(v473 - 1) = v506;
        v508 = __ROR4__(v506, 8);
        *(v473 - 6) = v507;
        v509 = __ROR4__(v507, 8);
        *(v473 - 2) = v508;
        v510 = __ROR4__(v508, 8);
        *(v473 - 7) = v509;
        *(v473 - 3) = v510;
        v472 = __ROR4__(v509, 8);
        LODWORD(v97) = __ROR4__(v510, 8);
        v471 = v477;
        v476 = v478;
        v473 += 8;
        --v475;
      }
      while ( v475 );
      v511 = 0;
      v512 = 0LL;
      v513 = 0;
      v468 = v1303;
      v85 = v1485;
      v514 = lpModuleNamea;
      do
        v513 ^= *((_BYTE *)lpModuleNamea + v512++);
      while ( v512 < 0x338 );
      if ( v513 != 64LL )
      {
        MemoryFree(lpModuleNamea);
        goto LABEL_658;
      }
      *((_BYTE *)lpModuleNamea + 823) = 0;
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      if ( *(_BYTE *)lpModuleNamea )
      {
        v1580 = lpModuleNamea;
        while ( 1 )
        {
          v515 = v514;
          v516 = -1LL;
          do
            ++v516;
          while ( v514[v516] );
          v517 = &v514[v516];
          v518 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1476;
          if ( !GetModuleHandleExW(0, v515, (HMODULE *)v518) )
            break;
          v519 = 0;
          if ( **(_WORD **)v518 == 23117
            && (v520 = *(int *)(*(_QWORD *)v518 + 60LL), (unsigned int)v520 < 0x10000000)
            && (v521 = *(_QWORD *)v518 + v520, v521 >= *(_QWORD *)v518)
            && *(_DWORD *)v521 == 17744 )
          {
            if ( ((*(_WORD *)(v521 + 24) - 267) & 0xFEFF) != 0 )
            {
              v519 = -1073741811;
            }
            else
            {
              *(_QWORD *)(v518 + 12) = *(_QWORD *)(v521 + 136);
              *((_DWORD *)v518 + 2) = *(_DWORD *)(v521 + 80);
            }
          }
          else
          {
            v519 = -1073741701;
          }
          v1458 = *(_DWORD *)(v517 + 1);
          v514 = v517 + 3;
          v522 = 0;
          for ( n = 0; v522 < v1458; n = v522 )
          {
            v523 = (const CHAR *)v514;
            v524 = -1LL;
            do
              ++v524;
            while ( *((_BYTE *)v514 + v524) );
            v514 = (WCHAR *)((char *)v514 + v524 + 1);
            if ( v519 >= 0 )
            {
              v525 = (void **)GetProcAddress(*(HMODULE *)v518, v523);
              if ( !v525 )
                goto LABEL_650;
              (&WARBIRD::g_FuncAddress)[v1469] = v525;
              v522 = n;
            }
            ++v1469;
            ++v522;
          }
          ++v1476;
          v511 = 0;
          if ( !*(_BYTE *)v514 )
            goto LABEL_651;
        }
        v519 = -1073741702;
LABEL_650:
        v511 = 0;
LABEL_651:
        v514 = (WCHAR *)v1580;
        if ( !v1580 )
        {
LABEL_655:
          if ( v519 >= 0 )
          {
            v469 = g_WarbirdSecureFunctionsRefCount;
LABEL_664:
            g_WarbirdSecureFunctionsRefCount = v469 + 1;
            goto LABEL_665;
          }
LABEL_658:
          v527 = (HMODULE *)&WARBIRD::g_arModuleInfo;
          v528 = 4LL;
          do
          {
            if ( *v527 )
              FreeLibrary(*v527);
            v527 += 3;
            --v528;
          }
          while ( v528 );
          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
          memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_665:
          _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
          v1470 = 0;
          v1459 = 0;
          v1581 = 0LL;
          lpModuleNameb = 0LL;
          Srcf = 0LL;
          v1375 = 0LL;
          v1626 = 0LL;
          while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
            ;
          v529 = g_WarbirdSecureFunctionsRefCount;
          if ( g_WarbirdSecureFunctionsRefCount )
            goto LABEL_709;
          v1477 = 0;
          v1285 = 0;
          v530 = (char *)MemoryAlloc(0x338uLL);
          v1316 = (WCHAR *)v530;
          if ( !v530 )
            goto LABEL_675;
          v531 = 0;
          LODWORD(Size) = -1;
          v532 = 0;
          v533 = v530 + 7;
          v534 = (unsigned __int8 *)&unk_180832662;
          v535 = 103LL;
          v536 = -1;
          do
          {
            v537 = v534[1] | ((*v534 | ((*(v534 - 1) | (*(v534 - 2) << 8)) << 8)) << 8);
            v538 = v534[5] | ((v534[4] | ((v534[3] | (v534[2] << 8)) << 8)) << 8);
            v539 = v537 ^ v511;
            v534 += 8;
            v540 = v539 ^ v538 ^ v532 ^ 0xAC987321;
            v541 = (__ROL4__(v540, 10) + 4991 * __ROL4__(v540 + 1419157410, 5)) ^ v539;
            v542 = (43881 * __ROR4__(v541 + 133239679, 9) - __ROL4__(v541, 2)) ^ v540;
            v543 = (24670 * v542 - (v542 >> 13) - 123127970) ^ v541;
            v544 = (2033 * __ROL4__(v543 ^ 0xAB69, 6) - __ROL4__(v543, 2)) ^ v542;
            v545 = (133239679 - (v544 ^ 0xAB69605E)) ^ v543;
            v546 = (43881 * (v545 ^ 0x137F)) ^ __ROR4__(v545, 6) ^ v544;
            v547 = (__ROL4__(v546, 2) + 24670 * __ROR4__(v546 + 133239679, 15)) ^ v545;
            v548 = (2033 * __ROR4__(v547 + 1419157410, 14) - __ROL4__(v547, 8)) ^ v546;
            v549 = __ROR4__(v548, 10) ^ (4991 * __ROR4__(v548 ^ 0xAB69605E, 12)) ^ v547;
            v550 = (v549 >> 10) ^ (43881 * (v549 ^ 0x7F1)) ^ v548;
            v551 = (2033 * (__ROR4__(~v550, 5) + 24670)) ^ v549;
            v552 = v550 ^ (v551 - 2033) ^ 0xAB69605E;
            v553 = ((v552 >> 2) + 4991 * __ROL4__(v550 ^ (v551 - 2033) ^ 0xAB6967AF, 2)) ^ v551;
            v554 = (__ROL4__(v553, 7) + 43881 * __ROR4__(v553 - 133239679, 6)) ^ v552;
            v555 = (24670 * (v554 ^ 0x137F) + __ROR4__(v554, 9)) ^ v553;
            v556 = (__ROL4__(v555, 7) + 2033 * __ROL4__(v555 ^ 0xAB69, 5)) ^ v554;
            v557 = v556 ^ v555 ^ 0xAC987321;
            v558 = (4991 * __ROR4__(v557, 3) - 219010071) ^ v556;
            v559 = (24670 * __ROR4__(v558 - 133239679, 1) - __ROR4__(v558, 6)) ^ v557;
            v560 = (__ROL4__(v559, 14) + 2033 * __ROL4__(v559 - 1419157410, 3)) ^ v558;
            v561 = (4991 * __ROL4__(v560 - 1419157410, 15) - __ROR4__(v560, 14)) ^ v559;
            v562 = (v561 >> 3) ^ (43881 * (v561 ^ 0x605E)) ^ v560;
            v563 = v531 ^ __ROL4__(v562, 2) ^ (24670 * __ROL4__(v562 ^ 0x7F1137F, 4)) ^ v561;
            v564 = v536 ^ v562;
            *(v533 - 4) = v563;
            v565 = __ROR4__(v563, 8);
            *v533 = v564;
            v566 = __ROR4__(v564, 8);
            *(v533 - 5) = v565;
            v567 = __ROR4__(v565, 8);
            *(v533 - 1) = v566;
            v568 = __ROR4__(v566, 8);
            *(v533 - 6) = v567;
            v569 = __ROR4__(v567, 8);
            *(v533 - 2) = v568;
            v570 = __ROR4__(v568, 8);
            *(v533 - 7) = v569;
            *(v533 - 3) = v570;
            v511 = __ROR4__(v569, 8);
            v532 = __ROR4__(v570, 8);
            v531 = v537;
            v536 = v538;
            v533 += 8;
            --v535;
          }
          while ( v535 );
          v571 = 0LL;
          v572 = 0;
          v468 = v1303;
          v85 = v1485;
          v573 = v1316;
          do
            v572 ^= *((_BYTE *)v1316 + v571++);
          while ( v571 < 0x338 );
          if ( v572 != 64LL )
          {
            MemoryFree(v1316);
            goto LABEL_675;
          }
          *((_BYTE *)v1316 + 823) = 0;
          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
          if ( *(_BYTE *)v1316 )
          {
            v1582 = v1316;
            while ( 1 )
            {
              v576 = v573;
              v577 = -1LL;
              do
                ++v577;
              while ( v573[v577] );
              v578 = &v573[v577];
              v579 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1285;
              if ( !GetModuleHandleExW(0, v576, (HMODULE *)v579) )
                break;
              v580 = 0;
              if ( **(_WORD **)v579 == 23117
                && (v581 = *(int *)(*(_QWORD *)v579 + 60LL), (unsigned int)v581 < 0x10000000)
                && (v582 = *(_QWORD *)v579 + v581, v582 >= *(_QWORD *)v579)
                && *(_DWORD *)v582 == 17744 )
              {
                if ( ((*(_WORD *)(v582 + 24) - 267) & 0xFEFF) != 0 )
                {
                  v580 = -1073741811;
                }
                else
                {
                  *(_QWORD *)(v579 + 12) = *(_QWORD *)(v582 + 136);
                  *((_DWORD *)v579 + 2) = *(_DWORD *)(v582 + 80);
                }
              }
              else
              {
                v580 = -1073741701;
              }
              v1304 = *(_DWORD *)(v578 + 1);
              v573 = v578 + 3;
              v583 = 0;
              for ( ii = 0; v583 < v1304; ii = v583 )
              {
                v584 = (const CHAR *)v573;
                v585 = -1LL;
                do
                  ++v585;
                while ( *((_BYTE *)v573 + v585) );
                v573 = (WCHAR *)((char *)v573 + v585 + 1);
                if ( v580 >= 0 )
                {
                  v586 = (void **)GetProcAddress(*(HMODULE *)v579, v584);
                  if ( !v586 )
                    goto LABEL_703;
                  (&WARBIRD::g_FuncAddress)[v1477] = v586;
                  v583 = ii;
                }
                ++v1477;
                ++v583;
              }
              ++v1285;
              if ( !*(_BYTE *)v573 )
                goto LABEL_703;
            }
            v580 = -1073741702;
LABEL_703:
            v573 = (WCHAR *)v1582;
            if ( !v1582 )
              goto LABEL_707;
          }
          else
          {
            v580 = 0;
          }
          v587 = GetProcessHeap();
          HeapFree(v587, 0, v573);
LABEL_707:
          if ( v580 < 0 )
          {
LABEL_675:
            v574 = (HMODULE *)&WARBIRD::g_arModuleInfo;
            v575 = 4LL;
            do
            {
              if ( *v574 )
                FreeLibrary(*v574);
              v574 += 3;
              --v575;
            }
            while ( v575 );
            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
            memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_710:
            v97 = 0LL;
            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
            memset_0(&v1667, 0, 0x70uLL);
            v1687 = 0LL;
            v588 = v468 & 0xF;
            v1305 = v588;
            v1742[0] = (v468 >> 4) & 0xF;
            v1742[1] = (v468 >> 8) & 0xF;
            v1742[2] = (v468 >> 12) & 0xF;
            v1317 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
            v1478 = -1;
            if ( !v1317 )
            {
              v589 = GetLastError();
              v590 = v589;
              if ( v589 > 0 )
                v590 = (unsigned __int16)v589 | 0x80070000;
              if ( v590 >= 0 )
                v590 = -2147467259;
LABEL_930:
              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                ;
              v712 = g_WarbirdSecureFunctionsRefCount;
              if ( g_WarbirdSecureFunctionsRefCount > 0 )
              {
                --g_WarbirdSecureFunctionsRefCount;
                if ( v712 == 1 )
                {
                  v713 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                  v97 = 4LL;
                  do
                  {
                    if ( *v713 )
                      FreeLibrary(*v713);
                    v713 += 3;
                    --v97;
                  }
                  while ( v97 );
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                }
              }
              _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset((void **)&v1581);
              if ( v590 < 0 )
              {
LABEL_1072:
                if ( v1669 )
                {
                  v785 = -1LL;
                  do
                    ++v785;
                  while ( *((_WORD *)v1669 + v785) );
                  memset(v1669, 0, 2 * v785 + 2);
                  MemoryFree(v1669);
                  v1669 = 0LL;
                }
                if ( v1670 )
                {
                  v786 = -1LL;
                  do
                    ++v786;
                  while ( *((_WORD *)v1670 + v786) );
                  memset(v1670, 0, 2 * v786 + 2);
                  MemoryFree(v1670);
                  v1670 = 0LL;
                }
                if ( v1671 )
                {
                  v787 = -1LL;
                  do
                    ++v787;
                  while ( *((_WORD *)v1671 + v787) );
                  memset(v1671, 0, 2 * v787 + 2);
                  MemoryFree(v1671);
                  v1671 = 0LL;
                }
                if ( v1672 )
                {
                  ((void (*)(void))off_180985138)();
                  v1672 = 0LL;
                }
                if ( v1673 )
                {
                  ((void (*)(void))off_180985138)();
                  v1673 = 0LL;
                }
                if ( v1674 )
                {
                  ((void (*)(void))off_180985138)();
                  v1674 = 0LL;
                }
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v788 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount > 0 )
                {
                  --g_WarbirdSecureFunctionsRefCount;
                  if ( v788 == 1 )
                  {
                    v789 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    v790 = 4LL;
                    do
                    {
                      if ( *v789 )
                        FreeLibrary(*v789);
                      v789 += 3;
                      --v790;
                    }
                    while ( v790 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                  }
                }
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                v1237 = g_WarbirdNotificationInformation;
                v791 = ((__int64 (*)(void))off_180985198)() - g_WarbirdPaintInitTime;
                v1402 = v791;
                v1737 = 0LL;
                v1738 = 0LL;
                v1739 = 0LL;
                v1740 = 0LL;
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v792 = g_WarbirdSecureFunctionsRefCount;
                if ( !g_WarbirdSecureFunctionsRefCount )
                {
                  v1255 = 0;
                  v1394 = 0;
                  v793 = (char *)MemoryAlloc(0x338uLL);
                  v1449 = (WCHAR *)v793;
                  if ( !v793 )
                    goto LABEL_1109;
                  v794 = 0;
                  v795 = -1;
                  v796 = 0;
                  v797 = 0;
                  v798 = v793 + 7;
                  v799 = (unsigned __int8 *)&unk_180832662;
                  v800 = 103LL;
                  do
                  {
                    v801 = v799[1] | ((*v799 | ((*(v799 - 1) | (*(v799 - 2) << 8)) << 8)) << 8);
                    v802 = v799[5] | ((v799[4] | ((v799[3] | (v799[2] << 8)) << 8)) << 8);
                    v803 = v801 ^ v797;
                    v799 += 8;
                    v804 = v803 ^ v802 ^ v796 ^ 0xAC987321;
                    v805 = (__ROL4__(v804, 10) + 4991 * __ROL4__(v804 + 1419157410, 5)) ^ v803;
                    v806 = (43881 * __ROR4__(v805 + 133239679, 9) - __ROL4__(v805, 2)) ^ v804;
                    v807 = (24670 * v806 - (v806 >> 13) - 123127970) ^ v805;
                    v808 = (2033 * __ROL4__(v807 ^ 0xAB69, 6) - __ROL4__(v807, 2)) ^ v806;
                    v809 = (133239679 - (v808 ^ 0xAB69605E)) ^ v807;
                    v810 = (43881 * (v809 ^ 0x137F)) ^ __ROR4__(v809, 6) ^ v808;
                    v811 = (__ROL4__(v810, 2) + 24670 * __ROR4__(v810 + 133239679, 15)) ^ v809;
                    v812 = (2033 * __ROR4__(v811 + 1419157410, 14) - __ROL4__(v811, 8)) ^ v810;
                    v813 = __ROR4__(v812, 10) ^ (4991 * __ROR4__(v812 ^ 0xAB69605E, 12)) ^ v811;
                    v814 = (v813 >> 10) ^ (43881 * (v813 ^ 0x7F1)) ^ v812;
                    v815 = (2033 * (__ROR4__(~v814, 5) + 24670)) ^ v813;
                    v816 = v814 ^ (v815 - 2033) ^ 0xAB69605E;
                    v817 = ((v816 >> 2) + 4991 * __ROL4__(v814 ^ (v815 - 2033) ^ 0xAB6967AF, 2)) ^ v815;
                    v818 = (__ROL4__(v817, 7) + 43881 * __ROR4__(v817 - 133239679, 6)) ^ v816;
                    v819 = (24670 * (v818 ^ 0x137F) + __ROR4__(v818, 9)) ^ v817;
                    v820 = (__ROL4__(v819, 7) + 2033 * __ROL4__(v819 ^ 0xAB69, 5)) ^ v818;
                    v821 = v819 ^ v820 ^ 0xAC987321;
                    v822 = (4991 * __ROR4__(v821, 3) - 219010071) ^ v820;
                    v823 = (24670 * __ROR4__(v822 - 133239679, 1) - __ROR4__(v822, 6)) ^ v821;
                    v824 = (__ROL4__(v823, 14) + 2033 * __ROL4__(v823 - 1419157410, 3)) ^ v822;
                    v825 = (4991 * __ROL4__(v824 - 1419157410, 15) - __ROR4__(v824, 14)) ^ v823;
                    v826 = (v825 >> 3) ^ (43881 * (v825 ^ 0x605E)) ^ v824;
                    v827 = v794 ^ __ROL4__(v826, 2) ^ (24670 * __ROL4__(v826 ^ 0x7F1137F, 4)) ^ v825;
                    v828 = v795 ^ v826;
                    *(v798 - 4) = v827;
                    v829 = __ROR4__(v827, 8);
                    *v798 = v828;
                    v830 = __ROR4__(v828, 8);
                    *(v798 - 5) = v829;
                    v831 = __ROR4__(v829, 8);
                    *(v798 - 1) = v830;
                    v832 = __ROR4__(v830, 8);
                    *(v798 - 6) = v831;
                    v833 = __ROR4__(v831, 8);
                    *(v798 - 2) = v832;
                    v834 = __ROR4__(v832, 8);
                    *(v798 - 7) = v833;
                    *(v798 - 3) = v834;
                    v797 = __ROR4__(v833, 8);
                    v796 = __ROR4__(v834, 8);
                    v794 = v801;
                    v795 = v802;
                    v798 += 8;
                    --v800;
                  }
                  while ( v800 );
                  v835 = 0LL;
                  v836 = 0;
                  v837 = v1449;
                  v838 = 0;
                  do
                    v836 ^= *((_BYTE *)v1449 + v835++);
                  while ( v835 < 0x338 );
                  if ( v836 != 64LL )
                  {
                    MemoryFree(v1449);
LABEL_1108:
                    v791 = v1402;
LABEL_1109:
                    v839 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    v840 = 4LL;
                    v97 = 0LL;
                    do
                    {
                      if ( *v839 )
                        FreeLibrary(*v839);
                      v839 += 3;
                      --v840;
                    }
                    while ( v840 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                    goto LABEL_1231;
                  }
                  *((_BYTE *)v1449 + 823) = 0;
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  if ( !*(_BYTE *)v1449 )
                    goto LABEL_1227;
                  while ( 1 )
                  {
                    v889 = v837;
                    v890 = -1LL;
                    do
                      ++v890;
                    while ( v837[v890] );
                    v891 = &v837[v890];
                    v892 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1394;
                    if ( !GetModuleHandleExW(0, v889, (HMODULE *)v892) )
                      break;
                    v838 = 0;
                    if ( **(_WORD **)v892 == 23117
                      && (v893 = *(int *)(*(_QWORD *)v892 + 60LL), (unsigned int)v893 < 0x10000000)
                      && (v894 = *(_QWORD *)v892 + v893, v894 >= *(_QWORD *)v892)
                      && *(_DWORD *)v894 == 17744 )
                    {
                      if ( ((*(_WORD *)(v894 + 24) - 267) & 0xFEFF) != 0 )
                      {
                        v838 = -1073741811;
                      }
                      else
                      {
                        *(_QWORD *)(v892 + 12) = *(_QWORD *)(v894 + 136);
                        *((_DWORD *)v892 + 2) = *(_DWORD *)(v894 + 80);
                      }
                    }
                    else
                    {
                      v838 = -1073741701;
                    }
                    v1412 = *(_DWORD *)(v891 + 1);
                    v837 = v891 + 3;
                    v895 = 0;
                    for ( LODWORD(v1481) = 0; v895 < v1412; LODWORD(v1481) = v895 )
                    {
                      v896 = (const CHAR *)v837;
                      v897 = -1LL;
                      do
                        ++v897;
                      while ( *((_BYTE *)v837 + v897) );
                      v837 = (WCHAR *)((char *)v837 + v897 + 1);
                      if ( v838 >= 0 )
                      {
                        v898 = (void **)GetProcAddress(*(HMODULE *)v892, v896);
                        if ( !v898 )
                          goto LABEL_1226;
                        (&WARBIRD::g_FuncAddress)[v1255] = v898;
                        v895 = (unsigned int)v1481;
                      }
                      ++v1255;
                      ++v895;
                    }
                    ++v1394;
                    if ( !*(_BYTE *)v837 )
                      goto LABEL_1226;
                  }
                  v838 = -1073741702;
LABEL_1226:
                  if ( v1449 )
                  {
LABEL_1227:
                    v899 = GetProcessHeap();
                    HeapFree(v899, 0, v1449);
                  }
                  if ( v838 < 0 )
                    goto LABEL_1108;
                  v792 = g_WarbirdSecureFunctionsRefCount;
                  v791 = v1402;
                  v97 = 0LL;
                }
                g_WarbirdSecureFunctionsRefCount = v792 + 1;
LABEL_1231:
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                LODWORD(v1737) = v791;
                v1736 = 1;
                LODWORD(v1738) = -1721306479;
                DWORD2(v1737) = 1;
                LODWORD(v1739) = 1;
                DWORD2(v1738) = 1;
                LODWORD(v1740) = v1237;
                DWORD2(v1739) = 1;
                v900 = 4LL;
                ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1809851D0)(0LL, 8225LL, 4LL, &v1736);
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v901 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount > 0 )
                {
                  --g_WarbirdSecureFunctionsRefCount;
                  if ( v901 == 1 )
                  {
                    v902 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    do
                    {
                      if ( *v902 )
                        FreeLibrary(*v902);
                      v902 += 3;
                      --v900;
                    }
                    while ( v900 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                  }
                }
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                ((void (__fastcall *)(_QWORD, size_t))off_180985260)(0LL, v1266);
                v1513 = (void *)v1479;
                goto LABEL_1241;
              }
              v714 = v1687;
              v1589 = v1687;
              memset_0(v1640, 0, 0x68uLL);
              v715 = 1;
              v716 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1266, 7LL);
              v97 = 0LL;
              if ( v716
                && (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(v716, 104LL, v1640) )
              {
                if ( v1643 != 32 || !v1644 || v1641 <= 0 || v1642 <= 0 )
                  v715 = 0;
                if ( v715 )
                {
LABEL_950:
                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1676, v714, HIDWORD(v1589));
                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1677, v714, HIDWORD(v1589));
                  if ( v588 == 1 )
                    v1482 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_180985128)(v1668 == 0 ? 0xB26720 : 0);
LABEL_952:
                  v1471 = ((__int64 (__fastcall *)(size_t, __int64))off_180985180)(v1266, 1LL);
                  v717 = 2064;
                  if ( v1667 )
                    v717 = 133138;
                  v1460 = v717;
                  if ( v715 )
                  {
                    v718 = v1668;
                    lpModuleNamee = v1672;
                    v719 = v1669;
                    memset_0(v1645, 0, 0x68uLL);
                    memset_0(v1649, 0, 0x68uLL);
                    Srcg = 0LL;
                    v1353 = 0;
                    v1289 = 0;
                    v1706 = 0LL;
                    v1707 = 0LL;
                    v1708 = 0LL;
                    v1709 = 0;
                    v1688 = 0LL;
                    if ( !v719 )
                      goto LABEL_958;
                    v720 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1266, 7LL);
                    if ( !v720 )
                      goto LABEL_957;
                    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                         v720,
                                         104LL,
                                         v1645) )
                    {
                      Srcg = v1648;
                      v1353 = v1646;
                      v1289 = v1647;
                    }
                    v721 = ((__int64 (__fastcall *)(size_t))off_180985110)(v1266);
                    v722 = v721;
                    v1378 = v721;
                    if ( !v721 )
                    {
LABEL_957:
                      GetLastError();
                      goto LABEL_958;
                    }
                    v1590 = 0LL;
                    v1707 = 0LL;
                    v1708 = 0LL;
                    v1709 = 0;
                    LODWORD(v1706) = 40;
                    DWORD1(v1706) = DWORD2(v1676) - v1676;
                    DWORD2(v1706) = DWORD1(v1676) - HIDWORD(v1676);
                    HIDWORD(v1706) = 2097153;
                    v723 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                             v721,
                             &v1706,
                             0LL,
                             &v1590,
                             0LL,
                             0);
                    v724 = v723;
                    v1318 = (LPCWSTR)v723;
                    if ( !v723 )
                    {
                      v725 = GetLastError();
                      v726 = v725;
                      v97 = 0LL;
                      if ( v725 > 0 )
                        v726 = (unsigned __int16)v725 | 0x80070000;
                      if ( v726 >= 0 )
                        v726 = -2147467259;
                      goto LABEL_999;
                    }
                    v727 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(v723, 104LL, v1649);
                    v728 = 0LL;
                    if ( v727 )
                      v728 = v1650;
                    v1360 = v728;
                    DWORD2(v1688) = DWORD2(v1676) - v1676;
                    HIDWORD(v1688) = HIDWORD(v1676) - DWORD1(v1676);
                    ((void (__fastcall *)(size_t, __int64))off_180985178)(v722, v724);
                    ((void (__fastcall *)(size_t, __int64))off_180985180)(v722, 1LL);
                    lpModuleNamef = (LPCWSTR)((__int64 (__fastcall *)(size_t, LPCWSTR))off_180985178)(
                                               v722,
                                               lpModuleNamee);
                    v729 = off_1809851E8;
                    v730 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                    ((void (__fastcall *)(size_t, __int128 *, __int64))v729)(v722, &v1688, v730);
                    v726 = 0;
                    ((void (__fastcall *)(size_t, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                      v722,
                      v719,
                      0xFFFFFFFFLL,
                      &v1688,
                      v1460,
                      0LL);
                    if ( v1305 == 1 )
                    {
                      if ( v718 )
                      {
                        v731 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                        LOBYTE(v732) = v731;
                        LODWORD(Size) = v731;
LABEL_976:
                        v733 = -(int)v1676;
                        if ( (int)v1676 >= 0 )
                          v733 = 0;
                        v734 = 0;
                        if ( (int)v1676 >= 0 )
                          v734 = v1676;
                        v735 = -DWORD1(v1676);
                        if ( (SDWORD1(v1676) & 0x80000000) == 0 )
                          v735 = 0;
                        v736 = 0;
                        if ( (SDWORD1(v1676) & 0x80000000) == 0 )
                          v736 = DWORD1(v1676);
                        v737 = DWORD2(v1688) - v733;
                        if ( DWORD2(v1688) - v733 >= v1353 - v734 )
                          v737 = v1353 - v734;
                        v738 = HIDWORD(v1688) - v735;
                        if ( HIDWORD(v1688) - v735 >= v1289 - v736 )
                          v738 = v1289 - v736;
                        if ( v737 > 0 && v738 > 0 )
                        {
                          v739 = v1360 + 4 * (v733 + (__int64)(v735 * DWORD2(v1688)));
                          v1361 = v739;
                          v740 = v1353;
                          v741 = &Srcg[4 * v734 + 4 * (__int64)(v736 * v1353)];
                          Srch = v741;
                          v1354 = 0;
                          v1422 = 4LL * SDWORD2(v1688);
                          v1234 = 4 * v740;
                          do
                          {
                            v742 = 0;
                            v1290 = 0;
                            v743 = (unsigned __int8 *)(v739 + 2);
                            v744 = &v741[-v739];
                            do
                            {
                              if ( (unsigned __int8)((*v743 + *(v743 - 2) + 2 * (unsigned int)*(v743 - 1)) >> 2) != 0xFF )
                              {
                                v745 = (unsigned __int8)~((*v743 + *(v743 - 2) + 2 * (unsigned int)*(v743 - 1)) >> 2);
                                v743[(_QWORD)v744] -= ~((*v743 + *(v743 - 2) + 2 * (unsigned int)*(v743 - 1)) >> 2)
                                                    * (v732 - v743[(_QWORD)v744]);
                                v743[(_QWORD)v744 - 1] -= v745 * (BYTE1(Size) - v743[(_QWORD)v744 - 1]);
                                v743[(_QWORD)v744 - 2] -= v745 * (BYTE2(Size) - v743[(_QWORD)v744 - 2]);
                                v743[(_QWORD)v744 + 1] += v745 * (255 - v743[(_QWORD)v744 + 1]) / 255;
                                v742 = v1290;
                              }
                              v726 = 0;
                              v743 += 4;
                              v1290 = ++v742;
                            }
                            while ( v742 < v737 );
                            v739 = v1422 + v1361;
                            v1361 += v1422;
                            v741 = &Srch[v1234];
                            Srch += v1234;
                            ++v1354;
                          }
                          while ( v1354 < v738 );
                          v85 = v1485;
                          v722 = v1378;
                        }
                        ((void (__fastcall *)(LPCWSTR))off_180985138)(v1318);
                        v97 = 0LL;
                        if ( lpModuleNamef )
                          ((void (__fastcall *)(size_t, LPCWSTR))off_180985178)(v722, lpModuleNamef);
LABEL_999:
                        ((void (__fastcall *)(size_t))off_180985130)(v722);
                        if ( v726 < 0 )
                          goto LABEL_1070;
                        v1355 = v1668;
                        lpModuleNameg = v1673;
                        v746 = v1670;
                        memset_0(v1651, 0, 0x68uLL);
                        memset_0(v1655, 0, 0x68uLL);
                        Srci = 0LL;
                        v1291 = 0;
                        v747 = 0;
                        v1710 = 0LL;
                        v1711 = 0LL;
                        v1712 = 0LL;
                        v1713 = 0;
                        v1689 = 0LL;
                        if ( v746 )
                        {
                          v748 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1266, 7LL);
                          if ( v748 )
                          {
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                 v748,
                                                 104LL,
                                                 v1651) )
                            {
                              Srci = v1654;
                              v1291 = v1652;
                              v747 = v1653;
                            }
                            v749 = ((__int64 (__fastcall *)(size_t))off_180985110)(v1266);
                            v750 = v749;
                            v1379 = v749;
                            if ( v749 )
                            {
                              v1591 = 0LL;
                              v1711 = 0LL;
                              v1712 = 0LL;
                              v1713 = 0;
                              LODWORD(v1710) = 40;
                              DWORD1(v1710) = DWORD2(v1677) - v1677;
                              DWORD2(v1710) = DWORD1(v1677) - HIDWORD(v1677);
                              HIDWORD(v1710) = 2097153;
                              v751 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                                       v749,
                                       &v1710,
                                       0LL,
                                       &v1591,
                                       0LL,
                                       0);
                              v752 = v751;
                              v1319 = (LPCWSTR)v751;
                              if ( !v751 )
                              {
                                v753 = GetLastError();
                                v754 = v753;
                                v97 = 0LL;
                                if ( v753 > 0 )
                                  v754 = (unsigned __int16)v753 | 0x80070000;
                                if ( v754 >= 0 )
                                  v754 = -2147467259;
LABEL_1042:
                                ((void (__fastcall *)(size_t))off_180985130)(v750);
                                if ( v754 < 0 )
                                  goto LABEL_1070;
                                v773 = 0LL;
                                v774 = v1266;
LABEL_1201:
                                ((void (__fastcall *)(size_t, _QWORD))off_180985180)(v774, v1471);
                                v784 = v1448;
                                v97 = 0LL;
                                if ( !v1448 )
                                {
LABEL_1068:
                                  if ( !v773 )
                                    goto LABEL_1070;
                                  goto LABEL_1069;
                                }
LABEL_1067:
                                ((void (__fastcall *)(LPCWSTR))off_180985138)(v784);
                                goto LABEL_1068;
                              }
                              v755 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                       v751,
                                       104LL,
                                       v1655);
                              v756 = 0LL;
                              if ( v755 )
                                v756 = v1656;
                              v1362 = v756;
                              DWORD2(v1689) = DWORD2(v1677) - v1677;
                              HIDWORD(v1689) = HIDWORD(v1677) - DWORD1(v1677);
                              ((void (__fastcall *)(size_t, __int64))off_180985178)(v750, v752);
                              ((void (__fastcall *)(size_t, __int64))off_180985180)(v750, 1LL);
                              lpModuleNameh = (LPCWSTR)((__int64 (__fastcall *)(size_t, LPCWSTR))off_180985178)(
                                                         v750,
                                                         lpModuleNameg);
                              v757 = off_1809851E8;
                              v758 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                              ((void (__fastcall *)(size_t, __int128 *, __int64))v757)(v750, &v1689, v758);
                              v754 = 0;
                              ((void (__fastcall *)(size_t, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                v750,
                                v746,
                                0xFFFFFFFFLL,
                                &v1689,
                                v1460,
                                0LL);
                              if ( v1305 == 1 )
                              {
                                if ( !v1355 )
                                {
                                  v1306 = 0xFFFFFF;
LABEL_1019:
                                  v760 = -(int)v1677;
                                  if ( (int)v1677 >= 0 )
                                    v760 = 0;
                                  v761 = 0;
                                  if ( (int)v1677 >= 0 )
                                    v761 = v1677;
                                  v762 = -DWORD1(v1677);
                                  if ( (SDWORD1(v1677) & 0x80000000) == 0 )
                                    v762 = 0;
                                  v763 = 0;
                                  if ( (SDWORD1(v1677) & 0x80000000) == 0 )
                                    v763 = DWORD1(v1677);
                                  v764 = DWORD2(v1689) - v760;
                                  if ( DWORD2(v1689) - v760 >= v1291 - v761 )
                                    v764 = v1291 - v761;
                                  v765 = HIDWORD(v1689) - v762;
                                  v766 = v747 - v763;
                                  if ( HIDWORD(v1689) - v762 >= v766 )
                                    v765 = v766;
                                  if ( v764 > 0 && v765 > 0 )
                                  {
                                    v767 = v1362 + 4 * (v760 + (__int64)(DWORD2(v1689) * v762));
                                    v1363 = v767;
                                    v768 = &Srci[4 * v761 + 4 * (__int64)(v1291 * v763)];
                                    Srcj = v768;
                                    v1356 = 0;
                                    v1423 = 4LL * SDWORD2(v1689);
                                    v1235 = 4LL * v1291;
                                    do
                                    {
                                      v769 = 0;
                                      LODWORD(Size) = 0;
                                      v770 = (unsigned __int8 *)(v767 + 2);
                                      v771 = &v768[-v767];
                                      do
                                      {
                                        if ( (unsigned __int8)((*v770 + *(v770 - 2) + 2 * (unsigned int)*(v770 - 1)) >> 2) != 0xFF )
                                        {
                                          v772 = (unsigned __int8)~((*v770 + *(v770 - 2) + 2 * (unsigned int)*(v770 - 1)) >> 2);
                                          v771[(_QWORD)v770] -= ~((*v770 + *(v770 - 2) + 2 * (unsigned int)*(v770 - 1)) >> 2)
                                                              * (v1478 - v771[(_QWORD)v770]);
                                          v770[(_QWORD)v771 - 1] -= v772 * (BYTE1(v1306) - v770[(_QWORD)v771 - 1]);
                                          v770[(_QWORD)v771 - 2] -= v772 * (BYTE2(v1306) - v770[(_QWORD)v771 - 2]);
                                          v770[(_QWORD)v771 + 1] += v772 * (255 - v770[(_QWORD)v771 + 1]) / 255;
                                          v769 = Size;
                                        }
                                        v754 = 0;
                                        v770 += 4;
                                        LODWORD(Size) = ++v769;
                                      }
                                      while ( v769 < v764 );
                                      v767 = v1423 + v1363;
                                      v1363 += v1423;
                                      v768 = &Srcj[v1235];
                                      Srcj += v1235;
                                      ++v1356;
                                    }
                                    while ( v1356 < v765 );
                                    v85 = v1485;
                                    v750 = v1379;
                                  }
                                  ((void (__fastcall *)(LPCWSTR))off_180985138)(v1319);
                                  v97 = 0LL;
                                  if ( lpModuleNameh )
                                    ((void (__fastcall *)(size_t, LPCWSTR))off_180985178)(v750, lpModuleNameh);
                                  goto LABEL_1042;
                                }
                                v759 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                              }
                              else
                              {
                                v759 = -5723992;
                              }
                              v1306 = v759;
                              v1478 = v759;
                              goto LABEL_1019;
                            }
                          }
                          goto LABEL_957;
                        }
LABEL_958:
                        v97 = 0LL;
                        goto LABEL_1070;
                      }
                      v732 = 0xFFFFFF;
                    }
                    else
                    {
                      v732 = -5723992;
                    }
                    LODWORD(Size) = v732;
                    goto LABEL_976;
                  }
                  if ( v1668 || (v775 = -64, v588 == 1) )
                    v775 = -1;
                  LOWORD(v1357) = 0;
                  BYTE2(v1357) = v775;
                  HIBYTE(v1357) = 1;
                  v776 = 0;
                  v1292 = 0;
                  LODWORD(Size) = 0;
                  v1401 = (void *)((__int64 (__fastcall *)(size_t))off_180985110)(v1266);
                  if ( !v1401 )
                  {
                    GetLastError();
                    goto LABEL_1070;
                  }
                  if ( v1305 == 1 )
                  {
                    v777 = DWORD2(v1677) - v1677;
                    if ( DWORD2(v1677) - (int)v1677 <= DWORD2(v1676) - (int)v1676 )
                      v777 = DWORD2(v1676) - v1676;
                    LODWORD(v1487) = v777;
                    v778 = HIDWORD(v1677) - DWORD1(v1676);
                    LODWORD(v1513) = HIDWORD(v1677) - DWORD1(v1676);
                    v779 = 0;
                    LODWORD(v1483) = 0;
                    if ( v1667 )
                    {
                      v776 = v777 + v1676 - DWORD2(v1676);
                      LODWORD(Size) = v777 + v1677 - DWORD2(v1677);
                      v779 = v776;
                      LODWORD(v1483) = Size;
                    }
                    v780 = v779 + DWORD2(v1676) - v1676;
                    LODWORD(v1484) = HIDWORD(v1676) - DWORD1(v1676);
                    v781 = (_DWORD)v1483 + DWORD2(v1677) - v1677;
                    LODWORD(v1481) = DWORD1(v1677) - DWORD1(v1676);
                    v1393 = HIDWORD(v1677) - DWORD1(v1676);
                  }
                  else
                  {
                    v777 = DWORD2(v1687);
                    LODWORD(v1487) = DWORD2(v1687);
                    v778 = HIDWORD(v1687);
                    LODWORD(v1513) = HIDWORD(v1687);
                    v1610 = v1676;
                    v1611 = v1677;
                    LODWORD(v1484) = HIDWORD(v1676);
                    v780 = DWORD2(v1676);
                    v1292 = DWORD1(v1676);
                    v776 = v1676;
                    v1393 = HIDWORD(v1677);
                    v781 = DWORD2(v1677);
                    LODWORD(v1481) = DWORD1(v1677);
                    LODWORD(Size) = v1677;
                  }
                  LODWORD(v1483) = v781;
                  v1592 = 0LL;
                  v1703 = 0LL;
                  v1704 = 0LL;
                  v1705 = 0;
                  LODWORD(v1702) = 40;
                  DWORD1(v1702) = v777;
                  DWORD2(v1702) = -v778;
                  HIDWORD(v1702) = 2097153;
                  v782 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                           v1401,
                           &v1702,
                           0LL,
                           &v1592,
                           0LL,
                           0);
                  v1448 = (LPCWSTR)v782;
                  if ( !v782 )
                  {
                    GetLastError();
                    v773 = v1401;
                    v97 = 0LL;
LABEL_1069:
                    ((void (__fastcall *)(void *))off_180985130)(v773);
LABEL_1070:
                    if ( v1482 )
                      ((void (__fastcall *)(LPVOID))off_180985138)(v1482);
                    goto LABEL_1072;
                  }
                  ((void (__fastcall *)(void *, __int64))off_180985178)(v1401, v782);
                  if ( v1305 == 1 && v1482 )
                  {
                    v1690 = 0LL;
                    v1691 = v777;
                    v1692 = (int)v1513;
                    ((void (__fastcall *)(void *, __int64 *))off_1809851E8)(v1401, &v1690);
                  }
                  v1408 = v1668;
                  lpModuleNamei = v1672;
                  Srck = v1669;
                  memset_0(v1657, 0, 0x68uLL);
                  memset_0(v1638, 0, 0x68uLL);
                  v1380 = 0LL;
                  v1254 = 0;
                  v1236 = 0;
                  v1714 = 0LL;
                  v1715 = 0LL;
                  v1716 = 0LL;
                  v1717 = 0;
                  v1686 = 0LL;
                  if ( Srck )
                  {
                    v783 = ((__int64 (__fastcall *)(void *, __int64))off_180985150)(v1401, 7LL);
                    if ( !v783 )
                      goto LABEL_1063;
                    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                         v783,
                                         104LL,
                                         v1657) )
                    {
                      v1380 = v1660;
                      v1254 = v1658;
                      v1236 = v1659;
                    }
                    v841 = ((__int64 (__fastcall *)(void *))off_180985110)(v1401);
                    v1320 = (LPCWSTR)v841;
                    if ( v841 )
                    {
                      v1593 = 0LL;
                      v1715 = 0LL;
                      v1716 = 0LL;
                      v1717 = 0;
                      LODWORD(v1714) = 40;
                      v842 = v780 - v776;
                      DWORD1(v1714) = v842;
                      DWORD2(v1714) = v1292 - v1484;
                      HIDWORD(v1714) = 2097153;
                      v843 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                               v841,
                               &v1714,
                               0LL,
                               &v1593,
                               0LL,
                               0);
                      v1364 = v843;
                      if ( v843 )
                      {
                        v846 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(v843, 104LL, v1638);
                        v847 = 0LL;
                        if ( v846 )
                          v847 = v1639;
                        v1424 = v847;
                        DWORD2(v1686) = v842;
                        HIDWORD(v1686) = v1484 - v1292;
                        ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(v1320, v1364);
                        ((void (__fastcall *)(LPCWSTR, __int64))off_180985180)(v1320, 1LL);
                        lpModuleNamej = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(
                                                   v1320,
                                                   lpModuleNamei);
                        v848 = off_1809851E8;
                        v849 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                        ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v848)(v1320, &v1686, v849);
                        v845 = 0;
                        ((void (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                          v1320,
                          Srck,
                          0xFFFFFFFFLL,
                          &v1686,
                          v1460,
                          0LL);
                        if ( v1305 == 1 )
                        {
                          if ( v1408 )
                            v1409 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                          else
                            v1409 = 0xFFFFFF;
                        }
                        else
                        {
                          v1409 = -5723992;
                        }
                        v850 = -v776;
                        if ( v776 >= 0 )
                          v850 = 0;
                        v851 = 0;
                        if ( v776 >= 0 )
                          v851 = v776;
                        v852 = -v1292;
                        if ( v1292 >= 0 )
                          v852 = 0;
                        v853 = 0;
                        if ( v1292 >= 0 )
                          v853 = v1292;
                        v854 = v1254;
                        v855 = DWORD2(v1686) - v850;
                        if ( DWORD2(v1686) - v850 >= v1254 - v851 )
                          v855 = v1254 - v851;
                        v1256 = v855;
                        v856 = HIDWORD(v1686) - v852;
                        if ( HIDWORD(v1686) - v852 >= v1236 - v853 )
                          v856 = v1236 - v853;
                        if ( v855 > 0 && v856 > 0 )
                        {
                          v857 = &v1424[4 * v850 + 4 * (__int64)(DWORD2(v1686) * v852)];
                          v858 = (char *)(v1380 + 4 * (v851 + (__int64)((int)v854 * v853)));
                          Srcl = v858;
                          LODWORD(v1484) = 0;
                          v1381 = 4LL * SDWORD2(v1686);
                          v1425 = 4 * v854;
                          do
                          {
                            v859 = 0;
                            v860 = (unsigned __int8 *)(v857 + 2);
                            v861 = v858 - v857;
                            do
                            {
                              if ( (unsigned __int8)((*v860 + *(v860 - 2) + 2 * (unsigned int)*(v860 - 1)) >> 2) != 0xFF )
                              {
                                v862 = (unsigned __int8)~((*v860 + *(v860 - 2) + 2 * (unsigned int)*(v860 - 1)) >> 2);
                                v860[v861] -= ~((*v860 + *(v860 - 2) + 2 * (unsigned int)*(v860 - 1)) >> 2)
                                            * (v1409 - v860[v861]);
                                v860[v861 - 1] -= v862 * (BYTE1(v1409) - v860[v861 - 1]);
                                v860[v861 - 2] -= v862 * (BYTE2(v1409) - v860[v861 - 2]);
                                v860[v861 + 1] += v862 * (255 - v860[v861 + 1]) / 255;
                                v855 = v1256;
                              }
                              v845 = 0;
                              v860 += 4;
                              ++v859;
                            }
                            while ( v859 < v855 );
                            v857 += v1381;
                            v858 = &Srcl[v1425];
                            Srcl += v1425;
                            LODWORD(v1484) = v1484 + 1;
                          }
                          while ( (int)v1484 < v856 );
                          v85 = v1485;
                          v777 = v1487;
                          v781 = (int)v1483;
                        }
                        ((void (__fastcall *)(SIZE_T))off_180985138)(v1364);
                        if ( lpModuleNamej )
                          ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1320, lpModuleNamej);
                      }
                      else
                      {
                        v844 = GetLastError();
                        v845 = v844;
                        if ( v844 > 0 )
                          v845 = (unsigned __int16)v844 | 0x80070000;
                        if ( v845 >= 0 )
                          v845 = -2147467259;
                      }
                      ((void (__fastcall *)(LPCWSTR))off_180985130)(v1320);
                      if ( v845 >= 0 )
                      {
                        v1238 = v1668;
                        lpModuleNamek = v1673;
                        v863 = v1670;
                        Srcm = v1670;
                        memset_0(v1661, 0, 0x68uLL);
                        memset_0(v1665, 0, 0x68uLL);
                        v1382 = 0LL;
                        v1257 = 0;
                        v1410 = 0;
                        v1718 = 0LL;
                        v1719 = 0LL;
                        v1720 = 0LL;
                        v1721 = 0;
                        v1693 = 0LL;
                        if ( v863 )
                        {
                          v773 = v1401;
                          v864 = ((__int64 (__fastcall *)(void *, __int64))off_180985150)(v1401, 7LL);
                          if ( v864 )
                          {
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                 v864,
                                                 104LL,
                                                 v1661) )
                            {
                              v1382 = v1664;
                              v1257 = v1662;
                              v1410 = v1663;
                            }
                            v865 = ((__int64 (__fastcall *)(void *))off_180985110)(v1401);
                            v866 = v865;
                            v1321 = (LPCWSTR)v865;
                            if ( v865 )
                            {
                              v1594[0] = 0LL;
                              v1719 = 0LL;
                              v1720 = 0LL;
                              v1721 = 0;
                              LODWORD(v1718) = 40;
                              v867 = v781 - Size;
                              DWORD1(v1718) = v867;
                              DWORD2(v1718) = (_DWORD)v1481 - v1393;
                              HIDWORD(v1718) = 2097153;
                              v868 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_180985118)(
                                       v865,
                                       &v1718,
                                       0LL,
                                       v1594,
                                       0LL,
                                       0);
                              v1365 = v868;
                              if ( !v868 )
                              {
                                v869 = GetLastError();
                                v870 = v869;
                                v97 = 0LL;
                                if ( v869 > 0 )
                                  v870 = (unsigned __int16)v869 | 0x80070000;
                                if ( v870 >= 0 )
                                  v870 = -2147467259;
LABEL_1197:
                                ((void (__fastcall *)(__int64))off_180985130)(v866);
                                if ( v870 >= 0 )
                                {
                                  v773 = v1401;
                                  v774 = v1266;
                                  if ( v1305 == 1 )
                                    ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                                      v1266,
                                      (unsigned int)v1676,
                                      DWORD1(v1676),
                                      v777,
                                      (_DWORD)v1513,
                                      v1401,
                                      0,
                                      0,
                                      13369376);
                                  else
                                    ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, unsigned int, _DWORD, int))off_180985140)(
                                      v1266,
                                      (unsigned int)v1687,
                                      DWORD1(v1687),
                                      v777,
                                      (_DWORD)v1513,
                                      v1401,
                                      0,
                                      0,
                                      v777,
                                      (_DWORD)v1513,
                                      v1357);
                                  goto LABEL_1201;
                                }
                                v773 = v1401;
LABEL_1066:
                                v784 = v1448;
                                goto LABEL_1067;
                              }
                              v871 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                       v868,
                                       104LL,
                                       v1665);
                              v872 = 0LL;
                              if ( v871 )
                                v872 = v1666;
                              v1426 = v872;
                              DWORD2(v1693) = v867;
                              v873 = (int)v1481;
                              HIDWORD(v1693) = v1393 - (_DWORD)v1481;
                              ((void (__fastcall *)(__int64, SIZE_T))off_180985178)(v866, v1365);
                              ((void (__fastcall *)(__int64, __int64))off_180985180)(v866, 1LL);
                              lpModuleNamel = (LPCWSTR)((__int64 (__fastcall *)(__int64, LPCWSTR))off_180985178)(
                                                         v866,
                                                         lpModuleNamek);
                              v874 = off_1809851E8;
                              v875 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                              ((void (__fastcall *)(__int64, __int128 *, __int64))v874)(v866, &v1693, v875);
                              v870 = 0;
                              ((void (__fastcall *)(__int64, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                v866,
                                Srcm,
                                0xFFFFFFFFLL,
                                &v1693,
                                v1460,
                                0LL);
                              if ( v1305 == 1 )
                              {
                                if ( !v1238 )
                                {
                                  v1239 = 0xFFFFFF;
LABEL_1174:
                                  v877 = -(int)Size;
                                  if ( (Size & 0x80000000) == 0LL )
                                    v877 = 0;
                                  v878 = 0;
                                  if ( (Size & 0x80000000) == 0LL )
                                    v878 = Size;
                                  v879 = -v873;
                                  if ( v873 >= 0 )
                                    v879 = 0;
                                  v880 = 0;
                                  if ( v873 >= 0 )
                                    v880 = v873;
                                  v881 = DWORD2(v1693) - v877;
                                  if ( DWORD2(v1693) - v877 >= v1257 - v878 )
                                    v881 = v1257 - v878;
                                  v882 = HIDWORD(v1693) - v879;
                                  if ( HIDWORD(v1693) - v879 >= v1410 - v880 )
                                    v882 = v1410 - v880;
                                  if ( v881 > 0 && v882 > 0 )
                                  {
                                    v883 = &v1426[4 * v877 + 4 * (__int64)(DWORD2(v1693) * v879)];
                                    Srcn = v883;
                                    v884 = (char *)(v1382 + 4 * (v878 + (__int64)(v1257 * v880)));
                                    v1383 = (size_t)v884;
                                    v1411 = 0;
                                    v1427 = 4LL * SDWORD2(v1693);
                                    v1481 = (LPVOID)(4LL * v1257);
                                    do
                                    {
                                      v885 = 0;
                                      v886 = (unsigned __int8 *)(v883 + 2);
                                      v887 = (char *)(v884 - v883);
                                      do
                                      {
                                        if ( (unsigned __int8)((*v886 + *(v886 - 2) + 2 * (unsigned int)*(v886 - 1)) >> 2) != 0xFF )
                                        {
                                          v888 = (unsigned __int8)~((*v886 + *(v886 - 2) + 2 * (unsigned int)*(v886 - 1)) >> 2);
                                          v886[(_QWORD)v887] -= ~((*v886 + *(v886 - 2) + 2 * (unsigned int)*(v886 - 1)) >> 2)
                                                              * (v1478 - v886[(_QWORD)v887]);
                                          v886[(_QWORD)v887 - 1] -= v888 * (BYTE1(v1239) - v886[(_QWORD)v887 - 1]);
                                          v886[(_QWORD)v887 - 2] -= v888 * (BYTE2(v1239) - v886[(_QWORD)v887 - 2]);
                                          v886[(_QWORD)v887 + 1] += v888 * (255 - v886[(_QWORD)v887 + 1]) / 255;
                                        }
                                        v870 = 0;
                                        v886 += 4;
                                        ++v885;
                                      }
                                      while ( v885 < v881 );
                                      v883 = &Srcn[v1427];
                                      Srcn += v1427;
                                      v884 = (char *)v1481 + v1383;
                                      v1383 += (size_t)v1481;
                                      ++v1411;
                                    }
                                    while ( v1411 < v882 );
                                    v85 = v1485;
                                    v777 = v1487;
                                    v866 = (__int64)v1321;
                                  }
                                  ((void (__fastcall *)(SIZE_T))off_180985138)(v1365);
                                  v97 = 0LL;
                                  if ( lpModuleNamel )
                                    ((void (__fastcall *)(__int64, LPCWSTR))off_180985178)(v866, lpModuleNamel);
                                  goto LABEL_1197;
                                }
                                v876 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                              }
                              else
                              {
                                v876 = -5723992;
                              }
                              v1239 = v876;
                              v1478 = v876;
                              goto LABEL_1174;
                            }
                          }
                          GetLastError();
LABEL_1065:
                          v97 = 0LL;
                          goto LABEL_1066;
                        }
                      }
                    }
                    else
                    {
LABEL_1063:
                      GetLastError();
                    }
                  }
                  v773 = v1401;
                  goto LABEL_1065;
                }
              }
              else
              {
                v715 = 0;
              }
              if ( v588 != 1 )
                goto LABEL_952;
              goto LABEL_950;
            }
            v591 = 0LL;
            v1583 = 0LL;
            v1584 = 0LL;
            v1585 = 0LL;
            v1586 = 0LL;
            v1587 = 0LL;
            v1588 = 0LL;
            v590 = 0;
            v1350 = 0;
            v1511 = 0;
            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1809851A0)(
                                  8LL,
                                  &v1486,
                                  0LL,
                                  &v1511) )
              goto LABEL_716;
            v593 = (char *)MemoryAlloc(2LL * v1511);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1587);
            if ( !v593 )
            {
              v1587 = 0LL;
              v590 = -2147024882;
              goto LABEL_733;
            }
            v1587 = v593;
            v594 = MemoryAlloc(4LL * (v1486 + 1));
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1588);
            if ( v594 )
            {
              v1588 = v594;
              if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1809851A0)(
                                    8LL,
                                    &v1486,
                                    v593,
                                    &v1511) )
              {
LABEL_716:
                v592 = GetLastError();
                v590 = v592;
                if ( v592 > 0 )
                  v590 = (unsigned __int16)v592 | 0x80070000;
                if ( v590 >= 0 )
                  v590 = -2147467259;
LABEL_733:
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1588);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1587);
                if ( v590 >= 0 )
                {
                  v597 = 0;
                  v1286 = 0;
                  v598 = 0;
                  if ( v1350 )
                  {
                    v599 = 0LL;
                    while ( 2 )
                    {
                      v600 = 0;
                      v601 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
                      do
                      {
                        if ( *(_DWORD *)&v591[v599] == *v601 )
                        {
                          v597 = v600;
                          v1286 = v600;
                          goto LABEL_742;
                        }
                        ++v600;
                        ++v601;
                      }
                      while ( v600 < 0x26 );
                      ++v598;
                      v599 += 4LL;
                      if ( v598 < v1350 )
                        continue;
                      break;
                    }
                  }
LABEL_742:
                  v602 = v597;
                  v1351 = 0;
                  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))off_1809851A8)(
                                       `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v597],
                                       v1743,
                                       85LL)
                    && (int)((__int64 (__fastcall *)(_BYTE *, __int64, char *))off_180985190)(v1743, 88LL, &v1694) > 0 )
                  {
                    v1351 = (v1695 >> 27) & 1;
                  }
                  v603 = L"Segoe UI Light";
                  v604 = (const wchar_t **)v1741;
                  v605 = 19LL;
                  do
                  {
                    *v604 = v603;
                    v606 = -1LL;
                    do
                      ++v606;
                    while ( v603[v606] );
                    v603 += v606 + 1;
                    ++v604;
                    --v605;
                  }
                  while ( v605 );
                  lpModuleNameb = (LPCWSTR)v1741[*((unsigned __int8 *)&`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping
                                                 + 3 * v602)];
                  Srcf = (const wchar_t *)v1741[(unsigned __int8)byte_180836F31[3 * v602]];
                  v1375 = v1741[(unsigned __int8)byte_180836F32[3 * v602]];
                  v607 = (char *)MemoryAlloc(0x1C90uLL);
                  v1252 = v607;
                  if ( v607 )
                  {
                    v610 = 0;
                    LODWORD(Size) = -1;
                    v611 = 0;
                    v612 = 0;
                    v613 = v607 + 7;
                    v614 = (unsigned __int8 *)&unk_1808B5392;
                    v615 = 914LL;
                    v616 = -1;
                    do
                    {
                      v617 = v614[1] | ((*v614 | ((*(v614 - 1) | (*(v614 - 2) << 8)) << 8)) << 8);
                      v618 = v614[5] | ((v614[4] | ((v614[3] | (v614[2] << 8)) << 8)) << 8);
                      v619 = v617 ^ v612;
                      v614 += 8;
                      v620 = v619 ^ v618 ^ v611 ^ 0xAC987321;
                      v621 = (__ROL4__(v620, 10) + 4991 * __ROL4__(v620 + 1419157410, 5)) ^ v619;
                      v622 = (43881 * __ROR4__(v621 + 133239679, 9) - __ROL4__(v621, 2)) ^ v620;
                      v623 = (24670 * v622 - (v622 >> 13) - 123127970) ^ v621;
                      v624 = (2033 * __ROL4__(v623 ^ 0xAB69, 6) - __ROL4__(v623, 2)) ^ v622;
                      v625 = (133239679 - (v624 ^ 0xAB69605E)) ^ v623;
                      v626 = (43881 * (v625 ^ 0x137F)) ^ __ROR4__(v625, 6) ^ v624;
                      v627 = (__ROL4__(v626, 2) + 24670 * __ROR4__(v626 + 133239679, 15)) ^ v625;
                      v628 = (2033 * __ROR4__(v627 + 1419157410, 14) - __ROL4__(v627, 8)) ^ v626;
                      v629 = __ROR4__(v628, 10) ^ (4991 * __ROR4__(v628 ^ 0xAB69605E, 12)) ^ v627;
                      v630 = (v629 >> 10) ^ (43881 * (v629 ^ 0x7F1)) ^ v628;
                      v631 = (2033 * (__ROR4__(~v630, 5) + 24670)) ^ v629;
                      v632 = v630 ^ (v631 - 2033) ^ 0xAB69605E;
                      v633 = ((v632 >> 2) + 4991 * __ROL4__(v630 ^ (v631 - 2033) ^ 0xAB6967AF, 2)) ^ v631;
                      v634 = (__ROL4__(v633, 7) + 43881 * __ROR4__(v633 - 133239679, 6)) ^ v632;
                      v635 = (24670 * (v634 ^ 0x137F) + __ROR4__(v634, 9)) ^ v633;
                      v636 = (__ROL4__(v635, 7) + 2033 * __ROL4__(v635 ^ 0xAB69, 5)) ^ v634;
                      v637 = v636 ^ v635 ^ 0xAC987321;
                      v638 = (4991 * __ROR4__(v637, 3) - 219010071) ^ v636;
                      v639 = (24670 * __ROR4__(v638 - 133239679, 1) - __ROR4__(v638, 6)) ^ v637;
                      v640 = (__ROL4__(v639, 14) + 2033 * __ROL4__(v639 - 1419157410, 3)) ^ v638;
                      v641 = (4991 * __ROL4__(v640 - 1419157410, 15) - __ROR4__(v640, 14)) ^ v639;
                      v642 = (v641 >> 3) ^ (43881 * (v641 ^ 0x605E)) ^ v640;
                      v643 = v610 ^ __ROL4__(v642, 2) ^ (24670 * __ROL4__(v642 ^ 0x7F1137F, 4)) ^ v641;
                      v644 = v616 ^ v642;
                      *(v613 - 4) = v643;
                      v645 = __ROR4__(v643, 8);
                      *v613 = v644;
                      v646 = __ROR4__(v644, 8);
                      *(v613 - 5) = v645;
                      v647 = __ROR4__(v645, 8);
                      *(v613 - 1) = v646;
                      v648 = __ROR4__(v646, 8);
                      *(v613 - 6) = v647;
                      v649 = __ROR4__(v647, 8);
                      *(v613 - 2) = v648;
                      v650 = __ROR4__(v648, 8);
                      *(v613 - 7) = v649;
                      *(v613 - 3) = v650;
                      v612 = __ROR4__(v649, 8);
                      v611 = __ROR4__(v650, 8);
                      v610 = v617;
                      v616 = v618;
                      v613 += 8;
                      --v615;
                    }
                    while ( v615 );
                    v651 = 0LL;
                    v652 = 0LL;
                    v653 = v1252;
                    do
                    {
                      v654 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1252[v651]), v652);
                      v652 = v654;
                      v651 += 16LL;
                    }
                    while ( v651 < 0x1C90 );
                    v655 = _mm_xor_si128(v654, _mm_srli_si128(v654, 8));
                    v656 = _mm_xor_si128(v655, _mm_srli_si128(v655, 4));
                    v657 = _mm_xor_si128(v656, _mm_srli_si128(v656, 2));
                    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v657, _mm_srli_si128(v657, 1))) == 127LL )
                    {
                      v1584 = v1252;
                      v1585 = 7312LL;
                      v590 = 0;
                      if ( v1252 )
                        v1585 = 7312LL;
                      else
                        v653 = 0LL;
                      v658 = v1735;
                      v659 = 6LL;
                      do
                      {
                        for ( jj = 0; jj < 0x26; ++jj )
                        {
                          if ( v1286 == jj )
                            *v658 = v653;
                          v661 = -1LL;
                          do
                            ++v661;
                          while ( v653[v661] );
                          v653 += v661 + 1;
                        }
                        ++v658;
                        --v659;
                      }
                      while ( v659 );
                      v662 = MemoryAlloc(0x18uLL);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1586);
                      if ( v662 )
                      {
                        v1586 = v662;
                        *(_OWORD *)v662 = 0LL;
                        v662[2] = 0LL;
                        v663 = 0;
                        v1287 = 0;
                        v664 = v662;
                        v1253 = v662;
                        v665 = v1742;
                        v1407 = v1742;
                        v1392 = (void **)v662;
                        v1585 = 7312LL;
                        while ( 2 )
                        {
                          v666 = 0LL;
                          v667 = *v665;
                          v668 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
                          while ( v667 != *v668 )
                          {
                            v666 = (unsigned int)(v666 + 1);
                            ++v668;
                            if ( (unsigned int)v666 >= 6 )
                              goto LABEL_790;
                          }
                          v669 = v1735[v666];
                          v670 = -1LL;
                          do
                            ++v670;
                          while ( *(_BYTE *)(v669 + v670) );
                          v671 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1809851C0)(
                                   65001LL,
                                   0LL,
                                   v669,
                                   (unsigned int)(v670 + 1),
                                   0LL,
                                   0);
                          LODWORD(Size) = v671;
                          if ( !v671 )
                          {
                            v675 = GetLastError();
                            v590 = v675;
                            if ( v675 > 0 )
                              v590 = (unsigned __int16)v675 | 0x80070000;
                            if ( v590 >= 0 )
                              v590 = -2147467259;
                            goto LABEL_800;
                          }
                          v672 = MemoryAlloc(2LL * v671);
                          *v1253 = v672;
                          if ( !v672 )
                            goto LABEL_776;
                          v673 = -1LL;
                          do
                            ++v673;
                          while ( *(_BYTE *)(v669 + v673) );
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, LPVOID, _DWORD))off_1809851C0)(
                                                65001LL,
                                                0LL,
                                                v669,
                                                (unsigned int)(v673 + 1),
                                                v672,
                                                Size) )
                          {
                            v674 = GetLastError();
                            v590 = v674;
                            if ( v674 > 0 )
                              v590 = (unsigned __int16)v674 | 0x80070000;
                            if ( v590 >= 0 )
                              v590 = -2147467259;
                            goto LABEL_800;
                          }
                          v664 = v1253;
                          v663 = v1287;
LABEL_790:
                          v1287 = ++v663;
                          v665 = ++v1407;
                          v1253 = ++v664;
                          if ( v663 < 3 )
                            continue;
                          break;
                        }
                        v662 = 0LL;
                        v1586 = 0LL;
                        v1581 = v1392;
                        v1667 = v1351;
                      }
                      else
                      {
                        v662 = 0LL;
                        v1586 = 0LL;
LABEL_776:
                        v590 = -2147024882;
                      }
LABEL_800:
                      if ( v662 )
                      {
                        v608 = (const wchar_t *)v1375;
                        v676 = 3LL;
                        v1376 = 3LL;
                        v1585 = 7312LL;
                        do
                        {
                          v677 = (_WORD *)*v662;
                          if ( *v662 )
                          {
                            v678 = -1LL;
                            do
                              ++v678;
                            while ( v677[v678] );
                            memset(v677, 0, 2 * v678 + 2);
                            MemoryFree((void *)*v662);
                            v676 = v1376;
                          }
                          ++v662;
                          v1376 = --v676;
                        }
                        while ( v676 );
LABEL_752:
                        if ( v1584 )
                          memset(v1584, 0, v1585);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1586);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1584);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1583);
                        if ( v590 < 0 )
                          goto LABEL_927;
                        if ( v1581 )
                          v609 = v1581;
                        else
                          v609 = 0LL;
                        v1669 = *v609;
                        if ( v1581 )
                          v679 = v1581;
                        else
                          v679 = 0LL;
                        v1670 = v679[1];
                        if ( v1581 )
                        {
                          v680 = v1581;
                          v97 = 0LL;
                        }
                        else
                        {
                          v97 = 0LL;
                          v680 = 0LL;
                        }
                        v1671 = v680[2];
                        v1627 = 0LL;
                        LODWORD(v1627) = 16;
                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_180985268)(
                                              66LL,
                                              0LL,
                                              &v1627,
                                              0LL) )
                        {
                          v681 = GetLastError();
                          v590 = v681;
                          if ( v681 > 0 )
                            v590 = (unsigned __int16)v681 | 0x80070000;
                          if ( v590 >= 0 )
                            v590 = -2147467259;
                          v1668 = 0;
                          goto LABEL_928;
                        }
                        v1668 = BYTE4(v1627) & 1;
                        v1352 = 42;
                        if ( v1305 == 1 )
                        {
                          v1470 = 42;
                        }
                        else
                        {
                          if ( v1305 != 2 )
                          {
                            if ( v1305 == 3 )
                            {
                              v1470 = 225;
                              v1459 = 225;
                            }
                            goto LABEL_828;
                          }
                          v1470 = 15;
                        }
                        v1459 = 11;
LABEL_828:
                        v682 = 96;
                        v1288 = 96;
                        memset_0(v1731, 0, 0xDCuLL);
                        v1732 = 220;
                        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *))off_1809851E0)(
                                             0LL,
                                             0xFFFFFFFFLL,
                                             v1731) )
                        {
                          v682 = v1733;
                          *(_QWORD *)&v1626 = 0LL;
                          *((_QWORD *)&v1626 + 1) = v1734;
                          if ( v1733 < 0x60u )
                            v682 = 96;
                          v1288 = v682;
                        }
                        v683 = v608;
                        if ( v1305 == 1 )
                          v683 = lpModuleNameb;
                        memset_0(v1722, 0, 0x5CuLL);
                        v590 = 0;
                        v1377 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
                        if ( !v1377 )
                          goto LABEL_835;
                        v1722[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                           v1470,
                                           v682,
                                           72LL);
                        v1722[4] = 400;
                        v1723 = 5;
                        StringCchCopyW(&v1724, 32LL, v683);
                        v685 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1722);
                        v97 = 0LL;
                        if ( v685 )
                        {
                          v1672 = (const WCHAR *)v685;
                        }
                        else
                        {
                          v686 = GetLastError();
                          v590 = v686;
                          if ( v686 > 0 )
                            v590 = (unsigned __int16)v686 | 0x80070000;
                          if ( v590 >= 0 )
                            v590 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, size_t))off_180985260)(0LL, v1377);
                        if ( v590 < 0 )
                          goto LABEL_928;
                        if ( v1305 == 1 )
                          v608 = lpModuleNameb;
                        memset_0(v1725, 0, 0x5CuLL);
                        v590 = 0;
                        v687 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
                        if ( !v687 )
                        {
LABEL_835:
                          v684 = GetLastError();
                          v97 = 0LL;
                          v590 = v684;
                          if ( v684 > 0 )
                            v590 = (unsigned __int16)v684 | 0x80070000;
                          if ( v590 >= 0 )
                            v590 = -2147467259;
                          goto LABEL_928;
                        }
                        v1725[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                           v1459,
                                           v682,
                                           72LL);
                        v1725[4] = 400;
                        v1726 = 5;
                        StringCchCopyW(&v1727, 32LL, v608);
                        v688 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1725);
                        if ( v688 )
                        {
                          v1673 = (const WCHAR *)v688;
                        }
                        else
                        {
                          v689 = GetLastError();
                          v590 = v689;
                          if ( v689 > 0 )
                            v590 = (unsigned __int16)v689 | 0x80070000;
                          if ( v590 >= 0 )
                            v590 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, __int64))off_180985260)(0LL, v687);
                        v97 = 0LL;
                        if ( v590 < 0 )
                          goto LABEL_928;
                        v690 = 0;
                        if ( v1305 != 1 )
                        {
                          if ( v1305 == 2 )
                          {
                            LODWORD(v97) = SDWORD2(v1626) / 4;
                            v690 = 0;
LABEL_860:
                            *((_QWORD *)&v1687 + 1) = __PAIR64__(v690, v97);
                            if ( v1305 == 1 )
                            {
                              v692 = 150;
                              v1459 = 32;
                            }
                            else
                            {
                              if ( (unsigned int)(v1305 - 2) >= 2 )
                              {
                                v1352 = v1486;
                                v691 = v1486;
                                v692 = v1470;
                                goto LABEL_867;
                              }
                              v692 = 0;
                              v1352 = 0;
                              v1459 = 0;
                            }
                            v691 = 0;
                            v1470 = v692;
LABEL_867:
                            v693 = v97 - v692 - v691;
                            DWORD2(v1677) = v693;
                            DWORD2(v1676) = v693;
                            v694 = v1669;
                            v590 = 0;
                            lpModuleNamec = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_180985178)(
                                                       v1317,
                                                       v1672);
                            if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                                  v1317,
                                                  v694,
                                                  0xFFFFFFFFLL,
                                                  &v1676,
                                                  3152,
                                                  0LL) )
                              v590 = -2147467259;
                            if ( lpModuleNamec )
                              ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1317, lpModuleNamec);
                            if ( v590 >= 0 )
                            {
                              v695 = v1670;
                              v590 = 0;
                              lpModuleNamed = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_180985178)(
                                                         v1317,
                                                         v1673);
                              if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                                    v1317,
                                                    v695,
                                                    0xFFFFFFFFLL,
                                                    &v1677,
                                                    3152,
                                                    0LL) )
                                v590 = -2147467259;
                              if ( lpModuleNamed )
                                ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1317, lpModuleNamed);
                              if ( v590 >= 0 )
                              {
                                if ( (unsigned int)(v1305 - 2) <= 1 )
                                {
                                  v693 = DWORD2(v1677);
                                  if ( SDWORD2(v1676) > SDWORD2(v1677) )
                                    v693 = DWORD2(v1676);
                                }
                                if ( v1667 )
                                {
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1676,
                                    v693 + v691 - DWORD2(v1676),
                                    v1352);
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1677,
                                    v693 + v691 - DWORD2(v1677),
                                    v1459 + HIDWORD(v1676));
                                }
                                else
                                {
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1676, v1470, v1352);
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1677,
                                    v1470,
                                    v1459 + HIDWORD(v1676));
                                }
                                v588 = v1305;
                                if ( (unsigned int)(v1305 - 2) <= 1 )
                                {
                                  *((_QWORD *)&v1687 + 1) = __PAIR64__(HIDWORD(v1677), v693);
                                  v1675 = -5723992;
                                  goto LABEL_914;
                                }
                                if ( v1305 != 1 )
                                  goto LABEL_914;
                                v1675 = 0xFFFFFF;
                                memset_0(v1728, 0, 0x5CuLL);
                                v590 = 0;
                                v696 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(
                                         0LL,
                                         0LL,
                                         1027LL);
                                if ( v696 )
                                {
                                  v698 = v1288;
                                  v1728[0] = -(int)((__int64 (__fastcall *)(__int64, _QWORD))off_1809851B8)(11LL, v1288);
                                  v1728[4] = 400;
                                  v1729 = 5;
                                  StringCchCopyW(&v1730, 32LL, Srcf);
                                  v699 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1728);
                                  if ( v699 )
                                  {
                                    v1674 = v699;
                                  }
                                  else
                                  {
                                    v590 = GetLastError();
                                    v700 = v590 < 0;
                                    if ( v590 > 0 )
                                    {
                                      v590 = (unsigned __int16)v590 | 0x80070000;
                                      v700 = v590 < 0;
                                    }
                                    if ( !v700 )
                                      v590 = -2147467259;
                                  }
                                  ((void (__fastcall *)(_QWORD, __int64))off_180985260)(0LL, v696);
                                }
                                else
                                {
                                  v590 = GetLastError();
                                  v697 = v590 < 0;
                                  if ( v590 > 0 )
                                  {
                                    v590 = (unsigned __int16)v590 | 0x80070000;
                                    v697 = v590 < 0;
                                  }
                                  if ( !v697 )
                                  {
                                    v590 = -2147467259;
                                    v97 = 0LL;
LABEL_929:
                                    ((void (__fastcall *)(_QWORD, LPCWSTR))off_180985260)(0LL, v1317);
                                    goto LABEL_930;
                                  }
                                  v698 = v1288;
                                }
                                if ( v590 >= 0 )
                                {
                                  v1680 = v693;
                                  v701 = v1671;
                                  v590 = 0;
                                  v702 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_180985178)(v1317, v1674);
                                  if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1809851D8)(
                                                        v1317,
                                                        v701,
                                                        0xFFFFFFFFLL,
                                                        &v1678,
                                                        1120,
                                                        0LL) )
                                    v590 = -2147467259;
                                  if ( v702 )
                                    ((void (__fastcall *)(LPCWSTR, __int64))off_180985178)(v1317, v702);
                                  v97 = 0LL;
                                  if ( v590 < 0 )
                                    goto LABEL_928;
                                  v703 = v1680 + 24;
                                  if ( (int)(v1680 + 24) < 90 )
                                    v703 = 90;
                                  v1680 = v703;
                                  v1681 = 32;
                                  v1678 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1678,
                                            v698,
                                            96LL);
                                  v1679 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1679,
                                            v698,
                                            96LL);
                                  v1680 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1680,
                                            v698,
                                            96LL);
                                  v1681 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1681,
                                            v698,
                                            96LL);
                                  if ( v1667 )
                                  {
                                    v704 = (unsigned int)v1676;
                                    if ( (int)v1676 >= (int)v1677 )
                                      v704 = (unsigned int)v1677;
                                  }
                                  else
                                  {
                                    v705 = DWORD2(v1676);
                                    if ( SDWORD2(v1676) <= SDWORD2(v1677) )
                                      v705 = DWORD2(v1677);
                                    v704 = v1678 + v705 - v1680;
                                  }
                                  ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_180985250)(
                                    &v1678,
                                    v704,
                                    (unsigned int)(HIDWORD(v1677) + 36));
                                  v588 = v1305;
LABEL_914:
                                  v706 = v1667;
                                  v707 = HIDWORD(v1687);
                                  v708 = DWORD2(v1687);
                                  switch ( v588 )
                                  {
                                    case 1:
                                      v97 = 0LL;
                                      *(_QWORD *)&v1687 = 0LL;
                                      break;
                                    case 2:
                                      v1699 = 0LL;
                                      v1700 = 0LL;
                                      v1701 = 0LL;
                                      v710 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180985248)(0LL, 1LL);
                                      LODWORD(v1699) = 40;
                                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_180985208)(
                                                           v710,
                                                           &v1699) )
                                      {
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1700 + 4);
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1700 + 12);
                                        if ( v706 )
                                          v711 = DWORD1(v1700) + 5 * HIDWORD(v1700) / 100;
                                        else
                                          v711 = 95 * (HIDWORD(v1700) - v708) / 100;
                                        LODWORD(v1687) = v711;
                                        DWORD1(v1687) = 95 * ((int)v1701 - v707) / 100;
                                      }
                                      break;
                                    case 3:
                                      v1696 = 0LL;
                                      v1697 = 0LL;
                                      v1698 = 0LL;
                                      v709 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180985248)(0LL, 1LL);
                                      LODWORD(v1696) = 40;
                                      v97 = 0LL;
                                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_180985208)(
                                                           v709,
                                                           &v1696) )
                                      {
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1697 + 4);
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1697 + 12);
                                        LODWORD(v1687) = 50 * (HIDWORD(v1697) - v708) / 100;
                                        DWORD1(v1687) = 50 * ((int)v1698 - v707) / 100;
                                      }
                                      break;
                                    default:
                                      v97 = 0LL;
                                      break;
                                  }
                                  v590 = 0;
                                  goto LABEL_929;
                                }
                              }
                            }
LABEL_927:
                            v97 = 0LL;
LABEL_928:
                            v588 = v1305;
                            goto LABEL_929;
                          }
                          if ( v1305 != 3 )
                            goto LABEL_860;
                        }
                        LODWORD(v97) = DWORD2(v1626);
                        v690 = HIDWORD(v1626);
                        goto LABEL_860;
                      }
                    }
                    else
                    {
                      v590 = -1073425151;
                      MemoryFree(v1252);
                      v1585 = 0LL;
                    }
                  }
                  else
                  {
                    v590 = -2147024882;
                  }
                }
                v608 = (const wchar_t *)v1375;
                goto LABEL_752;
              }
              v591 = (char *)v594;
              if ( v1486 )
              {
                for ( kk = 0; kk < v1486; ++kk )
                {
                  *v594 = ((__int64 (__fastcall *)(char *, _QWORD))off_1809851B0)(v593, 0LL);
                  v596 = -1LL;
                  do
                    ++v596;
                  while ( *(_WORD *)&v593[2 * v596] );
                  v593 += 2 * v596 + 2;
                  ++v594;
                }
                v590 = 0;
              }
              *v594 = 1033;
              v1583 = v591;
              v1350 = v1486 + 1;
            }
            else
            {
              v590 = -2147024882;
            }
            v1588 = 0LL;
            goto LABEL_733;
          }
          v529 = g_WarbirdSecureFunctionsRefCount;
LABEL_709:
          g_WarbirdSecureFunctionsRefCount = v529 + 1;
          goto LABEL_710;
        }
      }
      else
      {
        v519 = 0;
      }
      v526 = GetProcessHeap();
      HeapFree(v526, 0, v514);
      goto LABEL_655;
    }
    HIDWORD(v1614) = dwBytes;
    v114 = dwBytes;
    v115 = GetProcessHeap();
    v116 = HeapAlloc(v115, 8u, v114);
    if ( !v116 )
    {
      v85 = -1073741801;
      goto LABEL_99;
    }
    lpMem = v116;
    LODWORD(v1614) = 0;
    v117 = v116;
    pcchLength[1] = (size_t)v116;
    v1231 = v86;
    LODWORD(Size) = 8;
    v1248 = v84;
    v118 = RtlULongLongAdd((unsigned __int64)v116, 4LL, (unsigned __int64 *)&v1609);
    v85 = v118;
    LODWORD(v1485) = v118;
    if ( v118 < 0 )
    {
      v89 = v82;
      goto LABEL_101;
    }
    if ( v117 + 2 > (_DWORD *)((char *)v117 + HIDWORD(v1614)) )
    {
LABEL_143:
      v85 = -1073741789;
      goto LABEL_99;
    }
    *v117 = 4;
    *v1609 = 0;
    v120 = v1614 + 1;
    LODWORD(v1614) = v1614 + 1;
    if ( !v119 )
      goto LABEL_140;
    if ( lpMem )
    {
      v123 = (int *)lpMem;
      v1556 = (int *)lpMem;
      v1340 = 0;
      if ( v120 )
      {
        do
        {
          v85 = RtlUIntAdd(4u, *v123, &v1547);
          LODWORD(v1485) = v85;
          if ( v85 < 0 )
            goto LABEL_118;
          v85 = RtlULongLongAdd((unsigned __int64)v123, v1547, (unsigned __int64 *)&v1556);
          LODWORD(v1485) = v85;
          if ( v85 < 0 )
            goto LABEL_118;
          ++v1340;
          v123 = v1556;
        }
        while ( v1340 < v125 );
        v1231 = v86;
        LODWORD(Size) = v124;
        v1248 = v84;
      }
      v85 = RtlULongLongAdd((unsigned __int64)v123, 4LL, (unsigned __int64 *)&v1619);
      LODWORD(v1485) = v85;
      if ( v85 >= 0 )
      {
        if ( (char *)v123 + v126 + 4 > (char *)lpMem + HIDWORD(v1614) )
          goto LABEL_143;
        *v123 = v126;
        memcpy_0(v1619, v84, v126);
        v121 = 4;
        v122 = v1614 + 1;
        LODWORD(v1614) = v1614 + 1;
        goto LABEL_158;
      }
    }
    else
    {
      v85 = RtlUIntAdd(4u, v119, (unsigned int *)&v1546);
      LODWORD(v1485) = v85;
      if ( v85 < 0 )
        goto LABEL_118;
      v85 = RtlUIntAdd(HIDWORD(v1614), v1546, (unsigned int *)&v1614 + 1);
      LODWORD(v1485) = v85;
      if ( v85 >= 0 )
      {
        v122 = v1614 + 1;
        LODWORD(v1614) = v1614 + 1;
LABEL_158:
        v127 = Size;
        if ( !v86 )
        {
          if ( (_DWORD)Size )
            goto LABEL_140;
LABEL_162:
          if ( lpMem )
          {
            v130 = (int *)lpMem;
            v1557 = (int *)lpMem;
            v1341 = 0;
            if ( v122 )
            {
              do
              {
                v85 = RtlUIntAdd(4u, *v130, &v1549);
                LODWORD(v1485) = v85;
                if ( v85 < 0 )
                  goto LABEL_118;
                v85 = RtlULongLongAdd(v131, v1549, (unsigned __int64 *)&v1557);
                LODWORD(v1485) = v85;
                if ( v85 < 0 )
                  goto LABEL_118;
                ++v1341;
                v130 = v1557;
              }
              while ( v1341 < v132 );
              v1231 = v86;
              v1248 = v84;
            }
            v85 = RtlULongLongAdd((unsigned __int64)v130, 4LL, (unsigned __int64 *)&v1620);
            LODWORD(v1485) = v85;
            if ( v85 >= 0 )
            {
              if ( (char *)v133 + v127 + 4 > (char *)lpMem + HIDWORD(v1614) )
                goto LABEL_143;
              *v133 = v127;
              if ( v86 )
                memcpy_0(v1620, v86, v127);
              v128 = 1LL;
              v129 = v1614 + 1;
              LODWORD(v1614) = v1614 + 1;
LABEL_177:
              if ( lpMem )
              {
                v136 = (int *)lpMem;
                v1558 = (int *)lpMem;
                v1342 = 0;
                if ( v129 )
                {
                  do
                  {
                    v85 = RtlUIntAdd(4u, *v136, &v1492);
                    LODWORD(v1485) = v85;
                    if ( v85 < 0 )
                      goto LABEL_118;
                    v85 = RtlULongLongAdd((unsigned __int64)v136, v1492, (unsigned __int64 *)&v1558);
                    LODWORD(v1485) = v85;
                    if ( v85 < 0 )
                      goto LABEL_118;
                    ++v1342;
                    v136 = v1558;
                  }
                  while ( v1342 < v137 );
                  v1231 = v86;
                  v1248 = v84;
                }
                v85 = RtlULongLongAdd((unsigned __int64)v136, 4LL, (unsigned __int64 *)&v1621);
                LODWORD(v1485) = v85;
                if ( v85 >= 0 )
                {
                  if ( v136 + 3 > (int *)((char *)lpMem + HIDWORD(v1614)) )
                    goto LABEL_143;
                  *v136 = 8;
                  *v1621 = v1406;
                  v135 = v1614;
                  v128 = (unsigned int)(v138 - 3);
LABEL_180:
                  LODWORD(v1614) = v128 + v135;
                  if ( StringCchLengthW(L"Shell-ConfigureChatIcon-State", v134, &v1559) < 0 )
                  {
                    v85 = -1073741762;
                    goto LABEL_99;
                  }
                  v85 = RtlULongLongAdd(v1559, v128, &v1559);
                  LODWORD(v1485) = v85;
                  if ( v85 >= 0 )
                  {
                    if ( 2 * (_DWORD)v1559 )
                    {
                      if ( !lpMem )
                      {
                        v85 = RtlUIntAdd(v140, 2 * (int)v1559, (unsigned int *)&v1493);
                        LODWORD(v1485) = v85;
                        if ( v85 >= 0 )
                        {
                          v85 = RtlUIntAdd(HIDWORD(v1614), v1493, (unsigned int *)&v1614 + 1);
                          LODWORD(v1485) = v85;
                          v139 = v1614;
                          if ( v85 >= 0 )
                          {
                            v139 = v128 + v1614;
                            LODWORD(v1614) = v128 + v1614;
                            v85 = 0;
                            LODWORD(v1485) = 0;
                          }
                        }
                        goto LABEL_208;
                      }
                      v141 = (int *)lpMem;
                      v1560 = (int *)lpMem;
                      if ( v139 )
                      {
                        do
                        {
                          v85 = RtlUIntAdd(4u, *v141, &v1514);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_208;
                          v85 = RtlULongLongAdd((unsigned __int64)v141, v1514, (unsigned __int64 *)&v1560);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_208;
                          v141 = v1560;
                        }
                        while ( v142 + 1 < v139 );
                      }
                      v85 = RtlULongLongAdd((unsigned __int64)v141, 4LL, (unsigned __int64 *)&v1622);
                      LODWORD(v1485) = v85;
                      if ( v85 < 0 )
                        goto LABEL_208;
                      if ( (char *)v141 + v143 + 4 <= (char *)lpMem + HIDWORD(v1614) )
                      {
                        *v141 = v143;
                        memcpy_0(v1622, L"Shell-ConfigureChatIcon-State", (unsigned int)v143);
                        v139 = v1614 + 1;
                        LODWORD(v1614) = v1614 + 1;
                        goto LABEL_208;
                      }
                      v85 = -1073741789;
                    }
                    else
                    {
                      v85 = -1073741811;
                    }
                    LODWORD(v1485) = v85;
                  }
LABEL_208:
                  v89 = v82;
                  if ( v85 < 0 )
                    goto LABEL_101;
                  if ( lpMem )
                  {
                    v148 = (int *)lpMem;
                    v1561 = (int *)lpMem;
                    v1343 = 0;
                    if ( v139 )
                    {
                      do
                      {
                        v85 = RtlUIntAdd(4u, *v148, &v1495);
                        LODWORD(v1485) = v85;
                        if ( v85 < 0 )
                          goto LABEL_118;
                        v85 = RtlULongLongAdd((unsigned __int64)v148, v1495, (unsigned __int64 *)&v1561);
                        LODWORD(v1485) = v85;
                        if ( v85 < 0 )
                          goto LABEL_118;
                        ++v1343;
                        v148 = v1561;
                      }
                      while ( v1343 < v149 );
                      v1231 = v86;
                      v1248 = v84;
                    }
                    v85 = RtlULongLongAdd((unsigned __int64)v148, 4LL, (unsigned __int64 *)&v1623);
                    LODWORD(v1485) = v85;
                    v145 = 0LL;
                    if ( v85 >= 0 )
                    {
                      if ( v148 + 2 > (int *)((char *)lpMem + HIDWORD(v1614)) )
                        goto LABEL_143;
                      *v148 = v144;
                      *v1623 = v82;
                      v146 = v1614;
                      goto LABEL_212;
                    }
                  }
                  else
                  {
                    v85 = RtlUIntAdd(4u, 4, (unsigned int *)&v1494);
                    LODWORD(v1485) = v85;
                    if ( v85 < 0 )
                      goto LABEL_101;
                    v85 = RtlUIntAdd(HIDWORD(v1614), v1494, (unsigned int *)&v1614 + 1);
                    LODWORD(v1485) = v85;
                    v146 = v1614;
                    if ( v85 >= 0 )
                    {
LABEL_212:
                      v147 = v146 + 1;
                      LODWORD(v1614) = v147;
                      if ( lpMem == v145 )
                      {
                        v85 = RtlUIntAdd(v144, v144, (unsigned int *)&v1496);
                        LODWORD(v1485) = v85;
                        if ( v85 < 0 )
                          goto LABEL_100;
                        v85 = RtlUIntAdd(HIDWORD(v1614), v1496, (unsigned int *)&v1614 + 1);
                        LODWORD(v1485) = v85;
                        if ( v85 >= 0 )
                        {
                          LODWORD(v1614) = v1614 + 1;
                          goto LABEL_235;
                        }
                      }
                      else
                      {
                        v151 = (int *)lpMem;
                        v1562 = (int *)lpMem;
                        v1344 = (unsigned int)v145;
                        if ( v147 )
                        {
                          do
                          {
                            v85 = RtlUIntAdd(4u, *v151, &v1497);
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_118;
                            v85 = RtlULongLongAdd((unsigned __int64)v151, v1497, (unsigned __int64 *)&v1562);
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_118;
                            ++v1344;
                            v151 = v1562;
                          }
                          while ( v1344 < v152 );
                          v1231 = v86;
                          v1248 = v84;
                          v144 = 4LL;
                        }
                        v85 = RtlULongLongAdd((unsigned __int64)v151, v144, (unsigned __int64 *)&v1624);
                        LODWORD(v1485) = v85;
                        if ( v85 >= 0 )
                        {
                          if ( v151 + 2 > (int *)((char *)lpMem + HIDWORD(v1614)) )
                            goto LABEL_143;
                          *v151 = v150;
                          *v1624 = v150;
                          LODWORD(v1614) = v1614 + 1;
LABEL_235:
                          v85 = RtlUIntAdd(v150, v150, &v1498);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_100;
                          v154 = v1498;
                          v1499 = v1498;
                          v85 = RtlUIntAdd(v153, 8, (unsigned int *)&v1500);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_100;
                          v85 = RtlUIntAdd(v154, v1500, &v1499);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_247;
                          v85 = RtlUIntAdd(v155, v155, (unsigned int *)&v1501);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_100;
                          v85 = RtlUIntAdd(v1499, v1501, &v1499);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_247;
                          v85 = RtlUIntAdd(v156, v156, (unsigned int *)&v1508);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_100;
                          v85 = RtlUIntAdd(v1499, v1508, &v1499);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_247;
                          v85 = RtlUIntAdd(v157, v157, (unsigned int *)&v1502);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_100;
                          v85 = RtlUIntAdd(v1499, v1502, &v1499);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_247;
                          v85 = RtlUIntAdd(v158, v158, (unsigned int *)&v1503);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_100;
                          v85 = RtlUIntAdd(v1499, v1503, &v1499);
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                          {
LABEL_247:
                            v89 = v82;
                            goto LABEL_101;
                          }
                          v160 = v1499;
                          v1345 = v1499;
                          v161 = v159;
                          v1388 = (SIZE_T)v159;
                          v1481 = v159;
                          v1484 = (SIZE_T)v159;
                          LODWORD(Size) = (_DWORD)v159;
                          v1483 = v159;
                          v1487 = (SIZE_T)v159;
                          v1421 = (WCHAR *)v159;
                          v1293 = __rdtsc();
                          v1504 = 8;
                          v164 = RtlUIntAdd(8u, SHIDWORD(v1614), &v1504);
                          if ( v164 >= 0 )
                          {
                            v165 = (v1504 + 7) & 0xFFFFFFF8;
                            if ( v165 < v1504 )
                            {
                              v85 = -805306219;
LABEL_251:
                              LODWORD(v1485) = v85;
                              v89 = v1284;
                              goto LABEL_101;
                            }
                            v1504 = (v1504 + 7) & 0xFFFFFFF8;
                            v1452 = v160;
                            v166 = v165;
                            v167 = GetProcessHeap();
                            v168 = (WCHAR *)HeapAlloc(v167, 8u, v166);
                            v1308 = v168;
                            if ( !v168 )
                            {
                              v85 = -805306345;
                              LODWORD(v1485) = -805306345;
                              v89 = v1284;
                              goto LABEL_101;
                            }
                            v1563[0] = v168;
                            *(_DWORD *)v168 = v1614;
                            v164 = RtlULongLongAdd((unsigned __int64)v168, 4LL, (unsigned __int64 *)v1563);
                            v1371 = v169;
                            v160 = v1452;
                            v1345 = v1452;
                            v1231 = v86;
                            v1248 = v84;
                            if ( v164 < 0
                              || (v170 = v1563[0],
                                  *(_DWORD *)v1563[0] = HIDWORD(v1614),
                                  v164 = RtlULongLongAdd((unsigned __int64)v170, 4LL, (unsigned __int64 *)v1563),
                                  v1371 = v171,
                                  v1345 = v1452,
                                  v1231 = v86,
                                  v1248 = v84,
                                  v164 < 0) )
                            {
                              v172 = GetProcessHeap();
                              HeapFree(v172, 0, v1371);
                              v162 = (unsigned int)v161;
                            }
                            else
                            {
                              *(_QWORD *)&v171[v1504 - 8] = v1293;
                              memcpy_0(v1563[0], lpMem, HIDWORD(v1614));
                              v161 = (unsigned __int8 *)v1308;
                              v1388 = (SIZE_T)v1308;
                              v162 = v1504;
                              v1345 = v1452;
                              v1231 = v86;
                              v1248 = v84;
                            }
                            v163 = 0LL;
                          }
                          v85 = v164 | 0x10000000;
                          LODWORD(v1485) = v85;
                          if ( v85 < 0 )
                            goto LABEL_370;
                          v1372 = v163;
                          if ( !v161 )
                          {
                            v85 = -805306355;
                            goto LABEL_251;
                          }
                          v173 = v162;
                          v1309 = (LPCWSTR)v162;
                          if ( !v162 || (v1358 = v162 + 8, v174 = (char *)MemoryAlloc(v162 + 8LL), (Src = v174) == 0LL) )
                          {
                            v85 = -805306367;
                            LODWORD(v1485) = -805306367;
                            goto LABEL_371;
                          }
                          v175 = 0;
                          v1229 = 0;
                          v176 = 0LL;
                          if ( v173 )
                          {
                            do
                              v175 ^= v161[v176++];
                            while ( v176 < v173 );
                            v1229 = v175;
                          }
                          v1682 = 0xC81ECB17B1B54A58uLL;
                          v177 = v161;
                          v178 = v174;
                          v1294 = v174;
                          v179 = 0;
                          v180 = -1;
                          v1453 = 0;
                          LODWORD(v1485) = 0;
                          v181 = v173 & 7;
                          if ( (v173 & 7) != 0 )
                          {
                            v182 = 0;
                            v183 = 0;
                            v1461 = 0;
                            v184 = 56;
                            do
                            {
                              v185 = *v177++;
                              if ( v183 >= 4 )
                                v182 |= v185 << v184;
                              else
                                v179 |= v185 << (v184 - 32);
                              v1453 = v182;
                              LODWORD(v1485) = v179;
                              v183 = v1461 + 1;
                              v1461 = v183;
                              v184 -= 8;
                            }
                            while ( (int)v183 < (int)v181 );
                            v179 ^= 0xB17A307A;
                            v186 = v182 ^ 0x42F6B18D;
                            v187 = v179;
                            v188 = v186;
                            v1462 = 0;
                            v1345 = v160;
                            v1231 = v86;
                            v1248 = v84;
                            v1388 = (SIZE_T)v161;
                            v189 = v1294;
                            do
                            {
                              v1295 = v189 + 1;
                              if ( v1462 >= 4 )
                              {
                                v188 = __ROL4__(v188, 8);
                                v190 = v188;
                              }
                              else
                              {
                                v187 = __ROL4__(v187, 8);
                                v190 = v187;
                              }
                              *v189 = v190;
                              ++v1462;
                              ++v189;
                            }
                            while ( v1462 < (int)v181 );
                            v178 = v1295;
                            v175 = v1229;
                            v160 = v1345;
                            v173 = (unsigned __int64)v1309;
                            if ( v181 <= 4 )
                            {
                              v180 = 0;
                              if ( v181 >= 4 )
                                goto LABEL_283;
                              v179 = v179 >> (8 * (4 - v181)) << (8 * (4 - v181));
                            }
                            else
                            {
                              v180 = v186 >> (8 * (8 - v181)) << (8 * (8 - v181));
                            }
                            v178 = v1295;
                          }
LABEL_283:
                          v191 = v173 >> 3;
                          if ( v173 >> 3 )
                          {
                            v1463 = WORD1(v1682);
                            v192 = WORD2(v1682);
                            v1296 = HIWORD(v1682);
                            v193 = v178 + 7;
                            v194 = v177 + 2;
                            v195 = v1453;
                            v196 = v1485;
                            do
                            {
                              v197 = v194[1] | ((*v194 | ((*(v194 - 1) | (*(v194 - 2) << 8)) << 8)) << 8);
                              v198 = v194[5] | ((v194[4] | ((v194[3] | (v194[2] << 8)) << 8)) << 8);
                              v199 = v198 ^ v180;
                              v194 += 8;
                              v200 = v197 ^ HIDWORD(v1682) ^ (v199 - 19032) ^ v179;
                              v201 = (__ROR4__(v200, 7) + WORD1(v1682) * __ROR4__(HIDWORD(v1682) ^ v200, 15)) ^ v199;
                              v202 = (v192 * __ROR4__(v201 - 1313519016, 9) - __ROR4__(v201, 10)) ^ v200;
                              v203 = (__ROL4__(v202, 5) + HIWORD(v1682) * __ROL4__(v192 ^ v202, 4)) ^ v201;
                              v204 = (HIDWORD(v1682) - (v203 ^ 0xB1B54A58)) ^ v202;
                              v205 = (WORD1(v1682) * (v204 - 19032) - (v204 >> 6)) ^ v203;
                              v206 = (19032 * (v192 ^ __ROR4__(v205, 15))) ^ v204;
                              v207 = (v192 * (HIWORD(v1682) + __ROR4__(~v206, 3))) ^ v205;
                              v208 = (v207 - HIDWORD(v1682) - 19032) ^ v206;
                              v209 = (v1463 * (v1296 ^ v208)) ^ __ROR4__(v208, 10) ^ v207;
                              v210 = __ROR4__(v209, 3) ^ (v192 * __ROL4__(v209 ^ 0x4A58, 6)) ^ v208;
                              v211 = (19032 * (__ROR4__(v210, 15) - HIWORD(v1682))) ^ v209;
                              v212 = (v211 >> 15) ^ (19032 * __ROL4__(v211 - v192, 3)) ^ (v211 >> 1) ^ (19032 * (HIWORD(v1682) ^ v211)) ^ v210;
                              v213 = (WORD1(v1682) * (v212 - v192) - (v212 >> 13)) ^ v211;
                              v214 = __ROR4__(v213, 11) ^ (v192 * __ROR4__(-1313519016 - v213, 9)) ^ v212;
                              v215 = (v214 - HIWORD(v1682) + 1313519016) ^ v213;
                              v216 = (19032 * (v215 ^ WORD1(v1682)) - __ROR4__(v215, 7)) ^ v214;
                              v217 = (WORD1(v1682) * __ROL4__(v216 ^ HIWORD(v1682), 4) - __ROR4__(v216, 16)) ^ v215;
                              v218 = (__ROR4__(v217, 4) + v192 * __ROR4__(-1313519016 - v217, 10)) ^ v216;
                              v219 = __ROR4__(v218, 9) ^ (HIWORD(v1682) * __ROR4__(v218 + 1313519016, 4)) ^ v217;
                              v220 = (19032 * __ROL4__(v219 ^ HIDWORD(v1682), 8) - __ROL4__(v219, 2)) ^ v218;
                              v221 = (WORD1(v1682) * __ROR4__(HIDWORD(v1682) - v220, 11) - __ROR4__(v220, 12)) ^ v219;
                              v222 = (v221 >> 8) ^ (v192 * (v221 ^ WORD1(v1682))) ^ v220;
                              v223 = v222 ^ HIDWORD(v1682) ^ v221 ^ 0xB1B54A58;
                              v224 = v196 ^ v222;
                              v225 = v195 ^ v223;
                              *(v193 - 4) = v224;
                              v226 = __ROR4__(v224, 8);
                              *v193 = v225;
                              v227 = __ROR4__(v225, 8);
                              *(v193 - 5) = v226;
                              v228 = __ROR4__(v226, 8);
                              *(v193 - 1) = v227;
                              v229 = __ROR4__(v227, 8);
                              *(v193 - 6) = v228;
                              v230 = __ROR4__(v228, 8);
                              *(v193 - 2) = v229;
                              v231 = __ROR4__(v229, 8);
                              *(v193 - 7) = v230;
                              *(v193 - 3) = v231;
                              v179 = __ROR4__(v230, 8);
                              v180 = __ROR4__(v231, 8);
                              v196 = v197;
                              v195 = v198;
                              v193 += 8;
                              --v191;
                            }
                            while ( v191 );
                            v175 = v1229;
                            v84 = v1248;
                            v86 = v1231;
                            v161 = (unsigned __int8 *)v1388;
                            v160 = v1345;
                            v173 = (unsigned __int64)v1309;
                          }
                          *(_QWORD *)&Src[v173] = v175;
                          v1563[4] = (void *)160;
                          v232 = GetProcessHeap();
                          v233 = HeapAlloc(v232, 8u, 0x30uLL);
                          v1389 = v233;
                          if ( !v233 )
                          {
                            v234 = -1073741801;
LABEL_289:
                            v235 = (const void **)v1481;
LABEL_290:
                            v1481 = v235;
                            v236 = GetProcessHeap();
                            HeapFree(v236, 0, Src);
                            v237 = v1372;
                            if ( v1372 )
                            {
                              Srca = (void *)v1372[1];
                              if ( Srca )
                              {
                                v238 = GetProcessHeap();
                                HeapFree(v238, 0, Srca);
                                v237 = v1372;
                                v1372[1] = 0LL;
                              }
                              Srcb = (void *)v237[3];
                              if ( Srcb )
                              {
                                v239 = GetProcessHeap();
                                HeapFree(v239, 0, Srcb);
                                v237 = v1372;
                                v1372[3] = 0LL;
                              }
                              Srcc = (void *)v237[5];
                              if ( Srcc )
                              {
                                v240 = GetProcessHeap();
                                HeapFree(v240, 0, Srcc);
                                v1372[5] = 0LL;
                              }
                              v241 = GetProcessHeap();
                              HeapFree(v241, 0, v1372);
                              v1481 = v235;
                            }
                            v85 = v234 | 0x10000000;
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_370;
                            v1232 = v235;
                            LODWORD(v1505) = 4;
                            v244 = RtlUIntAdd(4u, *(_DWORD *)v235, (unsigned int *)&v1505);
                            if ( v244 >= 0 )
                            {
                              v244 = RtlUIntAdd(v1505, v243, (unsigned int *)&v1505);
                              if ( v244 >= 0 )
                              {
                                v244 = RtlUIntAdd(v1505, *((_DWORD *)v235 + 4), (unsigned int *)&v1505);
                                if ( v244 >= 0 )
                                {
                                  v244 = RtlUIntAdd(v1505, v245, (unsigned int *)&v1505);
                                  if ( v244 >= 0 )
                                  {
                                    v244 = RtlUIntAdd(v1505, *((_DWORD *)v235 + 8), (unsigned int *)&v1505);
                                    if ( v244 >= 0 )
                                    {
                                      v1464 = v1505;
                                      v257 = v1505;
                                      v258 = GetProcessHeap();
                                      v259 = HeapAlloc(v258, 8u, v257);
                                      v1249 = v259;
                                      if ( !v259 )
                                      {
LABEL_359:
                                        v85 = -805306345;
                                        goto LABEL_465;
                                      }
                                      v1564 = v259;
                                      *v259 = *(_DWORD *)v1232;
                                      v244 = RtlULongLongAdd((unsigned __int64)v259, 4LL, (unsigned __int64 *)&v1564);
                                      v1390 = v261;
                                      v235 = v260;
                                      v1481 = v260;
                                      if ( v244 < 0 )
                                        goto LABEL_327;
                                      memcpy_0(v1564, v260[1], *(unsigned int *)v260);
                                      v244 = RtlULongLongAdd(
                                               (unsigned __int64)v1564,
                                               *(unsigned int *)v235,
                                               (unsigned __int64 *)&v1564);
                                      v1390 = v1249;
                                      v1481 = v235;
                                      if ( v244 < 0 )
                                        goto LABEL_327;
                                      v262 = v1564;
                                      *(_DWORD *)v1564 = *((_DWORD *)v235 + 4);
                                      v244 = RtlULongLongAdd((unsigned __int64)v262, 4LL, (unsigned __int64 *)&v1564);
                                      v1390 = v263;
                                      v1481 = v235;
                                      if ( v244 < 0 )
                                        goto LABEL_327;
                                      memcpy_0(v1564, v235[3], *((unsigned int *)v235 + 4));
                                      v244 = RtlULongLongAdd(
                                               (unsigned __int64)v1564,
                                               *((unsigned int *)v235 + 4),
                                               (unsigned __int64 *)&v1564);
                                      v1390 = v1249;
                                      v1481 = v235;
                                      if ( v244 < 0 )
                                        goto LABEL_327;
                                      v264 = v1564;
                                      *(_DWORD *)v1564 = *((_DWORD *)v235 + 8);
                                      v244 = RtlULongLongAdd((unsigned __int64)v264, 4LL, (unsigned __int64 *)&v1564);
                                      v1390 = v265;
                                      v1481 = v235;
                                      if ( v244 < 0
                                        || (memcpy_0(v1564, v235[5], *((unsigned int *)v235 + 8)),
                                            v244 = RtlULongLongAdd(
                                                     (unsigned __int64)v1564,
                                                     *((unsigned int *)v235 + 8),
                                                     (unsigned __int64 *)&v1564),
                                            v1390 = v1249,
                                            v1481 = v235,
                                            v242 = v1345,
                                            v244 < 0) )
                                      {
LABEL_327:
                                        v266 = GetProcessHeap();
                                        HeapFree(v266, 0, v1390);
                                        v242 = v1345;
                                      }
                                      else
                                      {
                                        v1484 = (SIZE_T)v1249;
                                        LODWORD(Size) = v1464;
                                        v1481 = v235;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            v85 = v244 | 0x10000000;
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_370;
                            v1506 = 8;
                            v267 = RtlUIntAdd(8u, v242, &v1506);
                            v85 = v267 | 0x10000000;
                            LODWORD(v1485) = v267 | 0x10000000;
                            if ( v267 < 0 )
                              goto LABEL_370;
                            v270 = (v1506 + 7) & 0xFFFFFFF8;
                            if ( v270 < v1506 )
                            {
                              v85 = -1073741675;
LABEL_465:
                              LODWORD(v1485) = v85;
                              goto LABEL_370;
                            }
                            v1507 = (v1506 + 7) & 0xFFFFFFF8;
                            v1484 = v269;
                            v1481 = v235;
                            v85 = RtlUIntAdd(v270, v268, &v1507);
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_370;
                            v1481 = v235;
                            v1484 = v271;
                            if ( !lpMem || (v1481 = v235, v1484 = v271, (unsigned int)v1614 <= 1) )
                            {
LABEL_335:
                              v85 = -1073741811;
                              goto LABEL_465;
                            }
                            v272 = lpMem;
                            v1565 = lpMem;
                            do
                            {
                              v85 = RtlULongLongAdd((unsigned __int64)v272, 4LL, (unsigned __int64 *)&v1565);
                              LODWORD(v1485) = v85;
                              if ( v85 < 0 )
                                goto LABEL_370;
                              v85 = RtlULongLongAdd((unsigned __int64)v1565, v273, (unsigned __int64 *)&v1565);
                              LODWORD(v1485) = v85;
                              if ( v85 < 0 )
                                goto LABEL_370;
                              v272 = v1565;
                            }
                            while ( v274 == -1 );
                            v1297 = *v1565;
                            v85 = RtlULongLongAdd((unsigned __int64)v1565, 4LL, (unsigned __int64 *)&v1565);
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_370;
                            if ( !lpMem || (unsigned int)v1614 <= 2 )
                              goto LABEL_335;
                            v275 = lpMem;
                            v1566 = lpMem;
                            do
                            {
                              v85 = RtlULongLongAdd((unsigned __int64)v275, 4LL, (unsigned __int64 *)&v1566);
                              LODWORD(v1485) = v85;
                              if ( v85 < 0 )
                                goto LABEL_370;
                              v85 = RtlULongLongAdd((unsigned __int64)v1566, v276, (unsigned __int64 *)&v1566);
                              LODWORD(v1485) = v85;
                              if ( v85 < 0 )
                                goto LABEL_370;
                              v275 = v1566;
                            }
                            while ( (unsigned int)(v277 + 1) < 2 );
                            v85 = RtlULongLongAdd((unsigned __int64)v1566, 4LL, (unsigned __int64 *)&v1566);
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_370;
                            dwBytes_4 = v278;
                            v85 = RtlUIntAdd(v278, v1507, &dwBytes_4);
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_370;
                            v85 = RtlUIntAdd(dwBytes_4, v279, &dwBytes_4);
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_370;
                            v85 = RtlUIntAdd(dwBytes_4, v1297, &dwBytes_4);
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_370;
                            v85 = RtlUIntAdd(dwBytes_4, v280, &dwBytes_4);
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_370;
                            v85 = RtlUIntAdd(dwBytes_4, v281, &dwBytes_4);
                            LODWORD(v1485) = v85;
                            if ( v85 < 0 )
                              goto LABEL_370;
                            v283 = dwBytes_4;
                            v1473 = dwBytes_4;
                            if ( dwBytes_4 > 0x400000 )
                            {
                              v85 = -2147418113;
                              goto LABEL_465;
                            }
                            Srcd = v282;
                            v284 = GetProcessHeap();
                            v285 = HeapAlloc(v284, 8u, v283);
                            if ( !v285 )
                              goto LABEL_359;
                            v1483 = v285;
                            if ( !Srcd )
                            {
                              v85 = -2147024809;
                              v1483 = v285;
                              v1481 = v235;
LABEL_404:
                              LODWORD(v1485) = v85;
                              v1484 = (SIZE_T)Srcd;
                              goto LABEL_370;
                            }
                            v1630[0] = Srcd;
                            v1631 = Size;
                            v1630[1] = v285;
                            v1632 = v283;
                            v1633 = 0;
                            if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                              && (v309 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                            {
                              v310 = ((__int64 (__fastcall *)(__int64, _QWORD *))v309)(134LL, v1630);
                              v85 = v310 | 0x10000000;
                              LODWORD(v1485) = v310 | 0x10000000;
                              v287 = v1473;
                              if ( v310 >= 0 )
                              {
                                v287 = v1632;
                                v311 = v161;
                                v312 = v84;
                                v313 = v86;
                                v314 = v235;
                                goto LABEL_401;
                              }
                            }
                            else
                            {
                              v286 = GetLastError();
                              v85 = v286;
                              if ( v286 > 0 )
                                v85 = (unsigned __int16)v286 | 0x80070000;
                              if ( v85 >= 0 )
                                v85 = -2147467259;
                              LODWORD(v1485) = v85;
                              v287 = v1473;
                            }
                            v1484 = (SIZE_T)Srcd;
                            if ( v85 == -805306333 )
                            {
                              v85 = -2147024774;
                              LODWORD(v1485) = -2147024774;
                              v1481 = v235;
                              goto LABEL_370;
                            }
                            v314 = v235;
                            v1481 = v235;
                            v313 = v86;
                            v312 = v84;
                            v311 = v161;
                            if ( v85 < 0 )
                              goto LABEL_370;
LABEL_401:
                            v1373 = 0LL;
                            v84 = v312;
                            v161 = v311;
                            if ( v287 < 4 )
                            {
                              v85 = -805306306;
LABEL_403:
                              v1481 = v314;
                              goto LABEL_404;
                            }
                            v315 = *(unsigned int *)v1483;
                            v1298 = *(_DWORD *)v1483;
                            v1313 = (LPCWSTR)((char *)v1483 + 4);
                            v86 = v313;
                            if ( (char *)v1483 + 4 < v1483 )
                            {
                              v85 = -805306219;
                              goto LABEL_403;
                            }
                            v1484 = (SIZE_T)Srcd;
                            v1481 = v235;
                            if ( v287 - 4 < (unsigned int)v315 )
                            {
                              v85 = -805306306;
LABEL_408:
                              v1481 = v235;
LABEL_409:
                              LODWORD(v1485) = v85;
                              v1484 = (SIZE_T)Srcd;
                              goto LABEL_370;
                            }
                            v1359 = v315;
                            if ( (LPCWSTR)((char *)v1313 + v315) < v1313 || (v316 = v315 + 4, v316 < 4) )
                            {
                              v85 = -805306219;
                              goto LABEL_408;
                            }
                            if ( v287 - v316 < 4 )
                            {
LABEL_413:
                              v85 = -805306306;
                              goto LABEL_465;
                            }
                            v317 = *(unsigned int *)((char *)v1313 + v1359);
                            v1465 = *(_DWORD *)((char *)v1313 + v1359);
                            v318 = (unsigned __int64)v1313 + v1359 + 4;
                            v1346 = (_DWORD *)v318;
                            v1484 = (SIZE_T)Srcd;
                            v1481 = v235;
                            if ( v318 >= (unsigned __int64)v1313 + v1359 )
                            {
                              v161 = v311;
                              v319 = v235;
                              v320 = v316 + 4;
                              if ( v316 + 4 < v316 )
                                goto LABEL_541;
                              if ( v287 - v320 < (unsigned int)v317 )
                                goto LABEL_413;
                              v1485 = v317;
                              v321 = (_DWORD *)(v317 + v318);
                              v1484 = (SIZE_T)Srcd;
                              v1481 = v235;
                              if ( v321 >= v1346 )
                              {
                                v319 = v235;
                                v322 = v320 + v317;
                                if ( v320 + (unsigned int)v317 >= v320 )
                                {
                                  if ( v287 - v322 < 4 )
                                    goto LABEL_413;
                                  v323 = *v321;
                                  v1454 = *v321;
                                  lpModuleName = (LPCWSTR)(v321 + 1);
                                  v1481 = v235;
                                  if ( v321 + 1 < v321 )
                                  {
                                    v85 = -805306219;
                                    goto LABEL_409;
                                  }
                                  v1484 = (SIZE_T)Srcd;
                                  v324 = v322 + 4;
                                  if ( v322 + 4 < v322 )
                                  {
                                    v85 = -805306219;
                                    v1481 = v235;
                                    goto LABEL_427;
                                  }
                                  v1267 = v1483;
                                  if ( v287 - v324 < v323 )
                                    goto LABEL_413;
                                  v1484 = (SIZE_T)Srcd;
                                  v1481 = v235;
                                  if ( v324 + v323 < v324 )
                                  {
                                    v85 = -805306219;
                                    LODWORD(v1485) = -805306219;
                                    goto LABEL_370;
                                  }
                                  v1391 = (SIZE_T)v161;
                                  v1250 = v84;
                                  v1233 = v86;
                                  v325 = v1483;
                                  if ( v287 != v324 + v323 )
                                  {
                                    v1481 = v235;
LABEL_426:
                                    v85 = -805306306;
                                    v1483 = v325;
LABEL_427:
                                    LODWORD(v1485) = v85;
                                    v1484 = (SIZE_T)Srcd;
                                    goto LABEL_370;
                                  }
                                  if ( v323 + v1298 + v1465 + 12LL != v287 )
                                  {
                                    v325 = v1483;
                                    v1481 = v235;
                                    goto LABEL_426;
                                  }
                                  v326 = GetProcessHeap();
                                  v327 = HeapAlloc(v326, 8u, 0x30uLL);
                                  v1474 = v327;
                                  if ( !v327 )
                                  {
                                    v85 = -805306345;
                                    LODWORD(v1485) = -805306345;
                                    v1483 = v1267;
                                    v1481 = v235;
                                    v1484 = (SIZE_T)Srcd;
                                    goto LABEL_370;
                                  }
                                  v328 = 0;
                                  if ( v1313 )
                                  {
                                    *(_DWORD *)v327 = v1298;
                                    v329 = GetProcessHeap();
                                    v330 = HeapAlloc(v329, 8u, v1359);
                                    if ( !v330 )
                                      goto LABEL_442;
                                    v1474[1] = v330;
                                    memcpy_0(v330, v1313, v1359);
                                    v327 = v1474;
                                    v331 = lpModuleName;
                                  }
                                  else
                                  {
                                    *(_DWORD *)v327 = 0;
                                    v327[1] = 0LL;
                                    v331 = lpModuleName;
                                  }
                                  v1391 = (SIZE_T)v161;
                                  v1250 = v84;
                                  v1233 = v86;
                                  v1481 = v235;
                                  v1474 = v327;
                                  if ( !v1346 )
                                  {
                                    *((_DWORD *)v327 + 4) = 0;
                                    v327[3] = 0LL;
                                    v335 = v1484;
                                    v334 = v1483;
LABEL_440:
                                    if ( v331 )
                                    {
                                      *((_DWORD *)v327 + 8) = v1454;
                                      v336 = GetProcessHeap();
                                      v337 = HeapAlloc(v336, 8u, v1454);
                                      if ( !v337 )
                                        goto LABEL_442;
                                      v1474[5] = v337;
                                      v328 = 0;
                                      memcpy_0(v337, lpModuleName, v1454);
                                      v327 = v1474;
                                      v334 = v1483;
                                      v1481 = v235;
                                      v1233 = v86;
                                      v1250 = v84;
                                      v1391 = (SIZE_T)v161;
                                      v335 = v1484;
                                    }
                                    else
                                    {
                                      *((_DWORD *)v327 + 8) = 0;
                                      v327[5] = 0LL;
                                    }
                                    v1373 = v327;
                                    goto LABEL_452;
                                  }
                                  *((_DWORD *)v327 + 4) = v1465;
                                  v332 = GetProcessHeap();
                                  v333 = HeapAlloc(v332, 8u, v1485);
                                  if ( v333 )
                                  {
                                    v1474[3] = v333;
                                    v328 = 0;
                                    memcpy_0(v333, v1346, v1485);
                                    v327 = v1474;
                                    v331 = lpModuleName;
                                    v334 = v1483;
                                    v1481 = v235;
                                    v1233 = v86;
                                    v1250 = v84;
                                    v1391 = (SIZE_T)v161;
                                    v335 = v1484;
                                    goto LABEL_440;
                                  }
LABEL_442:
                                  v328 = -1073741801;
                                  v338 = v1474;
                                  v1268 = (void *)v1474[1];
                                  if ( v1268 )
                                  {
                                    v339 = GetProcessHeap();
                                    HeapFree(v339, 0, v1268);
                                    v338 = v1474;
                                    v1474[1] = 0LL;
                                  }
                                  v1269 = (void *)v338[3];
                                  if ( v1269 )
                                  {
                                    v340 = GetProcessHeap();
                                    HeapFree(v340, 0, v1269);
                                    v338 = v1474;
                                    v1474[3] = 0LL;
                                  }
                                  v1270 = (void *)v338[5];
                                  if ( v1270 )
                                  {
                                    v341 = GetProcessHeap();
                                    HeapFree(v341, 0, v1270);
                                    v1474[5] = 0LL;
                                  }
                                  v342 = GetProcessHeap();
                                  HeapFree(v342, 0, v1474);
                                  v335 = v1484;
                                  v334 = v1483;
                                  v327 = 0LL;
LABEL_452:
                                  v1271 = v335;
                                  Srce = v334;
                                  v1299 = v328;
                                  v343 = 0LL;
                                  if ( v328 < 0 )
                                  {
                                    v1487 = 0LL;
                                    v1483 = v334;
                                    v1481 = v235;
                                    v1233 = v86;
                                    v1250 = v84;
                                    v1391 = (SIZE_T)v161;
                                    v1484 = v335;
                                    if ( v327 )
                                    {
                                      v344 = (void *)v1373[1];
                                      if ( v344 )
                                      {
                                        v345 = GetProcessHeap();
                                        HeapFree(v345, 0, v344);
                                        v1373[1] = 0LL;
                                      }
                                      v346 = (void *)v1373[3];
                                      if ( v346 )
                                      {
                                        v347 = GetProcessHeap();
                                        HeapFree(v347, 0, v346);
                                        v1373[3] = 0LL;
                                      }
                                      v348 = (void *)v1373[5];
                                      if ( v348 )
                                      {
                                        v349 = GetProcessHeap();
                                        HeapFree(v349, 0, v348);
                                        v1373[5] = 0LL;
                                      }
                                      v350 = GetProcessHeap();
                                      HeapFree(v350, 0, v1373);
                                      v343 = 0LL;
                                      v1487 = 0LL;
                                      v1483 = Srce;
                                      v1481 = v235;
                                      v1233 = v86;
                                      v1250 = v84;
                                      v1391 = (SIZE_T)v161;
                                      v328 = v1299;
                                      v1484 = v1271;
                                    }
                                  }
                                  else
                                  {
                                    v343 = (unsigned int *)v327;
                                    v1487 = (SIZE_T)v327;
                                  }
                                  v85 = v328 | 0x10000000;
                                  LODWORD(v1485) = v85;
                                  if ( v85 >= 0 )
                                  {
                                    if ( !v343 || (v1272 = (char *)*((_QWORD *)v343 + 1)) == 0LL || !*v343 )
                                    {
                                      v85 = -805306355;
                                      goto LABEL_465;
                                    }
                                    v351 = *v343 - 8;
                                    v1399 = *v343 - 8LL;
                                    v352 = (WCHAR *)MemoryAlloc(v1399);
                                    v1445 = v352;
                                    if ( !v352 )
                                    {
LABEL_497:
                                      v1421 = 0LL;
                                      v85 = -805306367;
                                      goto LABEL_465;
                                    }
                                    v353 = 0;
                                    v1685 = 0x7F1137FAB69605ELL;
                                    v354 = v1272;
                                    v1482 = v1272;
                                    v355 = v352;
                                    v356 = v351 & 7;
                                    if ( (v351 & 7) != 0 )
                                    {
                                      v1300 = 0;
                                      v357 = 0;
                                      v1466 = 0;
                                      v358 = v1487;
                                      if ( v356 )
                                      {
                                        v359 = 56;
                                        v360 = (unsigned __int8 *)v1482;
                                        for ( mm = 0; (int)mm < v356; ++mm )
                                        {
                                          v362 = *v360++;
                                          if ( mm >= 4 )
                                            v1300 |= v362 << v359;
                                          else
                                            v1466 |= v362 << (v359 - 32);
                                          v359 -= 8;
                                        }
                                        v1482 = v360;
                                        v363 = v1466 ^ 0x92F65A5;
                                        v364 = v1300 ^ 0x699A899C;
                                        v353 = 0;
                                        v1481 = v235;
                                        v1233 = v86;
                                        v1250 = v84;
                                        v1391 = (SIZE_T)v161;
                                        v352 = (WCHAR *)v1445;
                                        v365 = 0;
                                        v366 = (WCHAR *)v1445;
                                        do
                                        {
                                          if ( v365 >= 4 )
                                          {
                                            v364 = __ROL4__(v364, 8);
                                            v367 = v364;
                                          }
                                          else
                                          {
                                            v363 = __ROL4__(v363, 8);
                                            v367 = v363;
                                          }
                                          *(_BYTE *)v366 = v367;
                                          ++v365;
                                          v355 = (WCHAR *)((char *)v366 + 1);
                                          v366 = (WCHAR *)((char *)v366 + 1);
                                        }
                                        while ( v365 < v356 );
                                        v358 = v1487;
                                        v368 = v1466 ^ 0x92F65A5;
                                        if ( (unsigned int)v356 > 4 )
                                        {
                                          v357 = (v1300 ^ 0x699A899Cu) >> (8 * (8 - v356)) << (8 * (8 - v356));
LABEL_483:
                                          v354 = (char *)v1482;
                                          goto LABEL_484;
                                        }
                                        v357 = 0;
                                        if ( (unsigned int)v356 >= 4 )
                                          goto LABEL_483;
                                        v354 = (char *)v1482;
                                      }
                                      else
                                      {
                                        v368 = 154101157;
                                        v1466 = 0;
                                        v1300 = 0;
                                      }
                                      v368 = v368 >> (8 * (4 - v356)) << (8 * (4 - v356));
                                    }
                                    else
                                    {
                                      v1466 = 0;
                                      v1300 = -1;
                                      v357 = 0;
                                      v368 = 0;
                                      v358 = v1487;
                                    }
LABEL_484:
                                    if ( v1399 >> 3 )
                                    {
                                      v1455 = WORD1(v1685);
                                      v369 = (char *)v355 + 7;
                                      v370 = (unsigned __int8 *)(v354 + 2);
                                      v371 = v1466;
                                      v372 = v1300;
                                      v373 = v1399 >> 3;
                                      v374 = HIDWORD(v1685);
                                      v375 = WORD2(v1685);
                                      do
                                      {
                                        v376 = v370[1] | ((*v370 | ((*(v370 - 1) | (*(v370 - 2) << 8)) << 8)) << 8);
                                        v377 = v370[5] | ((v370[4] | ((v370[3] | (v370[2] << 8)) << 8)) << 8);
                                        v378 = v376 ^ v368;
                                        v370 += 8;
                                        v379 = v378 ^ v374 ^ 0xAB69605E ^ v377 ^ v357;
                                        v380 = (__ROL4__(v379, 10) + v375 * __ROL4__(v379 + 1419157410, 5)) ^ v378;
                                        v381 = (WORD1(v1685) * __ROR4__(v380 + v374, 9) - __ROL4__(v380, 2)) ^ v379;
                                        v382 = (24670 * (v381 - v375) - (v381 >> 13)) ^ v380;
                                        v383 = (HIWORD(v1685) * __ROL4__(v382 ^ WORD1(v1685), 6) - __ROL4__(v382, 2)) ^ v381;
                                        v384 = (v374 - (v383 ^ 0xAB69605E)) ^ v382;
                                        v385 = (v1455 * (v384 ^ v375)) ^ __ROR4__(v384, 6) ^ v383;
                                        v386 = (__ROL4__(v385, 2) + 24670 * __ROR4__(v385 + v374, 15)) ^ v384;
                                        v387 = (HIWORD(v1685) * __ROR4__(v386 + 1419157410, 14) - __ROL4__(v386, 8)) ^ v385;
                                        v388 = __ROR4__(v387, 10) ^ (v375 * __ROR4__(v387 ^ 0xAB69605E, 12)) ^ v386;
                                        v389 = (v388 >> 10) ^ (WORD1(v1685) * (v388 ^ HIWORD(v1685))) ^ v387;
                                        v390 = (HIWORD(v1685) * (__ROR4__(~v389, 5) + 24670)) ^ v388;
                                        v391 = (v390 - HIWORD(v1685)) ^ 0xAB69605E ^ v389;
                                        v392 = ((v391 >> 2) + v375 * __ROL4__(v391 ^ HIWORD(v1685), 2)) ^ v390;
                                        v393 = (__ROL4__(v392, 7) + WORD1(v1685) * __ROR4__(v392 - v374, 6)) ^ v391;
                                        v394 = (24670 * (v393 ^ v375) + __ROR4__(v393, 9)) ^ v392;
                                        v395 = (__ROL4__(v394, 7) + HIWORD(v1685) * __ROL4__(v394 ^ WORD1(v1685), 5)) ^ v393;
                                        v396 = v374 ^ v395 ^ 0xAB69605E ^ v394;
                                        v397 = (v375 * (__ROR4__(v396, 3) - WORD1(v1685))) ^ v395;
                                        v398 = (24670 * __ROR4__(v397 - v374, 1) - __ROR4__(v397, 6)) ^ v396;
                                        v399 = (__ROL4__(v398, 14) + HIWORD(v1685) * __ROL4__(v398 - 1419157410, 3)) ^ v397;
                                        v400 = (v375 * __ROL4__(v399 - 1419157410, 15) - __ROR4__(v399, 14)) ^ v398;
                                        v401 = (v400 >> 3) ^ (WORD1(v1685) * (v400 ^ 0x605E)) ^ v399;
                                        v402 = v371 ^ __ROL4__(v401, 2) ^ (24670 * __ROL4__(v374 ^ v401, 4)) ^ v400;
                                        v403 = v372 ^ v401;
                                        *(v369 - 4) = v402;
                                        v404 = __ROR4__(v402, 8);
                                        *v369 = v403;
                                        v405 = __ROR4__(v403, 8);
                                        *(v369 - 5) = v404;
                                        v406 = __ROR4__(v404, 8);
                                        *(v369 - 1) = v405;
                                        v407 = __ROR4__(v405, 8);
                                        *(v369 - 6) = v406;
                                        v408 = __ROR4__(v406, 8);
                                        *(v369 - 2) = v407;
                                        v409 = __ROR4__(v407, 8);
                                        *(v369 - 7) = v408;
                                        *(v369 - 3) = v409;
                                        v368 = __ROR4__(v408, 8);
                                        v357 = __ROR4__(v409, 8);
                                        v371 = v376;
                                        v372 = v377;
                                        v369 += 8;
                                        --v373;
                                      }
                                      while ( v373 );
                                      v353 = 0;
                                      v84 = v1250;
                                      v86 = v1233;
                                      v161 = (unsigned __int8 *)v1391;
                                      v358 = v1487;
                                      v352 = (WCHAR *)v1445;
                                    }
                                    for ( nn = 0LL; nn < v1399; ++nn )
                                      v353 ^= *((_BYTE *)v352 + nn);
                                    v1446 = (LPCWSTR)v1484;
                                    v1374 = v1481;
                                    v1314 = (WCHAR *)v1483;
                                    v411 = v358;
                                    v1487 = v358;
                                    if ( v353 != *(_QWORD *)&v1272[v1399] )
                                    {
                                      MemoryFree(v352);
                                      goto LABEL_497;
                                    }
                                    v1509 = 0;
                                    v1569 = v352;
                                    if ( (unsigned int)v1399 >= 4 )
                                    {
                                      v1301 = *(_DWORD *)v352;
                                      v412 = RtlULongLongAdd((unsigned __int64)v352, 4LL, (unsigned __int64 *)&v1569);
                                      v1421 = v413;
                                      v1487 = v414;
                                      v415 = v1314;
                                      v1483 = v1314;
                                      v1481 = v1374;
                                      v1484 = (SIZE_T)v1446;
                                      if ( v412 < 0 )
                                        goto LABEL_537;
                                      v412 = RtlUIntAdd(0, 4, &v1509);
                                      v1421 = v352;
                                      v1487 = v411;
                                      v1483 = v1314;
                                      v1481 = v416;
                                      v1484 = (SIZE_T)v1446;
                                      if ( v412 < 0 )
                                        goto LABEL_537;
                                      if ( (unsigned int)v1399 - v1509 < 4 )
                                        goto LABEL_502;
                                      v1467 = *(_DWORD *)v1569;
                                      v412 = RtlULongLongAdd((unsigned __int64)v1569, 4LL, (unsigned __int64 *)&v1569);
                                      v1421 = v417;
                                      v1487 = v418;
                                      v1483 = v1314;
                                      v1481 = v419;
                                      v1484 = (SIZE_T)v1446;
                                      if ( v412 < 0 )
                                        goto LABEL_537;
                                      v412 = RtlUIntAdd(v1509, 4, &v1509);
                                      v1421 = v352;
                                      v1487 = v411;
                                      v1483 = v1314;
                                      v1481 = v416;
                                      v1484 = (SIZE_T)v1446;
                                      if ( v412 < 0 )
                                        goto LABEL_537;
                                      if ( (unsigned int)v1399 - v1509 < v1467 )
                                      {
LABEL_502:
                                        v1481 = v416;
                                      }
                                      else
                                      {
                                        v412 = RtlUIntAdd(v1509, v1467, &v1509);
                                        v1421 = v352;
                                        v1487 = v411;
                                        v1483 = v1314;
                                        v1481 = v420;
                                        v1484 = (SIZE_T)v1446;
                                        if ( v412 < 0 )
                                          goto LABEL_537;
                                        if ( (char *)v352 + (unsigned int)v1399 >= (char *)v1569 + v1467
                                          && (unsigned __int64)(unsigned int)v1399
                                           + (char *)v352
                                           - v1467
                                           - (_BYTE *)v1569 < 8 )
                                        {
                                          v1400 = 0LL;
                                          v412 = 0;
                                          v1456 = 0;
                                          v1421 = v352;
                                          v1487 = v411;
                                          v1483 = v1314;
                                          v1481 = v420;
                                          v1484 = (SIZE_T)v1446;
                                          if ( !v1569 )
                                          {
LABEL_525:
                                            if ( v1467 )
                                            {
                                              v430 = GetProcessHeap();
                                              v431 = v1467;
                                              v432 = HeapAlloc(v430, 8u, v1467);
                                              v1400 = v432;
                                              v412 = 0;
                                              if ( !v432 )
                                              {
                                                v412 = -1073741801;
                                                goto LABEL_537;
                                              }
                                            }
                                            else
                                            {
                                              v431 = 0LL;
                                              v432 = 0LL;
                                            }
                                            if ( v1569 )
                                              memcpy_0(v432, v1569, v431);
                                            v1616[1] = v1400;
                                            LODWORD(v1616[0]) = v1456;
                                            if ( v1301 == v1456 )
                                              goto LABEL_537;
LABEL_536:
                                            v412 = -1073741762;
                                            goto LABEL_537;
                                          }
                                          v1315 = (LPCWSTR)v1569;
                                          v412 = RtlULongLongAdd(
                                                   (unsigned __int64)v1569,
                                                   v1467,
                                                   (unsigned __int64 *)&v1570);
                                          v1421 = v421;
                                          v1487 = v422;
                                          v1483 = v415;
                                          v1481 = v1374;
                                          v1484 = (SIZE_T)v1446;
                                          if ( v412 >= 0 )
                                          {
                                            v1421 = v421;
                                            v1487 = v422;
                                            v1483 = v415;
                                            v1481 = v1374;
                                            v423 = v1446;
                                            v1484 = (SIZE_T)v1446;
                                            if ( v1315 < v1570 )
                                            {
                                              v424 = v421;
                                              v1421 = v421;
                                              v1487 = v422;
                                              v1483 = v415;
                                              v1481 = v1374;
                                              v1484 = (SIZE_T)v1446;
                                              v425 = (unsigned __int64)v1315;
                                              while ( 1 )
                                              {
                                                v1447 = v423;
                                                v1251 = v424;
                                                v412 = RtlULongLongAdd(v425, 4LL, (unsigned __int64 *)&v1571);
                                                if ( v412 < 0 )
                                                  goto LABEL_537;
                                                if ( v1571 > v1570 )
                                                  goto LABEL_522;
                                                v412 = RtlUIntAdd(4u, *v426, &v1510);
                                                if ( v412 < 0 )
                                                  goto LABEL_537;
                                                v412 = RtlULongLongAdd(
                                                         (unsigned __int64)v1315,
                                                         v1510,
                                                         (unsigned __int64 *)&v1572);
                                                v1421 = v429;
                                                v1487 = v428;
                                                v1483 = v427;
                                                v1481 = v1374;
                                                v1484 = (SIZE_T)v1447;
                                                if ( v412 < 0 )
                                                  goto LABEL_537;
                                                v425 = (unsigned __int64)v1572;
                                                v1315 = v1572;
                                                v1487 = v428;
                                                v1483 = v427;
                                                v1484 = (SIZE_T)v1447;
                                                if ( v1572 > v1570 )
                                                {
                                                  v412 = -1073741811;
                                                  v1421 = v1251;
                                                  v1481 = v1374;
                                                  goto LABEL_537;
                                                }
                                                ++v1456;
                                                v1421 = v1251;
                                                v1481 = v1374;
                                                v423 = v1447;
                                                if ( v1572 >= v1570 )
                                                {
                                                  v1421 = v1251;
                                                  v1487 = v428;
                                                  v1483 = v427;
                                                  v1481 = v1374;
                                                  v1484 = (SIZE_T)v1447;
                                                  goto LABEL_524;
                                                }
                                                v424 = v1251;
                                              }
                                            }
                                            v425 = (unsigned __int64)v1315;
LABEL_524:
                                            if ( (const WCHAR *)v425 == v1570 )
                                              goto LABEL_525;
LABEL_522:
                                            v412 = -1073741811;
                                          }
LABEL_537:
                                          v85 = v412 | 0x10000000;
                                          goto LABEL_465;
                                        }
                                        v1481 = v420;
                                      }
                                      v1483 = v1314;
                                    }
                                    v1484 = (SIZE_T)v1446;
                                    v1487 = v411;
                                    v1421 = v352;
                                    goto LABEL_536;
                                  }
LABEL_370:
                                  if ( !v161 )
                                  {
LABEL_372:
                                    v289 = v1481;
                                    v290 = 0LL;
                                    if ( v1481 )
                                    {
                                      v291 = (void *)*((_QWORD *)v1481 + 1);
                                      if ( v291 )
                                      {
                                        v292 = GetProcessHeap();
                                        HeapFree(v292, 0, v291);
                                        v289[1] = 0LL;
                                      }
                                      v293 = (void *)v289[3];
                                      if ( v293 )
                                      {
                                        v294 = GetProcessHeap();
                                        HeapFree(v294, 0, v293);
                                        v289[3] = 0LL;
                                      }
                                      v290 = (void *)v289[5];
                                      if ( v290 )
                                      {
                                        v295 = GetProcessHeap();
                                        HeapFree(v295, 0, v290);
                                        v290 = 0LL;
                                        v289[5] = 0LL;
                                      }
                                      v296 = GetProcessHeap();
                                      HeapFree(v296, 0, v289);
                                    }
                                    v297 = (void *)v1484;
                                    if ( v1484 )
                                    {
                                      v298 = GetProcessHeap();
                                      HeapFree(v298, 0, v297);
                                    }
                                    v299 = v1483;
                                    if ( v1483 )
                                    {
                                      v300 = GetProcessHeap();
                                      HeapFree(v300, 0, v299);
                                    }
                                    v301 = (_QWORD *)v1487;
                                    if ( v1487 )
                                    {
                                      v302 = *(void **)(v1487 + 8);
                                      if ( v302 )
                                      {
                                        v303 = GetProcessHeap();
                                        HeapFree(v303, 0, v302);
                                        v301[1] = 0LL;
                                      }
                                      v304 = (void *)v301[3];
                                      if ( v304 )
                                      {
                                        v305 = GetProcessHeap();
                                        HeapFree(v305, 0, v304);
                                        v301[3] = 0LL;
                                      }
                                      v290 = (void *)v301[5];
                                      if ( v290 )
                                      {
                                        v306 = GetProcessHeap();
                                        HeapFree(v306, 0, v290);
                                        v290 = 0LL;
                                        v301[5] = 0LL;
                                      }
                                      v307 = GetProcessHeap();
                                      HeapFree(v307, 0, v301);
                                    }
                                    if ( v1421 )
                                    {
                                      v308 = GetProcessHeap();
                                      HeapFree(v308, 0, v1421);
                                    }
                                    v89 = v1284;
                                    if ( v85 >= 0 )
                                    {
                                      if ( !LODWORD(v1616[0]) )
                                      {
                                        v85 = -1073425151;
                                        goto LABEL_129;
                                      }
                                      if ( v1616[1] == v290 )
                                      {
                                        v85 = -1073741811;
                                        goto LABEL_129;
                                      }
                                      v433 = v1616[1];
                                      v1573 = v1616[1];
                                      v85 = RtlULongLongAdd((unsigned __int64)v1616[1], 4LL, (unsigned __int64 *)&v1573);
                                      LODWORD(v1485) = v85;
                                      if ( v85 >= 0 )
                                      {
                                        v436 = v1573;
                                        if ( !*v433 )
                                          v436 = 0LL;
                                        v1573 = v436;
                                        if ( *v433 != (_DWORD)v435 )
                                        {
                                          v85 = -1073741789;
                                          goto LABEL_129;
                                        }
                                        v85 = *v436;
                                        LODWORD(v1485) = v85;
                                        if ( v85 == -805306333 )
                                        {
                                          v1302 = -2147024774;
                                          goto LABEL_555;
                                        }
                                        v1302 = v85;
                                        if ( v85 == -2147024774 || (v1302 = v85, v85 >= 0) )
                                        {
LABEL_555:
                                          if ( LODWORD(v1616[0]) == 6 )
                                          {
                                            if ( v1616[1] )
                                            {
                                              v437 = (int *)v1616[1];
                                              v1574 = (int *)v1616[1];
                                              v438 = 0;
                                              while ( 1 )
                                              {
                                                v85 = RtlULongLongAdd(
                                                        (unsigned __int64)v437,
                                                        v435,
                                                        (unsigned __int64 *)&v1574);
                                                LODWORD(v1485) = v85;
                                                if ( v85 < 0 )
                                                  goto LABEL_558;
                                                v85 = RtlULongLongAdd(
                                                        (unsigned __int64)v1574,
                                                        v439,
                                                        (unsigned __int64 *)&v1574);
                                                LODWORD(v1485) = v85;
                                                if ( v85 < 0 )
                                                  goto LABEL_558;
                                                ++v438;
                                                v437 = v1574;
                                                if ( v438 )
                                                {
                                                  v440 = *v1574;
                                                  v85 = RtlULongLongAdd(
                                                          (unsigned __int64)v1574,
                                                          v435,
                                                          (unsigned __int64 *)&v1574);
                                                  LODWORD(v1485) = v85;
                                                  if ( v85 < 0 )
                                                    goto LABEL_558;
                                                  v442 = v1574;
                                                  if ( !v440 )
                                                    v442 = 0LL;
                                                  v1574 = v442;
                                                  if ( v440 != 8 )
                                                  {
LABEL_572:
                                                    v85 = -1073741789;
                                                    goto LABEL_557;
                                                  }
                                                  v1273 = *(_QWORD *)v442;
                                                  if ( v1616[1] )
                                                  {
                                                    v443 = (int *)v1616[1];
                                                    v1575 = (int *)v1616[1];
                                                    v444 = 0;
                                                    while ( 1 )
                                                    {
                                                      v85 = RtlULongLongAdd(
                                                              (unsigned __int64)v443,
                                                              v441,
                                                              (unsigned __int64 *)&v1575);
                                                      LODWORD(v1485) = v85;
                                                      if ( v85 < 0 )
                                                        goto LABEL_558;
                                                      v85 = RtlULongLongAdd(
                                                              (unsigned __int64)v1575,
                                                              v445,
                                                              (unsigned __int64 *)&v1575);
                                                      LODWORD(v1485) = v85;
                                                      if ( v85 < 0 )
                                                        goto LABEL_558;
                                                      ++v444;
                                                      v443 = v1575;
                                                      if ( v444 >= 2 )
                                                      {
                                                        v446 = *v1575;
                                                        v85 = RtlULongLongAdd(
                                                                (unsigned __int64)v1575,
                                                                v441,
                                                                (unsigned __int64 *)&v1575);
                                                        LODWORD(v1485) = v85;
                                                        if ( v85 < 0 )
                                                          goto LABEL_558;
                                                        v448 = v1575;
                                                        if ( !v446 )
                                                          v448 = 0LL;
                                                        v1575 = v448;
                                                        if ( v446 != (_DWORD)v447 )
                                                          goto LABEL_572;
                                                        v1468 = *v448;
                                                        if ( !v1616[1] )
                                                          goto LABEL_563;
                                                        v449 = (int *)v1616[1];
                                                        v1576 = (int *)v1616[1];
                                                        v450 = 0;
                                                        while ( 1 )
                                                        {
                                                          v85 = RtlULongLongAdd(
                                                                  (unsigned __int64)v449,
                                                                  v447,
                                                                  (unsigned __int64 *)&v1576);
                                                          LODWORD(v1485) = v85;
                                                          if ( v85 < 0 )
                                                            goto LABEL_558;
                                                          v85 = RtlULongLongAdd(
                                                                  (unsigned __int64)v1576,
                                                                  v451,
                                                                  (unsigned __int64 *)&v1576);
                                                          LODWORD(v1485) = v85;
                                                          if ( v85 < 0 )
                                                            goto LABEL_558;
                                                          ++v450;
                                                          v449 = v1576;
                                                          if ( v450 >= 3 )
                                                          {
                                                            v452 = *v1576;
                                                            v1457 = *v1576;
                                                            v85 = RtlULongLongAdd(
                                                                    (unsigned __int64)v1576,
                                                                    v447,
                                                                    (unsigned __int64 *)&v1576);
                                                            LODWORD(v1485) = v85;
                                                            if ( v85 < 0 )
                                                              goto LABEL_558;
                                                            v453 = v1576;
                                                            if ( !v452 )
                                                              v453 = 0LL;
                                                            v1576 = v453;
                                                            if ( v1616[1] )
                                                            {
                                                              v454 = (int *)v1616[1];
                                                              v1577 = (int *)v1616[1];
                                                              v455 = 0;
                                                              while ( 1 )
                                                              {
                                                                v85 = RtlULongLongAdd(
                                                                        (unsigned __int64)v454,
                                                                        4LL,
                                                                        (unsigned __int64 *)&v1577);
                                                                LODWORD(v1485) = v85;
                                                                if ( v85 < 0 )
                                                                  goto LABEL_558;
                                                                v85 = RtlULongLongAdd(
                                                                        (unsigned __int64)v1577,
                                                                        v456,
                                                                        (unsigned __int64 *)&v1577);
                                                                LODWORD(v1485) = v85;
                                                                if ( v85 < 0 )
                                                                  goto LABEL_558;
                                                                ++v455;
                                                                v454 = v1577;
                                                                if ( v455 >= 4 )
                                                                {
                                                                  v457 = *v1577;
                                                                  v85 = RtlULongLongAdd(
                                                                          (unsigned __int64)v1577,
                                                                          4LL,
                                                                          (unsigned __int64 *)&v1577);
                                                                  LODWORD(v1485) = v85;
                                                                  if ( v85 < 0 )
                                                                    goto LABEL_558;
                                                                  v459 = v1577;
                                                                  if ( !v457 )
                                                                    v459 = 0LL;
                                                                  v1577 = v459;
                                                                  if ( v457 == (_DWORD)v458 )
                                                                  {
                                                                    v1475 = *v459;
                                                                    if ( !v1616[1] )
                                                                      goto LABEL_563;
                                                                    v460 = (unsigned int *)v1616[1];
                                                                    v1578 = (unsigned int *)v1616[1];
                                                                    for ( i1 = 0; i1 < 5; ++i1 )
                                                                    {
                                                                      v1347 = *v460;
                                                                      v85 = RtlULongLongAdd(
                                                                              (unsigned __int64)v460,
                                                                              v458,
                                                                              (unsigned __int64 *)&v1578);
                                                                      LODWORD(v1485) = v85;
                                                                      if ( v85 < 0
                                                                        || (v85 = RtlULongLongAdd(
                                                                                    (unsigned __int64)v1578,
                                                                                    v1347,
                                                                                    (unsigned __int64 *)&v1578),
                                                                            LODWORD(v1485) = v85,
                                                                            v85 < 0) )
                                                                      {
                                                                        v89 = v462;
                                                                        goto LABEL_101;
                                                                      }
                                                                      v460 = v1578;
                                                                    }
                                                                    v463 = *v1578;
                                                                    v464 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1578,
                                                                             v458,
                                                                             (unsigned __int64 *)&v1578);
                                                                    v85 = v464;
                                                                    LODWORD(v1485) = v464;
                                                                    if ( v464 < 0 )
                                                                    {
                                                                      LODWORD(v1485) = v464;
                                                                      goto LABEL_558;
                                                                    }
                                                                    v467 = v1578;
                                                                    if ( !v463 )
                                                                      v467 = 0LL;
                                                                    v1578 = v467;
                                                                    if ( v463 == v465 )
                                                                    {
                                                                      v89 = *v467;
                                                                      if ( v1406 != (LPVOID)v1273 )
                                                                        goto LABEL_556;
                                                                      HIDWORD(v1512) = v1468;
                                                                      if ( v1475 > v465 || v1457 > v465 )
                                                                      {
                                                                        v85 = -2147024774;
                                                                        goto LABEL_129;
                                                                      }
                                                                      memcpy_0(v1513, v466, v1457);
                                                                      if ( v1302 )
                                                                      {
                                                                        v85 = v1302;
                                                                        LODWORD(v1485) = v1302;
                                                                      }
                                                                      goto LABEL_101;
                                                                    }
                                                                  }
                                                                  goto LABEL_572;
                                                                }
                                                              }
                                                            }
                                                            goto LABEL_563;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  break;
                                                }
                                              }
                                            }
LABEL_563:
                                            v85 = -1073741811;
                                          }
                                          else
                                          {
LABEL_556:
                                            v85 = -1073425151;
                                          }
LABEL_557:
                                          LODWORD(v1485) = v85;
LABEL_558:
                                          v89 = v434;
                                          goto LABEL_101;
                                        }
                                      }
                                    }
                                    goto LABEL_101;
                                  }
LABEL_371:
                                  v288 = GetProcessHeap();
                                  HeapFree(v288, 0, v161);
                                  goto LABEL_372;
                                }
LABEL_541:
                                v85 = -805306219;
                                v1481 = v319;
                                goto LABEL_409;
                              }
                            }
                            v85 = -805306219;
                            goto LABEL_465;
                          }
                          v1345 = v160;
                          *(_DWORD *)v233 = v1358;
                          v246 = GetProcessHeap();
                          v247 = HeapAlloc(v246, 8u, v1358);
                          if ( v247 )
                          {
                            v233[1] = v247;
                            v1389 = v233;
                            memcpy_0(v247, Src, v1358);
                            *((_DWORD *)v233 + 4) = 160;
                            v248 = GetProcessHeap();
                            v249 = HeapAlloc(v248, 8u, 0xA0uLL);
                            if ( !v249 )
                            {
LABEL_310:
                              v234 = -1073741801;
                              v252 = v1389;
                              v1310 = (WCHAR *)v1389[1];
                              if ( v1310 )
                              {
                                v253 = GetProcessHeap();
                                HeapFree(v253, 0, v1310);
                                v252 = v1389;
                                v1389[1] = 0LL;
                              }
                              v1311 = (WCHAR *)v252[3];
                              if ( v1311 )
                              {
                                v254 = GetProcessHeap();
                                HeapFree(v254, 0, v1311);
                                v252 = v1389;
                                v1389[3] = 0LL;
                              }
                              v1312 = (WCHAR *)v252[5];
                              if ( v1312 )
                              {
                                v255 = GetProcessHeap();
                                HeapFree(v255, 0, v1312);
                                v1389[5] = 0LL;
                              }
                              v256 = GetProcessHeap();
                              HeapFree(v256, 0, v1389);
                              goto LABEL_289;
                            }
                            v233[3] = v249;
                            v1345 = v160;
                            *v249 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                            v249[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                            v249[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                            v249[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                            v249[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                            v249[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                            v249[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                            v249[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                            v249[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                            v249[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                            *((_DWORD *)v233 + 8) = 8;
                            v250 = GetProcessHeap();
                            v251 = HeapAlloc(v250, 8u, 8uLL);
                            if ( v251 )
                            {
                              v233[5] = v251;
                              v234 = 0;
                              *(_QWORD *)v1389[5] = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                              v235 = (const void **)v1389;
                              v1372 = 0LL;
                              goto LABEL_290;
                            }
                            v1389 = v233;
                          }
                          v1345 = v160;
                          goto LABEL_310;
                        }
                      }
                      v89 = v82;
                      goto LABEL_101;
                    }
                  }
                  v89 = v82;
                  goto LABEL_101;
                }
              }
              else
              {
                v85 = RtlUIntAdd(4u, 8, (unsigned int *)&v1491);
                LODWORD(v1485) = v85;
                if ( v85 < 0 )
                  goto LABEL_118;
                v85 = RtlUIntAdd(HIDWORD(v1614), v1491, (unsigned int *)&v1614 + 1);
                LODWORD(v1485) = v85;
                v135 = v1614;
                if ( v85 >= 0 )
                  goto LABEL_180;
              }
              v89 = v82;
              goto LABEL_101;
            }
          }
          else
          {
            v85 = RtlUIntAdd(v121, Size, (unsigned int *)&v1548);
            LODWORD(v1485) = v85;
            if ( v85 < 0 )
              goto LABEL_118;
            v85 = RtlUIntAdd(HIDWORD(v1614), v1548, (unsigned int *)&v1614 + 1);
            LODWORD(v1485) = v85;
            if ( v85 >= 0 )
            {
              v128 = 1LL;
              v129 = v1614 + 1;
              LODWORD(v1614) = v1614 + 1;
              goto LABEL_177;
            }
          }
          v89 = v82;
          goto LABEL_101;
        }
        if ( (_DWORD)Size )
          goto LABEL_162;
LABEL_140:
        v85 = -1073741811;
        goto LABEL_99;
      }
    }
    v89 = v82;
    goto LABEL_101;
  }
  v85 = -2147024882;
LABEL_1595:
  v1223 = v1490;
LABEL_1596:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1224 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v1224 == 1 )
    {
      v1225 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v1226 = 4LL;
      do
      {
        if ( *v1225 )
          FreeLibrary(*v1225);
        v1225 += 3;
        --v1226;
      }
      while ( v1226 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1479);
  if ( v85 < 0 )
  {
    switch ( v85 )
    {
      case -805306316:
        LODWORD(v1512) = -1073418222;
LABEL_1613:
        v1227 = 3;
        goto LABEL_1617;
      case -805306139:
      case -1073425151:
        LODWORD(v1512) = -1073418201;
        goto LABEL_1613;
      case -805306306:
        LODWORD(v1512) = -1073418200;
        goto LABEL_1613;
    }
    LODWORD(v1512) = v85;
    if ( v85 != -2147024774 )
      goto LABEL_1613;
LABEL_1612:
    LODWORD(v1512) = -1073418210;
    goto LABEL_1613;
  }
  if ( v1223 != 4 )
    goto LABEL_1612;
  v1227 = *v1568;
LABEL_1617:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1568);
  if ( (int)v1512 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC8,
      (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\MeetAndChatHelpers.h",
      (const char *)(unsigned int)v1512);
  return v1227;
}
