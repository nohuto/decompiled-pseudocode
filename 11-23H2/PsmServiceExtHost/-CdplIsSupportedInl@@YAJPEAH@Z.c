/*
 * XREFs of ?CdplIsSupportedInl@@YAJPEAH@Z @ 0x1800418CC
 * Callers:
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x1800417C8 (-HampSystemCdplIsManaged@@YAKXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031C40 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlULongLongAdd @ 0x180043570 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x180043594 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1800435B4 (StringCchLengthW.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180047F34 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x18004851C (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x180048610 (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     wcscmp_0 @ 0x1800534C6 (wcscmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x180053520 (_alloca_probe.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180076BD0 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x180098034 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x180098064 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

__int64 __fastcall CdplIsSupportedInl(int *a1)
{
  __int64 v2; // r14
  int v3; // edi
  int v5; // r12d
  int v6; // ebx
  int v7; // eax
  char *v8; // rax
  __int64 v9; // r15
  _BYTE *v10; // r12
  int v11; // eax
  unsigned __int8 *v12; // r13
  int v13; // esi
  int v14; // r11d
  int v15; // ebx
  int v16; // r10d
  int v17; // r9d
  int v18; // ecx
  int v19; // r10d
  int v20; // r11d
  int v21; // r9d
  unsigned int v22; // r8d
  int v23; // r11d
  unsigned int v24; // r8d
  int v25; // r11d
  int v26; // r8d
  unsigned int v27; // r11d
  int v28; // r8d
  int v29; // r11d
  int v30; // r8d
  unsigned int v31; // r11d
  int v32; // edx
  int v33; // r11d
  unsigned int v34; // esi
  int v35; // r11d
  int v36; // esi
  int v37; // r11d
  int v38; // esi
  unsigned int v39; // r11d
  int v40; // esi
  int v41; // r11d
  int v42; // esi
  unsigned int v43; // r11d
  int v44; // esi
  int v45; // edx
  int v46; // ecx
  int v47; // esi
  int v48; // edx
  int v49; // r11d
  int v50; // r11d
  int v51; // esi
  int v52; // r11d
  int v53; // esi
  int v54; // r11d
  int v55; // esi
  WCHAR *v56; // rbx
  unsigned __int64 v57; // rcx
  char v58; // al
  int v59; // r15d
  __int64 v60; // rbx
  HMODULE *v61; // rdi
  unsigned int v62; // r13d
  const WCHAR *v63; // rdx
  __int64 v64; // rax
  WCHAR *v65; // rbx
  char *v66; // rdi
  __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  unsigned int v69; // eax
  unsigned int v70; // r12d
  const CHAR *v71; // rdx
  __int64 v72; // rax
  void **v73; // rcx
  HANDLE v74; // rax
  int v75; // esi
  signed int v76; // ebx
  __int64 v77; // r15
  wchar_t *v78; // rdi
  __int64 v79; // r9
  wchar_t *v80; // rax
  wchar_t *v81; // r8
  signed int v82; // eax
  signed int LastError; // eax
  HDESK (__fastcall *v84)(WARBIRD_DELAY_LOAD *__hidden, unsigned int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v86; // r15
  signed int v87; // eax
  wchar_t *v88; // rdi
  __int64 v89; // r9
  wchar_t *v90; // rax
  wchar_t *v91; // r8
  signed int v92; // eax
  HANDLE CurrentProcess; // rax
  int v94; // edi
  void *v95; // rbx
  int v96; // r15d
  void *v97; // r12
  void *v98; // r13
  HANDLE ProcessHeap; // rax
  _OWORD *v100; // rax
  HANDLE v101; // rax
  _QWORD *v102; // rax
  void *v103; // r11
  int v104; // eax
  void *v105; // r11
  int v106; // eax
  int v107; // eax
  int v108; // eax
  size_t v109; // rdx
  const wchar_t *v110; // rcx
  int v111; // eax
  int v112; // eax
  int v113; // eax
  unsigned int v114; // edi
  HANDLE v115; // rax
  void *v116; // rax
  _DWORD *v117; // r11
  _DWORD *v118; // rax
  int v119; // r10d
  int v120; // eax
  int v121; // edi
  int v122; // r11d
  int v123; // eax
  int v124; // r10d
  int v125; // r9d
  unsigned int *v126; // rcx
  void *v127; // r9
  unsigned int v128; // r10d
  int v129; // eax
  int v130; // r10d
  size_t v131; // rdx
  const wchar_t *v132; // rcx
  int v133; // r9d
  int v134; // r10d
  unsigned int *v135; // rax
  void *v136; // rdi
  unsigned int v137; // r10d
  unsigned int v138; // r11d
  const wchar_t **v139; // rax
  unsigned int *v140; // r9
  void *v141; // rdi
  __int64 v142; // r9
  unsigned int v143; // r10d
  _DWORD *v144; // r9
  unsigned int v145; // r10d
  int v146; // eax
  int v147; // r11d
  _DWORD *v148; // rdi
  int v149; // r11d
  __int64 v150; // r9
  void *v151; // rcx
  int v152; // eax
  unsigned int v153; // r11d
  int v154; // r10d
  int v155; // edi
  __int64 v156; // rcx
  unsigned int *v157; // r11
  void *v158; // rdi
  __int64 v159; // r11
  unsigned int v160; // r10d
  _DWORD *v161; // r11
  int *v162; // rax
  unsigned int v163; // r11d
  unsigned int *v164; // r11
  void *v165; // rdi
  __int64 v166; // r11
  unsigned int v167; // r10d
  unsigned int v168; // r10d
  unsigned int *v169; // r11
  unsigned int *v170; // rax
  __int64 v171; // rcx
  unsigned int v172; // edi
  int v173; // r9d
  unsigned int v174; // r11d
  unsigned int v175; // r11d
  unsigned int v176; // r11d
  unsigned int v177; // r11d
  unsigned int v178; // edi
  unsigned int v179; // r10d
  int v180; // r15d
  unsigned int v181; // edx
  unsigned int v182; // edi
  HANDLE v183; // rax
  _DWORD *v184; // rdi
  void *v185; // rcx
  void *v186; // r9
  void *v187; // rdi
  HANDLE v188; // rax
  unsigned __int8 *v189; // r15
  unsigned __int8 v190; // al
  unsigned __int64 v191; // rcx
  int v192; // r10d
  unsigned __int8 *v193; // r11
  unsigned int v194; // r9d
  int v195; // r8d
  int v196; // r10d
  char v197; // bl
  int v198; // ecx
  unsigned int v199; // r10d
  int v200; // edx
  WCHAR *v201; // rdi
  unsigned int v202; // ecx
  unsigned int v203; // esi
  char v204; // r15
  unsigned __int8 *v205; // r12
  unsigned __int64 v206; // r11
  int v207; // esi
  _BYTE *v208; // r13
  int v209; // r15d
  int v210; // eax
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
  int v239; // ecx
  int v240; // r9d
  int v241; // ecx
  int v242; // r9d
  unsigned int v243; // r10d
  int v244; // r10d
  int v245; // r9d
  int v246; // r10d
  int v247; // r9d
  int v248; // r10d
  void *v249; // rdi
  HANDLE v250; // rax
  _DWORD *v251; // rax
  int v252; // r15d
  HANDLE v253; // rax
  LPVOID v254; // rdx
  WCHAR *v255; // rax
  _QWORD *v256; // rax
  void *v257; // rcx
  _QWORD *v258; // r15
  HANDLE v259; // rax
  LPVOID v260; // rax
  _OWORD *v261; // rcx
  HANDLE v262; // rax
  LPVOID v263; // rax
  LPVOID v264; // rax
  HANDLE v265; // rax
  HANDLE v266; // rax
  HANDLE v267; // rax
  HANDLE v268; // rax
  void *v269; // rdx
  HANDLE v270; // rax
  void *v271; // r9
  __int64 v272; // rdx
  unsigned int v273; // r11d
  int v274; // r15d
  __int64 v275; // r10
  unsigned int v276; // r11d
  __int64 v277; // r10
  unsigned int v278; // edi
  HANDLE v279; // rax
  _DWORD *v280; // rax
  const void **v281; // r9
  void *v282; // rcx
  _DWORD *v283; // r9
  void *v284; // rcx
  __int64 v285; // r9
  void *v286; // r10
  void *v287; // r11
  _DWORD *v288; // r9
  void *v289; // rcx
  __int64 v290; // r9
  void *v291; // r10
  void *v292; // r11
  unsigned int v293; // eax
  HANDLE v294; // rax
  _QWORD *v295; // rdi
  HANDLE v296; // rax
  HANDLE v297; // rax
  HANDLE v298; // rax
  HANDLE v299; // rax
  void *v300; // rdi
  HANDLE v301; // rax
  HANDLE v302; // rax
  HANDLE v303; // rax
  HANDLE v304; // rax
  HANDLE v305; // rax
  HANDLE v306; // rax
  HANDLE v307; // rax
  HANDLE v308; // rax
  int v309; // eax
  unsigned int v310; // ecx
  void *v311; // r10
  void *v312; // r11
  unsigned int v313; // eax
  void *v314; // r10
  void *v315; // r11
  unsigned int *v316; // rcx
  unsigned int *v317; // rcx
  unsigned int v318; // ecx
  void *v319; // r10
  WCHAR *v320; // r11
  unsigned int v321; // eax
  WCHAR *v322; // r15
  unsigned int v323; // edi
  HANDLE v324; // rax
  _DWORD *v325; // rax
  _DWORD *v326; // rdi
  int v327; // r12d
  signed int v328; // eax
  FARPROC v329; // rax
  signed int v330; // eax
  int v331; // eax
  _DWORD *v332; // r10
  WCHAR *v333; // r11
  void *v334; // rdx
  WCHAR *v335; // rdi
  void *v336; // rcx
  void *v337; // r8
  unsigned __int16 *v338; // rax
  int v339; // r15d
  void *v340; // r10
  void *v341; // r11
  int v342; // eax
  WCHAR *v343; // rdx
  void *v344; // rcx
  void *v345; // r10
  void *v346; // r11
  void *v347; // r10
  void *v348; // r11
  void *v349; // r10
  void *v350; // r11
  void *v351; // r10
  void *v352; // r11
  HANDLE v353; // rax
  _QWORD *v354; // r8
  HANDLE v355; // rax
  void *v356; // rcx
  _QWORD *v357; // rax
  HANDLE v358; // rax
  HANDLE v359; // rax
  HANDLE v360; // rax
  HANDLE v361; // rax
  unsigned int *v362; // rax
  HANDLE v363; // rax
  void *v364; // rcx
  HANDLE v365; // rax
  void *v366; // rcx
  unsigned int *v367; // r10
  _QWORD *v368; // rdi
  void *v369; // r15
  HANDLE v370; // rax
  void *v371; // r15
  HANDLE v372; // rax
  void *v373; // r15
  HANDLE v374; // rax
  HANDLE v375; // rax
  unsigned __int64 v376; // r15
  _BYTE *v377; // rcx
  unsigned __int8 *v378; // r8
  _QWORD *v379; // r11
  unsigned __int8 v380; // al
  char v381; // al
  unsigned __int8 *v382; // rsi
  int v383; // ecx
  int v384; // ecx
  int v385; // ebx
  _BYTE *v386; // r8
  int v387; // edi
  _BYTE *v388; // r10
  char v389; // r9
  unsigned int v390; // r15d
  unsigned int v391; // r9d
  int v392; // r10d
  int v393; // r11d
  _BYTE *v394; // r13
  int v395; // ebx
  unsigned __int8 *v396; // r12
  unsigned __int64 v397; // rax
  unsigned int v398; // r14d
  int v399; // r8d
  int v400; // edi
  int v401; // ecx
  int v402; // r8d
  int v403; // r15d
  int v404; // edi
  unsigned int v405; // r9d
  int v406; // r15d
  unsigned int v407; // r9d
  int v408; // r15d
  int v409; // r9d
  unsigned int v410; // r15d
  int v411; // r9d
  int v412; // r15d
  int v413; // r9d
  unsigned int v414; // r15d
  int v415; // r9d
  int v416; // r15d
  unsigned int v417; // r9d
  int v418; // r15d
  int v419; // r9d
  int v420; // r15d
  int v421; // r9d
  int v422; // r15d
  int v423; // r9d
  int v424; // r15d
  int v425; // r9d
  unsigned int v426; // r15d
  unsigned int v427; // r9d
  int v428; // edx
  unsigned int v429; // ecx
  int v430; // r9d
  int v431; // edx
  int v432; // r15d
  int v433; // r15d
  int v434; // r9d
  int v435; // r15d
  int v436; // r9d
  int v437; // r15d
  int v438; // r9d
  unsigned __int64 v439; // rcx
  int *jj; // r10
  int v441; // r15d
  _QWORD *v442; // r11
  _QWORD *v443; // rdi
  void *v444; // r9
  int *v445; // r10
  int v446; // eax
  char *v447; // r10
  void *v448; // r11
  void *v449; // rcx
  int v450; // eax
  int *v451; // r10
  void *v452; // r11
  int v453; // eax
  void *v454; // r11
  int *v455; // r10
  size_t v456; // rax
  void *v457; // rcx
  void *v458; // r11
  void *v459; // r10
  void *v460; // rax
  _QWORD *v461; // r11
  void *v462; // r10
  unsigned int *v463; // rdx
  unsigned int *v464; // r8
  HANDLE v465; // rax
  size_t v466; // rdi
  void *v467; // rcx
  int v468; // edi
  __int64 v469; // r11
  int *v470; // rax
  _DWORD *v471; // rcx
  int v472; // edi
  unsigned int v473; // r10d
  int v474; // edi
  __int64 v475; // r11
  _QWORD *v476; // rax
  _DWORD *v477; // rcx
  int v478; // edi
  unsigned int v479; // r10d
  int v480; // edi
  __int64 v481; // r11
  _DWORD *v482; // rax
  void *v483; // rcx
  int v484; // edi
  unsigned int v485; // r10d
  unsigned int v486; // edi
  __int64 v487; // r11
  void *v488; // rax
  _DWORD *v489; // rcx
  int v490; // edi
  unsigned int v491; // r10d
  int v492; // edi
  __int64 v493; // r11
  _DWORD *v494; // rax
  unsigned int *v495; // rcx
  int v496; // edi
  unsigned int v497; // edi
  int v498; // eax
  unsigned int v499; // r11d
  unsigned int *v500; // rax
  HANDLE v501; // rax
  HANDLE v502; // rax
  HANDLE v503; // rax
  HANDLE v504; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v506; // rax
  unsigned int v507; // edi
  int v508; // eax
  char *v509; // rax
  _BYTE *v510; // rsi
  __int64 v511; // rax
  int v512; // ebx
  unsigned __int8 *v513; // rdi
  int v514; // r13d
  int v515; // r12d
  int v516; // r14d
  int v517; // r11d
  int v518; // r10d
  int v519; // ecx
  int v520; // r11d
  int v521; // r13d
  int v522; // r10d
  unsigned int v523; // r9d
  int v524; // r13d
  unsigned int v525; // r9d
  int v526; // r13d
  int v527; // r9d
  unsigned int v528; // r13d
  int v529; // r9d
  int v530; // r13d
  int v531; // r9d
  unsigned int v532; // r13d
  int v533; // edx
  int v534; // r13d
  unsigned int v535; // ebx
  int v536; // r13d
  int v537; // ebx
  int v538; // r13d
  int v539; // ebx
  unsigned int v540; // r13d
  int v541; // ebx
  int v542; // r13d
  int v543; // ebx
  unsigned int v544; // r13d
  int v545; // ebx
  int v546; // edx
  int v547; // ecx
  int v548; // ebx
  int v549; // edx
  int v550; // r13d
  int v551; // r13d
  int v552; // ebx
  int v553; // r13d
  int v554; // ebx
  int v555; // r13d
  int v556; // ebx
  char v557; // al
  unsigned __int64 v558; // rcx
  WCHAR *v559; // r12
  HMODULE *v560; // r12
  __int64 v561; // r13
  const WCHAR *v562; // rdx
  __int64 v563; // rax
  WCHAR *v564; // r12
  HMODULE *v565; // r8
  int v566; // r13d
  __int64 v567; // rcx
  unsigned __int64 v568; // rcx
  unsigned int v569; // eax
  unsigned int v570; // ecx
  const CHAR *v571; // rdx
  __int64 v572; // rax
  void **v573; // rcx
  HANDLE v574; // rax
  int v575; // eax
  char *v576; // rax
  _BYTE *v577; // rbx
  __int64 v578; // rax
  int v579; // esi
  unsigned __int8 *v580; // rdi
  int v581; // r13d
  int v582; // r12d
  int v583; // r14d
  int v584; // r11d
  int v585; // r10d
  int v586; // ecx
  int v587; // r11d
  int v588; // r13d
  int v589; // r10d
  unsigned int v590; // r9d
  int v591; // r13d
  unsigned int v592; // r9d
  int v593; // r13d
  int v594; // r9d
  unsigned int v595; // r13d
  int v596; // r9d
  int v597; // r13d
  int v598; // r9d
  unsigned int v599; // r13d
  int v600; // edx
  int v601; // r13d
  unsigned int v602; // esi
  int v603; // r13d
  int v604; // esi
  int v605; // r13d
  int v606; // esi
  unsigned int v607; // r13d
  int v608; // esi
  int v609; // r13d
  int v610; // esi
  unsigned int v611; // r13d
  int v612; // esi
  int v613; // edx
  int v614; // ecx
  int v615; // esi
  int v616; // edx
  int v617; // r13d
  int v618; // r13d
  int v619; // esi
  int v620; // r13d
  int v621; // esi
  int v622; // r13d
  int v623; // esi
  char v624; // al
  unsigned __int64 v625; // rcx
  WCHAR *v626; // r12
  HMODULE *v627; // r12
  __int64 v628; // r13
  const WCHAR *v629; // rdx
  __int64 v630; // rax
  WCHAR *v631; // r12
  HMODULE *v632; // r8
  int v633; // r13d
  __int64 v634; // rcx
  unsigned __int64 v635; // rcx
  unsigned int v636; // eax
  unsigned int v637; // ecx
  const CHAR *v638; // rdx
  __int64 v639; // rax
  void **v640; // rcx
  HANDLE v641; // rax
  signed int v642; // eax
  signed int v643; // r12d
  _DWORD *v644; // rdi
  signed int v645; // eax
  _DWORD *v646; // r13
  __int64 v647; // rax
  unsigned int m; // ebx
  __int64 v649; // rcx
  unsigned int v650; // r10d
  unsigned int v651; // r9d
  __int64 v652; // r8
  unsigned int v653; // ecx
  unsigned int *v654; // rdx
  __int64 v655; // rdi
  const wchar_t *v656; // rcx
  __int64 v657; // r8
  const wchar_t **v658; // rdx
  __int64 v659; // rax
  char *v660; // r13
  char *v661; // rax
  unsigned __int16 *v662; // r8
  _BYTE *v663; // r12
  int v664; // r13d
  unsigned __int8 *v665; // rsi
  int v666; // r11d
  int v667; // r10d
  int v668; // r14d
  __int64 v669; // rbx
  int v670; // r9d
  int v671; // r8d
  int v672; // eax
  int v673; // r9d
  int v674; // r11d
  int v675; // r8d
  unsigned int v676; // edi
  int v677; // r11d
  unsigned int v678; // edi
  int v679; // r11d
  int v680; // edi
  unsigned int v681; // r11d
  int v682; // edi
  int v683; // r11d
  int v684; // edi
  unsigned int v685; // r11d
  int v686; // edi
  int v687; // r11d
  unsigned int v688; // r13d
  int v689; // r11d
  int v690; // r13d
  int v691; // r11d
  int v692; // r13d
  unsigned int v693; // r11d
  int v694; // r13d
  int v695; // r11d
  int v696; // r13d
  unsigned int v697; // r11d
  int v698; // r13d
  int v699; // ecx
  int v700; // eax
  int v701; // r13d
  int v702; // ecx
  int v703; // r11d
  int v704; // r11d
  int v705; // r13d
  int v706; // r11d
  int v707; // r13d
  int v708; // r11d
  int v709; // r13d
  char *v710; // r10
  unsigned __int64 v711; // rax
  __m128i v712; // xmm1
  __m128i v713; // xmm0
  __m128i v714; // xmm0
  __m128i v715; // xmm1
  __m128i v716; // xmm1
  __m128i v717; // xmm1
  _QWORD *v718; // rdx
  __int64 v719; // rdi
  unsigned int n; // ecx
  __int64 v721; // rax
  _QWORD *v722; // r13
  __int16 *v723; // rcx
  _QWORD *v724; // rdx
  unsigned int v725; // edi
  __int16 v726; // r8
  _WORD *v727; // rcx
  __int64 v728; // rax
  __int64 v729; // rdi
  __int64 v730; // rax
  int v731; // eax
  void *v732; // rcx
  __int64 v733; // rax
  signed int v734; // eax
  signed int v735; // eax
  unsigned __int64 v736; // rcx
  __int64 v737; // rax
  _WORD *v738; // rdi
  __int64 v739; // rcx
  void **v740; // rax
  void **v741; // rax
  void **v742; // rax
  void *v743; // rax
  signed int v744; // eax
  int v745; // eax
  unsigned int v746; // edi
  char *v747; // rax
  int v748; // eax
  __int64 v749; // rax
  signed int v750; // eax
  int v751; // eax
  __int64 v752; // rax
  signed int v753; // eax
  int v754; // r13d
  unsigned int v755; // edx
  unsigned int v756; // eax
  void *v757; // rdi
  unsigned int v758; // r13d
  void *v759; // rdi
  __int64 v760; // rdi
  int v761; // eax
  __int64 v762; // rax
  signed int v763; // eax
  signed int v764; // eax
  void *v765; // rdi
  __int64 v766; // r13
  int v767; // eax
  __int64 v768; // rdx
  int v769; // edx
  int v770; // r13d
  int v771; // r12d
  int v772; // edi
  __int64 v773; // rax
  int v774; // edx
  int v775; // ecx
  __int64 v776; // rax
  int v777; // eax
  HMODULE *v778; // rdi
  __int64 v779; // r13
  unsigned int v780; // edi
  int v781; // r12d
  __int64 v782; // rax
  int v783; // edi
  int v784; // eax
  void *v785; // r13
  __int64 v786; // rax
  LPCWSTR v787; // r12
  signed int v788; // eax
  signed int v789; // edi
  bool v790; // zf
  SIZE_T v791; // rcx
  __int64 v792; // rax
  __int64 (__fastcall *v793)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v794; // rax
  int v795; // eax
  int v796; // r13d
  int v797; // r9d
  int v798; // edx
  int v799; // r10d
  int v800; // r8d
  int v801; // ecx
  int v802; // r11d
  __int64 v803; // rdi
  int v804; // esi
  SIZE_T v805; // rdx
  unsigned __int16 *v806; // rax
  unsigned __int8 *v807; // r9
  int v808; // r8d
  char *v809; // r10
  int v810; // r8d
  int v811; // edi
  int v812; // edx
  int v813; // edi
  int v814; // edx
  int v815; // edi
  int v816; // ecx
  void *v817; // r13
  __int64 v818; // rax
  LPCWSTR v819; // r12
  signed int v820; // eax
  signed int v821; // edi
  SIZE_T v822; // rcx
  __int64 v823; // rax
  __int64 (__fastcall *v824)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v825; // rax
  int v826; // eax
  int v827; // r10d
  int v828; // r9d
  int v829; // r8d
  int v830; // edx
  int v831; // r13d
  int v832; // r11d
  SIZE_T v833; // rdx
  unsigned __int16 *v834; // rax
  char v835; // si
  unsigned __int8 *v836; // r9
  int v837; // r8d
  char *v838; // r10
  int v839; // r8d
  int v840; // edi
  int v841; // edx
  int v842; // edi
  int v843; // edx
  int v844; // edi
  int v845; // ecx
  SIZE_T v846; // r13
  LPCWSTR v847; // rdi
  char v848; // al
  int v849; // edi
  unsigned int v850; // r12d
  int v851; // r13d
  int v852; // ecx
  int v853; // edi
  int v854; // r13d
  __int64 v855; // rax
  __int64 v856; // rax
  int v857; // edi
  __int64 v858; // rax
  signed int v859; // eax
  signed int v860; // edi
  void *v861; // rcx
  __int64 v862; // rcx
  __int64 v863; // rcx
  __int64 v864; // rcx
  int v865; // eax
  HMODULE *v866; // rdi
  __int64 v867; // r12
  int v868; // r13d
  int v869; // eax
  char *v870; // rax
  _BYTE *v871; // rsi
  int v872; // ebx
  unsigned __int8 *v873; // r12
  int v874; // r13d
  int v875; // r11d
  int v876; // eax
  int v877; // r10d
  int v878; // r9d
  int v879; // ecx
  int v880; // r10d
  int v881; // r11d
  int v882; // r9d
  unsigned int v883; // r8d
  int v884; // r11d
  unsigned int v885; // r8d
  int v886; // r11d
  int v887; // r8d
  unsigned int v888; // r11d
  int v889; // r8d
  int v890; // r11d
  int v891; // r8d
  unsigned int v892; // r11d
  int v893; // r8d
  int v894; // r11d
  unsigned int v895; // r13d
  int v896; // r11d
  int v897; // r13d
  int v898; // r11d
  int v899; // r13d
  unsigned int v900; // r11d
  int v901; // r13d
  int v902; // r11d
  int v903; // r13d
  unsigned int v904; // r11d
  int v905; // r13d
  int v906; // edx
  int v907; // ecx
  int v908; // r13d
  int v909; // edx
  int v910; // r11d
  int v911; // r11d
  int v912; // r13d
  int v913; // r11d
  int v914; // r13d
  int v915; // r11d
  int v916; // r13d
  char v917; // al
  unsigned __int64 v918; // rcx
  WCHAR *v919; // r12
  HMODULE *v920; // rdi
  __int64 v921; // r12
  int v922; // eax
  char *v923; // rcx
  __int64 v924; // rax
  __int64 (__fastcall *v925)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v926; // rax
  int v927; // r10d
  int v928; // r9d
  int v929; // edx
  int v930; // ecx
  int v931; // r8d
  int v932; // r11d
  __int64 v933; // rdi
  int v934; // edx
  const WCHAR *v935; // rsi
  char *v936; // rax
  unsigned __int8 *v937; // r9
  int v938; // r11d
  signed __int64 v939; // r10
  int v940; // r8d
  int v941; // edi
  int v942; // edx
  int v943; // edi
  int v944; // edx
  int v945; // edi
  int v946; // ecx
  void *v947; // rdi
  __int64 v948; // rax
  int v949; // r13d
  __int64 v950; // rax
  signed int v951; // eax
  signed int v952; // edi
  SIZE_T v953; // r13
  int v954; // eax
  char *v955; // rcx
  __int64 v956; // rax
  __int64 (__fastcall *v957)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v958; // rax
  int v959; // eax
  int v960; // r9d
  int v961; // edx
  int v962; // r10d
  int v963; // r8d
  int v964; // ecx
  int v965; // r11d
  __int64 v966; // rdi
  int v967; // ebx
  const WCHAR *v968; // rdx
  char *v969; // rax
  char v970; // r13
  unsigned __int8 *v971; // r9
  int v972; // r8d
  signed __int64 v973; // r10
  int v974; // r8d
  int v975; // edi
  int v976; // edx
  int v977; // edi
  int v978; // edx
  int v979; // edi
  int v980; // ecx
  const WCHAR *v981; // rdx
  __int64 v982; // rax
  WCHAR *v983; // r12
  char *v984; // r13
  int v985; // edi
  __int64 v986; // rcx
  unsigned __int64 v987; // rcx
  unsigned int v988; // eax
  unsigned int v989; // ecx
  const CHAR *v990; // rdx
  __int64 v991; // rax
  void **v992; // rcx
  HANDLE v993; // rax
  __int64 v994; // r12
  int v995; // eax
  HMODULE *v996; // rdi
  void *v997; // r12
  void *v998; // r13
  HANDLE v999; // rax
  _OWORD *v1000; // rax
  HANDLE v1001; // rax
  _QWORD *v1002; // rax
  _QWORD *v1003; // rdi
  unsigned int v1004; // r11d
  int v1005; // eax
  unsigned int v1006; // r11d
  int v1007; // r10d
  int v1008; // eax
  unsigned int v1009; // r11d
  int v1010; // r10d
  int v1011; // eax
  int v1012; // r10d
  unsigned int v1013; // edi
  HANDLE v1014; // rax
  void *v1015; // rax
  unsigned int v1016; // r10d
  _DWORD *v1017; // r11
  _DWORD *v1018; // rax
  int v1019; // r11d
  __int64 v1020; // r11
  unsigned int *v1021; // r9
  __int64 v1022; // r9
  unsigned int v1023; // r11d
  unsigned int *v1024; // r9
  unsigned int v1025; // r10d
  int v1026; // r9d
  int v1027; // r10d
  __int64 v1028; // r11
  unsigned int *v1029; // r10
  __int64 v1030; // r10
  unsigned int v1031; // r9d
  _DWORD *v1032; // r10
  unsigned int v1033; // edi
  int v1034; // r10d
  unsigned int v1035; // r11d
  unsigned int *v1036; // r9
  __int64 v1037; // r9
  _DWORD *v1038; // r9
  SIZE_T *v1039; // rax
  __int64 v1040; // rcx
  unsigned int v1041; // edi
  int v1042; // edi
  unsigned int v1043; // r9d
  unsigned int v1044; // ecx
  unsigned int v1045; // edi
  HANDLE v1046; // rax
  _DWORD *v1047; // rax
  int v1048; // eax
  void *v1049; // r9
  void *v1050; // rcx
  int v1051; // eax
  char *v1052; // r9
  HANDLE v1053; // rax
  int v1054; // edi
  unsigned __int8 v1055; // al
  unsigned __int64 v1056; // rcx
  char *v1057; // rcx
  int v1058; // r9d
  unsigned __int8 *v1059; // r8
  unsigned int v1060; // r10d
  int v1061; // edx
  int v1062; // ecx
  int v1063; // r9d
  char v1064; // si
  int v1065; // r11d
  _BYTE *v1066; // rdi
  unsigned int v1067; // r9d
  unsigned int v1068; // ecx
  unsigned int v1069; // r11d
  int v1070; // ebx
  char v1071; // r14
  char *v1072; // r11
  unsigned __int8 *v1073; // r15
  int v1074; // r11d
  unsigned __int64 v1075; // rsi
  int v1076; // r13d
  int v1077; // r12d
  _BYTE *v1078; // rax
  int v1079; // r8d
  int v1080; // edi
  int v1081; // ecx
  int v1082; // r8d
  int v1083; // edi
  int v1084; // r9d
  int v1085; // r10d
  int v1086; // edx
  int v1087; // r10d
  int v1088; // r9d
  int v1089; // r10d
  int v1090; // r9d
  unsigned int v1091; // r10d
  int v1092; // r9d
  int v1093; // r10d
  int v1094; // r9d
  int v1095; // r10d
  unsigned int v1096; // r9d
  int v1097; // r10d
  unsigned int v1098; // r9d
  unsigned int v1099; // r10d
  int v1100; // r9d
  int v1101; // r10d
  int v1102; // r9d
  int v1103; // r10d
  int v1104; // r9d
  int v1105; // r10d
  int v1106; // r9d
  int v1107; // r10d
  unsigned int v1108; // r9d
  int v1109; // r10d
  unsigned int v1110; // r9d
  int v1111; // r10d
  int v1112; // r9d
  int v1113; // r9d
  int v1114; // r10d
  int v1115; // r9d
  int v1116; // r10d
  int v1117; // r9d
  int v1118; // r10d
  int v1119; // r9d
  void *v1120; // rbx
  HANDLE v1121; // rax
  int v1122; // edi
  WCHAR *v1123; // rax
  HANDLE v1124; // rax
  void *v1125; // rax
  HANDLE v1126; // rax
  _OWORD *v1127; // rax
  HANDLE v1128; // rax
  LPVOID v1129; // rax
  WCHAR *v1130; // rax
  HANDLE v1131; // rax
  HANDLE v1132; // rax
  HANDLE v1133; // rax
  HANDLE v1134; // rax
  HANDLE v1135; // rax
  __int64 v1136; // rdx
  int v1137; // edi
  unsigned int v1138; // r10d
  __int64 v1139; // r9
  unsigned int v1140; // r10d
  __int64 v1141; // r9
  unsigned int v1142; // edi
  HANDLE v1143; // rax
  _DWORD *v1144; // rax
  int v1145; // eax
  unsigned int *v1146; // r9
  void *v1147; // rcx
  __int64 v1148; // r9
  void *v1149; // rcx
  int v1150; // eax
  __int64 v1151; // r9
  void *v1152; // r10
  __int64 v1153; // r9
  void *v1154; // rcx
  int v1155; // eax
  __int64 v1156; // r9
  void *v1157; // r10
  HANDLE v1158; // rax
  int v1159; // eax
  unsigned int v1160; // ecx
  WCHAR *v1161; // r9
  unsigned __int16 *v1162; // r11
  unsigned int v1163; // eax
  WCHAR *v1164; // r9
  unsigned __int16 *v1165; // r11
  unsigned int *v1166; // rcx
  int v1167; // r11d
  unsigned int *v1168; // rcx
  int v1169; // r11d
  unsigned int v1170; // ecx
  unsigned int v1171; // r11d
  void *v1172; // r9
  SIZE_T v1173; // r10
  unsigned int v1174; // edi
  HANDLE v1175; // rax
  void *v1176; // rax
  signed int v1177; // eax
  unsigned int v1178; // r8d
  FARPROC ProcAddress; // rax
  signed int v1180; // eax
  int v1181; // eax
  void *v1182; // r11
  _DWORD *v1183; // r9
  void *v1184; // rax
  unsigned __int16 *v1185; // r10
  void *v1186; // rcx
  WCHAR *v1187; // rdx
  int v1188; // eax
  int v1189; // edi
  void *v1190; // r11
  WCHAR *v1191; // r9
  unsigned __int16 *v1192; // r10
  int v1193; // eax
  WCHAR *v1194; // r8
  WCHAR *v1195; // r9
  unsigned __int16 *v1196; // r10
  int v1197; // eax
  WCHAR *v1198; // r9
  unsigned __int16 *v1199; // r10
  int v1200; // eax
  WCHAR *v1201; // r9
  unsigned __int16 *v1202; // r10
  int v1203; // eax
  WCHAR *v1204; // r9
  unsigned __int16 *v1205; // r10
  int v1206; // eax
  HANDLE v1207; // rax
  _QWORD *v1208; // rdx
  WCHAR *v1209; // rax
  WCHAR *v1210; // r11
  HANDLE v1211; // rax
  void *v1212; // rcx
  _QWORD *v1213; // rax
  HANDLE v1214; // rax
  HANDLE v1215; // rax
  HANDLE v1216; // rax
  HANDLE v1217; // rax
  unsigned int *v1218; // rcx
  HANDLE v1219; // rax
  void *v1220; // rcx
  HANDLE v1221; // rax
  void *v1222; // rcx
  unsigned int *v1223; // r9
  _QWORD *v1224; // rdi
  void *v1225; // rbx
  HANDLE v1226; // rax
  void *v1227; // rbx
  HANDLE v1228; // rax
  void *v1229; // rbx
  HANDLE v1230; // rax
  HANDLE v1231; // rax
  unsigned __int64 v1232; // rdi
  _DWORD *v1233; // rax
  void *v1234; // rcx
  unsigned __int8 *v1235; // r11
  _BYTE *v1236; // rdx
  unsigned int *v1237; // r10
  unsigned __int8 v1238; // al
  int v1239; // esi
  int v1240; // r15d
  int v1241; // r9d
  int v1242; // ecx
  int v1243; // r9d
  unsigned int v1244; // r9d
  int v1245; // eax
  int v1246; // edi
  unsigned int v1247; // r10d
  char v1248; // r8
  unsigned int v1249; // r11d
  unsigned __int64 v1250; // rdi
  int v1251; // r14d
  _BYTE *v1252; // r13
  int v1253; // r10d
  unsigned __int8 *v1254; // r12
  unsigned __int64 v1255; // rbx
  unsigned int v1256; // eax
  int v1257; // r15d
  int v1258; // r9d
  int v1259; // r8d
  int v1260; // ecx
  int v1261; // r9d
  int v1262; // r11d
  int v1263; // r8d
  int v1264; // edi
  int v1265; // r11d
  unsigned int v1266; // edi
  int v1267; // r11d
  int v1268; // edi
  unsigned int v1269; // r11d
  int v1270; // edi
  int v1271; // r11d
  int v1272; // edi
  unsigned int v1273; // r11d
  int v1274; // edi
  int v1275; // r11d
  unsigned int v1276; // eax
  int v1277; // r11d
  int v1278; // eax
  int v1279; // r11d
  int v1280; // eax
  unsigned int v1281; // r11d
  int v1282; // eax
  int v1283; // r11d
  int v1284; // eax
  unsigned int v1285; // r11d
  int v1286; // ecx
  int v1287; // eax
  int v1288; // edx
  int v1289; // r11d
  int v1290; // r11d
  int v1291; // eax
  int v1292; // r11d
  int v1293; // eax
  int v1294; // r11d
  int v1295; // eax
  _DWORD *v1296; // r9
  unsigned __int64 i; // rcx
  unsigned int *v1298; // r11
  WCHAR *v1299; // r8
  int v1300; // edi
  void *v1301; // r9
  unsigned int *v1302; // r11
  WCHAR *v1303; // r10
  void *v1304; // r9
  unsigned int *v1305; // r11
  WCHAR *v1306; // r10
  WCHAR *v1307; // r10
  void *v1308; // r9
  unsigned int *v1309; // r11
  SIZE_T v1310; // r10
  unsigned int *v1311; // rsi
  WCHAR *v1312; // r9
  LPVOID v1313; // rcx
  unsigned int *v1314; // rcx
  void *v1315; // r10
  WCHAR *v1316; // r11
  WCHAR *v1317; // r9
  LPVOID v1318; // rax
  HANDLE v1319; // rax
  size_t v1320; // rsi
  void *v1321; // rcx
  HANDLE v1322; // rax
  void *v1323; // rsi
  HANDLE v1324; // rax
  void *v1325; // rsi
  HANDLE v1326; // rax
  void *v1327; // rsi
  HANDLE v1328; // rax
  HANDLE v1329; // rax
  HANDLE v1330; // rax
  HANDLE v1331; // rax
  void *v1332; // rsi
  HANDLE v1333; // rax
  void *v1334; // rsi
  HANDLE v1335; // rax
  void *v1336; // rsi
  HANDLE v1337; // rax
  HANDLE v1338; // rax
  HANDLE v1339; // rax
  _DWORD *v1340; // rdi
  __int64 v1341; // rcx
  __int64 v1342; // r11
  int *v1343; // rax
  int v1344; // edi
  unsigned int v1345; // r9d
  void *v1346; // rdi
  HANDLE v1347; // rax
  void *v1348; // rdi
  HANDLE v1349; // rax
  HANDLE v1350; // rax
  HANDLE v1351; // rax
  int v1352; // esi
  int v1353; // eax
  HMODULE *v1354; // rdi
  __int64 v1355; // rbx
  unsigned __int8 v1356; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1357; // [rsp+60h] [rbp-A0h]
  WCHAR *v1358; // [rsp+68h] [rbp-98h]
  WCHAR *v1359; // [rsp+68h] [rbp-98h]
  WCHAR *v1360; // [rsp+68h] [rbp-98h]
  WCHAR *v1361; // [rsp+68h] [rbp-98h]
  WCHAR *v1362; // [rsp+68h] [rbp-98h]
  WCHAR *v1363; // [rsp+68h] [rbp-98h]
  WCHAR *v1364; // [rsp+68h] [rbp-98h]
  WCHAR *v1365; // [rsp+68h] [rbp-98h]
  WCHAR *v1366; // [rsp+68h] [rbp-98h]
  LPCWSTR v1367; // [rsp+68h] [rbp-98h]
  LPCWSTR v1368; // [rsp+68h] [rbp-98h]
  LPCWSTR v1369; // [rsp+68h] [rbp-98h]
  LPCWSTR v1370; // [rsp+68h] [rbp-98h]
  LPCWSTR v1371; // [rsp+68h] [rbp-98h]
  LPCWSTR v1372; // [rsp+68h] [rbp-98h]
  LPCWSTR v1373; // [rsp+68h] [rbp-98h]
  LPCWSTR v1374; // [rsp+68h] [rbp-98h]
  LPCWSTR v1375; // [rsp+68h] [rbp-98h]
  WCHAR *v1376; // [rsp+68h] [rbp-98h]
  LPCWSTR v1377; // [rsp+68h] [rbp-98h]
  WCHAR *v1378; // [rsp+68h] [rbp-98h]
  void *v1379; // [rsp+70h] [rbp-90h]
  void *v1380; // [rsp+70h] [rbp-90h]
  void *v1381; // [rsp+70h] [rbp-90h]
  void *v1382; // [rsp+70h] [rbp-90h]
  void *v1383; // [rsp+70h] [rbp-90h]
  void *v1384; // [rsp+70h] [rbp-90h]
  void *v1385; // [rsp+70h] [rbp-90h]
  void *v1386; // [rsp+70h] [rbp-90h]
  void *v1387; // [rsp+70h] [rbp-90h]
  void *v1388; // [rsp+70h] [rbp-90h]
  SIZE_T v1389; // [rsp+70h] [rbp-90h]
  SIZE_T v1390; // [rsp+70h] [rbp-90h]
  void *v1391; // [rsp+70h] [rbp-90h]
  void *v1392; // [rsp+70h] [rbp-90h]
  SIZE_T v1393; // [rsp+70h] [rbp-90h]
  SIZE_T v1394; // [rsp+70h] [rbp-90h]
  void *v1395; // [rsp+70h] [rbp-90h]
  void *v1396; // [rsp+70h] [rbp-90h]
  void *v1397; // [rsp+70h] [rbp-90h]
  void *v1398; // [rsp+70h] [rbp-90h]
  SIZE_T v1399; // [rsp+70h] [rbp-90h]
  size_t v1400; // [rsp+78h] [rbp-88h]
  unsigned int *v1401; // [rsp+78h] [rbp-88h]
  size_t v1402; // [rsp+78h] [rbp-88h]
  size_t v1403; // [rsp+78h] [rbp-88h]
  size_t v1404; // [rsp+78h] [rbp-88h]
  _WORD *v1405; // [rsp+78h] [rbp-88h]
  int v1406; // [rsp+78h] [rbp-88h]
  int v1407; // [rsp+78h] [rbp-88h]
  int v1408; // [rsp+78h] [rbp-88h]
  int v1409; // [rsp+78h] [rbp-88h]
  int v1410; // [rsp+78h] [rbp-88h]
  unsigned int v1411; // [rsp+78h] [rbp-88h]
  int v1412; // [rsp+78h] [rbp-88h]
  int v1413; // [rsp+78h] [rbp-88h]
  unsigned int v1414; // [rsp+78h] [rbp-88h]
  unsigned int v1415; // [rsp+78h] [rbp-88h]
  unsigned int v1416; // [rsp+78h] [rbp-88h]
  unsigned int v1417; // [rsp+78h] [rbp-88h]
  WCHAR *lpModuleName; // [rsp+80h] [rbp-80h]
  __int64 lpModuleNamea; // [rsp+80h] [rbp-80h]
  int lpModuleNameb; // [rsp+80h] [rbp-80h]
  int lpModuleNamec; // [rsp+80h] [rbp-80h]
  int lpModuleNamed; // [rsp+80h] [rbp-80h]
  int lpModuleNamee; // [rsp+80h] [rbp-80h]
  int lpModuleNamef; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNameg; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNameh; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamei; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamej; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamek; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamel; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamem; // [rsp+80h] [rbp-80h]
  int lpModuleNamen; // [rsp+80h] [rbp-80h]
  int lpModuleNameo; // [rsp+80h] [rbp-80h]
  int lpModuleNamep; // [rsp+80h] [rbp-80h]
  int v1435; // [rsp+88h] [rbp-78h]
  int v1436; // [rsp+88h] [rbp-78h]
  unsigned int v1437; // [rsp+88h] [rbp-78h]
  unsigned int v1438; // [rsp+88h] [rbp-78h]
  int v1439; // [rsp+88h] [rbp-78h]
  unsigned int v1440; // [rsp+88h] [rbp-78h]
  void *v1441; // [rsp+88h] [rbp-78h]
  unsigned int v1442; // [rsp+88h] [rbp-78h]
  unsigned int j; // [rsp+88h] [rbp-78h]
  unsigned int k; // [rsp+88h] [rbp-78h]
  unsigned int v1445; // [rsp+88h] [rbp-78h]
  int v1446; // [rsp+88h] [rbp-78h]
  unsigned int v1447; // [rsp+88h] [rbp-78h]
  int v1448; // [rsp+88h] [rbp-78h]
  int v1449; // [rsp+88h] [rbp-78h]
  int v1450; // [rsp+88h] [rbp-78h]
  int v1451; // [rsp+88h] [rbp-78h]
  int v1452; // [rsp+88h] [rbp-78h]
  SIZE_T v1453; // [rsp+90h] [rbp-70h]
  void *v1454; // [rsp+90h] [rbp-70h]
  SIZE_T v1455; // [rsp+90h] [rbp-70h]
  unsigned int *v1456; // [rsp+90h] [rbp-70h]
  SIZE_T v1457; // [rsp+90h] [rbp-70h]
  int v1458; // [rsp+90h] [rbp-70h]
  int v1459; // [rsp+90h] [rbp-70h]
  int v1460; // [rsp+90h] [rbp-70h]
  unsigned int v1461; // [rsp+90h] [rbp-70h]
  int v1462; // [rsp+90h] [rbp-70h]
  unsigned int v1463; // [rsp+90h] [rbp-70h]
  unsigned int v1464; // [rsp+90h] [rbp-70h]
  int v1465; // [rsp+90h] [rbp-70h]
  unsigned int kk; // [rsp+98h] [rbp-68h]
  int v1467; // [rsp+98h] [rbp-68h]
  int v1468; // [rsp+98h] [rbp-68h]
  int v1469; // [rsp+98h] [rbp-68h]
  int v1470; // [rsp+98h] [rbp-68h]
  int v1471; // [rsp+98h] [rbp-68h]
  void *lpMem; // [rsp+A0h] [rbp-60h]
  LPVOID lpMema; // [rsp+A0h] [rbp-60h]
  _WORD *lpMemb; // [rsp+A0h] [rbp-60h]
  char *lpMemc; // [rsp+A0h] [rbp-60h]
  LPVOID lpMemd; // [rsp+A0h] [rbp-60h]
  LPVOID lpMeme; // [rsp+A0h] [rbp-60h]
  char *lpMemf; // [rsp+A0h] [rbp-60h]
  char *lpMemg; // [rsp+A0h] [rbp-60h]
  char *lpMemh; // [rsp+A0h] [rbp-60h]
  char *lpMemi; // [rsp+A0h] [rbp-60h]
  unsigned int *lpMemj; // [rsp+A0h] [rbp-60h]
  void *lpMemk; // [rsp+A0h] [rbp-60h]
  void *lpMeml; // [rsp+A0h] [rbp-60h]
  void *lpMemm; // [rsp+A0h] [rbp-60h]
  SIZE_T v1486; // [rsp+A8h] [rbp-58h]
  int v1487; // [rsp+A8h] [rbp-58h]
  int v1488; // [rsp+A8h] [rbp-58h]
  unsigned int v1489; // [rsp+A8h] [rbp-58h]
  unsigned int v1490; // [rsp+A8h] [rbp-58h]
  int v1491; // [rsp+A8h] [rbp-58h]
  int v1492; // [rsp+A8h] [rbp-58h]
  int v1493; // [rsp+A8h] [rbp-58h]
  int v1494; // [rsp+A8h] [rbp-58h]
  unsigned int v1495; // [rsp+A8h] [rbp-58h]
  unsigned int v1496; // [rsp+A8h] [rbp-58h]
  int v1497; // [rsp+A8h] [rbp-58h]
  int v1498; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v1499; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1500; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1501; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1502; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1503; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1504; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1505; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1506; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1507; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1508; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1509; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1510; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1511; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1512; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v1513; // [rsp+B0h] [rbp-50h]
  int v1514; // [rsp+B8h] [rbp-48h]
  void *v1515; // [rsp+B8h] [rbp-48h]
  unsigned int v1516; // [rsp+B8h] [rbp-48h]
  unsigned int v1517; // [rsp+B8h] [rbp-48h]
  int v1518; // [rsp+B8h] [rbp-48h]
  int v1519; // [rsp+B8h] [rbp-48h]
  unsigned int v1520; // [rsp+B8h] [rbp-48h]
  unsigned int v1521; // [rsp+B8h] [rbp-48h]
  unsigned int v1522; // [rsp+B8h] [rbp-48h]
  int v1523; // [rsp+B8h] [rbp-48h]
  LPVOID v1524; // [rsp+C0h] [rbp-40h]
  int v1525; // [rsp+C0h] [rbp-40h]
  int v1526; // [rsp+C0h] [rbp-40h]
  unsigned int v1527; // [rsp+C0h] [rbp-40h]
  unsigned int ii; // [rsp+C0h] [rbp-40h]
  unsigned int v1529; // [rsp+C0h] [rbp-40h]
  unsigned int v1530; // [rsp+C0h] [rbp-40h]
  int v1531; // [rsp+C0h] [rbp-40h]
  int v1532; // [rsp+C0h] [rbp-40h]
  unsigned int v1533; // [rsp+C0h] [rbp-40h]
  int v1534; // [rsp+C0h] [rbp-40h]
  int v1535; // [rsp+C0h] [rbp-40h]
  unsigned int v1536; // [rsp+C0h] [rbp-40h]
  unsigned int v1537; // [rsp+C0h] [rbp-40h]
  const void *v1538; // [rsp+C0h] [rbp-40h]
  WCHAR *v1539; // [rsp+C8h] [rbp-38h]
  WCHAR *v1540; // [rsp+C8h] [rbp-38h]
  WCHAR *v1541; // [rsp+C8h] [rbp-38h]
  int v1542; // [rsp+C8h] [rbp-38h]
  WCHAR *v1543; // [rsp+C8h] [rbp-38h]
  WCHAR *v1544; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1545; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1546; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1547; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1548; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1549; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1550; // [rsp+C8h] [rbp-38h]
  LPCWSTR v1551; // [rsp+C8h] [rbp-38h]
  WCHAR *v1552; // [rsp+C8h] [rbp-38h]
  unsigned int v1553; // [rsp+D0h] [rbp-30h]
  void *v1554; // [rsp+D0h] [rbp-30h]
  void *v1555; // [rsp+D0h] [rbp-30h]
  void *v1556; // [rsp+D0h] [rbp-30h]
  SIZE_T v1557; // [rsp+D0h] [rbp-30h]
  SIZE_T v1558; // [rsp+D0h] [rbp-30h]
  SIZE_T v1559; // [rsp+D0h] [rbp-30h]
  SIZE_T v1560; // [rsp+D0h] [rbp-30h]
  SIZE_T v1561; // [rsp+D0h] [rbp-30h]
  SIZE_T v1562; // [rsp+D0h] [rbp-30h]
  SIZE_T v1563; // [rsp+D0h] [rbp-30h]
  void *v1564; // [rsp+D0h] [rbp-30h]
  _DWORD *v1565; // [rsp+D0h] [rbp-30h]
  unsigned int Size; // [rsp+D8h] [rbp-28h]
  unsigned int Sizea; // [rsp+D8h] [rbp-28h]
  size_t Sizeb; // [rsp+D8h] [rbp-28h]
  unsigned int Sizec; // [rsp+D8h] [rbp-28h]
  unsigned int Sized; // [rsp+D8h] [rbp-28h]
  unsigned int Sizee; // [rsp+D8h] [rbp-28h]
  unsigned int Sizef; // [rsp+D8h] [rbp-28h]
  int Sizeg; // [rsp+D8h] [rbp-28h]
  int Sizeh; // [rsp+D8h] [rbp-28h]
  int Sizei; // [rsp+D8h] [rbp-28h]
  int Sizej; // [rsp+D8h] [rbp-28h]
  int Sizek; // [rsp+D8h] [rbp-28h]
  const void *v1578; // [rsp+E0h] [rbp-20h]
  LPVOID v1579; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v1580; // [rsp+E0h] [rbp-20h]
  LPVOID v1581; // [rsp+E0h] [rbp-20h]
  void *v1582; // [rsp+E0h] [rbp-20h]
  int v1583; // [rsp+E0h] [rbp-20h]
  void *v1584; // [rsp+E0h] [rbp-20h]
  void *v1585; // [rsp+E0h] [rbp-20h]
  _QWORD *v1586; // [rsp+E8h] [rbp-18h]
  char *v1587; // [rsp+E8h] [rbp-18h]
  __int64 v1588; // [rsp+E8h] [rbp-18h]
  __int64 v1589; // [rsp+E8h] [rbp-18h]
  char *v1590; // [rsp+E8h] [rbp-18h]
  __int64 v1591; // [rsp+E8h] [rbp-18h]
  char *v1592; // [rsp+E8h] [rbp-18h]
  __int64 v1593; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v1594; // [rsp+E8h] [rbp-18h]
  WCHAR *v1595; // [rsp+E8h] [rbp-18h]
  LPVOID v1596; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v1597; // [rsp+E8h] [rbp-18h]
  void *v1598; // [rsp+E8h] [rbp-18h]
  WCHAR *v1599; // [rsp+F0h] [rbp-10h]
  _BYTE *v1600; // [rsp+F0h] [rbp-10h]
  void *v1601; // [rsp+F0h] [rbp-10h]
  void *v1602; // [rsp+F0h] [rbp-10h]
  SIZE_T v1603; // [rsp+F0h] [rbp-10h]
  WCHAR *v1604; // [rsp+F0h] [rbp-10h]
  SIZE_T v1605; // [rsp+F0h] [rbp-10h]
  unsigned __int8 *v1606; // [rsp+F0h] [rbp-10h]
  SIZE_T v1607; // [rsp+F0h] [rbp-10h]
  SIZE_T v1608; // [rsp+F0h] [rbp-10h]
  int *v1609; // [rsp+F8h] [rbp-8h]
  SIZE_T v1610; // [rsp+F8h] [rbp-8h]
  SIZE_T v1611; // [rsp+F8h] [rbp-8h]
  SIZE_T v1612; // [rsp+F8h] [rbp-8h]
  SIZE_T v1613; // [rsp+F8h] [rbp-8h]
  SIZE_T v1614; // [rsp+F8h] [rbp-8h]
  SIZE_T v1615; // [rsp+F8h] [rbp-8h]
  SIZE_T v1616; // [rsp+F8h] [rbp-8h]
  SIZE_T v1617; // [rsp+F8h] [rbp-8h]
  SIZE_T v1618; // [rsp+F8h] [rbp-8h]
  void *v1619; // [rsp+100h] [rbp+0h]
  char *v1620; // [rsp+100h] [rbp+0h]
  _QWORD *v1621; // [rsp+100h] [rbp+0h]
  SIZE_T v1622; // [rsp+100h] [rbp+0h]
  SIZE_T v1623; // [rsp+100h] [rbp+0h]
  unsigned int v1624; // [rsp+100h] [rbp+0h]
  void *v1625; // [rsp+100h] [rbp+0h]
  SIZE_T v1626; // [rsp+100h] [rbp+0h]
  const wchar_t *v1627; // [rsp+108h] [rbp+8h]
  int v1628; // [rsp+108h] [rbp+8h]
  unsigned int v1629; // [rsp+108h] [rbp+8h]
  int v1630; // [rsp+108h] [rbp+8h]
  unsigned int v1631; // [rsp+108h] [rbp+8h]
  _QWORD *v1632; // [rsp+108h] [rbp+8h]
  int v1633; // [rsp+108h] [rbp+8h]
  WCHAR *v1634; // [rsp+108h] [rbp+8h]
  WCHAR *v1635; // [rsp+108h] [rbp+8h]
  void *v1636; // [rsp+110h] [rbp+10h] BYREF
  LPVOID v1637; // [rsp+118h] [rbp+18h]
  LPVOID v1638; // [rsp+120h] [rbp+20h]
  void *v1639; // [rsp+128h] [rbp+28h]
  LPVOID v1640; // [rsp+130h] [rbp+30h]
  LPVOID v1641; // [rsp+138h] [rbp+38h]
  LPVOID v1642; // [rsp+140h] [rbp+40h]
  int v1643; // [rsp+148h] [rbp+48h]
  int v1644; // [rsp+14Ch] [rbp+4Ch]
  unsigned int dwBytes; // [rsp+150h] [rbp+50h] BYREF
  int dwBytes_4; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1647; // [rsp+158h] [rbp+58h] BYREF
  LPVOID v1648; // [rsp+160h] [rbp+60h]
  int v1649; // [rsp+168h] [rbp+68h]
  int v1650; // [rsp+16Ch] [rbp+6Ch]
  int v1651; // [rsp+170h] [rbp+70h]
  unsigned int v1652; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1653; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1654; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1655; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v1656; // [rsp+184h] [rbp+84h] BYREF
  unsigned int v1657; // [rsp+188h] [rbp+88h] BYREF
  unsigned int v1658; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1659; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1660; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v1661; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1662; // [rsp+1A4h] [rbp+A4h] BYREF
  unsigned int v1663; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1664; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1665; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1666; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1667; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1668; // [rsp+1BCh] [rbp+BCh] BYREF
  unsigned int v1669; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1670; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1671; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v1672; // [rsp+1CCh] [rbp+CCh] BYREF
  unsigned int v1673; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1674; // [rsp+1D4h] [rbp+D4h] BYREF
  unsigned int v1675; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1676; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1677; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v1678; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1679; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1680; // [rsp+1ECh] [rbp+ECh] BYREF
  SIZE_T v1681; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v1682; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1683; // [rsp+1FCh] [rbp+FCh] BYREF
  SIZE_T v1684; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1685; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1686; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1687; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1688; // [rsp+214h] [rbp+114h] BYREF
  HLOCAL v1689; // [rsp+218h] [rbp+118h]
  unsigned int v1690; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1691; // [rsp+224h] [rbp+124h] BYREF
  unsigned int v1692; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1693; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1694[3]; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1695; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1696; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1697; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1698; // [rsp+248h] [rbp+148h] BYREF
  unsigned int v1699; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1700; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1701; // [rsp+254h] [rbp+154h] BYREF
  unsigned int v1702; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1703; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1704; // [rsp+260h] [rbp+160h] BYREF
  SIZE_T v1705; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1706; // [rsp+26Ch] [rbp+16Ch] BYREF
  unsigned int v1707; // [rsp+270h] [rbp+170h] BYREF
  SIZE_T v1708; // [rsp+274h] [rbp+174h] BYREF
  unsigned int v1709; // [rsp+27Ch] [rbp+17Ch] BYREF
  unsigned int v1710; // [rsp+280h] [rbp+180h] BYREF
  _DWORD v1711[3]; // [rsp+284h] [rbp+184h] BYREF
  int *v1712; // [rsp+290h] [rbp+190h]
  int *v1713; // [rsp+298h] [rbp+198h] BYREF
  wchar_t *String1; // [rsp+2B0h] [rbp+1B0h] BYREF
  wchar_t *v1715; // [rsp+2B8h] [rbp+1B8h] BYREF
  wchar_t *v1716; // [rsp+2C0h] [rbp+1C0h] BYREF
  wchar_t *v1717; // [rsp+2C8h] [rbp+1C8h] BYREF
  size_t pcchLength[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int *v1719; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int *v1720; // [rsp+2E8h] [rbp+1E8h] BYREF
  unsigned int *v1721; // [rsp+2F0h] [rbp+1F0h] BYREF
  size_t v1722; // [rsp+2F8h] [rbp+1F8h] BYREF
  _DWORD *v1723; // [rsp+300h] [rbp+200h] BYREF
  unsigned __int64 v1724; // [rsp+308h] [rbp+208h] BYREF
  _QWORD v1725[4]; // [rsp+310h] [rbp+210h] BYREF
  void *v1726; // [rsp+330h] [rbp+230h] BYREF
  unsigned int *v1727; // [rsp+338h] [rbp+238h] BYREF
  unsigned int *v1728; // [rsp+340h] [rbp+240h] BYREF
  HMODULE phModule; // [rsp+348h] [rbp+248h] BYREF
  void *v1730; // [rsp+350h] [rbp+250h] BYREF
  void *v1731; // [rsp+358h] [rbp+258h] BYREF
  unsigned int *v1732; // [rsp+360h] [rbp+260h] BYREF
  unsigned int *v1733; // [rsp+368h] [rbp+268h] BYREF
  void *v1734; // [rsp+370h] [rbp+270h] BYREF
  void *v1735; // [rsp+378h] [rbp+278h] BYREF
  unsigned __int64 v1736; // [rsp+380h] [rbp+280h] BYREF
  unsigned __int64 v1737; // [rsp+388h] [rbp+288h] BYREF
  unsigned int *v1738; // [rsp+390h] [rbp+290h] BYREF
  int *v1739; // [rsp+398h] [rbp+298h] BYREF
  _DWORD *v1740; // [rsp+3A0h] [rbp+2A0h] BYREF
  _DWORD *v1741; // [rsp+3A8h] [rbp+2A8h] BYREF
  void *v1742; // [rsp+3B0h] [rbp+2B0h] BYREF
  _DWORD *v1743; // [rsp+3B8h] [rbp+2B8h] BYREF
  unsigned int *v1744; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v1745; // [rsp+3C8h] [rbp+2C8h] BYREF
  LPVOID v1746; // [rsp+3D8h] [rbp+2D8h]
  void **v1747; // [rsp+3E0h] [rbp+2E0h] BYREF
  LPVOID v1748; // [rsp+3F0h] [rbp+2F0h]
  _DWORD *v1749; // [rsp+3F8h] [rbp+2F8h] BYREF
  void *v1750; // [rsp+400h] [rbp+300h] BYREF
  __int64 v1751; // [rsp+408h] [rbp+308h]
  _QWORD *v1752; // [rsp+410h] [rbp+310h] BYREF
  _WORD *v1753; // [rsp+418h] [rbp+318h] BYREF
  _DWORD *v1754; // [rsp+420h] [rbp+320h] BYREF
  __int64 v1755; // [rsp+428h] [rbp+328h]
  __int64 v1756; // [rsp+430h] [rbp+330h] BYREF
  __int64 v1757; // [rsp+438h] [rbp+338h] BYREF
  __int64 v1758; // [rsp+440h] [rbp+340h] BYREF
  __int64 v1759; // [rsp+448h] [rbp+348h] BYREF
  __int64 v1760; // [rsp+450h] [rbp+350h] BYREF
  LPVOID v1761; // [rsp+460h] [rbp+360h]
  void *v1762; // [rsp+468h] [rbp+368h]
  unsigned int *v1763; // [rsp+470h] [rbp+370h] BYREF
  unsigned int *v1764; // [rsp+478h] [rbp+378h] BYREF
  unsigned int *v1765; // [rsp+480h] [rbp+380h] BYREF
  void *v1766; // [rsp+488h] [rbp+388h] BYREF
  _QWORD v1767[5]; // [rsp+490h] [rbp+390h] BYREF
  void *v1768; // [rsp+4B8h] [rbp+3B8h] BYREF
  unsigned int *v1769; // [rsp+4C0h] [rbp+3C0h] BYREF
  unsigned int *v1770; // [rsp+4C8h] [rbp+3C8h] BYREF
  HMODULE hModule; // [rsp+4D0h] [rbp+3D0h] BYREF
  void *v1772; // [rsp+4D8h] [rbp+3D8h] BYREF
  void *v1773; // [rsp+4E0h] [rbp+3E0h] BYREF
  unsigned __int64 v1774; // [rsp+4E8h] [rbp+3E8h] BYREF
  _DWORD *v1775; // [rsp+4F8h] [rbp+3F8h] BYREF
  __int128 v1776; // [rsp+500h] [rbp+400h]
  __int128 v1777; // [rsp+510h] [rbp+410h]
  void *v1778; // [rsp+528h] [rbp+428h] BYREF
  void *v1779; // [rsp+538h] [rbp+438h] BYREF
  size_t v1780; // [rsp+540h] [rbp+440h] BYREF
  void *Src; // [rsp+548h] [rbp+448h]
  __int128 v1782; // [rsp+550h] [rbp+450h]
  SIZE_T *v1783; // [rsp+568h] [rbp+468h] BYREF
  void *v1784; // [rsp+578h] [rbp+478h] BYREF
  void *v1785; // [rsp+588h] [rbp+488h] BYREF
  const wchar_t **v1786; // [rsp+598h] [rbp+498h] BYREF
  void *v1787; // [rsp+5A8h] [rbp+4A8h] BYREF
  int *v1788; // [rsp+5B8h] [rbp+4B8h] BYREF
  unsigned int *v1789; // [rsp+5C8h] [rbp+4C8h] BYREF
  size_t v1790; // [rsp+5D0h] [rbp+4D0h] BYREF
  void *v1791; // [rsp+5D8h] [rbp+4D8h]
  __int128 v1792; // [rsp+5E0h] [rbp+4E0h]
  __int128 v1793; // [rsp+5F0h] [rbp+4F0h] BYREF
  LPVOID v1794[3]; // [rsp+600h] [rbp+500h]
  _DWORD *v1795; // [rsp+618h] [rbp+518h] BYREF
  _QWORD v1796[2]; // [rsp+620h] [rbp+520h] BYREF
  int v1797; // [rsp+630h] [rbp+530h]
  int v1798; // [rsp+634h] [rbp+534h]
  int v1799; // [rsp+638h] [rbp+538h]
  _QWORD v1800[2]; // [rsp+640h] [rbp+540h] BYREF
  int v1801; // [rsp+650h] [rbp+550h]
  unsigned int v1802; // [rsp+654h] [rbp+554h]
  int v1803; // [rsp+658h] [rbp+558h]
  _BYTE v1804[24]; // [rsp+660h] [rbp+560h] BYREF
  char *v1805; // [rsp+678h] [rbp+578h]
  _BYTE v1806[4]; // [rsp+6D0h] [rbp+5D0h] BYREF
  int v1807; // [rsp+6D4h] [rbp+5D4h]
  int v1808; // [rsp+6D8h] [rbp+5D8h]
  __int16 v1809; // [rsp+6E2h] [rbp+5E2h]
  __int64 v1810; // [rsp+6E8h] [rbp+5E8h]
  _BYTE v1811[4]; // [rsp+740h] [rbp+640h] BYREF
  int v1812; // [rsp+744h] [rbp+644h]
  int v1813; // [rsp+748h] [rbp+648h]
  unsigned __int16 *v1814; // [rsp+758h] [rbp+658h]
  _BYTE v1815[24]; // [rsp+7B0h] [rbp+6B0h] BYREF
  SIZE_T v1816; // [rsp+7C8h] [rbp+6C8h]
  _BYTE v1817[4]; // [rsp+820h] [rbp+720h] BYREF
  int v1818; // [rsp+824h] [rbp+724h]
  int v1819; // [rsp+828h] [rbp+728h]
  unsigned __int16 *v1820; // [rsp+838h] [rbp+738h]
  _BYTE v1821[24]; // [rsp+890h] [rbp+790h] BYREF
  SIZE_T v1822; // [rsp+8A8h] [rbp+7A8h]
  _BYTE v1823[4]; // [rsp+900h] [rbp+800h] BYREF
  int v1824; // [rsp+904h] [rbp+804h]
  int v1825; // [rsp+908h] [rbp+808h]
  char *v1826; // [rsp+918h] [rbp+818h]
  _BYTE v1827[4]; // [rsp+970h] [rbp+870h] BYREF
  int v1828; // [rsp+974h] [rbp+874h]
  int v1829; // [rsp+978h] [rbp+878h]
  char *v1830; // [rsp+988h] [rbp+888h]
  _BYTE v1831[24]; // [rsp+9E0h] [rbp+8E0h] BYREF
  char *v1832; // [rsp+9F8h] [rbp+8F8h]
  int v1833; // [rsp+A50h] [rbp+950h] BYREF
  int v1834; // [rsp+A54h] [rbp+954h]
  void *v1835; // [rsp+A58h] [rbp+958h]
  void *v1836; // [rsp+A60h] [rbp+960h]
  void *v1837; // [rsp+A68h] [rbp+968h]
  WCHAR *v1838; // [rsp+A70h] [rbp+970h]
  WCHAR *v1839; // [rsp+A78h] [rbp+978h]
  __int64 v1840; // [rsp+A80h] [rbp+980h]
  int v1841; // [rsp+A88h] [rbp+988h]
  __int128 v1842; // [rsp+A8Ch] [rbp+98Ch] BYREF
  __int128 v1843; // [rsp+A9Ch] [rbp+99Ch] BYREF
  unsigned int v1844; // [rsp+AACh] [rbp+9ACh] BYREF
  unsigned int v1845; // [rsp+AB0h] [rbp+9B0h]
  unsigned int v1846; // [rsp+AB4h] [rbp+9B4h]
  unsigned int v1847; // [rsp+AB8h] [rbp+9B8h]
  __int64 v1848; // [rsp+AC0h] [rbp+9C0h]
  unsigned __int64 v1849; // [rsp+AC8h] [rbp+9C8h]
  unsigned __int64 v1850; // [rsp+AD0h] [rbp+9D0h]
  __int64 v1851; // [rsp+AD8h] [rbp+9D8h]
  __int128 v1852; // [rsp+AE0h] [rbp+9E0h] BYREF
  __int128 v1853; // [rsp+AF0h] [rbp+9F0h]
  __int128 v1854; // [rsp+B00h] [rbp+A00h] BYREF
  __int128 v1855; // [rsp+B10h] [rbp+A10h] BYREF
  __int64 v1856; // [rsp+B20h] [rbp+A20h] BYREF
  unsigned int v1857; // [rsp+B28h] [rbp+A28h]
  int v1858; // [rsp+B2Ch] [rbp+A2Ch]
  __int128 v1859; // [rsp+B30h] [rbp+A30h] BYREF
  char v1860[12]; // [rsp+B40h] [rbp+A40h] BYREF
  unsigned int v1861; // [rsp+B4Ch] [rbp+A4Ch]
  __int128 v1862; // [rsp+B60h] [rbp+A60h] BYREF
  __int128 v1863; // [rsp+B70h] [rbp+A70h] BYREF
  __int64 v1864; // [rsp+B80h] [rbp+A80h]
  __int128 v1865; // [rsp+B88h] [rbp+A88h] BYREF
  __int128 v1866; // [rsp+B98h] [rbp+A98h] BYREF
  __int64 v1867; // [rsp+BA8h] [rbp+AA8h]
  __int128 v1868; // [rsp+BB0h] [rbp+AB0h] BYREF
  __int128 v1869; // [rsp+BC0h] [rbp+AC0h]
  __int64 v1870; // [rsp+BD0h] [rbp+AD0h]
  int v1871; // [rsp+BD8h] [rbp+AD8h]
  __int128 v1872; // [rsp+BE0h] [rbp+AE0h] BYREF
  __int128 v1873; // [rsp+BF0h] [rbp+AF0h]
  __int64 v1874; // [rsp+C00h] [rbp+B00h]
  int v1875; // [rsp+C08h] [rbp+B08h]
  __int128 v1876; // [rsp+C10h] [rbp+B10h] BYREF
  __int128 v1877; // [rsp+C20h] [rbp+B20h]
  __int64 v1878; // [rsp+C30h] [rbp+B30h]
  int v1879; // [rsp+C38h] [rbp+B38h]
  __int128 v1880; // [rsp+C40h] [rbp+B40h] BYREF
  __int128 v1881; // [rsp+C50h] [rbp+B50h]
  __int64 v1882; // [rsp+C60h] [rbp+B60h]
  int v1883; // [rsp+C68h] [rbp+B68h]
  __int128 v1884; // [rsp+C70h] [rbp+B70h] BYREF
  __int128 v1885; // [rsp+C80h] [rbp+B80h]
  __int64 v1886; // [rsp+C90h] [rbp+B90h]
  int v1887; // [rsp+C98h] [rbp+B98h]
  _DWORD v1888[6]; // [rsp+CA0h] [rbp+BA0h] BYREF
  char v1889; // [rsp+CBAh] [rbp+BBAh]
  unsigned __int16 v1890[34]; // [rsp+CBCh] [rbp+BBCh] BYREF
  _DWORD v1891[6]; // [rsp+D00h] [rbp+C00h] BYREF
  char v1892; // [rsp+D1Ah] [rbp+C1Ah]
  unsigned __int16 v1893[34]; // [rsp+D1Ch] [rbp+C1Ch] BYREF
  _DWORD v1894[6]; // [rsp+D60h] [rbp+C60h] BYREF
  char v1895; // [rsp+D7Ah] [rbp+C7Ah]
  unsigned __int16 v1896[34]; // [rsp+D7Ch] [rbp+C7Ch] BYREF
  _BYTE v1897[68]; // [rsp+DC0h] [rbp+CC0h] BYREF
  __int16 v1898; // [rsp+E04h] [rbp+D04h]
  unsigned __int16 v1899; // [rsp+E66h] [rbp+D66h]
  __int64 v1900; // [rsp+E6Ch] [rbp+D6Ch]
  _QWORD v1901[6]; // [rsp+EA0h] [rbp+DA0h] BYREF
  int v1902; // [rsp+ED0h] [rbp+DD0h] BYREF
  __int128 v1903; // [rsp+ED8h] [rbp+DD8h]
  __int128 v1904; // [rsp+EE8h] [rbp+DE8h]
  __int128 v1905; // [rsp+EF8h] [rbp+DF8h]
  __int64 v1906; // [rsp+F08h] [rbp+E08h]
  _QWORD v1907[20]; // [rsp+F10h] [rbp+E10h] BYREF
  _WORD v1908[8]; // [rsp+FB0h] [rbp+EB0h] BYREF
  _BYTE v1909[176]; // [rsp+FC0h] [rbp+EC0h] BYREF
  WCHAR Filename[264]; // [rsp+1070h] [rbp+F70h] BYREF

  v1712 = a1;
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
    v1649 = 0;
    v5 = 0;
    v1713 = 0LL;
    v1650 = 0;
    v1651 = 0;
    v1636 = 0LL;
    while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
      ;
    v7 = g_WarbirdSecureFunctionsRefCount;
    v1644 = -1;
    if ( !g_WarbirdSecureFunctionsRefCount )
    {
      LODWORD(v1639) = 0;
      v8 = (char *)MemoryAlloc(0x338uLL);
      lpModuleName = (WCHAR *)v8;
      if ( !v8 )
        goto LABEL_25;
      v9 = 103LL;
      v10 = v8 + 7;
      v11 = 0;
      v12 = (unsigned __int8 *)&unk_1800B8AE2;
      v13 = 0;
      v14 = 0;
      v15 = -1;
      do
      {
        v16 = *(v12 - 1) | (*(v12 - 2) << 8);
        v17 = v12[2] << 8;
        v18 = *v12;
        v12 += 8;
        v19 = *(v12 - 7) | ((v18 | (v16 << 8)) << 8);
        v20 = v19 ^ v14;
        v21 = *(v12 - 3) | ((*(v12 - 4) | ((*(v12 - 5) | v17) << 8)) << 8);
        v22 = v21 ^ v13 ^ v20 ^ 0xAC987321;
        v23 = (__ROL4__(v22, 10) + 4991 * __ROL4__(v22 + 1419157410, 5)) ^ v20;
        v24 = (43881 * __ROR4__(v23 + 133239679, 9) - __ROL4__(v23, 2)) ^ v22;
        v25 = (24670 * v24 - (v24 >> 13) - 123127970) ^ v23;
        v26 = (2033 * __ROL4__(v25 ^ 0xAB69, 6) - __ROL4__(v25, 2)) ^ v24;
        v27 = (133239679 - (v26 ^ 0xAB69605E)) ^ v25;
        v28 = (43881 * (v27 ^ 0x137F)) ^ __ROR4__(v27, 6) ^ v26;
        v29 = (__ROL4__(v28, 2) + 24670 * __ROR4__(v28 + 133239679, 15)) ^ v27;
        v30 = (2033 * __ROR4__(v29 + 1419157410, 14) - __ROL4__(v29, 8)) ^ v28;
        v31 = __ROR4__(v30, 10) ^ (4991 * __ROR4__(v30 ^ 0xAB69605E, 12)) ^ v29;
        v32 = v30 ^ (v31 >> 10) ^ (43881 * (v31 ^ 0x7F1));
        v33 = (2033 * (__ROR4__(~v32, 5) + 24670)) ^ v31;
        v34 = v32 ^ (v33 - 2033) ^ 0xAB69605E;
        v35 = ((v34 >> 2) + 4991 * __ROL4__(v32 ^ (v33 - 2033) ^ 0xAB6967AF, 2)) ^ v33;
        v36 = (__ROL4__(v35, 7) + 43881 * __ROR4__(v35 - 133239679, 6)) ^ v34;
        v37 = (24670 * (v36 ^ 0x137F) + __ROR4__(v36, 9)) ^ v35;
        v38 = (__ROL4__(v37, 7) + 2033 * __ROL4__(v37 ^ 0xAB69, 5)) ^ v36;
        v39 = v38 ^ v37 ^ 0xAC987321;
        v40 = (4991 * __ROR4__(v39, 3) - 219010071) ^ v38;
        v41 = (24670 * __ROR4__(v40 - 133239679, 1) - __ROR4__(v40, 6)) ^ v39;
        v42 = (__ROL4__(v41, 14) + 2033 * __ROL4__(v41 - 1419157410, 3)) ^ v40;
        v43 = (4991 * __ROL4__(v42 - 1419157410, 15) - __ROR4__(v42, 14)) ^ v41;
        v44 = (v43 >> 3) ^ (43881 * (v43 ^ 0x605E)) ^ v42;
        v45 = 24670 * __ROL4__(v44 ^ 0x7F1137F, 4);
        v46 = v44;
        v47 = v15 ^ v44;
        v15 = v21;
        v48 = v11 ^ __ROL4__(v46, 2) ^ v45;
        v11 = v19;
        v49 = v48 ^ v43;
        *(v10 - 4) = v49;
        *v10 = v47;
        v10 += 8;
        v50 = __ROR4__(v49, 8);
        *(v10 - 13) = v50;
        v51 = __ROR4__(v47, 8);
        *(v10 - 9) = v51;
        v52 = __ROR4__(v50, 8);
        *(v10 - 14) = v52;
        v53 = __ROR4__(v51, 8);
        *(v10 - 10) = v53;
        v54 = __ROR4__(v52, 8);
        v55 = __ROR4__(v53, 8);
        *(v10 - 15) = v54;
        *(v10 - 11) = v55;
        v13 = __ROR4__(v55, 8);
        v14 = __ROR4__(v54, 8);
        --v9;
      }
      while ( v9 );
      v56 = lpModuleName;
      LODWORD(v2) = 0;
      v57 = 0LL;
      v58 = 0;
      v59 = 0;
      do
        v58 ^= *((_BYTE *)lpModuleName + v57++);
      while ( v57 < 0x338 );
      if ( v58 != 64LL )
      {
        MemoryFree(lpModuleName);
LABEL_24:
        v5 = 0;
LABEL_25:
        v60 = 4LL;
        v61 = (HMODULE *)&WARBIRD::g_arModuleInfo;
        do
        {
          if ( *v61 )
            FreeLibrary(*v61);
          v61 += 3;
          --v60;
        }
        while ( v60 );
        memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
        memcpy_0(&WARBIRD::g_FuncAddress, &off_1800AEDD0, 0x170uLL);
LABEL_58:
        v75 = 0;
        _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
        v76 = 0;
        String1 = 0LL;
        v1715 = 0LL;
        if ( NtCurrentPeb()->SessionId )
        {
          v77 = ((__int64 (*)(void))off_1800DB110)();
          if ( !v77 )
          {
LABEL_68:
            LastError = GetLastError();
            v76 = LastError;
            if ( LastError > 0 )
              v76 = (unsigned __int16)LastError | 0x80070000;
            if ( v76 >= 0 )
              v76 = -2147467259;
            goto LABEL_109;
          }
          v78 = 0LL;
          v1716 = 0LL;
          v79 = 0LL;
          v80 = 0LL;
          while ( 1 )
          {
            v81 = v78;
            if ( !v80 )
              v81 = 0LL;
            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1800DB130)(
                                 v77,
                                 2LL,
                                 v81,
                                 v79,
                                 &v1652) )
            {
              v1716 = 0LL;
              String1 = v78;
              goto LABEL_79;
            }
            v82 = GetLastError();
            if ( v82 != 122 )
              break;
            if ( v78 )
              goto LABEL_73;
            v78 = (wchar_t *)MemoryAlloc(v1652);
            SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1716);
            v1716 = v78;
            v80 = v78;
            if ( !v78 )
            {
              v76 = -2147024882;
              goto LABEL_79;
            }
            v79 = v1652;
          }
          if ( !v82 )
          {
LABEL_73:
            v76 = -2147467259;
            goto LABEL_79;
          }
          if ( v82 > 0 )
            v76 = (unsigned __int16)v82 | 0x80070000;
          else
            v76 = v82;
LABEL_79:
          SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1716);
          if ( v76 < 0 )
            goto LABEL_109;
          v84 = off_1800DB128;
          CurrentThreadId = GetCurrentThreadId();
          v86 = ((__int64 (__fastcall *)(_QWORD))v84)(CurrentThreadId);
          if ( !v86 )
          {
            v87 = GetLastError();
            v76 = v87;
            if ( v87 > 0 )
              v76 = (unsigned __int16)v87 | 0x80070000;
            if ( v76 >= 0 )
              v76 = -2147467259;
            goto LABEL_109;
          }
          v88 = 0LL;
          v1717 = 0LL;
          v76 = 0;
          v89 = 0LL;
          v90 = 0LL;
          while ( 1 )
          {
            v91 = v88;
            if ( !v90 )
              v91 = 0LL;
            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1800DB130)(
                                 v86,
                                 2LL,
                                 v91,
                                 v89,
                                 &v1653) )
            {
              v1717 = 0LL;
              v1715 = v88;
              goto LABEL_100;
            }
            v92 = GetLastError();
            if ( v92 != 122 )
              break;
            if ( v88 )
              goto LABEL_94;
            v88 = (wchar_t *)MemoryAlloc(v1653);
            SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1717);
            v1717 = v88;
            v90 = v88;
            if ( !v88 )
            {
              v76 = -2147024882;
              goto LABEL_100;
            }
            v89 = v1653;
          }
          if ( !v92 )
          {
LABEL_94:
            v76 = -2147467259;
            goto LABEL_100;
          }
          v76 = v92 > 0 ? (unsigned __int16)v92 | 0x80070000 : v92;
LABEL_100:
          SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1717);
          if ( v76 < 0 )
          {
LABEL_109:
            SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1715);
            SP<unsigned short,SP_MEM<unsigned short>>::Reset(&String1);
            v94 = 0;
            if ( v76 >= 0 )
              v94 = v5;
            v1467 = v94;
            v1689 = LocalAlloc(0x40u, 4uLL);
            v95 = v1689;
            SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1636);
            if ( !v95 )
            {
              v1636 = 0LL;
              v96 = -2147024882;
LABEL_1575:
              v1352 = dwBytes_4;
LABEL_1576:
              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                ;
              v1353 = g_WarbirdSecureFunctionsRefCount;
              if ( g_WarbirdSecureFunctionsRefCount > 0 )
              {
                --g_WarbirdSecureFunctionsRefCount;
                if ( v1353 == 1 )
                {
                  v1354 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                  v1355 = 4LL;
                  do
                  {
                    if ( *v1354 )
                      FreeLibrary(*v1354);
                    v1354 += 3;
                    --v1355;
                  }
                  while ( v1355 );
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  memcpy_0(&WARBIRD::g_FuncAddress, &off_1800AEDD0, 0x170uLL);
                }
              }
              _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
              SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1636);
              if ( v96 >= 0 )
              {
                if ( v1352 == 4 )
                {
                  v6 = *v1713;
LABEL_8:
                  v3 = v1650;
LABEL_9:
                  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1713);
                  if ( v3 < 0 )
                  {
                    if ( v3 == -1073418222 )
                      v3 = 0;
                  }
                  else if ( v6 == 1 )
                  {
                    LODWORD(v2) = 1;
                  }
                  *v1712 = v2;
                  `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue = v2;
                  `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedQueried = 1;
                  goto LABEL_13;
                }
              }
              else
              {
                switch ( v96 )
                {
                  case -805306316:
                    v1650 = -1073418222;
LABEL_1594:
                    v6 = v1649;
                    goto LABEL_8;
                  case -805306139:
                  case -1073425151:
                    v1650 = -1073418201;
                    goto LABEL_1594;
                  case -805306306:
                    v1650 = -1073418200;
                    goto LABEL_1594;
                }
                v1650 = v96;
                if ( v96 != -2147024774 )
                  goto LABEL_1594;
              }
              v6 = v1649;
              v3 = -1073418210;
              goto LABEL_9;
            }
            v1636 = v95;
            v1782 = 0LL;
            v97 = 0LL;
            Src = 0LL;
            v98 = 0LL;
            ProcessHeap = GetProcessHeap();
            v100 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
            lpModuleNamea = 3LL;
            v1643 = 56;
            if ( !v100 )
              goto LABEL_125;
            v97 = v100;
            *v100 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
            v100[1] = *((_OWORD *)&_ImageBase + 56175);
            v100[2] = *((_OWORD *)&_ImageBase + 56176);
            v100[3] = *((_OWORD *)&_ImageBase + 56177);
            v100[4] = *((_OWORD *)&_ImageBase + 56178);
            v100[5] = *((_OWORD *)&_ImageBase + 56179);
            v100[6] = *((_OWORD *)&_ImageBase + 56180);
            v100[7] = *((_OWORD *)&_ImageBase + 56181);
            v100[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
            v100[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
            v101 = GetProcessHeap();
            v102 = HeapAlloc(v101, 8u, 8uLL);
            if ( !v102 )
            {
LABEL_125:
              v96 = -1073741801;
              goto LABEL_547;
            }
            *v102 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
            v1627 = (const wchar_t *)__rdtsc();
            dwBytes = 0;
            LODWORD(v1642) = RtlUIntAdd(4LL, 4LL, &v1654);
            v96 = (int)v1642;
            if ( (int)v1642 < 0 )
            {
              v98 = v103;
              goto LABEL_613;
            }
            v104 = RtlUIntAdd(0LL, v1654, &dwBytes);
            v96 = v104 | 0x10000000;
            v98 = v105;
            LODWORD(v1642) = v104 | 0x10000000;
            if ( v104 < 0 )
              goto LABEL_613;
            LODWORD(v1642) = RtlUIntAdd(4LL, 160LL, &v1655);
            v96 = (int)v1642;
            if ( (int)v1642 < 0 )
              goto LABEL_613;
            v106 = RtlUIntAdd(dwBytes, v1655, &dwBytes);
            v96 = v106 | 0x10000000;
            LODWORD(v1642) = v106 | 0x10000000;
            if ( v106 < 0 )
              goto LABEL_613;
            LODWORD(v1642) = RtlUIntAdd(4LL, 8LL, &v1656);
            v96 = (int)v1642;
            if ( (int)v1642 < 0 )
              goto LABEL_613;
            v107 = RtlUIntAdd(dwBytes, v1656, &dwBytes);
            v96 = v107 | 0x10000000;
            LODWORD(v1642) = v107 | 0x10000000;
            if ( v107 < 0 )
              goto LABEL_613;
            LODWORD(v1642) = RtlUIntAdd(4LL, 8LL, &v1657);
            v96 = (int)v1642;
            if ( (int)v1642 < 0 )
              goto LABEL_613;
            v108 = RtlUIntAdd(dwBytes, v1657, &dwBytes);
            v96 = v108 | 0x10000000;
            LODWORD(v1642) = v108 | 0x10000000;
            if ( v108 < 0 )
              goto LABEL_613;
            if ( StringCchLengthW(v110, v109, pcchLength) < 0 )
            {
              v96 = -1073741762;
LABEL_547:
              LODWORD(v1642) = v96;
              goto LABEL_613;
            }
            ++pcchLength[0];
            v96 = RtlUIntAdd(4LL, (unsigned int)(2 * LODWORD(pcchLength[0])), &v1658);
            LODWORD(v1642) = v96;
            if ( v96 < 0 )
              goto LABEL_613;
            v111 = RtlUIntAdd(dwBytes, v1658, &dwBytes);
            v96 = v111 | 0x10000000;
            LODWORD(v1642) = v111 | 0x10000000;
            if ( v111 < 0 )
              goto LABEL_613;
            LODWORD(v1642) = RtlUIntAdd(4LL, 4LL, &v1659);
            v96 = (int)v1642;
            if ( (int)v1642 < 0 )
              goto LABEL_613;
            v112 = RtlUIntAdd(dwBytes, v1659, &dwBytes);
            v96 = v112 | 0x10000000;
            LODWORD(v1642) = v112 | 0x10000000;
            if ( v112 < 0
              || (LODWORD(v1642) = RtlUIntAdd(4LL, 4LL, &v1660), v96 = (int)v1642, (int)v1642 < 0)
              || (v113 = RtlUIntAdd(dwBytes, v1660, &dwBytes),
                  v96 = v113 | 0x10000000,
                  LODWORD(v1642) = v113 | 0x10000000,
                  v113 < 0) )
            {
LABEL_613:
              v1780 = 0LL;
              v1391 = Src;
              if ( Src )
              {
                v501 = GetProcessHeap();
                HeapFree(v501, 0, v1391);
                Src = 0LL;
              }
              *(_QWORD *)&v1782 = 0LL;
              v1392 = (void *)*((_QWORD *)&v1782 + 1);
              if ( *((_QWORD *)&v1782 + 1) )
              {
                v502 = GetProcessHeap();
                HeapFree(v502, 0, v1392);
                *((_QWORD *)&v1782 + 1) = 0LL;
              }
              if ( v97 )
              {
                v503 = GetProcessHeap();
                HeapFree(v503, 0, v97);
              }
              if ( v98 )
              {
                v504 = GetProcessHeap();
                HeapFree(v504, 0, v98);
              }
              if ( v96 < 0 )
                goto LABEL_1575;
              if ( !v94 )
              {
LABEL_1574:
                v1352 = v1651;
                v1713 = (int *)v1689;
                v1636 = 0LL;
                goto LABEL_1576;
              }
              g_WarbirdNotificationInformation = v94;
              v1745 = 0LL;
              ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
              if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
              {
LABEL_1229:
                SH<void *,SH_HANDLE>::Reset(&v1745);
                v1791 = 0LL;
                *(_OWORD *)v1794 = 0LL;
                v997 = 0LL;
                v998 = 0LL;
                v999 = GetProcessHeap();
                v1000 = HeapAlloc(v999, 8u, 0xA0uLL);
                if ( !v1000 )
                  goto LABEL_1566;
                v997 = v1000;
                *v1000 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
                v1000[1] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
                v1000[2] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
                v1000[3] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
                v1000[4] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
                v1000[5] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
                v1000[6] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
                v1000[7] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
                v1000[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
                v1000[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
                v1001 = GetProcessHeap();
                v1002 = HeapAlloc(v1001, 8u, 8uLL);
                v1003 = v1002;
                if ( !v1002 )
                  goto LABEL_1566;
                *v1002 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
                v1605 = __rdtsc();
                v1690 = 0;
                v998 = v1003;
                if ( (int)RtlUIntAdd(4LL, 4LL, &v1691) < 0 )
                  goto LABEL_1566;
                if ( (int)RtlUIntAdd(0LL, v1691, &v1690) < 0 )
                  goto LABEL_1566;
                if ( (int)RtlUIntAdd(v1004, 160LL, &v1692) < 0 )
                  goto LABEL_1566;
                v1005 = RtlUIntAdd(v1690, v1692, &v1690);
                if ( (v1007 | v1005) < 0 )
                  goto LABEL_1566;
                if ( (int)RtlUIntAdd(v1006, v1006 + 4, &v1693) < 0 )
                  goto LABEL_1566;
                v1008 = RtlUIntAdd(v1690, v1693, &v1690);
                if ( (v1010 | v1008) < 0 )
                  goto LABEL_1566;
                if ( (int)RtlUIntAdd(v1009, v1009 + 4, v1694) < 0 )
                  goto LABEL_1566;
                v1011 = RtlUIntAdd(v1690, v1694[0], &v1690);
                if ( (v1012 | v1011) < 0 )
                  goto LABEL_1566;
                HIDWORD(v1790) = v1690;
                v1013 = v1690;
                v1014 = GetProcessHeap();
                v1015 = HeapAlloc(v1014, 8u, v1013);
                if ( !v1015 )
                  goto LABEL_1566;
                v1791 = v1015;
                LODWORD(v1790) = 0;
                v1762 = v1015;
                v1394 = (SIZE_T)v998;
                v1584 = v997;
                if ( (int)RtlULongLongAdd(v1015, 4LL, &v1795) < 0
                  || v1017 + 2 > (_DWORD *)((char *)v1017 + HIDWORD(v1790)) )
                {
                  goto LABEL_1566;
                }
                v1018 = v1795;
                *v1017 = 4;
                *v1018 = 4;
                v1019 = v1790 + 1;
                LODWORD(v1790) = v1790 + 1;
                if ( v1791 )
                {
                  v1021 = (unsigned int *)v1791;
                  v1763 = (unsigned int *)v1791;
                  lpModuleNameg = 0;
                  if ( v1019 )
                  {
                    while ( (int)RtlUIntAdd(4LL, *v1021, &v1696) >= 0 && (int)RtlULongLongAdd(v1022, v1696, &v1763) >= 0 )
                    {
                      v1021 = v1763;
                      ++lpModuleNameg;
                      v1394 = (SIZE_T)v998;
                      v1584 = v997;
                      if ( lpModuleNameg >= v1023 )
                        goto LABEL_1250;
                    }
                    goto LABEL_1566;
                  }
LABEL_1250:
                  if ( (int)RtlULongLongAdd(v1021, 4LL, &v1778) < 0
                    || (char *)v1024 + v1025 + 4 > (char *)v1791 + HIDWORD(v1790) )
                  {
                    goto LABEL_1566;
                  }
                  *v1024 = v1025;
                  memcpy_0(v1778, v997, v1025);
                  v1020 = 4LL;
                }
                else if ( (int)RtlUIntAdd(4LL, v1016, &v1695) < 0
                       || (int)RtlUIntAdd(HIDWORD(v1790), v1695, (char *)&v1790 + 4) < 0 )
                {
                  goto LABEL_1566;
                }
                v1026 = v1790 + 1;
                LODWORD(v1790) = v1790 + 1;
                if ( v998 )
                {
                  if ( v1791 )
                  {
                    v1029 = (unsigned int *)v1791;
                    v1764 = (unsigned int *)v1791;
                    lpModuleNameh = 0;
                    if ( v1026 )
                    {
                      do
                      {
                        if ( (int)RtlUIntAdd(4LL, *v1029, &v1698) < 0 || (int)RtlULongLongAdd(v1030, v1698, &v1764) < 0 )
                          goto LABEL_1566;
                        v1029 = v1764;
                        ++lpModuleNameh;
                        v1394 = (SIZE_T)v998;
                        v1584 = v997;
                      }
                      while ( lpModuleNameh < v1031 );
                      v1020 = 4LL;
                    }
                    if ( (int)RtlULongLongAdd(v1029, v1020, &v1779) < 0
                      || v1032 + 3 > (_DWORD *)((char *)v1791 + HIDWORD(v1790)) )
                    {
                      goto LABEL_1566;
                    }
                    *v1032 = 8;
                    memcpy_0(v1779, v998, 8uLL);
                    v1028 = 4LL;
                    v1027 = 1;
                  }
                  else if ( (int)RtlUIntAdd((unsigned int)v1020, 8LL, &v1697) < 0
                         || (int)RtlUIntAdd(HIDWORD(v1790), v1697, (char *)&v1790 + 4) < 0 )
                  {
                    goto LABEL_1566;
                  }
                  v1033 = v1027 + v1790;
                  LODWORD(v1790) = v1027 + v1790;
                  if ( v1791 )
                  {
                    v1036 = (unsigned int *)v1791;
                    v1765 = (unsigned int *)v1791;
                    lpModuleNamei = 0;
                    if ( v1033 )
                    {
                      do
                      {
                        if ( (int)RtlUIntAdd(4LL, *v1036, &v1700) < 0 || (int)RtlULongLongAdd(v1037, v1700, &v1765) < 0 )
                          goto LABEL_1566;
                        v1036 = v1765;
                        ++lpModuleNamei;
                        v1394 = (SIZE_T)v998;
                        v1584 = v997;
                      }
                      while ( lpModuleNamei < v1033 );
                      v1028 = 4LL;
                    }
                    if ( (int)RtlULongLongAdd(v1036, v1028, &v1783) < 0
                      || v1038 + 3 > (_DWORD *)((char *)v1791 + HIDWORD(v1790)) )
                    {
                      goto LABEL_1566;
                    }
                    v1039 = v1783;
                    *v1038 = 8;
                    *v1039 = v1605;
                    LODWORD(v1790) = v1790 + 1;
                  }
                  else
                  {
                    if ( (int)RtlUIntAdd((unsigned int)v1028, 8LL, &v1699) < 0
                      || (int)RtlUIntAdd(HIDWORD(v1790), v1699, (char *)&v1790 + 4) < 0 )
                    {
                      goto LABEL_1566;
                    }
                    LODWORD(v1790) = v1034 + v1790;
                  }
                  if ( (int)RtlUIntAdd(v1035, v1035, &v1701) >= 0 )
                  {
                    v1041 = v1701;
                    v1702 = v1701;
                    if ( (int)RtlUIntAdd(v1040, 8LL, &v1703) >= 0 && (int)RtlUIntAdd(v1041, v1703, &v1702) >= 0 )
                    {
                      lpModuleNamej = v1702;
                      v1606 = 0LL;
                      v1411 = 0;
                      v1376 = 0LL;
                      v1513 = 0LL;
                      v1462 = 0;
                      v1552 = 0LL;
                      lpMemj = 0LL;
                      v1564 = 0LL;
                      v1615 = __rdtsc();
                      v1704 = 8;
                      v1042 = RtlUIntAdd(8LL, HIDWORD(v1790), &v1704);
                      if ( v1042 >= 0 )
                      {
                        v1044 = (v1704 + 7) & 0xFFFFFFF8;
                        if ( v1044 < v1704 )
                          goto LABEL_1566;
                        v1704 = (v1704 + 7) & 0xFFFFFFF8;
                        v1045 = v1044;
                        v1046 = GetProcessHeap();
                        v1047 = HeapAlloc(v1046, 8u, v1045);
                        v1636 = v1047;
                        if ( !v1047 )
                          goto LABEL_1566;
                        v1766 = v1047;
                        *v1047 = v1790;
                        v1048 = RtlULongLongAdd(v1047, 4LL, &v1766);
                        v1637 = v1049;
                        v1042 = v1048;
                        v1394 = (SIZE_T)v998;
                        v1584 = v997;
                        if ( v1048 < 0
                          || (v1050 = v1766,
                              *(_DWORD *)v1766 = HIDWORD(v1790),
                              v1051 = RtlULongLongAdd(v1050, 4LL, &v1766),
                              v1637 = v1052,
                              v1042 = v1051,
                              v1394 = (SIZE_T)v998,
                              v1584 = v997,
                              v1051 < 0) )
                        {
                          v1053 = GetProcessHeap();
                          HeapFree(v1053, 0, v1637);
                          v1043 = 0;
                        }
                        else
                        {
                          *(_QWORD *)&v1052[v1704 - 8] = v1615;
                          memcpy_0(v1766, v1791, HIDWORD(v1790));
                          v1043 = v1704;
                          v1606 = (unsigned __int8 *)v1636;
                          v1411 = v1704;
                          v1394 = (SIZE_T)v998;
                          v1584 = v997;
                        }
                      }
                      v1054 = v1042 | 0x10000000;
                      if ( v1054 < 0 )
                      {
                        v1120 = v1606;
                        goto LABEL_1527;
                      }
                      if ( v1606 )
                      {
                        v1594 = v1043;
                        if ( !v1043 || (v1624 = v1043 + 8, (v1636 = MemoryAlloc(v1043 + 8LL)) == 0LL) )
                        {
                          v1120 = v1606;
                          v1054 = -805306367;
LABEL_1528:
                          v1322 = GetProcessHeap();
                          HeapFree(v1322, 0, v1120);
LABEL_1529:
                          if ( v1376 )
                          {
                            v1323 = (void *)*((_QWORD *)v1376 + 1);
                            if ( v1323 )
                            {
                              v1324 = GetProcessHeap();
                              HeapFree(v1324, 0, v1323);
                              *((_QWORD *)v1376 + 1) = 0LL;
                            }
                            v1325 = (void *)*((_QWORD *)v1376 + 3);
                            if ( v1325 )
                            {
                              v1326 = GetProcessHeap();
                              HeapFree(v1326, 0, v1325);
                              *((_QWORD *)v1376 + 3) = 0LL;
                            }
                            v1327 = (void *)*((_QWORD *)v1376 + 5);
                            if ( v1327 )
                            {
                              v1328 = GetProcessHeap();
                              HeapFree(v1328, 0, v1327);
                              *((_QWORD *)v1376 + 5) = 0LL;
                            }
                            v1329 = GetProcessHeap();
                            HeapFree(v1329, 0, v1376);
                          }
                          if ( v1513 )
                          {
                            v1330 = GetProcessHeap();
                            HeapFree(v1330, 0, v1513);
                          }
                          if ( v1552 )
                          {
                            v1331 = GetProcessHeap();
                            HeapFree(v1331, 0, v1552);
                          }
                          if ( lpMemj )
                          {
                            v1332 = (void *)*((_QWORD *)lpMemj + 1);
                            if ( v1332 )
                            {
                              v1333 = GetProcessHeap();
                              HeapFree(v1333, 0, v1332);
                              *((_QWORD *)lpMemj + 1) = 0LL;
                            }
                            v1334 = (void *)*((_QWORD *)lpMemj + 3);
                            if ( v1334 )
                            {
                              v1335 = GetProcessHeap();
                              HeapFree(v1335, 0, v1334);
                              *((_QWORD *)lpMemj + 3) = 0LL;
                            }
                            v1336 = (void *)*((_QWORD *)lpMemj + 5);
                            if ( v1336 )
                            {
                              v1337 = GetProcessHeap();
                              HeapFree(v1337, 0, v1336);
                              *((_QWORD *)lpMemj + 5) = 0LL;
                            }
                            v1338 = GetProcessHeap();
                            HeapFree(v1338, 0, lpMemj);
                          }
                          if ( v1564 )
                          {
                            v1339 = GetProcessHeap();
                            HeapFree(v1339, 0, v1564);
                          }
                          if ( v1054 >= 0 )
                          {
                            if ( LODWORD(v1794[0]) )
                            {
                              v1340 = v1794[1];
                              if ( v1794[1] )
                              {
                                v1739 = (int *)v1794[1];
                                if ( (int)RtlULongLongAdd(v1794[1], 4LL, &v1739) >= 0 )
                                {
                                  v1343 = v1739;
                                  if ( !*v1340 )
                                    v1343 = 0LL;
                                  v1739 = v1343;
                                  if ( *v1340 == (_DWORD)v1342 && *v1343 >= 0 && v1340 && LODWORD(v1794[0]) > 1 )
                                  {
                                    v1767[0] = v1341;
                                    v1344 = 0;
                                    while ( (int)RtlULongLongAdd(v1341, v1342, v1767) >= 0
                                         && (int)RtlULongLongAdd(v1767[0], v1345, v1767) >= 0 )
                                    {
                                      v1341 = v1767[0];
                                      if ( ++v1344 )
                                      {
                                        RtlULongLongAdd(v1767[0], v1342, v1767);
                                        goto LABEL_1566;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto LABEL_1566;
                        }
                        v1055 = 0;
                        v1357 = 0;
                        v1056 = 0LL;
                        if ( v1411 )
                        {
                          do
                            v1055 ^= v1606[v1056++];
                          while ( v1056 < v1411 );
                          v1357 = v1055;
                        }
                        v1057 = (char *)v1636;
                        v1849 = 0xC81ECB17B1B54A58uLL;
                        v1058 = -1;
                        LODWORD(v1637) = 0;
                        v1059 = v1606;
                        LODWORD(v1641) = 0;
                        v1060 = 0;
                        v1061 = v1411 & 7;
                        if ( (v1411 & 7) != 0 )
                        {
                          v1062 = 0;
                          v1063 = 0;
                          LODWORD(v1640) = 0;
                          v1064 = 56;
                          do
                          {
                            v1065 = *v1059++;
                            if ( (unsigned int)v1062 >= 4 )
                              v1063 |= v1065 << v1064;
                            else
                              v1060 |= v1065 << (v1064 - 32);
                            v1064 -= 8;
                            v1062 = (_DWORD)v1640 + 1;
                            LODWORD(v1637) = v1063;
                            LODWORD(v1641) = v1060;
                            LODWORD(v1640) = v1062;
                          }
                          while ( v1062 < v1061 );
                          v1060 ^= 0xB17A307A;
                          v1640 = v1059;
                          v1066 = v1636;
                          v1067 = v1063 ^ 0x42F6B18D;
                          v1068 = v1060;
                          v1394 = (SIZE_T)v998;
                          v1069 = v1067;
                          v1584 = v997;
                          v1070 = 0;
                          do
                          {
                            v1377 = (LPCWSTR)(v1066 + 1);
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
                          v1059 = (unsigned __int8 *)v1640;
                          v1057 = (char *)v1377;
                          v1055 = v1357;
                          LODWORD(v2) = 0;
                          if ( (unsigned int)v1061 <= 4 )
                          {
                            v1058 = 0;
                            if ( (unsigned int)v1061 >= 4 )
                              goto LABEL_1311;
                            v1060 = v1060 >> (8 * (4 - v1061)) << (8 * (4 - v1061));
                          }
                          else
                          {
                            v1058 = v1067 >> (8 * (8 - v1061)) << (8 * (8 - v1061));
                          }
                          v1057 = (char *)v1377;
                        }
LABEL_1311:
                        v1072 = (char *)v1411;
                        if ( (unsigned __int64)v1411 >> 3 )
                        {
                          v1073 = v1059 + 2;
                          v1074 = WORD2(v1849);
                          v1075 = (unsigned __int64)v1411 >> 3;
                          v1076 = (int)v1637;
                          v1077 = (int)v1641;
                          v1412 = WORD1(v1849);
                          LODWORD(v1640) = HIWORD(v1849);
                          v1078 = v1057 + 7;
                          do
                          {
                            v1079 = *(v1073 - 1) | (*(v1073 - 2) << 8);
                            v1080 = v1073[2] << 8;
                            v1081 = *v1073;
                            v1073 += 8;
                            v1082 = *(v1073 - 7) | ((v1081 | (v1079 << 8)) << 8);
                            v1083 = *(v1073 - 3) | ((*(v1073 - 4) | ((*(v1073 - 5) | v1080) << 8)) << 8);
                            v1084 = v1083 ^ v1058;
                            v1085 = v1060 ^ v1082 ^ (v1084 - 19032);
                            v1086 = __ROR4__(v1085, 15);
                            v1087 = HIDWORD(v1849) ^ v1085;
                            v1088 = (__ROR4__(v1087, 7) + WORD1(v1849) * v1086) ^ v1084;
                            v1089 = (v1074 * __ROR4__(v1088 - 1313519016, 9) - __ROR4__(v1088, 10)) ^ v1087;
                            v1090 = (__ROL4__(v1089, 5) + HIWORD(v1849) * __ROL4__(v1074 ^ v1089, 4)) ^ v1088;
                            v1091 = (HIDWORD(v1849) - (v1090 ^ 0xB1B54A58)) ^ v1089;
                            v1092 = (WORD1(v1849) * (v1091 - 19032) - (v1091 >> 6)) ^ v1090;
                            v1093 = (19032 * (v1074 ^ __ROR4__(v1092, 15))) ^ v1091;
                            v1094 = (v1074 * (HIWORD(v1849) + __ROR4__(~v1093, 3))) ^ v1092;
                            v1095 = (v1094 - 19032 - HIDWORD(v1849)) ^ v1093;
                            v1096 = (v1412 * ((unsigned int)v1640 ^ v1095)) ^ __ROR4__(v1095, 10) ^ v1094;
                            v1097 = __ROR4__(v1096, 3) ^ (v1074 * __ROL4__(v1096 ^ 0x4A58, 6)) ^ v1095;
                            v1098 = (19032 * (__ROR4__(v1097, 15) - HIWORD(v1849))) ^ v1096;
                            v1099 = (v1098 >> 15) ^ (19032 * __ROL4__(v1098 - v1074, 3)) ^ (v1098 >> 1) ^ (19032 * (HIWORD(v1849) ^ v1098)) ^ v1097;
                            v1100 = (WORD1(v1849) * (v1099 - v1074) - (v1099 >> 13)) ^ v1098;
                            v1101 = __ROR4__(v1100, 11) ^ (v1074 * __ROR4__(-1313519016 - v1100, 9)) ^ v1099;
                            v1102 = (v1101 - HIWORD(v1849) + 1313519016) ^ v1100;
                            v1103 = (19032 * (v1412 ^ v1102) - __ROR4__(v1102, 7)) ^ v1101;
                            v1104 = (WORD1(v1849) * __ROL4__(HIWORD(v1849) ^ v1103, 4) - __ROR4__(v1103, 16)) ^ v1102;
                            v1105 = (__ROR4__(v1104, 4) + v1074 * __ROR4__(-1313519016 - v1104, 10)) ^ v1103;
                            v1106 = __ROR4__(v1105, 9) ^ (HIWORD(v1849) * __ROR4__(v1105 + 1313519016, 4)) ^ v1104;
                            v1107 = (19032 * __ROL4__(HIDWORD(v1849) ^ v1106, 8) - __ROL4__(v1106, 2)) ^ v1105;
                            v1108 = (WORD1(v1849) * __ROR4__(HIDWORD(v1849) - v1107, 11) - __ROR4__(v1107, 12)) ^ v1106;
                            v1109 = (v1108 >> 8) ^ (v1074 * (v1108 ^ WORD1(v1849))) ^ v1107;
                            v1110 = v1109 ^ v1108 ^ 0xB1B54A58;
                            v1111 = v1077 ^ v1109;
                            v1112 = HIDWORD(v1849) ^ v1110;
                            v1077 = v1082;
                            *(v1078 - 4) = v1111;
                            v1113 = v1076 ^ v1112;
                            *v1078 = v1113;
                            v1076 = v1083;
                            v1114 = __ROR4__(v1111, 8);
                            *(v1078 - 5) = v1114;
                            v1078 += 8;
                            v1115 = __ROR4__(v1113, 8);
                            *(v1078 - 9) = v1115;
                            v1116 = __ROR4__(v1114, 8);
                            *(v1078 - 14) = v1116;
                            v1117 = __ROR4__(v1115, 8);
                            *(v1078 - 10) = v1117;
                            v1118 = __ROR4__(v1116, 8);
                            v1119 = __ROR4__(v1117, 8);
                            *(v1078 - 15) = v1118;
                            *(v1078 - 11) = v1119;
                            v1058 = __ROR4__(v1119, 8);
                            v1060 = __ROR4__(v1118, 8);
                            --v1075;
                          }
                          while ( v1075 );
                          v1055 = v1357;
                          v96 = (int)v1642;
                          LODWORD(v2) = 0;
                          v997 = v1584;
                          v998 = (void *)v1394;
                          v1072 = (char *)v1594;
                        }
                        v1120 = v1606;
                        *(_QWORD *)&v1072[(_QWORD)v1636] = v1055;
                        v1767[3] = 8LL;
                        v1767[4] = 160LL;
                        v1121 = GetProcessHeap();
                        v1378 = (WCHAR *)HeapAlloc(v1121, 8u, 0x30uLL);
                        if ( v1378 )
                        {
                          *(_DWORD *)v1378 = v1624;
                          v1124 = GetProcessHeap();
                          v1125 = HeapAlloc(v1124, 8u, v1624);
                          if ( !v1125 )
                            goto LABEL_1320;
                          *((_QWORD *)v1378 + 1) = v1125;
                          memcpy_0(v1125, v1636, v1624);
                          *((_DWORD *)v1378 + 4) = 160;
                          v1126 = GetProcessHeap();
                          v1127 = HeapAlloc(v1126, 8u, 0xA0uLL);
                          if ( !v1127 )
                            goto LABEL_1320;
                          *((_QWORD *)v1378 + 3) = v1127;
                          *v1127 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                          v1127[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                          v1127[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                          v1127[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                          v1127[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                          v1127[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                          v1127[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                          v1127[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                          v1127[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                          v1127[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                          *((_DWORD *)v1378 + 8) = 8;
                          v1128 = GetProcessHeap();
                          v1129 = HeapAlloc(v1128, 8u, 8uLL);
                          if ( v1129 )
                          {
                            *((_QWORD *)v1378 + 5) = v1129;
                            v1122 = 0;
                            **((_QWORD **)v1378 + 5) = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                            v1123 = v1378;
                          }
                          else
                          {
LABEL_1320:
                            v1122 = -1073741801;
                            v1130 = v1378;
                            v1395 = (void *)*((_QWORD *)v1378 + 1);
                            if ( v1395 )
                            {
                              v1131 = GetProcessHeap();
                              HeapFree(v1131, 0, v1395);
                              v1130 = v1378;
                              *((_QWORD *)v1378 + 1) = 0LL;
                            }
                            v1396 = (void *)*((_QWORD *)v1130 + 3);
                            if ( v1396 )
                            {
                              v1132 = GetProcessHeap();
                              HeapFree(v1132, 0, v1396);
                              v1130 = v1378;
                              *((_QWORD *)v1378 + 3) = 0LL;
                            }
                            v1397 = (void *)*((_QWORD *)v1130 + 5);
                            if ( v1397 )
                            {
                              v1133 = GetProcessHeap();
                              HeapFree(v1133, 0, v1397);
                              *((_QWORD *)v1378 + 5) = 0LL;
                            }
                            v1134 = GetProcessHeap();
                            HeapFree(v1134, 0, v1378);
                            v1123 = 0LL;
                          }
                        }
                        else
                        {
                          v1122 = -1073741801;
                          v1123 = 0LL;
                        }
                        v1376 = v1123;
                        v1135 = GetProcessHeap();
                        HeapFree(v1135, 0, v1636);
                        v1054 = v1122 | 0x10000000;
                        v1616 = (SIZE_T)v1376;
                        if ( v1054 < 0 )
                          goto LABEL_1527;
                        v1136 = *(unsigned int *)v1376;
                        v1595 = v1376;
                        LODWORD(v1705) = 4;
                        v1137 = RtlUIntAdd(4LL, v1136, &v1705);
                        if ( v1137 >= 0 )
                        {
                          v1137 = RtlUIntAdd((unsigned int)v1705, v1138, &v1705);
                          if ( v1137 >= 0 )
                          {
                            v1137 = RtlUIntAdd((unsigned int)v1705, *(unsigned int *)(v1139 + 16), &v1705);
                            if ( v1137 >= 0 )
                            {
                              v1137 = RtlUIntAdd((unsigned int)v1705, v1140, &v1705);
                              if ( v1137 >= 0 )
                              {
                                v1137 = RtlUIntAdd((unsigned int)v1705, *(unsigned int *)(v1141 + 32), &v1705);
                                if ( v1137 >= 0 )
                                {
                                  v1413 = v1705;
                                  v1142 = v1705;
                                  v1143 = GetProcessHeap();
                                  v1144 = HeapAlloc(v1143, 8u, v1142);
                                  v1625 = v1144;
                                  if ( !v1144 )
                                    goto LABEL_1377;
                                  v1768 = v1144;
                                  *v1144 = *(_DWORD *)v1376;
                                  v1145 = RtlULongLongAdd(v1144, 4LL, &v1768);
                                  v1636 = v1147;
                                  v1137 = v1145;
                                  v1376 = (WCHAR *)v1146;
                                  if ( v1145 < 0 )
                                    goto LABEL_1343;
                                  memcpy_0(v1768, *((const void **)v1146 + 1), *v1146);
                                  v1137 = RtlULongLongAdd(v1768, *(unsigned int *)v1595, &v1768);
                                  v1636 = v1625;
                                  v1376 = (WCHAR *)v1148;
                                  if ( v1137 < 0 )
                                    goto LABEL_1343;
                                  v1149 = v1768;
                                  *(_DWORD *)v1768 = *(_DWORD *)(v1148 + 16);
                                  v1150 = RtlULongLongAdd(v1149, 4LL, &v1768);
                                  v1636 = v1152;
                                  v1137 = v1150;
                                  v1376 = (WCHAR *)v1151;
                                  if ( v1150 < 0 )
                                    goto LABEL_1343;
                                  memcpy_0(v1768, *(const void **)(v1151 + 24), *(unsigned int *)(v1151 + 16));
                                  v1137 = RtlULongLongAdd(v1768, *((unsigned int *)v1595 + 4), &v1768);
                                  v1636 = v1625;
                                  v1376 = (WCHAR *)v1153;
                                  if ( v1137 < 0 )
                                    goto LABEL_1343;
                                  v1154 = v1768;
                                  *(_DWORD *)v1768 = *(_DWORD *)(v1153 + 32);
                                  v1155 = RtlULongLongAdd(v1154, 4LL, &v1768);
                                  v1636 = v1157;
                                  v1137 = v1155;
                                  v1376 = (WCHAR *)v1156;
                                  if ( v1155 < 0
                                    || (memcpy_0(v1768, *(const void **)(v1156 + 40), *(unsigned int *)(v1156 + 32)),
                                        v1137 = RtlULongLongAdd(v1768, *((unsigned int *)v1595 + 8), &v1768),
                                        v1636 = v1625,
                                        v1376 = (WCHAR *)v1616,
                                        v1137 < 0) )
                                  {
LABEL_1343:
                                    v1158 = GetProcessHeap();
                                    HeapFree(v1158, 0, v1636);
                                  }
                                  else
                                  {
                                    v1513 = (unsigned __int16 *)v1625;
                                    v1462 = v1413;
                                    v1376 = (WCHAR *)v1616;
                                  }
                                }
                              }
                            }
                          }
                        }
                        v1054 = v1137 | 0x10000000;
                        if ( v1054 < 0 )
                          goto LABEL_1527;
                        v1706 = 8;
                        v1159 = RtlUIntAdd(8LL, lpModuleNamej, &v1706);
                        v1054 = v1159 | 0x10000000;
                        if ( v1159 < 0 )
                          goto LABEL_1527;
                        v1163 = (v1706 + 7) & 0xFFFFFFF8;
                        if ( v1163 < v1706 )
                        {
                          v1054 = -1073741675;
                          goto LABEL_1527;
                        }
                        v1707 = (v1706 + 7) & 0xFFFFFFF8;
                        v1513 = v1162;
                        v1376 = v1161;
                        v1054 = RtlUIntAdd(v1163, v1160, &v1707);
                        if ( v1054 < 0 )
                          goto LABEL_1527;
                        v1376 = v1164;
                        v1513 = v1165;
                        if ( !v1791 )
                          goto LABEL_1369;
                        v1376 = v1164;
                        v1513 = v1165;
                        if ( (unsigned int)v1790 <= 1 )
                          goto LABEL_1369;
                        v1166 = (unsigned int *)v1791;
                        v1769 = (unsigned int *)v1791;
                        do
                        {
                          lpModuleNamek = *v1166;
                          v1054 = RtlULongLongAdd(v1166, 4LL, &v1769);
                          if ( v1054 < 0 )
                            goto LABEL_1527;
                          v1054 = RtlULongLongAdd(v1769, lpModuleNamek, &v1769);
                          if ( v1054 < 0 )
                            goto LABEL_1527;
                          v1166 = v1769;
                        }
                        while ( v1167 == -1 );
                        lpModuleNamel = *v1769;
                        v1054 = RtlULongLongAdd(v1769, 4LL, &v1769);
                        if ( v1054 < 0 )
                          goto LABEL_1527;
                        if ( !v1791 || (unsigned int)v1790 <= 2 )
                        {
LABEL_1369:
                          v1054 = -1073741811;
                          goto LABEL_1527;
                        }
                        v1168 = (unsigned int *)v1791;
                        v1770 = (unsigned int *)v1791;
                        do
                        {
                          v1414 = *v1168;
                          v1054 = RtlULongLongAdd(v1168, 4LL, &v1770);
                          if ( v1054 < 0 )
                            goto LABEL_1527;
                          v1054 = RtlULongLongAdd(v1770, v1414, &v1770);
                          if ( v1054 < 0 )
                            goto LABEL_1527;
                          v1168 = v1770;
                        }
                        while ( (unsigned int)(v1169 + 1) < 2 );
                        v1054 = RtlULongLongAdd(v1770, 4LL, &v1770);
                        if ( v1054 < 0 )
                          goto LABEL_1527;
                        LODWORD(v1708) = 4;
                        v1054 = RtlUIntAdd(4LL, v1707, &v1708);
                        if ( v1054 < 0 )
                          goto LABEL_1527;
                        v1054 = RtlUIntAdd((unsigned int)v1708, v1170, &v1708);
                        if ( v1054 < 0 )
                          goto LABEL_1527;
                        v1054 = RtlUIntAdd((unsigned int)v1708, lpModuleNamel, &v1708);
                        if ( v1054 < 0 )
                          goto LABEL_1527;
                        v1054 = RtlUIntAdd((unsigned int)v1708, 4LL, &v1708);
                        if ( v1054 < 0 )
                          goto LABEL_1527;
                        v1054 = RtlUIntAdd((unsigned int)v1708, v1171, &v1708);
                        if ( v1054 < 0 )
                          goto LABEL_1527;
                        v1631 = v1708;
                        if ( (unsigned int)v1708 > 0x400000 )
                        {
                          v1054 = -2147418113;
                          goto LABEL_1527;
                        }
                        v1617 = v1173;
                        v1596 = v1606;
                        v1636 = v998;
                        v1637 = v1172;
                        v1174 = v1708;
                        v1175 = GetProcessHeap();
                        v1176 = HeapAlloc(v1175, 8u, v1174);
                        v1641 = v1176;
                        if ( v1176 )
                        {
                          if ( !v1617 )
                          {
                            v1552 = (WCHAR *)v1176;
                            v1054 = -2147024809;
                            v1376 = (WCHAR *)v1637;
                            v1513 = 0LL;
                            goto LABEL_1527;
                          }
                          v1800[0] = v1617;
                          v1801 = v1462;
                          v1800[1] = v1176;
                          v1802 = v1631;
                          v1803 = 0;
                          if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule) )
                          {
                            ProcAddress = GetProcAddress(hModule, "NtQuerySystemInformation");
                            if ( ProcAddress )
                            {
                              v1181 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v1800);
                              v1178 = v1631;
                              v1054 = v1181 | 0x10000000;
                              if ( v1181 >= 0 )
                              {
                                v1178 = v1802;
                                v1182 = v1606;
                                v1183 = v1641;
                                v1184 = v997;
                                v1185 = (unsigned __int16 *)v1617;
                                v1186 = v998;
                                v1187 = (WCHAR *)v1637;
                                v1631 = v1802;
                                goto LABEL_1396;
                              }
                            }
                            else
                            {
                              v1180 = GetLastError();
                              v1054 = v1180;
                              if ( v1180 > 0 )
                                v1054 = (unsigned __int16)v1180 | 0x80070000;
                              v1178 = v1631;
                              if ( v1054 >= 0 )
                                v1054 = -2147467259;
                            }
                          }
                          else
                          {
                            v1177 = GetLastError();
                            v1054 = v1177;
                            if ( v1177 > 0 )
                              v1054 = (unsigned __int16)v1177 | 0x80070000;
                            v1178 = v1631;
                            if ( v1054 >= 0 )
                              v1054 = -2147467259;
                          }
                          if ( v1054 == -805306333 )
                          {
                            v1054 = -2147024774;
                            v1552 = (WCHAR *)v1641;
LABEL_1394:
                            v1376 = (WCHAR *)v1637;
                            v1513 = (unsigned __int16 *)v1617;
                            goto LABEL_1527;
                          }
                          v1183 = v1641;
                          v1186 = v998;
                          v1187 = (WCHAR *)v1637;
                          v1184 = v997;
                          v1185 = (unsigned __int16 *)v1617;
                          v1182 = v1606;
                          v1552 = (WCHAR *)v1641;
                          v1376 = (WCHAR *)v1637;
                          v1513 = (unsigned __int16 *)v1617;
                          if ( v1054 >= 0 )
                          {
LABEL_1396:
                            v1640 = 0LL;
                            v1711[0] = 0;
                            v1772 = v1183;
                            if ( v1178 < 4 )
                            {
                              v1376 = v1187;
                              v998 = v1186;
                              v997 = v1184;
                              v1120 = v1182;
LABEL_1399:
                              v1552 = (WCHAR *)v1183;
                              v1054 = -805306306;
                              v1513 = v1185;
                              goto LABEL_1527;
                            }
                            lpModuleNamem = *v1183;
                            v1188 = RtlULongLongAdd(v1183, 4LL, &v1772);
                            v998 = v1636;
                            v1189 = v1188;
                            v1120 = v1190;
                            v1376 = (WCHAR *)v1637;
                            v1552 = v1191;
                            v1398 = v1636;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1190;
                            v1513 = v1192;
                            if ( v1188 < 0 )
                              goto LABEL_1452;
                            v1193 = RtlUIntAdd(0LL, 4LL, v1711);
                            v1194 = (WCHAR *)v1637;
                            v1398 = v998;
                            v1552 = (WCHAR *)v1183;
                            v1189 = v1193;
                            v1376 = (WCHAR *)v1637;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1120;
                            v1513 = v1185;
                            if ( v1193 < 0 )
                              goto LABEL_1452;
                            if ( v1631 - v1711[0] < lpModuleNamem )
                              goto LABEL_1418;
                            v1648 = v1772;
                            v1189 = RtlULongLongAdd(v1772, lpModuleNamem, &v1772);
                            v1552 = v1195;
                            v1376 = (WCHAR *)v1637;
                            v1398 = v998;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1120;
                            v1513 = v1196;
                            if ( v1189 < 0 )
                              goto LABEL_1452;
                            v1197 = RtlUIntAdd(v1711[0], lpModuleNamem, v1711);
                            v1194 = (WCHAR *)v1637;
                            v1398 = v998;
                            v1552 = (WCHAR *)v1183;
                            v1189 = v1197;
                            v1376 = (WCHAR *)v1637;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1120;
                            v1513 = v1185;
                            if ( v1197 < 0 )
                              goto LABEL_1452;
                            if ( v1631 - v1711[0] < 4 )
                              goto LABEL_1418;
                            v1415 = *(_DWORD *)v1772;
                            v1189 = RtlULongLongAdd(v1772, 4LL, &v1772);
                            v1552 = v1198;
                            v1376 = (WCHAR *)v1637;
                            v1398 = v998;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1120;
                            v1513 = v1199;
                            if ( v1189 < 0 )
                              goto LABEL_1452;
                            v1200 = RtlUIntAdd(v1711[0], 4LL, v1711);
                            v1194 = (WCHAR *)v1637;
                            v1398 = v998;
                            v1552 = (WCHAR *)v1183;
                            v1189 = v1200;
                            v1376 = (WCHAR *)v1637;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1120;
                            v1513 = v1185;
                            if ( v1200 < 0 )
                              goto LABEL_1452;
                            if ( v1631 - v1711[0] < v1415 )
                              goto LABEL_1418;
                            v1538 = v1772;
                            v1189 = RtlULongLongAdd(v1772, v1415, &v1772);
                            v1552 = v1201;
                            v1376 = (WCHAR *)v1637;
                            v1398 = v998;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1120;
                            v1513 = v1202;
                            if ( v1189 < 0 )
                              goto LABEL_1452;
                            v1203 = RtlUIntAdd(v1711[0], v1415, v1711);
                            v1194 = (WCHAR *)v1637;
                            v1398 = v998;
                            v1552 = (WCHAR *)v1183;
                            v1189 = v1203;
                            v1376 = (WCHAR *)v1637;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1120;
                            v1513 = v1185;
                            if ( v1203 < 0 )
                              goto LABEL_1452;
                            if ( v1631 - v1711[0] < 4 )
                              goto LABEL_1418;
                            v1463 = *(_DWORD *)v1772;
                            v1189 = RtlULongLongAdd(v1772, 4LL, &v1772);
                            v1552 = v1204;
                            v1376 = (WCHAR *)v1637;
                            v1398 = v998;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1120;
                            v1513 = v1205;
                            if ( v1189 < 0 )
                              goto LABEL_1452;
                            v1206 = RtlUIntAdd(v1711[0], 4LL, v1711);
                            v1194 = (WCHAR *)v1637;
                            v1398 = v998;
                            v1552 = (WCHAR *)v1183;
                            v1189 = v1206;
                            v1376 = (WCHAR *)v1637;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1120;
                            v1513 = v1185;
                            if ( v1206 < 0 )
                              goto LABEL_1452;
                            if ( v1631 - v1711[0] < v1463 )
                            {
LABEL_1418:
                              v1376 = v1194;
                              goto LABEL_1399;
                            }
                            v1585 = v997;
                            v1189 = RtlUIntAdd(v1711[0], v1463, v1711);
                            v1552 = (WCHAR *)v1183;
                            v1376 = (WCHAR *)v1637;
                            v1398 = v998;
                            v1607 = (SIZE_T)v1120;
                            v1513 = v1185;
                            if ( v1189 < 0 )
                            {
LABEL_1452:
                              v1223 = 0LL;
                              goto LABEL_1453;
                            }
                            if ( v1631 != v1711[0] )
                            {
                              v1376 = (WCHAR *)v1637;
                              goto LABEL_1399;
                            }
                            if ( v1463 + v1415 + lpModuleNamem + 12LL != v1631 )
                            {
                              v1376 = (WCHAR *)v1637;
                              goto LABEL_1399;
                            }
                            v1207 = GetProcessHeap();
                            v1208 = HeapAlloc(v1207, 8u, 0x30uLL);
                            v1632 = v1208;
                            v1209 = (WCHAR *)v1641;
                            v1552 = (WCHAR *)v1641;
                            if ( !v1208 )
                            {
                              v1120 = v1596;
                              v1054 = -805306345;
                              goto LABEL_1394;
                            }
                            v1189 = 0;
                            v1120 = v1596;
                            v1210 = (WCHAR *)v1637;
                            v1607 = (SIZE_T)v1596;
                            v1513 = (unsigned __int16 *)v1617;
                            v1585 = v997;
                            v1398 = v998;
                            v1376 = (WCHAR *)v1637;
                            if ( v1648 )
                            {
                              *(_DWORD *)v1208 = lpModuleNamem;
                              v1211 = GetProcessHeap();
                              v1212 = HeapAlloc(v1211, 8u, lpModuleNamem);
                              if ( !v1212 )
                              {
                                v1552 = (WCHAR *)v1641;
                                v1376 = (WCHAR *)v1637;
                                v1513 = (unsigned __int16 *)v1617;
                                v1398 = v998;
                                v1585 = v997;
                                v1607 = (SIZE_T)v1596;
LABEL_1424:
                                v1189 = -1073741801;
                                v1213 = v1632;
                                lpMemk = (void *)v1632[1];
                                if ( lpMemk )
                                {
                                  v1214 = GetProcessHeap();
                                  HeapFree(v1214, 0, lpMemk);
                                  v1213 = v1632;
                                  v1632[1] = 0LL;
                                }
                                lpMeml = (void *)v1213[3];
                                if ( lpMeml )
                                {
                                  v1215 = GetProcessHeap();
                                  HeapFree(v1215, 0, lpMeml);
                                  v1213 = v1632;
                                  v1632[3] = 0LL;
                                }
                                lpMemm = (void *)v1213[5];
                                if ( lpMemm )
                                {
                                  v1216 = GetProcessHeap();
                                  HeapFree(v1216, 0, lpMemm);
                                  v1632[5] = 0LL;
                                }
                                v1217 = GetProcessHeap();
                                HeapFree(v1217, 0, v1632);
                                v1218 = 0LL;
                                goto LABEL_1442;
                              }
                              v1632[1] = v1212;
                              memcpy_0(v1212, v1648, lpModuleNamem);
                              v1208 = v1632;
                            }
                            else
                            {
                              *(_DWORD *)v1208 = 0;
                              v1208[1] = 0LL;
                              v1552 = v1209;
                              v1376 = v1210;
                              v1398 = v998;
                              v1585 = v997;
                              v1607 = (SIZE_T)v1596;
                              v1513 = (unsigned __int16 *)v1617;
                            }
                            v1632 = v1208;
                            if ( v1538 )
                            {
                              *((_DWORD *)v1208 + 4) = v1415;
                              v1219 = GetProcessHeap();
                              v1220 = HeapAlloc(v1219, 8u, v1415);
                              if ( !v1220 )
                                goto LABEL_1424;
                              v1632[3] = v1220;
                              v1189 = 0;
                              memcpy_0(v1220, v1538, v1415);
                              v1208 = v1632;
                              v1398 = v998;
                              v1585 = v997;
                              v1607 = (SIZE_T)v1596;
                            }
                            else
                            {
                              *((_DWORD *)v1208 + 4) = 0;
                              v1208[3] = 0LL;
                            }
                            if ( v1772 )
                            {
                              *((_DWORD *)v1208 + 8) = v1463;
                              v1221 = GetProcessHeap();
                              v1222 = HeapAlloc(v1221, 8u, v1463);
                              if ( !v1222 )
                                goto LABEL_1424;
                              v1632[5] = v1222;
                              v1189 = 0;
                              memcpy_0(v1222, v1772, v1463);
                              v1208 = v1632;
                              v1398 = v998;
                              v1585 = v997;
                              v1607 = (SIZE_T)v1596;
                            }
                            else
                            {
                              *((_DWORD *)v1208 + 8) = 0;
                              v1208[5] = 0LL;
                            }
                            v1218 = (unsigned int *)v1208;
                            v1640 = v1208;
LABEL_1442:
                            lpModuleNamen = v1189;
                            if ( v1189 >= 0 )
                            {
                              v1223 = v1218;
                              lpMemj = v1218;
LABEL_1453:
                              v1054 = v1189 | 0x10000000;
                              if ( v1054 < 0 )
                                goto LABEL_1527;
                              if ( !v1223 || (v1618 = *((_QWORD *)v1223 + 1)) == 0 || !*v1223 )
                              {
                                v1054 = -805306355;
                                goto LABEL_1527;
                              }
                              v1232 = *v1223 - 8LL;
                              v1597 = v1232;
                              v1233 = MemoryAlloc(v1232);
                              v1565 = v1233;
                              v1234 = v1233;
                              if ( !v1233 )
                                goto LABEL_1483;
                              v1235 = (unsigned __int8 *)v1618;
                              v1236 = v1233;
                              v1237 = lpMemj;
                              v1238 = 0;
                              v1636 = v1234;
                              v1633 = v1232 & 7;
                              v1851 = 0x7F1137FAB69605ELL;
                              v1626 = v1618;
                              if ( (v1232 & 7) != 0 )
                              {
                                v1239 = 0;
                                v1240 = 0;
                                do
                                {
                                  v1241 = *v1235++;
                                  v1242 = v1643;
                                  if ( (unsigned int)v2 >= 4 )
                                  {
                                    v1240 |= v1241 << v1643;
                                  }
                                  else
                                  {
                                    v1242 = v1643;
                                    v1239 |= v1241 << (v1643 - 32);
                                  }
                                  LODWORD(v2) = v2 + 1;
                                  v1643 = v1242 - 8;
                                }
                                while ( (int)v2 < v1633 );
                                v1626 = (SIZE_T)v1235;
                                v1243 = v1240;
                                v1644 = v1240;
                                v96 = (int)v1642;
                                v1244 = v1243 ^ 0x699A899C;
                                v1245 = v1239 ^ 0x92F65A5;
                                lpModuleNameo = v1239;
                                v1246 = 0;
                                v1236 = v1636;
                                v1398 = v998;
                                v1247 = v1244;
                                v1585 = v997;
                                v1607 = (SIZE_T)v1120;
                                do
                                {
                                  v1636 = v1236 + 1;
                                  if ( v1246 >= 4 )
                                  {
                                    v1247 = __ROL4__(v1247, 8);
                                    v1248 = v1247;
                                  }
                                  else
                                  {
                                    v1245 = __ROL4__(v1245, 8);
                                    v1248 = v1245;
                                  }
                                  *v1236 = v1248;
                                  ++v1246;
                                  v1236 = v1636;
                                }
                                while ( v1246 < v1633 );
                                v1238 = 0;
                                v1237 = lpMemj;
                                v1249 = v1239 ^ 0x92F65A5;
                                LODWORD(v2) = 0;
                                if ( (unsigned int)v1633 <= 4 )
                                {
                                  v1416 = 0;
                                  if ( (unsigned int)v1633 < 4 )
                                    v1249 = v1249 >> (8 * (4 - v1633)) << (8 * (4 - v1633));
                                }
                                else
                                {
                                  v1416 = v1244 >> (8 * (8 - v1633)) << (8 * (8 - v1633));
                                }
                              }
                              else
                              {
                                lpModuleNameo = 0;
                                v1249 = 0;
                                v1416 = 0;
                              }
                              v1250 = v1597;
                              if ( v1597 >> 3 )
                              {
                                v1251 = HIDWORD(v1851);
                                v1252 = v1236 + 7;
                                v1253 = lpModuleNameo;
                                v1464 = HIDWORD(v1851) ^ 0xAB69605E;
                                v1254 = (unsigned __int8 *)(v1626 + 2);
                                v1255 = v1597 >> 3;
                                v1256 = v1416;
                                v1257 = WORD2(v1851);
                                do
                                {
                                  v1258 = *(v1254 - 1) | (*(v1254 - 2) << 8);
                                  v1259 = v1254[2] << 8;
                                  v1260 = *v1254;
                                  v1254 += 8;
                                  v1261 = *(v1254 - 7) | ((v1260 | (v1258 << 8)) << 8);
                                  v1262 = v1261 ^ v1249;
                                  v1263 = *(v1254 - 3) | ((*(v1254 - 4) | ((*(v1254 - 5) | v1259) << 8)) << 8);
                                  v1264 = v1464 ^ v1262 ^ v1263 ^ v1256;
                                  v1265 = (__ROL4__(v1264, 10) + v1257 * __ROL4__(v1264 + 1419157410, 5)) ^ v1262;
                                  v1266 = (WORD1(v1851) * __ROR4__(v1265 + v1251, 9) - __ROL4__(v1265, 2)) ^ v1264;
                                  v1267 = (24670 * (v1266 - v1257) - (v1266 >> 13)) ^ v1265;
                                  v1268 = (HIWORD(v1851) * __ROL4__(WORD1(v1851) ^ v1267, 6) - __ROL4__(v1267, 2)) ^ v1266;
                                  v1269 = (v1251 - (v1268 ^ 0xAB69605E)) ^ v1267;
                                  v1270 = (WORD1(v1851) * (v1257 ^ v1269)) ^ __ROR4__(v1269, 6) ^ v1268;
                                  v1271 = (__ROL4__(v1270, 2) + 24670 * __ROR4__(v1270 + v1251, 15)) ^ v1269;
                                  v1272 = (HIWORD(v1851) * __ROR4__(v1271 + 1419157410, 14) - __ROL4__(v1271, 8)) ^ v1270;
                                  v1273 = __ROR4__(v1272, 10) ^ (v1257 * __ROR4__(v1272 ^ 0xAB69605E, 12)) ^ v1271;
                                  v1274 = (v1273 >> 10) ^ (WORD1(v1851) * (HIWORD(v1851) ^ v1273)) ^ v1272;
                                  v1275 = (HIWORD(v1851) * (__ROR4__(~v1274, 5) + 24670)) ^ v1273;
                                  v1276 = v1274 ^ (v1275 - HIWORD(v1851)) ^ 0xAB69605E;
                                  v1277 = ((v1276 >> 2) + v1257 * __ROL4__(HIWORD(v1851) ^ v1276, 2)) ^ v1275;
                                  v1278 = (__ROL4__(v1277, 7) + WORD1(v1851) * __ROR4__(v1277 - v1251, 6)) ^ v1276;
                                  v1279 = (24670 * (v1257 ^ v1278) + __ROR4__(v1278, 9)) ^ v1277;
                                  v1280 = (__ROL4__(v1279, 7) + HIWORD(v1851) * __ROL4__(WORD1(v1851) ^ v1279, 5)) ^ v1278;
                                  v1281 = v1251 ^ v1280 ^ v1279 ^ 0xAB69605E;
                                  v1282 = (v1257 * (__ROR4__(v1281, 3) - WORD1(v1851))) ^ v1280;
                                  v1283 = (24670 * __ROR4__(v1282 - v1251, 1) - __ROR4__(v1282, 6)) ^ v1281;
                                  v1284 = (__ROL4__(v1283, 14) + HIWORD(v1851) * __ROL4__(v1283 - 1419157410, 3)) ^ v1282;
                                  v1285 = (v1257 * __ROL4__(v1284 - 1419157410, 15) - __ROR4__(v1284, 14)) ^ v1283;
                                  v1286 = (v1285 >> 3) ^ (WORD1(v1851) * (v1285 ^ 0x605E)) ^ v1284;
                                  v1287 = v1644 ^ v1286;
                                  v1644 = v1263;
                                  v1288 = v1253 ^ __ROL4__(v1286, 2) ^ (24670 * __ROL4__(v1251 ^ v1286, 4));
                                  v1253 = v1261;
                                  v1289 = v1288 ^ v1285;
                                  *(v1252 - 4) = v1289;
                                  *v1252 = v1287;
                                  v1252 += 8;
                                  v1290 = __ROR4__(v1289, 8);
                                  *(v1252 - 13) = v1290;
                                  v1291 = __ROR4__(v1287, 8);
                                  *(v1252 - 9) = v1291;
                                  v1292 = __ROR4__(v1290, 8);
                                  *(v1252 - 14) = v1292;
                                  v1293 = __ROR4__(v1291, 8);
                                  *(v1252 - 10) = v1293;
                                  v1294 = __ROR4__(v1292, 8);
                                  v1295 = __ROR4__(v1293, 8);
                                  *(v1252 - 15) = v1294;
                                  *(v1252 - 11) = v1295;
                                  v1256 = __ROR4__(v1295, 8);
                                  v1249 = __ROR4__(v1294, 8);
                                  --v1255;
                                }
                                while ( v1255 );
                                v1238 = 0;
                                LODWORD(v2) = 0;
                                v96 = (int)v1642;
                                v997 = v1585;
                                v998 = v1398;
                                v1120 = (void *)v1607;
                                v1237 = lpMemj;
                                v1250 = v1597;
                              }
                              v1296 = v1565;
                              for ( i = 0LL; i < v1250; ++i )
                                v1238 ^= *((_BYTE *)v1565 + i);
                              v1298 = v1237;
                              v1299 = v1376;
                              v1634 = v1376;
                              v1637 = v1552;
                              lpMemj = v1237;
                              if ( v1238 != *(_QWORD *)(v1250 + v1618) )
                              {
                                MemoryFree(v1565);
LABEL_1483:
                                v1054 = -805306367;
                                v1564 = 0LL;
                                goto LABEL_1527;
                              }
                              v1709 = 0;
                              v1773 = v1565;
                              if ( (unsigned int)v1250 < 4 )
                                goto LABEL_1485;
                              lpModuleNamep = *v1565;
                              v1300 = RtlULongLongAdd(v1565, 4LL, &v1773);
                              v1564 = v1301;
                              lpMemj = v1302;
                              if ( v1300 < 0 )
                                goto LABEL_1524;
                              v1300 = RtlUIntAdd(0LL, 4LL, &v1709);
                              v1564 = v1296;
                              lpMemj = v1298;
                              v1376 = v1303;
                              if ( v1300 < 0 )
                                goto LABEL_1524;
                              if ( (unsigned int)v1597 - v1709 < 4 )
                                goto LABEL_1486;
                              v1417 = *(_DWORD *)v1773;
                              v1300 = RtlULongLongAdd(v1773, 4LL, &v1773);
                              v1564 = v1304;
                              lpMemj = v1305;
                              v1376 = v1306;
                              if ( v1300 < 0 )
                                goto LABEL_1524;
                              v1300 = RtlUIntAdd(v1709, 4LL, &v1709);
                              v1564 = v1296;
                              lpMemj = v1298;
                              v1376 = v1303;
                              if ( v1300 < 0 )
                                goto LABEL_1524;
                              if ( (unsigned int)v1597 - v1709 < v1417 )
                              {
LABEL_1486:
                                v1376 = v1303;
                                goto LABEL_1487;
                              }
                              v1300 = RtlUIntAdd(v1709, v1417, &v1709);
                              v1564 = v1296;
                              v1299 = v1307;
                              lpMemj = v1298;
                              v1376 = v1307;
                              if ( v1300 < 0 )
                                goto LABEL_1524;
                              if ( (char *)v1296 + (unsigned int)v1597 < (char *)v1773 + v1417
                                || (unsigned __int64)(unsigned int)v1597 + (char *)v1296 - v1417 - (_BYTE *)v1773 >= 8 )
                              {
LABEL_1485:
                                v1376 = v1299;
LABEL_1487:
                                v1300 = -1073741762;
                                v1564 = v1296;
                                lpMemj = v1298;
LABEL_1524:
                                v1054 = v1300 | 0x10000000;
                                goto LABEL_1527;
                              }
                              v1300 = 0;
                              v1598 = 0LL;
                              v1465 = 0;
                              v1564 = v1296;
                              lpMemj = v1298;
                              v1376 = v1307;
                              v1608 = (SIZE_T)v1120;
                              if ( v1773 )
                              {
                                v1641 = v1773;
                                v1300 = RtlULongLongAdd(v1773, v1417, &v1774);
                                v1564 = v1308;
                                lpMemj = v1309;
                                v1376 = v1634;
                                v1608 = (SIZE_T)v1120;
                                if ( v1300 < 0 )
                                {
LABEL_1523:
                                  v1120 = (void *)v1608;
                                  goto LABEL_1524;
                                }
                                v1310 = (SIZE_T)v1513;
                                v1564 = v1308;
                                lpMemj = v1309;
                                v1376 = v1634;
                                v1608 = (SIZE_T)v1120;
                                if ( (unsigned __int64)v1641 < v1774 )
                                {
                                  v1311 = v1309;
                                  lpMemj = v1309;
                                  v1564 = v1308;
                                  v1312 = v1634;
                                  v1376 = v1634;
                                  v1313 = v1641;
                                  v1552 = (WCHAR *)v1637;
                                  v1608 = (SIZE_T)v1120;
                                  while ( 1 )
                                  {
                                    v1399 = v1310;
                                    v1648 = v1564;
                                    v1635 = v1312;
                                    v1300 = RtlULongLongAdd(v1313, 4LL, &v1724);
                                    if ( v1300 < 0 )
                                      break;
                                    if ( v1724 > v1774 )
                                      goto LABEL_1509;
                                    v1300 = RtlUIntAdd(4LL, *v1314, &v1710);
                                    if ( v1300 < 0 )
                                      goto LABEL_1524;
                                    v1300 = RtlULongLongAdd(v1641, v1710, &v1734);
                                    v1376 = v1317;
                                    v1513 = (unsigned __int16 *)v1399;
                                    v1564 = v1315;
                                    lpMemj = v1311;
                                    v1552 = v1316;
                                    v1608 = (SIZE_T)v1120;
                                    if ( v1300 < 0 )
                                      break;
                                    v1313 = v1734;
                                    v1318 = (LPVOID)v1774;
                                    v1641 = v1734;
                                    v1564 = v1315;
                                    lpMemj = v1311;
                                    v1552 = v1316;
                                    v1513 = (unsigned __int16 *)v1399;
                                    if ( (unsigned __int64)v1734 > v1774 )
                                    {
                                      v1300 = -1073741811;
                                      v1376 = v1635;
                                      goto LABEL_1524;
                                    }
                                    ++v1465;
                                    v1310 = v1399;
                                    v1312 = v1635;
                                    v1376 = v1635;
                                    v1608 = (SIZE_T)v1120;
                                    if ( (unsigned __int64)v1734 >= v1774 )
                                    {
                                      v1564 = v1648;
                                      v1376 = v1635;
                                      lpMemj = v1311;
                                      v1552 = v1316;
                                      v1608 = (SIZE_T)v1120;
                                      v1513 = (unsigned __int16 *)v1399;
                                      goto LABEL_1511;
                                    }
                                  }
LABEL_1520:
                                  if ( v1300 >= 0 )
                                  {
                                    v1120 = (void *)v1608;
                                    if ( lpModuleNamep != LODWORD(v1794[0]) )
                                      v1300 = -1073741762;
                                    goto LABEL_1524;
                                  }
                                  goto LABEL_1523;
                                }
                                v1313 = v1641;
                                v1318 = (LPVOID)v1774;
LABEL_1511:
                                if ( v1313 != v1318 )
                                {
LABEL_1509:
                                  v1300 = -1073741811;
                                  goto LABEL_1524;
                                }
                              }
                              if ( v1417 )
                              {
                                v1319 = GetProcessHeap();
                                v1320 = v1417;
                                v1598 = HeapAlloc(v1319, 8u, v1417);
                                v1321 = v1598;
                                if ( !v1598 )
                                {
                                  v1300 = -1073741801;
                                  goto LABEL_1524;
                                }
                                v1300 = 0;
                              }
                              else
                              {
                                v1320 = 0LL;
                                v1321 = 0LL;
                              }
                              if ( v1773 )
                                memcpy_0(v1321, v1773, v1320);
                              v1794[1] = v1598;
                              LODWORD(v1794[0]) = v1465;
                              goto LABEL_1520;
                            }
                            v1223 = 0LL;
                            lpMemj = 0LL;
                            v1398 = v998;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1596;
                            if ( !v1218 )
                              goto LABEL_1453;
                            v1224 = v1640;
                            v1225 = (void *)*((_QWORD *)v1640 + 1);
                            if ( v1225 )
                            {
                              v1226 = GetProcessHeap();
                              HeapFree(v1226, 0, v1225);
                              v1224[1] = 0LL;
                            }
                            v1227 = (void *)v1224[3];
                            if ( v1227 )
                            {
                              v1228 = GetProcessHeap();
                              HeapFree(v1228, 0, v1227);
                              v1224[3] = 0LL;
                            }
                            v1229 = (void *)v1224[5];
                            if ( v1229 )
                            {
                              v1230 = GetProcessHeap();
                              HeapFree(v1230, 0, v1229);
                              v1224[5] = 0LL;
                            }
                            v1231 = GetProcessHeap();
                            HeapFree(v1231, 0, v1224);
                            v1120 = v1596;
                            v1189 = lpModuleNamen;
                            lpMemj = 0LL;
                            v1398 = v998;
                            v1585 = v997;
                            v1607 = (SIZE_T)v1596;
                            goto LABEL_1452;
                          }
LABEL_1527:
                          if ( !v1120 )
                            goto LABEL_1529;
                          goto LABEL_1528;
                        }
LABEL_1377:
                        v1054 = -805306345;
                        goto LABEL_1527;
                      }
                    }
                  }
                }
LABEL_1566:
                v1790 = 0LL;
                v1346 = v1791;
                if ( v1791 )
                {
                  v1347 = GetProcessHeap();
                  HeapFree(v1347, 0, v1346);
                  v1791 = 0LL;
                }
                v1794[0] = 0LL;
                v1348 = v1794[1];
                if ( v1794[1] )
                {
                  v1349 = GetProcessHeap();
                  HeapFree(v1349, 0, v1348);
                  v1794[1] = 0LL;
                }
                if ( v997 )
                {
                  v1350 = GetProcessHeap();
                  HeapFree(v1350, 0, v997);
                }
                if ( v998 )
                {
                  v1351 = GetProcessHeap();
                  HeapFree(v1351, 0, v998);
                }
                goto LABEL_1574;
              }
              v1393 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0F8)(0LL, 0LL, 1027LL);
              if ( !v1393 )
              {
                GetLastError();
                goto LABEL_1229;
              }
              v506 = ((__int64 (*)(void))off_1800DB098)();
              v507 = g_WarbirdNotificationInformation;
              g_WarbirdPaintInitTime = v506;
              v1495 = g_WarbirdNotificationInformation;
              memset_0(&v1833, 0, 0x70uLL);
              v1582 = 0LL;
              v1870 = 0LL;
              v1853 = 0LL;
              v1871 = 0;
              v1603 = 0LL;
              v1868 = 0LL;
              v1869 = 0LL;
              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                ;
              v508 = g_WarbirdSecureFunctionsRefCount;
              if ( g_WarbirdSecureFunctionsRefCount )
                goto LABEL_672;
              v1535 = 0;
              LODWORD(v1638) = 0;
              v509 = (char *)MemoryAlloc(0x338uLL);
              v1365 = (WCHAR *)v509;
              if ( !v509 )
                goto LABEL_638;
              v510 = v509 + 7;
              v511 = 103LL;
              v512 = 0;
              v513 = (unsigned __int8 *)&unk_1800B8AE2;
              v514 = 0;
              v515 = 0;
              v516 = -1;
              do
              {
                v517 = *(v513 - 1) | (*(v513 - 2) << 8);
                v518 = v513[2] << 8;
                v519 = *v513;
                v513 += 8;
                v520 = *(v513 - 7) | ((v519 | (v517 << 8)) << 8);
                v521 = v520 ^ v514;
                v522 = *(v513 - 3) | ((*(v513 - 4) | ((*(v513 - 5) | v518) << 8)) << 8);
                v523 = v522 ^ v512 ^ v521 ^ 0xAC987321;
                v524 = (__ROL4__(v523, 10) + 4991 * __ROL4__(v523 + 1419157410, 5)) ^ v521;
                v525 = (43881 * __ROR4__(v524 + 133239679, 9) - __ROL4__(v524, 2)) ^ v523;
                v526 = (24670 * v525 - (v525 >> 13) - 123127970) ^ v524;
                v527 = (2033 * __ROL4__(v526 ^ 0xAB69, 6) - __ROL4__(v526, 2)) ^ v525;
                v528 = (133239679 - (v527 ^ 0xAB69605E)) ^ v526;
                v529 = (43881 * (v528 ^ 0x137F)) ^ __ROR4__(v528, 6) ^ v527;
                v530 = (__ROL4__(v529, 2) + 24670 * __ROR4__(v529 + 133239679, 15)) ^ v528;
                v531 = (2033 * __ROR4__(v530 + 1419157410, 14) - __ROL4__(v530, 8)) ^ v529;
                v532 = __ROR4__(v531, 10) ^ (4991 * __ROR4__(v531 ^ 0xAB69605E, 12)) ^ v530;
                v533 = v531 ^ (v532 >> 10) ^ (43881 * (v532 ^ 0x7F1));
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
                v546 = 24670 * __ROL4__(v545 ^ 0x7F1137F, 4);
                v547 = v545;
                v548 = v516 ^ v545;
                v516 = v522;
                v549 = v515 ^ __ROL4__(v547, 2) ^ v546;
                v515 = v520;
                v550 = v549 ^ v544;
                *(v510 - 4) = v550;
                *v510 = v548;
                v510 += 8;
                v551 = __ROR4__(v550, 8);
                *(v510 - 13) = v551;
                v552 = __ROR4__(v548, 8);
                *(v510 - 9) = v552;
                v553 = __ROR4__(v551, 8);
                *(v510 - 14) = v553;
                v554 = __ROR4__(v552, 8);
                *(v510 - 10) = v554;
                v555 = __ROR4__(v553, 8);
                v556 = __ROR4__(v554, 8);
                *(v510 - 15) = v555;
                *(v510 - 11) = v556;
                v512 = __ROR4__(v556, 8);
                v514 = __ROR4__(v555, 8);
                --v511;
              }
              while ( v511 );
              v557 = 0;
              LODWORD(v2) = 0;
              v507 = v1495;
              v558 = 0LL;
              v96 = (int)v1642;
              v559 = v1365;
              do
                v557 ^= *((_BYTE *)v1365 + v558++);
              while ( v558 < 0x338 );
              if ( v557 != 64LL )
              {
                MemoryFree(v1365);
                goto LABEL_638;
              }
              *((_BYTE *)v1365 + 823) = 0;
              memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
              if ( *(_BYTE *)v1365 )
              {
                v1746 = v1365;
                while ( 1 )
                {
                  v562 = v559;
                  v563 = -1LL;
                  do
                    ++v563;
                  while ( v559[v563] );
                  v564 = &v559[v563];
                  v1366 = (WCHAR *)((char *)&WARBIRD::g_arModuleInfo + 24 * (unsigned int)v1638);
                  if ( !GetModuleHandleExW(0, v562, (HMODULE *)v1366) )
                    break;
                  v565 = (HMODULE *)v1366;
                  v566 = 0;
                  if ( **(_WORD **)v1366 == 23117
                    && (v567 = *(int *)(*(_QWORD *)v1366 + 60LL), (unsigned int)v567 < 0x10000000)
                    && (v568 = *(_QWORD *)v1366 + v567, v568 >= *(_QWORD *)v1366)
                    && *(_DWORD *)v568 == 17744 )
                  {
                    if ( ((*(_WORD *)(v568 + 24) - 267) & 0xFEFF) != 0 )
                    {
                      v566 = -1073741811;
                    }
                    else
                    {
                      *(_QWORD *)(v1366 + 6) = *(_QWORD *)(v568 + 136);
                      *((_DWORD *)v1366 + 2) = *(_DWORD *)(v568 + 80);
                    }
                  }
                  else
                  {
                    v566 = -1073741701;
                  }
                  v569 = *(_DWORD *)(v564 + 1);
                  v570 = 0;
                  v559 = v564 + 3;
                  v1521 = v569;
                  for ( j = 0; v570 < v1521; j = v570 )
                  {
                    v571 = (const CHAR *)v559;
                    v572 = -1LL;
                    do
                      ++v572;
                    while ( *((_BYTE *)v559 + v572) );
                    v559 = (WCHAR *)((char *)v559 + v572 + 1);
                    if ( v566 >= 0 )
                    {
                      v573 = (void **)GetProcAddress(*v565, v571);
                      if ( !v573 )
                        goto LABEL_666;
                      v565 = (HMODULE *)v1366;
                      (&WARBIRD::g_FuncAddress)[v1535] = v573;
                      v570 = j;
                    }
                    ++v1535;
                    ++v570;
                  }
                  LODWORD(v1638) = (_DWORD)v1638 + 1;
                  if ( !*(_BYTE *)v559 )
                    goto LABEL_666;
                }
                v566 = -1073741702;
LABEL_666:
                v559 = (WCHAR *)v1746;
                if ( !v1746 )
                  goto LABEL_670;
              }
              else
              {
                v566 = 0;
              }
              v574 = GetProcessHeap();
              HeapFree(v574, 0, v559);
LABEL_670:
              if ( v566 < 0 )
              {
LABEL_638:
                v560 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                v561 = 4LL;
                do
                {
                  if ( *v560 )
                    FreeLibrary(*v560);
                  v560 += 3;
                  --v561;
                }
                while ( v561 );
                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                memcpy_0(&WARBIRD::g_FuncAddress, &off_1800AEDD0, 0x170uLL);
LABEL_673:
                v1536 = 0;
                _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                v1747 = 0LL;
                v1792 = 0LL;
                v1522 = 0;
                v1367 = 0LL;
                while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                  ;
                v575 = g_WarbirdSecureFunctionsRefCount;
                if ( g_WarbirdSecureFunctionsRefCount )
                  goto LABEL_717;
                LODWORD(v1638) = 0;
                Sizec = 0;
                v576 = (char *)MemoryAlloc(0x338uLL);
                v1543 = (WCHAR *)v576;
                if ( !v576 )
                  goto LABEL_683;
                LODWORD(v1639) = -1;
                v577 = v576 + 7;
                v578 = 103LL;
                v579 = 0;
                v580 = (unsigned __int8 *)&unk_1800B8AE2;
                v581 = 0;
                v582 = 0;
                v583 = -1;
                do
                {
                  v584 = *(v580 - 1) | (*(v580 - 2) << 8);
                  v585 = v580[2] << 8;
                  v586 = *v580;
                  v580 += 8;
                  v587 = *(v580 - 7) | ((v586 | (v584 << 8)) << 8);
                  v588 = v587 ^ v581;
                  v589 = *(v580 - 3) | ((*(v580 - 4) | ((*(v580 - 5) | v585) << 8)) << 8);
                  v590 = v589 ^ v579 ^ v588 ^ 0xAC987321;
                  v591 = (__ROL4__(v590, 10) + 4991 * __ROL4__(v590 + 1419157410, 5)) ^ v588;
                  v592 = (43881 * __ROR4__(v591 + 133239679, 9) - __ROL4__(v591, 2)) ^ v590;
                  v593 = (24670 * v592 - (v592 >> 13) - 123127970) ^ v591;
                  v594 = (2033 * __ROL4__(v593 ^ 0xAB69, 6) - __ROL4__(v593, 2)) ^ v592;
                  v595 = (133239679 - (v594 ^ 0xAB69605E)) ^ v593;
                  v596 = (43881 * (v595 ^ 0x137F)) ^ __ROR4__(v595, 6) ^ v594;
                  v597 = (__ROL4__(v596, 2) + 24670 * __ROR4__(v596 + 133239679, 15)) ^ v595;
                  v598 = (2033 * __ROR4__(v597 + 1419157410, 14) - __ROL4__(v597, 8)) ^ v596;
                  v599 = __ROR4__(v598, 10) ^ (4991 * __ROR4__(v598 ^ 0xAB69605E, 12)) ^ v597;
                  v600 = v598 ^ (v599 >> 10) ^ (43881 * (v599 ^ 0x7F1));
                  v601 = (2033 * (__ROR4__(~v600, 5) + 24670)) ^ v599;
                  v602 = v600 ^ (v601 - 2033) ^ 0xAB69605E;
                  v603 = ((v602 >> 2) + 4991 * __ROL4__(v600 ^ (v601 - 2033) ^ 0xAB6967AF, 2)) ^ v601;
                  v604 = (__ROL4__(v603, 7) + 43881 * __ROR4__(v603 - 133239679, 6)) ^ v602;
                  v605 = (24670 * (v604 ^ 0x137F) + __ROR4__(v604, 9)) ^ v603;
                  v606 = (__ROL4__(v605, 7) + 2033 * __ROL4__(v605 ^ 0xAB69, 5)) ^ v604;
                  v607 = v606 ^ v605 ^ 0xAC987321;
                  v608 = (4991 * __ROR4__(v607, 3) - 219010071) ^ v606;
                  v609 = (24670 * __ROR4__(v608 - 133239679, 1) - __ROR4__(v608, 6)) ^ v607;
                  v610 = (__ROL4__(v609, 14) + 2033 * __ROL4__(v609 - 1419157410, 3)) ^ v608;
                  v611 = (4991 * __ROL4__(v610 - 1419157410, 15) - __ROR4__(v610, 14)) ^ v609;
                  v612 = (v611 >> 3) ^ (43881 * (v611 ^ 0x605E)) ^ v610;
                  v613 = 24670 * __ROL4__(v612 ^ 0x7F1137F, 4);
                  v614 = v612;
                  v615 = v583 ^ v612;
                  v583 = v589;
                  v616 = v582 ^ __ROL4__(v614, 2) ^ v613;
                  v582 = v587;
                  v617 = v616 ^ v611;
                  *(v577 - 4) = v617;
                  *v577 = v615;
                  v577 += 8;
                  v618 = __ROR4__(v617, 8);
                  *(v577 - 13) = v618;
                  v619 = __ROR4__(v615, 8);
                  *(v577 - 9) = v619;
                  v620 = __ROR4__(v618, 8);
                  *(v577 - 14) = v620;
                  v621 = __ROR4__(v619, 8);
                  *(v577 - 10) = v621;
                  v622 = __ROR4__(v620, 8);
                  v623 = __ROR4__(v621, 8);
                  *(v577 - 15) = v622;
                  *(v577 - 11) = v623;
                  v579 = __ROR4__(v623, 8);
                  v581 = __ROR4__(v622, 8);
                  --v578;
                }
                while ( v578 );
                v624 = 0;
                LODWORD(v2) = 0;
                v507 = v1495;
                v625 = 0LL;
                v96 = (int)v1642;
                v626 = v1543;
                do
                  v624 ^= *((_BYTE *)v1543 + v625++);
                while ( v625 < 0x338 );
                if ( v624 != 64LL )
                {
                  MemoryFree(v1543);
                  goto LABEL_683;
                }
                *((_BYTE *)v1543 + 823) = 0;
                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                if ( *(_BYTE *)v1543 )
                {
                  v1748 = v1543;
                  while ( 1 )
                  {
                    v629 = v626;
                    v630 = -1LL;
                    do
                      ++v630;
                    while ( v626[v630] );
                    v631 = &v626[v630];
                    v1544 = (WCHAR *)((char *)&WARBIRD::g_arModuleInfo + 24 * Sizec);
                    if ( !GetModuleHandleExW(0, v629, (HMODULE *)v1544) )
                      break;
                    v632 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * Sizec);
                    v633 = 0;
                    if ( **(_WORD **)v1544 == 23117
                      && (v634 = *(int *)(*(_QWORD *)v1544 + 60LL), (unsigned int)v634 < 0x10000000)
                      && (v635 = *(_QWORD *)v1544 + v634, v635 >= *(_QWORD *)v1544)
                      && *(_DWORD *)v635 == 17744 )
                    {
                      if ( ((*(_WORD *)(v635 + 24) - 267) & 0xFEFF) != 0 )
                      {
                        v633 = -1073741811;
                      }
                      else
                      {
                        *(_QWORD *)(v1544 + 6) = *(_QWORD *)(v635 + 136);
                        *((_DWORD *)v1544 + 2) = *(_DWORD *)(v635 + 80);
                      }
                    }
                    else
                    {
                      v633 = -1073741701;
                    }
                    v636 = *(_DWORD *)(v631 + 1);
                    v637 = 0;
                    v626 = v631 + 3;
                    v1496 = v636;
                    for ( k = 0; v637 < v1496; k = v637 )
                    {
                      v638 = (const CHAR *)v626;
                      v639 = -1LL;
                      do
                        ++v639;
                      while ( *((_BYTE *)v626 + v639) );
                      v626 = (WCHAR *)((char *)v626 + v639 + 1);
                      if ( v633 >= 0 )
                      {
                        v640 = (void **)GetProcAddress(*v632, v638);
                        if ( !v640 )
                          goto LABEL_711;
                        v632 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * Sizec);
                        (&WARBIRD::g_FuncAddress)[(unsigned int)v1638] = v640;
                        v637 = k;
                      }
                      LODWORD(v1638) = (_DWORD)v1638 + 1;
                      ++v637;
                    }
                    ++Sizec;
                    if ( !*(_BYTE *)v626 )
                      goto LABEL_711;
                  }
                  v633 = -1073741702;
LABEL_711:
                  v626 = (WCHAR *)v1748;
                  if ( !v1748 )
                    goto LABEL_715;
                }
                else
                {
                  v633 = 0;
                }
                v641 = GetProcessHeap();
                HeapFree(v641, 0, v626);
LABEL_715:
                if ( v633 < 0 )
                {
LABEL_683:
                  v627 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                  v628 = 4LL;
                  do
                  {
                    if ( *v627 )
                      FreeLibrary(*v627);
                    v627 += 3;
                    --v628;
                  }
                  while ( v628 );
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  memcpy_0(&WARBIRD::g_FuncAddress, &off_1800AEDD0, 0x170uLL);
LABEL_718:
                  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                  memset_0(&v1833, 0, 0x70uLL);
                  v1497 = v507 & 0xF;
                  v1908[0] = (v507 >> 4) & 0xF;
                  v1908[1] = (v507 >> 8) & 0xF;
                  v1853 = 0LL;
                  v1908[2] = (v507 >> 12) & 0xF;
                  v1545 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0F8)(0LL, 0LL, 1027LL);
                  LODWORD(v1638) = 0xFFFFFF;
                  if ( !v1545 )
                  {
                    v642 = GetLastError();
                    v643 = v642;
                    if ( v642 > 0 )
                      v643 = (unsigned __int16)v642 | 0x80070000;
                    if ( v643 >= 0 )
                      v643 = -2147467259;
LABEL_934:
                    while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                      ;
                    v777 = g_WarbirdSecureFunctionsRefCount;
                    if ( g_WarbirdSecureFunctionsRefCount > 0 )
                    {
                      --g_WarbirdSecureFunctionsRefCount;
                      if ( v777 == 1 )
                      {
                        v778 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                        v779 = 4LL;
                        do
                        {
                          if ( *v778 )
                            FreeLibrary(*v778);
                          v778 += 3;
                          --v779;
                        }
                        while ( v779 );
                        memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                        memcpy_0(&WARBIRD::g_FuncAddress, &off_1800AEDD0, 0x170uLL);
                      }
                    }
                    _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1747);
                    if ( v643 < 0 )
                    {
LABEL_1075:
                      if ( v1835 )
                      {
                        v862 = -1LL;
                        do
                          ++v862;
                        while ( *((_WORD *)v1835 + v862) );
                        memset(v1835, 0, 2 * v862 + 2);
                        MemoryFree(v1835);
                        v1835 = 0LL;
                      }
                      if ( v1836 )
                      {
                        v863 = -1LL;
                        do
                          ++v863;
                        while ( *((_WORD *)v1836 + v863) );
                        memset(v1836, 0, 2 * v863 + 2);
                        MemoryFree(v1836);
                        v1836 = 0LL;
                      }
                      if ( v1837 )
                      {
                        v864 = -1LL;
                        do
                          ++v864;
                        while ( *((_WORD *)v1837 + v864) );
                        memset(v1837, 0, 2 * v864 + 2);
                        MemoryFree(v1837);
                        v1837 = 0LL;
                      }
                      if ( v1838 )
                      {
                        ((void (*)(void))off_1800DB038)();
                        v1838 = 0LL;
                      }
                      if ( v1839 )
                      {
                        ((void (*)(void))off_1800DB038)();
                        v1839 = 0LL;
                      }
                      if ( v1840 )
                      {
                        ((void (*)(void))off_1800DB038)();
                        v1840 = 0LL;
                      }
                      while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                        ;
                      v865 = g_WarbirdSecureFunctionsRefCount;
                      if ( g_WarbirdSecureFunctionsRefCount > 0 )
                      {
                        --g_WarbirdSecureFunctionsRefCount;
                        if ( v865 == 1 )
                        {
                          v866 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                          v867 = 4LL;
                          do
                          {
                            if ( *v866 )
                              FreeLibrary(*v866);
                            v866 += 3;
                            --v867;
                          }
                          while ( v867 );
                          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                          memcpy_0(&WARBIRD::g_FuncAddress, &off_1800AEDD0, 0x170uLL);
                        }
                      }
                      _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                      lpModuleNamec = g_WarbirdNotificationInformation;
                      v868 = ((__int64 (*)(void))off_1800DB098)() - g_WarbirdPaintInitTime;
                      v1583 = v868;
                      v1906 = 0LL;
                      v1903 = 0LL;
                      v1904 = 0LL;
                      v1905 = 0LL;
                      while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                        ;
                      v869 = g_WarbirdSecureFunctionsRefCount;
                      if ( g_WarbirdSecureFunctionsRefCount )
                        goto LABEL_1218;
                      v1407 = 0;
                      v1629 = 0;
                      v870 = (char *)MemoryAlloc(0x338uLL);
                      v1604 = (WCHAR *)v870;
                      if ( !v870 )
                        goto LABEL_1112;
                      v871 = v870 + 7;
                      v872 = 0;
                      v873 = (unsigned __int8 *)&unk_1800B8AE2;
                      v874 = 0;
                      v875 = 0;
                      v2 = 103LL;
                      v876 = -1;
                      do
                      {
                        v877 = *(v873 - 1) | (*(v873 - 2) << 8);
                        v878 = v873[2] << 8;
                        v879 = *v873;
                        v873 += 8;
                        v880 = *(v873 - 7) | ((v879 | (v877 << 8)) << 8);
                        v881 = v880 ^ v875;
                        v882 = *(v873 - 3) | ((*(v873 - 4) | ((*(v873 - 5) | v878) << 8)) << 8);
                        v883 = v881 ^ v874 ^ v882 ^ 0xAC987321;
                        v884 = (__ROL4__(v883, 10) + 4991 * __ROL4__(v883 + 1419157410, 5)) ^ v881;
                        v885 = (43881 * __ROR4__(v884 + 133239679, 9) - __ROL4__(v884, 2)) ^ v883;
                        v886 = (24670 * v885 - (v885 >> 13) - 123127970) ^ v884;
                        v887 = (2033 * __ROL4__(v886 ^ 0xAB69, 6) - __ROL4__(v886, 2)) ^ v885;
                        v888 = (133239679 - (v887 ^ 0xAB69605E)) ^ v886;
                        v889 = (43881 * (v888 ^ 0x137F)) ^ __ROR4__(v888, 6) ^ v887;
                        v890 = (__ROL4__(v889, 2) + 24670 * __ROR4__(v889 + 133239679, 15)) ^ v888;
                        v891 = (2033 * __ROR4__(v890 + 1419157410, 14) - __ROL4__(v890, 8)) ^ v889;
                        v892 = __ROR4__(v891, 10) ^ (4991 * __ROR4__(v891 ^ 0xAB69605E, 12)) ^ v890;
                        v893 = (v892 >> 10) ^ (43881 * (v892 ^ 0x7F1)) ^ v891;
                        v894 = (2033 * (__ROR4__(~v893, 5) + 24670)) ^ v892;
                        v895 = v893 ^ (v894 - 2033) ^ 0xAB69605E;
                        v896 = ((v895 >> 2) + 4991 * __ROL4__(v893 ^ (v894 - 2033) ^ 0xAB6967AF, 2)) ^ v894;
                        v897 = (__ROL4__(v896, 7) + 43881 * __ROR4__(v896 - 133239679, 6)) ^ v895;
                        v898 = (24670 * (v897 ^ 0x137F) + __ROR4__(v897, 9)) ^ v896;
                        v899 = (__ROL4__(v898, 7) + 2033 * __ROL4__(v898 ^ 0xAB69, 5)) ^ v897;
                        v900 = v898 ^ v899 ^ 0xAC987321;
                        v901 = (4991 * __ROR4__(v900, 3) - 219010071) ^ v899;
                        v902 = (24670 * __ROR4__(v901 - 133239679, 1) - __ROR4__(v901, 6)) ^ v900;
                        v903 = (__ROL4__(v902, 14) + 2033 * __ROL4__(v902 - 1419157410, 3)) ^ v901;
                        v904 = (4991 * __ROL4__(v903 - 1419157410, 15) - __ROR4__(v903, 14)) ^ v902;
                        v905 = (v904 >> 3) ^ (43881 * (v904 ^ 0x605E)) ^ v903;
                        v906 = 24670 * __ROL4__(v905 ^ 0x7F1137F, 4);
                        v907 = v905;
                        v908 = v876 ^ v905;
                        v876 = v882;
                        v909 = v872 ^ __ROL4__(v907, 2) ^ v906;
                        v872 = v880;
                        v910 = v909 ^ v904;
                        *(v871 - 4) = v910;
                        *v871 = v908;
                        v871 += 8;
                        v911 = __ROR4__(v910, 8);
                        *(v871 - 13) = v911;
                        v912 = __ROR4__(v908, 8);
                        *(v871 - 9) = v912;
                        v913 = __ROR4__(v911, 8);
                        *(v871 - 14) = v913;
                        v914 = __ROR4__(v912, 8);
                        *(v871 - 10) = v914;
                        v915 = __ROR4__(v913, 8);
                        v916 = __ROR4__(v914, 8);
                        *(v871 - 15) = v915;
                        *(v871 - 11) = v916;
                        v874 = __ROR4__(v916, 8);
                        v875 = __ROR4__(v915, 8);
                        --v2;
                      }
                      while ( v2 );
                      v917 = 0;
                      v96 = (int)v1642;
                      v918 = 0LL;
                      v919 = v1604;
                      do
                        v917 ^= *((_BYTE *)v1604 + v918++);
                      while ( v918 < 0x338 );
                      if ( v917 != 64LL )
                      {
                        MemoryFree(v1604);
LABEL_1111:
                        v868 = v1583;
LABEL_1112:
                        v920 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                        v921 = 4LL;
                        do
                        {
                          if ( *v920 )
                            FreeLibrary(*v920);
                          v920 += 3;
                          --v921;
                        }
                        while ( v921 );
                        memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                        memcpy_0(&WARBIRD::g_FuncAddress, &off_1800AEDD0, 0x170uLL);
                        goto LABEL_1219;
                      }
                      *((_BYTE *)v1604 + 823) = 0;
                      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                      if ( *(_BYTE *)v1604 )
                      {
                        v1761 = v1604;
                        while ( 1 )
                        {
                          v981 = v919;
                          v982 = -1LL;
                          do
                            ++v982;
                          while ( v919[v982] );
                          v983 = &v919[v982];
                          v984 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1629;
                          if ( !GetModuleHandleExW(0, v981, (HMODULE *)v984) )
                            break;
                          v985 = 0;
                          if ( **(_WORD **)v984 == 23117
                            && (v986 = *(int *)(*(_QWORD *)v984 + 60LL), (unsigned int)v986 < 0x10000000)
                            && (v987 = *(_QWORD *)v984 + v986, v987 >= *(_QWORD *)v984)
                            && *(_DWORD *)v987 == 17744 )
                          {
                            if ( ((*(_WORD *)(v987 + 24) - 267) & 0xFEFF) != 0 )
                            {
                              v985 = -1073741811;
                            }
                            else
                            {
                              *(_QWORD *)(v984 + 12) = *(_QWORD *)(v987 + 136);
                              *((_DWORD *)v984 + 2) = *(_DWORD *)(v987 + 80);
                            }
                          }
                          else
                          {
                            v985 = -1073741701;
                          }
                          v988 = *(_DWORD *)(v983 + 1);
                          v989 = 0;
                          v919 = v983 + 3;
                          v1461 = v988;
                          for ( LODWORD(v1637) = 0; v989 < v1461; LODWORD(v1637) = v989 )
                          {
                            v990 = (const CHAR *)v919;
                            v991 = -1LL;
                            do
                              ++v991;
                            while ( *((_BYTE *)v919 + v991) );
                            v919 = (WCHAR *)((char *)v919 + v991 + 1);
                            if ( v985 >= 0 )
                            {
                              v992 = (void **)GetProcAddress(*(HMODULE *)v984, v990);
                              if ( !v992 )
                                goto LABEL_1212;
                              (&WARBIRD::g_FuncAddress)[v1407] = v992;
                              v989 = (unsigned int)v1637;
                            }
                            ++v1407;
                            ++v989;
                          }
                          ++v1629;
                          if ( !*(_BYTE *)v919 )
                            goto LABEL_1212;
                        }
                        v985 = -1073741702;
LABEL_1212:
                        v919 = (WCHAR *)v1761;
                        if ( !v1761 )
                          goto LABEL_1216;
                      }
                      else
                      {
                        v985 = 0;
                      }
                      v993 = GetProcessHeap();
                      HeapFree(v993, 0, v919);
LABEL_1216:
                      if ( v985 < 0 )
                        goto LABEL_1111;
                      v869 = g_WarbirdSecureFunctionsRefCount;
                      v868 = v1583;
LABEL_1218:
                      g_WarbirdSecureFunctionsRefCount = v869 + 1;
LABEL_1219:
                      _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                      LODWORD(v1906) = lpModuleNamec;
                      LODWORD(v1903) = v868;
                      v1902 = 1;
                      LODWORD(v1904) = -1721306479;
                      DWORD2(v1903) = 1;
                      LODWORD(v1905) = 1;
                      DWORD2(v1904) = 1;
                      DWORD2(v1905) = 1;
                      v994 = 4LL;
                      ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1800DB0D0)(0LL, 8225LL, 4LL, &v1902);
                      while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                        ;
                      v995 = g_WarbirdSecureFunctionsRefCount;
                      if ( g_WarbirdSecureFunctionsRefCount > 0 )
                      {
                        --g_WarbirdSecureFunctionsRefCount;
                        if ( v995 == 1 )
                        {
                          v996 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                          do
                          {
                            if ( *v996 )
                              FreeLibrary(*v996);
                            v996 += 3;
                            --v994;
                          }
                          while ( v994 );
                          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                          memcpy_0(&WARBIRD::g_FuncAddress, &off_1800AEDD0, 0x170uLL);
                        }
                      }
                      _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                      ((void (__fastcall *)(_QWORD, SIZE_T))off_1800DB160)(0LL, v1393);
                      v1689 = v1636;
                      goto LABEL_1229;
                    }
                    v780 = v1853;
                    v1755 = v1853;
                    memset_0(v1806, 0, 0x68uLL);
                    v781 = 1;
                    v782 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800DB050)(v1393, 7LL);
                    if ( v782
                      && (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1800DB068)(
                                         v782,
                                         104LL,
                                         v1806) )
                    {
                      if ( v1809 != 32 || !v1810 || v1807 <= 0 || v1808 <= 0 )
                        v781 = 0;
                      if ( v781 )
                        goto LABEL_951;
                    }
                    else
                    {
                      v781 = 0;
                    }
                    if ( v1497 != 1 )
                    {
                      v783 = v1497;
                      goto LABEL_953;
                    }
LABEL_951:
                    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DB150)(&v1842, v780, HIDWORD(v1755));
                    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DB150)(&v1843, v780, HIDWORD(v1755));
                    v783 = v1497;
                    if ( v1497 == 1 )
                      v1603 = ((__int64 (__fastcall *)(_QWORD))off_1800DB028)(v1834 == 0 ? 0xB26720 : 0);
LABEL_953:
                    v1537 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800DB080)(v1393, 1LL);
                    v784 = 2064;
                    if ( v1833 )
                      v784 = 133138;
                    v1523 = v784;
                    if ( v781 )
                    {
                      v785 = v1835;
                      v1448 = v1834;
                      v1371 = v1838;
                      memset_0(v1811, 0, 0x68uLL);
                      memset_0(v1815, 0, 0x68uLL);
                      v1505 = 0LL;
                      Sizeg = 0;
                      v1468 = 0;
                      v1874 = 0LL;
                      v1875 = 0;
                      v1872 = 0LL;
                      v1873 = 0LL;
                      v1854 = 0LL;
                      if ( !v785 )
                        goto LABEL_1073;
                      v786 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800DB050)(v1393, 7LL);
                      if ( !v786 )
                        goto LABEL_1043;
                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1800DB068)(
                                           v786,
                                           104LL,
                                           v1811) )
                      {
                        v1505 = v1814;
                        Sizeg = v1812;
                        v1468 = v1813;
                      }
                      v1546 = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T))off_1800DB010)(v1393);
                      v787 = v1546;
                      if ( !v1546 )
                        goto LABEL_1043;
                      DWORD1(v1872) = DWORD2(v1842) - v1842;
                      DWORD2(v1872) = DWORD1(v1842) - HIDWORD(v1842);
                      v1756 = 0LL;
                      v1873 = 0LL;
                      v1874 = 0LL;
                      v1875 = 0;
                      LODWORD(v1872) = 40;
                      HIDWORD(v1872) = 2097153;
                      lpMemd = (LPVOID)((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800DB018)(
                                         v1546,
                                         &v1872,
                                         0LL,
                                         &v1756,
                                         0LL,
                                         0);
                      if ( !lpMemd )
                      {
                        v788 = GetLastError();
                        v789 = v788;
                        if ( v788 > 0 )
                          v789 = (unsigned __int16)v788 | 0x80070000;
                        if ( v789 >= 0 )
                          v789 = -2147467259;
                        goto LABEL_998;
                      }
                      v790 = (unsigned int)((__int64 (__fastcall *)(LPVOID, __int64, _BYTE *))off_1800DB068)(
                                             lpMemd,
                                             104LL,
                                             v1815) == 0;
                      v791 = 0LL;
                      if ( !v790 )
                        v791 = v1816;
                      DWORD2(v1854) = DWORD2(v1842) - v1842;
                      HIDWORD(v1854) = HIDWORD(v1842) - DWORD1(v1842);
                      v1558 = v791;
                      ((void (__fastcall *)(LPCWSTR, LPVOID))off_1800DB078)(v1546, lpMemd);
                      ((void (__fastcall *)(LPCWSTR, __int64))off_1800DB080)(v1546, 1LL);
                      v792 = ((__int64 (__fastcall *)(LPCWSTR, LPCWSTR))off_1800DB078)(v1546, v1371);
                      v793 = off_1800DB0E8;
                      v1372 = (LPCWSTR)v792;
                      v794 = ((__int64 (__fastcall *)(_QWORD))off_1800DB070)(0LL);
                      ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v793)(v1546, &v1854, v794);
                      ((void (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1800DB0D8)(
                        v1546,
                        v785,
                        0xFFFFFFFFLL,
                        &v1854,
                        v1523,
                        0LL);
                      if ( v1497 == 1 )
                      {
                        if ( v1448 )
                        {
                          v795 = ((__int64 (__fastcall *)(__int64))off_1800DB118)(8LL);
                          LOBYTE(v796) = v795;
                          v1449 = v795;
LABEL_979:
                          v797 = 0;
                          v798 = -(int)v1842;
                          v799 = 0;
                          v789 = 0;
                          if ( (int)v1842 >= 0 )
                          {
                            v797 = v1842;
                            v798 = 0;
                          }
                          v800 = -DWORD1(v1842);
                          if ( (SDWORD1(v1842) & 0x80000000) == 0 )
                          {
                            v799 = DWORD1(v1842);
                            v800 = 0;
                          }
                          v801 = DWORD2(v1854) - v798;
                          if ( DWORD2(v1854) - v798 >= Sizeg - v797 )
                            v801 = Sizeg - v797;
                          LODWORD(v1639) = v801;
                          v802 = HIDWORD(v1854) - v800;
                          if ( HIDWORD(v1854) - v800 >= v1468 - v799 )
                            v802 = v1468 - v799;
                          if ( v801 > 0 && v802 > 0 )
                          {
                            v803 = Sizeg;
                            v804 = (int)v1639;
                            Sizeh = 0;
                            v805 = v1558 + 4 * (v798 + (__int64)(v800 * DWORD2(v1854)));
                            v1559 = v805;
                            v806 = &v1505[2 * v797 + 2 * (__int64)(v799 * (int)v803)];
                            v1611 = 4LL * SDWORD2(v1854);
                            v1588 = 2 * v803;
                            v1506 = v806;
                            do
                            {
                              v1469 = 0;
                              v807 = (unsigned __int8 *)(v805 + 2);
                              v808 = 0;
                              v809 = (char *)v806 - v805;
                              do
                              {
                                if ( (unsigned __int8)((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2) != 0xFF )
                                {
                                  v810 = (unsigned __int8)~((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2);
                                  v809[(_QWORD)v807] -= ~((*v807 + *(v807 - 2) + 2 * (unsigned int)*(v807 - 1)) >> 2)
                                                      * (v796 - v809[(_QWORD)v807]);
                                  v811 = v807[(_QWORD)v809 - 1];
                                  v812 = (unsigned __int64)(2155905153LL * v810 * (BYTE1(v1449) - v811)) >> 32;
                                  v807[(_QWORD)v809 - 1] = v811 + (v812 >> 7 < 0) + (v812 >> 7);
                                  v813 = v807[(_QWORD)v809 - 2];
                                  v814 = (unsigned __int64)(2155905153LL * v810 * (BYTE2(v1449) - v813)) >> 32;
                                  v807[(_QWORD)v809 - 2] = v813 + (v814 >> 7 < 0) + (v814 >> 7);
                                  v815 = v807[(_QWORD)v809 + 1];
                                  v816 = v810 * (255 - v815);
                                  v808 = v1469;
                                  v807[(_QWORD)v809 + 1] = v815 + v816 / 255;
                                }
                                ++v808;
                                v807 += 4;
                                v1469 = v808;
                                v789 = 0;
                              }
                              while ( v808 < v804 );
                              v805 = v1611 + v1559;
                              v806 = &v1506[v1588];
                              v1559 += v1611;
                              v1506 = (unsigned __int16 *)((char *)v1506 + v1588 * 2);
                              ++Sizeh;
                            }
                            while ( Sizeh < v802 );
                            v96 = (int)v1642;
                            v787 = v1546;
                          }
                          ((void (__fastcall *)(LPVOID))off_1800DB038)(lpMemd);
                          if ( v1372 )
                            ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1800DB078)(v787, v1372);
LABEL_998:
                          ((void (__fastcall *)(LPCWSTR))off_1800DB030)(v787);
                          if ( v789 < 0 )
                            goto LABEL_1073;
                          v817 = v1836;
                          v1450 = v1834;
                          v1373 = v1839;
                          memset_0(v1817, 0, 0x68uLL);
                          memset_0(v1821, 0, 0x68uLL);
                          v1507 = 0LL;
                          Sizei = 0;
                          v1470 = 0;
                          v1878 = 0LL;
                          v1879 = 0;
                          v1876 = 0LL;
                          v1877 = 0LL;
                          v1855 = 0LL;
                          if ( !v817 )
                          {
LABEL_1073:
                            if ( v1603 )
                              ((void (__fastcall *)(SIZE_T))off_1800DB038)(v1603);
                            goto LABEL_1075;
                          }
                          v818 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1800DB050)(v1393, 7LL);
                          if ( v818 )
                          {
                            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1800DB068)(
                                                 v818,
                                                 104LL,
                                                 v1817) )
                            {
                              v1507 = v1820;
                              Sizei = v1818;
                              v1470 = v1819;
                            }
                            v1547 = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T))off_1800DB010)(v1393);
                            v819 = v1547;
                            if ( v1547 )
                            {
                              DWORD1(v1876) = DWORD2(v1843) - v1843;
                              DWORD2(v1876) = DWORD1(v1843) - HIDWORD(v1843);
                              v1757 = 0LL;
                              v1877 = 0LL;
                              v1878 = 0LL;
                              v1879 = 0;
                              LODWORD(v1876) = 40;
                              HIDWORD(v1876) = 2097153;
                              lpMeme = (LPVOID)((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800DB018)(
                                                 v1547,
                                                 &v1876,
                                                 0LL,
                                                 &v1757,
                                                 0LL,
                                                 0);
                              if ( !lpMeme )
                              {
                                v820 = GetLastError();
                                v821 = v820;
                                if ( v820 > 0 )
                                  v821 = (unsigned __int16)v820 | 0x80070000;
                                if ( v821 >= 0 )
                                  v821 = -2147467259;
LABEL_1037:
                                ((void (__fastcall *)(LPCWSTR))off_1800DB030)(v819);
                                if ( v821 < 0 )
                                  goto LABEL_1073;
                                v846 = v1393;
                                v847 = 0LL;
LABEL_1187:
                                ((void (__fastcall *)(SIZE_T, _QWORD))off_1800DB080)(v846, v1537);
                                v861 = v1582;
                                if ( !v1582 )
                                {
LABEL_1071:
                                  if ( !v847 )
                                    goto LABEL_1073;
                                  goto LABEL_1072;
                                }
LABEL_1070:
                                ((void (__fastcall *)(void *))off_1800DB038)(v861);
                                goto LABEL_1071;
                              }
                              v790 = (unsigned int)((__int64 (__fastcall *)(LPVOID, __int64, _BYTE *))off_1800DB068)(
                                                     lpMeme,
                                                     104LL,
                                                     v1821) == 0;
                              v822 = 0LL;
                              if ( !v790 )
                                v822 = v1822;
                              DWORD2(v1855) = DWORD2(v1843) - v1843;
                              HIDWORD(v1855) = HIDWORD(v1843) - DWORD1(v1843);
                              v1560 = v822;
                              ((void (__fastcall *)(LPCWSTR, LPVOID))off_1800DB078)(v1547, lpMeme);
                              ((void (__fastcall *)(LPCWSTR, __int64))off_1800DB080)(v1547, 1LL);
                              v823 = ((__int64 (__fastcall *)(LPCWSTR, LPCWSTR))off_1800DB078)(v1547, v1373);
                              v824 = off_1800DB0E8;
                              v1374 = (LPCWSTR)v823;
                              v825 = ((__int64 (__fastcall *)(_QWORD))off_1800DB070)(0LL);
                              ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v824)(v1547, &v1855, v825);
                              ((void (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1800DB0D8)(
                                v1547,
                                v817,
                                0xFFFFFFFFLL,
                                &v1855,
                                v1523,
                                0LL);
                              if ( v1497 == 1 )
                              {
                                if ( !v1450 )
                                {
                                  v1498 = 0xFFFFFF;
LABEL_1018:
                                  v827 = 0;
                                  v828 = -(int)v1843;
                                  v829 = 0;
                                  if ( (int)v1843 >= 0 )
                                  {
                                    v827 = v1843;
                                    v828 = 0;
                                  }
                                  v830 = -DWORD1(v1843);
                                  v821 = 0;
                                  if ( (SDWORD1(v1843) & 0x80000000) == 0 )
                                  {
                                    v830 = 0;
                                    v829 = DWORD1(v1843);
                                  }
                                  v831 = DWORD2(v1855) - v828;
                                  if ( DWORD2(v1855) - v828 >= Sizei - v827 )
                                    v831 = Sizei - v827;
                                  v832 = HIDWORD(v1855) - v830;
                                  if ( HIDWORD(v1855) - v830 >= v1470 - v829 )
                                    v832 = v1470 - v829;
                                  if ( v831 > 0 && v832 > 0 )
                                  {
                                    v1451 = 0;
                                    v833 = v1560 + 4 * (v828 + (__int64)(DWORD2(v1855) * v830));
                                    v1561 = v833;
                                    v834 = &v1507[2 * v827 + 2 * (__int64)(Sizei * v829)];
                                    v1612 = 4LL * SDWORD2(v1855);
                                    v1589 = 2LL * Sizei;
                                    v1508 = v834;
                                    do
                                    {
                                      v835 = (char)v1638;
                                      v836 = (unsigned __int8 *)(v833 + 2);
                                      Sizej = 0;
                                      v837 = 0;
                                      v838 = (char *)v834 - v833;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v836 + *(v836 - 2) + 2 * (unsigned int)*(v836 - 1)) >> 2) != 0xFF )
                                        {
                                          v839 = (unsigned __int8)~((*v836 + *(v836 - 2) + 2 * (unsigned int)*(v836 - 1)) >> 2);
                                          v838[(_QWORD)v836] -= ~((*v836 + *(v836 - 2) + 2 * (unsigned int)*(v836 - 1)) >> 2)
                                                              * (v835 - v838[(_QWORD)v836]);
                                          v840 = v836[(_QWORD)v838 - 1];
                                          v841 = (unsigned __int64)(2155905153LL * v839 * (BYTE1(v1498) - v840)) >> 32;
                                          v836[(_QWORD)v838 - 1] = v840 + (v841 >> 7 < 0) + (v841 >> 7);
                                          v842 = v836[(_QWORD)v838 - 2];
                                          v843 = (unsigned __int64)(2155905153LL * v839 * (BYTE2(v1498) - v842)) >> 32;
                                          v836[(_QWORD)v838 - 2] = v842 + (v843 >> 7 < 0) + (v843 >> 7);
                                          v844 = v836[(_QWORD)v838 + 1];
                                          v845 = v839 * (255 - v844);
                                          v837 = Sizej;
                                          v836[(_QWORD)v838 + 1] = v844 + v845 / 255;
                                        }
                                        ++v837;
                                        v836 += 4;
                                        Sizej = v837;
                                        v821 = 0;
                                      }
                                      while ( v837 < v831 );
                                      v833 = v1612 + v1561;
                                      v834 = &v1508[v1589];
                                      v1561 += v1612;
                                      v1508 = (unsigned __int16 *)((char *)v1508 + v1589 * 2);
                                      ++v1451;
                                    }
                                    while ( v1451 < v832 );
                                    v819 = v1547;
                                  }
                                  ((void (__fastcall *)(LPVOID))off_1800DB038)(lpMeme);
                                  if ( v1374 )
                                    ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1800DB078)(v819, v1374);
                                  goto LABEL_1037;
                                }
                                v826 = ((__int64 (__fastcall *)(__int64))off_1800DB118)(8LL);
                              }
                              else
                              {
                                v826 = -5723992;
                              }
                              v1498 = v826;
                              LODWORD(v1638) = v826;
                              goto LABEL_1018;
                            }
                          }
LABEL_1043:
                          GetLastError();
                          goto LABEL_1073;
                        }
                        v796 = 0xFFFFFF;
                      }
                      else
                      {
                        v796 = -5723992;
                      }
                      v1449 = v796;
                      goto LABEL_979;
                    }
                    if ( v1834 || (v848 = -64, v783 == 1) )
                      v848 = -1;
                    LOWORD(v1452) = 0;
                    BYTE2(v1452) = v848;
                    HIBYTE(v1452) = 1;
                    Sizek = 0;
                    v1471 = 0;
                    LODWORD(v1639) = 0;
                    v1375 = (LPCWSTR)((__int64 (__fastcall *)(SIZE_T))off_1800DB010)(v1393);
                    if ( !v1375 )
                      goto LABEL_1043;
                    if ( v783 == 1 )
                    {
                      v849 = 0;
                      v850 = DWORD2(v1843) - v1843;
                      v851 = 0;
                      if ( DWORD2(v1843) - (int)v1843 <= DWORD2(v1842) - (int)v1842 )
                        v850 = DWORD2(v1842) - v1842;
                      v852 = HIDWORD(v1843) - DWORD1(v1842);
                      LODWORD(v1648) = v850;
                      LODWORD(v1689) = HIDWORD(v1843) - DWORD1(v1842);
                      if ( v1833 )
                      {
                        Sizek = v1842 + v850 - DWORD2(v1842);
                        v849 = Sizek;
                        LODWORD(v1639) = v1843 + v850 - DWORD2(v1843);
                        v852 = (int)v1689;
                        v851 = (int)v1639;
                      }
                      LODWORD(v1640) = HIDWORD(v1842) - DWORD1(v1842);
                      v853 = DWORD2(v1842) + v849 - v1842;
                      v854 = DWORD2(v1843) + v851 - v1843;
                      LODWORD(v1637) = DWORD1(v1843) - DWORD1(v1842);
                      v1628 = HIDWORD(v1843) - DWORD1(v1842);
                    }
                    else
                    {
                      v850 = DWORD2(v1853);
                      v852 = HIDWORD(v1853);
                      v1776 = v1842;
                      v853 = DWORD2(v1842);
                      LODWORD(v1640) = HIDWORD(v1842);
                      v1471 = DWORD1(v1842);
                      v1777 = v1843;
                      v854 = DWORD2(v1843);
                      Sizek = v1842;
                      v1628 = HIDWORD(v1843);
                      LODWORD(v1637) = DWORD1(v1843);
                      LODWORD(v1639) = v1843;
                      LODWORD(v1689) = HIDWORD(v1853);
                      LODWORD(v1648) = DWORD2(v1853);
                    }
                    LODWORD(v1641) = v854;
                    v1758 = 0LL;
                    v1869 = 0LL;
                    DWORD2(v1868) = -v852;
                    v1870 = 0LL;
                    v1871 = 0;
                    LODWORD(v1868) = 40;
                    DWORD1(v1868) = v850;
                    HIDWORD(v1868) = 2097153;
                    v855 = ((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800DB018)(
                             v1375,
                             &v1868,
                             0LL,
                             &v1758,
                             0LL,
                             0);
                    v1582 = (void *)v855;
                    if ( !v855 )
                    {
                      GetLastError();
                      v847 = v1375;
LABEL_1072:
                      ((void (__fastcall *)(LPCWSTR))off_1800DB030)(v847);
                      goto LABEL_1073;
                    }
                    ((void (__fastcall *)(LPCWSTR, __int64))off_1800DB078)(v1375, v855);
                    if ( v1497 == 1 && v1603 )
                    {
                      v1856 = 0LL;
                      v1858 = (int)v1689;
                      v1857 = v850;
                      ((void (__fastcall *)(LPCWSTR, __int64 *))off_1800DB0E8)(v1375, &v1856);
                    }
                    v1458 = v1834;
                    v1509 = v1838;
                    v1548 = (LPCWSTR)v1835;
                    memset_0(v1823, 0, 0x68uLL);
                    memset_0(v1804, 0, 0x68uLL);
                    lpMemf = 0LL;
                    v1406 = 0;
                    lpModuleNameb = 0;
                    v1880 = 0LL;
                    v1882 = 0LL;
                    v1881 = 0LL;
                    v1883 = 0;
                    v1852 = 0LL;
                    if ( !v1548 )
                      goto LABEL_1068;
                    v856 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1800DB050)(v1375, 7LL);
                    if ( v856 )
                    {
                      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1800DB068)(
                                           v856,
                                           104LL,
                                           v1823) )
                      {
                        lpMemf = v1826;
                        v1406 = v1824;
                        lpModuleNameb = v1825;
                      }
                      v1562 = ((__int64 (__fastcall *)(LPCWSTR))off_1800DB010)(v1375);
                      if ( v1562 )
                      {
                        v857 = v853 - Sizek;
                        DWORD2(v1880) = v1471 - (_DWORD)v1640;
                        v1759 = 0LL;
                        v1881 = 0LL;
                        v1882 = 0LL;
                        v1883 = 0;
                        LODWORD(v1880) = 40;
                        DWORD1(v1880) = v857;
                        HIDWORD(v1880) = 2097153;
                        v858 = ((__int64 (__fastcall *)(SIZE_T, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800DB018)(
                                 v1562,
                                 &v1880,
                                 0LL,
                                 &v1759,
                                 0LL,
                                 0);
                        v1613 = v858;
                        if ( v858 )
                        {
                          v922 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1800DB068)(v858, 104LL, v1804);
                          v923 = 0LL;
                          DWORD2(v1852) = v857;
                          if ( v922 )
                            v923 = v1805;
                          HIDWORD(v1852) = (_DWORD)v1640 - v1471;
                          v1590 = v923;
                          ((void (__fastcall *)(SIZE_T, SIZE_T))off_1800DB078)(v1562, v1613);
                          ((void (__fastcall *)(SIZE_T, __int64))off_1800DB080)(v1562, 1LL);
                          v924 = ((__int64 (__fastcall *)(SIZE_T, unsigned __int16 *))off_1800DB078)(v1562, v1509);
                          v925 = off_1800DB0E8;
                          v1510 = (unsigned __int16 *)v924;
                          v926 = ((__int64 (__fastcall *)(_QWORD))off_1800DB070)(0LL);
                          ((void (__fastcall *)(SIZE_T, __int128 *, __int64))v925)(v1562, &v1852, v926);
                          ((void (__fastcall *)(SIZE_T, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1800DB0D8)(
                            v1562,
                            v1548,
                            0xFFFFFFFFLL,
                            &v1852,
                            v1523,
                            0LL);
                          if ( v1497 == 1 )
                          {
                            if ( v1458 )
                              v1459 = ((__int64 (__fastcall *)(__int64))off_1800DB118)(8LL);
                            else
                              v1459 = 0xFFFFFF;
                          }
                          else
                          {
                            v1459 = -5723992;
                          }
                          v927 = 0;
                          v928 = -Sizek;
                          v929 = 0;
                          v860 = 0;
                          if ( Sizek >= 0 )
                          {
                            v927 = Sizek;
                            v928 = 0;
                          }
                          v930 = -v1471;
                          if ( v1471 >= 0 )
                          {
                            v929 = v1471;
                            v930 = 0;
                          }
                          v931 = DWORD2(v1852) - v928;
                          if ( DWORD2(v1852) - v928 >= v1406 - v927 )
                            v931 = v1406 - v927;
                          LODWORD(v1640) = v931;
                          v932 = HIDWORD(v1852) - v930;
                          if ( HIDWORD(v1852) - v930 >= lpModuleNameb - v929 )
                            v932 = lpModuleNameb - v929;
                          lpModuleNamed = v932;
                          if ( v931 > 0 && v932 > 0 )
                          {
                            v933 = v1406;
                            v934 = v1406 * v929;
                            v1408 = 0;
                            v935 = (const WCHAR *)&v1590[4 * v928 + 4 * (__int64)(DWORD2(v1852) * v930)];
                            v1549 = v935;
                            v936 = &lpMemf[4 * v927 + 4 * (__int64)v934];
                            v1591 = 2LL * SDWORD2(v1852);
                            v1622 = 4 * v933;
                            lpMemg = v936;
                            do
                            {
                              v937 = (unsigned __int8 *)(v935 + 1);
                              v938 = 0;
                              v939 = v936 - (char *)v935;
                              do
                              {
                                if ( (unsigned __int8)((*v937 + *(v937 - 2) + 2 * (unsigned int)*(v937 - 1)) >> 2) != 0xFF )
                                {
                                  v940 = (unsigned __int8)~((*v937 + *(v937 - 2) + 2 * (unsigned int)*(v937 - 1)) >> 2);
                                  v937[v939] -= ~((*v937 + *(v937 - 2) + 2 * (unsigned int)*(v937 - 1)) >> 2)
                                              * (v1459 - v937[v939]);
                                  v941 = v937[v939 - 1];
                                  v942 = (unsigned __int64)(2155905153LL * v940 * (BYTE1(v1459) - v941)) >> 32;
                                  v937[v939 - 1] = v941 + (v942 >> 7 < 0) + (v942 >> 7);
                                  v943 = v937[v939 - 2];
                                  v944 = (unsigned __int64)(2155905153LL * v940 * (BYTE2(v1459) - v943)) >> 32;
                                  v937[v939 - 2] = v943 + (v944 >> 7 < 0) + (v944 >> 7);
                                  v945 = v937[v939 + 1];
                                  v946 = v940 * (255 - v945);
                                  v931 = (int)v1640;
                                  v937[v939 + 1] = v945 + v946 / 255;
                                }
                                v937 += 4;
                                ++v938;
                                v860 = 0;
                              }
                              while ( v938 < v931 );
                              v935 = &v1549[v1591];
                              v936 = &lpMemg[v1622];
                              v1549 = (LPCWSTR)((char *)v1549 + v1591 * 2);
                              lpMemg += v1622;
                              ++v1408;
                            }
                            while ( v1408 < lpModuleNamed );
                            v96 = (int)v1642;
                            v850 = (unsigned int)v1648;
                            v854 = (int)v1641;
                          }
                          ((void (__fastcall *)(SIZE_T))off_1800DB038)(v1613);
                          if ( v1510 )
                            ((void (__fastcall *)(SIZE_T, unsigned __int16 *))off_1800DB078)(v1562, v1510);
                        }
                        else
                        {
                          v859 = GetLastError();
                          v860 = v859;
                          if ( v859 > 0 )
                            v860 = (unsigned __int16)v859 | 0x80070000;
                          if ( v860 >= 0 )
                            v860 = -2147467259;
                        }
                        ((void (__fastcall *)(SIZE_T))off_1800DB030)(v1562);
                        if ( v860 < 0 )
                          goto LABEL_1068;
                        v947 = v1836;
                        lpModuleNamee = v1834;
                        v1511 = v1839;
                        v1550 = (LPCWSTR)v1836;
                        memset_0(v1827, 0, 0x68uLL);
                        memset_0(v1831, 0, 0x68uLL);
                        lpMemh = 0LL;
                        v1409 = 0;
                        v1460 = 0;
                        v1886 = 0LL;
                        v1887 = 0;
                        v1884 = 0LL;
                        v1885 = 0LL;
                        v1859 = 0LL;
                        if ( !v947 )
                          goto LABEL_1068;
                        v847 = v1375;
                        v948 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1800DB050)(v1375, 7LL);
                        if ( !v948 )
                        {
                          GetLastError();
                          goto LABEL_1069;
                        }
                        if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1800DB068)(
                                             v948,
                                             104LL,
                                             v1827) )
                        {
                          lpMemh = v1830;
                          v1409 = v1828;
                          v1460 = v1829;
                        }
                        v1563 = ((__int64 (__fastcall *)(LPCWSTR))off_1800DB010)(v1375);
                        if ( v1563 )
                        {
                          v949 = v854 - (_DWORD)v1639;
                          DWORD2(v1884) = (_DWORD)v1637 - v1628;
                          v1760 = 0LL;
                          v1885 = 0LL;
                          v1886 = 0LL;
                          v1887 = 0;
                          LODWORD(v1884) = 40;
                          DWORD1(v1884) = v949;
                          HIDWORD(v1884) = 2097153;
                          v950 = ((__int64 (__fastcall *)(SIZE_T, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1800DB018)(
                                   v1563,
                                   &v1884,
                                   0LL,
                                   &v1760,
                                   0LL,
                                   0);
                          v1614 = v950;
                          if ( !v950 )
                          {
                            v951 = GetLastError();
                            v952 = v951;
                            if ( v951 > 0 )
                              v952 = (unsigned __int16)v951 | 0x80070000;
                            if ( v952 >= 0 )
                              v952 = -2147467259;
                            v953 = v1563;
                            goto LABEL_1183;
                          }
                          v954 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1800DB068)(v950, 104LL, v1831);
                          v955 = 0LL;
                          DWORD2(v1859) = v949;
                          if ( v954 )
                            v955 = v1832;
                          HIDWORD(v1859) = v1628 - (_DWORD)v1637;
                          v1592 = v955;
                          ((void (__fastcall *)(SIZE_T, SIZE_T))off_1800DB078)(v1563, v1614);
                          ((void (__fastcall *)(SIZE_T, __int64))off_1800DB080)(v1563, 1LL);
                          v956 = ((__int64 (__fastcall *)(SIZE_T, unsigned __int16 *))off_1800DB078)(v1563, v1511);
                          v957 = off_1800DB0E8;
                          v1512 = (unsigned __int16 *)v956;
                          v958 = ((__int64 (__fastcall *)(_QWORD))off_1800DB070)(0LL);
                          v953 = v1563;
                          ((void (__fastcall *)(SIZE_T, __int128 *, __int64))v957)(v1563, &v1859, v958);
                          ((void (__fastcall *)(SIZE_T, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1800DB0D8)(
                            v1563,
                            v1550,
                            0xFFFFFFFFLL,
                            &v1859,
                            v1523,
                            0LL);
                          if ( v1497 == 1 )
                          {
                            if ( !lpModuleNamee )
                            {
                              lpModuleNamef = 0xFFFFFF;
LABEL_1164:
                              v960 = 0;
                              v961 = -(int)v1639;
                              v962 = 0;
                              v952 = 0;
                              if ( (int)v1639 >= 0 )
                              {
                                v960 = (int)v1639;
                                v961 = 0;
                              }
                              v963 = -(int)v1637;
                              if ( (int)v1637 >= 0 )
                              {
                                v962 = (int)v1637;
                                v963 = 0;
                              }
                              v964 = DWORD2(v1859) - v961;
                              if ( DWORD2(v1859) - v961 >= v1409 - v960 )
                                v964 = v1409 - v960;
                              v965 = HIDWORD(v1859) - v963;
                              if ( HIDWORD(v1859) - v963 >= v1460 - v962 )
                                v965 = v1460 - v962;
                              if ( v964 > 0 && v965 > 0 )
                              {
                                v966 = v1409;
                                v967 = v964;
                                v1410 = 0;
                                v968 = (const WCHAR *)&v1592[4 * v961 + 4 * (__int64)(v963 * DWORD2(v1859))];
                                v1551 = v968;
                                v969 = &lpMemh[4 * v960 + 4 * (__int64)(v962 * (int)v966)];
                                v1593 = 2LL * SDWORD2(v1859);
                                v1623 = 4 * v966;
                                lpMemi = v969;
                                do
                                {
                                  v970 = (char)v1638;
                                  v971 = (unsigned __int8 *)(v968 + 1);
                                  v1630 = 0;
                                  v972 = 0;
                                  v973 = v969 - (char *)v968;
                                  do
                                  {
                                    if ( (unsigned __int8)((*v971 + *(v971 - 2) + 2 * (unsigned int)*(v971 - 1)) >> 2) != 0xFF )
                                    {
                                      v974 = (unsigned __int8)~((*v971 + *(v971 - 2) + 2 * (unsigned int)*(v971 - 1)) >> 2);
                                      v971[v973] -= ~((*v971 + *(v971 - 2) + 2 * (unsigned int)*(v971 - 1)) >> 2)
                                                  * (v970 - v971[v973]);
                                      v975 = v971[v973 - 1];
                                      v976 = (unsigned __int64)(2155905153LL * v974 * (BYTE1(lpModuleNamef) - v975)) >> 32;
                                      v971[v973 - 1] = v975 + (v976 >> 7 < 0) + (v976 >> 7);
                                      v977 = v971[v973 - 2];
                                      v978 = (unsigned __int64)(2155905153LL * v974 * (BYTE2(lpModuleNamef) - v977)) >> 32;
                                      v971[v973 - 2] = v977 + (v978 >> 7 < 0) + (v978 >> 7);
                                      v979 = v971[v973 + 1];
                                      v980 = v974 * (255 - v979);
                                      v972 = v1630;
                                      v971[v973 + 1] = v979 + v980 / 255;
                                    }
                                    ++v972;
                                    v971 += 4;
                                    v1630 = v972;
                                    v952 = 0;
                                  }
                                  while ( v972 < v967 );
                                  v968 = &v1551[v1593];
                                  v969 = &lpMemi[v1623];
                                  v1551 = (LPCWSTR)((char *)v1551 + v1593 * 2);
                                  lpMemi += v1623;
                                  ++v1410;
                                }
                                while ( v1410 < v965 );
                                v850 = (unsigned int)v1648;
                                v953 = v1563;
                              }
                              ((void (__fastcall *)(SIZE_T))off_1800DB038)(v1614);
                              if ( v1512 )
                                ((void (__fastcall *)(SIZE_T, unsigned __int16 *))off_1800DB078)(v953, v1512);
LABEL_1183:
                              ((void (__fastcall *)(SIZE_T))off_1800DB030)(v953);
                              if ( v952 >= 0 )
                              {
                                v847 = v1375;
                                v846 = v1393;
                                if ( v1497 == 1 )
                                  ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, LPCWSTR, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                                    v1393,
                                    (unsigned int)v1842,
                                    DWORD1(v1842),
                                    v850,
                                    (_DWORD)v1689,
                                    v1375,
                                    0,
                                    0,
                                    13369376);
                                else
                                  ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, LPCWSTR, _DWORD, _DWORD, unsigned int, _DWORD, int))off_1800DB040)(
                                    v1393,
                                    (unsigned int)v1853,
                                    DWORD1(v1853),
                                    v850,
                                    (_DWORD)v1689,
                                    v1375,
                                    0,
                                    0,
                                    v850,
                                    (_DWORD)v1689,
                                    v1452);
                                goto LABEL_1187;
                              }
                              goto LABEL_1068;
                            }
                            v959 = ((__int64 (__fastcall *)(__int64))off_1800DB118)(8LL);
                          }
                          else
                          {
                            v959 = -5723992;
                          }
                          lpModuleNamef = v959;
                          LODWORD(v1638) = v959;
                          goto LABEL_1164;
                        }
                      }
                    }
                    GetLastError();
LABEL_1068:
                    v847 = v1375;
LABEL_1069:
                    v861 = v1582;
                    goto LABEL_1070;
                  }
                  v644 = 0LL;
                  v1749 = 0LL;
                  v1750 = 0LL;
                  v643 = 0;
                  v1752 = 0LL;
                  v1753 = 0LL;
                  v1754 = 0LL;
                  v1445 = 0;
                  v1688 = 0;
                  if ( (unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1800DB0A0)(
                                       8LL,
                                       &v1647,
                                       0LL,
                                       &v1688) )
                  {
                    lpMemb = MemoryAlloc(2LL * v1688);
                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1753);
                    if ( !lpMemb )
                    {
                      v1753 = 0LL;
                      v643 = -2147024882;
                      goto LABEL_741;
                    }
                    v1753 = lpMemb;
                    v646 = MemoryAlloc(4LL * (v1647 + 1));
                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1754);
                    if ( !v646 )
                    {
                      v643 = -2147024882;
LABEL_740:
                      v1754 = 0LL;
                      goto LABEL_741;
                    }
                    v1754 = v646;
                    if ( (unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _WORD *, unsigned int *))off_1800DB0A0)(
                                         8LL,
                                         &v1647,
                                         lpMemb,
                                         &v1688) )
                    {
                      v644 = v646;
                      if ( v1647 )
                      {
                        v647 = (__int64)lpMemb;
                        for ( m = 0; m < v1647; ++m )
                        {
                          *v646 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800DB0B0)(v647, 0LL);
                          v649 = -1LL;
                          do
                            ++v649;
                          while ( lpMemb[v649] );
                          ++v646;
                          v647 = (__int64)&lpMemb[v649 + 1];
                          lpMemb = (_WORD *)v647;
                        }
                        v643 = 0;
                      }
                      *v646 = 1033;
                      v1749 = v644;
                      v1445 = v1647 + 1;
                      goto LABEL_740;
                    }
                  }
                  v645 = GetLastError();
                  v643 = v645;
                  if ( v645 > 0 )
                    v643 = (unsigned __int16)v645 | 0x80070000;
                  if ( v643 >= 0 )
                    v643 = -2147467259;
LABEL_741:
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1754);
                  SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1753);
                  if ( v643 < 0 )
                  {
                    v660 = 0LL;
                    v662 = 0LL;
                  }
                  else
                  {
                    v650 = 0;
                    v651 = 0;
                    Sized = 0;
                    if ( v1445 )
                    {
                      v652 = 0LL;
                      while ( 2 )
                      {
                        v653 = 0;
                        v654 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
                        do
                        {
                          if ( v644[v652] == *v654 )
                          {
                            v650 = v653;
                            Sized = v653;
                            goto LABEL_750;
                          }
                          ++v653;
                          ++v654;
                        }
                        while ( v653 < 0x26 );
                        ++v651;
                        ++v652;
                        if ( v651 < v1445 )
                          continue;
                        break;
                      }
                    }
LABEL_750:
                    v655 = v650;
                    v1446 = 0;
                    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))off_1800DB0A8)(
                                         `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v650],
                                         v1909,
                                         85LL)
                      && (int)((__int64 (__fastcall *)(_BYTE *, __int64, char *))off_1800DB090)(v1909, 88LL, v1860) > 0 )
                    {
                      v1446 = (v1861 >> 27) & 1;
                    }
                    v656 = L"Segoe UI Light";
                    v657 = 19LL;
                    v658 = (const wchar_t **)v1907;
                    do
                    {
                      *v658 = v656;
                      v659 = -1LL;
                      do
                        ++v659;
                      while ( v656[v659] );
                      ++v658;
                      v656 += v659 + 1;
                      --v657;
                    }
                    while ( v657 );
                    v1367 = (LPCWSTR)v1907[`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping[3 * v655]];
                    v1503 = (unsigned __int16 *)v1907[`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping[3 * v655 + 1]];
                    v660 = (char *)v1907[`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping[3 * v655 + 2]];
                    v1610 = (SIZE_T)v660;
                    v1587 = v660;
                    v661 = (char *)MemoryAlloc(0x1C90uLL);
                    v1620 = v661;
                    if ( v661 )
                    {
                      LODWORD(v1639) = -1;
                      v663 = v661 + 7;
                      v664 = 0;
                      v665 = (unsigned __int8 *)&unk_1800C9E92;
                      v666 = 0;
                      v667 = 0;
                      v668 = -1;
                      v669 = 914LL;
                      do
                      {
                        v670 = *(v665 - 1) | (*(v665 - 2) << 8);
                        v671 = v665[2] << 8;
                        v672 = *v665;
                        v665 += 8;
                        v673 = *(v665 - 7) | ((v672 | (v670 << 8)) << 8);
                        v674 = v673 ^ v666;
                        v675 = *(v665 - 3) | ((*(v665 - 4) | ((*(v665 - 5) | v671) << 8)) << 8);
                        v676 = v674 ^ v675 ^ v664 ^ 0xAC987321;
                        v677 = (__ROL4__(v676, 10) + 4991 * __ROL4__(v676 + 1419157410, 5)) ^ v674;
                        v678 = (43881 * __ROR4__(v677 + 133239679, 9) - __ROL4__(v677, 2)) ^ v676;
                        v679 = (24670 * v678 - (v678 >> 13) - 123127970) ^ v677;
                        v680 = (2033 * __ROL4__(v679 ^ 0xAB69, 6) - __ROL4__(v679, 2)) ^ v678;
                        v681 = (133239679 - (v680 ^ 0xAB69605E)) ^ v679;
                        v682 = (43881 * (v681 ^ 0x137F)) ^ __ROR4__(v681, 6) ^ v680;
                        v683 = (__ROL4__(v682, 2) + 24670 * __ROR4__(v682 + 133239679, 15)) ^ v681;
                        v684 = (2033 * __ROR4__(v683 + 1419157410, 14) - __ROL4__(v683, 8)) ^ v682;
                        v685 = __ROR4__(v684, 10) ^ (4991 * __ROR4__(v684 ^ 0xAB69605E, 12)) ^ v683;
                        v686 = (v685 >> 10) ^ (43881 * (v685 ^ 0x7F1)) ^ v684;
                        v687 = (2033 * (__ROR4__(~v686, 5) + 24670)) ^ v685;
                        v688 = v686 ^ (v687 - 2033) ^ 0xAB69605E;
                        v689 = ((v688 >> 2) + 4991 * __ROL4__(v686 ^ (v687 - 2033) ^ 0xAB6967AF, 2)) ^ v687;
                        v690 = (__ROL4__(v689, 7) + 43881 * __ROR4__(v689 - 133239679, 6)) ^ v688;
                        v691 = (24670 * (v690 ^ 0x137F) + __ROR4__(v690, 9)) ^ v689;
                        v692 = (__ROL4__(v691, 7) + 2033 * __ROL4__(v691 ^ 0xAB69, 5)) ^ v690;
                        v693 = v692 ^ v691 ^ 0xAC987321;
                        v694 = (4991 * __ROR4__(v693, 3) - 219010071) ^ v692;
                        v695 = (24670 * __ROR4__(v694 - 133239679, 1) - __ROR4__(v694, 6)) ^ v693;
                        v696 = (__ROL4__(v695, 14) + 2033 * __ROL4__(v695 - 1419157410, 3)) ^ v694;
                        v697 = (4991 * __ROL4__(v696 - 1419157410, 15) - __ROR4__(v696, 14)) ^ v695;
                        v698 = (v697 >> 3) ^ (43881 * (v697 ^ 0x605E)) ^ v696;
                        v699 = 24670 * __ROL4__(v698 ^ 0x7F1137F, 4);
                        v700 = v698;
                        v701 = v668 ^ v698;
                        v668 = v675;
                        v702 = v667 ^ __ROL4__(v700, 2) ^ v699;
                        v667 = v673;
                        v703 = v702 ^ v697;
                        *(v663 - 4) = v703;
                        *v663 = v701;
                        v663 += 8;
                        v704 = __ROR4__(v703, 8);
                        *(v663 - 13) = v704;
                        v705 = __ROR4__(v701, 8);
                        *(v663 - 9) = v705;
                        v706 = __ROR4__(v704, 8);
                        *(v663 - 14) = v706;
                        v707 = __ROR4__(v705, 8);
                        *(v663 - 10) = v707;
                        v708 = __ROR4__(v706, 8);
                        v709 = __ROR4__(v707, 8);
                        *(v663 - 15) = v708;
                        *(v663 - 11) = v709;
                        v664 = __ROR4__(v709, 8);
                        v666 = __ROR4__(v708, 8);
                        --v669;
                      }
                      while ( v669 );
                      v710 = v1620;
                      LODWORD(v2) = 0;
                      v711 = 0LL;
                      v712 = 0LL;
                      do
                      {
                        v713 = _mm_loadu_si128((const __m128i *)&v1620[v711]);
                        v711 += 16LL;
                        v714 = _mm_xor_si128(v713, v712);
                        v712 = v714;
                      }
                      while ( v711 < 0x1C90 );
                      v715 = _mm_xor_si128(v714, _mm_srli_si128(v714, 8));
                      v716 = _mm_xor_si128(v715, _mm_srli_si128(v715, 4));
                      v717 = _mm_xor_si128(v716, _mm_srli_si128(v716, 2));
                      if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v717, _mm_srli_si128(v717, 1))) == 127LL )
                      {
                        v1750 = v1620;
                        v1751 = 7312LL;
                        v643 = 0;
                        if ( v1620 )
                          v1751 = 7312LL;
                        else
                          v710 = 0LL;
                        v718 = v1901;
                        v719 = 6LL;
                        do
                        {
                          for ( n = 0; n < 0x26; ++n )
                          {
                            if ( Sized == n )
                              *v718 = v710;
                            v721 = -1LL;
                            do
                              ++v721;
                            while ( v710[v721] );
                            v710 += v721 + 1;
                          }
                          ++v718;
                          --v719;
                        }
                        while ( v719 );
                        v722 = MemoryAlloc(0x18uLL);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1752);
                        if ( v722 )
                        {
                          v1752 = v722;
                          Sizee = 0;
                          *(_OWORD *)v722 = 0LL;
                          v722[2] = 0LL;
                          v723 = v1908;
                          v724 = v722;
                          v725 = 0;
                          v1621 = v722;
                          v1405 = v1908;
                          v1457 = (SIZE_T)v722;
                          while ( 2 )
                          {
                            v726 = *v723;
                            v727 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
                            v728 = 0LL;
                            while ( v726 != *v727 )
                            {
                              v728 = (unsigned int)(v728 + 1);
                              ++v727;
                              if ( (unsigned int)v728 >= 6 )
                                goto LABEL_793;
                            }
                            v729 = v1901[v728];
                            v730 = -1LL;
                            do
                              ++v730;
                            while ( *(_BYTE *)(v729 + v730) );
                            v731 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1800DB0C0)(
                                     65001LL,
                                     0LL,
                                     v729,
                                     (unsigned int)(v730 + 1),
                                     0LL,
                                     0);
                            v1467 = v731;
                            if ( !v731 )
                            {
                              v735 = GetLastError();
                              v643 = v735;
                              if ( v735 > 0 )
                                v643 = (unsigned __int16)v735 | 0x80070000;
                              if ( v643 >= 0 )
                                v643 = -2147467259;
                              goto LABEL_803;
                            }
                            v732 = MemoryAlloc(2LL * v731);
                            *v1621 = v732;
                            if ( !v732 )
                              goto LABEL_779;
                            v733 = -1LL;
                            do
                              ++v733;
                            while ( *(_BYTE *)(v729 + v733) );
                            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1800DB0C0)(
                                                  65001LL,
                                                  0LL,
                                                  v729,
                                                  (unsigned int)(v733 + 1),
                                                  v732,
                                                  v1467) )
                            {
                              v734 = GetLastError();
                              v643 = v734;
                              if ( v734 > 0 )
                                v643 = (unsigned __int16)v734 | 0x80070000;
                              if ( v643 >= 0 )
                                v643 = -2147467259;
                              goto LABEL_803;
                            }
                            v724 = v1621;
                            v725 = Sizee;
LABEL_793:
                            ++v725;
                            v723 = v1405 + 1;
                            Sizee = v725;
                            ++v724;
                            ++v1405;
                            v1621 = v724;
                            if ( v725 < 3 )
                              continue;
                            break;
                          }
                          v722 = 0LL;
                          v1747 = (void **)v1457;
                          v1833 = v1446;
                          v1752 = 0LL;
                        }
                        else
                        {
                          v722 = 0LL;
                          v1752 = 0LL;
LABEL_779:
                          v643 = -2147024882;
                        }
LABEL_803:
                        v736 = v1751;
                        if ( v722 )
                        {
                          v737 = 3LL;
                          v1610 = (SIZE_T)v1587;
                          do
                          {
                            v738 = (_WORD *)*v722;
                            if ( *v722 )
                            {
                              v739 = -1LL;
                              do
                                ++v739;
                              while ( v738[v739] );
                              memset(v738, 0, 2 * v739 + 2);
                              MemoryFree((void *)*v722);
                              v737 = lpModuleNamea;
                            }
                            ++v722;
                            lpModuleNamea = --v737;
                          }
                          while ( v737 );
                          v736 = v1751;
                        }
                        v660 = (char *)v1610;
                        v662 = v1503;
LABEL_814:
                        v1504 = v662;
                        if ( v1750 )
                          memset(v1750, 0, v736);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1752);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1750);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1749);
                        if ( v643 < 0 )
                          goto LABEL_933;
                        if ( v1747 )
                          v740 = v1747;
                        else
                          v740 = 0LL;
                        v1835 = *v740;
                        if ( v1747 )
                          v741 = v1747;
                        else
                          v741 = 0LL;
                        v1836 = v741[1];
                        if ( v1747 )
                          v742 = v1747;
                        else
                          v742 = 0LL;
                        v743 = v742[2];
                        v1793 = 0LL;
                        LODWORD(v1793) = 16;
                        v1837 = v743;
                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1800DB168)(
                                              66LL,
                                              0LL,
                                              &v1793,
                                              0LL) )
                        {
                          v744 = GetLastError();
                          v643 = v744;
                          if ( v744 > 0 )
                            v643 = (unsigned __int16)v744 | 0x80070000;
                          v1834 = 0;
                          if ( v643 >= 0 )
                            v643 = -2147467259;
                          goto LABEL_933;
                        }
                        v1834 = BYTE4(v1793) & 1;
                        v745 = 42;
                        v1447 = 42;
                        if ( v1497 != 1 )
                        {
                          if ( v1497 == 2 )
                          {
                            v1536 = 15;
                            v1522 = 11;
                          }
                          else if ( v1497 == 3 )
                          {
                            v745 = 225;
                            v1522 = 225;
LABEL_838:
                            v1536 = v745;
                          }
                          v746 = 96;
                          Sizef = 96;
                          memset_0(v1897, 0, 0xDCuLL);
                          v1898 = 220;
                          if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *))off_1800DB0E0)(
                                               0LL,
                                               0xFFFFFFFFLL,
                                               v1897) )
                          {
                            v746 = v1899;
                            *(_QWORD *)&v1792 = 0LL;
                            *((_QWORD *)&v1792 + 1) = v1900;
                            if ( v1899 < 0x60u )
                              v746 = 96;
                            Sizef = v746;
                          }
                          v747 = v660;
                          if ( v1497 == 1 )
                            v747 = (char *)v1367;
                          lpMemc = v747;
                          memset_0(v1888, 0, 0x5CuLL);
                          v643 = 0;
                          v1557 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0F8)(0LL, 0LL, 1027LL);
                          if ( !v1557 )
                            goto LABEL_898;
                          v748 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0B8)(v1536, v746, 72LL);
                          v1888[4] = 400;
                          v1888[0] = -v748;
                          v1889 = 5;
                          StringCchCopyW((char *)v1890, 32LL, lpMemc);
                          v749 = ((__int64 (__fastcall *)(_DWORD *))off_1800DB020)(v1888);
                          if ( v749 )
                          {
                            v1838 = (WCHAR *)v749;
                          }
                          else
                          {
                            v750 = GetLastError();
                            v643 = v750;
                            if ( v750 > 0 )
                              v643 = (unsigned __int16)v750 | 0x80070000;
                            if ( v643 >= 0 )
                              v643 = -2147467259;
                          }
                          ((void (__fastcall *)(_QWORD, SIZE_T))off_1800DB160)(0LL, v1557);
                          if ( v643 < 0 )
                            goto LABEL_933;
                          if ( v1497 == 1 )
                            v660 = (char *)v1367;
                          memset_0(v1891, 0, 0x5CuLL);
                          v643 = 0;
                          v1368 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0F8)(
                                             0LL,
                                             0LL,
                                             1027LL);
                          if ( !v1368 )
                            goto LABEL_898;
                          v751 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0B8)(v1522, v746, 72LL);
                          v1891[4] = 400;
                          v1892 = 5;
                          v1891[0] = -v751;
                          StringCchCopyW((char *)v1893, 32LL, v660);
                          v752 = ((__int64 (__fastcall *)(_DWORD *))off_1800DB020)(v1891);
                          if ( v752 )
                          {
                            v1839 = (WCHAR *)v752;
                          }
                          else
                          {
                            v753 = GetLastError();
                            v643 = v753;
                            if ( v753 > 0 )
                              v643 = (unsigned __int16)v753 | 0x80070000;
                            if ( v643 >= 0 )
                              v643 = -2147467259;
                          }
                          ((void (__fastcall *)(_QWORD, LPCWSTR))off_1800DB160)(0LL, v1368);
                          if ( v643 < 0 )
                            goto LABEL_933;
                          v754 = 0;
                          v755 = 0;
                          if ( v1497 != 1 )
                          {
                            if ( v1497 == 2 )
                            {
                              v755 = 0;
                              v754 = SDWORD2(v1792) / 4;
LABEL_867:
                              *((_QWORD *)&v1853 + 1) = __PAIR64__(v755, v754);
                              if ( v1497 == 1 )
                              {
                                v1522 = 150;
                                v1467 = 32;
                              }
                              else
                              {
                                if ( (unsigned int)(v1497 - 2) >= 2 )
                                {
                                  v1447 = v1647;
                                  v756 = v1536;
LABEL_874:
                                  v643 = 0;
                                  v757 = v1835;
                                  v758 = v754 - v1522 - v756;
                                  DWORD2(v1843) = v758;
                                  DWORD2(v1842) = v758;
                                  v1369 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, WCHAR *))off_1800DB078)(
                                                     v1545,
                                                     v1838);
                                  if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1800DB0D8)(
                                                        v1545,
                                                        v757,
                                                        0xFFFFFFFFLL,
                                                        &v1842,
                                                        3152,
                                                        0LL) )
                                    v643 = -2147467259;
                                  if ( v1369 )
                                    ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1800DB078)(v1545, v1369);
                                  if ( v643 < 0 )
                                    goto LABEL_933;
                                  v759 = v1836;
                                  v643 = 0;
                                  v1370 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, WCHAR *))off_1800DB078)(
                                                     v1545,
                                                     v1839);
                                  if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *, int, _QWORD))off_1800DB0D8)(
                                                        v1545,
                                                        v759,
                                                        0xFFFFFFFFLL,
                                                        &v1843,
                                                        3152,
                                                        0LL) )
                                    v643 = -2147467259;
                                  if ( v1370 )
                                    ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_1800DB078)(v1545, v1370);
                                  if ( v643 < 0 )
                                    goto LABEL_933;
                                  if ( (unsigned int)(v1497 - 2) <= 1 )
                                  {
                                    v758 = DWORD2(v1843);
                                    if ( SDWORD2(v1842) > SDWORD2(v1843) )
                                      v758 = DWORD2(v1842);
                                  }
                                  if ( v1833 )
                                  {
                                    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DB150)(
                                      &v1842,
                                      v758 + v1536 - DWORD2(v1842),
                                      v1447);
                                    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DB150)(
                                      &v1843,
                                      v1536 - DWORD2(v1843) + v758,
                                      (unsigned int)(HIDWORD(v1842) + v1467));
                                  }
                                  else
                                  {
                                    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DB150)(
                                      &v1842,
                                      v1522,
                                      v1447);
                                    ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1800DB150)(
                                      &v1843,
                                      v1522,
                                      (unsigned int)(HIDWORD(v1842) + v1467));
                                  }
                                  if ( (unsigned int)(v1497 - 2) <= 1 )
                                  {
                                    *((_QWORD *)&v1853 + 1) = __PAIR64__(HIDWORD(v1843), v758);
                                    v1841 = -5723992;
                                    goto LABEL_920;
                                  }
                                  if ( v1497 != 1 )
                                    goto LABEL_920;
                                  v1841 = 0xFFFFFF;
                                  memset_0(v1894, 0, 0x5CuLL);
                                  v643 = 0;
                                  v760 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0F8)(
                                           0LL,
                                           0LL,
                                           1027LL);
                                  if ( v760 )
                                  {
                                    v761 = ((__int64 (__fastcall *)(__int64, _QWORD))off_1800DB0B8)(11LL, Sizef);
                                    v1894[4] = 400;
                                    v1894[0] = -v761;
                                    v1895 = 5;
                                    StringCchCopyW((char *)v1896, 32LL, (char *)v1504);
                                    v762 = ((__int64 (__fastcall *)(_DWORD *))off_1800DB020)(v1894);
                                    if ( v762 )
                                    {
                                      v1840 = v762;
                                    }
                                    else
                                    {
                                      v763 = GetLastError();
                                      v643 = v763;
                                      if ( v763 > 0 )
                                        v643 = (unsigned __int16)v763 | 0x80070000;
                                      if ( v643 >= 0 )
                                        v643 = -2147467259;
                                    }
                                    ((void (__fastcall *)(_QWORD, __int64))off_1800DB160)(0LL, v760);
                                    if ( v643 < 0 )
                                      goto LABEL_933;
                                    v765 = v1837;
                                    v643 = 0;
                                    v1846 = v758;
                                    v766 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_1800DB078)(v1545, v1840);
                                    if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *, int, _QWORD))off_1800DB0D8)(
                                                          v1545,
                                                          v765,
                                                          0xFFFFFFFFLL,
                                                          &v1844,
                                                          1120,
                                                          0LL) )
                                      v643 = -2147467259;
                                    if ( v766 )
                                      ((void (__fastcall *)(LPCWSTR, __int64))off_1800DB078)(v1545, v766);
                                    if ( v643 < 0 )
                                      goto LABEL_933;
                                    v767 = v1846 + 24;
                                    if ( (int)(v1846 + 24) < 90 )
                                      v767 = 90;
                                    v1846 = v767;
                                    v1847 = 32;
                                    v1844 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0B8)(
                                              v1844,
                                              Sizef,
                                              96LL);
                                    v1845 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0B8)(
                                              v1845,
                                              Sizef,
                                              96LL);
                                    v1846 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0B8)(
                                              v1846,
                                              Sizef,
                                              96LL);
                                    v1847 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1800DB0B8)(
                                              v1847,
                                              Sizef,
                                              96LL);
                                    if ( v1833 )
                                    {
                                      v768 = (unsigned int)v1842;
                                      if ( (int)v1842 >= (int)v1843 )
                                        v768 = (unsigned int)v1843;
                                    }
                                    else
                                    {
                                      v769 = DWORD2(v1842);
                                      if ( SDWORD2(v1842) <= SDWORD2(v1843) )
                                        v769 = DWORD2(v1843);
                                      v768 = v1844 + v769 - v1846;
                                    }
                                    ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_1800DB150)(
                                      &v1844,
                                      v768,
                                      (unsigned int)(HIDWORD(v1843) + 36));
LABEL_920:
                                    v770 = v1833;
                                    v771 = HIDWORD(v1853);
                                    v772 = DWORD2(v1853);
                                    switch ( v1497 )
                                    {
                                      case 1:
                                        *(_QWORD *)&v1853 = 0LL;
                                        goto LABEL_932;
                                      case 2:
                                        v1865 = 0LL;
                                        v1867 = 0LL;
                                        v1866 = 0LL;
                                        v776 = ((__int64 (__fastcall *)(_QWORD))off_1800DB148)(0LL);
                                        LODWORD(v1865) = 40;
                                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1800DB108)(
                                                              v776,
                                                              &v1865) )
                                        {
LABEL_932:
                                          v643 = 0;
LABEL_933:
                                          ((void (__fastcall *)(_QWORD, LPCWSTR))off_1800DB160)(0LL, v1545);
                                          goto LABEL_934;
                                        }
                                        ((void (__fastcall *)(_QWORD, char *))off_1800DB140)(0LL, (char *)&v1866 + 4);
                                        ((void (__fastcall *)(_QWORD, char *))off_1800DB140)(0LL, (char *)&v1866 + 12);
                                        if ( v770 )
                                          v774 = DWORD1(v1866) + 5 * HIDWORD(v1866) / 100;
                                        else
                                          v774 = 95 * (HIDWORD(v1866) - v772) / 100;
                                        v775 = 95 * (v1867 - v771);
                                        break;
                                      case 3:
                                        v1862 = 0LL;
                                        v1864 = 0LL;
                                        v1863 = 0LL;
                                        v773 = ((__int64 (__fastcall *)(_QWORD))off_1800DB148)(0LL);
                                        LODWORD(v1862) = 40;
                                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1800DB108)(
                                                              v773,
                                                              &v1862) )
                                          goto LABEL_932;
                                        ((void (__fastcall *)(_QWORD, char *))off_1800DB140)(0LL, (char *)&v1863 + 4);
                                        ((void (__fastcall *)(_QWORD, char *))off_1800DB140)(0LL, (char *)&v1863 + 12);
                                        v774 = 50 * (HIDWORD(v1863) - v772) / 100;
                                        v775 = 50 * (v1864 - v771);
                                        break;
                                      default:
                                        goto LABEL_932;
                                    }
                                    LODWORD(v1853) = v774;
                                    DWORD1(v1853) = v775 / 100;
                                    goto LABEL_932;
                                  }
LABEL_898:
                                  v764 = GetLastError();
                                  v643 = v764;
                                  if ( v764 > 0 )
                                    v643 = (unsigned __int16)v764 | 0x80070000;
                                  if ( v643 >= 0 )
                                    v643 = -2147467259;
                                  goto LABEL_933;
                                }
                                v1522 = 0;
                                v1447 = 0;
                                v1467 = 0;
                              }
                              v756 = 0;
                              v1536 = 0;
                              goto LABEL_874;
                            }
                            if ( v1497 != 3 )
                              goto LABEL_867;
                          }
                          v754 = DWORD2(v1792);
                          v755 = HIDWORD(v1792);
                          goto LABEL_867;
                        }
                        v1522 = 11;
                        goto LABEL_838;
                      }
                      v643 = -1073425151;
                      MemoryFree(v1620);
                      v660 = (char *)v1610;
                    }
                    else
                    {
                      v643 = -2147024882;
                    }
                    v662 = v1503;
                  }
                  v736 = 0LL;
                  goto LABEL_814;
                }
                v575 = g_WarbirdSecureFunctionsRefCount;
LABEL_717:
                g_WarbirdSecureFunctionsRefCount = v575 + 1;
                goto LABEL_718;
              }
              v508 = g_WarbirdSecureFunctionsRefCount;
LABEL_672:
              g_WarbirdSecureFunctionsRefCount = v508 + 1;
              goto LABEL_673;
            }
            HIDWORD(v1780) = dwBytes;
            v114 = dwBytes;
            v115 = GetProcessHeap();
            v116 = HeapAlloc(v115, 8u, v114);
            if ( !v116 )
            {
              v96 = -1073741801;
LABEL_192:
              LODWORD(v1642) = v96;
              goto LABEL_193;
            }
            Src = v116;
            LODWORD(v1780) = 0;
            pcchLength[1] = (size_t)v116;
            v1637 = v1689;
            v1400 = (size_t)v98;
            LODWORD(v1639) = 8;
            v1453 = (SIZE_T)v97;
            Size = 160;
            LODWORD(v1642) = RtlULongLongAdd(v116, 4LL, &v1775);
            v96 = (int)v1642;
            if ( (int)v1642 < 0 )
            {
              v94 = v1467;
              goto LABEL_613;
            }
            if ( v117 + 2 > (_DWORD *)((char *)Src + HIDWORD(v1780)) )
              goto LABEL_191;
            v118 = v1775;
            *v117 = 4;
            *v118 = 0;
            v119 = v1780 + 1;
            LODWORD(v1780) = v1780 + 1;
            v120 = 160;
            v121 = (int)v1639;
            if ( Src )
            {
              v126 = (unsigned int *)Src;
              v1641 = Src;
              v1719 = (unsigned int *)Src;
              v1435 = 0;
              if ( v119 )
              {
                while ( 1 )
                {
                  Size = v120;
                  LODWORD(v1642) = RtlUIntAdd(4LL, *v126, &v1662);
                  v96 = (int)v1642;
                  if ( (int)v1642 < 0 )
                    goto LABEL_139;
                  LODWORD(v1642) = RtlULongLongAdd(v1641, v1662, &v1719);
                  v96 = (int)v1642;
                  if ( (int)v1642 < 0 )
                    goto LABEL_139;
                  if ( ++v1435 >= v128 )
                    break;
                  v126 = v1719;
                  v120 = Size;
                  v1641 = v1719;
                }
                v1400 = (size_t)v98;
                v126 = v1719;
                v1641 = v1719;
                LODWORD(v1639) = v121;
                v1453 = (SIZE_T)v97;
                v1637 = v127;
              }
              LODWORD(v1642) = RtlULongLongAdd(v126, 4LL, &v1784);
              v96 = (int)v1642;
              if ( (int)v1642 >= 0 )
              {
                if ( (char *)v1641 + Size + 4 > (char *)Src + HIDWORD(v1780) )
                {
                  v96 = -1073741789;
LABEL_138:
                  LODWORD(v1642) = v96;
LABEL_139:
                  v94 = v122;
                  goto LABEL_613;
                }
                *(_DWORD *)v1641 = Size;
                memcpy_0(v1784, v97, Size);
                v125 = v1467;
                v124 = v1780 + 1;
                LODWORD(v1780) = v1780 + 1;
LABEL_155:
                if ( v98 )
                {
                  if ( !(_DWORD)v1639 )
                    goto LABEL_157;
                }
                else if ( (_DWORD)v1639 )
                {
LABEL_157:
                  v96 = -1073741811;
LABEL_158:
                  LODWORD(v1642) = v96;
LABEL_609:
                  v94 = v125;
                  goto LABEL_613;
                }
                if ( Src )
                {
                  v135 = (unsigned int *)Src;
                  v1641 = Src;
                  v1720 = (unsigned int *)Src;
                  v1436 = 0;
                  if ( v124 )
                  {
                    v136 = v1637;
                    while ( 1 )
                    {
                      LODWORD(v1642) = RtlUIntAdd(4LL, *v135, &v1664);
                      v96 = (int)v1642;
                      if ( (int)v1642 < 0 )
                        goto LABEL_609;
                      LODWORD(v1642) = RtlULongLongAdd(v1641, v1664, &v1720);
                      v96 = (int)v1642;
                      if ( (int)v1642 < 0 )
                        goto LABEL_609;
                      if ( ++v1436 >= v137 )
                        break;
                      v135 = v1720;
                      v1641 = v1720;
                    }
                    v1453 = (SIZE_T)v97;
                    v135 = v1720;
                    v1637 = v136;
                    v1641 = v1720;
                    v1400 = (size_t)v98;
                  }
                  LODWORD(v1642) = RtlULongLongAdd(v135, 4LL, &v1785);
                  v96 = (int)v1642;
                  if ( (int)v1642 < 0 )
                  {
LABEL_163:
                    v94 = v125;
                    if ( v96 < 0 )
                      goto LABEL_613;
                    goto LABEL_164;
                  }
                  if ( (char *)v1641 + v138 + 4 > (char *)Src + HIDWORD(v1780) )
                    goto LABEL_610;
                  *(_DWORD *)v1641 = v138;
                  if ( v98 )
                    memcpy_0(v1785, v98, v138);
                  v130 = v1780;
                }
                else
                {
                  LODWORD(v1642) = RtlUIntAdd(4LL, (unsigned int)v1639, &v1663);
                  v96 = (int)v1642;
                  if ( (int)v1642 < 0 )
                    goto LABEL_609;
                  v129 = RtlUIntAdd(HIDWORD(v1780), v1663, (char *)&v1780 + 4);
                  v130 = v1780;
                  v96 = v129;
                  LODWORD(v1642) = v129;
                  if ( v129 < 0 )
                    goto LABEL_163;
                }
                LODWORD(v1780) = ++v130;
LABEL_164:
                if ( !Src )
                {
                  LODWORD(v1642) = RtlUIntAdd(4LL, 8LL, &v1665);
                  v96 = (int)v1642;
                  if ( (int)v1642 < 0 )
                  {
LABEL_193:
                    v94 = v1467;
                    goto LABEL_613;
                  }
                  v96 = RtlUIntAdd(HIDWORD(v1780), v1665, (char *)&v1780 + 4);
                  LODWORD(v1642) = v96;
                  if ( v96 >= 0 )
                  {
                    v134 = v133 + v1780;
LABEL_182:
                    LODWORD(v1780) = v134;
                    goto LABEL_195;
                  }
LABEL_194:
                  v94 = v1467;
                  if ( v96 < 0 )
                    goto LABEL_613;
LABEL_195:
                  if ( StringCchLengthW(v132, v131, &v1722) < 0 )
                  {
                    v96 = -1073741762;
                    goto LABEL_138;
                  }
                  LODWORD(v1642) = RtlULongLongAdd(v1722, 1LL, &v1722);
                  v96 = (int)v1642;
                  if ( (int)v1642 >= 0 )
                  {
                    if ( 2 * (_DWORD)v1722 )
                    {
                      if ( !Src )
                      {
                        LODWORD(v1642) = RtlUIntAdd(4LL, (unsigned int)(2 * v1722), &v1667);
                        v96 = (int)v1642;
                        if ( (int)v1642 >= 0 )
                        {
                          v146 = RtlUIntAdd(HIDWORD(v1780), v1667, (char *)&v1780 + 4);
                          v145 = v1780;
                          v96 = v146;
                          LODWORD(v1642) = v146;
                          if ( v146 >= 0 )
                          {
                            v145 = v147 + v1780;
                            LODWORD(v1642) = 0;
                            LODWORD(v1780) = v147 + v1780;
                            v96 = 0;
                          }
                        }
                        goto LABEL_213;
                      }
                      v148 = Src;
                      v1723 = Src;
                      if ( v145 )
                      {
                        do
                        {
                          LODWORD(v1642) = RtlUIntAdd(4LL, (unsigned int)*v148, &v1668);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_213;
                          LODWORD(v1642) = RtlULongLongAdd(v148, v1668, &v1723);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_213;
                          v148 = v1723;
                        }
                        while ( v149 + 1 < v145 );
                      }
                      LODWORD(v1642) = RtlULongLongAdd(v148, 4LL, &v1787);
                      v96 = (int)v1642;
                      if ( (int)v1642 < 0 )
                        goto LABEL_213;
                      if ( (char *)v148 + v150 + 4 <= (char *)Src + HIDWORD(v1780) )
                      {
                        v151 = v1787;
                        *v148 = v150;
                        memcpy_0(v151, L"DataProtectionUnderLock-WindowsCore-Enabled", (unsigned int)v150);
                        v145 = v1780 + 1;
                        LODWORD(v1780) = v1780 + 1;
                        goto LABEL_213;
                      }
                      v96 = -1073741789;
                    }
                    else
                    {
                      v96 = -1073741811;
                    }
                    LODWORD(v1642) = v96;
                  }
LABEL_213:
                  v94 = v1467;
                  if ( v96 < 0 )
                    goto LABEL_613;
                  if ( Src )
                  {
                    v157 = (unsigned int *)Src;
                    v1733 = (unsigned int *)Src;
                    v1438 = 0;
                    if ( v145 )
                    {
                      v158 = v1637;
                      do
                      {
                        LODWORD(v1642) = RtlUIntAdd(4LL, *v157, &v1670);
                        v96 = (int)v1642;
                        if ( (int)v1642 < 0 )
                          goto LABEL_609;
                        LODWORD(v1642) = RtlULongLongAdd(v159, v1670, &v1733);
                        v96 = (int)v1642;
                        if ( (int)v1642 < 0 )
                          goto LABEL_609;
                        v157 = v1733;
                        ++v1438;
                      }
                      while ( v1438 < v160 );
                      v1400 = (size_t)v98;
                      v1453 = (SIZE_T)v97;
                      v1637 = v158;
                    }
                    LODWORD(v1642) = RtlULongLongAdd(v157, 4LL, &v1788);
                    v96 = (int)v1642;
                    if ( (int)v1642 >= 0 )
                    {
                      if ( v161 + 2 > (_DWORD *)((char *)Src + HIDWORD(v1780)) )
                        goto LABEL_610;
                      v162 = v1788;
                      v156 = 4LL;
                      *v161 = 4;
                      *v162 = v125;
                      v155 = 1;
                      v154 = v1780 + 1;
                      LODWORD(v1780) = v1780 + 1;
LABEL_229:
                      if ( Src )
                      {
                        v164 = (unsigned int *)Src;
                        v1732 = (unsigned int *)Src;
                        v1439 = 0;
                        if ( v154 )
                        {
                          v165 = v1637;
                          while ( 1 )
                          {
                            LODWORD(v1642) = RtlUIntAdd(v156, *v164, &v1672);
                            v96 = (int)v1642;
                            if ( (int)v1642 < 0 )
                              goto LABEL_609;
                            LODWORD(v1642) = RtlULongLongAdd(v166, v1672, &v1732);
                            v96 = (int)v1642;
                            if ( (int)v1642 < 0 )
                              goto LABEL_609;
                            v164 = v1732;
                            if ( ++v1439 >= v167 )
                              break;
                            v156 = 4LL;
                          }
                          v1400 = (size_t)v98;
                          v1453 = (SIZE_T)v97;
                          v1637 = v165;
                        }
                        LODWORD(v1642) = RtlULongLongAdd(v164, 4LL, &v1789);
                        v96 = (int)v1642;
                        if ( (int)v1642 >= 0 )
                        {
                          if ( v169 + 2 > (unsigned int *)((char *)Src + HIDWORD(v1780)) )
                            goto LABEL_610;
                          v170 = v1789;
                          *v169 = v168;
                          v163 = v168;
                          *v170 = v168;
                          LODWORD(v1780) = v168 - 3 + v1780;
LABEL_245:
                          LODWORD(v1642) = RtlUIntAdd(v163, v163, &v1673);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_609;
                          v172 = v1673;
                          v1674 = v1673;
                          LODWORD(v1642) = RtlUIntAdd(v171, 8LL, &v1675);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_609;
                          LODWORD(v1642) = RtlUIntAdd(v172, v1675, &v1674);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_257;
                          LODWORD(v1642) = RtlUIntAdd(v174, v174, &v1676);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_609;
                          LODWORD(v1642) = RtlUIntAdd(v1674, v1676, &v1674);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_257;
                          LODWORD(v1642) = RtlUIntAdd(v175, v175, &v1677);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_609;
                          LODWORD(v1642) = RtlUIntAdd(v1674, v1677, &v1674);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_257;
                          LODWORD(v1642) = RtlUIntAdd(v176, v176, &v1678);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_609;
                          LODWORD(v1642) = RtlUIntAdd(v1674, v1678, &v1674);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_257;
                          LODWORD(v1642) = RtlUIntAdd(v177, v177, &v1679);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                            goto LABEL_609;
                          LODWORD(v1642) = RtlUIntAdd(v1674, v1679, &v1674);
                          v96 = (int)v1642;
                          if ( (int)v1642 < 0 )
                          {
LABEL_257:
                            v94 = v173;
                            if ( v96 < 0 )
                              goto LABEL_613;
                            v178 = Size;
                          }
                          else
                          {
                            v178 = v1674;
                          }
                          v1440 = v178;
                          v1641 = 0LL;
                          Sizea = 0;
                          v1640 = 0LL;
                          v1648 = 0LL;
                          LODWORD(v1639) = 0;
                          v1619 = 0LL;
                          LODWORD(v1638) = 0;
                          v1586 = 0LL;
                          v1609 = 0LL;
                          v1486 = __rdtsc();
                          v1680 = 8;
                          v180 = RtlUIntAdd(8LL, HIDWORD(v1780), &v1680);
                          if ( v180 >= 0 )
                          {
                            v181 = (v1680 + 7) & 0xFFFFFFF8;
                            if ( v181 < v1680 )
                            {
                              v96 = -805306219;
                              goto LABEL_158;
                            }
                            v1680 = (v1680 + 7) & 0xFFFFFFF8;
                            LODWORD(v1642) = v178;
                            v1524 = v1637;
                            v182 = v181;
                            v183 = GetProcessHeap();
                            v184 = HeapAlloc(v183, 8u, v182);
                            if ( !v184 )
                            {
                              v96 = -805306345;
                              goto LABEL_192;
                            }
                            *v184 = v1780;
                            v1731 = v184;
                            v180 = RtlULongLongAdd(v184, 4LL, &v1731);
                            lpMem = v184;
                            v1440 = (unsigned int)v1642;
                            v1400 = (size_t)v98;
                            v1453 = (SIZE_T)v97;
                            v1637 = v1524;
                            if ( v180 >= 0 )
                            {
                              v185 = v1731;
                              *(_DWORD *)v1731 = HIDWORD(v1780);
                              v180 = RtlULongLongAdd(v185, 4LL, &v1731);
                              lpMem = v184;
                              v1440 = (unsigned int)v1642;
                              v1400 = (size_t)v98;
                              v1453 = (SIZE_T)v97;
                              v1637 = v186;
                              if ( v180 >= 0 )
                              {
                                *(_QWORD *)((char *)v184 + v1680 - 8) = v1486;
                                memcpy_0(v1731, Src, HIDWORD(v1780));
                                v179 = v1680;
                                v125 = v1467;
                                v1641 = v184;
                                v187 = v1524;
                                v1637 = v1524;
                                Sizea = v1680;
                                v1440 = (unsigned int)v1642;
                                v1400 = (size_t)v98;
                                v1453 = (SIZE_T)v97;
                                goto LABEL_269;
                              }
                            }
                            v188 = GetProcessHeap();
                            HeapFree(v188, 0, lpMem);
                            v125 = v1467;
                            v179 = 0;
                          }
                          v187 = v1637;
LABEL_269:
                          v96 = v180 | 0x10000000;
                          LODWORD(v1642) = v96;
                          if ( v96 < 0 )
                          {
LABEL_331:
                            v271 = v1641;
                            goto LABEL_332;
                          }
                          v189 = (unsigned __int8 *)v1641;
                          if ( !v1641 )
                          {
                            v96 = -805306355;
                            goto LABEL_158;
                          }
                          if ( !v179 || (v1553 = v179 + 8, (v1539 = (WCHAR *)MemoryAlloc(v179 + 8LL)) == 0LL) )
                          {
                            v96 = -805306367;
                            LODWORD(v1642) = -805306367;
LABEL_333:
                            v294 = GetProcessHeap();
                            HeapFree(v294, 0, v1641);
LABEL_334:
                            v295 = v1640;
                            if ( v1640 )
                            {
                              v1379 = (void *)*((_QWORD *)v1640 + 1);
                              if ( v1379 )
                              {
                                v296 = GetProcessHeap();
                                HeapFree(v296, 0, v1379);
                                v295[1] = 0LL;
                              }
                              v1380 = (void *)v295[3];
                              if ( v1380 )
                              {
                                v297 = GetProcessHeap();
                                HeapFree(v297, 0, v1380);
                                v295[3] = 0LL;
                              }
                              v1381 = (void *)v295[5];
                              if ( v1381 )
                              {
                                v298 = GetProcessHeap();
                                HeapFree(v298, 0, v1381);
                                v295[5] = 0LL;
                              }
                              v299 = GetProcessHeap();
                              HeapFree(v299, 0, v295);
                            }
                            v300 = v1648;
                            if ( v1648 )
                            {
                              v301 = GetProcessHeap();
                              HeapFree(v301, 0, v300);
                            }
                            if ( v1619 )
                            {
                              v302 = GetProcessHeap();
                              HeapFree(v302, 0, v1619);
                            }
                            if ( v1586 )
                            {
                              v1382 = (void *)v1586[1];
                              if ( v1382 )
                              {
                                v303 = GetProcessHeap();
                                HeapFree(v303, 0, v1382);
                                v1586[1] = 0LL;
                              }
                              v1383 = (void *)v1586[3];
                              if ( v1383 )
                              {
                                v304 = GetProcessHeap();
                                HeapFree(v304, 0, v1383);
                                v1586[3] = 0LL;
                              }
                              v1384 = (void *)v1586[5];
                              if ( v1384 )
                              {
                                v305 = GetProcessHeap();
                                HeapFree(v305, 0, v1384);
                                v1586[5] = 0LL;
                              }
                              v306 = GetProcessHeap();
                              HeapFree(v306, 0, v1586);
                            }
                            if ( v1609 )
                            {
                              v307 = GetProcessHeap();
                              HeapFree(v307, 0, v1609);
                            }
                            v94 = v1467;
                            if ( v96 < 0 )
                              goto LABEL_613;
                            if ( !(_DWORD)v1782 )
                            {
                              v96 = -1073425151;
                              goto LABEL_547;
                            }
                            if ( !*((_QWORD *)&v1782 + 1) )
                            {
                              v96 = -1073741811;
                              goto LABEL_547;
                            }
                            v1725[0] = *((_QWORD *)&v1782 + 1);
                            v468 = **((_DWORD **)&v1782 + 1);
                            LODWORD(v1642) = RtlULongLongAdd(*((_QWORD *)&v1782 + 1), 4LL, v1725);
                            v96 = (int)v1642;
                            if ( (int)v1642 < 0 )
                              goto LABEL_609;
                            v470 = (int *)v1725[0];
                            if ( !v468 )
                              v470 = 0LL;
                            v1725[0] = v470;
                            if ( v468 == (_DWORD)v469 )
                            {
                              v96 = *v470;
                              LODWORD(v1642) = v96;
                              if ( v96 == -805306333 )
                              {
                                v1494 = -2147024774;
LABEL_557:
                                if ( (_DWORD)v1782 != 6 )
                                {
LABEL_607:
                                  v96 = -1073425151;
                                  goto LABEL_158;
                                }
                                if ( *((_QWORD *)&v1782 + 1) )
                                {
                                  v471 = (_DWORD *)*((_QWORD *)&v1782 + 1);
                                  v472 = 0;
                                  v1740 = (_DWORD *)*((_QWORD *)&v1782 + 1);
                                  while ( 1 )
                                  {
                                    LODWORD(v1642) = RtlULongLongAdd(v471, v469, &v1740);
                                    v96 = (int)v1642;
                                    if ( (int)v1642 < 0 )
                                      goto LABEL_609;
                                    LODWORD(v1642) = RtlULongLongAdd(v1740, v473, &v1740);
                                    v96 = (int)v1642;
                                    if ( (int)v1642 < 0 )
                                      goto LABEL_609;
                                    v471 = v1740;
                                    if ( ++v472 )
                                    {
                                      v474 = *v1740;
                                      LODWORD(v1642) = RtlULongLongAdd(v1740, v469, &v1740);
                                      v96 = (int)v1642;
                                      if ( (int)v1642 < 0 )
                                        goto LABEL_609;
                                      v476 = v1740;
                                      if ( !v474 )
                                        v476 = 0LL;
                                      v1740 = v476;
                                      if ( v474 != 8 )
                                        goto LABEL_610;
                                      v1390 = *v476;
                                      if ( !*((_QWORD *)&v1782 + 1) )
                                        goto LABEL_157;
                                      v477 = (_DWORD *)*((_QWORD *)&v1782 + 1);
                                      v478 = 0;
                                      v1741 = (_DWORD *)*((_QWORD *)&v1782 + 1);
                                      while ( 1 )
                                      {
                                        LODWORD(v1642) = RtlULongLongAdd(v477, v475, &v1741);
                                        v96 = (int)v1642;
                                        if ( (int)v1642 < 0 )
                                          goto LABEL_609;
                                        LODWORD(v1642) = RtlULongLongAdd(v1741, v479, &v1741);
                                        v96 = (int)v1642;
                                        if ( (int)v1642 < 0 )
                                          goto LABEL_609;
                                        v477 = v1741;
                                        if ( (unsigned int)++v478 >= 2 )
                                        {
                                          v480 = *v1741;
                                          LODWORD(v1642) = RtlULongLongAdd(v1741, v475, &v1741);
                                          v96 = (int)v1642;
                                          if ( (int)v1642 < 0 )
                                            goto LABEL_609;
                                          v482 = v1741;
                                          if ( !v480 )
                                            v482 = 0LL;
                                          v1741 = v482;
                                          if ( v480 != (_DWORD)v481 )
                                            goto LABEL_610;
                                          v1534 = *v482;
                                          if ( !*((_QWORD *)&v1782 + 1) )
                                            goto LABEL_157;
                                          v483 = (void *)*((_QWORD *)&v1782 + 1);
                                          v484 = 0;
                                          v1742 = (void *)*((_QWORD *)&v1782 + 1);
                                          while ( 1 )
                                          {
                                            LODWORD(v1642) = RtlULongLongAdd(v483, v481, &v1742);
                                            v96 = (int)v1642;
                                            if ( (int)v1642 < 0 )
                                              goto LABEL_609;
                                            LODWORD(v1642) = RtlULongLongAdd(v1742, v485, &v1742);
                                            v96 = (int)v1642;
                                            if ( (int)v1642 < 0 )
                                              goto LABEL_609;
                                            v483 = v1742;
                                            if ( (unsigned int)++v484 >= 3 )
                                            {
                                              v486 = *(_DWORD *)v1742;
                                              v1520 = *(_DWORD *)v1742;
                                              LODWORD(v1642) = RtlULongLongAdd(v1742, v481, &v1742);
                                              v96 = (int)v1642;
                                              if ( (int)v1642 < 0 )
                                                goto LABEL_609;
                                              v488 = v1742;
                                              if ( !v486 )
                                                v488 = 0LL;
                                              v1742 = v488;
                                              if ( *((_QWORD *)&v1782 + 1) )
                                              {
                                                v489 = (_DWORD *)*((_QWORD *)&v1782 + 1);
                                                v490 = 0;
                                                v1743 = (_DWORD *)*((_QWORD *)&v1782 + 1);
                                                while ( 1 )
                                                {
                                                  LODWORD(v1642) = RtlULongLongAdd(v489, v487, &v1743);
                                                  v96 = (int)v1642;
                                                  if ( (int)v1642 < 0 )
                                                    goto LABEL_609;
                                                  LODWORD(v1642) = RtlULongLongAdd(v1743, v491, &v1743);
                                                  v96 = (int)v1642;
                                                  if ( (int)v1642 < 0 )
                                                    goto LABEL_609;
                                                  v489 = v1743;
                                                  if ( ++v490 >= (unsigned int)v487 )
                                                  {
                                                    v492 = *v1743;
                                                    LODWORD(v1642) = RtlULongLongAdd(v1743, v487, &v1743);
                                                    v96 = (int)v1642;
                                                    if ( (int)v1642 < 0 )
                                                      goto LABEL_609;
                                                    v494 = v1743;
                                                    if ( !v492 )
                                                      v494 = 0LL;
                                                    v1743 = v494;
                                                    if ( v492 != (_DWORD)v493 )
                                                      goto LABEL_610;
                                                    LODWORD(v1638) = *v494;
                                                    if ( !*((_QWORD *)&v1782 + 1) )
                                                      goto LABEL_157;
                                                    v495 = (unsigned int *)*((_QWORD *)&v1782 + 1);
                                                    v496 = 0;
                                                    v1744 = (unsigned int *)*((_QWORD *)&v1782 + 1);
                                                    while ( 1 )
                                                    {
                                                      v1442 = *v495;
                                                      LODWORD(v1642) = RtlULongLongAdd(v495, v493, &v1744);
                                                      v96 = (int)v1642;
                                                      if ( (int)v1642 < 0 )
                                                        goto LABEL_609;
                                                      LODWORD(v1642) = RtlULongLongAdd(v1744, v1442, &v1744);
                                                      v96 = (int)v1642;
                                                      if ( (int)v1642 < 0 )
                                                        goto LABEL_609;
                                                      v495 = v1744;
                                                      if ( (unsigned int)++v496 >= 5 )
                                                      {
                                                        v497 = *v1744;
                                                        v498 = RtlULongLongAdd(v1744, v493, &v1744);
                                                        LODWORD(v1642) = v498;
                                                        v96 = v498;
                                                        if ( v498 < 0 )
                                                        {
                                                          LODWORD(v1642) = v498;
                                                          goto LABEL_609;
                                                        }
                                                        v500 = v1744;
                                                        if ( !v497 )
                                                          v500 = 0LL;
                                                        v1744 = v500;
                                                        if ( v497 != v499 )
                                                          goto LABEL_610;
                                                        v94 = *v500;
                                                        if ( v1627 != (const wchar_t *)v1390 )
                                                          goto LABEL_607;
                                                        v1651 = v1534;
                                                        if ( (unsigned int)v1638 > v499 || v1520 > v499 )
                                                        {
                                                          v96 = -2147024774;
                                                          goto LABEL_547;
                                                        }
                                                        memcpy_0(v1637, v1742, v1520);
                                                        if ( v1494 )
                                                        {
                                                          v96 = v1494;
                                                          LODWORD(v1642) = v1494;
                                                        }
                                                        goto LABEL_613;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                              goto LABEL_157;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LABEL_157;
                              }
                              v1494 = v96;
                              if ( v96 == -2147024774 )
                                goto LABEL_557;
                              v1494 = v96;
                              v94 = v125;
                              if ( v96 >= 0 )
                                goto LABEL_557;
                              goto LABEL_613;
                            }
LABEL_610:
                            v96 = -1073741789;
                            goto LABEL_158;
                          }
                          v190 = 0;
                          v1356 = 0;
                          v191 = 0LL;
                          if ( Sizea )
                          {
                            do
                              v190 ^= v189[v191++];
                            while ( v191 < Sizea );
                            v1356 = v190;
                          }
                          v1499 = v1539;
                          v192 = -1;
                          v1850 = 0xC81ECB17B1B54A58uLL;
                          LODWORD(v1642) = 0;
                          v193 = v189;
                          v1514 = 0;
                          v194 = 0;
                          v195 = Sizea & 7;
                          if ( (Sizea & 7) != 0 )
                          {
                            v196 = 0;
                            v197 = 56;
                            do
                            {
                              v198 = *v193++;
                              if ( (unsigned int)v2 >= 4 )
                                v196 |= v198 << v197;
                              else
                                v194 |= v198 << (v197 - 32);
                              LODWORD(v2) = v2 + 1;
                              LODWORD(v1642) = v196;
                              v197 -= 8;
                              v1514 = v194;
                            }
                            while ( (int)v2 < v195 );
                            v190 = v1356;
                            v194 ^= 0xB17A307A;
                            v199 = v196 ^ 0x42F6B18D;
                            v200 = 0;
                            v1637 = v187;
                            v201 = v1539;
                            v202 = v194;
                            v1400 = (size_t)v98;
                            v203 = v199;
                            v1453 = (SIZE_T)v97;
                            v1641 = v189;
                            do
                            {
                              v1499 = (WCHAR *)((char *)v201 + 1);
                              if ( v200 >= 4 )
                              {
                                v203 = __ROL4__(v203, 8);
                                v204 = v203;
                              }
                              else
                              {
                                v202 = __ROL4__(v202, 8);
                                v204 = v202;
                              }
                              *(_BYTE *)v201 = v204;
                              ++v200;
                              v201 = (WCHAR *)((char *)v201 + 1);
                            }
                            while ( v200 < v195 );
                            v189 = (unsigned __int8 *)v1641;
                            LODWORD(v2) = 0;
                            if ( (unsigned int)v195 <= 4 )
                            {
                              v192 = 0;
                              if ( (unsigned int)v195 < 4 )
                                v194 = v194 >> (8 * (4 - v195)) << (8 * (4 - v195));
                            }
                            else
                            {
                              v192 = v199 >> (8 * (8 - v195)) << (8 * (8 - v195));
                            }
                          }
                          if ( (unsigned __int64)Sizea >> 3 )
                          {
                            v205 = v193 + 2;
                            v206 = (unsigned __int64)Sizea >> 3;
                            v207 = (int)v1642;
                            v208 = (char *)v1499 + 7;
                            v209 = v1514;
                            v1525 = WORD1(v1850);
                            v1487 = HIWORD(v1850);
                            v210 = WORD2(v1850);
                            do
                            {
                              v211 = *(v205 - 1) | (*(v205 - 2) << 8);
                              v212 = v205[2] << 8;
                              v213 = *v205;
                              v205 += 8;
                              v214 = *(v205 - 7) | ((v213 | (v211 << 8)) << 8);
                              v215 = *(v205 - 3) | ((*(v205 - 4) | ((*(v205 - 5) | v212) << 8)) << 8);
                              v216 = v215 ^ v192;
                              v217 = v214 ^ HIDWORD(v1850) ^ (v216 - 19032) ^ v194;
                              v218 = (__ROR4__(v217, 7) + WORD1(v1850) * __ROR4__(v217 ^ HIDWORD(v1850), 15)) ^ v216;
                              v219 = (v210 * __ROR4__(v218 - 1313519016, 9) - __ROR4__(v218, 10)) ^ v217;
                              v220 = (__ROL4__(v219, 5) + HIWORD(v1850) * __ROL4__(v210 ^ v219, 4)) ^ v218;
                              v221 = (HIDWORD(v1850) - (v220 ^ 0xB1B54A58)) ^ v219;
                              v222 = (WORD1(v1850) * (v221 - 19032) - (v221 >> 6)) ^ v220;
                              v223 = (19032 * (v210 ^ __ROR4__(v222, 15))) ^ v221;
                              v224 = (v210 * (HIWORD(v1850) + __ROR4__(~v223, 3))) ^ v222;
                              v225 = (v224 - 19032 - HIDWORD(v1850)) ^ v223;
                              v226 = (v1525 * (v1487 ^ v225)) ^ __ROR4__(v225, 10) ^ v224;
                              v227 = __ROR4__(v226, 3) ^ (v210 * __ROL4__(v226 ^ 0x4A58, 6)) ^ v225;
                              v228 = (19032 * (__ROR4__(v227, 15) - HIWORD(v1850))) ^ v226;
                              v229 = (v228 >> 15) ^ (19032 * __ROL4__(v228 - v210, 3)) ^ (v228 >> 1) ^ (19032 * (HIWORD(v1850) ^ v228)) ^ v227;
                              v230 = (WORD1(v1850) * (v229 - v210) - (v229 >> 13)) ^ v228;
                              v231 = __ROR4__(v230, 11) ^ (v210 * __ROR4__(-1313519016 - v230, 9)) ^ v229;
                              v232 = (v231 + 1313519016 - HIWORD(v1850)) ^ v230;
                              v233 = (19032 * (v1525 ^ v232) - __ROR4__(v232, 7)) ^ v231;
                              v234 = (WORD1(v1850) * __ROL4__(HIWORD(v1850) ^ v233, 4) - __ROR4__(v233, 16)) ^ v232;
                              v235 = (__ROR4__(v234, 4) + v210 * __ROR4__(-1313519016 - v234, 10)) ^ v233;
                              v236 = __ROR4__(v235, 9) ^ (HIWORD(v1850) * __ROR4__(v235 + 1313519016, 4)) ^ v234;
                              v237 = (19032 * __ROL4__(v236 ^ HIDWORD(v1850), 8) - __ROL4__(v236, 2)) ^ v235;
                              v238 = (WORD1(v1850) * __ROR4__(HIDWORD(v1850) - v237, 11) - __ROR4__(v237, 12)) ^ v236;
                              v239 = (v238 >> 8) ^ (v210 * (WORD1(v1850) ^ v238)) ^ v237;
                              v240 = v209 ^ v239;
                              v241 = HIDWORD(v1850) ^ v239;
                              v209 = v214;
                              *(v208 - 4) = v240;
                              v242 = __ROR4__(v240, 8);
                              v243 = v207 ^ v241 ^ 0xB1B54A58 ^ v238;
                              v207 = v215;
                              *v208 = v243;
                              *(v208 - 5) = v242;
                              v208 += 8;
                              v244 = __ROR4__(v243, 8);
                              *(v208 - 9) = v244;
                              v245 = __ROR4__(v242, 8);
                              *(v208 - 14) = v245;
                              v246 = __ROR4__(v244, 8);
                              *(v208 - 10) = v246;
                              v247 = __ROR4__(v245, 8);
                              v248 = __ROR4__(v246, 8);
                              *(v208 - 15) = v247;
                              *(v208 - 11) = v248;
                              v192 = __ROR4__(v248, 8);
                              v194 = __ROR4__(v247, 8);
                              --v206;
                            }
                            while ( v206 );
                            v190 = v1356;
                            v97 = (void *)v1453;
                            LODWORD(v2) = 0;
                            v98 = (void *)v1400;
                            v189 = (unsigned __int8 *)v1641;
                          }
                          v249 = v1637;
                          *(_QWORD *)((char *)v1539 + Sizea) = v190;
                          v1725[2] = 8LL;
                          v1725[3] = 160LL;
                          v250 = GetProcessHeap();
                          v251 = HeapAlloc(v250, 8u, 0x30uLL);
                          v1637 = v251;
                          if ( !v251 )
                          {
                            v252 = -1073741801;
                            goto LABEL_312;
                          }
                          *v251 = v1553;
                          v1641 = v189;
                          v253 = GetProcessHeap();
                          v254 = HeapAlloc(v253, 8u, v1553);
                          if ( v254 )
                          {
                            v256 = v1637;
                            *((_QWORD *)v1637 + 1) = v254;
                            v257 = (void *)v256[1];
                            v1637 = v256;
                            memcpy_0(v257, v1539, v1553);
                            v1358 = (WCHAR *)v189;
                            v258 = v1637;
                            *((_DWORD *)v1637 + 4) = 160;
                            v259 = GetProcessHeap();
                            v260 = HeapAlloc(v259, 8u, 0xA0uLL);
                            if ( !v260 )
                            {
LABEL_304:
                              v252 = -1073741801;
                              v264 = v1637;
                              v1359 = (WCHAR *)*((_QWORD *)v1637 + 1);
                              if ( v1359 )
                              {
                                v265 = GetProcessHeap();
                                HeapFree(v265, 0, v1359);
                                v264 = v1637;
                                *((_QWORD *)v1637 + 1) = 0LL;
                              }
                              v1360 = (WCHAR *)*((_QWORD *)v264 + 3);
                              if ( v1360 )
                              {
                                v266 = GetProcessHeap();
                                HeapFree(v266, 0, v1360);
                                v264 = v1637;
                                *((_QWORD *)v1637 + 3) = 0LL;
                              }
                              v1361 = (WCHAR *)*((_QWORD *)v264 + 5);
                              if ( v1361 )
                              {
                                v267 = GetProcessHeap();
                                HeapFree(v267, 0, v1361);
                                *((_QWORD *)v1637 + 5) = 0LL;
                              }
                              v268 = GetProcessHeap();
                              HeapFree(v268, 0, v1637);
LABEL_312:
                              v1637 = v249;
                              v270 = GetProcessHeap();
                              HeapFree(v270, 0, v1539);
                              v271 = v1641;
                              v96 = v252 | 0x10000000;
                              v1362 = (WCHAR *)v1641;
                              LODWORD(v1642) = v96;
                              v1500 = (unsigned __int16 *)v249;
                              v1554 = v1640;
                              if ( v96 < 0 )
                                goto LABEL_332;
                              v272 = *(unsigned int *)v1640;
                              v1401 = (unsigned int *)v1640;
                              LODWORD(v1681) = 4;
                              v274 = RtlUIntAdd(4LL, v272, &v1681);
                              if ( v274 >= 0 )
                              {
                                v274 = RtlUIntAdd((unsigned int)v1681, v273, &v1681);
                                if ( v274 >= 0 )
                                {
                                  v274 = RtlUIntAdd((unsigned int)v1681, *(unsigned int *)(v275 + 16), &v1681);
                                  if ( v274 >= 0 )
                                  {
                                    v274 = RtlUIntAdd((unsigned int)v1681, v276, &v1681);
                                    if ( v274 >= 0 )
                                    {
                                      v274 = RtlUIntAdd((unsigned int)v1681, *(unsigned int *)(v277 + 32), &v1681);
                                      if ( v274 >= 0 )
                                      {
                                        v1526 = v1681;
                                        v278 = v1681;
                                        v279 = GetProcessHeap();
                                        v280 = HeapAlloc(v279, 8u, v278);
                                        v1454 = v280;
                                        if ( !v280 )
                                        {
LABEL_327:
                                          v96 = -805306345;
LABEL_330:
                                          LODWORD(v1642) = v96;
                                          goto LABEL_331;
                                        }
                                        v1726 = v280;
                                        *v280 = *v1401;
                                        v249 = v1500;
                                        v274 = RtlULongLongAdd(v280, 4LL, &v1726);
                                        v1515 = v282;
                                        v1641 = v1362;
                                        v1640 = v281;
                                        v1637 = v1500;
                                        if ( v274 >= 0 )
                                        {
                                          memcpy_0(v1726, v281[1], *(unsigned int *)v281);
                                          v274 = RtlULongLongAdd(v1726, *v1401, &v1726);
                                          v1515 = v1454;
                                          v1640 = v283;
                                          v1637 = v1500;
                                          v1641 = v1362;
                                          if ( v274 >= 0 )
                                          {
                                            v284 = v1726;
                                            *(_DWORD *)v1726 = v283[4];
                                            v274 = RtlULongLongAdd(v284, 4LL, &v1726);
                                            v1515 = v286;
                                            v1640 = (LPVOID)v285;
                                            v1637 = v1500;
                                            v1641 = v287;
                                            if ( v274 >= 0 )
                                            {
                                              memcpy_0(v1726, *(const void **)(v285 + 24), *(unsigned int *)(v285 + 16));
                                              v274 = RtlULongLongAdd(v1726, v1401[4], &v1726);
                                              v1515 = v1454;
                                              v1640 = v288;
                                              v1637 = v1500;
                                              v1641 = v1362;
                                              if ( v274 >= 0 )
                                              {
                                                v289 = v1726;
                                                *(_DWORD *)v1726 = v288[8];
                                                v274 = RtlULongLongAdd(v289, 4LL, &v1726);
                                                v1515 = v291;
                                                v1640 = (LPVOID)v290;
                                                v1637 = v1500;
                                                v1641 = v292;
                                                if ( v274 >= 0 )
                                                {
                                                  memcpy_0(
                                                    v1726,
                                                    *(const void **)(v290 + 40),
                                                    *(unsigned int *)(v290 + 32));
                                                  v274 = RtlULongLongAdd(v1726, v1401[8], &v1726);
                                                  v1515 = v1454;
                                                  v1641 = v1362;
                                                  v1640 = v1554;
                                                  v1637 = v1500;
                                                  if ( v274 >= 0 )
                                                  {
                                                    v1648 = v1454;
                                                    v271 = v1362;
                                                    LODWORD(v1639) = v1526;
                                                    v293 = v1440;
                                                    v1640 = v1554;
                                                    v1637 = v1500;
                                                    v1641 = v1362;
LABEL_361:
                                                    v96 = v274 | 0x10000000;
                                                    LODWORD(v1642) = v96;
                                                    if ( v96 < 0 )
                                                      goto LABEL_332;
                                                    v1682 = 8;
                                                    v309 = RtlUIntAdd(8LL, v293, &v1682);
                                                    v96 = v309 | 0x10000000;
                                                    LODWORD(v1642) = v309 | 0x10000000;
                                                    if ( v309 < 0 )
                                                      goto LABEL_332;
                                                    v313 = (v1682 + 7) & 0xFFFFFFF8;
                                                    if ( v313 < v1682 )
                                                    {
                                                      v96 = -1073741675;
LABEL_482:
                                                      LODWORD(v1642) = v96;
                                                      goto LABEL_332;
                                                    }
                                                    v1683 = (v1682 + 7) & 0xFFFFFFF8;
                                                    v1648 = v312;
                                                    v1641 = v271;
                                                    v1637 = v249;
                                                    v1640 = v311;
                                                    LODWORD(v1642) = RtlUIntAdd(v313, v310, &v1683);
                                                    v96 = (int)v1642;
                                                    if ( (int)v1642 < 0 )
                                                      goto LABEL_332;
                                                    v1640 = v314;
                                                    v1637 = v249;
                                                    v1641 = v271;
                                                    v1648 = v315;
                                                    if ( Src )
                                                    {
                                                      v1640 = v314;
                                                      v1637 = v249;
                                                      v1641 = v271;
                                                      v1648 = v315;
                                                      if ( (unsigned int)v1780 > 1 )
                                                      {
                                                        v316 = (unsigned int *)Src;
                                                        v1727 = (unsigned int *)Src;
                                                        v1488 = 0;
                                                        do
                                                        {
                                                          v1527 = *v316;
                                                          LODWORD(v1642) = RtlULongLongAdd(v316, 4LL, &v1727);
                                                          v96 = (int)v1642;
                                                          if ( (int)v1642 < 0 )
                                                            goto LABEL_332;
                                                          LODWORD(v1642) = RtlULongLongAdd(v1727, v1527, &v1727);
                                                          v96 = (int)v1642;
                                                          if ( (int)v1642 < 0 )
                                                            goto LABEL_332;
                                                          ++v1488;
                                                          v316 = v1727;
                                                        }
                                                        while ( !v1488 );
                                                        v1489 = *v1727;
                                                        LODWORD(v1642) = RtlULongLongAdd(v1727, 4LL, &v1727);
                                                        v96 = (int)v1642;
                                                        if ( (int)v1642 < 0 )
                                                          goto LABEL_332;
                                                        if ( Src && (unsigned int)v1780 > 2 )
                                                        {
                                                          v317 = (unsigned int *)Src;
                                                          v1728 = (unsigned int *)Src;
                                                          for ( ii = 0; ii < 2; ++ii )
                                                          {
                                                            v1516 = *v317;
                                                            LODWORD(v1642) = RtlULongLongAdd(v317, 4LL, &v1728);
                                                            v96 = (int)v1642;
                                                            if ( (int)v1642 < 0 )
                                                              goto LABEL_332;
                                                            LODWORD(v1642) = RtlULongLongAdd(v1728, v1516, &v1728);
                                                            v96 = (int)v1642;
                                                            if ( (int)v1642 < 0 )
                                                              goto LABEL_332;
                                                            v317 = v1728;
                                                          }
                                                          v1529 = *v1728;
                                                          LODWORD(v1642) = RtlULongLongAdd(v1728, 4LL, &v1728);
                                                          v96 = (int)v1642;
                                                          if ( (int)v1642 >= 0 )
                                                          {
                                                            LODWORD(v1684) = 4;
                                                            LODWORD(v1642) = RtlUIntAdd(4LL, v1683, &v1684);
                                                            v96 = (int)v1642;
                                                            if ( (int)v1642 < 0 )
                                                              goto LABEL_387;
                                                            LODWORD(v1642) = RtlUIntAdd(
                                                                               (unsigned int)v1684,
                                                                               v318,
                                                                               &v1684);
                                                            v96 = (int)v1642;
                                                            if ( (int)v1642 < 0
                                                              || (LODWORD(v1642) = RtlUIntAdd(
                                                                                     (unsigned int)v1684,
                                                                                     v1489,
                                                                                     &v1684),
                                                                  v96 = (int)v1642,
                                                                  (int)v1642 < 0)
                                                              || (LODWORD(v1642) = RtlUIntAdd(
                                                                                     (unsigned int)v1684,
                                                                                     4LL,
                                                                                     &v1684),
                                                                  v96 = (int)v1642,
                                                                  (int)v1642 < 0)
                                                              || (LODWORD(v1642) = RtlUIntAdd(
                                                                                     (unsigned int)v1684,
                                                                                     v1529,
                                                                                     &v1684),
                                                                  v96 = (int)v1642,
                                                                  (int)v1642 < 0) )
                                                            {
LABEL_387:
                                                              if ( v96 < 0 )
                                                                goto LABEL_332;
                                                              v321 = HIDWORD(v1684);
                                                            }
                                                            else
                                                            {
                                                              v321 = v1684;
                                                            }
                                                            LODWORD(v1638) = v321;
                                                            if ( v321 > 0x400000 )
                                                            {
                                                              v96 = -2147418113;
                                                              goto LABEL_482;
                                                            }
                                                            v1540 = (WCHAR *)v249;
                                                            v322 = v320;
                                                            v323 = v321;
                                                            v1363 = v320;
                                                            v1501 = (unsigned __int16 *)v271;
                                                            lpMema = v97;
                                                            v1441 = v319;
                                                            v324 = GetProcessHeap();
                                                            v325 = HeapAlloc(v324, 8u, v323);
                                                            Sizeb = (size_t)v325;
                                                            v326 = v325;
                                                            if ( v325 )
                                                            {
                                                              if ( !v322 )
                                                              {
                                                                v96 = -2147024809;
                                                                v1619 = v325;
LABEL_412:
                                                                v1640 = v1441;
                                                                v271 = v1501;
                                                                v1641 = v1501;
                                                                v1648 = v1363;
                                                                LODWORD(v1642) = v96;
                                                                v1637 = v1540;
                                                                goto LABEL_332;
                                                              }
                                                              v327 = (int)v1638;
                                                              v1797 = (int)v1639;
                                                              v1798 = (int)v1638;
                                                              v1796[0] = v322;
                                                              v1796[1] = v325;
                                                              v1799 = 0;
                                                              if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule) )
                                                              {
                                                                v329 = GetProcAddress(
                                                                         phModule,
                                                                         "NtQuerySystemInformation");
                                                                if ( v329 )
                                                                {
                                                                  v331 = ((__int64 (__fastcall *)(__int64, _QWORD *))v329)(
                                                                           134LL,
                                                                           v1796);
                                                                  LODWORD(v1638) = v327;
                                                                  v96 = v331 | 0x10000000;
                                                                  LODWORD(v1642) = v331 | 0x10000000;
                                                                  if ( v331 >= 0 )
                                                                  {
                                                                    v332 = v326;
                                                                    v333 = v1363;
                                                                    v334 = v98;
                                                                    v335 = v1540;
                                                                    v336 = lpMema;
                                                                    v337 = v1441;
                                                                    LODWORD(v1638) = v1798;
                                                                    v338 = v1501;
                                                                    goto LABEL_414;
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  v330 = GetLastError();
                                                                  v96 = v330;
                                                                  if ( v330 > 0 )
                                                                    v96 = (unsigned __int16)v330 | 0x80070000;
                                                                  LODWORD(v1638) = v327;
                                                                  if ( v96 >= 0 )
                                                                    v96 = -2147467259;
                                                                  LODWORD(v1642) = v96;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v328 = GetLastError();
                                                                v96 = v328;
                                                                if ( v328 > 0 )
                                                                  v96 = (unsigned __int16)v328 | 0x80070000;
                                                                if ( v96 >= 0 )
                                                                  v96 = -2147467259;
                                                                LODWORD(v1642) = v96;
                                                              }
                                                              v1619 = v326;
                                                              if ( v96 == -805306333 )
                                                              {
                                                                v97 = lpMema;
                                                                v96 = -2147024774;
                                                                goto LABEL_412;
                                                              }
                                                              v338 = v1501;
                                                              v332 = v326;
                                                              v335 = v1540;
                                                              v334 = v98;
                                                              v337 = v1441;
                                                              v271 = v1501;
                                                              v336 = lpMema;
                                                              v333 = v1363;
                                                              v97 = lpMema;
                                                              v1637 = v1540;
                                                              v1640 = v1441;
                                                              v1641 = v1501;
                                                              v1648 = v1363;
                                                              if ( v96 < 0 )
                                                                goto LABEL_332;
LABEL_414:
                                                              v1642 = 0LL;
                                                              v1685 = 0;
                                                              v1730 = v332;
                                                              if ( (unsigned int)v1638 < 4 )
                                                              {
                                                                v1640 = v337;
                                                                v98 = v334;
                                                                v97 = v336;
                                                                v1637 = v335;
                                                                v271 = v338;
                                                                v1641 = v338;
LABEL_417:
                                                                v96 = -805306306;
                                                                v1619 = v332;
                                                                LODWORD(v1642) = -805306306;
                                                                v1648 = v333;
                                                                goto LABEL_332;
                                                              }
                                                              v1490 = *v332;
                                                              v339 = RtlULongLongAdd(v332, 4LL, &v1730);
                                                              v97 = lpMema;
                                                              v1640 = v1441;
                                                              v1641 = v1501;
                                                              v271 = v1501;
                                                              v1619 = v340;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v335;
                                                              v1648 = v341;
                                                              if ( v339 < 0 )
                                                                goto LABEL_469;
                                                              v342 = RtlUIntAdd(0LL, 4LL, &v1685);
                                                              v343 = v1540;
                                                              v339 = v342;
                                                              v344 = v271;
                                                              v1640 = v1441;
                                                              v1619 = v332;
                                                              v335 = v1540;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1540;
                                                              v1641 = v271;
                                                              v1648 = v333;
                                                              if ( v342 < 0 )
                                                                goto LABEL_469;
                                                              if ( (unsigned int)v1638 - v1685 < v1490 )
                                                                goto LABEL_447;
                                                              v1639 = v1730;
                                                              v335 = v1540;
                                                              v339 = RtlULongLongAdd(v1730, v1490, &v1730);
                                                              v1640 = v1441;
                                                              v1641 = v271;
                                                              v1619 = v345;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1540;
                                                              v1648 = v346;
                                                              if ( v339 < 0 )
                                                                goto LABEL_469;
                                                              v339 = RtlUIntAdd(v1685, v1490, &v1685);
                                                              v1619 = v332;
                                                              v343 = v1540;
                                                              v1640 = v1441;
                                                              v344 = v271;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1540;
                                                              v1641 = v271;
                                                              v1648 = v333;
                                                              if ( v339 < 0 )
                                                                goto LABEL_469;
                                                              if ( (unsigned int)v1638 - v1685 < 4 )
                                                                goto LABEL_447;
                                                              v1530 = *(_DWORD *)v1730;
                                                              v335 = v1540;
                                                              v339 = RtlULongLongAdd(v1730, 4LL, &v1730);
                                                              v1640 = v1441;
                                                              v1641 = v271;
                                                              v1619 = v347;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1540;
                                                              v1648 = v348;
                                                              if ( v339 < 0 )
                                                                goto LABEL_469;
                                                              v339 = RtlUIntAdd(v1685, 4LL, &v1685);
                                                              v1619 = v332;
                                                              v343 = v1540;
                                                              v1640 = v1441;
                                                              v344 = v271;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1540;
                                                              v1641 = v271;
                                                              v1648 = v333;
                                                              if ( v339 < 0 )
                                                                goto LABEL_469;
                                                              if ( (unsigned int)v1638 - v1685 < v1530 )
                                                                goto LABEL_447;
                                                              v1578 = v1730;
                                                              v335 = v1540;
                                                              v339 = RtlULongLongAdd(v1730, v1530, &v1730);
                                                              v1640 = v1441;
                                                              v1641 = v271;
                                                              v1619 = v349;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1540;
                                                              v1648 = v350;
                                                              if ( v339 < 0 )
                                                                goto LABEL_469;
                                                              v339 = RtlUIntAdd(v1685, v1530, &v1685);
                                                              v1619 = v332;
                                                              v343 = v1540;
                                                              v1640 = v1441;
                                                              v344 = v271;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1540;
                                                              v1641 = v271;
                                                              v1648 = v333;
                                                              if ( v339 < 0 )
                                                                goto LABEL_469;
                                                              if ( (unsigned int)v1638 - v1685 < 4 )
                                                                goto LABEL_447;
                                                              v1517 = *(_DWORD *)v1730;
                                                              v335 = v1540;
                                                              v339 = RtlULongLongAdd(v1730, 4LL, &v1730);
                                                              v1640 = v1441;
                                                              v1641 = v271;
                                                              v1619 = v351;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1540;
                                                              v1648 = v352;
                                                              if ( v339 < 0 )
                                                                goto LABEL_469;
                                                              v339 = RtlUIntAdd(v1685, 4LL, &v1685);
                                                              v1619 = v332;
                                                              v343 = v1540;
                                                              v1640 = v1441;
                                                              v344 = v271;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1540;
                                                              v1641 = v271;
                                                              v1648 = v333;
                                                              if ( v339 < 0 )
                                                                goto LABEL_469;
                                                              if ( (unsigned int)v1638 - v1685 < v1517 )
                                                              {
LABEL_447:
                                                                v1640 = v1441;
                                                                v1637 = v343;
                                                                v1641 = v344;
                                                                goto LABEL_417;
                                                              }
                                                              v339 = RtlUIntAdd(v1685, v1517, &v1685);
                                                              v1640 = v1441;
                                                              v1619 = v332;
                                                              v335 = v1540;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1540;
                                                              v1641 = v271;
                                                              v1648 = v333;
                                                              if ( v339 < 0 )
                                                              {
LABEL_469:
                                                                v367 = 0LL;
                                                                goto LABEL_470;
                                                              }
                                                              if ( (_DWORD)v1638 != v1685
                                                                || v1517 + v1530 + v1490 + 12LL != (unsigned int)v1638 )
                                                              {
                                                                v1640 = v1441;
                                                                v1637 = v1540;
                                                                v1641 = v271;
                                                                goto LABEL_417;
                                                              }
                                                              v353 = GetProcessHeap();
                                                              v1638 = HeapAlloc(v353, 8u, 0x30uLL);
                                                              v354 = v1638;
                                                              if ( !v1638 )
                                                              {
                                                                v96 = -805306345;
                                                                v1619 = (void *)Sizeb;
                                                                goto LABEL_412;
                                                              }
                                                              v339 = 0;
                                                              v335 = v1540;
                                                              v1640 = v1441;
                                                              v1619 = (void *)Sizeb;
                                                              v1648 = v1363;
                                                              v1641 = v1501;
                                                              v1637 = v1540;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1402 = (size_t)v98;
                                                              if ( v1639 )
                                                              {
                                                                *(_DWORD *)v1638 = v1490;
                                                                v355 = GetProcessHeap();
                                                                v356 = HeapAlloc(v355, 8u, v1490);
                                                                if ( !v356 )
                                                                {
                                                                  v1619 = (void *)Sizeb;
                                                                  v1640 = v1441;
                                                                  v1641 = v1501;
                                                                  v1648 = v1363;
                                                                  v1402 = (size_t)v98;
                                                                  v1455 = (SIZE_T)lpMema;
                                                                  v1637 = v1540;
LABEL_440:
                                                                  v339 = -1073741801;
                                                                  v357 = v1638;
                                                                  v1385 = (void *)*((_QWORD *)v1638 + 1);
                                                                  if ( v1385 )
                                                                  {
                                                                    v358 = GetProcessHeap();
                                                                    HeapFree(v358, 0, v1385);
                                                                    v357 = v1638;
                                                                    *((_QWORD *)v1638 + 1) = 0LL;
                                                                  }
                                                                  v1386 = (void *)v357[3];
                                                                  if ( v1386 )
                                                                  {
                                                                    v359 = GetProcessHeap();
                                                                    HeapFree(v359, 0, v1386);
                                                                    v357 = v1638;
                                                                    *((_QWORD *)v1638 + 3) = 0LL;
                                                                  }
                                                                  v1387 = (void *)v357[5];
                                                                  if ( v1387 )
                                                                  {
                                                                    v360 = GetProcessHeap();
                                                                    HeapFree(v360, 0, v1387);
                                                                    *((_QWORD *)v1638 + 5) = 0LL;
                                                                  }
                                                                  v361 = GetProcessHeap();
                                                                  HeapFree(v361, 0, v1638);
                                                                  v362 = 0LL;
                                                                  goto LABEL_459;
                                                                }
                                                                *((_QWORD *)v1638 + 1) = v356;
                                                                memcpy_0(v356, v1639, v1490);
                                                                v354 = v1638;
                                                              }
                                                              else
                                                              {
                                                                v1619 = (void *)Sizeb;
                                                                *(_DWORD *)v1638 = 0;
                                                                v1640 = v1441;
                                                                v354[1] = 0LL;
                                                                v1402 = (size_t)v98;
                                                                v1455 = (SIZE_T)lpMema;
                                                                v1637 = v1540;
                                                                v1641 = v1501;
                                                                v1648 = v1363;
                                                              }
                                                              v1638 = v354;
                                                              if ( v1578 )
                                                              {
                                                                *((_DWORD *)v354 + 4) = v1530;
                                                                v363 = GetProcessHeap();
                                                                v364 = HeapAlloc(v363, 8u, v1530);
                                                                if ( !v364 )
                                                                  goto LABEL_440;
                                                                *((_QWORD *)v1638 + 3) = v364;
                                                                v339 = 0;
                                                                memcpy_0(v364, v1578, v1530);
                                                                v354 = v1638;
                                                                v1402 = (size_t)v98;
                                                                v1455 = (SIZE_T)lpMema;
                                                                v1637 = v1540;
                                                              }
                                                              else
                                                              {
                                                                *((_DWORD *)v354 + 4) = 0;
                                                                v354[3] = 0LL;
                                                              }
                                                              if ( v1730 )
                                                              {
                                                                *((_DWORD *)v354 + 8) = v1517;
                                                                v365 = GetProcessHeap();
                                                                v366 = HeapAlloc(v365, 8u, v1517);
                                                                if ( !v366 )
                                                                  goto LABEL_440;
                                                                *((_QWORD *)v1638 + 5) = v366;
                                                                v339 = 0;
                                                                memcpy_0(v366, v1730, v1517);
                                                                v354 = v1638;
                                                                v1402 = (size_t)v98;
                                                                v1455 = (SIZE_T)lpMema;
                                                                v1637 = v1540;
                                                              }
                                                              else
                                                              {
                                                                *((_DWORD *)v354 + 8) = 0;
                                                                v354[5] = 0LL;
                                                              }
                                                              v362 = (unsigned int *)v354;
                                                              v1642 = v354;
LABEL_459:
                                                              v271 = v1641;
                                                              v1541 = (WCHAR *)v1640;
                                                              v1388 = v1648;
                                                              v1579 = v1641;
                                                              v1599 = v335;
                                                              v1491 = v339;
                                                              if ( v339 >= 0 )
                                                              {
                                                                v367 = v362;
                                                                v1586 = v362;
                                                                goto LABEL_470;
                                                              }
                                                              v367 = 0LL;
                                                              v1586 = 0LL;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v335;
                                                              if ( !v362 )
                                                              {
LABEL_470:
                                                                v96 = v339 | 0x10000000;
                                                                LODWORD(v1642) = v96;
                                                                if ( v96 < 0 )
                                                                  goto LABEL_332;
                                                                if ( !v367
                                                                  || (v1389 = *((_QWORD *)v367 + 1)) == 0
                                                                  || !*v367 )
                                                                {
                                                                  v96 = -805306355;
                                                                  goto LABEL_482;
                                                                }
                                                                v376 = *v367 - 8LL;
                                                                v1580 = v376;
                                                                v1600 = MemoryAlloc(v376);
                                                                v377 = v1600;
                                                                if ( !v1600 )
                                                                  goto LABEL_329;
                                                                v378 = (unsigned __int8 *)v1389;
                                                                v379 = v1586;
                                                                v380 = 0;
                                                                v1542 = v376 & 7;
                                                                v1848 = 0x7F1137FAB69605ELL;
                                                                if ( (v376 & 7) == 0 )
                                                                {
                                                                  v1492 = -1;
                                                                  v392 = 0;
                                                                  v391 = 0;
                                                                  v390 = 0;
                                                                  goto LABEL_494;
                                                                }
                                                                v1492 = 0;
                                                                v1531 = 0;
                                                                v381 = 56;
                                                                v382 = (unsigned __int8 *)v1389;
                                                                do
                                                                {
                                                                  v383 = *v382++;
                                                                  if ( (unsigned int)v2 >= 4 )
                                                                    v1492 |= v383 << v381;
                                                                  else
                                                                    v1531 |= v383 << (v381 - 32);
                                                                  LODWORD(v2) = v2 + 1;
                                                                  v381 -= 8;
                                                                }
                                                                while ( (int)v2 < v1542 );
                                                                v380 = 0;
                                                                v384 = v1492 ^ 0x699A899C;
                                                                LODWORD(v2) = 0;
                                                                v385 = v1531 ^ 0x92F65A5;
                                                                v386 = v1600;
                                                                v1637 = v335;
                                                                v387 = 0;
                                                                LODWORD(v1638) = v1492 ^ 0x699A899C;
                                                                v1402 = (size_t)v98;
                                                                v1455 = (SIZE_T)lpMema;
                                                                do
                                                                {
                                                                  v388 = v386 + 1;
                                                                  if ( v387 >= 4 )
                                                                  {
                                                                    v384 = __ROL4__(v384, 8);
                                                                    v389 = v384;
                                                                  }
                                                                  else
                                                                  {
                                                                    v385 = __ROL4__(v385, 8);
                                                                    v389 = v385;
                                                                  }
                                                                  ++v387;
                                                                  *v386++ = v389;
                                                                }
                                                                while ( v387 < v1542 );
                                                                v390 = v1531 ^ 0x92F65A5;
                                                                v377 = v388;
                                                                v379 = v1586;
                                                                if ( (unsigned int)v1542 <= 4 )
                                                                {
                                                                  v391 = 0;
                                                                  if ( (unsigned int)v1542 < 4 )
                                                                  {
                                                                    v378 = v382;
                                                                    v390 = v390 >> (8 * (4 - v1542)) << (8 * (4 - v1542));
                                                                    v377 = v388;
                                                                    goto LABEL_493;
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  v391 = (unsigned int)v1638 >> (8 * (8 - v1542)) << (8 * (8 - v1542));
                                                                  v377 = v388;
                                                                }
                                                                v378 = v382;
LABEL_493:
                                                                v392 = v1531;
LABEL_494:
                                                                if ( v1580 >> 3 )
                                                                {
                                                                  v393 = HIDWORD(v1848);
                                                                  v394 = v377 + 7;
                                                                  v395 = v1492;
                                                                  v396 = v378 + 2;
                                                                  v1532 = WORD2(v1848);
                                                                  v1518 = WORD1(v1848);
                                                                  LODWORD(v1638) = 24670;
                                                                  v397 = v1580 >> 3;
                                                                  v398 = HIDWORD(v1848) ^ 0xAB69605E;
                                                                  do
                                                                  {
                                                                    v399 = *(v396 - 1) | (*(v396 - 2) << 8);
                                                                    v400 = v396[2] << 8;
                                                                    v401 = *v396;
                                                                    v396 += 8;
                                                                    v402 = *(v396 - 7) | ((v401 | (v399 << 8)) << 8);
                                                                    v403 = v402 ^ v390;
                                                                    v404 = *(v396 - 3) | ((*(v396 - 4) | ((*(v396 - 5) | v400) << 8)) << 8);
                                                                    v405 = v403 ^ v393 ^ 0xAB69605E ^ v404 ^ v391;
                                                                    v406 = (__ROL4__(v405, 10)
                                                                          + v1532 * __ROL4__(v405 + 1419157410, 5)) ^ v403;
                                                                    v407 = (WORD1(v1848) * __ROR4__(v393 + v406, 9)
                                                                          - __ROL4__(v406, 2)) ^ v405;
                                                                    v408 = ((_DWORD)v1638 * (v407 - v1532) - (v407 >> 13)) ^ v406;
                                                                    v409 = (HIWORD(v1848)
                                                                          * __ROL4__(v408 ^ WORD1(v1848), 6)
                                                                          - __ROL4__(v408, 2)) ^ v407;
                                                                    v410 = (v393 - (v409 ^ 0xAB69605E)) ^ v408;
                                                                    v411 = (v1518 * (v410 ^ v1532)) ^ __ROR4__(v410, 6) ^ v409;
                                                                    v412 = (__ROL4__(v411, 2)
                                                                          + (_DWORD)v1638 * __ROR4__(v411 + v393, 15)) ^ v410;
                                                                    v413 = (HIWORD(v1848)
                                                                          * __ROR4__(v412 + 1419157410, 14)
                                                                          - __ROL4__(v412, 8)) ^ v411;
                                                                    v414 = __ROR4__(v413, 10) ^ (v1532
                                                                                               * __ROR4__(
                                                                                                   v413 ^ 0xAB69605E,
                                                                                                   12)) ^ v412;
                                                                    v415 = (v414 >> 10) ^ (WORD1(v1848)
                                                                                         * (v414 ^ HIWORD(v1848))) ^ v413;
                                                                    v416 = (HIWORD(v1848)
                                                                          * ((_DWORD)v1638 + __ROR4__(~v415, 5))) ^ v414;
                                                                    v417 = (v416 - HIWORD(v1848)) ^ 0xAB69605E ^ v415;
                                                                    v418 = ((v417 >> 2)
                                                                          + v1532 * __ROL4__(v417 ^ HIWORD(v1848), 2)) ^ v416;
                                                                    v419 = (__ROL4__(v418, 7)
                                                                          + WORD1(v1848) * __ROR4__(v418 - v393, 6)) ^ v417;
                                                                    v420 = ((_DWORD)v1638 * (v419 ^ v1532)
                                                                          + __ROR4__(v419, 9)) ^ v418;
                                                                    v421 = (__ROL4__(v420, 7)
                                                                          + HIWORD(v1848)
                                                                          * __ROL4__(v420 ^ WORD1(v1848), 5)) ^ v419;
                                                                    v422 = v421 ^ v398 ^ v420;
                                                                    v423 = (v1532 * (__ROR4__(v422, 3) - WORD1(v1848))) ^ v421;
                                                                    v424 = ((_DWORD)v1638 * __ROR4__(v423 - v393, 1)
                                                                          - __ROR4__(v423, 6)) ^ v422;
                                                                    v425 = (__ROL4__(v424, 14)
                                                                          + HIWORD(v1848)
                                                                          * __ROL4__(v424 - 1419157410, 3)) ^ v423;
                                                                    v426 = (v1532 * __ROL4__(v425 - 1419157410, 15)
                                                                          - __ROR4__(v425, 14)) ^ v424;
                                                                    v427 = (v426 >> 3) ^ (WORD1(v1848)
                                                                                        * (v426 ^ (unsigned int)v1638)) ^ v425;
                                                                    v428 = v427 ^ v393;
                                                                    v429 = v427;
                                                                    v430 = v395 ^ v427;
                                                                    v395 = v404;
                                                                    v431 = v392 ^ __ROL4__(v429, 2) ^ ((_DWORD)v1638 * __ROL4__(v428, 4));
                                                                    v392 = v402;
                                                                    v432 = v431 ^ v426;
                                                                    *(v394 - 4) = v432;
                                                                    *v394 = v430;
                                                                    v394 += 8;
                                                                    v433 = __ROR4__(v432, 8);
                                                                    *(v394 - 13) = v433;
                                                                    v434 = __ROR4__(v430, 8);
                                                                    *(v394 - 9) = v434;
                                                                    v435 = __ROR4__(v433, 8);
                                                                    *(v394 - 14) = v435;
                                                                    v436 = __ROR4__(v434, 8);
                                                                    *(v394 - 10) = v436;
                                                                    v437 = __ROR4__(v435, 8);
                                                                    v438 = __ROR4__(v436, 8);
                                                                    *(v394 - 15) = v437;
                                                                    *(v394 - 11) = v438;
                                                                    v391 = __ROR4__(v438, 8);
                                                                    v390 = __ROR4__(v437, 8);
                                                                    --v397;
                                                                  }
                                                                  while ( v397 );
                                                                  v380 = 0;
                                                                  v97 = (void *)v1455;
                                                                  LODWORD(v2) = 0;
                                                                  v98 = (void *)v1402;
                                                                  v379 = v1586;
                                                                }
                                                                v439 = 0LL;
                                                                for ( jj = (int *)v1600; v439 < v1580; ++v439 )
                                                                  v380 ^= v1600[v439];
                                                                v1364 = (WCHAR *)v1641;
                                                                v1502 = (unsigned __int16 *)v1637;
                                                                v1601 = v1648;
                                                                v1555 = v1640;
                                                                v1403 = (size_t)v1619;
                                                                v1586 = v379;
                                                                if ( v380 == *(_QWORD *)(v1580 + v1389) )
                                                                {
                                                                  v1686 = 0;
                                                                  v1735 = jj;
                                                                  if ( (unsigned int)v1580 < 4 )
                                                                  {
                                                                    v1586 = v379;
                                                                    v441 = -1073741762;
                                                                    v271 = v1641;
                                                                    v1609 = jj;
                                                                    goto LABEL_481;
                                                                  }
                                                                  v1493 = *jj;
                                                                  v441 = RtlULongLongAdd(jj, 4LL, &v1735);
                                                                  v443 = v442;
                                                                  v1586 = v442;
                                                                  v1640 = v1555;
                                                                  v1619 = v444;
                                                                  v271 = v1364;
                                                                  v1648 = v1601;
                                                                  v1609 = v445;
                                                                  v1637 = v1502;
                                                                  v1641 = v1364;
                                                                  if ( v441 < 0 )
                                                                    goto LABEL_481;
                                                                  v446 = RtlUIntAdd(0LL, 4LL, &v1686);
                                                                  v449 = v1555;
                                                                  v441 = v446;
                                                                  v1637 = v1502;
                                                                  v1648 = v1601;
                                                                  v1609 = (int *)v447;
                                                                  v1586 = v443;
                                                                  v1619 = v448;
                                                                  v1640 = v1555;
                                                                  v1641 = v271;
                                                                  if ( v446 < 0 )
                                                                    goto LABEL_481;
                                                                  if ( (unsigned int)v1580 - v1686 < 4 )
                                                                    goto LABEL_526;
                                                                  v1533 = *(_DWORD *)v1735;
                                                                  v450 = RtlULongLongAdd(v1735, 4LL, &v1735);
                                                                  v271 = v1364;
                                                                  v441 = v450;
                                                                  v1640 = v1555;
                                                                  v1637 = v1502;
                                                                  v1648 = v1601;
                                                                  v1609 = v451;
                                                                  v1586 = v443;
                                                                  v1619 = v452;
                                                                  v1641 = v1364;
                                                                  if ( v450 < 0 )
                                                                    goto LABEL_481;
                                                                  v453 = RtlUIntAdd(v1686, 4LL, &v1686);
                                                                  v449 = v1555;
                                                                  v441 = v453;
                                                                  v1637 = v1502;
                                                                  v1648 = v1601;
                                                                  v1609 = (int *)v447;
                                                                  v1586 = v443;
                                                                  v1619 = v448;
                                                                  v1640 = v1555;
                                                                  v1641 = v271;
                                                                  if ( v453 < 0 )
                                                                    goto LABEL_481;
                                                                  if ( (unsigned int)v1580 - v1686 < v1533 )
                                                                  {
LABEL_526:
                                                                    v1619 = v448;
                                                                    v1640 = v449;
                                                                  }
                                                                  else
                                                                  {
                                                                    v441 = RtlUIntAdd(v1686, v1533, &v1686);
                                                                    v271 = v1364;
                                                                    v1637 = v1502;
                                                                    v1648 = v1601;
                                                                    v1609 = (int *)v447;
                                                                    v1586 = v443;
                                                                    v1619 = v454;
                                                                    v1640 = v1555;
                                                                    v1641 = v1364;
                                                                    if ( v441 < 0 )
                                                                      goto LABEL_481;
                                                                    if ( &v447[(unsigned int)v1580] >= (char *)v1735 + v1533
                                                                      && (unsigned __int64)(unsigned int)v1580
                                                                       + &v447[-v1533]
                                                                       - (_BYTE *)v1735 < 8 )
                                                                    {
                                                                      v441 = 0;
                                                                      v1637 = v1502;
                                                                      v1641 = v1364;
                                                                      v1619 = (void *)v1403;
                                                                      v1648 = v1601;
                                                                      v1581 = 0LL;
                                                                      v1519 = 0;
                                                                      v1609 = (int *)v447;
                                                                      v1586 = v443;
                                                                      v1640 = v1555;
                                                                      if ( v1735 )
                                                                      {
                                                                        v1456 = (unsigned int *)v1735;
                                                                        v441 = RtlULongLongAdd(v1735, v1533, &v1736);
                                                                        v456 = v1403;
                                                                        v1641 = v1364;
                                                                        v1648 = v1601;
                                                                        v1609 = v455;
                                                                        v1586 = v443;
                                                                        v1619 = (void *)v1403;
                                                                        v1640 = v1555;
                                                                        v1637 = v1502;
                                                                        if ( v441 < 0 )
                                                                        {
LABEL_480:
                                                                          v271 = v1641;
LABEL_481:
                                                                          v96 = v441 | 0x10000000;
                                                                          goto LABEL_482;
                                                                        }
                                                                        v1637 = v1502;
                                                                        v271 = v1364;
                                                                        v1648 = v1601;
                                                                        v1609 = v455;
                                                                        v1586 = v443;
                                                                        v1619 = (void *)v1403;
                                                                        v1640 = v1555;
                                                                        v1641 = v1364;
                                                                        if ( (unsigned __int64)v1456 < v1736 )
                                                                        {
                                                                          v457 = v443;
                                                                          v1641 = v1364;
                                                                          v458 = v1601;
                                                                          v1609 = v455;
                                                                          v459 = v1555;
                                                                          v1637 = v1502;
                                                                          v1648 = v1601;
                                                                          v1586 = v443;
                                                                          v1619 = (void *)v1403;
                                                                          v1640 = v1555;
                                                                          while ( 1 )
                                                                          {
                                                                            v1404 = v456;
                                                                            v1602 = v458;
                                                                            v1638 = v457;
                                                                            v1556 = v459;
                                                                            v441 = RtlULongLongAdd(v1456, 4LL, &v1737);
                                                                            if ( v441 < 0 )
                                                                              goto LABEL_542;
                                                                            if ( v1737 > v1736 )
                                                                              goto LABEL_531;
                                                                            v441 = RtlUIntAdd(4LL, *v1456, &v1687);
                                                                            if ( v441 < 0 )
                                                                              goto LABEL_481;
                                                                            v441 = RtlULongLongAdd(v1456, v1687, &v1738);
                                                                            v460 = v1602;
                                                                            v1586 = v461;
                                                                            v1640 = v462;
                                                                            v1648 = v1602;
                                                                            v1619 = (void *)v1404;
                                                                            v1637 = v1502;
                                                                            v1641 = v271;
                                                                            if ( v441 < 0 )
                                                                              goto LABEL_480;
                                                                            v463 = v1738;
                                                                            v464 = (unsigned int *)v1736;
                                                                            v1456 = v1738;
                                                                            v1637 = v1502;
                                                                            v1641 = v271;
                                                                            if ( (unsigned __int64)v1738 > v1736 )
                                                                            {
                                                                              v441 = -1073741811;
                                                                              v1586 = v1638;
                                                                              v1619 = (void *)v1404;
                                                                              v1640 = v1556;
                                                                              goto LABEL_530;
                                                                            }
                                                                            ++v1519;
                                                                            v457 = v1638;
                                                                            v459 = v1556;
                                                                            v456 = v1404;
                                                                            v458 = v1602;
                                                                            v1648 = v1602;
                                                                            v1586 = v1638;
                                                                            v1619 = (void *)v1404;
                                                                            v1640 = v1556;
                                                                            if ( (unsigned __int64)v1738 >= v1736 )
                                                                            {
                                                                              v1648 = v1602;
                                                                              v1586 = v1638;
                                                                              v1619 = (void *)v1404;
                                                                              v1640 = v1556;
                                                                              v1637 = v1502;
                                                                              v1641 = v271;
                                                                              goto LABEL_533;
                                                                            }
                                                                          }
                                                                        }
                                                                        v463 = v1456;
                                                                        v464 = (unsigned int *)v1736;
LABEL_533:
                                                                        if ( v463 != v464 )
                                                                        {
LABEL_531:
                                                                          v441 = -1073741811;
                                                                          goto LABEL_481;
                                                                        }
                                                                      }
                                                                      if ( v1533 )
                                                                      {
                                                                        v465 = GetProcessHeap();
                                                                        v466 = v1533;
                                                                        v1581 = HeapAlloc(v465, 8u, v1533);
                                                                        v467 = v1581;
                                                                        if ( !v1581 )
                                                                        {
                                                                          v441 = -1073741801;
                                                                          goto LABEL_480;
                                                                        }
                                                                        v441 = 0;
                                                                      }
                                                                      else
                                                                      {
                                                                        v466 = 0LL;
                                                                        v467 = 0LL;
                                                                      }
                                                                      if ( v1735 )
                                                                        memcpy_0(v467, v1735, v466);
                                                                      *((_QWORD *)&v1782 + 1) = v1581;
                                                                      LODWORD(v1782) = v1519;
LABEL_542:
                                                                      if ( v441 >= 0 && v1493 != (_DWORD)v1782 )
                                                                        v441 = -1073741762;
                                                                      goto LABEL_480;
                                                                    }
                                                                    v1619 = (void *)v1403;
                                                                    v1640 = v1555;
                                                                  }
                                                                  v441 = -1073741762;
                                                                  v271 = v1364;
                                                                  v1637 = v1502;
                                                                  v460 = v1601;
                                                                  v1586 = v443;
                                                                  v1609 = (int *)v447;
                                                                  v1641 = v1364;
LABEL_530:
                                                                  v1648 = v460;
                                                                  goto LABEL_481;
                                                                }
                                                                MemoryFree(jj);
LABEL_329:
                                                                v1609 = 0LL;
                                                                v96 = -805306367;
                                                                goto LABEL_330;
                                                              }
                                                              v368 = v1642;
                                                              v369 = (void *)*((_QWORD *)v1642 + 1);
                                                              if ( v369 )
                                                              {
                                                                v370 = GetProcessHeap();
                                                                HeapFree(v370, 0, v369);
                                                                v368[1] = 0LL;
                                                              }
                                                              v371 = (void *)v368[3];
                                                              if ( v371 )
                                                              {
                                                                v372 = GetProcessHeap();
                                                                HeapFree(v372, 0, v371);
                                                                v368[3] = 0LL;
                                                              }
                                                              v373 = (void *)v368[5];
                                                              if ( v373 )
                                                              {
                                                                v374 = GetProcessHeap();
                                                                HeapFree(v374, 0, v373);
                                                                v368[5] = 0LL;
                                                              }
                                                              v375 = GetProcessHeap();
                                                              HeapFree(v375, 0, v368);
                                                              v335 = v1599;
                                                              v271 = v1579;
                                                              v339 = v1491;
                                                              v1640 = v1541;
                                                              v1648 = v1388;
                                                              v1586 = 0LL;
                                                              v1402 = (size_t)v98;
                                                              v1455 = (SIZE_T)lpMema;
                                                              v1637 = v1599;
                                                              v1641 = v1579;
                                                              goto LABEL_469;
                                                            }
                                                            goto LABEL_327;
                                                          }
LABEL_332:
                                                          if ( !v271 )
                                                            goto LABEL_334;
                                                          goto LABEL_333;
                                                        }
                                                      }
                                                    }
                                                    v96 = -1073741811;
                                                    goto LABEL_482;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        v308 = GetProcessHeap();
                                        HeapFree(v308, 0, v1515);
                                        v271 = v1641;
                                      }
                                    }
                                  }
                                }
                              }
                              v293 = v1440;
                              goto LABEL_361;
                            }
                            v258[3] = v260;
                            v261 = (_OWORD *)v258[3];
                            v1641 = v1358;
                            *v261 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                            v261[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                            v261[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                            v261[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                            v261[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                            v261[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                            v261[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                            v261[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                            v261[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                            v261[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                            *((_DWORD *)v258 + 8) = 8;
                            v262 = GetProcessHeap();
                            v263 = HeapAlloc(v262, 8u, 8uLL);
                            if ( v263 )
                            {
                              v258[5] = v263;
                              v269 = v1637;
                              v252 = 0;
                              **((_QWORD **)v1637 + 5) = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                              v1640 = v269;
                              goto LABEL_312;
                            }
                            v255 = v1358;
                            v1637 = v258;
                          }
                          else
                          {
                            v255 = (WCHAR *)v189;
                          }
                          v1641 = v255;
                          goto LABEL_304;
                        }
                        v163 = 4;
                      }
                      else
                      {
                        LODWORD(v1642) = RtlUIntAdd(4LL, 4LL, &v1671);
                        v96 = (int)v1642;
                        if ( (int)v1642 < 0 )
                          goto LABEL_609;
                        LODWORD(v1642) = RtlUIntAdd(HIDWORD(v1780), v1671, (char *)&v1780 + 4);
                        v96 = (int)v1642;
                        if ( (int)v1642 >= 0 )
                        {
                          LODWORD(v1780) = v155 + v1780;
                          goto LABEL_245;
                        }
                      }
                      v94 = v125;
                      if ( v96 < 0 )
                        goto LABEL_613;
                      goto LABEL_245;
                    }
                  }
                  else
                  {
                    LODWORD(v1642) = RtlUIntAdd(4LL, 4LL, &v1669);
                    v96 = (int)v1642;
                    if ( (int)v1642 < 0 )
                      goto LABEL_613;
                    v152 = RtlUIntAdd(HIDWORD(v1780), v1669, (char *)&v1780 + 4);
                    v154 = v1780;
                    v96 = v152;
                    LODWORD(v1642) = v152;
                    if ( v152 >= 0 )
                    {
                      v155 = v153 - 3;
                      v156 = v153;
                      v154 = v153 - 3 + v1780;
                      LODWORD(v1780) = v154;
                      goto LABEL_229;
                    }
                  }
                  v94 = v125;
                  if ( v96 < 0 )
                    goto LABEL_613;
                  v156 = 4LL;
                  v155 = 1;
                  goto LABEL_229;
                }
                v140 = (unsigned int *)Src;
                v1721 = (unsigned int *)Src;
                v1437 = 0;
                if ( v130 )
                {
                  v141 = v1637;
                  do
                  {
                    LODWORD(v1642) = RtlUIntAdd(4LL, *v140, &v1666);
                    v96 = (int)v1642;
                    if ( (int)v1642 < 0 )
                      goto LABEL_193;
                    LODWORD(v1642) = RtlULongLongAdd(v142, v1666, &v1721);
                    v96 = (int)v1642;
                    if ( (int)v1642 < 0 )
                      goto LABEL_193;
                    v140 = v1721;
                    ++v1437;
                  }
                  while ( v1437 < v143 );
                  v1637 = v141;
                  v1400 = (size_t)v98;
                  v1453 = (SIZE_T)v97;
                }
                LODWORD(v1642) = RtlULongLongAdd(v140, 4LL, &v1786);
                v96 = (int)v1642;
                if ( (int)v1642 < 0 )
                  goto LABEL_194;
                if ( v144 + 3 <= (_DWORD *)((char *)Src + HIDWORD(v1780)) )
                {
                  v139 = v1786;
                  v132 = v1627;
                  *v144 = 8;
                  *v139 = v1627;
                  v134 = v1780 + 1;
                  goto LABEL_182;
                }
LABEL_191:
                v96 = -1073741789;
                goto LABEL_192;
              }
            }
            else
            {
              LODWORD(v1642) = RtlUIntAdd(4LL, 160LL, &v1661);
              v96 = (int)v1642;
              if ( (int)v1642 < 0 )
                goto LABEL_139;
              v123 = RtlUIntAdd(HIDWORD(v1780), v1661, (char *)&v1780 + 4);
              v124 = v1780;
              v96 = v123;
              LODWORD(v1642) = v123;
              if ( v123 >= 0 )
              {
                v125 = v1467;
                v124 = v1780 + 1;
                LODWORD(v1780) = v1780 + 1;
                goto LABEL_155;
              }
            }
            v125 = v1467;
            v94 = v1467;
            if ( v96 < 0 )
              goto LABEL_613;
            goto LABEL_155;
          }
          if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1715 && !wcscmp_0(v1715, L"Default") )
          {
            dwBytes_4 = 0;
            CurrentProcess = GetCurrentProcess();
            if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &dwBytes_4, 4LL) )
            {
              if ( (dwBytes_4 & 0xF) == 0 )
                v75 = 1;
              goto LABEL_108;
            }
            goto LABEL_68;
          }
        }
LABEL_108:
        v5 = v75;
        goto LABEL_109;
      }
      *((_BYTE *)lpModuleName + 823) = 0;
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      if ( !*(_BYTE *)lpModuleName )
        goto LABEL_54;
      v62 = 0;
      while ( 1 )
      {
        v63 = v56;
        v64 = -1LL;
        do
          ++v64;
        while ( v56[v64] );
        v65 = &v56[v64];
        v66 = (char *)&WARBIRD::g_arModuleInfo + 24 * v62;
        if ( !GetModuleHandleExW(0, v63, (HMODULE *)v66) )
          break;
        v59 = 0;
        if ( **(_WORD **)v66 == 23117
          && (v67 = *(int *)(*(_QWORD *)v66 + 60LL), (unsigned int)v67 < 0x10000000)
          && (v68 = *(_QWORD *)v66 + v67, v68 >= *(_QWORD *)v66)
          && *(_DWORD *)v68 == 17744 )
        {
          if ( ((*(_WORD *)(v68 + 24) - 267) & 0xFEFF) != 0 )
          {
            v59 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v66 + 12) = *(_QWORD *)(v68 + 136);
            *((_DWORD *)v66 + 2) = *(_DWORD *)(v68 + 80);
          }
        }
        else
        {
          v59 = -1073741701;
        }
        v69 = *(_DWORD *)(v65 + 1);
        v70 = 0;
        v56 = v65 + 3;
        for ( kk = v69; v70 < kk; ++v70 )
        {
          v71 = (const CHAR *)v56;
          v72 = -1LL;
          do
            ++v72;
          while ( *((_BYTE *)v56 + v72) );
          v56 = (WCHAR *)((char *)v56 + v72 + 1);
          if ( v59 >= 0 )
          {
            v73 = (void **)GetProcAddress(*(HMODULE *)v66, v71);
            if ( !v73 )
              goto LABEL_53;
            (&WARBIRD::g_FuncAddress)[(unsigned int)v1639] = v73;
          }
          LODWORD(v1639) = (_DWORD)v1639 + 1;
        }
        ++v62;
        if ( !*(_BYTE *)v56 )
          goto LABEL_53;
      }
      v59 = -1073741702;
LABEL_53:
      if ( lpModuleName )
      {
LABEL_54:
        v74 = GetProcessHeap();
        HeapFree(v74, 0, lpModuleName);
      }
      if ( v59 < 0 )
        goto LABEL_24;
      v7 = g_WarbirdSecureFunctionsRefCount;
      v5 = 0;
    }
    g_WarbirdSecureFunctionsRefCount = v7 + 1;
    goto LABEL_58;
  }
  *a1 = `CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedCachedValue;
  ReleaseSRWLockShared(&`CdplIsSupportedInl'::`2'::s_isConsumerDataProtectionSupportedLock);
  return (unsigned int)v3;
}
