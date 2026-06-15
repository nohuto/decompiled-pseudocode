/*
 * XREFs of ??0AtmosCheck@@QEAA@XZ @ 0x18005D3BC
 * Callers:
 *     ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x18005D340 (--$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VAtmosCheck@@@12@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RtlUIntAdd @ 0x180039660 (RtlUIntAdd.c)
 *     RtlULongLongAdd @ 0x180039680 (RtlULongLongAdd.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@2@@Z @ 0x180053BF4 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180053BF4.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@QEAA@XZ @ 0x18005D638 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18006501C (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x1800658FC (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006709C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     StringCchLengthW @ 0x180075870 (StringCchLengthW.c)
 *     _alloca_probe @ 0x180075970 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1800759C4 (wcscmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x18015F214 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x18015F244 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=11
AtmosCheck *__fastcall AtmosCheck::AtmosCheck(AtmosCheck *this)
{
  AtmosCheck *v1; // rbx
  _QWORD *v2; // rax
  int v3; // r15d
  int v5; // eax
  _BYTE *v6; // rbx
  int v7; // r13d
  int v8; // eax
  int v9; // esi
  int v10; // r11d
  _BYTE *v11; // r15
  unsigned __int8 *v12; // r12
  __int64 v13; // r14
  int v14; // r10d
  int v15; // r9d
  int v16; // r11d
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
  unsigned int v29; // esi
  int v30; // r11d
  int v31; // esi
  int v32; // r11d
  int v33; // esi
  unsigned int v34; // r11d
  int v35; // esi
  int v36; // r11d
  int v37; // esi
  unsigned int v38; // r11d
  int v39; // esi
  int v40; // r11d
  int v41; // esi
  int v42; // r11d
  int v43; // esi
  int v44; // r11d
  int v45; // esi
  int v46; // r11d
  int v47; // esi
  char v48; // al
  unsigned __int64 v49; // rcx
  int v50; // r14d
  unsigned int v51; // r13d
  HMODULE *v52; // rdi
  __int64 v53; // rbx
  const WCHAR *v54; // rdx
  __int64 v55; // rax
  _BYTE *v56; // rbx
  char *v57; // rdi
  __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  unsigned int v60; // r12d
  unsigned int i; // r15d
  const CHAR *v62; // rdx
  __int64 v63; // rax
  __int64 (__fastcall *ProcAddress)(); // rcx
  HANDLE ProcessHeap; // rax
  int v66; // esi
  signed int v67; // edi
  __int64 v68; // r14
  wchar_t *v69; // rax
  wchar_t *v70; // rbx
  __int64 j; // r9
  wchar_t *v72; // r8
  signed int LastError; // eax
  bool v74; // sf
  __int64 (__fastcall *v75)(); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v77; // r14
  wchar_t *v78; // rax
  bool v79; // sf
  wchar_t *v80; // rbx
  __int64 k; // r9
  wchar_t *v82; // r8
  signed int v83; // eax
  HANDLE CurrentProcess; // rax
  int v85; // r13d
  HLOCAL v86; // rdi
  int v87; // r14d
  void *v88; // r15
  void *v89; // r12
  HANDLE v90; // rax
  _OWORD *v91; // rax
  HANDLE v92; // rax
  _QWORD *v93; // rax
  unsigned int v94; // ecx
  unsigned int v95; // r10d
  int v96; // edi
  unsigned int v97; // r9d
  size_t v98; // rdx
  const wchar_t *v99; // rcx
  unsigned int v100; // r10d
  unsigned int v101; // ecx
  unsigned int v102; // r11d
  unsigned int v103; // r10d
  unsigned int v104; // r9d
  unsigned int v105; // r11d
  unsigned int v106; // ecx
  unsigned int v107; // eax
  unsigned int v108; // edi
  HANDLE v109; // rax
  void *v110; // rax
  void *v111; // r13
  _DWORD *v112; // r10
  int v113; // r11d
  int v114; // r10d
  unsigned int v115; // edi
  int v116; // r10d
  int v117; // r11d
  int v118; // r9d
  int *v119; // rax
  int v120; // r9d
  unsigned int v121; // r11d
  unsigned int v122; // edi
  int v123; // r9d
  int v124; // r10d
  int v125; // r11d
  int *v126; // r10
  unsigned __int64 v127; // r10
  unsigned int v128; // r11d
  unsigned int *v129; // r10
  size_t v130; // rdx
  const wchar_t *v131; // rcx
  int v132; // r10d
  int *v133; // rdi
  unsigned int v134; // r11d
  unsigned int v135; // r11d
  int v136; // r10d
  int *v137; // rdi
  int v138; // r10d
  __int64 v139; // r9
  void *v140; // r10
  int v141; // edi
  int v142; // r11d
  int *v143; // rdi
  unsigned int v144; // r11d
  unsigned int v145; // r11d
  int *v146; // rdi
  unsigned int v147; // r11d
  unsigned int v148; // ecx
  unsigned int v149; // edi
  int v150; // r9d
  unsigned int v151; // r11d
  unsigned int v152; // r11d
  unsigned int v153; // r11d
  unsigned int v154; // r11d
  _DWORD *v155; // r10
  _DWORD *v156; // rdi
  _QWORD *v157; // r10
  int v158; // r11d
  int v159; // r14d
  unsigned int v160; // ecx
  unsigned int v161; // edi
  HANDLE v162; // rax
  void *v163; // rcx
  unsigned int v164; // r11d
  unsigned int v165; // ecx
  HANDLE v166; // rax
  unsigned __int64 v167; // r14
  WCHAR *v168; // rdx
  unsigned __int8 v169; // al
  unsigned __int64 v170; // rcx
  unsigned __int8 *v171; // r11
  WCHAR *v172; // rcx
  unsigned int v173; // r9d
  int v174; // r10d
  unsigned int v175; // r8d
  int v176; // r10d
  unsigned int v177; // ecx
  char v178; // si
  int v179; // r14d
  unsigned int v180; // r10d
  unsigned int v181; // ecx
  unsigned int v182; // r14d
  int v183; // edx
  WCHAR *v184; // rbx
  char v185; // di
  size_t v186; // r14
  _BYTE *v187; // r15
  unsigned __int8 *v188; // rdx
  char *v189; // r11
  unsigned int v190; // esi
  int v191; // r14d
  int v192; // eax
  int v193; // r12d
  int v194; // r8d
  int v195; // edi
  int v196; // r10d
  int v197; // r9d
  int v198; // r10d
  int v199; // r9d
  int v200; // r10d
  unsigned int v201; // r9d
  int v202; // r10d
  int v203; // r9d
  int v204; // r10d
  int v205; // r9d
  int v206; // r10d
  int v207; // r9d
  unsigned int v208; // r10d
  unsigned int v209; // r9d
  int v210; // r10d
  int v211; // r9d
  int v212; // r10d
  int v213; // r9d
  int v214; // r10d
  int v215; // r9d
  int v216; // r10d
  int v217; // r9d
  unsigned int v218; // r10d
  int v219; // r9d
  int v220; // ecx
  int v221; // r9d
  int v222; // r10d
  int v223; // r9d
  int v224; // r10d
  int v225; // r9d
  int v226; // r10d
  int v227; // r9d
  int v228; // r10d
  HANDLE v229; // rax
  _DWORD *v230; // rax
  int v231; // r14d
  int *v232; // rax
  HANDLE v233; // rax
  _QWORD *v234; // rax
  HANDLE v235; // rax
  HANDLE v236; // rax
  HANDLE v237; // rax
  HANDLE v238; // rax
  int *v239; // r9
  HANDLE v240; // rax
  LPVOID v241; // rax
  unsigned int v242; // eax
  HANDLE v243; // rax
  LPVOID v244; // rax
  _OWORD *v245; // rcx
  HANDLE v246; // rax
  LPVOID v247; // rax
  _DWORD *v248; // rax
  HANDLE v249; // rax
  HANDLE v250; // rax
  HANDLE v251; // rax
  HANDLE v252; // rax
  int v253; // ecx
  int v254; // r11d
  int v255; // r14d
  int v256; // r10d
  unsigned int v257; // edi
  HANDLE v258; // rax
  _DWORD *v259; // rax
  SIZE_T v260; // rcx
  void *v261; // rcx
  SIZE_T v262; // r9
  void *v263; // rcx
  SIZE_T v264; // r9
  HANDLE v265; // rax
  int v266; // eax
  int v267; // ecx
  int *v268; // r9
  void *v269; // r10
  unsigned int v270; // eax
  int *v271; // r9
  void *v272; // r10
  unsigned int *v273; // rcx
  int v274; // r11d
  unsigned int *v275; // rcx
  int v276; // r11d
  int v277; // ecx
  int v278; // r11d
  SIZE_T v279; // r9
  void *v280; // r10
  void *v281; // r14
  unsigned int v282; // edi
  HANDLE v283; // rax
  unsigned int *v284; // rax
  HANDLE v285; // rax
  HANDLE v286; // rax
  HANDLE v287; // rax
  HANDLE v288; // rax
  HANDLE v289; // rax
  HANDLE v290; // rax
  HANDLE v291; // rax
  HANDLE v292; // rax
  HANDLE v293; // rax
  HANDLE v294; // rax
  HANDLE v295; // rax
  HANDLE v296; // rax
  FARPROC v297; // rax
  int v298; // eax
  unsigned int v299; // edx
  void *v300; // rcx
  LPCWSTR v301; // r8
  void *v302; // r9
  void *v303; // rax
  void *v304; // r10
  int *v305; // r11
  signed int v306; // eax
  void *v307; // rax
  __int64 v308; // r14
  void *v309; // r10
  unsigned int v310; // ecx
  unsigned int v311; // ecx
  SIZE_T v312; // rax
  unsigned int v313; // r8d
  unsigned int v314; // ecx
  unsigned int *v315; // rax
  HANDLE v316; // rax
  _QWORD *v317; // r8
  int v318; // r14d
  HANDLE v319; // rax
  void *v320; // rcx
  size_t v321; // r9
  HANDLE v322; // rax
  void *v323; // rcx
  unsigned int *v324; // rdx
  int *v325; // rax
  void *v326; // rcx
  size_t v327; // rax
  unsigned int v328; // r14d
  HANDLE v329; // rax
  void *v330; // rcx
  _QWORD *v331; // rax
  HANDLE v332; // rax
  HANDLE v333; // rax
  HANDLE v334; // rax
  HANDLE v335; // rax
  unsigned int *v336; // r9
  void *v337; // r14
  HANDLE v338; // rax
  void *v339; // r14
  HANDLE v340; // rax
  void *v341; // r14
  HANDLE v342; // rax
  HANDLE v343; // rax
  int v344; // r14d
  WCHAR *v345; // r11
  unsigned __int8 v346; // al
  unsigned __int8 *v347; // r9
  LPCWSTR v348; // rcx
  _QWORD *v349; // r10
  char v350; // al
  unsigned __int8 *v351; // rsi
  int v352; // r11d
  int v353; // ecx
  int v354; // ecx
  int v355; // ebx
  int v356; // edx
  WCHAR *v357; // rdi
  char v358; // r9
  unsigned int v359; // r14d
  int v360; // r13d
  _BYTE *v361; // r15
  unsigned __int8 *v362; // rdx
  int v363; // ebx
  int v364; // eax
  int v365; // r11d
  SIZE_T v366; // r10
  unsigned int v367; // r12d
  int v368; // r9d
  int v369; // r8d
  int v370; // r14d
  unsigned int v371; // ebx
  int v372; // r14d
  unsigned int v373; // ebx
  int v374; // r14d
  int v375; // ebx
  unsigned int v376; // r14d
  int v377; // ebx
  int v378; // r14d
  int v379; // ebx
  unsigned int v380; // r14d
  int v381; // ebx
  int v382; // r14d
  unsigned int v383; // ebx
  int v384; // r14d
  int v385; // ebx
  int v386; // r14d
  int v387; // ebx
  int v388; // r14d
  int v389; // ebx
  int v390; // r14d
  int v391; // ebx
  unsigned int v392; // r14d
  int v393; // ebx
  int v394; // r14d
  int v395; // ebx
  int v396; // r14d
  int v397; // ebx
  int v398; // r14d
  int v399; // ebx
  int v400; // r14d
  int v401; // ebx
  SIZE_T m; // rcx
  int v403; // r14d
  WCHAR *v404; // r11
  _QWORD *v405; // r9
  _QWORD *v406; // r9
  unsigned int *v407; // r10
  WCHAR *v408; // r11
  int *v409; // rcx
  WCHAR *v410; // r11
  _QWORD *v411; // r9
  unsigned int *v412; // r10
  unsigned int *v413; // r10
  _QWORD *v414; // r9
  WCHAR *v415; // r11
  _QWORD *v416; // rax
  SIZE_T v417; // r11
  int *v418; // r9
  const WCHAR *v419; // r10
  unsigned __int64 v420; // rcx
  int *v421; // rcx
  _QWORD *v422; // r10
  unsigned int *v423; // r11
  int *v424; // r9
  unsigned __int64 v425; // rdx
  unsigned int v426; // edx
  HANDLE v427; // rax
  void *v428; // rcx
  int v429; // edi
  int v430; // r11d
  _DWORD *v431; // rax
  int *v432; // rcx
  int v433; // edi
  unsigned int v434; // r10d
  int v435; // edi
  int *v436; // r11
  int *v437; // rax
  int *v438; // rcx
  unsigned int v439; // edi
  unsigned int v440; // r10d
  int v441; // edi
  int *v442; // r11
  int *v443; // rax
  LPVOID v444; // rcx
  unsigned int v445; // edi
  unsigned int v446; // r10d
  int v447; // r11d
  LPVOID v448; // r10
  unsigned int *v449; // rcx
  unsigned int v450; // edi
  unsigned int v451; // edi
  unsigned int *v452; // rax
  unsigned int *v453; // rcx
  unsigned int v454; // edi
  unsigned int v455; // edi
  int v456; // eax
  const void *v457; // r10
  size_t v458; // r11
  unsigned int *v459; // rax
  void *v460; // r13
  HANDLE v461; // rax
  void *v462; // r13
  HANDLE v463; // rax
  HANDLE v464; // rax
  HANDLE v465; // rax
  DWORD ModuleFileNameW; // eax
  int v467; // r13d
  unsigned int v468; // edi
  int v469; // eax
  char *v470; // r15
  int v471; // eax
  int v472; // esi
  _BYTE *v473; // rbx
  unsigned __int8 *v474; // rdi
  __int64 v475; // r12
  int v476; // r15d
  int v477; // r11d
  int v478; // r10d
  int v479; // r13d
  unsigned int v480; // r9d
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
  unsigned int v492; // esi
  int v493; // r13d
  int v494; // esi
  int v495; // r13d
  int v496; // esi
  unsigned int v497; // r13d
  int v498; // esi
  int v499; // r13d
  int v500; // esi
  unsigned int v501; // r13d
  int v502; // esi
  int v503; // r13d
  int v504; // esi
  int v505; // r13d
  int v506; // esi
  int v507; // r13d
  int v508; // esi
  int v509; // r13d
  int v510; // esi
  unsigned __int64 v511; // rcx
  char v512; // al
  WCHAR *v513; // r15
  int v514; // r12d
  HMODULE *v515; // r15
  __int64 v516; // r12
  const WCHAR *v517; // rdx
  __int64 v518; // rax
  WCHAR *v519; // r15
  char *v520; // r13
  __int64 v521; // rcx
  unsigned __int64 v522; // rcx
  unsigned int v523; // ecx
  const CHAR *v524; // rdx
  __int64 v525; // rax
  __int64 (__fastcall *v526)(); // rcx
  HANDLE v527; // rax
  int v528; // eax
  char *v529; // r15
  int v530; // eax
  int v531; // ebx
  _BYTE *v532; // rsi
  unsigned __int8 *v533; // rdi
  __int64 v534; // r12
  int v535; // r15d
  int v536; // r11d
  int v537; // r10d
  int v538; // r13d
  unsigned int v539; // r9d
  int v540; // r13d
  unsigned int v541; // r9d
  int v542; // r13d
  int v543; // r9d
  unsigned int v544; // r13d
  int v545; // r9d
  int v546; // r13d
  int v547; // r9d
  unsigned int v548; // r13d
  int v549; // edx
  int v550; // r13d
  unsigned int v551; // ebx
  int v552; // r13d
  int v553; // ebx
  int v554; // r13d
  int v555; // ebx
  unsigned int v556; // r13d
  int v557; // ebx
  int v558; // r13d
  int v559; // ebx
  unsigned int v560; // r13d
  int v561; // ebx
  int v562; // r13d
  int v563; // ebx
  int v564; // r13d
  int v565; // ebx
  int v566; // r13d
  int v567; // ebx
  int v568; // r13d
  int v569; // ebx
  unsigned __int64 v570; // rcx
  char v571; // al
  WCHAR *v572; // r15
  int v573; // r12d
  HMODULE *v574; // r15
  __int64 v575; // r12
  const WCHAR *v576; // rdx
  __int64 v577; // rax
  WCHAR *v578; // r15
  char *v579; // r13
  __int64 v580; // rcx
  unsigned __int64 v581; // rcx
  unsigned int v582; // ecx
  const CHAR *v583; // rdx
  __int64 v584; // rax
  __int64 (__fastcall *v585)(); // rcx
  HANDLE v586; // rax
  int v587; // r12d
  signed int v588; // eax
  signed int v589; // r15d
  _DWORD *v590; // rdi
  signed int v591; // eax
  char *v592; // r13
  _DWORD *v593; // r12
  unsigned int kk; // esi
  __int64 v595; // rax
  unsigned int v596; // r10d
  unsigned int v597; // r9d
  __int64 v598; // r8
  unsigned int v599; // ecx
  unsigned int *v600; // rdx
  __int64 v601; // r15
  const wchar_t *v602; // rcx
  unsigned __int16 **v603; // rdx
  __int64 v604; // rdi
  __int64 v605; // rax
  unsigned __int16 *v606; // r12
  char *v607; // r13
  char *v608; // rax
  int v609; // r11d
  int v610; // r13d
  int v611; // r15d
  _BYTE *v612; // rbx
  unsigned __int8 *v613; // rsi
  __int64 v614; // r12
  int v615; // r10d
  int v616; // r9d
  int v617; // r8d
  int v618; // r11d
  unsigned int v619; // edi
  int v620; // r11d
  unsigned int v621; // edi
  int v622; // r11d
  int v623; // edi
  unsigned int v624; // r11d
  int v625; // edi
  int v626; // r11d
  int v627; // edi
  unsigned int v628; // r11d
  int v629; // ecx
  int v630; // r11d
  unsigned int v631; // r15d
  int v632; // r11d
  int v633; // r15d
  int v634; // r11d
  int v635; // r15d
  unsigned int v636; // r11d
  int v637; // r15d
  int v638; // r11d
  int v639; // r15d
  unsigned int v640; // r11d
  int v641; // r15d
  int v642; // r11d
  int v643; // r15d
  int v644; // r11d
  int v645; // r15d
  int v646; // r11d
  int v647; // r15d
  int v648; // r11d
  int v649; // r15d
  unsigned __int64 v650; // rax
  __m128i v651; // xmm1
  char *v652; // r10
  __m128i v653; // xmm0
  __m128i v654; // xmm1
  __m128i v655; // xmm1
  __m128i v656; // xmm1
  _QWORD *v657; // rdx
  __int64 v658; // r8
  unsigned int jj; // ecx
  __int64 v660; // rax
  _QWORD *v661; // r12
  unsigned int v662; // r8d
  _QWORD *v663; // rdx
  __int16 *v664; // rcx
  __int64 v665; // rax
  __int16 v666; // r9
  _WORD *v667; // rcx
  _BYTE *v668; // rcx
  __int64 v669; // rax
  int v670; // eax
  LPVOID v671; // rcx
  __int64 v672; // rax
  signed int v673; // eax
  signed int v674; // eax
  __int64 v675; // rax
  _WORD *v676; // rdi
  __int64 v677; // rcx
  void **v678; // rax
  void **v679; // rax
  void **v680; // rax
  signed int v681; // eax
  int v682; // eax
  unsigned int v683; // edi
  char *v684; // rax
  bool v685; // sf
  int v686; // eax
  HMODULE *v687; // rdi
  __int64 v688; // r13
  unsigned int v689; // edi
  int v690; // r15d
  __int64 v691; // rax
  int v692; // r13d
  int v693; // eax
  void *v694; // rdi
  __int64 v695; // rax
  __int64 v696; // rax
  __int64 v697; // r15
  __int64 v698; // rax
  __int64 v699; // rdi
  signed int v700; // edi
  bool v701; // sf
  __int64 v702; // rax
  bool v703; // sf
  __int64 v704; // r12
  signed int v705; // eax
  __int64 v706; // rax
  unsigned int v707; // r13d
  signed int v708; // eax
  int v709; // r12d
  unsigned int v710; // edx
  int v711; // eax
  unsigned int v712; // r12d
  void *v713; // rdi
  void *v714; // rdi
  __int64 v715; // rdi
  signed int v716; // eax
  unsigned int v717; // r13d
  __int64 v718; // rax
  bool v719; // sf
  void *v720; // rdi
  __int64 v721; // r12
  int v722; // eax
  __int64 v723; // rdx
  int v724; // edx
  int v725; // r13d
  int v726; // r15d
  int v727; // edi
  __int64 v728; // rax
  __int64 v729; // rax
  int v730; // edx
  int v731; // eax
  char *v732; // rcx
  __int64 (__fastcall *v733)(); // rdi
  __int64 v734; // rax
  int v735; // r9d
  int v736; // r10d
  int v737; // edx
  int v738; // r8d
  int v739; // r12d
  int v740; // r11d
  char *v741; // rdx
  __int64 v742; // rdi
  size_t v743; // rax
  int v744; // r8d
  unsigned __int8 *v745; // r9
  size_t v746; // r10
  int v747; // r8d
  void *v748; // rdi
  __int64 v749; // rax
  __int64 v750; // rax
  __int64 v751; // r15
  __int64 v752; // rax
  __int64 v753; // rdi
  signed int v754; // eax
  signed int v755; // edi
  __int64 v756; // rcx
  __int64 v757; // rcx
  __int64 v758; // rcx
  int v759; // eax
  HMODULE *v760; // rdi
  __int64 v761; // r15
  int v762; // r13d
  int v763; // eax
  char *v764; // rax
  int v765; // esi
  int v766; // r12d
  int v767; // r13d
  int v768; // r11d
  _BYTE *v769; // rbx
  unsigned __int8 *v770; // rax
  __int64 v771; // r15
  int v772; // r10d
  int v773; // r9d
  int v774; // r11d
  unsigned int v775; // r8d
  int v776; // r11d
  unsigned int v777; // r8d
  int v778; // r11d
  int v779; // r8d
  unsigned int v780; // r11d
  int v781; // r8d
  int v782; // r11d
  int v783; // r8d
  unsigned int v784; // r11d
  int v785; // r8d
  int v786; // r11d
  unsigned int v787; // r13d
  int v788; // r11d
  int v789; // r13d
  int v790; // r11d
  int v791; // r13d
  unsigned int v792; // edi
  int v793; // r13d
  int v794; // edi
  int v795; // r13d
  unsigned int v796; // edi
  int v797; // r13d
  int v798; // r11d
  int v799; // r13d
  int v800; // r11d
  int v801; // r13d
  int v802; // r11d
  int v803; // r13d
  int v804; // r11d
  int v805; // r13d
  unsigned __int64 v806; // rcx
  char v807; // al
  WCHAR *v808; // r15
  int v809; // r12d
  HMODULE *v810; // rdi
  __int64 v811; // r15
  HMODULE *v812; // rdi
  int v813; // eax
  char *v814; // rcx
  __int64 (__fastcall *v815)(); // rdi
  __int64 v816; // rax
  int v817; // eax
  int v818; // r9d
  int v819; // r10d
  int v820; // edx
  int v821; // r8d
  int v822; // r12d
  int v823; // r11d
  char *v824; // rdx
  __int64 v825; // rdi
  size_t v826; // rax
  int v827; // r8d
  unsigned __int8 *v828; // r9
  size_t v829; // r10
  char v830; // bl
  int v831; // r8d
  __int64 v832; // rdi
  size_t v833; // r13
  char v834; // al
  unsigned int v835; // r15d
  int v836; // ecx
  int v837; // edi
  int v838; // r12d
  int v839; // edi
  int v840; // r12d
  __int64 v841; // rax
  __int64 v842; // rax
  __int64 v843; // rcx
  unsigned int v844; // edi
  __int64 v845; // rax
  signed int v846; // edi
  bool v847; // sf
  LPCWSTR v848; // rcx
  int v849; // eax
  char *v850; // rcx
  __int64 (__fastcall *v851)(); // rdi
  __int64 v852; // rax
  int v853; // r9d
  int v854; // r10d
  int v855; // ecx
  int v856; // r8d
  int v857; // edx
  int v858; // r11d
  char *v859; // rdx
  __int64 v860; // rdi
  size_t v861; // rax
  int v862; // r8d
  int v863; // esi
  unsigned __int8 *v864; // r9
  size_t v865; // r10
  int v866; // r8d
  void *v867; // rdi
  __int64 v868; // rax
  __int64 v869; // rax
  __int64 v870; // rdi
  unsigned int v871; // r12d
  __int64 v872; // rax
  signed int v873; // eax
  signed int v874; // edi
  LPVOID v875; // r12
  int v876; // eax
  char *v877; // rcx
  __int64 (__fastcall *v878)(); // rdi
  __int64 v879; // rax
  int v880; // eax
  int v881; // r9d
  int v882; // r10d
  int v883; // ecx
  int v884; // r8d
  int v885; // edx
  int v886; // r11d
  char *v887; // rdx
  __int64 v888; // rdi
  size_t v889; // rax
  int v890; // ebx
  int v891; // r8d
  unsigned __int8 *v892; // r9
  size_t v893; // r10
  char v894; // r12
  int v895; // r8d
  const WCHAR *v896; // rdx
  __int64 v897; // rax
  WCHAR *v898; // r15
  char *v899; // rdi
  __int64 v900; // rcx
  unsigned __int64 v901; // rcx
  unsigned int v902; // ecx
  const CHAR *v903; // rdx
  __int64 v904; // rax
  __int64 (__fastcall *v905)(); // rcx
  HANDLE v906; // rax
  __int64 v907; // r15
  int v908; // eax
  void *v909; // r15
  WCHAR *v910; // r12
  HANDLE v911; // rax
  _OWORD *v912; // rax
  HANDLE v913; // rax
  WCHAR *v914; // rax
  WCHAR *v915; // r13
  unsigned int v916; // r11d
  int v917; // eax
  int v918; // r9d
  unsigned int v919; // r11d
  int v920; // r10d
  int v921; // eax
  int v922; // r9d
  unsigned int v923; // r11d
  int v924; // r10d
  int v925; // eax
  int v926; // r10d
  unsigned int v927; // edi
  HANDLE v928; // rax
  void *v929; // rdi
  unsigned __int8 *v930; // r13
  int v931; // r10d
  _DWORD *v932; // r11
  int v933; // r11d
  __int64 v934; // r11
  int *v935; // r9
  unsigned __int64 v936; // r9
  unsigned int v937; // r11d
  unsigned int *v938; // r9
  unsigned int v939; // r10d
  int v940; // r9d
  int v941; // r10d
  __int64 v942; // r11
  int *v943; // r10
  unsigned __int64 v944; // r10
  unsigned int v945; // r9d
  _DWORD *v946; // r10
  unsigned int v947; // edi
  int v948; // r10d
  unsigned int v949; // r11d
  int *v950; // r9
  unsigned __int64 v951; // r9
  _DWORD *v952; // r9
  unsigned int v953; // ecx
  unsigned int v954; // edi
  int v955; // edi
  unsigned int v956; // r9d
  _QWORD *v957; // r11
  unsigned int v958; // ecx
  unsigned int v959; // edi
  HANDLE v960; // rax
  unsigned __int8 *v961; // rax
  SIZE_T v962; // r9
  void *v963; // rcx
  SIZE_T v964; // r9
  HANDLE v965; // rax
  int v966; // edi
  unsigned __int64 v967; // rdi
  SIZE_T v968; // rcx
  unsigned __int8 v969; // al
  unsigned __int64 v970; // rdx
  unsigned __int8 *v971; // rdi
  unsigned int v972; // r10d
  int v973; // r11d
  unsigned __int64 v974; // r8
  unsigned int v975; // edx
  int v976; // r11d
  unsigned int v977; // ecx
  char v978; // bl
  int v979; // r9d
  unsigned int v980; // r11d
  unsigned int v981; // ecx
  unsigned int v982; // r9d
  _BYTE *v983; // rsi
  int v984; // r8d
  char v985; // al
  int v986; // r14d
  _BYTE *v987; // r12
  unsigned __int8 *v988; // r15
  SIZE_T v989; // rsi
  unsigned int v990; // eax
  int v991; // r9d
  int v992; // r8d
  int v993; // r11d
  int v994; // r10d
  int v995; // r11d
  int v996; // r10d
  int v997; // r11d
  unsigned int v998; // r10d
  int v999; // r11d
  int v1000; // r10d
  int v1001; // r11d
  int v1002; // r10d
  int v1003; // r11d
  int v1004; // r10d
  unsigned int v1005; // r11d
  unsigned int v1006; // r10d
  int v1007; // r11d
  int v1008; // r10d
  int v1009; // r11d
  int v1010; // r10d
  int v1011; // r11d
  int v1012; // r10d
  int v1013; // r11d
  int v1014; // r10d
  unsigned int v1015; // r11d
  int v1016; // r10d
  int v1017; // ecx
  int v1018; // r10d
  int v1019; // r11d
  int v1020; // r10d
  int v1021; // r11d
  int v1022; // r10d
  int v1023; // r11d
  int v1024; // r10d
  int v1025; // r11d
  HANDLE v1026; // rax
  const void **v1027; // rbx
  int v1028; // edi
  HANDLE v1029; // rax
  void *v1030; // rax
  HANDLE v1031; // rax
  _OWORD *v1032; // rax
  HANDLE v1033; // rax
  _QWORD *v1034; // rax
  HANDLE v1035; // rax
  _QWORD *v1036; // rax
  HANDLE v1037; // rax
  HANDLE v1038; // rax
  HANDLE v1039; // rax
  HANDLE v1040; // rax
  int v1041; // ecx
  int v1042; // edi
  int v1043; // r9d
  int v1044; // r10d
  HANDLE v1045; // rax
  HANDLE v1046; // rax
  HANDLE v1047; // rax
  HANDLE v1048; // rax
  unsigned int v1049; // edi
  HANDLE v1050; // rax
  _DWORD *v1051; // rax
  void *v1052; // rcx
  void *v1053; // rcx
  void *v1054; // r9
  void *v1055; // rcx
  void *v1056; // r9
  HANDLE v1057; // rax
  int v1058; // eax
  int v1059; // ecx
  WCHAR *v1060; // r10
  unsigned int v1061; // eax
  HANDLE v1062; // rax
  void *v1063; // rsi
  HANDLE v1064; // rax
  void *v1065; // rsi
  HANDLE v1066; // rax
  void *v1067; // rsi
  HANDLE v1068; // rax
  HANDLE v1069; // rax
  HANDLE v1070; // rax
  HANDLE v1071; // rax
  void *v1072; // rsi
  HANDLE v1073; // rax
  void *v1074; // rsi
  HANDLE v1075; // rax
  void *v1076; // rsi
  HANDLE v1077; // rax
  HANDLE v1078; // rax
  HANDLE v1079; // rax
  _DWORD *v1080; // rdi
  unsigned __int64 v1081; // rcx
  __int64 v1082; // r11
  int *v1083; // rax
  int v1084; // edi
  unsigned int v1085; // r9d
  WCHAR *v1086; // r10
  void *v1087; // rcx
  unsigned int v1088; // r11d
  int v1089; // r10d
  void *v1090; // rcx
  unsigned int v1091; // r11d
  int v1092; // r10d
  int v1093; // ecx
  int v1094; // r10d
  size_t v1095; // r9
  unsigned int v1096; // edi
  HANDLE v1097; // rax
  unsigned int *v1098; // rax
  FARPROC v1099; // rax
  int v1100; // eax
  unsigned int v1101; // edx
  unsigned __int8 *v1102; // r8
  void *v1103; // r11
  WCHAR *v1104; // rcx
  const void **v1105; // r9
  signed int v1106; // eax
  __int64 v1107; // rdi
  WCHAR *v1108; // r9
  unsigned int *v1109; // rsi
  unsigned int v1110; // edi
  __int64 v1111; // r8
  unsigned int *v1112; // rcx
  unsigned int *v1113; // r11
  unsigned int v1114; // ecx
  unsigned int v1115; // edi
  unsigned int *v1116; // rax
  HANDLE v1117; // rax
  _QWORD *v1118; // rdx
  int v1119; // edi
  HANDLE v1120; // rax
  void *v1121; // rcx
  void *v1122; // r8
  HANDLE v1123; // rax
  void *v1124; // rcx
  unsigned int *v1125; // rcx
  WCHAR *v1126; // rax
  HANDLE v1127; // rax
  void *v1128; // rcx
  _QWORD *v1129; // rax
  HANDLE v1130; // rax
  HANDLE v1131; // rax
  HANDLE v1132; // rax
  HANDLE v1133; // rax
  unsigned int *v1134; // r11
  void *v1135; // rbx
  HANDLE v1136; // rax
  void *v1137; // rbx
  HANDLE v1138; // rax
  void *v1139; // rbx
  HANDLE v1140; // rax
  HANDLE v1141; // rax
  int v1142; // edi
  _DWORD *v1143; // r9
  unsigned __int8 v1144; // al
  unsigned __int8 *v1145; // r11
  _BYTE *v1146; // rdx
  AtmosCheck *v1147; // r10
  int v1148; // esi
  int v1149; // r14d
  int v1150; // r8d
  unsigned int v1151; // ecx
  unsigned int v1152; // r8d
  int v1153; // eax
  int v1154; // r9d
  int v1155; // edi
  char v1156; // bl
  unsigned int v1157; // r11d
  SIZE_T v1158; // rdi
  int v1159; // r10d
  _BYTE *v1160; // r13
  unsigned __int8 *v1161; // r12
  unsigned int v1162; // eax
  int v1163; // ebx
  SIZE_T v1164; // r14
  unsigned int v1165; // r15d
  int v1166; // r9d
  int v1167; // r8d
  int v1168; // r11d
  unsigned int v1169; // eax
  int v1170; // r11d
  unsigned int v1171; // eax
  int v1172; // r11d
  int v1173; // eax
  unsigned int v1174; // r11d
  int v1175; // eax
  int v1176; // r11d
  int v1177; // eax
  unsigned int v1178; // r11d
  int v1179; // eax
  int v1180; // r11d
  unsigned int v1181; // eax
  int v1182; // r11d
  int v1183; // eax
  int v1184; // r11d
  int v1185; // eax
  int v1186; // r11d
  int v1187; // eax
  int v1188; // r11d
  int v1189; // eax
  unsigned int v1190; // r11d
  int v1191; // eax
  int v1192; // r11d
  int v1193; // eax
  int v1194; // r11d
  int v1195; // eax
  int v1196; // r11d
  int v1197; // eax
  int v1198; // r11d
  int v1199; // eax
  SIZE_T n; // rcx
  AtmosCheck *v1201; // r11
  int v1202; // edi
  void *v1203; // r9
  AtmosCheck *v1204; // r11
  WCHAR *v1205; // r8
  void *v1206; // r9
  AtmosCheck *v1207; // r11
  void *v1208; // r9
  AtmosCheck *v1209; // r11
  unsigned __int64 v1210; // rcx
  void *v1211; // rsi
  SIZE_T v1212; // r10
  int *v1213; // rcx
  unsigned int v1214; // r11d
  WCHAR *v1215; // r9
  AtmosCheck *v1216; // r10
  HANDLE v1217; // rax
  size_t v1218; // rbx
  void *v1219; // rsi
  void *v1220; // rdi
  HANDLE v1221; // rax
  void *v1222; // rdi
  HANDLE v1223; // rax
  HANDLE v1224; // rax
  HANDLE v1225; // rax
  int v1226; // esi
  int v1227; // eax
  HMODULE *v1228; // rdi
  __int64 v1229; // rbx
  unsigned __int8 v1230; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1231; // [rsp+60h] [rbp-A0h]
  void *v1232; // [rsp+68h] [rbp-98h]
  void *v1233; // [rsp+68h] [rbp-98h]
  void *v1234; // [rsp+68h] [rbp-98h]
  void *v1235; // [rsp+68h] [rbp-98h]
  void *v1236; // [rsp+68h] [rbp-98h]
  void *v1237; // [rsp+68h] [rbp-98h]
  size_t v1238; // [rsp+68h] [rbp-98h]
  void *v1239; // [rsp+68h] [rbp-98h]
  void *v1240; // [rsp+68h] [rbp-98h]
  void *v1241; // [rsp+68h] [rbp-98h]
  size_t v1242; // [rsp+68h] [rbp-98h]
  size_t v1243; // [rsp+68h] [rbp-98h]
  void *v1244; // [rsp+68h] [rbp-98h]
  size_t v1245; // [rsp+68h] [rbp-98h]
  size_t v1246; // [rsp+68h] [rbp-98h]
  size_t v1247; // [rsp+68h] [rbp-98h]
  void *v1248; // [rsp+68h] [rbp-98h]
  void *v1249; // [rsp+68h] [rbp-98h]
  void *v1250; // [rsp+68h] [rbp-98h]
  void *v1251; // [rsp+68h] [rbp-98h]
  void *v1252; // [rsp+68h] [rbp-98h]
  void *v1253; // [rsp+68h] [rbp-98h]
  size_t v1254; // [rsp+68h] [rbp-98h]
  size_t v1255; // [rsp+68h] [rbp-98h]
  _DWORD *v1256; // [rsp+70h] [rbp-90h]
  _DWORD *v1257; // [rsp+70h] [rbp-90h]
  _DWORD *v1258; // [rsp+70h] [rbp-90h]
  _DWORD *v1259; // [rsp+70h] [rbp-90h]
  _BYTE *v1260; // [rsp+70h] [rbp-90h]
  int v1261; // [rsp+70h] [rbp-90h]
  int v1262; // [rsp+70h] [rbp-90h]
  int v1263; // [rsp+70h] [rbp-90h]
  unsigned int v1264; // [rsp+70h] [rbp-90h]
  int v1265; // [rsp+70h] [rbp-90h]
  unsigned int v1266; // [rsp+70h] [rbp-90h]
  unsigned int v1267; // [rsp+70h] [rbp-90h]
  unsigned int v1268; // [rsp+70h] [rbp-90h]
  _QWORD *v1269; // [rsp+70h] [rbp-90h]
  int v1270; // [rsp+70h] [rbp-90h]
  int v1271; // [rsp+70h] [rbp-90h]
  size_t v1272; // [rsp+78h] [rbp-88h]
  size_t v1273; // [rsp+78h] [rbp-88h]
  size_t v1274; // [rsp+78h] [rbp-88h]
  size_t v1275; // [rsp+78h] [rbp-88h]
  _QWORD *v1276; // [rsp+78h] [rbp-88h]
  size_t v1277; // [rsp+78h] [rbp-88h]
  size_t v1278; // [rsp+78h] [rbp-88h]
  size_t v1279; // [rsp+78h] [rbp-88h]
  size_t v1280; // [rsp+78h] [rbp-88h]
  size_t v1281; // [rsp+78h] [rbp-88h]
  size_t v1282; // [rsp+78h] [rbp-88h]
  size_t v1283; // [rsp+78h] [rbp-88h]
  size_t v1284; // [rsp+78h] [rbp-88h]
  size_t v1285; // [rsp+78h] [rbp-88h]
  AtmosCheck *v1286; // [rsp+78h] [rbp-88h]
  void *v1287; // [rsp+78h] [rbp-88h]
  void *v1288; // [rsp+78h] [rbp-88h]
  void *v1289; // [rsp+78h] [rbp-88h]
  WCHAR *lpModuleName; // [rsp+80h] [rbp-80h]
  __int64 lpModuleNamea; // [rsp+80h] [rbp-80h]
  int lpModuleNameb; // [rsp+80h] [rbp-80h]
  int lpModuleNamec; // [rsp+80h] [rbp-80h]
  int lpModuleNamed; // [rsp+80h] [rbp-80h]
  int lpModuleNamee; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamef; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNameg; // [rsp+80h] [rbp-80h]
  int lpModuleNameh; // [rsp+80h] [rbp-80h]
  int lpModuleNamei; // [rsp+80h] [rbp-80h]
  unsigned int lpModuleNamej; // [rsp+80h] [rbp-80h]
  int lpModuleNamek; // [rsp+80h] [rbp-80h]
  int lpModuleNamel; // [rsp+80h] [rbp-80h]
  char *v1303; // [rsp+88h] [rbp-78h]
  void *v1304; // [rsp+88h] [rbp-78h]
  void *v1305; // [rsp+88h] [rbp-78h]
  void *v1306; // [rsp+88h] [rbp-78h]
  void *v1307; // [rsp+88h] [rbp-78h]
  void *v1308; // [rsp+88h] [rbp-78h]
  void *v1309; // [rsp+88h] [rbp-78h]
  _DWORD *v1310; // [rsp+88h] [rbp-78h]
  LPVOID v1311; // [rsp+88h] [rbp-78h]
  _QWORD *v1312; // [rsp+88h] [rbp-78h]
  _DWORD *v1313; // [rsp+88h] [rbp-78h]
  LPVOID v1314; // [rsp+88h] [rbp-78h]
  _QWORD *v1315; // [rsp+88h] [rbp-78h]
  WCHAR *v1316; // [rsp+90h] [rbp-70h]
  LPCWSTR v1317; // [rsp+90h] [rbp-70h]
  LPCWSTR v1318; // [rsp+90h] [rbp-70h]
  LPCWSTR v1319; // [rsp+90h] [rbp-70h]
  WCHAR *v1320; // [rsp+90h] [rbp-70h]
  LPCWSTR v1321; // [rsp+90h] [rbp-70h]
  char *v1322; // [rsp+90h] [rbp-70h]
  LPCWSTR v1323; // [rsp+90h] [rbp-70h]
  LPCWSTR v1324; // [rsp+90h] [rbp-70h]
  LPCWSTR v1325; // [rsp+90h] [rbp-70h]
  LPCWSTR v1326; // [rsp+90h] [rbp-70h]
  LPCWSTR v1327; // [rsp+90h] [rbp-70h]
  LPCWSTR v1328; // [rsp+90h] [rbp-70h]
  LPCWSTR v1329; // [rsp+90h] [rbp-70h]
  LPCWSTR v1330; // [rsp+90h] [rbp-70h]
  LPCWSTR v1331; // [rsp+90h] [rbp-70h]
  LPCWSTR v1332; // [rsp+90h] [rbp-70h]
  WCHAR *v1333; // [rsp+90h] [rbp-70h]
  unsigned __int64 v1334; // [rsp+98h] [rbp-68h]
  WCHAR *v1335; // [rsp+98h] [rbp-68h]
  WCHAR *v1336; // [rsp+98h] [rbp-68h]
  unsigned int v1337; // [rsp+98h] [rbp-68h]
  int v1338; // [rsp+98h] [rbp-68h]
  unsigned int v1339; // [rsp+98h] [rbp-68h]
  int v1340; // [rsp+98h] [rbp-68h]
  int v1341; // [rsp+98h] [rbp-68h]
  int v1342; // [rsp+98h] [rbp-68h]
  int v1343; // [rsp+98h] [rbp-68h]
  int v1344; // [rsp+98h] [rbp-68h]
  unsigned int v1345; // [rsp+98h] [rbp-68h]
  int v1346; // [rsp+98h] [rbp-68h]
  int v1347; // [rsp+98h] [rbp-68h]
  int v1348; // [rsp+98h] [rbp-68h]
  unsigned int dwBytes; // [rsp+A0h] [rbp-60h]
  SIZE_T dwBytesa; // [rsp+A0h] [rbp-60h]
  SIZE_T dwBytesb; // [rsp+A0h] [rbp-60h]
  int dwBytesc; // [rsp+A0h] [rbp-60h]
  char *dwBytesd; // [rsp+A0h] [rbp-60h]
  void *dwBytese; // [rsp+A0h] [rbp-60h]
  SIZE_T dwBytesf; // [rsp+A0h] [rbp-60h]
  void *dwBytesg; // [rsp+A0h] [rbp-60h]
  SIZE_T dwBytesh; // [rsp+A0h] [rbp-60h]
  void *dwBytesi; // [rsp+A0h] [rbp-60h]
  SIZE_T dwBytesj; // [rsp+A0h] [rbp-60h]
  void *dwBytesk; // [rsp+A0h] [rbp-60h]
  SIZE_T dwBytesl; // [rsp+A0h] [rbp-60h]
  unsigned int *dwBytesm; // [rsp+A0h] [rbp-60h]
  _QWORD *v1363; // [rsp+A8h] [rbp-58h]
  char *v1364; // [rsp+A8h] [rbp-58h]
  __int64 v1365; // [rsp+A8h] [rbp-58h]
  char *v1366; // [rsp+A8h] [rbp-58h]
  __int64 v1367; // [rsp+A8h] [rbp-58h]
  char *v1368; // [rsp+A8h] [rbp-58h]
  __int64 v1369; // [rsp+A8h] [rbp-58h]
  char *v1370; // [rsp+A8h] [rbp-58h]
  __int64 v1371; // [rsp+A8h] [rbp-58h]
  LPVOID v1372; // [rsp+A8h] [rbp-58h]
  WCHAR *v1373; // [rsp+A8h] [rbp-58h]
  SIZE_T v1374; // [rsp+A8h] [rbp-58h]
  unsigned int v1375; // [rsp+B0h] [rbp-50h]
  LPVOID v1376; // [rsp+B0h] [rbp-50h]
  int v1377; // [rsp+B0h] [rbp-50h]
  unsigned int v1378; // [rsp+B0h] [rbp-50h]
  _QWORD *v1379; // [rsp+B0h] [rbp-50h]
  unsigned int v1380; // [rsp+B0h] [rbp-50h]
  unsigned int v1381; // [rsp+B0h] [rbp-50h]
  int v1382; // [rsp+B0h] [rbp-50h]
  int v1383; // [rsp+B0h] [rbp-50h]
  unsigned int v1384; // [rsp+B0h] [rbp-50h]
  unsigned int v1385; // [rsp+B0h] [rbp-50h]
  unsigned int v1386; // [rsp+B0h] [rbp-50h]
  int v1387; // [rsp+B0h] [rbp-50h]
  int v1388; // [rsp+B8h] [rbp-48h]
  unsigned int v1389; // [rsp+B8h] [rbp-48h]
  unsigned int v1390; // [rsp+B8h] [rbp-48h]
  unsigned int v1391; // [rsp+B8h] [rbp-48h]
  unsigned int v1392; // [rsp+B8h] [rbp-48h]
  unsigned int v1393; // [rsp+B8h] [rbp-48h]
  char *v1394; // [rsp+B8h] [rbp-48h]
  unsigned int v1395; // [rsp+B8h] [rbp-48h]
  unsigned int v1396; // [rsp+B8h] [rbp-48h]
  unsigned int v1397; // [rsp+B8h] [rbp-48h]
  unsigned int v1398; // [rsp+B8h] [rbp-48h]
  int v1399; // [rsp+B8h] [rbp-48h]
  int v1400; // [rsp+B8h] [rbp-48h]
  int v1401; // [rsp+B8h] [rbp-48h]
  int v1402; // [rsp+B8h] [rbp-48h]
  int v1403; // [rsp+B8h] [rbp-48h]
  void *lpMem; // [rsp+C0h] [rbp-40h]
  _QWORD *lpMema; // [rsp+C0h] [rbp-40h]
  int *lpMemb; // [rsp+C0h] [rbp-40h]
  unsigned int *lpMemc; // [rsp+C0h] [rbp-40h]
  int *lpMemd; // [rsp+C0h] [rbp-40h]
  WCHAR *lpMeme; // [rsp+C0h] [rbp-40h]
  LPVOID lpMemf; // [rsp+C0h] [rbp-40h]
  LPVOID lpMemg; // [rsp+C0h] [rbp-40h]
  LPVOID lpMemh; // [rsp+C0h] [rbp-40h]
  LPVOID lpMemi; // [rsp+C0h] [rbp-40h]
  LPVOID lpMemj; // [rsp+C0h] [rbp-40h]
  void *lpMemk; // [rsp+C0h] [rbp-40h]
  _DWORD *lpMeml; // [rsp+C0h] [rbp-40h]
  int v1417; // [rsp+C8h] [rbp-38h]
  int v1418; // [rsp+C8h] [rbp-38h]
  int v1419; // [rsp+C8h] [rbp-38h]
  unsigned int v1420; // [rsp+C8h] [rbp-38h]
  unsigned int v1421; // [rsp+C8h] [rbp-38h]
  int v1422; // [rsp+C8h] [rbp-38h]
  int v1423; // [rsp+C8h] [rbp-38h]
  unsigned int v1424; // [rsp+C8h] [rbp-38h]
  unsigned int v1425; // [rsp+C8h] [rbp-38h]
  unsigned int v1426; // [rsp+C8h] [rbp-38h]
  int v1427; // [rsp+C8h] [rbp-38h]
  unsigned int v1428; // [rsp+C8h] [rbp-38h]
  unsigned int v1429; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v1430; // [rsp+D0h] [rbp-30h]
  void **v1431; // [rsp+D0h] [rbp-30h]
  int v1432; // [rsp+D0h] [rbp-30h]
  int v1433; // [rsp+D0h] [rbp-30h]
  int v1434; // [rsp+D0h] [rbp-30h]
  int v1435; // [rsp+D0h] [rbp-30h]
  int v1436; // [rsp+D0h] [rbp-30h]
  int v1437; // [rsp+D0h] [rbp-30h]
  int v1438; // [rsp+D0h] [rbp-30h]
  unsigned int v1439; // [rsp+D0h] [rbp-30h]
  unsigned int *v1440; // [rsp+D0h] [rbp-30h]
  unsigned int v1441; // [rsp+D0h] [rbp-30h]
  unsigned int v1442; // [rsp+D0h] [rbp-30h]
  int *v1443; // [rsp+D8h] [rbp-28h]
  SIZE_T v1444; // [rsp+D8h] [rbp-28h]
  void *v1445; // [rsp+D8h] [rbp-28h]
  int v1446; // [rsp+D8h] [rbp-28h]
  __int64 v1447; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v1448; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v1449; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v1450; // [rsp+D8h] [rbp-28h]
  unsigned int *v1451; // [rsp+E0h] [rbp-20h]
  SIZE_T v1452; // [rsp+E0h] [rbp-20h]
  SIZE_T v1453; // [rsp+E0h] [rbp-20h]
  SIZE_T v1454; // [rsp+E0h] [rbp-20h]
  SIZE_T v1455; // [rsp+E0h] [rbp-20h]
  unsigned int v1456; // [rsp+E0h] [rbp-20h]
  _DWORD *v1457; // [rsp+E0h] [rbp-20h]
  SIZE_T v1458; // [rsp+E0h] [rbp-20h]
  SIZE_T v1459; // [rsp+E8h] [rbp-18h]
  const void **v1460; // [rsp+E8h] [rbp-18h]
  SIZE_T v1461; // [rsp+E8h] [rbp-18h]
  SIZE_T v1462; // [rsp+E8h] [rbp-18h]
  SIZE_T v1463; // [rsp+E8h] [rbp-18h]
  SIZE_T v1464; // [rsp+E8h] [rbp-18h]
  int v1465; // [rsp+E8h] [rbp-18h]
  unsigned int ii; // [rsp+E8h] [rbp-18h]
  int v1467; // [rsp+E8h] [rbp-18h]
  void *v1468; // [rsp+E8h] [rbp-18h]
  SIZE_T v1469; // [rsp+E8h] [rbp-18h]
  LPCWSTR v1470; // [rsp+F0h] [rbp-10h]
  LPCWSTR v1471; // [rsp+F0h] [rbp-10h]
  LPCWSTR v1472; // [rsp+F0h] [rbp-10h]
  WCHAR *v1473; // [rsp+F0h] [rbp-10h]
  LPCWSTR v1474; // [rsp+F0h] [rbp-10h]
  LPCWSTR v1475; // [rsp+F0h] [rbp-10h]
  unsigned int v1476; // [rsp+F8h] [rbp-8h]
  SIZE_T v1477; // [rsp+F8h] [rbp-8h]
  unsigned int nn; // [rsp+F8h] [rbp-8h]
  unsigned int mm; // [rsp+F8h] [rbp-8h]
  unsigned int v1480; // [rsp+F8h] [rbp-8h]
  int v1481; // [rsp+F8h] [rbp-8h]
  unsigned int v1482; // [rsp+F8h] [rbp-8h]
  int v1483; // [rsp+F8h] [rbp-8h]
  int v1484; // [rsp+F8h] [rbp-8h]
  int v1485; // [rsp+F8h] [rbp-8h]
  int v1486; // [rsp+F8h] [rbp-8h]
  int v1487; // [rsp+F8h] [rbp-8h]
  int *v1488; // [rsp+100h] [rbp+0h]
  unsigned int v1489; // [rsp+100h] [rbp+0h]
  int v1490; // [rsp+100h] [rbp+0h]
  int v1491; // [rsp+100h] [rbp+0h]
  int v1492; // [rsp+100h] [rbp+0h]
  int v1493; // [rsp+100h] [rbp+0h]
  unsigned int v1494; // [rsp+100h] [rbp+0h]
  unsigned int v1495; // [rsp+100h] [rbp+0h]
  int v1496; // [rsp+108h] [rbp+8h]
  int v1497; // [rsp+108h] [rbp+8h]
  int v1498; // [rsp+108h] [rbp+8h]
  int v1499; // [rsp+108h] [rbp+8h]
  WCHAR *v1500; // [rsp+110h] [rbp+10h]
  SIZE_T v1501; // [rsp+110h] [rbp+10h]
  SIZE_T v1502; // [rsp+110h] [rbp+10h]
  SIZE_T v1503; // [rsp+110h] [rbp+10h]
  SIZE_T v1504; // [rsp+110h] [rbp+10h]
  SIZE_T v1505; // [rsp+110h] [rbp+10h]
  SIZE_T v1506; // [rsp+110h] [rbp+10h]
  _QWORD *v1507; // [rsp+110h] [rbp+10h]
  char *v1508; // [rsp+110h] [rbp+10h]
  SIZE_T v1509; // [rsp+110h] [rbp+10h]
  SIZE_T v1510; // [rsp+110h] [rbp+10h]
  void *v1511; // [rsp+118h] [rbp+18h]
  void **v1512; // [rsp+118h] [rbp+18h]
  _DWORD *v1513; // [rsp+118h] [rbp+18h]
  void *v1514; // [rsp+118h] [rbp+18h]
  int v1515; // [rsp+118h] [rbp+18h]
  int v1516; // [rsp+118h] [rbp+18h]
  int v1517; // [rsp+118h] [rbp+18h]
  int v1518; // [rsp+118h] [rbp+18h]
  void *v1519; // [rsp+118h] [rbp+18h]
  LPVOID v1520; // [rsp+120h] [rbp+20h]
  _DWORD *v1521; // [rsp+120h] [rbp+20h]
  _DWORD *v1522; // [rsp+120h] [rbp+20h]
  LPVOID v1523; // [rsp+120h] [rbp+20h]
  _QWORD *v1524; // [rsp+120h] [rbp+20h]
  unsigned int v1525; // [rsp+120h] [rbp+20h]
  int v1526; // [rsp+120h] [rbp+20h]
  void *v1527; // [rsp+128h] [rbp+28h]
  char *v1528; // [rsp+128h] [rbp+28h]
  _WORD *v1529; // [rsp+128h] [rbp+28h]
  unsigned __int8 *v1530; // [rsp+128h] [rbp+28h]
  char *v1531; // [rsp+128h] [rbp+28h]
  _DWORD *v1532; // [rsp+128h] [rbp+28h]
  _QWORD *v1533; // [rsp+128h] [rbp+28h]
  _BYTE *v1534; // [rsp+128h] [rbp+28h]
  void *v1535; // [rsp+128h] [rbp+28h]
  SIZE_T v1536; // [rsp+130h] [rbp+30h] BYREF
  SIZE_T v1537; // [rsp+138h] [rbp+38h]
  size_t v1538; // [rsp+140h] [rbp+40h]
  unsigned int v1539; // [rsp+148h] [rbp+48h] BYREF
  SIZE_T v1540; // [rsp+150h] [rbp+50h]
  size_t Size; // [rsp+158h] [rbp+58h]
  int v1542; // [rsp+160h] [rbp+60h]
  int v1543; // [rsp+164h] [rbp+64h] BYREF
  AtmosCheck *v1544; // [rsp+168h] [rbp+68h]
  unsigned int v1545; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1546; // [rsp+174h] [rbp+74h] BYREF
  int v1547; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1548; // [rsp+17Ch] [rbp+7Ch] BYREF
  unsigned int v1549; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v1550; // [rsp+184h] [rbp+84h] BYREF
  int v1551; // [rsp+188h] [rbp+88h] BYREF
  int v1552; // [rsp+18Ch] [rbp+8Ch] BYREF
  int v1553; // [rsp+190h] [rbp+90h] BYREF
  int v1554; // [rsp+194h] [rbp+94h] BYREF
  int v1555; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v1556; // [rsp+19Ch] [rbp+9Ch] BYREF
  SIZE_T v1557; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v1558; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v1559; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1560; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1561; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1562; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v1563; // [rsp+1BCh] [rbp+BCh] BYREF
  _DWORD v1564[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v1565; // [rsp+1C8h] [rbp+C8h]
  int v1566; // [rsp+1D0h] [rbp+D0h]
  unsigned int v1567; // [rsp+1D4h] [rbp+D4h] BYREF
  int v1568; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v1569; // [rsp+1DCh] [rbp+DCh] BYREF
  int v1570; // [rsp+1E0h] [rbp+E0h]
  unsigned int v1571; // [rsp+1E4h] [rbp+E4h] BYREF
  unsigned int v1572; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v1573; // [rsp+1ECh] [rbp+ECh] BYREF
  int v1574; // [rsp+1F0h] [rbp+F0h] BYREF
  int v1575; // [rsp+1F4h] [rbp+F4h] BYREF
  int v1576; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned int v1577[3]; // [rsp+1FCh] [rbp+FCh] BYREF
  int v1578; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v1579; // [rsp+20Ch] [rbp+10Ch] BYREF
  int v1580; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v1581; // [rsp+214h] [rbp+114h] BYREF
  int v1582; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v1583; // [rsp+21Ch] [rbp+11Ch] BYREF
  unsigned int v1584; // [rsp+220h] [rbp+120h] BYREF
  int v1585; // [rsp+224h] [rbp+124h] BYREF
  int v1586; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1587; // [rsp+22Ch] [rbp+12Ch] BYREF
  SIZE_T v1588; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1589; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v1590; // [rsp+23Ch] [rbp+13Ch] BYREF
  SIZE_T v1591; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v1592; // [rsp+248h] [rbp+148h] BYREF
  unsigned int v1593; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1594; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1595; // [rsp+258h] [rbp+158h] BYREF
  unsigned int v1596; // [rsp+25Ch] [rbp+15Ch] BYREF
  __int64 v1597; // [rsp+260h] [rbp+160h]
  int v1598; // [rsp+270h] [rbp+170h] BYREF
  unsigned int v1599; // [rsp+274h] [rbp+174h] BYREF
  int v1600; // [rsp+278h] [rbp+178h] BYREF
  unsigned int v1601; // [rsp+27Ch] [rbp+17Ch] BYREF
  int v1602; // [rsp+280h] [rbp+180h] BYREF
  unsigned int v1603; // [rsp+284h] [rbp+184h] BYREF
  int v1604; // [rsp+288h] [rbp+188h] BYREF
  unsigned int v1605[3]; // [rsp+28Ch] [rbp+18Ch] BYREF
  wchar_t *String1; // [rsp+298h] [rbp+198h] BYREF
  wchar_t *v1607; // [rsp+2A0h] [rbp+1A0h] BYREF
  wchar_t *v1608; // [rsp+2A8h] [rbp+1A8h] BYREF
  wchar_t *v1609; // [rsp+2B0h] [rbp+1B0h] BYREF
  size_t pcchLength[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  int *v1611; // [rsp+2C8h] [rbp+1C8h] BYREF
  int *v1612; // [rsp+2D0h] [rbp+1D0h] BYREF
  int *v1613; // [rsp+2D8h] [rbp+1D8h] BYREF
  size_t v1614; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v1615; // [rsp+2E8h] [rbp+1E8h] BYREF
  int *v1616; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v1617; // [rsp+2F8h] [rbp+1F8h] BYREF
  void *v1618[2]; // [rsp+300h] [rbp+200h] BYREF
  AtmosCheck *v1619; // [rsp+310h] [rbp+210h]
  _DWORD *v1620; // [rsp+318h] [rbp+218h]
  __int64 v1621; // [rsp+338h] [rbp+238h]
  void *v1622; // [rsp+340h] [rbp+240h] BYREF
  unsigned int *v1623; // [rsp+348h] [rbp+248h] BYREF
  unsigned int *v1624; // [rsp+350h] [rbp+250h] BYREF
  HMODULE phModule; // [rsp+358h] [rbp+258h] BYREF
  _DWORD *v1626; // [rsp+368h] [rbp+268h] BYREF
  void *v1627; // [rsp+378h] [rbp+278h] BYREF
  void *v1628; // [rsp+380h] [rbp+280h] BYREF
  void *v1629; // [rsp+388h] [rbp+288h] BYREF
  void *v1630; // [rsp+390h] [rbp+290h] BYREF
  _DWORD *v1631; // [rsp+398h] [rbp+298h] BYREF
  int *v1632; // [rsp+3A0h] [rbp+2A0h] BYREF
  int *v1633; // [rsp+3A8h] [rbp+2A8h] BYREF
  LPVOID v1634; // [rsp+3B0h] [rbp+2B0h] BYREF
  unsigned int *v1635; // [rsp+3B8h] [rbp+2B8h] BYREF
  unsigned int *v1636; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v1637; // [rsp+3C8h] [rbp+2C8h] BYREF
  WCHAR *v1638; // [rsp+3D8h] [rbp+2D8h]
  void **v1639; // [rsp+3E0h] [rbp+2E0h] BYREF
  WCHAR *v1640; // [rsp+3E8h] [rbp+2E8h]
  _DWORD *v1641; // [rsp+3F0h] [rbp+2F0h] BYREF
  void *v1642; // [rsp+3F8h] [rbp+2F8h] BYREF
  unsigned __int64 v1643; // [rsp+400h] [rbp+300h]
  _QWORD *v1644; // [rsp+408h] [rbp+308h] BYREF
  char *v1645; // [rsp+410h] [rbp+310h] BYREF
  _DWORD *v1646; // [rsp+418h] [rbp+318h] BYREF
  __int64 v1647; // [rsp+420h] [rbp+320h]
  __int64 v1648; // [rsp+428h] [rbp+328h] BYREF
  __int64 v1649; // [rsp+430h] [rbp+330h] BYREF
  __int64 v1650; // [rsp+438h] [rbp+338h] BYREF
  __int64 v1651; // [rsp+440h] [rbp+340h] BYREF
  _QWORD v1652[4]; // [rsp+448h] [rbp+348h] BYREF
  int *v1653; // [rsp+468h] [rbp+368h] BYREF
  int *v1654; // [rsp+470h] [rbp+370h] BYREF
  int *v1655; // [rsp+478h] [rbp+378h] BYREF
  void *v1656[5]; // [rsp+480h] [rbp+380h] BYREF
  void *v1657; // [rsp+4A8h] [rbp+3A8h] BYREF
  _DWORD *v1658; // [rsp+4B0h] [rbp+3B0h] BYREF
  void *v1659; // [rsp+4B8h] [rbp+3B8h] BYREF
  HMODULE hModule; // [rsp+4C0h] [rbp+3C0h] BYREF
  void *v1661; // [rsp+4C8h] [rbp+3C8h] BYREF
  void *v1662; // [rsp+4D0h] [rbp+3D0h] BYREF
  void *v1663; // [rsp+4D8h] [rbp+3D8h] BYREF
  void *v1664; // [rsp+4E0h] [rbp+3E0h] BYREF
  int *v1665; // [rsp+4E8h] [rbp+3E8h] BYREF
  unsigned __int64 v1666[2]; // [rsp+4F0h] [rbp+3F0h] BYREF
  _DWORD *v1667; // [rsp+500h] [rbp+400h] BYREF
  __int128 v1668; // [rsp+508h] [rbp+408h]
  __int128 v1669; // [rsp+518h] [rbp+418h]
  void *v1670; // [rsp+530h] [rbp+430h] BYREF
  void *v1671; // [rsp+540h] [rbp+440h] BYREF
  size_t v1672; // [rsp+548h] [rbp+448h] BYREF
  void *Src; // [rsp+550h] [rbp+450h]
  LPVOID v1674[3]; // [rsp+558h] [rbp+458h]
  unsigned __int64 *v1675; // [rsp+570h] [rbp+470h] BYREF
  void *v1676; // [rsp+580h] [rbp+480h] BYREF
  void *v1677; // [rsp+590h] [rbp+490h] BYREF
  unsigned __int64 *v1678; // [rsp+5A0h] [rbp+4A0h] BYREF
  void *v1679; // [rsp+5B0h] [rbp+4B0h] BYREF
  int *v1680; // [rsp+5C0h] [rbp+4C0h] BYREF
  unsigned int *v1681; // [rsp+5D0h] [rbp+4D0h] BYREF
  size_t v1682; // [rsp+5D8h] [rbp+4D8h] BYREF
  void *v1683; // [rsp+5E0h] [rbp+4E0h]
  __int128 v1684; // [rsp+5E8h] [rbp+4E8h]
  __int128 v1685; // [rsp+5F8h] [rbp+4F8h] BYREF
  LPVOID v1686[3]; // [rsp+608h] [rbp+508h]
  _DWORD *v1687; // [rsp+620h] [rbp+520h] BYREF
  _QWORD v1688[2]; // [rsp+628h] [rbp+528h] BYREF
  int v1689; // [rsp+638h] [rbp+538h]
  unsigned int v1690; // [rsp+63Ch] [rbp+53Ch]
  int v1691; // [rsp+640h] [rbp+540h]
  _QWORD v1692[2]; // [rsp+648h] [rbp+548h] BYREF
  int v1693; // [rsp+658h] [rbp+558h]
  unsigned int v1694; // [rsp+65Ch] [rbp+55Ch]
  int v1695; // [rsp+660h] [rbp+560h]
  _BYTE v1696[24]; // [rsp+670h] [rbp+570h] BYREF
  char *v1697; // [rsp+688h] [rbp+588h]
  _BYTE v1698[4]; // [rsp+6E0h] [rbp+5E0h] BYREF
  int v1699; // [rsp+6E4h] [rbp+5E4h]
  int v1700; // [rsp+6E8h] [rbp+5E8h]
  __int16 v1701; // [rsp+6F2h] [rbp+5F2h]
  __int64 v1702; // [rsp+6F8h] [rbp+5F8h]
  _BYTE v1703[4]; // [rsp+750h] [rbp+650h] BYREF
  int v1704; // [rsp+754h] [rbp+654h]
  int v1705; // [rsp+758h] [rbp+658h]
  size_t v1706; // [rsp+768h] [rbp+668h]
  _BYTE v1707[24]; // [rsp+7C0h] [rbp+6C0h] BYREF
  char *v1708; // [rsp+7D8h] [rbp+6D8h]
  _BYTE v1709[4]; // [rsp+830h] [rbp+730h] BYREF
  int v1710; // [rsp+834h] [rbp+734h]
  int v1711; // [rsp+838h] [rbp+738h]
  size_t v1712; // [rsp+848h] [rbp+748h]
  _BYTE v1713[24]; // [rsp+8A0h] [rbp+7A0h] BYREF
  char *v1714; // [rsp+8B8h] [rbp+7B8h]
  _BYTE v1715[4]; // [rsp+910h] [rbp+810h] BYREF
  int v1716; // [rsp+914h] [rbp+814h]
  int v1717; // [rsp+918h] [rbp+818h]
  size_t v1718; // [rsp+928h] [rbp+828h]
  _BYTE v1719[4]; // [rsp+980h] [rbp+880h] BYREF
  int v1720; // [rsp+984h] [rbp+884h]
  int v1721; // [rsp+988h] [rbp+888h]
  size_t v1722; // [rsp+998h] [rbp+898h]
  _BYTE v1723[24]; // [rsp+9F0h] [rbp+8F0h] BYREF
  char *v1724; // [rsp+A08h] [rbp+908h]
  int v1725; // [rsp+A60h] [rbp+960h] BYREF
  int v1726; // [rsp+A64h] [rbp+964h]
  void *v1727; // [rsp+A68h] [rbp+968h]
  void *v1728; // [rsp+A70h] [rbp+970h]
  void *v1729; // [rsp+A78h] [rbp+978h]
  const WCHAR *v1730; // [rsp+A80h] [rbp+980h]
  const WCHAR *v1731; // [rsp+A88h] [rbp+988h]
  __int64 v1732; // [rsp+A90h] [rbp+990h]
  int v1733; // [rsp+A98h] [rbp+998h]
  __int128 v1734; // [rsp+A9Ch] [rbp+99Ch] BYREF
  __int128 v1735; // [rsp+AACh] [rbp+9ACh] BYREF
  unsigned int v1736; // [rsp+ABCh] [rbp+9BCh] BYREF
  unsigned int v1737; // [rsp+AC0h] [rbp+9C0h]
  unsigned int v1738; // [rsp+AC4h] [rbp+9C4h]
  unsigned int v1739; // [rsp+AC8h] [rbp+9C8h]
  __int64 v1740; // [rsp+AD0h] [rbp+9D0h]
  unsigned __int64 v1741; // [rsp+AD8h] [rbp+9D8h]
  unsigned __int64 v1742; // [rsp+AE0h] [rbp+9E0h]
  __int64 v1743; // [rsp+AE8h] [rbp+9E8h]
  __int128 v1744; // [rsp+AF0h] [rbp+9F0h] BYREF
  __int128 v1745; // [rsp+B00h] [rbp+A00h]
  __int128 v1746; // [rsp+B10h] [rbp+A10h] BYREF
  __int128 v1747; // [rsp+B20h] [rbp+A20h] BYREF
  __int64 v1748; // [rsp+B30h] [rbp+A30h] BYREF
  unsigned int v1749; // [rsp+B38h] [rbp+A38h]
  int v1750; // [rsp+B3Ch] [rbp+A3Ch]
  __int128 v1751; // [rsp+B40h] [rbp+A40h] BYREF
  char v1752[12]; // [rsp+B50h] [rbp+A50h] BYREF
  unsigned int v1753; // [rsp+B5Ch] [rbp+A5Ch]
  __int128 v1754; // [rsp+B70h] [rbp+A70h] BYREF
  __int128 v1755; // [rsp+B80h] [rbp+A80h] BYREF
  __int64 v1756; // [rsp+B90h] [rbp+A90h]
  __int128 v1757; // [rsp+B98h] [rbp+A98h] BYREF
  __int128 v1758; // [rsp+BA8h] [rbp+AA8h] BYREF
  __int64 v1759; // [rsp+BB8h] [rbp+AB8h]
  __int128 v1760; // [rsp+BC0h] [rbp+AC0h] BYREF
  __int128 v1761; // [rsp+BD0h] [rbp+AD0h]
  __int64 v1762; // [rsp+BE0h] [rbp+AE0h]
  int v1763; // [rsp+BE8h] [rbp+AE8h]
  __int128 v1764; // [rsp+BF0h] [rbp+AF0h] BYREF
  __int128 v1765; // [rsp+C00h] [rbp+B00h]
  __int64 v1766; // [rsp+C10h] [rbp+B10h]
  int v1767; // [rsp+C18h] [rbp+B18h]
  __int128 v1768; // [rsp+C20h] [rbp+B20h] BYREF
  __int128 v1769; // [rsp+C30h] [rbp+B30h]
  __int64 v1770; // [rsp+C40h] [rbp+B40h]
  int v1771; // [rsp+C48h] [rbp+B48h]
  __int128 v1772; // [rsp+C50h] [rbp+B50h] BYREF
  __int128 v1773; // [rsp+C60h] [rbp+B60h]
  __int64 v1774; // [rsp+C70h] [rbp+B70h]
  int v1775; // [rsp+C78h] [rbp+B78h]
  __int128 v1776; // [rsp+C80h] [rbp+B80h] BYREF
  __int128 v1777; // [rsp+C90h] [rbp+B90h]
  __int64 v1778; // [rsp+CA0h] [rbp+BA0h]
  int v1779; // [rsp+CA8h] [rbp+BA8h]
  _DWORD v1780[6]; // [rsp+CB0h] [rbp+BB0h] BYREF
  char v1781; // [rsp+CCAh] [rbp+BCAh]
  unsigned __int16 v1782[34]; // [rsp+CCCh] [rbp+BCCh] BYREF
  _DWORD v1783[6]; // [rsp+D10h] [rbp+C10h] BYREF
  char v1784; // [rsp+D2Ah] [rbp+C2Ah]
  unsigned __int16 v1785[34]; // [rsp+D2Ch] [rbp+C2Ch] BYREF
  _DWORD v1786[6]; // [rsp+D70h] [rbp+C70h] BYREF
  char v1787; // [rsp+D8Ah] [rbp+C8Ah]
  unsigned __int16 v1788[34]; // [rsp+D8Ch] [rbp+C8Ch] BYREF
  _BYTE v1789[68]; // [rsp+DD0h] [rbp+CD0h] BYREF
  __int16 v1790; // [rsp+E14h] [rbp+D14h]
  unsigned __int16 v1791; // [rsp+E76h] [rbp+D76h]
  __int64 v1792; // [rsp+E7Ch] [rbp+D7Ch]
  _QWORD v1793[6]; // [rsp+EB0h] [rbp+DB0h] BYREF
  int v1794; // [rsp+EE0h] [rbp+DE0h] BYREF
  __int128 v1795; // [rsp+EE8h] [rbp+DE8h]
  __int128 v1796; // [rsp+EF8h] [rbp+DF8h]
  __int128 v1797; // [rsp+F08h] [rbp+E08h]
  __int64 v1798; // [rsp+F18h] [rbp+E18h]
  unsigned __int16 *v1799[20]; // [rsp+F20h] [rbp+E20h] BYREF
  _WORD v1800[8]; // [rsp+FC0h] [rbp+EC0h] BYREF
  _BYTE v1801[176]; // [rsp+FD0h] [rbp+ED0h] BYREF
  WCHAR Filename[264]; // [rsp+1080h] [rbp+F80h] BYREF

  v1 = this;
  v1619 = this;
  v1544 = this;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>();
  *(_QWORD *)v1 = &AtmosCheck::`vftable';
  *((_QWORD *)v1 + 1) = &AtmosCheck::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)v1 + 2) = &AtmosCheck::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)v1 + 5) = 0LL;
  *((_QWORD *)v1 + 6) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)v1 + 56), 0, 0);
  *((_WORD *)v1 + 48) = 0;
  *((_BYTE *)v1 + 98) = 0;
  *((_BYTE *)v1 + 99) = 1;
  *((_BYTE *)v1 + 100) = 0;
  *((_QWORD *)v1 + 13) = 0LL;
  *((_QWORD *)v1 + 14) = 0LL;
  *((_QWORD *)v1 + 15) = 0LL;
  *((_QWORD *)v1 + 16) = 0LL;
  *((_QWORD *)v1 + 17) = 0LL;
  *(_OWORD *)((char *)v1 + 168) = 0LL;
  *((_QWORD *)v1 + 23) = 0LL;
  v1620 = (_DWORD *)((char *)v1 + 192);
  *((_DWORD *)v1 + 48) = 0;
  *((_QWORD *)v1 + 25) = 0LL;
  *((_QWORD *)v1 + 26) = 0LL;
  *((_WORD *)v1 + 108) = 0;
  *((_BYTE *)v1 + 218) = 0;
  *((_DWORD *)v1 + 55) = 0;
  *((_QWORD *)v1 + 28) = 0LL;
  *((_QWORD *)v1 + 29) = 0LL;
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)v1 + 31) = 0LL;
  *((_QWORD *)v1 + 32) = 0LL;
  *((_WORD *)v1 + 132) = 0;
  `eh vector constructor iterator'(
    (char *)v1 + 272,
    0x30uLL,
    7uLL,
    (void (*)(void *))AtmosCheck::CommonSpatialTechInfo::CommonSpatialTechInfo,
    (void (*)(void *))AtmosCheck::CommonSpatialTechInfo::~CommonSpatialTechInfo);
  v1564[1] = 0;
  *((_DWORD *)v1 + 152) = 0;
  *((_QWORD *)v1 + 77) = 0LL;
  *((_QWORD *)v1 + 78) = 0LL;
  v1597 = 56LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)v1 + 77) = v2;
  *((_QWORD *)v1 + 79) = 0LL;
  *((_QWORD *)v1 + 80) = 0LL;
  *((_QWORD *)v1 + 81) = 0LL;
  *((_QWORD *)v1 + 82) = 7LL;
  *((_QWORD *)v1 + 83) = 8LL;
  *((_DWORD *)v1 + 152) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>>>>>::_Assign_grow(
    (__int64)v1 + 632,
    0x10uLL,
    *((_QWORD *)v1 + 77));
  *((_QWORD *)v1 + 84) = 0LL;
  *((_QWORD *)v1 + 85) = 0LL;
  *((_QWORD *)v1 + 86) = 0LL;
  *((_BYTE *)v1 + 696) = 0;
  *((_QWORD *)v1 + 18) = 0LL;
  *((_QWORD *)v1 + 19) = 0LL;
  *((_QWORD *)v1 + 20) = 0LL;
  v1626 = 0LL;
  if ( v1 == (AtmosCheck *)-192LL )
    goto LABEL_5;
  v1566 = 0;
  v1536 = 0LL;
  v3 = 0;
  LODWORD(Size) = 0;
  while ( _InterlockedCompareExchange(&dword_1801CFEF8, 1, 0) )
    ;
  v1542 = -1;
  v5 = dword_1801CF980;
  if ( dword_1801CF980 )
    goto LABEL_44;
  LODWORD(v1538) = 0;
  v6 = operator new(0x338uLL);
  lpModuleName = (WCHAR *)v6;
  if ( !v6 )
    goto LABEL_15;
  v7 = 0;
  v8 = -1;
  v9 = 0;
  v10 = 0;
  v11 = v6 + 7;
  v12 = (unsigned __int8 *)&unk_1801871E2;
  v13 = 103LL;
  do
  {
    v14 = v12[1] | ((*v12 | ((*(v12 - 1) | (*(v12 - 2) << 8)) << 8)) << 8);
    v15 = v12[5] | ((v12[4] | ((v12[3] | (v12[2] << 8)) << 8)) << 8);
    v16 = v14 ^ v10;
    v12 += 8;
    v17 = v16 ^ v9 ^ v15 ^ 0xAC987321;
    v18 = (4991 * __ROL4__(v17 + 1419157410, 5) + __ROL4__(v17, 10)) ^ v16;
    v19 = (43881 * __ROR4__(v18 + 133239679, 9) - __ROL4__(v18, 2)) ^ v17;
    v20 = (24670 * v19 - (v19 >> 13) - 123127970) ^ v18;
    v21 = (2033 * __ROL4__(v20 ^ 0xAB69, 6) - __ROL4__(v20, 2)) ^ v19;
    v22 = (133239679 - (v21 ^ 0xAB69605E)) ^ v20;
    v23 = (43881 * (v22 ^ 0x137F)) ^ __ROR4__(v22, 6) ^ v21;
    v24 = (24670 * __ROR4__(v23 + 133239679, 15) + __ROL4__(v23, 2)) ^ v22;
    v25 = (2033 * __ROR4__(v24 + 1419157410, 14) - __ROL4__(v24, 8)) ^ v23;
    v26 = (4991 * __ROR4__(v25 ^ 0xAB69605E, 12)) ^ __ROR4__(v25, 10) ^ v24;
    v27 = v25 ^ (v26 >> 10) ^ (43881 * (v26 ^ 0x7F1));
    v28 = (2033 * (__ROR4__(~v27, 5) + 24670)) ^ v26;
    v29 = v27 ^ (v28 - 2033) ^ 0xAB69605E;
    v30 = ((v29 >> 2) + 4991 * __ROL4__(v27 ^ (v28 - 2033) ^ 0xAB6967AF, 2)) ^ v28;
    v31 = (43881 * __ROR4__(v30 - 133239679, 6) + __ROL4__(v30, 7)) ^ v29;
    v32 = (24670 * (v31 ^ 0x137F) + __ROR4__(v31, 9)) ^ v30;
    v33 = (2033 * __ROL4__(v32 ^ 0xAB69, 5) + __ROL4__(v32, 7)) ^ v31;
    v34 = v33 ^ v32 ^ 0xAC987321;
    v35 = (4991 * __ROR4__(v34, 3) - 219010071) ^ v33;
    v36 = (24670 * __ROR4__(v35 - 133239679, 1) - __ROR4__(v35, 6)) ^ v34;
    v37 = (2033 * __ROL4__(v36 - 1419157410, 3) + __ROL4__(v36, 14)) ^ v35;
    v38 = (4991 * __ROL4__(v37 - 1419157410, 15) - __ROR4__(v37, 14)) ^ v36;
    v39 = (v38 >> 3) ^ (43881 * (v38 ^ 0x605E)) ^ v37;
    v40 = v7 ^ (24670 * __ROL4__(v39 ^ 0x7F1137F, 4)) ^ __ROL4__(v39, 2) ^ v38;
    v41 = v8 ^ v39;
    *(v11 - 4) = v40;
    v42 = __ROR4__(v40, 8);
    *v11 = v41;
    v43 = __ROR4__(v41, 8);
    *(v11 - 5) = v42;
    v44 = __ROR4__(v42, 8);
    *(v11 - 1) = v43;
    v45 = __ROR4__(v43, 8);
    *(v11 - 6) = v44;
    v46 = __ROR4__(v44, 8);
    *(v11 - 2) = v45;
    v47 = __ROR4__(v45, 8);
    *(v11 - 7) = v46;
    *(v11 - 3) = v47;
    v10 = __ROR4__(v46, 8);
    v9 = __ROR4__(v47, 8);
    v7 = v14;
    v8 = v15;
    v11 += 8;
    --v13;
  }
  while ( v13 );
  v48 = 0;
  v49 = 0LL;
  v50 = 0;
  v51 = 0;
  do
    v48 ^= v6[v49++];
  while ( v49 < 0x338 );
  if ( v48 == 64LL )
  {
    v6[823] = 0;
    memset_0(&unk_1801CFE50, 0, 0x60uLL);
    if ( !*v6 )
      goto LABEL_41;
    while ( 1 )
    {
      v54 = (const WCHAR *)v6;
      v55 = -1LL;
      v50 = 0;
      do
        ++v55;
      while ( *(_WORD *)&v6[2 * v55] );
      v56 = &v6[2 * v55];
      v57 = (char *)&unk_1801CFE50 + 24 * v51;
      if ( !GetModuleHandleExW(0, v54, (HMODULE *)v57) )
        break;
      if ( **(_WORD **)v57 == 23117
        && (v58 = *(int *)(*(_QWORD *)v57 + 60LL), (unsigned int)v58 < 0x10000000)
        && (v59 = *(_QWORD *)v57 + v58, v59 >= *(_QWORD *)v57)
        && *(_DWORD *)v59 == 17744 )
      {
        if ( ((*(_WORD *)(v59 + 24) - 267) & 0xFEFF) != 0 )
        {
          v50 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v57 + 12) = *(_QWORD *)(v59 + 136);
          *((_DWORD *)v57 + 2) = *(_DWORD *)(v59 + 80);
        }
      }
      else
      {
        v50 = -1073741701;
      }
      v60 = *(_DWORD *)(v56 + 2);
      v6 = v56 + 6;
      for ( i = 0; i < v60; ++i )
      {
        v62 = v6;
        v63 = -1LL;
        do
          ++v63;
        while ( v6[v63] );
        v6 += v63 + 1;
        if ( v50 >= 0 )
        {
          ProcAddress = GetProcAddress(*(HMODULE *)v57, v62);
          if ( !ProcAddress )
            goto LABEL_40;
          off_1801CD000[(unsigned int)v1538] = ProcAddress;
        }
        LODWORD(v1538) = v1538 + 1;
      }
      ++v51;
      if ( !*v6 )
        goto LABEL_40;
    }
    v50 = -1073741702;
LABEL_40:
    if ( lpModuleName )
    {
LABEL_41:
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpModuleName);
    }
    v3 = Size;
    if ( v50 < 0 )
      goto LABEL_15;
    v5 = dword_1801CF980;
LABEL_44:
    dword_1801CF980 = v5 + 1;
    goto LABEL_45;
  }
  operator delete(v6);
  v3 = 0;
LABEL_15:
  v52 = (HMODULE *)&unk_1801CFE50;
  v53 = 4LL;
  do
  {
    if ( *v52 )
      FreeLibrary(*v52);
    v52 += 3;
    --v53;
  }
  while ( v53 );
  memset_0(&unk_1801CFE50, 0, 0x60uLL);
  memcpy_0(off_1801CD000, off_180171540, 0x170uLL);
LABEL_45:
  _InterlockedExchange(&dword_1801CFEF8, 0);
  String1 = 0LL;
  v1607 = 0LL;
  v66 = 0;
  v67 = 0;
  if ( NtCurrentPeb()->SessionId )
  {
    v68 = off_1801CD110[0]();
    v69 = 0LL;
    if ( !v68 )
      goto LABEL_56;
    v70 = 0LL;
    v1608 = 0LL;
    for ( j = 0LL; ; j = v1567 )
    {
      v72 = v70;
      if ( !v69 )
        v72 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1801CD130[0])(
             v68,
             2LL,
             v72,
             j,
             &v1567) )
      {
        v1608 = 0LL;
        String1 = v70;
        goto LABEL_67;
      }
      LastError = GetLastError();
      if ( LastError != 122 )
        break;
      if ( v70 )
        goto LABEL_61;
      v70 = (wchar_t *)operator new(v1567);
      SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1608);
      v69 = v70;
      v1608 = v70;
      if ( !v70 )
      {
        v67 = -2147024882;
        goto LABEL_67;
      }
    }
    if ( !LastError )
    {
LABEL_61:
      v67 = -2147467259;
      goto LABEL_67;
    }
    if ( LastError > 0 )
      v67 = (unsigned __int16)LastError | 0x80070000;
    else
      v67 = LastError;
LABEL_67:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1608);
    if ( v67 < 0 )
      goto LABEL_97;
    v75 = off_1801CD128[0];
    CurrentThreadId = GetCurrentThreadId();
    v77 = ((__int64 (__fastcall *)(_QWORD))v75)(CurrentThreadId);
    v78 = 0LL;
    if ( !v77 )
    {
      v67 = GetLastError();
      v79 = v67 < 0;
      if ( v67 > 0 )
      {
        v67 = (unsigned __int16)v67 | 0x80070000;
        v79 = v67 < 0;
      }
      if ( !v79 )
        v67 = -2147467259;
      goto LABEL_97;
    }
    v80 = 0LL;
    v1609 = 0LL;
    v67 = 0;
    for ( k = 0LL; ; k = v1569 )
    {
      v82 = v80;
      if ( !v78 )
        v82 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1801CD130[0])(
             v77,
             2LL,
             v82,
             k,
             &v1569) )
      {
        v1609 = 0LL;
        v1607 = v80;
        goto LABEL_88;
      }
      v83 = GetLastError();
      if ( v83 != 122 )
        break;
      if ( v80 )
        goto LABEL_82;
      v80 = (wchar_t *)operator new(v1569);
      SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1609);
      v78 = v80;
      v1609 = v80;
      if ( !v80 )
      {
        v67 = -2147024882;
        goto LABEL_88;
      }
    }
    if ( !v83 )
    {
LABEL_82:
      v67 = -2147467259;
      goto LABEL_88;
    }
    if ( v83 > 0 )
      v67 = (unsigned __int16)v83 | 0x80070000;
    else
      v67 = v83;
LABEL_88:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1609);
    if ( v67 < 0 )
      goto LABEL_97;
    if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1607 && !wcscmp_0(v1607, L"Default") )
    {
      v1543 = 0;
      CurrentProcess = GetCurrentProcess();
      if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1543, 4LL) )
      {
        if ( (v1543 & 0xF) == 0 )
          v66 = 1;
        goto LABEL_96;
      }
LABEL_56:
      v67 = GetLastError();
      v74 = v67 < 0;
      if ( v67 > 0 )
      {
        v67 = (unsigned __int16)v67 | 0x80070000;
        v74 = v67 < 0;
      }
      if ( !v74 )
        v67 = -2147467259;
      goto LABEL_97;
    }
  }
LABEL_96:
  v3 = v66;
LABEL_97:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1607);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&String1);
  v85 = 0;
  if ( v67 >= 0 )
    v85 = v3;
  v1496 = v85;
  v86 = LocalAlloc(0x40u, 4uLL);
  v1565 = v86;
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1536);
  if ( !v86 )
  {
    v1536 = 0LL;
    v87 = -2147024882;
LABEL_1584:
    v1226 = v1543;
    goto LABEL_1585;
  }
  v1536 = (SIZE_T)v86;
  v88 = 0LL;
  v89 = 0LL;
  Src = 0LL;
  *(_OWORD *)v1674 = 0LL;
  v1570 = 0;
  v90 = GetProcessHeap();
  v91 = HeapAlloc(v90, 8u, 0xA0uLL);
  lpModuleNamea = 3LL;
  if ( !v91 )
    goto LABEL_112;
  v88 = v91;
  *v91 = xmmword_1801CED60[0];
  v91[1] = *((_OWORD *)&_ImageBase + 118487);
  v91[2] = *((_OWORD *)&_ImageBase + 118488);
  v91[3] = *((_OWORD *)&_ImageBase + 118489);
  v91[4] = *((_OWORD *)&_ImageBase + 118490);
  v91[5] = *((_OWORD *)&_ImageBase + 118491);
  v91[6] = *((_OWORD *)&_ImageBase + 118492);
  v91[7] = *((_OWORD *)&_ImageBase + 118493);
  v91[8] = xmmword_1801CED60[8];
  v91[9] = xmmword_1801CED60[9];
  v92 = GetProcessHeap();
  v93 = HeapAlloc(v92, 8u, 8uLL);
  if ( !v93 )
    goto LABEL_112;
  v89 = v93;
  *v93 = qword_1801CECA0;
  v1430 = __rdtsc();
  v87 = RtlUIntAdd(4u, 4, &v1571);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
  {
    v96 = v85;
    goto LABEL_594;
  }
  v87 = RtlUIntAdd(v94, 160, &v1561);
  LODWORD(v1540) = v87;
  v96 = v85;
  if ( v87 < 0 )
    goto LABEL_594;
  v87 = v95 + v1561 < v95 ? -805306219 : 0x10000000;
  LODWORD(v1540) = v87;
  if ( v95 + v1561 < v95 )
    goto LABEL_591;
  v87 = RtlUIntAdd(4u, 8, &v1572);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_594;
  v87 = v97 + v1572 < v97 ? -805306219 : 0x10000000;
  LODWORD(v1540) = v87;
  if ( v97 + v1572 < v97 )
    goto LABEL_591;
  v87 = RtlUIntAdd(4u, 8, &v1584);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_594;
  v87 = v100 + v1584 < v100 ? -805306219 : 0x10000000;
  LODWORD(v1540) = v87;
  if ( v100 + v1584 < v100 )
    goto LABEL_591;
  if ( StringCchLengthW(v99, v98, pcchLength) < 0 )
  {
    v87 = -1073741762;
LABEL_114:
    LODWORD(v1540) = v87;
    goto LABEL_594;
  }
  ++pcchLength[0];
  v87 = RtlUIntAdd(4u, 2 * LODWORD(pcchLength[0]), &v1594);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_594;
  v87 = v102 + v1594 < v102 ? -805306219 : 0x10000000;
  LODWORD(v1540) = v87;
  if ( v102 + v1594 < v102 )
    goto LABEL_591;
  v87 = RtlUIntAdd(v101, v101, &v1595);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_594;
  v87 = v103 + v1595 < v103 ? -805306219 : 0x10000000;
  LODWORD(v1540) = v87;
  if ( v103 + v1595 < v103 )
    goto LABEL_591;
  v87 = RtlUIntAdd(4u, 4, &v1596);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_594;
  v106 = v104 + v1596;
  v107 = v105;
  if ( v104 + v1596 >= v104 )
    v107 = v104 + v1596;
  v87 = v106 < v104 ? -805306219 : 0x10000000;
  LODWORD(v1540) = v87;
  if ( v106 < v104 )
  {
LABEL_591:
    if ( v87 >= 0 )
    {
LABEL_592:
      if ( v1570 )
      {
        v87 = v1570;
        LODWORD(v1540) = v1570;
      }
    }
    goto LABEL_594;
  }
  HIDWORD(v1672) = v107;
  v108 = v107;
  v109 = GetProcessHeap();
  v110 = HeapAlloc(v109, 8u, v108);
  if ( !v110 )
  {
LABEL_112:
    v87 = -1073741801;
    LODWORD(v1540) = -1073741801;
    v96 = v85;
    goto LABEL_594;
  }
  Src = v110;
  LODWORD(v1672) = 0;
  pcchLength[1] = (size_t)v110;
  v1459 = (SIZE_T)v89;
  LODWORD(v1538) = 8;
  v1520 = v88;
  LODWORD(Size) = 160;
  v111 = v1565;
  v1511 = v1565;
  v87 = RtlULongLongAdd((unsigned __int64)v110, 4LL, (unsigned __int64 *)&v1667);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
  {
    v96 = v1496;
    goto LABEL_594;
  }
  if ( v112 + 2 > (_DWORD *)((char *)v112 + HIDWORD(v1672)) )
    goto LABEL_128;
  *v112 = 4;
  *v1667 = 0;
  v113 = v1672 + 1;
  LODWORD(v1672) = v1672 + 1;
  v114 = v1496;
  v115 = Size;
  if ( !(_DWORD)Size )
  {
    v87 = -1073741811;
    goto LABEL_131;
  }
  if ( Src )
  {
    v119 = (int *)Src;
    v1256 = Src;
    v1611 = (int *)Src;
    v1388 = 0;
    if ( v113 )
    {
      while ( 1 )
      {
        v87 = RtlUIntAdd(4u, *v119, &v1599);
        LODWORD(v1540) = v87;
        if ( v87 < 0 )
          goto LABEL_146;
        v87 = RtlULongLongAdd((unsigned __int64)v1256, v1599, (unsigned __int64 *)&v1611);
        LODWORD(v1540) = v87;
        if ( v87 < 0 )
          goto LABEL_146;
        if ( ++v1388 >= v121 )
          break;
        v119 = v1611;
        v1256 = v1611;
      }
      v1459 = (SIZE_T)v89;
      LODWORD(v1538) = v120;
      v1520 = v88;
      v1511 = v111;
      v119 = v1611;
      v1256 = v1611;
    }
    v87 = RtlULongLongAdd((unsigned __int64)v119, 4LL, (unsigned __int64 *)&v1676);
    LODWORD(v1540) = v87;
    if ( v87 < 0 )
    {
LABEL_148:
      v96 = v1496;
      goto LABEL_594;
    }
    if ( (char *)v1256 + v115 + 4 <= (char *)Src + HIDWORD(v1672) )
    {
      *v1256 = v115;
      memcpy_0(v1676, v88, v115);
      v117 = v1672 + 1;
      LODWORD(v1672) = v1672 + 1;
      v118 = v1496;
      goto LABEL_149;
    }
    v87 = -1073741789;
LABEL_131:
    LODWORD(v1540) = v87;
    v96 = v114;
    goto LABEL_594;
  }
  v87 = RtlUIntAdd(4u, Size, (unsigned int *)&v1598);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
  {
LABEL_146:
    v96 = v116;
    goto LABEL_594;
  }
  v87 = RtlUIntAdd(HIDWORD(v1672), v1598, (unsigned int *)&v1672 + 1);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_148;
  v117 = v1672 + 1;
  LODWORD(v1672) = v1672 + 1;
  v118 = v1496;
LABEL_149:
  v122 = v1538;
  if ( !(_DWORD)v1538 )
    goto LABEL_150;
  if ( !Src )
  {
    v87 = RtlUIntAdd(4u, v1538, (unsigned int *)&v1600);
    LODWORD(v1540) = v87;
    if ( v87 < 0 )
    {
LABEL_230:
      v96 = v123;
      goto LABEL_594;
    }
    v87 = RtlUIntAdd(HIDWORD(v1672), v1600, (unsigned int *)&v1672 + 1);
    LODWORD(v1540) = v87;
    if ( v87 >= 0 )
    {
      v125 = v124 + v1672;
      LODWORD(v1672) = v124 + v1672;
      goto LABEL_170;
    }
LABEL_169:
    v96 = v118;
    goto LABEL_594;
  }
  v126 = (int *)Src;
  v1612 = (int *)Src;
  v1389 = 0;
  if ( v117 )
  {
    do
    {
      v87 = RtlUIntAdd(4u, *v126, &v1601);
      LODWORD(v1540) = v87;
      if ( v87 < 0 )
        goto LABEL_230;
      v87 = RtlULongLongAdd(v127, v1601, (unsigned __int64 *)&v1612);
      LODWORD(v1540) = v87;
      if ( v87 < 0 )
        goto LABEL_230;
      ++v1389;
      v126 = v1612;
    }
    while ( v1389 < v128 );
    v1459 = (SIZE_T)v89;
    v1520 = v88;
    v1511 = v111;
  }
  v87 = RtlULongLongAdd((unsigned __int64)v126, 4LL, (unsigned __int64 *)&v1677);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_169;
  if ( (char *)v129 + v122 + 4 > (char *)Src + HIDWORD(v1672) )
    goto LABEL_164;
  *v129 = v122;
  memcpy_0(v1677, v89, v122);
  v125 = v1672 + 1;
  LODWORD(v1672) = v1672 + 1;
LABEL_170:
  if ( !Src )
  {
    v87 = RtlUIntAdd(4u, 8, (unsigned int *)&v1602);
    LODWORD(v1540) = v87;
    if ( v87 < 0 )
    {
LABEL_183:
      v96 = v1496;
      goto LABEL_594;
    }
    v87 = RtlUIntAdd(HIDWORD(v1672), v1602, (unsigned int *)&v1672 + 1);
    LODWORD(v1540) = v87;
    if ( v87 >= 0 )
    {
      LODWORD(v1672) = v132 + v1672;
      goto LABEL_185;
    }
LABEL_184:
    v96 = v1496;
    goto LABEL_594;
  }
  v133 = (int *)Src;
  v1613 = (int *)Src;
  v1390 = 0;
  if ( v125 )
  {
    do
    {
      v87 = RtlUIntAdd(4u, *v133, &v1603);
      LODWORD(v1540) = v87;
      if ( v87 < 0 )
        goto LABEL_183;
      v87 = RtlULongLongAdd((unsigned __int64)v133, v1603, (unsigned __int64 *)&v1613);
      LODWORD(v1540) = v87;
      if ( v87 < 0 )
        goto LABEL_183;
      ++v1390;
      v133 = v1613;
    }
    while ( v1390 < v134 );
    v1459 = (SIZE_T)v89;
    v1520 = v88;
    v1511 = v111;
  }
  v87 = RtlULongLongAdd((unsigned __int64)v133, 4LL, (unsigned __int64 *)&v1678);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_184;
  if ( v133 + 3 > (int *)((char *)Src + HIDWORD(v1672)) )
  {
LABEL_128:
    v87 = -1073741789;
    LODWORD(v1540) = -1073741789;
    v96 = v1496;
    goto LABEL_594;
  }
  *v133 = 8;
  v131 = (const wchar_t *)v1430;
  *v1678 = v1430;
  LODWORD(v1672) = v1672 + 1;
LABEL_185:
  if ( StringCchLengthW(v131, v130, &v1614) < 0 )
  {
    v87 = -1073741762;
    goto LABEL_131;
  }
  v87 = RtlULongLongAdd(v1614, 1LL, &v1614);
  LODWORD(v1540) = v87;
  if ( v87 >= 0 )
  {
    if ( 2 * (_DWORD)v1614 )
    {
      if ( !Src )
      {
        v87 = RtlUIntAdd(4u, 2 * (int)v1614, (unsigned int *)&v1604);
        LODWORD(v1540) = v87;
        if ( v87 >= 0 )
        {
          v87 = RtlUIntAdd(HIDWORD(v1672), v1604, (unsigned int *)&v1672 + 1);
          LODWORD(v1540) = v87;
          v135 = v1672;
          if ( v87 >= 0 )
          {
            v135 = v136 + v1672;
            LODWORD(v1672) = v136 + v1672;
            v87 = 0;
            LODWORD(v1540) = 0;
          }
        }
        goto LABEL_203;
      }
      v137 = (int *)Src;
      v1615 = (int *)Src;
      if ( v135 )
      {
        do
        {
          v87 = RtlUIntAdd(4u, *v137, &v1545);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_203;
          v87 = RtlULongLongAdd((unsigned __int64)v137, v1545, (unsigned __int64 *)&v1615);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_203;
          v137 = v1615;
        }
        while ( v138 + 1 < v135 );
      }
      v87 = RtlULongLongAdd((unsigned __int64)v137, 4LL, (unsigned __int64 *)&v1679);
      LODWORD(v1540) = v87;
      if ( v87 < 0 )
        goto LABEL_203;
      if ( (char *)v137 + v139 + 4 <= (char *)Src + HIDWORD(v1672) )
      {
        *v137 = v139;
        memcpy_0(v1679, L"Kernel-OneCore-DeviceFamilyID", (unsigned int)v139);
        v135 = v1672 + 1;
        LODWORD(v1672) = v1672 + 1;
        goto LABEL_203;
      }
      v87 = -1073741789;
    }
    else
    {
      v87 = -1073741811;
    }
    LODWORD(v1540) = v87;
  }
LABEL_203:
  v96 = v1496;
  if ( v87 < 0 )
    goto LABEL_594;
  if ( !Src )
  {
    v87 = RtlUIntAdd(4u, 4, (unsigned int *)&v1568);
    LODWORD(v1540) = v87;
    if ( v87 < 0 )
      goto LABEL_594;
    v87 = RtlUIntAdd(HIDWORD(v1672), v1568, (unsigned int *)&v1672 + 1);
    LODWORD(v1540) = v87;
    if ( v87 >= 0 )
    {
      v141 = (_DWORD)v140 + 1;
      v142 = (_DWORD)v140 + 1 + v1672;
      LODWORD(v1672) = v142;
      goto LABEL_217;
    }
LABEL_216:
    v96 = v118;
    goto LABEL_594;
  }
  v143 = (int *)Src;
  v1616 = (int *)Src;
  v1391 = 0;
  if ( v135 )
  {
    do
    {
      v87 = RtlUIntAdd(4u, *v143, &v1546);
      LODWORD(v1540) = v87;
      if ( v87 < 0 )
        goto LABEL_230;
      v87 = RtlULongLongAdd((unsigned __int64)v143, v1546, (unsigned __int64 *)&v1616);
      LODWORD(v1540) = v87;
      if ( v87 < 0 )
        goto LABEL_230;
      ++v1391;
      v143 = v1616;
    }
    while ( v1391 < v144 );
    v1459 = (SIZE_T)v89;
    v1520 = v88;
    v1511 = v111;
  }
  v87 = RtlULongLongAdd((unsigned __int64)v143, 4LL, (unsigned __int64 *)&v1680);
  LODWORD(v1540) = v87;
  v140 = 0LL;
  if ( v87 < 0 )
    goto LABEL_216;
  if ( v143 + 2 > (int *)((char *)Src + HIDWORD(v1672)) )
    goto LABEL_164;
  *v143 = 4;
  *v1680 = v118;
  v141 = 1;
  v142 = v1672 + 1;
  LODWORD(v1672) = v1672 + 1;
LABEL_217:
  if ( Src == v140 )
  {
    v87 = RtlUIntAdd(4u, 4, (unsigned int *)&v1547);
    LODWORD(v1540) = v87;
    if ( v87 < 0 )
      goto LABEL_168;
    v87 = RtlUIntAdd(HIDWORD(v1672), v1547, (unsigned int *)&v1672 + 1);
    LODWORD(v1540) = v87;
    if ( v87 >= 0 )
    {
      LODWORD(v1672) = v141 + v1672;
      goto LABEL_232;
    }
LABEL_231:
    v96 = v118;
    goto LABEL_594;
  }
  v146 = (int *)Src;
  v1617 = (int *)Src;
  v1392 = (unsigned int)v140;
  if ( v142 )
  {
    do
    {
      v87 = RtlUIntAdd(4u, *v146, &v1548);
      LODWORD(v1540) = v87;
      if ( v87 < 0 )
        goto LABEL_230;
      v87 = RtlULongLongAdd((unsigned __int64)v146, v1548, (unsigned __int64 *)&v1617);
      LODWORD(v1540) = v87;
      if ( v87 < 0 )
        goto LABEL_230;
      ++v1392;
      v146 = v1617;
    }
    while ( v1392 < v147 );
    v1459 = (SIZE_T)v89;
    v1520 = v88;
    v1511 = v111;
  }
  v87 = RtlULongLongAdd((unsigned __int64)v146, 4LL, (unsigned __int64 *)&v1681);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_231;
  if ( v146 + 2 > (int *)((char *)Src + HIDWORD(v1672)) )
  {
LABEL_164:
    v87 = -1073741789;
    goto LABEL_166;
  }
  *v146 = v145;
  *v1681 = v145;
  LODWORD(v1672) = v145 - 3 + v1672;
LABEL_232:
  v87 = RtlUIntAdd(v145, v145, &v1549);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_168;
  v149 = v1549;
  v1550 = v1549;
  v87 = RtlUIntAdd(v148, 8, (unsigned int *)&v1551);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_168;
  v87 = RtlUIntAdd(v149, v1551, &v1550);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_243;
  v87 = RtlUIntAdd(v151, v151, (unsigned int *)&v1552);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_168;
  v87 = RtlUIntAdd(v1550, v1552, &v1550);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_243;
  v87 = RtlUIntAdd(v152, v152, (unsigned int *)&v1553);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_168;
  v87 = RtlUIntAdd(v1550, v1553, &v1550);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_243;
  v87 = RtlUIntAdd(v153, v153, (unsigned int *)&v1554);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_168;
  v87 = RtlUIntAdd(v1550, v1554, &v1550);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
  {
LABEL_243:
    v96 = v150;
    goto LABEL_594;
  }
  v87 = RtlUIntAdd(v154, v154, (unsigned int *)&v1555);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_168;
  v87 = RtlUIntAdd(v1550, v1555, &v1550);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_243;
  v1393 = v1550;
  v156 = v155;
  v1257 = v155;
  LODWORD(v1538) = (_DWORD)v155;
  v1488 = v155;
  v1527 = v155;
  LODWORD(Size) = (_DWORD)v155;
  v1451 = v155;
  v1363 = v155;
  v1500 = 0LL;
  v1334 = __rdtsc();
  v1556 = 8;
  v159 = RtlUIntAdd(8u, SHIDWORD(v1672), &v1556);
  if ( v159 < 0 )
    goto LABEL_252;
  v160 = (v1556 + 7) & 0xFFFFFFF8;
  if ( v160 < v1556 )
  {
    v87 = -805306219;
    goto LABEL_166;
  }
  v1556 = (v1556 + 7) & 0xFFFFFFF8;
  LODWORD(v1540) = v158;
  v161 = v160;
  v162 = GetProcessHeap();
  v156 = HeapAlloc(v162, 8u, v161);
  if ( !v156 )
  {
    v87 = -805306345;
    LODWORD(v1540) = -805306345;
    goto LABEL_183;
  }
  v1618[0] = v156;
  *v156 = v1672;
  v159 = RtlULongLongAdd((unsigned __int64)v156, 4LL, (unsigned __int64 *)v1618);
  lpMem = v156;
  v1393 = v1540;
  v1459 = (SIZE_T)v89;
  v1520 = v88;
  v1511 = v111;
  if ( v159 >= 0 )
  {
    v163 = v1618[0];
    *(_DWORD *)v1618[0] = HIDWORD(v1672);
    v159 = RtlULongLongAdd((unsigned __int64)v163, 4LL, (unsigned __int64 *)v1618);
    lpMem = v156;
    v1393 = v164;
    v1459 = (SIZE_T)v89;
    v1520 = v88;
    v1511 = v111;
    if ( v159 >= 0 )
    {
      *(_QWORD *)((char *)v156 + v1556 - 8) = v1334;
      memcpy_0(v1618[0], Src, HIDWORD(v1672));
      v1257 = v156;
      v165 = v1556;
      LODWORD(v1538) = v1556;
      v1393 = v1540;
      v1459 = (SIZE_T)v89;
      v1520 = v88;
      v1511 = v111;
      v118 = v1496;
      v157 = 0LL;
      goto LABEL_253;
    }
  }
  v166 = GetProcessHeap();
  HeapFree(v166, 0, lpMem);
  v156 = v1257;
  v118 = v1496;
  v157 = 0LL;
LABEL_252:
  v165 = (unsigned int)v156;
LABEL_253:
  v87 = v159 | 0x10000000;
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_355;
  lpMema = v157;
  if ( !v156 )
  {
    v87 = -805306355;
    goto LABEL_166;
  }
  v167 = v165;
  v1272 = v165;
  if ( v165 )
  {
    dwBytes = v165 + 8;
    v168 = (WCHAR *)operator new(v165 + 8LL);
    v1316 = v168;
    if ( v168 )
    {
      v169 = 0;
      v1230 = 0;
      v170 = 0LL;
      if ( v167 )
      {
        do
          v169 ^= *((_BYTE *)v156 + v170++);
        while ( v170 < v167 );
        v1230 = v169;
      }
      v1742 = 0xC81ECB17B1B54A58uLL;
      v171 = (unsigned __int8 *)v156;
      v172 = v168;
      v1335 = v168;
      v173 = 0;
      v174 = -1;
      LODWORD(v1540) = 0;
      LODWORD(v1537) = 0;
      v175 = v167 & 7;
      if ( (v167 & 7) != 0 )
      {
        v176 = 0;
        v177 = 0;
        v1375 = 0;
        v178 = 56;
        do
        {
          v179 = *v171++;
          if ( v177 >= 4 )
            v176 |= v179 << v178;
          else
            v173 |= v179 << (v178 - 32);
          LODWORD(v1540) = v176;
          LODWORD(v1537) = v173;
          v177 = v1375 + 1;
          v1375 = v177;
          v178 -= 8;
        }
        while ( (int)v177 < (int)v175 );
        v173 ^= 0xB17A307A;
        v180 = v176 ^ 0x42F6B18D;
        v181 = v173;
        v182 = v180;
        v1459 = (SIZE_T)v89;
        v1520 = v88;
        v1511 = v111;
        v1257 = v156;
        v183 = 0;
        v184 = v1335;
        do
        {
          v1336 = (WCHAR *)((char *)v184 + 1);
          if ( v183 >= 4 )
          {
            v182 = __ROL4__(v182, 8);
            v185 = v182;
          }
          else
          {
            v181 = __ROL4__(v181, 8);
            v185 = v181;
          }
          *(_BYTE *)v184 = v185;
          ++v183;
          v184 = (WCHAR *)((char *)v184 + 1);
        }
        while ( v183 < (int)v175 );
        v172 = v1336;
        v169 = v1230;
        v156 = v1257;
        if ( v175 <= 4 )
        {
          v174 = 0;
          if ( v175 >= 4 )
            goto LABEL_277;
          v173 = v173 >> (8 * (4 - v175)) << (8 * (4 - v175));
        }
        else
        {
          v174 = v180 >> (8 * (8 - v175)) << (8 * (8 - v175));
        }
        v172 = v1336;
      }
LABEL_277:
      v186 = (unsigned int)v1538;
      v1303 = (char *)((unsigned __int64)(unsigned int)v1538 >> 3);
      if ( v1303 )
      {
        LODWORD(v1538) = WORD1(v1742);
        v1417 = HIWORD(v1742);
        v187 = (char *)v172 + 7;
        v188 = v171 + 2;
        v189 = v1303;
        v190 = HIDWORD(v1742) ^ 0xB1B54A58;
        v191 = v1540;
        v192 = v1537;
        v193 = WORD2(v1742);
        do
        {
          v194 = v188[1] | ((*v188 | ((*(v188 - 1) | (*(v188 - 2) << 8)) << 8)) << 8);
          v195 = v188[5] | ((v188[4] | ((v188[3] | (v188[2] << 8)) << 8)) << 8);
          v196 = v195 ^ v174;
          v197 = v194 ^ HIDWORD(v1742) ^ (v196 - 19032) ^ v173;
          v198 = (v1538 * __ROR4__(v197 ^ HIDWORD(v1742), 15) + __ROR4__(v197, 7)) ^ v196;
          v199 = (v193 * __ROR4__(v198 - 1313519016, 9) - __ROR4__(v198, 10)) ^ v197;
          v200 = (v1417 * __ROL4__(v199 ^ v193, 4) + __ROL4__(v199, 5)) ^ v198;
          v201 = (HIDWORD(v1742) - (v200 ^ 0xB1B54A58)) ^ v199;
          v202 = (WORD1(v1742) * (v201 - 19032) - (v201 >> 6)) ^ v200;
          v203 = (19032 * (v193 ^ __ROR4__(v202, 15))) ^ v201;
          v204 = (v193 * (HIWORD(v1742) + __ROR4__(~v203, 3))) ^ v202;
          v205 = (v204 - HIDWORD(v1742) - 19032) ^ v203;
          v206 = (v1538 * (v205 ^ HIWORD(v1742))) ^ __ROR4__(v205, 10) ^ v204;
          v207 = (v193 * __ROL4__(v206 ^ 0x4A58, 6)) ^ __ROR4__(v206, 3) ^ v205;
          v208 = (19032 * (__ROR4__(v207, 15) - HIWORD(v1742))) ^ v206;
          v209 = (v208 >> 15) ^ (19032 * __ROL4__(v208 - v193, 3)) ^ (v208 >> 1) ^ (19032 * (v208 ^ HIWORD(v1742))) ^ v207;
          v210 = (WORD1(v1742) * (v209 - v193) - (v209 >> 13)) ^ v208;
          v211 = (v193 * __ROR4__(-1313519016 - v210, 9)) ^ __ROR4__(v210, 11) ^ v209;
          v212 = (v211 + 1313519016 - HIWORD(v1742)) ^ v210;
          v213 = (19032 * (v1538 ^ v212) - __ROR4__(v212, 7)) ^ v211;
          v214 = (v1538 * __ROL4__(HIWORD(v1742) ^ v213, 4) - __ROR4__(v213, 16)) ^ v212;
          v215 = (v193 * __ROR4__(-1313519016 - v214, 10) + __ROR4__(v214, 4)) ^ v213;
          v216 = (v1417 * __ROR4__(v215 + 1313519016, 4)) ^ __ROR4__(v215, 9) ^ v214;
          v217 = (19032 * __ROL4__(v216 ^ HIDWORD(v1742), 8) - __ROL4__(v216, 2)) ^ v215;
          v218 = (v1538 * __ROR4__(HIDWORD(v1742) - v217, 11) - __ROR4__(v217, 12)) ^ v216;
          v219 = (v218 >> 8) ^ (v193 * (WORD1(v1742) ^ v218)) ^ v217;
          v220 = v219 ^ v190;
          v221 = v192 ^ v219;
          v222 = v191 ^ v220 ^ v218;
          *(v187 - 4) = v221;
          v223 = __ROR4__(v221, 8);
          *v187 = v222;
          v224 = __ROR4__(v222, 8);
          *(v187 - 5) = v223;
          v225 = __ROR4__(v223, 8);
          *(v187 - 1) = v224;
          v226 = __ROR4__(v224, 8);
          *(v187 - 6) = v225;
          v227 = __ROR4__(v225, 8);
          *(v187 - 2) = v226;
          v228 = __ROR4__(v226, 8);
          *(v187 - 7) = v227;
          *(v187 - 3) = v228;
          v173 = __ROR4__(v227, 8);
          v174 = __ROR4__(v228, 8);
          v192 = v194;
          v191 = v195;
          v187 += 8;
          --v189;
          v188 += 8;
        }
        while ( v189 );
        v169 = v1230;
        v88 = v1520;
        v89 = (void *)v1459;
        v111 = v1511;
        v156 = v1257;
        v186 = v1272;
      }
      *(_QWORD *)((char *)v1316 + v186) = v169;
      v1621 = 160LL;
      v229 = GetProcessHeap();
      v230 = HeapAlloc(v229, 8u, 0x30uLL);
      v1521 = v230;
      if ( !v230 )
      {
        v231 = -1073741801;
LABEL_283:
        v232 = v1488;
        goto LABEL_284;
      }
      v1512 = (void **)(v230 + 2);
      *v230 = dwBytes;
      v240 = GetProcessHeap();
      v241 = HeapAlloc(v240, 8u, dwBytes);
      if ( v241 )
      {
        *v1512 = v241;
        memcpy_0(*v1512, v1316, dwBytes);
        v1521[4] = 160;
        v243 = GetProcessHeap();
        v244 = HeapAlloc(v243, 8u, 0xA0uLL);
        if ( !v244 )
        {
LABEL_298:
          v231 = -1073741801;
          v248 = v1521;
          v1307 = (void *)*((_QWORD *)v1521 + 1);
          if ( v1307 )
          {
            v249 = GetProcessHeap();
            HeapFree(v249, 0, v1307);
            v248 = v1521;
            *((_QWORD *)v1521 + 1) = 0LL;
          }
          v1308 = (void *)*((_QWORD *)v248 + 3);
          if ( v1308 )
          {
            v250 = GetProcessHeap();
            HeapFree(v250, 0, v1308);
            v248 = v1521;
            *((_QWORD *)v1521 + 3) = 0LL;
          }
          v1309 = (void *)*((_QWORD *)v248 + 5);
          if ( v1309 )
          {
            v251 = GetProcessHeap();
            HeapFree(v251, 0, v1309);
            *((_QWORD *)v1521 + 5) = 0LL;
          }
          v252 = GetProcessHeap();
          HeapFree(v252, 0, v1521);
          goto LABEL_283;
        }
        *((_QWORD *)v1521 + 3) = v244;
        v245 = (_OWORD *)*((_QWORD *)v1521 + 3);
        *v245 = xmmword_1801CECB0[0];
        v245[1] = xmmword_1801CECB0[1];
        v245[2] = xmmword_1801CECB0[2];
        v245[3] = xmmword_1801CECB0[3];
        v245[4] = xmmword_1801CECB0[4];
        v245[5] = xmmword_1801CECB0[5];
        v245[6] = xmmword_1801CECB0[6];
        v245[7] = xmmword_1801CECB0[7];
        v245[8] = xmmword_1801CECB0[8];
        v245[9] = xmmword_1801CECB0[9];
        v1521[8] = 8;
        v246 = GetProcessHeap();
        v247 = HeapAlloc(v246, 8u, 8uLL);
        if ( v247 )
        {
          *((_QWORD *)v1521 + 5) = v247;
          v231 = 0;
          **((_QWORD **)v1521 + 5) = qword_1801CED50;
          v232 = v1521;
          lpMema = 0LL;
LABEL_284:
          v1258 = v156;
          v1488 = v232;
          v233 = GetProcessHeap();
          HeapFree(v233, 0, v1316);
          v234 = lpMema;
          if ( lpMema )
          {
            v1304 = (void *)lpMema[1];
            if ( v1304 )
            {
              v235 = GetProcessHeap();
              HeapFree(v235, 0, v1304);
              v234 = lpMema;
              lpMema[1] = 0LL;
            }
            v1305 = (void *)v234[3];
            if ( v1305 )
            {
              v236 = GetProcessHeap();
              HeapFree(v236, 0, v1305);
              v234 = lpMema;
              lpMema[3] = 0LL;
            }
            v1306 = (void *)v234[5];
            if ( v1306 )
            {
              v237 = GetProcessHeap();
              HeapFree(v237, 0, v1306);
              lpMema[5] = 0LL;
            }
            v238 = GetProcessHeap();
            HeapFree(v238, 0, lpMema);
            v239 = v1488;
            v1258 = v156;
          }
          else
          {
            v239 = v1488;
          }
          v1310 = v156;
          lpMemb = v239;
          v87 = v231 | 0x10000000;
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_355;
          v1460 = (const void **)v239;
          v1522 = v239 + 8;
          v1418 = v239[8];
          v1513 = v239 + 4;
          LODWORD(v1557) = 4;
          v255 = RtlUIntAdd(4u, *v239, (unsigned int *)&v1557);
          if ( v255 >= 0 )
          {
            v255 = RtlUIntAdd(v1557, v253, (unsigned int *)&v1557);
            if ( v255 >= 0 )
            {
              v255 = RtlUIntAdd(v1557, v256, (unsigned int *)&v1557);
              if ( v255 >= 0 )
              {
                v255 = RtlUIntAdd(v1557, 4, (unsigned int *)&v1557);
                if ( v255 >= 0 )
                {
                  v255 = RtlUIntAdd(v1557, v1418, (unsigned int *)&v1557);
                  if ( v255 >= 0 )
                  {
                    v1419 = v1557;
                    v257 = v1557;
                    v258 = GetProcessHeap();
                    v259 = HeapAlloc(v258, 8u, v257);
                    v1376 = v259;
                    if ( !v259 )
                      goto LABEL_354;
                    v1622 = v259;
                    *v259 = *(_DWORD *)v1460;
                    v255 = RtlULongLongAdd((unsigned __int64)v259, 4LL, (unsigned __int64 *)&v1622);
                    v1537 = v260;
                    v1488 = lpMemb;
                    v156 = v1310;
                    if ( v255 < 0 )
                      goto LABEL_322;
                    memcpy_0(v1622, v1460[1], *(unsigned int *)v1460);
                    v255 = RtlULongLongAdd((unsigned __int64)v1622, *(unsigned int *)v1460, (unsigned __int64 *)&v1622);
                    v1537 = (SIZE_T)v1376;
                    v1488 = (int *)v1460;
                    v156 = v1310;
                    if ( v255 < 0 )
                      goto LABEL_322;
                    v261 = v1622;
                    *(_DWORD *)v1622 = *v1513;
                    v255 = RtlULongLongAdd((unsigned __int64)v261, 4LL, (unsigned __int64 *)&v1622);
                    v1537 = v262;
                    v1488 = lpMemb;
                    if ( v255 < 0 )
                      goto LABEL_322;
                    memcpy_0(v1622, v1460[3], (unsigned int)*v1513);
                    v255 = RtlULongLongAdd((unsigned __int64)v1622, (unsigned int)*v1513, (unsigned __int64 *)&v1622);
                    v1537 = (SIZE_T)v1376;
                    v1488 = lpMemb;
                    v156 = v1310;
                    if ( v255 < 0 )
                      goto LABEL_322;
                    v263 = v1622;
                    *(_DWORD *)v1622 = *v1522;
                    v255 = RtlULongLongAdd((unsigned __int64)v263, 4LL, (unsigned __int64 *)&v1622);
                    v1537 = v264;
                    v1488 = lpMemb;
                    if ( v255 < 0
                      || (memcpy_0(v1622, v1460[5], (unsigned int)*v1522),
                          v255 = RtlULongLongAdd(
                                   (unsigned __int64)v1622,
                                   (unsigned int)*v1522,
                                   (unsigned __int64 *)&v1622),
                          v1537 = (SIZE_T)v1376,
                          v1488 = lpMemb,
                          v254 = v1393,
                          v156 = v1310,
                          v255 < 0) )
                    {
LABEL_322:
                      v265 = GetProcessHeap();
                      HeapFree(v265, 0, (LPVOID)v1537);
                      v254 = v1393;
                    }
                    else
                    {
                      v1527 = v1376;
                      LODWORD(Size) = v1419;
                      v1488 = lpMemb;
                    }
                  }
                }
              }
            }
          }
          v87 = v255 | 0x10000000;
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_355;
          v1558 = 8;
          v266 = RtlUIntAdd(8u, v254, &v1558);
          v87 = v266 | 0x10000000;
          LODWORD(v1540) = v266 | 0x10000000;
          if ( v266 < 0 )
            goto LABEL_355;
          v270 = (v1558 + 7) & 0xFFFFFFF8;
          if ( v270 < v1558 )
          {
            v87 = -1073741675;
LABEL_468:
            LODWORD(v1540) = v87;
            goto LABEL_355;
          }
          v1559 = (v1558 + 7) & 0xFFFFFFF8;
          v1527 = v269;
          v1488 = v268;
          v87 = RtlUIntAdd(v270, v267, &v1559);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_355;
          v1488 = v271;
          v1527 = v272;
          if ( !Src )
            goto LABEL_349;
          v1488 = v271;
          v1527 = v272;
          if ( (unsigned int)v1672 <= 1 )
            goto LABEL_349;
          v273 = (unsigned int *)Src;
          v1623 = (unsigned int *)Src;
          v1258 = v156;
          do
          {
            v1337 = *v273;
            v87 = RtlULongLongAdd((unsigned __int64)v273, 4LL, (unsigned __int64 *)&v1623);
            LODWORD(v1540) = v87;
            if ( v87 < 0 )
              goto LABEL_355;
            v87 = RtlULongLongAdd((unsigned __int64)v1623, v1337, (unsigned __int64 *)&v1623);
            LODWORD(v1540) = v87;
            if ( v87 < 0 )
              goto LABEL_355;
            v273 = v1623;
          }
          while ( v274 == -1 );
          v1338 = *v1623;
          v87 = RtlULongLongAdd((unsigned __int64)v1623, 4LL, (unsigned __int64 *)&v1623);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_355;
          if ( !Src || (unsigned int)v1672 <= 2 )
          {
LABEL_349:
            v87 = -1073741811;
            goto LABEL_468;
          }
          v275 = (unsigned int *)Src;
          v1624 = (unsigned int *)Src;
          do
          {
            v1420 = *v275;
            v87 = RtlULongLongAdd((unsigned __int64)v275, 4LL, (unsigned __int64 *)&v1624);
            LODWORD(v1540) = v87;
            if ( v87 < 0 )
              goto LABEL_355;
            v87 = RtlULongLongAdd((unsigned __int64)v1624, v1420, (unsigned __int64 *)&v1624);
            LODWORD(v1540) = v87;
            if ( v87 < 0 )
              goto LABEL_355;
            v275 = v1624;
          }
          while ( (unsigned int)(v276 + 1) < 2 );
          v87 = RtlULongLongAdd((unsigned __int64)v1624, 4LL, (unsigned __int64 *)&v1624);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_355;
          v1560 = 4;
          v87 = RtlUIntAdd(4u, v1559, &v1560);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_355;
          v87 = RtlUIntAdd(v1560, v277, &v1560);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_355;
          v87 = RtlUIntAdd(v1560, v1338, &v1560);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_355;
          v87 = RtlUIntAdd(v1560, 4, &v1560);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_355;
          v87 = RtlUIntAdd(v1560, v278, &v1560);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_355;
          v1476 = v1560;
          if ( v1560 > 0x400000 )
          {
            v87 = -2147418113;
            goto LABEL_468;
          }
          v281 = v280;
          v1311 = v280;
          v1317 = (LPCWSTR)v156;
          dwBytesa = (SIZE_T)v111;
          v1273 = (size_t)v88;
          v1461 = v279;
          v282 = v1560;
          v283 = GetProcessHeap();
          v284 = (unsigned int *)HeapAlloc(v283, 8u, v282);
          if ( v284 )
          {
            v1451 = v284;
            if ( !v281 )
            {
              v87 = -2147024809;
              v1451 = v284;
              v1488 = (int *)v1461;
LABEL_393:
              v156 = v1317;
              v307 = v1311;
LABEL_395:
              LODWORD(v1540) = v87;
              v1527 = v307;
              goto LABEL_355;
            }
            v1688[0] = v281;
            v1689 = Size;
            v1688[1] = v284;
            v1690 = v1476;
            v1691 = 0;
            if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
              && (v297 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
            {
              v298 = ((__int64 (__fastcall *)(__int64, _QWORD *))v297)(134LL, v1688);
              v87 = v298 | 0x10000000;
              LODWORD(v1540) = v298 | 0x10000000;
              v299 = v1476;
              if ( v298 >= 0 )
              {
                v299 = v1690;
                v300 = v1311;
                v301 = v1317;
                v302 = v111;
                v303 = v88;
                v304 = v89;
                v305 = (int *)v1461;
                goto LABEL_397;
              }
            }
            else
            {
              v306 = GetLastError();
              v87 = v306;
              if ( v306 > 0 )
                v87 = (unsigned __int16)v306 | 0x80070000;
              if ( v87 >= 0 )
                v87 = -2147467259;
              LODWORD(v1540) = v87;
              v299 = v1476;
            }
            v305 = (int *)v1461;
            v1488 = (int *)v1461;
            if ( v87 == -805306333 )
            {
              v87 = -2147024774;
              goto LABEL_393;
            }
            v304 = v89;
            v303 = v88;
            v302 = v111;
            v301 = v1317;
            v156 = v1317;
            v300 = v1311;
            v1527 = v1311;
            if ( v87 < 0 )
              goto LABEL_355;
LABEL_397:
            v1312 = 0LL;
            v111 = v302;
            if ( v299 < 4 )
            {
              v87 = -805306306;
              v1488 = v305;
              v89 = v304;
              v156 = v301;
LABEL_401:
              v88 = (void *)v1273;
LABEL_403:
              LODWORD(v1540) = v87;
              v1527 = v300;
              goto LABEL_355;
            }
            v308 = *v1451;
            v1339 = *v1451;
            v1318 = (LPCWSTR)(v1451 + 1);
            v88 = v303;
            v156 = v301;
            if ( v1451 + 1 < v1451 )
            {
              v87 = -805306219;
              v1488 = (int *)v1461;
              v89 = v304;
              goto LABEL_403;
            }
            v309 = v300;
            v1527 = v300;
            v1488 = (int *)v1461;
            if ( v299 - 4 < (unsigned int)v308 )
            {
              v87 = -805306306;
            }
            else
            {
              v1477 = *v1451;
              if ( (LPCWSTR)((char *)v1318 + v308) >= v1318 )
              {
                if ( (unsigned int)v308 >= 0xFFFFFFFC )
                  goto LABEL_530;
                if ( v299 - ((_DWORD)v308 + 4) >= 4 )
                {
                  v310 = *(_DWORD *)((char *)v1318 + v308);
                  v1421 = v310;
                  v1394 = (char *)v1318 + v308 + 4;
                  v1527 = v309;
                  v1488 = (int *)v1461;
                  if ( v1394 < (char *)v1318 + v308 )
                    goto LABEL_529;
                  v1377 = v308 + 8;
                  if ( (int)v308 + 8 < (unsigned int)(v308 + 4) )
                    goto LABEL_530;
                  if ( v299 - v1377 < v310 )
                    goto LABEL_423;
                  v1540 = *(unsigned int *)((char *)v1318 + v308);
                  v1537 = (SIZE_T)&v1394[v310];
                  v1527 = v309;
                  v1488 = (int *)v1461;
                  if ( v1537 < (unsigned __int64)v1394 )
                    goto LABEL_529;
                  v307 = v309;
                  v311 = v1377 + v310;
                  v1378 = v311;
                  if ( v311 < (int)v308 + 8 )
                  {
                    v87 = -805306219;
                    v1488 = (int *)v1461;
                    goto LABEL_395;
                  }
                  if ( v299 - v311 < 4 )
                    goto LABEL_423;
                  v312 = v1537;
                  v313 = *(_DWORD *)v1537;
                  LODWORD(v1537) = *(_DWORD *)v1537;
                  v1538 = v312 + 4;
                  v1527 = v309;
                  v1488 = (int *)v1461;
                  if ( v312 + 4 < v312 )
                  {
LABEL_529:
                    v87 = -805306219;
                    goto LABEL_468;
                  }
                  v314 = v311 + 4;
                  if ( v1378 + 4 < v1378 )
                    goto LABEL_530;
                  dwBytesb = (SIZE_T)v309;
                  v1443 = (int *)v1461;
                  if ( v299 - v314 >= v313 )
                  {
                    if ( v313 + v314 >= v314 )
                    {
                      v1527 = v309;
                      v1259 = v156;
                      v1514 = v302;
                      v1523 = v88;
                      v1462 = (SIZE_T)v89;
                      v1488 = v1443;
                      v315 = v1451;
                      if ( v299 != v313 + v314 )
                      {
LABEL_422:
                        v87 = -805306306;
                        LODWORD(v1540) = -805306306;
                        v1451 = v315;
                        v1488 = v1443;
                        v1527 = v309;
                        goto LABEL_355;
                      }
                      if ( v313 + (_DWORD)v308 + v1421 + 12LL != v299 )
                      {
                        v315 = v1451;
                        goto LABEL_422;
                      }
                      v316 = GetProcessHeap();
                      v317 = HeapAlloc(v316, 8u, 0x30uLL);
                      v1379 = v317;
                      if ( !v317 )
                      {
                        v87 = -805306345;
                        v1488 = v1443;
                        v307 = (void *)dwBytesb;
                        goto LABEL_395;
                      }
                      v318 = 0;
                      if ( v1451 == (unsigned int *)-4LL )
                      {
                        *(_DWORD *)v317 = 0;
                        v317[1] = 0LL;
                        v321 = v1538;
                      }
                      else
                      {
                        *(_DWORD *)v317 = v1339;
                        v319 = GetProcessHeap();
                        v320 = HeapAlloc(v319, 8u, v1477);
                        if ( !v320 )
                          goto LABEL_437;
                        v1379[1] = v320;
                        memcpy_0(v320, v1318, v1477);
                        v317 = v1379;
                        v321 = v1538;
                      }
                      v1259 = v156;
                      v1514 = v111;
                      v1523 = v88;
                      v1462 = (SIZE_T)v89;
                      v1379 = v317;
                      if ( v1394 )
                      {
                        *((_DWORD *)v317 + 4) = v1421;
                        v322 = GetProcessHeap();
                        v323 = HeapAlloc(v322, 8u, v1540);
                        if ( !v323 )
                          goto LABEL_437;
                        v1379[3] = v323;
                        v318 = 0;
                        memcpy_0(v323, v1394, v1540);
                        v317 = v1379;
                        v321 = v1538;
                        v324 = v1451;
                        v325 = v1443;
                        v1462 = (SIZE_T)v89;
                        v1523 = v88;
                        v1514 = v111;
                        v1259 = v156;
                        v326 = v1527;
                      }
                      else
                      {
                        *((_DWORD *)v317 + 4) = 0;
                        v317[3] = 0LL;
                        v325 = v1443;
                        v326 = v1527;
                        v324 = v1451;
                      }
                      if ( !v321 )
                      {
                        *((_DWORD *)v317 + 8) = 0;
                        v317[5] = 0LL;
                        goto LABEL_445;
                      }
                      v327 = (unsigned int)v1537;
                      *((_DWORD *)v317 + 8) = v1537;
                      v328 = v327;
                      v1238 = v327;
                      v329 = GetProcessHeap();
                      v330 = HeapAlloc(v329, 8u, v328);
                      if ( v330 )
                      {
                        v1379[5] = v330;
                        v318 = 0;
                        memcpy_0(v330, (const void *)v1538, v1238);
                        v317 = v1379;
                        v324 = v1451;
                        v325 = v1443;
                        v1462 = (SIZE_T)v89;
                        v1523 = v88;
                        v1514 = v111;
                        v1259 = v156;
                        v326 = v1527;
LABEL_445:
                        v1312 = v317;
                        goto LABEL_446;
                      }
LABEL_437:
                      v318 = -1073741801;
                      v331 = v1379;
                      v1239 = (void *)v1379[1];
                      if ( v1239 )
                      {
                        v332 = GetProcessHeap();
                        HeapFree(v332, 0, v1239);
                        v331 = v1379;
                        v1379[1] = 0LL;
                      }
                      v1240 = (void *)v331[3];
                      if ( v1240 )
                      {
                        v333 = GetProcessHeap();
                        HeapFree(v333, 0, v1240);
                        v331 = v1379;
                        v1379[3] = 0LL;
                      }
                      v1241 = (void *)v331[5];
                      if ( v1241 )
                      {
                        v334 = GetProcessHeap();
                        HeapFree(v334, 0, v1241);
                        v1379[5] = 0LL;
                      }
                      v335 = GetProcessHeap();
                      HeapFree(v335, 0, v1379);
                      v325 = v1443;
                      v326 = v1527;
                      v324 = v1451;
                      v317 = 0LL;
LABEL_446:
                      v1242 = (size_t)v326;
                      v1274 = (size_t)v325;
                      lpMemc = v324;
                      v1340 = v318;
                      v336 = 0LL;
                      if ( v318 < 0 )
                      {
                        v1363 = 0LL;
                        v1451 = v324;
                        v1488 = v325;
                        v1462 = (SIZE_T)v89;
                        v1523 = v88;
                        v1514 = v111;
                        v1259 = v156;
                        v1527 = v326;
                        if ( v317 )
                        {
                          v337 = (void *)v1312[1];
                          if ( v337 )
                          {
                            v338 = GetProcessHeap();
                            HeapFree(v338, 0, v337);
                            v1312[1] = 0LL;
                          }
                          v339 = (void *)v1312[3];
                          if ( v339 )
                          {
                            v340 = GetProcessHeap();
                            HeapFree(v340, 0, v339);
                            v1312[3] = 0LL;
                          }
                          v341 = (void *)v1312[5];
                          if ( v341 )
                          {
                            v342 = GetProcessHeap();
                            HeapFree(v342, 0, v341);
                            v1312[5] = 0LL;
                          }
                          v343 = GetProcessHeap();
                          HeapFree(v343, 0, v1312);
                          v336 = 0LL;
                          v1363 = 0LL;
                          v1451 = lpMemc;
                          v1488 = (int *)v1274;
                          v1462 = (SIZE_T)v89;
                          v1523 = v88;
                          v1514 = v111;
                          v1259 = v156;
                          v318 = v1340;
                          v1527 = (void *)v1242;
                        }
                      }
                      else
                      {
                        v336 = (unsigned int *)v317;
                        v1363 = v317;
                      }
                      v87 = v318 | 0x10000000;
                      LODWORD(v1540) = v87;
                      if ( v87 >= 0 )
                      {
                        if ( !v336 || (v1243 = *((_QWORD *)v336 + 1)) == 0 || !*v336 )
                        {
                          v87 = -805306355;
                          goto LABEL_468;
                        }
                        v344 = *v336 - 8;
                        v1444 = *v336 - 8LL;
                        v345 = (WCHAR *)operator new(v1444);
                        v1470 = v345;
                        v346 = 0;
                        if ( !v345 )
                        {
LABEL_490:
                          v1500 = 0LL;
                          v87 = -805306367;
                          goto LABEL_468;
                        }
                        v1740 = 0x7F1137FAB69605ELL;
                        v347 = (unsigned __int8 *)v1243;
                        v348 = v345;
                        dwBytesc = v344 & 7;
                        v349 = v1363;
                        if ( (v344 & 7) != 0 )
                        {
                          v1341 = 0;
                          v1380 = 0;
                          v350 = 56;
                          v351 = (unsigned __int8 *)v1243;
                          v352 = 0;
                          do
                          {
                            v1422 = *v351++;
                            if ( v1380 >= 4 )
                            {
                              v353 = (v1422 << v350) | v1341;
                              v1341 = v353;
                            }
                            else
                            {
                              v352 |= v1422 << (v350 - 32);
                              v353 = v1341;
                            }
                            ++v1380;
                            v350 -= 8;
                          }
                          while ( (int)v1380 < dwBytesc );
                          v1423 = v352;
                          v1381 = v352 ^ 0x92F65A5;
                          v354 = v353 ^ 0x699A899C;
                          LODWORD(v1537) = v354;
                          v355 = v352 ^ 0x92F65A5;
                          v346 = 0;
                          v1462 = (SIZE_T)v89;
                          v1523 = v88;
                          v1514 = v111;
                          v1259 = v156;
                          v345 = (WCHAR *)v1470;
                          v356 = 0;
                          v357 = (WCHAR *)v1470;
                          do
                          {
                            v1319 = (WCHAR *)((char *)v357 + 1);
                            if ( v356 >= 4 )
                            {
                              v354 = __ROL4__(v354, 8);
                              v358 = v354;
                            }
                            else
                            {
                              v355 = __ROL4__(v355, 8);
                              v358 = v355;
                            }
                            *(_BYTE *)v357 = v358;
                            ++v356;
                            v357 = (WCHAR *)((char *)v357 + 1);
                          }
                          while ( v356 < dwBytesc );
                          v348 = v1319;
                          v349 = v1363;
                          v359 = v1381;
                          if ( (unsigned int)dwBytesc > 4 )
                          {
                            LODWORD(v1537) = (unsigned int)v1537 >> (8 * (8 - dwBytesc)) << (8 * (8 - dwBytesc));
                            v348 = v1319;
LABEL_478:
                            v347 = v351;
                            goto LABEL_479;
                          }
                          LODWORD(v1537) = 0;
                          if ( (unsigned int)dwBytesc >= 4 )
                            goto LABEL_478;
                          v347 = v351;
                          v359 = v1381 >> (8 * (4 - dwBytesc)) << (8 * (4 - dwBytesc));
                          v348 = v1319;
                        }
                        else
                        {
                          v359 = 0;
                          v1423 = 0;
                          v1341 = -1;
                          LODWORD(v1537) = 0;
                        }
LABEL_479:
                        if ( v1444 >> 3 )
                        {
                          v360 = HIDWORD(v1740);
                          v1382 = WORD2(v1740);
                          v361 = (char *)v348 + 7;
                          v362 = v347 + 2;
                          v363 = v1537;
                          v364 = v1423;
                          v365 = v1341;
                          v366 = v1444 >> 3;
                          v367 = HIDWORD(v1740) ^ 0xAB69605E;
                          do
                          {
                            v368 = v362[1] | ((*v362 | ((*(v362 - 1) | (*(v362 - 2) << 8)) << 8)) << 8);
                            v369 = v362[5] | ((v362[4] | ((v362[3] | (v362[2] << 8)) << 8)) << 8);
                            v370 = v368 ^ v359;
                            v371 = v370 ^ v360 ^ 0xAB69605E ^ v369 ^ v363;
                            v372 = (__ROL4__(v371 + 1419157410, 5) * v1382 + __ROL4__(v371, 10)) ^ v370;
                            v373 = (__ROR4__(v372 + v360, 9) * WORD1(v1740) - __ROL4__(v372, 2)) ^ v371;
                            v374 = (24670 * (v373 - v1382) - (v373 >> 13)) ^ v372;
                            v375 = (__ROL4__(v374 ^ WORD1(v1740), 6) * HIWORD(v1740) - __ROL4__(v374, 2)) ^ v373;
                            v376 = (v360 - (v375 ^ 0xAB69605E)) ^ v374;
                            v377 = (WORD1(v1740) * (v376 ^ v1382)) ^ __ROR4__(v376, 6) ^ v375;
                            v378 = (24670 * __ROR4__(v377 + v360, 15) + __ROL4__(v377, 2)) ^ v376;
                            v379 = (__ROR4__(v378 + 1419157410, 14) * HIWORD(v1740) - __ROL4__(v378, 8)) ^ v377;
                            v380 = (__ROR4__(v379 ^ 0xAB69605E, 12) * v1382) ^ __ROR4__(v379, 10) ^ v378;
                            v381 = (v380 >> 10) ^ (WORD1(v1740) * (v380 ^ HIWORD(v1740))) ^ v379;
                            v382 = (HIWORD(v1740) * (__ROR4__(~v381, 5) + 24670)) ^ v380;
                            v383 = (v382 - HIWORD(v1740)) ^ 0xAB69605E ^ v381;
                            v384 = ((v383 >> 2) + __ROL4__(v383 ^ HIWORD(v1740), 2) * v1382) ^ v382;
                            v385 = (__ROR4__(v384 - v360, 6) * WORD1(v1740) + __ROL4__(v384, 7)) ^ v383;
                            v386 = (24670 * (v385 ^ v1382) + __ROR4__(v385, 9)) ^ v384;
                            v387 = (__ROL4__(v386 ^ WORD1(v1740), 5) * HIWORD(v1740) + __ROL4__(v386, 7)) ^ v385;
                            v388 = v367 ^ v387 ^ v386;
                            v389 = (v1382 * (__ROR4__(v388, 3) - WORD1(v1740))) ^ v387;
                            v390 = (24670 * __ROR4__(v389 - v360, 1) - __ROR4__(v389, 6)) ^ v388;
                            v391 = (__ROL4__(v390 - 1419157410, 3) * HIWORD(v1740) + __ROL4__(v390, 14)) ^ v389;
                            v392 = (__ROL4__(v391 - 1419157410, 15) * v1382 - __ROR4__(v391, 14)) ^ v390;
                            v393 = (v392 >> 3) ^ (WORD1(v1740) * (v392 ^ 0x605E)) ^ v391;
                            v394 = v364 ^ (24670 * __ROL4__(v393 ^ v360, 4)) ^ __ROL4__(v393, 2) ^ v392;
                            v395 = v365 ^ v393;
                            *(v361 - 4) = v394;
                            v396 = __ROR4__(v394, 8);
                            *v361 = v395;
                            v397 = __ROR4__(v395, 8);
                            *(v361 - 5) = v396;
                            v398 = __ROR4__(v396, 8);
                            *(v361 - 1) = v397;
                            v399 = __ROR4__(v397, 8);
                            *(v361 - 6) = v398;
                            v400 = __ROR4__(v398, 8);
                            *(v361 - 2) = v399;
                            v401 = __ROR4__(v399, 8);
                            *(v361 - 7) = v400;
                            *(v361 - 3) = v401;
                            v359 = __ROR4__(v400, 8);
                            v363 = __ROR4__(v401, 8);
                            v364 = v368;
                            v365 = v369;
                            v361 += 8;
                            --v366;
                            v362 += 8;
                          }
                          while ( v366 );
                          v346 = 0;
                          v88 = v1523;
                          v89 = (void *)v1462;
                          v111 = v1514;
                          v349 = v1363;
                          v345 = (WCHAR *)v1470;
                        }
                        for ( m = 0LL; m < v1444; ++m )
                          v346 ^= *((_BYTE *)v345 + m);
                        v156 = v1259;
                        v1313 = v1259;
                        v1463 = (SIZE_T)v1451;
                        v1363 = v349;
                        if ( v346 != *(_QWORD *)(v1444 + v1243) )
                        {
                          operator delete(v345);
                          goto LABEL_490;
                        }
                        v1562 = 0;
                        v1627 = v345;
                        if ( (unsigned int)v1444 < 4 )
                        {
                          v403 = -1073741762;
                          v1500 = v345;
                          v1363 = v349;
                          goto LABEL_467;
                        }
                        v1342 = *(_DWORD *)v345;
                        v403 = RtlULongLongAdd((unsigned __int64)v345, 4LL, (unsigned __int64 *)&v1627);
                        v1500 = v404;
                        v1363 = v405;
                        if ( v403 < 0 )
                          goto LABEL_467;
                        v403 = RtlUIntAdd(0, 4, &v1562);
                        v1500 = v408;
                        v1363 = v406;
                        v1451 = v407;
                        v409 = v1488;
                        if ( v403 < 0 )
                          goto LABEL_467;
                        if ( (unsigned int)v1444 - v1562 < 4 )
                          goto LABEL_513;
                        v1424 = *(_DWORD *)v1627;
                        v403 = RtlULongLongAdd((unsigned __int64)v1627, 4LL, (unsigned __int64 *)&v1627);
                        v1500 = v410;
                        v1363 = v411;
                        v1451 = v412;
                        v156 = v1259;
                        if ( v403 < 0 )
                          goto LABEL_467;
                        v403 = RtlUIntAdd(v1562, 4, &v1562);
                        v1500 = v408;
                        v1363 = v406;
                        v1451 = v407;
                        v409 = v1488;
                        if ( v403 < 0 )
                          goto LABEL_467;
                        if ( (unsigned int)v1444 - v1562 < v1424 )
                        {
LABEL_513:
                          v1451 = v407;
                          v1488 = v409;
                        }
                        else
                        {
                          v403 = RtlUIntAdd(v1562, v1424, &v1562);
                          v1500 = v408;
                          v1363 = v406;
                          v1451 = v413;
                          v156 = v1259;
                          if ( v403 < 0 )
                            goto LABEL_467;
                          if ( (char *)v408 + (unsigned int)v1444 >= (char *)v1627 + v1424
                            && (unsigned int)v1444 + (char *)v408 - (_BYTE *)v1627 - (unsigned __int64)v1424 < 8 )
                          {
                            v1244 = 0LL;
                            v403 = 0;
                            v1383 = 0;
                            v1500 = v408;
                            v1363 = v406;
                            v1451 = (unsigned int *)v1463;
                            v156 = v1259;
                            if ( v1627 )
                            {
                              v1445 = v1627;
                              v403 = RtlULongLongAdd((unsigned __int64)v1627, v1424, (unsigned __int64 *)&v1628);
                              v1500 = v415;
                              v1363 = v414;
                              v1451 = (unsigned int *)v1463;
                              if ( v403 < 0 )
                              {
LABEL_466:
                                v156 = v1259;
LABEL_467:
                                v87 = v403 | 0x10000000;
                                goto LABEL_468;
                              }
                              v1500 = v415;
                              v1363 = v414;
                              v1451 = (unsigned int *)v1463;
                              v156 = v1259;
                              if ( v1445 < v1628 )
                              {
                                v1500 = v415;
                                v416 = v414;
                                v1363 = v414;
                                v417 = v1463;
                                v1451 = (unsigned int *)v1463;
                                v418 = v1488;
                                v419 = (const WCHAR *)v1527;
                                v420 = (unsigned __int64)v1445;
                                while ( 1 )
                                {
                                  v1471 = v419;
                                  lpMemd = v418;
                                  v1464 = v417;
                                  v1524 = v416;
                                  v403 = RtlULongLongAdd(v420, 4LL, (unsigned __int64 *)&v1629);
                                  if ( v403 < 0 )
                                    goto LABEL_466;
                                  if ( v1629 > v1628 )
                                    goto LABEL_517;
                                  v403 = RtlUIntAdd(4u, *v421, &v1563);
                                  if ( v403 < 0 )
                                    goto LABEL_467;
                                  v403 = RtlULongLongAdd((unsigned __int64)v1445, v1563, (unsigned __int64 *)&v1630);
                                  v1363 = v422;
                                  v1451 = v423;
                                  v1488 = v424;
                                  v1259 = v1313;
                                  v1527 = (void *)v1471;
                                  if ( v403 < 0 )
                                    goto LABEL_466;
                                  v420 = (unsigned __int64)v1630;
                                  v1445 = v1630;
                                  v425 = (unsigned __int64)v1628;
                                  v1527 = (void *)v1471;
                                  if ( v1630 > v1628 )
                                  {
                                    v403 = -1073741811;
                                    v1363 = v1524;
                                    v1451 = (unsigned int *)v1464;
                                    v1488 = lpMemd;
                                    goto LABEL_467;
                                  }
                                  ++v1383;
                                  v416 = v1524;
                                  v1363 = v1524;
                                  v417 = v1464;
                                  v1451 = (unsigned int *)v1464;
                                  v418 = lpMemd;
                                  v1488 = lpMemd;
                                  v1259 = v1313;
                                  v419 = v1471;
                                  if ( v1630 >= v1628 )
                                  {
                                    v1363 = v1524;
                                    v1451 = (unsigned int *)v1464;
                                    v1488 = lpMemd;
                                    v1259 = v1313;
                                    v1527 = (void *)v1471;
                                    goto LABEL_519;
                                  }
                                }
                              }
                              v420 = (unsigned __int64)v1445;
                              v425 = (unsigned __int64)v1628;
LABEL_519:
                              if ( v420 != v425 )
                              {
LABEL_517:
                                v403 = -1073741811;
                                goto LABEL_467;
                              }
                            }
                            v426 = v1424;
                            if ( v1424 )
                            {
                              v427 = GetProcessHeap();
                              v428 = HeapAlloc(v427, 8u, v1424);
                              v1244 = v428;
                              v403 = 0;
                              if ( !v428 )
                              {
                                v403 = -1073741801;
                                goto LABEL_467;
                              }
                              v426 = v1424;
                            }
                            else
                            {
                              v428 = 0LL;
                            }
                            if ( v1627 )
                              memcpy_0(v428, v1627, v426);
                            v1674[1] = v1244;
                            LODWORD(v1674[0]) = v1383;
                            v156 = v1259;
                            if ( v1342 != v1383 )
                              v403 = -1073741762;
                            goto LABEL_467;
                          }
                          v1451 = (unsigned int *)v1463;
                        }
                        v1363 = v406;
                        v1500 = v408;
                        v403 = -1073741762;
                        v156 = v1259;
                        goto LABEL_467;
                      }
LABEL_355:
                      if ( !v156 )
                        goto LABEL_357;
                      goto LABEL_356;
                    }
LABEL_530:
                    v87 = -805306219;
                    LODWORD(v1540) = -805306219;
                    v1488 = (int *)v1461;
                    v1527 = v309;
                    goto LABEL_355;
                  }
                }
LABEL_423:
                v87 = -805306306;
                goto LABEL_468;
              }
              v87 = -805306219;
            }
            v1488 = (int *)v1461;
            v111 = (void *)dwBytesa;
            goto LABEL_401;
          }
LABEL_354:
          v87 = -805306345;
          LODWORD(v1540) = -805306345;
          v156 = v1258;
          goto LABEL_355;
        }
        v242 = v1393;
      }
      else
      {
        v242 = v1393;
      }
      v1393 = v242;
      goto LABEL_298;
    }
  }
  v87 = -805306367;
  LODWORD(v1540) = -805306367;
LABEL_356:
  v285 = GetProcessHeap();
  HeapFree(v285, 0, v156);
LABEL_357:
  if ( v1488 )
  {
    v1232 = (void *)*((_QWORD *)v1488 + 1);
    if ( v1232 )
    {
      v286 = GetProcessHeap();
      HeapFree(v286, 0, v1232);
      *((_QWORD *)v1488 + 1) = 0LL;
    }
    v1233 = (void *)*((_QWORD *)v1488 + 3);
    if ( v1233 )
    {
      v287 = GetProcessHeap();
      HeapFree(v287, 0, v1233);
      *((_QWORD *)v1488 + 3) = 0LL;
    }
    v1234 = (void *)*((_QWORD *)v1488 + 5);
    if ( v1234 )
    {
      v288 = GetProcessHeap();
      HeapFree(v288, 0, v1234);
      *((_QWORD *)v1488 + 5) = 0LL;
    }
    v289 = GetProcessHeap();
    HeapFree(v289, 0, v1488);
  }
  if ( v1527 )
  {
    v290 = GetProcessHeap();
    HeapFree(v290, 0, v1527);
  }
  if ( v1451 )
  {
    v291 = GetProcessHeap();
    HeapFree(v291, 0, v1451);
  }
  if ( v1363 )
  {
    v1235 = (void *)v1363[1];
    if ( v1235 )
    {
      v292 = GetProcessHeap();
      HeapFree(v292, 0, v1235);
      v1363[1] = 0LL;
    }
    v1236 = (void *)v1363[3];
    if ( v1236 )
    {
      v293 = GetProcessHeap();
      HeapFree(v293, 0, v1236);
      v1363[3] = 0LL;
    }
    v1237 = (void *)v1363[5];
    if ( v1237 )
    {
      v294 = GetProcessHeap();
      HeapFree(v294, 0, v1237);
      v1363[5] = 0LL;
    }
    v295 = GetProcessHeap();
    HeapFree(v295, 0, v1363);
  }
  if ( v1500 )
  {
    v296 = GetProcessHeap();
    HeapFree(v296, 0, v1500);
  }
  v118 = v1496;
  v96 = v1496;
  if ( v87 < 0 )
    goto LABEL_594;
  if ( !LODWORD(v1674[0]) )
  {
    v87 = -1073425151;
    goto LABEL_114;
  }
  if ( !v1674[1] )
  {
LABEL_150:
    v87 = -1073741811;
LABEL_166:
    LODWORD(v1540) = v87;
LABEL_168:
    v96 = v118;
    goto LABEL_594;
  }
  v1631 = v1674[1];
  v429 = *(_DWORD *)v1674[1];
  v87 = RtlULongLongAdd((unsigned __int64)v1674[1], 4LL, (unsigned __int64 *)&v1631);
  LODWORD(v1540) = v87;
  if ( v87 < 0 )
    goto LABEL_168;
  v431 = v1631;
  if ( !v429 )
    v431 = 0LL;
  v1631 = v431;
  if ( v429 != v430 )
    goto LABEL_164;
  v87 = *v431;
  LODWORD(v1540) = v87;
  if ( v87 == -805306333 )
  {
    v1570 = -2147024774;
LABEL_542:
    if ( LODWORD(v1674[0]) != 6 )
    {
LABEL_165:
      v87 = -1073425151;
      goto LABEL_166;
    }
    if ( v1674[1] )
    {
      v432 = (int *)v1674[1];
      v1632 = (int *)v1674[1];
      v433 = 0;
      while ( 1 )
      {
        v87 = RtlULongLongAdd((unsigned __int64)v432, 4LL, (unsigned __int64 *)&v1632);
        LODWORD(v1540) = v87;
        if ( v87 < 0 )
          goto LABEL_168;
        v87 = RtlULongLongAdd((unsigned __int64)v1632, v434, (unsigned __int64 *)&v1632);
        LODWORD(v1540) = v87;
        if ( v87 < 0 )
          goto LABEL_168;
        ++v433;
        v432 = v1632;
        if ( v433 )
        {
          v435 = *v1632;
          v87 = RtlULongLongAdd((unsigned __int64)v1632, 4LL, (unsigned __int64 *)&v1632);
          LODWORD(v1540) = v87;
          if ( v87 < 0 )
            goto LABEL_168;
          v437 = v1632;
          if ( !v435 )
            v437 = v436;
          v1632 = v437;
          if ( v435 != 8 )
            goto LABEL_164;
          v1245 = *(_QWORD *)v437;
          if ( v1674[1] == v436 )
            goto LABEL_150;
          v438 = (int *)v1674[1];
          v1633 = (int *)v1674[1];
          v439 = (unsigned int)v436;
          while ( 1 )
          {
            v87 = RtlULongLongAdd((unsigned __int64)v438, 4LL, (unsigned __int64 *)&v1633);
            LODWORD(v1540) = v87;
            if ( v87 < 0 )
              goto LABEL_168;
            v87 = RtlULongLongAdd((unsigned __int64)v1633, v440, (unsigned __int64 *)&v1633);
            LODWORD(v1540) = v87;
            if ( v87 < 0 )
              goto LABEL_168;
            ++v439;
            v438 = v1633;
            if ( v439 >= 2 )
            {
              v441 = *v1633;
              v87 = RtlULongLongAdd((unsigned __int64)v1633, 4LL, (unsigned __int64 *)&v1633);
              LODWORD(v1540) = v87;
              if ( v87 < 0 )
                goto LABEL_168;
              v443 = v1633;
              if ( !v441 )
                v443 = v442;
              v1633 = v443;
              if ( v441 != 4 )
                goto LABEL_164;
              v1343 = *v443;
              if ( v1674[1] == v442 )
                goto LABEL_150;
              v444 = v1674[1];
              v1634 = v1674[1];
              v445 = (unsigned int)v442;
              while ( 1 )
              {
                v87 = RtlULongLongAdd((unsigned __int64)v444, 4LL, (unsigned __int64 *)&v1634);
                LODWORD(v1540) = v87;
                if ( v87 < 0 )
                  goto LABEL_168;
                v87 = RtlULongLongAdd((unsigned __int64)v1634, v446, (unsigned __int64 *)&v1634);
                LODWORD(v1540) = v87;
                if ( v87 < 0 )
                  goto LABEL_168;
                ++v445;
                v444 = v1634;
                if ( v445 >= 3 )
                {
                  v87 = RtlULongLongAdd((unsigned __int64)v1634, 4LL, (unsigned __int64 *)&v1634);
                  LODWORD(v1540) = v87;
                  if ( v87 >= 0 )
                  {
                    v448 = v1634;
                    if ( !v447 )
                      v448 = 0LL;
                    v1634 = v448;
                    if ( v1674[1] )
                    {
                      v449 = (unsigned int *)v1674[1];
                      v1635 = (unsigned int *)v1674[1];
                      v450 = 0;
                      while ( 1 )
                      {
                        v1425 = *v449;
                        v87 = RtlULongLongAdd((unsigned __int64)v449, 4LL, (unsigned __int64 *)&v1635);
                        LODWORD(v1540) = v87;
                        if ( v87 < 0 )
                          break;
                        v87 = RtlULongLongAdd((unsigned __int64)v1635, v1425, (unsigned __int64 *)&v1635);
                        LODWORD(v1540) = v87;
                        if ( v87 < 0 )
                          break;
                        ++v450;
                        v449 = v1635;
                        if ( v450 >= 4 )
                        {
                          v451 = *v1635;
                          v87 = RtlULongLongAdd((unsigned __int64)v1635, 4LL, (unsigned __int64 *)&v1635);
                          LODWORD(v1540) = v87;
                          if ( v87 < 0 )
                            goto LABEL_168;
                          v452 = v1635;
                          if ( !v451 )
                            v452 = 0LL;
                          v1635 = v452;
                          if ( v451 != 4 )
                            goto LABEL_164;
                          v1426 = *v452;
                          if ( !v1674[1] )
                            goto LABEL_150;
                          v453 = (unsigned int *)v1674[1];
                          v1636 = (unsigned int *)v1674[1];
                          v454 = 0;
                          while ( 1 )
                          {
                            v1384 = *v453;
                            v87 = RtlULongLongAdd((unsigned __int64)v453, 4LL, (unsigned __int64 *)&v1636);
                            LODWORD(v1540) = v87;
                            if ( v87 < 0 )
                              goto LABEL_230;
                            v87 = RtlULongLongAdd((unsigned __int64)v1636, v1384, (unsigned __int64 *)&v1636);
                            LODWORD(v1540) = v87;
                            if ( v87 < 0 )
                              goto LABEL_230;
                            ++v454;
                            v453 = v1636;
                            if ( v454 >= 5 )
                            {
                              v455 = *v1636;
                              v456 = RtlULongLongAdd((unsigned __int64)v1636, 4LL, (unsigned __int64 *)&v1636);
                              v87 = v456;
                              LODWORD(v1540) = v456;
                              if ( v456 < 0 )
                              {
                                LODWORD(v1540) = v456;
                                goto LABEL_168;
                              }
                              v459 = v1636;
                              if ( !v455 )
                                v459 = 0LL;
                              v1636 = v459;
                              if ( v455 != 4 )
                                goto LABEL_164;
                              v96 = *v459;
                              if ( v1430 != v1245 )
                                goto LABEL_165;
                              v1566 = v1343;
                              if ( v1426 > 4 || (unsigned int)v458 > 4 )
                              {
                                v87 = -2147024774;
                                goto LABEL_114;
                              }
                              memcpy_0(v111, v457, v458);
                              goto LABEL_592;
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v87 = -1073741811;
                      LODWORD(v1540) = -1073741811;
                    }
                  }
                  goto LABEL_230;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_150;
  }
  v1570 = v87;
  if ( v87 == -2147024774 )
    goto LABEL_542;
  v96 = v118;
  v1570 = v87;
  if ( v87 >= 0 )
    goto LABEL_542;
LABEL_594:
  v1672 = 0LL;
  v460 = Src;
  if ( Src )
  {
    v461 = GetProcessHeap();
    HeapFree(v461, 0, v460);
    Src = 0LL;
  }
  v1674[0] = 0LL;
  v462 = v1674[1];
  if ( v1674[1] )
  {
    v463 = GetProcessHeap();
    HeapFree(v463, 0, v462);
    v1674[1] = 0LL;
  }
  if ( v88 )
  {
    v464 = GetProcessHeap();
    HeapFree(v464, 0, v88);
  }
  if ( v89 )
  {
    v465 = GetProcessHeap();
    HeapFree(v465, 0, v89);
  }
  if ( v87 < 0 )
    goto LABEL_1584;
  if ( v96 )
  {
    v1637 = 0LL;
    dword_1801CF908 = v96;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
    v467 = 0;
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
      goto LABEL_1229;
    v1246 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0F8[0])(0LL, 0LL, 1027LL);
    if ( !v1246 )
    {
      GetLastError();
LABEL_1229:
      SH<void *,SH_HANDLE>::Reset(&v1637);
      v909 = 0LL;
      v910 = 0LL;
      v1683 = 0LL;
      *(_OWORD *)v1686 = 0LL;
      v911 = GetProcessHeap();
      v912 = HeapAlloc(v911, 8u, 0xA0uLL);
      if ( !v912 )
        goto LABEL_1575;
      v909 = v912;
      *v912 = xmmword_1801CED60[0];
      v912[1] = xmmword_1801CED60[1];
      v912[2] = xmmword_1801CED60[2];
      v912[3] = xmmword_1801CED60[3];
      v912[4] = xmmword_1801CED60[4];
      v912[5] = xmmword_1801CED60[5];
      v912[6] = xmmword_1801CED60[6];
      v912[7] = xmmword_1801CED60[7];
      v912[8] = xmmword_1801CED60[8];
      v912[9] = xmmword_1801CED60[9];
      v913 = GetProcessHeap();
      v914 = (WCHAR *)HeapAlloc(v913, 8u, 8uLL);
      v915 = v914;
      if ( !v914 )
        goto LABEL_1575;
      *(_QWORD *)v914 = qword_1801CECA0;
      v1448 = __rdtsc();
      v1573 = 0;
      v910 = v915;
      if ( (int)RtlUIntAdd(4u, 4, (unsigned int *)&v1574) < 0 )
        goto LABEL_1575;
      if ( (int)RtlUIntAdd(0, v1574, &v1573) < 0 )
        goto LABEL_1575;
      if ( (int)RtlUIntAdd(v916, 160, (unsigned int *)&v1575) < 0 )
        goto LABEL_1575;
      v917 = RtlUIntAdd(v1573, v1575, &v1573);
      if ( (v920 | v917) < 0 )
        goto LABEL_1575;
      if ( (int)RtlUIntAdd(v919, v918 + 8, (unsigned int *)&v1576) < 0 )
        goto LABEL_1575;
      v921 = RtlUIntAdd(v1573, v1576, &v1573);
      if ( (v924 | v921) < 0 )
        goto LABEL_1575;
      if ( (int)RtlUIntAdd(v923, v922 + 8, v1577) < 0 )
        goto LABEL_1575;
      v925 = RtlUIntAdd(v1573, v1577[0], &v1573);
      if ( (v926 | v925) < 0 )
        goto LABEL_1575;
      HIDWORD(v1682) = v1573;
      v927 = v1573;
      v928 = GetProcessHeap();
      v929 = HeapAlloc(v928, 8u, v927);
      if ( !v929 )
        goto LABEL_1575;
      v1683 = v929;
      LODWORD(v1682) = 0;
      v1652[3] = v929;
      v1474 = v915;
      v1247 = (size_t)v909;
      v930 = 0LL;
      if ( (int)RtlULongLongAdd((unsigned __int64)v929, 4LL, (unsigned __int64 *)&v1687) < 0
        || v932 + 2 > (_DWORD *)((char *)v932 + HIDWORD(v1682)) )
      {
        goto LABEL_1575;
      }
      *v932 = 4;
      *v1687 = 4;
      v933 = v1682 + 1;
      LODWORD(v1682) = v1682 + 1;
      if ( v1683 )
      {
        v935 = (int *)v1683;
        v1653 = (int *)v1683;
        lpModuleNamef = 0;
        if ( v933 )
        {
          do
          {
            if ( (int)RtlUIntAdd(4u, *v935, &v1579) < 0
              || (int)RtlULongLongAdd(v936, v1579, (unsigned __int64 *)&v1653) < 0 )
            {
              goto LABEL_1575;
            }
            ++lpModuleNamef;
            v1474 = v910;
            v1247 = (size_t)v909;
            v935 = v1653;
          }
          while ( lpModuleNamef < v937 );
          v930 = 0LL;
        }
        if ( (int)RtlULongLongAdd((unsigned __int64)v935, 4LL, (unsigned __int64 *)&v1671) < 0
          || (char *)v938 + v939 + 4 > (char *)v1683 + HIDWORD(v1682) )
        {
          goto LABEL_1575;
        }
        *v938 = v939;
        memcpy_0(v1671, v909, v939);
        v934 = 4LL;
      }
      else if ( (int)RtlUIntAdd(4u, v931, (unsigned int *)&v1578) < 0
             || (int)RtlUIntAdd(HIDWORD(v1682), v1578, (unsigned int *)&v1682 + 1) < 0 )
      {
        goto LABEL_1575;
      }
      v940 = v1682 + 1;
      LODWORD(v1682) = v1682 + 1;
      if ( v910 )
      {
        if ( v1683 )
        {
          v943 = (int *)v1683;
          v1654 = (int *)v1683;
          lpModuleNameg = 0;
          if ( v940 )
          {
            do
            {
              if ( (int)RtlUIntAdd(4u, *v943, &v1581) < 0
                || (int)RtlULongLongAdd(v944, v1581, (unsigned __int64 *)&v1654) < 0 )
              {
                goto LABEL_1575;
              }
              ++lpModuleNameg;
              v1474 = v910;
              v1247 = (size_t)v909;
              v943 = v1654;
            }
            while ( lpModuleNameg < v945 );
            v930 = 0LL;
            v934 = 4LL;
          }
          if ( (int)RtlULongLongAdd((unsigned __int64)v943, v934, (unsigned __int64 *)&v1670) < 0
            || v946 + 3 > (_DWORD *)((char *)v1683 + HIDWORD(v1682)) )
          {
            goto LABEL_1575;
          }
          *v946 = 8;
          memcpy_0(v1670, v910, 8uLL);
          v942 = 4LL;
          v941 = 1;
        }
        else if ( (int)RtlUIntAdd(v934, 8, (unsigned int *)&v1580) < 0
               || (int)RtlUIntAdd(HIDWORD(v1682), v1580, (unsigned int *)&v1682 + 1) < 0 )
        {
          goto LABEL_1575;
        }
        v947 = v941 + v1682;
        LODWORD(v1682) = v941 + v1682;
        if ( v1683 )
        {
          v950 = (int *)v1683;
          v1655 = (int *)v1683;
          if ( v947 )
          {
            do
            {
              if ( (int)RtlUIntAdd(4u, *v950, &v1583) < 0
                || (int)RtlULongLongAdd(v951, v1583, (unsigned __int64 *)&v1655) < 0 )
              {
                goto LABEL_1575;
              }
              LODWORD(v930) = (_DWORD)v930 + 1;
              v1474 = v910;
              v1247 = (size_t)v909;
              v950 = v1655;
            }
            while ( (unsigned int)v930 < v947 );
            v942 = 4LL;
          }
          v930 = 0LL;
          if ( (int)RtlULongLongAdd((unsigned __int64)v950, v942, (unsigned __int64 *)&v1675) < 0
            || v952 + 3 > (_DWORD *)((char *)v1683 + HIDWORD(v1682)) )
          {
            goto LABEL_1575;
          }
          *v952 = 8;
          *v1675 = v1448;
          LODWORD(v1682) = v1682 + 1;
        }
        else
        {
          if ( (int)RtlUIntAdd(v942, 8, (unsigned int *)&v1582) < 0
            || (int)RtlUIntAdd(HIDWORD(v1682), v1582, (unsigned int *)&v1682 + 1) < 0 )
          {
            goto LABEL_1575;
          }
          LODWORD(v1682) = v948 + v1682;
        }
        if ( (int)RtlUIntAdd(v949, v949, v1605) >= 0 )
        {
          v954 = v1605[0];
          v1585 = v1605[0];
          if ( (int)RtlUIntAdd(v953, 8, (unsigned int *)&v1586) >= 0
            && (int)RtlUIntAdd(v954, v1586, (unsigned int *)&v1585) >= 0 )
          {
            lpModuleNameh = v1585;
            v1449 = 0LL;
            v1315 = 0LL;
            v1333 = 0LL;
            v1265 = 0;
            dwBytesm = 0LL;
            v1286 = 0LL;
            lpMemk = 0LL;
            v1506 = __rdtsc();
            v1587 = 8;
            v955 = RtlUIntAdd(8u, SHIDWORD(v1682), &v1587);
            if ( v955 >= 0 )
            {
              v958 = (v1587 + 7) & 0xFFFFFFF8;
              if ( v958 < v1587 )
                goto LABEL_1575;
              v1587 = (v1587 + 7) & 0xFFFFFFF8;
              v959 = v958;
              v960 = GetProcessHeap();
              v961 = (unsigned __int8 *)HeapAlloc(v960, 8u, v959);
              v1530 = v961;
              if ( !v961 )
                goto LABEL_1575;
              v1656[0] = v961;
              *(_DWORD *)v961 = v1682;
              v955 = RtlULongLongAdd((unsigned __int64)v961, 4LL, (unsigned __int64 *)v1656);
              v1536 = v962;
              v1474 = v910;
              v1247 = (size_t)v909;
              if ( v955 < 0
                || (v963 = v1656[0],
                    *(_DWORD *)v1656[0] = HIDWORD(v1682),
                    v955 = RtlULongLongAdd((unsigned __int64)v963, 4LL, (unsigned __int64 *)v1656),
                    v1536 = v964,
                    v1474 = v910,
                    v1247 = (size_t)v909,
                    v955 < 0) )
              {
                v965 = GetProcessHeap();
                HeapFree(v965, 0, (LPVOID)v1536);
                v956 = 0;
              }
              else
              {
                *(_QWORD *)(v1587 + v964 - 8) = v1506;
                memcpy_0(v1656[0], v1683, HIDWORD(v1682));
                v930 = v1530;
                v1449 = v1530;
                v956 = v1587;
                v1474 = v910;
                v1247 = (size_t)v909;
              }
              v957 = 0LL;
            }
            v966 = v955 | 0x10000000;
            if ( v966 < 0 )
              goto LABEL_1359;
            v1507 = v957;
            if ( v930 )
            {
              v967 = v956;
              v1372 = (LPVOID)v956;
              if ( !v956 || (v1456 = v956 + 8, v968 = (SIZE_T)operator new(v956 + 8LL), (v1531 = (char *)v968) == 0LL) )
              {
                v966 = -805306367;
LABEL_1360:
                v1062 = GetProcessHeap();
                HeapFree(v1062, 0, v930);
LABEL_1361:
                if ( v1315 )
                {
                  v1063 = (void *)v1315[1];
                  if ( v1063 )
                  {
                    v1064 = GetProcessHeap();
                    HeapFree(v1064, 0, v1063);
                    v1315[1] = 0LL;
                  }
                  v1065 = (void *)v1315[3];
                  if ( v1065 )
                  {
                    v1066 = GetProcessHeap();
                    HeapFree(v1066, 0, v1065);
                    v1315[3] = 0LL;
                  }
                  v1067 = (void *)v1315[5];
                  if ( v1067 )
                  {
                    v1068 = GetProcessHeap();
                    HeapFree(v1068, 0, v1067);
                    v1315[5] = 0LL;
                  }
                  v1069 = GetProcessHeap();
                  HeapFree(v1069, 0, v1315);
                }
                if ( v1333 )
                {
                  v1070 = GetProcessHeap();
                  HeapFree(v1070, 0, v1333);
                }
                if ( dwBytesm )
                {
                  v1071 = GetProcessHeap();
                  HeapFree(v1071, 0, dwBytesm);
                }
                if ( v1286 )
                {
                  v1072 = (void *)*((_QWORD *)v1286 + 1);
                  if ( v1072 )
                  {
                    v1073 = GetProcessHeap();
                    HeapFree(v1073, 0, v1072);
                    *((_QWORD *)v1286 + 1) = 0LL;
                  }
                  v1074 = (void *)*((_QWORD *)v1286 + 3);
                  if ( v1074 )
                  {
                    v1075 = GetProcessHeap();
                    HeapFree(v1075, 0, v1074);
                    *((_QWORD *)v1286 + 3) = 0LL;
                  }
                  v1076 = (void *)*((_QWORD *)v1286 + 5);
                  if ( v1076 )
                  {
                    v1077 = GetProcessHeap();
                    HeapFree(v1077, 0, v1076);
                    *((_QWORD *)v1286 + 5) = 0LL;
                  }
                  v1078 = GetProcessHeap();
                  HeapFree(v1078, 0, v1286);
                }
                if ( lpMemk )
                {
                  v1079 = GetProcessHeap();
                  HeapFree(v1079, 0, lpMemk);
                }
                if ( v966 >= 0 )
                {
                  if ( LODWORD(v1686[0]) )
                  {
                    v1080 = v1686[1];
                    if ( v1686[1] )
                    {
                      v1665 = (int *)v1686[1];
                      if ( (int)RtlULongLongAdd((unsigned __int64)v1686[1], 4LL, (unsigned __int64 *)&v1665) >= 0 )
                      {
                        v1083 = v1665;
                        if ( !*v1080 )
                          v1083 = 0LL;
                        v1665 = v1083;
                        if ( *v1080 == (_DWORD)v1082 && *v1083 >= 0 && v1080 && LODWORD(v1686[0]) > 1 )
                        {
                          v1666[0] = v1081;
                          v1084 = 0;
                          while ( (int)RtlULongLongAdd(v1081, v1082, v1666) >= 0
                               && (int)RtlULongLongAdd(v1666[0], v1085, v1666) >= 0 )
                          {
                            ++v1084;
                            v1081 = v1666[0];
                            if ( v1084 )
                            {
                              RtlULongLongAdd(v1666[0], v1082, v1666);
                              goto LABEL_1575;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LABEL_1575;
              }
              v969 = 0;
              v1231 = 0;
              v970 = 0LL;
              if ( v967 )
              {
                do
                  v969 ^= v930[v970++];
                while ( v970 < v967 );
                v1231 = v969;
              }
              v1741 = 0xC81ECB17B1B54A58uLL;
              v971 = v930;
              v1536 = v968;
              v972 = 0;
              v973 = -1;
              v1437 = 0;
              v1467 = 0;
              v974 = (unsigned __int64)v1372;
              v975 = (unsigned __int8)v1372 & 7;
              if ( ((unsigned __int8)v1372 & 7) != 0 )
              {
                v976 = 0;
                v977 = 0;
                v1525 = 0;
                v978 = 56;
                do
                {
                  v979 = *v971++;
                  if ( v977 >= 4 )
                    v976 |= v979 << v978;
                  else
                    v972 |= v979 << (v978 - 32);
                  v1437 = v976;
                  v1467 = v972;
                  v977 = v1525 + 1;
                  v1525 = v977;
                  v978 -= 8;
                }
                while ( (int)v977 < (int)v975 );
                v972 ^= 0xB17A307A;
                v980 = v976 ^ 0x42F6B18D;
                v981 = v972;
                v982 = v980;
                v1474 = v910;
                v1247 = (size_t)v909;
                v1449 = v930;
                v87 = v1540;
                v983 = (_BYTE *)v1536;
                v984 = 0;
                do
                {
                  v1536 = (SIZE_T)(v983 + 1);
                  if ( v984 >= 4 )
                  {
                    v982 = __ROL4__(v982, 8);
                    v985 = v982;
                  }
                  else
                  {
                    v981 = __ROL4__(v981, 8);
                    v985 = v981;
                  }
                  *v983 = v985;
                  ++v984;
                  v983 = (_BYTE *)v1536;
                }
                while ( v984 < (int)v975 );
                v968 = v1536;
                v969 = v1231;
                v974 = (unsigned __int64)v1372;
                if ( v975 <= 4 )
                {
                  v973 = 0;
                  if ( v975 >= 4 )
                    goto LABEL_1313;
                  v972 = v972 >> (8 * (4 - v975)) << (8 * (4 - v975));
                }
                else
                {
                  v973 = v980 >> (8 * (8 - v975)) << (8 * (8 - v975));
                }
                v968 = v1536;
              }
LABEL_1313:
              v1536 = v974 >> 3;
              if ( v974 >> 3 )
              {
                v986 = WORD2(v1741);
                v1526 = HIWORD(v1741);
                v987 = (_BYTE *)(v968 + 7);
                v988 = v971 + 2;
                v989 = v1536;
                v990 = HIDWORD(v1741) ^ 0xB1B54A58;
                do
                {
                  v991 = v988[1] | ((*v988 | ((*(v988 - 1) | (*(v988 - 2) << 8)) << 8)) << 8);
                  v992 = v988[5] | ((v988[4] | ((v988[3] | (v988[2] << 8)) << 8)) << 8);
                  v993 = v992 ^ v973;
                  v988 += 8;
                  v994 = v991 ^ HIDWORD(v1741) ^ (v993 - 19032) ^ v972;
                  v995 = (__ROR4__(v994 ^ HIDWORD(v1741), 15) * WORD1(v1741) + __ROR4__(v994, 7)) ^ v993;
                  v996 = (v986 * __ROR4__(v995 - 1313519016, 9) - __ROR4__(v995, 10)) ^ v994;
                  v997 = (HIWORD(v1741) * __ROL4__(v986 ^ v996, 4) + __ROL4__(v996, 5)) ^ v995;
                  v998 = (HIDWORD(v1741) - (v997 ^ 0xB1B54A58)) ^ v996;
                  v999 = (WORD1(v1741) * (v998 - 19032) - (v998 >> 6)) ^ v997;
                  v1000 = (19032 * (v986 ^ __ROR4__(v999, 15))) ^ v998;
                  v1001 = (v986 * (HIWORD(v1741) + __ROR4__(~v1000, 3))) ^ v999;
                  v1002 = (v1001 - 19032 - HIDWORD(v1741)) ^ v1000;
                  v1003 = (WORD1(v1741) * (v1526 ^ v1002)) ^ __ROR4__(v1002, 10) ^ v1001;
                  v1004 = (v986 * __ROL4__(v1003 ^ 0x4A58, 6)) ^ __ROR4__(v1003, 3) ^ v1002;
                  v1005 = (19032 * (__ROR4__(v1004, 15) - HIWORD(v1741))) ^ v1003;
                  v1006 = (v1005 >> 15) ^ (19032 * __ROL4__(v1005 - v986, 3)) ^ (v1005 >> 1) ^ (19032
                                                                                              * (HIWORD(v1741) ^ v1005)) ^ v1004;
                  v1007 = (WORD1(v1741) * (v1006 - v986) - (v1006 >> 13)) ^ v1005;
                  v1008 = (v986 * __ROR4__(-1313519016 - v1007, 9)) ^ __ROR4__(v1007, 11) ^ v1006;
                  v1009 = (v1008 + 1313519016 - HIWORD(v1741)) ^ v1007;
                  v1010 = (19032 * (v1009 ^ WORD1(v1741)) - __ROR4__(v1009, 7)) ^ v1008;
                  v1011 = (__ROL4__(HIWORD(v1741) ^ v1010, 4) * WORD1(v1741) - __ROR4__(v1010, 16)) ^ v1009;
                  v1012 = (v986 * __ROR4__(-1313519016 - v1011, 10) + __ROR4__(v1011, 4)) ^ v1010;
                  v1013 = (HIWORD(v1741) * __ROR4__(v1012 + 1313519016, 4)) ^ __ROR4__(v1012, 9) ^ v1011;
                  v1014 = (19032 * __ROL4__(HIDWORD(v1741) ^ v1013, 8) - __ROL4__(v1013, 2)) ^ v1012;
                  v1015 = (__ROR4__(HIDWORD(v1741) - v1014, 11) * WORD1(v1741) - __ROR4__(v1014, 12)) ^ v1013;
                  v1016 = (v1015 >> 8) ^ (v986 * (v1015 ^ WORD1(v1741))) ^ v1014;
                  v1017 = v1016 ^ v990;
                  v1018 = v1467 ^ v1016;
                  v1019 = v1437 ^ v1017 ^ v1015;
                  *(v987 - 4) = v1018;
                  v1020 = __ROR4__(v1018, 8);
                  *v987 = v1019;
                  v1021 = __ROR4__(v1019, 8);
                  *(v987 - 5) = v1020;
                  v1022 = __ROR4__(v1020, 8);
                  *(v987 - 1) = v1021;
                  v1023 = __ROR4__(v1021, 8);
                  *(v987 - 6) = v1022;
                  v1024 = __ROR4__(v1022, 8);
                  *(v987 - 2) = v1023;
                  v1025 = __ROR4__(v1023, 8);
                  *(v987 - 7) = v1024;
                  *(v987 - 3) = v1025;
                  v972 = __ROR4__(v1024, 8);
                  v973 = __ROR4__(v1025, 8);
                  v1467 = v991;
                  v1437 = v992;
                  v987 += 8;
                  --v989;
                }
                while ( v989 );
                v969 = v1231;
                v87 = v1540;
                v909 = (void *)v1247;
                v910 = (WCHAR *)v1474;
                v930 = v1449;
                v974 = (unsigned __int64)v1372;
              }
              *(_QWORD *)&v1531[v974] = v969;
              v1656[4] = (void *)160;
              v1026 = GetProcessHeap();
              v1027 = (const void **)HeapAlloc(v1026, 8u, 0x30uLL);
              if ( v1027 )
              {
                *(_DWORD *)v1027 = v1456;
                v1029 = GetProcessHeap();
                v1030 = HeapAlloc(v1029, 8u, v1456);
                if ( !v1030 )
                  goto LABEL_1338;
                v1027[1] = v1030;
                memcpy_0(v1030, v1531, v1456);
                *((_DWORD *)v1027 + 4) = 160;
                v1031 = GetProcessHeap();
                v1032 = HeapAlloc(v1031, 8u, 0xA0uLL);
                if ( !v1032 )
                  goto LABEL_1338;
                v1027[3] = v1032;
                *v1032 = xmmword_1801CECB0[0];
                v1032[1] = xmmword_1801CECB0[1];
                v1032[2] = xmmword_1801CECB0[2];
                v1032[3] = xmmword_1801CECB0[3];
                v1032[4] = xmmword_1801CECB0[4];
                v1032[5] = xmmword_1801CECB0[5];
                v1032[6] = xmmword_1801CECB0[6];
                v1032[7] = xmmword_1801CECB0[7];
                v1032[8] = xmmword_1801CECB0[8];
                v1032[9] = xmmword_1801CECB0[9];
                *((_DWORD *)v1027 + 8) = 8;
                v1033 = GetProcessHeap();
                v1034 = HeapAlloc(v1033, 8u, 8uLL);
                v1028 = 0;
                if ( v1034 )
                {
                  v1027[5] = v1034;
                  *v1034 = qword_1801CED50;
                  v1507 = 0LL;
                }
                else
                {
LABEL_1338:
                  v1028 = -1073741801;
                  v1251 = (void *)v1027[1];
                  if ( v1251 )
                  {
                    v1045 = GetProcessHeap();
                    HeapFree(v1045, 0, v1251);
                    v1027[1] = 0LL;
                  }
                  v1252 = (void *)v1027[3];
                  if ( v1252 )
                  {
                    v1046 = GetProcessHeap();
                    HeapFree(v1046, 0, v1252);
                    v1027[3] = 0LL;
                  }
                  v1253 = (void *)v1027[5];
                  if ( v1253 )
                  {
                    v1047 = GetProcessHeap();
                    HeapFree(v1047, 0, v1253);
                    v1027[5] = 0LL;
                  }
                  v1048 = GetProcessHeap();
                  HeapFree(v1048, 0, v1027);
                  v1027 = 0LL;
                }
              }
              else
              {
                v1028 = -1073741801;
                v1027 = 0LL;
              }
              v1315 = v1027;
              v1035 = GetProcessHeap();
              HeapFree(v1035, 0, v1531);
              v1036 = v1507;
              if ( v1507 )
              {
                v1248 = (void *)v1507[1];
                if ( v1248 )
                {
                  v1037 = GetProcessHeap();
                  HeapFree(v1037, 0, v1248);
                  v1036 = v1507;
                  v1507[1] = 0LL;
                }
                v1249 = (void *)v1036[3];
                if ( v1249 )
                {
                  v1038 = GetProcessHeap();
                  HeapFree(v1038, 0, v1249);
                  v1036 = v1507;
                  v1507[3] = 0LL;
                }
                v1250 = (void *)v1036[5];
                if ( v1250 )
                {
                  v1039 = GetProcessHeap();
                  HeapFree(v1039, 0, v1250);
                  v1507[5] = 0LL;
                }
                v1040 = GetProcessHeap();
                HeapFree(v1040, 0, v1507);
                v1315 = v1027;
              }
              v966 = v1028 | 0x10000000;
              if ( v966 < 0 )
                goto LABEL_1359;
              v1457 = v1027 + 4;
              v1532 = v1027 + 2;
              LODWORD(v1588) = 4;
              v1042 = RtlUIntAdd(4u, *(_DWORD *)v1027, (unsigned int *)&v1588);
              if ( v1042 >= 0 )
              {
                v1042 = RtlUIntAdd(v1588, v1041, (unsigned int *)&v1588);
                if ( v1042 >= 0 )
                {
                  v1042 = RtlUIntAdd(v1588, v1043, (unsigned int *)&v1588);
                  if ( v1042 >= 0 )
                  {
                    v1042 = RtlUIntAdd(v1588, 4, (unsigned int *)&v1588);
                    if ( v1042 >= 0 )
                    {
                      v1042 = RtlUIntAdd(v1588, v1044, (unsigned int *)&v1588);
                      if ( v1042 >= 0 )
                      {
                        v1438 = v1588;
                        v1049 = v1588;
                        v1050 = GetProcessHeap();
                        v1051 = HeapAlloc(v1050, 8u, v1049);
                        v1536 = (SIZE_T)v1051;
                        if ( !v1051 )
                          goto LABEL_1427;
                        v1657 = v1051;
                        *v1051 = *(_DWORD *)v1027;
                        v1042 = RtlULongLongAdd((unsigned __int64)v1051, 4LL, (unsigned __int64 *)&v1657);
                        v1468 = v1052;
                        v1315 = v1027;
                        if ( v1042 < 0 )
                          goto LABEL_1354;
                        memcpy_0(v1657, v1027[1], *(unsigned int *)v1027);
                        v1042 = RtlULongLongAdd(
                                  (unsigned __int64)v1657,
                                  *(unsigned int *)v1027,
                                  (unsigned __int64 *)&v1657);
                        v1468 = (void *)v1536;
                        v1315 = v1027;
                        if ( v1042 < 0 )
                          goto LABEL_1354;
                        v1053 = v1657;
                        *(_DWORD *)v1657 = *v1532;
                        v1042 = RtlULongLongAdd((unsigned __int64)v1053, 4LL, (unsigned __int64 *)&v1657);
                        v1468 = v1054;
                        v1315 = v1027;
                        if ( v1042 < 0 )
                          goto LABEL_1354;
                        memcpy_0(v1657, v1027[3], (unsigned int)*v1532);
                        v1042 = RtlULongLongAdd(
                                  (unsigned __int64)v1657,
                                  (unsigned int)*v1532,
                                  (unsigned __int64 *)&v1657);
                        v1468 = (void *)v1536;
                        v1315 = v1027;
                        if ( v1042 < 0 )
                          goto LABEL_1354;
                        v1055 = v1657;
                        *(_DWORD *)v1657 = *v1457;
                        v1042 = RtlULongLongAdd((unsigned __int64)v1055, 4LL, (unsigned __int64 *)&v1657);
                        v1468 = v1056;
                        v1315 = v1027;
                        if ( v1042 < 0
                          || (memcpy_0(v1657, v1027[5], (unsigned int)*v1457),
                              v1042 = RtlULongLongAdd(
                                        (unsigned __int64)v1657,
                                        (unsigned int)*v1457,
                                        (unsigned __int64 *)&v1657),
                              v1468 = (void *)v1536,
                              v1315 = v1027,
                              v1042 < 0) )
                        {
LABEL_1354:
                          v1057 = GetProcessHeap();
                          HeapFree(v1057, 0, v1468);
                        }
                        else
                        {
                          v1333 = (WCHAR *)v1536;
                          v1265 = v1438;
                          v1315 = v1027;
                        }
                      }
                    }
                  }
                }
              }
              v966 = v1042 | 0x10000000;
              if ( v966 < 0 )
                goto LABEL_1359;
              v1589 = 8;
              v1058 = RtlUIntAdd(8u, lpModuleNameh, &v1589);
              v966 = v1058 | 0x10000000;
              if ( v1058 < 0 )
                goto LABEL_1359;
              v1061 = (v1589 + 7) & 0xFFFFFFF8;
              if ( v1061 < v1589 )
              {
                v966 = -1073741675;
                goto LABEL_1359;
              }
              v1590 = (v1589 + 7) & 0xFFFFFFF8;
              v1333 = v1060;
              v1315 = v1027;
              v966 = RtlUIntAdd(v1061, v1059, &v1590);
              if ( v966 < 0 )
                goto LABEL_1359;
              v1315 = v1027;
              v1333 = v1086;
              if ( !v1683 )
                goto LABEL_1419;
              v1315 = v1027;
              v1333 = v1086;
              if ( (unsigned int)v1682 <= 1 )
                goto LABEL_1419;
              v1087 = v1683;
              v1658 = v1683;
              do
              {
                v966 = RtlULongLongAdd((unsigned __int64)v1087, 4LL, (unsigned __int64 *)&v1658);
                if ( v966 < 0 )
                  goto LABEL_1359;
                v966 = RtlULongLongAdd((unsigned __int64)v1658, v1088, (unsigned __int64 *)&v1658);
                if ( v966 < 0 )
                  goto LABEL_1359;
                v1087 = v1658;
              }
              while ( v1089 == -1 );
              lpModuleNamei = *v1658;
              v966 = RtlULongLongAdd((unsigned __int64)v1658, 4LL, (unsigned __int64 *)&v1658);
              if ( v966 < 0 )
                goto LABEL_1359;
              if ( !v1683 || (unsigned int)v1682 <= 2 )
              {
LABEL_1419:
                v966 = -1073741811;
                goto LABEL_1359;
              }
              v1090 = v1683;
              v1659 = v1683;
              do
              {
                v966 = RtlULongLongAdd((unsigned __int64)v1090, 4LL, (unsigned __int64 *)&v1659);
                if ( v966 < 0 )
                  goto LABEL_1359;
                v966 = RtlULongLongAdd((unsigned __int64)v1659, v1091, (unsigned __int64 *)&v1659);
                if ( v966 < 0 )
                  goto LABEL_1359;
                v1090 = v1659;
              }
              while ( (unsigned int)(v1092 + 1) < 2 );
              v966 = RtlULongLongAdd((unsigned __int64)v1659, 4LL, (unsigned __int64 *)&v1659);
              if ( v966 < 0 )
                goto LABEL_1359;
              LODWORD(v1591) = 4;
              v966 = RtlUIntAdd(4u, v1590, (unsigned int *)&v1591);
              if ( v966 < 0 )
                goto LABEL_1359;
              v966 = RtlUIntAdd(v1591, v1093, (unsigned int *)&v1591);
              if ( v966 < 0 )
                goto LABEL_1359;
              v966 = RtlUIntAdd(v1591, lpModuleNamei, (unsigned int *)&v1591);
              if ( v966 < 0 )
                goto LABEL_1359;
              v966 = RtlUIntAdd(v1591, 4, (unsigned int *)&v1591);
              if ( v966 < 0 )
                goto LABEL_1359;
              v966 = RtlUIntAdd(v1591, v1094, (unsigned int *)&v1591);
              if ( v966 < 0 )
                goto LABEL_1359;
              v1494 = v1591;
              if ( (unsigned int)v1591 > 0x400000 )
              {
                v966 = -2147418113;
                goto LABEL_1359;
              }
              v1254 = v1095;
              v1096 = v1591;
              v1097 = GetProcessHeap();
              v1098 = (unsigned int *)HeapAlloc(v1097, 8u, v1096);
              if ( v1098 )
              {
                dwBytesm = v1098;
                if ( !v1254 )
                {
                  v966 = -2147024809;
                  dwBytesm = v1098;
                  v1315 = v1027;
LABEL_1444:
                  v1333 = (WCHAR *)v1254;
                  goto LABEL_1359;
                }
                v1692[0] = v1254;
                v1693 = v1265;
                v1692[1] = v1098;
                v1694 = v1494;
                v1695 = 0;
                if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                  && (v1099 = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                {
                  v1100 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1099)(134LL, v1692);
                  v966 = v1100 | 0x10000000;
                  v1101 = v1494;
                  if ( v1100 >= 0 )
                  {
                    v1101 = v1694;
                    v1102 = v930;
                    v1103 = v909;
                    v1104 = v910;
                    v1105 = v1027;
                    goto LABEL_1440;
                  }
                }
                else
                {
                  v1106 = GetLastError();
                  v966 = v1106;
                  if ( v1106 > 0 )
                    v966 = (unsigned __int16)v1106 | 0x80070000;
                  if ( v966 >= 0 )
                    v966 = -2147467259;
                  v1101 = v1494;
                }
                v1333 = (WCHAR *)v1254;
                if ( v966 == -805306333 )
                {
                  v966 = -2147024774;
                  v1315 = v1027;
                  goto LABEL_1359;
                }
                v1105 = v1027;
                v1315 = v1027;
                v1104 = v910;
                v1103 = v909;
                v1102 = v930;
                if ( v966 < 0 )
                  goto LABEL_1359;
LABEL_1440:
                v1533 = 0LL;
                v909 = v1103;
                v930 = v1102;
                if ( v1101 < 4 )
                {
                  v966 = -805306306;
LABEL_1443:
                  v1315 = v1105;
                  goto LABEL_1444;
                }
                v1107 = *dwBytesm;
                lpModuleNamej = *dwBytesm;
                v1508 = (char *)(dwBytesm + 1);
                v910 = v1104;
                if ( dwBytesm + 1 < dwBytesm )
                {
                  v966 = -805306219;
                  goto LABEL_1443;
                }
                v1108 = (WCHAR *)v1254;
                v1333 = (WCHAR *)v1254;
                v1315 = v1027;
                if ( v1101 - 4 < (unsigned int)v1107 )
                {
                  v966 = -805306306;
LABEL_1449:
                  v1315 = v1027;
LABEL_1452:
                  v1333 = (WCHAR *)v1254;
                  goto LABEL_1359;
                }
                v1536 = *dwBytesm;
                v1109 = (unsigned int *)&v1508[v1107];
                v1544 = (AtmosCheck *)&v1508[v1107];
                if ( &v1508[v1107] >= v1508 )
                {
                  v1110 = v1107 + 4;
                  if ( v1110 >= 4 )
                  {
                    if ( v1101 - v1110 < 4 )
                      goto LABEL_1470;
                    v1111 = *v1109;
                    v1439 = *v1109;
                    v1112 = v1109 + 1;
                    v1333 = (WCHAR *)v1254;
                    v1315 = v1027;
                    if ( v1109 + 1 < v1109 )
                      goto LABEL_1573;
                    v909 = v1103;
                    v1266 = v1110 + 4;
                    if ( v1110 + 4 < v1110 )
                    {
                      v966 = -805306219;
                      v1315 = v1027;
                      goto LABEL_1452;
                    }
                    if ( v1101 - (v1110 + 4) < (unsigned int)v1111 )
                      goto LABEL_1470;
                    v1469 = *v1109;
                    v1113 = (unsigned int *)((char *)v1112 + v1111);
                    v1333 = (WCHAR *)v1254;
                    v1315 = v1027;
                    if ( (unsigned int *)((char *)v1112 + v1111) < v1112 )
                    {
LABEL_1573:
                      v966 = -805306219;
                      goto LABEL_1359;
                    }
                    v1114 = v1111 + v1266;
                    if ( (unsigned int)v1111 + v1266 >= v1266 )
                    {
                      if ( v1101 - v1114 >= 4 )
                      {
                        v1115 = *v1113;
                        v1495 = *v1113;
                        v1519 = v1113 + 1;
                        v1315 = v1027;
                        if ( v1113 + 1 < v1113 )
                        {
                          v966 = -805306219;
                          goto LABEL_1452;
                        }
                        v1333 = (WCHAR *)v1254;
                        v1267 = v1114 + 4;
                        if ( v1114 + 4 < v1114 )
                        {
                          v966 = -805306219;
                          goto LABEL_1472;
                        }
                        v1373 = (WCHAR *)v1254;
                        if ( v1101 - v1267 >= v1115 )
                        {
                          v1268 = v1115 + v1267;
                          v1333 = (WCHAR *)v1254;
                          v1315 = v1027;
                          if ( v1268 < v1114 + 4 )
                          {
                            v966 = -805306219;
                            goto LABEL_1359;
                          }
                          v1450 = v930;
                          v1255 = (size_t)v909;
                          v1475 = v910;
                          v1116 = dwBytesm;
                          if ( v1101 != v1268 )
                          {
LABEL_1469:
                            v966 = -805306306;
                            dwBytesm = v1116;
LABEL_1472:
                            v1315 = v1027;
                            v1333 = v1108;
                            goto LABEL_1359;
                          }
                          if ( v1115 + (_DWORD)v1111 + lpModuleNamej + 12LL != v1101 )
                          {
                            v1116 = dwBytesm;
                            goto LABEL_1469;
                          }
                          v1117 = GetProcessHeap();
                          v1118 = HeapAlloc(v1117, 8u, 0x30uLL);
                          v1269 = v1118;
                          if ( !v1118 )
                          {
                            v966 = -805306345;
                            v1315 = v1027;
                            v1333 = v1373;
                            goto LABEL_1359;
                          }
                          v1119 = 0;
                          if ( dwBytesm == (unsigned int *)-4LL )
                          {
                            *(_DWORD *)v1118 = 0;
                            v1118[1] = 0LL;
                            v1122 = v1519;
                          }
                          else
                          {
                            *(_DWORD *)v1118 = lpModuleNamej;
                            v1120 = GetProcessHeap();
                            v1121 = HeapAlloc(v1120, 8u, v1536);
                            if ( !v1121 )
                              goto LABEL_1486;
                            v1269[1] = v1121;
                            memcpy_0(v1121, v1508, v1536);
                            v1118 = v1269;
                            v1122 = v1519;
                          }
                          v1450 = v930;
                          v1255 = (size_t)v909;
                          v1475 = v910;
                          v1315 = v1027;
                          v1269 = v1118;
                          if ( v1544 == (AtmosCheck *)-4LL )
                          {
                            *((_DWORD *)v1118 + 4) = 0;
                            v1118[3] = 0LL;
                            v1126 = v1333;
                            v1125 = dwBytesm;
                          }
                          else
                          {
                            *((_DWORD *)v1118 + 4) = v1439;
                            v1123 = GetProcessHeap();
                            v1124 = HeapAlloc(v1123, 8u, v1469);
                            if ( !v1124 )
                              goto LABEL_1486;
                            v1269[3] = v1124;
                            v1119 = 0;
                            memcpy_0(v1124, (char *)v1544 + 4, v1469);
                            v1118 = v1269;
                            v1122 = v1519;
                            v1125 = dwBytesm;
                            v1315 = v1027;
                            v1475 = v910;
                            v1255 = (size_t)v909;
                            v1450 = v930;
                            v1126 = v1333;
                          }
                          if ( !v1122 )
                          {
                            *((_DWORD *)v1118 + 8) = 0;
                            v1118[5] = 0LL;
                            goto LABEL_1494;
                          }
                          *((_DWORD *)v1118 + 8) = v1495;
                          v1127 = GetProcessHeap();
                          v1128 = HeapAlloc(v1127, 8u, v1495);
                          if ( v1128 )
                          {
                            v1269[5] = v1128;
                            v1119 = 0;
                            memcpy_0(v1128, v1519, v1495);
                            v1118 = v1269;
                            v1125 = dwBytesm;
                            v1315 = v1027;
                            v1475 = v910;
                            v1255 = (size_t)v909;
                            v1450 = v930;
                            v1126 = v1333;
LABEL_1494:
                            v1533 = v1118;
                            goto LABEL_1495;
                          }
LABEL_1486:
                          v1119 = -1073741801;
                          v1129 = v1269;
                          v1287 = (void *)v1269[1];
                          if ( v1287 )
                          {
                            v1130 = GetProcessHeap();
                            HeapFree(v1130, 0, v1287);
                            v1129 = v1269;
                            v1269[1] = 0LL;
                          }
                          v1288 = (void *)v1129[3];
                          if ( v1288 )
                          {
                            v1131 = GetProcessHeap();
                            HeapFree(v1131, 0, v1288);
                            v1129 = v1269;
                            v1269[3] = 0LL;
                          }
                          v1289 = (void *)v1129[5];
                          if ( v1289 )
                          {
                            v1132 = GetProcessHeap();
                            HeapFree(v1132, 0, v1289);
                            v1269[5] = 0LL;
                          }
                          v1133 = GetProcessHeap();
                          HeapFree(v1133, 0, v1269);
                          v1126 = v1333;
                          v1125 = dwBytesm;
                          v1118 = 0LL;
LABEL_1495:
                          v1509 = (SIZE_T)v1126;
                          v1544 = (AtmosCheck *)v1027;
                          v1440 = v1125;
                          v1134 = 0LL;
                          if ( v1119 < 0 )
                          {
                            v1286 = 0LL;
                            dwBytesm = v1125;
                            v1315 = v1027;
                            v1475 = v910;
                            v1255 = (size_t)v909;
                            v1450 = v930;
                            v1333 = v1126;
                            if ( v1118 )
                            {
                              v1135 = (void *)v1533[1];
                              if ( v1135 )
                              {
                                v1136 = GetProcessHeap();
                                HeapFree(v1136, 0, v1135);
                                v1533[1] = 0LL;
                              }
                              v1137 = (void *)v1533[3];
                              if ( v1137 )
                              {
                                v1138 = GetProcessHeap();
                                HeapFree(v1138, 0, v1137);
                                v1533[3] = 0LL;
                              }
                              v1139 = (void *)v1533[5];
                              if ( v1139 )
                              {
                                v1140 = GetProcessHeap();
                                HeapFree(v1140, 0, v1139);
                                v1533[5] = 0LL;
                              }
                              v1141 = GetProcessHeap();
                              HeapFree(v1141, 0, v1533);
                              v1134 = 0LL;
                              v1286 = 0LL;
                              dwBytesm = v1440;
                              v1027 = (const void **)v1544;
                              v1315 = v1544;
                              v1475 = v910;
                              v1255 = (size_t)v909;
                              v1450 = v930;
                              v1333 = (WCHAR *)v1509;
                            }
                          }
                          else
                          {
                            v1134 = (unsigned int *)v1118;
                            v1286 = (AtmosCheck *)v1118;
                          }
                          v966 = v1119 | 0x10000000;
                          if ( v966 >= 0 )
                          {
                            if ( !v1134 || (v1510 = *((_QWORD *)v1134 + 1)) == 0 || !*v1134 )
                            {
                              v966 = -805306355;
                              goto LABEL_1359;
                            }
                            v1142 = *v1134 - 8;
                            v1374 = *v1134 - 8LL;
                            v1143 = operator new(v1374);
                            lpMeml = v1143;
                            if ( !v1143 )
                              goto LABEL_1535;
                            v1144 = 0;
                            v1743 = 0x7F1137FAB69605ELL;
                            v1145 = (unsigned __int8 *)v1510;
                            v1458 = v1510;
                            v1146 = v1143;
                            v1534 = v1143;
                            v1536 = v1142 & 7;
                            v1147 = v1286;
                            if ( (v1142 & 7) != 0 )
                            {
                              v1542 = 0;
                              v1148 = 0;
                              v1149 = 0;
                              do
                              {
                                v1150 = *v1145++;
                                if ( (unsigned int)v1149 >= 4 )
                                  v1542 |= v1150 << v1597;
                                else
                                  v1148 |= v1150 << (v1597 - 32);
                                ++v1149;
                                LODWORD(v1597) = v1597 - 8;
                                v1151 = v1536;
                              }
                              while ( v1149 < (int)v1536 );
                              lpModuleNamek = v1148;
                              v1458 = (SIZE_T)v1145;
                              v1152 = v1542 ^ 0x699A899C;
                              v1153 = v1148 ^ 0x92F65A5;
                              v1154 = v1542 ^ 0x699A899C;
                              v1315 = v1027;
                              v1475 = v910;
                              v1255 = (size_t)v909;
                              v1450 = v930;
                              v87 = v1540;
                              v1146 = v1534;
                              v1155 = 0;
                              do
                              {
                                if ( v1155 >= 4 )
                                {
                                  v1154 = __ROL4__(v1154, 8);
                                  v1156 = v1154;
                                }
                                else
                                {
                                  v1153 = __ROL4__(v1153, 8);
                                  v1156 = v1153;
                                }
                                *v1146 = v1156;
                                ++v1155;
                                ++v1146;
                              }
                              while ( v1155 < (int)v1151 );
                              v1144 = 0;
                              v1027 = (const void **)v1315;
                              v1147 = v1286;
                              v1157 = v1148 ^ 0x92F65A5;
                              v1143 = lpMeml;
                              if ( v1151 <= 4 )
                              {
                                v1441 = 0;
                                if ( v1151 < 4 )
                                  v1157 = v1157 >> (8 * (4 - v1536)) << (8 * (4 - v1536));
                              }
                              else
                              {
                                v1441 = v1152 >> (8 * (8 - v1536)) << (8 * (8 - v1536));
                              }
                            }
                            else
                            {
                              lpModuleNamek = 0;
                              v1441 = 0;
                              v1157 = 0;
                            }
                            v1158 = v1374;
                            if ( v1374 >> 3 )
                            {
                              v1159 = HIDWORD(v1743);
                              v1270 = WORD2(v1743);
                              v1160 = v1146 + 7;
                              v1161 = (unsigned __int8 *)(v1458 + 2);
                              v1162 = v1441;
                              v1163 = lpModuleNamek;
                              v1164 = v1374 >> 3;
                              v1165 = HIDWORD(v1743) ^ 0xAB69605E;
                              do
                              {
                                v1166 = v1161[1] | ((*v1161 | ((*(v1161 - 1) | (*(v1161 - 2) << 8)) << 8)) << 8);
                                v1167 = v1161[5] | ((v1161[4] | ((v1161[3] | (v1161[2] << 8)) << 8)) << 8);
                                v1168 = v1166 ^ v1157;
                                v1161 += 8;
                                v1169 = v1168 ^ v1159 ^ 0xAB69605E ^ v1167 ^ v1162;
                                v1170 = (__ROL4__(v1169 + 1419157410, 5) * v1270 + __ROL4__(v1169, 10)) ^ v1168;
                                v1171 = (__ROR4__(v1170 + v1159, 9) * WORD1(v1743) - __ROL4__(v1170, 2)) ^ v1169;
                                v1172 = (24670 * (v1171 - v1270) - (v1171 >> 13)) ^ v1170;
                                v1173 = (__ROL4__(v1172 ^ WORD1(v1743), 6) * HIWORD(v1743) - __ROL4__(v1172, 2)) ^ v1171;
                                v1174 = (v1159 - (v1173 ^ 0xAB69605E)) ^ v1172;
                                v1175 = (WORD1(v1743) * (v1174 ^ v1270)) ^ __ROR4__(v1174, 6) ^ v1173;
                                v1176 = (24670 * __ROR4__(v1175 + v1159, 15) + __ROL4__(v1175, 2)) ^ v1174;
                                v1177 = (__ROR4__(v1176 + 1419157410, 14) * HIWORD(v1743) - __ROL4__(v1176, 8)) ^ v1175;
                                v1178 = (__ROR4__(v1177 ^ 0xAB69605E, 12) * v1270) ^ __ROR4__(v1177, 10) ^ v1176;
                                v1179 = (v1178 >> 10) ^ (WORD1(v1743) * (v1178 ^ HIWORD(v1743))) ^ v1177;
                                v1180 = (HIWORD(v1743) * (__ROR4__(~v1179, 5) + 24670)) ^ v1178;
                                v1181 = (v1180 - HIWORD(v1743)) ^ 0xAB69605E ^ v1179;
                                v1182 = ((v1181 >> 2) + __ROL4__(v1181 ^ HIWORD(v1743), 2) * v1270) ^ v1180;
                                v1183 = (__ROR4__(v1182 - v1159, 6) * WORD1(v1743) + __ROL4__(v1182, 7)) ^ v1181;
                                v1184 = (24670 * (v1183 ^ v1270) + __ROR4__(v1183, 9)) ^ v1182;
                                v1185 = (__ROL4__(v1184 ^ WORD1(v1743), 5) * HIWORD(v1743) + __ROL4__(v1184, 7)) ^ v1183;
                                v1186 = v1185 ^ v1165 ^ v1184;
                                v1187 = (v1270 * (__ROR4__(v1186, 3) - WORD1(v1743))) ^ v1185;
                                v1188 = (24670 * __ROR4__(v1187 - v1159, 1) - __ROR4__(v1187, 6)) ^ v1186;
                                v1189 = (__ROL4__(v1188 - 1419157410, 3) * HIWORD(v1743) + __ROL4__(v1188, 14)) ^ v1187;
                                v1190 = (__ROL4__(v1189 - 1419157410, 15) * v1270 - __ROR4__(v1189, 14)) ^ v1188;
                                v1191 = (v1190 >> 3) ^ (WORD1(v1743) * (v1190 ^ 0x605E)) ^ v1189;
                                v1192 = v1163 ^ (24670 * __ROL4__(v1191 ^ v1159, 4)) ^ __ROL4__(v1191, 2) ^ v1190;
                                v1193 = v1542 ^ v1191;
                                *(v1160 - 4) = v1192;
                                v1194 = __ROR4__(v1192, 8);
                                *v1160 = v1193;
                                v1195 = __ROR4__(v1193, 8);
                                *(v1160 - 5) = v1194;
                                v1196 = __ROR4__(v1194, 8);
                                *(v1160 - 1) = v1195;
                                v1197 = __ROR4__(v1195, 8);
                                *(v1160 - 6) = v1196;
                                v1198 = __ROR4__(v1196, 8);
                                *(v1160 - 2) = v1197;
                                v1199 = __ROR4__(v1197, 8);
                                *(v1160 - 7) = v1198;
                                *(v1160 - 3) = v1199;
                                v1157 = __ROR4__(v1198, 8);
                                v1162 = __ROR4__(v1199, 8);
                                v1163 = v1166;
                                v1542 = v1167;
                                v1160 += 8;
                                --v1164;
                              }
                              while ( v1164 );
                              v1144 = 0;
                              v87 = v1540;
                              v909 = (void *)v1255;
                              v910 = (WCHAR *)v1475;
                              v930 = v1450;
                              v1027 = (const void **)v1315;
                              v1147 = v1286;
                              v1143 = lpMeml;
                              v1158 = v1374;
                            }
                            for ( n = 0LL; n < v1158; ++n )
                              v1144 ^= *((_BYTE *)v1143 + n);
                            v1536 = (SIZE_T)dwBytesm;
                            v1201 = v1147;
                            v1315 = v1027;
                            v1286 = v1147;
                            if ( v1144 != *(_QWORD *)(v1510 + v1158) )
                            {
                              operator delete(v1143);
LABEL_1535:
                              v966 = -805306367;
                              lpMemk = 0LL;
                              goto LABEL_1359;
                            }
                            v1592 = 0;
                            v1661 = v1143;
                            if ( (unsigned int)v1158 >= 4 )
                            {
                              lpModuleNamel = *v1143;
                              v1202 = RtlULongLongAdd((unsigned __int64)v1143, 4LL, (unsigned __int64 *)&v1661);
                              lpMemk = v1203;
                              v1286 = v1204;
                              v1315 = v1027;
                              if ( v1202 < 0 )
                                goto LABEL_1571;
                              v1202 = RtlUIntAdd(0, 4, &v1592);
                              lpMemk = v1143;
                              v1286 = v1201;
                              v1315 = v1027;
                              v1205 = v1333;
                              if ( v1202 < 0 )
                                goto LABEL_1571;
                              if ( (unsigned int)v1374 - v1592 < 4 )
                                goto LABEL_1561;
                              v1442 = *(_DWORD *)v1661;
                              v1202 = RtlULongLongAdd((unsigned __int64)v1661, 4LL, (unsigned __int64 *)&v1661);
                              lpMemk = v1206;
                              v1286 = v1207;
                              v1315 = v1027;
                              if ( v1202 < 0 )
                                goto LABEL_1571;
                              v1202 = RtlUIntAdd(v1592, 4, &v1592);
                              lpMemk = v1143;
                              v1286 = v1201;
                              v1315 = v1027;
                              v1205 = v1333;
                              if ( v1202 < 0 )
                                goto LABEL_1571;
                              if ( (unsigned int)v1374 - v1592 < v1442 )
                              {
LABEL_1561:
                                v1333 = v1205;
                              }
                              else
                              {
                                v1202 = RtlUIntAdd(v1592, v1442, &v1592);
                                lpMemk = v1143;
                                v1286 = v1201;
                                v1315 = v1027;
                                if ( v1202 < 0 )
                                  goto LABEL_1571;
                                if ( (char *)v1143 + (unsigned int)v1374 >= (char *)v1661 + v1442
                                  && (unsigned __int64)(unsigned int)v1374 + (char *)v1143 - v1442 - (_BYTE *)v1661 < 8 )
                                {
                                  v1202 = 0;
                                  v1271 = 0;
                                  lpMemk = v1143;
                                  v1286 = v1201;
                                  v1315 = v1027;
                                  if ( !v1661 )
                                  {
LABEL_1558:
                                    if ( v1442 )
                                    {
                                      v1217 = GetProcessHeap();
                                      v1218 = v1442;
                                      v1219 = HeapAlloc(v1217, 8u, v1442);
                                      v1202 = 0;
                                      if ( !v1219 )
                                      {
                                        v1202 = -1073741801;
                                        goto LABEL_1571;
                                      }
                                    }
                                    else
                                    {
                                      v1218 = 0LL;
                                      v1219 = 0LL;
                                    }
                                    if ( v1661 )
                                      memcpy_0(v1219, v1661, v1218);
                                    v1686[1] = v1219;
                                    LODWORD(v1686[0]) = v1271;
                                    if ( lpModuleNamel == v1271 )
                                      goto LABEL_1571;
LABEL_1570:
                                    v1202 = -1073741762;
                                    goto LABEL_1571;
                                  }
                                  v1535 = v1661;
                                  v1202 = RtlULongLongAdd((unsigned __int64)v1661, v1442, (unsigned __int64 *)&v1662);
                                  lpMemk = v1208;
                                  v1286 = v1209;
                                  v1315 = v1027;
                                  if ( v1202 >= 0 )
                                  {
                                    lpMemk = v1208;
                                    v1286 = v1209;
                                    v1315 = v1027;
                                    v1210 = (unsigned __int64)v1535;
                                    if ( v1535 < v1662 )
                                    {
                                      v1211 = v1208;
                                      lpMemk = v1208;
                                      v1286 = v1209;
                                      v1212 = v1536;
                                      dwBytesm = (unsigned int *)v1536;
                                      v1315 = v1027;
                                      while ( 1 )
                                      {
                                        v1597 = v1212;
                                        v1544 = v1209;
                                        v1202 = RtlULongLongAdd(v1210, 4LL, (unsigned __int64 *)&v1663);
                                        if ( v1202 < 0 )
                                          goto LABEL_1571;
                                        if ( v1663 > v1662 )
                                          goto LABEL_1563;
                                        v1202 = RtlUIntAdd(v1214, *v1213, &v1593);
                                        if ( v1202 < 0 )
                                          goto LABEL_1571;
                                        v1202 = RtlULongLongAdd(
                                                  (unsigned __int64)v1535,
                                                  v1593,
                                                  (unsigned __int64 *)&v1664);
                                        lpMemk = v1211;
                                        v1286 = v1216;
                                        v1212 = v1597;
                                        dwBytesm = (unsigned int *)v1597;
                                        v1315 = v1027;
                                        v1333 = v1215;
                                        if ( v1202 < 0 )
                                          goto LABEL_1571;
                                        v1210 = (unsigned __int64)v1664;
                                        v1535 = v1664;
                                        lpMemk = v1211;
                                        v1315 = v1027;
                                        v1333 = v1215;
                                        if ( v1664 > v1662 )
                                        {
                                          v1202 = -1073741811;
                                          v1286 = v1544;
                                          dwBytesm = (unsigned int *)v1597;
                                          goto LABEL_1571;
                                        }
                                        ++v1271;
                                        v1209 = v1544;
                                        v1286 = v1544;
                                        dwBytesm = (unsigned int *)v1597;
                                        if ( v1664 >= v1662 )
                                        {
                                          lpMemk = v1211;
                                          v1286 = v1544;
                                          dwBytesm = (unsigned int *)v1597;
                                          v1315 = v1027;
                                          v1333 = v1215;
                                          break;
                                        }
                                      }
                                    }
                                    if ( (void *)v1210 != v1662 )
                                    {
LABEL_1563:
                                      v1202 = -1073741811;
                                      goto LABEL_1571;
                                    }
                                    goto LABEL_1558;
                                  }
LABEL_1571:
                                  v966 = v1202 | 0x10000000;
                                  goto LABEL_1359;
                                }
                              }
                            }
                            lpMemk = v1143;
                            v1286 = v1201;
                            v1315 = v1027;
                            goto LABEL_1570;
                          }
LABEL_1359:
                          if ( !v930 )
                            goto LABEL_1361;
                          goto LABEL_1360;
                        }
                      }
LABEL_1470:
                      v966 = -805306306;
                      goto LABEL_1359;
                    }
                  }
                }
                v966 = -805306219;
                goto LABEL_1449;
              }
LABEL_1427:
              v966 = -805306345;
              goto LABEL_1359;
            }
          }
        }
      }
LABEL_1575:
      v1682 = 0LL;
      v1220 = v1683;
      if ( v1683 )
      {
        v1221 = GetProcessHeap();
        HeapFree(v1221, 0, v1220);
        v1683 = 0LL;
      }
      v1686[0] = 0LL;
      v1222 = v1686[1];
      if ( v1686[1] )
      {
        v1223 = GetProcessHeap();
        HeapFree(v1223, 0, v1222);
        v1686[1] = 0LL;
      }
      if ( v909 )
      {
        v1224 = GetProcessHeap();
        HeapFree(v1224, 0, v909);
      }
      if ( v910 )
      {
        v1225 = GetProcessHeap();
        HeapFree(v1225, 0, v910);
      }
      goto LABEL_1583;
    }
    qword_1801CF978 = off_1801CD098[0]();
    v468 = dword_1801CF908;
    v1344 = dword_1801CF908;
    memset_0(&v1725, 0, 0x70uLL);
    v1745 = 0LL;
    v1472 = 0LL;
    v1760 = 0LL;
    v1761 = 0LL;
    v1762 = 0LL;
    v1763 = 0;
    v1314 = 0LL;
    while ( _InterlockedCompareExchange(&dword_1801CFEF8, 1, 0) )
      ;
    v469 = dword_1801CF980;
    if ( !dword_1801CF980 )
    {
      v1427 = 0;
      LODWORD(v1537) = 0;
      v470 = (char *)operator new(0x338uLL);
      v1320 = (WCHAR *)v470;
      if ( !v470 )
        goto LABEL_619;
      v471 = 0;
      v472 = 0;
      v473 = v470 + 7;
      v474 = (unsigned __int8 *)&unk_1801871E2;
      v475 = 103LL;
      v476 = -1;
      do
      {
        v477 = v474[1] | ((*v474 | ((*(v474 - 1) | (*(v474 - 2) << 8)) << 8)) << 8);
        v478 = v474[5] | ((v474[4] | ((v474[3] | (v474[2] << 8)) << 8)) << 8);
        v479 = v477 ^ v467;
        v474 += 8;
        v480 = v479 ^ v472 ^ v478 ^ 0xAC987321;
        v481 = (4991 * __ROL4__(v480 + 1419157410, 5) + __ROL4__(v480, 10)) ^ v479;
        v482 = (43881 * __ROR4__(v481 + 133239679, 9) - __ROL4__(v481, 2)) ^ v480;
        v483 = (24670 * v482 - (v482 >> 13) - 123127970) ^ v481;
        v484 = (2033 * __ROL4__(v483 ^ 0xAB69, 6) - __ROL4__(v483, 2)) ^ v482;
        v485 = (133239679 - (v484 ^ 0xAB69605E)) ^ v483;
        v486 = (43881 * (v485 ^ 0x137F)) ^ __ROR4__(v485, 6) ^ v484;
        v487 = (24670 * __ROR4__(v486 + 133239679, 15) + __ROL4__(v486, 2)) ^ v485;
        v488 = (2033 * __ROR4__(v487 + 1419157410, 14) - __ROL4__(v487, 8)) ^ v486;
        v489 = (4991 * __ROR4__(v488 ^ 0xAB69605E, 12)) ^ __ROR4__(v488, 10) ^ v487;
        v490 = v488 ^ (v489 >> 10) ^ (43881 * (v489 ^ 0x7F1));
        v491 = (2033 * (__ROR4__(~v490, 5) + 24670)) ^ v489;
        v492 = v490 ^ (v491 - 2033) ^ 0xAB69605E;
        v493 = ((v492 >> 2) + 4991 * __ROL4__(v490 ^ (v491 - 2033) ^ 0xAB6967AF, 2)) ^ v491;
        v494 = (43881 * __ROR4__(v493 - 133239679, 6) + __ROL4__(v493, 7)) ^ v492;
        v495 = (24670 * (v494 ^ 0x137F) + __ROR4__(v494, 9)) ^ v493;
        v496 = (2033 * __ROL4__(v495 ^ 0xAB69, 5) + __ROL4__(v495, 7)) ^ v494;
        v497 = v496 ^ v495 ^ 0xAC987321;
        v498 = (4991 * __ROR4__(v497, 3) - 219010071) ^ v496;
        v499 = (24670 * __ROR4__(v498 - 133239679, 1) - __ROR4__(v498, 6)) ^ v497;
        v500 = (2033 * __ROL4__(v499 - 1419157410, 3) + __ROL4__(v499, 14)) ^ v498;
        v501 = (4991 * __ROL4__(v500 - 1419157410, 15) - __ROR4__(v500, 14)) ^ v499;
        v502 = (v501 >> 3) ^ (43881 * (v501 ^ 0x605E)) ^ v500;
        v503 = v471 ^ (24670 * __ROL4__(v502 ^ 0x7F1137F, 4)) ^ __ROL4__(v502, 2) ^ v501;
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
        v467 = __ROR4__(v509, 8);
        v472 = __ROR4__(v510, 8);
        v471 = v477;
        v476 = v478;
        v473 += 8;
        --v475;
      }
      while ( v475 );
      v467 = 0;
      v511 = 0LL;
      v512 = 0;
      v468 = v1344;
      v87 = v1540;
      v513 = v1320;
      v514 = 0;
      do
        v512 ^= *((_BYTE *)v1320 + v511++);
      while ( v511 < 0x338 );
      if ( v512 != 64LL )
      {
        operator delete(v1320);
LABEL_619:
        v515 = (HMODULE *)&unk_1801CFE50;
        v516 = 4LL;
        do
        {
          if ( *v515 )
            FreeLibrary(*v515);
          v515 += 3;
          --v516;
        }
        while ( v516 );
        memset_0(&unk_1801CFE50, 0, 0x60uLL);
        memcpy_0(off_1801CD000, off_180171540, 0x170uLL);
LABEL_653:
        _InterlockedExchange(&dword_1801CFEF8, 0);
        v1428 = 0;
        v1386 = 0;
        v1639 = 0LL;
        dwBytesd = 0LL;
        v1684 = 0LL;
        while ( _InterlockedCompareExchange(&dword_1801CFEF8, 1, 0) )
          ;
        v528 = dword_1801CF980;
        if ( !dword_1801CF980 )
        {
          LODWORD(v1537) = 0;
          v1395 = 0;
          v529 = (char *)operator new(0x338uLL);
          lpMeme = (WCHAR *)v529;
          if ( !v529 )
            goto LABEL_663;
          v530 = 0;
          v531 = 0;
          v532 = v529 + 7;
          v533 = (unsigned __int8 *)&unk_1801871E2;
          v534 = 103LL;
          v535 = -1;
          do
          {
            v536 = v533[1] | ((*v533 | ((*(v533 - 1) | (*(v533 - 2) << 8)) << 8)) << 8);
            v537 = v533[5] | ((v533[4] | ((v533[3] | (v533[2] << 8)) << 8)) << 8);
            v538 = v536 ^ v467;
            v533 += 8;
            v539 = v538 ^ v531 ^ v537 ^ 0xAC987321;
            v540 = (4991 * __ROL4__(v539 + 1419157410, 5) + __ROL4__(v539, 10)) ^ v538;
            v541 = (43881 * __ROR4__(v540 + 133239679, 9) - __ROL4__(v540, 2)) ^ v539;
            v542 = (24670 * v541 - (v541 >> 13) - 123127970) ^ v540;
            v543 = (2033 * __ROL4__(v542 ^ 0xAB69, 6) - __ROL4__(v542, 2)) ^ v541;
            v544 = (133239679 - (v543 ^ 0xAB69605E)) ^ v542;
            v545 = (43881 * (v544 ^ 0x137F)) ^ __ROR4__(v544, 6) ^ v543;
            v546 = (24670 * __ROR4__(v545 + 133239679, 15) + __ROL4__(v545, 2)) ^ v544;
            v547 = (2033 * __ROR4__(v546 + 1419157410, 14) - __ROL4__(v546, 8)) ^ v545;
            v548 = (4991 * __ROR4__(v547 ^ 0xAB69605E, 12)) ^ __ROR4__(v547, 10) ^ v546;
            v549 = v547 ^ (v548 >> 10) ^ (43881 * (v548 ^ 0x7F1));
            v550 = (2033 * (__ROR4__(~v549, 5) + 24670)) ^ v548;
            v551 = v549 ^ (v550 - 2033) ^ 0xAB69605E;
            v552 = ((v551 >> 2) + 4991 * __ROL4__(v549 ^ (v550 - 2033) ^ 0xAB6967AF, 2)) ^ v550;
            v553 = (43881 * __ROR4__(v552 - 133239679, 6) + __ROL4__(v552, 7)) ^ v551;
            v554 = (24670 * (v553 ^ 0x137F) + __ROR4__(v553, 9)) ^ v552;
            v555 = (2033 * __ROL4__(v554 ^ 0xAB69, 5) + __ROL4__(v554, 7)) ^ v553;
            v556 = v555 ^ v554 ^ 0xAC987321;
            v557 = (4991 * __ROR4__(v556, 3) - 219010071) ^ v555;
            v558 = (24670 * __ROR4__(v557 - 133239679, 1) - __ROR4__(v557, 6)) ^ v556;
            v559 = (2033 * __ROL4__(v558 - 1419157410, 3) + __ROL4__(v558, 14)) ^ v557;
            v560 = (4991 * __ROL4__(v559 - 1419157410, 15) - __ROR4__(v559, 14)) ^ v558;
            v561 = (v560 >> 3) ^ (43881 * (v560 ^ 0x605E)) ^ v559;
            v562 = v530 ^ (24670 * __ROL4__(v561 ^ 0x7F1137F, 4)) ^ __ROL4__(v561, 2) ^ v560;
            v563 = v535 ^ v561;
            *(v532 - 4) = v562;
            v564 = __ROR4__(v562, 8);
            *v532 = v563;
            v565 = __ROR4__(v563, 8);
            *(v532 - 5) = v564;
            v566 = __ROR4__(v564, 8);
            *(v532 - 1) = v565;
            v567 = __ROR4__(v565, 8);
            *(v532 - 6) = v566;
            v568 = __ROR4__(v566, 8);
            *(v532 - 2) = v567;
            v569 = __ROR4__(v567, 8);
            *(v532 - 7) = v568;
            *(v532 - 3) = v569;
            v467 = __ROR4__(v568, 8);
            v531 = __ROR4__(v569, 8);
            v530 = v536;
            v535 = v537;
            v532 += 8;
            --v534;
          }
          while ( v534 );
          v570 = 0LL;
          v571 = 0;
          v468 = v1344;
          v87 = v1540;
          v572 = lpMeme;
          v573 = 0;
          do
            v571 ^= *((_BYTE *)lpMeme + v570++);
          while ( v570 < 0x338 );
          if ( v571 != 64LL )
          {
            operator delete(lpMeme);
LABEL_663:
            v574 = (HMODULE *)&unk_1801CFE50;
            v575 = 4LL;
            do
            {
              if ( *v574 )
                FreeLibrary(*v574);
              v574 += 3;
              --v575;
            }
            while ( v575 );
            memset_0(&unk_1801CFE50, 0, 0x60uLL);
            memcpy_0(off_1801CD000, off_180171540, 0x170uLL);
LABEL_696:
            _InterlockedExchange(&dword_1801CFEF8, 0);
            memset_0(&v1725, 0, 0x70uLL);
            v1745 = 0LL;
            v587 = v468 & 0xF;
            v1346 = v587;
            v1800[0] = (v468 >> 4) & 0xF;
            v1800[1] = (v468 >> 8) & 0xF;
            v1800[2] = (v468 >> 12) & 0xF;
            lpMemf = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0F8[0])(0LL, 0LL, 1027LL);
            LODWORD(v1537) = 0xFFFFFF;
            if ( !lpMemf )
            {
              v588 = GetLastError();
              v589 = v588;
              if ( v588 > 0 )
                v589 = (unsigned __int16)v588 | 0x80070000;
              if ( v589 >= 0 )
                v589 = -2147467259;
LABEL_827:
              while ( _InterlockedCompareExchange(&dword_1801CFEF8, 1, 0) )
                ;
              v686 = dword_1801CF980;
              if ( dword_1801CF980 > 0 )
              {
                --dword_1801CF980;
                if ( v686 == 1 )
                {
                  v687 = (HMODULE *)&unk_1801CFE50;
                  v688 = 4LL;
                  do
                  {
                    if ( *v687 )
                      FreeLibrary(*v687);
                    v687 += 3;
                    --v688;
                  }
                  while ( v688 );
                  memset_0(&unk_1801CFE50, 0, 0x60uLL);
                  memcpy_0(off_1801CD000, off_180171540, 0x170uLL);
                }
              }
              _InterlockedExchange(&dword_1801CFEF8, 0);
              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1639);
              if ( v589 < 0 )
              {
LABEL_1003:
                if ( v1727 )
                {
                  v756 = -1LL;
                  do
                    ++v756;
                  while ( *((_WORD *)v1727 + v756) );
                  memset(v1727, 0, 2 * v756 + 2);
                  operator delete(v1727);
                  v1727 = 0LL;
                }
                if ( v1728 )
                {
                  v757 = -1LL;
                  do
                    ++v757;
                  while ( *((_WORD *)v1728 + v757) );
                  memset(v1728, 0, 2 * v757 + 2);
                  operator delete(v1728);
                  v1728 = 0LL;
                }
                if ( v1729 )
                {
                  v758 = -1LL;
                  do
                    ++v758;
                  while ( *((_WORD *)v1729 + v758) );
                  memset(v1729, 0, 2 * v758 + 2);
                  operator delete(v1729);
                  v1729 = 0LL;
                }
                if ( v1730 )
                {
                  off_1801CD038[0]();
                  v1730 = 0LL;
                }
                if ( v1731 )
                {
                  off_1801CD038[0]();
                  v1731 = 0LL;
                }
                if ( v1732 )
                {
                  off_1801CD038[0]();
                  v1732 = 0LL;
                }
                while ( _InterlockedCompareExchange(&dword_1801CFEF8, 1, 0) )
                  ;
                v759 = dword_1801CF980;
                if ( dword_1801CF980 > 0 )
                {
                  --dword_1801CF980;
                  if ( v759 == 1 )
                  {
                    v760 = (HMODULE *)&unk_1801CFE50;
                    v761 = 4LL;
                    do
                    {
                      if ( *v760 )
                        FreeLibrary(*v760);
                      v760 += 3;
                      --v761;
                    }
                    while ( v761 );
                    memset_0(&unk_1801CFE50, 0, 0x60uLL);
                    memcpy_0(off_1801CD000, off_180171540, 0x170uLL);
                  }
                }
                _InterlockedExchange(&dword_1801CFEF8, 0);
                lpModuleNameb = dword_1801CF908;
                v762 = off_1801CD098[0]() - qword_1801CF978;
                v1446 = v762;
                v1795 = 0LL;
                v1796 = 0LL;
                v1797 = 0LL;
                v1798 = 0LL;
                while ( _InterlockedCompareExchange(&dword_1801CFEF8, 1, 0) )
                  ;
                v763 = dword_1801CF980;
                if ( !dword_1801CF980 )
                {
                  v1432 = 0;
                  v1489 = 0;
                  v764 = (char *)operator new(0x338uLL);
                  v1473 = (WCHAR *)v764;
                  if ( !v764 )
                    goto LABEL_1040;
                  v765 = 0;
                  v766 = -1;
                  v767 = 0;
                  v768 = 0;
                  v769 = v764 + 7;
                  v770 = (unsigned __int8 *)&unk_1801871E2;
                  v771 = 103LL;
                  do
                  {
                    v772 = v770[1] | ((*v770 | ((*(v770 - 1) | (*(v770 - 2) << 8)) << 8)) << 8);
                    v773 = v770[5] | ((v770[4] | ((v770[3] | (v770[2] << 8)) << 8)) << 8);
                    v774 = v772 ^ v768;
                    v770 += 8;
                    v775 = v774 ^ v767 ^ v773 ^ 0xAC987321;
                    v776 = (4991 * __ROL4__(v775 + 1419157410, 5) + __ROL4__(v775, 10)) ^ v774;
                    v777 = (43881 * __ROR4__(v776 + 133239679, 9) - __ROL4__(v776, 2)) ^ v775;
                    v778 = (24670 * v777 - (v777 >> 13) - 123127970) ^ v776;
                    v779 = (2033 * __ROL4__(v778 ^ 0xAB69, 6) - __ROL4__(v778, 2)) ^ v777;
                    v780 = (133239679 - (v779 ^ 0xAB69605E)) ^ v778;
                    v781 = (43881 * (v780 ^ 0x137F)) ^ __ROR4__(v780, 6) ^ v779;
                    v782 = (24670 * __ROR4__(v781 + 133239679, 15) + __ROL4__(v781, 2)) ^ v780;
                    v783 = (2033 * __ROR4__(v782 + 1419157410, 14) - __ROL4__(v782, 8)) ^ v781;
                    v784 = (4991 * __ROR4__(v783 ^ 0xAB69605E, 12)) ^ __ROR4__(v783, 10) ^ v782;
                    v785 = (v784 >> 10) ^ (43881 * (v784 ^ 0x7F1)) ^ v783;
                    v786 = (2033 * (__ROR4__(~v785, 5) + 24670)) ^ v784;
                    v787 = v785 ^ (v786 - 2033) ^ 0xAB69605E;
                    v788 = (4991 * __ROL4__(v785 ^ (v786 - 2033) ^ 0xAB6967AF, 2) + (v787 >> 2)) ^ v786;
                    v789 = (43881 * __ROR4__(v788 - 133239679, 6) + __ROL4__(v788, 7)) ^ v787;
                    v790 = (24670 * (v789 ^ 0x137F) + __ROR4__(v789, 9)) ^ v788;
                    v791 = (2033 * __ROL4__(v790 ^ 0xAB69, 5) + __ROL4__(v790, 7)) ^ v789;
                    v792 = v790 ^ v791 ^ 0xAC987321;
                    v793 = (4991 * __ROR4__(v792, 3) - 219010071) ^ v791;
                    v794 = (24670 * __ROR4__(v793 - 133239679, 1) - __ROR4__(v793, 6)) ^ v792;
                    v795 = (2033 * __ROL4__(v794 - 1419157410, 3) + __ROL4__(v794, 14)) ^ v793;
                    v796 = (4991 * __ROL4__(v795 - 1419157410, 15) - __ROR4__(v795, 14)) ^ v794;
                    v797 = (v796 >> 3) ^ (43881 * (v796 ^ 0x605E)) ^ v795;
                    v798 = (24670 * __ROL4__(v797 ^ 0x7F1137F, 4)) ^ __ROL4__(v797, 2) ^ v796 ^ v765;
                    v799 = v766 ^ v797;
                    *(v769 - 4) = v798;
                    v800 = __ROR4__(v798, 8);
                    *v769 = v799;
                    v801 = __ROR4__(v799, 8);
                    *(v769 - 5) = v800;
                    v802 = __ROR4__(v800, 8);
                    *(v769 - 1) = v801;
                    v803 = __ROR4__(v801, 8);
                    *(v769 - 6) = v802;
                    v804 = __ROR4__(v802, 8);
                    *(v769 - 2) = v803;
                    v805 = __ROR4__(v803, 8);
                    *(v769 - 7) = v804;
                    *(v769 - 3) = v805;
                    v768 = __ROR4__(v804, 8);
                    v767 = __ROR4__(v805, 8);
                    v765 = v772;
                    v766 = v773;
                    v769 += 8;
                    --v771;
                  }
                  while ( v771 );
                  v806 = 0LL;
                  v807 = 0;
                  v87 = v1540;
                  v808 = v1473;
                  v809 = 0;
                  do
                    v807 ^= *((_BYTE *)v1473 + v806++);
                  while ( v806 < 0x338 );
                  if ( v807 != 64LL )
                  {
                    operator delete(v1473);
LABEL_1039:
                    v762 = v1446;
LABEL_1040:
                    v810 = (HMODULE *)&unk_1801CFE50;
                    v811 = 4LL;
                    do
                    {
                      if ( *v810 )
                        FreeLibrary(*v810);
                      v810 += 3;
                      --v811;
                    }
                    while ( v811 );
                    v812 = (HMODULE *)&unk_1801CFE50;
                    memset_0(&unk_1801CFE50, 0, 0x60uLL);
                    memcpy_0(off_1801CD000, off_180171540, 0x170uLL);
                    goto LABEL_1220;
                  }
                  *((_BYTE *)v1473 + 823) = 0;
                  memset_0(&unk_1801CFE50, 0, 0x60uLL);
                  if ( !*(_BYTE *)v1473 )
                    goto LABEL_1216;
                  while ( 1 )
                  {
                    v896 = v808;
                    v897 = -1LL;
                    do
                      ++v897;
                    while ( v808[v897] );
                    v898 = &v808[v897];
                    v899 = (char *)&unk_1801CFE50 + 24 * v1489;
                    if ( !GetModuleHandleExW(0, v896, (HMODULE *)v899) )
                      break;
                    v809 = 0;
                    if ( **(_WORD **)v899 == 23117
                      && (v900 = *(int *)(*(_QWORD *)v899 + 60LL), (unsigned int)v900 < 0x10000000)
                      && (v901 = *(_QWORD *)v899 + v900, v901 >= *(_QWORD *)v899)
                      && *(_DWORD *)v901 == 17744 )
                    {
                      if ( ((*(_WORD *)(v901 + 24) - 267) & 0xFEFF) != 0 )
                      {
                        v809 = -1073741811;
                      }
                      else
                      {
                        *(_QWORD *)(v899 + 12) = *(_QWORD *)(v901 + 136);
                        *((_DWORD *)v899 + 2) = *(_DWORD *)(v901 + 80);
                      }
                    }
                    else
                    {
                      v809 = -1073741701;
                    }
                    v1264 = *(_DWORD *)(v898 + 1);
                    v808 = v898 + 3;
                    v902 = 0;
                    for ( ii = 0; v902 < v1264; ii = v902 )
                    {
                      v903 = (const CHAR *)v808;
                      v904 = -1LL;
                      do
                        ++v904;
                      while ( *((_BYTE *)v808 + v904) );
                      v808 = (WCHAR *)((char *)v808 + v904 + 1);
                      if ( v809 >= 0 )
                      {
                        v905 = GetProcAddress(*(HMODULE *)v899, v903);
                        if ( !v905 )
                          goto LABEL_1215;
                        off_1801CD000[v1432] = v905;
                        v902 = ii;
                      }
                      ++v1432;
                      ++v902;
                    }
                    ++v1489;
                    if ( !*(_BYTE *)v808 )
                      goto LABEL_1215;
                  }
                  v809 = -1073741702;
LABEL_1215:
                  if ( v1473 )
                  {
LABEL_1216:
                    v906 = GetProcessHeap();
                    HeapFree(v906, 0, v1473);
                  }
                  if ( v809 < 0 )
                    goto LABEL_1039;
                  v763 = dword_1801CF980;
                  v762 = v1446;
                }
                dword_1801CF980 = v763 + 1;
                v812 = (HMODULE *)&unk_1801CFE50;
LABEL_1220:
                _InterlockedExchange(&dword_1801CFEF8, 0);
                LODWORD(v1795) = v762;
                v1794 = 1;
                LODWORD(v1796) = -1721306479;
                DWORD2(v1795) = 1;
                LODWORD(v1797) = 1;
                DWORD2(v1796) = 1;
                LODWORD(v1798) = lpModuleNameb;
                DWORD2(v1797) = 1;
                v907 = 4LL;
                ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1801CD0D0)(0LL, 8225LL, 4LL, &v1794);
                while ( _InterlockedCompareExchange(&dword_1801CFEF8, 1, 0) )
                  ;
                v908 = dword_1801CF980;
                if ( dword_1801CF980 > 0 )
                {
                  --dword_1801CF980;
                  if ( v908 == 1 )
                  {
                    do
                    {
                      if ( *v812 )
                        FreeLibrary(*v812);
                      v812 += 3;
                      --v907;
                    }
                    while ( v907 );
                    memset_0(&unk_1801CFE50, 0, 0x60uLL);
                    memcpy_0(off_1801CD000, off_180171540, 0x170uLL);
                  }
                }
                _InterlockedExchange(&dword_1801CFEF8, 0);
                ((void (__fastcall *)(_QWORD, size_t))off_1801CD160[0])(0LL, v1246);
                v1565 = (void *)v1536;
                goto LABEL_1229;
              }
              v689 = v1745;
              v1647 = v1745;
              memset_0(v1698, 0, 0x68uLL);
              v690 = 1;
              v691 = ((__int64 (__fastcall *)(size_t, __int64))off_1801CD050[0])(v1246, 7LL);
              v692 = 0;
              if ( v691
                && ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801CD068[0])(v691, 104LL, v1698) )
              {
                if ( v1701 != 32 || !v1702 || v1699 <= 0 || v1700 <= 0 )
                  v690 = 0;
                if ( v690 )
                {
LABEL_844:
                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1801CD150[0])(&v1734, v689, HIDWORD(v1647));
                  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1801CD150[0])(&v1735, v689, HIDWORD(v1647));
                  if ( v587 == 1 )
                    v1314 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_1801CD028[0])(v1726 == 0 ? 0xB26720 : 0);
LABEL_846:
                  v1429 = ((__int64 (__fastcall *)(size_t, __int64))off_1801CD080[0])(v1246, 1LL);
                  v693 = 2064;
                  if ( v1725 )
                    v693 = 133138;
                  v1387 = v693;
                  if ( v690 )
                  {
                    v1483 = v1726;
                    v1323 = v1730;
                    v694 = v1727;
                    dwBytese = v1727;
                    memset_0(v1703, 0, 0x68uLL);
                    memset_0(v1707, 0, 0x68uLL);
                    v1278 = 0LL;
                    v1399 = 0;
                    v1498 = 0;
                    v1764 = 0LL;
                    v1765 = 0LL;
                    v1766 = 0LL;
                    v1767 = 0;
                    v1746 = 0LL;
                    if ( !v694 )
                      goto LABEL_1001;
                    v695 = ((__int64 (__fastcall *)(size_t, __int64))off_1801CD050[0])(v1246, 7LL);
                    if ( v695 )
                    {
                      if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801CD068[0])(
                             v695,
                             104LL,
                             v1703) )
                      {
                        v1278 = v1706;
                        v1399 = v1704;
                        v1498 = v1705;
                      }
                      v696 = ((__int64 (__fastcall *)(size_t))off_1801CD010[0])(v1246);
                      v697 = v696;
                      lpMemg = (LPVOID)v696;
                      if ( v696 )
                      {
                        v1648 = 0LL;
                        v1765 = 0LL;
                        v1766 = 0LL;
                        v1767 = 0;
                        LODWORD(v1764) = 40;
                        DWORD1(v1764) = DWORD2(v1734) - v1734;
                        DWORD2(v1764) = DWORD1(v1734) - HIDWORD(v1734);
                        HIDWORD(v1764) = 2097153;
                        v698 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801CD018[0])(
                                 v696,
                                 &v1764,
                                 0LL,
                                 &v1648,
                                 0LL,
                                 0);
                        v699 = v698;
                        v1502 = v698;
                        if ( v698 )
                        {
                          v731 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1801CD068[0])(
                                   v698,
                                   104LL,
                                   v1707);
                          v732 = 0LL;
                          if ( v731 )
                            v732 = v1708;
                          v1364 = v732;
                          DWORD2(v1746) = DWORD2(v1734) - v1734;
                          HIDWORD(v1746) = HIDWORD(v1734) - DWORD1(v1734);
                          ((void (__fastcall *)(__int64, __int64))off_1801CD078[0])(v697, v699);
                          ((void (__fastcall *)(__int64, __int64))off_1801CD080[0])(v697, 1LL);
                          v1326 = (LPCWSTR)((__int64 (__fastcall *)(__int64, LPCWSTR))off_1801CD078[0])(v697, v1323);
                          v733 = off_1801CD0E8[0];
                          v734 = ((__int64 (__fastcall *)(_QWORD))off_1801CD070[0])(0LL);
                          ((void (__fastcall *)(__int64, __int128 *, __int64))v733)(v697, &v1746, v734);
                          v700 = 0;
                          ((void (__fastcall *)(__int64, void *, __int64, __int128 *, int, _QWORD))off_1801CD0D8[0])(
                            v697,
                            dwBytese,
                            0xFFFFFFFFLL,
                            &v1746,
                            v1387,
                            0LL);
                          if ( v587 == 1 )
                          {
                            if ( v1483 )
                              v1484 = ((__int64 (__fastcall *)(__int64))off_1801CD118[0])(8LL);
                            else
                              v1484 = 0xFFFFFF;
                          }
                          else
                          {
                            v1484 = -5723992;
                          }
                          v735 = -(int)v1734;
                          if ( (int)v1734 >= 0 )
                            v735 = 0;
                          v736 = 0;
                          if ( (int)v1734 >= 0 )
                            v736 = v1734;
                          v737 = -DWORD1(v1734);
                          if ( (SDWORD1(v1734) & 0x80000000) == 0 )
                            v737 = 0;
                          v738 = 0;
                          if ( (SDWORD1(v1734) & 0x80000000) == 0 )
                            v738 = DWORD1(v1734);
                          v739 = DWORD2(v1746) - v735;
                          if ( DWORD2(v1746) - v735 >= v1399 - v736 )
                            v739 = v1399 - v736;
                          v740 = HIDWORD(v1746) - v737;
                          if ( HIDWORD(v1746) - v737 >= v1498 - v738 )
                            v740 = v1498 - v738;
                          if ( v739 > 0 && v740 > 0 )
                          {
                            v741 = &v1364[4 * v735 + 4 * (__int64)(DWORD2(v1746) * v737)];
                            dwBytesf = (SIZE_T)v741;
                            v742 = v1399;
                            v743 = v1278 + 4 * (v736 + (__int64)(v1399 * v738));
                            v1279 = v743;
                            v744 = 0;
                            v1400 = 0;
                            v1365 = 4LL * SDWORD2(v1746);
                            v1452 = 4 * v742;
                            while ( 1 )
                            {
                              LODWORD(v1538) = 0;
                              v745 = (unsigned __int8 *)(v741 + 2);
                              v746 = v743 - (_QWORD)v741;
                              do
                              {
                                if ( (unsigned __int8)((*v745 + *(v745 - 2) + 2 * (unsigned int)*(v745 - 1)) >> 2) != 0xFF )
                                {
                                  v747 = (unsigned __int8)~((*v745 + *(v745 - 2) + 2 * (unsigned int)*(v745 - 1)) >> 2);
                                  v745[v746] -= ~((*v745 + *(v745 - 2) + 2 * (unsigned int)*(v745 - 1)) >> 2)
                                              * (v1484 - v745[v746]);
                                  v745[v746 - 1] += ((((unsigned __int64)(2155905153LL
                                                                        * v747
                                                                        * (BYTE1(v1484) - v745[v746 - 1])) >> 32) & 0x80000000) != 0LL)
                                                  + ((int)((unsigned __int64)(2155905153LL
                                                                            * v747
                                                                            * (BYTE1(v1484) - v745[v746 - 1])) >> 32) >> 7);
                                  v745[v746 - 2] += ((((unsigned __int64)(2155905153LL
                                                                        * v747
                                                                        * (BYTE2(v1484) - v745[v746 - 2])) >> 32) & 0x80000000) != 0LL)
                                                  + ((int)((unsigned __int64)(2155905153LL
                                                                            * v747
                                                                            * (BYTE2(v1484) - v745[v746 - 2])) >> 32) >> 7);
                                  v745[v746 + 1] += ((((unsigned __int64)(2155905153LL * v747 * (255 - v745[v746 + 1])) >> 32) & 0x80000000) != 0LL)
                                                  + ((int)((unsigned __int64)(2155905153LL
                                                                            * v747
                                                                            * (255 - v745[v746 + 1])) >> 32) >> 7);
                                  v744 = v1538;
                                }
                                v700 = 0;
                                v745 += 4;
                                LODWORD(v1538) = ++v744;
                              }
                              while ( v744 < v739 );
                              v741 = (char *)(v1365 + dwBytesf);
                              dwBytesf += v1365;
                              v743 = v1452 + v1279;
                              v1279 += v1452;
                              if ( ++v1400 >= v740 )
                                break;
                              v744 = 0;
                            }
                            v87 = v1540;
                            v697 = (__int64)lpMemg;
                          }
                          ((void (__fastcall *)(SIZE_T))off_1801CD038[0])(v1502);
                          if ( v1326 )
                            ((void (__fastcall *)(__int64, LPCWSTR))off_1801CD078[0])(v697, v1326);
                          v587 = v1346;
                        }
                        else
                        {
                          v700 = GetLastError();
                          v701 = v700 < 0;
                          if ( v700 > 0 )
                          {
                            v700 = (unsigned __int16)v700 | 0x80070000;
                            v701 = v700 < 0;
                          }
                          if ( !v701 )
                            v700 = -2147467259;
                        }
                        ((void (__fastcall *)(__int64))off_1801CD030[0])(v697);
                        if ( v700 < 0 )
                          goto LABEL_1001;
                        v1347 = v1726;
                        v1327 = v1731;
                        v748 = v1728;
                        dwBytesg = v1728;
                        memset_0(v1709, 0, 0x68uLL);
                        memset_0(v1713, 0, 0x68uLL);
                        v1280 = 0LL;
                        v1485 = 0;
                        v1401 = 0;
                        v1768 = 0LL;
                        v1769 = 0LL;
                        v1770 = 0LL;
                        v1771 = 0;
                        v1747 = 0LL;
                        if ( !v748 )
                          goto LABEL_1001;
                        v749 = ((__int64 (__fastcall *)(size_t, __int64))off_1801CD050[0])(v1246, 7LL);
                        if ( v749 )
                        {
                          if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801CD068[0])(
                                 v749,
                                 104LL,
                                 v1709) )
                          {
                            v1280 = v1712;
                            v1485 = v1710;
                            v1401 = v1711;
                          }
                          v750 = ((__int64 (__fastcall *)(size_t))off_1801CD010[0])(v1246);
                          v751 = v750;
                          lpMemh = (LPVOID)v750;
                          if ( v750 )
                          {
                            v1649 = 0LL;
                            v1769 = 0LL;
                            v1770 = 0LL;
                            v1771 = 0;
                            LODWORD(v1768) = 40;
                            DWORD1(v1768) = DWORD2(v1735) - v1735;
                            DWORD2(v1768) = DWORD1(v1735) - HIDWORD(v1735);
                            HIDWORD(v1768) = 2097153;
                            v752 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801CD018[0])(
                                     v750,
                                     &v1768,
                                     0LL,
                                     &v1649,
                                     0LL,
                                     0);
                            v753 = v752;
                            v1503 = v752;
                            if ( !v752 )
                            {
                              v754 = GetLastError();
                              v755 = v754;
                              if ( v754 > 0 )
                                v755 = (unsigned __int16)v754 | 0x80070000;
                              if ( v755 >= 0 )
                                v755 = -2147467259;
LABEL_1076:
                              ((void (__fastcall *)(__int64))off_1801CD030[0])(v751);
                              if ( v755 < 0 )
                                goto LABEL_1001;
                              v832 = 0LL;
                              v833 = v1246;
LABEL_1190:
                              ((void (__fastcall *)(size_t, _QWORD))off_1801CD080[0])(v833, v1429);
                              v848 = v1472;
                              if ( !v1472 )
                              {
LABEL_1109:
                                if ( !v832 )
                                  goto LABEL_1001;
                                goto LABEL_1110;
                              }
LABEL_1108:
                              ((void (__fastcall *)(LPCWSTR))off_1801CD038[0])(v848);
                              goto LABEL_1109;
                            }
                            v813 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1801CD068[0])(
                                     v752,
                                     104LL,
                                     v1713);
                            v814 = 0LL;
                            if ( v813 )
                              v814 = v1714;
                            v1366 = v814;
                            DWORD2(v1747) = DWORD2(v1735) - v1735;
                            HIDWORD(v1747) = HIDWORD(v1735) - DWORD1(v1735);
                            ((void (__fastcall *)(__int64, __int64))off_1801CD078[0])(v751, v753);
                            ((void (__fastcall *)(__int64, __int64))off_1801CD080[0])(v751, 1LL);
                            v1328 = (LPCWSTR)((__int64 (__fastcall *)(__int64, LPCWSTR))off_1801CD078[0])(v751, v1327);
                            v815 = off_1801CD0E8[0];
                            v816 = ((__int64 (__fastcall *)(_QWORD))off_1801CD070[0])(0LL);
                            ((void (__fastcall *)(__int64, __int128 *, __int64))v815)(v751, &v1747, v816);
                            v755 = 0;
                            ((void (__fastcall *)(__int64, void *, __int64, __int128 *, int, _QWORD))off_1801CD0D8[0])(
                              v751,
                              dwBytesg,
                              0xFFFFFFFFLL,
                              &v1747,
                              v1387,
                              0LL);
                            if ( v587 == 1 )
                            {
                              if ( !v1347 )
                              {
                                v1348 = 0xFFFFFF;
LABEL_1053:
                                v818 = -(int)v1735;
                                if ( (int)v1735 >= 0 )
                                  v818 = 0;
                                v819 = 0;
                                if ( (int)v1735 >= 0 )
                                  v819 = v1735;
                                v820 = -DWORD1(v1735);
                                if ( (SDWORD1(v1735) & 0x80000000) == 0 )
                                  v820 = 0;
                                v821 = 0;
                                if ( (SDWORD1(v1735) & 0x80000000) == 0 )
                                  v821 = DWORD1(v1735);
                                v822 = DWORD2(v1747) - v818;
                                if ( DWORD2(v1747) - v818 >= v1485 - v819 )
                                  v822 = v1485 - v819;
                                v823 = HIDWORD(v1747) - v820;
                                if ( HIDWORD(v1747) - v820 >= v1401 - v821 )
                                  v823 = v1401 - v821;
                                if ( v822 > 0 && v823 > 0 )
                                {
                                  v824 = &v1366[4 * v818 + 4 * (__int64)(DWORD2(v1747) * v820)];
                                  dwBytesh = (SIZE_T)v824;
                                  v825 = v1485;
                                  v826 = v1280 + 4 * (v819 + (__int64)(v1485 * v821));
                                  v1281 = v826;
                                  v1486 = 0;
                                  v1367 = 4LL * SDWORD2(v1747);
                                  v1453 = 4 * v825;
                                  do
                                  {
                                    v827 = 0;
                                    v1402 = 0;
                                    v828 = (unsigned __int8 *)(v824 + 2);
                                    v829 = v826 - (_QWORD)v824;
                                    v830 = v1537;
                                    do
                                    {
                                      if ( (unsigned __int8)((*v828 + *(v828 - 2) + 2 * (unsigned int)*(v828 - 1)) >> 2) != 0xFF )
                                      {
                                        v831 = (unsigned __int8)~((*v828 + *(v828 - 2) + 2 * (unsigned int)*(v828 - 1)) >> 2);
                                        v828[v829] -= ~((*v828 + *(v828 - 2) + 2 * (unsigned int)*(v828 - 1)) >> 2)
                                                    * (v830 - v828[v829]);
                                        v828[v829 - 1] += ((((unsigned __int64)(2155905153LL
                                                                              * v831
                                                                              * (BYTE1(v1348) - v828[v829 - 1])) >> 32) & 0x80000000) != 0LL)
                                                        + ((int)((unsigned __int64)(2155905153LL
                                                                                  * v831
                                                                                  * (BYTE1(v1348) - v828[v829 - 1])) >> 32) >> 7);
                                        v828[v829 - 2] += ((((unsigned __int64)(2155905153LL
                                                                              * v831
                                                                              * (BYTE2(v1348) - v828[v829 - 2])) >> 32) & 0x80000000) != 0LL)
                                                        + ((int)((unsigned __int64)(2155905153LL
                                                                                  * v831
                                                                                  * (BYTE2(v1348) - v828[v829 - 2])) >> 32) >> 7);
                                        v828[v829 + 1] += ((((unsigned __int64)(2155905153LL
                                                                              * v831
                                                                              * (255 - v828[v829 + 1])) >> 32) & 0x80000000) != 0LL)
                                                        + ((int)((unsigned __int64)(2155905153LL
                                                                                  * v831
                                                                                  * (255 - v828[v829 + 1])) >> 32) >> 7);
                                        v827 = v1402;
                                      }
                                      v755 = 0;
                                      v828 += 4;
                                      v1402 = ++v827;
                                    }
                                    while ( v827 < v822 );
                                    v824 = (char *)(v1367 + dwBytesh);
                                    dwBytesh += v1367;
                                    v826 = v1453 + v1281;
                                    v1281 += v1453;
                                    ++v1486;
                                  }
                                  while ( v1486 < v823 );
                                  v87 = v1540;
                                  v751 = (__int64)lpMemh;
                                }
                                ((void (__fastcall *)(SIZE_T))off_1801CD038[0])(v1503);
                                if ( v1328 )
                                  ((void (__fastcall *)(__int64, LPCWSTR))off_1801CD078[0])(v751, v1328);
                                goto LABEL_1076;
                              }
                              v817 = ((__int64 (__fastcall *)(__int64))off_1801CD118[0])(8LL);
                            }
                            else
                            {
                              v817 = -5723992;
                            }
                            v1348 = v817;
                            LODWORD(v1537) = v817;
                            goto LABEL_1053;
                          }
                        }
                      }
                    }
LABEL_1000:
                    GetLastError();
                    goto LABEL_1001;
                  }
                  if ( v1726 || (v834 = -64, v587 == 1) )
                    v834 = -1;
                  LOWORD(v1487) = 0;
                  BYTE2(v1487) = v834;
                  HIBYTE(v1487) = 1;
                  v1403 = 0;
                  v1499 = 0;
                  LODWORD(v1538) = 0;
                  v1447 = ((__int64 (__fastcall *)(size_t))off_1801CD010[0])(v1246);
                  if ( !v1447 )
                    goto LABEL_1000;
                  if ( v587 == 1 )
                  {
                    v835 = DWORD2(v1735) - v1735;
                    if ( DWORD2(v1735) - (int)v1735 <= DWORD2(v1734) - (int)v1734 )
                      v835 = DWORD2(v1734) - v1734;
                    LODWORD(Size) = v835;
                    v836 = HIDWORD(v1735) - DWORD1(v1734);
                    LODWORD(v1565) = HIDWORD(v1735) - DWORD1(v1734);
                    v837 = 0;
                    v838 = 0;
                    if ( v1725 )
                    {
                      v692 = v1734 + v835 - DWORD2(v1734);
                      v1403 = v692;
                      LODWORD(v1538) = v1735 + v835 - DWORD2(v1735);
                      v837 = v692;
                      v838 = v1538;
                    }
                    v839 = DWORD2(v1734) + v837 - v1734;
                    v1515 = HIDWORD(v1734) - DWORD1(v1734);
                    v840 = DWORD2(v1735) + v838 - v1735;
                    v1465 = DWORD1(v1735) - DWORD1(v1734);
                    v1490 = HIDWORD(v1735) - DWORD1(v1734);
                  }
                  else
                  {
                    v835 = DWORD2(v1745);
                    LODWORD(Size) = DWORD2(v1745);
                    v836 = HIDWORD(v1745);
                    LODWORD(v1565) = HIDWORD(v1745);
                    v1668 = v1734;
                    v1669 = v1735;
                    v1515 = HIDWORD(v1734);
                    v839 = DWORD2(v1734);
                    v1499 = DWORD1(v1734);
                    v692 = v1734;
                    v1403 = v1734;
                    v1490 = HIDWORD(v1735);
                    v840 = DWORD2(v1735);
                    v1465 = DWORD1(v1735);
                    LODWORD(v1538) = v1735;
                  }
                  v1650 = 0LL;
                  v1761 = 0LL;
                  v1762 = 0LL;
                  v1763 = 0;
                  LODWORD(v1760) = 40;
                  DWORD1(v1760) = v835;
                  DWORD2(v1760) = -v836;
                  HIDWORD(v1760) = 2097153;
                  v841 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801CD018[0])(
                           v1447,
                           &v1760,
                           0LL,
                           &v1650,
                           0LL,
                           0);
                  v1472 = (LPCWSTR)v841;
                  if ( !v841 )
                  {
                    GetLastError();
                    v832 = v1447;
LABEL_1110:
                    ((void (__fastcall *)(__int64))off_1801CD030[0])(v832);
LABEL_1001:
                    if ( v1314 )
                      ((void (__fastcall *)(LPVOID))off_1801CD038[0])(v1314);
                    goto LABEL_1003;
                  }
                  ((void (__fastcall *)(__int64, __int64))off_1801CD078[0])(v1447, v841);
                  if ( v1346 == 1 && v1314 )
                  {
                    v1748 = 0LL;
                    v1749 = v835;
                    v1750 = (int)v1565;
                    ((void (__fastcall *)(__int64, __int64 *))off_1801CD0E8[0])(v1447, &v1748);
                  }
                  v1261 = v1726;
                  v1329 = v1730;
                  dwBytesi = v1727;
                  memset_0(v1715, 0, 0x68uLL);
                  memset_0(v1696, 0, 0x68uLL);
                  v1282 = 0LL;
                  v1433 = 0;
                  lpModuleNamec = 0;
                  v1772 = 0LL;
                  v1773 = 0LL;
                  v1774 = 0LL;
                  v1775 = 0;
                  v1744 = 0LL;
                  if ( !dwBytesi )
                    goto LABEL_1106;
                  v842 = ((__int64 (__fastcall *)(__int64, __int64))off_1801CD050[0])(v1447, 7LL);
                  if ( v842 )
                  {
                    if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801CD068[0])(v842, 104LL, v1715) )
                    {
                      v1282 = v1718;
                      v1433 = v1716;
                      lpModuleNamec = v1717;
                    }
                    v843 = ((__int64 (__fastcall *)(__int64))off_1801CD010[0])(v1447);
                    lpMemi = (LPVOID)v843;
                    if ( v843 )
                    {
                      v1516 = v1515 - v1499;
                      v844 = v839 - v692;
                      v1651 = 0LL;
                      v1773 = 0LL;
                      v1774 = 0LL;
                      v1775 = 0;
                      LODWORD(v1772) = 40;
                      DWORD1(v1772) = v844;
                      DWORD2(v1772) = -v1516;
                      HIDWORD(v1772) = 2097153;
                      v845 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1801CD018[0])(
                               v843,
                               &v1772,
                               0LL,
                               &v1651,
                               0LL,
                               0);
                      v1504 = v845;
                      if ( v845 )
                      {
                        v849 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1801CD068[0])(v845, 104LL, v1696);
                        v850 = 0LL;
                        if ( v849 )
                          v850 = v1697;
                        v1368 = v850;
                        *((_QWORD *)&v1744 + 1) = __PAIR64__(v1516, v844);
                        ((void (__fastcall *)(LPVOID, SIZE_T))off_1801CD078[0])(lpMemi, v1504);
                        ((void (__fastcall *)(LPVOID, __int64))off_1801CD080[0])(lpMemi, 1LL);
                        v1330 = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, LPCWSTR))off_1801CD078[0])(lpMemi, v1329);
                        v851 = off_1801CD0E8[0];
                        v852 = ((__int64 (__fastcall *)(_QWORD))off_1801CD070[0])(0LL);
                        ((void (__fastcall *)(LPVOID, __int128 *, __int64))v851)(lpMemi, &v1744, v852);
                        v846 = 0;
                        ((void (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1801CD0D8[0])(
                          lpMemi,
                          dwBytesi,
                          0xFFFFFFFFLL,
                          &v1744,
                          v1387,
                          0LL);
                        if ( v1346 == 1 )
                        {
                          if ( v1261 )
                            v1262 = ((__int64 (__fastcall *)(__int64))off_1801CD118[0])(8LL);
                          else
                            v1262 = 0xFFFFFF;
                        }
                        else
                        {
                          v1262 = -5723992;
                        }
                        v853 = -v1403;
                        if ( v1403 >= 0 )
                          v853 = 0;
                        v854 = 0;
                        if ( v1403 >= 0 )
                          v854 = v1403;
                        v855 = -v1499;
                        if ( v1499 >= 0 )
                          v855 = 0;
                        v856 = 0;
                        if ( v1499 >= 0 )
                          v856 = v1499;
                        v857 = DWORD2(v1744) - v853;
                        if ( DWORD2(v1744) - v853 >= v1433 - v854 )
                          v857 = v1433 - v854;
                        v1517 = v857;
                        v858 = HIDWORD(v1744) - v855;
                        if ( HIDWORD(v1744) - v855 >= lpModuleNamec - v856 )
                          v858 = lpModuleNamec - v856;
                        if ( v857 > 0 && v858 > 0 )
                        {
                          v859 = &v1368[4 * v853 + 4 * (__int64)(DWORD2(v1744) * v855)];
                          dwBytesj = (SIZE_T)v859;
                          v860 = v1433;
                          v861 = v1282 + 4 * (v854 + (__int64)(v1433 * v856));
                          v1283 = v861;
                          v862 = 0;
                          v1434 = 0;
                          v1369 = 4LL * SDWORD2(v1744);
                          v1454 = 4 * v860;
                          v863 = v1517;
                          while ( 1 )
                          {
                            v1518 = 0;
                            v864 = (unsigned __int8 *)(v859 + 2);
                            v865 = v861 - (_QWORD)v859;
                            do
                            {
                              if ( (unsigned __int8)((*v864 + *(v864 - 2) + 2 * (unsigned int)*(v864 - 1)) >> 2) != 0xFF )
                              {
                                v866 = (unsigned __int8)~((*v864 + *(v864 - 2) + 2 * (unsigned int)*(v864 - 1)) >> 2);
                                v864[v865] -= ~((*v864 + *(v864 - 2) + 2 * (unsigned int)*(v864 - 1)) >> 2)
                                            * (v1262 - v864[v865]);
                                v864[v865 - 1] += ((((unsigned __int64)(2155905153LL
                                                                      * v866
                                                                      * (BYTE1(v1262) - v864[v865 - 1])) >> 32) & 0x80000000) != 0LL)
                                                + ((int)((unsigned __int64)(2155905153LL
                                                                          * v866
                                                                          * (BYTE1(v1262) - v864[v865 - 1])) >> 32) >> 7);
                                v864[v865 - 2] += ((((unsigned __int64)(2155905153LL
                                                                      * v866
                                                                      * (BYTE2(v1262) - v864[v865 - 2])) >> 32) & 0x80000000) != 0LL)
                                                + ((int)((unsigned __int64)(2155905153LL
                                                                          * v866
                                                                          * (BYTE2(v1262) - v864[v865 - 2])) >> 32) >> 7);
                                v864[v865 + 1] += ((((unsigned __int64)(2155905153LL * v866 * (255 - v864[v865 + 1])) >> 32) & 0x80000000) != 0LL)
                                                + ((int)((unsigned __int64)(2155905153LL * v866 * (255 - v864[v865 + 1])) >> 32) >> 7);
                                v862 = v1518;
                              }
                              v846 = 0;
                              v864 += 4;
                              v1518 = ++v862;
                            }
                            while ( v862 < v863 );
                            v859 = (char *)(v1369 + dwBytesj);
                            dwBytesj += v1369;
                            v861 = v1454 + v1283;
                            v1283 += v1454;
                            if ( ++v1434 >= v858 )
                              break;
                            v862 = 0;
                          }
                          v87 = v1540;
                          v835 = Size;
                        }
                        ((void (__fastcall *)(SIZE_T))off_1801CD038[0])(v1504);
                        if ( v1330 )
                          ((void (__fastcall *)(LPVOID, LPCWSTR))off_1801CD078[0])(lpMemi, v1330);
                      }
                      else
                      {
                        v846 = GetLastError();
                        v847 = v846 < 0;
                        if ( v846 > 0 )
                        {
                          v846 = (unsigned __int16)v846 | 0x80070000;
                          v847 = v846 < 0;
                        }
                        if ( !v847 )
                          v846 = -2147467259;
                      }
                      ((void (__fastcall *)(LPVOID))off_1801CD030[0])(lpMemi);
                      if ( v846 < 0 )
                        goto LABEL_1106;
                      lpModuleNamed = v1726;
                      v1331 = v1731;
                      v867 = v1728;
                      dwBytesk = v1728;
                      memset_0(v1719, 0, 0x68uLL);
                      memset_0(v1723, 0, 0x68uLL);
                      v1284 = 0LL;
                      v1435 = 0;
                      v1263 = 0;
                      v1776 = 0LL;
                      v1777 = 0LL;
                      v1778 = 0LL;
                      v1779 = 0;
                      v1751 = 0LL;
                      if ( !v867 )
                        goto LABEL_1106;
                      v832 = v1447;
                      v868 = ((__int64 (__fastcall *)(__int64, __int64))off_1801CD050[0])(v1447, 7LL);
                      if ( !v868 )
                      {
                        GetLastError();
                        goto LABEL_1107;
                      }
                      if ( ((unsigned int (__fastcall *)(__int64, __int64, _BYTE *))off_1801CD068[0])(
                             v868,
                             104LL,
                             v1719) )
                      {
                        v1284 = v1722;
                        v1435 = v1720;
                        v1263 = v1721;
                      }
                      v869 = ((__int64 (__fastcall *)(__int64))off_1801CD010[0])(v1447);
                      v870 = v869;
                      lpMemj = (LPVOID)v869;
                      if ( v869 )
                      {
                        v1491 = v1490 - v1465;
                        v871 = v840 - v1538;
                        v1652[0] = 0LL;
                        v1777 = 0LL;
                        v1778 = 0LL;
                        v1779 = 0;
                        LODWORD(v1776) = 40;
                        DWORD1(v1776) = v871;
                        DWORD2(v1776) = -v1491;
                        HIDWORD(v1776) = 2097153;
                        v872 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, _QWORD *, _QWORD, _DWORD))off_1801CD018[0])(
                                 v869,
                                 &v1776,
                                 0LL,
                                 v1652,
                                 0LL,
                                 0);
                        v1505 = v872;
                        if ( !v872 )
                        {
                          v873 = GetLastError();
                          v874 = v873;
                          if ( v873 > 0 )
                            v874 = (unsigned __int16)v873 | 0x80070000;
                          if ( v874 >= 0 )
                            v874 = -2147467259;
                          v875 = lpMemj;
LABEL_1186:
                          ((void (__fastcall *)(LPVOID))off_1801CD030[0])(v875);
                          if ( v874 >= 0 )
                          {
                            v832 = v1447;
                            v833 = v1246;
                            if ( v1346 == 1 )
                              ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, __int64, _DWORD, _DWORD, int))off_1801CD000[0])(
                                v1246,
                                (unsigned int)v1734,
                                DWORD1(v1734),
                                v835,
                                (_DWORD)v1565,
                                v1447,
                                0,
                                0,
                                13369376);
                            else
                              ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD, _DWORD, __int64, _DWORD, _DWORD, unsigned int, _DWORD, int))off_1801CD040[0])(
                                v1246,
                                (unsigned int)v1745,
                                DWORD1(v1745),
                                v835,
                                (_DWORD)v1565,
                                v1447,
                                0,
                                0,
                                v835,
                                (_DWORD)v1565,
                                v1487);
                            goto LABEL_1190;
                          }
                          v832 = v1447;
LABEL_1107:
                          v848 = v1472;
                          goto LABEL_1108;
                        }
                        v876 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1801CD068[0])(v872, 104LL, v1723);
                        v877 = 0LL;
                        if ( v876 )
                          v877 = v1724;
                        v1370 = v877;
                        *((_QWORD *)&v1751 + 1) = __PAIR64__(v1491, v871);
                        ((void (__fastcall *)(__int64, SIZE_T))off_1801CD078[0])(v870, v1505);
                        ((void (__fastcall *)(__int64, __int64))off_1801CD080[0])(v870, 1LL);
                        v1332 = (LPCWSTR)((__int64 (__fastcall *)(__int64, LPCWSTR))off_1801CD078[0])(v870, v1331);
                        v878 = off_1801CD0E8[0];
                        v879 = ((__int64 (__fastcall *)(_QWORD))off_1801CD070[0])(0LL);
                        v875 = lpMemj;
                        ((void (__fastcall *)(LPVOID, __int128 *, __int64))v878)(lpMemj, &v1751, v879);
                        v874 = 0;
                        ((void (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1801CD0D8[0])(
                          lpMemj,
                          dwBytesk,
                          0xFFFFFFFFLL,
                          &v1751,
                          v1387,
                          0LL);
                        if ( v1346 == 1 )
                        {
                          if ( !lpModuleNamed )
                          {
                            lpModuleNamee = 0xFFFFFF;
LABEL_1163:
                            v881 = -(int)v1538;
                            if ( (v1538 & 0x80000000) == 0LL )
                              v881 = 0;
                            v882 = 0;
                            if ( (v1538 & 0x80000000) == 0LL )
                              v882 = v1538;
                            v883 = -v1465;
                            if ( v1465 >= 0 )
                              v883 = 0;
                            v884 = 0;
                            if ( v1465 >= 0 )
                              v884 = v1465;
                            v885 = DWORD2(v1751) - v881;
                            if ( DWORD2(v1751) - v881 >= v1435 - v882 )
                              v885 = v1435 - v882;
                            v1492 = v885;
                            v886 = HIDWORD(v1751) - v883;
                            if ( HIDWORD(v1751) - v883 >= v1263 - v884 )
                              v886 = v1263 - v884;
                            if ( v885 > 0 && v886 > 0 )
                            {
                              v887 = &v1370[4 * v881 + 4 * (__int64)(DWORD2(v1751) * v883)];
                              dwBytesl = (SIZE_T)v887;
                              v888 = v1435;
                              v889 = v1284 + 4 * (v882 + (__int64)(v1435 * v884));
                              v1285 = v889;
                              v1436 = 0;
                              v1371 = 4LL * SDWORD2(v1751);
                              v1455 = 4 * v888;
                              v890 = v1492;
                              do
                              {
                                v891 = 0;
                                v1493 = 0;
                                v892 = (unsigned __int8 *)(v887 + 2);
                                v893 = v889 - (_QWORD)v887;
                                v894 = v1537;
                                do
                                {
                                  if ( (unsigned __int8)((*v892 + *(v892 - 2) + 2 * (unsigned int)*(v892 - 1)) >> 2) != 0xFF )
                                  {
                                    v895 = (unsigned __int8)~((*v892 + *(v892 - 2) + 2 * (unsigned int)*(v892 - 1)) >> 2);
                                    v892[v893] -= ~((*v892 + *(v892 - 2) + 2 * (unsigned int)*(v892 - 1)) >> 2)
                                                * (v894 - v892[v893]);
                                    v892[v893 - 1] += ((((unsigned __int64)(2155905153LL
                                                                          * v895
                                                                          * (BYTE1(lpModuleNamee) - v892[v893 - 1])) >> 32) & 0x80000000) != 0LL)
                                                    + ((int)((unsigned __int64)(2155905153LL
                                                                              * v895
                                                                              * (BYTE1(lpModuleNamee) - v892[v893 - 1])) >> 32) >> 7);
                                    v892[v893 - 2] += ((((unsigned __int64)(2155905153LL
                                                                          * v895
                                                                          * (BYTE2(lpModuleNamee) - v892[v893 - 2])) >> 32) & 0x80000000) != 0LL)
                                                    + ((int)((unsigned __int64)(2155905153LL
                                                                              * v895
                                                                              * (BYTE2(lpModuleNamee) - v892[v893 - 2])) >> 32) >> 7);
                                    v892[v893 + 1] += ((((unsigned __int64)(2155905153LL * v895 * (255 - v892[v893 + 1])) >> 32) & 0x80000000) != 0LL)
                                                    + ((int)((unsigned __int64)(2155905153LL
                                                                              * v895
                                                                              * (255 - v892[v893 + 1])) >> 32) >> 7);
                                    v891 = v1493;
                                  }
                                  v874 = 0;
                                  v892 += 4;
                                  v1493 = ++v891;
                                }
                                while ( v891 < v890 );
                                v887 = (char *)(v1371 + dwBytesl);
                                dwBytesl += v1371;
                                v889 = v1455 + v1285;
                                v1285 += v1455;
                                ++v1436;
                              }
                              while ( v1436 < v886 );
                              v87 = v1540;
                              v835 = Size;
                              v875 = lpMemj;
                            }
                            ((void (__fastcall *)(SIZE_T))off_1801CD038[0])(v1505);
                            if ( v1332 )
                              ((void (__fastcall *)(LPVOID, LPCWSTR))off_1801CD078[0])(v875, v1332);
                            goto LABEL_1186;
                          }
                          v880 = ((__int64 (__fastcall *)(__int64))off_1801CD118[0])(8LL);
                        }
                        else
                        {
                          v880 = -5723992;
                        }
                        lpModuleNamee = v880;
                        LODWORD(v1537) = v880;
                        goto LABEL_1163;
                      }
                    }
                  }
                  GetLastError();
LABEL_1106:
                  v832 = v1447;
                  goto LABEL_1107;
                }
              }
              else
              {
                v690 = 0;
              }
              if ( v587 != 1 )
                goto LABEL_846;
              goto LABEL_844;
            }
            v590 = 0LL;
            v1641 = 0LL;
            v1642 = 0LL;
            v1643 = 0LL;
            v1644 = 0LL;
            v1645 = 0LL;
            v1646 = 0LL;
            v589 = 0;
            v1480 = 0;
            v1564[0] = 0;
            if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, _QWORD, _DWORD *))off_1801CD0A0[0])(
                    8LL,
                    &v1539,
                    0LL,
                    v1564) )
              goto LABEL_702;
            v592 = (char *)operator new(2LL * v1564[0]);
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1645);
            if ( !v592 )
            {
              v1645 = 0LL;
              v589 = -2147024882;
              goto LABEL_719;
            }
            v1645 = v592;
            v593 = operator new(4LL * (v1539 + 1));
            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1646);
            if ( v593 )
            {
              v1646 = v593;
              if ( !((unsigned int (__fastcall *)(__int64, unsigned int *, char *, _DWORD *))off_1801CD0A0[0])(
                      8LL,
                      &v1539,
                      v592,
                      v1564) )
              {
LABEL_702:
                v591 = GetLastError();
                v589 = v591;
                if ( v591 > 0 )
                  v589 = (unsigned __int16)v591 | 0x80070000;
                if ( v589 >= 0 )
                  v589 = -2147467259;
LABEL_719:
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1646);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1645);
                if ( v589 < 0 )
                {
                  v607 = 0LL;
                  v606 = 0LL;
                }
                else
                {
                  v596 = 0;
                  v1396 = 0;
                  v597 = 0;
                  if ( v1480 )
                  {
                    v598 = 0LL;
                    while ( 2 )
                    {
                      v599 = 0;
                      v600 = dword_1801A4120;
                      do
                      {
                        if ( v590[v598] == *v600 )
                        {
                          v596 = v599;
                          v1396 = v599;
                          goto LABEL_728;
                        }
                        ++v599;
                        ++v600;
                      }
                      while ( v599 < 0x26 );
                      ++v597;
                      ++v598;
                      if ( v597 < v1480 )
                        continue;
                      break;
                    }
                  }
LABEL_728:
                  v601 = v596;
                  v1481 = 0;
                  if ( ((unsigned int (__fastcall *)(_QWORD, _BYTE *, __int64))off_1801CD0A8[0])(
                         dword_1801A4120[v596],
                         v1801,
                         85LL)
                    && ((int (__fastcall *)(_BYTE *, __int64, char *))off_1801CD090[0])(v1801, 88LL, v1752) > 0 )
                  {
                    v1481 = (v1753 >> 27) & 1;
                  }
                  v602 = L"Segoe UI Light";
                  v603 = v1799;
                  v604 = 19LL;
                  do
                  {
                    *v603 = (unsigned __int16 *)v602;
                    v605 = -1LL;
                    do
                      ++v605;
                    while ( v602[v605] );
                    v602 += v605 + 1;
                    ++v603;
                    --v604;
                  }
                  while ( v604 );
                  v606 = v1799[byte_180188930[3 * v601]];
                  v1321 = v606;
                  v1501 = (SIZE_T)v606;
                  dwBytesd = (char *)v1799[byte_180188930[3 * v601 + 1]];
                  v607 = (char *)v1799[byte_180188930[3 * v601 + 2]];
                  v1275 = (size_t)v607;
                  v608 = (char *)operator new(0x1C90uLL);
                  v1528 = v608;
                  v609 = 0;
                  if ( v608 )
                  {
                    v610 = 0;
                    v611 = 0;
                    v612 = v608 + 7;
                    v613 = (unsigned __int8 *)&unk_1801A2482;
                    v614 = 914LL;
                    v615 = -1;
                    do
                    {
                      v616 = v613[1] | ((*v613 | ((*(v613 - 1) | (*(v613 - 2) << 8)) << 8)) << 8);
                      v617 = v613[5] | ((v613[4] | ((v613[3] | (v613[2] << 8)) << 8)) << 8);
                      v618 = v616 ^ v609;
                      v613 += 8;
                      v619 = v618 ^ v611 ^ v617 ^ 0xAC987321;
                      v620 = (4991 * __ROL4__(v619 + 1419157410, 5) + __ROL4__(v619, 10)) ^ v618;
                      v621 = (43881 * __ROR4__(v620 + 133239679, 9) - __ROL4__(v620, 2)) ^ v619;
                      v622 = (24670 * v621 - (v621 >> 13) - 123127970) ^ v620;
                      v623 = (2033 * __ROL4__(v622 ^ 0xAB69, 6) - __ROL4__(v622, 2)) ^ v621;
                      v624 = (133239679 - (v623 ^ 0xAB69605E)) ^ v622;
                      v625 = (43881 * (v624 ^ 0x137F)) ^ __ROR4__(v624, 6) ^ v623;
                      v626 = (24670 * __ROR4__(v625 + 133239679, 15) + __ROL4__(v625, 2)) ^ v624;
                      v627 = (2033 * __ROR4__(v626 + 1419157410, 14) - __ROL4__(v626, 8)) ^ v625;
                      v628 = (4991 * __ROR4__(v627 ^ 0xAB69605E, 12)) ^ __ROR4__(v627, 10) ^ v626;
                      v629 = v627 ^ (v628 >> 10) ^ (43881 * (v628 ^ 0x7F1));
                      v630 = (2033 * (__ROR4__(~v629, 5) + 24670)) ^ v628;
                      v631 = v629 ^ (v630 - 2033) ^ 0xAB69605E;
                      v632 = ((v631 >> 2) + 4991 * __ROL4__(v629 ^ (v630 - 2033) ^ 0xAB6967AF, 2)) ^ v630;
                      v633 = (43881 * __ROR4__(v632 - 133239679, 6) + __ROL4__(v632, 7)) ^ v631;
                      v634 = (24670 * (v633 ^ 0x137F) + __ROR4__(v633, 9)) ^ v632;
                      v635 = (2033 * __ROL4__(v634 ^ 0xAB69, 5) + __ROL4__(v634, 7)) ^ v633;
                      v636 = v635 ^ v634 ^ 0xAC987321;
                      v637 = (4991 * __ROR4__(v636, 3) - 219010071) ^ v635;
                      v638 = (24670 * __ROR4__(v637 - 133239679, 1) - __ROR4__(v637, 6)) ^ v636;
                      v639 = (2033 * __ROL4__(v638 - 1419157410, 3) + __ROL4__(v638, 14)) ^ v637;
                      v640 = (4991 * __ROL4__(v639 - 1419157410, 15) - __ROR4__(v639, 14)) ^ v638;
                      v641 = (v640 >> 3) ^ (43881 * (v640 ^ 0x605E)) ^ v639;
                      v642 = v610 ^ (24670 * __ROL4__(v641 ^ 0x7F1137F, 4)) ^ __ROL4__(v641, 2) ^ v640;
                      v643 = v615 ^ v641;
                      *(v612 - 4) = v642;
                      v644 = __ROR4__(v642, 8);
                      *v612 = v643;
                      v645 = __ROR4__(v643, 8);
                      *(v612 - 5) = v644;
                      v646 = __ROR4__(v644, 8);
                      *(v612 - 1) = v645;
                      v647 = __ROR4__(v645, 8);
                      *(v612 - 6) = v646;
                      v648 = __ROR4__(v646, 8);
                      *(v612 - 2) = v647;
                      v649 = __ROR4__(v647, 8);
                      *(v612 - 7) = v648;
                      *(v612 - 3) = v649;
                      v609 = __ROR4__(v648, 8);
                      v611 = __ROR4__(v649, 8);
                      v610 = v616;
                      v615 = v617;
                      v612 += 8;
                      --v614;
                    }
                    while ( v614 );
                    v650 = 0LL;
                    v651 = 0LL;
                    v87 = v1540;
                    v652 = v1528;
                    v607 = (char *)v1275;
                    v606 = (unsigned __int16 *)v1321;
                    do
                    {
                      v653 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1528[v650]), v651);
                      v651 = v653;
                      v650 += 16LL;
                    }
                    while ( v650 < 0x1C90 );
                    v654 = _mm_xor_si128(v653, _mm_srli_si128(v653, 8));
                    v655 = _mm_xor_si128(v654, _mm_srli_si128(v654, 4));
                    v656 = _mm_xor_si128(v655, _mm_srli_si128(v655, 2));
                    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v656, _mm_srli_si128(v656, 1))) == 127LL )
                    {
                      v1642 = v1528;
                      v1643 = 7312LL;
                      v589 = 0;
                      if ( v1528 )
                        v1643 = 7312LL;
                      else
                        v652 = 0LL;
                      v657 = v1793;
                      v658 = 6LL;
                      do
                      {
                        for ( jj = 0; jj < 0x26; ++jj )
                        {
                          if ( v1396 == jj )
                            *v657 = v652;
                          v660 = -1LL;
                          do
                            ++v660;
                          while ( v652[v660] );
                          v652 += v660 + 1;
                        }
                        ++v657;
                        --v658;
                      }
                      while ( v658 );
                      v661 = operator new(0x18uLL);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1644);
                      if ( v661 )
                      {
                        v1644 = v661;
                        *(_OWORD *)v661 = 0LL;
                        v661[2] = 0LL;
                        v662 = 0;
                        v1397 = 0;
                        v663 = v661;
                        v1276 = v661;
                        v664 = v1800;
                        v1529 = v1800;
                        v1431 = (void **)v661;
                        v1643 = 7312LL;
                        while ( 2 )
                        {
                          v665 = 0LL;
                          v666 = *v664;
                          v667 = &unk_1801A41B8;
                          while ( v666 != *v667 )
                          {
                            v665 = (unsigned int)(v665 + 1);
                            ++v667;
                            if ( (unsigned int)v665 >= 6 )
                              goto LABEL_770;
                          }
                          v668 = (_BYTE *)v1793[v665];
                          v1260 = v668;
                          v669 = -1LL;
                          do
                            ++v669;
                          while ( v668[v669] );
                          v670 = ((__int64 (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))off_1801CD0C0[0])(
                                   65001LL,
                                   0LL,
                                   v668,
                                   (unsigned int)(v669 + 1),
                                   0LL,
                                   0);
                          v1497 = v670;
                          if ( !v670 )
                          {
                            v674 = GetLastError();
                            v589 = v674;
                            if ( v674 > 0 )
                              v589 = (unsigned __int16)v674 | 0x80070000;
                            if ( v589 >= 0 )
                              v589 = -2147467259;
                            goto LABEL_780;
                          }
                          v671 = operator new(2LL * v670);
                          *v1276 = v671;
                          if ( !v671 )
                            goto LABEL_756;
                          v672 = -1LL;
                          do
                            ++v672;
                          while ( v1260[v672] );
                          if ( !((unsigned int (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, LPVOID, int))off_1801CD0C0[0])(
                                  65001LL,
                                  0LL,
                                  v1260,
                                  (unsigned int)(v672 + 1),
                                  v671,
                                  v1497) )
                          {
                            v673 = GetLastError();
                            v589 = v673;
                            if ( v673 > 0 )
                              v589 = (unsigned __int16)v673 | 0x80070000;
                            if ( v589 >= 0 )
                              v589 = -2147467259;
                            goto LABEL_780;
                          }
                          v663 = v1276;
                          v662 = v1397;
LABEL_770:
                          v1397 = ++v662;
                          v664 = ++v1529;
                          v1276 = ++v663;
                          if ( v662 < 3 )
                            continue;
                          break;
                        }
                        v661 = 0LL;
                        v1644 = 0LL;
                        v1639 = v1431;
                        v1725 = v1481;
                      }
                      else
                      {
                        v661 = 0LL;
                        v1644 = 0LL;
LABEL_756:
                        v589 = -2147024882;
                      }
LABEL_780:
                      if ( v661 )
                      {
                        v1321 = (LPCWSTR)v1501;
                        v1643 = 7312LL;
                        v675 = 3LL;
                        do
                        {
                          v676 = (_WORD *)*v661;
                          if ( *v661 )
                          {
                            v677 = -1LL;
                            do
                              ++v677;
                            while ( v676[v677] );
                            memset(v676, 0, 2 * v677 + 2);
                            operator delete((void *)*v661);
                            v675 = lpModuleNamea;
                          }
                          ++v661;
                          lpModuleNamea = --v675;
                        }
                        while ( v675 );
                      }
                      v606 = (unsigned __int16 *)v1321;
                    }
                    else
                    {
                      v589 = -1073425151;
                      operator delete(v1528);
                    }
                  }
                  else
                  {
                    v589 = -2147024882;
                  }
                }
                if ( v1642 )
                  memset(v1642, 0, v1643);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1644);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1642);
                SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1641);
                if ( v589 < 0 )
                  goto LABEL_825;
                if ( v1639 )
                  v678 = v1639;
                else
                  v678 = 0LL;
                v1727 = *v678;
                if ( v1639 )
                  v679 = v1639;
                else
                  v679 = 0LL;
                v1728 = v679[1];
                if ( v1639 )
                  v680 = v1639;
                else
                  v680 = 0LL;
                v1729 = v680[2];
                v1685 = 0LL;
                LODWORD(v1685) = 16;
                if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1801CD168)(
                                      66LL,
                                      0LL,
                                      &v1685,
                                      0LL) )
                {
                  v681 = GetLastError();
                  v589 = v681;
                  if ( v681 > 0 )
                    v589 = (unsigned __int16)v681 | 0x80070000;
                  if ( v589 >= 0 )
                    v589 = -2147467259;
                  v1726 = 0;
                  goto LABEL_825;
                }
                v1726 = BYTE4(v1685) & 1;
                v682 = 42;
                v1482 = 42;
                switch ( v1346 )
                {
                  case 1:
                    v1386 = 11;
                    break;
                  case 2:
                    v1428 = 15;
                    v1386 = 11;
                    goto LABEL_814;
                  case 3:
                    v682 = 225;
                    v1386 = 225;
                    break;
                  default:
                    goto LABEL_814;
                }
                v1428 = v682;
LABEL_814:
                v683 = 96;
                v1398 = 96;
                memset_0(v1789, 0, 0xDCuLL);
                v1790 = 220;
                if ( ((unsigned int (__fastcall *)(_QWORD, __int64, _BYTE *))off_1801CD0E0[0])(0LL, 0xFFFFFFFFLL, v1789) )
                {
                  v683 = v1791;
                  *(_QWORD *)&v1684 = 0LL;
                  *((_QWORD *)&v1684 + 1) = v1792;
                  if ( v1791 < 0x60u )
                    v683 = 96;
                  v1398 = v683;
                }
                v684 = v607;
                if ( v1346 == 1 )
                  v684 = (char *)v606;
                v1322 = v684;
                memset_0(v1780, 0, 0x5CuLL);
                v589 = 0;
                v1277 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0F8[0])(0LL, 0LL, 1027LL);
                if ( v1277 )
                {
                  v1780[0] = -((int (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0B8[0])(v1428, v683, 72LL);
                  v1780[4] = 400;
                  v1781 = 5;
                  StringCchCopyW((char *)v1782, 32LL, v1322);
                  v702 = ((__int64 (__fastcall *)(_DWORD *))off_1801CD020[0])(v1780);
                  if ( v702 )
                  {
                    v1730 = (const WCHAR *)v702;
                  }
                  else
                  {
                    v589 = GetLastError();
                    v703 = v589 < 0;
                    if ( v589 > 0 )
                    {
                      v589 = (unsigned __int16)v589 | 0x80070000;
                      v703 = v589 < 0;
                    }
                    if ( !v703 )
                      v589 = -2147467259;
                  }
                  ((void (__fastcall *)(_QWORD, size_t))off_1801CD160[0])(0LL, v1277);
                }
                else
                {
                  v589 = GetLastError();
                  v685 = v589 < 0;
                  if ( v589 > 0 )
                  {
                    v589 = (unsigned __int16)v589 | 0x80070000;
                    v685 = v589 < 0;
                  }
                  if ( !v685 )
                  {
                    v589 = -2147467259;
LABEL_825:
                    v587 = v1346;
LABEL_826:
                    ((void (__fastcall *)(_QWORD, LPVOID))off_1801CD160[0])(0LL, lpMemf);
                    goto LABEL_827;
                  }
                }
                if ( v589 < 0 )
                  goto LABEL_825;
                if ( v1346 == 1 )
                  v607 = (char *)v606;
                memset_0(v1783, 0, 0x5CuLL);
                v589 = 0;
                v704 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0F8[0])(0LL, 0LL, 1027LL);
                if ( !v704 )
                {
                  v705 = GetLastError();
                  v589 = v705;
                  if ( v705 > 0 )
                    v589 = (unsigned __int16)v705 | 0x80070000;
                  if ( v589 < 0 )
                    goto LABEL_825;
                  goto LABEL_874;
                }
                v1783[0] = -((int (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0B8[0])(v1386, v683, 72LL);
                v1783[4] = 400;
                v1784 = 5;
                StringCchCopyW((char *)v1785, 32LL, v607);
                v706 = ((__int64 (__fastcall *)(_DWORD *))off_1801CD020[0])(v1783);
                v707 = 0;
                if ( v706 )
                {
                  v1731 = (const WCHAR *)v706;
                }
                else
                {
                  v708 = GetLastError();
                  v589 = v708;
                  if ( v708 > 0 )
                    v589 = (unsigned __int16)v708 | 0x80070000;
                  if ( v589 >= 0 )
                    v589 = -2147467259;
                }
                ((void (__fastcall *)(_QWORD, __int64))off_1801CD160[0])(0LL, v704);
                if ( v589 < 0 )
                  goto LABEL_825;
                v709 = 0;
                v710 = 0;
                if ( v1346 != 1 )
                {
                  if ( v1346 == 2 )
                  {
                    v709 = SDWORD2(v1684) / 4;
                    v710 = 0;
LABEL_886:
                    *((_QWORD *)&v1745 + 1) = __PAIR64__(v710, v709);
                    if ( v1346 == 1 )
                    {
                      v711 = 150;
                      v1386 = 32;
                    }
                    else
                    {
                      if ( (unsigned int)(v1346 - 2) >= 2 )
                      {
                        v1482 = v1539;
                        v707 = v1539;
                        v711 = v1428;
                        goto LABEL_893;
                      }
                      v711 = 0;
                      v1482 = 0;
                      v1386 = 0;
                    }
                    v1428 = v711;
LABEL_893:
                    v712 = v709 - v711 - v707;
                    DWORD2(v1735) = v712;
                    DWORD2(v1734) = v712;
                    v713 = v1727;
                    v589 = 0;
                    v1324 = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, const WCHAR *))off_1801CD078[0])(lpMemf, v1730);
                    if ( !((unsigned int (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1801CD0D8[0])(
                            lpMemf,
                            v713,
                            0xFFFFFFFFLL,
                            &v1734,
                            3152,
                            0LL) )
                      v589 = -2147467259;
                    if ( v1324 )
                      ((void (__fastcall *)(LPVOID, LPCWSTR))off_1801CD078[0])(lpMemf, v1324);
                    if ( v589 < 0 )
                      goto LABEL_825;
                    v714 = v1728;
                    v589 = 0;
                    v1325 = (LPCWSTR)((__int64 (__fastcall *)(LPVOID, const WCHAR *))off_1801CD078[0])(lpMemf, v1731);
                    if ( !((unsigned int (__fastcall *)(LPVOID, void *, __int64, __int128 *, int, _QWORD))off_1801CD0D8[0])(
                            lpMemf,
                            v714,
                            0xFFFFFFFFLL,
                            &v1735,
                            3152,
                            0LL) )
                      v589 = -2147467259;
                    if ( v1325 )
                      ((void (__fastcall *)(LPVOID, LPCWSTR))off_1801CD078[0])(lpMemf, v1325);
                    if ( v589 < 0 )
                      goto LABEL_825;
                    if ( (unsigned int)(v1346 - 2) <= 1 )
                    {
                      v712 = DWORD2(v1735);
                      if ( SDWORD2(v1734) > SDWORD2(v1735) )
                        v712 = DWORD2(v1734);
                    }
                    if ( v1725 )
                    {
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1801CD150[0])(
                        &v1734,
                        v712 + v707 - DWORD2(v1734),
                        v1482);
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1801CD150[0])(
                        &v1735,
                        v712 + v707 - DWORD2(v1735),
                        HIDWORD(v1734) + v1386);
                    }
                    else
                    {
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1801CD150[0])(&v1734, v1428, v1482);
                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1801CD150[0])(
                        &v1735,
                        v1428,
                        HIDWORD(v1734) + v1386);
                    }
                    if ( (unsigned int)(v1346 - 2) <= 1 )
                    {
                      *((_QWORD *)&v1745 + 1) = __PAIR64__(HIDWORD(v1735), v712);
                      v1733 = -5723992;
                    }
                    else if ( v1346 == 1 )
                    {
                      v1733 = 0xFFFFFF;
                      memset_0(v1786, 0, 0x5CuLL);
                      v589 = 0;
                      v715 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0F8[0])(0LL, 0LL, 1027LL);
                      if ( v715 )
                      {
                        v717 = v1398;
                        v1786[0] = -((int (__fastcall *)(__int64, _QWORD))off_1801CD0B8[0])(11LL, v1398);
                        v1786[4] = 400;
                        v1787 = 5;
                        StringCchCopyW((char *)v1788, 32LL, dwBytesd);
                        v718 = ((__int64 (__fastcall *)(_DWORD *))off_1801CD020[0])(v1786);
                        if ( v718 )
                        {
                          v1732 = v718;
                        }
                        else
                        {
                          v589 = GetLastError();
                          v719 = v589 < 0;
                          if ( v589 > 0 )
                          {
                            v589 = (unsigned __int16)v589 | 0x80070000;
                            v719 = v589 < 0;
                          }
                          if ( !v719 )
                            v589 = -2147467259;
                        }
                        ((void (__fastcall *)(_QWORD, __int64))off_1801CD160[0])(0LL, v715);
                      }
                      else
                      {
                        v716 = GetLastError();
                        v589 = v716;
                        if ( v716 > 0 )
                          v589 = (unsigned __int16)v716 | 0x80070000;
                        if ( v589 >= 0 )
                        {
LABEL_874:
                          v589 = -2147467259;
                          goto LABEL_825;
                        }
                        v717 = v1398;
                      }
                      if ( v589 < 0 )
                        goto LABEL_825;
                      v1738 = v712;
                      v720 = v1729;
                      v589 = 0;
                      v721 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1801CD078[0])(lpMemf, v1732);
                      if ( !((unsigned int (__fastcall *)(LPVOID, void *, __int64, unsigned int *, int, _QWORD))off_1801CD0D8[0])(
                              lpMemf,
                              v720,
                              0xFFFFFFFFLL,
                              &v1736,
                              1120,
                              0LL) )
                        v589 = -2147467259;
                      if ( v721 )
                        ((void (__fastcall *)(LPVOID, __int64))off_1801CD078[0])(lpMemf, v721);
                      if ( v589 < 0 )
                        goto LABEL_825;
                      v722 = v1738 + 24;
                      if ( (int)(v1738 + 24) < 90 )
                        v722 = 90;
                      v1738 = v722;
                      v1739 = 32;
                      v1736 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0B8[0])(v1736, v717, 96LL);
                      v1737 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0B8[0])(v1737, v717, 96LL);
                      v1738 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0B8[0])(v1738, v717, 96LL);
                      v1739 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1801CD0B8[0])(v1739, v717, 96LL);
                      if ( v1725 )
                      {
                        v723 = (unsigned int)v1734;
                        if ( (int)v1734 >= (int)v1735 )
                          v723 = (unsigned int)v1735;
                      }
                      else
                      {
                        v724 = DWORD2(v1734);
                        if ( SDWORD2(v1734) <= SDWORD2(v1735) )
                          v724 = DWORD2(v1735);
                        v723 = v1736 + v724 - v1738;
                      }
                      ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_1801CD150[0])(
                        &v1736,
                        v723,
                        (unsigned int)(HIDWORD(v1735) + 36));
                    }
                    v725 = v1725;
                    v726 = HIDWORD(v1745);
                    v727 = DWORD2(v1745);
                    v587 = v1346;
                    switch ( v1346 )
                    {
                      case 1:
                        *(_QWORD *)&v1745 = 0LL;
                        break;
                      case 2:
                        v1757 = 0LL;
                        v1758 = 0LL;
                        v1759 = 0LL;
                        v729 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1801CD148[0])(0LL, 1LL);
                        LODWORD(v1757) = 40;
                        if ( ((unsigned int (__fastcall *)(__int64, __int128 *))off_1801CD108[0])(v729, &v1757) )
                        {
                          ((void (__fastcall *)(_QWORD, char *))off_1801CD140[0])(0LL, (char *)&v1758 + 4);
                          ((void (__fastcall *)(_QWORD, char *))off_1801CD140[0])(0LL, (char *)&v1758 + 12);
                          if ( v725 )
                            v730 = DWORD1(v1758) + 5 * HIDWORD(v1758) / 100;
                          else
                            v730 = 95 * (HIDWORD(v1758) - v727) / 100;
                          LODWORD(v1745) = v730;
                          DWORD1(v1745) = 95 * ((int)v1759 - v726) / 100;
                        }
                        break;
                      case 3:
                        v1754 = 0LL;
                        v1755 = 0LL;
                        v1756 = 0LL;
                        v728 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1801CD148[0])(0LL, 1LL);
                        LODWORD(v1754) = 40;
                        if ( ((unsigned int (__fastcall *)(__int64, __int128 *))off_1801CD108[0])(v728, &v1754) )
                        {
                          ((void (__fastcall *)(_QWORD, char *))off_1801CD140[0])(0LL, (char *)&v1755 + 4);
                          ((void (__fastcall *)(_QWORD, char *))off_1801CD140[0])(0LL, (char *)&v1755 + 12);
                          LODWORD(v1745) = 50 * (HIDWORD(v1755) - v727) / 100;
                          DWORD1(v1745) = 50 * ((int)v1756 - v726) / 100;
                        }
                        break;
                    }
                    v589 = 0;
                    goto LABEL_826;
                  }
                  if ( v1346 != 3 )
                    goto LABEL_886;
                }
                v709 = DWORD2(v1684);
                v710 = HIDWORD(v1684);
                goto LABEL_886;
              }
              v590 = v593;
              if ( v1539 )
              {
                for ( kk = 0; kk < v1539; ++kk )
                {
                  *v593 = ((__int64 (__fastcall *)(char *, _QWORD))off_1801CD0B0[0])(v592, 0LL);
                  v595 = -1LL;
                  do
                    ++v595;
                  while ( *(_WORD *)&v592[2 * v595] );
                  v592 += 2 * v595 + 2;
                  ++v593;
                }
                v589 = 0;
              }
              *v593 = 1033;
              v1641 = v590;
              v1480 = v1539 + 1;
            }
            else
            {
              v589 = -2147024882;
            }
            v1646 = 0LL;
            goto LABEL_719;
          }
          *((_BYTE *)lpMeme + 823) = 0;
          memset_0(&unk_1801CFE50, 0, 0x60uLL);
          if ( !*(_BYTE *)lpMeme )
            goto LABEL_692;
          v1640 = lpMeme;
          while ( 1 )
          {
            v576 = v572;
            v577 = -1LL;
            do
              ++v577;
            while ( v572[v577] );
            v578 = &v572[v577];
            v579 = (char *)&unk_1801CFE50 + 24 * v1395;
            if ( !GetModuleHandleExW(0, v576, (HMODULE *)v579) )
              break;
            v573 = 0;
            if ( **(_WORD **)v579 == 23117
              && (v580 = *(int *)(*(_QWORD *)v579 + 60LL), (unsigned int)v580 < 0x10000000)
              && (v581 = *(_QWORD *)v579 + v580, v581 >= *(_QWORD *)v579)
              && *(_DWORD *)v581 == 17744 )
            {
              if ( ((*(_WORD *)(v581 + 24) - 267) & 0xFEFF) != 0 )
              {
                v573 = -1073741811;
              }
              else
              {
                *(_QWORD *)(v579 + 12) = *(_QWORD *)(v581 + 136);
                *((_DWORD *)v579 + 2) = *(_DWORD *)(v581 + 80);
              }
            }
            else
            {
              v573 = -1073741701;
            }
            v1345 = *(_DWORD *)(v578 + 1);
            v572 = v578 + 3;
            v582 = 0;
            for ( mm = 0; v582 < v1345; mm = v582 )
            {
              v583 = (const CHAR *)v572;
              v584 = -1LL;
              do
                ++v584;
              while ( *((_BYTE *)v572 + v584) );
              v572 = (WCHAR *)((char *)v572 + v584 + 1);
              if ( v573 >= 0 )
              {
                v585 = GetProcAddress(*(HMODULE *)v579, v583);
                if ( !v585 )
                  goto LABEL_691;
                off_1801CD000[(unsigned int)v1537] = v585;
                v582 = mm;
              }
              LODWORD(v1537) = v1537 + 1;
              ++v582;
            }
            ++v1395;
            if ( !*(_BYTE *)v572 )
              goto LABEL_691;
          }
          v573 = -1073741702;
LABEL_691:
          v572 = v1640;
          if ( v1640 )
          {
LABEL_692:
            v586 = GetProcessHeap();
            HeapFree(v586, 0, v572);
          }
          if ( v573 < 0 )
            goto LABEL_663;
          v528 = dword_1801CF980;
        }
        dword_1801CF980 = v528 + 1;
        goto LABEL_696;
      }
      *((_BYTE *)v1320 + 823) = 0;
      memset_0(&unk_1801CFE50, 0, 0x60uLL);
      if ( !*(_BYTE *)v1320 )
        goto LABEL_649;
      v1638 = v1320;
      while ( 1 )
      {
        v517 = v513;
        v518 = -1LL;
        do
          ++v518;
        while ( v513[v518] );
        v519 = &v513[v518];
        v520 = (char *)&unk_1801CFE50 + 24 * (unsigned int)v1537;
        if ( !GetModuleHandleExW(0, v517, (HMODULE *)v520) )
          break;
        v514 = 0;
        if ( **(_WORD **)v520 == 23117
          && (v521 = *(int *)(*(_QWORD *)v520 + 60LL), (unsigned int)v521 < 0x10000000)
          && (v522 = *(_QWORD *)v520 + v521, v522 >= *(_QWORD *)v520)
          && *(_DWORD *)v522 == 17744 )
        {
          if ( ((*(_WORD *)(v522 + 24) - 267) & 0xFEFF) != 0 )
          {
            v514 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v520 + 12) = *(_QWORD *)(v522 + 136);
            *((_DWORD *)v520 + 2) = *(_DWORD *)(v522 + 80);
          }
        }
        else
        {
          v514 = -1073741701;
        }
        v1385 = *(_DWORD *)(v519 + 1);
        v513 = v519 + 3;
        v523 = 0;
        for ( nn = 0; v523 < v1385; nn = v523 )
        {
          v524 = (const CHAR *)v513;
          v525 = -1LL;
          do
            ++v525;
          while ( *((_BYTE *)v513 + v525) );
          v513 = (WCHAR *)((char *)v513 + v525 + 1);
          if ( v514 >= 0 )
          {
            v526 = GetProcAddress(*(HMODULE *)v520, v524);
            if ( !v526 )
              goto LABEL_647;
            off_1801CD000[v1427] = v526;
            v523 = nn;
          }
          ++v1427;
          ++v523;
        }
        LODWORD(v1537) = v1537 + 1;
        v467 = 0;
        if ( !*(_BYTE *)v513 )
          goto LABEL_648;
      }
      v514 = -1073741702;
LABEL_647:
      v467 = 0;
LABEL_648:
      v513 = v1638;
      if ( v1638 )
      {
LABEL_649:
        v527 = GetProcessHeap();
        HeapFree(v527, 0, v513);
      }
      if ( v514 < 0 )
        goto LABEL_619;
      v469 = dword_1801CF980;
    }
    dword_1801CF980 = v469 + 1;
    goto LABEL_653;
  }
LABEL_1583:
  v1536 = 0LL;
  v1626 = v1565;
  v1226 = v1566;
LABEL_1585:
  while ( _InterlockedCompareExchange(&dword_1801CFEF8, 1, 0) )
    ;
  v1227 = dword_1801CF980;
  if ( dword_1801CF980 > 0 )
  {
    --dword_1801CF980;
    if ( v1227 == 1 )
    {
      v1228 = (HMODULE *)&unk_1801CFE50;
      v1229 = 4LL;
      do
      {
        if ( *v1228 )
          FreeLibrary(*v1228);
        v1228 += 3;
        --v1229;
      }
      while ( v1229 );
      memset_0(&unk_1801CFE50, 0, 0x60uLL);
      memcpy_0(off_1801CD000, off_180171540, 0x170uLL);
    }
  }
  _InterlockedExchange(&dword_1801CFEF8, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1536);
  v1 = v1619;
  if ( v87 >= 0 && v1226 == 4 )
    *v1620 = *v1626;
LABEL_5:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1626);
  return v1;
}
