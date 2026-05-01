/*
 * XREFs of ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800458AC
 * Callers:
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x180045880 (-HampSystemCdplIsManaged@@YAKXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800070B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180040978 (-MemoryFree@@YAXPEAX@Z.c)
 *     RtlULongLongAdd @ 0x18004818C (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1800481B0 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1800481D0 (StringCchLengthW.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18004CD14 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x18004D59C (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x18004D7DC (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     wcscmp_0 @ 0x180050246 (wcscmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800502A0 (_alloca_probe.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x18009D994 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x18009D9C4 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

__int64 __fastcall CdplIsSupportedInl(int *a1)
{
  __int64 v2; // r15
  int v3; // edi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // r13
  WCHAR *v8; // rsi
  char *v9; // rax
  __int64 v10; // r14
  _BYTE *v11; // r12
  int v12; // eax
  unsigned __int8 *v13; // rsi
  int v14; // ebx
  int v15; // r11d
  int v16; // r13d
  int v17; // r10d
  int v18; // r9d
  int v19; // ecx
  int v20; // r10d
  int v21; // r11d
  int v22; // r9d
  unsigned int v23; // r8d
  int v24; // r11d
  unsigned int v25; // r8d
  int v26; // r11d
  int v27; // r8d
  unsigned int v28; // r11d
  int v29; // r8d
  int v30; // r11d
  int v31; // r8d
  unsigned int v32; // r11d
  int v33; // edx
  int v34; // r11d
  unsigned int v35; // ebx
  int v36; // r11d
  int v37; // ebx
  int v38; // r11d
  int v39; // ebx
  unsigned int v40; // r11d
  int v41; // ebx
  int v42; // r11d
  int v43; // ebx
  unsigned int v44; // r11d
  int v45; // ebx
  int v46; // edx
  int v47; // ecx
  int v48; // ebx
  int v49; // edx
  int v50; // r11d
  int v51; // r11d
  int v52; // ebx
  int v53; // r11d
  int v54; // ebx
  int v55; // r11d
  int v56; // ebx
  unsigned __int64 v57; // rcx
  char v58; // al
  int v59; // r14d
  WCHAR *v60; // rdi
  unsigned int v61; // r13d
  const WCHAR *v62; // rdx
  __int64 v63; // rax
  WCHAR *v64; // rdi
  char *v65; // rbx
  __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  unsigned int v68; // eax
  unsigned int v69; // r12d
  const CHAR *v70; // rdx
  __int64 v71; // rax
  __int64 (__fastcall *v72)(); // rcx
  HANDLE ProcessHeap; // rax
  HMODULE *v74; // rdi
  __int64 v75; // rbx
  int v76; // esi
  signed int v77; // edi
  __int64 v78; // r14
  __int64 v79; // r9
  wchar_t *i; // rbx
  wchar_t *v81; // r8
  signed int LastError; // eax
  signed int v83; // eax
  __int64 (__fastcall *v84)(); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v86; // r14
  __int64 v87; // r9
  wchar_t *j; // rbx
  wchar_t *v89; // r8
  signed int v90; // eax
  HANDLE CurrentProcess; // rax
  int v92; // ebx
  _BYTE *v93; // rdi
  int v94; // r12d
  int v95; // esi
  int v96; // eax
  HMODULE *v97; // rdi
  __int64 v98; // rbx
  HANDLE v99; // rax
  _OWORD *v100; // rax
  _OWORD *v101; // r13
  HANDLE v102; // rax
  WCHAR *v103; // rax
  __int64 v104; // rcx
  int v105; // eax
  __int64 v106; // r11
  int v107; // edi
  int v108; // eax
  int v109; // r10d
  int v110; // eax
  int v111; // r10d
  int v112; // eax
  size_t v113; // rdx
  const wchar_t *v114; // rcx
  int v115; // r10d
  void *v116; // rbx
  HANDLE v117; // rax
  void *v118; // rbx
  HANDLE v119; // rax
  HANDLE v120; // rax
  HANDLE v121; // rax
  DWORD ModuleFileNameW; // eax
  int v123; // eax
  int v124; // r10d
  int v125; // eax
  int v126; // r10d
  int v127; // eax
  int v128; // r10d
  unsigned int v129; // edi
  HANDLE v130; // rax
  _DWORD *v131; // rax
  _DWORD *v132; // rdi
  _DWORD *v133; // rax
  int v134; // r10d
  int v135; // eax
  int v136; // r10d
  int v137; // eax
  int v138; // r10d
  int v139; // eax
  size_t v140; // rdx
  const wchar_t *v141; // rcx
  int v142; // r10d
  unsigned int v143; // r10d
  __int64 v144; // r11
  int v145; // eax
  _OWORD *v146; // rax
  unsigned int *v147; // rdi
  int v148; // r9d
  unsigned int v149; // r10d
  _QWORD *v150; // rax
  unsigned int *v151; // rdi
  int v152; // r9d
  unsigned int v153; // r10d
  const wchar_t **v154; // rax
  unsigned int *v155; // rdi
  int v156; // r9d
  unsigned int v157; // r10d
  _DWORD *v158; // rdi
  __int64 v159; // rcx
  int v160; // r11d
  __int64 v161; // r9
  void *v162; // rcx
  int v163; // eax
  __int64 v164; // r11
  int v165; // r10d
  unsigned int v166; // r11d
  int *v167; // rax
  unsigned int *v168; // rdi
  int v169; // r9d
  unsigned int v170; // r10d
  unsigned int *v171; // rdi
  int v172; // r9d
  unsigned int v173; // r10d
  unsigned int *v174; // rax
  __int64 v175; // rcx
  unsigned int v176; // edi
  unsigned int v177; // r11d
  unsigned int v178; // r11d
  unsigned int v179; // r11d
  unsigned int v180; // r11d
  WCHAR *v181; // r13
  unsigned int v182; // edi
  _DWORD *v183; // rbx
  int v184; // r12d
  unsigned int v185; // eax
  unsigned int v186; // edi
  HANDLE v187; // rax
  _DWORD *v188; // rdi
  unsigned int v189; // r9d
  void *v190; // rcx
  HANDLE v191; // rax
  unsigned __int64 v192; // r12
  unsigned __int8 v193; // al
  unsigned __int64 k; // rcx
  _BYTE *v195; // rcx
  int v196; // r10d
  WCHAR *v197; // rdi
  unsigned int v198; // r9d
  unsigned int v199; // edx
  unsigned int v200; // ecx
  int v201; // r10d
  char v202; // r11
  int v203; // r8d
  _BYTE *v204; // rsi
  unsigned int v205; // r10d
  unsigned int v206; // r8d
  unsigned int v207; // r11d
  unsigned int v208; // ecx
  char v209; // bl
  unsigned __int64 v210; // r11
  _BYTE *v211; // r13
  int v212; // r12d
  int v213; // r14d
  int v214; // ebx
  unsigned __int8 *v215; // rax
  int v216; // r8d
  int v217; // edi
  int v218; // ecx
  int v219; // r8d
  int v220; // edi
  int v221; // r10d
  int v222; // r9d
  int v223; // r10d
  int v224; // r9d
  int v225; // r10d
  unsigned int v226; // r9d
  int v227; // r10d
  int v228; // r9d
  int v229; // r10d
  int v230; // r9d
  int v231; // r10d
  int v232; // r9d
  unsigned int v233; // r10d
  unsigned int v234; // r9d
  int v235; // r10d
  int v236; // r9d
  int v237; // r10d
  int v238; // r9d
  int v239; // r10d
  int v240; // r9d
  int v241; // r10d
  int v242; // r9d
  unsigned int v243; // r10d
  int v244; // ecx
  int v245; // r9d
  int v246; // r9d
  unsigned int v247; // r10d
  int v248; // r10d
  int v249; // r9d
  int v250; // r10d
  int v251; // r9d
  int v252; // r10d
  unsigned int v253; // r12d
  HANDLE v254; // rax
  _DWORD *v255; // rax
  _DWORD *v256; // rdi
  int v257; // r12d
  HANDLE v258; // rax
  void *v259; // rax
  HANDLE v260; // rax
  _OWORD *v261; // rax
  HANDLE v262; // rax
  _QWORD *v263; // rax
  HANDLE v264; // rax
  HANDLE v265; // rax
  HANDLE v266; // rax
  HANDLE v267; // rax
  HANDLE v268; // rax
  __int64 v269; // rdx
  unsigned int v270; // r10d
  int v271; // r12d
  unsigned int v272; // r10d
  unsigned int v273; // edi
  HANDLE v274; // rax
  _DWORD *v275; // rax
  void *v276; // rdi
  void *v277; // rcx
  void *v278; // rcx
  HANDLE v279; // rax
  int v280; // eax
  unsigned int v281; // ecx
  int v282; // r10d
  unsigned int v283; // eax
  unsigned int v284; // r9d
  int v285; // r11d
  HANDLE v286; // rax
  void *v287; // rdi
  HANDLE v288; // rax
  void *v289; // rdi
  HANDLE v290; // rax
  void *v291; // rdi
  HANDLE v292; // rax
  HANDLE v293; // rax
  HANDLE v294; // rax
  void *v295; // rdi
  HANDLE v296; // rax
  _QWORD *v297; // rdi
  void *v298; // rbx
  HANDLE v299; // rax
  void *v300; // rbx
  HANDLE v301; // rax
  void *v302; // rbx
  HANDLE v303; // rax
  HANDLE v304; // rax
  void *v305; // rdi
  HANDLE v306; // rax
  LPVOID v307; // rcx
  unsigned int v308; // r11d
  int v309; // r9d
  unsigned int v310; // r10d
  unsigned int v311; // r11d
  unsigned int v312; // r11d
  unsigned int v313; // r11d
  unsigned int v314; // r9d
  unsigned int v315; // eax
  int v316; // r12d
  unsigned int v317; // edi
  HANDLE v318; // rax
  LPVOID v319; // rax
  SIZE_T v320; // rdi
  SIZE_T v321; // rbx
  signed int v322; // eax
  unsigned int v323; // ecx
  FARPROC ProcAddress; // rax
  signed int v325; // eax
  int v326; // eax
  _DWORD *v327; // r9
  _DWORD *v328; // rax
  void *v329; // r10
  WCHAR *v330; // r11
  int v331; // r12d
  void *v332; // r10
  SIZE_T v333; // rdi
  SIZE_T v334; // r9
  WCHAR *v335; // r11
  int v336; // eax
  const WCHAR *v337; // r11
  int v338; // eax
  SIZE_T v339; // r9
  void *v340; // r10
  const WCHAR *v341; // r11
  int v342; // eax
  const WCHAR *v343; // r11
  int v344; // eax
  SIZE_T v345; // r9
  void *v346; // r10
  const WCHAR *v347; // r11
  int v348; // eax
  const WCHAR *v349; // r11
  int v350; // eax
  SIZE_T v351; // r9
  void *v352; // r10
  const WCHAR *v353; // r11
  int v354; // eax
  const WCHAR *v355; // r11
  int v356; // eax
  SIZE_T v357; // r9
  void *v358; // r10
  const WCHAR *v359; // r11
  int v360; // eax
  const WCHAR *v361; // r11
  int v362; // eax
  HANDLE v363; // rax
  _QWORD *v364; // rax
  _QWORD *v365; // rdi
  HANDLE v366; // rax
  void *v367; // rax
  HANDLE v368; // rax
  void *v369; // rax
  HANDLE v370; // rax
  void *v371; // rax
  _QWORD *v372; // rax
  HANDLE v373; // rax
  HANDLE v374; // rax
  HANDLE v375; // rax
  HANDLE v376; // rax
  unsigned int *v377; // r10
  unsigned __int64 v378; // r12
  _DWORD *v379; // r9
  char *v380; // rdx
  unsigned __int8 v381; // al
  _DWORD *v382; // rcx
  unsigned int v383; // r12d
  unsigned int v384; // ecx
  char v385; // r11
  int v386; // eax
  unsigned __int8 *v387; // r14
  int v388; // r9d
  int v389; // r10d
  unsigned int v390; // r10d
  int v391; // r11d
  unsigned int v392; // r11d
  unsigned int v393; // edx
  unsigned int v394; // ecx
  unsigned int v395; // esi
  _BYTE *v396; // rdi
  char v397; // r8
  unsigned int v398; // r11d
  SIZE_T v399; // r12
  _BYTE *v400; // rbx
  int v401; // esi
  unsigned __int8 *v402; // r13
  char *v403; // r9
  int v404; // r12d
  unsigned int v405; // r15d
  int v406; // eax
  int v407; // r8d
  int v408; // edi
  int v409; // ecx
  int v410; // r8d
  int v411; // r10d
  int v412; // edi
  unsigned int v413; // r11d
  int v414; // r10d
  unsigned int v415; // r11d
  int v416; // r10d
  int v417; // r11d
  unsigned int v418; // r10d
  int v419; // r11d
  int v420; // r10d
  int v421; // r11d
  unsigned int v422; // r10d
  int v423; // r11d
  int v424; // r10d
  unsigned int v425; // r11d
  int v426; // r10d
  int v427; // r11d
  int v428; // r10d
  int v429; // r11d
  int v430; // r10d
  int v431; // r11d
  int v432; // r10d
  int v433; // r11d
  unsigned int v434; // r10d
  int v435; // r11d
  int v436; // edx
  int v437; // ecx
  int v438; // r11d
  int v439; // edx
  int v440; // r10d
  int v441; // r10d
  int v442; // r11d
  int v443; // r10d
  int v444; // r11d
  int v445; // r10d
  int v446; // r11d
  SIZE_T m; // rcx
  void *v448; // r10
  SIZE_T v449; // r11
  void *v450; // rdi
  void *v451; // r9
  void *v452; // r10
  SIZE_T v453; // r11
  int v454; // eax
  _DWORD *v455; // rcx
  void *v456; // r9
  void *v457; // r10
  SIZE_T v458; // r11
  int v459; // eax
  void *v460; // r9
  void *v461; // r10
  SIZE_T v462; // r11
  void *v463; // rdx
  LPCWSTR v464; // r11
  unsigned int *v465; // r11
  __int64 v466; // r11
  SIZE_T v467; // r9
  void *v468; // r10
  const WCHAR *v469; // rax
  HANDLE v470; // rax
  size_t v471; // rdi
  void *v472; // rcx
  _DWORD *v473; // rbx
  int v474; // r9d
  _DWORD *v475; // rax
  int v476; // ebx
  unsigned int v477; // edi
  int v478; // edi
  _QWORD *v479; // rax
  int *v480; // rcx
  int v481; // edi
  unsigned int v482; // r10d
  int v483; // edi
  int *v484; // rax
  LPVOID v485; // rcx
  int v486; // edi
  unsigned int v487; // r10d
  int v488; // r9d
  int v489; // r11d
  void *v490; // r10
  unsigned int *v491; // rcx
  unsigned int v492; // edi
  unsigned int v493; // r13d
  int v494; // r9d
  unsigned int v495; // edi
  unsigned int *v496; // rax
  unsigned int *v497; // rcx
  int v498; // edi
  unsigned int v499; // eax
  unsigned int v500; // r13d
  unsigned int v501; // edi
  int v502; // eax
  const void *v503; // r10
  size_t v504; // r11
  unsigned int *v505; // rax
  __int64 v506; // rax
  unsigned int v507; // edi
  int v508; // eax
  void *v509; // r13
  char *v510; // rax
  _BYTE *v511; // r14
  __int64 v512; // r13
  int v513; // eax
  unsigned __int8 *v514; // rdi
  int v515; // esi
  int v516; // ebx
  int v517; // r15d
  int v518; // r11d
  int v519; // r10d
  int v520; // ecx
  int v521; // r11d
  int v522; // ebx
  int v523; // r10d
  unsigned int v524; // r9d
  int v525; // ebx
  unsigned int v526; // r9d
  int v527; // ebx
  int v528; // r9d
  unsigned int v529; // ebx
  int v530; // r9d
  int v531; // ebx
  int v532; // r9d
  unsigned int v533; // ebx
  int v534; // edx
  int v535; // ebx
  unsigned int v536; // esi
  int v537; // ebx
  int v538; // esi
  int v539; // ebx
  int v540; // esi
  unsigned int v541; // ebx
  int v542; // esi
  int v543; // ebx
  int v544; // esi
  unsigned int v545; // ebx
  int v546; // esi
  int v547; // edx
  int v548; // ecx
  int v549; // esi
  int v550; // edx
  int v551; // ebx
  int v552; // ebx
  int v553; // esi
  int v554; // ebx
  int v555; // esi
  int v556; // ebx
  int v557; // esi
  char v558; // al
  unsigned __int64 v559; // rcx
  HANDLE v560; // rax
  HMODULE *v561; // rbx
  __int64 v562; // r13
  const WCHAR *v563; // rbx
  const WCHAR *v564; // rdx
  __int64 v565; // rax
  const WCHAR *v566; // rbx
  HMODULE *v567; // r8
  int v568; // ecx
  __int64 v569; // rdx
  unsigned __int64 v570; // rdx
  unsigned int v571; // eax
  unsigned int v572; // edx
  const CHAR *v573; // r9
  __int64 v574; // rax
  __int64 (__fastcall *v575)(); // rcx
  int v576; // eax
  WCHAR *v577; // r13
  char *v578; // rax
  _BYTE *v579; // rsi
  __int64 v580; // r13
  int v581; // eax
  unsigned __int8 *v582; // rdi
  int v583; // r14d
  int v584; // ebx
  int v585; // r15d
  int v586; // r11d
  int v587; // r10d
  int v588; // ecx
  int v589; // r11d
  int v590; // ebx
  int v591; // r10d
  unsigned int v592; // r9d
  int v593; // ebx
  unsigned int v594; // r9d
  int v595; // ebx
  int v596; // r9d
  unsigned int v597; // ebx
  int v598; // r9d
  int v599; // ebx
  int v600; // r9d
  unsigned int v601; // ebx
  int v602; // edx
  int v603; // ebx
  unsigned int v604; // r14d
  int v605; // ebx
  int v606; // r14d
  int v607; // ebx
  int v608; // r14d
  unsigned int v609; // ebx
  int v610; // r14d
  int v611; // ebx
  int v612; // r14d
  unsigned int v613; // ebx
  int v614; // r14d
  int v615; // edx
  int v616; // ecx
  int v617; // r14d
  int v618; // edx
  int v619; // ebx
  int v620; // ebx
  int v621; // r14d
  int v622; // ebx
  int v623; // r14d
  int v624; // ebx
  int v625; // r14d
  char v626; // al
  unsigned __int64 v627; // rcx
  HANDLE v628; // rax
  HMODULE *v629; // rbx
  __int64 v630; // r13
  WCHAR *v631; // rbx
  const WCHAR *v632; // rdx
  __int64 v633; // rax
  WCHAR *v634; // rbx
  HMODULE *v635; // r8
  int v636; // ecx
  __int64 v637; // rdx
  unsigned __int64 v638; // rdx
  int v639; // eax
  unsigned int v640; // edx
  const CHAR *v641; // r9
  __int64 v642; // rax
  __int64 (__fastcall *v643)(); // rcx
  signed int v644; // eax
  signed int v645; // r13d
  _DWORD *v646; // rdi
  char *v647; // rbx
  signed int v648; // eax
  _DWORD *v649; // rax
  _DWORD *v650; // rdi
  unsigned int mm; // esi
  __int64 v652; // rax
  unsigned int v653; // r10d
  unsigned int v654; // r9d
  __int64 v655; // r8
  unsigned int v656; // ecx
  unsigned int *v657; // rdx
  __int64 v658; // rdi
  const wchar_t *v659; // rcx
  __int64 v660; // r8
  const wchar_t **v661; // rdx
  __int64 v662; // rax
  char *v663; // rbx
  char *v664; // rax
  _BYTE *v665; // r13
  int v666; // ebx
  unsigned __int8 *v667; // r14
  int v668; // r10d
  int v669; // r11d
  int v670; // r15d
  __int64 v671; // rsi
  int v672; // r9d
  int v673; // r8d
  int v674; // eax
  int v675; // r9d
  int v676; // r10d
  int v677; // r8d
  unsigned int v678; // edi
  int v679; // r10d
  unsigned int v680; // edi
  int v681; // r10d
  int v682; // edi
  unsigned int v683; // r10d
  int v684; // edi
  int v685; // r10d
  int v686; // edi
  unsigned int v687; // r10d
  int v688; // edi
  int v689; // r10d
  unsigned int v690; // ebx
  int v691; // r10d
  int v692; // ebx
  int v693; // r10d
  int v694; // ebx
  unsigned int v695; // r10d
  int v696; // ebx
  int v697; // r10d
  int v698; // ebx
  unsigned int v699; // r10d
  int v700; // ebx
  int v701; // ecx
  int v702; // eax
  int v703; // ebx
  int v704; // ecx
  int v705; // r10d
  int v706; // r10d
  int v707; // ebx
  int v708; // r10d
  int v709; // ebx
  int v710; // r10d
  int v711; // ebx
  char *v712; // r11
  unsigned __int64 v713; // rax
  __m128i v714; // xmm1
  __m128i v715; // xmm0
  __m128i v716; // xmm0
  __m128i v717; // xmm1
  __m128i v718; // xmm1
  __m128i v719; // xmm1
  _QWORD *v720; // rdx
  __int64 v721; // rdi
  unsigned int nn; // ecx
  __int64 v723; // rax
  void **v724; // rdi
  void **v725; // rbx
  __int16 *v726; // rcx
  void **v727; // rdx
  unsigned int v728; // r8d
  __int16 v729; // r9
  _WORD *v730; // rcx
  __int64 v731; // rax
  void *v732; // rcx
  __int64 v733; // rax
  int v734; // eax
  void *v735; // rcx
  __int64 v736; // rax
  signed int v737; // eax
  signed int v738; // eax
  __int64 v739; // rax
  _WORD *v740; // rdi
  __int64 v741; // rcx
  unsigned __int64 v742; // rcx
  void *v743; // rcx
  signed int v744; // eax
  int v745; // r13d
  int v746; // eax
  unsigned int v747; // edi
  int v748; // eax
  __int64 v749; // rax
  signed int v750; // eax
  signed int v751; // eax
  unsigned __int16 *v752; // rax
  __int64 v753; // rbx
  int v754; // eax
  __int64 v755; // rax
  signed int v756; // eax
  int v757; // ebx
  unsigned int v758; // edx
  int v759; // ecx
  int v760; // eax
  void *v761; // rdi
  int v762; // ebx
  void *v763; // rdi
  int v764; // r13d
  __int64 v765; // rdi
  int v766; // eax
  __int64 v767; // rax
  signed int v768; // eax
  void *v769; // rdi
  __int64 v770; // rbx
  int v771; // eax
  __int64 v772; // rdx
  int v773; // edx
  int v774; // r13d
  int v775; // ebx
  int v776; // edi
  __int64 v777; // rax
  int v778; // edx
  int v779; // ecx
  __int64 v780; // rax
  int v781; // ebx
  int v782; // eax
  __int64 v783; // rbx
  HMODULE *v784; // rdi
  unsigned int v785; // edi
  __int64 v786; // rax
  int v787; // edi
  int v788; // eax
  void *v789; // rdi
  __int64 v790; // rax
  SIZE_T v791; // r13
  signed int v792; // ebx
  signed int v793; // eax
  bool v794; // zf
  char *v795; // rcx
  __int64 v796; // rax
  __int64 (__fastcall *v797)(); // rdi
  __int64 v798; // rax
  int v799; // r8d
  int v800; // edx
  int v801; // r9d
  int v802; // edi
  int v803; // ecx
  int v804; // r11d
  const WCHAR *v805; // rdx
  unsigned __int16 *v806; // rax
  __int64 v807; // rbx
  signed __int64 v808; // r10
  unsigned __int8 *v809; // r9
  int ii; // edi
  int v811; // r8d
  int v812; // edi
  int v813; // edx
  int v814; // edi
  int v815; // edx
  void *v816; // rdi
  __int64 v817; // rax
  SIZE_T v818; // r13
  signed int v819; // ebx
  signed int v820; // eax
  char *v821; // rcx
  __int64 v822; // rax
  __int64 (__fastcall *v823)(); // rdi
  __int64 v824; // rax
  int v825; // eax
  int v826; // r9d
  int v827; // edi
  int v828; // edx
  int v829; // r8d
  int v830; // ecx
  int v831; // r11d
  int v832; // esi
  const WCHAR *v833; // rdi
  unsigned __int16 *v834; // rax
  unsigned __int8 *v835; // r9
  signed __int64 v836; // r10
  int jj; // r8d
  int v838; // r8d
  int v839; // ecx
  int v840; // edi
  int v841; // edx
  int v842; // ecx
  int v843; // edi
  int v844; // edx
  int v845; // edi
  int v846; // ecx
  SIZE_T v847; // r13
  void *v848; // rbx
  char v849; // al
  int v850; // edi
  unsigned int v851; // r13d
  int v852; // ebx
  int v853; // ecx
  int v854; // edi
  __int64 v855; // rax
  void *v856; // rbx
  __int64 v857; // rax
  signed int v858; // ebx
  int v859; // edi
  const WCHAR *v860; // rax
  signed int v861; // eax
  int v862; // eax
  void *v863; // rcx
  void *v864; // rax
  __int64 (__fastcall *v865)(); // rdi
  __int64 v866; // rax
  LPVOID v867; // rdi
  int v868; // r10d
  int v869; // r9d
  int v870; // r8d
  int v871; // ecx
  int v872; // edx
  int v873; // r11d
  int v874; // esi
  unsigned __int8 *v875; // rdx
  char *v876; // rax
  LPVOID v877; // rbx
  __int64 v878; // r10
  unsigned __int8 *v879; // r9
  int v880; // edi
  int v881; // r8d
  int v882; // edi
  int v883; // edx
  int v884; // edi
  int v885; // edx
  void *v886; // rdi
  __int64 v887; // rax
  signed int v888; // ebx
  int v889; // edi
  void *v890; // rax
  signed int v891; // eax
  int v892; // eax
  void *v893; // rcx
  LPVOID v894; // rdi
  void *v895; // rax
  __int64 (__fastcall *v896)(); // rdi
  __int64 v897; // rax
  LPVOID v898; // rdi
  int v899; // eax
  int v900; // r10d
  int v901; // r9d
  int v902; // r8d
  int v903; // ecx
  int v904; // edx
  int v905; // r11d
  __int64 v906; // rdi
  int v907; // r8d
  const WCHAR *v908; // rdx
  char *v909; // rax
  LPVOID v910; // rsi
  signed __int64 v911; // r10
  unsigned __int8 *v912; // r9
  int v913; // edi
  int v914; // r8d
  int v915; // edi
  int v916; // edx
  int v917; // edi
  int v918; // edx
  __int64 v919; // r9
  __int64 v920; // rcx
  __int64 v921; // rcx
  __int64 v922; // rcx
  int v923; // eax
  HMODULE *v924; // rdi
  __int64 v925; // rbx
  int v926; // eax
  WCHAR *v927; // r13
  const WCHAR *v928; // rax
  _BYTE *v929; // rsi
  int v930; // r14d
  unsigned __int8 *v931; // rax
  int v932; // ebx
  int v933; // r11d
  int v934; // r13d
  int v935; // r10d
  int v936; // r9d
  int v937; // ecx
  int v938; // r10d
  int v939; // r11d
  int v940; // r9d
  unsigned int v941; // r8d
  int v942; // r11d
  unsigned int v943; // r8d
  int v944; // r11d
  int v945; // r8d
  unsigned int v946; // r11d
  int v947; // r8d
  int v948; // r11d
  int v949; // r8d
  unsigned int v950; // r11d
  int v951; // r8d
  int v952; // r11d
  unsigned int v953; // ebx
  int v954; // r11d
  int v955; // ebx
  int v956; // r11d
  int v957; // ebx
  unsigned int v958; // r11d
  int v959; // ebx
  int v960; // r11d
  int v961; // ebx
  unsigned int v962; // r11d
  int v963; // ebx
  int v964; // edx
  int v965; // ecx
  int v966; // ebx
  int v967; // edx
  int v968; // r11d
  int v969; // r11d
  int v970; // ebx
  int v971; // r11d
  int v972; // ebx
  int v973; // r11d
  int v974; // ebx
  char v975; // al
  unsigned __int64 v976; // rcx
  LPCWSTR v977; // rdx
  HANDLE v978; // rax
  HMODULE *v979; // rdi
  __int64 v980; // rbx
  HMODULE *v981; // rdi
  const WCHAR *v982; // rdi
  const WCHAR *v983; // rdx
  __int64 v984; // rax
  const WCHAR *v985; // rdi
  char *v986; // rbx
  int v987; // ecx
  __int64 v988; // rdx
  unsigned __int64 v989; // rdx
  unsigned int v990; // eax
  unsigned int v991; // edx
  const CHAR *v992; // r8
  __int64 v993; // rax
  __int64 (__fastcall *v994)(); // rcx
  __int64 v995; // rbx
  int v996; // eax
  WCHAR *v997; // r13
  HANDLE v998; // rax
  _OWORD *v999; // rax
  _OWORD *v1000; // rbx
  HANDLE v1001; // rax
  WCHAR *v1002; // rax
  unsigned int v1003; // r11d
  int v1004; // eax
  unsigned int v1005; // r11d
  int v1006; // r9d
  int v1007; // eax
  unsigned int v1008; // r11d
  int v1009; // r9d
  int v1010; // eax
  int v1011; // r9d
  unsigned int v1012; // edi
  HANDLE v1013; // rax
  _DWORD *v1014; // rax
  _DWORD *v1015; // rdi
  __int64 v1016; // r11
  _DWORD *v1017; // rax
  int v1018; // r10d
  __int64 v1019; // r11
  _DWORD *v1020; // rdi
  int v1021; // r9d
  unsigned int v1022; // r10d
  _OWORD *v1023; // rax
  unsigned int v1024; // edi
  __int64 v1025; // r11
  unsigned int *v1026; // r9
  __int64 v1027; // r9
  int v1028; // r10d
  _DWORD *v1029; // r9
  _QWORD *v1030; // rax
  unsigned int v1031; // edi
  unsigned int v1032; // r11d
  unsigned int *v1033; // r9
  __int64 v1034; // r9
  int v1035; // r10d
  _DWORD *v1036; // r9
  _QWORD *v1037; // rax
  __int64 v1038; // rcx
  unsigned int v1039; // edi
  unsigned __int8 *v1040; // r13
  const void **v1041; // rbx
  int v1042; // edi
  unsigned int v1043; // r9d
  unsigned int v1044; // eax
  unsigned int v1045; // edi
  HANDLE v1046; // rax
  _DWORD *v1047; // rax
  unsigned int v1048; // r10d
  void *v1049; // rcx
  __int64 v1050; // r9
  HANDLE v1051; // rax
  int v1052; // edi
  unsigned __int64 v1053; // rdi
  unsigned __int8 v1054; // al
  unsigned __int64 v1055; // rcx
  _BYTE *v1056; // rcx
  int v1057; // r9d
  SIZE_T v1058; // r11
  unsigned __int8 *v1059; // rdi
  unsigned int v1060; // r10d
  int v1061; // edx
  int v1062; // ecx
  int v1063; // r9d
  char v1064; // si
  int v1065; // r8d
  _BYTE *v1066; // r14
  unsigned int v1067; // r9d
  unsigned int v1068; // ecx
  unsigned int v1069; // r8d
  char v1070; // r11
  SIZE_T v1071; // rdx
  _BYTE *v1072; // r15
  int v1073; // r11d
  unsigned __int8 *v1074; // r13
  int v1075; // r12d
  SIZE_T v1076; // r14
  int v1077; // eax
  int v1078; // r8d
  int v1079; // edi
  int v1080; // ecx
  int v1081; // r8d
  int v1082; // edi
  int v1083; // r9d
  int v1084; // edx
  int v1085; // r9d
  int v1086; // r10d
  int v1087; // r9d
  unsigned int v1088; // r10d
  int v1089; // r9d
  int v1090; // r10d
  int v1091; // r9d
  int v1092; // r10d
  int v1093; // r9d
  int v1094; // r10d
  unsigned int v1095; // r9d
  unsigned int v1096; // r10d
  int v1097; // r9d
  int v1098; // r10d
  int v1099; // r9d
  int v1100; // r10d
  int v1101; // r9d
  int v1102; // r10d
  int v1103; // r9d
  int v1104; // r10d
  unsigned int v1105; // r9d
  int v1106; // r10d
  unsigned int v1107; // r9d
  int v1108; // r10d
  int v1109; // r9d
  int v1110; // r10d
  int v1111; // r9d
  int v1112; // r10d
  int v1113; // r9d
  int v1114; // r10d
  int v1115; // r9d
  HANDLE v1116; // rax
  _QWORD *v1117; // rsi
  int v1118; // edi
  HANDLE v1119; // rax
  void *v1120; // rax
  HANDLE v1121; // rax
  _OWORD *v1122; // rax
  HANDLE v1123; // rax
  _QWORD *v1124; // rax
  HANDLE v1125; // rax
  HANDLE v1126; // rax
  HANDLE v1127; // rax
  HANDLE v1128; // rax
  HANDLE v1129; // rax
  __int64 v1130; // rdx
  int v1131; // edi
  unsigned int v1132; // r11d
  unsigned int v1133; // r11d
  unsigned int v1134; // edi
  HANDLE v1135; // rax
  _DWORD *v1136; // rax
  void *v1137; // rsi
  void *v1138; // rcx
  void *v1139; // rcx
  int v1140; // esi
  HANDLE v1141; // rax
  int v1142; // eax
  unsigned int v1143; // ecx
  void *v1144; // r9
  int v1145; // r11d
  unsigned int v1146; // eax
  HANDLE v1147; // rax
  void *v1148; // rsi
  HANDLE v1149; // rax
  void *v1150; // rsi
  HANDLE v1151; // rax
  void *v1152; // rsi
  HANDLE v1153; // rax
  HANDLE v1154; // rax
  void *v1155; // rbx
  HANDLE v1156; // rax
  void *v1157; // rbx
  HANDLE v1158; // rax
  _QWORD *v1159; // rbx
  void *v1160; // rsi
  HANDLE v1161; // rax
  void *v1162; // rsi
  HANDLE v1163; // rax
  void *v1164; // rsi
  HANDLE v1165; // rax
  HANDLE v1166; // rax
  HANDLE v1167; // rax
  unsigned int v1168; // r10d
  void *v1169; // r9
  unsigned int *v1170; // rcx
  unsigned int v1171; // esi
  int v1172; // r10d
  unsigned int v1173; // r11d
  unsigned int v1174; // r10d
  unsigned int v1175; // eax
  unsigned int v1176; // edi
  HANDLE v1177; // rax
  _BYTE *v1178; // rax
  _DWORD *v1179; // rsi
  signed int v1180; // eax
  unsigned int v1181; // ecx
  FARPROC v1182; // rax
  signed int v1183; // eax
  int v1184; // eax
  _DWORD *v1185; // r9
  const void **v1186; // rax
  void *v1187; // r10
  unsigned __int8 *v1188; // r11
  int v1189; // edi
  void *v1190; // r10
  void *v1191; // rsi
  void *v1192; // r9
  unsigned __int8 *v1193; // r11
  int v1194; // eax
  unsigned __int8 *v1195; // r11
  int v1196; // eax
  void *v1197; // r9
  void *v1198; // r10
  unsigned __int8 *v1199; // r11
  int v1200; // eax
  unsigned __int8 *v1201; // r11
  int v1202; // eax
  void *v1203; // r9
  void *v1204; // r10
  unsigned __int8 *v1205; // r11
  int v1206; // eax
  unsigned __int8 *v1207; // r11
  int v1208; // eax
  void *v1209; // r9
  void *v1210; // r10
  unsigned __int8 *v1211; // r11
  int v1212; // eax
  unsigned __int8 *v1213; // r11
  int v1214; // eax
  void *v1215; // r9
  void *v1216; // r10
  unsigned __int8 *v1217; // r11
  int v1218; // eax
  unsigned __int8 *v1219; // r11
  int v1220; // eax
  HANDLE v1221; // rax
  WCHAR *v1222; // rax
  WCHAR *v1223; // rdi
  HANDLE v1224; // rax
  size_t v1225; // r13
  void *v1226; // rax
  const void *v1227; // r13
  HANDLE v1228; // rax
  void *v1229; // rax
  HANDLE v1230; // rax
  void *v1231; // rax
  WCHAR *v1232; // rax
  HANDLE v1233; // rax
  HANDLE v1234; // rax
  HANDLE v1235; // rax
  HANDLE v1236; // rax
  unsigned int *v1237; // r10
  unsigned __int64 v1238; // rdi
  _DWORD *v1239; // r11
  unsigned __int8 *v1240; // rdx
  unsigned __int8 v1241; // al
  int v1242; // r10d
  unsigned int v1243; // r9d
  int v1244; // r11d
  char v1245; // r15
  unsigned __int8 *v1246; // r14
  int v1247; // r8d
  int v1248; // ecx
  int v1249; // r8d
  unsigned int v1250; // r8d
  int v1251; // edi
  int v1252; // ecx
  unsigned int v1253; // eax
  _BYTE *v1254; // rdx
  char v1255; // si
  _BYTE *v1256; // rcx
  SIZE_T v1257; // rdi
  _BYTE *v1258; // rbx
  int v1259; // esi
  unsigned __int8 *v1260; // r13
  int v1261; // r11d
  unsigned int v1262; // r12d
  unsigned int v1263; // eax
  int v1264; // r9d
  int v1265; // r8d
  int v1266; // ecx
  int v1267; // r9d
  int v1268; // r10d
  int v1269; // r8d
  int v1270; // edi
  int v1271; // r10d
  unsigned int v1272; // edi
  int v1273; // r10d
  int v1274; // edi
  unsigned int v1275; // r10d
  int v1276; // edi
  int v1277; // r10d
  int v1278; // edi
  unsigned int v1279; // r10d
  int v1280; // edi
  int v1281; // r10d
  unsigned int v1282; // eax
  int v1283; // r10d
  int v1284; // eax
  int v1285; // r10d
  int v1286; // eax
  unsigned int v1287; // r10d
  int v1288; // eax
  int v1289; // r10d
  int v1290; // eax
  unsigned int v1291; // r10d
  int v1292; // ecx
  int v1293; // eax
  int v1294; // edx
  int v1295; // r10d
  int v1296; // r10d
  int v1297; // eax
  int v1298; // r10d
  int v1299; // eax
  int v1300; // r10d
  int v1301; // eax
  SIZE_T n; // rcx
  void *v1303; // r9
  void *v1304; // r10
  int v1305; // eax
  void *v1306; // r11
  int v1307; // edi
  void *v1308; // r9
  void *v1309; // r10
  int v1310; // eax
  int v1311; // eax
  void *v1312; // r11
  void *v1313; // r9
  void *v1314; // r10
  int v1315; // eax
  int v1316; // eax
  void *v1317; // rcx
  void *v1318; // r9
  void *v1319; // r10
  void *v1320; // r11
  _BYTE *v1321; // rcx
  void *v1322; // r14
  unsigned int *v1323; // rcx
  unsigned __int64 v1324; // r11
  void *v1325; // r9
  void *v1326; // r10
  _BYTE *v1327; // r11
  HANDLE v1328; // rax
  size_t v1329; // rsi
  void *v1330; // rdi
  HANDLE v1331; // rax
  void *v1332; // rdi
  HANDLE v1333; // rax
  void *v1334; // rdi
  HANDLE v1335; // rax
  HANDLE v1336; // rax
  unsigned int v1337; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v1338; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1339; // [rsp+60h] [rbp-A0h]
  unsigned int v1340; // [rsp+64h] [rbp-9Ch]
  int v1341; // [rsp+64h] [rbp-9Ch]
  unsigned int v1342; // [rsp+64h] [rbp-9Ch]
  int v1343; // [rsp+64h] [rbp-9Ch]
  unsigned int v1344; // [rsp+64h] [rbp-9Ch]
  unsigned int v1345; // [rsp+64h] [rbp-9Ch]
  int v1346; // [rsp+64h] [rbp-9Ch]
  unsigned int v1347; // [rsp+64h] [rbp-9Ch]
  unsigned int v1348; // [rsp+64h] [rbp-9Ch]
  int v1349; // [rsp+64h] [rbp-9Ch]
  int v1350; // [rsp+64h] [rbp-9Ch]
  _BYTE *Src; // [rsp+68h] [rbp-98h]
  WCHAR *Srca; // [rsp+68h] [rbp-98h]
  _DWORD *Srcb; // [rsp+68h] [rbp-98h]
  _BYTE *Srcc; // [rsp+68h] [rbp-98h]
  char *Srcd; // [rsp+68h] [rbp-98h]
  char *Srce; // [rsp+68h] [rbp-98h]
  void *Srcf; // [rsp+68h] [rbp-98h]
  void *Srcg; // [rsp+68h] [rbp-98h]
  void *Srch; // [rsp+68h] [rbp-98h]
  void *Srci; // [rsp+68h] [rbp-98h]
  void *Srcj; // [rsp+68h] [rbp-98h]
  void *Srck; // [rsp+68h] [rbp-98h]
  void *Srcl; // [rsp+68h] [rbp-98h]
  char *Srcm; // [rsp+68h] [rbp-98h]
  void *Srcn; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v1366; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1367; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1368; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1369; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1370; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1371; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v1372; // [rsp+70h] [rbp-90h]
  int v1373; // [rsp+70h] [rbp-90h]
  int v1374; // [rsp+70h] [rbp-90h]
  int v1375; // [rsp+70h] [rbp-90h]
  int v1376; // [rsp+70h] [rbp-90h]
  int v1377; // [rsp+70h] [rbp-90h]
  unsigned int v1378; // [rsp+70h] [rbp-90h]
  int v1379; // [rsp+70h] [rbp-90h]
  int v1380; // [rsp+70h] [rbp-90h]
  int v1381; // [rsp+70h] [rbp-90h]
  unsigned int v1382; // [rsp+70h] [rbp-90h]
  int v1383; // [rsp+70h] [rbp-90h]
  unsigned int v1384; // [rsp+70h] [rbp-90h]
  unsigned int v1385; // [rsp+70h] [rbp-90h]
  unsigned int i2; // [rsp+78h] [rbp-88h]
  int v1387; // [rsp+78h] [rbp-88h]
  int v1388; // [rsp+78h] [rbp-88h]
  unsigned int v1389; // [rsp+78h] [rbp-88h]
  int v1390; // [rsp+78h] [rbp-88h]
  int v1391; // [rsp+78h] [rbp-88h]
  int v1392; // [rsp+78h] [rbp-88h]
  int v1393; // [rsp+78h] [rbp-88h]
  int v1394; // [rsp+78h] [rbp-88h]
  int v1395; // [rsp+78h] [rbp-88h]
  WCHAR *lpModuleName; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNamea; // [rsp+80h] [rbp-80h]
  char *lpModuleNameb; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamec; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamed; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamee; // [rsp+80h] [rbp-80h]
  LPCWSTR lpModuleNamef; // [rsp+80h] [rbp-80h]
  int lpModuleNameg; // [rsp+80h] [rbp-80h]
  int lpModuleNameh; // [rsp+80h] [rbp-80h]
  int lpModuleNamei; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamej; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamek; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamel; // [rsp+80h] [rbp-80h]
  WCHAR *lpModuleNamem; // [rsp+80h] [rbp-80h]
  int lpModuleNamen; // [rsp+80h] [rbp-80h]
  int lpModuleNameo; // [rsp+80h] [rbp-80h]
  LPCWSTR v1412; // [rsp+88h] [rbp-78h]
  LPCWSTR v1413; // [rsp+88h] [rbp-78h]
  LPCWSTR v1414; // [rsp+88h] [rbp-78h]
  LPCWSTR v1415; // [rsp+88h] [rbp-78h]
  WCHAR *v1416; // [rsp+88h] [rbp-78h]
  WCHAR *v1417; // [rsp+88h] [rbp-78h]
  LPCWSTR v1418; // [rsp+88h] [rbp-78h]
  LPCWSTR v1419; // [rsp+88h] [rbp-78h]
  LPCWSTR v1420; // [rsp+88h] [rbp-78h]
  int v1421; // [rsp+88h] [rbp-78h]
  int v1422; // [rsp+88h] [rbp-78h]
  unsigned int v1423; // [rsp+88h] [rbp-78h]
  int v1424; // [rsp+88h] [rbp-78h]
  unsigned int v1425; // [rsp+88h] [rbp-78h]
  int v1426; // [rsp+88h] [rbp-78h]
  WCHAR *v1427; // [rsp+88h] [rbp-78h]
  unsigned int v1428; // [rsp+90h] [rbp-70h]
  unsigned int v1429; // [rsp+90h] [rbp-70h]
  int v1430; // [rsp+90h] [rbp-70h]
  void *v1431; // [rsp+90h] [rbp-70h]
  unsigned int v1432; // [rsp+90h] [rbp-70h]
  int v1433; // [rsp+90h] [rbp-70h]
  unsigned int v1434; // [rsp+90h] [rbp-70h]
  int v1435; // [rsp+90h] [rbp-70h]
  unsigned int v1436; // [rsp+90h] [rbp-70h]
  int v1437; // [rsp+90h] [rbp-70h]
  int v1438; // [rsp+90h] [rbp-70h]
  int v1439; // [rsp+90h] [rbp-70h]
  int v1440; // [rsp+90h] [rbp-70h]
  SIZE_T v1441; // [rsp+90h] [rbp-70h]
  LPVOID v1442; // [rsp+98h] [rbp-68h]
  unsigned __int64 v1443; // [rsp+98h] [rbp-68h]
  void *v1444; // [rsp+98h] [rbp-68h]
  void *v1445; // [rsp+98h] [rbp-68h]
  void *v1446; // [rsp+98h] [rbp-68h]
  _DWORD *v1447; // [rsp+98h] [rbp-68h]
  _DWORD *v1448; // [rsp+98h] [rbp-68h]
  unsigned int v1449; // [rsp+98h] [rbp-68h]
  unsigned int v1450; // [rsp+98h] [rbp-68h]
  unsigned int v1451; // [rsp+98h] [rbp-68h]
  int v1452; // [rsp+A0h] [rbp-60h]
  int v1453; // [rsp+A0h] [rbp-60h]
  unsigned int v1454; // [rsp+A0h] [rbp-60h]
  unsigned int v1455; // [rsp+A0h] [rbp-60h]
  int v1456; // [rsp+A0h] [rbp-60h]
  int v1457; // [rsp+A0h] [rbp-60h]
  SIZE_T v1458; // [rsp+A8h] [rbp-58h]
  void *v1459; // [rsp+A8h] [rbp-58h]
  SIZE_T v1460; // [rsp+A8h] [rbp-58h]
  SIZE_T v1461; // [rsp+A8h] [rbp-58h]
  SIZE_T v1462; // [rsp+A8h] [rbp-58h]
  void *v1463; // [rsp+A8h] [rbp-58h]
  void *v1464; // [rsp+A8h] [rbp-58h]
  void *v1465; // [rsp+A8h] [rbp-58h]
  SIZE_T v1466; // [rsp+A8h] [rbp-58h]
  void *v1467; // [rsp+A8h] [rbp-58h]
  void *v1468; // [rsp+A8h] [rbp-58h]
  void *v1469; // [rsp+A8h] [rbp-58h]
  SIZE_T v1470; // [rsp+A8h] [rbp-58h]
  const wchar_t *v1471; // [rsp+B0h] [rbp-50h]
  _DWORD *v1472; // [rsp+B0h] [rbp-50h]
  char *v1473; // [rsp+B0h] [rbp-50h]
  void **v1474; // [rsp+B0h] [rbp-50h]
  char *v1475; // [rsp+B0h] [rbp-50h]
  char *v1476; // [rsp+B0h] [rbp-50h]
  __int64 v1477; // [rsp+B0h] [rbp-50h]
  int v1478; // [rsp+B0h] [rbp-50h]
  int v1479; // [rsp+B0h] [rbp-50h]
  unsigned int v1480; // [rsp+B0h] [rbp-50h]
  int v1481; // [rsp+B0h] [rbp-50h]
  const void *v1482; // [rsp+B0h] [rbp-50h]
  int v1483; // [rsp+B8h] [rbp-48h]
  int v1484; // [rsp+B8h] [rbp-48h]
  const void *v1485; // [rsp+B8h] [rbp-48h]
  unsigned int v1486; // [rsp+B8h] [rbp-48h]
  int v1487; // [rsp+B8h] [rbp-48h]
  unsigned int v1488; // [rsp+B8h] [rbp-48h]
  int v1489; // [rsp+B8h] [rbp-48h]
  int v1490; // [rsp+B8h] [rbp-48h]
  int v1491; // [rsp+B8h] [rbp-48h]
  int v1492; // [rsp+B8h] [rbp-48h]
  int v1493; // [rsp+B8h] [rbp-48h]
  int v1494; // [rsp+B8h] [rbp-48h]
  _BYTE *v1495; // [rsp+C0h] [rbp-40h]
  int v1496; // [rsp+C0h] [rbp-40h]
  int v1497; // [rsp+C0h] [rbp-40h]
  unsigned int v1498; // [rsp+C0h] [rbp-40h]
  unsigned int v1499; // [rsp+C0h] [rbp-40h]
  _QWORD *v1500; // [rsp+C0h] [rbp-40h]
  int v1501; // [rsp+C0h] [rbp-40h]
  int v1502; // [rsp+C0h] [rbp-40h]
  int v1503; // [rsp+C0h] [rbp-40h]
  int v1504; // [rsp+C0h] [rbp-40h]
  unsigned int v1505; // [rsp+C0h] [rbp-40h]
  char v1506; // [rsp+C0h] [rbp-40h]
  SIZE_T v1507; // [rsp+C8h] [rbp-38h]
  SIZE_T v1508; // [rsp+C8h] [rbp-38h]
  SIZE_T v1509; // [rsp+C8h] [rbp-38h]
  SIZE_T v1510; // [rsp+C8h] [rbp-38h]
  int v1511; // [rsp+C8h] [rbp-38h]
  int v1512; // [rsp+C8h] [rbp-38h]
  int v1513; // [rsp+C8h] [rbp-38h]
  int v1514; // [rsp+C8h] [rbp-38h]
  int v1515; // [rsp+C8h] [rbp-38h]
  int v1516; // [rsp+C8h] [rbp-38h]
  unsigned int v1517; // [rsp+C8h] [rbp-38h]
  int v1518; // [rsp+C8h] [rbp-38h]
  int v1519; // [rsp+C8h] [rbp-38h]
  SIZE_T v1520; // [rsp+D0h] [rbp-30h]
  void *v1521; // [rsp+D0h] [rbp-30h]
  void *v1522; // [rsp+D0h] [rbp-30h]
  void *v1523; // [rsp+D0h] [rbp-30h]
  void *v1524; // [rsp+D0h] [rbp-30h]
  char *v1525; // [rsp+D0h] [rbp-30h]
  SIZE_T v1526; // [rsp+D0h] [rbp-30h]
  void *v1527; // [rsp+D0h] [rbp-30h]
  _DWORD *v1528; // [rsp+D0h] [rbp-30h]
  LPVOID v1529; // [rsp+D8h] [rbp-28h]
  char *v1530; // [rsp+D8h] [rbp-28h]
  char *v1531; // [rsp+D8h] [rbp-28h]
  LPVOID v1532; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v1533; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v1534; // [rsp+D8h] [rbp-28h]
  int v1535; // [rsp+E0h] [rbp-20h]
  int v1536; // [rsp+E0h] [rbp-20h]
  SIZE_T v1537; // [rsp+E0h] [rbp-20h]
  unsigned int i1; // [rsp+E0h] [rbp-20h]
  unsigned int v1539; // [rsp+E0h] [rbp-20h]
  int v1540; // [rsp+E0h] [rbp-20h]
  void *v1541; // [rsp+E8h] [rbp-18h]
  _WORD *v1542; // [rsp+E8h] [rbp-18h]
  __int64 v1543; // [rsp+E8h] [rbp-18h]
  __int64 v1544; // [rsp+E8h] [rbp-18h]
  int v1545; // [rsp+E8h] [rbp-18h]
  __int64 v1546; // [rsp+E8h] [rbp-18h]
  unsigned int kk; // [rsp+E8h] [rbp-18h]
  int v1548; // [rsp+E8h] [rbp-18h]
  const void **v1549; // [rsp+E8h] [rbp-18h]
  SIZE_T v1550; // [rsp+F0h] [rbp-10h]
  SIZE_T v1551; // [rsp+F0h] [rbp-10h]
  void *v1552; // [rsp+F0h] [rbp-10h]
  unsigned int v1553; // [rsp+F0h] [rbp-10h]
  SIZE_T v1554; // [rsp+F0h] [rbp-10h]
  LPVOID v1555; // [rsp+F0h] [rbp-10h]
  _BYTE *v1556; // [rsp+F8h] [rbp-8h] BYREF
  SIZE_T Size; // [rsp+100h] [rbp+0h]
  LPVOID v1558; // [rsp+108h] [rbp+8h]
  LPCWSTR v1559; // [rsp+110h] [rbp+10h]
  LPVOID v1560; // [rsp+118h] [rbp+18h]
  SIZE_T v1561; // [rsp+120h] [rbp+20h]
  int v1562; // [rsp+128h] [rbp+28h]
  unsigned int v1563; // [rsp+12Ch] [rbp+2Ch] BYREF
  LPVOID v1564; // [rsp+130h] [rbp+30h]
  int v1565; // [rsp+138h] [rbp+38h] BYREF
  LPVOID v1566; // [rsp+140h] [rbp+40h]
  LPVOID v1567; // [rsp+148h] [rbp+48h]
  LPVOID v1568; // [rsp+150h] [rbp+50h]
  void *v1569; // [rsp+158h] [rbp+58h]
  unsigned int v1570; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1571; // [rsp+164h] [rbp+64h] BYREF
  unsigned int v1572; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1573; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned int v1574; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1575; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1576; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1577; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1578; // [rsp+180h] [rbp+80h] BYREF
  SIZE_T v1579; // [rsp+184h] [rbp+84h] BYREF
  unsigned int v1580; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1581; // [rsp+190h] [rbp+90h] BYREF
  SIZE_T v1582; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1583; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1584; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int dwBytes; // [rsp+1A8h] [rbp+A8h] BYREF
  int dwBytes_4; // [rsp+1ACh] [rbp+ACh]
  unsigned int v1587; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1588; // [rsp+1B4h] [rbp+B4h] BYREF
  int v1589; // [rsp+1B8h] [rbp+B8h]
  int v1590; // [rsp+1BCh] [rbp+BCh]
  unsigned int v1591; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1592; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1593; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1594; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1595; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1596; // [rsp+1D4h] [rbp+D4h] BYREF
  unsigned int v1597; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1598; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1599; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1600; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1601; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1602; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1603; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1604; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1605; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1606; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1607; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1608; // [rsp+204h] [rbp+104h] BYREF
  unsigned int v1609; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1610; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1611; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1612; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v1613; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1614; // [rsp+21Ch] [rbp+11Ch] BYREF
  SIZE_T v1615; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1616; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1617; // [rsp+22Ch] [rbp+12Ch] BYREF
  SIZE_T v1618; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1619; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1620; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1621; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1622; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1623; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1624; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v1625; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1626; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1627; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v1628; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1629; // [rsp+268h] [rbp+168h] BYREF
  unsigned int v1630; // [rsp+26Ch] [rbp+16Ch] BYREF
  unsigned int v1631; // [rsp+270h] [rbp+170h] BYREF
  unsigned int v1632; // [rsp+274h] [rbp+174h] BYREF
  wchar_t *v1633; // [rsp+278h] [rbp+178h] BYREF
  size_t pcchLength; // [rsp+280h] [rbp+180h] BYREF
  unsigned int *v1635; // [rsp+288h] [rbp+188h] BYREF
  unsigned int *v1636; // [rsp+290h] [rbp+190h] BYREF
  unsigned int *v1637; // [rsp+298h] [rbp+198h] BYREF
  size_t v1638; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD *v1639; // [rsp+2A8h] [rbp+1A8h] BYREF
  unsigned int *v1640; // [rsp+2B0h] [rbp+1B0h] BYREF
  unsigned int *v1641; // [rsp+2B8h] [rbp+1B8h] BYREF
  void *v1642[5]; // [rsp+2C0h] [rbp+1C0h] BYREF
  void *v1643; // [rsp+2E8h] [rbp+1E8h] BYREF
  unsigned int *v1644; // [rsp+2F0h] [rbp+1F0h] BYREF
  LPVOID v1645; // [rsp+2F8h] [rbp+1F8h] BYREF
  HMODULE phModule; // [rsp+300h] [rbp+200h] BYREF
  void *v1647; // [rsp+308h] [rbp+208h] BYREF
  int *v1648; // [rsp+310h] [rbp+210h]
  void *v1649; // [rsp+318h] [rbp+218h] BYREF
  unsigned __int64 v1650; // [rsp+320h] [rbp+220h] BYREF
  unsigned __int64 v1651; // [rsp+328h] [rbp+228h] BYREF
  const WCHAR *v1652; // [rsp+330h] [rbp+230h] BYREF
  _DWORD *v1653; // [rsp+338h] [rbp+238h] BYREF
  _DWORD *v1654; // [rsp+340h] [rbp+240h] BYREF
  int *v1655; // [rsp+348h] [rbp+248h] BYREF
  LPVOID v1656; // [rsp+350h] [rbp+250h] BYREF
  unsigned int *v1657; // [rsp+358h] [rbp+258h] BYREF
  unsigned int *v1658; // [rsp+360h] [rbp+260h] BYREF
  __int64 v1659[3]; // [rsp+368h] [rbp+268h] BYREF
  void **v1660; // [rsp+380h] [rbp+280h] BYREF
  _DWORD *v1661; // [rsp+398h] [rbp+298h] BYREF
  void *v1662; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v1663; // [rsp+3A8h] [rbp+2A8h]
  void **v1664; // [rsp+3B0h] [rbp+2B0h] BYREF
  char *v1665; // [rsp+3B8h] [rbp+2B8h] BYREF
  _DWORD *v1666; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v1667; // [rsp+3C8h] [rbp+2C8h]
  __int64 v1668; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v1669; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v1670; // [rsp+3E0h] [rbp+2E0h] BYREF
  int *v1671; // [rsp+3E8h] [rbp+2E8h] BYREF
  wchar_t *String1; // [rsp+400h] [rbp+300h] BYREF
  __int64 v1673; // [rsp+408h] [rbp+308h] BYREF
  wchar_t *v1674; // [rsp+410h] [rbp+310h] BYREF
  wchar_t *v1675; // [rsp+418h] [rbp+318h] BYREF
  __int64 v1676[3]; // [rsp+420h] [rbp+320h] BYREF
  _DWORD *v1677; // [rsp+438h] [rbp+338h] BYREF
  unsigned int *v1678; // [rsp+440h] [rbp+340h] BYREF
  unsigned int *v1679; // [rsp+448h] [rbp+348h] BYREF
  void *v1680[5]; // [rsp+450h] [rbp+350h] BYREF
  void *v1681; // [rsp+478h] [rbp+378h] BYREF
  unsigned int *v1682; // [rsp+480h] [rbp+380h] BYREF
  unsigned int *v1683; // [rsp+488h] [rbp+388h] BYREF
  HMODULE hModule; // [rsp+490h] [rbp+390h] BYREF
  void *v1685; // [rsp+498h] [rbp+398h] BYREF
  void *v1686; // [rsp+4A0h] [rbp+3A0h] BYREF
  unsigned __int64 v1687; // [rsp+4A8h] [rbp+3A8h] BYREF
  unsigned __int64 v1688; // [rsp+4B0h] [rbp+3B0h] BYREF
  _BYTE *v1689; // [rsp+4B8h] [rbp+3B8h] BYREF
  LPVOID v1690[2]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _DWORD *v1691; // [rsp+4D0h] [rbp+3D0h] BYREF
  __int128 v1692; // [rsp+4D8h] [rbp+3D8h]
  __int128 v1693; // [rsp+4E8h] [rbp+3E8h]
  _OWORD *v1694; // [rsp+500h] [rbp+400h] BYREF
  _QWORD *v1695; // [rsp+510h] [rbp+410h] BYREF
  LPVOID lpMem[2]; // [rsp+518h] [rbp+418h] BYREF
  LPVOID v1697[3]; // [rsp+528h] [rbp+428h]
  _QWORD *v1698; // [rsp+540h] [rbp+440h] BYREF
  _OWORD *v1699; // [rsp+550h] [rbp+450h] BYREF
  _QWORD *v1700; // [rsp+560h] [rbp+460h] BYREF
  const wchar_t **v1701; // [rsp+570h] [rbp+470h] BYREF
  void *v1702; // [rsp+580h] [rbp+480h] BYREF
  int *v1703; // [rsp+590h] [rbp+490h] BYREF
  unsigned int *v1704; // [rsp+5A0h] [rbp+4A0h] BYREF
  size_t v1705; // [rsp+5A8h] [rbp+4A8h] BYREF
  void *v1706; // [rsp+5B0h] [rbp+4B0h]
  __int128 v1707; // [rsp+5B8h] [rbp+4B8h]
  __int128 v1708; // [rsp+5C8h] [rbp+4C8h] BYREF
  LPVOID v1709[3]; // [rsp+5D8h] [rbp+4D8h]
  _DWORD *v1710; // [rsp+5F0h] [rbp+4F0h] BYREF
  _QWORD v1711[2]; // [rsp+5F8h] [rbp+4F8h] BYREF
  int v1712; // [rsp+608h] [rbp+508h]
  unsigned int v1713; // [rsp+60Ch] [rbp+50Ch]
  int v1714; // [rsp+610h] [rbp+510h]
  _QWORD v1715[2]; // [rsp+618h] [rbp+518h] BYREF
  int v1716; // [rsp+628h] [rbp+528h]
  unsigned int v1717; // [rsp+62Ch] [rbp+52Ch]
  int v1718; // [rsp+630h] [rbp+530h]
  _BYTE v1719[24]; // [rsp+640h] [rbp+540h] BYREF
  void *v1720; // [rsp+658h] [rbp+558h]
  _BYTE v1721[4]; // [rsp+6B0h] [rbp+5B0h] BYREF
  int v1722; // [rsp+6B4h] [rbp+5B4h]
  int v1723; // [rsp+6B8h] [rbp+5B8h]
  __int16 v1724; // [rsp+6C2h] [rbp+5C2h]
  __int64 v1725; // [rsp+6C8h] [rbp+5C8h]
  _BYTE v1726[4]; // [rsp+720h] [rbp+620h] BYREF
  int v1727; // [rsp+724h] [rbp+624h]
  int v1728; // [rsp+728h] [rbp+628h]
  unsigned __int16 *v1729; // [rsp+738h] [rbp+638h]
  _BYTE v1730[24]; // [rsp+790h] [rbp+690h] BYREF
  char *v1731; // [rsp+7A8h] [rbp+6A8h]
  _BYTE v1732[4]; // [rsp+800h] [rbp+700h] BYREF
  int v1733; // [rsp+804h] [rbp+704h]
  int v1734; // [rsp+808h] [rbp+708h]
  unsigned __int16 *v1735; // [rsp+818h] [rbp+718h]
  _BYTE v1736[24]; // [rsp+870h] [rbp+770h] BYREF
  char *v1737; // [rsp+888h] [rbp+788h]
  _BYTE v1738[4]; // [rsp+8E0h] [rbp+7E0h] BYREF
  int v1739; // [rsp+8E4h] [rbp+7E4h]
  int v1740; // [rsp+8E8h] [rbp+7E8h]
  void *v1741; // [rsp+8F8h] [rbp+7F8h]
  _BYTE v1742[4]; // [rsp+950h] [rbp+850h] BYREF
  int v1743; // [rsp+954h] [rbp+854h]
  int v1744; // [rsp+958h] [rbp+858h]
  char *v1745; // [rsp+968h] [rbp+868h]
  _BYTE v1746[24]; // [rsp+9C0h] [rbp+8C0h] BYREF
  void *v1747; // [rsp+9D8h] [rbp+8D8h]
  int v1748; // [rsp+A30h] [rbp+930h] BYREF
  int v1749; // [rsp+A34h] [rbp+934h]
  void *v1750; // [rsp+A38h] [rbp+938h]
  void *v1751; // [rsp+A40h] [rbp+940h]
  void *v1752; // [rsp+A48h] [rbp+948h]
  void *v1753; // [rsp+A50h] [rbp+950h]
  void *v1754; // [rsp+A58h] [rbp+958h]
  __int64 v1755; // [rsp+A60h] [rbp+960h]
  int v1756; // [rsp+A68h] [rbp+968h]
  __int128 v1757; // [rsp+A6Ch] [rbp+96Ch] BYREF
  __int128 v1758; // [rsp+A7Ch] [rbp+97Ch] BYREF
  unsigned int v1759; // [rsp+A8Ch] [rbp+98Ch] BYREF
  unsigned int v1760; // [rsp+A90h] [rbp+990h]
  unsigned int v1761; // [rsp+A94h] [rbp+994h]
  unsigned int v1762; // [rsp+A98h] [rbp+998h]
  unsigned __int64 v1763; // [rsp+AA0h] [rbp+9A0h]
  unsigned __int64 v1764; // [rsp+AA8h] [rbp+9A8h]
  __int64 v1765; // [rsp+AB0h] [rbp+9B0h]
  __int64 v1766; // [rsp+AB8h] [rbp+9B8h]
  __int128 v1767; // [rsp+AC0h] [rbp+9C0h] BYREF
  __int128 v1768; // [rsp+AD0h] [rbp+9D0h]
  __int128 v1769; // [rsp+AE0h] [rbp+9E0h] BYREF
  __int128 v1770; // [rsp+AF0h] [rbp+9F0h] BYREF
  __int64 v1771; // [rsp+B00h] [rbp+A00h] BYREF
  unsigned int v1772; // [rsp+B08h] [rbp+A08h]
  int v1773; // [rsp+B0Ch] [rbp+A0Ch]
  __int128 v1774; // [rsp+B10h] [rbp+A10h] BYREF
  char v1775[12]; // [rsp+B20h] [rbp+A20h] BYREF
  unsigned int v1776; // [rsp+B2Ch] [rbp+A2Ch]
  __int128 v1777; // [rsp+B40h] [rbp+A40h] BYREF
  __int128 v1778; // [rsp+B50h] [rbp+A50h] BYREF
  __int64 v1779; // [rsp+B60h] [rbp+A60h]
  __int128 v1780; // [rsp+B68h] [rbp+A68h] BYREF
  __int128 v1781; // [rsp+B78h] [rbp+A78h] BYREF
  __int64 v1782; // [rsp+B88h] [rbp+A88h]
  __int128 v1783; // [rsp+B90h] [rbp+A90h] BYREF
  __int128 v1784; // [rsp+BA0h] [rbp+AA0h]
  __int64 v1785; // [rsp+BB0h] [rbp+AB0h]
  int v1786; // [rsp+BB8h] [rbp+AB8h]
  __int128 v1787; // [rsp+BC0h] [rbp+AC0h] BYREF
  __int128 v1788; // [rsp+BD0h] [rbp+AD0h]
  __int64 v1789; // [rsp+BE0h] [rbp+AE0h]
  int v1790; // [rsp+BE8h] [rbp+AE8h]
  __int128 v1791; // [rsp+BF0h] [rbp+AF0h] BYREF
  __int128 v1792; // [rsp+C00h] [rbp+B00h]
  __int64 v1793; // [rsp+C10h] [rbp+B10h]
  int v1794; // [rsp+C18h] [rbp+B18h]
  __int128 v1795; // [rsp+C20h] [rbp+B20h] BYREF
  __int128 v1796; // [rsp+C30h] [rbp+B30h]
  __int64 v1797; // [rsp+C40h] [rbp+B40h]
  int v1798; // [rsp+C48h] [rbp+B48h]
  __int128 v1799; // [rsp+C50h] [rbp+B50h] BYREF
  __int128 v1800; // [rsp+C60h] [rbp+B60h]
  __int64 v1801; // [rsp+C70h] [rbp+B70h]
  int v1802; // [rsp+C78h] [rbp+B78h]
  _DWORD v1803[6]; // [rsp+C80h] [rbp+B80h] BYREF
  char v1804; // [rsp+C9Ah] [rbp+B9Ah]
  unsigned __int16 v1805[34]; // [rsp+C9Ch] [rbp+B9Ch] BYREF
  _DWORD v1806[6]; // [rsp+CE0h] [rbp+BE0h] BYREF
  char v1807; // [rsp+CFAh] [rbp+BFAh]
  unsigned __int16 v1808[34]; // [rsp+CFCh] [rbp+BFCh] BYREF
  _DWORD v1809[6]; // [rsp+D40h] [rbp+C40h] BYREF
  char v1810; // [rsp+D5Ah] [rbp+C5Ah]
  unsigned __int16 v1811[34]; // [rsp+D5Ch] [rbp+C5Ch] BYREF
  _BYTE v1812[68]; // [rsp+DA0h] [rbp+CA0h] BYREF
  __int16 v1813; // [rsp+DE4h] [rbp+CE4h]
  unsigned __int16 v1814; // [rsp+E46h] [rbp+D46h]
  __int64 v1815; // [rsp+E4Ch] [rbp+D4Ch]
  _QWORD v1816[6]; // [rsp+E80h] [rbp+D80h] BYREF
  int v1817; // [rsp+EB0h] [rbp+DB0h] BYREF
  __int128 v1818; // [rsp+EB8h] [rbp+DB8h]
  __int128 v1819; // [rsp+EC8h] [rbp+DC8h]
  __int128 v1820; // [rsp+ED8h] [rbp+DD8h]
  __int64 v1821; // [rsp+EE8h] [rbp+DE8h]
  _QWORD v1822[20]; // [rsp+EF0h] [rbp+DF0h] BYREF
  _WORD v1823[8]; // [rsp+F90h] [rbp+E90h] BYREF
  _BYTE v1824[176]; // [rsp+FA0h] [rbp+EA0h] BYREF
  WCHAR Filename[264]; // [rsp+1050h] [rbp+F50h] BYREF

  v1648 = a1;
  LODWORD(v2) = 0;
  v3 = 0;
  AcquireSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  if ( !`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried )
  {
    ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
    AcquireSRWLockExclusive(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
    if ( `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried )
    {
      *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
LABEL_13:
      ReleaseSRWLockExclusive(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
      return (unsigned int)v3;
    }
    dwBytes_4 = 0;
    v1671 = 0LL;
    v1589 = 0;
    v1590 = 0;
    v1556 = 0LL;
    v1535 = 0;
    while ( _InterlockedCompareExchange(&dword_1800DD560, 1, 0) )
      ;
    v6 = dword_1800DD2BC;
    v1562 = -1;
    v7 = 4LL;
    if ( dword_1800DD2BC )
      goto LABEL_55;
    v1483 = 0;
    v8 = 0LL;
    v9 = (char *)MemoryAlloc(0x338uLL);
    lpModuleName = (WCHAR *)v9;
    if ( v9 )
    {
      v10 = 103LL;
      v11 = v9 + 7;
      v12 = 0;
      v13 = (unsigned __int8 *)&unk_1800B9202;
      v14 = 0;
      v15 = 0;
      v16 = -1;
      do
      {
        v17 = *(v13 - 1) | (*(v13 - 2) << 8);
        v18 = v13[2] << 8;
        v19 = *v13;
        v13 += 8;
        v20 = *(v13 - 7) | ((v19 | (v17 << 8)) << 8);
        v21 = v20 ^ v15;
        v22 = *(v13 - 3) | ((*(v13 - 4) | ((*(v13 - 5) | v18) << 8)) << 8);
        v23 = v22 ^ v14 ^ v21 ^ 0xAC987321;
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
        v48 = v16 ^ v45;
        v16 = v22;
        v49 = v12 ^ __ROL4__(v47, 2) ^ v46;
        v12 = v20;
        v50 = v49 ^ v44;
        *(v11 - 4) = v50;
        *v11 = v48;
        v11 += 8;
        v51 = __ROR4__(v50, 8);
        *(v11 - 13) = v51;
        v52 = __ROR4__(v48, 8);
        *(v11 - 9) = v52;
        v53 = __ROR4__(v51, 8);
        *(v11 - 14) = v53;
        v54 = __ROR4__(v52, 8);
        *(v11 - 10) = v54;
        v55 = __ROR4__(v53, 8);
        v56 = __ROR4__(v54, 8);
        *(v11 - 15) = v55;
        *(v11 - 11) = v56;
        v14 = __ROR4__(v56, 8);
        v15 = __ROR4__(v55, 8);
        --v10;
      }
      while ( v10 );
      LODWORD(v2) = 0;
      v57 = 0LL;
      v58 = 0;
      v8 = 0LL;
      v59 = 0;
      do
        v58 ^= *((_BYTE *)lpModuleName + v57++);
      while ( v57 < 0x338 );
      if ( v58 == 64LL )
      {
        *((_BYTE *)lpModuleName + 823) = 0;
        v8 = lpModuleName;
        v60 = lpModuleName;
        memset_0(&unk_1800DD4F0, 0, 0x60uLL);
        if ( !*(_BYTE *)lpModuleName )
        {
LABEL_47:
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v8);
LABEL_48:
          v7 = 4LL;
          if ( v59 < 0 )
          {
            v74 = (HMODULE *)&unk_1800DD4F0;
            v75 = 4LL;
            do
            {
              if ( *v74 )
                FreeLibrary(*v74);
              v74 += 3;
              --v75;
            }
            while ( v75 );
            memset_0(&unk_1800DD4F0, 0, 0x60uLL);
            memcpy_0(off_1800DC000, off_1800AFB20, 0x170uLL);
LABEL_56:
            v76 = 0;
            _InterlockedExchange(&dword_1800DD560, 0);
            v77 = 0;
            String1 = 0LL;
            v1674 = 0LL;
            if ( !NtCurrentPeb()->SessionId )
              goto LABEL_104;
            v78 = off_1800DC110[0]();
            if ( v78 )
            {
              v1675 = 0LL;
              v79 = 0LL;
              for ( i = 0LL; ; v1675 = i )
              {
                v81 = 0LL;
                if ( i )
                  v81 = i;
                if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1800DC130[0])(
                       v78,
                       2LL,
                       v81,
                       v79,
                       &v1592) )
                {
                  String1 = i;
                  goto LABEL_77;
                }
                LastError = GetLastError();
                if ( LastError != 122 )
                  break;
                if ( i )
                  goto LABEL_71;
                i = (wchar_t *)MemoryAlloc(v1592);
                SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1675);
                if ( !i )
                {
                  v77 = -2147024882;
LABEL_77:
                  v1675 = 0LL;
                  goto LABEL_78;
                }
                v79 = v1592;
              }
              if ( !LastError )
              {
LABEL_71:
                v77 = -2147467259;
                goto LABEL_78;
              }
              if ( LastError > 0 )
                v77 = (unsigned __int16)LastError | 0x80070000;
              else
                v77 = LastError;
LABEL_78:
              SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1675);
              if ( v77 < 0 )
                goto LABEL_105;
              v84 = off_1800DC128[0];
              CurrentThreadId = GetCurrentThreadId();
              v86 = ((__int64 (__fastcall *)(_QWORD))v84)(CurrentThreadId);
              if ( v86 )
              {
                v1633 = 0LL;
                v77 = 0;
                v87 = 0LL;
                for ( j = 0LL; ; v1633 = j )
                {
                  v89 = 0LL;
                  if ( j )
                    v89 = j;
                  if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1800DC130[0])(
                         v86,
                         2LL,
                         v89,
                         v87,
                         &v1593) )
                  {
                    v1674 = j;
                    goto LABEL_95;
                  }
                  v90 = GetLastError();
                  if ( v90 != 122 )
                    break;
                  if ( j )
                    goto LABEL_89;
                  j = (wchar_t *)MemoryAlloc(v1593);
                  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1633);
                  if ( !j )
                  {
                    v77 = -2147024882;
LABEL_95:
                    v1633 = 0LL;
                    goto LABEL_96;
                  }
                  v87 = v1593;
                }
                if ( !v90 )
                {
LABEL_89:
                  v77 = -2147467259;
                  goto LABEL_96;
                }
                if ( v90 > 0 )
                  v77 = (unsigned __int16)v90 | 0x80070000;
                else
                  v77 = v90;
LABEL_96:
                SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1633);
                if ( v77 >= 0 )
                {
                  if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1674 && !wcscmp_0(v1674, L"Default") )
                  {
                    v1565 = 0;
                    CurrentProcess = GetCurrentProcess();
                    if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1565, 4LL) )
                    {
                      if ( (v1565 & 0xF) == 0 )
                        v76 = 1;
                      goto LABEL_104;
                    }
                    goto LABEL_66;
                  }
LABEL_104:
                  v1535 = v76;
                }
LABEL_105:
                SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1674);
                SP<unsigned short,SP_MEM<unsigned short>>::Reset(&String1);
                v92 = 0;
                if ( v77 >= 0 )
                  v92 = v1535;
                v1387 = v92;
                v1569 = LocalAlloc(0x40u, 4uLL);
                v93 = v1569;
                SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1556);
                if ( !v93 )
                {
                  v1556 = 0LL;
                  v94 = -2147024882;
LABEL_109:
                  v95 = v1565;
                  goto LABEL_110;
                }
                v1556 = v93;
                lpModuleNamea = 0LL;
                *(_OWORD *)lpMem = 0LL;
                v1366 = 0LL;
                *(_OWORD *)v1697 = 0LL;
                v99 = GetProcessHeap();
                v100 = HeapAlloc(v99, 8u, 0xA0uLL);
                v1507 = 3LL;
                v101 = v100;
                v94 = -1073741801;
                if ( !v100 )
                  goto LABEL_134;
                lpModuleNamea = (WCHAR *)v100;
                *v100 = xmmword_1800DC6B0[0];
                v100[1] = xmmword_1800DC6B0[1];
                v100[2] = xmmword_1800DC6B0[2];
                v100[3] = xmmword_1800DC6B0[3];
                v100[4] = xmmword_1800DC6B0[4];
                v100[5] = xmmword_1800DC6B0[5];
                v100[6] = xmmword_1800DC6B0[6];
                v100[7] = xmmword_1800DC6B0[7];
                v100[8] = xmmword_1800DC6B0[8];
                v100[9] = xmmword_1800DC6B0[9];
                v102 = GetProcessHeap();
                v103 = (WCHAR *)HeapAlloc(v102, 8u, 8uLL);
                v1412 = v103;
                if ( !v103 )
                  goto LABEL_134;
                *(_QWORD *)v103 = qword_1800DC5F0;
                v1366 = v103;
                v1471 = (const wchar_t *)__rdtsc();
                dwBytes = 0;
                v1452 = RtlUIntAdd(4LL, 4LL, &v1594);
                v94 = v1452;
                if ( v1452 < 0 )
                  goto LABEL_209;
                v105 = RtlUIntAdd(0LL, v1594, &dwBytes);
                v94 = v105 | 0x10000000;
                v107 = v92;
                v1452 = v105 | 0x10000000;
                if ( v105 >= 0 )
                {
                  v1452 = RtlUIntAdd((unsigned int)v106, 160LL, &v1595);
                  v94 = v1452;
                  if ( v1452 < 0 )
                    goto LABEL_210;
                  v108 = RtlUIntAdd(dwBytes, v1595, &dwBytes);
                  v94 = v109 | v108;
                  v1452 = v109 | v108;
                  if ( (v109 | v108) >= 0 )
                  {
                    v1452 = RtlUIntAdd((unsigned int)v106, (unsigned int)(v106 + 4), &v1596);
                    v94 = v1452;
                    if ( v1452 < 0 )
                      goto LABEL_210;
                    v110 = RtlUIntAdd(dwBytes, v1596, &dwBytes);
                    v94 = v111 | v110;
                    v1452 = v111 | v110;
                    if ( (v111 | v110) >= 0 )
                    {
                      v1452 = RtlUIntAdd((unsigned int)v106, (unsigned int)(v106 + 4), &v1597);
                      v94 = v1452;
                      if ( v1452 < 0 )
                        goto LABEL_210;
                      v112 = RtlUIntAdd(dwBytes, v1597, &dwBytes);
                      v94 = v115 | v112;
                      v1452 = v115 | v112;
                      if ( (v115 | v112) >= 0 )
                      {
                        if ( StringCchLengthW(v114, v113, &pcchLength) < 0 )
                        {
                          v94 = -1073741762;
LABEL_136:
                          v1452 = v94;
                          goto LABEL_137;
                        }
                        v1452 = RtlUIntAdd((unsigned int)v106, (unsigned int)(2 * ++pcchLength), &v1599);
                        v94 = v1452;
                        if ( v1452 >= 0 )
                        {
                          v123 = RtlUIntAdd(dwBytes, v1599, &dwBytes);
                          v94 = v124 | v123;
                          v1452 = v124 | v123;
                          if ( (v124 | v123) < 0 )
                            goto LABEL_137;
                          v1452 = RtlUIntAdd((unsigned int)v106, (unsigned int)v106, &v1610);
                          v94 = v1452;
                          if ( v1452 >= 0 )
                          {
                            v125 = RtlUIntAdd(dwBytes, v1610, &dwBytes);
                            v94 = v126 | v125;
                            v1452 = v126 | v125;
                            if ( (v126 | v125) < 0 )
                              goto LABEL_137;
                            v1452 = RtlUIntAdd((unsigned int)v106, (unsigned int)v106, &v1622);
                            v94 = v1452;
                            if ( v1452 >= 0 )
                            {
                              v127 = RtlUIntAdd(dwBytes, v1622, &dwBytes);
                              v94 = v128 | v127;
                              v1452 = v128 | v127;
                              if ( (v128 | v127) < 0 )
                                goto LABEL_137;
                              HIDWORD(lpMem[0]) = dwBytes;
                              v129 = dwBytes;
                              v130 = GetProcessHeap();
                              v131 = HeapAlloc(v130, 8u, v129);
                              v132 = v131;
                              if ( v131 )
                              {
                                lpMem[1] = v131;
                                LODWORD(lpMem[0]) = 0;
                                v1452 = RtlULongLongAdd(v131, 4LL, &v1691);
                                v94 = v1452;
                                if ( v1452 < 0 )
                                {
LABEL_184:
                                  v107 = v92;
                                  goto LABEL_137;
                                }
                                if ( v132 + 2 > (_DWORD *)((char *)v132 + HIDWORD(lpMem[0])) )
                                  goto LABEL_181;
                                v133 = v1691;
                                *v132 = v106;
                                *v133 = 0;
                                v134 = ++LODWORD(lpMem[0]);
                                if ( lpMem[1] )
                                {
                                  v147 = (unsigned int *)lpMem[1];
                                  v1635 = (unsigned int *)lpMem[1];
                                  if ( v134 )
                                  {
                                    do
                                    {
                                      v1452 = RtlUIntAdd((unsigned int)v106, *v147, &v1624);
                                      v94 = v1452;
                                      if ( v1452 < 0 )
                                        goto LABEL_209;
                                      v1452 = RtlULongLongAdd(v147, v1624, &v1635);
                                      v94 = v1452;
                                      if ( v1452 < 0 )
                                        goto LABEL_184;
                                      v147 = v1635;
                                    }
                                    while ( v148 + 1 < v149 );
                                  }
                                  v1452 = RtlULongLongAdd(v147, v106, &v1699);
                                  v94 = v1452;
                                  if ( v1452 < 0 )
                                  {
LABEL_165:
                                    v107 = v92;
                                    if ( v94 < 0 )
                                      goto LABEL_531;
                                    goto LABEL_166;
                                  }
                                  if ( v147 + 41 > (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                                    goto LABEL_181;
                                  v146 = v1699;
                                  *v147 = 160;
                                  *v146 = *v101;
                                  v146[1] = v101[1];
                                  v146[2] = v101[2];
                                  v146[3] = v101[3];
                                  v146[4] = v101[4];
                                  v146[5] = v101[5];
                                  v146[6] = v101[6];
                                  v146[7] = v101[7];
                                  v146[8] = v101[8];
                                  v146[9] = v101[9];
                                  v136 = (int)lpMem[0];
                                }
                                else
                                {
                                  v1452 = RtlUIntAdd((unsigned int)v106, 160LL, &v1623);
                                  v94 = v1452;
                                  if ( v1452 < 0 )
                                    goto LABEL_209;
                                  v135 = RtlUIntAdd(HIDWORD(lpMem[0]), v1623, (char *)lpMem + 4);
                                  v136 = (int)lpMem[0];
                                  v94 = v135;
                                  v1452 = v135;
                                  if ( v135 < 0 )
                                    goto LABEL_165;
                                }
                                LODWORD(lpMem[0]) = ++v136;
LABEL_166:
                                if ( lpMem[1] )
                                {
                                  v151 = (unsigned int *)lpMem[1];
                                  v1636 = (unsigned int *)lpMem[1];
                                  if ( v136 )
                                  {
                                    do
                                    {
                                      v1452 = RtlUIntAdd((unsigned int)v106, *v151, &v1626);
                                      v94 = v1452;
                                      if ( v1452 < 0 )
                                        goto LABEL_209;
                                      v1452 = RtlULongLongAdd(v151, v1626, &v1636);
                                      v94 = v1452;
                                      if ( v1452 < 0 )
                                        goto LABEL_184;
                                      v151 = v1636;
                                    }
                                    while ( v152 + 1 < v153 );
                                  }
                                  v1452 = RtlULongLongAdd(v151, v106, &v1700);
                                  v94 = v1452;
                                  if ( v1452 < 0 )
                                    goto LABEL_169;
                                  if ( v151 + 3 > (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                                    goto LABEL_181;
                                  v150 = v1700;
                                  *v151 = 8;
                                  *v150 = *(_QWORD *)v1412;
                                  v138 = (int)lpMem[0];
                                  goto LABEL_193;
                                }
                                v1452 = RtlUIntAdd((unsigned int)v106, 8LL, &v1625);
                                v94 = v1452;
                                if ( v1452 >= 0 )
                                {
                                  v137 = RtlUIntAdd(HIDWORD(lpMem[0]), v1625, (char *)lpMem + 4);
                                  v138 = (int)lpMem[0];
                                  v94 = v137;
                                  v1452 = v137;
                                  if ( v137 < 0 )
                                  {
LABEL_169:
                                    v107 = v92;
                                    if ( v94 < 0 )
                                      goto LABEL_531;
                                    goto LABEL_170;
                                  }
LABEL_193:
                                  LODWORD(lpMem[0]) = ++v138;
LABEL_170:
                                  if ( !lpMem[1] )
                                  {
                                    v1452 = RtlUIntAdd((unsigned int)v106, 8LL, &v1627);
                                    v94 = v1452;
                                    if ( v1452 >= 0 )
                                    {
                                      v139 = RtlUIntAdd(HIDWORD(lpMem[0]), v1627, (char *)lpMem + 4);
                                      v142 = (int)lpMem[0];
                                      v94 = v139;
                                      v1452 = v139;
                                      if ( v139 < 0 )
                                        goto LABEL_173;
LABEL_201:
                                      LODWORD(lpMem[0]) = v142 + 1;
LABEL_174:
                                      if ( StringCchLengthW(v141, v140, &v1638) >= 0 )
                                      {
                                        v1452 = RtlULongLongAdd(v1638, 1LL, &v1638);
                                        v94 = v1452;
                                        if ( v1452 >= 0 )
                                        {
                                          if ( 2 * (_DWORD)v1638 )
                                          {
                                            if ( lpMem[1] )
                                            {
                                              v158 = lpMem[1];
                                              v1639 = lpMem[1];
                                              if ( v143 )
                                              {
                                                while ( 1 )
                                                {
                                                  v1452 = RtlUIntAdd(4LL, (unsigned int)*v158, &v1630);
                                                  v94 = v1452;
                                                  if ( v1452 < 0 )
                                                    break;
                                                  v1452 = RtlULongLongAdd(v158, v1630, &v1639);
                                                  v94 = v1452;
                                                  if ( v1452 < 0 )
                                                    goto LABEL_220;
                                                  v158 = v1639;
                                                  if ( v160 + 1 >= v143 )
                                                    goto LABEL_215;
                                                }
                                                v144 = v159;
                                              }
                                              else
                                              {
LABEL_215:
                                                v1452 = RtlULongLongAdd(v158, 4LL, &v1702);
                                                v94 = v1452;
                                                if ( v1452 >= 0 )
                                                {
                                                  if ( (char *)v158 + v161 + 4 <= (char *)lpMem[1] + HIDWORD(lpMem[0]) )
                                                  {
                                                    v162 = v1702;
                                                    *v158 = v161;
                                                    memcpy_0(
                                                      v162,
                                                      L"DataProtectionUnderLock-WindowsCore-Enabled",
                                                      (unsigned int)v161);
                                                    v143 = ++LODWORD(lpMem[0]);
LABEL_220:
                                                    v144 = 4LL;
                                                  }
                                                  else
                                                  {
                                                    v94 = -1073741789;
                                                    v1452 = -1073741789;
                                                  }
                                                }
                                              }
                                            }
                                            else
                                            {
                                              v1452 = RtlUIntAdd((unsigned int)v144, (unsigned int)(2 * v1638), &v1629);
                                              v94 = v1452;
                                              if ( v1452 >= 0 )
                                              {
                                                v145 = RtlUIntAdd(HIDWORD(lpMem[0]), v1629, (char *)lpMem + 4);
                                                v143 = (unsigned int)lpMem[0];
                                                v94 = v145;
                                                v1452 = v145;
                                                if ( v145 >= 0 )
                                                {
                                                  v143 = LODWORD(lpMem[0]) + 1;
                                                  v1452 = 0;
                                                  ++LODWORD(lpMem[0]);
                                                  v94 = 0;
                                                }
                                              }
                                            }
                                          }
                                          else
                                          {
                                            v94 = -1073741811;
                                            v1452 = -1073741811;
                                          }
                                        }
                                        v107 = v92;
                                        if ( v94 < 0 )
                                          goto LABEL_531;
                                        if ( lpMem[1] )
                                        {
                                          v168 = (unsigned int *)lpMem[1];
                                          v1640 = (unsigned int *)lpMem[1];
                                          if ( v143 )
                                          {
                                            do
                                            {
                                              v1452 = RtlUIntAdd((unsigned int)v144, *v168, &v1631);
                                              v94 = v1452;
                                              if ( v1452 < 0 )
                                                goto LABEL_240;
                                              v1452 = RtlULongLongAdd(v168, v1631, &v1640);
                                              v94 = v1452;
                                              if ( v1452 < 0 )
                                                goto LABEL_240;
                                              v168 = v1640;
                                            }
                                            while ( v169 + 1 < v170 );
                                          }
                                          v1452 = RtlULongLongAdd(v168, v144, &v1703);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_226;
                                          if ( v168 + 2 > (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                                            goto LABEL_239;
                                          v167 = v1703;
                                          *v168 = v164;
                                          *v167 = v92;
                                          v165 = (int)lpMem[0];
                                        }
                                        else
                                        {
                                          v1452 = RtlUIntAdd((unsigned int)v144, (unsigned int)v144, &v1591);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_531;
                                          v163 = RtlUIntAdd(HIDWORD(lpMem[0]), v1591, (char *)lpMem + 4);
                                          v165 = (int)lpMem[0];
                                          v94 = v163;
                                          v1452 = v163;
                                          if ( v163 < 0 )
                                          {
LABEL_226:
                                            v107 = v92;
                                            if ( v94 < 0 )
                                              goto LABEL_531;
                                            goto LABEL_227;
                                          }
                                        }
                                        LODWORD(lpMem[0]) = ++v165;
LABEL_227:
                                        if ( !lpMem[1] )
                                        {
                                          v1452 = RtlUIntAdd((unsigned int)v164, (unsigned int)v164, &v1570);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_240;
                                          v1452 = RtlUIntAdd(HIDWORD(lpMem[0]), v1570, (char *)lpMem + 4);
                                          v94 = v1452;
                                          if ( v1452 >= 0 )
                                          {
                                            ++LODWORD(lpMem[0]);
                                            goto LABEL_249;
                                          }
LABEL_248:
                                          v107 = v92;
                                          if ( v94 < 0 )
                                            goto LABEL_531;
LABEL_249:
                                          v1452 = RtlUIntAdd(v166, v166, &v1572);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_240;
                                          v176 = v1572;
                                          v1573 = v1572;
                                          v1452 = RtlUIntAdd(v175, 8LL, &v1574);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_240;
                                          v1452 = RtlUIntAdd(v176, v1574, &v1573);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_261;
                                          v1452 = RtlUIntAdd(v177, v177, &v1575);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_240;
                                          v1452 = RtlUIntAdd(v1573, v1575, &v1573);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_261;
                                          v1452 = RtlUIntAdd(v178, v178, &v1576);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_240;
                                          v1452 = RtlUIntAdd(v1573, v1576, &v1573);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_261;
                                          v1452 = RtlUIntAdd(v179, v179, &v1577);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                            goto LABEL_240;
                                          v1452 = RtlUIntAdd(v1573, v1577, &v1573);
                                          v94 = v1452;
                                          if ( v1452 < 0 )
                                          {
LABEL_261:
                                            v107 = v92;
                                            if ( v94 >= 0 )
                                            {
                                              v1428 = v1563;
LABEL_263:
                                              v181 = 0LL;
                                              v1413 = 0LL;
                                              v182 = 0;
                                              v1541 = 0LL;
                                              v183 = 0LL;
                                              v1484 = 0;
                                              v1561 = 0LL;
                                              v1568 = 0LL;
                                              v1564 = 0LL;
                                              v1442 = (LPVOID)__rdtsc();
                                              v1578 = 8;
                                              v184 = RtlUIntAdd(8LL, HIDWORD(lpMem[0]), &v1578);
                                              if ( v184 >= 0 )
                                              {
                                                v185 = (v1578 + 7) & 0xFFFFFFF8;
                                                if ( v185 < v1578 )
                                                {
                                                  v94 = -805306219;
LABEL_267:
                                                  v107 = v1387;
                                                  goto LABEL_529;
                                                }
                                                v1578 = (v1578 + 7) & 0xFFFFFFF8;
                                                v186 = v185;
                                                v187 = GetProcessHeap();
                                                v188 = HeapAlloc(v187, 8u, v186);
                                                if ( !v188 )
                                                {
                                                  v94 = -805306345;
                                                  goto LABEL_267;
                                                }
                                                v1642[0] = v188;
                                                *v188 = lpMem[0];
                                                v184 = RtlULongLongAdd(v188, 4LL, v1642);
                                                if ( v184 < 0
                                                  || (v190 = v1642[0],
                                                      *(_DWORD *)v1642[0] = HIDWORD(lpMem[0]),
                                                      v184 = RtlULongLongAdd(v190, v189, v1642),
                                                      v184 < 0) )
                                                {
                                                  v191 = GetProcessHeap();
                                                  HeapFree(v191, 0, v188);
                                                  v182 = 0;
                                                }
                                                else
                                                {
                                                  *(_QWORD *)((char *)v188 + v1578 - 8) = v1442;
                                                  memcpy_0(v1642[0], lpMem[1], HIDWORD(lpMem[0]));
                                                  v181 = (WCHAR *)v188;
                                                  v1413 = (LPCWSTR)v188;
                                                  v182 = v1578;
                                                }
                                              }
                                              v94 = v184 | 0x10000000;
                                              v1452 = v94;
                                              if ( v94 < 0 )
                                                goto LABEL_342;
                                              if ( !v181 )
                                              {
                                                v94 = -805306355;
                                                goto LABEL_267;
                                              }
                                              v192 = v182;
                                              v1443 = v182;
                                              if ( !v182 || (Size = v182 + 8LL, (Src = MemoryAlloc(Size)) == 0LL) )
                                              {
                                                v94 = -805306367;
                                                v1452 = -805306367;
LABEL_343:
                                                v286 = GetProcessHeap();
                                                HeapFree(v286, 0, v181);
LABEL_344:
                                                if ( v183 )
                                                {
                                                  v287 = (void *)*((_QWORD *)v183 + 1);
                                                  if ( v287 )
                                                  {
                                                    v288 = GetProcessHeap();
                                                    HeapFree(v288, 0, v287);
                                                    *((_QWORD *)v183 + 1) = 0LL;
                                                  }
                                                  v289 = (void *)*((_QWORD *)v183 + 3);
                                                  if ( v289 )
                                                  {
                                                    v290 = GetProcessHeap();
                                                    HeapFree(v290, 0, v289);
                                                    *((_QWORD *)v183 + 3) = 0LL;
                                                  }
                                                  v291 = (void *)*((_QWORD *)v183 + 5);
                                                  if ( v291 )
                                                  {
                                                    v292 = GetProcessHeap();
                                                    HeapFree(v292, 0, v291);
                                                    *((_QWORD *)v183 + 5) = 0LL;
                                                  }
                                                  v293 = GetProcessHeap();
                                                  HeapFree(v293, 0, v183);
                                                }
                                                if ( v1541 )
                                                {
                                                  v294 = GetProcessHeap();
                                                  HeapFree(v294, 0, v1541);
                                                }
                                                v295 = (void *)v1561;
                                                if ( v1561 )
                                                {
                                                  v296 = GetProcessHeap();
                                                  HeapFree(v296, 0, v295);
                                                }
                                                v297 = v1568;
                                                if ( v1568 )
                                                {
                                                  v298 = (void *)*((_QWORD *)v1568 + 1);
                                                  if ( v298 )
                                                  {
                                                    v299 = GetProcessHeap();
                                                    HeapFree(v299, 0, v298);
                                                    v297[1] = 0LL;
                                                  }
                                                  v300 = (void *)v297[3];
                                                  if ( v300 )
                                                  {
                                                    v301 = GetProcessHeap();
                                                    HeapFree(v301, 0, v300);
                                                    v297[3] = 0LL;
                                                  }
                                                  v302 = (void *)v297[5];
                                                  if ( v302 )
                                                  {
                                                    v303 = GetProcessHeap();
                                                    HeapFree(v303, 0, v302);
                                                    v297[5] = 0LL;
                                                  }
                                                  v304 = GetProcessHeap();
                                                  HeapFree(v304, 0, v297);
                                                }
                                                v305 = v1564;
                                                if ( v1564 )
                                                {
                                                  v306 = GetProcessHeap();
                                                  HeapFree(v306, 0, v305);
                                                }
                                                v107 = v1387;
                                                if ( v94 < 0 )
                                                  goto LABEL_531;
                                                if ( !LODWORD(v1697[0]) )
                                                {
                                                  v94 = -1073425151;
                                                  goto LABEL_529;
                                                }
                                                if ( !v1697[1] )
                                                {
                                                  v94 = -1073741811;
                                                  goto LABEL_529;
                                                }
                                                v473 = v1697[1];
                                                v1653 = v1697[1];
                                                v1452 = RtlULongLongAdd(v1697[1], 4LL, &v1653);
                                                v94 = v1452;
                                                if ( v1452 < 0 )
                                                  goto LABEL_137;
                                                v475 = v1653;
                                                if ( !*v473 )
                                                  v475 = 0LL;
                                                v1653 = v475;
                                                if ( *v473 != (_DWORD)v106 )
                                                {
                                                  v94 = -1073741789;
                                                  goto LABEL_136;
                                                }
                                                v94 = *v475;
                                                v1452 = *v475;
                                                if ( *v475 == -805306333 )
                                                {
                                                  v476 = -2147024774;
                                                }
                                                else
                                                {
                                                  v476 = *v475;
                                                  if ( v94 != -2147024774 && v94 < 0 )
                                                    goto LABEL_137;
                                                }
                                                if ( LODWORD(v1697[0]) != 6 )
                                                {
                                                  v94 = -1073425151;
LABEL_544:
                                                  v1452 = v94;
LABEL_545:
                                                  v107 = v474;
                                                  goto LABEL_137;
                                                }
                                                if ( v1697[1] )
                                                {
                                                  v1654 = v1697[1];
                                                  v477 = *(_DWORD *)v1697[1];
                                                  v1452 = RtlULongLongAdd(v1697[1], v106, &v1654);
                                                  v94 = v1452;
                                                  if ( v1452 < 0 )
                                                    goto LABEL_545;
                                                  v1452 = RtlULongLongAdd(v1654, v477, &v1654);
                                                  v94 = v1452;
                                                  if ( v1452 < 0 )
                                                    goto LABEL_545;
                                                  v478 = *v1654;
                                                  v1452 = RtlULongLongAdd(v1654, v106, &v1654);
                                                  v94 = v1452;
                                                  if ( v1452 < 0 )
                                                    goto LABEL_545;
                                                  v479 = v1654;
                                                  if ( !v478 )
                                                    v479 = 0LL;
                                                  v1654 = v479;
                                                  if ( v478 != 8 )
                                                  {
LABEL_543:
                                                    v94 = -1073741789;
                                                    goto LABEL_544;
                                                  }
                                                  v1526 = *v479;
                                                  if ( v1697[1] )
                                                  {
                                                    v480 = (int *)v1697[1];
                                                    v481 = 0;
                                                    v1655 = (int *)v1697[1];
                                                    while ( 1 )
                                                    {
                                                      v1452 = RtlULongLongAdd(v480, v106, &v1655);
                                                      v94 = v1452;
                                                      if ( v1452 < 0 )
                                                        goto LABEL_545;
                                                      v1452 = RtlULongLongAdd(v1655, v482, &v1655);
                                                      v94 = v1452;
                                                      if ( v1452 < 0 )
                                                        goto LABEL_545;
                                                      v480 = v1655;
                                                      if ( (unsigned int)++v481 >= 2 )
                                                      {
                                                        v483 = *v1655;
                                                        v1452 = RtlULongLongAdd(v1655, v106, &v1655);
                                                        v94 = v1452;
                                                        if ( v1452 < 0 )
                                                          goto LABEL_545;
                                                        v484 = v1655;
                                                        if ( !v483 )
                                                          v484 = 0LL;
                                                        v1655 = v484;
                                                        if ( v483 != (_DWORD)v106 )
                                                          goto LABEL_543;
                                                        v1503 = *v484;
                                                        if ( !v1697[1] )
                                                          break;
                                                        v485 = v1697[1];
                                                        v486 = 0;
                                                        v1656 = v1697[1];
                                                        while ( 1 )
                                                        {
                                                          v1452 = RtlULongLongAdd(v485, v106, &v1656);
                                                          v94 = v1452;
                                                          if ( v1452 < 0 )
                                                            goto LABEL_545;
                                                          v1452 = RtlULongLongAdd(v1656, v487, &v1656);
                                                          v94 = v1452;
                                                          if ( v1452 < 0 )
                                                            goto LABEL_545;
                                                          v485 = v1656;
                                                          if ( (unsigned int)++v486 >= 3 )
                                                          {
                                                            v7 = 4LL;
                                                            v1452 = RtlULongLongAdd(v1656, 4LL, &v1656);
                                                            v94 = v1452;
                                                            if ( v1452 >= 0 )
                                                            {
                                                              v490 = v1656;
                                                              v491 = (unsigned int *)v1697[1];
                                                              v492 = 0;
                                                              if ( !v489 )
                                                                v490 = 0LL;
                                                              v1657 = (unsigned int *)v1697[1];
                                                              v1656 = v490;
                                                              do
                                                              {
                                                                v493 = *v491;
                                                                v1452 = RtlULongLongAdd(v491, 4LL, &v1657);
                                                                v94 = v1452;
                                                                if ( v1452 < 0 )
                                                                  goto LABEL_530;
                                                                v1452 = RtlULongLongAdd(v1657, v493, &v1657);
                                                                v94 = v1452;
                                                                v7 = 4LL;
                                                                if ( v1452 < 0 )
                                                                  goto LABEL_592;
                                                                v491 = v1657;
                                                                ++v492;
                                                              }
                                                              while ( v492 < 4 );
                                                              v495 = *v1657;
                                                              v1452 = RtlULongLongAdd(v1657, 4LL, &v1657);
                                                              v94 = v1452;
                                                              if ( v1452 >= 0 )
                                                              {
                                                                v496 = v1657;
                                                                if ( !v495 )
                                                                  v496 = 0LL;
                                                                v1657 = v496;
                                                                if ( v495 == 4 )
                                                                {
                                                                  v497 = (unsigned int *)v1697[1];
                                                                  v498 = 0;
                                                                  v499 = *v496;
                                                                  v1658 = (unsigned int *)v1697[1];
                                                                  v1345 = v499;
                                                                  while ( 1 )
                                                                  {
                                                                    v500 = *v497;
                                                                    v1452 = RtlULongLongAdd(v497, 4LL, &v1658);
                                                                    v94 = v1452;
                                                                    if ( v1452 < 0 )
                                                                      break;
                                                                    v1452 = RtlULongLongAdd(v1658, v500, &v1658);
                                                                    v94 = v1452;
                                                                    if ( v1452 < 0 )
                                                                      break;
                                                                    v497 = v1658;
                                                                    if ( (unsigned int)++v498 >= 5 )
                                                                    {
                                                                      v501 = *v1658;
                                                                      v7 = 4LL;
                                                                      v502 = RtlULongLongAdd(v1658, 4LL, &v1658);
                                                                      v1452 = v502;
                                                                      v94 = v502;
                                                                      if ( v502 < 0 )
                                                                      {
                                                                        v1452 = v502;
                                                                        goto LABEL_592;
                                                                      }
                                                                      v505 = v1658;
                                                                      if ( !v501 )
                                                                        v505 = 0LL;
                                                                      v1658 = v505;
                                                                      if ( v501 == 4 )
                                                                      {
                                                                        v107 = *v505;
                                                                        if ( v1471 != (const wchar_t *)v1526 )
                                                                        {
                                                                          v94 = -1073425151;
                                                                          goto LABEL_588;
                                                                        }
                                                                        v1590 = v1503;
                                                                        if ( v1345 > 4 || (unsigned int)v504 > 4 )
                                                                        {
                                                                          v94 = -2147024774;
                                                                          v1452 = -2147024774;
                                                                        }
                                                                        else
                                                                        {
                                                                          memcpy_0(v1569, v503, v504);
                                                                          if ( v476 )
                                                                          {
                                                                            v94 = v476;
                                                                            v1452 = v476;
                                                                          }
                                                                        }
                                                                        goto LABEL_138;
                                                                      }
                                                                      goto LABEL_590;
                                                                    }
                                                                  }
LABEL_530:
                                                                  v107 = v494;
                                                                  goto LABEL_531;
                                                                }
LABEL_590:
                                                                v94 = -1073741789;
LABEL_588:
                                                                v1452 = v94;
                                                              }
                                                            }
LABEL_592:
                                                            v107 = v488;
                                                            goto LABEL_138;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                v94 = -1073741811;
                                                goto LABEL_544;
                                              }
                                              v193 = 0;
                                              for ( k = 0LL; k < v182; ++k )
                                                v193 ^= *((_BYTE *)v181 + k);
                                              v1338 = v193;
                                              v195 = Src;
                                              v1764 = 0xC81ECB17B1B54A58uLL;
                                              v196 = -1;
                                              v1453 = 0;
                                              v1536 = 0;
                                              v197 = v181;
                                              v198 = 0;
                                              v199 = v192 & 7;
                                              if ( (v192 & 7) != 0 )
                                              {
                                                v200 = 0;
                                                v201 = 0;
                                                v1340 = 0;
                                                v202 = 56;
                                                do
                                                {
                                                  v203 = *(unsigned __int8 *)v197;
                                                  v197 = (WCHAR *)((char *)v197 + 1);
                                                  if ( v200 >= 4 )
                                                    v201 |= v203 << v202;
                                                  else
                                                    v198 |= v203 << (v202 - 32);
                                                  v202 -= 8;
                                                  v200 = v1340 + 1;
                                                  v1453 = v201;
                                                  v1536 = v198;
                                                  v1340 = v200;
                                                }
                                                while ( (int)v200 < (int)v199 );
                                                v192 = v1443;
                                                v198 ^= 0xB17A307A;
                                                v204 = Src;
                                                v205 = v201 ^ 0x42F6B18D;
                                                v206 = v205;
                                                v207 = 0;
                                                v1413 = v181;
                                                v208 = v198;
                                                do
                                                {
                                                  v1495 = v204 + 1;
                                                  if ( v207 >= 4 )
                                                  {
                                                    v206 = __ROL4__(v206, 8);
                                                    v209 = v206;
                                                  }
                                                  else
                                                  {
                                                    v208 = __ROL4__(v208, 8);
                                                    v209 = v208;
                                                  }
                                                  *v204 = v209;
                                                  ++v207;
                                                  ++v204;
                                                }
                                                while ( (int)v207 < (int)v199 );
                                                v195 = v1495;
                                                v183 = 0LL;
                                                if ( v199 <= 4 )
                                                {
                                                  v196 = 0;
                                                  if ( v199 >= 4 )
                                                    goto LABEL_296;
                                                  v198 = v198 >> (8 * (4 - v199)) << (8 * (4 - v199));
                                                }
                                                else
                                                {
                                                  v196 = v205 >> (8 * (8 - v199)) << (8 * (8 - v199));
                                                }
                                                v195 = v1495;
                                              }
LABEL_296:
                                              v210 = v192 >> 3;
                                              if ( v192 >> 3 )
                                              {
                                                v211 = v195 + 7;
                                                v212 = WORD2(v1764);
                                                v213 = v1453;
                                                v214 = v1536;
                                                v1341 = WORD1(v1764);
                                                v1496 = HIWORD(v1764);
                                                v215 = (unsigned __int8 *)(v197 + 1);
                                                do
                                                {
                                                  v216 = *(v215 - 1) | (*(v215 - 2) << 8);
                                                  v217 = v215[2] << 8;
                                                  v218 = *v215;
                                                  v215 += 8;
                                                  v219 = *(v215 - 7) | ((v218 | (v216 << 8)) << 8);
                                                  v220 = *(v215 - 3) | ((*(v215 - 4) | ((*(v215 - 5) | v217) << 8)) << 8);
                                                  v221 = v220 ^ v196;
                                                  v222 = v219 ^ HIDWORD(v1764) ^ (v221 - 19032) ^ v198;
                                                  v223 = (__ROR4__(v222, 7)
                                                        + WORD1(v1764) * __ROR4__(v222 ^ HIDWORD(v1764), 15)) ^ v221;
                                                  v224 = (v212 * __ROR4__(v223 - 1313519016, 9) - __ROR4__(v223, 10)) ^ v222;
                                                  v225 = (__ROL4__(v224, 5) + HIWORD(v1764) * __ROL4__(v212 ^ v224, 4)) ^ v223;
                                                  v226 = (HIDWORD(v1764) - (v225 ^ 0xB1B54A58)) ^ v224;
                                                  v227 = (WORD1(v1764) * (v226 - 19032) - (v226 >> 6)) ^ v225;
                                                  v228 = (19032 * (v212 ^ __ROR4__(v227, 15))) ^ v226;
                                                  v229 = (v212 * (HIWORD(v1764) + __ROR4__(~v228, 3))) ^ v227;
                                                  v230 = (v229 - 19032 - HIDWORD(v1764)) ^ v228;
                                                  v231 = (v1341 * (v1496 ^ v230)) ^ __ROR4__(v230, 10) ^ v229;
                                                  v232 = __ROR4__(v231, 3) ^ (v212 * __ROL4__(v231 ^ 0x4A58, 6)) ^ v230;
                                                  v233 = (19032 * (__ROR4__(v232, 15) - HIWORD(v1764))) ^ v231;
                                                  v234 = (v233 >> 15) ^ (19032 * __ROL4__(v233 - v212, 3)) ^ (v233 >> 1) ^ (19032 * (HIWORD(v1764) ^ v233)) ^ v232;
                                                  v235 = (WORD1(v1764) * (v234 - v212) - (v234 >> 13)) ^ v233;
                                                  v236 = __ROR4__(v235, 11) ^ (v212 * __ROR4__(-1313519016 - v235, 9)) ^ v234;
                                                  v237 = (v236 + 1313519016 - HIWORD(v1764)) ^ v235;
                                                  v238 = (19032 * (v1341 ^ v237) - __ROR4__(v237, 7)) ^ v236;
                                                  v239 = (WORD1(v1764) * __ROL4__(HIWORD(v1764) ^ v238, 4)
                                                        - __ROR4__(v238, 16)) ^ v237;
                                                  v240 = (__ROR4__(v239, 4) + v212 * __ROR4__(-1313519016 - v239, 10)) ^ v238;
                                                  v241 = __ROR4__(v240, 9) ^ (HIWORD(v1764)
                                                                            * __ROR4__(v240 + 1313519016, 4)) ^ v239;
                                                  v242 = (19032 * __ROL4__(v241 ^ HIDWORD(v1764), 8) - __ROL4__(v241, 2)) ^ v240;
                                                  v243 = (WORD1(v1764) * __ROR4__(HIDWORD(v1764) - v242, 11)
                                                        - __ROR4__(v242, 12)) ^ v241;
                                                  v244 = (v243 >> 8) ^ (v212 * (WORD1(v1764) ^ v243)) ^ v242;
                                                  v245 = v214 ^ v244;
                                                  *(v211 - 4) = v214 ^ v244;
                                                  v214 = v219;
                                                  v246 = __ROR4__(v245, 8);
                                                  v247 = v213 ^ HIDWORD(v1764) ^ v244 ^ 0xB1B54A58 ^ v243;
                                                  v213 = v220;
                                                  *v211 = v247;
                                                  *(v211 - 5) = v246;
                                                  v211 += 8;
                                                  v248 = __ROR4__(v247, 8);
                                                  *(v211 - 9) = v248;
                                                  v249 = __ROR4__(v246, 8);
                                                  *(v211 - 14) = v249;
                                                  v250 = __ROR4__(v248, 8);
                                                  *(v211 - 10) = v250;
                                                  v251 = __ROR4__(v249, 8);
                                                  v252 = __ROR4__(v250, 8);
                                                  *(v211 - 15) = v251;
                                                  *(v211 - 11) = v252;
                                                  v196 = __ROR4__(v252, 8);
                                                  v198 = __ROR4__(v251, 8);
                                                  --v210;
                                                }
                                                while ( v210 );
                                                v193 = v1338;
                                                LODWORD(v2) = 0;
                                                v181 = (WCHAR *)v1413;
                                                v183 = 0LL;
                                                v192 = v1443;
                                              }
                                              *(_QWORD *)&Src[v192] = v193;
                                              v253 = Size;
                                              v1642[3] = (void *)8;
                                              v1642[4] = (void *)160;
                                              v254 = GetProcessHeap();
                                              v255 = HeapAlloc(v254, 8u, 0x30uLL);
                                              v256 = v255;
                                              if ( v255 )
                                              {
                                                *v255 = v253;
                                                v258 = GetProcessHeap();
                                                v259 = HeapAlloc(v258, 8u, v253);
                                                if ( !v259 )
                                                  goto LABEL_306;
                                                *((_QWORD *)v256 + 1) = v259;
                                                memcpy_0(v259, Src, v253);
                                                v256[4] = 160;
                                                v260 = GetProcessHeap();
                                                v261 = HeapAlloc(v260, 8u, 0xA0uLL);
                                                if ( !v261 )
                                                  goto LABEL_306;
                                                *((_QWORD *)v256 + 3) = v261;
                                                *v261 = xmmword_1800DC600[0];
                                                v261[1] = xmmword_1800DC600[1];
                                                v261[2] = xmmword_1800DC600[2];
                                                v261[3] = xmmword_1800DC600[3];
                                                v261[4] = xmmword_1800DC600[4];
                                                v261[5] = xmmword_1800DC600[5];
                                                v261[6] = xmmword_1800DC600[6];
                                                v261[7] = xmmword_1800DC600[7];
                                                v261[8] = xmmword_1800DC600[8];
                                                v261[9] = xmmword_1800DC600[9];
                                                v256[8] = 8;
                                                v262 = GetProcessHeap();
                                                v263 = HeapAlloc(v262, 8u, 8uLL);
                                                if ( v263 )
                                                {
                                                  *((_QWORD *)v256 + 5) = v263;
                                                  v257 = 0;
                                                  *v263 = qword_1800DC6A0;
                                                  v183 = v256;
                                                }
                                                else
                                                {
LABEL_306:
                                                  v257 = -1073741801;
                                                  v1444 = (void *)*((_QWORD *)v256 + 1);
                                                  if ( v1444 )
                                                  {
                                                    v264 = GetProcessHeap();
                                                    HeapFree(v264, 0, v1444);
                                                    *((_QWORD *)v256 + 1) = 0LL;
                                                  }
                                                  v1445 = (void *)*((_QWORD *)v256 + 3);
                                                  if ( v1445 )
                                                  {
                                                    v265 = GetProcessHeap();
                                                    HeapFree(v265, 0, v1445);
                                                    *((_QWORD *)v256 + 3) = 0LL;
                                                  }
                                                  v1446 = (void *)*((_QWORD *)v256 + 5);
                                                  if ( v1446 )
                                                  {
                                                    v266 = GetProcessHeap();
                                                    HeapFree(v266, 0, v1446);
                                                    *((_QWORD *)v256 + 5) = 0LL;
                                                  }
                                                  v267 = GetProcessHeap();
                                                  HeapFree(v267, 0, v256);
                                                }
                                              }
                                              else
                                              {
                                                v257 = -1073741801;
                                              }
                                              v268 = GetProcessHeap();
                                              HeapFree(v268, 0, Src);
                                              v94 = v257 | 0x10000000;
                                              v1452 = v94;
                                              if ( v94 < 0 )
                                                goto LABEL_342;
                                              v269 = (unsigned int)*v183;
                                              LODWORD(v1579) = 4;
                                              v271 = RtlUIntAdd(4LL, v269, &v1579);
                                              if ( v271 >= 0 )
                                              {
                                                v271 = RtlUIntAdd((unsigned int)v1579, v270, &v1579);
                                                if ( v271 >= 0 )
                                                {
                                                  v271 = RtlUIntAdd((unsigned int)v1579, (unsigned int)v183[4], &v1579);
                                                  if ( v271 >= 0 )
                                                  {
                                                    v271 = RtlUIntAdd((unsigned int)v1579, v272, &v1579);
                                                    if ( v271 >= 0 )
                                                    {
                                                      v271 = RtlUIntAdd(
                                                               (unsigned int)v1579,
                                                               (unsigned int)v183[8],
                                                               &v1579);
                                                      if ( v271 >= 0 )
                                                      {
                                                        v1497 = v1579;
                                                        v273 = v1579;
                                                        v274 = GetProcessHeap();
                                                        v275 = HeapAlloc(v274, 8u, v273);
                                                        v276 = v275;
                                                        if ( !v275 )
                                                          goto LABEL_393;
                                                        v1643 = v275;
                                                        *v275 = *v183;
                                                        v271 = RtlULongLongAdd(v275, 4LL, &v1643);
                                                        if ( v271 >= 0 )
                                                        {
                                                          memcpy_0(
                                                            v1643,
                                                            *((const void **)v183 + 1),
                                                            (unsigned int)*v183);
                                                          v271 = RtlULongLongAdd(v1643, (unsigned int)*v183, &v1643);
                                                          if ( v271 >= 0 )
                                                          {
                                                            v277 = v1643;
                                                            *(_DWORD *)v1643 = v183[4];
                                                            v271 = RtlULongLongAdd(v277, 4LL, &v1643);
                                                            if ( v271 >= 0 )
                                                            {
                                                              memcpy_0(
                                                                v1643,
                                                                *((const void **)v183 + 3),
                                                                (unsigned int)v183[4]);
                                                              v271 = RtlULongLongAdd(
                                                                       v1643,
                                                                       (unsigned int)v183[4],
                                                                       &v1643);
                                                              if ( v271 >= 0 )
                                                              {
                                                                v278 = v1643;
                                                                *(_DWORD *)v1643 = v183[8];
                                                                v271 = RtlULongLongAdd(v278, 4LL, &v1643);
                                                                if ( v271 >= 0 )
                                                                {
                                                                  memcpy_0(
                                                                    v1643,
                                                                    *((const void **)v183 + 5),
                                                                    (unsigned int)v183[8]);
                                                                  v271 = RtlULongLongAdd(
                                                                           v1643,
                                                                           (unsigned int)v183[8],
                                                                           &v1643);
                                                                  if ( v271 >= 0 )
                                                                  {
                                                                    v1484 = v1497;
                                                                    v1541 = v276;
                                                                    goto LABEL_330;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                        v279 = GetProcessHeap();
                                                        HeapFree(v279, 0, v276);
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                              v276 = 0LL;
LABEL_330:
                                              v94 = v271 | 0x10000000;
                                              v1452 = v94;
                                              if ( v94 < 0 )
                                                goto LABEL_342;
                                              v1580 = 8;
                                              v280 = RtlUIntAdd(8LL, v1428, &v1580);
                                              v94 = v282 | v280;
                                              v1452 = v282 | v280;
                                              if ( (v282 | v280) >= 0 )
                                              {
                                                v283 = (v1580 + 7) & 0xFFFFFFF8;
                                                if ( v283 < v1580 )
                                                {
                                                  v94 = -1073741675;
LABEL_388:
                                                  v1452 = v94;
                                                  goto LABEL_342;
                                                }
                                                v1581 = (v1580 + 7) & 0xFFFFFFF8;
                                                v1452 = RtlUIntAdd(v283, v281, &v1581);
                                                v94 = v1452;
                                                if ( v1452 < 0 )
                                                  goto LABEL_342;
                                                if ( !lpMem[1] || LODWORD(lpMem[0]) <= 1 )
                                                {
                                                  v94 = -1073741811;
                                                  goto LABEL_388;
                                                }
                                                v1644 = (unsigned int *)lpMem[1];
                                                v1452 = RtlULongLongAdd(lpMem[1], 4LL, &v1644);
                                                v94 = v1452;
                                                if ( v1452 >= 0 )
                                                {
                                                  v1452 = RtlULongLongAdd(v1644, v284, &v1644);
                                                  v94 = v1452;
                                                  if ( v1452 >= 0 )
                                                  {
                                                    v1498 = *v1644;
                                                    v1452 = RtlULongLongAdd(v1644, 4LL, &v1644);
                                                    v94 = v1452;
                                                    if ( v1452 >= 0 )
                                                    {
                                                      if ( LODWORD(lpMem[0]) > 2 )
                                                      {
                                                        v307 = lpMem[1];
                                                        v1645 = lpMem[1];
                                                        v1541 = v276;
                                                        v1484 = v285;
                                                        while ( 1 )
                                                        {
                                                          v1452 = RtlULongLongAdd(v307, 4LL, &v1645);
                                                          v94 = v1452;
                                                          if ( v1452 < 0 )
                                                            break;
                                                          v1452 = RtlULongLongAdd(v1645, v308, &v1645);
                                                          v94 = v1452;
                                                          if ( v1452 < 0 )
                                                            break;
                                                          v307 = v1645;
                                                          if ( (unsigned int)(v309 + 1) >= 2 )
                                                          {
                                                            v1452 = RtlULongLongAdd(v1645, 4LL, &v1645);
                                                            v94 = v1452;
                                                            if ( v1452 < 0 )
                                                              break;
                                                            LODWORD(v1582) = v311;
                                                            v1452 = RtlUIntAdd(v311, v310, &v1582);
                                                            v94 = v1452;
                                                            if ( v1452 < 0 )
                                                              goto LABEL_381;
                                                            v1452 = RtlUIntAdd((unsigned int)v1582, v312, &v1582);
                                                            v94 = v1452;
                                                            if ( v1452 < 0
                                                              || (v1452 = RtlUIntAdd((unsigned int)v1582, v1498, &v1582),
                                                                  v94 = v1452,
                                                                  v1452 < 0)
                                                              || (v1452 = RtlUIntAdd((unsigned int)v1582, v313, &v1582),
                                                                  v94 = v1452,
                                                                  v1452 < 0)
                                                              || (v1452 = RtlUIntAdd((unsigned int)v1582, v314, &v1582),
                                                                  v94 = v1452,
                                                                  v1452 < 0) )
                                                            {
LABEL_381:
                                                              if ( v94 < 0 )
                                                                goto LABEL_389;
                                                              v315 = HIDWORD(v1582);
                                                            }
                                                            else
                                                            {
                                                              v315 = v1582;
                                                            }
                                                            v1499 = v315;
                                                            if ( v315 > 0x400000 )
                                                            {
                                                              v94 = -2147418113;
                                                              goto LABEL_388;
                                                            }
                                                            goto LABEL_390;
                                                          }
                                                        }
                                                      }
                                                      else
                                                      {
                                                        v94 = -1073741811;
                                                        v1452 = -1073741811;
                                                      }
                                                    }
                                                  }
                                                }
LABEL_342:
                                                if ( !v181 )
                                                  goto LABEL_344;
                                                goto LABEL_343;
                                              }
LABEL_389:
                                              v315 = 0;
                                              v1499 = 0;
                                              if ( v94 < 0 )
                                                goto LABEL_342;
LABEL_390:
                                              Size = (SIZE_T)v276;
                                              v317 = v315;
                                              Srca = v181;
                                              v1447 = v183;
                                              v318 = GetProcessHeap();
                                              v319 = HeapAlloc(v318, 8u, v317);
                                              v1537 = (SIZE_T)v319;
                                              v320 = (SIZE_T)v319;
                                              if ( v319 )
                                              {
                                                v321 = Size;
                                                if ( !Size )
                                                {
                                                  v94 = -2147024809;
                                                  v1561 = (SIZE_T)v319;
                                                  v1541 = 0LL;
LABEL_402:
                                                  v183 = v1447;
                                                  v1452 = v94;
                                                  goto LABEL_342;
                                                }
                                                v1712 = v1484;
                                                v1713 = v1499;
                                                v1711[0] = Size;
                                                v1711[1] = v319;
                                                v1714 = 0;
                                                if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
                                                {
                                                  ProcAddress = GetProcAddress(phModule, "NtQuerySystemInformation");
                                                  if ( ProcAddress )
                                                  {
                                                    v326 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(
                                                             134LL,
                                                             v1711);
                                                    v323 = v1499;
                                                    v94 = v326 | 0x10000000;
                                                    v1452 = v326 | 0x10000000;
                                                    if ( v326 >= 0 )
                                                    {
                                                      v323 = v1713;
                                                      v327 = (_DWORD *)v320;
                                                      v328 = v1447;
                                                      v329 = (void *)v321;
                                                      v1499 = v1713;
                                                      v330 = v181;
                                                      goto LABEL_412;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v325 = GetLastError();
                                                    v94 = v325;
                                                    if ( v325 > 0 )
                                                      v94 = (unsigned __int16)v325 | 0x80070000;
                                                    v323 = v1499;
                                                    if ( v94 >= 0 )
                                                      v94 = -2147467259;
                                                    v1452 = v94;
                                                  }
                                                }
                                                else
                                                {
                                                  v322 = GetLastError();
                                                  v94 = v322;
                                                  if ( v322 > 0 )
                                                    v94 = (unsigned __int16)v322 | 0x80070000;
                                                  v323 = v1499;
                                                  if ( v94 >= 0 )
                                                    v94 = -2147467259;
                                                  v1452 = v94;
                                                }
                                                v1561 = v320;
                                                v1541 = (void *)v321;
                                                if ( v94 == -805306333 )
                                                {
                                                  v94 = -2147024774;
                                                  goto LABEL_402;
                                                }
                                                v328 = v1447;
                                                v329 = (void *)v321;
                                                v183 = v1447;
                                                v327 = (_DWORD *)v320;
                                                v330 = v181;
                                                if ( v94 < 0 )
                                                  goto LABEL_342;
LABEL_412:
                                                v1583 = 0;
                                                v1647 = v327;
                                                if ( v323 < 4 )
                                                {
                                                  v183 = v328;
LABEL_415:
                                                  v94 = -805306306;
                                                  v1541 = v329;
                                                  v1452 = -805306306;
                                                  v181 = v330;
                                                  v1561 = (SIZE_T)v327;
                                                  goto LABEL_342;
                                                }
                                                v1342 = *v327;
                                                v183 = v1447;
                                                v331 = RtlULongLongAdd(v327, 4LL, &v1647);
                                                v1550 = (SIZE_T)v1447;
                                                v333 = (SIZE_T)v332;
                                                v1561 = v334;
                                                v181 = v335;
                                                v1541 = v332;
                                                v1414 = v335;
                                                if ( v331 >= 0 )
                                                {
                                                  v336 = RtlUIntAdd(0LL, 4LL, &v1583);
                                                  v1561 = (SIZE_T)v327;
                                                  v331 = v336;
                                                  v1541 = v329;
                                                  v1550 = (SIZE_T)v1447;
                                                  v1414 = v337;
                                                  if ( v336 >= 0 )
                                                  {
                                                    if ( v1499 - v1583 < v1342 )
                                                      goto LABEL_436;
                                                    v1485 = v1647;
                                                    v338 = RtlULongLongAdd(v1647, v1342, &v1647);
                                                    v1561 = v339;
                                                    v331 = v338;
                                                    v1541 = v340;
                                                    v1550 = (SIZE_T)v1447;
                                                    v1414 = v341;
                                                    if ( v338 >= 0 )
                                                    {
                                                      v342 = RtlUIntAdd(v1583, v1342, &v1583);
                                                      v1561 = (SIZE_T)v327;
                                                      v331 = v342;
                                                      v1541 = v329;
                                                      v1550 = (SIZE_T)v1447;
                                                      v1414 = v343;
                                                      if ( v342 >= 0 )
                                                      {
                                                        if ( v1499 - v1583 < 4 )
                                                          goto LABEL_436;
                                                        v1454 = *(_DWORD *)v1647;
                                                        v344 = RtlULongLongAdd(v1647, 4LL, &v1647);
                                                        v1561 = v345;
                                                        v331 = v344;
                                                        v1541 = v346;
                                                        v1550 = (SIZE_T)v1447;
                                                        v1414 = v347;
                                                        if ( v344 >= 0 )
                                                        {
                                                          v348 = RtlUIntAdd(v1583, 4LL, &v1583);
                                                          v1561 = (SIZE_T)v327;
                                                          v331 = v348;
                                                          v1541 = v329;
                                                          v1550 = (SIZE_T)v1447;
                                                          v1414 = v349;
                                                          if ( v348 >= 0 )
                                                          {
                                                            if ( v1499 - v1583 < v1454 )
                                                              goto LABEL_436;
                                                            v1521 = v1647;
                                                            v350 = RtlULongLongAdd(v1647, v1454, &v1647);
                                                            v1561 = v351;
                                                            v331 = v350;
                                                            v1541 = v352;
                                                            v1550 = (SIZE_T)v1447;
                                                            v1414 = v353;
                                                            if ( v350 >= 0 )
                                                            {
                                                              v354 = RtlUIntAdd(v1583, v1454, &v1583);
                                                              v1561 = (SIZE_T)v327;
                                                              v331 = v354;
                                                              v1541 = v329;
                                                              v1550 = (SIZE_T)v1447;
                                                              v1414 = v355;
                                                              if ( v354 >= 0 )
                                                              {
                                                                if ( v1499 - v1583 < 4 )
                                                                  goto LABEL_436;
                                                                v1429 = *(_DWORD *)v1647;
                                                                v356 = RtlULongLongAdd(v1647, 4LL, &v1647);
                                                                v1561 = v357;
                                                                v331 = v356;
                                                                v1541 = v358;
                                                                v1550 = (SIZE_T)v1447;
                                                                v1414 = v359;
                                                                if ( v356 >= 0 )
                                                                {
                                                                  v360 = RtlUIntAdd(v1583, 4LL, &v1583);
                                                                  v1561 = (SIZE_T)v327;
                                                                  v331 = v360;
                                                                  v1541 = v329;
                                                                  v1550 = (SIZE_T)v1447;
                                                                  v1414 = v361;
                                                                  if ( v360 >= 0 )
                                                                  {
                                                                    if ( v1499 - v1583 < v1429 )
                                                                      goto LABEL_436;
                                                                    v362 = RtlUIntAdd(v1583, v1429, &v1583);
                                                                    v1561 = (SIZE_T)v327;
                                                                    v331 = v362;
                                                                    v1541 = v329;
                                                                    v1550 = (SIZE_T)v1447;
                                                                    v1414 = v330;
                                                                    if ( v362 >= 0 )
                                                                    {
                                                                      if ( v1499 == v1583 )
                                                                      {
                                                                        if ( v1429 + v1454 + v1342 + 12LL != v1499 )
                                                                        {
                                                                          v183 = v1447;
                                                                          goto LABEL_415;
                                                                        }
                                                                        v363 = GetProcessHeap();
                                                                        v364 = HeapAlloc(v363, 8u, 0x30uLL);
                                                                        v1500 = v364;
                                                                        v365 = v364;
                                                                        if ( !v364 )
                                                                        {
                                                                          v94 = -805306345;
                                                                          v183 = v1447;
                                                                          v181 = Srca;
                                                                          v1561 = v1537;
                                                                          v1541 = (void *)Size;
                                                                          v1452 = -805306345;
                                                                          goto LABEL_342;
                                                                        }
                                                                        if ( v1485 )
                                                                        {
                                                                          *(_DWORD *)v364 = v1342;
                                                                          v366 = GetProcessHeap();
                                                                          v367 = HeapAlloc(v366, 8u, v1342);
                                                                          if ( !v367 )
                                                                            goto LABEL_448;
                                                                          v365[1] = v367;
                                                                          memcpy_0(v367, v1485, v1342);
                                                                        }
                                                                        else
                                                                        {
                                                                          *(_DWORD *)v364 = 0;
                                                                          v364[1] = 0LL;
                                                                        }
                                                                        if ( v1521 )
                                                                        {
                                                                          *((_DWORD *)v365 + 4) = v1454;
                                                                          v368 = GetProcessHeap();
                                                                          v369 = HeapAlloc(v368, 8u, v1454);
                                                                          if ( !v369 )
                                                                            goto LABEL_448;
                                                                          v365[3] = v369;
                                                                          memcpy_0(v369, v1521, v1454);
                                                                        }
                                                                        else
                                                                        {
                                                                          *((_DWORD *)v365 + 4) = 0;
                                                                          v365[3] = 0LL;
                                                                        }
                                                                        if ( !v1647 )
                                                                        {
                                                                          *((_DWORD *)v365 + 8) = 0;
                                                                          v365[5] = 0LL;
                                                                          goto LABEL_466;
                                                                        }
                                                                        *((_DWORD *)v365 + 8) = v1429;
                                                                        v370 = GetProcessHeap();
                                                                        v371 = HeapAlloc(v370, 8u, v1429);
                                                                        if ( v371 )
                                                                        {
                                                                          v365[5] = v371;
                                                                          memcpy_0(v371, v1647, v1429);
LABEL_466:
                                                                          v183 = v1447;
                                                                          v331 = 0;
                                                                          v181 = Srca;
                                                                          v1568 = v365;
                                                                          v1561 = v1537;
                                                                          v333 = Size;
                                                                          v1541 = (void *)Size;
                                                                          v1550 = (SIZE_T)v1447;
                                                                          v1414 = Srca;
                                                                          v377 = (unsigned int *)v1568;
                                                                          goto LABEL_456;
                                                                        }
LABEL_448:
                                                                        v331 = -1073741801;
                                                                        v183 = v1447;
                                                                        v181 = Srca;
                                                                        v1561 = v1537;
                                                                        v333 = Size;
                                                                        v372 = v1500;
                                                                        v1568 = 0LL;
                                                                        v1522 = (void *)v1500[1];
                                                                        if ( v1522 )
                                                                        {
                                                                          v373 = GetProcessHeap();
                                                                          HeapFree(v373, 0, v1522);
                                                                          v372 = v1500;
                                                                          v1500[1] = 0LL;
                                                                        }
                                                                        v1523 = (void *)v372[3];
                                                                        if ( v1523 )
                                                                        {
                                                                          v374 = GetProcessHeap();
                                                                          HeapFree(v374, 0, v1523);
                                                                          v372 = v1500;
                                                                          v1500[3] = 0LL;
                                                                        }
                                                                        v1524 = (void *)v372[5];
                                                                        if ( v1524 )
                                                                        {
                                                                          v375 = GetProcessHeap();
                                                                          HeapFree(v375, 0, v1524);
                                                                          v1500[5] = 0LL;
                                                                        }
                                                                        v376 = GetProcessHeap();
                                                                        HeapFree(v376, 0, v1500);
                                                                        v1568 = 0LL;
                                                                        v377 = 0LL;
                                                                        v1541 = (void *)v333;
                                                                        v1550 = (SIZE_T)v1447;
                                                                        v1414 = Srca;
LABEL_456:
                                                                        v94 = v331 | 0x10000000;
                                                                        v1452 = v94;
                                                                        if ( v94 < 0 )
                                                                          goto LABEL_342;
                                                                        if ( !v377
                                                                          || (v1525 = (char *)*((_QWORD *)v377 + 1)) == 0LL
                                                                          || !*v377 )
                                                                        {
                                                                          v94 = -805306355;
                                                                          goto LABEL_388;
                                                                        }
                                                                        v378 = *v377 - 8LL;
                                                                        v1458 = v378;
                                                                        Srcb = MemoryAlloc(v378);
                                                                        v379 = Srcb;
                                                                        if ( !Srcb )
                                                                          goto LABEL_489;
                                                                        v380 = v1525;
                                                                        v381 = 0;
                                                                        v382 = Srcb;
                                                                        v1564 = v1525;
                                                                        v1766 = 0x7F1137FAB69605ELL;
                                                                        v383 = v378 & 7;
                                                                        if ( v383 )
                                                                        {
                                                                          v384 = 0;
                                                                          v1455 = 0;
                                                                          v385 = 56;
                                                                          v386 = 0;
                                                                          v387 = (unsigned __int8 *)v1564;
                                                                          v388 = 0;
                                                                          do
                                                                          {
                                                                            v389 = *v387++;
                                                                            if ( v384 >= 4 )
                                                                              v388 |= v389 << v385;
                                                                            else
                                                                              v386 |= v389 << (v385 - 32);
                                                                            v385 -= 8;
                                                                            v384 = v1455 + 1;
                                                                            v1455 = v384;
                                                                          }
                                                                          while ( (int)v384 < (int)v383 );
                                                                          v390 = v386 ^ 0x92F65A5;
                                                                          v1501 = v388;
                                                                          v391 = v388;
                                                                          v1343 = v386;
                                                                          v379 = Srcb;
                                                                          v392 = v391 ^ 0x699A899C;
                                                                          v381 = 0;
                                                                          v393 = 0;
                                                                          v1564 = v387;
                                                                          v394 = v390;
                                                                          v1541 = (void *)v333;
                                                                          v395 = v392;
                                                                          v1550 = (SIZE_T)v183;
                                                                          v1414 = v181;
                                                                          v396 = Srcb;
                                                                          do
                                                                          {
                                                                            v1448 = v396 + 1;
                                                                            if ( v393 >= 4 )
                                                                            {
                                                                              v395 = __ROL4__(v395, 8);
                                                                              v397 = v395;
                                                                            }
                                                                            else
                                                                            {
                                                                              v394 = __ROL4__(v394, 8);
                                                                              v397 = v394;
                                                                            }
                                                                            *v396 = v397;
                                                                            ++v393;
                                                                            ++v396;
                                                                          }
                                                                          while ( (int)v393 < (int)v383 );
                                                                          v382 = v1448;
                                                                          LODWORD(v2) = 0;
                                                                          if ( v383 > 4 )
                                                                          {
                                                                            v398 = v392 >> (8 * (8 - v383)) << (8 * (8 - v383));
                                                                            v382 = v1448;
LABEL_477:
                                                                            v380 = (char *)v1564;
                                                                            goto LABEL_478;
                                                                          }
                                                                          v398 = 0;
                                                                          if ( v383 >= 4 )
                                                                            goto LABEL_477;
                                                                          v380 = (char *)v1564;
                                                                          v390 = v390 >> (8 * (4 - v383)) << (8 * (4 - v383));
                                                                          v382 = v1448;
                                                                        }
                                                                        else
                                                                        {
                                                                          v1343 = 0;
                                                                          v1501 = -1;
                                                                          v398 = 0;
                                                                          v390 = 0;
                                                                        }
LABEL_478:
                                                                        v399 = v1458;
                                                                        v1564 = (LPVOID)(v1458 >> 3);
                                                                        if ( v1458 >> 3 )
                                                                        {
                                                                          v400 = (char *)v382 + 7;
                                                                          v401 = v1343;
                                                                          v402 = (unsigned __int8 *)(v380 + 2);
                                                                          v403 = (char *)v1564;
                                                                          v404 = HIDWORD(v1766);
                                                                          v1456 = WORD2(v1766);
                                                                          v1430 = WORD1(v1766);
                                                                          v405 = HIDWORD(v1766) ^ 0xAB69605E;
                                                                          v406 = v1501;
                                                                          do
                                                                          {
                                                                            v407 = *(v402 - 1) | (*(v402 - 2) << 8);
                                                                            v408 = v402[2] << 8;
                                                                            v409 = *v402;
                                                                            v402 += 8;
                                                                            v410 = *(v402 - 7) | ((v409 | (v407 << 8)) << 8);
                                                                            v411 = v410 ^ v390;
                                                                            v412 = *(v402 - 3) | ((*(v402 - 4) | ((*(v402 - 5) | v408) << 8)) << 8);
                                                                            v413 = v411 ^ v404 ^ 0xAB69605E ^ v412 ^ v398;
                                                                            v414 = (__ROL4__(v413, 10)
                                                                                  + v1456
                                                                                  * __ROL4__(v413 + 1419157410, 5)) ^ v411;
                                                                            v415 = (WORD1(v1766)
                                                                                  * __ROR4__(v404 + v414, 9)
                                                                                  - __ROL4__(v414, 2)) ^ v413;
                                                                            v416 = (24670 * (v415 - v1456) - (v415 >> 13)) ^ v414;
                                                                            v417 = (HIWORD(v1766)
                                                                                  * __ROL4__(v416 ^ WORD1(v1766), 6)
                                                                                  - __ROL4__(v416, 2)) ^ v415;
                                                                            v418 = (v404 - (v417 ^ 0xAB69605E)) ^ v416;
                                                                            v419 = (v1430 * (v418 ^ v1456)) ^ __ROR4__(v418, 6) ^ v417;
                                                                            v420 = (__ROL4__(v419, 2)
                                                                                  + 24670 * __ROR4__(v404 + v419, 15)) ^ v418;
                                                                            v421 = (HIWORD(v1766)
                                                                                  * __ROR4__(v420 + 1419157410, 14)
                                                                                  - __ROL4__(v420, 8)) ^ v419;
                                                                            v422 = __ROR4__(v421, 10) ^ (v1456 * __ROR4__(v421 ^ 0xAB69605E, 12)) ^ v420;
                                                                            v423 = (v422 >> 10) ^ (WORD1(v1766)
                                                                                                 * (v422 ^ HIWORD(v1766))) ^ v421;
                                                                            v424 = (HIWORD(v1766)
                                                                                  * (__ROR4__(~v423, 5) + 24670)) ^ v422;
                                                                            v425 = (v424 - HIWORD(v1766)) ^ 0xAB69605E ^ v423;
                                                                            v426 = ((v425 >> 2)
                                                                                  + v1456
                                                                                  * __ROL4__(v425 ^ HIWORD(v1766), 2)) ^ v424;
                                                                            v427 = (__ROL4__(v426, 7)
                                                                                  + WORD1(v1766)
                                                                                  * __ROR4__(v426 - v404, 6)) ^ v425;
                                                                            v428 = (24670 * (v427 ^ v1456)
                                                                                  + __ROR4__(v427, 9)) ^ v426;
                                                                            v429 = (__ROL4__(v428, 7)
                                                                                  + HIWORD(v1766)
                                                                                  * __ROL4__(v428 ^ WORD1(v1766), 5)) ^ v427;
                                                                            v430 = v429 ^ v405 ^ v428;
                                                                            v431 = (v1456
                                                                                  * (__ROR4__(v430, 3) - WORD1(v1766))) ^ v429;
                                                                            v432 = (24670 * __ROR4__(v431 - v404, 1)
                                                                                  - __ROR4__(v431, 6)) ^ v430;
                                                                            v433 = (__ROL4__(v432, 14)
                                                                                  + HIWORD(v1766)
                                                                                  * __ROL4__(v432 - 1419157410, 3)) ^ v431;
                                                                            v434 = (v1456
                                                                                  * __ROL4__(v433 - 1419157410, 15)
                                                                                  - __ROR4__(v433, 14)) ^ v432;
                                                                            v435 = (v434 >> 3) ^ (WORD1(v1766)
                                                                                                * (v434 ^ 0x605E)) ^ v433;
                                                                            v436 = v435 ^ v404;
                                                                            v437 = v435;
                                                                            v438 = v406 ^ v435;
                                                                            v406 = v412;
                                                                            v439 = v401 ^ __ROL4__(v437, 2) ^ (24670 * __ROL4__(v436, 4));
                                                                            v401 = v410;
                                                                            v440 = v439 ^ v434;
                                                                            *(v400 - 4) = v440;
                                                                            *v400 = v438;
                                                                            v400 += 8;
                                                                            v441 = __ROR4__(v440, 8);
                                                                            *(v400 - 13) = v441;
                                                                            v442 = __ROR4__(v438, 8);
                                                                            *(v400 - 9) = v442;
                                                                            v443 = __ROR4__(v441, 8);
                                                                            *(v400 - 14) = v443;
                                                                            v444 = __ROR4__(v442, 8);
                                                                            *(v400 - 10) = v444;
                                                                            v445 = __ROR4__(v443, 8);
                                                                            v446 = __ROR4__(v444, 8);
                                                                            *(v400 - 15) = v445;
                                                                            *(v400 - 11) = v446;
                                                                            v398 = __ROR4__(v446, 8);
                                                                            v390 = __ROR4__(v445, 8);
                                                                            --v403;
                                                                          }
                                                                          while ( v403 );
                                                                          v381 = 0;
                                                                          v183 = (_DWORD *)v1550;
                                                                          LODWORD(v2) = 0;
                                                                          v181 = (WCHAR *)v1414;
                                                                          v379 = Srcb;
                                                                          v399 = v1458;
                                                                        }
                                                                        for ( m = 0LL; m < v399; ++m )
                                                                          v381 ^= *((_BYTE *)v379 + m);
                                                                        v448 = v1568;
                                                                        v449 = v1561;
                                                                        if ( v381 != *(_QWORD *)&v1525[v399] )
                                                                        {
                                                                          MemoryFree(v379);
LABEL_489:
                                                                          v94 = -805306367;
                                                                          v1564 = 0LL;
                                                                          v1452 = -805306367;
                                                                          goto LABEL_342;
                                                                        }
                                                                        v1584 = 0;
                                                                        v1649 = v379;
                                                                        if ( (unsigned int)v399 >= 4 )
                                                                        {
                                                                          v1502 = *v379;
                                                                          v450 = v1541;
                                                                          v316 = RtlULongLongAdd(v379, 4LL, &v1649);
                                                                          v1564 = v451;
                                                                          v1568 = v452;
                                                                          v1561 = v453;
                                                                          if ( v316 < 0 )
                                                                            goto LABEL_387;
                                                                          v454 = RtlUIntAdd(0LL, 4LL, &v1584);
                                                                          v1564 = v379;
                                                                          v316 = v454;
                                                                          v1568 = v448;
                                                                          v455 = v183;
                                                                          v1561 = v449;
                                                                          if ( v454 < 0 )
                                                                            goto LABEL_387;
                                                                          if ( (unsigned int)v1458 - v1584 < 4 )
                                                                            goto LABEL_504;
                                                                          v1344 = *(_DWORD *)v1649;
                                                                          v316 = RtlULongLongAdd(v1649, 4LL, &v1649);
                                                                          v1564 = v456;
                                                                          v1568 = v457;
                                                                          v1561 = v458;
                                                                          if ( v316 < 0 )
                                                                            goto LABEL_387;
                                                                          v459 = RtlUIntAdd(v1584, 4LL, &v1584);
                                                                          v1564 = v379;
                                                                          v316 = v459;
                                                                          v1568 = v448;
                                                                          v455 = v183;
                                                                          v1561 = v449;
                                                                          if ( v459 < 0 )
                                                                            goto LABEL_387;
                                                                          if ( (unsigned int)v1458 - v1584 < v1344 )
                                                                          {
LABEL_504:
                                                                            v183 = v455;
                                                                          }
                                                                          else
                                                                          {
                                                                            v316 = RtlUIntAdd(v1584, v1344, &v1584);
                                                                            v1564 = v379;
                                                                            v1568 = v448;
                                                                            v1561 = v449;
                                                                            if ( v316 < 0 )
                                                                              goto LABEL_387;
                                                                            if ( (char *)v379 + (unsigned int)v1458 >= (char *)v1649 + v1344
                                                                              && (unsigned __int64)(unsigned int)v1458
                                                                               + (char *)v379
                                                                               - v1344
                                                                               - (_BYTE *)v1649 < 8 )
                                                                            {
                                                                              v1459 = 0LL;
                                                                              v316 = 0;
                                                                              v1457 = 0;
                                                                              v1564 = v379;
                                                                              v1568 = v448;
                                                                              v1561 = v449;
                                                                              if ( v1649 )
                                                                              {
                                                                                v1415 = (LPCWSTR)v1649;
                                                                                v316 = RtlULongLongAdd(
                                                                                         v1649,
                                                                                         v1344,
                                                                                         &v1650);
                                                                                v1564 = v460;
                                                                                v1568 = v461;
                                                                                v1561 = v462;
                                                                                if ( v316 < 0 )
                                                                                  goto LABEL_387;
                                                                                v1564 = v460;
                                                                                v1568 = v461;
                                                                                v1561 = v462;
                                                                                if ( (unsigned __int64)v1415 < v1650 )
                                                                                {
                                                                                  v463 = v460;
                                                                                  v1561 = v462;
                                                                                  v1564 = v460;
                                                                                  v464 = v1415;
                                                                                  v1568 = v461;
                                                                                  while ( 1 )
                                                                                  {
                                                                                    v1431 = v463;
                                                                                    v316 = RtlULongLongAdd(
                                                                                             v464,
                                                                                             4LL,
                                                                                             &v1651);
                                                                                    if ( v316 < 0 )
                                                                                      break;
                                                                                    if ( v1651 > v1650 )
                                                                                      goto LABEL_513;
                                                                                    v316 = RtlUIntAdd(
                                                                                             4LL,
                                                                                             *v465,
                                                                                             &v1598);
                                                                                    if ( v316 < 0 )
                                                                                      goto LABEL_387;
                                                                                    v316 = RtlULongLongAdd(
                                                                                             v466,
                                                                                             v1598,
                                                                                             &v1652);
                                                                                    v1564 = v1431;
                                                                                    v1568 = v468;
                                                                                    v1561 = v467;
                                                                                    v1541 = v450;
                                                                                    if ( v316 < 0 )
                                                                                      break;
                                                                                    v464 = v1652;
                                                                                    v469 = (const WCHAR *)v1650;
                                                                                    v1564 = v1431;
                                                                                    v1568 = v468;
                                                                                    v1561 = v467;
                                                                                    v1541 = v450;
                                                                                    if ( (unsigned __int64)v1652 > v1650 )
                                                                                      goto LABEL_513;
                                                                                    ++v1457;
                                                                                    if ( (unsigned __int64)v1652 >= v1650 )
                                                                                    {
                                                                                      v1564 = v1431;
                                                                                      v1568 = v468;
                                                                                      v1561 = v467;
                                                                                      v1541 = v450;
                                                                                      goto LABEL_515;
                                                                                    }
                                                                                    v463 = v1431;
                                                                                  }
LABEL_524:
                                                                                  if ( v316 < 0
                                                                                    || v1502 == LODWORD(v1697[0]) )
                                                                                  {
                                                                                    goto LABEL_387;
                                                                                  }
                                                                                  goto LABEL_386;
                                                                                }
                                                                                v464 = v1415;
                                                                                v469 = (const WCHAR *)v1650;
LABEL_515:
                                                                                if ( v464 != v469 )
                                                                                {
LABEL_513:
                                                                                  v316 = -1073741811;
                                                                                  goto LABEL_387;
                                                                                }
                                                                              }
                                                                              if ( v1344 )
                                                                              {
                                                                                v470 = GetProcessHeap();
                                                                                v471 = v1344;
                                                                                v1459 = HeapAlloc(v470, 8u, v1344);
                                                                                v472 = v1459;
                                                                                if ( !v1459 )
                                                                                {
                                                                                  v316 = -1073741801;
                                                                                  goto LABEL_387;
                                                                                }
                                                                                v316 = 0;
                                                                              }
                                                                              else
                                                                              {
                                                                                v471 = 0LL;
                                                                                v472 = 0LL;
                                                                              }
                                                                              if ( v1649 )
                                                                                memcpy_0(v472, v1649, v471);
                                                                              v1697[1] = v1459;
                                                                              LODWORD(v1697[0]) = v1457;
                                                                              goto LABEL_524;
                                                                            }
                                                                          }
                                                                        }
                                                                        v1561 = v449;
                                                                        v1568 = v448;
                                                                        v1564 = v379;
LABEL_386:
                                                                        v316 = -1073741762;
LABEL_387:
                                                                        v94 = v316 | 0x10000000;
                                                                        goto LABEL_388;
                                                                      }
LABEL_436:
                                                                      v94 = -805306306;
                                                                      v1561 = (SIZE_T)v327;
                                                                      v1452 = -805306306;
                                                                      v1541 = v329;
                                                                      goto LABEL_342;
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
                                                v377 = 0LL;
                                                goto LABEL_456;
                                              }
LABEL_393:
                                              v94 = -805306345;
                                              goto LABEL_388;
                                            }
LABEL_531:
                                            v7 = 4LL;
                                            goto LABEL_138;
                                          }
                                          v1452 = RtlUIntAdd(v180, v180, &v1563);
                                          v94 = v1452;
                                          if ( v1452 >= 0 )
                                          {
                                            v1452 = RtlUIntAdd(v1573, v1563, &v1573);
                                            v94 = v1452;
                                            if ( v1452 >= 0 )
                                            {
                                              v1428 = v1573;
                                              goto LABEL_263;
                                            }
                                            goto LABEL_261;
                                          }
LABEL_240:
                                          v107 = v92;
                                          goto LABEL_531;
                                        }
                                        v171 = (unsigned int *)lpMem[1];
                                        v1641 = (unsigned int *)lpMem[1];
                                        if ( v165 )
                                        {
                                          do
                                          {
                                            v1452 = RtlUIntAdd((unsigned int)v164, *v171, &v1571);
                                            v94 = v1452;
                                            if ( v1452 < 0 )
                                              goto LABEL_240;
                                            v1452 = RtlULongLongAdd(v171, v1571, &v1641);
                                            v94 = v1452;
                                            if ( v1452 < 0 )
                                              goto LABEL_240;
                                            v171 = v1641;
                                          }
                                          while ( v172 + 1 < v173 );
                                        }
                                        v1452 = RtlULongLongAdd(v171, v164, &v1704);
                                        v94 = v1452;
                                        if ( v1452 < 0 )
                                          goto LABEL_248;
                                        if ( v171 + 2 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                                        {
                                          v174 = v1704;
                                          *v171 = v166;
                                          *v174 = v166;
                                          ++LODWORD(lpMem[0]);
                                          goto LABEL_249;
                                        }
LABEL_239:
                                        v94 = -1073741789;
                                        v1452 = -1073741789;
                                        goto LABEL_240;
                                      }
                                      v94 = -1073741762;
                                      goto LABEL_183;
                                    }
                                    goto LABEL_209;
                                  }
                                  v155 = (unsigned int *)lpMem[1];
                                  v1637 = (unsigned int *)lpMem[1];
                                  if ( v138 )
                                  {
                                    do
                                    {
                                      v1452 = RtlUIntAdd((unsigned int)v106, *v155, &v1628);
                                      v94 = v1452;
                                      if ( v1452 < 0 )
                                        goto LABEL_209;
                                      v1452 = RtlULongLongAdd(v155, v1628, &v1637);
                                      v94 = v1452;
                                      if ( v1452 < 0 )
                                        goto LABEL_184;
                                      v155 = v1637;
                                    }
                                    while ( v156 + 1 < v157 );
                                  }
                                  v1452 = RtlULongLongAdd(v155, v106, &v1701);
                                  v94 = v1452;
                                  if ( v1452 < 0 )
                                  {
LABEL_173:
                                    v107 = v92;
                                    if ( v94 < 0 )
                                      goto LABEL_531;
                                    goto LABEL_174;
                                  }
                                  if ( v155 + 3 <= (unsigned int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
                                  {
                                    v154 = v1701;
                                    v141 = v1471;
                                    *v155 = 8;
                                    *v154 = v1471;
                                    v142 = (int)lpMem[0];
                                    goto LABEL_201;
                                  }
LABEL_181:
                                  v94 = -1073741789;
LABEL_183:
                                  v1452 = v94;
                                  goto LABEL_184;
                                }
LABEL_209:
                                v107 = v92;
                                goto LABEL_210;
                              }
                              v94 = -1073741801;
LABEL_134:
                              v107 = v92;
LABEL_529:
                              v1452 = v94;
                              goto LABEL_531;
                            }
                          }
                        }
LABEL_210:
                        v7 = v104;
                        goto LABEL_138;
                      }
                    }
                  }
                }
LABEL_137:
                v7 = v106;
LABEL_138:
                lpMem[0] = 0LL;
                v116 = lpMem[1];
                if ( lpMem[1] )
                {
                  v117 = GetProcessHeap();
                  HeapFree(v117, 0, v116);
                  lpMem[1] = 0LL;
                }
                v1697[0] = 0LL;
                v118 = v1697[1];
                if ( v1697[1] )
                {
                  v119 = GetProcessHeap();
                  HeapFree(v119, 0, v118);
                  v1697[1] = 0LL;
                }
                if ( lpModuleNamea )
                {
                  v120 = GetProcessHeap();
                  HeapFree(v120, 0, lpModuleNamea);
                }
                if ( v1366 )
                {
                  v121 = GetProcessHeap();
                  HeapFree(v121, 0, v1366);
                }
                if ( v94 < 0 )
                  goto LABEL_109;
                if ( !v107 )
                {
LABEL_1489:
                  v7 = 4LL;
                  v95 = v1590;
                  v1671 = (int *)v1569;
                  v1556 = 0LL;
LABEL_110:
                  while ( _InterlockedCompareExchange(&dword_1800DD560, 1, 0) )
                    ;
                  v96 = dword_1800DD2BC;
                  if ( dword_1800DD2BC > 0 )
                  {
                    --dword_1800DD2BC;
                    if ( v96 == 1 )
                    {
                      v97 = (HMODULE *)&unk_1800DD4F0;
                      v98 = v7;
                      do
                      {
                        if ( *v97 )
                          FreeLibrary(*v97);
                        v97 += 3;
                        --v98;
                      }
                      while ( v98 );
                      memset_0(&unk_1800DD4F0, 0, 0x60uLL);
                      memcpy_0(off_1800DC000, off_1800AFB20, 0x170uLL);
                    }
                  }
                  _InterlockedExchange(&dword_1800DD560, 0);
                  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1556);
                  if ( v94 >= 0 )
                  {
                    if ( v95 == (_DWORD)v7 )
                    {
                      v5 = *v1671;
LABEL_8:
                      v3 = v1589;
LABEL_9:
                      SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1671);
                      if ( v3 < 0 )
                      {
                        if ( v3 == -1073418222 )
                          v3 = 0;
                      }
                      else if ( v5 == 1 )
                      {
                        LODWORD(v2) = 1;
                      }
                      *v1648 = v2;
                      `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue = v2;
                      `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried = 1;
                      goto LABEL_13;
                    }
                  }
                  else
                  {
                    switch ( v94 )
                    {
                      case -805306316:
                        v1589 = -1073418222;
LABEL_1497:
                        v5 = dwBytes_4;
                        goto LABEL_8;
                      case -805306139:
                      case -1073425151:
                        v1589 = -1073418201;
                        goto LABEL_1497;
                      case -805306306:
                        v1589 = -1073418200;
                        goto LABEL_1497;
                    }
                    v1589 = v94;
                    if ( v94 != -2147024774 )
                      goto LABEL_1497;
                  }
                  v5 = dwBytes_4;
                  v3 = -1073418210;
                  goto LABEL_9;
                }
                dword_1800DD2B8 = v107;
                v1659[0] = 0LL;
                ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
                if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
                {
LABEL_1170:
                  SH<void *,SH_HANDLE>::Reset(v1659);
                  v1558 = 0LL;
                  *(_OWORD *)v1709 = 0LL;
                  v997 = 0LL;
                  v1706 = 0LL;
                  v998 = GetProcessHeap();
                  v999 = HeapAlloc(v998, 8u, 0xA0uLL);
                  v1000 = v999;
                  if ( !v999 )
                    goto LABEL_1481;
                  v1558 = v999;
                  *v999 = xmmword_1800DC6B0[0];
                  v999[1] = xmmword_1800DC6B0[1];
                  v999[2] = xmmword_1800DC6B0[2];
                  v999[3] = xmmword_1800DC6B0[3];
                  v999[4] = xmmword_1800DC6B0[4];
                  v999[5] = xmmword_1800DC6B0[5];
                  v999[6] = xmmword_1800DC6B0[6];
                  v999[7] = xmmword_1800DC6B0[7];
                  v999[8] = xmmword_1800DC6B0[8];
                  v999[9] = xmmword_1800DC6B0[9];
                  v1001 = GetProcessHeap();
                  v1002 = (WCHAR *)HeapAlloc(v1001, 8u, 8uLL);
                  v997 = v1002;
                  if ( !v1002 )
                  {
                    v997 = 0LL;
                    goto LABEL_1481;
                  }
                  *(_QWORD *)v1002 = qword_1800DC5F0;
                  v1559 = v1002;
                  v1532 = (LPVOID)__rdtsc();
                  v1600 = 0;
                  if ( (int)RtlUIntAdd(4LL, 4LL, &v1601) < 0 )
                    goto LABEL_1481;
                  if ( (int)RtlUIntAdd(0LL, v1601, &v1600) < 0 )
                    goto LABEL_1481;
                  if ( (int)RtlUIntAdd(v1003, 160LL, &v1602) < 0 )
                    goto LABEL_1481;
                  v1004 = RtlUIntAdd(v1600, v1602, &v1600);
                  if ( (v1006 | v1004) < 0 )
                    goto LABEL_1481;
                  if ( (int)RtlUIntAdd(v1005, 8LL, &v1603) < 0 )
                    goto LABEL_1481;
                  v1007 = RtlUIntAdd(v1600, v1603, &v1600);
                  if ( (v1009 | v1007) < 0 )
                    goto LABEL_1481;
                  if ( (int)RtlUIntAdd(v1008, 8LL, &v1604) < 0 )
                    goto LABEL_1481;
                  v1010 = RtlUIntAdd(v1600, v1604, &v1600);
                  if ( (v1011 | v1010) < 0 )
                    goto LABEL_1481;
                  HIDWORD(v1705) = v1600;
                  v1012 = v1600;
                  v1013 = GetProcessHeap();
                  v1014 = HeapAlloc(v1013, 8u, v1012);
                  v1015 = v1014;
                  if ( !v1014 )
                    goto LABEL_1481;
                  v1706 = v1014;
                  LODWORD(v1705) = 0;
                  if ( (int)RtlULongLongAdd(v1014, 4LL, &v1710) < 0
                    || v1015 + 2 > (_DWORD *)((char *)v1015 + HIDWORD(v1705)) )
                  {
                    goto LABEL_1481;
                  }
                  v1017 = v1710;
                  *v1015 = v1016;
                  *v1017 = v1016;
                  v1018 = v1705 + 1;
                  LODWORD(v1705) = v1705 + 1;
                  if ( v1706 )
                  {
                    v1020 = v1706;
                    v1677 = v1706;
                    if ( v1018 )
                    {
                      while ( (int)RtlUIntAdd((unsigned int)v1016, (unsigned int)*v1020, &v1606) >= 0
                           && (int)RtlULongLongAdd(v1020, v1606, &v1677) >= 0 )
                      {
                        v1020 = v1677;
                        if ( v1021 + 1 >= v1022 )
                          goto LABEL_1191;
                      }
                      goto LABEL_1481;
                    }
LABEL_1191:
                    if ( (int)RtlULongLongAdd(v1020, v1016, &v1694) < 0
                      || v1020 + 41 > (_DWORD *)((char *)v1706 + HIDWORD(v1705)) )
                    {
                      goto LABEL_1481;
                    }
                    v1023 = v1694;
                    *v1020 = 160;
                    *v1023 = *v1000;
                    v1023[1] = v1000[1];
                    v1023[2] = v1000[2];
                    v1023[3] = v1000[3];
                    v1023[4] = v1000[4];
                    v1023[5] = v1000[5];
                    v1023[6] = v1000[6];
                    v1023[7] = v1000[7];
                    v1023[8] = v1000[8];
                    v1023[9] = v1000[9];
                  }
                  else if ( (int)RtlUIntAdd((unsigned int)v1016, 160LL, &v1605) < 0
                         || (int)RtlUIntAdd(HIDWORD(v1705), v1605, (char *)&v1705 + 4) < 0 )
                  {
                    goto LABEL_1481;
                  }
                  v1024 = v1705 + 1;
                  LODWORD(v1705) = v1705 + 1;
                  if ( v1706 )
                  {
                    v1026 = (unsigned int *)v1706;
                    v1678 = (unsigned int *)v1706;
                    if ( v1024 )
                    {
                      while ( (int)RtlUIntAdd((unsigned int)v1019, *v1026, &v1608) >= 0
                           && (int)RtlULongLongAdd(v1027, v1608, &v1678) >= 0 )
                      {
                        v1026 = v1678;
                        if ( v1028 + 1 >= v1024 )
                          goto LABEL_1202;
                      }
                      goto LABEL_1481;
                    }
LABEL_1202:
                    if ( (int)RtlULongLongAdd(v1026, v1019, &v1698) < 0
                      || v1029 + 3 > (_DWORD *)((char *)v1706 + HIDWORD(v1705)) )
                    {
                      goto LABEL_1481;
                    }
                    v1030 = v1698;
                    *v1029 = 8;
                    *v1030 = *(_QWORD *)v997;
                  }
                  else if ( (int)RtlUIntAdd((unsigned int)v1019, 8LL, &v1607) < 0
                         || (int)RtlUIntAdd(HIDWORD(v1705), v1607, (char *)&v1705 + 4) < 0 )
                  {
                    goto LABEL_1481;
                  }
                  v1031 = v1705 + 1;
                  LODWORD(v1705) = v1705 + 1;
                  if ( !v1706 )
                  {
                    if ( (int)RtlUIntAdd((unsigned int)v1025, 8LL, &v1609) < 0
                      || (int)RtlUIntAdd(HIDWORD(v1705), v1609, (char *)&v1705 + 4) < 0 )
                    {
                      goto LABEL_1481;
                    }
LABEL_1216:
                    LODWORD(v1705) = v1705 + 1;
                    if ( (int)RtlUIntAdd(v1032, v1032, &v1611) < 0 )
                      goto LABEL_1481;
                    v1039 = v1611;
                    v1612 = v1611;
                    if ( (int)RtlUIntAdd(v1038, 8LL, &v1613) < 0 || (int)RtlUIntAdd(v1039, v1613, &v1612) < 0 )
                      goto LABEL_1481;
                    v1040 = 0LL;
                    lpModuleNamej = v1612;
                    v1533 = 0LL;
                    v1041 = 0LL;
                    v1378 = 0;
                    v1567 = 0LL;
                    v1516 = 0;
                    v1566 = 0LL;
                    v1560 = 0LL;
                    v1527 = 0LL;
                    v1461 = __rdtsc();
                    v1614 = 8;
                    v1042 = RtlUIntAdd(8LL, HIDWORD(v1705), &v1614);
                    if ( v1042 >= 0 )
                    {
                      v1044 = (v1614 + 7) & 0xFFFFFFF8;
                      if ( v1044 < v1614 )
                        goto LABEL_1315;
                      v1614 = (v1614 + 7) & 0xFFFFFFF8;
                      v1045 = v1044;
                      v1046 = GetProcessHeap();
                      v1047 = HeapAlloc(v1046, 8u, v1045);
                      v1552 = v1047;
                      if ( !v1047 )
                        goto LABEL_1315;
                      v1680[0] = v1047;
                      *v1047 = v1705;
                      v1042 = RtlULongLongAdd(v1047, 4LL, v1680);
                      if ( v1042 < 0
                        || (v1049 = v1680[0],
                            *(_DWORD *)v1680[0] = HIDWORD(v1705),
                            v1042 = RtlULongLongAdd(v1049, v1048, v1680),
                            v1042 < 0) )
                      {
                        v1051 = GetProcessHeap();
                        HeapFree(v1051, 0, v1552);
                        v1043 = 0;
                      }
                      else
                      {
                        *(_QWORD *)(v1614 + v1050 - 8) = v1461;
                        memcpy_0(v1680[0], v1706, HIDWORD(v1705));
                        v1040 = (unsigned __int8 *)v1552;
                        v1043 = v1614;
                        v1533 = (unsigned __int8 *)v1552;
                        v1378 = v1614;
                      }
                    }
                    v1052 = v1042 | 0x10000000;
                    if ( v1052 < 0 )
                      goto LABEL_1287;
                    if ( v1040 )
                    {
                      v1053 = v1043;
                      v1462 = v1043;
                      if ( !v1043 || (v1553 = v1043 + 8, (Srcm = (char *)MemoryAlloc(v1043 + 8LL)) == 0LL) )
                      {
                        v1052 = -805306367;
                        goto LABEL_1288;
                      }
                      v1054 = 0;
                      v1055 = 0LL;
                      v1339 = 0;
                      if ( v1053 )
                      {
                        do
                          v1054 ^= v1040[v1055++];
                        while ( v1055 < v1053 );
                        v1339 = v1054;
                      }
                      v1056 = Srcm;
                      v1556 = Srcm;
                      v1057 = -1;
                      v1058 = v1378;
                      v1763 = 0xC81ECB17B1B54A58uLL;
                      v1424 = 0;
                      v1059 = v1040;
                      v1481 = 0;
                      v1060 = 0;
                      v1061 = v1378 & 7;
                      if ( (v1378 & 7) != 0 )
                      {
                        v1062 = 0;
                        v1063 = 0;
                        v1379 = 0;
                        v1064 = 56;
                        do
                        {
                          v1065 = *v1059++;
                          if ( v1062 >= 4 )
                            v1063 |= v1065 << v1064;
                          else
                            v1060 |= v1065 << (v1064 - 32);
                          v1064 -= 8;
                          v1062 = v1379 + 1;
                          v1424 = v1063;
                          v1481 = v1060;
                          v1379 = v1062;
                        }
                        while ( v1062 < v1061 );
                        v1060 ^= 0xB17A307A;
                        v1066 = v1556;
                        v1067 = v1063 ^ 0x42F6B18D;
                        v1068 = v1060;
                        v1069 = v1067;
                        do
                        {
                          v1556 = v1066 + 1;
                          if ( (int)v1041 >= 4 )
                          {
                            v1069 = __ROL4__(v1069, 8);
                            v1070 = v1069;
                          }
                          else
                          {
                            v1068 = __ROL4__(v1068, 8);
                            v1070 = v1068;
                          }
                          *v1066 = v1070;
                          LODWORD(v1041) = (_DWORD)v1041 + 1;
                          v1066 = v1556;
                        }
                        while ( (int)v1041 < v1061 );
                        v1040 = v1533;
                        v1056 = v1556;
                        v1058 = v1462;
                        v1054 = v1339;
                        v1041 = 0LL;
                        if ( (unsigned int)v1061 <= 4 )
                        {
                          v1057 = 0;
                          if ( (unsigned int)v1061 >= 4 )
                            goto LABEL_1249;
                          v1060 = v1060 >> (8 * (4 - v1061)) << (8 * (4 - v1061));
                        }
                        else
                        {
                          v1057 = v1067 >> (8 * (8 - v1061)) << (8 * (8 - v1061));
                        }
                        v1056 = v1556;
                      }
LABEL_1249:
                      v1071 = v1058 >> 3;
                      if ( v1058 >> 3 )
                      {
                        v1072 = v1056 + 7;
                        v1073 = WORD2(v1763);
                        v1074 = v1059 + 2;
                        v1075 = v1481;
                        v1076 = v1071;
                        v1380 = WORD1(v1763);
                        v1548 = HIWORD(v1763);
                        v1077 = v1424;
                        do
                        {
                          v1078 = *(v1074 - 1) | (*(v1074 - 2) << 8);
                          v1079 = v1074[2] << 8;
                          v1080 = *v1074;
                          v1074 += 8;
                          v1081 = *(v1074 - 7) | ((v1080 | (v1078 << 8)) << 8);
                          v1082 = *(v1074 - 3) | ((*(v1074 - 4) | ((*(v1074 - 5) | v1079) << 8)) << 8);
                          v1083 = v1082 ^ v1057;
                          v1084 = v1060 ^ v1081 ^ (v1083 - 19032);
                          v1085 = (__ROR4__(v1084 ^ HIDWORD(v1763), 7) + WORD1(v1763) * __ROR4__(v1084, 15)) ^ v1083;
                          v1086 = (v1073 * __ROR4__(v1085 - 1313519016, 9) - __ROR4__(v1085, 10)) ^ v1084 ^ HIDWORD(v1763);
                          v1087 = (__ROL4__(v1086, 5) + HIWORD(v1763) * __ROL4__(v1073 ^ v1086, 4)) ^ v1085;
                          v1088 = (HIDWORD(v1763) - (v1087 ^ 0xB1B54A58)) ^ v1086;
                          v1089 = (WORD1(v1763) * (v1088 - 19032) - (v1088 >> 6)) ^ v1087;
                          v1090 = (19032 * (v1073 ^ __ROR4__(v1089, 15))) ^ v1088;
                          v1091 = (v1073 * (HIWORD(v1763) + __ROR4__(~v1090, 3))) ^ v1089;
                          v1092 = (v1091 - 19032 - HIDWORD(v1763)) ^ v1090;
                          v1093 = (v1380 * (v1548 ^ v1092)) ^ __ROR4__(v1092, 10) ^ v1091;
                          v1094 = __ROR4__(v1093, 3) ^ (v1073 * __ROL4__(v1093 ^ 0x4A58, 6)) ^ v1092;
                          v1095 = (19032 * (__ROR4__(v1094, 15) - HIWORD(v1763))) ^ v1093;
                          v1096 = (v1095 >> 15) ^ (19032 * __ROL4__(v1095 - v1073, 3)) ^ (v1095 >> 1) ^ (19032 * (HIWORD(v1763) ^ v1095)) ^ v1094;
                          v1097 = (WORD1(v1763) * (v1096 - v1073) - (v1096 >> 13)) ^ v1095;
                          v1098 = __ROR4__(v1097, 11) ^ (v1073 * __ROR4__(-1313519016 - v1097, 9)) ^ v1096;
                          v1099 = (v1098 - HIWORD(v1763) + 1313519016) ^ v1097;
                          v1100 = (19032 * (v1380 ^ v1099) - __ROR4__(v1099, 7)) ^ v1098;
                          v1101 = (WORD1(v1763) * __ROL4__(HIWORD(v1763) ^ v1100, 4) - __ROR4__(v1100, 16)) ^ v1099;
                          v1102 = (__ROR4__(v1101, 4) + v1073 * __ROR4__(-1313519016 - v1101, 10)) ^ v1100;
                          v1103 = __ROR4__(v1102, 9) ^ (HIWORD(v1763) * __ROR4__(v1102 + 1313519016, 4)) ^ v1101;
                          v1104 = (19032 * __ROL4__(HIDWORD(v1763) ^ v1103, 8) - __ROL4__(v1103, 2)) ^ v1102;
                          v1105 = (WORD1(v1763) * __ROR4__(HIDWORD(v1763) - v1104, 11) - __ROR4__(v1104, 12)) ^ v1103;
                          v1106 = (v1105 >> 8) ^ (v1073 * (v1105 ^ WORD1(v1763))) ^ v1104;
                          v1107 = v1106 ^ HIDWORD(v1763) ^ v1105 ^ 0xB1B54A58;
                          v1108 = v1075 ^ v1106;
                          *(v1072 - 4) = v1108;
                          v1109 = v1077 ^ v1107;
                          *v1072 = v1109;
                          v1075 = v1081;
                          v1110 = __ROR4__(v1108, 8);
                          v1077 = v1082;
                          *(v1072 - 5) = v1110;
                          v1072 += 8;
                          v1111 = __ROR4__(v1109, 8);
                          *(v1072 - 9) = v1111;
                          v1112 = __ROR4__(v1110, 8);
                          *(v1072 - 14) = v1112;
                          v1113 = __ROR4__(v1111, 8);
                          *(v1072 - 10) = v1113;
                          v1114 = __ROR4__(v1112, 8);
                          v1115 = __ROR4__(v1113, 8);
                          *(v1072 - 15) = v1114;
                          *(v1072 - 11) = v1115;
                          v1057 = __ROR4__(v1115, 8);
                          v1060 = __ROR4__(v1114, 8);
                          --v1076;
                        }
                        while ( v1076 );
                        v1054 = v1339;
                        LODWORD(v2) = 0;
                        v94 = v1452;
                        v1041 = 0LL;
                        v1040 = v1533;
                        v1058 = v1462;
                      }
                      *(_QWORD *)&Srcm[v1058] = v1054;
                      v1680[4] = (void *)160;
                      v1116 = GetProcessHeap();
                      v1117 = HeapAlloc(v1116, 8u, 0x30uLL);
                      if ( v1117 )
                      {
                        *(_DWORD *)v1117 = v1553;
                        v1119 = GetProcessHeap();
                        v1120 = HeapAlloc(v1119, 8u, v1553);
                        if ( !v1120 )
                          goto LABEL_1259;
                        v1117[1] = v1120;
                        memcpy_0(v1120, Srcm, v1553);
                        *((_DWORD *)v1117 + 4) = 160;
                        v1121 = GetProcessHeap();
                        v1122 = HeapAlloc(v1121, 8u, 0xA0uLL);
                        if ( !v1122 )
                          goto LABEL_1259;
                        v1117[3] = v1122;
                        *v1122 = xmmword_1800DC600[0];
                        v1122[1] = xmmword_1800DC600[1];
                        v1122[2] = xmmword_1800DC600[2];
                        v1122[3] = xmmword_1800DC600[3];
                        v1122[4] = xmmword_1800DC600[4];
                        v1122[5] = xmmword_1800DC600[5];
                        v1122[6] = xmmword_1800DC600[6];
                        v1122[7] = xmmword_1800DC600[7];
                        v1122[8] = xmmword_1800DC600[8];
                        v1122[9] = xmmword_1800DC600[9];
                        *((_DWORD *)v1117 + 8) = 8;
                        v1123 = GetProcessHeap();
                        v1124 = HeapAlloc(v1123, 8u, 8uLL);
                        if ( v1124 )
                        {
                          v1117[5] = v1124;
                          v1118 = 0;
                          *v1124 = qword_1800DC6A0;
                          v1041 = (const void **)v1117;
                        }
                        else
                        {
LABEL_1259:
                          v1118 = -1073741801;
                          v1463 = (void *)v1117[1];
                          if ( v1463 )
                          {
                            v1125 = GetProcessHeap();
                            HeapFree(v1125, 0, v1463);
                            v1117[1] = 0LL;
                          }
                          v1464 = (void *)v1117[3];
                          if ( v1464 )
                          {
                            v1126 = GetProcessHeap();
                            HeapFree(v1126, 0, v1464);
                            v1117[3] = 0LL;
                          }
                          v1465 = (void *)v1117[5];
                          if ( v1465 )
                          {
                            v1127 = GetProcessHeap();
                            HeapFree(v1127, 0, v1465);
                            v1117[5] = 0LL;
                          }
                          v1128 = GetProcessHeap();
                          HeapFree(v1128, 0, v1117);
                        }
                      }
                      else
                      {
                        v1118 = -1073741801;
                      }
                      v1129 = GetProcessHeap();
                      HeapFree(v1129, 0, Srcm);
                      v1052 = v1118 | 0x10000000;
                      if ( v1052 < 0 )
                        goto LABEL_1287;
                      v1130 = *(unsigned int *)v1041;
                      LODWORD(v1615) = 4;
                      v1131 = RtlUIntAdd(4LL, v1130, &v1615);
                      if ( v1131 >= 0 )
                      {
                        v1131 = RtlUIntAdd((unsigned int)v1615, v1132, &v1615);
                        if ( v1131 >= 0 )
                        {
                          v1131 = RtlUIntAdd((unsigned int)v1615, *((unsigned int *)v1041 + 4), &v1615);
                          if ( v1131 >= 0 )
                          {
                            v1131 = RtlUIntAdd((unsigned int)v1615, v1133, &v1615);
                            if ( v1131 >= 0 )
                            {
                              v1131 = RtlUIntAdd((unsigned int)v1615, *((unsigned int *)v1041 + 8), &v1615);
                              if ( v1131 >= 0 )
                              {
                                v1381 = v1615;
                                v1134 = v1615;
                                v1135 = GetProcessHeap();
                                v1136 = HeapAlloc(v1135, 8u, v1134);
                                v1137 = v1136;
                                if ( !v1136 )
                                  goto LABEL_1344;
                                v1681 = v1136;
                                *v1136 = *(_DWORD *)v1041;
                                v1131 = RtlULongLongAdd(v1136, 4LL, &v1681);
                                if ( v1131 >= 0 )
                                {
                                  memcpy_0(v1681, v1041[1], *(unsigned int *)v1041);
                                  v1131 = RtlULongLongAdd(v1681, *(unsigned int *)v1041, &v1681);
                                  if ( v1131 >= 0 )
                                  {
                                    v1138 = v1681;
                                    *(_DWORD *)v1681 = *((_DWORD *)v1041 + 4);
                                    v1131 = RtlULongLongAdd(v1138, 4LL, &v1681);
                                    if ( v1131 >= 0 )
                                    {
                                      memcpy_0(v1681, v1041[3], *((unsigned int *)v1041 + 4));
                                      v1131 = RtlULongLongAdd(v1681, *((unsigned int *)v1041 + 4), &v1681);
                                      if ( v1131 >= 0 )
                                      {
                                        v1139 = v1681;
                                        *(_DWORD *)v1681 = *((_DWORD *)v1041 + 8);
                                        v1131 = RtlULongLongAdd(v1139, 4LL, &v1681);
                                        if ( v1131 >= 0 )
                                        {
                                          memcpy_0(v1681, v1041[5], *((unsigned int *)v1041 + 8));
                                          v1131 = RtlULongLongAdd(v1681, *((unsigned int *)v1041 + 8), &v1681);
                                          if ( v1131 >= 0 )
                                          {
                                            v1567 = v1137;
                                            v1140 = v1381;
                                            v1516 = v1381;
                                            goto LABEL_1283;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                v1141 = GetProcessHeap();
                                HeapFree(v1141, 0, v1137);
                              }
                            }
                          }
                        }
                      }
                      v1140 = 0;
LABEL_1283:
                      v1052 = v1131 | 0x10000000;
                      if ( v1052 < 0 )
                        goto LABEL_1287;
                      v1616 = 8;
                      v1142 = RtlUIntAdd(8LL, lpModuleNamej, &v1616);
                      v1052 = v1145 | v1142;
                      if ( (v1145 | v1142) >= 0 )
                      {
                        v1146 = (v1616 + 7) & 0xFFFFFFF8;
                        if ( v1146 >= v1616 )
                        {
                          v1617 = (v1616 + 7) & 0xFFFFFFF8;
                          v1052 = RtlUIntAdd(v1146, v1143, &v1617);
                          if ( v1052 >= 0 )
                          {
                            if ( v1706 && (unsigned int)v1705 > 1 )
                            {
                              v1682 = (unsigned int *)v1706;
                              v1052 = RtlULongLongAdd(v1706, 4LL, &v1682);
                              if ( v1052 >= 0 )
                              {
                                v1052 = RtlULongLongAdd(v1682, v1168, &v1682);
                                if ( v1052 >= 0 )
                                {
                                  lpModuleNamek = *v1682;
                                  v1052 = RtlULongLongAdd(v1682, 4LL, &v1682);
                                  if ( v1052 >= 0 )
                                  {
                                    if ( (unsigned int)v1705 > 2 )
                                    {
                                      v1170 = (unsigned int *)v1706;
                                      v1683 = (unsigned int *)v1706;
                                      v1567 = v1169;
                                      v1516 = v1140;
                                      while ( 1 )
                                      {
                                        v1171 = *v1170;
                                        v1052 = RtlULongLongAdd(v1170, 4LL, &v1683);
                                        if ( v1052 < 0 )
                                          break;
                                        v1052 = RtlULongLongAdd(v1683, v1171, &v1683);
                                        if ( v1052 < 0 )
                                          break;
                                        v1170 = v1683;
                                        if ( (unsigned int)(v1172 + 1) >= 2 )
                                        {
                                          v1052 = RtlULongLongAdd(v1683, 4LL, &v1683);
                                          if ( v1052 < 0 )
                                            goto LABEL_1287;
                                          LODWORD(v1618) = 4;
                                          v1052 = RtlUIntAdd(4LL, v1173, &v1618);
                                          if ( v1052 < 0 )
                                            goto LABEL_1340;
                                          v1052 = RtlUIntAdd((unsigned int)v1618, 4LL, &v1618);
                                          if ( v1052 < 0 )
                                            goto LABEL_1340;
                                          v1052 = RtlUIntAdd((unsigned int)v1618, lpModuleNamek, &v1618);
                                          if ( v1052 < 0 )
                                            goto LABEL_1340;
                                          v1052 = RtlUIntAdd((unsigned int)v1618, 4LL, &v1618);
                                          if ( v1052 < 0 )
                                            goto LABEL_1340;
                                          v1052 = RtlUIntAdd((unsigned int)v1618, v1174, &v1618);
                                          if ( v1052 < 0 )
                                            goto LABEL_1340;
                                          v1175 = v1618;
                                          lpModuleNamel = v1618;
                                          if ( (unsigned int)v1618 > 0x400000 )
                                          {
                                            v1052 = -2147418113;
                                            goto LABEL_1287;
                                          }
                                          goto LABEL_1341;
                                        }
                                      }
                                    }
                                    else
                                    {
                                      v1052 = -1073741811;
                                    }
                                  }
                                }
                              }
                            }
                            else
                            {
                              v1052 = -1073741811;
                            }
                          }
                        }
                        else
                        {
                          v1052 = -1073741675;
                        }
                        goto LABEL_1287;
                      }
LABEL_1340:
                      v1175 = 0;
                      lpModuleNamel = 0;
                      if ( v1052 < 0 )
                        goto LABEL_1287;
LABEL_1341:
                      v1466 = (SIZE_T)v1040;
                      Srcn = v1144;
                      v1176 = v1175;
                      v1177 = GetProcessHeap();
                      v1178 = HeapAlloc(v1177, 8u, v1176);
                      v1556 = v1178;
                      v1179 = v1178;
                      if ( v1178 )
                      {
                        if ( !Srcn )
                        {
                          v1052 = -2147024809;
                          v1566 = v1178;
                          v1567 = 0LL;
                          goto LABEL_1287;
                        }
                        v1716 = v1516;
                        v1717 = lpModuleNamel;
                        v1715[0] = Srcn;
                        v1715[1] = v1178;
                        v1718 = 0;
                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule) )
                        {
                          v1182 = GetProcAddress(hModule, "NtQuerySystemInformation");
                          if ( v1182 )
                          {
                            v1184 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1182)(134LL, v1715);
                            v1181 = lpModuleNamel;
                            v1052 = v1184 | 0x10000000;
                            if ( v1184 >= 0 )
                            {
                              v1181 = v1717;
                              v1185 = v1179;
                              v1186 = v1041;
                              v1187 = Srcn;
                              lpModuleNamel = v1717;
                              v1188 = v1040;
                              goto LABEL_1361;
                            }
                          }
                          else
                          {
                            v1183 = GetLastError();
                            v1052 = v1183;
                            if ( v1183 > 0 )
                              v1052 = (unsigned __int16)v1183 | 0x80070000;
                            v1181 = lpModuleNamel;
                            if ( v1052 >= 0 )
                              v1052 = -2147467259;
                          }
                        }
                        else
                        {
                          v1180 = GetLastError();
                          v1052 = v1180;
                          if ( v1180 > 0 )
                            v1052 = (unsigned __int16)v1180 | 0x80070000;
                          v1181 = lpModuleNamel;
                          if ( v1052 >= 0 )
                            v1052 = -2147467259;
                        }
                        v1566 = v1179;
                        v1567 = Srcn;
                        if ( v1052 == -805306333 )
                        {
                          v1052 = -2147024774;
                          goto LABEL_1287;
                        }
                        v1186 = v1041;
                        v1187 = Srcn;
                        v1185 = v1179;
                        v1188 = v1040;
                        if ( v1052 < 0 )
                        {
LABEL_1287:
                          if ( !v1040 )
                          {
LABEL_1289:
                            if ( v1041 )
                            {
                              v1148 = (void *)v1041[1];
                              if ( v1148 )
                              {
                                v1149 = GetProcessHeap();
                                HeapFree(v1149, 0, v1148);
                                v1041[1] = 0LL;
                              }
                              v1150 = (void *)v1041[3];
                              if ( v1150 )
                              {
                                v1151 = GetProcessHeap();
                                HeapFree(v1151, 0, v1150);
                                v1041[3] = 0LL;
                              }
                              v1152 = (void *)v1041[5];
                              if ( v1152 )
                              {
                                v1153 = GetProcessHeap();
                                HeapFree(v1153, 0, v1152);
                                v1041[5] = 0LL;
                              }
                              v1154 = GetProcessHeap();
                              HeapFree(v1154, 0, v1041);
                            }
                            v1155 = v1567;
                            if ( v1567 )
                            {
                              v1156 = GetProcessHeap();
                              HeapFree(v1156, 0, v1155);
                            }
                            v1157 = v1566;
                            if ( v1566 )
                            {
                              v1158 = GetProcessHeap();
                              HeapFree(v1158, 0, v1157);
                            }
                            v1159 = v1560;
                            if ( v1560 )
                            {
                              v1160 = (void *)*((_QWORD *)v1560 + 1);
                              if ( v1160 )
                              {
                                v1161 = GetProcessHeap();
                                HeapFree(v1161, 0, v1160);
                                v1159[1] = 0LL;
                              }
                              v1162 = (void *)v1159[3];
                              if ( v1162 )
                              {
                                v1163 = GetProcessHeap();
                                HeapFree(v1163, 0, v1162);
                                v1159[3] = 0LL;
                              }
                              v1164 = (void *)v1159[5];
                              if ( v1164 )
                              {
                                v1165 = GetProcessHeap();
                                HeapFree(v1165, 0, v1164);
                                v1159[5] = 0LL;
                              }
                              v1166 = GetProcessHeap();
                              HeapFree(v1166, 0, v1159);
                            }
                            if ( v1527 )
                            {
                              v1167 = GetProcessHeap();
                              HeapFree(v1167, 0, v1527);
                            }
                            if ( v1052 >= 0 && LODWORD(v1709[0]) && v1709[1] )
                            {
                              v1690[0] = v1709[1];
                              RtlULongLongAdd(v1709[1], 4LL, v1690);
                            }
                            goto LABEL_1315;
                          }
LABEL_1288:
                          v1147 = GetProcessHeap();
                          HeapFree(v1147, 0, v1040);
                          goto LABEL_1289;
                        }
LABEL_1361:
                        v1619 = 0;
                        v1685 = v1185;
                        if ( v1181 < 4 )
                        {
                          v1041 = v1186;
LABEL_1363:
                          v1567 = v1187;
                          v1052 = -805306306;
                          v1566 = v1185;
                          v1040 = v1188;
                          goto LABEL_1287;
                        }
                        v1382 = *v1185;
                        v1189 = RtlULongLongAdd(v1185, 4LL, &v1685);
                        v1549 = v1041;
                        v1191 = v1190;
                        v1566 = v1192;
                        v1040 = v1193;
                        v1567 = v1190;
                        v1534 = v1193;
                        if ( v1189 >= 0 )
                        {
                          v1194 = RtlUIntAdd(0LL, 4LL, &v1619);
                          v1566 = v1185;
                          v1189 = v1194;
                          v1567 = v1187;
                          v1549 = v1041;
                          v1534 = v1195;
                          if ( v1194 >= 0 )
                          {
                            if ( lpModuleNamel - v1619 < v1382 )
                              goto LABEL_1384;
                            v1482 = v1685;
                            v1561 = v1382;
                            v1196 = RtlULongLongAdd(v1685, v1382, &v1685);
                            v1566 = v1197;
                            v1189 = v1196;
                            v1567 = v1198;
                            v1549 = v1041;
                            v1534 = v1199;
                            if ( v1196 >= 0 )
                            {
                              v1200 = RtlUIntAdd(v1619, v1382, &v1619);
                              v1566 = v1185;
                              v1189 = v1200;
                              v1567 = v1187;
                              v1549 = v1041;
                              v1534 = v1201;
                              if ( v1200 >= 0 )
                              {
                                if ( lpModuleNamel - v1619 < 4 )
                                  goto LABEL_1384;
                                v1517 = *(_DWORD *)v1685;
                                v1202 = RtlULongLongAdd(v1685, 4LL, &v1685);
                                v1566 = v1203;
                                v1189 = v1202;
                                v1567 = v1204;
                                v1549 = v1041;
                                v1534 = v1205;
                                if ( v1202 >= 0 )
                                {
                                  v1206 = RtlUIntAdd(v1619, 4LL, &v1619);
                                  v1566 = v1185;
                                  v1189 = v1206;
                                  v1567 = v1187;
                                  v1549 = v1041;
                                  v1534 = v1207;
                                  if ( v1206 >= 0 )
                                  {
                                    if ( lpModuleNamel - v1619 < v1517 )
                                      goto LABEL_1384;
                                    v1568 = v1685;
                                    v1208 = RtlULongLongAdd(v1685, v1517, &v1685);
                                    v1566 = v1209;
                                    v1189 = v1208;
                                    v1567 = v1210;
                                    v1549 = v1041;
                                    v1534 = v1211;
                                    if ( v1208 >= 0 )
                                    {
                                      v1212 = RtlUIntAdd(v1619, v1517, &v1619);
                                      v1566 = v1185;
                                      v1189 = v1212;
                                      v1567 = v1187;
                                      v1549 = v1041;
                                      v1534 = v1213;
                                      if ( v1212 >= 0 )
                                      {
                                        if ( lpModuleNamel - v1619 < 4 )
                                          goto LABEL_1384;
                                        v1425 = *(_DWORD *)v1685;
                                        v1214 = RtlULongLongAdd(v1685, 4LL, &v1685);
                                        v1566 = v1215;
                                        v1189 = v1214;
                                        v1567 = v1216;
                                        v1549 = v1041;
                                        v1534 = v1217;
                                        if ( v1214 >= 0 )
                                        {
                                          v1218 = RtlUIntAdd(v1619, 4LL, &v1619);
                                          v1566 = v1185;
                                          v1189 = v1218;
                                          v1567 = v1187;
                                          v1549 = v1041;
                                          v1534 = v1219;
                                          if ( v1218 >= 0 )
                                          {
                                            if ( lpModuleNamel - v1619 < v1425 )
                                              goto LABEL_1384;
                                            v1220 = RtlUIntAdd(v1619, v1425, &v1619);
                                            v1566 = v1185;
                                            v1189 = v1220;
                                            v1567 = v1187;
                                            v1549 = v1041;
                                            v1534 = v1188;
                                            if ( v1220 >= 0 )
                                            {
                                              if ( lpModuleNamel == v1619 )
                                              {
                                                if ( v1425 + v1517 + v1382 + 12LL != lpModuleNamel )
                                                  goto LABEL_1363;
                                                v1221 = GetProcessHeap();
                                                v1222 = (WCHAR *)HeapAlloc(v1221, 8u, 0x30uLL);
                                                lpModuleNamem = v1222;
                                                v1223 = v1222;
                                                if ( !v1222 )
                                                {
                                                  v1052 = -805306345;
                                                  v1040 = (unsigned __int8 *)v1466;
                                                  v1566 = v1556;
                                                  v1567 = Srcn;
                                                  goto LABEL_1287;
                                                }
                                                if ( v1482 )
                                                {
                                                  *(_DWORD *)v1222 = v1382;
                                                  v1224 = GetProcessHeap();
                                                  v1225 = v1561;
                                                  v1226 = HeapAlloc(v1224, 8u, v1561);
                                                  if ( !v1226 )
                                                    goto LABEL_1396;
                                                  *((_QWORD *)v1223 + 1) = v1226;
                                                  memcpy_0(v1226, v1482, v1225);
                                                }
                                                else
                                                {
                                                  *(_DWORD *)v1222 = 0;
                                                  *((_QWORD *)v1222 + 1) = 0LL;
                                                }
                                                v1227 = v1568;
                                                if ( v1568 )
                                                {
                                                  *((_DWORD *)v1223 + 4) = v1517;
                                                  v1228 = GetProcessHeap();
                                                  v1229 = HeapAlloc(v1228, 8u, v1517);
                                                  if ( !v1229 )
                                                    goto LABEL_1396;
                                                  *((_QWORD *)v1223 + 3) = v1229;
                                                  memcpy_0(v1229, v1227, v1517);
                                                }
                                                else
                                                {
                                                  *((_DWORD *)v1223 + 4) = 0;
                                                  *((_QWORD *)v1223 + 3) = 0LL;
                                                }
                                                if ( !v1685 )
                                                {
                                                  *((_DWORD *)v1223 + 8) = 0;
                                                  *((_QWORD *)v1223 + 5) = 0LL;
                                                  goto LABEL_1414;
                                                }
                                                *((_DWORD *)v1223 + 8) = v1425;
                                                v1230 = GetProcessHeap();
                                                v1231 = HeapAlloc(v1230, 8u, v1425);
                                                if ( v1231 )
                                                {
                                                  *((_QWORD *)v1223 + 5) = v1231;
                                                  memcpy_0(v1231, v1685, v1425);
LABEL_1414:
                                                  v1040 = (unsigned __int8 *)v1466;
                                                  v1566 = v1556;
                                                  v1191 = Srcn;
                                                  v1560 = v1223;
                                                  v1189 = 0;
                                                  v1567 = Srcn;
                                                  v1549 = v1041;
                                                  v1534 = (unsigned __int8 *)v1466;
                                                  v1237 = (unsigned int *)v1560;
                                                  goto LABEL_1404;
                                                }
LABEL_1396:
                                                v1189 = -1073741801;
                                                v1040 = (unsigned __int8 *)v1466;
                                                v1566 = v1556;
                                                v1191 = Srcn;
                                                v1567 = Srcn;
                                                v1232 = lpModuleNamem;
                                                v1560 = 0LL;
                                                v1467 = (void *)*((_QWORD *)lpModuleNamem + 1);
                                                if ( v1467 )
                                                {
                                                  v1233 = GetProcessHeap();
                                                  HeapFree(v1233, 0, v1467);
                                                  v1232 = lpModuleNamem;
                                                  *((_QWORD *)lpModuleNamem + 1) = 0LL;
                                                }
                                                v1468 = (void *)*((_QWORD *)v1232 + 3);
                                                if ( v1468 )
                                                {
                                                  v1234 = GetProcessHeap();
                                                  HeapFree(v1234, 0, v1468);
                                                  v1232 = lpModuleNamem;
                                                  *((_QWORD *)lpModuleNamem + 3) = 0LL;
                                                }
                                                v1469 = (void *)*((_QWORD *)v1232 + 5);
                                                if ( v1469 )
                                                {
                                                  v1235 = GetProcessHeap();
                                                  HeapFree(v1235, 0, v1469);
                                                  *((_QWORD *)lpModuleNamem + 5) = 0LL;
                                                }
                                                v1236 = GetProcessHeap();
                                                HeapFree(v1236, 0, lpModuleNamem);
                                                v1556 = v1566;
                                                v1560 = 0LL;
                                                v1237 = 0LL;
                                                v1567 = Srcn;
                                                v1549 = v1041;
                                                v1534 = v1040;
LABEL_1404:
                                                v1052 = v1189 | 0x10000000;
                                                if ( v1052 < 0 )
                                                  goto LABEL_1287;
                                                if ( !v1237 || (v1470 = *((_QWORD *)v1237 + 1)) == 0 || !*v1237 )
                                                {
                                                  v1052 = -805306355;
                                                  goto LABEL_1287;
                                                }
                                                v1238 = *v1237 - 8LL;
                                                v1554 = v1238;
                                                v1528 = MemoryAlloc(v1238);
                                                v1239 = v1528;
                                                if ( !v1528 )
                                                  goto LABEL_1437;
                                                v1240 = (unsigned __int8 *)v1470;
                                                v1765 = 0x7F1137FAB69605ELL;
                                                v1241 = 0;
                                                v1242 = 0;
                                                v1556 = v1528;
                                                lpModuleNamen = 0;
                                                v1243 = v1238 & 7;
                                                if ( (v1238 & 7) != 0 )
                                                {
                                                  v1244 = 0;
                                                  v1245 = 56;
                                                  v1246 = (unsigned __int8 *)v1470;
                                                  do
                                                  {
                                                    v1247 = *v1246++;
                                                    if ( v1242 >= 4 )
                                                    {
                                                      v1248 = lpModuleNamen;
                                                      v1244 |= v1247 << v1245;
                                                    }
                                                    else
                                                    {
                                                      v1248 = (v1247 << (v1245 - 32)) | lpModuleNamen;
                                                      lpModuleNamen = v1248;
                                                    }
                                                    ++v1242;
                                                    v1245 -= 8;
                                                  }
                                                  while ( v1242 < (int)v1243 );
                                                  v94 = v1452;
                                                  v1249 = v1244;
                                                  v1562 = v1244;
                                                  v1239 = v1528;
                                                  v1250 = v1249 ^ 0x699A899C;
                                                  v1383 = v1248 ^ 0x92F65A5;
                                                  v1251 = 0;
                                                  v1252 = v1248 ^ 0x92F65A5;
                                                  v1567 = v1191;
                                                  v1253 = v1250;
                                                  v1549 = v1041;
                                                  v1534 = v1040;
                                                  v1254 = v1528;
                                                  do
                                                  {
                                                    v1556 = v1254 + 1;
                                                    if ( v1251 >= 4 )
                                                    {
                                                      v1253 = __ROL4__(v1253, 8);
                                                      v1255 = v1253;
                                                    }
                                                    else
                                                    {
                                                      v1252 = __ROL4__(v1252, 8);
                                                      v1255 = v1252;
                                                    }
                                                    *v1254 = v1255;
                                                    ++v1251;
                                                    v1254 = v1556;
                                                  }
                                                  while ( v1251 < (int)v1243 );
                                                  v1241 = 0;
                                                  v1256 = v1556;
                                                  v1191 = v1567;
                                                  v1242 = v1383;
                                                  LODWORD(v2) = 0;
                                                  if ( v1243 > 4 )
                                                  {
                                                    v1256 = v1556;
                                                    v1384 = v1250 >> (8 * (8 - v1243)) << (8 * (8 - v1243));
LABEL_1425:
                                                    v1240 = v1246;
                                                    goto LABEL_1426;
                                                  }
                                                  v1384 = 0;
                                                  if ( v1243 >= 4 )
                                                    goto LABEL_1425;
                                                  v1240 = v1246;
                                                  v1242 = (unsigned int)v1242 >> (8 * (4 - v1243)) << (8 * (4 - v1243));
                                                  v1256 = v1556;
                                                }
                                                else
                                                {
                                                  v1384 = 0;
                                                  v1256 = v1528;
                                                }
LABEL_1426:
                                                v1257 = v1554;
                                                if ( v1554 >> 3 )
                                                {
                                                  v1258 = v1256 + 7;
                                                  v1259 = HIDWORD(v1765);
                                                  v1260 = v1240 + 2;
                                                  v1261 = lpModuleNamen;
                                                  v1426 = WORD1(v1765);
                                                  v1262 = HIDWORD(v1765) ^ 0xAB69605E;
                                                  v2 = v1554 >> 3;
                                                  v1263 = v1384;
                                                  v1518 = WORD2(v1765);
                                                  do
                                                  {
                                                    v1264 = *(v1260 - 1) | (*(v1260 - 2) << 8);
                                                    v1265 = v1260[2] << 8;
                                                    v1266 = *v1260;
                                                    v1260 += 8;
                                                    v1267 = *(v1260 - 7) | ((v1266 | (v1264 << 8)) << 8);
                                                    v1268 = v1267 ^ v1242;
                                                    v1269 = *(v1260 - 3) | ((*(v1260 - 4) | ((*(v1260 - 5) | v1265) << 8)) << 8);
                                                    v1270 = v1268 ^ v1269 ^ v1263 ^ v1262;
                                                    v1271 = (__ROL4__(v1270, 10)
                                                           + v1518 * __ROL4__(v1270 + 1419157410, 5)) ^ v1268;
                                                    v1272 = (WORD1(v1765) * __ROR4__(v1271 + v1259, 9)
                                                           - __ROL4__(v1271, 2)) ^ v1270;
                                                    v1273 = (24670 * (v1272 - v1518) - (v1272 >> 13)) ^ v1271;
                                                    v1274 = (HIWORD(v1765) * __ROL4__(WORD1(v1765) ^ v1273, 6)
                                                           - __ROL4__(v1273, 2)) ^ v1272;
                                                    v1275 = (v1259 - (v1274 ^ 0xAB69605E)) ^ v1273;
                                                    v1276 = (v1426 * (v1518 ^ v1275)) ^ __ROR4__(v1275, 6) ^ v1274;
                                                    v1277 = (__ROL4__(v1276, 2) + 24670 * __ROR4__(v1276 + v1259, 15)) ^ v1275;
                                                    v1278 = (HIWORD(v1765) * __ROR4__(v1277 + 1419157410, 14)
                                                           - __ROL4__(v1277, 8)) ^ v1276;
                                                    v1279 = __ROR4__(v1278, 10) ^ (v1518
                                                                                 * __ROR4__(v1278 ^ 0xAB69605E, 12)) ^ v1277;
                                                    v1280 = (v1279 >> 10) ^ (WORD1(v1765) * (HIWORD(v1765) ^ v1279)) ^ v1278;
                                                    v1281 = (HIWORD(v1765) * (__ROR4__(~v1280, 5) + 24670)) ^ v1279;
                                                    v1282 = v1280 ^ (v1281 - HIWORD(v1765)) ^ 0xAB69605E;
                                                    v1283 = ((v1282 >> 2) + v1518 * __ROL4__(HIWORD(v1765) ^ v1282, 2)) ^ v1281;
                                                    v1284 = (__ROL4__(v1283, 7)
                                                           + WORD1(v1765) * __ROR4__(v1283 - v1259, 6)) ^ v1282;
                                                    v1285 = (24670 * (v1518 ^ v1284) + __ROR4__(v1284, 9)) ^ v1283;
                                                    v1286 = (__ROL4__(v1285, 7)
                                                           + HIWORD(v1765) * __ROL4__(WORD1(v1765) ^ v1285, 5)) ^ v1284;
                                                    v1287 = v1259 ^ v1286 ^ v1285 ^ 0xAB69605E;
                                                    v1288 = (v1518 * (__ROR4__(v1287, 3) - WORD1(v1765))) ^ v1286;
                                                    v1289 = (24670 * __ROR4__(v1288 - v1259, 1) - __ROR4__(v1288, 6)) ^ v1287;
                                                    v1290 = (__ROL4__(v1289, 14)
                                                           + HIWORD(v1765) * __ROL4__(v1289 - 1419157410, 3)) ^ v1288;
                                                    v1291 = (v1518 * __ROL4__(v1290 - 1419157410, 15)
                                                           - __ROR4__(v1290, 14)) ^ v1289;
                                                    v1292 = (v1291 >> 3) ^ (WORD1(v1765) * (v1291 ^ 0x605E)) ^ v1290;
                                                    v1293 = v1562 ^ v1292;
                                                    v1562 = v1269;
                                                    v1294 = v1261 ^ __ROL4__(v1292, 2) ^ (24670
                                                                                        * __ROL4__(v1259 ^ v1292, 4));
                                                    v1261 = v1267;
                                                    v1295 = v1294 ^ v1291;
                                                    *(v1258 - 4) = v1295;
                                                    *v1258 = v1293;
                                                    v1258 += 8;
                                                    v1296 = __ROR4__(v1295, 8);
                                                    *(v1258 - 13) = v1296;
                                                    v1297 = __ROR4__(v1293, 8);
                                                    *(v1258 - 9) = v1297;
                                                    v1298 = __ROR4__(v1296, 8);
                                                    *(v1258 - 14) = v1298;
                                                    v1299 = __ROR4__(v1297, 8);
                                                    *(v1258 - 10) = v1299;
                                                    v1300 = __ROR4__(v1298, 8);
                                                    v1301 = __ROR4__(v1299, 8);
                                                    *(v1258 - 15) = v1300;
                                                    *(v1258 - 11) = v1301;
                                                    v1263 = __ROR4__(v1301, 8);
                                                    v1242 = __ROR4__(v1300, 8);
                                                    --v2;
                                                  }
                                                  while ( v2 );
                                                  v1241 = 0;
                                                  v94 = v1452;
                                                  v1041 = v1549;
                                                  v1040 = v1534;
                                                  v1191 = v1567;
                                                  v1239 = v1528;
                                                  v1257 = v1554;
                                                }
                                                for ( n = 0LL; n < v1257; ++n )
                                                  v1241 ^= *((_BYTE *)v1239 + n);
                                                v1303 = v1560;
                                                v1304 = v1566;
                                                v1427 = (WCHAR *)v1566;
                                                v1567 = v1191;
                                                if ( v1241 != *(_QWORD *)(v1257 + v1470) )
                                                {
                                                  MemoryFree(v1239);
LABEL_1437:
                                                  v1052 = -805306367;
                                                  v1527 = 0LL;
                                                  goto LABEL_1287;
                                                }
                                                v1632 = 0;
                                                v1686 = v1239;
                                                if ( (unsigned int)v1257 < 4 )
                                                {
                                                  v1567 = v1191;
LABEL_1476:
                                                  v1566 = v1304;
                                                  v1560 = v1303;
                                                  v1527 = v1239;
LABEL_1477:
                                                  v1307 = -1073741762;
                                                  goto LABEL_1478;
                                                }
                                                lpModuleNameo = *v1239;
                                                v1305 = RtlULongLongAdd(v1239, 4LL, &v1686);
                                                v1527 = v1306;
                                                v1307 = v1305;
                                                v1560 = v1308;
                                                v1566 = v1309;
                                                v1567 = v1191;
                                                if ( v1305 < 0 )
                                                  goto LABEL_1478;
                                                v1310 = RtlUIntAdd(0LL, 4LL, &v1632);
                                                v1527 = v1239;
                                                v1307 = v1310;
                                                v1560 = v1303;
                                                v1566 = v1304;
                                                v1567 = v1191;
                                                if ( v1310 < 0 )
                                                  goto LABEL_1478;
                                                if ( (unsigned int)v1554 - v1632 >= 4 )
                                                {
                                                  v1385 = *(_DWORD *)v1686;
                                                  v1311 = RtlULongLongAdd(v1686, 4LL, &v1686);
                                                  v1527 = v1312;
                                                  v1307 = v1311;
                                                  v1560 = v1313;
                                                  v1566 = v1314;
                                                  v1567 = v1191;
                                                  if ( v1311 < 0 )
                                                    goto LABEL_1478;
                                                  v1315 = RtlUIntAdd(v1632, 4LL, &v1632);
                                                  v1527 = v1239;
                                                  v1307 = v1315;
                                                  v1560 = v1303;
                                                  v1566 = v1304;
                                                  v1567 = v1191;
                                                  if ( v1315 < 0 )
                                                    goto LABEL_1478;
                                                  if ( (unsigned int)v1554 - v1632 >= v1385 )
                                                  {
                                                    v1316 = RtlUIntAdd(v1632, v1385, &v1632);
                                                    v1527 = v1239;
                                                    v1307 = v1316;
                                                    v1560 = v1303;
                                                    v1566 = v1304;
                                                    v1567 = v1191;
                                                    if ( v1316 < 0 )
                                                      goto LABEL_1478;
                                                    if ( (char *)v1239 + (unsigned int)v1554 >= (char *)v1686 + v1385
                                                      && (unsigned __int64)(unsigned int)v1554
                                                       + (char *)v1239
                                                       - v1385
                                                       - (_BYTE *)v1686 < 8 )
                                                    {
                                                      v1519 = 0;
                                                      v1317 = 0LL;
                                                      v1555 = 0LL;
                                                      v1307 = 0;
                                                      v1527 = v1239;
                                                      v1560 = v1303;
                                                      v1566 = v1304;
                                                      v1567 = v1191;
                                                      if ( !v1686 )
                                                        goto LABEL_1464;
                                                      v1556 = v1686;
                                                      v1307 = RtlULongLongAdd(v1686, v1385, &v1687);
                                                      v1527 = v1320;
                                                      v1560 = v1318;
                                                      v1566 = v1319;
                                                      v1567 = v1191;
                                                      if ( v1307 >= 0 )
                                                      {
                                                        v1321 = v1556;
                                                        v1527 = v1320;
                                                        v1560 = v1318;
                                                        v1566 = v1319;
                                                        v1567 = v1191;
                                                        if ( (unsigned __int64)v1556 < v1687 )
                                                        {
                                                          v1560 = v1318;
                                                          v1322 = v1320;
                                                          v1527 = v1320;
                                                          v1566 = v1427;
                                                          v1567 = v1191;
                                                          while ( 1 )
                                                          {
                                                            v1307 = RtlULongLongAdd(v1321, 4LL, &v1688);
                                                            if ( v1307 < 0 )
                                                              break;
                                                            if ( v1688 > v1324 )
                                                              goto LABEL_1460;
                                                            v1307 = RtlUIntAdd(4LL, *v1323, &v1621);
                                                            if ( v1307 < 0 )
                                                              goto LABEL_1478;
                                                            v1307 = RtlULongLongAdd(v1556, v1621, &v1689);
                                                            v1527 = v1322;
                                                            v1560 = v1326;
                                                            v1566 = v1325;
                                                            v1567 = v1191;
                                                            if ( v1307 < 0 )
                                                              goto LABEL_1478;
                                                            v1321 = v1689;
                                                            v1556 = v1689;
                                                            v1527 = v1322;
                                                            v1560 = v1326;
                                                            v1566 = v1325;
                                                            v1567 = v1191;
                                                            if ( v1689 > v1327 )
                                                              goto LABEL_1460;
                                                            ++v1519;
                                                            if ( v1689 >= v1327 )
                                                            {
                                                              v1527 = v1322;
                                                              v1560 = v1326;
                                                              v1566 = v1325;
                                                              v1567 = v1191;
                                                              goto LABEL_1462;
                                                            }
                                                          }
LABEL_1472:
                                                          if ( v1307 < 0 || lpModuleNameo == LODWORD(v1709[0]) )
                                                            goto LABEL_1478;
                                                          goto LABEL_1477;
                                                        }
                                                        v1327 = (_BYTE *)v1687;
LABEL_1462:
                                                        if ( v1321 == v1327 )
                                                        {
                                                          v1317 = 0LL;
LABEL_1464:
                                                          if ( v1385 )
                                                          {
                                                            v1328 = GetProcessHeap();
                                                            v1329 = v1385;
                                                            v1555 = HeapAlloc(v1328, 8u, v1385);
                                                            v1317 = v1555;
                                                            if ( !v1555 )
                                                            {
                                                              v1307 = -1073741801;
                                                              goto LABEL_1478;
                                                            }
                                                            v1307 = 0;
                                                          }
                                                          else
                                                          {
                                                            v1329 = 0LL;
                                                          }
                                                          if ( v1686 )
                                                          {
                                                            memcpy_0(v1317, v1686, v1329);
                                                            v1317 = v1555;
                                                          }
                                                          LODWORD(v1709[0]) = v1519;
                                                          v1709[1] = v1317;
                                                          goto LABEL_1472;
                                                        }
LABEL_1460:
                                                        v1307 = -1073741811;
                                                      }
LABEL_1478:
                                                      v1052 = v1307 | 0x10000000;
                                                      goto LABEL_1287;
                                                    }
                                                  }
                                                }
                                                v1567 = v1191;
                                                goto LABEL_1476;
                                              }
LABEL_1384:
                                              v1052 = -805306306;
                                              v1566 = v1185;
                                              v1567 = v1187;
                                              goto LABEL_1287;
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
                        v1237 = 0LL;
                        goto LABEL_1404;
                      }
LABEL_1344:
                      v1052 = -805306345;
                      goto LABEL_1287;
                    }
LABEL_1315:
                    v997 = (WCHAR *)v1559;
                    goto LABEL_1481;
                  }
                  v1033 = (unsigned int *)v1706;
                  v1679 = (unsigned int *)v1706;
                  if ( v1031 )
                  {
                    while ( (int)RtlUIntAdd((unsigned int)v1025, *v1033, &v1620) >= 0
                         && (int)RtlULongLongAdd(v1034, v1620, &v1679) >= 0 )
                    {
                      v1033 = v1679;
                      if ( v1035 + 1 >= v1031 )
                        goto LABEL_1213;
                    }
                    goto LABEL_1481;
                  }
LABEL_1213:
                  if ( (int)RtlULongLongAdd(v1033, v1025, &v1695) >= 0
                    && v1036 + 3 <= (_DWORD *)((char *)v1706 + HIDWORD(v1705)) )
                  {
                    v1037 = v1695;
                    *v1036 = 8;
                    *v1037 = v1532;
                    goto LABEL_1216;
                  }
LABEL_1481:
                  v1705 = 0LL;
                  v1330 = v1706;
                  if ( v1706 )
                  {
                    v1331 = GetProcessHeap();
                    HeapFree(v1331, 0, v1330);
                    v1706 = 0LL;
                  }
                  v1709[0] = 0LL;
                  v1332 = v1709[1];
                  if ( v1709[1] )
                  {
                    v1333 = GetProcessHeap();
                    HeapFree(v1333, 0, v1332);
                    v1709[1] = 0LL;
                  }
                  v1334 = v1558;
                  if ( v1558 )
                  {
                    v1335 = GetProcessHeap();
                    HeapFree(v1335, 0, v1334);
                  }
                  if ( v997 )
                  {
                    v1336 = GetProcessHeap();
                    HeapFree(v1336, 0, v997);
                  }
                  goto LABEL_1489;
                }
                v1520 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0F8[0])(0LL, 0LL, 1027LL);
                if ( !v1520 )
                {
                  GetLastError();
                  goto LABEL_1170;
                }
                v506 = off_1800DC098[0]();
                v507 = dword_1800DD2B8;
                qword_1800DD2B0 = v506;
                v1504 = dword_1800DD2B8;
                memset_0(&v1748, 0, 0x70uLL);
                v1460 = 0LL;
                v1785 = 0LL;
                v1768 = 0LL;
                v1786 = 0;
                v1551 = 0LL;
                v1783 = 0LL;
                v1784 = 0LL;
                while ( _InterlockedCompareExchange(&dword_1800DD560, 1, 0) )
                  ;
                v508 = dword_1800DD2BC;
                if ( dword_1800DD2BC )
                  goto LABEL_640;
                v1346 = 0;
                v1388 = 0;
                v509 = 0LL;
                v1432 = 0;
                v510 = (char *)MemoryAlloc(0x338uLL);
                Srcc = v510;
                if ( !v510 )
                {
LABEL_608:
                  v1388 = -1073741702;
LABEL_609:
                  if ( !v509 )
                    goto LABEL_611;
                  goto LABEL_610;
                }
                v511 = v510 + 7;
                v512 = 103LL;
                v513 = 0;
                v514 = (unsigned __int8 *)&unk_1800B9202;
                v515 = 0;
                v516 = 0;
                v517 = -1;
                do
                {
                  v518 = *(v514 - 1) | (*(v514 - 2) << 8);
                  v519 = v514[2] << 8;
                  v520 = *v514;
                  v514 += 8;
                  v521 = *(v514 - 7) | ((v520 | (v518 << 8)) << 8);
                  v522 = v521 ^ v516;
                  v523 = *(v514 - 3) | ((*(v514 - 4) | ((*(v514 - 5) | v519) << 8)) << 8);
                  v524 = v522 ^ v515 ^ v523 ^ 0xAC987321;
                  v525 = (__ROL4__(v524, 10) + 4991 * __ROL4__(v524 + 1419157410, 5)) ^ v522;
                  v526 = (43881 * __ROR4__(v525 + 133239679, 9) - __ROL4__(v525, 2)) ^ v524;
                  v527 = (24670 * v526 - (v526 >> 13) - 123127970) ^ v525;
                  v528 = (2033 * __ROL4__(v527 ^ 0xAB69, 6) - __ROL4__(v527, 2)) ^ v526;
                  v529 = (133239679 - (v528 ^ 0xAB69605E)) ^ v527;
                  v530 = (43881 * (v529 ^ 0x137F)) ^ __ROR4__(v529, 6) ^ v528;
                  v531 = (__ROL4__(v530, 2) + 24670 * __ROR4__(v530 + 133239679, 15)) ^ v529;
                  v532 = (2033 * __ROR4__(v531 + 1419157410, 14) - __ROL4__(v531, 8)) ^ v530;
                  v533 = __ROR4__(v532, 10) ^ (4991 * __ROR4__(v532 ^ 0xAB69605E, 12)) ^ v531;
                  v534 = v532 ^ (v533 >> 10) ^ (43881 * (v533 ^ 0x7F1));
                  v535 = (2033 * (__ROR4__(~v534, 5) + 24670)) ^ v533;
                  v536 = v534 ^ (v535 - 2033) ^ 0xAB69605E;
                  v537 = ((v536 >> 2) + 4991 * __ROL4__(v534 ^ (v535 - 2033) ^ 0xAB6967AF, 2)) ^ v535;
                  v538 = (__ROL4__(v537, 7) + 43881 * __ROR4__(v537 - 133239679, 6)) ^ v536;
                  v539 = (24670 * (v538 ^ 0x137F) + __ROR4__(v538, 9)) ^ v537;
                  v540 = (__ROL4__(v539, 7) + 2033 * __ROL4__(v539 ^ 0xAB69, 5)) ^ v538;
                  v541 = v540 ^ v539 ^ 0xAC987321;
                  v542 = (4991 * __ROR4__(v541, 3) - 219010071) ^ v540;
                  v543 = (24670 * __ROR4__(v542 - 133239679, 1) - __ROR4__(v542, 6)) ^ v541;
                  v544 = (__ROL4__(v543, 14) + 2033 * __ROL4__(v543 - 1419157410, 3)) ^ v542;
                  v545 = (4991 * __ROL4__(v544 - 1419157410, 15) - __ROR4__(v544, 14)) ^ v543;
                  v546 = (v545 >> 3) ^ (43881 * (v545 ^ 0x605E)) ^ v544;
                  v547 = 24670 * __ROL4__(v546 ^ 0x7F1137F, 4);
                  v548 = v546;
                  v549 = v517 ^ v546;
                  v517 = v523;
                  v550 = v513 ^ __ROL4__(v548, 2) ^ v547;
                  v513 = v521;
                  v551 = v550 ^ v545;
                  *(v511 - 4) = v551;
                  *v511 = v549;
                  v511 += 8;
                  v552 = __ROR4__(v551, 8);
                  *(v511 - 13) = v552;
                  v553 = __ROR4__(v549, 8);
                  *(v511 - 9) = v553;
                  v554 = __ROR4__(v552, 8);
                  *(v511 - 14) = v554;
                  v555 = __ROR4__(v553, 8);
                  *(v511 - 10) = v555;
                  v556 = __ROR4__(v554, 8);
                  v557 = __ROR4__(v555, 8);
                  *(v511 - 15) = v556;
                  *(v511 - 11) = v557;
                  v515 = __ROR4__(v557, 8);
                  v516 = __ROR4__(v556, 8);
                  --v512;
                }
                while ( v512 );
                v558 = 0;
                LODWORD(v2) = 0;
                v507 = v1504;
                v559 = 0LL;
                v94 = v1452;
                v509 = 0LL;
                do
                  v558 ^= Srcc[v559++];
                while ( v559 < 0x338 );
                if ( v558 != 64LL )
                {
                  MemoryFree(Srcc);
                  goto LABEL_608;
                }
                v509 = Srcc;
                Srcc[823] = 0;
                v563 = (const WCHAR *)Srcc;
                memset_0(&unk_1800DD4F0, 0, 0x60uLL);
                if ( !*Srcc )
                {
LABEL_610:
                  v560 = GetProcessHeap();
                  HeapFree(v560, 0, v509);
LABEL_611:
                  if ( v1388 < 0 )
                  {
                    v561 = (HMODULE *)&unk_1800DD4F0;
                    v562 = 4LL;
                    do
                    {
                      if ( *v561 )
                        FreeLibrary(*v561);
                      v561 += 3;
                      --v562;
                    }
                    while ( v562 );
                    memset_0(&unk_1800DD4F0, 0, 0x60uLL);
                    memcpy_0(off_1800DC000, off_1800AFB20, 0x170uLL);
                    goto LABEL_641;
                  }
                  v508 = dword_1800DD2BC;
LABEL_640:
                  dword_1800DD2BC = v508 + 1;
LABEL_641:
                  v1347 = 0;
                  _InterlockedExchange(&dword_1800DD560, 0);
                  v1660 = 0LL;
                  v1707 = 0LL;
                  v1389 = 0;
                  Srce = 0LL;
                  lpModuleNameb = 0LL;
                  v1367 = 0LL;
                  while ( _InterlockedCompareExchange(&dword_1800DD560, 1, 0) )
                    ;
                  v576 = dword_1800DD2BC;
                  if ( dword_1800DD2BC )
                    goto LABEL_683;
                  v1433 = 0;
                  v1487 = 0;
                  v577 = 0LL;
                  v1539 = 0;
                  v578 = (char *)MemoryAlloc(0x338uLL);
                  v1416 = (WCHAR *)v578;
                  if ( !v578 )
                  {
LABEL_651:
                    v1487 = -1073741702;
LABEL_652:
                    if ( !v577 )
                      goto LABEL_654;
                    goto LABEL_653;
                  }
                  LODWORD(Size) = -1;
                  v579 = v578 + 7;
                  v580 = 103LL;
                  v581 = 0;
                  v582 = (unsigned __int8 *)&unk_1800B9202;
                  v583 = 0;
                  v584 = 0;
                  v585 = -1;
                  do
                  {
                    v586 = *(v582 - 1) | (*(v582 - 2) << 8);
                    v587 = v582[2] << 8;
                    v588 = *v582;
                    v582 += 8;
                    v589 = *(v582 - 7) | ((v588 | (v586 << 8)) << 8);
                    v590 = v589 ^ v584;
                    v591 = *(v582 - 3) | ((*(v582 - 4) | ((*(v582 - 5) | v587) << 8)) << 8);
                    v592 = v591 ^ v583 ^ v590 ^ 0xAC987321;
                    v593 = (__ROL4__(v592, 10) + 4991 * __ROL4__(v592 + 1419157410, 5)) ^ v590;
                    v594 = (43881 * __ROR4__(v593 + 133239679, 9) - __ROL4__(v593, 2)) ^ v592;
                    v595 = (24670 * v594 - (v594 >> 13) - 123127970) ^ v593;
                    v596 = (2033 * __ROL4__(v595 ^ 0xAB69, 6) - __ROL4__(v595, 2)) ^ v594;
                    v597 = (133239679 - (v596 ^ 0xAB69605E)) ^ v595;
                    v598 = (43881 * (v597 ^ 0x137F)) ^ __ROR4__(v597, 6) ^ v596;
                    v599 = (__ROL4__(v598, 2) + 24670 * __ROR4__(v598 + 133239679, 15)) ^ v597;
                    v600 = (2033 * __ROR4__(v599 + 1419157410, 14) - __ROL4__(v599, 8)) ^ v598;
                    v601 = __ROR4__(v600, 10) ^ (4991 * __ROR4__(v600 ^ 0xAB69605E, 12)) ^ v599;
                    v602 = v600 ^ (v601 >> 10) ^ (43881 * (v601 ^ 0x7F1));
                    v603 = (2033 * (__ROR4__(~v602, 5) + 24670)) ^ v601;
                    v604 = v602 ^ (v603 - 2033) ^ 0xAB69605E;
                    v605 = ((v604 >> 2) + 4991 * __ROL4__(v602 ^ (v603 - 2033) ^ 0xAB6967AF, 2)) ^ v603;
                    v606 = (__ROL4__(v605, 7) + 43881 * __ROR4__(v605 - 133239679, 6)) ^ v604;
                    v607 = (24670 * (v606 ^ 0x137F) + __ROR4__(v606, 9)) ^ v605;
                    v608 = (__ROL4__(v607, 7) + 2033 * __ROL4__(v607 ^ 0xAB69, 5)) ^ v606;
                    v609 = v608 ^ v607 ^ 0xAC987321;
                    v610 = (4991 * __ROR4__(v609, 3) - 219010071) ^ v608;
                    v611 = (24670 * __ROR4__(v610 - 133239679, 1) - __ROR4__(v610, 6)) ^ v609;
                    v612 = (__ROL4__(v611, 14) + 2033 * __ROL4__(v611 - 1419157410, 3)) ^ v610;
                    v613 = (4991 * __ROL4__(v612 - 1419157410, 15) - __ROR4__(v612, 14)) ^ v611;
                    v614 = (v613 >> 3) ^ (43881 * (v613 ^ 0x605E)) ^ v612;
                    v615 = 24670 * __ROL4__(v614 ^ 0x7F1137F, 4);
                    v616 = v614;
                    v617 = v585 ^ v614;
                    v585 = v591;
                    v618 = v581 ^ __ROL4__(v616, 2) ^ v615;
                    v581 = v589;
                    v619 = v618 ^ v613;
                    *(v579 - 4) = v619;
                    *v579 = v617;
                    v579 += 8;
                    v620 = __ROR4__(v619, 8);
                    *(v579 - 13) = v620;
                    v621 = __ROR4__(v617, 8);
                    *(v579 - 9) = v621;
                    v622 = __ROR4__(v620, 8);
                    *(v579 - 14) = v622;
                    v623 = __ROR4__(v621, 8);
                    *(v579 - 10) = v623;
                    v624 = __ROR4__(v622, 8);
                    v625 = __ROR4__(v623, 8);
                    *(v579 - 15) = v624;
                    *(v579 - 11) = v625;
                    v583 = __ROR4__(v625, 8);
                    v584 = __ROR4__(v624, 8);
                    --v580;
                  }
                  while ( v580 );
                  v626 = 0;
                  LODWORD(v2) = 0;
                  v507 = v1504;
                  v627 = 0LL;
                  v94 = v1452;
                  v577 = 0LL;
                  do
                    v626 ^= *((_BYTE *)v1416 + v627++);
                  while ( v627 < 0x338 );
                  if ( v626 != 64LL )
                  {
                    MemoryFree(v1416);
                    goto LABEL_651;
                  }
                  v577 = v1416;
                  *((_BYTE *)v1416 + 823) = 0;
                  v631 = v1416;
                  memset_0(&unk_1800DD4F0, 0, 0x60uLL);
                  if ( !*(_BYTE *)v1416 )
                  {
LABEL_653:
                    v628 = GetProcessHeap();
                    HeapFree(v628, 0, v577);
LABEL_654:
                    if ( v1487 < 0 )
                    {
                      v629 = (HMODULE *)&unk_1800DD4F0;
                      v630 = 4LL;
                      do
                      {
                        if ( *v629 )
                          FreeLibrary(*v629);
                        v629 += 3;
                        --v630;
                      }
                      while ( v630 );
                      memset_0(&unk_1800DD4F0, 0, 0x60uLL);
                      memcpy_0(off_1800DC000, off_1800AFB20, 0x170uLL);
LABEL_684:
                      _InterlockedExchange(&dword_1800DD560, 0);
                      memset_0(&v1748, 0, 0x70uLL);
                      LODWORD(Size) = v507 & 0xF;
                      v1823[0] = (v507 >> 4) & 0xF;
                      v1823[1] = (v507 >> 8) & 0xF;
                      v1768 = 0LL;
                      v1823[2] = (v507 >> 12) & 0xF;
                      v1418 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0F8[0])(
                                         0LL,
                                         0LL,
                                         1027LL);
                      v1506 = -1;
                      if ( !v1418 )
                      {
                        v644 = GetLastError();
                        v645 = v644;
                        if ( v644 > 0 )
                          v645 = (unsigned __int16)v644 | 0x80070000;
                        if ( v645 >= 0 )
                          v645 = -2147467259;
LABEL_886:
                        v781 = 1;
                        while ( _InterlockedCompareExchange(&dword_1800DD560, 1, 0) )
                          ;
                        v782 = dword_1800DD2BC;
                        if ( dword_1800DD2BC > 0 )
                        {
                          --dword_1800DD2BC;
                          if ( v782 == 1 )
                          {
                            v783 = 4LL;
                            v784 = (HMODULE *)&unk_1800DD4F0;
                            do
                            {
                              if ( *v784 )
                                FreeLibrary(*v784);
                              v784 += 3;
                              --v783;
                            }
                            while ( v783 );
                            memset_0(&unk_1800DD4F0, 0, 0x60uLL);
                            memcpy_0(off_1800DC000, off_1800AFB20, 0x170uLL);
                            v781 = 1;
                          }
                        }
                        _InterlockedExchange(&dword_1800DD560, 0);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1660);
                        if ( v645 < 0 )
                          goto LABEL_1092;
                        v785 = v1768;
                        v1667 = v1768;
                        memset_0(v1721, 0, 0x68uLL);
                        v786 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800DC050[0])(v1520, 7LL);
                        if ( v786
                          && ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800DC068[0])(
                               v786,
                               104LL,
                               v1721) )
                        {
                          if ( v1724 != 32 || !v1725 || v1722 <= 0 || v1723 <= 0 )
                            v781 = 0;
                          if ( v781 )
                            goto LABEL_904;
                        }
                        else
                        {
                          v781 = 0;
                        }
                        if ( (_DWORD)Size != 1 )
                        {
                          v787 = Size;
                          goto LABEL_906;
                        }
LABEL_904:
                        ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DC150[0])(
                          &v1757,
                          v785,
                          HIDWORD(v1667));
                        ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DC150[0])(
                          &v1758,
                          v785,
                          HIDWORD(v1667));
                        v787 = Size;
                        if ( (_DWORD)Size == 1 )
                          v1551 = ((__int64 (__fastcall *)(_QWORD))off_1800DC028[0])(v1749 == 0 ? 0xB26720 : 0);
LABEL_906:
                        v1451 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800DC080[0])(v1520, 1LL);
                        v788 = 2064;
                        if ( v1748 )
                          v788 = 133138;
                        v1349 = v788;
                        if ( v781 )
                        {
                          v789 = v1750;
                          v1391 = v1749;
                          Srch = v1753;
                          lpModuleNamec = (LPCWSTR)v1750;
                          memset_0(v1726, 0, 0x68uLL);
                          memset_0(v1730, 0, 0x68uLL);
                          v1369 = 0LL;
                          v1437 = 0;
                          v1491 = 0;
                          v1789 = 0LL;
                          v1790 = 0;
                          v1787 = 0LL;
                          v1788 = 0LL;
                          v1769 = 0LL;
                          if ( !v789 )
                            goto LABEL_1090;
                          v790 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800DC050[0])(v1520, 7LL);
                          if ( v790 )
                          {
                            if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800DC068[0])(
                                   v790,
                                   104LL,
                                   v1726) )
                            {
                              v1369 = v1729;
                              v1437 = v1727;
                              v1491 = v1728;
                            }
                            v1509 = ((__int64 (__fastcall *)(SIZE_T))off_1800DC010[0])(v1520);
                            v791 = v1509;
                            if ( v1509 )
                            {
                              v792 = 0;
                              DWORD1(v1787) = DWORD2(v1757) - v1757;
                              DWORD2(v1787) = DWORD1(v1757) - HIDWORD(v1757);
                              v1668 = 0LL;
                              v1788 = 0LL;
                              v1789 = 0LL;
                              v1790 = 0;
                              LODWORD(v1787) = 40;
                              HIDWORD(v1787) = 2097153;
                              v1419 = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800DC018[0])(
                                                 v1509,
                                                 &v1787,
                                                 0LL,
                                                 &v1668,
                                                 0LL,
                                                 0);
                              if ( v1419 )
                              {
                                v794 = ((unsigned int (__fastcall *)(LPCWSTR, __int64, _BYTE *))off_1800DC068[0])(
                                         v1419,
                                         104LL,
                                         v1730) == 0;
                                v795 = 0LL;
                                if ( !v794 )
                                  v795 = v1731;
                                DWORD2(v1769) = DWORD2(v1757) - v1757;
                                HIDWORD(v1769) = HIDWORD(v1757) - DWORD1(v1757);
                                v1475 = v795;
                                ((void (__fastcall *)(SIZE_T, LPCWSTR))off_1800DC078[0])(v1509, v1419);
                                ((void (__fastcall *)(SIZE_T, __int64))off_1800DC080[0])(v1509, 1LL);
                                v796 = ((__int64 (__fastcall *)(SIZE_T, void *))off_1800DC078[0])(v1509, Srch);
                                v797 = off_1800DC0E8[0];
                                Srci = (void *)v796;
                                v798 = ((__int64 (__fastcall *)(_QWORD))off_1800DC070[0])(0LL);
                                ((void (__fastcall *)(SIZE_T, __int128 *, __int64))v797)(v1509, &v1769, v798);
                                ((void (__fastcall *)(SIZE_T, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1800DC0D8[0])(
                                  v1509,
                                  lpModuleNamec,
                                  0xFFFFFFFFLL,
                                  &v1769,
                                  v1349,
                                  0LL);
                                if ( (_DWORD)Size == 1 )
                                {
                                  if ( v1391 )
                                    v1392 = ((__int64 (__fastcall *)(__int64))off_1800DC118[0])(8LL);
                                  else
                                    v1392 = 0xFFFFFF;
                                }
                                else
                                {
                                  v1392 = -5723992;
                                }
                                v799 = 0;
                                v800 = -(int)v1757;
                                v801 = 0;
                                if ( (int)v1757 >= 0 )
                                {
                                  v799 = v1757;
                                  v800 = 0;
                                }
                                v802 = -DWORD1(v1757);
                                if ( (SDWORD1(v1757) & 0x80000000) == 0 )
                                {
                                  v801 = DWORD1(v1757);
                                  v802 = 0;
                                }
                                v803 = DWORD2(v1769) - v800;
                                if ( DWORD2(v1769) - v800 >= v1437 - v799 )
                                  v803 = v1437 - v799;
                                v804 = HIDWORD(v1769) - v802;
                                if ( HIDWORD(v1769) - v802 >= v1491 - v801 )
                                  v804 = v1491 - v801;
                                if ( v803 > 0 && v804 > 0 )
                                {
                                  v1492 = 0;
                                  v805 = (const WCHAR *)&v1475[4 * v800 + 4 * (__int64)(v802 * DWORD2(v1769))];
                                  lpModuleNamed = v805;
                                  v806 = &v1369[2 * v799 + 2 * (__int64)(v801 * v1437)];
                                  v807 = 2LL * SDWORD2(v1769);
                                  v1543 = 2LL * v1437;
                                  v1370 = v806;
                                  do
                                  {
                                    v1438 = 0;
                                    v808 = (char *)v806 - (char *)v805;
                                    v809 = (unsigned __int8 *)(v805 + 1);
                                    for ( ii = 0; ii < v803; v1438 = ii )
                                    {
                                      if ( (unsigned __int8)((*v809 + *(v809 - 2) + 2 * (unsigned int)*(v809 - 1)) >> 2) != 0xFF )
                                      {
                                        v811 = (unsigned __int8)~((*v809 + *(v809 - 2) + 2 * (unsigned int)*(v809 - 1)) >> 2);
                                        v809[v808] -= ~((*v809 + *(v809 - 2) + 2 * (unsigned int)*(v809 - 1)) >> 2)
                                                    * (v1392 - v809[v808]);
                                        v812 = v809[v808 - 1];
                                        v813 = (unsigned __int64)(2155905153LL * v811 * (BYTE1(v1392) - v812)) >> 32;
                                        v809[v808 - 1] = v812 + (v813 >> 7 < 0) + (v813 >> 7);
                                        v814 = v809[v808 - 2];
                                        v815 = (unsigned __int64)(2155905153LL * v811 * (BYTE2(v1392) - v814)) >> 32;
                                        v809[v808 - 2] = v814 + (v815 >> 7 < 0) + (v815 >> 7);
                                        ii = v1438;
                                        v809[v808 + 1] += v811 * (255 - v809[v808 + 1]) / 255;
                                      }
                                      ++ii;
                                      v809 += 4;
                                    }
                                    v805 = &lpModuleNamed[v807];
                                    v806 = &v1370[v1543];
                                    lpModuleNamed = (LPCWSTR)((char *)lpModuleNamed + v807 * 2);
                                    v1370 = (unsigned __int16 *)((char *)v1370 + v1543 * 2);
                                    ++v1492;
                                  }
                                  while ( v1492 < v804 );
                                  v792 = 0;
                                  v791 = v1509;
                                }
                                ((void (__fastcall *)(LPCWSTR))off_1800DC038[0])(v1419);
                                if ( Srci )
                                  ((void (__fastcall *)(SIZE_T, void *))off_1800DC078[0])(v791, Srci);
                              }
                              else
                              {
                                v793 = GetLastError();
                                v792 = v793;
                                if ( v793 > 0 )
                                  v792 = (unsigned __int16)v793 | 0x80070000;
                                if ( v792 >= 0 )
                                  v792 = -2147467259;
                              }
                              ((void (__fastcall *)(SIZE_T))off_1800DC030[0])(v791);
                              if ( v792 < 0 )
                                goto LABEL_1090;
                              v816 = v1751;
                              v1393 = v1749;
                              Srcj = v1754;
                              lpModuleNamee = (LPCWSTR)v1751;
                              memset_0(v1732, 0, 0x68uLL);
                              memset_0(v1736, 0, 0x68uLL);
                              v1371 = 0LL;
                              v1439 = 0;
                              v1493 = 0;
                              v1793 = 0LL;
                              v1794 = 0;
                              v1791 = 0LL;
                              v1792 = 0LL;
                              v1770 = 0LL;
                              if ( !v816 )
                                goto LABEL_1090;
                              v817 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800DC050[0])(v1520, 7LL);
                              if ( v817 )
                              {
                                if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800DC068[0])(
                                       v817,
                                       104LL,
                                       v1732) )
                                {
                                  v1371 = v1735;
                                  v1439 = v1733;
                                  v1493 = v1734;
                                }
                                v1510 = ((__int64 (__fastcall *)(SIZE_T))off_1800DC010[0])(v1520);
                                v818 = v1510;
                                if ( v1510 )
                                {
                                  v819 = 0;
                                  DWORD1(v1791) = DWORD2(v1758) - v1758;
                                  DWORD2(v1791) = DWORD1(v1758) - HIDWORD(v1758);
                                  v1669 = 0LL;
                                  v1792 = 0LL;
                                  v1793 = 0LL;
                                  v1794 = 0;
                                  LODWORD(v1791) = 40;
                                  HIDWORD(v1791) = 2097153;
                                  v1420 = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800DC018[0])(
                                                     v1510,
                                                     &v1791,
                                                     0LL,
                                                     &v1669,
                                                     0LL,
                                                     0);
                                  if ( !v1420 )
                                  {
                                    v820 = GetLastError();
                                    v819 = v820;
                                    if ( v820 > 0 )
                                      v819 = (unsigned __int16)v820 | 0x80070000;
                                    if ( v819 >= 0 )
                                      v819 = -2147467259;
LABEL_986:
                                    ((void (__fastcall *)(SIZE_T))off_1800DC030[0])(v818);
                                    if ( v819 < 0 )
                                      goto LABEL_1090;
                                    v847 = v1520;
                                    v848 = 0LL;
LABEL_1084:
                                    ((void (__fastcall *)(SIZE_T, _QWORD))off_1800DC080[0])(v847, v1451);
                                    if ( !v1460 )
                                    {
LABEL_1088:
                                      if ( !v848 )
                                        goto LABEL_1090;
                                      goto LABEL_1089;
                                    }
LABEL_1087:
                                    off_1800DC038[0]();
                                    goto LABEL_1088;
                                  }
                                  v794 = ((unsigned int (__fastcall *)(LPCWSTR, __int64, _BYTE *))off_1800DC068[0])(
                                           v1420,
                                           104LL,
                                           v1736) == 0;
                                  v821 = 0LL;
                                  if ( !v794 )
                                    v821 = v1737;
                                  DWORD2(v1770) = DWORD2(v1758) - v1758;
                                  HIDWORD(v1770) = HIDWORD(v1758) - DWORD1(v1758);
                                  v1476 = v821;
                                  ((void (__fastcall *)(SIZE_T, LPCWSTR))off_1800DC078[0])(v1510, v1420);
                                  ((void (__fastcall *)(SIZE_T, __int64))off_1800DC080[0])(v1510, 1LL);
                                  v822 = ((__int64 (__fastcall *)(SIZE_T, void *))off_1800DC078[0])(v1510, Srcj);
                                  v823 = off_1800DC0E8[0];
                                  Srck = (void *)v822;
                                  v824 = ((__int64 (__fastcall *)(_QWORD))off_1800DC070[0])(0LL);
                                  ((void (__fastcall *)(SIZE_T, __int128 *, __int64))v823)(v1510, &v1770, v824);
                                  ((void (__fastcall *)(SIZE_T, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1800DC0D8[0])(
                                    v1510,
                                    lpModuleNamee,
                                    0xFFFFFFFFLL,
                                    &v1770,
                                    v1349,
                                    0LL);
                                  if ( (_DWORD)Size == 1 )
                                  {
                                    if ( !v1393 )
                                    {
                                      LODWORD(Size) = 0xFFFFFF;
LABEL_967:
                                      v826 = 0;
                                      v827 = -(int)v1758;
                                      v828 = 0;
                                      if ( (int)v1758 >= 0 )
                                      {
                                        v826 = v1758;
                                        v827 = 0;
                                      }
                                      v829 = -DWORD1(v1758);
                                      if ( (SDWORD1(v1758) & 0x80000000) == 0 )
                                      {
                                        v828 = DWORD1(v1758);
                                        v829 = 0;
                                      }
                                      v830 = DWORD2(v1770) - v827;
                                      if ( DWORD2(v1770) - v827 >= v1439 - v826 )
                                        v830 = v1439 - v826;
                                      v831 = HIDWORD(v1770) - v829;
                                      if ( HIDWORD(v1770) - v829 >= v1493 - v828 )
                                        v831 = v1493 - v828;
                                      if ( v830 > 0 && v831 > 0 )
                                      {
                                        v832 = v830;
                                        v1394 = 0;
                                        v833 = (const WCHAR *)&v1476[4 * v827 + 4 * (__int64)(v829 * DWORD2(v1770))];
                                        lpModuleNamef = v833;
                                        v834 = &v1371[2 * v826 + 2 * (__int64)(v1439 * v828)];
                                        v1477 = 2LL * SDWORD2(v1770);
                                        v1544 = 2LL * v1439;
                                        v1372 = v834;
                                        do
                                        {
                                          v835 = (unsigned __int8 *)(v833 + 1);
                                          v1350 = 0;
                                          v836 = (char *)v834 - (char *)v833;
                                          for ( jj = 0; jj < v832; v1350 = jj )
                                          {
                                            if ( (unsigned __int8)((*v835 + *(v835 - 2) + 2 * (unsigned int)*(v835 - 1)) >> 2) != 0xFF )
                                            {
                                              v838 = (unsigned __int8)~((*v835
                                                                       + *(v835 - 2)
                                                                       + 2 * (unsigned int)*(v835 - 1)) >> 2);
                                              v839 = BYTE1(Size);
                                              v835[v836] -= ~((*v835 + *(v835 - 2) + 2 * (unsigned int)*(v835 - 1)) >> 2)
                                                          * (v1506 - v835[v836]);
                                              v840 = v835[v836 - 1];
                                              v841 = (unsigned __int64)(2155905153LL * v838 * (v839 - v840)) >> 32;
                                              v842 = BYTE2(Size);
                                              v835[v836 - 1] = v840 + (v841 >> 7 < 0) + (v841 >> 7);
                                              v843 = v835[v836 - 2];
                                              v844 = (unsigned __int64)(2155905153LL * v838 * (v842 - v843)) >> 32;
                                              v835[v836 - 2] = v843 + (v844 >> 7 < 0) + (v844 >> 7);
                                              v845 = v835[v836 + 1];
                                              v846 = v838 * (255 - v845);
                                              jj = v1350;
                                              v835[v836 + 1] = v845 + v846 / 255;
                                            }
                                            ++jj;
                                            v835 += 4;
                                          }
                                          v833 = &lpModuleNamef[v1477];
                                          v834 = &v1372[v1544];
                                          lpModuleNamef = (LPCWSTR)((char *)lpModuleNamef + v1477 * 2);
                                          v1372 = (unsigned __int16 *)((char *)v1372 + v1544 * 2);
                                          ++v1394;
                                        }
                                        while ( v1394 < v831 );
                                        v819 = 0;
                                        v818 = v1510;
                                      }
                                      ((void (__fastcall *)(LPCWSTR))off_1800DC038[0])(v1420);
                                      if ( Srck )
                                        ((void (__fastcall *)(SIZE_T, void *))off_1800DC078[0])(v818, Srck);
                                      goto LABEL_986;
                                    }
                                    v825 = ((__int64 (__fastcall *)(__int64))off_1800DC118[0])(8LL);
                                  }
                                  else
                                  {
                                    v825 = -5723992;
                                  }
                                  LODWORD(Size) = v825;
                                  v1506 = v825;
                                  goto LABEL_967;
                                }
                              }
                            }
                          }
LABEL_998:
                          GetLastError();
                          goto LABEL_1090;
                        }
                        if ( v1749 || (v849 = -64, v787 == 1) )
                          v849 = -1;
                        LOWORD(v1395) = 0;
                        BYTE2(v1395) = v849;
                        HIBYTE(v1395) = 1;
                        v1440 = 0;
                        v1494 = 0;
                        v1540 = 0;
                        Srcl = (void *)((__int64 (__fastcall *)(SIZE_T))off_1800DC010[0])(v1520);
                        v848 = Srcl;
                        if ( !Srcl )
                          goto LABEL_998;
                        if ( v787 == 1 )
                        {
                          v850 = 0;
                          v851 = DWORD2(v1758) - v1758;
                          v852 = 0;
                          if ( DWORD2(v1758) - (int)v1758 <= DWORD2(v1757) - (int)v1757 )
                            v851 = DWORD2(v1757) - v1757;
                          v853 = HIDWORD(v1758) - DWORD1(v1757);
                          LODWORD(v1564) = v851;
                          LODWORD(v1568) = HIDWORD(v1758) - DWORD1(v1757);
                          if ( v1748 )
                          {
                            v1440 = v1757 + v851 - DWORD2(v1757);
                            v850 = v1440;
                            v1540 = v1758 + v851 - DWORD2(v1758);
                            v853 = (int)v1568;
                            v852 = v1540;
                          }
                          LODWORD(v1569) = DWORD2(v1758) + v852 - v1758;
                          v854 = DWORD2(v1757) + v850 - v1757;
                          LODWORD(v1561) = HIDWORD(v1757) - DWORD1(v1757);
                          v1545 = DWORD1(v1758) - DWORD1(v1757);
                          v1478 = HIDWORD(v1758) - DWORD1(v1757);
                          v848 = Srcl;
                        }
                        else
                        {
                          v851 = DWORD2(v1768);
                          v853 = HIDWORD(v1768);
                          v1692 = v1757;
                          v854 = DWORD2(v1757);
                          LODWORD(v1561) = HIDWORD(v1757);
                          v1494 = DWORD1(v1757);
                          v1693 = v1758;
                          v1440 = v1757;
                          v1478 = HIDWORD(v1758);
                          LODWORD(v1569) = DWORD2(v1758);
                          v1545 = DWORD1(v1758);
                          v1540 = v1758;
                          LODWORD(v1568) = HIDWORD(v1768);
                          LODWORD(v1564) = DWORD2(v1768);
                        }
                        v1670 = 0LL;
                        v1785 = 0LL;
                        v1784 = 0LL;
                        DWORD2(v1783) = -v853;
                        v1786 = 0;
                        LODWORD(v1783) = 40;
                        DWORD1(v1783) = v851;
                        HIDWORD(v1783) = 2097153;
                        v855 = ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800DC018[0])(
                                 v848,
                                 &v1783,
                                 0LL,
                                 &v1670,
                                 0LL,
                                 0);
                        v1460 = v855;
                        if ( !v855 )
                        {
                          GetLastError();
LABEL_1089:
                          ((void (__fastcall *)(void *))off_1800DC030[0])(v848);
LABEL_1090:
                          if ( v1551 )
                            ((void (__fastcall *)(SIZE_T))off_1800DC038[0])(v1551);
LABEL_1092:
                          if ( v1750 )
                          {
                            v920 = -1LL;
                            do
                              ++v920;
                            while ( *((_WORD *)v1750 + v920) );
                            memset(v1750, 0, 2 * v920 + 2);
                            MemoryFree(v1750);
                            v1750 = 0LL;
                          }
                          if ( v1751 )
                          {
                            v921 = -1LL;
                            do
                              ++v921;
                            while ( *((_WORD *)v1751 + v921) );
                            memset(v1751, 0, 2 * v921 + 2);
                            MemoryFree(v1751);
                            v1751 = 0LL;
                          }
                          if ( v1752 )
                          {
                            v922 = -1LL;
                            do
                              ++v922;
                            while ( *((_WORD *)v1752 + v922) );
                            memset(v1752, 0, 2 * v922 + 2);
                            MemoryFree(v1752);
                            v1752 = 0LL;
                          }
                          if ( v1753 )
                          {
                            off_1800DC038[0]();
                            v1753 = 0LL;
                          }
                          if ( v1754 )
                          {
                            off_1800DC038[0]();
                            v1754 = 0LL;
                          }
                          if ( v1755 )
                          {
                            off_1800DC038[0]();
                            v1755 = 0LL;
                          }
                          while ( _InterlockedCompareExchange(&dword_1800DD560, 1, 0) )
                            ;
                          v923 = dword_1800DD2BC;
                          if ( dword_1800DD2BC > 0 )
                          {
                            --dword_1800DD2BC;
                            if ( v923 == 1 )
                            {
                              v924 = (HMODULE *)&unk_1800DD4F0;
                              v925 = 4LL;
                              do
                              {
                                if ( *v924 )
                                  FreeLibrary(*v924);
                                v924 += 3;
                                --v925;
                              }
                              while ( v925 );
                              memset_0(&unk_1800DD4F0, 0, 0x60uLL);
                              memcpy_0(off_1800DC000, off_1800AFB20, 0x170uLL);
                            }
                          }
                          _InterlockedExchange(&dword_1800DD560, 0);
                          lpModuleNamei = dword_1800DD2B8;
                          v1558 = (LPVOID)((unsigned int)off_1800DC098[0]() - (unsigned int)qword_1800DD2B0);
                          v1821 = 0LL;
                          v1818 = 0LL;
                          v1819 = 0LL;
                          v1820 = 0LL;
                          while ( _InterlockedCompareExchange(&dword_1800DD560, 1, 0) )
                            ;
                          v926 = dword_1800DD2BC;
                          if ( dword_1800DD2BC )
                            goto LABEL_1160;
                          v1377 = 0;
                          v1515 = 0;
                          v927 = 0LL;
                          v1423 = 0;
                          v928 = (const WCHAR *)MemoryAlloc(0x338uLL);
                          v1559 = v928;
                          if ( !v928 )
                          {
LABEL_1128:
                            v1515 = -1073741702;
LABEL_1129:
                            if ( !v927 )
                              goto LABEL_1131;
                            goto LABEL_1130;
                          }
                          v929 = (char *)v928 + 7;
                          v930 = 0;
                          v931 = (unsigned __int8 *)&unk_1800B9202;
                          v932 = 0;
                          v933 = 0;
                          v2 = 103LL;
                          v934 = -1;
                          do
                          {
                            v935 = *(v931 - 1) | (*(v931 - 2) << 8);
                            v936 = v931[2] << 8;
                            v937 = *v931;
                            v931 += 8;
                            v938 = *(v931 - 7) | ((v937 | (v935 << 8)) << 8);
                            v939 = v938 ^ v933;
                            v940 = *(v931 - 3) | ((*(v931 - 4) | ((*(v931 - 5) | v936) << 8)) << 8);
                            v941 = v939 ^ v940 ^ v932 ^ 0xAC987321;
                            v942 = (__ROL4__(v941, 10) + 4991 * __ROL4__(v941 + 1419157410, 5)) ^ v939;
                            v943 = (43881 * __ROR4__(v942 + 133239679, 9) - __ROL4__(v942, 2)) ^ v941;
                            v944 = (24670 * v943 - (v943 >> 13) - 123127970) ^ v942;
                            v945 = (2033 * __ROL4__(v944 ^ 0xAB69, 6) - __ROL4__(v944, 2)) ^ v943;
                            v946 = (133239679 - (v945 ^ 0xAB69605E)) ^ v944;
                            v947 = (43881 * (v946 ^ 0x137F)) ^ __ROR4__(v946, 6) ^ v945;
                            v948 = (__ROL4__(v947, 2) + 24670 * __ROR4__(v947 + 133239679, 15)) ^ v946;
                            v949 = (2033 * __ROR4__(v948 + 1419157410, 14) - __ROL4__(v948, 8)) ^ v947;
                            v950 = __ROR4__(v949, 10) ^ (4991 * __ROR4__(v949 ^ 0xAB69605E, 12)) ^ v948;
                            v951 = (v950 >> 10) ^ (43881 * (v950 ^ 0x7F1)) ^ v949;
                            v952 = (2033 * (__ROR4__(~v951, 5) + 24670)) ^ v950;
                            v953 = v951 ^ (v952 - 2033) ^ 0xAB69605E;
                            v954 = ((v953 >> 2) + 4991 * __ROL4__(v951 ^ (v952 - 2033) ^ 0xAB6967AF, 2)) ^ v952;
                            v955 = (__ROL4__(v954, 7) + 43881 * __ROR4__(v954 - 133239679, 6)) ^ v953;
                            v956 = (24670 * (v955 ^ 0x137F) + __ROR4__(v955, 9)) ^ v954;
                            v957 = (__ROL4__(v956, 7) + 2033 * __ROL4__(v956 ^ 0xAB69, 5)) ^ v955;
                            v958 = v956 ^ v957 ^ 0xAC987321;
                            v959 = (4991 * __ROR4__(v958, 3) - 219010071) ^ v957;
                            v960 = (24670 * __ROR4__(v959 - 133239679, 1) - __ROR4__(v959, 6)) ^ v958;
                            v961 = (__ROL4__(v960, 14) + 2033 * __ROL4__(v960 - 1419157410, 3)) ^ v959;
                            v962 = (4991 * __ROL4__(v961 - 1419157410, 15) - __ROR4__(v961, 14)) ^ v960;
                            v963 = (v962 >> 3) ^ (43881 * (v962 ^ 0x605E)) ^ v961;
                            v964 = 24670 * __ROL4__(v963 ^ 0x7F1137F, 4);
                            v965 = v963;
                            v966 = v934 ^ v963;
                            v934 = v940;
                            v967 = v930 ^ __ROL4__(v965, 2) ^ v964;
                            v930 = v938;
                            v968 = v967 ^ v962;
                            *(v929 - 4) = v968;
                            *v929 = v966;
                            v929 += 8;
                            v969 = __ROR4__(v968, 8);
                            *(v929 - 13) = v969;
                            v970 = __ROR4__(v966, 8);
                            *(v929 - 9) = v970;
                            v971 = __ROR4__(v969, 8);
                            *(v929 - 14) = v971;
                            v972 = __ROR4__(v970, 8);
                            *(v929 - 10) = v972;
                            v973 = __ROR4__(v971, 8);
                            v974 = __ROR4__(v972, 8);
                            *(v929 - 15) = v973;
                            *(v929 - 11) = v974;
                            v932 = __ROR4__(v974, 8);
                            v933 = __ROR4__(v973, 8);
                            --v2;
                          }
                          while ( v2 );
                          v975 = 0;
                          v94 = v1452;
                          v976 = 0LL;
                          v977 = v1559;
                          v927 = 0LL;
                          do
                            v975 ^= *((_BYTE *)v1559 + v976++);
                          while ( v976 < 0x338 );
                          if ( v975 != 64LL )
                          {
                            MemoryFree((void *)v1559);
                            goto LABEL_1128;
                          }
                          *((_BYTE *)v1559 + 823) = 0;
                          v927 = (WCHAR *)v977;
                          v982 = v977;
                          memset_0(&unk_1800DD4F0, 0, 0x60uLL);
                          if ( !*(_BYTE *)v982 )
                          {
LABEL_1130:
                            v978 = GetProcessHeap();
                            HeapFree(v978, 0, v927);
LABEL_1131:
                            if ( v1515 < 0 )
                            {
                              v979 = (HMODULE *)&unk_1800DD4F0;
                              v980 = 4LL;
                              do
                              {
                                if ( *v979 )
                                  FreeLibrary(*v979);
                                v979 += 3;
                                --v980;
                              }
                              while ( v980 );
                              v981 = (HMODULE *)&unk_1800DD4F0;
                              memset_0(&unk_1800DD4F0, 0, 0x60uLL);
                              memcpy_0(off_1800DC000, off_1800AFB20, 0x170uLL);
                              goto LABEL_1161;
                            }
                            v926 = dword_1800DD2BC;
LABEL_1160:
                            v981 = (HMODULE *)&unk_1800DD4F0;
                            dword_1800DD2BC = v926 + 1;
LABEL_1161:
                            _InterlockedExchange(&dword_1800DD560, 0);
                            LODWORD(v1821) = lpModuleNamei;
                            LODWORD(v1818) = (_DWORD)v1558;
                            v1817 = 1;
                            LODWORD(v1819) = -1721306479;
                            DWORD2(v1818) = 1;
                            LODWORD(v1820) = 1;
                            DWORD2(v1819) = 1;
                            DWORD2(v1820) = 1;
                            v995 = 4LL;
                            ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1800DC0D0)(
                              0LL,
                              8225LL,
                              4LL,
                              &v1817);
                            while ( _InterlockedCompareExchange(&dword_1800DD560, 1, 0) )
                              ;
                            v996 = dword_1800DD2BC;
                            if ( dword_1800DD2BC > 0 )
                            {
                              --dword_1800DD2BC;
                              if ( v996 == 1 )
                              {
                                do
                                {
                                  if ( *v981 )
                                    FreeLibrary(*v981);
                                  v981 += 3;
                                  --v995;
                                }
                                while ( v995 );
                                memset_0(&unk_1800DD4F0, 0, 0x60uLL);
                                memcpy_0(off_1800DC000, off_1800AFB20, 0x170uLL);
                              }
                            }
                            _InterlockedExchange(&dword_1800DD560, 0);
                            ((void (__fastcall *)(_QWORD, SIZE_T))off_1800DC160[0])(0LL, v1520);
                            v1569 = v1556;
                            goto LABEL_1170;
                          }
                          while ( 1 )
                          {
                            v983 = v982;
                            v984 = -1LL;
                            do
                              ++v984;
                            while ( v982[v984] );
                            v985 = &v982[v984];
                            v986 = (char *)&unk_1800DD4F0 + 24 * v1423;
                            if ( !GetModuleHandleExW(0, v983, (HMODULE *)v986) )
                              goto LABEL_1128;
                            v987 = 0;
                            v1515 = 0;
                            if ( **(_WORD **)v986 == 23117
                              && (v988 = *(int *)(*(_QWORD *)v986 + 60LL), (unsigned int)v988 < 0x10000000)
                              && (v989 = *(_QWORD *)v986 + v988, v989 >= *(_QWORD *)v986)
                              && *(_DWORD *)v989 == 17744 )
                            {
                              if ( ((*(_WORD *)(v989 + 24) - 267) & 0xFEFF) == 0 )
                              {
                                *(_QWORD *)(v986 + 12) = *(_QWORD *)(v989 + 136);
                                *((_DWORD *)v986 + 2) = *(_DWORD *)(v989 + 80);
                                goto LABEL_1150;
                              }
                              v987 = -1073741811;
                            }
                            else
                            {
                              v987 = -1073741701;
                            }
                            v1515 = v987;
LABEL_1150:
                            v990 = *(_DWORD *)(v985 + 1);
                            v991 = 0;
                            v982 = v985 + 3;
                            v1480 = v990;
                            for ( kk = 0; v991 < v1480; kk = v991 )
                            {
                              v992 = (const CHAR *)v982;
                              v993 = -1LL;
                              do
                                ++v993;
                              while ( *((_BYTE *)v982 + v993) );
                              v982 = (const WCHAR *)((char *)v982 + v993 + 1);
                              if ( v987 >= 0 )
                              {
                                v994 = GetProcAddress(*(HMODULE *)v986, v992);
                                if ( !v994 )
                                  goto LABEL_1129;
                                off_1800DC000[v1377] = v994;
                                v987 = v1515;
                                v991 = kk;
                              }
                              ++v1377;
                              ++v991;
                            }
                            ++v1423;
                            if ( !*(_BYTE *)v982 )
                              goto LABEL_1129;
                          }
                        }
                        ((void (__fastcall *)(void *, __int64))off_1800DC078[0])(v848, v855);
                        if ( (_DWORD)Size == 1 && v1551 )
                        {
                          v1771 = 0LL;
                          v1773 = (int)v1568;
                          v1772 = v851;
                          ((void (__fastcall *)(void *, __int64 *))off_1800DC0E8[0])(v848, &v1771);
                        }
                        v856 = v1750;
                        v1421 = v1749;
                        v1560 = v1753;
                        v1566 = v1750;
                        memset_0(v1738, 0, 0x68uLL);
                        memset_0(v1719, 0, 0x68uLL);
                        v1567 = 0LL;
                        v1511 = 0;
                        v1373 = 0;
                        v1797 = 0LL;
                        v1798 = 0;
                        v1795 = 0LL;
                        v1796 = 0LL;
                        v1767 = 0LL;
                        if ( !v856 )
                        {
LABEL_1086:
                          v848 = Srcl;
                          goto LABEL_1087;
                        }
                        v848 = Srcl;
                        v857 = ((__int64 (__fastcall *)(void *, __int64))off_1800DC050[0])(Srcl, 7LL);
                        if ( !v857 )
                          goto LABEL_1015;
                        if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800DC068[0])(
                               v857,
                               104LL,
                               v1738) )
                        {
                          v1567 = v1741;
                          v1511 = v1739;
                          v1373 = v1740;
                        }
                        v1529 = (LPVOID)((__int64 (__fastcall *)(void *))off_1800DC010[0])(Srcl);
                        if ( !v1529 )
                          goto LABEL_1015;
                        v858 = 0;
                        v859 = v854 - v1440;
                        DWORD2(v1795) = v1494 - v1561;
                        v1673 = 0LL;
                        v1796 = 0LL;
                        v1797 = 0LL;
                        v1798 = 0;
                        LODWORD(v1795) = 40;
                        DWORD1(v1795) = v859;
                        HIDWORD(v1795) = 2097153;
                        v860 = (const WCHAR *)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800DC018[0])(
                                                v1529,
                                                &v1795,
                                                0LL,
                                                &v1673,
                                                0LL,
                                                0);
                        v1559 = v860;
                        if ( v860 )
                        {
                          v862 = ((__int64 (__fastcall *)(const WCHAR *, __int64, _BYTE *))off_1800DC068[0])(
                                   v860,
                                   104LL,
                                   v1719);
                          v863 = 0LL;
                          DWORD2(v1767) = v859;
                          if ( v862 )
                            v863 = v1720;
                          HIDWORD(v1767) = v1561 - v1494;
                          v1558 = v863;
                          ((void (__fastcall *)(LPVOID, LPCWSTR))off_1800DC078[0])(v1529, v1559);
                          ((void (__fastcall *)(LPVOID, __int64))off_1800DC080[0])(v1529, 1LL);
                          v864 = (void *)((__int64 (__fastcall *)(LPVOID, LPVOID))off_1800DC078[0])(v1529, v1560);
                          v865 = off_1800DC0E8[0];
                          v1560 = v864;
                          v866 = ((__int64 (__fastcall *)(_QWORD))off_1800DC070[0])(0LL);
                          ((void (__fastcall *)(LPVOID, __int128 *, __int64))v865)(v1529, &v1767, v866);
                          v867 = v1529;
                          ((void (__fastcall *)(LPVOID, LPVOID, __int64, __int128 *, int, _QWORD))off_1800DC0D8[0])(
                            v1529,
                            v1566,
                            0xFFFFFFFFLL,
                            &v1767,
                            v1349,
                            0LL);
                          if ( (_DWORD)Size == 1 )
                          {
                            if ( v1421 )
                              v1422 = ((__int64 (__fastcall *)(__int64))off_1800DC118[0])(8LL);
                            else
                              v1422 = 0xFFFFFF;
                          }
                          else
                          {
                            v1422 = -5723992;
                          }
                          v868 = 0;
                          v869 = -v1440;
                          v870 = 0;
                          if ( v1440 >= 0 )
                          {
                            v868 = v1440;
                            v869 = 0;
                          }
                          v871 = -v1494;
                          if ( v1494 >= 0 )
                          {
                            v870 = v1494;
                            v871 = 0;
                          }
                          v872 = DWORD2(v1767) - v869;
                          if ( DWORD2(v1767) - v869 >= v1511 - v868 )
                            v872 = v1511 - v868;
                          LODWORD(v1561) = v872;
                          v873 = HIDWORD(v1767) - v871;
                          if ( HIDWORD(v1767) - v871 >= v1373 - v870 )
                            v873 = v1373 - v870;
                          if ( v872 > 0 && v873 > 0 )
                          {
                            v874 = v1561;
                            v1374 = 0;
                            v875 = (unsigned __int8 *)v1558 + 4 * v869 + 4 * (__int64)(DWORD2(v1767) * v871);
                            v1558 = v875;
                            v876 = (char *)v1567 + 4 * v868 + 4 * (__int64)(v1511 * v870);
                            v1566 = (LPVOID)(4LL * SDWORD2(v1767));
                            v877 = v1566;
                            v1441 = 4LL * v1511;
                            v1567 = v876;
                            do
                            {
                              v1512 = 0;
                              v878 = v876 - (char *)v875;
                              v879 = v875 + 2;
                              v880 = 0;
                              do
                              {
                                if ( (unsigned __int8)((*v879 + *(v879 - 2) + 2 * (unsigned int)*(v879 - 1)) >> 2) != 0xFF )
                                {
                                  v881 = (unsigned __int8)~((*v879 + *(v879 - 2) + 2 * (unsigned int)*(v879 - 1)) >> 2);
                                  v879[v878] -= ~((*v879 + *(v879 - 2) + 2 * (unsigned int)*(v879 - 1)) >> 2)
                                              * (v1422 - v879[v878]);
                                  v882 = v879[v878 - 1];
                                  v883 = (unsigned __int64)(2155905153LL * v881 * (BYTE1(v1422) - v882)) >> 32;
                                  v879[v878 - 1] = v882 + (v883 >> 7 < 0) + (v883 >> 7);
                                  v884 = v879[v878 - 2];
                                  v885 = (unsigned __int64)(2155905153LL * v881 * (BYTE2(v1422) - v884)) >> 32;
                                  v879[v878 - 2] = v884 + (v885 >> 7 < 0) + (v885 >> 7);
                                  v880 = v1512;
                                  v879[v878 + 1] += v881 * (255 - v879[v878 + 1]) / 255;
                                }
                                ++v880;
                                v879 += 4;
                                v1512 = v880;
                              }
                              while ( v880 < v874 );
                              v875 = (unsigned __int8 *)v1558 + (_QWORD)v877;
                              v876 = (char *)v1567 + v1441;
                              v1558 = (char *)v1558 + (_QWORD)v877;
                              v1567 = (char *)v1567 + v1441;
                              ++v1374;
                            }
                            while ( v1374 < v873 );
                            v851 = (unsigned int)v1564;
                            v858 = 0;
                            v867 = v1529;
                          }
                          ((void (__fastcall *)(LPCWSTR))off_1800DC038[0])(v1559);
                          if ( v1560 )
                            ((void (__fastcall *)(LPVOID, LPVOID))off_1800DC078[0])(v867, v1560);
                        }
                        else
                        {
                          v861 = GetLastError();
                          v858 = v861;
                          if ( v861 > 0 )
                            v858 = (unsigned __int16)v861 | 0x80070000;
                          if ( v858 >= 0 )
                            v858 = -2147467259;
                        }
                        ((void (__fastcall *)(LPVOID))off_1800DC030[0])(v1529);
                        if ( v858 < 0 )
                          goto LABEL_1086;
                        v886 = v1751;
                        lpModuleNameg = v1749;
                        v1558 = v1754;
                        v1559 = (LPCWSTR)v1751;
                        memset_0(v1742, 0, 0x68uLL);
                        memset_0(v1746, 0, 0x68uLL);
                        v1530 = 0LL;
                        v1375 = 0;
                        v1513 = 0;
                        v1801 = 0LL;
                        v1802 = 0;
                        v1799 = 0LL;
                        v1800 = 0LL;
                        v1774 = 0LL;
                        if ( !v886 )
                          goto LABEL_1086;
                        v848 = Srcl;
                        v887 = ((__int64 (__fastcall *)(void *, __int64))off_1800DC050[0])(Srcl, 7LL);
                        if ( !v887 )
                          goto LABEL_1015;
                        if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1800DC068[0])(
                               v887,
                               104LL,
                               v1742) )
                        {
                          v1530 = v1745;
                          v1375 = v1743;
                          v1513 = v1744;
                        }
                        v1567 = (LPVOID)((__int64 (__fastcall *)(void *))off_1800DC010[0])(Srcl);
                        if ( !v1567 )
                        {
LABEL_1015:
                          GetLastError();
                          goto LABEL_1087;
                        }
                        v888 = 0;
                        v889 = (_DWORD)v1569 - v1540;
                        DWORD1(v1799) = (_DWORD)v1569 - v1540;
                        DWORD2(v1799) = v1545 - v1478;
                        v1676[0] = 0LL;
                        v1800 = 0LL;
                        v1801 = 0LL;
                        v1802 = 0;
                        LODWORD(v1799) = 40;
                        HIDWORD(v1799) = 2097153;
                        v890 = (void *)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800DC018[0])(
                                         v1567,
                                         &v1799,
                                         0LL,
                                         v1676,
                                         0LL,
                                         0);
                        v1566 = v890;
                        if ( !v890 )
                        {
                          v891 = GetLastError();
                          v888 = v891;
                          if ( v891 > 0 )
                            v888 = (unsigned __int16)v891 | 0x80070000;
                          if ( v888 >= 0 )
                            v888 = -2147467259;
                          goto LABEL_1080;
                        }
                        v892 = ((__int64 (__fastcall *)(void *, __int64, _BYTE *))off_1800DC068[0])(v890, 104LL, v1746);
                        v893 = 0LL;
                        DWORD2(v1774) = v889;
                        if ( v892 )
                          v893 = v1747;
                        HIDWORD(v1774) = v1478 - v1545;
                        v1560 = v893;
                        v894 = v1567;
                        ((void (__fastcall *)(LPVOID, LPVOID))off_1800DC078[0])(v1567, v1566);
                        ((void (__fastcall *)(LPVOID, __int64))off_1800DC080[0])(v894, 1LL);
                        v895 = (void *)((__int64 (__fastcall *)(LPVOID, LPVOID))off_1800DC078[0])(v894, v1558);
                        v896 = off_1800DC0E8[0];
                        v1558 = v895;
                        v897 = ((__int64 (__fastcall *)(_QWORD))off_1800DC070[0])(0LL);
                        ((void (__fastcall *)(LPVOID, __int128 *, __int64))v896)(v1567, &v1774, v897);
                        v898 = v1567;
                        ((void (__fastcall *)(LPVOID, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1800DC0D8[0])(
                          v1567,
                          v1559,
                          0xFFFFFFFFLL,
                          &v1774,
                          v1349,
                          0LL);
                        if ( (_DWORD)Size == 1 )
                        {
                          if ( !lpModuleNameg )
                          {
                            lpModuleNameh = 0xFFFFFF;
LABEL_1061:
                            v900 = 0;
                            v901 = -v1540;
                            v902 = 0;
                            if ( v1540 >= 0 )
                            {
                              v900 = v1540;
                              v901 = 0;
                            }
                            v903 = -v1545;
                            if ( v1545 >= 0 )
                            {
                              v902 = v1545;
                              v903 = 0;
                            }
                            v904 = DWORD2(v1774) - v901;
                            if ( DWORD2(v1774) - v901 >= v1375 - v900 )
                              v904 = v1375 - v900;
                            v1479 = v904;
                            v905 = HIDWORD(v1774) - v903;
                            if ( HIDWORD(v1774) - v903 >= v1513 - v902 )
                              v905 = v1513 - v902;
                            if ( v904 > 0 && v905 > 0 )
                            {
                              v906 = v1375;
                              v907 = v1375 * v902;
                              v1376 = 0;
                              v908 = (const WCHAR *)((char *)v1560 + 4 * v901 + 4 * (__int64)(DWORD2(v1774) * v903));
                              v1559 = v908;
                              v909 = &v1530[4 * v900 + 4 * (__int64)v907];
                              v1560 = (LPVOID)(4LL * SDWORD2(v1774));
                              v910 = v1560;
                              v1546 = 4 * v906;
                              v1531 = v909;
                              do
                              {
                                v1514 = 0;
                                v911 = v909 - (char *)v908;
                                v912 = (unsigned __int8 *)(v908 + 1);
                                v913 = 0;
                                do
                                {
                                  if ( (unsigned __int8)((*v912 + *(v912 - 2) + 2 * (unsigned int)*(v912 - 1)) >> 2) != 0xFF )
                                  {
                                    v914 = (unsigned __int8)~((*v912 + *(v912 - 2) + 2 * (unsigned int)*(v912 - 1)) >> 2);
                                    v912[v911] -= ~((*v912 + *(v912 - 2) + 2 * (unsigned int)*(v912 - 1)) >> 2)
                                                * (v1506 - v912[v911]);
                                    v915 = v912[v911 - 1];
                                    v916 = (unsigned __int64)(2155905153LL * v914 * (BYTE1(lpModuleNameh) - v915)) >> 32;
                                    v912[v911 - 1] = v915 + (v916 >> 7 < 0) + (v916 >> 7);
                                    v917 = v912[v911 - 2];
                                    v918 = (unsigned __int64)(2155905153LL * v914 * (BYTE2(lpModuleNameh) - v917)) >> 32;
                                    v912[v911 - 2] = v917 + (v918 >> 7 < 0) + (v918 >> 7);
                                    v913 = v1514;
                                    v912[v911 + 1] += v914 * (255 - v912[v911 + 1]) / 255;
                                  }
                                  ++v913;
                                  v912 += 4;
                                  v1514 = v913;
                                }
                                while ( v913 < v1479 );
                                v908 = (LPCWSTR)((char *)v1559 + (_QWORD)v910);
                                v909 = &v1531[v1546];
                                v1559 = (LPCWSTR)((char *)v1559 + (_QWORD)v910);
                                v1531 += v1546;
                                ++v1376;
                              }
                              while ( v1376 < v905 );
                              v888 = 0;
                              v851 = (unsigned int)v1564;
                              v898 = v1567;
                            }
                            ((void (__fastcall *)(LPVOID))off_1800DC038[0])(v1566);
                            if ( v1558 )
                              ((void (__fastcall *)(LPVOID, LPVOID))off_1800DC078[0])(v898, v1558);
LABEL_1080:
                            ((void (__fastcall *)(LPVOID))off_1800DC030[0])(v1567);
                            if ( v888 >= 0 )
                            {
                              v919 = v851;
                              v848 = Srcl;
                              if ( (_DWORD)Size == 1 )
                              {
                                v847 = v1520;
                                ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, __int64, _DWORD, void *, _DWORD, _DWORD, int))off_1800DC000[0])(
                                  v1520,
                                  (unsigned int)v1757,
                                  DWORD1(v1757),
                                  v919,
                                  (_DWORD)v1568,
                                  Srcl,
                                  0,
                                  0,
                                  13369376);
                              }
                              else
                              {
                                v1337 = v851;
                                v847 = v1520;
                                ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, __int64, _DWORD, void *, _DWORD, _DWORD, unsigned int, _DWORD, int))off_1800DC040[0])(
                                  v1520,
                                  (unsigned int)v1768,
                                  DWORD1(v1768),
                                  v919,
                                  (_DWORD)v1568,
                                  Srcl,
                                  0,
                                  0,
                                  v1337,
                                  (_DWORD)v1568,
                                  v1395);
                              }
                              goto LABEL_1084;
                            }
                            goto LABEL_1086;
                          }
                          v899 = ((__int64 (__fastcall *)(__int64))off_1800DC118[0])(8LL);
                        }
                        else
                        {
                          v899 = -5723992;
                        }
                        lpModuleNameh = v899;
                        v1506 = v899;
                        goto LABEL_1061;
                      }
                      v646 = 0LL;
                      v1661 = 0LL;
                      v1662 = 0LL;
                      v645 = 0;
                      v1664 = 0LL;
                      v1665 = 0LL;
                      v1666 = 0LL;
                      v1434 = 0;
                      v1587 = 0;
                      if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1800DC0A0[0])(
                             8LL,
                             &v1588,
                             0LL,
                             &v1587) )
                      {
                        v647 = (char *)MemoryAlloc(2LL * v1587);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1665);
                        if ( !v647 )
                        {
                          v1665 = 0LL;
                          v645 = -2147024882;
                          goto LABEL_707;
                        }
                        v1665 = v647;
                        v1472 = MemoryAlloc(4LL * (v1588 + 1));
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1666);
                        if ( !v1472 )
                        {
                          v645 = -2147024882;
LABEL_706:
                          v1666 = 0LL;
                          goto LABEL_707;
                        }
                        v1666 = v1472;
                        if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1800DC0A0[0])(
                               8LL,
                               &v1588,
                               v647,
                               &v1587) )
                        {
                          v649 = v1472;
                          v650 = v1472;
                          if ( v1588 )
                          {
                            for ( mm = 0; mm < v1588; ++mm )
                            {
                              *v650 = ((__int64 (__fastcall *)(char *, _QWORD))off_1800DC0B0[0])(v647, 0LL);
                              v652 = -1LL;
                              do
                                ++v652;
                              while ( *(_WORD *)&v647[2 * v652] );
                              ++v650;
                              v647 += 2 * v652 + 2;
                            }
                            v645 = 0;
                            v649 = v1472;
                          }
                          *v650 = 1033;
                          v646 = v649;
                          v1661 = v649;
                          v1434 = v1588 + 1;
                          goto LABEL_706;
                        }
                      }
                      v648 = GetLastError();
                      v645 = v648;
                      if ( v648 > 0 )
                        v645 = (unsigned __int16)v648 | 0x80070000;
                      if ( v645 >= 0 )
                        v645 = -2147467259;
LABEL_707:
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1666);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1665);
                      if ( v645 < 0 )
                      {
                        v663 = 0LL;
                      }
                      else
                      {
                        v653 = 0;
                        v654 = 0;
                        v1488 = 0;
                        if ( v1434 )
                        {
                          v655 = 0LL;
                          while ( 2 )
                          {
                            v656 = 0;
                            v657 = dword_1800CB8C0;
                            do
                            {
                              if ( v646[v655] == *v657 )
                              {
                                v653 = v656;
                                v1488 = v656;
                                goto LABEL_716;
                              }
                              ++v656;
                              ++v657;
                            }
                            while ( v656 < 0x26 );
                            ++v654;
                            ++v655;
                            if ( v654 < v1434 )
                              continue;
                            break;
                          }
                        }
LABEL_716:
                        v658 = v653;
                        v1435 = 0;
                        if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1800DC0A8[0])(
                               dword_1800CB8C0[v653],
                               v1824,
                               85LL)
                          && ((int (__fastcall *)(_BYTE *, __int64, char *))off_1800DC090[0])(v1824, 88LL, v1775) > 0 )
                        {
                          v1435 = (v1776 >> 27) & 1;
                        }
                        v659 = L"Segoe UI Light";
                        v660 = 19LL;
                        v661 = (const wchar_t **)v1822;
                        do
                        {
                          *v661 = v659;
                          v662 = -1LL;
                          do
                            ++v662;
                          while ( v659[v662] );
                          ++v661;
                          v659 += v662 + 1;
                          --v660;
                        }
                        while ( v660 );
                        Srce = (char *)v1822[byte_1800B9A10[3 * v658]];
                        lpModuleNameb = (char *)v1822[byte_1800B9A10[3 * v658 + 1]];
                        v663 = (char *)v1822[byte_1800B9A10[3 * v658 + 2]];
                        v1367 = (unsigned __int16 *)v663;
                        v664 = (char *)MemoryAlloc(0x1C90uLL);
                        v1473 = v664;
                        if ( v664 )
                        {
                          v665 = v664 + 7;
                          v666 = 0;
                          v667 = (unsigned __int8 *)&unk_1800C9C22;
                          v668 = 0;
                          v669 = 0;
                          v670 = -1;
                          v671 = 914LL;
                          do
                          {
                            v672 = *(v667 - 1) | (*(v667 - 2) << 8);
                            v673 = v667[2] << 8;
                            v674 = *v667;
                            v667 += 8;
                            v675 = *(v667 - 7) | ((v674 | (v672 << 8)) << 8);
                            v676 = v675 ^ v668;
                            v677 = *(v667 - 3) | ((*(v667 - 4) | ((*(v667 - 5) | v673) << 8)) << 8);
                            v678 = v676 ^ v666 ^ v677 ^ 0xAC987321;
                            v679 = (__ROL4__(v678, 10) + 4991 * __ROL4__(v678 + 1419157410, 5)) ^ v676;
                            v680 = (43881 * __ROR4__(v679 + 133239679, 9) - __ROL4__(v679, 2)) ^ v678;
                            v681 = (24670 * v680 - (v680 >> 13) - 123127970) ^ v679;
                            v682 = (2033 * __ROL4__(v681 ^ 0xAB69, 6) - __ROL4__(v681, 2)) ^ v680;
                            v683 = (133239679 - (v682 ^ 0xAB69605E)) ^ v681;
                            v684 = (43881 * (v683 ^ 0x137F)) ^ __ROR4__(v683, 6) ^ v682;
                            v685 = (__ROL4__(v684, 2) + 24670 * __ROR4__(v684 + 133239679, 15)) ^ v683;
                            v686 = (2033 * __ROR4__(v685 + 1419157410, 14) - __ROL4__(v685, 8)) ^ v684;
                            v687 = __ROR4__(v686, 10) ^ (4991 * __ROR4__(v686 ^ 0xAB69605E, 12)) ^ v685;
                            v688 = (v687 >> 10) ^ (43881 * (v687 ^ 0x7F1)) ^ v686;
                            v689 = (2033 * (__ROR4__(~v688, 5) + 24670)) ^ v687;
                            v690 = v688 ^ (v689 - 2033) ^ 0xAB69605E;
                            v691 = ((v690 >> 2) + 4991 * __ROL4__(v688 ^ (v689 - 2033) ^ 0xAB6967AF, 2)) ^ v689;
                            v692 = (__ROL4__(v691, 7) + 43881 * __ROR4__(v691 - 133239679, 6)) ^ v690;
                            v693 = (24670 * (v692 ^ 0x137F) + __ROR4__(v692, 9)) ^ v691;
                            v694 = (__ROL4__(v693, 7) + 2033 * __ROL4__(v693 ^ 0xAB69, 5)) ^ v692;
                            v695 = v694 ^ v693 ^ 0xAC987321;
                            v696 = (4991 * __ROR4__(v695, 3) - 219010071) ^ v694;
                            v697 = (24670 * __ROR4__(v696 - 133239679, 1) - __ROR4__(v696, 6)) ^ v695;
                            v698 = (__ROL4__(v697, 14) + 2033 * __ROL4__(v697 - 1419157410, 3)) ^ v696;
                            v699 = (4991 * __ROL4__(v698 - 1419157410, 15) - __ROR4__(v698, 14)) ^ v697;
                            v700 = (v699 >> 3) ^ (43881 * (v699 ^ 0x605E)) ^ v698;
                            v701 = 24670 * __ROL4__(v700 ^ 0x7F1137F, 4);
                            v702 = v700;
                            v703 = v670 ^ v700;
                            v670 = v677;
                            v704 = v669 ^ __ROL4__(v702, 2) ^ v701;
                            v669 = v675;
                            v705 = v704 ^ v699;
                            *(v665 - 4) = v705;
                            *v665 = v703;
                            v665 += 8;
                            v706 = __ROR4__(v705, 8);
                            *(v665 - 13) = v706;
                            v707 = __ROR4__(v703, 8);
                            *(v665 - 9) = v707;
                            v708 = __ROR4__(v706, 8);
                            *(v665 - 14) = v708;
                            v709 = __ROR4__(v707, 8);
                            *(v665 - 10) = v709;
                            v710 = __ROR4__(v708, 8);
                            v711 = __ROR4__(v709, 8);
                            *(v665 - 15) = v710;
                            *(v665 - 11) = v711;
                            v666 = __ROR4__(v711, 8);
                            v668 = __ROR4__(v710, 8);
                            --v671;
                          }
                          while ( v671 );
                          v712 = v1473;
                          LODWORD(v2) = 0;
                          v713 = 0LL;
                          v714 = 0LL;
                          do
                          {
                            v715 = _mm_loadu_si128((const __m128i *)&v1473[v713]);
                            v713 += 16LL;
                            v716 = _mm_xor_si128(v715, v714);
                            v714 = v716;
                          }
                          while ( v713 < 0x1C90 );
                          v717 = _mm_xor_si128(v716, _mm_srli_si128(v716, 8));
                          v718 = _mm_xor_si128(v717, _mm_srli_si128(v717, 4));
                          v719 = _mm_xor_si128(v718, _mm_srli_si128(v718, 2));
                          if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v719, _mm_srli_si128(v719, 1))) == 127LL )
                          {
                            v720 = v1816;
                            v1662 = v1473;
                            v645 = 0;
                            v1663 = 7312LL;
                            v721 = 6LL;
                            do
                            {
                              for ( nn = 0; nn < 0x26; ++nn )
                              {
                                if ( v1488 == nn )
                                  *v720 = v712;
                                v723 = -1LL;
                                do
                                  ++v723;
                                while ( v712[v723] );
                                v712 += v723 + 1;
                              }
                              ++v720;
                              --v721;
                            }
                            while ( v721 );
                            v724 = (void **)MemoryAlloc(0x18uLL);
                            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1664);
                            if ( v724 )
                            {
                              v1449 = 0;
                              v725 = v724;
                              v726 = v1823;
                              v1664 = v724;
                              v727 = v724;
                              v1542 = v1823;
                              *(_OWORD *)v724 = 0LL;
                              v724[2] = 0LL;
                              v728 = 0;
                              v1474 = v724;
                              while ( 2 )
                              {
                                v729 = *v726;
                                v730 = &unk_1800CB958;
                                v731 = 0LL;
                                while ( v729 != *v730 )
                                {
                                  v731 = (unsigned int)(v731 + 1);
                                  ++v730;
                                  if ( (unsigned int)v731 >= 6 )
                                    goto LABEL_754;
                                }
                                v732 = (void *)v1816[v731];
                                v733 = -1LL;
                                v1569 = v732;
                                do
                                  ++v733;
                                while ( *((_BYTE *)v732 + v733) );
                                v734 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD, _QWORD, _DWORD))off_1800DC0C0[0])(
                                         65001LL,
                                         0LL,
                                         v732,
                                         (unsigned int)(v733 + 1),
                                         0LL,
                                         0);
                                v1489 = v734;
                                if ( !v734 )
                                {
                                  v738 = GetLastError();
                                  v645 = v738;
                                  if ( v738 > 0 )
                                    v645 = (unsigned __int16)v738 | 0x80070000;
                                  if ( v645 >= 0 )
                                    v645 = -2147467259;
                                  goto LABEL_765;
                                }
                                v735 = MemoryAlloc(2LL * v734);
                                *v1474 = v735;
                                if ( !v735 )
                                {
                                  v645 = -2147024882;
                                  goto LABEL_765;
                                }
                                v736 = -1LL;
                                do
                                  ++v736;
                                while ( *((_BYTE *)v1569 + v736) );
                                if ( !((unsigned int (__fastcall *)(__int64, _QWORD, void *, _QWORD, void *, int))off_1800DC0C0[0])(
                                        65001LL,
                                        0LL,
                                        v1569,
                                        (unsigned int)(v736 + 1),
                                        v735,
                                        v1489) )
                                {
                                  v737 = GetLastError();
                                  v645 = v737;
                                  if ( v737 > 0 )
                                    v645 = (unsigned __int16)v737 | 0x80070000;
                                  if ( v645 >= 0 )
                                    v645 = -2147467259;
                                  goto LABEL_765;
                                }
                                v727 = v1474;
                                v728 = v1449;
LABEL_754:
                                ++v728;
                                v726 = v1542 + 1;
                                v1449 = v728;
                                ++v727;
                                ++v1542;
                                v1474 = v727;
                                if ( v728 < 3 )
                                  continue;
                                break;
                              }
                              v725 = 0LL;
                              v1664 = 0LL;
                              v1660 = v724;
                              v1748 = v1435;
                            }
                            else
                            {
                              v725 = 0LL;
                              v645 = -2147024882;
                              v1664 = 0LL;
                            }
LABEL_765:
                            if ( v725 )
                            {
                              v739 = 3LL;
                              do
                              {
                                v740 = *v725;
                                if ( *v725 )
                                {
                                  v741 = -1LL;
                                  do
                                    ++v741;
                                  while ( v740[v741] );
                                  memset(v740, 0, 2 * v741 + 2);
                                  MemoryFree(*v725);
                                  v739 = v1507;
                                }
                                ++v725;
                                v1507 = --v739;
                              }
                              while ( v739 );
                            }
                            v742 = v1663;
                            v663 = (char *)v1367;
LABEL_775:
                            if ( v1662 )
                              memset(v1662, 0, v742);
                            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1664);
                            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1662);
                            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1661);
                            if ( v645 < 0 )
                              goto LABEL_885;
                            v1750 = *v1660;
                            v1751 = v1660[1];
                            v743 = v1660[2];
                            v1708 = 0LL;
                            v1752 = v743;
                            LODWORD(v1708) = 16;
                            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1800DC168)(
                                                  66LL,
                                                  0LL,
                                                  &v1708,
                                                  0LL) )
                            {
                              v744 = GetLastError();
                              v645 = v744;
                              if ( v744 > 0 )
                                v645 = (unsigned __int16)v744 | 0x80070000;
                              v1749 = 0;
                              if ( v645 >= 0 )
                                v645 = -2147467259;
                              goto LABEL_885;
                            }
                            v1749 = BYTE4(v1708) & 1;
                            v745 = Size;
                            v746 = 42;
                            v1450 = 42;
                            if ( (_DWORD)Size != 1 )
                            {
                              if ( (_DWORD)Size == 2 )
                              {
                                v1347 = 15;
                                v1389 = 11;
                              }
                              else if ( (_DWORD)Size == 3 )
                              {
                                v746 = 225;
                                v1389 = 225;
LABEL_790:
                                v1347 = v746;
                              }
                              v747 = 96;
                              v1436 = 96;
                              memset_0(v1812, 0, 0xDCuLL);
                              v1813 = 220;
                              if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1800DC0E0[0])(
                                     0LL,
                                     0xFFFFFFFFLL,
                                     v1812) )
                              {
                                v747 = v1814;
                                *(_QWORD *)&v1707 = 0LL;
                                *((_QWORD *)&v1707 + 1) = v1815;
                                if ( v1814 < 0x60u )
                                  v747 = 96;
                                v1436 = v747;
                              }
                              if ( v745 == 1 )
                                v663 = Srce;
                              memset_0(v1803, 0, 0x5CuLL);
                              v645 = 0;
                              v1508 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0F8[0])(
                                        0LL,
                                        0LL,
                                        1027LL);
                              if ( !v1508 )
                                goto LABEL_803;
                              v748 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0B8[0])(
                                       v1347,
                                       v747,
                                       72LL);
                              v1803[4] = 400;
                              v1804 = 5;
                              v1803[0] = -v748;
                              StringCchCopyW((char *)v1805, 32LL, v663);
                              v749 = ((__int64 (__fastcall *)(_DWORD *))off_1800DC020[0])(v1803);
                              if ( v749 )
                              {
                                v1753 = (void *)v749;
                              }
                              else
                              {
                                v750 = GetLastError();
                                v645 = v750;
                                if ( v750 > 0 )
                                  v645 = (unsigned __int16)v750 | 0x80070000;
                                if ( v645 >= 0 )
                                  v645 = -2147467259;
                              }
                              ((void (__fastcall *)(_QWORD, SIZE_T))off_1800DC160[0])(0LL, v1508);
                              if ( v645 < 0 )
                                goto LABEL_885;
                              v752 = v1367;
                              if ( (_DWORD)Size == 1 )
                                v752 = (unsigned __int16 *)Srce;
                              v1368 = v752;
                              memset_0(v1806, 0, 0x5CuLL);
                              v645 = 0;
                              v753 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0F8[0])(
                                       0LL,
                                       0LL,
                                       1027LL);
                              if ( !v753 )
                                goto LABEL_803;
                              v754 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0B8[0])(
                                       v1389,
                                       v747,
                                       72LL);
                              v1806[4] = 400;
                              v1806[0] = -v754;
                              v1807 = 5;
                              StringCchCopyW((char *)v1808, 32LL, (char *)v1368);
                              v755 = ((__int64 (__fastcall *)(_DWORD *))off_1800DC020[0])(v1806);
                              if ( v755 )
                              {
                                v1754 = (void *)v755;
                              }
                              else
                              {
                                v756 = GetLastError();
                                v645 = v756;
                                if ( v756 > 0 )
                                  v645 = (unsigned __int16)v756 | 0x80070000;
                                if ( v645 >= 0 )
                                  v645 = -2147467259;
                              }
                              ((void (__fastcall *)(_QWORD, __int64))off_1800DC160[0])(0LL, v753);
                              if ( v645 < 0 )
                                goto LABEL_885;
                              v757 = 0;
                              v758 = 0;
                              if ( (_DWORD)Size != 1 )
                              {
                                if ( (_DWORD)Size == 2 )
                                {
                                  v758 = 0;
                                  v757 = SDWORD2(v1707) / 4;
LABEL_823:
                                  *((_QWORD *)&v1768 + 1) = __PAIR64__(v758, v757);
                                  if ( (_DWORD)Size == 1 )
                                  {
                                    v759 = 150;
                                    v1490 = 32;
                                  }
                                  else
                                  {
                                    if ( (unsigned int)(Size - 2) > 1 )
                                    {
                                      v1490 = 42;
                                      v760 = 42;
                                      v759 = 42;
LABEL_830:
                                      v1348 = v759;
                                      v1390 = v760;
                                      v761 = v1750;
                                      v762 = v757 - v759 - v760;
                                      v645 = 0;
                                      DWORD2(v1758) = v762;
                                      DWORD2(v1757) = v762;
                                      Srcf = (void *)((__int64 (__fastcall *)(LPCWSTR, void *))off_1800DC078[0])(
                                                       v1418,
                                                       v1753);
                                      if ( !((unsigned int (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1800DC0D8[0])(
                                              v1418,
                                              v761,
                                              0xFFFFFFFFLL,
                                              &v1757,
                                              3152,
                                              0LL) )
                                        v645 = -2147467259;
                                      if ( Srcf )
                                        ((void (__fastcall *)(LPCWSTR, void *))off_1800DC078[0])(v1418, Srcf);
                                      if ( v645 < 0 )
                                        goto LABEL_885;
                                      v763 = v1751;
                                      v645 = 0;
                                      Srcg = (void *)((__int64 (__fastcall *)(LPCWSTR, void *))off_1800DC078[0])(
                                                       v1418,
                                                       v1754);
                                      if ( !((unsigned int (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1800DC0D8[0])(
                                              v1418,
                                              v763,
                                              0xFFFFFFFFLL,
                                              &v1758,
                                              3152,
                                              0LL) )
                                        v645 = -2147467259;
                                      if ( Srcg )
                                        ((void (__fastcall *)(LPCWSTR, void *))off_1800DC078[0])(v1418, Srcg);
                                      if ( v645 < 0 )
                                        goto LABEL_885;
                                      v764 = Size;
                                      if ( (unsigned int)(Size - 2) <= 1 )
                                      {
                                        v762 = DWORD2(v1758);
                                        if ( SDWORD2(v1757) > SDWORD2(v1758) )
                                          v762 = DWORD2(v1757);
                                      }
                                      if ( v1748 )
                                      {
                                        ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DC150[0])(
                                          &v1757,
                                          (unsigned int)(v762 + v1390 - DWORD2(v1757)),
                                          v1450);
                                        ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DC150[0])(
                                          &v1758,
                                          (unsigned int)(v762 + v1390 - DWORD2(v1758)),
                                          (unsigned int)(HIDWORD(v1757) + v1490));
                                      }
                                      else
                                      {
                                        ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DC150[0])(
                                          &v1757,
                                          v1348,
                                          v1450);
                                        ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DC150[0])(
                                          &v1758,
                                          v1348,
                                          (unsigned int)(HIDWORD(v1757) + v1490));
                                      }
                                      if ( (unsigned int)(v764 - 2) <= 1 )
                                      {
                                        *((_QWORD *)&v1768 + 1) = __PAIR64__(HIDWORD(v1758), v762);
                                        v1756 = -5723992;
                                        goto LABEL_872;
                                      }
                                      if ( v764 != 1 )
                                        goto LABEL_872;
                                      v1756 = 0xFFFFFF;
                                      memset_0(v1809, 0, 0x5CuLL);
                                      v645 = 0;
                                      v765 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0F8[0])(
                                               0LL,
                                               0LL,
                                               1027LL);
                                      if ( v765 )
                                      {
                                        v766 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800DC0B8[0])(11LL, v1436);
                                        v1809[4] = 400;
                                        v1809[0] = -v766;
                                        v1810 = 5;
                                        StringCchCopyW((char *)v1811, 32LL, lpModuleNameb);
                                        v767 = ((__int64 (__fastcall *)(_DWORD *))off_1800DC020[0])(v1809);
                                        if ( v767 )
                                        {
                                          v1755 = v767;
                                        }
                                        else
                                        {
                                          v768 = GetLastError();
                                          v645 = v768;
                                          if ( v768 > 0 )
                                            v645 = (unsigned __int16)v768 | 0x80070000;
                                          if ( v645 >= 0 )
                                            v645 = -2147467259;
                                        }
                                        ((void (__fastcall *)(_QWORD, __int64))off_1800DC160[0])(0LL, v765);
                                        if ( v645 < 0 )
                                          goto LABEL_885;
                                        v769 = v1752;
                                        v645 = 0;
                                        v1761 = v762;
                                        v770 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1800DC078[0])(
                                                 v1418,
                                                 v1755);
                                        if ( !((unsigned int (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1800DC0D8[0])(
                                                v1418,
                                                v769,
                                                0xFFFFFFFFLL,
                                                &v1759,
                                                1120,
                                                0LL) )
                                          v645 = -2147467259;
                                        if ( v770 )
                                          ((void (__fastcall *)(LPCWSTR, __int64))off_1800DC078[0])(v1418, v770);
                                        if ( v645 < 0 )
                                          goto LABEL_885;
                                        v771 = v1761 + 24;
                                        if ( (int)(v1761 + 24) < 90 )
                                          v771 = 90;
                                        v1761 = v771;
                                        v1762 = 32;
                                        v1759 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0B8[0])(
                                                  v1759,
                                                  v1436,
                                                  96LL);
                                        v1760 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0B8[0])(
                                                  v1760,
                                                  v1436,
                                                  96LL);
                                        v1761 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0B8[0])(
                                                  v1761,
                                                  v1436,
                                                  96LL);
                                        v1762 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DC0B8[0])(
                                                  v1762,
                                                  v1436,
                                                  96LL);
                                        if ( v1748 )
                                        {
                                          v772 = (unsigned int)v1757;
                                          if ( (int)v1757 >= (int)v1758 )
                                            v772 = (unsigned int)v1758;
                                        }
                                        else
                                        {
                                          v773 = DWORD2(v1757);
                                          if ( SDWORD2(v1757) <= SDWORD2(v1758) )
                                            v773 = DWORD2(v1758);
                                          v772 = v1759 + v773 - v1761;
                                        }
                                        ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_1800DC150[0])(
                                          &v1759,
                                          v772,
                                          (unsigned int)(HIDWORD(v1758) + 36));
LABEL_872:
                                        v774 = v1748;
                                        v775 = HIDWORD(v1768);
                                        v776 = DWORD2(v1768);
                                        switch ( (_DWORD)Size )
                                        {
                                          case 1:
                                            *(_QWORD *)&v1768 = 0LL;
                                            goto LABEL_884;
                                          case 2:
                                            v1780 = 0LL;
                                            v1782 = 0LL;
                                            v1781 = 0LL;
                                            v780 = ((__int64 (__fastcall *)(_QWORD))off_1800DC148[0])(0LL);
                                            LODWORD(v1780) = 40;
                                            if ( !((unsigned int (__fastcall *)(__int64, __int128 *))off_1800DC108[0])(
                                                    v780,
                                                    &v1780) )
                                            {
LABEL_884:
                                              v645 = 0;
LABEL_885:
                                              ((void (__fastcall *)(_QWORD, LPCWSTR))off_1800DC160[0])(0LL, v1418);
                                              goto LABEL_886;
                                            }
                                            ((void (__fastcall *)(_QWORD, char *))off_1800DC140[0])(
                                              0LL,
                                              (char *)&v1781 + 4);
                                            ((void (__fastcall *)(_QWORD, char *))off_1800DC140[0])(
                                              0LL,
                                              (char *)&v1781 + 12);
                                            if ( v774 )
                                              v778 = DWORD1(v1781) + 5 * HIDWORD(v1781) / 100;
                                            else
                                              v778 = 95 * (HIDWORD(v1781) - v776) / 100;
                                            v779 = 95 * (v1782 - v775);
                                            break;
                                          case 3:
                                            v1777 = 0LL;
                                            v1779 = 0LL;
                                            v1778 = 0LL;
                                            v777 = ((__int64 (__fastcall *)(_QWORD))off_1800DC148[0])(0LL);
                                            LODWORD(v1777) = 40;
                                            if ( !((unsigned int (__fastcall *)(__int64, __int128 *))off_1800DC108[0])(
                                                    v777,
                                                    &v1777) )
                                              goto LABEL_884;
                                            ((void (__fastcall *)(_QWORD, char *))off_1800DC140[0])(
                                              0LL,
                                              (char *)&v1778 + 4);
                                            ((void (__fastcall *)(_QWORD, char *))off_1800DC140[0])(
                                              0LL,
                                              (char *)&v1778 + 12);
                                            v778 = 50 * (HIDWORD(v1778) - v776) / 100;
                                            v779 = 50 * (v1779 - v775);
                                            break;
                                          default:
                                            goto LABEL_884;
                                        }
                                        LODWORD(v1768) = v778;
                                        DWORD1(v1768) = v779 / 100;
                                        goto LABEL_884;
                                      }
LABEL_803:
                                      v751 = GetLastError();
                                      v645 = v751;
                                      if ( v751 > 0 )
                                        v645 = (unsigned __int16)v751 | 0x80070000;
                                      if ( v645 >= 0 )
                                        v645 = -2147467259;
                                      goto LABEL_885;
                                    }
                                    v759 = 0;
                                    v1450 = 0;
                                    v1490 = 0;
                                  }
                                  v760 = 0;
                                  goto LABEL_830;
                                }
                                if ( (_DWORD)Size != 3 )
                                  goto LABEL_823;
                              }
                              v757 = DWORD2(v1707);
                              v758 = HIDWORD(v1707);
                              goto LABEL_823;
                            }
                            v1389 = 11;
                            goto LABEL_790;
                          }
                          MemoryFree(v1473);
                          v663 = (char *)v1367;
                          v645 = -1073425151;
                        }
                        else
                        {
                          v645 = -2147024882;
                        }
                      }
                      v742 = 0LL;
                      goto LABEL_775;
                    }
                    v576 = dword_1800DD2BC;
LABEL_683:
                    dword_1800DD2BC = v576 + 1;
                    goto LABEL_684;
                  }
                  while ( 1 )
                  {
                    v632 = v631;
                    v633 = -1LL;
                    do
                      ++v633;
                    while ( v631[v633] );
                    v634 = &v631[v633];
                    v1417 = (WCHAR *)((char *)&unk_1800DD4F0 + 24 * v1539);
                    if ( !GetModuleHandleExW(0, v632, (HMODULE *)v1417) )
                      goto LABEL_651;
                    v635 = (HMODULE *)((char *)&unk_1800DD4F0 + 24 * v1539);
                    v636 = 0;
                    v1487 = 0;
                    if ( **(_WORD **)v1417 == 23117
                      && (v637 = *(int *)(*(_QWORD *)v1417 + 60LL), (unsigned int)v637 < 0x10000000)
                      && (v638 = *(_QWORD *)v1417 + v637, v638 >= *(_QWORD *)v1417)
                      && *(_DWORD *)v638 == 17744 )
                    {
                      if ( ((*(_WORD *)(v638 + 24) - 267) & 0xFEFF) == 0 )
                      {
                        *(_QWORD *)(v1417 + 6) = *(_QWORD *)(v638 + 136);
                        *((_DWORD *)v1417 + 2) = *(_DWORD *)(v638 + 80);
                        goto LABEL_673;
                      }
                      v636 = -1073741811;
                    }
                    else
                    {
                      v636 = -1073741701;
                    }
                    v1487 = v636;
LABEL_673:
                    v639 = *(_DWORD *)(v634 + 1);
                    v640 = 0;
                    v631 = v634 + 3;
                    LODWORD(Size) = v639;
                    v1505 = 0;
                    if ( v639 )
                    {
                      do
                      {
                        v641 = (const CHAR *)v631;
                        v642 = -1LL;
                        do
                          ++v642;
                        while ( *((_BYTE *)v631 + v642) );
                        v631 = (WCHAR *)((char *)v631 + v642 + 1);
                        if ( v636 >= 0 )
                        {
                          v643 = GetProcAddress(*v635, v641);
                          if ( !v643 )
                            goto LABEL_652;
                          v635 = (HMODULE *)((char *)&unk_1800DD4F0 + 24 * v1539);
                          off_1800DC000[v1433] = v643;
                          v636 = v1487;
                          v640 = v1505;
                        }
                        ++v1433;
                        v1505 = ++v640;
                      }
                      while ( v640 < (unsigned int)Size );
                    }
                    ++v1539;
                    if ( !*(_BYTE *)v631 )
                      goto LABEL_652;
                  }
                }
                while ( 1 )
                {
                  v564 = v563;
                  v565 = -1LL;
                  do
                    ++v565;
                  while ( v563[v565] );
                  v566 = &v563[v565];
                  Srcd = (char *)&unk_1800DD4F0 + 24 * v1432;
                  if ( !GetModuleHandleExW(0, v564, (HMODULE *)Srcd) )
                    goto LABEL_608;
                  v567 = (HMODULE *)((char *)&unk_1800DD4F0 + 24 * v1432);
                  v568 = 0;
                  v1388 = 0;
                  if ( **(_WORD **)Srcd == 23117
                    && (v569 = *(int *)(*(_QWORD *)Srcd + 60LL), (unsigned int)v569 < 0x10000000)
                    && (v570 = *(_QWORD *)Srcd + v569, v570 >= *(_QWORD *)Srcd)
                    && *(_DWORD *)v570 == 17744 )
                  {
                    if ( ((*(_WORD *)(v570 + 24) - 267) & 0xFEFF) == 0 )
                    {
                      *(_QWORD *)(Srcd + 12) = *(_QWORD *)(v570 + 136);
                      *((_DWORD *)Srcd + 2) = *(_DWORD *)(v570 + 80);
                      goto LABEL_630;
                    }
                    v568 = -1073741811;
                  }
                  else
                  {
                    v568 = -1073741701;
                  }
                  v1388 = v568;
LABEL_630:
                  v571 = *(_DWORD *)(v566 + 1);
                  v572 = 0;
                  v563 = v566 + 3;
                  v1486 = v571;
                  for ( i1 = 0; v572 < v1486; i1 = v572 )
                  {
                    v573 = (const CHAR *)v563;
                    v574 = -1LL;
                    do
                      ++v574;
                    while ( *((_BYTE *)v563 + v574) );
                    v563 = (const WCHAR *)((char *)v563 + v574 + 1);
                    if ( v568 >= 0 )
                    {
                      v575 = GetProcAddress(*v567, v573);
                      if ( !v575 )
                        goto LABEL_609;
                      v567 = (HMODULE *)((char *)&unk_1800DD4F0 + 24 * v1432);
                      off_1800DC000[v1346] = v575;
                      v568 = v1388;
                      v572 = i1;
                    }
                    ++v1346;
                    ++v572;
                  }
                  ++v1432;
                  if ( !*(_BYTE *)v563 )
                    goto LABEL_609;
                }
              }
            }
LABEL_66:
            v83 = GetLastError();
            v77 = v83;
            if ( v83 > 0 )
              v77 = (unsigned __int16)v83 | 0x80070000;
            if ( v77 >= 0 )
              v77 = -2147467259;
            goto LABEL_105;
          }
          v6 = dword_1800DD2BC;
LABEL_55:
          dword_1800DD2BC = v6 + 1;
          goto LABEL_56;
        }
        v61 = 0;
        while ( 1 )
        {
          v62 = v60;
          v63 = -1LL;
          do
            ++v63;
          while ( v60[v63] );
          v64 = &v60[v63];
          v65 = (char *)&unk_1800DD4F0 + 24 * v61;
          if ( !GetModuleHandleExW(0, v62, (HMODULE *)v65) )
            break;
          v59 = 0;
          if ( **(_WORD **)v65 == 23117
            && (v66 = *(int *)(*(_QWORD *)v65 + 60LL), (unsigned int)v66 < 0x10000000)
            && (v67 = *(_QWORD *)v65 + v66, v67 >= *(_QWORD *)v65)
            && *(_DWORD *)v67 == 17744 )
          {
            if ( ((*(_WORD *)(v67 + 24) - 267) & 0xFEFF) != 0 )
            {
              v59 = -1073741811;
            }
            else
            {
              *(_QWORD *)(v65 + 12) = *(_QWORD *)(v67 + 136);
              *((_DWORD *)v65 + 2) = *(_DWORD *)(v67 + 80);
            }
          }
          else
          {
            v59 = -1073741701;
          }
          v68 = *(_DWORD *)(v64 + 1);
          v69 = 0;
          v60 = v64 + 3;
          for ( i2 = v68; v69 < i2; ++v69 )
          {
            v70 = (const CHAR *)v60;
            v71 = -1LL;
            do
              ++v71;
            while ( *((_BYTE *)v60 + v71) );
            v60 = (WCHAR *)((char *)v60 + v71 + 1);
            if ( v59 >= 0 )
            {
              v72 = GetProcAddress(*(HMODULE *)v65, v70);
              if ( !v72 )
                goto LABEL_46;
              off_1800DC000[v1483] = v72;
            }
            ++v1483;
          }
          ++v61;
          if ( !*(_BYTE *)v60 )
            goto LABEL_46;
        }
      }
      else
      {
        MemoryFree(lpModuleName);
      }
    }
    v59 = -1073741702;
LABEL_46:
    if ( !v8 )
      goto LABEL_48;
    goto LABEL_47;
  }
  *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
  ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  return (unsigned int)v3;
}
