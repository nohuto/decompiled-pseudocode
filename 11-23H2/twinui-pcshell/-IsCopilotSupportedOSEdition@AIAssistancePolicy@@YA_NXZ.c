/*
 * XREFs of ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x180265588
 * Callers:
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180273D10 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
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
 *     ??$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@Z @ 0x18025DDD0 (--$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0D.c)
 *     ??1SH_HANDLE@@QEAA@XZ @ 0x180286130 (--1SH_HANDLE@@QEAA@XZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x180286160 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall AIAssistancePolicy::IsCopilotSupportedOSEdition(AIAssistancePolicy *this)
{
  unsigned int v1; // r15d
  int v2; // eax
  _BYTE *v3; // rbx
  int v4; // esi
  _BYTE *v5; // r14
  int v6; // r12d
  unsigned __int8 *v7; // r15
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // r13
  int v11; // r9d
  int v12; // r8d
  int v13; // eax
  int v14; // r9d
  int v15; // r11d
  int v16; // r8d
  unsigned int v17; // r10d
  int v18; // r11d
  unsigned int v19; // r10d
  int v20; // r11d
  int v21; // r10d
  unsigned int v22; // r11d
  int v23; // r10d
  int v24; // r11d
  int v25; // r10d
  unsigned int v26; // r11d
  int v27; // edx
  int v28; // r11d
  unsigned int v29; // r10d
  int v30; // r11d
  int v31; // r10d
  int v32; // r11d
  int v33; // r10d
  unsigned int v34; // r11d
  int v35; // r10d
  int v36; // r11d
  int v37; // r10d
  unsigned int v38; // r11d
  int v39; // r10d
  int v40; // edx
  int v41; // eax
  int v42; // r10d
  int v43; // edx
  int v44; // r11d
  int v45; // r11d
  int v46; // r10d
  int v47; // r11d
  int v48; // r10d
  int v49; // r11d
  int v50; // r10d
  unsigned __int64 v51; // rax
  char v52; // cl
  int v53; // esi
  unsigned int v54; // r12d
  int v55; // r13d
  __int64 v56; // rbx
  HMODULE *v57; // rdi
  void *v58; // r14
  __int64 v59; // rax
  const WCHAR *v60; // rdx
  _BYTE *v61; // rbx
  char *v62; // rdi
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned int v65; // eax
  unsigned int i; // r15d
  const CHAR *v67; // rdx
  __int64 v68; // rax
  void **ProcAddress; // rax
  HANDLE ProcessHeap; // rax
  int v71; // esi
  signed int LastError; // edi
  __int64 v73; // r14
  wchar_t *v74; // rax
  bool v75; // sf
  wchar_t *v76; // rbx
  __int64 j; // r9
  wchar_t *v78; // r8
  signed int v79; // eax
  HDESK (__fastcall *v80)(WARBIRD_DELAY_LOAD *__hidden, unsigned int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v82; // r14
  wchar_t *v83; // rax
  bool v84; // sf
  wchar_t *v85; // rbx
  __int64 k; // r9
  wchar_t *v87; // r8
  signed int v88; // eax
  HANDLE CurrentProcess; // rax
  unsigned int v90; // r13d
  HLOCAL v91; // rax
  void *v92; // r15
  int v93; // r14d
  void *v94; // r12
  HANDLE v95; // rax
  _OWORD *v96; // rax
  unsigned int v97; // edi
  void *v98; // r13
  HANDLE v99; // rax
  void *v100; // r13
  HANDLE v101; // rax
  HANDLE v102; // rax
  HANDLE v103; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v105; // r12
  HANDLE v106; // rax
  _QWORD *v107; // r10
  void *v108; // r10
  int v109; // eax
  unsigned int v110; // r9d
  void *v111; // r10
  int v112; // eax
  unsigned int v113; // r9d
  int v114; // eax
  unsigned int v115; // r9d
  int v116; // eax
  size_t v117; // rdx
  int v118; // eax
  int v119; // eax
  unsigned int v120; // r9d
  int v121; // eax
  unsigned int v122; // edi
  HANDLE v123; // rax
  void *v124; // rax
  _DWORD *v125; // rdi
  int v126; // eax
  int v127; // r11d
  _DWORD *v128; // rax
  int v129; // r10d
  int v130; // eax
  unsigned int v131; // r9d
  int v132; // r10d
  int *v133; // rdi
  unsigned int v134; // r9d
  unsigned int v135; // r10d
  unsigned int v136; // r11d
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
  SIZE_T *v150; // rax
  unsigned int v151; // r10d
  unsigned int v152; // r11d
  int v153; // eax
  int *v154; // rdi
  int v155; // r11d
  __int64 v156; // r9
  void *v157; // rcx
  int v158; // eax
  __int64 v159; // r9
  int v160; // r10d
  int v161; // edi
  int *v162; // rdi
  unsigned int v163; // r10d
  unsigned int *v164; // rax
  unsigned int v165; // r9d
  int *v166; // rdi
  unsigned int v167; // r10d
  unsigned int *v168; // rax
  unsigned int v169; // ecx
  unsigned int v170; // edi
  int v171; // eax
  unsigned int v172; // r9d
  unsigned __int8 *v173; // r11
  unsigned int v174; // r9d
  unsigned int v175; // r9d
  unsigned int v176; // r9d
  unsigned int v177; // edi
  unsigned __int8 *v178; // r13
  unsigned int v179; // r9d
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
  int v242; // ecx
  int v243; // r9d
  int v244; // r10d
  int v245; // r9d
  int v246; // r10d
  int v247; // r9d
  int v248; // r10d
  int v249; // r9d
  int v250; // r10d
  HANDLE v251; // rax
  _QWORD *v252; // r14
  int v253; // r14d
  unsigned int *v254; // rdi
  HANDLE v255; // rax
  void *v256; // rax
  HANDLE v257; // rax
  _OWORD *v258; // rax
  HANDLE v259; // rax
  LPVOID v260; // rax
  _QWORD *v261; // rax
  HANDLE v262; // rax
  HANDLE v263; // rax
  HANDLE v264; // rax
  HANDLE v265; // rax
  HANDLE v266; // rax
  _QWORD *v267; // rax
  HANDLE v268; // rax
  HANDLE v269; // rax
  HANDLE v270; // rax
  HANDLE v271; // rax
  int v272; // edx
  int v273; // r10d
  int v274; // r11d
  int v275; // r14d
  int v276; // r11d
  unsigned int v277; // edi
  HANDLE v278; // rax
  _DWORD *v279; // rax
  unsigned int *v280; // r9
  void *v281; // rcx
  void *v282; // rcx
  void *v283; // r10
  void *v284; // rcx
  void *v285; // r10
  HANDLE v286; // rax
  int v287; // eax
  int v288; // ecx
  void *v289; // r11
  unsigned int v290; // eax
  void *v291; // r11
  LPVOID v292; // rcx
  unsigned int v293; // r11d
  int v294; // r10d
  LPVOID v295; // rcx
  unsigned int v296; // r11d
  int v297; // r10d
  int v298; // ecx
  void *v299; // r9
  int v300; // r10d
  unsigned int v301; // eax
  void *v302; // r14
  unsigned int v303; // edi
  HANDLE v304; // rax
  void *v305; // rax
  _DWORD *v306; // rdi
  signed int v307; // eax
  unsigned int v308; // edx
  HANDLE v309; // rax
  void *v310; // r13
  void *v311; // r13
  HANDLE v312; // rax
  void *v313; // r13
  HANDLE v314; // rax
  HANDLE v315; // rax
  HANDLE v316; // rax
  void *v317; // rdi
  HANDLE v318; // rax
  void *v319; // rdi
  HANDLE v320; // rax
  void *v321; // r13
  HANDLE v322; // rax
  void *v323; // r13
  HANDLE v324; // rax
  HANDLE v325; // rax
  HANDLE v326; // rax
  HANDLE v327; // rax
  FARPROC v328; // rax
  signed int v329; // eax
  int v330; // eax
  _DWORD *v331; // r9
  unsigned __int8 *v332; // rdi
  unsigned __int8 *v333; // r11
  void *v334; // r10
  void *v335; // rcx
  void *v336; // rax
  int v337; // r14d
  unsigned __int8 *v338; // rax
  void *v339; // r9
  unsigned __int8 *v340; // r11
  void *v341; // r10
  int v342; // eax
  unsigned __int8 *v343; // r8
  unsigned __int8 *v344; // r11
  void *v345; // r9
  unsigned __int8 *v346; // r11
  void *v347; // r10
  unsigned __int8 *v348; // r11
  void *v349; // r9
  unsigned __int8 *v350; // r11
  void *v351; // r10
  unsigned __int8 *v352; // r11
  void *v353; // r9
  unsigned __int8 *v354; // r11
  void *v355; // r10
  unsigned __int8 *v356; // r11
  void *v357; // r9
  unsigned __int8 *v358; // r11
  void *v359; // r10
  unsigned __int8 *v360; // r11
  unsigned __int8 *v361; // r11
  HANDLE v362; // rax
  _QWORD *v363; // rdx
  HANDLE v364; // rax
  void *v365; // rcx
  HANDLE v366; // rax
  void *v367; // rcx
  HANDLE v368; // rax
  void *v369; // rcx
  _QWORD *v370; // rax
  HANDLE v371; // rax
  HANDLE v372; // rax
  HANDLE v373; // rax
  HANDLE v374; // rax
  unsigned __int8 *v375; // r11
  void *v376; // r14
  HANDLE v377; // rax
  void *v378; // r14
  HANDLE v379; // rax
  void *v380; // r14
  HANDLE v381; // rax
  HANDLE v382; // rax
  SIZE_T v383; // r14
  _DWORD *v384; // r11
  unsigned __int8 *v385; // r8
  unsigned __int8 v386; // dl
  unsigned __int8 *v387; // r10
  _DWORD *v388; // rcx
  unsigned int v389; // ecx
  char v390; // dl
  int v391; // r11d
  unsigned __int8 *v392; // rsi
  int v393; // r14d
  unsigned int v394; // r14d
  unsigned int v395; // ecx
  int v396; // ebx
  int v397; // edi
  _BYTE *v398; // r8
  char v399; // r10
  int v400; // r13d
  _BYTE *v401; // r12
  unsigned int v402; // ebx
  unsigned __int8 *v403; // r15
  int v404; // edx
  int v405; // r11d
  unsigned __int64 v406; // r10
  int v407; // r9d
  int v408; // r8d
  int v409; // eax
  int v410; // r9d
  int v411; // r14d
  int v412; // r8d
  unsigned int v413; // edi
  int v414; // r14d
  unsigned int v415; // edi
  int v416; // r14d
  int v417; // edi
  unsigned int v418; // r14d
  int v419; // edi
  int v420; // r14d
  int v421; // edi
  unsigned int v422; // r14d
  int v423; // edi
  int v424; // r14d
  unsigned int v425; // ebx
  int v426; // r14d
  int v427; // ebx
  int v428; // r14d
  int v429; // ebx
  unsigned int v430; // r14d
  int v431; // ebx
  int v432; // r14d
  int v433; // ebx
  unsigned int v434; // r14d
  int v435; // ecx
  int v436; // ebx
  int v437; // ecx
  int v438; // r14d
  int v439; // r14d
  int v440; // ebx
  int v441; // r14d
  int v442; // ebx
  int v443; // r14d
  int v444; // ebx
  unsigned __int64 mm; // rax
  unsigned __int8 *v446; // r9
  unsigned __int8 *v447; // r8
  void *v448; // rdi
  int v449; // r14d
  WCHAR *v450; // r11
  unsigned __int8 *v451; // r9
  unsigned __int8 *v452; // r10
  WCHAR *v453; // r11
  unsigned __int8 *v454; // r9
  unsigned __int8 *v455; // r10
  unsigned __int8 *v456; // r10
  unsigned __int8 *v457; // r9
  WCHAR *v458; // r11
  WCHAR *v459; // r14
  void *v460; // r10
  unsigned __int64 v461; // rcx
  int *v462; // rcx
  int v463; // eax
  void *v464; // r9
  unsigned __int8 *v465; // r11
  WCHAR *v466; // r10
  HANDLE v467; // rax
  size_t v468; // rdi
  void *v469; // rcx
  _DWORD *v470; // r13
  unsigned int v471; // r9d
  __int64 v472; // r11
  _DWORD *v473; // rax
  int *v474; // rcx
  int v475; // edi
  unsigned int v476; // r10d
  int v477; // edi
  __int64 v478; // r11
  int *v479; // rax
  int *v480; // rcx
  int v481; // edi
  unsigned int v482; // r10d
  int v483; // edi
  __int64 v484; // r11
  int *v485; // rax
  int *v486; // rcx
  int v487; // edi
  unsigned int v488; // r10d
  int v489; // edi
  int *v490; // r11
  int *v491; // rcx
  int v492; // edi
  unsigned int v493; // r10d
  int v494; // edi
  int *v495; // rax
  _DWORD *v496; // rcx
  unsigned int v497; // edi
  unsigned int v498; // r9d
  int v499; // edi
  int v500; // eax
  const void *v501; // r11
  _DWORD *v502; // rax
  __int64 v503; // rax
  unsigned int v504; // edi
  int v505; // eax
  char *v506; // rax
  _BYTE *v507; // rsi
  int v508; // r15d
  unsigned __int8 *v509; // rbx
  int v510; // ecx
  int v511; // r13d
  __int64 v512; // rdi
  int v513; // r11d
  int v514; // r10d
  int v515; // eax
  int v516; // r11d
  int v517; // r13d
  int v518; // r10d
  int v519; // r9d
  int v520; // r13d
  unsigned int v521; // r9d
  int v522; // r13d
  int v523; // r9d
  unsigned int v524; // r13d
  int v525; // r9d
  int v526; // r13d
  int v527; // r9d
  unsigned int v528; // r13d
  int v529; // edx
  int v530; // r13d
  unsigned int v531; // r12d
  int v532; // r13d
  int v533; // r12d
  int v534; // r13d
  int v535; // r12d
  unsigned int v536; // r13d
  int v537; // r12d
  int v538; // r13d
  int v539; // r12d
  unsigned int v540; // r13d
  int v541; // r12d
  int v542; // edx
  int v543; // eax
  int v544; // r12d
  int v545; // edx
  int v546; // r13d
  int v547; // r13d
  int v548; // r12d
  int v549; // r13d
  int v550; // r12d
  int v551; // r13d
  int v552; // r12d
  int v553; // r13d
  unsigned __int64 v554; // rax
  WCHAR *v555; // r15
  char v556; // cl
  const WCHAR *v557; // rdx
  __int64 v558; // rax
  WCHAR *v559; // r15
  char *v560; // r13
  int v561; // r12d
  __int64 v562; // rcx
  unsigned __int64 v563; // rcx
  unsigned int v564; // eax
  unsigned int v565; // ecx
  const CHAR *v566; // rdx
  __int64 v567; // rax
  void **v568; // rax
  HANDLE v569; // rax
  HMODULE *v570; // r15
  __int64 v571; // r12
  int v572; // eax
  char *v573; // rax
  _BYTE *v574; // rsi
  int v575; // r15d
  unsigned __int8 *v576; // rbx
  __int64 v577; // rdi
  int v578; // ecx
  int v579; // r12d
  int v580; // r11d
  int v581; // r10d
  int v582; // eax
  int v583; // r11d
  int v584; // r13d
  int v585; // r10d
  unsigned int v586; // r9d
  int v587; // r13d
  unsigned int v588; // r9d
  int v589; // r13d
  int v590; // r9d
  unsigned int v591; // r13d
  int v592; // r9d
  int v593; // r13d
  int v594; // r9d
  unsigned int v595; // r13d
  int v596; // r9d
  int v597; // r13d
  unsigned int v598; // r12d
  int v599; // r13d
  int v600; // r12d
  int v601; // r13d
  int v602; // r12d
  unsigned int v603; // r13d
  int v604; // r12d
  int v605; // r13d
  int v606; // r12d
  unsigned int v607; // r13d
  int v608; // r12d
  int v609; // edx
  int v610; // eax
  int v611; // r12d
  int v612; // edx
  int v613; // r13d
  int v614; // r13d
  int v615; // r12d
  int v616; // r13d
  int v617; // r12d
  int v618; // r13d
  int v619; // r12d
  char v620; // cl
  unsigned __int64 v621; // rax
  WCHAR *v622; // r15
  HMODULE *v623; // r15
  __int64 v624; // r12
  const WCHAR *v625; // rdx
  __int64 v626; // rax
  WCHAR *v627; // r15
  char *v628; // r13
  int v629; // r12d
  __int64 v630; // rcx
  unsigned __int64 v631; // rcx
  unsigned int v632; // eax
  unsigned int v633; // ecx
  const CHAR *v634; // rdx
  __int64 v635; // rax
  void **v636; // rax
  HANDLE v637; // rax
  int v638; // r13d
  signed int v639; // eax
  signed int v640; // r15d
  _DWORD *v641; // rdi
  signed int v642; // eax
  char *v643; // r13
  _DWORD *v644; // r12
  unsigned int kk; // ebx
  __int64 v646; // rax
  unsigned int v647; // r10d
  unsigned int v648; // r9d
  __int64 v649; // r8
  unsigned int v650; // ecx
  unsigned int *v651; // rdx
  __int64 v652; // rdi
  const wchar_t *v653; // rcx
  __int64 v654; // r8
  const wchar_t **v655; // rdx
  __int64 v656; // rax
  char *v657; // rax
  const wchar_t *v658; // r13
  void **v659; // rax
  unsigned __int8 *v660; // r13
  int v661; // r10d
  int v662; // ebx
  int v663; // r15d
  int v664; // r11d
  _BYTE *v665; // r12
  __int64 v666; // rsi
  int v667; // r9d
  int v668; // r8d
  int v669; // eax
  int v670; // r9d
  int v671; // r11d
  int v672; // r8d
  unsigned int v673; // edi
  int v674; // r11d
  unsigned int v675; // edi
  int v676; // r11d
  int v677; // edi
  unsigned int v678; // r11d
  int v679; // edi
  int v680; // r11d
  int v681; // edi
  unsigned int v682; // r11d
  int v683; // edi
  int v684; // r11d
  unsigned int v685; // r15d
  int v686; // r11d
  int v687; // r15d
  int v688; // r11d
  int v689; // r15d
  unsigned int v690; // r11d
  int v691; // r15d
  int v692; // r11d
  int v693; // r15d
  unsigned int v694; // r11d
  int v695; // r15d
  int v696; // ecx
  int v697; // eax
  int v698; // r15d
  int v699; // ecx
  int v700; // r11d
  int v701; // r11d
  int v702; // r15d
  int v703; // r11d
  int v704; // r15d
  int v705; // r11d
  int v706; // r15d
  char *v707; // r10
  unsigned __int64 v708; // rax
  __m128i v709; // xmm1
  __m128i v710; // xmm0
  __m128i v711; // xmm0
  __m128i v712; // xmm1
  __m128i v713; // xmm1
  __m128i v714; // xmm1
  _QWORD *v715; // rdx
  __int64 v716; // rdi
  unsigned int jj; // ecx
  __int64 v718; // rax
  char *v719; // r12
  _QWORD *v720; // rdx
  __int16 *v721; // rcx
  unsigned int v722; // edi
  __int16 v723; // r8
  __int16 *v724; // rcx
  __int64 v725; // rax
  __int64 v726; // rdi
  __int64 v727; // rcx
  int v728; // eax
  LPVOID v729; // rax
  __int64 v730; // rcx
  signed int v731; // eax
  signed int v732; // eax
  __int64 v733; // rcx
  _WORD *v734; // rdi
  __int64 v735; // rcx
  void **v736; // rax
  void **v737; // rax
  void *v738; // rax
  signed int v739; // eax
  unsigned int v740; // edi
  const wchar_t *v741; // r12
  signed int v742; // eax
  int v743; // eax
  __int64 v744; // rax
  signed int v745; // eax
  __int64 v746; // r12
  int v747; // eax
  __int64 v748; // rax
  signed int v749; // eax
  unsigned int v750; // edx
  unsigned int v751; // r13d
  int v752; // eax
  void *v753; // rdi
  unsigned int v754; // r12d
  void *v755; // rdi
  __int64 v756; // rdi
  bool v757; // sf
  unsigned int v758; // r13d
  int v759; // eax
  __int64 v760; // rax
  bool v761; // sf
  void *v762; // rdi
  __int64 v763; // r12
  int v764; // eax
  __int64 v765; // rdx
  int v766; // edx
  int v767; // r12d
  int v768; // r15d
  int v769; // edi
  __int64 v770; // rax
  __int64 v771; // rax
  int v772; // edx
  int v773; // eax
  HMODULE *v774; // rdi
  unsigned int v775; // edi
  int v776; // r15d
  __int64 v777; // rax
  int v778; // eax
  int v779; // r13d
  void *v780; // r12
  __int64 v781; // rax
  LPVOID v782; // r15
  signed int v783; // eax
  signed int v784; // edi
  bool v785; // zf
  char *v786; // rcx
  __int64 v787; // rax
  __int64 (__fastcall *v788)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v789; // rax
  int v790; // eax
  int v791; // r12d
  int v792; // r9d
  int v793; // edx
  int v794; // r10d
  int v795; // r8d
  int v796; // r13d
  int v797; // r11d
  __int64 v798; // rdi
  unsigned __int8 *v799; // rdx
  size_t v800; // rax
  __int64 v801; // rsi
  size_t v802; // r10
  unsigned __int8 *v803; // r9
  int v804; // r8d
  int v805; // r8d
  int v806; // edi
  int v807; // edx
  int v808; // edi
  int v809; // edx
  int v810; // edi
  int v811; // ecx
  void *v812; // r12
  int v813; // r13d
  __int64 v814; // rax
  LPVOID v815; // r15
  signed int v816; // eax
  signed int v817; // edi
  char *v818; // rcx
  __int64 v819; // rax
  __int64 (__fastcall *v820)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v821; // rax
  int v822; // eax
  int v823; // r9d
  int v824; // r8d
  int v825; // r10d
  int v826; // edx
  int v827; // r12d
  int v828; // r11d
  int v829; // r13d
  char *v830; // r13
  size_t v831; // rax
  unsigned __int8 *v832; // r9
  size_t v833; // r10
  int v834; // r8d
  int v835; // r8d
  int v836; // edi
  int v837; // edx
  int v838; // edi
  int v839; // edx
  int v840; // edi
  int v841; // ecx
  void *v842; // rdi
  SIZE_T v843; // r12
  char v844; // al
  int v845; // r13d
  unsigned int v846; // r15d
  int v847; // edx
  int v848; // r11d
  int v849; // edi
  int v850; // r12d
  SIZE_T v851; // rax
  __int64 v852; // rax
  SIZE_T v853; // rcx
  __int64 v854; // rcx
  __int64 v855; // rcx
  __int64 v856; // rcx
  int v857; // eax
  HMODULE *v858; // rdi
  __int64 v859; // r15
  int v860; // r13d
  int v861; // eax
  char *v862; // rax
  _BYTE *v863; // r15
  int v864; // ebx
  _BYTE *v865; // r13
  int v866; // esi
  unsigned __int8 *v867; // r12
  int v868; // r10d
  __int64 v869; // rcx
  int v870; // r11d
  int v871; // r9d
  int v872; // r8d
  int v873; // eax
  int v874; // r9d
  int v875; // r11d
  int v876; // r8d
  unsigned int v877; // r10d
  int v878; // r11d
  unsigned int v879; // r10d
  int v880; // r11d
  int v881; // r10d
  unsigned int v882; // r11d
  int v883; // r10d
  int v884; // r11d
  int v885; // r10d
  unsigned int v886; // r11d
  int v887; // edx
  int v888; // r11d
  unsigned int v889; // r10d
  int v890; // r11d
  int v891; // r10d
  int v892; // r11d
  int v893; // r10d
  unsigned int v894; // r11d
  int v895; // r10d
  int v896; // r11d
  int v897; // r10d
  unsigned int v898; // r11d
  int v899; // r10d
  int v900; // edx
  int v901; // eax
  int v902; // r10d
  int v903; // edx
  int v904; // r11d
  int v905; // r11d
  int v906; // r10d
  int v907; // r11d
  int v908; // r10d
  int v909; // r11d
  int v910; // r10d
  int v911; // r12d
  unsigned __int64 v912; // rax
  char v913; // cl
  __int64 v914; // r15
  HMODULE *v915; // rdi
  int v916; // edi
  __int64 v917; // rax
  signed int v918; // eax
  signed int v919; // edi
  int v920; // eax
  char *v921; // rcx
  __int64 v922; // rax
  __int64 (__fastcall *v923)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v924; // rax
  int v925; // r9d
  int v926; // r10d
  __int64 v927; // r13
  int v928; // ecx
  int v929; // edx
  int v930; // r8d
  int v931; // r11d
  char *v932; // rsi
  char *v933; // rax
  signed int v934; // r15d
  unsigned __int8 *v935; // r9
  int v936; // ebx
  signed __int64 v937; // r10
  int v938; // r8d
  int v939; // edi
  int v940; // edx
  int v941; // edi
  int v942; // edx
  int v943; // edi
  int v944; // ecx
  void *v945; // rdi
  __int64 v946; // rax
  LPVOID v947; // r13
  int v948; // r12d
  __int64 v949; // rax
  signed int v950; // eax
  signed int v951; // edi
  int v952; // eax
  char *v953; // rcx
  __int64 v954; // rax
  __int64 (__fastcall *v955)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v956; // rax
  int v957; // eax
  __int64 v958; // r10
  int v959; // r8d
  int v960; // r9d
  int v961; // edx
  int v962; // ecx
  int v963; // r12d
  int v964; // r11d
  int v965; // edx
  char *v966; // r8
  size_t v967; // rax
  unsigned __int8 *v968; // r9
  size_t v969; // r10
  int ii; // ebx
  int v971; // r8d
  int v972; // edi
  int v973; // edx
  int v974; // edi
  int v975; // edx
  void *v976; // r13
  const WCHAR *v977; // rdx
  __int64 v978; // rax
  _BYTE *v979; // r15
  char *v980; // rdi
  __int64 v981; // rcx
  unsigned __int64 v982; // rcx
  unsigned int v983; // eax
  unsigned int v984; // ecx
  const CHAR *v985; // rdx
  __int64 v986; // rax
  void **v987; // rax
  HANDLE v988; // rax
  __int64 v989; // r15
  int v990; // eax
  HMODULE *v991; // rdi
  void *v992; // r15
  HANDLE v993; // rax
  _OWORD *v994; // rax
  HANDLE v995; // rax
  _QWORD *v996; // rax
  _QWORD *v997; // r13
  unsigned int v998; // r11d
  int v999; // eax
  int v1000; // r9d
  unsigned int v1001; // r11d
  int v1002; // r10d
  int v1003; // eax
  int v1004; // r9d
  unsigned int v1005; // r11d
  int v1006; // r10d
  int v1007; // eax
  int v1008; // r10d
  unsigned int v1009; // edi
  HANDLE v1010; // rax
  void *v1011; // rdi
  unsigned __int8 *v1012; // r13
  int v1013; // r10d
  _DWORD *v1014; // r11
  _DWORD *v1015; // rax
  int v1016; // r11d
  __int64 v1017; // r11
  int *v1018; // r9
  unsigned __int64 v1019; // r9
  unsigned int v1020; // r11d
  unsigned int *v1021; // r9
  unsigned int v1022; // r10d
  int v1023; // r9d
  int v1024; // r10d
  __int64 v1025; // r11
  int *v1026; // r10
  unsigned __int64 v1027; // r10
  unsigned int v1028; // r9d
  _DWORD *v1029; // r10
  unsigned int v1030; // edi
  int v1031; // r10d
  unsigned int v1032; // r11d
  int *v1033; // r9
  unsigned __int64 v1034; // r9
  _DWORD *v1035; // r9
  SIZE_T *v1036; // rax
  unsigned int v1037; // ecx
  unsigned int v1038; // edi
  int v1039; // edi
  unsigned int v1040; // r9d
  WCHAR *v1041; // r11
  unsigned int v1042; // ecx
  unsigned int v1043; // edi
  HANDLE v1044; // rax
  unsigned __int8 *v1045; // rax
  int v1046; // eax
  void *v1047; // r9
  void *v1048; // rcx
  int v1049; // eax
  char *v1050; // r9
  HANDLE v1051; // rax
  int v1052; // edi
  unsigned __int64 v1053; // rdi
  unsigned __int8 v1054; // al
  unsigned __int64 v1055; // rcx
  char *v1056; // rcx
  int v1057; // r9d
  unsigned __int64 v1058; // r11
  unsigned __int8 *v1059; // rdi
  unsigned int v1060; // r10d
  int v1061; // edx
  unsigned int v1062; // ecx
  int v1063; // r9d
  char v1064; // bl
  int v1065; // r8d
  _BYTE *v1066; // rsi
  unsigned int v1067; // r9d
  unsigned int v1068; // ecx
  unsigned int v1069; // r8d
  int v1070; // r11d
  char v1071; // di
  _BYTE *v1072; // r13
  unsigned __int8 *v1073; // r14
  unsigned __int64 v1074; // rsi
  int v1075; // r12d
  int v1076; // r15d
  int v1077; // eax
  int v1078; // r8d
  int v1079; // edi
  int v1080; // ecx
  int v1081; // r8d
  int v1082; // edi
  int v1083; // r9d
  int v1084; // r10d
  int v1085; // edx
  int v1086; // r10d
  int v1087; // r9d
  int v1088; // r10d
  int v1089; // r9d
  unsigned int v1090; // r10d
  int v1091; // r9d
  int v1092; // r10d
  int v1093; // r9d
  int v1094; // r10d
  unsigned int v1095; // r9d
  int v1096; // r10d
  unsigned int v1097; // r9d
  unsigned int v1098; // r10d
  int v1099; // r9d
  int v1100; // r10d
  int v1101; // r9d
  int v1102; // r10d
  int v1103; // r9d
  int v1104; // r10d
  int v1105; // r9d
  int v1106; // r10d
  unsigned int v1107; // r9d
  int v1108; // r10d
  unsigned int v1109; // r9d
  int v1110; // r10d
  int v1111; // r9d
  int v1112; // r10d
  int v1113; // r9d
  int v1114; // r10d
  int v1115; // r9d
  int v1116; // r10d
  int v1117; // r9d
  HANDLE v1118; // rax
  unsigned int *v1119; // rbx
  int v1120; // edi
  HANDLE v1121; // rax
  void *v1122; // rax
  HANDLE v1123; // rax
  _OWORD *v1124; // rax
  HANDLE v1125; // rax
  _QWORD *v1126; // rax
  HANDLE v1127; // rax
  HANDLE v1128; // rax
  HANDLE v1129; // rax
  HANDLE v1130; // rax
  HANDLE v1131; // rax
  WCHAR *v1132; // rax
  HANDLE v1133; // rax
  HANDLE v1134; // rax
  HANDLE v1135; // rax
  HANDLE v1136; // rax
  int v1137; // edx
  int v1138; // edi
  int v1139; // r10d
  int v1140; // r10d
  unsigned int v1141; // edi
  HANDLE v1142; // rax
  _DWORD *v1143; // rax
  int v1144; // eax
  void *v1145; // rcx
  void *v1146; // rcx
  int v1147; // eax
  void *v1148; // r10
  void *v1149; // rcx
  int v1150; // eax
  void *v1151; // r10
  HANDLE v1152; // rax
  int v1153; // eax
  int v1154; // ecx
  void *v1155; // r10
  unsigned int v1156; // eax
  HANDLE v1157; // rax
  _QWORD *v1158; // rbx
  void *v1159; // rsi
  HANDLE v1160; // rax
  void *v1161; // rsi
  HANDLE v1162; // rax
  void *v1163; // rsi
  HANDLE v1164; // rax
  HANDLE v1165; // rax
  HANDLE v1166; // rax
  HANDLE v1167; // rax
  void *v1168; // rsi
  HANDLE v1169; // rax
  void *v1170; // rsi
  HANDLE v1171; // rax
  void *v1172; // rsi
  HANDLE v1173; // rax
  HANDLE v1174; // rax
  HANDLE v1175; // rax
  _DWORD *v1176; // rdi
  unsigned __int64 v1177; // rcx
  __int64 v1178; // r11
  int *v1179; // rax
  int v1180; // edi
  unsigned int v1181; // r9d
  void *v1182; // r10
  void *v1183; // rcx
  unsigned int v1184; // r11d
  int v1185; // r10d
  void *v1186; // rcx
  unsigned int v1187; // r11d
  int v1188; // r10d
  int v1189; // ecx
  int v1190; // r10d
  const WCHAR *v1191; // r9
  unsigned int v1192; // edi
  HANDLE v1193; // rax
  _DWORD *v1194; // rbx
  LPCWSTR v1195; // rax
  signed int v1196; // eax
  unsigned int v1197; // edx
  FARPROC v1198; // rax
  signed int v1199; // eax
  int v1200; // eax
  _DWORD *v1201; // r9
  SIZE_T v1202; // rbx
  unsigned __int8 *v1203; // r11
  LPCWSTR v1204; // r10
  __int64 v1205; // rcx
  SIZE_T v1206; // rax
  int v1207; // edi
  _QWORD *v1208; // rax
  void *v1209; // r9
  unsigned __int8 *v1210; // r11
  void *v1211; // r10
  int v1212; // eax
  SIZE_T v1213; // r8
  SIZE_T v1214; // r11
  void *v1215; // r9
  SIZE_T v1216; // r11
  void *v1217; // r10
  SIZE_T v1218; // r11
  void *v1219; // r9
  SIZE_T v1220; // r11
  void *v1221; // r10
  SIZE_T v1222; // r11
  void *v1223; // r9
  SIZE_T v1224; // r11
  void *v1225; // r10
  SIZE_T v1226; // r11
  void *v1227; // r9
  SIZE_T v1228; // r11
  void *v1229; // r10
  SIZE_T v1230; // r11
  SIZE_T v1231; // r11
  HANDLE v1232; // rax
  _QWORD *v1233; // rdx
  HANDLE v1234; // rax
  void *v1235; // rcx
  HANDLE v1236; // rax
  void *v1237; // rcx
  HANDLE v1238; // rax
  void *v1239; // rcx
  _QWORD *v1240; // rax
  HANDLE v1241; // rax
  HANDLE v1242; // rax
  HANDLE v1243; // rax
  HANDLE v1244; // rax
  unsigned int *v1245; // r11
  void *v1246; // rbx
  HANDLE v1247; // rax
  void *v1248; // rbx
  HANDLE v1249; // rax
  void *v1250; // rbx
  HANDLE v1251; // rax
  HANDLE v1252; // rax
  SIZE_T v1253; // rdi
  _DWORD *v1254; // rax
  unsigned int v1255; // r11d
  _DWORD *v1256; // r9
  SIZE_T v1257; // rcx
  unsigned __int8 v1258; // dl
  _QWORD *v1259; // r10
  unsigned int v1260; // r9d
  int v1261; // r14d
  unsigned __int8 *v1262; // rsi
  int v1263; // r11d
  int v1264; // ecx
  int v1265; // r8d
  unsigned int v1266; // r8d
  int v1267; // ecx
  unsigned int v1268; // edx
  _BYTE *v1269; // rdi
  int v1270; // ebx
  char v1271; // r10
  SIZE_T v1272; // rdi
  int v1273; // r10d
  unsigned __int8 *v1274; // r15
  unsigned int v1275; // edx
  int v1276; // ebx
  _BYTE *v1277; // r12
  SIZE_T v1278; // r13
  int v1279; // r14d
  int v1280; // r9d
  int v1281; // r8d
  int v1282; // eax
  int v1283; // r9d
  int v1284; // r11d
  int v1285; // r8d
  int v1286; // edi
  int v1287; // r11d
  unsigned int v1288; // edi
  int v1289; // r11d
  int v1290; // edi
  unsigned int v1291; // r11d
  int v1292; // edi
  int v1293; // r11d
  int v1294; // edi
  unsigned int v1295; // r11d
  int v1296; // edi
  int v1297; // r11d
  unsigned int v1298; // edx
  int v1299; // r11d
  int v1300; // edx
  int v1301; // r11d
  int v1302; // edx
  unsigned int v1303; // r11d
  int v1304; // edx
  int v1305; // r11d
  int v1306; // edx
  unsigned int v1307; // r11d
  int v1308; // eax
  int v1309; // edx
  int v1310; // ecx
  int v1311; // r11d
  int v1312; // r11d
  int v1313; // edx
  int v1314; // r11d
  int v1315; // edx
  int v1316; // r11d
  int v1317; // edx
  SIZE_T m; // rax
  _QWORD *v1319; // r11
  int v1320; // edi
  void *v1321; // r9
  _QWORD *v1322; // r11
  int v1323; // eax
  void *v1324; // r8
  void *v1325; // r9
  _QWORD *v1326; // r11
  int v1327; // eax
  void *v1328; // r9
  _QWORD *v1329; // r11
  unsigned __int64 v1330; // rcx
  void *v1331; // rsi
  void *v1332; // r10
  int *v1333; // rcx
  unsigned int v1334; // r11d
  int v1335; // eax
  void *v1336; // r9
  _QWORD *v1337; // r10
  HANDLE v1338; // rax
  size_t v1339; // rbx
  void *v1340; // rsi
  void *v1341; // rdi
  HANDLE v1342; // rax
  void *v1343; // rdi
  HANDLE v1344; // rax
  HANDLE v1345; // rax
  HANDLE v1346; // rax
  int v1347; // esi
  int v1348; // eax
  __int64 v1349; // rbx
  HMODULE *v1350; // rdi
  int v1351; // ebx
  int v1352; // edi
  __int64 v1353; // rdx
  __int64 v1354; // rcx
  unsigned __int8 v1356; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1357; // [rsp+60h] [rbp-A0h]
  void *v1358; // [rsp+68h] [rbp-98h]
  _DWORD *v1359; // [rsp+68h] [rbp-98h]
  void *v1360; // [rsp+68h] [rbp-98h]
  void *v1361; // [rsp+68h] [rbp-98h]
  __int64 v1362; // [rsp+68h] [rbp-98h]
  int v1363; // [rsp+68h] [rbp-98h]
  int v1364; // [rsp+68h] [rbp-98h]
  int v1365; // [rsp+68h] [rbp-98h]
  int v1366; // [rsp+68h] [rbp-98h]
  int v1367; // [rsp+68h] [rbp-98h]
  unsigned int v1368; // [rsp+68h] [rbp-98h]
  unsigned int v1369; // [rsp+68h] [rbp-98h]
  int v1370; // [rsp+68h] [rbp-98h]
  int v1371; // [rsp+68h] [rbp-98h]
  unsigned int v1372; // [rsp+68h] [rbp-98h]
  int v1373; // [rsp+68h] [rbp-98h]
  int v1374; // [rsp+68h] [rbp-98h]
  void *v1375; // [rsp+70h] [rbp-90h]
  void *v1376; // [rsp+70h] [rbp-90h]
  SIZE_T v1377; // [rsp+70h] [rbp-90h]
  void *v1378; // [rsp+70h] [rbp-90h]
  __int64 v1379; // [rsp+70h] [rbp-90h]
  int v1380; // [rsp+70h] [rbp-90h]
  int v1381; // [rsp+70h] [rbp-90h]
  int v1382; // [rsp+70h] [rbp-90h]
  int v1383; // [rsp+70h] [rbp-90h]
  int v1384; // [rsp+70h] [rbp-90h]
  unsigned int v1385; // [rsp+70h] [rbp-90h]
  unsigned int v1386; // [rsp+70h] [rbp-90h]
  char *v1387; // [rsp+70h] [rbp-90h]
  int v1388; // [rsp+70h] [rbp-90h]
  int v1389; // [rsp+70h] [rbp-90h]
  unsigned int v1390; // [rsp+70h] [rbp-90h]
  int v1391; // [rsp+70h] [rbp-90h]
  unsigned int v1392; // [rsp+70h] [rbp-90h]
  unsigned int v1393; // [rsp+70h] [rbp-90h]
  unsigned int v1394; // [rsp+78h] [rbp-88h]
  void *v1395; // [rsp+78h] [rbp-88h]
  void *v1396; // [rsp+78h] [rbp-88h]
  void *v1397; // [rsp+78h] [rbp-88h]
  SIZE_T v1398; // [rsp+78h] [rbp-88h]
  SIZE_T v1399; // [rsp+78h] [rbp-88h]
  WCHAR *v1400; // [rsp+78h] [rbp-88h]
  SIZE_T v1401; // [rsp+78h] [rbp-88h]
  SIZE_T v1402; // [rsp+78h] [rbp-88h]
  SIZE_T v1403; // [rsp+78h] [rbp-88h]
  SIZE_T v1404; // [rsp+78h] [rbp-88h]
  SIZE_T v1405; // [rsp+78h] [rbp-88h]
  SIZE_T v1406; // [rsp+78h] [rbp-88h]
  SIZE_T v1407; // [rsp+78h] [rbp-88h]
  SIZE_T v1408; // [rsp+78h] [rbp-88h]
  SIZE_T v1409; // [rsp+78h] [rbp-88h]
  void *v1410; // [rsp+78h] [rbp-88h]
  SIZE_T v1411; // [rsp+78h] [rbp-88h]
  void *v1412; // [rsp+78h] [rbp-88h]
  int v1413; // [rsp+80h] [rbp-80h]
  char *v1414; // [rsp+80h] [rbp-80h]
  char *v1415; // [rsp+80h] [rbp-80h]
  LPVOID v1416; // [rsp+80h] [rbp-80h]
  LPVOID v1417; // [rsp+80h] [rbp-80h]
  LPVOID v1418; // [rsp+80h] [rbp-80h]
  void *v1419; // [rsp+80h] [rbp-80h]
  void *v1420; // [rsp+80h] [rbp-80h]
  void *v1421; // [rsp+80h] [rbp-80h]
  void *v1422; // [rsp+80h] [rbp-80h]
  void *v1423; // [rsp+80h] [rbp-80h]
  void *v1424; // [rsp+80h] [rbp-80h]
  LPVOID v1425; // [rsp+80h] [rbp-80h]
  void *v1426; // [rsp+88h] [rbp-78h]
  _BYTE *v1427; // [rsp+88h] [rbp-78h]
  int v1428; // [rsp+88h] [rbp-78h]
  unsigned int v1429; // [rsp+88h] [rbp-78h]
  int v1430; // [rsp+88h] [rbp-78h]
  int v1431; // [rsp+88h] [rbp-78h]
  int v1432; // [rsp+88h] [rbp-78h]
  int v1433; // [rsp+88h] [rbp-78h]
  unsigned int v1434; // [rsp+88h] [rbp-78h]
  unsigned int v1435; // [rsp+88h] [rbp-78h]
  int v1436; // [rsp+88h] [rbp-78h]
  int v1437; // [rsp+88h] [rbp-78h]
  char *v1438; // [rsp+88h] [rbp-78h]
  _QWORD *v1439; // [rsp+88h] [rbp-78h]
  void *v1440; // [rsp+90h] [rbp-70h]
  _QWORD *v1441; // [rsp+90h] [rbp-70h]
  void *v1442; // [rsp+90h] [rbp-70h]
  unsigned int v1443; // [rsp+90h] [rbp-70h]
  const wchar_t *v1444; // [rsp+90h] [rbp-70h]
  size_t v1445; // [rsp+90h] [rbp-70h]
  size_t v1446; // [rsp+90h] [rbp-70h]
  size_t v1447; // [rsp+90h] [rbp-70h]
  size_t v1448; // [rsp+90h] [rbp-70h]
  void *v1449; // [rsp+90h] [rbp-70h]
  size_t v1450; // [rsp+90h] [rbp-70h]
  size_t v1451; // [rsp+90h] [rbp-70h]
  size_t v1452; // [rsp+90h] [rbp-70h]
  _QWORD *v1453; // [rsp+90h] [rbp-70h]
  void *v1454; // [rsp+90h] [rbp-70h]
  void *v1455; // [rsp+90h] [rbp-70h]
  void *v1456; // [rsp+90h] [rbp-70h]
  unsigned __int8 *v1457; // [rsp+98h] [rbp-68h]
  LPVOID v1458; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v1459; // [rsp+98h] [rbp-68h]
  const wchar_t *v1460; // [rsp+98h] [rbp-68h]
  __int64 v1461; // [rsp+98h] [rbp-68h]
  LPVOID v1462; // [rsp+98h] [rbp-68h]
  LPVOID v1463; // [rsp+98h] [rbp-68h]
  LPVOID v1464; // [rsp+98h] [rbp-68h]
  char *v1465; // [rsp+98h] [rbp-68h]
  __int64 v1466; // [rsp+98h] [rbp-68h]
  LPVOID v1467; // [rsp+98h] [rbp-68h]
  void *v1468; // [rsp+98h] [rbp-68h]
  _DWORD *v1469; // [rsp+98h] [rbp-68h]
  unsigned int v1470; // [rsp+A0h] [rbp-60h]
  unsigned int v1471; // [rsp+A0h] [rbp-60h]
  unsigned int v1472; // [rsp+A0h] [rbp-60h]
  unsigned int v1473; // [rsp+A0h] [rbp-60h]
  unsigned int v1474; // [rsp+A0h] [rbp-60h]
  unsigned int v1475; // [rsp+A0h] [rbp-60h]
  unsigned __int8 *v1476; // [rsp+A0h] [rbp-60h]
  unsigned int v1477; // [rsp+A0h] [rbp-60h]
  unsigned int v1478; // [rsp+A0h] [rbp-60h]
  unsigned int v1479; // [rsp+A0h] [rbp-60h]
  unsigned int v1480; // [rsp+A0h] [rbp-60h]
  int v1481; // [rsp+A0h] [rbp-60h]
  int v1482; // [rsp+A0h] [rbp-60h]
  int v1483; // [rsp+A0h] [rbp-60h]
  int v1484; // [rsp+A0h] [rbp-60h]
  SIZE_T v1485; // [rsp+A8h] [rbp-58h]
  void *v1486; // [rsp+A8h] [rbp-58h]
  void *v1487; // [rsp+A8h] [rbp-58h]
  void *v1488; // [rsp+A8h] [rbp-58h]
  void *v1489; // [rsp+A8h] [rbp-58h]
  SIZE_T v1490; // [rsp+A8h] [rbp-58h]
  SIZE_T v1491; // [rsp+A8h] [rbp-58h]
  SIZE_T v1492; // [rsp+A8h] [rbp-58h]
  SIZE_T v1493; // [rsp+A8h] [rbp-58h]
  SIZE_T v1494; // [rsp+A8h] [rbp-58h]
  SIZE_T v1495; // [rsp+B0h] [rbp-50h]
  int v1496; // [rsp+B0h] [rbp-50h]
  unsigned int v1497; // [rsp+B0h] [rbp-50h]
  int v1498; // [rsp+B0h] [rbp-50h]
  int v1499; // [rsp+B0h] [rbp-50h]
  int v1500; // [rsp+B0h] [rbp-50h]
  int v1501; // [rsp+B0h] [rbp-50h]
  int v1502; // [rsp+B0h] [rbp-50h]
  unsigned int v1503; // [rsp+B8h] [rbp-48h]
  int v1504; // [rsp+B8h] [rbp-48h]
  unsigned int v1505; // [rsp+B8h] [rbp-48h]
  unsigned int v1506; // [rsp+B8h] [rbp-48h]
  unsigned int v1507; // [rsp+B8h] [rbp-48h]
  int v1508; // [rsp+B8h] [rbp-48h]
  unsigned int v1509; // [rsp+B8h] [rbp-48h]
  unsigned int v1510; // [rsp+B8h] [rbp-48h]
  unsigned int v1511; // [rsp+B8h] [rbp-48h]
  int v1512; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v1513; // [rsp+C0h] [rbp-40h]
  _QWORD *v1514; // [rsp+C0h] [rbp-40h]
  void *v1515; // [rsp+C0h] [rbp-40h]
  unsigned __int8 *v1516; // [rsp+C0h] [rbp-40h]
  _WORD *v1517; // [rsp+C0h] [rbp-40h]
  int v1518; // [rsp+C0h] [rbp-40h]
  unsigned int v1519; // [rsp+C0h] [rbp-40h]
  __int64 v1520; // [rsp+C0h] [rbp-40h]
  unsigned int v1521; // [rsp+C0h] [rbp-40h]
  _QWORD *v1522; // [rsp+C0h] [rbp-40h]
  unsigned int v1523; // [rsp+C0h] [rbp-40h]
  SIZE_T v1524; // [rsp+C8h] [rbp-38h]
  char *v1525; // [rsp+C8h] [rbp-38h]
  _QWORD *v1526; // [rsp+C8h] [rbp-38h]
  int v1527; // [rsp+C8h] [rbp-38h]
  int v1528; // [rsp+C8h] [rbp-38h]
  int v1529; // [rsp+C8h] [rbp-38h]
  unsigned int v1530; // [rsp+C8h] [rbp-38h]
  int v1531; // [rsp+C8h] [rbp-38h]
  unsigned int v1532; // [rsp+C8h] [rbp-38h]
  SIZE_T v1533; // [rsp+C8h] [rbp-38h]
  SIZE_T v1534; // [rsp+C8h] [rbp-38h]
  unsigned int v1535; // [rsp+C8h] [rbp-38h]
  int v1536; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *v1537; // [rsp+D0h] [rbp-30h]
  char *v1538; // [rsp+D0h] [rbp-30h]
  unsigned __int8 *v1539; // [rsp+D0h] [rbp-30h]
  char *v1540; // [rsp+D0h] [rbp-30h]
  __int64 v1541; // [rsp+D0h] [rbp-30h]
  LPVOID v1542; // [rsp+D0h] [rbp-30h]
  char *v1543; // [rsp+D0h] [rbp-30h]
  __int64 v1544; // [rsp+D0h] [rbp-30h]
  LPVOID v1545; // [rsp+D0h] [rbp-30h]
  unsigned __int8 *v1546; // [rsp+D0h] [rbp-30h]
  SIZE_T v1547; // [rsp+D0h] [rbp-30h]
  int v1548; // [rsp+D8h] [rbp-28h]
  int v1549; // [rsp+D8h] [rbp-28h]
  unsigned int v1550; // [rsp+D8h] [rbp-28h]
  int v1551; // [rsp+D8h] [rbp-28h]
  unsigned int v1552; // [rsp+D8h] [rbp-28h]
  int v1553; // [rsp+D8h] [rbp-28h]
  int v1554; // [rsp+D8h] [rbp-28h]
  unsigned int v1555; // [rsp+D8h] [rbp-28h]
  unsigned int v1556; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v1557; // [rsp+D8h] [rbp-28h]
  const void *v1558; // [rsp+D8h] [rbp-28h]
  _BYTE *Src; // [rsp+E0h] [rbp-20h]
  void *Srca; // [rsp+E0h] [rbp-20h]
  void *Srcb; // [rsp+E0h] [rbp-20h]
  void *Srcc; // [rsp+E0h] [rbp-20h]
  void *Srcd; // [rsp+E0h] [rbp-20h]
  void *Srce; // [rsp+E0h] [rbp-20h]
  void *Srcf; // [rsp+E0h] [rbp-20h]
  WCHAR *lpModuleName; // [rsp+E8h] [rbp-18h]
  WCHAR *lpModuleNamea; // [rsp+E8h] [rbp-18h]
  LPCWSTR lpModuleNameb; // [rsp+E8h] [rbp-18h]
  LPCWSTR lpModuleNamec; // [rsp+E8h] [rbp-18h]
  LPCWSTR lpModuleNamed; // [rsp+E8h] [rbp-18h]
  LPCWSTR lpModuleNamee; // [rsp+E8h] [rbp-18h]
  LPCWSTR lpModuleNamef; // [rsp+E8h] [rbp-18h]
  LPCWSTR lpModuleNameg; // [rsp+E8h] [rbp-18h]
  WCHAR *lpModuleNameh; // [rsp+E8h] [rbp-18h]
  LPCWSTR lpModuleNamei; // [rsp+E8h] [rbp-18h]
  LPCWSTR lpModuleNamej; // [rsp+E8h] [rbp-18h]
  const void *v1577; // [rsp+F0h] [rbp-10h]
  SIZE_T v1578; // [rsp+F0h] [rbp-10h]
  LPVOID v1579; // [rsp+F0h] [rbp-10h]
  void *v1580; // [rsp+F0h] [rbp-10h]
  void *v1581; // [rsp+F0h] [rbp-10h]
  void *v1582; // [rsp+F0h] [rbp-10h]
  unsigned int v1583; // [rsp+F8h] [rbp-8h]
  _QWORD *v1584; // [rsp+F8h] [rbp-8h]
  int v1585; // [rsp+F8h] [rbp-8h]
  WCHAR *v1586; // [rsp+F8h] [rbp-8h]
  unsigned int v1587; // [rsp+F8h] [rbp-8h]
  unsigned int v1588; // [rsp+F8h] [rbp-8h]
  int v1589; // [rsp+F8h] [rbp-8h]
  char v1590; // [rsp+F8h] [rbp-8h]
  void *v1591; // [rsp+F8h] [rbp-8h]
  unsigned int Size; // [rsp+100h] [rbp+0h]
  int Sizea; // [rsp+100h] [rbp+0h]
  void *Sizeb; // [rsp+100h] [rbp+0h]
  int Sizec; // [rsp+100h] [rbp+0h]
  int Sized; // [rsp+100h] [rbp+0h]
  int Sizee; // [rsp+100h] [rbp+0h]
  int Sizef; // [rsp+100h] [rbp+0h]
  unsigned __int8 *v1599; // [rsp+108h] [rbp+8h]
  void **v1600; // [rsp+108h] [rbp+8h]
  int v1601; // [rsp+108h] [rbp+8h]
  unsigned int n; // [rsp+108h] [rbp+8h]
  unsigned __int8 *v1603; // [rsp+108h] [rbp+8h]
  int v1604; // [rsp+108h] [rbp+8h]
  void *v1605; // [rsp+108h] [rbp+8h]
  char *v1606; // [rsp+108h] [rbp+8h]
  void *v1607; // [rsp+108h] [rbp+8h]
  SIZE_T v1608; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v1609; // [rsp+118h] [rbp+18h]
  LPVOID v1610; // [rsp+120h] [rbp+20h]
  SIZE_T v1611; // [rsp+128h] [rbp+28h]
  LPVOID v1612; // [rsp+130h] [rbp+30h]
  unsigned int v1613; // [rsp+138h] [rbp+38h] BYREF
  void *v1614; // [rsp+140h] [rbp+40h]
  int v1615; // [rsp+148h] [rbp+48h] BYREF
  unsigned int dwBytes; // [rsp+14Ch] [rbp+4Ch] BYREF
  int dwBytes_4; // [rsp+150h] [rbp+50h]
  int v1618; // [rsp+154h] [rbp+54h]
  int v1619; // [rsp+158h] [rbp+58h] BYREF
  int v1620; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1621; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1622; // [rsp+164h] [rbp+64h] BYREF
  int v1623; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1624; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v1625; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1626; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1627; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1628; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v1629; // [rsp+180h] [rbp+80h] BYREF
  int v1630; // [rsp+184h] [rbp+84h] BYREF
  int v1631; // [rsp+188h] [rbp+88h] BYREF
  int v1632; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1633; // [rsp+190h] [rbp+90h] BYREF
  SIZE_T v1634; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v1635; // [rsp+19Ch] [rbp+9Ch] BYREF
  unsigned int v1636; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1637[2]; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1638; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1639; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1640; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1641; // [rsp+1B8h] [rbp+B8h] BYREF
  int v1642; // [rsp+1BCh] [rbp+BCh] BYREF
  void *v1643; // [rsp+1C0h] [rbp+C0h]
  int v1644; // [rsp+1C8h] [rbp+C8h]
  int v1645; // [rsp+1CCh] [rbp+CCh]
  unsigned int v1646; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1647; // [rsp+1D4h] [rbp+D4h] BYREF
  int v1648; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1649; // [rsp+1DCh] [rbp+DCh] BYREF
  int v1650; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1651; // [rsp+1E4h] [rbp+E4h] BYREF
  int v1652; // [rsp+1E8h] [rbp+E8h] BYREF
  int v1653; // [rsp+1ECh] [rbp+ECh] BYREF
  int v1654; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1655[3]; // [rsp+1F4h] [rbp+F4h] BYREF
  int v1656; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1657; // [rsp+204h] [rbp+104h] BYREF
  int v1658; // [rsp+208h] [rbp+108h] BYREF
  int v1659; // [rsp+20Ch] [rbp+10Ch] BYREF
  int v1660; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1661; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v1662; // [rsp+218h] [rbp+118h] BYREF
  int v1663; // [rsp+21Ch] [rbp+11Ch] BYREF
  int v1664; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1665; // [rsp+224h] [rbp+124h] BYREF
  SIZE_T v1666; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1667; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1668; // [rsp+234h] [rbp+134h] BYREF
  SIZE_T v1669; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1670; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1671; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1672; // [rsp+248h] [rbp+148h] BYREF
  int v1673; // [rsp+24Ch] [rbp+14Ch] BYREF
  int v1674; // [rsp+250h] [rbp+150h] BYREF
  int v1675; // [rsp+254h] [rbp+154h] BYREF
  int v1676; // [rsp+258h] [rbp+158h] BYREF
  int v1677; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1678; // [rsp+268h] [rbp+168h] BYREF
  int v1679; // [rsp+26Ch] [rbp+16Ch] BYREF
  unsigned int v1680; // [rsp+270h] [rbp+170h] BYREF
  unsigned int v1681[3]; // [rsp+274h] [rbp+174h] BYREF
  wchar_t *String1; // [rsp+280h] [rbp+180h] BYREF
  wchar_t *v1683; // [rsp+288h] [rbp+188h] BYREF
  wchar_t *v1684; // [rsp+290h] [rbp+190h] BYREF
  wchar_t *v1685; // [rsp+298h] [rbp+198h] BYREF
  size_t pcchLength[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v1687; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v1688; // [rsp+2B8h] [rbp+1B8h] BYREF
  int *v1689; // [rsp+2C0h] [rbp+1C0h] BYREF
  size_t v1690; // [rsp+2C8h] [rbp+1C8h] BYREF
  int *v1691; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v1692; // [rsp+2D8h] [rbp+1D8h] BYREF
  int *v1693; // [rsp+2E0h] [rbp+1E0h] BYREF
  void *v1694[5]; // [rsp+2E8h] [rbp+1E8h] BYREF
  void *v1695; // [rsp+310h] [rbp+210h] BYREF
  _DWORD *v1696; // [rsp+318h] [rbp+218h] BYREF
  LPVOID v1697; // [rsp+320h] [rbp+220h] BYREF
  HMODULE phModule; // [rsp+328h] [rbp+228h] BYREF
  void *v1699; // [rsp+330h] [rbp+230h] BYREF
  int *v1700; // [rsp+338h] [rbp+238h] BYREF
  void *v1701; // [rsp+340h] [rbp+240h] BYREF
  void *v1702; // [rsp+348h] [rbp+248h] BYREF
  void *v1703; // [rsp+350h] [rbp+250h] BYREF
  void *v1704; // [rsp+358h] [rbp+258h] BYREF
  _DWORD *v1705; // [rsp+360h] [rbp+260h] BYREF
  int *v1706; // [rsp+368h] [rbp+268h] BYREF
  int *v1707; // [rsp+370h] [rbp+270h] BYREF
  int *v1708; // [rsp+378h] [rbp+278h] BYREF
  int *v1709; // [rsp+380h] [rbp+280h] BYREF
  _DWORD *v1710; // [rsp+388h] [rbp+288h] BYREF
  __int64 v1711; // [rsp+390h] [rbp+290h] BYREF
  LPVOID v1712; // [rsp+3A0h] [rbp+2A0h]
  void **v1713; // [rsp+3A8h] [rbp+2A8h] BYREF
  LPVOID v1714; // [rsp+3B8h] [rbp+2B8h]
  _DWORD *v1715; // [rsp+3C0h] [rbp+2C0h] BYREF
  void *v1716; // [rsp+3C8h] [rbp+2C8h] BYREF
  unsigned __int64 v1717; // [rsp+3D0h] [rbp+2D0h]
  char *v1718; // [rsp+3D8h] [rbp+2D8h] BYREF
  char *v1719; // [rsp+3E0h] [rbp+2E0h] BYREF
  _DWORD *v1720; // [rsp+3E8h] [rbp+2E8h] BYREF
  __int64 v1721; // [rsp+3F0h] [rbp+2F0h]
  __int64 v1722; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v1723; // [rsp+400h] [rbp+300h] BYREF
  __int64 v1724; // [rsp+408h] [rbp+308h] BYREF
  __int64 v1725; // [rsp+410h] [rbp+310h] BYREF
  _QWORD v1726[4]; // [rsp+420h] [rbp+320h] BYREF
  int *v1727; // [rsp+440h] [rbp+340h] BYREF
  int *v1728; // [rsp+448h] [rbp+348h] BYREF
  int *v1729; // [rsp+450h] [rbp+350h] BYREF
  void *v1730[5]; // [rsp+458h] [rbp+358h] BYREF
  void *v1731; // [rsp+480h] [rbp+380h] BYREF
  _DWORD *v1732; // [rsp+488h] [rbp+388h] BYREF
  void *v1733; // [rsp+490h] [rbp+390h] BYREF
  HMODULE hModule; // [rsp+498h] [rbp+398h] BYREF
  void *v1735; // [rsp+4A0h] [rbp+3A0h] BYREF
  void *v1736; // [rsp+4A8h] [rbp+3A8h] BYREF
  void *v1737; // [rsp+4B0h] [rbp+3B0h] BYREF
  void *v1738; // [rsp+4B8h] [rbp+3B8h] BYREF
  void *v1739; // [rsp+4C0h] [rbp+3C0h] BYREF
  int *v1740; // [rsp+4C8h] [rbp+3C8h] BYREF
  unsigned __int64 v1741[2]; // [rsp+4D0h] [rbp+3D0h] BYREF
  _DWORD *v1742; // [rsp+4E0h] [rbp+3E0h] BYREF
  __int128 v1743; // [rsp+4E8h] [rbp+3E8h]
  __int128 v1744; // [rsp+4F8h] [rbp+3F8h]
  void *v1745; // [rsp+510h] [rbp+410h] BYREF
  SIZE_T *v1746; // [rsp+520h] [rbp+420h] BYREF
  size_t v1747; // [rsp+528h] [rbp+428h] BYREF
  LPVOID lpMem; // [rsp+530h] [rbp+430h]
  LPVOID v1749[3]; // [rsp+538h] [rbp+438h]
  void *v1750; // [rsp+550h] [rbp+450h] BYREF
  void *v1751; // [rsp+560h] [rbp+460h] BYREF
  void *v1752; // [rsp+570h] [rbp+470h] BYREF
  SIZE_T *v1753; // [rsp+580h] [rbp+480h] BYREF
  void *v1754; // [rsp+590h] [rbp+490h] BYREF
  unsigned int *v1755; // [rsp+5A0h] [rbp+4A0h] BYREF
  unsigned int *v1756; // [rsp+5B0h] [rbp+4B0h] BYREF
  size_t v1757; // [rsp+5B8h] [rbp+4B8h] BYREF
  void *v1758; // [rsp+5C0h] [rbp+4C0h]
  __int128 v1759; // [rsp+5C8h] [rbp+4C8h]
  __int128 v1760; // [rsp+5D8h] [rbp+4D8h] BYREF
  LPVOID v1761[3]; // [rsp+5E8h] [rbp+4E8h]
  _DWORD *v1762; // [rsp+600h] [rbp+500h] BYREF
  _QWORD v1763[2]; // [rsp+608h] [rbp+508h] BYREF
  int v1764; // [rsp+618h] [rbp+518h]
  unsigned int v1765; // [rsp+61Ch] [rbp+51Ch]
  int v1766; // [rsp+620h] [rbp+520h]
  _QWORD v1767[2]; // [rsp+628h] [rbp+528h] BYREF
  int v1768; // [rsp+638h] [rbp+538h]
  unsigned int v1769; // [rsp+63Ch] [rbp+53Ch]
  int v1770; // [rsp+640h] [rbp+540h]
  _BYTE v1771[24]; // [rsp+650h] [rbp+550h] BYREF
  char *v1772; // [rsp+668h] [rbp+568h]
  _BYTE v1773[4]; // [rsp+6C0h] [rbp+5C0h] BYREF
  int v1774; // [rsp+6C4h] [rbp+5C4h]
  int v1775; // [rsp+6C8h] [rbp+5C8h]
  __int16 v1776; // [rsp+6D2h] [rbp+5D2h]
  __int64 v1777; // [rsp+6D8h] [rbp+5D8h]
  _BYTE v1778[4]; // [rsp+730h] [rbp+630h] BYREF
  int v1779; // [rsp+734h] [rbp+634h]
  int v1780; // [rsp+738h] [rbp+638h]
  size_t v1781; // [rsp+748h] [rbp+648h]
  _BYTE v1782[24]; // [rsp+7A0h] [rbp+6A0h] BYREF
  char *v1783; // [rsp+7B8h] [rbp+6B8h]
  _BYTE v1784[4]; // [rsp+810h] [rbp+710h] BYREF
  int v1785; // [rsp+814h] [rbp+714h]
  int v1786; // [rsp+818h] [rbp+718h]
  size_t v1787; // [rsp+828h] [rbp+728h]
  _BYTE v1788[24]; // [rsp+880h] [rbp+780h] BYREF
  char *v1789; // [rsp+898h] [rbp+798h]
  _BYTE v1790[4]; // [rsp+8F0h] [rbp+7F0h] BYREF
  int v1791; // [rsp+8F4h] [rbp+7F4h]
  int v1792; // [rsp+8F8h] [rbp+7F8h]
  char *v1793; // [rsp+908h] [rbp+808h]
  _BYTE v1794[4]; // [rsp+960h] [rbp+860h] BYREF
  int v1795; // [rsp+964h] [rbp+864h]
  int v1796; // [rsp+968h] [rbp+868h]
  size_t v1797; // [rsp+978h] [rbp+878h]
  _BYTE v1798[24]; // [rsp+9D0h] [rbp+8D0h] BYREF
  char *v1799; // [rsp+9E8h] [rbp+8E8h]
  int v1800; // [rsp+A40h] [rbp+940h] BYREF
  int v1801; // [rsp+A44h] [rbp+944h]
  void *v1802; // [rsp+A48h] [rbp+948h]
  void *v1803; // [rsp+A50h] [rbp+950h]
  void *v1804; // [rsp+A58h] [rbp+958h]
  SIZE_T v1805; // [rsp+A60h] [rbp+960h]
  void *v1806; // [rsp+A68h] [rbp+968h]
  __int64 v1807; // [rsp+A70h] [rbp+970h]
  int v1808; // [rsp+A78h] [rbp+978h]
  __int128 v1809; // [rsp+A7Ch] [rbp+97Ch] BYREF
  __int128 v1810; // [rsp+A8Ch] [rbp+98Ch] BYREF
  unsigned int v1811; // [rsp+A9Ch] [rbp+99Ch] BYREF
  unsigned int v1812; // [rsp+AA0h] [rbp+9A0h]
  unsigned int v1813; // [rsp+AA4h] [rbp+9A4h]
  unsigned int v1814; // [rsp+AA8h] [rbp+9A8h]
  unsigned __int64 v1815; // [rsp+AB0h] [rbp+9B0h]
  __int64 v1816; // [rsp+AB8h] [rbp+9B8h]
  unsigned __int64 v1817; // [rsp+AC0h] [rbp+9C0h]
  __int64 v1818; // [rsp+AC8h] [rbp+9C8h]
  __int128 v1819; // [rsp+AD0h] [rbp+9D0h] BYREF
  __int128 v1820; // [rsp+AE0h] [rbp+9E0h]
  __int128 v1821; // [rsp+AF0h] [rbp+9F0h] BYREF
  __int128 v1822; // [rsp+B00h] [rbp+A00h] BYREF
  __int64 v1823; // [rsp+B10h] [rbp+A10h] BYREF
  unsigned int v1824; // [rsp+B18h] [rbp+A18h]
  int v1825; // [rsp+B1Ch] [rbp+A1Ch]
  __int128 v1826; // [rsp+B20h] [rbp+A20h] BYREF
  char v1827[12]; // [rsp+B30h] [rbp+A30h] BYREF
  unsigned int v1828; // [rsp+B3Ch] [rbp+A3Ch]
  __int128 v1829; // [rsp+B50h] [rbp+A50h] BYREF
  __int128 v1830; // [rsp+B60h] [rbp+A60h] BYREF
  __int64 v1831; // [rsp+B70h] [rbp+A70h]
  __int128 v1832; // [rsp+B78h] [rbp+A78h] BYREF
  __int128 v1833; // [rsp+B88h] [rbp+A88h] BYREF
  __int64 v1834; // [rsp+B98h] [rbp+A98h]
  __int128 v1835; // [rsp+BA0h] [rbp+AA0h] BYREF
  __int128 v1836; // [rsp+BB0h] [rbp+AB0h]
  __int64 v1837; // [rsp+BC0h] [rbp+AC0h]
  int v1838; // [rsp+BC8h] [rbp+AC8h]
  __int128 v1839; // [rsp+BD0h] [rbp+AD0h] BYREF
  __int128 v1840; // [rsp+BE0h] [rbp+AE0h]
  __int64 v1841; // [rsp+BF0h] [rbp+AF0h]
  int v1842; // [rsp+BF8h] [rbp+AF8h]
  __int128 v1843; // [rsp+C00h] [rbp+B00h] BYREF
  __int128 v1844; // [rsp+C10h] [rbp+B10h]
  __int64 v1845; // [rsp+C20h] [rbp+B20h]
  int v1846; // [rsp+C28h] [rbp+B28h]
  __int128 v1847; // [rsp+C30h] [rbp+B30h] BYREF
  __int128 v1848; // [rsp+C40h] [rbp+B40h]
  __int64 v1849; // [rsp+C50h] [rbp+B50h]
  int v1850; // [rsp+C58h] [rbp+B58h]
  __int128 v1851; // [rsp+C60h] [rbp+B60h] BYREF
  __int128 v1852; // [rsp+C70h] [rbp+B70h]
  __int64 v1853; // [rsp+C80h] [rbp+B80h]
  int v1854; // [rsp+C88h] [rbp+B88h]
  _DWORD v1855[6]; // [rsp+C90h] [rbp+B90h] BYREF
  char v1856; // [rsp+CAAh] [rbp+BAAh]
  wchar_t v1857[34]; // [rsp+CACh] [rbp+BACh] BYREF
  _DWORD v1858[6]; // [rsp+CF0h] [rbp+BF0h] BYREF
  char v1859; // [rsp+D0Ah] [rbp+C0Ah]
  wchar_t v1860[34]; // [rsp+D0Ch] [rbp+C0Ch] BYREF
  _DWORD v1861[6]; // [rsp+D50h] [rbp+C50h] BYREF
  char v1862; // [rsp+D6Ah] [rbp+C6Ah]
  wchar_t v1863[34]; // [rsp+D6Ch] [rbp+C6Ch] BYREF
  _BYTE v1864[68]; // [rsp+DB0h] [rbp+CB0h] BYREF
  __int16 v1865; // [rsp+DF4h] [rbp+CF4h]
  unsigned __int16 v1866; // [rsp+E56h] [rbp+D56h]
  __int64 v1867; // [rsp+E5Ch] [rbp+D5Ch]
  _QWORD v1868[6]; // [rsp+E90h] [rbp+D90h] BYREF
  int v1869; // [rsp+EC0h] [rbp+DC0h] BYREF
  __int128 v1870; // [rsp+EC8h] [rbp+DC8h]
  __int128 v1871; // [rsp+ED8h] [rbp+DD8h]
  __int128 v1872; // [rsp+EE8h] [rbp+DE8h]
  __int64 v1873; // [rsp+EF8h] [rbp+DF8h]
  _QWORD v1874[20]; // [rsp+F00h] [rbp+E00h] BYREF
  _WORD v1875[8]; // [rsp+FA0h] [rbp+EA0h] BYREF
  _BYTE v1876[176]; // [rsp+FB0h] [rbp+EB0h] BYREF
  WCHAR Filename[264]; // [rsp+1060h] [rbp+F60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+12A8h] [rbp+11A8h]

  v1644 = 0;
  v1 = 0;
  v1700 = 0LL;
  v1615 = 0;
  v1645 = 0;
  v1608 = 0LL;
  dwBytes = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v2 = g_WarbirdSecureFunctionsRefCount;
  dwBytes_4 = -1;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_40;
  v3 = MemoryAlloc(0x338uLL);
  if ( !v3 )
    goto LABEL_11;
  v4 = 0;
  v5 = v3 + 7;
  v6 = -1;
  v7 = (unsigned __int8 *)&unk_180832662;
  v8 = 0;
  v9 = 0;
  v10 = 103LL;
  do
  {
    v11 = *(v7 - 1) | (*(v7 - 2) << 8);
    v12 = v7[2] << 8;
    v13 = *v7;
    v7 += 8;
    v14 = *(v7 - 7) | ((v13 | (v11 << 8)) << 8);
    v15 = v14 ^ v9;
    v16 = *(v7 - 3) | ((*(v7 - 4) | ((*(v7 - 5) | v12) << 8)) << 8);
    v17 = v15 ^ v16 ^ v8 ^ 0xAC987321;
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
    v34 = v33 ^ v32 ^ 0xAC987321;
    v35 = (4991 * __ROR4__(v34, 3) - 219010071) ^ v33;
    v36 = (24670 * __ROR4__(v35 - 133239679, 1) - __ROR4__(v35, 6)) ^ v34;
    v37 = (__ROL4__(v36, 14) + 2033 * __ROL4__(v36 - 1419157410, 3)) ^ v35;
    v38 = (4991 * __ROL4__(v37 - 1419157410, 15) - __ROR4__(v37, 14)) ^ v36;
    v39 = (v38 >> 3) ^ (43881 * (v38 ^ 0x605E)) ^ v37;
    v40 = 24670 * __ROL4__(v39 ^ 0x7F1137F, 4);
    v41 = v39;
    v42 = v6 ^ v39;
    v6 = v16;
    v43 = v4 ^ __ROL4__(v41, 2) ^ v40;
    v4 = v14;
    v44 = v43 ^ v38;
    *(v5 - 4) = v44;
    *v5 = v42;
    v5 += 8;
    v45 = __ROR4__(v44, 8);
    *(v5 - 13) = v45;
    v46 = __ROR4__(v42, 8);
    *(v5 - 9) = v46;
    v47 = __ROR4__(v45, 8);
    *(v5 - 14) = v47;
    v48 = __ROR4__(v46, 8);
    *(v5 - 10) = v48;
    v49 = __ROR4__(v47, 8);
    v50 = __ROR4__(v48, 8);
    *(v5 - 15) = v49;
    *(v5 - 11) = v50;
    v8 = __ROR4__(v50, 8);
    v9 = __ROR4__(v49, 8);
    --v10;
  }
  while ( v10 );
  v51 = 0LL;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  do
    v52 ^= v3[v51++];
  while ( v51 < 0x338 );
  if ( v52 == 64LL )
  {
    v3[823] = 0;
    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
    v58 = v3;
    if ( *v3 )
    {
      while ( 1 )
      {
        v59 = -1LL;
        v60 = (const WCHAR *)v3;
        v53 = 0;
        do
          ++v59;
        while ( *(_WORD *)&v3[2 * v59] );
        v61 = &v3[2 * v59];
        v62 = (char *)&WARBIRD::g_arModuleInfo + 24 * v54;
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
        v65 = *(_DWORD *)(v61 + 2);
        v3 = v61 + 6;
        v1609 = v65;
        for ( i = 0; i < v1609; ++i )
        {
          v67 = v3;
          v68 = -1LL;
          do
            ++v68;
          while ( v3[v68] );
          v3 += v68 + 1;
          if ( v53 >= 0 )
          {
            ProcAddress = (void **)GetProcAddress(*(HMODULE *)v62, v67);
            if ( !ProcAddress )
              goto LABEL_38;
            (&WARBIRD::g_FuncAddress)[v55] = ProcAddress;
          }
          ++v55;
        }
        ++v54;
        if ( !*v3 )
          goto LABEL_38;
      }
      v53 = -1073741702;
    }
LABEL_38:
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v58);
    v1 = dwBytes;
    if ( v53 < 0 )
      goto LABEL_11;
    v2 = g_WarbirdSecureFunctionsRefCount;
LABEL_40:
    g_WarbirdSecureFunctionsRefCount = v2 + 1;
    goto LABEL_41;
  }
  MemoryFree(v3);
  v1 = 0;
LABEL_11:
  v56 = 4LL;
  v57 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  do
  {
    if ( *v57 )
      FreeLibrary(*v57);
    v57 += 3;
    --v56;
  }
  while ( v56 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_41:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  String1 = 0LL;
  v71 = 0;
  v1683 = 0LL;
  LastError = 0;
  if ( !NtCurrentPeb()->SessionId )
    goto LABEL_91;
  v73 = ((__int64 (*)(void))off_180985210)();
  v74 = 0LL;
  if ( !v73 )
  {
LABEL_43:
    LastError = GetLastError();
    v75 = LastError < 0;
    if ( LastError > 0 )
    {
      LastError = (unsigned __int16)LastError | 0x80070000;
      v75 = LastError < 0;
    }
    if ( !v75 )
      LastError = -2147467259;
    goto LABEL_92;
  }
  v76 = 0LL;
  v1684 = 0LL;
  for ( j = 0LL; ; j = v1646 )
  {
    v78 = v76;
    if ( !v74 )
      v78 = 0LL;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180985230)(
                         v73,
                         2LL,
                         v78,
                         j,
                         &v1646) )
    {
      String1 = v76;
      v1684 = 0LL;
      goto LABEL_62;
    }
    v79 = GetLastError();
    if ( v79 != 122 )
      break;
    if ( v76 )
      goto LABEL_56;
    v76 = (wchar_t *)MemoryAlloc(v1646);
    SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1684);
    v1684 = v76;
    v74 = v76;
    if ( !v76 )
    {
      LastError = -2147024882;
      goto LABEL_62;
    }
  }
  if ( !v79 )
  {
LABEL_56:
    LastError = -2147467259;
    goto LABEL_62;
  }
  if ( v79 > 0 )
    LastError = (unsigned __int16)v79 | 0x80070000;
  else
    LastError = v79;
LABEL_62:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1684);
  if ( LastError >= 0 )
  {
    v80 = off_180985228;
    CurrentThreadId = GetCurrentThreadId();
    v82 = ((__int64 (__fastcall *)(_QWORD))v80)(CurrentThreadId);
    v83 = 0LL;
    if ( !v82 )
    {
      LastError = GetLastError();
      v84 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v84 = LastError < 0;
      }
      if ( !v84 )
        LastError = -2147467259;
      goto LABEL_92;
    }
    v85 = 0LL;
    v1685 = 0LL;
    LastError = 0;
    for ( k = 0LL; ; k = v1647 )
    {
      v87 = v85;
      if ( !v83 )
        v87 = 0LL;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_180985230)(
                           v82,
                           2LL,
                           v87,
                           k,
                           &v1647) )
      {
        v1683 = v85;
        v1685 = 0LL;
        goto LABEL_83;
      }
      v88 = GetLastError();
      if ( v88 != 122 )
        break;
      if ( v85 )
        goto LABEL_77;
      v85 = (wchar_t *)MemoryAlloc(v1647);
      SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1685);
      v1685 = v85;
      v83 = v85;
      if ( !v85 )
      {
        LastError = -2147024882;
        goto LABEL_83;
      }
    }
    if ( !v88 )
    {
LABEL_77:
      LastError = -2147467259;
      goto LABEL_83;
    }
    LastError = v88 > 0 ? (unsigned __int16)v88 | 0x80070000 : v88;
LABEL_83:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1685);
    if ( LastError >= 0 )
    {
      if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1683 && !wcscmp_0(v1683, L"Default") )
      {
        v1619 = 0;
        CurrentProcess = GetCurrentProcess();
        if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1619, 4LL) )
          goto LABEL_43;
        if ( (v1619 & 0xF) == 0 )
          v71 = 1;
      }
LABEL_91:
      v1 = v71;
    }
  }
LABEL_92:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&v1683);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset((void **)&String1);
  v90 = 0;
  if ( LastError >= 0 )
    v90 = v1;
  v1609 = v90;
  v91 = LocalAlloc(0x40u, 4uLL);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach((HLOCAL *)&v1608, v91);
  v92 = 0LL;
  v1643 = (void *)v1608;
  if ( v1608 )
  {
    v94 = 0LL;
    lpMem = 0LL;
    *(_OWORD *)v1749 = 0LL;
    v95 = GetProcessHeap();
    v96 = HeapAlloc(v95, 8u, 0xA0uLL);
    v1618 = 56;
    v93 = -1073741801;
    if ( !v96 )
    {
LABEL_97:
      LODWORD(v1614) = v93;
LABEL_98:
      v97 = v90;
      goto LABEL_99;
    }
    v92 = v96;
    *v96 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
    v96[1] = *((_OWORD *)&_ImageBase + 625603);
    v96[2] = *((_OWORD *)&_ImageBase + 625604);
    v96[3] = *((_OWORD *)&_ImageBase + 625605);
    v96[4] = *((_OWORD *)&_ImageBase + 625606);
    v96[5] = *((_OWORD *)&_ImageBase + 625607);
    v96[6] = *((_OWORD *)&_ImageBase + 625608);
    v96[7] = *((_OWORD *)&_ImageBase + 625609);
    v96[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
    v96[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
    v106 = GetProcessHeap();
    v107 = HeapAlloc(v106, 8u, 8uLL);
    if ( !v107 )
    {
      LODWORD(v1614) = -1073741801;
LABEL_116:
      v97 = v90;
      goto LABEL_99;
    }
    *v107 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
    v1524 = __rdtsc();
    dwBytes = 0;
    v93 = RtlUIntAdd(4u, 4, (unsigned int *)&v1648);
    LODWORD(v1614) = v93;
    if ( v93 < 0 )
    {
      v97 = v90;
      v94 = v108;
      goto LABEL_99;
    }
    v109 = RtlUIntAdd(0, v1648, &dwBytes);
    v97 = v90;
    v93 = v109 | 0x10000000;
    v94 = v111;
    LODWORD(v1614) = v109 | 0x10000000;
    if ( v109 < 0 )
      goto LABEL_99;
    v93 = RtlUIntAdd(v110, 160, (unsigned int *)&v1650);
    LODWORD(v1614) = v93;
    if ( v93 < 0 )
      goto LABEL_99;
    v112 = RtlUIntAdd(dwBytes, v1650, &dwBytes);
    v93 = v112 | 0x10000000;
    LODWORD(v1614) = v112 | 0x10000000;
    if ( v112 < 0 )
      goto LABEL_99;
    v93 = RtlUIntAdd(v113, v113 + 4, (unsigned int *)&v1659);
    LODWORD(v1614) = v93;
    if ( v93 < 0 )
      goto LABEL_99;
    v114 = RtlUIntAdd(dwBytes, v1659, &dwBytes);
    v93 = v114 | 0x10000000;
    LODWORD(v1614) = v114 | 0x10000000;
    if ( v114 < 0 )
      goto LABEL_99;
    v93 = RtlUIntAdd(v115, v115 + 4, (unsigned int *)&v1673);
    LODWORD(v1614) = v93;
    if ( v93 < 0 )
      goto LABEL_99;
    v116 = RtlUIntAdd(dwBytes, v1673, &dwBytes);
    v93 = v116 | 0x10000000;
    LODWORD(v1614) = v116 | 0x10000000;
    if ( v116 < 0 )
      goto LABEL_99;
    if ( StringCchLengthW(L"WindowsCopilot-Available", v117, pcchLength) < 0 )
    {
      v93 = -1073741762;
LABEL_127:
      LODWORD(v1614) = v93;
      goto LABEL_99;
    }
    ++pcchLength[0];
    v93 = RtlUIntAdd(4u, 2 * LODWORD(pcchLength[0]), (unsigned int *)&v1674);
    LODWORD(v1614) = v93;
    if ( v93 < 0 )
      goto LABEL_99;
    v118 = RtlUIntAdd(dwBytes, v1674, &dwBytes);
    v93 = v118 | 0x10000000;
    LODWORD(v1614) = v118 | 0x10000000;
    if ( v118 < 0 )
      goto LABEL_99;
    v93 = RtlUIntAdd(4u, 4, (unsigned int *)&v1675);
    LODWORD(v1614) = v93;
    if ( v93 < 0 )
      goto LABEL_99;
    v119 = RtlUIntAdd(dwBytes, v1675, &dwBytes);
    v93 = v119 | 0x10000000;
    LODWORD(v1614) = v119 | 0x10000000;
    if ( v119 < 0
      || (v93 = RtlUIntAdd(v120, v120, (unsigned int *)&v1676), LODWORD(v1614) = v93, v93 < 0)
      || (v121 = RtlUIntAdd(dwBytes, v1676, &dwBytes),
          v93 = v121 | 0x10000000,
          LODWORD(v1614) = v121 | 0x10000000,
          v121 < 0) )
    {
LABEL_99:
      v1747 = 0LL;
      v98 = lpMem;
      if ( lpMem )
      {
        v99 = GetProcessHeap();
        HeapFree(v99, 0, v98);
        lpMem = 0LL;
      }
      v1749[0] = 0LL;
      v100 = v1749[1];
      if ( v1749[1] )
      {
        v101 = GetProcessHeap();
        HeapFree(v101, 0, v100);
        v1749[1] = 0LL;
      }
      if ( v92 )
      {
        v102 = GetProcessHeap();
        HeapFree(v102, 0, v92);
      }
      if ( v94 )
      {
        v103 = GetProcessHeap();
        HeapFree(v103, 0, v94);
      }
      if ( v93 < 0 )
        goto LABEL_1577;
      if ( !v97 )
      {
LABEL_1576:
        v1347 = v1645;
        v1608 = 0LL;
        v1700 = (int *)v1643;
        goto LABEL_1578;
      }
      g_WarbirdNotificationInformation = v97;
      v1711 = 0LL;
      ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
      v105 = 0LL;
      if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
        goto LABEL_1222;
      v1485 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
      if ( !v1485 )
      {
        GetLastError();
LABEL_1222:
        SH_HANDLE::~SH_HANDLE((SH_HANDLE *)&v1711);
        v1758 = 0LL;
        v992 = 0LL;
        *(_OWORD *)v1761 = 0LL;
        v993 = GetProcessHeap();
        v994 = HeapAlloc(v993, 8u, 0xA0uLL);
        if ( !v994 )
          goto LABEL_1568;
        v992 = v994;
        *v994 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
        v994[1] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
        v994[2] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
        v994[3] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
        v994[4] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
        v994[5] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
        v994[6] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
        v994[7] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
        v994[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
        v994[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
        v995 = GetProcessHeap();
        v996 = HeapAlloc(v995, 8u, 8uLL);
        v997 = v996;
        if ( !v996 )
          goto LABEL_1568;
        *v996 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
        v1492 = __rdtsc();
        v1651 = 0;
        v105 = (__int64)v997;
        if ( (int)RtlUIntAdd(4u, 4, (unsigned int *)&v1652) < 0 )
          goto LABEL_1568;
        if ( (int)RtlUIntAdd(0, v1652, &v1651) < 0 )
          goto LABEL_1568;
        if ( (int)RtlUIntAdd(v998, 160, (unsigned int *)&v1653) < 0 )
          goto LABEL_1568;
        v999 = RtlUIntAdd(v1651, v1653, &v1651);
        if ( (v1002 | v999) < 0 )
          goto LABEL_1568;
        if ( (int)RtlUIntAdd(v1001, v1000 + 8, (unsigned int *)&v1654) < 0 )
          goto LABEL_1568;
        v1003 = RtlUIntAdd(v1651, v1654, &v1651);
        if ( (v1006 | v1003) < 0 )
          goto LABEL_1568;
        if ( (int)RtlUIntAdd(v1005, v1004 + 8, v1655) < 0 )
          goto LABEL_1568;
        v1007 = RtlUIntAdd(v1651, v1655[0], &v1651);
        if ( (v1008 | v1007) < 0 )
          goto LABEL_1568;
        HIDWORD(v1757) = v1651;
        v1009 = v1651;
        v1010 = GetProcessHeap();
        v1011 = HeapAlloc(v1010, 8u, v1009);
        if ( !v1011 )
          goto LABEL_1568;
        v1758 = v1011;
        LODWORD(v1757) = 0;
        v1726[3] = v1011;
        v1581 = v997;
        v1418 = v992;
        v1012 = 0LL;
        if ( (int)RtlULongLongAdd((unsigned __int64)v1011, 4LL, (unsigned __int64 *)&v1762) < 0
          || v1014 + 2 > (_DWORD *)((char *)v1014 + HIDWORD(v1757)) )
        {
          goto LABEL_1568;
        }
        v1015 = v1762;
        *v1014 = 4;
        *v1015 = 4;
        v1016 = v1757 + 1;
        LODWORD(v1757) = v1757 + 1;
        if ( v1758 )
        {
          v1018 = (int *)v1758;
          v1727 = (int *)v1758;
          v1368 = 0;
          if ( v1016 )
          {
            do
            {
              if ( (int)RtlUIntAdd(4u, *v1018, &v1657) < 0
                || (int)RtlULongLongAdd(v1019, v1657, (unsigned __int64 *)&v1727) < 0 )
              {
                goto LABEL_1568;
              }
              v1018 = v1727;
              ++v1368;
              v1581 = (void *)v105;
              v1418 = v992;
            }
            while ( v1368 < v1020 );
            v1012 = 0LL;
          }
          if ( (int)RtlULongLongAdd((unsigned __int64)v1018, 4LL, (unsigned __int64 *)&v1745) < 0
            || (char *)v1021 + v1022 + 4 > (char *)v1758 + HIDWORD(v1757) )
          {
            goto LABEL_1568;
          }
          *v1021 = v1022;
          memcpy_0(v1745, v992, v1022);
          v1017 = 4LL;
        }
        else if ( (int)RtlUIntAdd(4u, v1013, (unsigned int *)&v1656) < 0
               || (int)RtlUIntAdd(HIDWORD(v1757), v1656, (unsigned int *)&v1757 + 1) < 0 )
        {
          goto LABEL_1568;
        }
        v1023 = v1757 + 1;
        LODWORD(v1757) = v1757 + 1;
        if ( v105 )
        {
          if ( v1758 )
          {
            v1026 = (int *)v1758;
            v1728 = (int *)v1758;
            v1369 = 0;
            if ( v1023 )
            {
              do
              {
                if ( (int)RtlUIntAdd(4u, *v1026, &v1670) < 0
                  || (int)RtlULongLongAdd(v1027, v1670, (unsigned __int64 *)&v1728) < 0 )
                {
                  goto LABEL_1568;
                }
                v1026 = v1728;
                ++v1369;
                v1581 = (void *)v105;
                v1418 = v992;
              }
              while ( v1369 < v1028 );
              v1012 = 0LL;
              v1017 = 4LL;
            }
            if ( (int)RtlULongLongAdd((unsigned __int64)v1026, v1017, (unsigned __int64 *)&v1750) < 0
              || v1029 + 3 > (_DWORD *)((char *)v1758 + HIDWORD(v1757)) )
            {
              goto LABEL_1568;
            }
            *v1029 = 8;
            memcpy_0(v1750, (const void *)v105, 8uLL);
            v1025 = 4LL;
            v1024 = 1;
          }
          else if ( (int)RtlUIntAdd(v1017, 8, (unsigned int *)&v1658) < 0
                 || (int)RtlUIntAdd(HIDWORD(v1757), v1658, (unsigned int *)&v1757 + 1) < 0 )
          {
            goto LABEL_1568;
          }
          v1030 = v1024 + v1757;
          LODWORD(v1757) = v1024 + v1757;
          if ( v1758 )
          {
            v1033 = (int *)v1758;
            v1729 = (int *)v1758;
            if ( v1030 )
            {
              do
              {
                if ( (int)RtlUIntAdd(4u, *v1033, &v1661) < 0
                  || (int)RtlULongLongAdd(v1034, v1661, (unsigned __int64 *)&v1729) < 0 )
                {
                  goto LABEL_1568;
                }
                v1033 = v1729;
                LODWORD(v1012) = (_DWORD)v1012 + 1;
                v1581 = (void *)v105;
                v1418 = v992;
              }
              while ( (unsigned int)v1012 < v1030 );
              v1025 = 4LL;
            }
            v1012 = 0LL;
            if ( (int)RtlULongLongAdd((unsigned __int64)v1033, v1025, (unsigned __int64 *)&v1746) < 0
              || v1035 + 3 > (_DWORD *)((char *)v1758 + HIDWORD(v1757)) )
            {
              goto LABEL_1568;
            }
            v1036 = v1746;
            *v1035 = 8;
            *v1036 = v1492;
            LODWORD(v1757) = v1757 + 1;
          }
          else
          {
            if ( (int)RtlUIntAdd(v1025, 8, (unsigned int *)&v1660) < 0
              || (int)RtlUIntAdd(HIDWORD(v1757), v1660, (unsigned int *)&v1757 + 1) < 0 )
            {
              goto LABEL_1568;
            }
            LODWORD(v1757) = v1031 + v1757;
          }
          if ( (int)RtlUIntAdd(v1032, v1032, &v1662) >= 0 )
          {
            v1038 = v1662;
            v1663 = v1662;
            if ( (int)RtlUIntAdd(v1037, 8, (unsigned int *)&v1664) >= 0
              && (int)RtlUIntAdd(v1038, v1664, (unsigned int *)&v1663) >= 0 )
            {
              v1385 = 0;
              v1611 = 0LL;
              Srcf = 0LL;
              v1531 = 0;
              v1412 = 0LL;
              v1453 = 0LL;
              v1468 = 0LL;
              v1370 = v1663;
              v1493 = 0LL;
              lpModuleNameg = (LPCWSTR)__rdtsc();
              v1665 = 8;
              v1039 = RtlUIntAdd(8u, SHIDWORD(v1757), &v1665);
              if ( v1039 >= 0 )
              {
                v1042 = (v1665 + 7) & 0xFFFFFFF8;
                if ( v1042 < v1665 )
                  goto LABEL_1568;
                v1665 = (v1665 + 7) & 0xFFFFFFF8;
                v1043 = v1042;
                v1044 = GetProcessHeap();
                v1045 = (unsigned __int8 *)HeapAlloc(v1044, 8u, v1043);
                v1603 = v1045;
                if ( !v1045 )
                  goto LABEL_1568;
                v1730[0] = v1045;
                *(_DWORD *)v1045 = v1757;
                v1046 = RtlULongLongAdd((unsigned __int64)v1045, 4LL, (unsigned __int64 *)v1730);
                v1610 = v1047;
                v1039 = v1046;
                v1581 = (void *)v105;
                v1418 = v992;
                if ( v1046 < 0
                  || (v1048 = v1730[0],
                      *(_DWORD *)v1730[0] = HIDWORD(v1757),
                      v1049 = RtlULongLongAdd((unsigned __int64)v1048, 4LL, (unsigned __int64 *)v1730),
                      v1610 = v1050,
                      v1039 = v1049,
                      v1581 = (void *)v105,
                      v1418 = v992,
                      v1049 < 0) )
                {
                  v1051 = GetProcessHeap();
                  HeapFree(v1051, 0, v1610);
                  v1040 = 0;
                }
                else
                {
                  *(_QWORD *)&v1050[v1665 - 8] = lpModuleNameg;
                  memcpy_0(v1730[0], v1758, HIDWORD(v1757));
                  v1012 = v1603;
                  v1040 = v1665;
                  v1493 = (SIZE_T)v1603;
                  v1385 = v1665;
                  v1581 = (void *)v105;
                  v1418 = v992;
                }
                v1041 = 0LL;
              }
              v1052 = v1039 | 0x10000000;
              if ( v1052 < 0 )
                goto LABEL_1352;
              lpModuleNameh = v1041;
              if ( v1012 )
              {
                v1053 = v1040;
                v1545 = (LPVOID)v1040;
                if ( !v1040 || (v1608 = v1040 + 8LL, (v1438 = (char *)MemoryAlloc(v1608)) == 0LL) )
                {
                  v1052 = -805306367;
LABEL_1353:
                  v1157 = GetProcessHeap();
                  HeapFree(v1157, 0, v1012);
LABEL_1354:
                  v1158 = (_QWORD *)v1611;
                  if ( v1611 )
                  {
                    v1159 = *(void **)(v1611 + 8);
                    if ( v1159 )
                    {
                      v1160 = GetProcessHeap();
                      HeapFree(v1160, 0, v1159);
                      v1158[1] = 0LL;
                    }
                    v1161 = (void *)v1158[3];
                    if ( v1161 )
                    {
                      v1162 = GetProcessHeap();
                      HeapFree(v1162, 0, v1161);
                      v1158[3] = 0LL;
                    }
                    v1163 = (void *)v1158[5];
                    if ( v1163 )
                    {
                      v1164 = GetProcessHeap();
                      HeapFree(v1164, 0, v1163);
                      v1158[5] = 0LL;
                    }
                    v1165 = GetProcessHeap();
                    HeapFree(v1165, 0, v1158);
                  }
                  if ( Srcf )
                  {
                    v1166 = GetProcessHeap();
                    HeapFree(v1166, 0, Srcf);
                  }
                  if ( v1412 )
                  {
                    v1167 = GetProcessHeap();
                    HeapFree(v1167, 0, v1412);
                  }
                  if ( v1453 )
                  {
                    v1168 = (void *)v1453[1];
                    if ( v1168 )
                    {
                      v1169 = GetProcessHeap();
                      HeapFree(v1169, 0, v1168);
                      v1453[1] = 0LL;
                    }
                    v1170 = (void *)v1453[3];
                    if ( v1170 )
                    {
                      v1171 = GetProcessHeap();
                      HeapFree(v1171, 0, v1170);
                      v1453[3] = 0LL;
                    }
                    v1172 = (void *)v1453[5];
                    if ( v1172 )
                    {
                      v1173 = GetProcessHeap();
                      HeapFree(v1173, 0, v1172);
                      v1453[5] = 0LL;
                    }
                    v1174 = GetProcessHeap();
                    HeapFree(v1174, 0, v1453);
                  }
                  if ( v1468 )
                  {
                    v1175 = GetProcessHeap();
                    HeapFree(v1175, 0, v1468);
                  }
                  if ( v1052 >= 0 )
                  {
                    if ( LODWORD(v1761[0]) )
                    {
                      v1176 = v1761[1];
                      if ( v1761[1] )
                      {
                        v1740 = (int *)v1761[1];
                        if ( (int)RtlULongLongAdd((unsigned __int64)v1761[1], 4LL, (unsigned __int64 *)&v1740) >= 0 )
                        {
                          v1179 = v1740;
                          if ( !*v1176 )
                            v1179 = 0LL;
                          v1740 = v1179;
                          if ( *v1176 == (_DWORD)v1178 && *v1179 >= 0 && v1176 && LODWORD(v1761[0]) > 1 )
                          {
                            v1741[0] = v1177;
                            v1180 = 0;
                            while ( (int)RtlULongLongAdd(v1177, v1178, v1741) >= 0
                                 && (int)RtlULongLongAdd(v1741[0], v1181, v1741) >= 0 )
                            {
                              v1177 = v1741[0];
                              if ( ++v1180 )
                              {
                                RtlULongLongAdd(v1741[0], v1178, v1741);
                                goto LABEL_1568;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_1568;
                }
                v1054 = 0;
                v1055 = 0LL;
                v1357 = 0;
                if ( v1053 )
                {
                  do
                    v1054 ^= v1012[v1055++];
                  while ( v1055 < v1053 );
                  v1357 = v1054;
                }
                v1056 = v1438;
                v1612 = v1438;
                v1057 = -1;
                v1058 = v1385;
                v1815 = 0xC81ECB17B1B54A58uLL;
                v1604 = 0;
                v1059 = v1012;
                LODWORD(v1610) = 0;
                v1060 = 0;
                v1061 = v1385 & 7;
                if ( (v1385 & 7) != 0 )
                {
                  v1062 = 0;
                  v1063 = 0;
                  v1386 = 0;
                  v1064 = 56;
                  do
                  {
                    v1065 = *v1059++;
                    if ( v1062 >= 4 )
                      v1063 |= v1065 << v1064;
                    else
                      v1060 |= v1065 << (v1064 - 32);
                    v1064 -= 8;
                    v1062 = v1386 + 1;
                    v1604 = v1063;
                    LODWORD(v1610) = v1060;
                    v1386 = v1062;
                  }
                  while ( (int)v1062 < v1061 );
                  v93 = (int)v1614;
                  v1060 ^= 0xB17A307A;
                  v1066 = v1612;
                  v1067 = v1063 ^ 0x42F6B18D;
                  v1557 = v1059;
                  v1068 = v1060;
                  v1581 = (void *)v105;
                  v1069 = v1067;
                  v1418 = v992;
                  v1493 = (SIZE_T)v1012;
                  v1070 = 0;
                  do
                  {
                    v1387 = v1066 + 1;
                    if ( v1070 >= 4 )
                    {
                      v1069 = __ROL4__(v1069, 8);
                      v1071 = v1069;
                    }
                    else
                    {
                      v1068 = __ROL4__(v1068, 8);
                      v1071 = v1068;
                    }
                    *v1066 = v1071;
                    ++v1070;
                    ++v1066;
                  }
                  while ( v1070 < v1061 );
                  v1054 = v1357;
                  v1056 = v1387;
                  v1059 = v1557;
                  v1058 = (unsigned __int64)v1545;
                  v1612 = v1387;
                  if ( (unsigned int)v1061 <= 4 )
                  {
                    v1057 = 0;
                    if ( (unsigned int)v1061 >= 4 )
                      goto LABEL_1306;
                    v1060 = v1060 >> (8 * (4 - v1061)) << (8 * (4 - v1061));
                  }
                  else
                  {
                    v1057 = v1067 >> (8 * (8 - v1061)) << (8 * (8 - v1061));
                  }
                  v1056 = (char *)v1612;
                }
LABEL_1306:
                if ( v1058 >> 3 )
                {
                  v1072 = v1056 + 7;
                  v1073 = v1059 + 2;
                  v1074 = v1058 >> 3;
                  v1075 = v1604;
                  v1076 = (int)v1610;
                  v1388 = WORD1(v1815);
                  v1077 = WORD2(v1815);
                  LODWORD(v1612) = HIWORD(v1815);
                  do
                  {
                    v1078 = *(v1073 - 1) | (*(v1073 - 2) << 8);
                    v1079 = v1073[2] << 8;
                    v1080 = *v1073;
                    v1073 += 8;
                    v1081 = *(v1073 - 7) | ((v1080 | (v1078 << 8)) << 8);
                    v1082 = *(v1073 - 3) | ((*(v1073 - 4) | ((*(v1073 - 5) | v1079) << 8)) << 8);
                    v1083 = v1082 ^ v1057;
                    v1084 = v1060 ^ v1081 ^ (v1083 - 19032);
                    v1085 = __ROR4__(v1084, 15);
                    v1086 = HIDWORD(v1815) ^ v1084;
                    v1087 = (__ROR4__(v1086, 7) + WORD1(v1815) * v1085) ^ v1083;
                    v1088 = (v1077 * __ROR4__(v1087 - 1313519016, 9) - __ROR4__(v1087, 10)) ^ v1086;
                    v1089 = (__ROL4__(v1088, 5) + HIWORD(v1815) * __ROL4__(v1077 ^ v1088, 4)) ^ v1087;
                    v1090 = (HIDWORD(v1815) - (v1089 ^ 0xB1B54A58)) ^ v1088;
                    v1091 = (WORD1(v1815) * (v1090 - 19032) - (v1090 >> 6)) ^ v1089;
                    v1092 = (19032 * (v1077 ^ __ROR4__(v1091, 15))) ^ v1090;
                    v1093 = (v1077 * (HIWORD(v1815) + __ROR4__(~v1092, 3))) ^ v1091;
                    v1094 = (v1093 - HIDWORD(v1815) - 19032) ^ v1092;
                    v1095 = (v1388 * ((unsigned int)v1612 ^ v1094)) ^ __ROR4__(v1094, 10) ^ v1093;
                    v1096 = __ROR4__(v1095, 3) ^ (v1077 * __ROL4__(v1095 ^ 0x4A58, 6)) ^ v1094;
                    v1097 = (19032 * (__ROR4__(v1096, 15) - HIWORD(v1815))) ^ v1095;
                    v1098 = (v1097 >> 15) ^ (19032 * __ROL4__(v1097 - v1077, 3)) ^ (v1097 >> 1) ^ (19032
                                                                                                 * (HIWORD(v1815) ^ v1097)) ^ v1096;
                    v1099 = (WORD1(v1815) * (v1098 - v1077) - (v1098 >> 13)) ^ v1097;
                    v1100 = __ROR4__(v1099, 11) ^ (v1077 * __ROR4__(-1313519016 - v1099, 9)) ^ v1098;
                    v1101 = (v1100 - HIWORD(v1815) + 1313519016) ^ v1099;
                    v1102 = (19032 * (v1101 ^ WORD1(v1815)) - __ROR4__(v1101, 7)) ^ v1100;
                    v1103 = (WORD1(v1815) * __ROL4__(v1102 ^ HIWORD(v1815), 4) - __ROR4__(v1102, 16)) ^ v1101;
                    v1104 = (__ROR4__(v1103, 4) + v1077 * __ROR4__(-1313519016 - v1103, 10)) ^ v1102;
                    v1105 = __ROR4__(v1104, 9) ^ (HIWORD(v1815) * __ROR4__(v1104 + 1313519016, 4)) ^ v1103;
                    v1106 = (19032 * __ROL4__(v1105 ^ HIDWORD(v1815), 8) - __ROL4__(v1105, 2)) ^ v1104;
                    v1107 = (WORD1(v1815) * __ROR4__(HIDWORD(v1815) - v1106, 11) - __ROR4__(v1106, 12)) ^ v1105;
                    v1108 = (v1107 >> 8) ^ (v1077 * (v1107 ^ WORD1(v1815))) ^ v1106;
                    v1109 = v1108 ^ HIDWORD(v1815) ^ v1107 ^ 0xB1B54A58;
                    v1110 = v1076 ^ v1108;
                    *(v1072 - 4) = v1110;
                    v1111 = v1075 ^ v1109;
                    *v1072 = v1111;
                    v1076 = v1081;
                    v1112 = __ROR4__(v1110, 8);
                    v1075 = v1082;
                    *(v1072 - 5) = v1112;
                    v1072 += 8;
                    v1113 = __ROR4__(v1111, 8);
                    *(v1072 - 9) = v1113;
                    v1114 = __ROR4__(v1112, 8);
                    *(v1072 - 14) = v1114;
                    v1115 = __ROR4__(v1113, 8);
                    *(v1072 - 10) = v1115;
                    v1116 = __ROR4__(v1114, 8);
                    v1117 = __ROR4__(v1115, 8);
                    *(v1072 - 15) = v1116;
                    *(v1072 - 11) = v1117;
                    v1057 = __ROR4__(v1117, 8);
                    v1060 = __ROR4__(v1116, 8);
                    --v1074;
                  }
                  while ( v1074 );
                  v1054 = v1357;
                  v93 = (int)v1614;
                  v992 = v1418;
                  v105 = (__int64)v1581;
                  v1012 = (unsigned __int8 *)v1493;
                  v1058 = (unsigned __int64)v1545;
                }
                *(_QWORD *)&v1438[v1058] = v1054;
                v1730[4] = (void *)160;
                v1118 = GetProcessHeap();
                v1119 = (unsigned int *)HeapAlloc(v1118, 8u, 0x30uLL);
                if ( v1119 )
                {
                  *v1119 = v1608;
                  v1121 = GetProcessHeap();
                  v1122 = HeapAlloc(v1121, 8u, (unsigned int)v1608);
                  if ( !v1122 )
                    goto LABEL_1315;
                  *((_QWORD *)v1119 + 1) = v1122;
                  memcpy_0(v1122, v1438, (unsigned int)v1608);
                  v1119[4] = 160;
                  v1123 = GetProcessHeap();
                  v1124 = HeapAlloc(v1123, 8u, 0xA0uLL);
                  if ( !v1124 )
                    goto LABEL_1315;
                  *((_QWORD *)v1119 + 3) = v1124;
                  *v1124 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                  v1124[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                  v1124[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                  v1124[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                  v1124[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                  v1124[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                  v1124[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                  v1124[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                  v1124[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                  v1124[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                  v1119[8] = 8;
                  v1125 = GetProcessHeap();
                  v1126 = HeapAlloc(v1125, 8u, 8uLL);
                  v1120 = 0;
                  if ( v1126 )
                  {
                    *((_QWORD *)v1119 + 5) = v1126;
                    *v1126 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                    lpModuleNameh = 0LL;
                  }
                  else
                  {
LABEL_1315:
                    v1120 = -1073741801;
                    v1419 = (void *)*((_QWORD *)v1119 + 1);
                    if ( v1419 )
                    {
                      v1127 = GetProcessHeap();
                      HeapFree(v1127, 0, v1419);
                      *((_QWORD *)v1119 + 1) = 0LL;
                    }
                    v1420 = (void *)*((_QWORD *)v1119 + 3);
                    if ( v1420 )
                    {
                      v1128 = GetProcessHeap();
                      HeapFree(v1128, 0, v1420);
                      *((_QWORD *)v1119 + 3) = 0LL;
                    }
                    v1421 = (void *)*((_QWORD *)v1119 + 5);
                    if ( v1421 )
                    {
                      v1129 = GetProcessHeap();
                      HeapFree(v1129, 0, v1421);
                      *((_QWORD *)v1119 + 5) = 0LL;
                    }
                    v1130 = GetProcessHeap();
                    HeapFree(v1130, 0, v1119);
                    v1119 = 0LL;
                  }
                }
                else
                {
                  v1120 = -1073741801;
                  v1119 = 0LL;
                }
                v1611 = (SIZE_T)v1119;
                v1131 = GetProcessHeap();
                HeapFree(v1131, 0, v1438);
                v1132 = lpModuleNameh;
                if ( lpModuleNameh )
                {
                  v1422 = (void *)*((_QWORD *)lpModuleNameh + 1);
                  if ( v1422 )
                  {
                    v1133 = GetProcessHeap();
                    HeapFree(v1133, 0, v1422);
                    v1132 = lpModuleNameh;
                    *((_QWORD *)lpModuleNameh + 1) = 0LL;
                  }
                  v1423 = (void *)*((_QWORD *)v1132 + 3);
                  if ( v1423 )
                  {
                    v1134 = GetProcessHeap();
                    HeapFree(v1134, 0, v1423);
                    v1132 = lpModuleNameh;
                    *((_QWORD *)lpModuleNameh + 3) = 0LL;
                  }
                  v1424 = (void *)*((_QWORD *)v1132 + 5);
                  if ( v1424 )
                  {
                    v1135 = GetProcessHeap();
                    HeapFree(v1135, 0, v1424);
                    *((_QWORD *)lpModuleNameh + 5) = 0LL;
                  }
                  v1136 = GetProcessHeap();
                  HeapFree(v1136, 0, lpModuleNameh);
                  v1611 = (SIZE_T)v1119;
                }
                v1052 = v1120 | 0x10000000;
                if ( v1052 < 0 )
                  goto LABEL_1352;
                v1137 = *v1119;
                LODWORD(v1666) = 4;
                v1138 = RtlUIntAdd(4u, v1137, (unsigned int *)&v1666);
                if ( v1138 >= 0 )
                {
                  v1138 = RtlUIntAdd(v1666, v1139, (unsigned int *)&v1666);
                  if ( v1138 >= 0 )
                  {
                    v1138 = RtlUIntAdd(v1666, v1119[4], (unsigned int *)&v1666);
                    if ( v1138 >= 0 )
                    {
                      v1138 = RtlUIntAdd(v1666, v1140, (unsigned int *)&v1666);
                      if ( v1138 >= 0 )
                      {
                        v1138 = RtlUIntAdd(v1666, v1119[8], (unsigned int *)&v1666);
                        if ( v1138 >= 0 )
                        {
                          v1389 = v1666;
                          v1141 = v1666;
                          v1142 = GetProcessHeap();
                          v1143 = HeapAlloc(v1142, 8u, v1141);
                          v1608 = (SIZE_T)v1143;
                          if ( !v1143 )
                            goto LABEL_1417;
                          v1731 = v1143;
                          *v1143 = *v1119;
                          v1144 = RtlULongLongAdd((unsigned __int64)v1143, 4LL, (unsigned __int64 *)&v1731);
                          v1605 = v1145;
                          v1138 = v1144;
                          v1611 = (SIZE_T)v1119;
                          if ( v1144 < 0 )
                            goto LABEL_1347;
                          memcpy_0(v1731, *((const void **)v1119 + 1), *v1119);
                          v1138 = RtlULongLongAdd((unsigned __int64)v1731, *v1119, (unsigned __int64 *)&v1731);
                          v1605 = (void *)v1608;
                          v1611 = (SIZE_T)v1119;
                          if ( v1138 < 0 )
                            goto LABEL_1347;
                          v1146 = v1731;
                          *(_DWORD *)v1731 = v1119[4];
                          v1147 = RtlULongLongAdd((unsigned __int64)v1146, 4LL, (unsigned __int64 *)&v1731);
                          v1605 = v1148;
                          v1138 = v1147;
                          v1611 = (SIZE_T)v1119;
                          if ( v1147 < 0 )
                            goto LABEL_1347;
                          memcpy_0(v1731, *((const void **)v1119 + 3), v1119[4]);
                          v1138 = RtlULongLongAdd((unsigned __int64)v1731, v1119[4], (unsigned __int64 *)&v1731);
                          v1605 = (void *)v1608;
                          v1611 = (SIZE_T)v1119;
                          if ( v1138 < 0 )
                            goto LABEL_1347;
                          v1149 = v1731;
                          *(_DWORD *)v1731 = v1119[8];
                          v1150 = RtlULongLongAdd((unsigned __int64)v1149, 4LL, (unsigned __int64 *)&v1731);
                          v1605 = v1151;
                          v1138 = v1150;
                          v1611 = (SIZE_T)v1119;
                          if ( v1150 < 0
                            || (memcpy_0(v1731, *((const void **)v1119 + 5), v1119[8]),
                                v1138 = RtlULongLongAdd((unsigned __int64)v1731, v1119[8], (unsigned __int64 *)&v1731),
                                v1611 = (SIZE_T)v1119,
                                v1605 = (void *)v1608,
                                v1138 < 0) )
                          {
LABEL_1347:
                            v1152 = GetProcessHeap();
                            HeapFree(v1152, 0, v1605);
                          }
                          else
                          {
                            Srcf = (void *)v1608;
                            v1531 = v1389;
                            v1611 = (SIZE_T)v1119;
                          }
                        }
                      }
                    }
                  }
                }
                v1052 = v1138 | 0x10000000;
                if ( v1052 < 0 )
                  goto LABEL_1352;
                v1667 = 8;
                v1153 = RtlUIntAdd(8u, v1370, &v1667);
                v1052 = v1153 | 0x10000000;
                if ( v1153 < 0 )
                  goto LABEL_1352;
                v1156 = (v1667 + 7) & 0xFFFFFFF8;
                if ( v1156 < v1667 )
                {
                  v1052 = -1073741675;
                  goto LABEL_1352;
                }
                v1668 = (v1667 + 7) & 0xFFFFFFF8;
                Srcf = v1155;
                v1611 = (SIZE_T)v1119;
                v1052 = RtlUIntAdd(v1156, v1154, &v1668);
                if ( v1052 < 0 )
                  goto LABEL_1352;
                v1611 = (SIZE_T)v1119;
                Srcf = v1182;
                if ( !v1758 )
                  goto LABEL_1394;
                v1611 = (SIZE_T)v1119;
                Srcf = v1182;
                if ( (unsigned int)v1757 <= 1 )
                  goto LABEL_1394;
                v1183 = v1758;
                v1732 = v1758;
                do
                {
                  v1052 = RtlULongLongAdd((unsigned __int64)v1183, 4LL, (unsigned __int64 *)&v1732);
                  if ( v1052 < 0 )
                    goto LABEL_1352;
                  v1052 = RtlULongLongAdd((unsigned __int64)v1732, v1184, (unsigned __int64 *)&v1732);
                  if ( v1052 < 0 )
                    goto LABEL_1352;
                  v1183 = v1732;
                }
                while ( v1185 == -1 );
                v1371 = *v1732;
                v1052 = RtlULongLongAdd((unsigned __int64)v1732, 4LL, (unsigned __int64 *)&v1732);
                if ( v1052 < 0 )
                  goto LABEL_1352;
                if ( !v1758 || (unsigned int)v1757 <= 2 )
                {
LABEL_1394:
                  v1052 = -1073741811;
                  goto LABEL_1352;
                }
                v1186 = v1758;
                v1733 = v1758;
                do
                {
                  v1052 = RtlULongLongAdd((unsigned __int64)v1186, 4LL, (unsigned __int64 *)&v1733);
                  if ( v1052 < 0 )
                    goto LABEL_1352;
                  v1052 = RtlULongLongAdd((unsigned __int64)v1733, v1187, (unsigned __int64 *)&v1733);
                  if ( v1052 < 0 )
                    goto LABEL_1352;
                  v1186 = v1733;
                }
                while ( (unsigned int)(v1188 + 1) < 2 );
                v1052 = RtlULongLongAdd((unsigned __int64)v1733, 4LL, (unsigned __int64 *)&v1733);
                if ( v1052 < 0
                  || (LODWORD(v1669) = 4, v1052 = RtlUIntAdd(4u, v1668, (unsigned int *)&v1669), v1052 < 0)
                  || (v1052 = RtlUIntAdd(v1669, v1189, (unsigned int *)&v1669), v1052 < 0)
                  || (v1052 = RtlUIntAdd(v1669, v1371, (unsigned int *)&v1669), v1052 < 0)
                  || (v1052 = RtlUIntAdd(v1669, 4, (unsigned int *)&v1669), v1052 < 0)
                  || (v1052 = RtlUIntAdd(v1669, v1190, (unsigned int *)&v1669), v1052 < 0) )
                {
LABEL_1352:
                  if ( !v1012 )
                    goto LABEL_1354;
                  goto LABEL_1353;
                }
                v1521 = v1669;
                if ( (unsigned int)v1669 > 0x400000 )
                {
                  v1052 = -2147418113;
                  goto LABEL_1352;
                }
                lpModuleNamei = v1191;
                v1546 = v1012;
                v1608 = (SIZE_T)v992;
                v1610 = v1119;
                v1192 = v1669;
                v1193 = GetProcessHeap();
                v1612 = HeapAlloc(v1193, 8u, v1192);
                v1194 = v1612;
                if ( !v1612 )
                {
LABEL_1417:
                  v1052 = -805306345;
                  goto LABEL_1352;
                }
                v1195 = lpModuleNamei;
                if ( !lpModuleNamei )
                {
                  v992 = (void *)v1608;
                  v1052 = -2147024809;
                  v1412 = v1612;
                  v1611 = (SIZE_T)v1610;
LABEL_1428:
                  Srcf = (void *)v1195;
                  goto LABEL_1352;
                }
                v1767[0] = lpModuleNamei;
                v1768 = v1531;
                v1769 = v1521;
                v1767[1] = v1612;
                v1770 = 0;
                if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule) )
                {
                  v1198 = GetProcAddress(hModule, "NtQuerySystemInformation");
                  if ( v1198 )
                  {
                    v1200 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1198)(134LL, v1767);
                    v1197 = v1521;
                    v1052 = v1200 | 0x10000000;
                    if ( v1200 >= 0 )
                    {
                      v1197 = v1769;
                      v1201 = v1194;
                      v1202 = (SIZE_T)v1610;
                      v1203 = v1012;
                      v1204 = lpModuleNamei;
                      v1205 = v105;
                      v1206 = v1608;
                      v1521 = v1769;
LABEL_1438:
                      v1439 = 0LL;
                      v1681[0] = 0;
                      v1735 = v1201;
                      if ( v1197 < 4 )
                      {
                        v105 = v1205;
                        v992 = (void *)v1206;
                        v1012 = v1203;
LABEL_1440:
                        v1611 = v1202;
LABEL_1441:
                        v1412 = v1201;
                        v1052 = -805306306;
                        Srcf = (void *)v1204;
                        goto LABEL_1352;
                      }
                      v1372 = *v1201;
                      v1207 = RtlULongLongAdd((unsigned __int64)v1201, 4LL, (unsigned __int64 *)&v1735);
                      v992 = (void *)v1608;
                      v1208 = 0LL;
                      v1412 = v1209;
                      v1012 = v1210;
                      v1611 = v1202;
                      v1582 = (void *)v105;
                      v1425 = (LPVOID)v1608;
                      v1494 = (SIZE_T)v1210;
                      Srcf = v1211;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      v1212 = RtlUIntAdd(0, 4, v1681);
                      v1213 = (SIZE_T)v1610;
                      v1207 = v1212;
                      v1208 = 0LL;
                      v1412 = v1201;
                      v1494 = v1214;
                      v1202 = (SIZE_T)v1610;
                      v1611 = (SIZE_T)v1610;
                      v1582 = (void *)v105;
                      v1425 = v992;
                      Srcf = (void *)v1204;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      if ( v1521 - v1681[0] < v1372 )
                      {
LABEL_1445:
                        v1611 = v1213;
                        goto LABEL_1441;
                      }
                      v1558 = v1735;
                      v1207 = RtlULongLongAdd((unsigned __int64)v1735, v1372, (unsigned __int64 *)&v1735);
                      v1412 = v1215;
                      v1208 = 0LL;
                      v1611 = v1202;
                      v1582 = (void *)v105;
                      v1425 = v992;
                      v1494 = v1216;
                      Srcf = v1217;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      v1207 = RtlUIntAdd(v1681[0], v1372, v1681);
                      v1412 = v1201;
                      v1208 = 0LL;
                      v1611 = v1202;
                      v1494 = v1218;
                      v1582 = (void *)v105;
                      v1425 = v992;
                      v1213 = v1202;
                      Srcf = (void *)v1204;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      if ( v1521 - v1681[0] < 4 )
                        goto LABEL_1445;
                      v1390 = *(_DWORD *)v1735;
                      v1207 = RtlULongLongAdd((unsigned __int64)v1735, 4LL, (unsigned __int64 *)&v1735);
                      v1412 = v1219;
                      v1208 = 0LL;
                      v1611 = v1202;
                      v1582 = (void *)v105;
                      v1425 = v992;
                      v1494 = v1220;
                      Srcf = v1221;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      v1207 = RtlUIntAdd(v1681[0], 4, v1681);
                      v1412 = v1201;
                      v1208 = 0LL;
                      v1611 = v1202;
                      v1494 = v1222;
                      v1582 = (void *)v105;
                      v1425 = v992;
                      v1213 = v1202;
                      Srcf = (void *)v1204;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      if ( v1521 - v1681[0] < v1390 )
                        goto LABEL_1445;
                      v1591 = v1735;
                      v1207 = RtlULongLongAdd((unsigned __int64)v1735, v1390, (unsigned __int64 *)&v1735);
                      v1412 = v1223;
                      v1208 = 0LL;
                      v1611 = v1202;
                      v1582 = (void *)v105;
                      v1425 = v992;
                      v1494 = v1224;
                      Srcf = v1225;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      v1207 = RtlUIntAdd(v1681[0], v1390, v1681);
                      v1412 = v1201;
                      v1208 = 0LL;
                      v1611 = v1202;
                      v1494 = v1226;
                      v1582 = (void *)v105;
                      v1425 = v992;
                      v1213 = v1202;
                      Srcf = (void *)v1204;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      if ( v1521 - v1681[0] < 4 )
                        goto LABEL_1445;
                      v1532 = *(_DWORD *)v1735;
                      v1207 = RtlULongLongAdd((unsigned __int64)v1735, 4LL, (unsigned __int64 *)&v1735);
                      v1412 = v1227;
                      v1208 = 0LL;
                      v1611 = v1202;
                      v1582 = (void *)v105;
                      v1425 = v992;
                      v1494 = v1228;
                      Srcf = v1229;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      v1207 = RtlUIntAdd(v1681[0], 4, v1681);
                      v1412 = v1201;
                      v1208 = 0LL;
                      v1611 = v1202;
                      v1494 = v1230;
                      v1582 = (void *)v105;
                      v1425 = v992;
                      v1213 = v1202;
                      Srcf = (void *)v1204;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      if ( v1521 - v1681[0] < v1532 )
                        goto LABEL_1445;
                      v1207 = RtlUIntAdd(v1681[0], v1532, v1681);
                      v1412 = v1201;
                      v1208 = 0LL;
                      v1611 = v1202;
                      v1582 = (void *)v105;
                      v1425 = v992;
                      v1494 = v1231;
                      Srcf = (void *)v1204;
                      if ( v1207 < 0 )
                        goto LABEL_1487;
                      if ( v1521 != v1681[0] )
                      {
                        v1611 = v1202;
                        goto LABEL_1441;
                      }
                      if ( v1532 + v1390 + v1372 + 12LL != v1521 )
                        goto LABEL_1440;
                      v1232 = GetProcessHeap();
                      v1233 = HeapAlloc(v1232, 8u, 0x30uLL);
                      v1522 = v1233;
                      v1611 = v1202;
                      if ( !v1233 )
                      {
                        v1052 = -805306345;
                        v1012 = v1546;
                        v1412 = v1612;
                        goto LABEL_1427;
                      }
                      v1207 = 0;
                      v1012 = v1546;
                      v1412 = v1612;
                      Srcf = (void *)lpModuleNamei;
                      v1494 = (SIZE_T)v1546;
                      v1425 = v992;
                      v1582 = (void *)v105;
                      if ( v1558 )
                      {
                        *(_DWORD *)v1233 = v1372;
                        v1234 = GetProcessHeap();
                        v1235 = HeapAlloc(v1234, 8u, v1372);
                        if ( !v1235 )
                        {
                          v1412 = v1612;
                          Srcf = (void *)lpModuleNamei;
                          v1611 = v1202;
                          v1582 = (void *)v105;
                          v1425 = v992;
                          v1494 = (SIZE_T)v1546;
LABEL_1475:
                          v1207 = -1073741801;
                          v1240 = v1522;
                          v1454 = (void *)v1522[1];
                          if ( v1454 )
                          {
                            v1241 = GetProcessHeap();
                            HeapFree(v1241, 0, v1454);
                            v1240 = v1522;
                            v1522[1] = 0LL;
                          }
                          v1455 = (void *)v1240[3];
                          if ( v1455 )
                          {
                            v1242 = GetProcessHeap();
                            HeapFree(v1242, 0, v1455);
                            v1240 = v1522;
                            v1522[3] = 0LL;
                          }
                          v1456 = (void *)v1240[5];
                          if ( v1456 )
                          {
                            v1243 = GetProcessHeap();
                            HeapFree(v1243, 0, v1456);
                            v1522[5] = 0LL;
                          }
                          v1244 = GetProcessHeap();
                          HeapFree(v1244, 0, v1522);
                          v1208 = 0LL;
                          goto LABEL_1485;
                        }
                        v1522[1] = v1235;
                        memcpy_0(v1235, v1558, v1372);
                        v1233 = v1522;
                      }
                      else
                      {
                        v1412 = v1612;
                        *(_DWORD *)v1233 = 0;
                        v1233[1] = 0LL;
                        v1611 = v1202;
                        v1582 = (void *)v105;
                        v1425 = v992;
                        v1494 = (SIZE_T)v1546;
                        Srcf = (void *)lpModuleNamei;
                      }
                      v1522 = v1233;
                      if ( v1591 )
                      {
                        *((_DWORD *)v1233 + 4) = v1390;
                        v1236 = GetProcessHeap();
                        v1237 = HeapAlloc(v1236, 8u, v1390);
                        if ( !v1237 )
                          goto LABEL_1475;
                        v1522[3] = v1237;
                        v1207 = 0;
                        memcpy_0(v1237, v1591, v1390);
                        v1233 = v1522;
                        v1611 = v1202;
                        v1582 = (void *)v105;
                        v1425 = v992;
                        v1494 = (SIZE_T)v1546;
                      }
                      else
                      {
                        *((_DWORD *)v1233 + 4) = 0;
                        v1233[3] = 0LL;
                      }
                      if ( v1735 )
                      {
                        *((_DWORD *)v1233 + 8) = v1532;
                        v1238 = GetProcessHeap();
                        v1239 = HeapAlloc(v1238, 8u, v1532);
                        if ( !v1239 )
                          goto LABEL_1475;
                        v1522[5] = v1239;
                        v1207 = 0;
                        memcpy_0(v1239, v1735, v1532);
                        v1233 = v1522;
                        v1611 = v1202;
                        v1582 = (void *)v105;
                        v1425 = v992;
                        v1494 = (SIZE_T)v1546;
                      }
                      else
                      {
                        *((_DWORD *)v1233 + 8) = 0;
                        v1233[5] = 0LL;
                      }
                      v1208 = v1233;
                      v1439 = v1233;
LABEL_1485:
                      v1608 = (SIZE_T)v992;
                      v1533 = v1202;
                      v1245 = 0LL;
                      if ( v1207 < 0 )
                      {
                        v1453 = 0LL;
                        v1611 = v1202;
                        v1582 = (void *)v105;
                        v1425 = v992;
                        v1494 = (SIZE_T)v1546;
                        if ( v1208 )
                        {
                          v1246 = (void *)v1439[1];
                          if ( v1246 )
                          {
                            v1247 = GetProcessHeap();
                            HeapFree(v1247, 0, v1246);
                            v1439[1] = 0LL;
                          }
                          v1248 = (void *)v1439[3];
                          if ( v1248 )
                          {
                            v1249 = GetProcessHeap();
                            HeapFree(v1249, 0, v1248);
                            v1439[3] = 0LL;
                          }
                          v1250 = (void *)v1439[5];
                          if ( v1250 )
                          {
                            v1251 = GetProcessHeap();
                            HeapFree(v1251, 0, v1250);
                            v1439[5] = 0LL;
                          }
                          v1252 = GetProcessHeap();
                          HeapFree(v1252, 0, v1439);
                          v1245 = 0LL;
                          v1202 = v1533;
                          v1453 = 0LL;
                          v992 = (void *)v1608;
                          v1611 = v1533;
                          v1582 = (void *)v105;
                          v1425 = (LPVOID)v1608;
                          v1494 = (SIZE_T)v1546;
                        }
LABEL_1488:
                        v1052 = v1207 | 0x10000000;
                        if ( v1052 < 0 )
                          goto LABEL_1352;
                        if ( !v1245 || (lpModuleNamej = (LPCWSTR)*((_QWORD *)v1245 + 1)) == 0LL || !*v1245 )
                        {
                          v1052 = -805306355;
                          goto LABEL_1352;
                        }
                        v1253 = *v1245 - 8LL;
                        v1547 = v1253;
                        v1254 = MemoryAlloc(v1253);
                        v1255 = 0;
                        v1469 = v1254;
                        v1256 = v1254;
                        if ( !v1254 )
                          goto LABEL_1527;
                        v1257 = (SIZE_T)lpModuleNamej;
                        v1258 = 0;
                        v1259 = v1453;
                        v1606 = (char *)v1254;
                        v1523 = v1253 & 7;
                        v1816 = 0x7F1137FAB69605ELL;
                        v1608 = (SIZE_T)lpModuleNamej;
                        if ( (v1253 & 7) != 0 )
                        {
                          v1373 = 0;
                          v1260 = 0;
                          v1261 = 0;
                          v1262 = (unsigned __int8 *)v1608;
                          do
                          {
                            v1263 = *v1262++;
                            if ( v1260 >= 4 )
                            {
                              v1264 = v1373;
                              v1261 |= v1263 << v1618;
                            }
                            else
                            {
                              v1264 = (v1263 << (v1618 - 32)) | v1373;
                              v1373 = v1264;
                            }
                            v1618 -= 8;
                            ++v1260;
                          }
                          while ( (int)v1260 < (int)v1523 );
                          dwBytes_4 = v1261;
                          v1608 = (SIZE_T)v1262;
                          v1265 = v1261;
                          v1391 = v1264 ^ 0x92F65A5;
                          v93 = (int)v1614;
                          v1266 = v1265 ^ 0x699A899C;
                          v1267 = v1264 ^ 0x92F65A5;
                          v1256 = v1254;
                          v1268 = v1266;
                          v1611 = v1202;
                          v1269 = v1254;
                          v1270 = 0;
                          v1582 = (void *)v105;
                          v1425 = v992;
                          v1494 = (SIZE_T)v1012;
                          do
                          {
                            v1534 = (SIZE_T)(v1269 + 1);
                            if ( v1270 >= 4 )
                            {
                              v1268 = __ROL4__(v1268, 8);
                              v1271 = v1268;
                            }
                            else
                            {
                              v1267 = __ROL4__(v1267, 8);
                              v1271 = v1267;
                            }
                            *v1269 = v1271;
                            ++v1270;
                            ++v1269;
                          }
                          while ( v1270 < (int)v1523 );
                          v1258 = 0;
                          v1202 = v1611;
                          v1255 = v1391;
                          v1606 = (char *)v1534;
                          v1259 = v1453;
                          if ( v1523 <= 4 )
                          {
                            v1392 = 0;
                            if ( v1523 < 4 )
                              v1255 = v1255 >> (8 * (4 - v1523)) << (8 * (4 - v1523));
                          }
                          else
                          {
                            v1392 = v1266 >> (8 * (8 - v1523)) << (8 * (8 - v1523));
                          }
                          v1257 = v1608;
                        }
                        else
                        {
                          v1373 = 0;
                          v1392 = 0;
                        }
                        v1272 = v1547;
                        v1608 = v1547 >> 3;
                        if ( v1547 >> 3 )
                        {
                          v1273 = HIDWORD(v1816);
                          v1274 = (unsigned __int8 *)(v1257 + 2);
                          v1275 = v1392;
                          v1276 = v1373;
                          v1277 = v1606 + 7;
                          v1278 = v1608;
                          v1535 = HIDWORD(v1816) ^ 0xAB69605E;
                          v1279 = WORD2(v1816);
                          do
                          {
                            v1280 = *(v1274 - 1) | (*(v1274 - 2) << 8);
                            v1281 = v1274[2] << 8;
                            v1282 = *v1274;
                            v1274 += 8;
                            v1283 = *(v1274 - 7) | ((v1282 | (v1280 << 8)) << 8);
                            v1284 = v1283 ^ v1255;
                            v1285 = *(v1274 - 3) | ((*(v1274 - 4) | ((*(v1274 - 5) | v1281) << 8)) << 8);
                            v1286 = v1535 ^ v1284 ^ v1285 ^ v1275;
                            v1287 = (__ROL4__(v1286, 10) + v1279 * __ROL4__(v1286 + 1419157410, 5)) ^ v1284;
                            v1288 = (WORD1(v1816) * __ROR4__(v1287 + v1273, 9) - __ROL4__(v1287, 2)) ^ v1286;
                            v1289 = (24670 * (v1288 - v1279) - (v1288 >> 13)) ^ v1287;
                            v1290 = (HIWORD(v1816) * __ROL4__(WORD1(v1816) ^ v1289, 6) - __ROL4__(v1289, 2)) ^ v1288;
                            v1291 = (v1273 - (v1290 ^ 0xAB69605E)) ^ v1289;
                            v1292 = (WORD1(v1816) * (v1279 ^ v1291)) ^ __ROR4__(v1291, 6) ^ v1290;
                            v1293 = (__ROL4__(v1292, 2) + 24670 * __ROR4__(v1292 + v1273, 15)) ^ v1291;
                            v1294 = (HIWORD(v1816) * __ROR4__(v1293 + 1419157410, 14) - __ROL4__(v1293, 8)) ^ v1292;
                            v1295 = __ROR4__(v1294, 10) ^ (v1279 * __ROR4__(v1294 ^ 0xAB69605E, 12)) ^ v1293;
                            v1296 = (v1295 >> 10) ^ (WORD1(v1816) * (HIWORD(v1816) ^ v1295)) ^ v1294;
                            v1297 = (HIWORD(v1816) * (__ROR4__(~v1296, 5) + 24670)) ^ v1295;
                            v1298 = v1296 ^ (v1297 - HIWORD(v1816)) ^ 0xAB69605E;
                            v1299 = ((v1298 >> 2) + v1279 * __ROL4__(HIWORD(v1816) ^ v1298, 2)) ^ v1297;
                            v1300 = (__ROL4__(v1299, 7) + WORD1(v1816) * __ROR4__(v1299 - v1273, 6)) ^ v1298;
                            v1301 = (24670 * (v1279 ^ v1300) + __ROR4__(v1300, 9)) ^ v1299;
                            v1302 = (__ROL4__(v1301, 7) + HIWORD(v1816) * __ROL4__(WORD1(v1816) ^ v1301, 5)) ^ v1300;
                            v1303 = v1273 ^ v1302 ^ v1301 ^ 0xAB69605E;
                            v1304 = (v1279 * (__ROR4__(v1303, 3) - WORD1(v1816))) ^ v1302;
                            v1305 = (24670 * __ROR4__(v1304 - v1273, 1) - __ROR4__(v1304, 6)) ^ v1303;
                            v1306 = (__ROL4__(v1305, 14) + HIWORD(v1816) * __ROL4__(v1305 - 1419157410, 3)) ^ v1304;
                            v1307 = (v1279 * __ROL4__(v1306 - 1419157410, 15) - __ROR4__(v1306, 14)) ^ v1305;
                            v1308 = (v1307 >> 3) ^ (WORD1(v1816) * (v1307 ^ 0x605E)) ^ v1306;
                            v1309 = dwBytes_4 ^ v1308;
                            dwBytes_4 = v1285;
                            v1310 = v1276 ^ __ROL4__(v1308, 2) ^ (24670 * __ROL4__(v1273 ^ v1308, 4));
                            v1276 = v1283;
                            v1311 = v1310 ^ v1307;
                            *(v1277 - 4) = v1311;
                            *v1277 = v1309;
                            v1277 += 8;
                            v1312 = __ROR4__(v1311, 8);
                            *(v1277 - 13) = v1312;
                            v1313 = __ROR4__(v1309, 8);
                            *(v1277 - 9) = v1313;
                            v1314 = __ROR4__(v1312, 8);
                            *(v1277 - 14) = v1314;
                            v1315 = __ROR4__(v1313, 8);
                            *(v1277 - 10) = v1315;
                            v1316 = __ROR4__(v1314, 8);
                            v1317 = __ROR4__(v1315, 8);
                            *(v1277 - 15) = v1316;
                            *(v1277 - 11) = v1317;
                            v1275 = __ROR4__(v1317, 8);
                            v1255 = __ROR4__(v1316, 8);
                            --v1278;
                          }
                          while ( v1278 );
                          v1258 = 0;
                          v93 = (int)v1614;
                          v992 = v1425;
                          v105 = (__int64)v1582;
                          v1012 = (unsigned __int8 *)v1494;
                          v1202 = v1611;
                          v1259 = v1453;
                          v1256 = v1469;
                          v1272 = v1547;
                        }
                        for ( m = 0LL; m < v1272; ++m )
                          v1258 ^= *((_BYTE *)v1256 + m);
                        v1319 = v1259;
                        v1611 = v1202;
                        v1453 = v1259;
                        if ( v1258 != *(_QWORD *)((char *)lpModuleNamej + v1272) )
                        {
                          MemoryFree(v1256);
LABEL_1527:
                          v1052 = -805306367;
                          v1468 = 0LL;
                          goto LABEL_1352;
                        }
                        v1736 = v1256;
                        v1671 = 0;
                        if ( (unsigned int)v1272 < 4 )
                        {
                          v1611 = v1202;
LABEL_1564:
                          v1468 = v1256;
                          v1453 = v1319;
LABEL_1565:
                          v1320 = -1073741762;
                          goto LABEL_1566;
                        }
                        v1374 = *v1256;
                        v1320 = RtlULongLongAdd((unsigned __int64)v1256, 4LL, (unsigned __int64 *)&v1736);
                        v1468 = v1321;
                        v1453 = v1322;
                        v1611 = v1202;
                        if ( v1320 < 0 )
                          goto LABEL_1566;
                        v1323 = RtlUIntAdd(0, 4, &v1671);
                        v1324 = Srcf;
                        v1320 = v1323;
                        v1468 = v1256;
                        v1453 = v1319;
                        v1611 = v1202;
                        if ( v1323 < 0 )
                          goto LABEL_1566;
                        if ( (unsigned int)v1547 - v1671 < 4 )
                          goto LABEL_1533;
                        v1393 = *(_DWORD *)v1736;
                        v1320 = RtlULongLongAdd((unsigned __int64)v1736, 4LL, (unsigned __int64 *)&v1736);
                        v1468 = v1325;
                        v1453 = v1326;
                        v1611 = v1202;
                        if ( v1320 < 0 )
                          goto LABEL_1566;
                        v1327 = RtlUIntAdd(v1671, 4, &v1671);
                        v1324 = Srcf;
                        v1320 = v1327;
                        v1468 = v1256;
                        v1453 = v1319;
                        v1611 = v1202;
                        if ( v1327 < 0 )
                          goto LABEL_1566;
                        if ( (unsigned int)v1547 - v1671 < v1393 )
                        {
LABEL_1533:
                          Srcf = v1324;
                        }
                        else
                        {
                          v1320 = RtlUIntAdd(v1671, v1393, &v1671);
                          v1468 = v1256;
                          v1453 = v1319;
                          v1611 = v1202;
                          if ( v1320 < 0 )
                            goto LABEL_1566;
                          if ( (char *)v1256 + (unsigned int)v1547 >= (char *)v1736 + v1393
                            && (unsigned __int64)v1256 + (unsigned int)v1547 - (_QWORD)v1736 - v1393 < 8 )
                          {
                            v1468 = v1256;
                            v1320 = 0;
                            v1536 = 0;
                            v1453 = v1319;
                            v1611 = v1202;
                            if ( !v1736 )
                              goto LABEL_1552;
                            v1607 = v1736;
                            v1320 = RtlULongLongAdd((unsigned __int64)v1736, v1393, (unsigned __int64 *)&v1737);
                            v1468 = v1328;
                            v1453 = v1329;
                            v1611 = v1202;
                            if ( v1320 >= 0 )
                            {
                              v1330 = (unsigned __int64)v1607;
                              v1468 = v1328;
                              v1453 = v1329;
                              v1611 = v1202;
                              if ( v1607 < v1737 )
                              {
                                v1331 = v1328;
                                v1468 = v1328;
                                v1332 = v1412;
                                v1611 = v1202;
                                v1453 = v1329;
                                while ( 1 )
                                {
                                  v1610 = v1332;
                                  v1612 = v1329;
                                  v1320 = RtlULongLongAdd(v1330, 4LL, (unsigned __int64 *)&v1738);
                                  if ( v1320 < 0 )
                                    goto LABEL_1566;
                                  if ( v1738 > v1737 )
                                    goto LABEL_1556;
                                  v1320 = RtlUIntAdd(v1334, *v1333, &v1672);
                                  if ( v1320 < 0 )
                                    goto LABEL_1566;
                                  v1335 = RtlULongLongAdd((unsigned __int64)v1607, v1672, (unsigned __int64 *)&v1739);
                                  v1453 = v1337;
                                  v1320 = v1335;
                                  v1332 = v1610;
                                  v1412 = v1610;
                                  v1468 = v1331;
                                  v1611 = v1202;
                                  Srcf = v1336;
                                  if ( v1335 < 0 )
                                    goto LABEL_1566;
                                  v1330 = (unsigned __int64)v1739;
                                  v1607 = v1739;
                                  v1468 = v1331;
                                  v1611 = v1202;
                                  Srcf = v1336;
                                  if ( v1739 > v1737 )
                                  {
                                    v1320 = -1073741811;
                                    v1453 = v1612;
                                    v1412 = v1610;
                                    goto LABEL_1566;
                                  }
                                  ++v1536;
                                  v1329 = v1612;
                                  v1453 = v1612;
                                  v1412 = v1610;
                                  if ( v1739 >= v1737 )
                                  {
                                    v1468 = v1331;
                                    v1412 = v1610;
                                    v1453 = v1612;
                                    v1611 = v1202;
                                    Srcf = v1336;
                                    break;
                                  }
                                }
                              }
                              if ( (void *)v1330 != v1737 )
                              {
LABEL_1556:
                                v1320 = -1073741811;
                                goto LABEL_1566;
                              }
LABEL_1552:
                              if ( v1393 )
                              {
                                v1338 = GetProcessHeap();
                                v1339 = v1393;
                                v1320 = 0;
                                v1340 = HeapAlloc(v1338, 8u, v1393);
                                if ( !v1340 )
                                {
                                  v1320 = -1073741801;
                                  goto LABEL_1566;
                                }
                              }
                              else
                              {
                                v1339 = 0LL;
                                v1340 = 0LL;
                              }
                              if ( v1736 )
                                memcpy_0(v1340, v1736, v1339);
                              LODWORD(v1761[0]) = v1536;
                              v1761[1] = v1340;
                              if ( v1320 < 0 || v1374 == LODWORD(v1761[0]) )
                                goto LABEL_1566;
                              goto LABEL_1565;
                            }
LABEL_1566:
                            v1052 = v1320 | 0x10000000;
                            goto LABEL_1352;
                          }
                        }
                        v1611 = v1202;
                        goto LABEL_1564;
                      }
                      v1453 = v1208;
LABEL_1487:
                      v1245 = (unsigned int *)v1208;
                      goto LABEL_1488;
                    }
                  }
                  else
                  {
                    v1199 = GetLastError();
                    v1052 = v1199;
                    if ( v1199 > 0 )
                      v1052 = (unsigned __int16)v1199 | 0x80070000;
                    v1197 = v1521;
                    if ( v1052 >= 0 )
                      v1052 = -2147467259;
                  }
                }
                else
                {
                  v1196 = GetLastError();
                  v1052 = v1196;
                  if ( v1196 > 0 )
                    v1052 = (unsigned __int16)v1196 | 0x80070000;
                  v1197 = v1521;
                  if ( v1052 >= 0 )
                    v1052 = -2147467259;
                }
                v1412 = v1194;
                if ( v1052 == -805306333 )
                {
                  v1052 = -2147024774;
                  v992 = (void *)v1608;
                  v1611 = (SIZE_T)v1610;
LABEL_1427:
                  v1195 = lpModuleNamei;
                  goto LABEL_1428;
                }
                v1206 = v1608;
                v1201 = v1194;
                v1202 = (SIZE_T)v1610;
                v1205 = v105;
                v1204 = lpModuleNamei;
                v992 = (void *)v1608;
                v1611 = (SIZE_T)v1610;
                v1203 = v1012;
                Srcf = (void *)lpModuleNamei;
                if ( v1052 < 0 )
                  goto LABEL_1352;
                goto LABEL_1438;
              }
            }
          }
        }
LABEL_1568:
        v1757 = 0LL;
        v1341 = v1758;
        if ( v1758 )
        {
          v1342 = GetProcessHeap();
          HeapFree(v1342, 0, v1341);
          v1758 = 0LL;
        }
        v1761[0] = 0LL;
        v1343 = v1761[1];
        if ( v1761[1] )
        {
          v1344 = GetProcessHeap();
          HeapFree(v1344, 0, v1343);
          v1761[1] = 0LL;
        }
        if ( v992 )
        {
          v1345 = GetProcessHeap();
          HeapFree(v1345, 0, v992);
        }
        if ( v105 )
        {
          v1346 = GetProcessHeap();
          HeapFree(v1346, 0, (LPVOID)v105);
        }
        goto LABEL_1576;
      }
      v503 = ((__int64 (*)(void))off_180985198)();
      v504 = g_WarbirdNotificationInformation;
      g_WarbirdPaintInitTime = v503;
      v1434 = g_WarbirdNotificationInformation;
      memset_0(&v1800, 0, 0x70uLL);
      v1611 = 0LL;
      v1820 = 0LL;
      v1837 = 0LL;
      v1838 = 0;
      v1835 = 0LL;
      Srce = 0LL;
      v1836 = 0LL;
      while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
        ;
      v505 = g_WarbirdSecureFunctionsRefCount;
      if ( g_WarbirdSecureFunctionsRefCount )
      {
        v553 = 0;
        goto LABEL_662;
      }
      v1554 = 0;
      v1588 = 0;
      v506 = (char *)MemoryAlloc(0x338uLL);
      v1400 = (WCHAR *)v506;
      if ( !v506 )
      {
        v553 = 0;
        goto LABEL_656;
      }
      LODWORD(v1495) = -1;
      v507 = v506 + 7;
      v508 = -1;
      v509 = (unsigned __int8 *)&unk_180832662;
      v510 = 0;
      v511 = 0;
      v512 = 103LL;
      do
      {
        v513 = *(v509 - 1) | (*(v509 - 2) << 8);
        v514 = v509[2] << 8;
        v515 = *v509;
        v509 += 8;
        v516 = *(v509 - 7) | ((v515 | (v513 << 8)) << 8);
        v517 = v516 ^ v511;
        v518 = *(v509 - 3) | ((*(v509 - 4) | ((*(v509 - 5) | v514) << 8)) << 8);
        v519 = v518 ^ v105 ^ v517 ^ 0xAC987321;
        v520 = (__ROL4__(v519, 10) + 4991 * __ROL4__(v519 + 1419157410, 5)) ^ v517;
        v521 = (43881 * __ROR4__(v520 + 133239679, 9) - __ROL4__(v520, 2)) ^ v519;
        v522 = (24670 * v521 - (v521 >> 13) - 123127970) ^ v520;
        v523 = (2033 * __ROL4__(v522 ^ 0xAB69, 6) - __ROL4__(v522, 2)) ^ v521;
        v524 = (133239679 - (v523 ^ 0xAB69605E)) ^ v522;
        v525 = (43881 * (v524 ^ 0x137F)) ^ __ROR4__(v524, 6) ^ v523;
        v526 = (__ROL4__(v525, 2) + 24670 * __ROR4__(v525 + 133239679, 15)) ^ v524;
        v527 = (2033 * __ROR4__(v526 + 1419157410, 14) - __ROL4__(v526, 8)) ^ v525;
        v528 = __ROR4__(v527, 10) ^ (4991 * __ROR4__(v527 ^ 0xAB69605E, 12)) ^ v526;
        v529 = v527 ^ (v528 >> 10) ^ (43881 * (v528 ^ 0x7F1));
        v530 = (2033 * (__ROR4__(~v529, 5) + 24670)) ^ v528;
        v531 = v529 ^ (v530 - 2033) ^ 0xAB69605E;
        v532 = ((v531 >> 2) + 4991 * __ROL4__(v529 ^ (v530 - 2033) ^ 0xAB6967AF, 2)) ^ v530;
        v533 = (__ROL4__(v532, 7) + 43881 * __ROR4__(v532 - 133239679, 6)) ^ v531;
        v534 = (24670 * (v533 ^ 0x137F) + __ROR4__(v533, 9)) ^ v532;
        v535 = (__ROL4__(v534, 7) + 2033 * __ROL4__(v534 ^ 0xAB69, 5)) ^ v533;
        v536 = v535 ^ v534 ^ 0xAC987321;
        v537 = (4991 * __ROR4__(v536, 3) - 219010071) ^ v535;
        v538 = (24670 * __ROR4__(v537 - 133239679, 1) - __ROR4__(v537, 6)) ^ v536;
        v539 = (__ROL4__(v538, 14) + 2033 * __ROL4__(v538 - 1419157410, 3)) ^ v537;
        v540 = (4991 * __ROL4__(v539 - 1419157410, 15) - __ROR4__(v539, 14)) ^ v538;
        v541 = (v540 >> 3) ^ (43881 * (v540 ^ 0x605E)) ^ v539;
        v542 = 24670 * __ROL4__(v541 ^ 0x7F1137F, 4);
        v543 = v541;
        v544 = v508 ^ v541;
        v508 = v518;
        v545 = v510 ^ __ROL4__(v543, 2) ^ v542;
        v510 = v516;
        v546 = v545 ^ v540;
        *(v507 - 4) = v546;
        *v507 = v544;
        v507 += 8;
        v547 = __ROR4__(v546, 8);
        *(v507 - 13) = v547;
        v548 = __ROR4__(v544, 8);
        *(v507 - 9) = v548;
        v549 = __ROR4__(v547, 8);
        *(v507 - 14) = v549;
        v550 = __ROR4__(v548, 8);
        *(v507 - 10) = v550;
        v551 = __ROR4__(v549, 8);
        v552 = __ROR4__(v550, 8);
        *(v507 - 15) = v551;
        *(v507 - 11) = v552;
        LODWORD(v105) = __ROR4__(v552, 8);
        v511 = __ROR4__(v551, 8);
        --v512;
      }
      while ( v512 );
      v504 = v1434;
      v553 = 0;
      v93 = (int)v1614;
      v554 = 0LL;
      v555 = v1400;
      v556 = 0;
      do
        v556 ^= *((_BYTE *)v1400 + v554++);
      while ( v554 < 0x338 );
      if ( v556 != 64LL )
      {
        MemoryFree(v1400);
        goto LABEL_656;
      }
      *((_BYTE *)v1400 + 823) = 0;
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      if ( *(_BYTE *)v1400 )
      {
        v1712 = v1400;
        while ( 1 )
        {
          v557 = v555;
          v558 = -1LL;
          do
            ++v558;
          while ( v555[v558] );
          v559 = &v555[v558];
          v560 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1588;
          if ( !GetModuleHandleExW(0, v557, (HMODULE *)v560) )
            break;
          v561 = 0;
          if ( **(_WORD **)v560 == 23117
            && (v562 = *(int *)(*(_QWORD *)v560 + 60LL), (unsigned int)v562 < 0x10000000)
            && (v563 = *(_QWORD *)v560 + v562, v563 >= *(_QWORD *)v560)
            && *(_DWORD *)v563 == 17744 )
          {
            if ( ((*(_WORD *)(v563 + 24) - 267) & 0xFEFF) != 0 )
            {
              v561 = -1073741811;
            }
            else
            {
              *(_QWORD *)(v560 + 12) = *(_QWORD *)(v563 + 136);
              *((_DWORD *)v560 + 2) = *(_DWORD *)(v563 + 80);
            }
          }
          else
          {
            v561 = -1073741701;
          }
          v564 = *(_DWORD *)(v559 + 1);
          v565 = 0;
          v555 = v559 + 3;
          v1510 = v564;
          for ( LODWORD(v1495) = 0; v565 < v1510; LODWORD(v1495) = v565 )
          {
            v566 = (const CHAR *)v555;
            v567 = -1LL;
            do
              ++v567;
            while ( *((_BYTE *)v555 + v567) );
            v555 = (WCHAR *)((char *)v555 + v567 + 1);
            if ( v561 >= 0 )
            {
              v568 = (void **)GetProcAddress(*(HMODULE *)v560, v566);
              if ( !v568 )
                goto LABEL_648;
              (&WARBIRD::g_FuncAddress)[v1554] = v568;
              v565 = v1495;
            }
            ++v1554;
            ++v565;
          }
          ++v1588;
          v553 = 0;
          if ( !*(_BYTE *)v555 )
            goto LABEL_649;
        }
        v561 = -1073741702;
LABEL_648:
        v553 = 0;
LABEL_649:
        v555 = (WCHAR *)v1712;
        if ( !v1712 )
        {
LABEL_653:
          if ( v561 >= 0 )
          {
            v505 = g_WarbirdSecureFunctionsRefCount;
LABEL_662:
            g_WarbirdSecureFunctionsRefCount = v505 + 1;
            goto LABEL_663;
          }
LABEL_656:
          v570 = (HMODULE *)&WARBIRD::g_arModuleInfo;
          v571 = 4LL;
          do
          {
            if ( *v570 )
              FreeLibrary(*v570);
            v570 += 3;
            --v571;
          }
          while ( v571 );
          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
          memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_663:
          v1555 = 0;
          _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
          v1713 = 0LL;
          v1759 = 0LL;
          v1511 = 0;
          v1401 = 0LL;
          v1444 = 0LL;
          v1460 = 0LL;
          while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
            ;
          v572 = g_WarbirdSecureFunctionsRefCount;
          if ( g_WarbirdSecureFunctionsRefCount )
            goto LABEL_707;
          v1589 = 0;
          LODWORD(v1495) = 0;
          v1477 = 0;
          v573 = (char *)MemoryAlloc(0x338uLL);
          lpModuleNamea = (WCHAR *)v573;
          if ( !v573 )
            goto LABEL_673;
          v574 = v573 + 7;
          v575 = -1;
          v576 = (unsigned __int8 *)&unk_180832662;
          v577 = 103LL;
          v578 = 0;
          v579 = 0;
          do
          {
            v580 = *(v576 - 1) | (*(v576 - 2) << 8);
            v581 = v576[2] << 8;
            v582 = *v576;
            v576 += 8;
            v583 = *(v576 - 7) | ((v582 | (v580 << 8)) << 8);
            v584 = v583 ^ v553;
            v585 = *(v576 - 3) | ((*(v576 - 4) | ((*(v576 - 5) | v581) << 8)) << 8);
            v586 = v584 ^ v585 ^ v579 ^ 0xAC987321;
            v587 = (__ROL4__(v586, 10) + 4991 * __ROL4__(v586 + 1419157410, 5)) ^ v584;
            v588 = (43881 * __ROR4__(v587 + 133239679, 9) - __ROL4__(v587, 2)) ^ v586;
            v589 = (24670 * v588 - (v588 >> 13) - 123127970) ^ v587;
            v590 = (2033 * __ROL4__(v589 ^ 0xAB69, 6) - __ROL4__(v589, 2)) ^ v588;
            v591 = (133239679 - (v590 ^ 0xAB69605E)) ^ v589;
            v592 = (43881 * (v591 ^ 0x137F)) ^ __ROR4__(v591, 6) ^ v590;
            v593 = (__ROL4__(v592, 2) + 24670 * __ROR4__(v592 + 133239679, 15)) ^ v591;
            v594 = (2033 * __ROR4__(v593 + 1419157410, 14) - __ROL4__(v593, 8)) ^ v592;
            v595 = __ROR4__(v594, 10) ^ (4991 * __ROR4__(v594 ^ 0xAB69605E, 12)) ^ v593;
            v596 = (v595 >> 10) ^ (43881 * (v595 ^ 0x7F1)) ^ v594;
            v597 = (2033 * (__ROR4__(~v596, 5) + 24670)) ^ v595;
            v598 = v596 ^ (v597 - 2033) ^ 0xAB69605E;
            v599 = ((v598 >> 2) + 4991 * __ROL4__(v596 ^ (v597 - 2033) ^ 0xAB6967AF, 2)) ^ v597;
            v600 = (__ROL4__(v599, 7) + 43881 * __ROR4__(v599 - 133239679, 6)) ^ v598;
            v601 = (24670 * (v600 ^ 0x137F) + __ROR4__(v600, 9)) ^ v599;
            v602 = (__ROL4__(v601, 7) + 2033 * __ROL4__(v601 ^ 0xAB69, 5)) ^ v600;
            v603 = v602 ^ v601 ^ 0xAC987321;
            v604 = (4991 * __ROR4__(v603, 3) - 219010071) ^ v602;
            v605 = (24670 * __ROR4__(v604 - 133239679, 1) - __ROR4__(v604, 6)) ^ v603;
            v606 = (__ROL4__(v605, 14) + 2033 * __ROL4__(v605 - 1419157410, 3)) ^ v604;
            v607 = (4991 * __ROL4__(v606 - 1419157410, 15) - __ROR4__(v606, 14)) ^ v605;
            v608 = (v607 >> 3) ^ (43881 * (v607 ^ 0x605E)) ^ v606;
            v609 = 24670 * __ROL4__(v608 ^ 0x7F1137F, 4);
            v610 = v608;
            v611 = v575 ^ v608;
            v575 = v585;
            v612 = v578 ^ __ROL4__(v610, 2) ^ v609;
            v578 = v583;
            v613 = v612 ^ v607;
            *(v574 - 4) = v613;
            *v574 = v611;
            v574 += 8;
            v614 = __ROR4__(v613, 8);
            *(v574 - 13) = v614;
            v615 = __ROR4__(v611, 8);
            *(v574 - 9) = v615;
            v616 = __ROR4__(v614, 8);
            *(v574 - 14) = v616;
            v617 = __ROR4__(v615, 8);
            *(v574 - 10) = v617;
            v618 = __ROR4__(v616, 8);
            v619 = __ROR4__(v617, 8);
            *(v574 - 15) = v618;
            *(v574 - 11) = v619;
            v579 = __ROR4__(v619, 8);
            v553 = __ROR4__(v618, 8);
            --v577;
          }
          while ( v577 );
          v620 = 0;
          v504 = v1434;
          v621 = 0LL;
          v93 = (int)v1614;
          v622 = lpModuleNamea;
          do
            v620 ^= *((_BYTE *)lpModuleNamea + v621++);
          while ( v621 < 0x338 );
          if ( v620 != 64LL )
          {
            MemoryFree(lpModuleNamea);
            goto LABEL_673;
          }
          *((_BYTE *)lpModuleNamea + 823) = 0;
          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
          if ( *(_BYTE *)lpModuleNamea )
          {
            v1714 = lpModuleNamea;
            while ( 1 )
            {
              v625 = v622;
              v626 = -1LL;
              do
                ++v626;
              while ( v622[v626] );
              v627 = &v622[v626];
              v628 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1477;
              if ( !GetModuleHandleExW(0, v625, (HMODULE *)v628) )
                break;
              v629 = 0;
              if ( **(_WORD **)v628 == 23117
                && (v630 = *(int *)(*(_QWORD *)v628 + 60LL), (unsigned int)v630 < 0x10000000)
                && (v631 = *(_QWORD *)v628 + v630, v631 >= *(_QWORD *)v628)
                && *(_DWORD *)v631 == 17744 )
              {
                if ( ((*(_WORD *)(v631 + 24) - 267) & 0xFEFF) != 0 )
                {
                  v629 = -1073741811;
                }
                else
                {
                  *(_QWORD *)(v628 + 12) = *(_QWORD *)(v631 + 136);
                  *((_DWORD *)v628 + 2) = *(_DWORD *)(v631 + 80);
                }
              }
              else
              {
                v629 = -1073741701;
              }
              v632 = *(_DWORD *)(v627 + 1);
              v633 = 0;
              v622 = v627 + 3;
              v1435 = v632;
              for ( LODWORD(v1495) = 0; v633 < v1435; LODWORD(v1495) = v633 )
              {
                v634 = (const CHAR *)v622;
                v635 = -1LL;
                do
                  ++v635;
                while ( *((_BYTE *)v622 + v635) );
                v622 = (WCHAR *)((char *)v622 + v635 + 1);
                if ( v629 >= 0 )
                {
                  v636 = (void **)GetProcAddress(*(HMODULE *)v628, v634);
                  if ( !v636 )
                    goto LABEL_701;
                  (&WARBIRD::g_FuncAddress)[v1589] = v636;
                  v633 = v1495;
                }
                ++v1589;
                ++v633;
              }
              ++v1477;
              if ( !*(_BYTE *)v622 )
                goto LABEL_701;
            }
            v629 = -1073741702;
LABEL_701:
            v622 = (WCHAR *)v1714;
            if ( !v1714 )
              goto LABEL_705;
          }
          else
          {
            v629 = 0;
          }
          v637 = GetProcessHeap();
          HeapFree(v637, 0, v622);
LABEL_705:
          if ( v629 < 0 )
          {
LABEL_673:
            v623 = (HMODULE *)&WARBIRD::g_arModuleInfo;
            v624 = 4LL;
            do
            {
              if ( *v623 )
                FreeLibrary(*v623);
              v623 += 3;
              --v624;
            }
            while ( v624 );
            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
            memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_708:
            v105 = 0LL;
            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
            memset_0(&v1800, 0, 0x70uLL);
            v1875[0] = (v504 >> 4) & 0xF;
            v638 = v504 & 0xF;
            v1436 = v638;
            v1875[1] = (v504 >> 8) & 0xF;
            v1820 = 0LL;
            v1875[2] = (v504 >> 12) & 0xF;
            lpModuleNameb = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
            v1590 = -1;
            if ( !lpModuleNameb )
            {
              v639 = GetLastError();
              v640 = v639;
              if ( v639 > 0 )
                v640 = (unsigned __int16)v639 | 0x80070000;
              if ( v640 >= 0 )
                v640 = -2147467259;
LABEL_927:
              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                ;
              v773 = g_WarbirdSecureFunctionsRefCount;
              if ( g_WarbirdSecureFunctionsRefCount > 0 )
              {
                --g_WarbirdSecureFunctionsRefCount;
                if ( v773 == 1 )
                {
                  v774 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                  v105 = 4LL;
                  do
                  {
                    if ( *v774 )
                      FreeLibrary(*v774);
                    v774 += 3;
                    --v105;
                  }
                  while ( v105 );
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                }
              }
              _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1713);
              if ( v640 < 0 )
              {
LABEL_1061:
                if ( v1802 )
                {
                  v854 = -1LL;
                  do
                    ++v854;
                  while ( *((_WORD *)v1802 + v854) );
                  memset(v1802, 0, 2 * v854 + 2);
                  MemoryFree(v1802);
                  v1802 = 0LL;
                }
                if ( v1803 )
                {
                  v855 = -1LL;
                  do
                    ++v855;
                  while ( *((_WORD *)v1803 + v855) );
                  memset(v1803, 0, 2 * v855 + 2);
                  MemoryFree(v1803);
                  v1803 = 0LL;
                }
                if ( v1804 )
                {
                  v856 = -1LL;
                  do
                    ++v856;
                  while ( *((_WORD *)v1804 + v856) );
                  memset(v1804, 0, 2 * v856 + 2);
                  MemoryFree(v1804);
                  v1804 = 0LL;
                }
                if ( v1805 )
                {
                  ((void (*)(void))off_180985138)();
                  v1805 = 0LL;
                }
                if ( v1806 )
                {
                  ((void (*)(void))off_180985138)();
                  v1806 = 0LL;
                }
                if ( v1807 )
                {
                  ((void (*)(void))off_180985138)();
                  v1807 = 0LL;
                }
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v857 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount > 0 )
                {
                  --g_WarbirdSecureFunctionsRefCount;
                  if ( v857 == 1 )
                  {
                    v858 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    v859 = 4LL;
                    do
                    {
                      if ( *v858 )
                        FreeLibrary(*v858);
                      v858 += 3;
                      --v859;
                    }
                    while ( v859 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                  }
                }
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                v1364 = g_WarbirdNotificationInformation;
                v860 = ((__int64 (*)(void))off_180985198)() - g_WarbirdPaintInitTime;
                v1413 = v860;
                v1873 = 0LL;
                v1870 = 0LL;
                v1871 = 0LL;
                v1872 = 0LL;
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v861 = g_WarbirdSecureFunctionsRefCount;
                if ( !g_WarbirdSecureFunctionsRefCount )
                {
                  v1381 = 0;
                  v1519 = 0;
                  v862 = (char *)MemoryAlloc(0x338uLL);
                  v863 = v862;
                  if ( !v862 )
                    goto LABEL_1098;
                  v864 = 0;
                  v865 = v862 + 7;
                  v866 = -1;
                  v867 = (unsigned __int8 *)&unk_180832662;
                  v868 = 0;
                  v869 = 103LL;
                  v870 = 0;
                  do
                  {
                    v871 = *(v867 - 1) | (*(v867 - 2) << 8);
                    v872 = v867[2] << 8;
                    v873 = *v867;
                    v867 += 8;
                    v874 = *(v867 - 7) | ((v873 | (v871 << 8)) << 8);
                    v875 = v874 ^ v870;
                    v876 = *(v867 - 3) | ((*(v867 - 4) | ((*(v867 - 5) | v872) << 8)) << 8);
                    v877 = v875 ^ v876 ^ v868 ^ 0xAC987321;
                    v878 = (__ROL4__(v877, 10) + 4991 * __ROL4__(v877 + 1419157410, 5)) ^ v875;
                    v879 = (43881 * __ROR4__(v878 + 133239679, 9) - __ROL4__(v878, 2)) ^ v877;
                    v880 = (24670 * v879 - (v879 >> 13) - 123127970) ^ v878;
                    v881 = (2033 * __ROL4__(v880 ^ 0xAB69, 6) - __ROL4__(v880, 2)) ^ v879;
                    v882 = (133239679 - (v881 ^ 0xAB69605E)) ^ v880;
                    v883 = (43881 * (v882 ^ 0x137F)) ^ __ROR4__(v882, 6) ^ v881;
                    v884 = (__ROL4__(v883, 2) + 24670 * __ROR4__(v883 + 133239679, 15)) ^ v882;
                    v885 = (2033 * __ROR4__(v884 + 1419157410, 14) - __ROL4__(v884, 8)) ^ v883;
                    v886 = __ROR4__(v885, 10) ^ (4991 * __ROR4__(v885 ^ 0xAB69605E, 12)) ^ v884;
                    v887 = v885 ^ (v886 >> 10) ^ (43881 * (v886 ^ 0x7F1));
                    v888 = (2033 * (__ROR4__(~v887, 5) + 24670)) ^ v886;
                    v889 = v887 ^ (v888 - 2033) ^ 0xAB69605E;
                    v890 = ((v889 >> 2) + 4991 * __ROL4__(v887 ^ (v888 - 2033) ^ 0xAB6967AF, 2)) ^ v888;
                    v891 = (__ROL4__(v890, 7) + 43881 * __ROR4__(v890 - 133239679, 6)) ^ v889;
                    v892 = (24670 * (v891 ^ 0x137F) + __ROR4__(v891, 9)) ^ v890;
                    v893 = (__ROL4__(v892, 7) + 2033 * __ROL4__(v892 ^ 0xAB69, 5)) ^ v891;
                    v894 = v893 ^ v892 ^ 0xAC987321;
                    v895 = (4991 * __ROR4__(v894, 3) - 219010071) ^ v893;
                    v896 = (24670 * __ROR4__(v895 - 133239679, 1) - __ROR4__(v895, 6)) ^ v894;
                    v897 = (__ROL4__(v896, 14) + 2033 * __ROL4__(v896 - 1419157410, 3)) ^ v895;
                    v898 = (4991 * __ROL4__(v897 - 1419157410, 15) - __ROR4__(v897, 14)) ^ v896;
                    v899 = (v898 >> 3) ^ (43881 * (v898 ^ 0x605E)) ^ v897;
                    v900 = 24670 * __ROL4__(v899 ^ 0x7F1137F, 4);
                    v901 = v899;
                    v902 = v866 ^ v899;
                    v866 = v876;
                    v903 = v864 ^ __ROL4__(v901, 2) ^ v900;
                    v864 = v874;
                    v904 = v903 ^ v898;
                    *(v865 - 4) = v904;
                    *v865 = v902;
                    v865 += 8;
                    v905 = __ROR4__(v904, 8);
                    *(v865 - 13) = v905;
                    v906 = __ROR4__(v902, 8);
                    *(v865 - 9) = v906;
                    v907 = __ROR4__(v905, 8);
                    *(v865 - 14) = v907;
                    v908 = __ROR4__(v906, 8);
                    *(v865 - 10) = v908;
                    v909 = __ROR4__(v907, 8);
                    v910 = __ROR4__(v908, 8);
                    *(v865 - 15) = v909;
                    *(v865 - 11) = v910;
                    v868 = __ROR4__(v910, 8);
                    v870 = __ROR4__(v909, 8);
                    --v869;
                  }
                  while ( v869 );
                  v911 = 0;
                  v912 = 0LL;
                  v913 = 0;
                  do
                    v913 ^= v863[v912++];
                  while ( v912 < 0x338 );
                  if ( v913 != 64LL )
                  {
                    MemoryFree(v863);
LABEL_1097:
                    v860 = v1413;
LABEL_1098:
                    v914 = 4LL;
                    v915 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    v105 = 0LL;
                    do
                    {
                      if ( *v915 )
                        FreeLibrary(*v915);
                      v915 += 3;
                      --v914;
                    }
                    while ( v914 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                    goto LABEL_1212;
                  }
                  v863[823] = 0;
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  v976 = v863;
                  if ( !*v863 )
                    goto LABEL_1208;
                  while ( 1 )
                  {
                    v977 = (const WCHAR *)v863;
                    v978 = -1LL;
                    do
                      ++v978;
                    while ( *(_WORD *)&v863[2 * v978] );
                    v979 = &v863[2 * v978];
                    v980 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1519;
                    if ( !GetModuleHandleExW(0, v977, (HMODULE *)v980) )
                      break;
                    v911 = 0;
                    if ( **(_WORD **)v980 == 23117
                      && (v981 = *(int *)(*(_QWORD *)v980 + 60LL), (unsigned int)v981 < 0x10000000)
                      && (v982 = *(_QWORD *)v980 + v981, v982 >= *(_QWORD *)v980)
                      && *(_DWORD *)v982 == 17744 )
                    {
                      if ( ((*(_WORD *)(v982 + 24) - 267) & 0xFEFF) != 0 )
                      {
                        v911 = -1073741811;
                      }
                      else
                      {
                        *(_QWORD *)(v980 + 12) = *(_QWORD *)(v982 + 136);
                        *((_DWORD *)v980 + 2) = *(_DWORD *)(v982 + 80);
                      }
                    }
                    else
                    {
                      v911 = -1073741701;
                    }
                    v983 = *(_DWORD *)(v979 + 2);
                    v984 = 0;
                    v863 = v979 + 6;
                    v1530 = v983;
                    for ( n = 0; v984 < v1530; n = v984 )
                    {
                      v985 = v863;
                      v986 = -1LL;
                      do
                        ++v986;
                      while ( v863[v986] );
                      v863 += v986 + 1;
                      if ( v911 >= 0 )
                      {
                        v987 = (void **)GetProcAddress(*(HMODULE *)v980, v985);
                        if ( !v987 )
                          goto LABEL_1207;
                        (&WARBIRD::g_FuncAddress)[v1381] = v987;
                        v984 = n;
                      }
                      ++v1381;
                      ++v984;
                    }
                    ++v1519;
                    if ( !*v863 )
                      goto LABEL_1207;
                  }
                  v911 = -1073741702;
LABEL_1207:
                  if ( v976 )
                  {
LABEL_1208:
                    v988 = GetProcessHeap();
                    HeapFree(v988, 0, v976);
                  }
                  if ( v911 < 0 )
                    goto LABEL_1097;
                  v861 = g_WarbirdSecureFunctionsRefCount;
                  v105 = 0LL;
                  v860 = v1413;
                }
                g_WarbirdSecureFunctionsRefCount = v861 + 1;
LABEL_1212:
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                LODWORD(v1873) = v1364;
                LODWORD(v1870) = v860;
                v1869 = 1;
                LODWORD(v1871) = -1721306479;
                DWORD2(v1870) = 1;
                LODWORD(v1872) = 1;
                DWORD2(v1871) = 1;
                DWORD2(v1872) = 1;
                v989 = 4LL;
                ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1809851D0)(0LL, 8225LL, 4LL, &v1869);
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v990 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount > 0 )
                {
                  --g_WarbirdSecureFunctionsRefCount;
                  if ( v990 == 1 )
                  {
                    v991 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                    do
                    {
                      if ( *v991 )
                        FreeLibrary(*v991);
                      v991 += 3;
                      --v989;
                    }
                    while ( v989 );
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                  }
                }
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                ((void (__fastcall *)(_QWORD, SIZE_T))off_180985260)(0LL, v1485);
                v1643 = (void *)v1608;
                goto LABEL_1222;
              }
              v775 = v1820;
              v1721 = v1820;
              memset_0(v1773, 0, 0x68uLL);
              v776 = 1;
              v777 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_180985150)(v1485, 7LL);
              v105 = 0LL;
              if ( v777
                && (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(v777, 104LL, v1773) )
              {
                if ( v1776 != 32 || !v1777 || v1774 <= 0 || v1775 <= 0 )
                  v776 = 0;
                if ( v776 )
                {
LABEL_947:
                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1809, v775, HIDWORD(v1721));
                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1810, v775, HIDWORD(v1721));
                  if ( v638 == 1 )
                    Srce = (void *)((__int64 (__fastcall *)(_QWORD))off_180985128)(v1801 == 0 ? 0xB26720 : 0);
LABEL_949:
                  v1556 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_180985180)(v1485, 1LL);
                  v778 = 2064;
                  if ( v1800 )
                    v778 = 133138;
                  v1512 = v778;
                  if ( v776 )
                  {
                    v779 = v1801;
                    v780 = v1802;
                    v1404 = v1805;
                    memset_0(v1778, 0, 0x68uLL);
                    memset_0(v1782, 0, 0x68uLL);
                    v1445 = 0LL;
                    v1498 = 0;
                    v1481 = 0;
                    v1841 = 0LL;
                    v1842 = 0;
                    v1839 = 0LL;
                    v1840 = 0LL;
                    v1821 = 0LL;
                    if ( !v780 )
                      goto LABEL_955;
                    v781 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_180985150)(v1485, 7LL);
                    if ( !v781 )
                      goto LABEL_954;
                    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                         v781,
                                         104LL,
                                         v1778) )
                    {
                      v1445 = v1781;
                      v1498 = v1779;
                      v1481 = v1780;
                    }
                    v1463 = (LPVOID)((__int64 (__fastcall *)(SIZE_T))off_180985110)(v1485);
                    v782 = v1463;
                    if ( !v1463 )
                    {
LABEL_954:
                      GetLastError();
                      goto LABEL_955;
                    }
                    DWORD1(v1839) = DWORD2(v1809) - v1809;
                    DWORD2(v1839) = DWORD1(v1809) - HIDWORD(v1809);
                    v1722 = 0LL;
                    v1840 = 0LL;
                    v1841 = 0LL;
                    v1842 = 0;
                    LODWORD(v1839) = 40;
                    HIDWORD(v1839) = 2097153;
                    lpModuleNamec = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                                               v1463,
                                               &v1839,
                                               0LL,
                                               &v1722,
                                               0LL,
                                               0);
                    if ( !lpModuleNamec )
                    {
                      v783 = GetLastError();
                      v105 = 0LL;
                      v784 = v783;
                      if ( v783 > 0 )
                        v784 = (unsigned __int16)v783 | 0x80070000;
                      if ( v784 >= 0 )
                        v784 = -2147467259;
                      goto LABEL_992;
                    }
                    v785 = (unsigned int)((__int64 (__fastcall *)(LPCWSTR, __int64, _BYTE *))off_180985168)(
                                           lpModuleNamec,
                                           104LL,
                                           v1782) == 0;
                    v786 = 0LL;
                    if ( !v785 )
                      v786 = v1783;
                    DWORD2(v1821) = DWORD2(v1809) - v1809;
                    HIDWORD(v1821) = HIDWORD(v1809) - DWORD1(v1809);
                    v1538 = v786;
                    ((void (__fastcall *)(LPVOID, LPCWSTR))off_180985178)(v1463, lpModuleNamec);
                    ((void (__fastcall *)(LPVOID, __int64))off_180985180)(v1463, 1LL);
                    v787 = ((__int64 (__fastcall *)(LPVOID, SIZE_T))off_180985178)(v1463, v1404);
                    v788 = off_1809851E8;
                    v1405 = v787;
                    v789 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                    ((void (__fastcall *)(LPVOID, __int128 *, __int64))v788)(v1463, &v1821, v789);
                    v784 = 0;
                    ((void (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                      v1463,
                      v780,
                      0xFFFFFFFFLL,
                      &v1821,
                      v1512,
                      0LL);
                    if ( v1436 == 1 )
                    {
                      if ( v779 )
                      {
                        v790 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                        LOBYTE(v791) = v790;
                        Sized = v790;
LABEL_973:
                        v792 = 0;
                        v793 = -(int)v1809;
                        v794 = 0;
                        if ( (int)v1809 >= 0 )
                        {
                          v792 = v1809;
                          v793 = 0;
                        }
                        v795 = -DWORD1(v1809);
                        if ( (SDWORD1(v1809) & 0x80000000) == 0 )
                        {
                          v795 = 0;
                          v794 = DWORD1(v1809);
                        }
                        v796 = DWORD2(v1821) - v793;
                        if ( DWORD2(v1821) - v793 >= v1498 - v792 )
                          v796 = v1498 - v792;
                        v797 = HIDWORD(v1821) - v795;
                        if ( HIDWORD(v1821) - v795 >= v1481 - v794 )
                          v797 = v1481 - v794;
                        if ( v796 > 0 && v797 > 0 )
                        {
                          v798 = v1498;
                          v1499 = 0;
                          v799 = (unsigned __int8 *)&v1538[4 * v793 + 4 * (__int64)(v795 * DWORD2(v1821))];
                          v1539 = v799;
                          v800 = v1445 + 4 * (v792 + (__int64)(v794 * (int)v798));
                          v801 = 4LL * SDWORD2(v1821);
                          v1379 = 4 * v798;
                          v1446 = v800;
                          do
                          {
                            v1482 = 0;
                            v802 = v800 - (_QWORD)v799;
                            v803 = v799 + 2;
                            v804 = 0;
                            do
                            {
                              if ( (unsigned __int8)((*v803 + *(v803 - 2) + 2 * (unsigned int)*(v803 - 1)) >> 2) != 0xFF )
                              {
                                v805 = (unsigned __int8)~((*v803 + *(v803 - 2) + 2 * (unsigned int)*(v803 - 1)) >> 2);
                                v803[v802] -= ~((*v803 + *(v803 - 2) + 2 * (unsigned int)*(v803 - 1)) >> 2)
                                            * (v791 - v803[v802]);
                                v806 = v803[v802 - 1];
                                v807 = (unsigned __int64)(2155905153LL * v805 * (BYTE1(Sized) - v806)) >> 32;
                                v803[v802 - 1] = v806 + (v807 >> 7 < 0) + (v807 >> 7);
                                v808 = v803[v802 - 2];
                                v809 = (unsigned __int64)(2155905153LL * v805 * (BYTE2(Sized) - v808)) >> 32;
                                v803[v802 - 2] = v808 + (v809 >> 7 < 0) + (v809 >> 7);
                                v810 = v803[v802 + 1];
                                v811 = v805 * (255 - v810);
                                v804 = v1482;
                                v803[v802 + 1] = v810 + v811 / 255;
                              }
                              ++v804;
                              v803 += 4;
                              v1482 = v804;
                              v784 = 0;
                            }
                            while ( v804 < v796 );
                            v799 = &v1539[v801];
                            v800 = v1379 + v1446;
                            v1539 += v801;
                            v1446 += v1379;
                            ++v1499;
                          }
                          while ( v1499 < v797 );
                          v93 = (int)v1614;
                          v782 = v1463;
                        }
                        ((void (__fastcall *)(LPCWSTR))off_180985138)(lpModuleNamec);
                        v105 = 0LL;
                        if ( v1405 )
                          ((void (__fastcall *)(LPVOID, SIZE_T))off_180985178)(v782, v1405);
LABEL_992:
                        ((void (__fastcall *)(LPVOID))off_180985130)(v782);
                        if ( v784 < 0 )
                          goto LABEL_1059;
                        v812 = v1803;
                        v1500 = v1801;
                        v1406 = (SIZE_T)v1806;
                        memset_0(v1784, 0, 0x68uLL);
                        memset_0(v1788, 0, 0x68uLL);
                        v1447 = 0LL;
                        v1483 = 0;
                        v813 = 0;
                        v1845 = 0LL;
                        v1846 = 0;
                        v1843 = 0LL;
                        v1844 = 0LL;
                        v1822 = 0LL;
                        if ( v812 )
                        {
                          v814 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_180985150)(v1485, 7LL);
                          if ( v814 )
                          {
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                 v814,
                                                 104LL,
                                                 v1784) )
                            {
                              v813 = v1786;
                              v1447 = v1787;
                              v1483 = v1785;
                            }
                            v1464 = (LPVOID)((__int64 (__fastcall *)(SIZE_T))off_180985110)(v1485);
                            v815 = v1464;
                            if ( v1464 )
                            {
                              DWORD1(v1843) = DWORD2(v1810) - v1810;
                              DWORD2(v1843) = DWORD1(v1810) - HIDWORD(v1810);
                              v1723 = 0LL;
                              v1844 = 0LL;
                              v1845 = 0LL;
                              v1846 = 0;
                              LODWORD(v1843) = 40;
                              HIDWORD(v1843) = 2097153;
                              lpModuleNamed = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                                                         v1464,
                                                         &v1843,
                                                         0LL,
                                                         &v1723,
                                                         0LL,
                                                         0);
                              if ( !lpModuleNamed )
                              {
                                v816 = GetLastError();
                                v105 = 0LL;
                                v817 = v816;
                                if ( v816 > 0 )
                                  v817 = (unsigned __int16)v816 | 0x80070000;
                                if ( v817 >= 0 )
                                  v817 = -2147467259;
LABEL_1031:
                                ((void (__fastcall *)(LPVOID))off_180985130)(v815);
                                if ( v817 < 0 )
                                  goto LABEL_1059;
                                v842 = 0LL;
                                v843 = v1485;
LABEL_1182:
                                ((void (__fastcall *)(SIZE_T, _QWORD))off_180985180)(v843, v1556);
                                v853 = v1611;
                                v105 = 0LL;
                                if ( !v1611 )
                                {
LABEL_1057:
                                  if ( !v842 )
                                    goto LABEL_1059;
                                  goto LABEL_1058;
                                }
LABEL_1056:
                                ((void (__fastcall *)(SIZE_T))off_180985138)(v853);
                                goto LABEL_1057;
                              }
                              v785 = (unsigned int)((__int64 (__fastcall *)(LPCWSTR, __int64, _BYTE *))off_180985168)(
                                                     lpModuleNamed,
                                                     104LL,
                                                     v1788) == 0;
                              v818 = 0LL;
                              if ( !v785 )
                                v818 = v1789;
                              DWORD2(v1822) = DWORD2(v1810) - v1810;
                              HIDWORD(v1822) = HIDWORD(v1810) - DWORD1(v1810);
                              v1540 = v818;
                              ((void (__fastcall *)(LPVOID, LPCWSTR))off_180985178)(v1464, lpModuleNamed);
                              ((void (__fastcall *)(LPVOID, __int64))off_180985180)(v1464, 1LL);
                              v819 = ((__int64 (__fastcall *)(LPVOID, SIZE_T))off_180985178)(v1464, v1406);
                              v820 = off_1809851E8;
                              v1407 = v819;
                              v821 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                              ((void (__fastcall *)(LPVOID, __int128 *, __int64))v820)(v1464, &v1822, v821);
                              v817 = 0;
                              ((void (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                v1464,
                                v812,
                                0xFFFFFFFFLL,
                                &v1822,
                                v1512,
                                0LL);
                              if ( v1436 == 1 )
                              {
                                if ( !v1500 )
                                {
                                  v1437 = 0xFFFFFF;
LABEL_1012:
                                  v823 = 0;
                                  v824 = -(int)v1810;
                                  v825 = 0;
                                  if ( (int)v1810 >= 0 )
                                  {
                                    v823 = v1810;
                                    v824 = 0;
                                  }
                                  v826 = -DWORD1(v1810);
                                  if ( (SDWORD1(v1810) & 0x80000000) == 0 )
                                  {
                                    v826 = 0;
                                    v825 = DWORD1(v1810);
                                  }
                                  v827 = DWORD2(v1822) - v824;
                                  if ( DWORD2(v1822) - v824 >= v1483 - v823 )
                                    v827 = v1483 - v823;
                                  v828 = HIDWORD(v1822) - v826;
                                  v829 = v813 - v825;
                                  if ( HIDWORD(v1822) - v826 >= v829 )
                                    v828 = v829;
                                  if ( v827 > 0 && v828 > 0 )
                                  {
                                    v1501 = 0;
                                    v830 = &v1540[4 * v824 + 4 * (__int64)(DWORD2(v1822) * v826)];
                                    v831 = v1447 + 4 * (v823 + (__int64)(v825 * v1483));
                                    v1541 = 4LL * SDWORD2(v1822);
                                    v1362 = 4LL * v1483;
                                    v1448 = v831;
                                    do
                                    {
                                      v832 = (unsigned __int8 *)(v830 + 2);
                                      v833 = v831 - (_QWORD)v830;
                                      Sizee = 0;
                                      v834 = 0;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v832 + *(v832 - 2) + 2 * (unsigned int)*(v832 - 1)) >> 2) != 0xFF )
                                        {
                                          v835 = (unsigned __int8)~((*v832 + *(v832 - 2) + 2 * (unsigned int)*(v832 - 1)) >> 2);
                                          v832[v833] -= ~((*v832 + *(v832 - 2) + 2 * (unsigned int)*(v832 - 1)) >> 2)
                                                      * (v1590 - v832[v833]);
                                          v836 = v832[v833 - 1];
                                          v837 = (unsigned __int64)(2155905153LL * v835 * (BYTE1(v1437) - v836)) >> 32;
                                          v832[v833 - 1] = v836 + (v837 >> 7 < 0) + (v837 >> 7);
                                          v838 = v832[v833 - 2];
                                          v839 = (unsigned __int64)(2155905153LL * v835 * (BYTE2(v1437) - v838)) >> 32;
                                          v832[v833 - 2] = v838 + (v839 >> 7 < 0) + (v839 >> 7);
                                          v840 = v832[v833 + 1];
                                          v841 = v835 * (255 - v840);
                                          v834 = Sizee;
                                          v832[v833 + 1] = v840 + v841 / 255;
                                        }
                                        ++v834;
                                        v832 += 4;
                                        Sizee = v834;
                                        v817 = 0;
                                      }
                                      while ( v834 < v827 );
                                      v831 = v1362 + v1448;
                                      v830 += v1541;
                                      v1448 += v1362;
                                      ++v1501;
                                    }
                                    while ( v1501 < v828 );
                                    v815 = v1464;
                                  }
                                  ((void (__fastcall *)(LPCWSTR))off_180985138)(lpModuleNamed);
                                  v105 = 0LL;
                                  if ( v1407 )
                                    ((void (__fastcall *)(LPVOID, SIZE_T))off_180985178)(v815, v1407);
                                  goto LABEL_1031;
                                }
                                v822 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                              }
                              else
                              {
                                v822 = -5723992;
                              }
                              v1437 = v822;
                              v1590 = v822;
                              goto LABEL_1012;
                            }
                          }
                          goto LABEL_954;
                        }
LABEL_955:
                        v105 = 0LL;
                        goto LABEL_1059;
                      }
                      v791 = 0xFFFFFF;
                    }
                    else
                    {
                      v791 = -5723992;
                    }
                    Sized = v791;
                    goto LABEL_973;
                  }
                  if ( v1801 || (v844 = -64, v638 == 1) )
                    v844 = -1;
                  LOWORD(v1502) = 0;
                  v845 = 0;
                  BYTE2(v1502) = v844;
                  HIBYTE(v1502) = 1;
                  v1484 = 0;
                  Sizef = 0;
                  v1580 = (void *)((__int64 (__fastcall *)(SIZE_T))off_180985110)(v1485);
                  if ( !v1580 )
                  {
                    GetLastError();
                    goto LABEL_1059;
                  }
                  if ( v1436 == 1 )
                  {
                    v846 = DWORD2(v1810) - v1810;
                    if ( DWORD2(v1810) - (int)v1810 <= DWORD2(v1809) - (int)v1809 )
                      v846 = DWORD2(v1809) - v1809;
                    v847 = HIDWORD(v1810) - DWORD1(v1809);
                    v1609 = v846;
                    v848 = 0;
                    LODWORD(v1643) = HIDWORD(v1810) - DWORD1(v1809);
                    LODWORD(v1612) = 0;
                    if ( v1800 )
                    {
                      v845 = v846 + v1809 - DWORD2(v1809);
                      v848 = v845;
                      Sizef = v846 + v1810 - DWORD2(v1810);
                      LODWORD(v1612) = Sizef;
                    }
                    LODWORD(v1610) = HIDWORD(v1809) - DWORD1(v1809);
                    v849 = v848 + DWORD2(v1809) - v1809;
                    v850 = (_DWORD)v1612 + DWORD2(v1810) - v1810;
                    v1601 = DWORD1(v1810) - DWORD1(v1809);
                    v1518 = HIDWORD(v1810) - DWORD1(v1809);
                  }
                  else
                  {
                    v846 = DWORD2(v1820);
                    v847 = HIDWORD(v1820);
                    v1743 = v1809;
                    v849 = DWORD2(v1809);
                    v845 = v1809;
                    LODWORD(v1610) = HIDWORD(v1809);
                    v1744 = v1810;
                    v850 = DWORD2(v1810);
                    v1484 = DWORD1(v1809);
                    v1518 = HIDWORD(v1810);
                    v1601 = DWORD1(v1810);
                    Sizef = v1810;
                    LODWORD(v1643) = HIDWORD(v1820);
                    v1609 = DWORD2(v1820);
                  }
                  LODWORD(v1612) = v850;
                  v1724 = 0LL;
                  v1837 = 0LL;
                  v1836 = 0LL;
                  v1838 = 0;
                  DWORD2(v1835) = -v847;
                  LODWORD(v1835) = 40;
                  DWORD1(v1835) = v846;
                  HIDWORD(v1835) = 2097153;
                  v851 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                           v1580,
                           &v1835,
                           0LL,
                           &v1724,
                           0LL,
                           0);
                  v1611 = v851;
                  if ( !v851 )
                  {
                    GetLastError();
                    v842 = v1580;
                    v105 = 0LL;
LABEL_1058:
                    ((void (__fastcall *)(void *))off_180985130)(v842);
LABEL_1059:
                    if ( Srce )
                      ((void (__fastcall *)(void *))off_180985138)(Srce);
                    goto LABEL_1061;
                  }
                  ((void (__fastcall *)(void *, SIZE_T))off_180985178)(v1580, v851);
                  if ( v1436 == 1 && Srce )
                  {
                    v1823 = 0LL;
                    v1825 = (int)v1643;
                    v1824 = v846;
                    ((void (__fastcall *)(void *, __int64 *))off_1809851E8)(v1580, &v1823);
                  }
                  v1527 = v1801;
                  v1408 = v1805;
                  v1449 = v1802;
                  memset_0(v1790, 0, 0x68uLL);
                  memset_0(v1771, 0, 0x68uLL);
                  v1465 = 0LL;
                  v1380 = 0;
                  v1363 = 0;
                  v1847 = 0LL;
                  v1849 = 0LL;
                  v1848 = 0LL;
                  v1850 = 0;
                  v1819 = 0LL;
                  if ( v1449 )
                  {
                    v852 = ((__int64 (__fastcall *)(void *, __int64))off_180985150)(v1580, 7LL);
                    if ( !v852 )
                      goto LABEL_1052;
                    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                         v852,
                                         104LL,
                                         v1790) )
                    {
                      v1465 = v1793;
                      v1380 = v1791;
                      v1363 = v1792;
                    }
                    lpModuleNamee = (LPCWSTR)((__int64 (__fastcall *)(void *))off_180985110)(v1580);
                    if ( lpModuleNamee )
                    {
                      v916 = v849 - v845;
                      DWORD2(v1847) = v1484 - (_DWORD)v1610;
                      v1725 = 0LL;
                      v1848 = 0LL;
                      v1849 = 0LL;
                      v1850 = 0;
                      LODWORD(v1847) = 40;
                      DWORD1(v1847) = v916;
                      HIDWORD(v1847) = 2097153;
                      v917 = ((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_180985118)(
                               lpModuleNamee,
                               &v1847,
                               0LL,
                               &v1725,
                               0LL,
                               0);
                      v1542 = (LPVOID)v917;
                      if ( v917 )
                      {
                        v920 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(v917, 104LL, v1771);
                        DWORD2(v1819) = v916;
                        v921 = 0LL;
                        if ( v920 )
                          v921 = v1772;
                        HIDWORD(v1819) = (_DWORD)v1610 - v1484;
                        v1414 = v921;
                        ((void (__fastcall *)(LPCWSTR, LPVOID))off_180985178)(lpModuleNamee, v1542);
                        ((void (__fastcall *)(LPCWSTR, __int64))off_180985180)(lpModuleNamee, 1LL);
                        v922 = ((__int64 (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(lpModuleNamee, v1408);
                        v923 = off_1809851E8;
                        v1409 = v922;
                        v924 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                        ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v923)(lpModuleNamee, &v1819, v924);
                        v919 = 0;
                        ((void (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                          lpModuleNamee,
                          v1449,
                          0xFFFFFFFFLL,
                          &v1819,
                          v1512,
                          0LL);
                        if ( v1436 == 1 )
                        {
                          if ( v1527 )
                            v1528 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                          else
                            v1528 = 0xFFFFFF;
                        }
                        else
                        {
                          v1528 = -5723992;
                        }
                        v925 = -v845;
                        v926 = 0;
                        if ( v845 >= 0 )
                        {
                          v926 = v845;
                          v925 = 0;
                        }
                        v927 = v1380;
                        v928 = -v1484;
                        v929 = 0;
                        if ( v1484 >= 0 )
                        {
                          v929 = v1484;
                          v928 = 0;
                        }
                        v930 = DWORD2(v1819) - v925;
                        if ( DWORD2(v1819) - v925 >= v1380 - v926 )
                          v930 = v1380 - v926;
                        v1382 = v930;
                        v931 = HIDWORD(v1819) - v928;
                        if ( HIDWORD(v1819) - v928 >= v1363 - v929 )
                          v931 = v1363 - v929;
                        if ( v930 > 0 && v931 > 0 )
                        {
                          v1365 = 0;
                          LODWORD(v1610) = 0;
                          v932 = &v1414[4 * v925 + 4 * (__int64)(DWORD2(v1819) * v928)];
                          v933 = &v1465[4 * v926 + 4 * (__int64)((int)v927 * v929)];
                          v1450 = 4LL * SDWORD2(v1819);
                          v1466 = 4 * v927;
                          v1415 = v933;
                          do
                          {
                            v934 = (int)v1610;
                            v935 = (unsigned __int8 *)(v932 + 2);
                            v936 = 0;
                            v937 = v933 - v932;
                            do
                            {
                              if ( (unsigned __int8)((*v935 + *(v935 - 2) + 2 * (unsigned int)*(v935 - 1)) >> 2) != 0xFF )
                              {
                                v938 = (unsigned __int8)~((*v935 + *(v935 - 2) + 2 * (unsigned int)*(v935 - 1)) >> 2);
                                v935[v937] -= ~((*v935 + *(v935 - 2) + 2 * (unsigned int)*(v935 - 1)) >> 2)
                                            * (v1528 - v935[v937]);
                                v939 = v935[v937 - 1];
                                v940 = (unsigned __int64)(2155905153LL * v938 * (BYTE1(v1528) - v939)) >> 32;
                                v935[v937 - 1] = v939 + (v940 >> 7 < 0) + (v940 >> 7);
                                v941 = v935[v937 - 2];
                                v942 = (unsigned __int64)(2155905153LL * v938 * (BYTE2(v1528) - v941)) >> 32;
                                v935[v937 - 2] = v941 + (v942 >> 7 < 0) + (v942 >> 7);
                                v943 = v935[v937 + 1];
                                v944 = v938 * (255 - v943);
                                v930 = v1382;
                                v935[v937 + 1] = v943 + v944 / 255;
                              }
                              v935 += 4;
                              ++v936;
                              v919 = v934;
                            }
                            while ( v936 < v930 );
                            v933 = &v1415[v1466];
                            v932 += v1450;
                            v1415 += v1466;
                            ++v1365;
                            LODWORD(v1610) = v934;
                          }
                          while ( v1365 < v931 );
                          v93 = (int)v1614;
                          v846 = v1609;
                          v850 = (int)v1612;
                        }
                        ((void (__fastcall *)(LPVOID))off_180985138)(v1542);
                        if ( v1409 )
                          ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(lpModuleNamee, v1409);
                      }
                      else
                      {
                        v918 = GetLastError();
                        v919 = v918;
                        if ( v918 > 0 )
                          v919 = (unsigned __int16)v918 | 0x80070000;
                        if ( v919 >= 0 )
                          v919 = -2147467259;
                      }
                      ((void (__fastcall *)(LPCWSTR))off_180985130)(lpModuleNamee);
                      if ( v919 >= 0 )
                      {
                        v945 = v1803;
                        v1366 = v1801;
                        v1416 = v1806;
                        v1410 = v1803;
                        memset_0(v1794, 0, 0x68uLL);
                        memset_0(v1798, 0, 0x68uLL);
                        v1451 = 0LL;
                        v1383 = 0;
                        v1529 = 0;
                        v1853 = 0LL;
                        v1854 = 0;
                        v1851 = 0LL;
                        v1852 = 0LL;
                        v1826 = 0LL;
                        if ( v945 )
                        {
                          v842 = v1580;
                          v946 = ((__int64 (__fastcall *)(void *, __int64))off_180985150)(v1580, 7LL);
                          if ( v946 )
                          {
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                 v946,
                                                 104LL,
                                                 v1794) )
                            {
                              v1451 = v1797;
                              v1383 = v1795;
                              v1529 = v1796;
                            }
                            v1467 = (LPVOID)((__int64 (__fastcall *)(void *))off_180985110)(v1580);
                            v947 = v1467;
                            if ( v1467 )
                            {
                              v948 = v850 - Sizef;
                              DWORD2(v1851) = v1601 - v1518;
                              v1726[0] = 0LL;
                              v1852 = 0LL;
                              v1853 = 0LL;
                              v1854 = 0;
                              LODWORD(v1851) = 40;
                              DWORD1(v1851) = v948;
                              HIDWORD(v1851) = 2097153;
                              v949 = ((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_180985118)(
                                       v1467,
                                       &v1851,
                                       0LL,
                                       v1726,
                                       0LL,
                                       0);
                              lpModuleNamef = (LPCWSTR)v949;
                              if ( !v949 )
                              {
                                v950 = GetLastError();
                                v105 = 0LL;
                                v951 = v950;
                                if ( v950 > 0 )
                                  v951 = (unsigned __int16)v950 | 0x80070000;
                                if ( v951 >= 0 )
                                  v951 = -2147467259;
LABEL_1178:
                                ((void (__fastcall *)(LPVOID))off_180985130)(v947);
                                if ( v951 >= 0 )
                                {
                                  v842 = v1580;
                                  v843 = v1485;
                                  if ( v1436 == 1 )
                                    ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                                      v1485,
                                      (unsigned int)v1809,
                                      DWORD1(v1809),
                                      v846,
                                      (_DWORD)v1643,
                                      v1580,
                                      0,
                                      0,
                                      13369376);
                                  else
                                    ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, void *, _DWORD, _DWORD, unsigned int, _DWORD, int))off_180985140)(
                                      v1485,
                                      (unsigned int)v1820,
                                      DWORD1(v1820),
                                      v846,
                                      (_DWORD)v1643,
                                      v1580,
                                      0,
                                      0,
                                      v846,
                                      (_DWORD)v1643,
                                      v1502);
                                  goto LABEL_1182;
                                }
                                v842 = v1580;
LABEL_1055:
                                v853 = v1611;
                                goto LABEL_1056;
                              }
                              v952 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                       v949,
                                       104LL,
                                       v1798);
                              DWORD2(v1826) = v948;
                              v953 = 0LL;
                              if ( v952 )
                                v953 = v1799;
                              HIDWORD(v1826) = v1518 - v1601;
                              v1543 = v953;
                              ((void (__fastcall *)(LPVOID, LPCWSTR))off_180985178)(v1467, lpModuleNamef);
                              ((void (__fastcall *)(LPVOID, __int64))off_180985180)(v1467, 1LL);
                              v954 = ((__int64 (__fastcall *)(LPVOID, LPVOID))off_180985178)(v1467, v1416);
                              v955 = off_1809851E8;
                              v1417 = (LPVOID)v954;
                              v956 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                              ((void (__fastcall *)(LPVOID, __int128 *, __int64))v955)(v1467, &v1826, v956);
                              v951 = 0;
                              ((void (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                v1467,
                                v1410,
                                0xFFFFFFFFLL,
                                &v1826,
                                v1512,
                                0LL);
                              if ( v1436 == 1 )
                              {
                                if ( !v1366 )
                                {
                                  v1367 = 0xFFFFFF;
LABEL_1159:
                                  v958 = v1383;
                                  v959 = -Sizef;
                                  v960 = 0;
                                  v961 = 0;
                                  if ( Sizef >= 0 )
                                  {
                                    v960 = Sizef;
                                    v959 = 0;
                                  }
                                  v962 = -v1601;
                                  if ( v1601 >= 0 )
                                  {
                                    v961 = v1601;
                                    v962 = 0;
                                  }
                                  v963 = DWORD2(v1826) - v959;
                                  if ( DWORD2(v1826) - v959 >= v1383 - v960 )
                                    v963 = v1383 - v960;
                                  v964 = HIDWORD(v1826) - v962;
                                  if ( HIDWORD(v1826) - v962 >= v1529 - v961 )
                                    v964 = v1529 - v961;
                                  if ( v963 > 0 && v964 > 0 )
                                  {
                                    v965 = v1383 * v961;
                                    v1384 = 0;
                                    v966 = &v1543[4 * v959 + 4 * (__int64)(DWORD2(v1826) * v962)];
                                    v1411 = (SIZE_T)v966;
                                    v967 = v1451 + 4 * (v960 + (__int64)v965);
                                    v1544 = 4LL * SDWORD2(v1826);
                                    v1520 = 4 * v958;
                                    v1452 = v967;
                                    do
                                    {
                                      v968 = (unsigned __int8 *)(v966 + 2);
                                      v969 = v967 - (_QWORD)v966;
                                      for ( ii = 0; ii < v963; ++ii )
                                      {
                                        if ( (unsigned __int8)((*v968 + *(v968 - 2) + 2 * (unsigned int)*(v968 - 1)) >> 2) != 0xFF )
                                        {
                                          v971 = (unsigned __int8)~((*v968 + *(v968 - 2) + 2 * (unsigned int)*(v968 - 1)) >> 2);
                                          v968[v969] -= ~((*v968 + *(v968 - 2) + 2 * (unsigned int)*(v968 - 1)) >> 2)
                                                      * (v1590 - v968[v969]);
                                          v972 = v968[v969 - 1];
                                          v973 = (unsigned __int64)(2155905153LL * v971 * (BYTE1(v1367) - v972)) >> 32;
                                          v968[v969 - 1] = v972 + (v973 >> 7 < 0) + (v973 >> 7);
                                          v974 = v968[v969 - 2];
                                          v975 = (unsigned __int64)(2155905153LL * v971 * (BYTE2(v1367) - v974)) >> 32;
                                          v968[v969 - 2] = v974 + (v975 >> 7 < 0) + (v975 >> 7);
                                          v968[v969 + 1] += v971 * (255 - v968[v969 + 1]) / 255;
                                        }
                                        v968 += 4;
                                        v951 = 0;
                                      }
                                      v966 = (char *)(v1544 + v1411);
                                      v967 = v1520 + v1452;
                                      v1411 += v1544;
                                      v1452 += v1520;
                                      ++v1384;
                                    }
                                    while ( v1384 < v964 );
                                    v93 = (int)v1614;
                                    v846 = v1609;
                                    v947 = v1467;
                                  }
                                  ((void (__fastcall *)(LPCWSTR))off_180985138)(lpModuleNamef);
                                  v105 = 0LL;
                                  if ( v1417 )
                                    ((void (__fastcall *)(LPVOID, LPVOID))off_180985178)(v947, v1417);
                                  goto LABEL_1178;
                                }
                                v957 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                              }
                              else
                              {
                                v957 = -5723992;
                              }
                              v1367 = v957;
                              v1590 = v957;
                              goto LABEL_1159;
                            }
                          }
                          GetLastError();
LABEL_1054:
                          v105 = 0LL;
                          goto LABEL_1055;
                        }
                      }
                    }
                    else
                    {
LABEL_1052:
                      GetLastError();
                    }
                  }
                  v842 = v1580;
                  goto LABEL_1054;
                }
              }
              else
              {
                v776 = 0;
              }
              if ( v638 != 1 )
                goto LABEL_949;
              goto LABEL_947;
            }
            v641 = 0LL;
            v1715 = 0LL;
            v1716 = 0LL;
            v640 = 0;
            v1717 = 0LL;
            v1718 = 0LL;
            v1719 = 0LL;
            v1720 = 0LL;
            v1641 = 0;
            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1809851A0)(
                                  8LL,
                                  &v1613,
                                  0LL,
                                  &v1641) )
              goto LABEL_714;
            v643 = (char *)MemoryAlloc(2LL * v1641);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1719);
            if ( !v643 )
            {
              v1719 = 0LL;
              v640 = -2147024882;
              goto LABEL_730;
            }
            v1719 = v643;
            v644 = MemoryAlloc(4LL * (v1613 + 1));
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1720);
            if ( v644 )
            {
              v1720 = v644;
              if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1809851A0)(
                                    8LL,
                                    &v1613,
                                    v643,
                                    &v1641) )
              {
LABEL_714:
                v642 = GetLastError();
                v640 = v642;
                if ( v642 > 0 )
                  v640 = (unsigned __int16)v642 | 0x80070000;
                if ( v640 >= 0 )
                  v640 = -2147467259;
LABEL_730:
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1720);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1719);
                if ( v640 >= 0 )
                {
                  v647 = 0;
                  v648 = 0;
                  v1478 = 0;
                  if ( (_DWORD)v1495 )
                  {
                    v649 = 0LL;
LABEL_733:
                    v650 = 0;
                    v651 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
                    while ( v641[v649] != *v651 )
                    {
                      ++v651;
                      if ( ++v650 >= 0x26 )
                      {
                        ++v648;
                        ++v649;
                        if ( v648 >= (unsigned int)v1495 )
                          goto LABEL_739;
                        goto LABEL_733;
                      }
                    }
                    v647 = v650;
                    v1478 = v650;
                  }
LABEL_739:
                  v652 = v647;
                  v1496 = 0;
                  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))off_1809851A8)(
                                       `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v647],
                                       v1876,
                                       85LL)
                    && (int)((__int64 (__fastcall *)(_BYTE *, __int64, char *))off_180985190)(v1876, 88LL, v1827) > 0 )
                  {
                    v1496 = (v1828 >> 27) & 1;
                  }
                  v653 = L"Segoe UI Light";
                  v654 = 19LL;
                  v655 = (const wchar_t **)v1874;
                  do
                  {
                    *v655 = v653;
                    v656 = -1LL;
                    do
                      ++v656;
                    while ( v653[v656] );
                    ++v655;
                    v653 += v656 + 1;
                    --v654;
                  }
                  while ( v654 );
                  v1401 = v1874[*((unsigned __int8 *)&`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping
                                + 3 * v652)];
                  v1444 = (const wchar_t *)v1874[(unsigned __int8)byte_180836F31[3 * v652]];
                  v1460 = (const wchar_t *)v1874[(unsigned __int8)byte_180836F32[3 * v652]];
                  v657 = (char *)MemoryAlloc(0x1C90uLL);
                  v1525 = v657;
                  if ( v657 )
                  {
                    v660 = (unsigned __int8 *)&unk_1808B5392;
                    v661 = -1;
                    v662 = 0;
                    v663 = 0;
                    v664 = 0;
                    v665 = v657 + 7;
                    v666 = 914LL;
                    do
                    {
                      v667 = *(v660 - 1) | (*(v660 - 2) << 8);
                      v668 = v660[2] << 8;
                      v669 = *v660;
                      v660 += 8;
                      v670 = *(v660 - 7) | ((v669 | (v667 << 8)) << 8);
                      v671 = v670 ^ v664;
                      v672 = *(v660 - 3) | ((*(v660 - 4) | ((*(v660 - 5) | v668) << 8)) << 8);
                      v673 = v671 ^ v672 ^ v663 ^ 0xAC987321;
                      v674 = (__ROL4__(v673, 10) + 4991 * __ROL4__(v673 + 1419157410, 5)) ^ v671;
                      v675 = (43881 * __ROR4__(v674 + 133239679, 9) - __ROL4__(v674, 2)) ^ v673;
                      v676 = (24670 * v675 - (v675 >> 13) - 123127970) ^ v674;
                      v677 = (2033 * __ROL4__(v676 ^ 0xAB69, 6) - __ROL4__(v676, 2)) ^ v675;
                      v678 = (133239679 - (v677 ^ 0xAB69605E)) ^ v676;
                      v679 = (43881 * (v678 ^ 0x137F)) ^ __ROR4__(v678, 6) ^ v677;
                      v680 = (__ROL4__(v679, 2) + 24670 * __ROR4__(v679 + 133239679, 15)) ^ v678;
                      v681 = (2033 * __ROR4__(v680 + 1419157410, 14) - __ROL4__(v680, 8)) ^ v679;
                      v682 = __ROR4__(v681, 10) ^ (4991 * __ROR4__(v681 ^ 0xAB69605E, 12)) ^ v680;
                      v683 = (v682 >> 10) ^ (43881 * (v682 ^ 0x7F1)) ^ v681;
                      v684 = (2033 * (__ROR4__(~v683, 5) + 24670)) ^ v682;
                      v685 = v683 ^ (v684 - 2033) ^ 0xAB69605E;
                      v686 = ((v685 >> 2) + 4991 * __ROL4__(v683 ^ (v684 - 2033) ^ 0xAB6967AF, 2)) ^ v684;
                      v687 = (__ROL4__(v686, 7) + 43881 * __ROR4__(v686 - 133239679, 6)) ^ v685;
                      v688 = (24670 * (v687 ^ 0x137F) + __ROR4__(v687, 9)) ^ v686;
                      v689 = (__ROL4__(v688, 7) + 2033 * __ROL4__(v688 ^ 0xAB69, 5)) ^ v687;
                      v690 = v689 ^ v688 ^ 0xAC987321;
                      v691 = (4991 * __ROR4__(v690, 3) - 219010071) ^ v689;
                      v692 = (24670 * __ROR4__(v691 - 133239679, 1) - __ROR4__(v691, 6)) ^ v690;
                      v693 = (__ROL4__(v692, 14) + 2033 * __ROL4__(v692 - 1419157410, 3)) ^ v691;
                      v694 = (4991 * __ROL4__(v693 - 1419157410, 15) - __ROR4__(v693, 14)) ^ v692;
                      v695 = (v694 >> 3) ^ (43881 * (v694 ^ 0x605E)) ^ v693;
                      v696 = 24670 * __ROL4__(v695 ^ 0x7F1137F, 4);
                      v697 = v695;
                      v698 = v661 ^ v695;
                      v661 = v672;
                      v699 = v662 ^ __ROL4__(v697, 2) ^ v696;
                      v662 = v670;
                      v700 = v699 ^ v694;
                      *(v665 - 4) = v700;
                      *v665 = v698;
                      v665 += 8;
                      v701 = __ROR4__(v700, 8);
                      *(v665 - 13) = v701;
                      v702 = __ROR4__(v698, 8);
                      *(v665 - 9) = v702;
                      v703 = __ROR4__(v701, 8);
                      *(v665 - 14) = v703;
                      v704 = __ROR4__(v702, 8);
                      *(v665 - 10) = v704;
                      v705 = __ROR4__(v703, 8);
                      v706 = __ROR4__(v704, 8);
                      *(v665 - 15) = v705;
                      *(v665 - 11) = v706;
                      v663 = __ROR4__(v706, 8);
                      v664 = __ROR4__(v705, 8);
                      --v666;
                    }
                    while ( v666 );
                    v707 = v1525;
                    v708 = 0LL;
                    v709 = 0LL;
                    do
                    {
                      v710 = _mm_loadu_si128((const __m128i *)&v1525[v708]);
                      v708 += 16LL;
                      v711 = _mm_xor_si128(v710, v709);
                      v709 = v711;
                    }
                    while ( v708 < 0x1C90 );
                    v712 = _mm_xor_si128(v711, _mm_srli_si128(v711, 8));
                    v713 = _mm_xor_si128(v712, _mm_srli_si128(v712, 4));
                    v714 = _mm_xor_si128(v713, _mm_srli_si128(v713, 2));
                    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v714, _mm_srli_si128(v714, 1))) == 127LL )
                    {
                      v1716 = v1525;
                      v640 = 0;
                      v1717 = 7312LL;
                      if ( v1525 )
                        v1717 = 7312LL;
                      else
                        v707 = 0LL;
                      v715 = v1868;
                      v716 = 6LL;
                      do
                      {
                        for ( jj = 0; jj < 0x26; ++jj )
                        {
                          if ( v1478 == jj )
                            *v715 = v707;
                          v718 = -1LL;
                          do
                            ++v718;
                          while ( v707[v718] );
                          v707 += v718 + 1;
                        }
                        ++v715;
                        --v716;
                      }
                      while ( v716 );
                      v719 = (char *)MemoryAlloc(0x18uLL);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1718);
                      if ( v719 )
                      {
                        v1718 = v719;
                        v1479 = 0;
                        v720 = v719;
                        v1600 = (void **)v719;
                        v721 = v1875;
                        v1526 = v719;
                        *(_OWORD *)v719 = 0LL;
                        *((_QWORD *)v719 + 2) = 0LL;
                        v722 = 0;
                        v1517 = v1875;
                        v1717 = 7312LL;
                        while ( 2 )
                        {
                          v723 = *v721;
                          v724 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
                          v725 = 0LL;
                          while ( v723 != *v724 )
                          {
                            v725 = (unsigned int)(v725 + 1);
                            ++v724;
                            if ( (unsigned int)v725 >= 6 )
                              goto LABEL_787;
                          }
                          v726 = v1868[v725];
                          v727 = -1LL;
                          do
                            ++v727;
                          while ( *(_BYTE *)(v726 + v727) );
                          v728 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1809851C0)(
                                   65001LL,
                                   0LL,
                                   v726,
                                   (unsigned int)(v727 + 1),
                                   0LL,
                                   0);
                          Sizec = v728;
                          if ( !v728 )
                          {
                            v732 = GetLastError();
                            v640 = v732;
                            if ( v732 > 0 )
                              v640 = (unsigned __int16)v732 | 0x80070000;
                            if ( v640 >= 0 )
                              v640 = -2147467259;
                            goto LABEL_797;
                          }
                          v729 = MemoryAlloc(2LL * v728);
                          *v1526 = v729;
                          if ( !v729 )
                            goto LABEL_773;
                          v730 = -1LL;
                          do
                            ++v730;
                          while ( *(_BYTE *)(v726 + v730) );
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, LPVOID, int))off_1809851C0)(
                                                65001LL,
                                                0LL,
                                                v726,
                                                (unsigned int)(v730 + 1),
                                                v729,
                                                Sizec) )
                          {
                            v731 = GetLastError();
                            v640 = v731;
                            if ( v731 > 0 )
                              v640 = (unsigned __int16)v731 | 0x80070000;
                            if ( v640 >= 0 )
                              v640 = -2147467259;
                            goto LABEL_797;
                          }
                          v720 = v1526;
                          v722 = v1479;
LABEL_787:
                          ++v722;
                          v721 = v1517 + 1;
                          v1479 = v722;
                          ++v720;
                          ++v1517;
                          v1526 = v720;
                          if ( v722 < 3 )
                            continue;
                          break;
                        }
                        v719 = 0LL;
                        v1713 = v1600;
                        v1800 = v1496;
                        v1718 = 0LL;
                      }
                      else
                      {
                        v719 = 0LL;
                        v1718 = 0LL;
LABEL_773:
                        v640 = -2147024882;
                      }
LABEL_797:
                      if ( v719 )
                      {
                        v733 = 3LL;
                        v658 = v1460;
                        v1461 = 3LL;
                        v1717 = 7312LL;
                        do
                        {
                          v734 = *(_WORD **)v719;
                          if ( *(_QWORD *)v719 )
                          {
                            v735 = -1LL;
                            do
                              ++v735;
                            while ( v734[v735] );
                            memset(v734, 0, 2 * v735 + 2);
                            MemoryFree(*(void **)v719);
                            v733 = v1461;
                          }
                          v719 += 8;
                          v1461 = --v733;
                        }
                        while ( v733 );
LABEL_749:
                        if ( v1716 )
                          memset(v1716, 0, v1717);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1718);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1716);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1715);
                        if ( v640 < 0 )
                          goto LABEL_924;
                        if ( v1713 )
                          v659 = v1713;
                        else
                          v659 = 0LL;
                        v1802 = *v659;
                        if ( v1713 )
                          v736 = v1713;
                        else
                          v736 = 0LL;
                        v1803 = v736[1];
                        if ( v1713 )
                        {
                          v737 = v1713;
                          v105 = 0LL;
                        }
                        else
                        {
                          v105 = 0LL;
                          v737 = 0LL;
                        }
                        v738 = v737[2];
                        v1760 = 0LL;
                        LODWORD(v1760) = 16;
                        v1804 = v738;
                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_180985268)(
                                              66LL,
                                              0LL,
                                              &v1760,
                                              0LL) )
                        {
                          v739 = GetLastError();
                          v640 = v739;
                          if ( v739 > 0 )
                            v640 = (unsigned __int16)v739 | 0x80070000;
                          v1801 = 0;
                          if ( v640 >= 0 )
                            v640 = -2147467259;
                          goto LABEL_925;
                        }
                        v1801 = BYTE4(v1760) & 1;
                        v1497 = 42;
                        if ( v1436 == 1 )
                        {
                          v1555 = 42;
                        }
                        else
                        {
                          if ( v1436 != 2 )
                          {
                            if ( v1436 == 3 )
                            {
                              v1555 = 225;
                              v1511 = 225;
                            }
                            goto LABEL_825;
                          }
                          v1555 = 15;
                        }
                        v1511 = 11;
LABEL_825:
                        v740 = 96;
                        v1480 = 96;
                        memset_0(v1864, 0, 0xDCuLL);
                        v1865 = 220;
                        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *))off_1809851E0)(
                                             0LL,
                                             0xFFFFFFFFLL,
                                             v1864) )
                        {
                          v740 = v1866;
                          *((_QWORD *)&v1759 + 1) = v1867;
                          *(_QWORD *)&v1759 = 0LL;
                          if ( v1866 < 0x60u )
                            v740 = 96;
                          v1480 = v740;
                        }
                        v741 = v658;
                        if ( v1436 == 1 )
                          v741 = (const wchar_t *)v1401;
                        memset_0(v1855, 0, 0x5CuLL);
                        v640 = 0;
                        v1462 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(
                                          0LL,
                                          0LL,
                                          1027LL);
                        if ( !v1462 )
                          goto LABEL_832;
                        v743 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(v1555, v740, 72LL);
                        v1855[4] = 400;
                        v1856 = 5;
                        v1855[0] = -v743;
                        StringCchCopyW(v1857, 32LL, v741);
                        v744 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1855);
                        v105 = 0LL;
                        if ( v744 )
                        {
                          v1805 = v744;
                        }
                        else
                        {
                          v745 = GetLastError();
                          v640 = v745;
                          if ( v745 > 0 )
                            v640 = (unsigned __int16)v745 | 0x80070000;
                          if ( v640 >= 0 )
                            v640 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, LPVOID))off_180985260)(0LL, v1462);
                        if ( v640 < 0 )
                          goto LABEL_925;
                        if ( v1436 == 1 )
                          v658 = (const wchar_t *)v1401;
                        memset_0(v1858, 0, 0x5CuLL);
                        v640 = 0;
                        v746 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
                        if ( !v746 )
                        {
LABEL_832:
                          v742 = GetLastError();
                          v105 = 0LL;
                          v640 = v742;
                          if ( v742 > 0 )
                            v640 = (unsigned __int16)v742 | 0x80070000;
                          if ( v640 >= 0 )
                            v640 = -2147467259;
                          goto LABEL_925;
                        }
                        v747 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(v1511, v740, 72LL);
                        v1858[4] = 400;
                        v1859 = 5;
                        v1858[0] = -v747;
                        StringCchCopyW(v1860, 32LL, v658);
                        v748 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1858);
                        if ( v748 )
                        {
                          v1806 = (void *)v748;
                        }
                        else
                        {
                          v749 = GetLastError();
                          v640 = v749;
                          if ( v749 > 0 )
                            v640 = (unsigned __int16)v749 | 0x80070000;
                          if ( v640 >= 0 )
                            v640 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, __int64))off_180985260)(0LL, v746);
                        v105 = 0LL;
                        if ( v640 < 0 )
                          goto LABEL_925;
                        v750 = 0;
                        if ( v1436 != 1 )
                        {
                          if ( v1436 == 2 )
                          {
                            v750 = 0;
                            LODWORD(v105) = SDWORD2(v1759) / 4;
LABEL_857:
                            *((_QWORD *)&v1820 + 1) = __PAIR64__(v750, v105);
                            if ( v1436 == 1 )
                            {
                              v752 = 150;
                              v1511 = 32;
                            }
                            else
                            {
                              if ( (unsigned int)(v1436 - 2) >= 2 )
                              {
                                v751 = v1613;
                                v1497 = v1613;
                                v752 = v1555;
                                goto LABEL_864;
                              }
                              v752 = 0;
                              v1497 = 0;
                              v1511 = 0;
                            }
                            v751 = 0;
                            v1555 = v752;
LABEL_864:
                            v753 = v1802;
                            v754 = v105 - v752 - v751;
                            v640 = 0;
                            DWORD2(v1810) = v754;
                            DWORD2(v1809) = v754;
                            v1402 = ((__int64 (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(lpModuleNameb, v1805);
                            if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                                  lpModuleNameb,
                                                  v753,
                                                  0xFFFFFFFFLL,
                                                  &v1809,
                                                  3152,
                                                  0LL) )
                              v640 = -2147467259;
                            if ( v1402 )
                              ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(lpModuleNameb, v1402);
                            if ( v640 >= 0 )
                            {
                              v755 = v1803;
                              v640 = 0;
                              v1403 = ((__int64 (__fastcall *)(LPCWSTR, void *))off_180985178)(lpModuleNameb, v1806);
                              if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1809851D8)(
                                                    lpModuleNameb,
                                                    v755,
                                                    0xFFFFFFFFLL,
                                                    &v1810,
                                                    3152,
                                                    0LL) )
                                v640 = -2147467259;
                              if ( v1403 )
                                ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(lpModuleNameb, v1403);
                              if ( v640 >= 0 )
                              {
                                if ( (unsigned int)(v1436 - 2) <= 1 )
                                {
                                  v754 = DWORD2(v1810);
                                  if ( SDWORD2(v1809) > SDWORD2(v1810) )
                                    v754 = DWORD2(v1809);
                                }
                                if ( v1800 )
                                {
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1809,
                                    v754 + v751 - DWORD2(v1809),
                                    v1497);
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1810,
                                    v754 + v751 - DWORD2(v1810),
                                    v1511 + HIDWORD(v1809));
                                }
                                else
                                {
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1809, v1555, v1497);
                                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                    &v1810,
                                    v1555,
                                    v1511 + HIDWORD(v1809));
                                }
                                v638 = v1436;
                                if ( (unsigned int)(v1436 - 2) <= 1 )
                                {
                                  *((_QWORD *)&v1820 + 1) = __PAIR64__(HIDWORD(v1810), v754);
                                  v1808 = -5723992;
                                  goto LABEL_911;
                                }
                                if ( v1436 != 1 )
                                  goto LABEL_911;
                                v1808 = 0xFFFFFF;
                                memset_0(v1861, 0, 0x5CuLL);
                                v640 = 0;
                                v756 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(
                                         0LL,
                                         0LL,
                                         1027LL);
                                if ( v756 )
                                {
                                  v758 = v1480;
                                  v759 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1809851B8)(11LL, v1480);
                                  v1861[4] = 400;
                                  v1861[0] = -v759;
                                  v1862 = 5;
                                  StringCchCopyW(v1863, 32LL, v1444);
                                  v760 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1861);
                                  if ( v760 )
                                  {
                                    v1807 = v760;
                                  }
                                  else
                                  {
                                    v640 = GetLastError();
                                    v761 = v640 < 0;
                                    if ( v640 > 0 )
                                    {
                                      v640 = (unsigned __int16)v640 | 0x80070000;
                                      v761 = v640 < 0;
                                    }
                                    if ( !v761 )
                                      v640 = -2147467259;
                                  }
                                  ((void (__fastcall *)(_QWORD, __int64))off_180985260)(0LL, v756);
                                }
                                else
                                {
                                  v640 = GetLastError();
                                  v757 = v640 < 0;
                                  if ( v640 > 0 )
                                  {
                                    v640 = (unsigned __int16)v640 | 0x80070000;
                                    v757 = v640 < 0;
                                  }
                                  if ( !v757 )
                                  {
                                    v640 = -2147467259;
                                    v105 = 0LL;
LABEL_926:
                                    ((void (__fastcall *)(_QWORD, LPCWSTR))off_180985260)(0LL, lpModuleNameb);
                                    goto LABEL_927;
                                  }
                                  v758 = v1480;
                                }
                                if ( v640 >= 0 )
                                {
                                  v762 = v1804;
                                  v640 = 0;
                                  v1813 = v754;
                                  v763 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_180985178)(lpModuleNameb, v1807);
                                  if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1809851D8)(
                                                        lpModuleNameb,
                                                        v762,
                                                        0xFFFFFFFFLL,
                                                        &v1811,
                                                        1120,
                                                        0LL) )
                                    v640 = -2147467259;
                                  if ( v763 )
                                    ((void (__fastcall *)(LPCWSTR, __int64))off_180985178)(lpModuleNameb, v763);
                                  v105 = 0LL;
                                  if ( v640 < 0 )
                                    goto LABEL_925;
                                  v764 = v1813 + 24;
                                  if ( (int)(v1813 + 24) < 90 )
                                    v764 = 90;
                                  v1813 = v764;
                                  v1814 = 32;
                                  v1811 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1811,
                                            v758,
                                            96LL);
                                  v1812 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1812,
                                            v758,
                                            96LL);
                                  v1813 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1813,
                                            v758,
                                            96LL);
                                  v1814 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                            v1814,
                                            v758,
                                            96LL);
                                  if ( v1800 )
                                  {
                                    v765 = (unsigned int)v1809;
                                    if ( (int)v1809 >= (int)v1810 )
                                      v765 = (unsigned int)v1810;
                                  }
                                  else
                                  {
                                    v766 = DWORD2(v1809);
                                    if ( SDWORD2(v1809) <= SDWORD2(v1810) )
                                      v766 = DWORD2(v1810);
                                    v765 = v1811 + v766 - v1813;
                                  }
                                  ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_180985250)(
                                    &v1811,
                                    v765,
                                    (unsigned int)(HIDWORD(v1810) + 36));
                                  v638 = v1436;
LABEL_911:
                                  v767 = v1800;
                                  v768 = HIDWORD(v1820);
                                  v769 = DWORD2(v1820);
                                  switch ( v638 )
                                  {
                                    case 1:
                                      v105 = 0LL;
                                      *(_QWORD *)&v1820 = 0LL;
                                      break;
                                    case 2:
                                      v1832 = 0LL;
                                      v1834 = 0LL;
                                      v1833 = 0LL;
                                      v771 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180985248)(0LL, 1LL);
                                      LODWORD(v1832) = 40;
                                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_180985208)(
                                                           v771,
                                                           &v1832) )
                                      {
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1833 + 4);
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1833 + 12);
                                        if ( v767 )
                                          v772 = DWORD1(v1833) + 5 * HIDWORD(v1833) / 100;
                                        else
                                          v772 = 95 * (HIDWORD(v1833) - v769) / 100;
                                        LODWORD(v1820) = v772;
                                        DWORD1(v1820) = 95 * ((int)v1834 - v768) / 100;
                                      }
                                      break;
                                    case 3:
                                      v1829 = 0LL;
                                      v1831 = 0LL;
                                      v1830 = 0LL;
                                      v770 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180985248)(0LL, 1LL);
                                      LODWORD(v1829) = 40;
                                      v105 = 0LL;
                                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_180985208)(
                                                           v770,
                                                           &v1829) )
                                      {
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1830 + 4);
                                        ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1830 + 12);
                                        LODWORD(v1820) = 50 * (HIDWORD(v1830) - v769) / 100;
                                        DWORD1(v1820) = 50 * ((int)v1831 - v768) / 100;
                                      }
                                      break;
                                    default:
                                      v105 = 0LL;
                                      break;
                                  }
                                  v640 = 0;
                                  goto LABEL_926;
                                }
                              }
                            }
LABEL_924:
                            v105 = 0LL;
LABEL_925:
                            v638 = v1436;
                            goto LABEL_926;
                          }
                          if ( v1436 != 3 )
                            goto LABEL_857;
                        }
                        LODWORD(v105) = DWORD2(v1759);
                        v750 = HIDWORD(v1759);
                        goto LABEL_857;
                      }
                    }
                    else
                    {
                      v640 = -1073425151;
                      MemoryFree(v1525);
                      v1717 = 0LL;
                    }
                  }
                  else
                  {
                    v640 = -2147024882;
                  }
                }
                v658 = v1460;
                goto LABEL_749;
              }
              v641 = v644;
              if ( v1613 )
              {
                for ( kk = 0; kk < v1613; ++kk )
                {
                  *v644 = ((__int64 (__fastcall *)(char *, _QWORD))off_1809851B0)(v643, 0LL);
                  v646 = -1LL;
                  do
                    ++v646;
                  while ( *(_WORD *)&v643[2 * v646] );
                  ++v644;
                  v643 += 2 * v646 + 2;
                }
              }
              *v644 = 1033;
              v1715 = v641;
              LODWORD(v1495) = v1613 + 1;
            }
            else
            {
              v640 = -2147024882;
            }
            v1720 = 0LL;
            goto LABEL_730;
          }
          v572 = g_WarbirdSecureFunctionsRefCount;
LABEL_707:
          g_WarbirdSecureFunctionsRefCount = v572 + 1;
          goto LABEL_708;
        }
      }
      else
      {
        v561 = 0;
      }
      v569 = GetProcessHeap();
      HeapFree(v569, 0, v555);
      goto LABEL_653;
    }
    HIDWORD(v1747) = dwBytes;
    v122 = dwBytes;
    v123 = GetProcessHeap();
    v124 = HeapAlloc(v123, 8u, v122);
    if ( !v124 )
    {
      v93 = -1073741801;
      goto LABEL_97;
    }
    lpMem = v124;
    LODWORD(v1747) = 0;
    v125 = v124;
    pcchLength[1] = (size_t)v124;
    v1358 = v94;
    Size = 8;
    v1375 = v92;
    v126 = RtlULongLongAdd((unsigned __int64)v124, 4LL, (unsigned __int64 *)&v1742);
    v93 = v126;
    LODWORD(v1614) = v126;
    if ( v126 < 0 )
    {
      v97 = v90;
      goto LABEL_99;
    }
    if ( v125 + 2 > (_DWORD *)((char *)v125 + HIDWORD(v1747)) )
    {
LABEL_141:
      v93 = -1073741789;
      goto LABEL_97;
    }
    v128 = v1742;
    *v125 = 4;
    *v128 = 0;
    v129 = v1747 + 1;
    LODWORD(v1747) = v1747 + 1;
    if ( !v127 )
      goto LABEL_138;
    if ( lpMem )
    {
      v133 = (int *)lpMem;
      v1687 = (int *)lpMem;
      v1470 = 0;
      if ( v129 )
      {
        do
        {
          v93 = RtlUIntAdd(4u, *v133, &v1678);
          LODWORD(v1614) = v93;
          if ( v93 < 0 )
            goto LABEL_116;
          v93 = RtlULongLongAdd((unsigned __int64)v133, v1678, (unsigned __int64 *)&v1687);
          LODWORD(v1614) = v93;
          if ( v93 < 0 )
            goto LABEL_116;
          v133 = v1687;
          ++v1470;
        }
        while ( v1470 < v135 );
        v1358 = v94;
        Size = v134;
        v1375 = v92;
      }
      v93 = RtlULongLongAdd((unsigned __int64)v133, 4LL, (unsigned __int64 *)&v1751);
      LODWORD(v1614) = v93;
      if ( v93 >= 0 )
      {
        if ( (char *)v133 + v136 + 4 > (char *)lpMem + HIDWORD(v1747) )
          goto LABEL_141;
        *v133 = v136;
        memcpy_0(v1751, v92, v136);
        v131 = 4;
        v132 = v1747 + 1;
        LODWORD(v1747) = v1747 + 1;
        goto LABEL_156;
      }
    }
    else
    {
      v93 = RtlUIntAdd(4u, v127, (unsigned int *)&v1677);
      LODWORD(v1614) = v93;
      if ( v93 < 0 )
        goto LABEL_116;
      v130 = RtlUIntAdd(HIDWORD(v1747), v1677, (unsigned int *)&v1747 + 1);
      v132 = v1747;
      v93 = v130;
      LODWORD(v1614) = v130;
      if ( v130 >= 0 )
      {
        v132 = v1747 + 1;
        LODWORD(v1747) = v1747 + 1;
LABEL_156:
        if ( !v94 )
        {
          if ( Size )
            goto LABEL_138;
LABEL_160:
          if ( lpMem )
          {
            v140 = (int *)lpMem;
            v1688 = (int *)lpMem;
            v1471 = 0;
            if ( v132 )
            {
              do
              {
                v93 = RtlUIntAdd(4u, *v140, &v1680);
                LODWORD(v1614) = v93;
                if ( v93 < 0 )
                  goto LABEL_116;
                v93 = RtlULongLongAdd(v141, v1680, (unsigned __int64 *)&v1688);
                LODWORD(v1614) = v93;
                if ( v93 < 0 )
                  goto LABEL_116;
                v140 = v1688;
                ++v1471;
              }
              while ( v1471 < v142 );
              v1358 = v94;
              v1375 = v92;
            }
            v93 = RtlULongLongAdd((unsigned __int64)v140, 4LL, (unsigned __int64 *)&v1752);
            LODWORD(v1614) = v93;
            if ( v93 >= 0 )
            {
              if ( (char *)v143 + Size + 4 > (char *)lpMem + HIDWORD(v1747) )
                goto LABEL_141;
              *v143 = Size;
              if ( v94 )
                memcpy_0(v1752, v94, Size);
              v139 = 1LL;
              v138 = v1747 + 1;
              LODWORD(v1747) = v1747 + 1;
              goto LABEL_176;
            }
          }
          else
          {
            v93 = RtlUIntAdd(v131, Size, (unsigned int *)&v1679);
            LODWORD(v1614) = v93;
            if ( v93 < 0 )
              goto LABEL_116;
            v137 = RtlUIntAdd(HIDWORD(v1747), v1679, (unsigned int *)&v1747 + 1);
            v138 = v1747;
            v93 = v137;
            LODWORD(v1614) = v137;
            if ( v137 >= 0 )
            {
              v139 = 1LL;
              v138 = v1747 + 1;
              LODWORD(v1747) = v1747 + 1;
              goto LABEL_176;
            }
          }
          v97 = v90;
          if ( v93 < 0 )
            goto LABEL_99;
          v139 = 1LL;
LABEL_176:
          if ( lpMem )
          {
            v147 = (int *)lpMem;
            v1689 = (int *)lpMem;
            v1472 = 0;
            if ( v138 )
            {
              do
              {
                v93 = RtlUIntAdd(4u, *v147, &v1621);
                LODWORD(v1614) = v93;
                if ( v93 < 0 )
                  goto LABEL_116;
                v93 = RtlULongLongAdd((unsigned __int64)v147, v1621, (unsigned __int64 *)&v1689);
                LODWORD(v1614) = v93;
                if ( v93 < 0 )
                  goto LABEL_116;
                v147 = v1689;
                ++v1472;
              }
              while ( v1472 < v148 );
              v1358 = v94;
              v1375 = v92;
            }
            v93 = RtlULongLongAdd((unsigned __int64)v147, 4LL, (unsigned __int64 *)&v1753);
            LODWORD(v1614) = v93;
            if ( v93 >= 0 )
            {
              if ( v147 + 3 > (int *)((char *)lpMem + HIDWORD(v1747)) )
                goto LABEL_141;
              v150 = v1753;
              *v147 = 8;
              v139 = (unsigned int)(v149 - 3);
              *v150 = v1524;
              v146 = v1747;
              goto LABEL_179;
            }
          }
          else
          {
            v93 = RtlUIntAdd(4u, 8, (unsigned int *)&v1620);
            LODWORD(v1614) = v93;
            if ( v93 < 0 )
              goto LABEL_116;
            v144 = RtlUIntAdd(HIDWORD(v1747), v1620, (unsigned int *)&v1747 + 1);
            v146 = v1747;
            v93 = v144;
            LODWORD(v1614) = v144;
            if ( v144 >= 0 )
            {
LABEL_179:
              LODWORD(v1747) = v139 + v146;
              goto LABEL_190;
            }
          }
          v97 = v90;
          if ( v93 < 0 )
            goto LABEL_99;
          v139 = 1LL;
LABEL_190:
          if ( StringCchLengthW(L"WindowsCopilot-Available", v145, &v1690) < 0 )
          {
            v93 = -1073741762;
            goto LABEL_97;
          }
          v93 = RtlULongLongAdd(v1690, v139, &v1690);
          LODWORD(v1614) = v93;
          if ( v93 >= 0 )
          {
            if ( 2 * (_DWORD)v1690 )
            {
              if ( !lpMem )
              {
                LODWORD(v1614) = RtlUIntAdd(v152, 2 * (int)v1690, (unsigned int *)&v1642);
                v93 = (int)v1614;
                if ( (int)v1614 >= 0 )
                {
                  v153 = RtlUIntAdd(HIDWORD(v1747), v1642, (unsigned int *)&v1747 + 1);
                  v151 = v1747;
                  v93 = v153;
                  LODWORD(v1614) = v153;
                  if ( v153 >= 0 )
                  {
                    v151 = v139 + v1747;
                    LODWORD(v1614) = 0;
                    LODWORD(v1747) = v139 + v1747;
                    v93 = 0;
                  }
                }
                goto LABEL_208;
              }
              v154 = (int *)lpMem;
              v1691 = (int *)lpMem;
              if ( v151 )
              {
                do
                {
                  LODWORD(v1614) = RtlUIntAdd(4u, *v154, &v1622);
                  v93 = (int)v1614;
                  if ( (int)v1614 < 0 )
                    goto LABEL_208;
                  LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v154, v1622, (unsigned __int64 *)&v1691);
                  v93 = (int)v1614;
                  if ( (int)v1614 < 0 )
                    goto LABEL_208;
                  v154 = v1691;
                }
                while ( v155 + 1 < v151 );
              }
              LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v154, 4LL, (unsigned __int64 *)&v1754);
              v93 = (int)v1614;
              if ( (int)v1614 < 0 )
                goto LABEL_208;
              if ( (char *)v154 + v156 + 4 <= (char *)lpMem + HIDWORD(v1747) )
              {
                v157 = v1754;
                *v154 = v156;
                memcpy_0(v157, L"WindowsCopilot-Available", (unsigned int)v156);
                v151 = v1747 + 1;
                LODWORD(v1747) = v1747 + 1;
                goto LABEL_208;
              }
              v93 = -1073741789;
            }
            else
            {
              v93 = -1073741811;
            }
            LODWORD(v1614) = v93;
          }
LABEL_208:
          v97 = v90;
          if ( v93 < 0 )
            goto LABEL_99;
          if ( lpMem )
          {
            v162 = (int *)lpMem;
            v1692 = (int *)lpMem;
            v1473 = 0;
            if ( v151 )
            {
              do
              {
                v93 = RtlUIntAdd(4u, *v162, &v1624);
                LODWORD(v1614) = v93;
                if ( v93 < 0 )
                  goto LABEL_116;
                v93 = RtlULongLongAdd((unsigned __int64)v162, v1624, (unsigned __int64 *)&v1692);
                LODWORD(v1614) = v93;
                if ( v93 < 0 )
                  goto LABEL_116;
                v162 = v1692;
                ++v1473;
              }
              while ( v1473 < v163 );
              v1358 = v94;
              v1375 = v92;
            }
            v93 = RtlULongLongAdd((unsigned __int64)v162, 4LL, (unsigned __int64 *)&v1755);
            LODWORD(v1614) = v93;
            if ( v93 >= 0 )
            {
              if ( v162 + 2 > (int *)((char *)lpMem + HIDWORD(v1747)) )
                goto LABEL_141;
              v164 = v1755;
              *v162 = v159;
              v161 = v159 - 3;
              *v164 = v90;
              v160 = v159 - 3 + v1747;
              LODWORD(v1747) = v160;
              goto LABEL_223;
            }
          }
          else
          {
            v93 = RtlUIntAdd(4u, 4, (unsigned int *)&v1623);
            LODWORD(v1614) = v93;
            if ( v93 < 0 )
              goto LABEL_99;
            v158 = RtlUIntAdd(HIDWORD(v1747), v1623, (unsigned int *)&v1747 + 1);
            v160 = v1747;
            v93 = v158;
            LODWORD(v1614) = v158;
            if ( v158 >= 0 )
            {
              v161 = 1;
              v160 = v1747 + 1;
              LODWORD(v1747) = v1747 + 1;
              goto LABEL_223;
            }
          }
          v97 = v90;
          if ( v93 < 0 )
            goto LABEL_99;
          v161 = 1;
LABEL_223:
          if ( lpMem )
          {
            v166 = (int *)lpMem;
            v1693 = (int *)lpMem;
            v1474 = 0;
            if ( v160 )
            {
              do
              {
                v93 = RtlUIntAdd(4u, *v166, &v1626);
                LODWORD(v1614) = v93;
                if ( v93 < 0 )
                  goto LABEL_116;
                v93 = RtlULongLongAdd((unsigned __int64)v166, v1626, (unsigned __int64 *)&v1693);
                LODWORD(v1614) = v93;
                if ( v93 < 0 )
                  goto LABEL_116;
                v166 = v1693;
                ++v1474;
              }
              while ( v1474 < v167 );
              v1358 = v94;
              v159 = 4LL;
              v1375 = v92;
            }
            v93 = RtlULongLongAdd((unsigned __int64)v166, v159, (unsigned __int64 *)&v1756);
            LODWORD(v1614) = v93;
            if ( v93 >= 0 )
            {
              if ( v166 + 2 > (int *)((char *)lpMem + HIDWORD(v1747)) )
                goto LABEL_141;
              v168 = v1756;
              *v166 = v165;
              *v168 = v165;
              LODWORD(v1747) = v1747 + 1;
              goto LABEL_236;
            }
          }
          else
          {
            v93 = RtlUIntAdd(v159, v159, (unsigned int *)&v1625);
            LODWORD(v1614) = v93;
            if ( v93 < 0 )
              goto LABEL_116;
            LODWORD(v1614) = RtlUIntAdd(HIDWORD(v1747), v1625, (unsigned int *)&v1747 + 1);
            v93 = (int)v1614;
            if ( (int)v1614 >= 0 )
            {
              LODWORD(v1747) = v161 + v1747;
              goto LABEL_236;
            }
          }
          v97 = v90;
          if ( v93 < 0 )
            goto LABEL_99;
LABEL_236:
          v93 = RtlUIntAdd(v165, v165, &v1627);
          LODWORD(v1614) = v93;
          if ( v93 < 0 )
            goto LABEL_116;
          v170 = v1627;
          v1628 = v1627;
          v93 = RtlUIntAdd(v169, 8, (unsigned int *)&v1629);
          LODWORD(v1614) = v93;
          if ( v93 < 0 )
            goto LABEL_116;
          v171 = RtlUIntAdd(v170, v1629, &v1628);
          v173 = 0LL;
          LODWORD(v1614) = v171;
          v93 = v171;
          if ( v171 < 0 )
            goto LABEL_248;
          LODWORD(v1614) = RtlUIntAdd(v172, v172, (unsigned int *)&v1630);
          v93 = (int)v1614;
          if ( (int)v1614 < 0 )
            goto LABEL_98;
          LODWORD(v1614) = RtlUIntAdd(v1628, v1630, &v1628);
          v93 = (int)v1614;
          if ( (int)v1614 < 0 )
            goto LABEL_248;
          LODWORD(v1614) = RtlUIntAdd(v174, v174, v1637);
          v93 = (int)v1614;
          if ( (int)v1614 < 0 )
            goto LABEL_98;
          LODWORD(v1614) = RtlUIntAdd(v1628, v1637[0], &v1628);
          v93 = (int)v1614;
          if ( (int)v1614 < 0 )
            goto LABEL_248;
          LODWORD(v1614) = RtlUIntAdd(v175, v175, (unsigned int *)&v1631);
          v93 = (int)v1614;
          if ( (int)v1614 < 0 )
            goto LABEL_98;
          LODWORD(v1614) = RtlUIntAdd(v1628, v1631, &v1628);
          v93 = (int)v1614;
          if ( (int)v1614 < 0 )
            goto LABEL_248;
          LODWORD(v1614) = RtlUIntAdd(v176, v176, (unsigned int *)&v1632);
          v93 = (int)v1614;
          if ( (int)v1614 < 0 )
            goto LABEL_98;
          LODWORD(v1614) = RtlUIntAdd(v1628, v1632, &v1628);
          v93 = (int)v1614;
          if ( (int)v1614 < 0 )
          {
LABEL_248:
            v97 = v90;
            if ( v93 < 0 )
              goto LABEL_99;
            v177 = Size;
          }
          else
          {
            v177 = v1628;
          }
          v1475 = v177;
          v178 = v173;
          v1513 = v173;
          v1599 = v173;
          v1610 = v173;
          LODWORD(v1495) = (_DWORD)v173;
          v1612 = v173;
          v1537 = v173;
          lpModuleName = (WCHAR *)v173;
          v1426 = (void *)__rdtsc();
          v1633 = 8;
          v181 = RtlUIntAdd(8u, SHIDWORD(v1747), &v1633);
          if ( v181 >= 0 )
          {
            v182 = (v1633 + 7) & 0xFFFFFFF8;
            if ( v182 < v1633 )
            {
              v93 = -805306219;
LABEL_253:
              v97 = v1609;
              LODWORD(v1614) = v93;
              goto LABEL_99;
            }
            v1633 = (v1633 + 7) & 0xFFFFFFF8;
            LODWORD(v1614) = v177;
            v183 = v182;
            v184 = GetProcessHeap();
            v185 = (unsigned __int8 *)HeapAlloc(v184, 8u, v183);
            v1457 = v185;
            if ( !v185 )
            {
              v97 = v1609;
              v93 = -805306345;
              LODWORD(v1614) = -805306345;
              goto LABEL_99;
            }
            *(_DWORD *)v185 = v1747;
            v1694[0] = v185;
            v186 = RtlULongLongAdd((unsigned __int64)v185, 4LL, (unsigned __int64 *)v1694);
            v177 = (unsigned int)v1614;
            v181 = v186;
            v1440 = v187;
            v1475 = (unsigned int)v1614;
            v1358 = v94;
            v1375 = v92;
            if ( v186 < 0 )
              goto LABEL_259;
            v188 = v1694[0];
            *(_DWORD *)v1694[0] = HIDWORD(v1747);
            v189 = RtlULongLongAdd((unsigned __int64)v188, 4LL, (unsigned __int64 *)v1694);
            v1440 = v190;
            v181 = v189;
            v1475 = v177;
            v1358 = v94;
            v1375 = v92;
            if ( v189 < 0 )
            {
LABEL_259:
              v191 = GetProcessHeap();
              HeapFree(v191, 0, v1440);
              v179 = (unsigned int)v178;
            }
            else
            {
              *(_QWORD *)&v190[v1633 - 8] = v1426;
              memcpy_0(v1694[0], lpMem, HIDWORD(v1747));
              v178 = v1457;
              v179 = v1633;
              v1513 = v1457;
              v1475 = v177;
              v1358 = v94;
              v1375 = v92;
            }
            v180 = 0LL;
          }
          v93 = v181 | 0x10000000;
          LODWORD(v1614) = v93;
          if ( v93 < 0 )
            goto LABEL_373;
          v1441 = v180;
          if ( !v178 )
          {
            v93 = -805306355;
            goto LABEL_253;
          }
          v192 = v179;
          v1458 = (LPVOID)v179;
          if ( !v179 || (v1394 = v179 + 8, (Src = MemoryAlloc(v179 + 8LL)) == 0LL) )
          {
            v93 = -805306367;
            LODWORD(v1614) = -805306367;
            goto LABEL_374;
          }
          v193 = 0;
          v194 = 0LL;
          v1356 = 0;
          if ( v192 )
          {
            do
              v193 ^= v178[v194++];
            while ( v194 < v192 );
            v1356 = v193;
          }
          v195 = Src;
          v1817 = 0xC81ECB17B1B54A58uLL;
          LODWORD(v1614) = 0;
          v196 = -1;
          Sizea = 0;
          v197 = v178;
          v198 = 0;
          v199 = v192 & 7;
          if ( (v192 & 7) != 0 )
          {
            v200 = 0;
            v201 = 0;
            v1503 = 0;
            v202 = 56;
            do
            {
              v203 = *v197++;
              if ( v200 >= 4 )
                v201 |= v203 << v202;
              else
                v198 |= v203 << (v202 - 32);
              v202 -= 8;
              v200 = v1503 + 1;
              Sizea = v201;
              LODWORD(v1614) = v198;
              v1503 = v200;
            }
            while ( (int)v200 < (int)v199 );
            v198 ^= 0xB17A307A;
            v1475 = v177;
            v204 = v201 ^ 0x42F6B18D;
            v1358 = v94;
            v1375 = v92;
            v1504 = 0;
            v205 = v198;
            v206 = Src;
            v207 = v204;
            v1513 = v178;
            do
            {
              v1427 = v206 + 1;
              if ( v1504 >= 4 )
              {
                v207 = __ROL4__(v207, 8);
                v208 = v207;
              }
              else
              {
                v205 = __ROL4__(v205, 8);
                v208 = v205;
              }
              ++v1504;
              *v206++ = v208;
            }
            while ( v1504 < (int)v199 );
            v193 = v1356;
            v195 = v1427;
            v177 = v1475;
            if ( v199 <= 4 )
            {
              v196 = 0;
              if ( v199 >= 4 )
                goto LABEL_285;
              v198 = v198 >> (8 * (4 - v199)) << (8 * (4 - v199));
            }
            else
            {
              v196 = v204 >> (8 * (8 - v199)) << (8 * (8 - v199));
            }
            v195 = v1427;
          }
LABEL_285:
          v209 = v192 >> 3;
          if ( v192 >> 3 )
          {
            v210 = v195 + 7;
            v211 = Sizea;
            v212 = WORD2(v1817);
            v213 = v197 + 2;
            v214 = HIDWORD(v1817) ^ 0xB1B54A58;
            v1548 = WORD1(v1817);
            v215 = (int)v1614;
            do
            {
              v216 = v213[1] | ((*v213 | ((*(v213 - 1) | (*(v213 - 2) << 8)) << 8)) << 8);
              v217 = v213[5] | ((v213[4] | ((v213[3] | (v213[2] << 8)) << 8)) << 8);
              v218 = v217 ^ v196;
              v219 = v216 ^ HIDWORD(v1817) ^ (v218 - 19032) ^ v198;
              v220 = (__ROR4__(v219, 7) + WORD1(v1817) * __ROR4__(v219 ^ HIDWORD(v1817), 15)) ^ v218;
              v221 = (v212 * __ROR4__(v220 - 1313519016, 9) - __ROR4__(v220, 10)) ^ v219;
              v222 = (__ROL4__(v221, 5) + HIWORD(v1817) * __ROL4__(v221 ^ v212, 4)) ^ v220;
              v223 = (HIDWORD(v1817) - (v222 ^ 0xB1B54A58)) ^ v221;
              v224 = (WORD1(v1817) * (v223 - 19032) - (v223 >> 6)) ^ v222;
              v225 = (19032 * (v212 ^ __ROR4__(v224, 15))) ^ v223;
              v226 = (v212 * (HIWORD(v1817) + __ROR4__(~v225, 3))) ^ v224;
              v227 = (v226 - 19032 - HIDWORD(v1817)) ^ v225;
              v228 = (v1548 * (v227 ^ HIWORD(v1817))) ^ __ROR4__(v227, 10) ^ v226;
              v229 = __ROR4__(v228, 3) ^ (v212 * __ROL4__(v228 ^ 0x4A58, 6)) ^ v227;
              v230 = (19032 * (__ROR4__(v229, 15) - HIWORD(v1817))) ^ v228;
              v231 = (v230 >> 15) ^ (19032 * __ROL4__(v230 - v212, 3)) ^ (v230 >> 1) ^ (19032 * (v230 ^ HIWORD(v1817))) ^ v229;
              v232 = (WORD1(v1817) * (v231 - v212) - (v231 >> 13)) ^ v230;
              v233 = __ROR4__(v232, 11) ^ (v212 * __ROR4__(-1313519016 - v232, 9)) ^ v231;
              v234 = (v233 - HIWORD(v1817) + 1313519016) ^ v232;
              v235 = (19032 * (v234 ^ WORD1(v1817)) - __ROR4__(v234, 7)) ^ v233;
              v236 = (WORD1(v1817) * __ROL4__(v235 ^ HIWORD(v1817), 4) - __ROR4__(v235, 16)) ^ v234;
              v237 = (__ROR4__(v236, 4) + v212 * __ROR4__(-1313519016 - v236, 10)) ^ v235;
              v238 = __ROR4__(v237, 9) ^ (HIWORD(v1817) * __ROR4__(v237 + 1313519016, 4)) ^ v236;
              v239 = (19032 * __ROL4__(v238 ^ HIDWORD(v1817), 8) - __ROL4__(v238, 2)) ^ v237;
              v240 = (WORD1(v1817) * __ROR4__(HIDWORD(v1817) - v239, 11) - __ROR4__(v239, 12)) ^ v238;
              v241 = (v240 >> 8) ^ (v212 * (WORD1(v1817) ^ v240)) ^ v239;
              v213 += 8;
              v242 = v241 ^ v214;
              v243 = v215 ^ v241;
              *(v210 - 4) = v243;
              v244 = v211 ^ v242 ^ v240;
              v245 = __ROR4__(v243, 8);
              *v210 = v244;
              v215 = v216;
              *(v210 - 5) = v245;
              v210 += 8;
              v246 = __ROR4__(v244, 8);
              v211 = v217;
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
            v193 = v1356;
            v92 = v1375;
            v94 = v1358;
            v178 = v1513;
            v177 = v1475;
            v192 = (unsigned __int64)v1458;
          }
          *(_QWORD *)&Src[v192] = v193;
          v1694[4] = (void *)160;
          v251 = GetProcessHeap();
          v252 = HeapAlloc(v251, 8u, 0x30uLL);
          v1514 = v252;
          if ( !v252 )
          {
            v253 = -1073741801;
            v254 = 0LL;
LABEL_303:
            v1599 = (unsigned __int8 *)v254;
            v266 = GetProcessHeap();
            HeapFree(v266, 0, Src);
            v267 = v1441;
            if ( v1441 )
            {
              Srca = (void *)v1441[1];
              if ( Srca )
              {
                v268 = GetProcessHeap();
                HeapFree(v268, 0, Srca);
                v267 = v1441;
                v1441[1] = 0LL;
              }
              Srcb = (void *)v267[3];
              if ( Srcb )
              {
                v269 = GetProcessHeap();
                HeapFree(v269, 0, Srcb);
                v267 = v1441;
                v1441[3] = 0LL;
              }
              Srcc = (void *)v267[5];
              if ( Srcc )
              {
                v270 = GetProcessHeap();
                HeapFree(v270, 0, Srcc);
                v1441[5] = 0LL;
              }
              v271 = GetProcessHeap();
              HeapFree(v271, 0, v1441);
              v1599 = (unsigned __int8 *)v254;
            }
            v93 = v253 | 0x10000000;
            LODWORD(v1614) = v93;
            if ( v93 >= 0 )
            {
              v272 = *v254;
              v1359 = v254;
              LODWORD(v1634) = 4;
              v275 = RtlUIntAdd(4u, v272, (unsigned int *)&v1634);
              if ( v275 >= 0 )
              {
                v275 = RtlUIntAdd(v1634, v274, (unsigned int *)&v1634);
                if ( v275 >= 0 )
                {
                  v275 = RtlUIntAdd(v1634, v254[4], (unsigned int *)&v1634);
                  if ( v275 >= 0 )
                  {
                    v275 = RtlUIntAdd(v1634, v276, (unsigned int *)&v1634);
                    if ( v275 >= 0 )
                    {
                      v275 = RtlUIntAdd(v1634, v254[8], (unsigned int *)&v1634);
                      if ( v275 >= 0 )
                      {
                        v1549 = v1634;
                        v277 = v1634;
                        v278 = GetProcessHeap();
                        v279 = HeapAlloc(v278, 8u, v277);
                        v1376 = v279;
                        if ( !v279 )
                          goto LABEL_361;
                        v1695 = v279;
                        *v279 = *v1359;
                        v275 = RtlULongLongAdd((unsigned __int64)v279, 4LL, (unsigned __int64 *)&v1695);
                        v1515 = v281;
                        v254 = v280;
                        v1599 = (unsigned __int8 *)v280;
                        if ( v275 < 0 )
                          goto LABEL_328;
                        memcpy_0(v1695, *((const void **)v280 + 1), *v280);
                        v275 = RtlULongLongAdd((unsigned __int64)v1695, *v254, (unsigned __int64 *)&v1695);
                        v1515 = v1376;
                        v1599 = (unsigned __int8 *)v254;
                        if ( v275 < 0 )
                          goto LABEL_328;
                        v282 = v1695;
                        *(_DWORD *)v1695 = v254[4];
                        v275 = RtlULongLongAdd((unsigned __int64)v282, 4LL, (unsigned __int64 *)&v1695);
                        v1515 = v283;
                        v1599 = (unsigned __int8 *)v254;
                        if ( v275 < 0 )
                          goto LABEL_328;
                        memcpy_0(v1695, *((const void **)v254 + 3), v254[4]);
                        v275 = RtlULongLongAdd((unsigned __int64)v1695, v254[4], (unsigned __int64 *)&v1695);
                        v1515 = v1376;
                        v1599 = (unsigned __int8 *)v254;
                        if ( v275 < 0 )
                          goto LABEL_328;
                        v284 = v1695;
                        *(_DWORD *)v1695 = v254[8];
                        v275 = RtlULongLongAdd((unsigned __int64)v284, 4LL, (unsigned __int64 *)&v1695);
                        v1515 = v285;
                        v1599 = (unsigned __int8 *)v254;
                        if ( v275 < 0
                          || (memcpy_0(v1695, *((const void **)v254 + 5), v254[8]),
                              v275 = RtlULongLongAdd((unsigned __int64)v1695, v254[8], (unsigned __int64 *)&v1695),
                              v273 = v1475,
                              v1515 = v1376,
                              v1599 = (unsigned __int8 *)v254,
                              v275 < 0) )
                        {
LABEL_328:
                          v286 = GetProcessHeap();
                          HeapFree(v286, 0, v1515);
                          v273 = v1475;
                        }
                        else
                        {
                          v1610 = v1376;
                          LODWORD(v1495) = v1549;
                          v1599 = (unsigned __int8 *)v254;
                        }
                      }
                    }
                  }
                }
              }
              v93 = v275 | 0x10000000;
              LODWORD(v1614) = v93;
              if ( v93 >= 0 )
              {
                v1635 = 8;
                v287 = RtlUIntAdd(8u, v273, &v1635);
                v93 = v287 | 0x10000000;
                LODWORD(v1614) = v287 | 0x10000000;
                if ( v287 >= 0 )
                {
                  v290 = (v1635 + 7) & 0xFFFFFFF8;
                  if ( v290 < v1635 )
                  {
                    v93 = -1073741675;
LABEL_463:
                    LODWORD(v1614) = v93;
                    goto LABEL_373;
                  }
                  v1636 = (v1635 + 7) & 0xFFFFFFF8;
                  v1610 = v289;
                  v1599 = (unsigned __int8 *)v254;
                  LODWORD(v1614) = RtlUIntAdd(v290, v288, &v1636);
                  v93 = (int)v1614;
                  if ( (int)v1614 < 0 )
                    goto LABEL_373;
                  v1599 = (unsigned __int8 *)v254;
                  v1610 = v291;
                  if ( !lpMem || (v1599 = (unsigned __int8 *)v254, v1610 = v291, (unsigned int)v1747 <= 1) )
                  {
LABEL_336:
                    v93 = -1073741811;
                    goto LABEL_463;
                  }
                  v292 = lpMem;
                  v1696 = lpMem;
                  do
                  {
                    LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v292, 4LL, (unsigned __int64 *)&v1696);
                    v93 = (int)v1614;
                    if ( (int)v1614 < 0 )
                      goto LABEL_373;
                    LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v1696, v293, (unsigned __int64 *)&v1696);
                    v93 = (int)v1614;
                    if ( (int)v1614 < 0 )
                      goto LABEL_373;
                    v292 = v1696;
                  }
                  while ( v294 == -1 );
                  v1428 = *v1696;
                  LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v1696, 4LL, (unsigned __int64 *)&v1696);
                  v93 = (int)v1614;
                  if ( (int)v1614 >= 0 )
                  {
                    if ( !lpMem || (unsigned int)v1747 <= 2 )
                      goto LABEL_336;
                    v295 = lpMem;
                    v1697 = lpMem;
                    do
                    {
                      LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v295, 4LL, (unsigned __int64 *)&v1697);
                      v93 = (int)v1614;
                      if ( (int)v1614 < 0 )
                        goto LABEL_373;
                      LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v1697, v296, (unsigned __int64 *)&v1697);
                      v93 = (int)v1614;
                      if ( (int)v1614 < 0 )
                        goto LABEL_373;
                      v295 = v1697;
                    }
                    while ( (unsigned int)(v297 + 1) < 2 );
                    LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v1697, 4LL, (unsigned __int64 *)&v1697);
                    v93 = (int)v1614;
                    if ( (int)v1614 < 0 )
                      goto LABEL_373;
                    v1649 = 4;
                    LODWORD(v1614) = RtlUIntAdd(4u, v1636, &v1649);
                    v93 = (int)v1614;
                    if ( (int)v1614 < 0 )
                      goto LABEL_355;
                    LODWORD(v1614) = RtlUIntAdd(v1649, v298, &v1649);
                    v93 = (int)v1614;
                    if ( (int)v1614 < 0
                      || (LODWORD(v1614) = RtlUIntAdd(v1649, v1428, &v1649), v93 = (int)v1614, (int)v1614 < 0)
                      || (LODWORD(v1614) = RtlUIntAdd(v1649, 4, &v1649), v93 = (int)v1614, (int)v1614 < 0)
                      || (LODWORD(v1614) = RtlUIntAdd(v1649, v300, &v1649), v93 = (int)v1614, (int)v1614 < 0) )
                    {
LABEL_355:
                      if ( v93 < 0 )
                        goto LABEL_373;
                      v301 = v1637[1];
                    }
                    else
                    {
                      v301 = v1649;
                    }
                    v1583 = v301;
                    if ( v301 > 0x400000 )
                    {
                      v93 = -2147418113;
                      goto LABEL_463;
                    }
                    v1476 = (unsigned __int8 *)v254;
                    v302 = v299;
                    v303 = v301;
                    Srcd = v299;
                    v1398 = (SIZE_T)v178;
                    v304 = GetProcessHeap();
                    v305 = HeapAlloc(v304, 8u, v303);
                    Sizeb = v305;
                    v306 = v305;
                    if ( !v305 )
                    {
LABEL_361:
                      v93 = -805306345;
                      goto LABEL_463;
                    }
                    if ( !v302 )
                    {
                      v93 = -2147024809;
                      v1612 = v305;
LABEL_372:
                      v1599 = v1476;
                      v1610 = Srcd;
                      LODWORD(v1614) = v93;
                      goto LABEL_373;
                    }
                    v1764 = v1495;
                    v1765 = v1583;
                    v1763[0] = v302;
                    v1763[1] = v305;
                    v1766 = 0;
                    if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
                    {
                      v328 = GetProcAddress(phModule, "NtQuerySystemInformation");
                      if ( v328 )
                      {
                        v330 = ((__int64 (__fastcall *)(__int64, _QWORD *))v328)(134LL, v1763);
                        v308 = v1583;
                        v93 = v330 | 0x10000000;
                        LODWORD(v1614) = v330 | 0x10000000;
                        if ( v330 >= 0 )
                        {
                          v308 = v1765;
                          v331 = v306;
                          v332 = v1476;
                          v333 = v178;
                          v334 = Srcd;
                          v335 = v94;
                          v336 = v92;
                          v1583 = v1765;
LABEL_409:
                          v1495 = 0LL;
                          v1638 = 0;
                          v1699 = v331;
                          if ( v308 < 4 )
                          {
                            v94 = v335;
                            v92 = v336;
                            v178 = v333;
LABEL_411:
                            v1599 = v332;
LABEL_412:
                            v93 = -805306306;
                            v1612 = v331;
                            LODWORD(v1614) = -805306306;
                            v1610 = v334;
                            goto LABEL_373;
                          }
                          v1429 = *v331;
                          v337 = RtlULongLongAdd((unsigned __int64)v331, 4LL, (unsigned __int64 *)&v1699);
                          v338 = 0LL;
                          v1612 = v339;
                          v178 = v340;
                          v1599 = v332;
                          v1360 = v94;
                          v1377 = (SIZE_T)v92;
                          v1516 = v340;
                          v1610 = v341;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          v342 = RtlUIntAdd(0, 4, &v1638);
                          v343 = v1476;
                          v337 = v342;
                          v338 = 0LL;
                          v1612 = v331;
                          v1599 = v1476;
                          v1360 = v94;
                          v1377 = (SIZE_T)v92;
                          v332 = v1476;
                          v1516 = v344;
                          v1610 = v334;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          if ( v1583 - v1638 < v1429 )
                          {
LABEL_416:
                            v1599 = v343;
                            goto LABEL_412;
                          }
                          v1614 = v1699;
                          v1611 = v1429;
                          v332 = v1476;
                          v337 = RtlULongLongAdd((unsigned __int64)v1699, v1429, (unsigned __int64 *)&v1699);
                          v338 = 0LL;
                          v1612 = v345;
                          v1599 = v1476;
                          v1360 = v94;
                          v1377 = (SIZE_T)v92;
                          v1516 = v346;
                          v1610 = v347;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          v337 = RtlUIntAdd(v1638, v1429, &v1638);
                          v1612 = v331;
                          v338 = 0LL;
                          v1599 = v1476;
                          v1516 = v348;
                          v1360 = v94;
                          v1377 = (SIZE_T)v92;
                          v343 = v1476;
                          v1610 = v334;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          if ( v1583 - v1638 < 4 )
                            goto LABEL_416;
                          v1550 = *(_DWORD *)v1699;
                          v337 = RtlULongLongAdd((unsigned __int64)v1699, 4LL, (unsigned __int64 *)&v1699);
                          v1612 = v349;
                          v338 = 0LL;
                          v1599 = v1476;
                          v1360 = v94;
                          v1377 = (SIZE_T)v92;
                          v1516 = v350;
                          v1610 = v351;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          v337 = RtlUIntAdd(v1638, 4, &v1638);
                          v1612 = v331;
                          v338 = 0LL;
                          v1599 = v1476;
                          v1516 = v352;
                          v1360 = v94;
                          v1377 = (SIZE_T)v92;
                          v343 = v1476;
                          v1610 = v334;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          if ( v1583 - v1638 < v1550 )
                            goto LABEL_416;
                          v1577 = v1699;
                          v332 = v1476;
                          v337 = RtlULongLongAdd((unsigned __int64)v1699, v1550, (unsigned __int64 *)&v1699);
                          v338 = 0LL;
                          v1612 = v353;
                          v1599 = v1476;
                          v1360 = v94;
                          v1377 = (SIZE_T)v92;
                          v1516 = v354;
                          v1610 = v355;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          v337 = RtlUIntAdd(v1638, v1550, &v1638);
                          v1612 = v331;
                          v338 = 0LL;
                          v1599 = v1476;
                          v1516 = v356;
                          v1360 = v94;
                          v1377 = (SIZE_T)v92;
                          v343 = v1476;
                          v1610 = v334;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          if ( v1583 - v1638 < 4 )
                            goto LABEL_416;
                          v1505 = *(_DWORD *)v1699;
                          v337 = RtlULongLongAdd((unsigned __int64)v1699, 4LL, (unsigned __int64 *)&v1699);
                          v1612 = v357;
                          v338 = 0LL;
                          v1599 = v1476;
                          v1360 = v94;
                          v1377 = (SIZE_T)v92;
                          v1516 = v358;
                          v1610 = v359;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          v337 = RtlUIntAdd(v1638, 4, &v1638);
                          v1612 = v331;
                          v338 = 0LL;
                          v1599 = v1476;
                          v1516 = v360;
                          v1360 = v94;
                          v1377 = (SIZE_T)v92;
                          v343 = v1476;
                          v1610 = v334;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          if ( v1583 - v1638 < v1505 )
                            goto LABEL_416;
                          v337 = RtlUIntAdd(v1638, v1505, &v1638);
                          v338 = 0LL;
                          v1612 = v331;
                          v1599 = v1476;
                          v1360 = v94;
                          v332 = v1476;
                          v1377 = (SIZE_T)v92;
                          v1516 = v361;
                          v1610 = v334;
                          if ( v337 < 0 )
                            goto LABEL_459;
                          if ( v1583 != v1638 )
                          {
                            v1599 = v1476;
                            goto LABEL_412;
                          }
                          if ( v1505 + v1550 + v1429 + 12LL != v1583 )
                          {
                            v332 = v1476;
                            goto LABEL_411;
                          }
                          v362 = GetProcessHeap();
                          v363 = HeapAlloc(v362, 8u, 0x30uLL);
                          v1584 = v363;
                          if ( !v363 )
                          {
                            v93 = -805306345;
                            v178 = (unsigned __int8 *)v1398;
                            v1612 = Sizeb;
                            goto LABEL_372;
                          }
                          v337 = 0;
                          v178 = (unsigned __int8 *)v1398;
                          v332 = v1476;
                          v1612 = Sizeb;
                          v1610 = Srcd;
                          v1516 = (unsigned __int8 *)v1398;
                          v1377 = (SIZE_T)v92;
                          v1360 = v94;
                          v1599 = v1476;
                          if ( v1614 )
                          {
                            *(_DWORD *)v363 = v1429;
                            v364 = GetProcessHeap();
                            v365 = HeapAlloc(v364, 8u, v1611);
                            if ( !v365 )
                            {
                              v1612 = Sizeb;
                              v1610 = Srcd;
                              v1599 = v1476;
                              v1360 = v94;
                              v1377 = (SIZE_T)v92;
                              v1516 = (unsigned __int8 *)v1398;
LABEL_447:
                              v337 = -1073741801;
                              v370 = v1584;
                              v1486 = (void *)v1584[1];
                              if ( v1486 )
                              {
                                v371 = GetProcessHeap();
                                HeapFree(v371, 0, v1486);
                                v370 = v1584;
                                v1584[1] = 0LL;
                              }
                              v1487 = (void *)v370[3];
                              if ( v1487 )
                              {
                                v372 = GetProcessHeap();
                                HeapFree(v372, 0, v1487);
                                v370 = v1584;
                                v1584[3] = 0LL;
                              }
                              v1488 = (void *)v370[5];
                              if ( v1488 )
                              {
                                v373 = GetProcessHeap();
                                HeapFree(v373, 0, v1488);
                                v1584[5] = 0LL;
                              }
                              v374 = GetProcessHeap();
                              HeapFree(v374, 0, v1584);
                              v338 = 0LL;
                              goto LABEL_457;
                            }
                            v1584[1] = v365;
                            memcpy_0(v365, v1614, v1611);
                            v363 = v1584;
                          }
                          else
                          {
                            v1612 = Sizeb;
                            *(_DWORD *)v363 = 0;
                            v363[1] = 0LL;
                            v332 = v1476;
                            v1599 = v1476;
                            v1360 = v94;
                            v1377 = (SIZE_T)v92;
                            v1516 = (unsigned __int8 *)v1398;
                            v1610 = Srcd;
                          }
                          v1584 = v363;
                          if ( v1577 )
                          {
                            *((_DWORD *)v363 + 4) = v1550;
                            v366 = GetProcessHeap();
                            v367 = HeapAlloc(v366, 8u, v1550);
                            if ( !v367 )
                              goto LABEL_447;
                            v1584[3] = v367;
                            v337 = 0;
                            memcpy_0(v367, v1577, v1550);
                            v363 = v1584;
                            v1599 = v332;
                            v1360 = v94;
                            v1377 = (SIZE_T)v92;
                            v1516 = (unsigned __int8 *)v1398;
                          }
                          else
                          {
                            *((_DWORD *)v363 + 4) = 0;
                            v363[3] = 0LL;
                          }
                          if ( v1699 )
                          {
                            *((_DWORD *)v363 + 8) = v1505;
                            v368 = GetProcessHeap();
                            v369 = HeapAlloc(v368, 8u, v1505);
                            if ( !v369 )
                              goto LABEL_447;
                            v1584[5] = v369;
                            v337 = 0;
                            memcpy_0(v369, v1699, v1505);
                            v363 = v1584;
                            v1599 = v332;
                            v1360 = v94;
                            v1377 = (SIZE_T)v92;
                            v1516 = (unsigned __int8 *)v1398;
                          }
                          else
                          {
                            *((_DWORD *)v363 + 8) = 0;
                            v363[5] = 0LL;
                          }
                          v338 = (unsigned __int8 *)v363;
                          v1495 = (SIZE_T)v363;
LABEL_457:
                          v1489 = v1610;
                          v1442 = v1612;
                          v1611 = (SIZE_T)v92;
                          v375 = 0LL;
                          v1430 = v337;
                          if ( v337 < 0 )
                          {
                            v1537 = 0LL;
                            v1599 = v332;
                            v1360 = v94;
                            v1377 = (SIZE_T)v92;
                            v1516 = (unsigned __int8 *)v1398;
                            if ( v338 )
                            {
                              v376 = *(void **)(v1495 + 8);
                              if ( v376 )
                              {
                                v377 = GetProcessHeap();
                                HeapFree(v377, 0, v376);
                                *(_QWORD *)(v1495 + 8) = 0LL;
                              }
                              v378 = *(void **)(v1495 + 24);
                              if ( v378 )
                              {
                                v379 = GetProcessHeap();
                                HeapFree(v379, 0, v378);
                                *(_QWORD *)(v1495 + 24) = 0LL;
                              }
                              v380 = *(void **)(v1495 + 40);
                              if ( v380 )
                              {
                                v381 = GetProcessHeap();
                                HeapFree(v381, 0, v380);
                                *(_QWORD *)(v1495 + 40) = 0LL;
                              }
                              v382 = GetProcessHeap();
                              HeapFree(v382, 0, (LPVOID)v1495);
                              v375 = 0LL;
                              v337 = v1430;
                              v1612 = v1442;
                              v1537 = 0LL;
                              v92 = (void *)v1611;
                              v1610 = v1489;
                              v1599 = v332;
                              v1360 = v94;
                              v1377 = v1611;
                              v1516 = (unsigned __int8 *)v1398;
                            }
LABEL_460:
                            v93 = v337 | 0x10000000;
                            LODWORD(v1614) = v93;
                            if ( v93 < 0 )
                              goto LABEL_373;
                            if ( !v375 || (v1490 = *((_QWORD *)v375 + 1)) == 0 || !*(_DWORD *)v375 )
                            {
                              v93 = -805306355;
                              goto LABEL_463;
                            }
                            v383 = *(unsigned int *)v375 - 8LL;
                            v1578 = v383;
                            v384 = MemoryAlloc(v383);
                            v1611 = (SIZE_T)v384;
                            if ( !v384 )
                            {
LABEL_500:
                              lpModuleName = 0LL;
                              v93 = -805306367;
                              goto LABEL_463;
                            }
                            v385 = (unsigned __int8 *)v1490;
                            v386 = 0;
                            v387 = v1537;
                            v388 = v384;
                            v1818 = 0x7F1137FAB69605ELL;
                            v1443 = v383 & 7;
                            if ( (v383 & 7) != 0 )
                            {
                              v389 = 0;
                              v1431 = 0;
                              v1506 = 0;
                              v390 = 56;
                              v391 = 0;
                              v392 = (unsigned __int8 *)v1490;
                              do
                              {
                                v393 = *v392++;
                                if ( v389 >= 4 )
                                  v1431 |= v393 << v390;
                                else
                                  v391 |= v393 << (v390 - 32);
                                v390 -= 8;
                                v389 = v1506 + 1;
                                v1506 = v389;
                              }
                              while ( (int)v389 < (int)v1443 );
                              v394 = v391 ^ 0x92F65A5;
                              v1551 = v391;
                              v384 = (_DWORD *)v1611;
                              v386 = 0;
                              v395 = v394;
                              v396 = v1431 ^ 0x699A899C;
                              v1599 = v332;
                              v397 = 0;
                              v398 = (_BYTE *)v1611;
                              v1360 = v94;
                              v1377 = (SIZE_T)v92;
                              v1516 = v178;
                              do
                              {
                                v1399 = (SIZE_T)(v398 + 1);
                                if ( v397 >= 4 )
                                {
                                  v396 = __ROL4__(v396, 8);
                                  v399 = v396;
                                }
                                else
                                {
                                  v395 = __ROL4__(v395, 8);
                                  v399 = v395;
                                }
                                *v398 = v399;
                                ++v397;
                                ++v398;
                              }
                              while ( v397 < (int)v1443 );
                              v388 = (_DWORD *)v1399;
                              v387 = v1537;
                              if ( v1443 > 4 )
                              {
                                v388 = (_DWORD *)v1399;
                                v1507 = (v1431 ^ 0x699A899Cu) >> (8 * (8 - v1443)) << (8 * (8 - v1443));
LABEL_488:
                                v385 = v392;
                                goto LABEL_489;
                              }
                              v1507 = 0;
                              if ( v1443 >= 4 )
                                goto LABEL_488;
                              v385 = v392;
                              v394 = v394 >> (8 * (4 - v1443)) << (8 * (4 - v1443));
                              v388 = (_DWORD *)v1399;
                            }
                            else
                            {
                              v1431 = -1;
                              v394 = 0;
                              v1551 = 0;
                              v1507 = 0;
                            }
LABEL_489:
                            if ( v1578 >> 3 )
                            {
                              v400 = HIDWORD(v1818);
                              v401 = (char *)v388 + 7;
                              v402 = v1507;
                              v403 = v385 + 2;
                              v404 = v1551;
                              v405 = v1431;
                              v406 = v1578 >> 3;
                              v1585 = WORD2(v1818);
                              LODWORD(v1495) = WORD1(v1818);
                              do
                              {
                                v407 = *(v403 - 1) | (*(v403 - 2) << 8);
                                v408 = v403[2] << 8;
                                v409 = *v403;
                                v403 += 8;
                                v410 = *(v403 - 7) | ((v409 | (v407 << 8)) << 8);
                                v411 = v410 ^ v394;
                                v412 = *(v403 - 3) | ((*(v403 - 4) | ((*(v403 - 5) | v408) << 8)) << 8);
                                v413 = v400 ^ v411 ^ v412 ^ v402 ^ 0xAB69605E;
                                v414 = (__ROL4__(v413, 10) + v1585 * __ROL4__(v413 + 1419157410, 5)) ^ v411;
                                v415 = (WORD1(v1818) * __ROR4__(v414 + v400, 9) - __ROL4__(v414, 2)) ^ v413;
                                v416 = (24670 * (v415 - v1585) - (v415 >> 13)) ^ v414;
                                v417 = (HIWORD(v1818) * __ROL4__(v416 ^ WORD1(v1818), 6) - __ROL4__(v416, 2)) ^ v415;
                                v418 = (v400 - (v417 ^ 0xAB69605E)) ^ v416;
                                v419 = (v1495 * (v418 ^ v1585)) ^ __ROR4__(v418, 6) ^ v417;
                                v420 = (__ROL4__(v419, 2) + 24670 * __ROR4__(v419 + v400, 15)) ^ v418;
                                v421 = (HIWORD(v1818) * __ROR4__(v420 + 1419157410, 14) - __ROL4__(v420, 8)) ^ v419;
                                v422 = __ROR4__(v421, 10) ^ (v1585 * __ROR4__(v421 ^ 0xAB69605E, 12)) ^ v420;
                                v423 = (v422 >> 10) ^ (WORD1(v1818) * (v422 ^ HIWORD(v1818))) ^ v421;
                                v424 = (HIWORD(v1818) * (__ROR4__(~v423, 5) + 24670)) ^ v422;
                                v425 = v423 ^ (v424 - HIWORD(v1818)) ^ 0xAB69605E;
                                v426 = ((v425 >> 2) + v1585 * __ROL4__(HIWORD(v1818) ^ v425, 2)) ^ v424;
                                v427 = (__ROL4__(v426, 7) + WORD1(v1818) * __ROR4__(v426 - v400, 6)) ^ v425;
                                v428 = (24670 * (v1585 ^ v427) + __ROR4__(v427, 9)) ^ v426;
                                v429 = (__ROL4__(v428, 7) + HIWORD(v1818) * __ROL4__(WORD1(v1818) ^ v428, 5)) ^ v427;
                                v430 = v400 ^ v429 ^ v428 ^ 0xAB69605E;
                                v431 = (v1585 * (__ROR4__(v430, 3) - WORD1(v1818))) ^ v429;
                                v432 = (24670 * __ROR4__(v431 - v400, 1) - __ROR4__(v431, 6)) ^ v430;
                                v433 = (__ROL4__(v432, 14) + HIWORD(v1818) * __ROL4__(v432 - 1419157410, 3)) ^ v431;
                                v434 = (v1585 * __ROL4__(v433 - 1419157410, 15) - __ROR4__(v433, 14)) ^ v432;
                                v435 = (v434 >> 3) ^ (WORD1(v1818) * (v434 ^ 0x605E)) ^ v433;
                                v436 = v405 ^ v435;
                                v405 = v412;
                                v437 = v404 ^ __ROL4__(v435, 2) ^ (24670 * __ROL4__(v400 ^ v435, 4));
                                v404 = v410;
                                v438 = v437 ^ v434;
                                *(v401 - 4) = v438;
                                *v401 = v436;
                                v401 += 8;
                                v439 = __ROR4__(v438, 8);
                                *(v401 - 13) = v439;
                                v440 = __ROR4__(v436, 8);
                                *(v401 - 9) = v440;
                                v441 = __ROR4__(v439, 8);
                                *(v401 - 14) = v441;
                                v442 = __ROR4__(v440, 8);
                                *(v401 - 10) = v442;
                                v443 = __ROR4__(v441, 8);
                                v444 = __ROR4__(v442, 8);
                                *(v401 - 15) = v443;
                                *(v401 - 11) = v444;
                                v402 = __ROR4__(v444, 8);
                                v394 = __ROR4__(v443, 8);
                                --v406;
                              }
                              while ( v406 );
                              v386 = 0;
                              v92 = (void *)v1377;
                              v94 = v1360;
                              v178 = v1516;
                              v387 = v1537;
                              v384 = (_DWORD *)v1611;
                            }
                            for ( mm = 0LL; mm < v1578; ++mm )
                              v386 ^= *((_BYTE *)v384 + mm);
                            v446 = v387;
                            v447 = v1599;
                            v1611 = (SIZE_T)v1610;
                            v1459 = v1599;
                            v448 = v1612;
                            v1537 = v387;
                            if ( v386 != *(_QWORD *)(v1578 + v1490) )
                            {
                              MemoryFree(v384);
                              goto LABEL_500;
                            }
                            v1701 = v384;
                            v1639 = 0;
                            if ( (unsigned int)v1578 < 4 )
                            {
                              v1610 = (LPVOID)v1611;
LABEL_539:
                              v1599 = v447;
                              goto LABEL_540;
                            }
                            v1432 = *v384;
                            v449 = RtlULongLongAdd((unsigned __int64)v384, 4LL, (unsigned __int64 *)&v1701);
                            v1610 = (LPVOID)v1611;
                            lpModuleName = v450;
                            v1537 = v451;
                            v1612 = v448;
                            if ( v449 < 0 )
                              goto LABEL_542;
                            v449 = RtlUIntAdd(0, 4, &v1639);
                            lpModuleName = (WCHAR *)v384;
                            v1610 = (LPVOID)v1611;
                            v1537 = v446;
                            v1612 = v448;
                            v1599 = v452;
                            if ( v449 < 0 )
                              goto LABEL_542;
                            if ( (unsigned int)v1578 - v1639 < 4 )
                              goto LABEL_506;
                            v1552 = *(_DWORD *)v1701;
                            v449 = RtlULongLongAdd((unsigned __int64)v1701, 4LL, (unsigned __int64 *)&v1701);
                            lpModuleName = v453;
                            v1610 = (LPVOID)v1611;
                            v1537 = v454;
                            v1612 = v448;
                            v1599 = v455;
                            if ( v449 < 0 )
                              goto LABEL_542;
                            v449 = RtlUIntAdd(v1639, 4, &v1639);
                            lpModuleName = (WCHAR *)v384;
                            v1610 = (LPVOID)v1611;
                            v1537 = v446;
                            v1612 = v448;
                            v1599 = v452;
                            if ( v449 < 0 )
                              goto LABEL_542;
                            if ( (unsigned int)v1578 - v1639 < v1552 )
                            {
LABEL_506:
                              v1610 = (LPVOID)v1611;
                              v1612 = v448;
                              v1599 = v452;
LABEL_540:
                              v1537 = v446;
                              lpModuleName = (WCHAR *)v384;
LABEL_541:
                              v449 = -1073741762;
                              goto LABEL_542;
                            }
                            v449 = RtlUIntAdd(v1639, v1552, &v1639);
                            lpModuleName = (WCHAR *)v384;
                            v447 = v456;
                            v1610 = (LPVOID)v1611;
                            v1537 = v446;
                            v1612 = v448;
                            v1599 = v456;
                            if ( v449 >= 0 )
                            {
                              if ( (char *)v384 + (unsigned int)v1578 < (char *)v1701 + v1552
                                || (unsigned __int64)v384
                                 + (unsigned int)v1578
                                 - (unsigned __int64)v1552
                                 - (_QWORD)v1701 >= 8 )
                              {
                                v1610 = (LPVOID)v1611;
                                v1612 = v448;
                                goto LABEL_539;
                              }
                              v1610 = (LPVOID)v1611;
                              v449 = 0;
                              v1579 = 0LL;
                              v1508 = 0;
                              lpModuleName = (WCHAR *)v384;
                              v1537 = v446;
                              v1612 = v448;
                              v1599 = v456;
                              if ( !v1701 )
                              {
LABEL_529:
                                if ( v1552 )
                                {
                                  v467 = GetProcessHeap();
                                  v468 = v1552;
                                  v449 = 0;
                                  v1579 = HeapAlloc(v467, 8u, v1552);
                                  v469 = v1579;
                                  if ( !v1579 )
                                  {
                                    v449 = -1073741801;
                                    goto LABEL_542;
                                  }
                                }
                                else
                                {
                                  v468 = 0LL;
                                  v469 = 0LL;
                                }
                                if ( v1701 )
                                  memcpy_0(v469, v1701, v468);
                                v1749[1] = v1579;
                                LODWORD(v1749[0]) = v1508;
                                if ( v449 < 0 || v1432 == LODWORD(v1749[0]) )
                                  goto LABEL_542;
                                goto LABEL_541;
                              }
                              v1361 = v1701;
                              v449 = RtlULongLongAdd((unsigned __int64)v1701, v1552, (unsigned __int64 *)&v1702);
                              v1610 = (LPVOID)v1611;
                              lpModuleName = v458;
                              v1537 = v457;
                              v1612 = v448;
                              v1599 = v1459;
                              if ( v449 >= 0 )
                              {
                                v1610 = (LPVOID)v1611;
                                lpModuleName = v458;
                                v1537 = v457;
                                v1612 = v448;
                                v1599 = v1459;
                                if ( v1361 < v1702 )
                                {
                                  v459 = v458;
                                  lpModuleName = v458;
                                  v1537 = v457;
                                  v460 = v448;
                                  v1612 = v448;
                                  v1599 = v1459;
                                  v461 = (unsigned __int64)v1361;
                                  v1610 = (LPVOID)v1611;
                                  while ( 1 )
                                  {
                                    v1378 = v460;
                                    v1586 = v459;
                                    v449 = RtlULongLongAdd(v461, 4LL, (unsigned __int64 *)&v1703);
                                    if ( v449 < 0 )
                                      goto LABEL_542;
                                    if ( v1703 > v1702 )
                                      goto LABEL_526;
                                    v449 = RtlUIntAdd(4u, *v462, &v1640);
                                    if ( v449 < 0 )
                                      goto LABEL_542;
                                    v463 = RtlULongLongAdd((unsigned __int64)v1361, v1640, (unsigned __int64 *)&v1704);
                                    lpModuleName = v466;
                                    v449 = v463;
                                    v460 = v1378;
                                    v1599 = v1459;
                                    v1612 = v1378;
                                    v1537 = v465;
                                    v1610 = v464;
                                    if ( v463 < 0 )
                                      goto LABEL_542;
                                    v461 = (unsigned __int64)v1704;
                                    v1361 = v1704;
                                    v1537 = v465;
                                    v1612 = v1378;
                                    v1610 = v464;
                                    if ( v1704 > v1702 )
                                    {
                                      v449 = -1073741811;
                                      lpModuleName = v1586;
                                      v1599 = v1459;
                                      goto LABEL_542;
                                    }
                                    ++v1508;
                                    lpModuleName = v1586;
                                    v1599 = v1459;
                                    if ( v1704 >= v1702 )
                                    {
                                      lpModuleName = v1586;
                                      v1612 = v1378;
                                      v1537 = v465;
                                      v1599 = v1459;
                                      v1610 = v464;
                                      goto LABEL_528;
                                    }
                                    v459 = v1586;
                                  }
                                }
                                v461 = (unsigned __int64)v1361;
LABEL_528:
                                if ( (void *)v461 == v1702 )
                                  goto LABEL_529;
LABEL_526:
                                v449 = -1073741811;
                              }
                            }
LABEL_542:
                            v93 = v449 | 0x10000000;
                            goto LABEL_463;
                          }
                          v1537 = v338;
LABEL_459:
                          v375 = v338;
                          goto LABEL_460;
                        }
                      }
                      else
                      {
                        v329 = GetLastError();
                        v93 = v329;
                        if ( v329 > 0 )
                          v93 = (unsigned __int16)v329 | 0x80070000;
                        v308 = v1583;
                        if ( v93 >= 0 )
                          v93 = -2147467259;
                        LODWORD(v1614) = v93;
                      }
                    }
                    else
                    {
                      v307 = GetLastError();
                      v93 = v307;
                      if ( v307 > 0 )
                        v93 = (unsigned __int16)v307 | 0x80070000;
                      v308 = v1583;
                      if ( v93 >= 0 )
                        v93 = -2147467259;
                      LODWORD(v1614) = v93;
                    }
                    v1612 = v306;
                    if ( v93 == -805306333 )
                    {
                      v93 = -2147024774;
                      goto LABEL_372;
                    }
                    v336 = v92;
                    v331 = v306;
                    v332 = v1476;
                    v335 = v94;
                    v334 = Srcd;
                    v1599 = v1476;
                    v333 = v178;
                    v1610 = Srcd;
                    if ( v93 < 0 )
                      goto LABEL_373;
                    goto LABEL_409;
                  }
                }
              }
            }
LABEL_373:
            if ( !v178 )
            {
LABEL_375:
              v310 = 0LL;
              if ( v1599 )
              {
                v311 = (void *)*((_QWORD *)v1599 + 1);
                if ( v311 )
                {
                  v312 = GetProcessHeap();
                  HeapFree(v312, 0, v311);
                  *((_QWORD *)v1599 + 1) = 0LL;
                }
                v313 = (void *)*((_QWORD *)v1599 + 3);
                if ( v313 )
                {
                  v314 = GetProcessHeap();
                  HeapFree(v314, 0, v313);
                  *((_QWORD *)v1599 + 3) = 0LL;
                }
                v310 = (void *)*((_QWORD *)v1599 + 5);
                if ( v310 )
                {
                  v315 = GetProcessHeap();
                  HeapFree(v315, 0, v310);
                  v310 = 0LL;
                  *((_QWORD *)v1599 + 5) = 0LL;
                }
                v316 = GetProcessHeap();
                HeapFree(v316, 0, v1599);
              }
              v317 = v1610;
              if ( v1610 )
              {
                v318 = GetProcessHeap();
                HeapFree(v318, 0, v317);
              }
              v319 = v1612;
              if ( v1612 )
              {
                v320 = GetProcessHeap();
                HeapFree(v320, 0, v319);
              }
              if ( v1537 )
              {
                v321 = (void *)*((_QWORD *)v1537 + 1);
                if ( v321 )
                {
                  v322 = GetProcessHeap();
                  HeapFree(v322, 0, v321);
                  *((_QWORD *)v1537 + 1) = 0LL;
                }
                v323 = (void *)*((_QWORD *)v1537 + 3);
                if ( v323 )
                {
                  v324 = GetProcessHeap();
                  HeapFree(v324, 0, v323);
                  *((_QWORD *)v1537 + 3) = 0LL;
                }
                v310 = (void *)*((_QWORD *)v1537 + 5);
                if ( v310 )
                {
                  v325 = GetProcessHeap();
                  HeapFree(v325, 0, v310);
                  v310 = 0LL;
                  *((_QWORD *)v1537 + 5) = 0LL;
                }
                v326 = GetProcessHeap();
                HeapFree(v326, 0, v1537);
              }
              if ( lpModuleName )
              {
                v327 = GetProcessHeap();
                HeapFree(v327, 0, lpModuleName);
              }
              v97 = v1609;
              if ( v93 >= 0 )
              {
                if ( !LODWORD(v1749[0]) )
                {
                  v93 = -1073425151;
                  goto LABEL_127;
                }
                if ( v1749[1] == v310 )
                {
                  v93 = -1073741811;
                  goto LABEL_127;
                }
                v470 = v1749[1];
                v1705 = v1749[1];
                LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v1749[1], 4LL, (unsigned __int64 *)&v1705);
                v93 = (int)v1614;
                if ( (int)v1614 >= 0 )
                {
                  v473 = v1705;
                  if ( !*v470 )
                    v473 = 0LL;
                  v1705 = v473;
                  if ( *v470 != (_DWORD)v472 )
                  {
                    v93 = -1073741789;
                    goto LABEL_127;
                  }
                  v93 = *v473;
                  LODWORD(v1614) = v93;
                  if ( v93 == -805306333 )
                  {
                    v1433 = -2147024774;
                    goto LABEL_553;
                  }
                  v1433 = v93;
                  if ( v93 == -2147024774 || (v1433 = v93, v93 >= 0) )
                  {
LABEL_553:
                    if ( LODWORD(v1749[0]) == 6 )
                    {
                      if ( v1749[1] )
                      {
                        v474 = (int *)v1749[1];
                        v475 = 0;
                        v1706 = (int *)v1749[1];
                        while ( 1 )
                        {
                          LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v474, v472, (unsigned __int64 *)&v1706);
                          v93 = (int)v1614;
                          if ( (int)v1614 < 0 )
                            goto LABEL_556;
                          LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v1706, v476, (unsigned __int64 *)&v1706);
                          v93 = (int)v1614;
                          if ( (int)v1614 < 0 )
                            goto LABEL_556;
                          v474 = v1706;
                          if ( ++v475 )
                          {
                            v477 = *v1706;
                            LODWORD(v1614) = RtlULongLongAdd((unsigned __int64)v1706, v472, (unsigned __int64 *)&v1706);
                            v93 = (int)v1614;
                            if ( (int)v1614 < 0 )
                              goto LABEL_556;
                            v479 = v1706;
                            if ( !v477 )
                              v479 = 0LL;
                            v1706 = v479;
                            if ( v477 != 8 )
                            {
LABEL_570:
                              v93 = -1073741789;
                              goto LABEL_555;
                            }
                            v1491 = *(_QWORD *)v479;
                            if ( v1749[1] )
                            {
                              v480 = (int *)v1749[1];
                              v481 = 0;
                              v1707 = (int *)v1749[1];
                              while ( 1 )
                              {
                                LODWORD(v1614) = RtlULongLongAdd(
                                                   (unsigned __int64)v480,
                                                   v478,
                                                   (unsigned __int64 *)&v1707);
                                v93 = (int)v1614;
                                if ( (int)v1614 < 0 )
                                  goto LABEL_556;
                                LODWORD(v1614) = RtlULongLongAdd(
                                                   (unsigned __int64)v1707,
                                                   v482,
                                                   (unsigned __int64 *)&v1707);
                                v93 = (int)v1614;
                                if ( (int)v1614 < 0 )
                                  goto LABEL_556;
                                v480 = v1707;
                                if ( (unsigned int)++v481 >= 2 )
                                {
                                  v483 = *v1707;
                                  LODWORD(v1614) = RtlULongLongAdd(
                                                     (unsigned __int64)v1707,
                                                     v478,
                                                     (unsigned __int64 *)&v1707);
                                  v93 = (int)v1614;
                                  if ( (int)v1614 < 0 )
                                    goto LABEL_556;
                                  v485 = v1707;
                                  if ( !v483 )
                                    v485 = 0LL;
                                  v1707 = v485;
                                  if ( v483 != (_DWORD)v484 )
                                    goto LABEL_570;
                                  v1553 = *v485;
                                  if ( !v1749[1] )
                                    goto LABEL_561;
                                  v486 = (int *)v1749[1];
                                  v487 = 0;
                                  v1708 = (int *)v1749[1];
                                  while ( 1 )
                                  {
                                    LODWORD(v1614) = RtlULongLongAdd(
                                                       (unsigned __int64)v486,
                                                       v484,
                                                       (unsigned __int64 *)&v1708);
                                    v93 = (int)v1614;
                                    if ( (int)v1614 < 0 )
                                      goto LABEL_556;
                                    LODWORD(v1614) = RtlULongLongAdd(
                                                       (unsigned __int64)v1708,
                                                       v488,
                                                       (unsigned __int64 *)&v1708);
                                    v93 = (int)v1614;
                                    if ( (int)v1614 < 0 )
                                      goto LABEL_556;
                                    v486 = v1708;
                                    if ( (unsigned int)++v487 >= 3 )
                                    {
                                      v489 = *v1708;
                                      v1509 = *v1708;
                                      LODWORD(v1614) = RtlULongLongAdd(
                                                         (unsigned __int64)v1708,
                                                         v484,
                                                         (unsigned __int64 *)&v1708);
                                      v93 = (int)v1614;
                                      if ( (int)v1614 < 0 )
                                        goto LABEL_556;
                                      v490 = v1708;
                                      if ( !v489 )
                                        v490 = 0LL;
                                      v1708 = v490;
                                      if ( v1749[1] )
                                      {
                                        v491 = (int *)v1749[1];
                                        v492 = 0;
                                        v1709 = (int *)v1749[1];
                                        while ( 1 )
                                        {
                                          LODWORD(v1614) = RtlULongLongAdd(
                                                             (unsigned __int64)v491,
                                                             4LL,
                                                             (unsigned __int64 *)&v1709);
                                          v93 = (int)v1614;
                                          if ( (int)v1614 < 0 )
                                            goto LABEL_556;
                                          LODWORD(v1614) = RtlULongLongAdd(
                                                             (unsigned __int64)v1709,
                                                             v493,
                                                             (unsigned __int64 *)&v1709);
                                          v93 = (int)v1614;
                                          if ( (int)v1614 < 0 )
                                            goto LABEL_556;
                                          v491 = v1709;
                                          if ( (unsigned int)++v492 >= 4 )
                                          {
                                            v494 = *v1709;
                                            LODWORD(v1614) = RtlULongLongAdd(
                                                               (unsigned __int64)v1709,
                                                               4LL,
                                                               (unsigned __int64 *)&v1709);
                                            v93 = (int)v1614;
                                            if ( (int)v1614 < 0 )
                                              goto LABEL_556;
                                            v495 = v1709;
                                            if ( !v494 )
                                              v495 = 0LL;
                                            v1709 = v495;
                                            if ( v494 == 4 )
                                            {
                                              v1587 = *v495;
                                              if ( !v1749[1] )
                                                goto LABEL_561;
                                              v496 = v1749[1];
                                              v497 = 0;
                                              v1710 = v1749[1];
                                              do
                                              {
                                                LODWORD(v1495) = *v496;
                                                v93 = RtlULongLongAdd(
                                                        (unsigned __int64)v496,
                                                        4LL,
                                                        (unsigned __int64 *)&v1710);
                                                LODWORD(v1614) = v93;
                                                if ( v93 < 0
                                                  || (v93 = RtlULongLongAdd(
                                                              (unsigned __int64)v1710,
                                                              (unsigned int)v1495,
                                                              (unsigned __int64 *)&v1710),
                                                      LODWORD(v1614) = v93,
                                                      v93 < 0) )
                                                {
                                                  v97 = v498;
                                                  goto LABEL_99;
                                                }
                                                v496 = v1710;
                                                ++v497;
                                              }
                                              while ( v497 < 5 );
                                              v499 = *v1710;
                                              v500 = RtlULongLongAdd(
                                                       (unsigned __int64)v1710,
                                                       4LL,
                                                       (unsigned __int64 *)&v1710);
                                              LODWORD(v1614) = v500;
                                              v93 = v500;
                                              if ( v500 < 0 )
                                              {
                                                LODWORD(v1614) = v500;
                                                goto LABEL_556;
                                              }
                                              v502 = v1710;
                                              if ( !v499 )
                                                v502 = 0LL;
                                              v1710 = v502;
                                              if ( v499 == 4 )
                                              {
                                                v97 = *v502;
                                                if ( v1524 != v1491 )
                                                  goto LABEL_554;
                                                v1645 = v1553;
                                                if ( v1587 > 4 || v1509 > 4 )
                                                {
                                                  v93 = -2147024774;
                                                  goto LABEL_127;
                                                }
                                                memcpy_0(v1643, v501, v1509);
                                                if ( v1433 )
                                                {
                                                  v93 = v1433;
                                                  LODWORD(v1614) = v1433;
                                                }
                                                goto LABEL_99;
                                              }
                                            }
                                            goto LABEL_570;
                                          }
                                        }
                                      }
                                      goto LABEL_561;
                                    }
                                  }
                                }
                              }
                            }
                            break;
                          }
                        }
                      }
LABEL_561:
                      v93 = -1073741811;
                    }
                    else
                    {
LABEL_554:
                      v93 = -1073425151;
                    }
LABEL_555:
                    LODWORD(v1614) = v93;
LABEL_556:
                    v97 = v471;
                    goto LABEL_99;
                  }
                }
              }
              goto LABEL_99;
            }
LABEL_374:
            v309 = GetProcessHeap();
            HeapFree(v309, 0, v178);
            goto LABEL_375;
          }
          *(_DWORD *)v252 = v1394;
          v1475 = v177;
          v255 = GetProcessHeap();
          v256 = HeapAlloc(v255, 8u, v1394);
          if ( v256 )
          {
            v252[1] = v256;
            v1514 = v252;
            memcpy_0(v256, Src, v1394);
            *((_DWORD *)v252 + 4) = 160;
            v257 = GetProcessHeap();
            v258 = HeapAlloc(v257, 8u, 0xA0uLL);
            if ( !v258 )
            {
LABEL_296:
              v253 = -1073741801;
              v261 = v1514;
              v1395 = (void *)v1514[1];
              if ( v1395 )
              {
                v262 = GetProcessHeap();
                HeapFree(v262, 0, v1395);
                v261 = v1514;
                v1514[1] = 0LL;
              }
              v1396 = (void *)v261[3];
              if ( v1396 )
              {
                v263 = GetProcessHeap();
                HeapFree(v263, 0, v1396);
                v261 = v1514;
                v1514[3] = 0LL;
              }
              v1397 = (void *)v261[5];
              if ( v1397 )
              {
                v264 = GetProcessHeap();
                HeapFree(v264, 0, v1397);
                v1514[5] = 0LL;
              }
              v265 = GetProcessHeap();
              HeapFree(v265, 0, v1514);
              v254 = 0LL;
              goto LABEL_303;
            }
            v252[3] = v258;
            v1475 = v177;
            *v258 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
            v258[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
            v258[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
            v258[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
            v258[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
            v258[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
            v258[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
            v258[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
            v258[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
            v258[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
            *((_DWORD *)v252 + 8) = 8;
            v259 = GetProcessHeap();
            v260 = HeapAlloc(v259, 8u, 8uLL);
            if ( v260 )
            {
              v252[5] = v260;
              v253 = 0;
              *(_QWORD *)v1514[5] = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
              v254 = (unsigned int *)v1514;
              v1441 = 0LL;
              goto LABEL_303;
            }
            v1514 = v252;
          }
          v1475 = v177;
          goto LABEL_296;
        }
        if ( Size )
          goto LABEL_160;
LABEL_138:
        v93 = -1073741811;
        goto LABEL_97;
      }
    }
    v97 = v90;
    if ( v93 < 0 )
      goto LABEL_99;
    goto LABEL_156;
  }
  v93 = -2147024882;
LABEL_1577:
  v1347 = v1619;
LABEL_1578:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1348 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v1348 == 1 )
    {
      v1349 = 4LL;
      v1350 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      do
      {
        if ( *v1350 )
          FreeLibrary(*v1350);
        v1350 += 3;
        --v1349;
      }
      while ( v1349 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1608);
  if ( v93 >= 0 )
  {
    if ( v1347 == 4 )
    {
      v1351 = *v1700;
      goto LABEL_1599;
    }
    goto LABEL_1594;
  }
  if ( v93 != -805306316 )
  {
    if ( v93 == -805306139 || v93 == -1073425151 )
    {
      v1615 = -1073418201;
      goto LABEL_1596;
    }
    if ( v93 == -805306306 )
    {
      v1615 = -1073418200;
      goto LABEL_1596;
    }
    v1615 = v93;
    if ( v93 != -2147024774 )
      goto LABEL_1596;
LABEL_1594:
    v1351 = v1644;
    v1352 = -1073418210;
    goto LABEL_1600;
  }
  v1615 = -1073418222;
LABEL_1596:
  v1351 = v1644;
LABEL_1599:
  v1352 = v1615;
LABEL_1600:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset((void **)&v1700);
  v1615 = v1352;
  if ( v1352 >= 0 )
    return v1351 == 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x36,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\AIAssistanceUserEligibilityCheck.h",
    (const char *)(unsigned int)v1352);
  AIAssistanceTelemetry::PolicyCheckError<unsigned short const (&)[28],unsigned short const (&)[50],long &>(
    v1354,
    v1353,
    &v1615);
  return 0;
}
