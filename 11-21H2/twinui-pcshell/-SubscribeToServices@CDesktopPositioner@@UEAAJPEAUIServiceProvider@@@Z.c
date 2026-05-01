/*
 * XREFs of ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D6D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800BCF8C (-IsUserOOBE@@YA_NXZ.c)
 *     RtlULongLongAdd @ 0x1800CB900 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1800CB920 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1800CB940 (StringCchLengthW.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800E80F4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x1801446FC (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x180144730 (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18015A450 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingShowMaximized@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015AF38 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ShellWindowingShowMaximized@@@details@wil.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180171E08 (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1801802F4 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
 *     wcscmp_0 @ 0x1801EACD7 (wcscmp_0.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVCDesktopPositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVCDesktopPositioner@@@Z @ 0x1804FA564 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_1804FA564.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x1805F3EA4 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x1805F3ED4 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::SubscribeToServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  struct IServiceProvider *v2; // rsi
  __int64 *v3; // r13
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  _QWORD *v5; // r12
  int v6; // edi
  HRESULT (__stdcall *v7)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 **v12; // r15
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // edi
  __int64 *v21; // r14
  __int64 *v22; // rcx
  __int64 v23; // rax
  _DWORD *v24; // r15
  HRESULT (__stdcall *v25)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64, __int64 **); // rdi
  int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // rbx
  int (__fastcall *v31)(__int64, _QWORD, __int64 *); // rdi
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  __int64 v37; // rdx
  int v38; // eax
  void *v39; // rsi
  _BYTE *v40; // r15
  int v41; // r14d
  int v42; // ecx
  int v43; // ebx
  int v44; // r11d
  _BYTE *v45; // r12
  unsigned __int8 *v46; // r13
  __int64 v47; // rsi
  int v48; // r10d
  int v49; // r9d
  int v50; // r11d
  unsigned int v51; // r8d
  int v52; // r11d
  unsigned int v53; // r8d
  int v54; // r11d
  int v55; // r8d
  unsigned int v56; // r11d
  int v57; // r8d
  int v58; // r11d
  int v59; // r8d
  unsigned int v60; // r11d
  int v61; // r8d
  int v62; // r11d
  unsigned int v63; // ebx
  int v64; // r11d
  int v65; // ebx
  int v66; // r11d
  int v67; // ebx
  unsigned int v68; // edi
  int v69; // ebx
  int v70; // edi
  int v71; // ebx
  unsigned int v72; // edi
  int v73; // ebx
  int v74; // r11d
  int v75; // ebx
  int v76; // r11d
  int v77; // ebx
  int v78; // r11d
  int v79; // ebx
  int v80; // r11d
  int v81; // ebx
  unsigned __int64 v82; // rax
  char v83; // cl
  int v84; // r14d
  HANDLE ProcessHeap; // rax
  HMODULE *v86; // rdi
  __int64 v87; // rbx
  const WCHAR *v88; // rdi
  unsigned int v89; // r12d
  const WCHAR *v90; // rdx
  __int64 v91; // rax
  const WCHAR *v92; // rdi
  char *v93; // rbx
  __int64 v94; // rcx
  unsigned __int64 v95; // rcx
  unsigned int v96; // r13d
  unsigned int i; // r15d
  const CHAR *v98; // rdx
  __int64 v99; // rax
  void **ProcAddress; // rdx
  int v101; // eax
  int v102; // esi
  signed int v103; // edi
  __int64 v104; // r14
  __int64 v105; // r9
  wchar_t *v106; // rbx
  wchar_t *v107; // r8
  signed int LastError; // eax
  bool v109; // sf
  HDESK (__fastcall *v110)(WARBIRD_DELAY_LOAD *__hidden, unsigned int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v112; // r14
  bool v113; // sf
  __int64 v114; // r9
  wchar_t *v115; // rbx
  wchar_t *v116; // r8
  signed int v117; // eax
  HANDLE CurrentProcess; // rax
  int v119; // ebx
  __int64 v120; // r12
  HLOCAL v121; // rdi
  int v122; // r15d
  int v123; // esi
  int v124; // eax
  HMODULE *v125; // rdi
  __int64 v126; // rbx
  WCHAR *v127; // r13
  HANDLE v128; // rax
  WCHAR *v129; // r12
  HANDLE v130; // rax
  wchar_t *v131; // r13
  int v132; // edi
  __int64 v133; // rcx
  int v134; // eax
  __int64 v135; // r10
  int v136; // eax
  int v137; // r11d
  int v138; // eax
  int v139; // r11d
  int v140; // eax
  size_t v141; // rdx
  int v142; // r11d
  int v143; // eax
  int v144; // r11d
  __int64 v145; // rcx
  int v146; // eax
  int v147; // r11d
  int v148; // eax
  int v149; // r11d
  unsigned int v150; // edi
  HANDLE v151; // rax
  _DWORD *v152; // rax
  _DWORD *v153; // rdi
  LPVOID v154; // r11
  int v155; // r10d
  LPVOID v156; // r11
  int v157; // r10d
  LPVOID v158; // r11
  int v159; // r10d
  size_t v160; // rdx
  int v161; // r10d
  _OWORD *v162; // rax
  int v163; // r10d
  int *v164; // rdi
  int v165; // r9d
  unsigned int v166; // r10d
  int v167; // r10d
  int *v168; // rdi
  int v169; // r9d
  unsigned int v170; // r10d
  int *v171; // rdi
  int v172; // r9d
  unsigned int v173; // r10d
  unsigned int v174; // r10d
  LPVOID v175; // r11
  int *v176; // rdi
  int v177; // r11d
  __int64 v178; // r9
  LPVOID v179; // r11
  int v180; // r10d
  int v181; // r10d
  int *v182; // rdi
  int v183; // r9d
  unsigned int v184; // r10d
  int *v185; // rdi
  int v186; // r9d
  unsigned int v187; // r10d
  void *v188; // rbx
  HANDLE v189; // rax
  void *v190; // rbx
  HANDLE v191; // rax
  HANDLE v192; // rax
  HANDLE v193; // rax
  DWORD ModuleFileNameW; // eax
  WCHAR *v195; // r13
  unsigned int v196; // ecx
  unsigned int v197; // edi
  unsigned int v198; // r10d
  unsigned int v199; // r10d
  unsigned int v200; // r10d
  unsigned int v201; // r10d
  unsigned __int8 *v202; // r11
  unsigned __int8 *v203; // r13
  unsigned int v204; // edi
  WCHAR *v205; // rbx
  unsigned int *v206; // r12
  _QWORD *v207; // r11
  int v208; // r15d
  unsigned int v209; // ecx
  unsigned int v210; // edi
  HANDLE v211; // rax
  char *v212; // rax
  char *v213; // rdi
  unsigned int v214; // r10d
  void *v215; // rcx
  HANDLE v216; // rax
  unsigned __int64 v217; // r15
  char *v218; // rdx
  unsigned __int8 v219; // al
  unsigned __int64 j; // rcx
  unsigned __int8 *v221; // rdi
  char *v222; // rcx
  unsigned int v223; // r10d
  int v224; // r11d
  unsigned int v225; // edx
  int v226; // r11d
  unsigned int v227; // ecx
  char v228; // r14
  int v229; // r8d
  unsigned int v230; // r11d
  unsigned int v231; // ecx
  unsigned int v232; // r8d
  unsigned int v233; // r9d
  _BYTE *v234; // rsi
  char v235; // r12
  int v236; // r15d
  _BYTE *v237; // rax
  unsigned __int8 *v238; // rdx
  SIZE_T v239; // r14
  int v240; // r12d
  int v241; // ebx
  int v242; // r9d
  int v243; // r8d
  int v244; // r11d
  int v245; // r10d
  int v246; // r11d
  int v247; // r10d
  int v248; // r11d
  unsigned int v249; // r10d
  int v250; // r11d
  int v251; // r10d
  int v252; // r11d
  int v253; // r10d
  int v254; // r11d
  int v255; // r10d
  unsigned int v256; // r11d
  unsigned int v257; // r10d
  int v258; // r11d
  int v259; // r10d
  int v260; // r11d
  int v261; // r10d
  int v262; // r11d
  int v263; // r10d
  int v264; // r11d
  int v265; // r10d
  unsigned int v266; // r11d
  int v267; // r10d
  unsigned int v268; // ecx
  int v269; // r10d
  int v270; // r11d
  int v271; // r10d
  int v272; // r11d
  int v273; // r10d
  int v274; // r11d
  int v275; // r10d
  int v276; // r11d
  HANDLE v277; // rax
  unsigned int *v278; // rax
  unsigned int *v279; // rdi
  int v280; // r15d
  _QWORD *v281; // rdi
  HANDLE v282; // rax
  HANDLE v283; // rax
  HANDLE v284; // rax
  HANDLE v285; // rax
  HANDLE v286; // rax
  int v287; // r10d
  int v288; // r15d
  int v289; // r10d
  HANDLE v290; // rax
  void *v291; // rax
  HANDLE v292; // rax
  _OWORD *v293; // rax
  HANDLE v294; // rax
  _QWORD *v295; // rax
  HANDLE v296; // rax
  HANDLE v297; // rax
  HANDLE v298; // rax
  HANDLE v299; // rax
  unsigned int v300; // edi
  HANDLE v301; // rax
  _DWORD *v302; // rax
  void *v303; // rdi
  void *v304; // rcx
  void *v305; // rcx
  HANDLE v306; // rax
  int v307; // eax
  int v308; // ecx
  int v309; // r10d
  unsigned int v310; // eax
  unsigned int v311; // r9d
  int v312; // r11d
  HANDLE v313; // rax
  void *v314; // rdi
  HANDLE v315; // rax
  void *v316; // rdi
  HANDLE v317; // rax
  void *v318; // rdi
  HANDLE v319; // rax
  HANDLE v320; // rax
  HANDLE v321; // rax
  HANDLE v322; // rax
  _QWORD *v323; // rdi
  void *v324; // rbx
  HANDLE v325; // rax
  void *v326; // rbx
  HANDLE v327; // rax
  void *v328; // rbx
  HANDLE v329; // rax
  HANDLE v330; // rax
  HANDLE v331; // rax
  LPVOID v332; // rcx
  unsigned int v333; // r11d
  int v334; // r9d
  int v335; // r10d
  int v336; // r10d
  unsigned int v337; // eax
  int v338; // r10d
  int v339; // r9d
  int v340; // r15d
  unsigned int v341; // edi
  HANDLE v342; // rax
  unsigned int *v343; // rax
  void *v344; // rdi
  FARPROC v345; // rax
  int v346; // eax
  unsigned int v347; // r9d
  unsigned __int8 *v348; // rdx
  WCHAR *v349; // r8
  signed int v350; // eax
  __int64 v351; // rcx
  unsigned int *v352; // r10
  unsigned int *v353; // rbx
  SIZE_T v354; // r15
  unsigned int *v355; // r10
  unsigned int v356; // ebx
  unsigned int v357; // r11d
  SIZE_T v358; // r13
  unsigned int v359; // r10d
  HANDLE v360; // rax
  _QWORD *v361; // rbx
  unsigned int *v362; // rax
  HANDLE v363; // rax
  void *v364; // rax
  HANDLE v365; // rax
  void *v366; // rax
  HANDLE v367; // rax
  void *v368; // rax
  int v369; // r15d
  _QWORD *v370; // rax
  HANDLE v371; // rax
  HANDLE v372; // rax
  HANDLE v373; // rax
  HANDLE v374; // rax
  _QWORD *v375; // rax
  unsigned int *v376; // r9
  _QWORD *v377; // rdi
  void *v378; // rbx
  HANDLE v379; // rax
  void *v380; // rbx
  HANDLE v381; // rax
  void *v382; // rbx
  HANDLE v383; // rax
  HANDLE v384; // rax
  unsigned __int64 v385; // r15
  _DWORD *v386; // r9
  unsigned __int8 v387; // dl
  unsigned __int8 *v388; // rax
  _DWORD *v389; // rcx
  unsigned int v390; // r8d
  unsigned int v391; // ecx
  char v392; // r11
  unsigned __int8 *v393; // r14
  int v394; // r15d
  int v395; // edx
  int v396; // r10d
  int v397; // ecx
  int v398; // esi
  unsigned int v399; // eax
  _BYTE *v400; // rdi
  char v401; // r10
  unsigned int v402; // r10d
  unsigned int v403; // r11d
  unsigned __int64 v404; // rdi
  int v405; // r9d
  _BYTE *v406; // r12
  unsigned __int8 *v407; // rbx
  int v408; // esi
  int v409; // r15d
  unsigned __int64 v410; // rdx
  int v411; // r13d
  int v412; // r8d
  int v413; // edi
  int v414; // r10d
  unsigned int v415; // r11d
  int v416; // r10d
  unsigned int v417; // r11d
  int v418; // r10d
  int v419; // r11d
  unsigned int v420; // r10d
  int v421; // r11d
  int v422; // r10d
  int v423; // r11d
  unsigned int v424; // r10d
  int v425; // r11d
  int v426; // r10d
  unsigned int v427; // r11d
  int v428; // r10d
  int v429; // r11d
  int v430; // r10d
  int v431; // r11d
  unsigned int v432; // r10d
  int v433; // r11d
  int v434; // r10d
  int v435; // r11d
  unsigned int v436; // r10d
  int v437; // r11d
  int v438; // r10d
  int v439; // r11d
  int v440; // r10d
  int v441; // r11d
  int v442; // r10d
  int v443; // r11d
  int v444; // r10d
  int v445; // r11d
  unsigned __int64 k; // rax
  void *v447; // rdi
  void *v448; // r10
  unsigned __int8 *v449; // r9
  void *v450; // r10
  WCHAR *v451; // rcx
  unsigned __int8 *v452; // r9
  void *v453; // r10
  unsigned __int8 *v454; // r9
  void *v455; // r10
  unsigned __int64 v456; // r11
  unsigned __int64 v457; // r10
  int *v458; // r10
  unsigned __int64 v459; // r11
  unsigned __int64 v460; // r10
  void *v461; // r9
  HANDLE v462; // rax
  size_t v463; // rdi
  void *v464; // rcx
  _DWORD *v465; // rbx
  int v466; // r9d
  _DWORD *v467; // rax
  int v468; // ebx
  unsigned int v469; // edi
  int v470; // edi
  _DWORD *v471; // rax
  int *v472; // rcx
  unsigned int v473; // edi
  unsigned int v474; // r10d
  int v475; // r11d
  int v476; // edi
  int *v477; // rax
  LPVOID v478; // rcx
  unsigned int v479; // edi
  unsigned int v480; // r10d
  int v481; // r11d
  int v482; // r11d
  LPVOID v483; // r10
  unsigned int *v484; // rcx
  unsigned int m; // edi
  unsigned int v486; // r12d
  int v487; // r9d
  unsigned int v488; // edi
  unsigned int *v489; // rax
  unsigned int *v490; // rcx
  unsigned int v491; // edi
  unsigned int v492; // r13d
  unsigned int v493; // r12d
  int v494; // r9d
  unsigned int v495; // edi
  int v496; // eax
  const void *v497; // r10
  size_t v498; // r11
  unsigned int *v499; // rax
  unsigned int v500; // edi
  int v501; // eax
  WCHAR *v502; // r12
  char *v503; // rax
  int v504; // ecx
  int v505; // r14d
  int v506; // ebx
  _BYTE *v507; // rsi
  unsigned __int8 *v508; // rdi
  __int64 v509; // r12
  int v510; // r11d
  int v511; // r10d
  int v512; // ebx
  unsigned int v513; // r9d
  int v514; // ebx
  unsigned int v515; // r9d
  int v516; // ebx
  int v517; // r9d
  unsigned int v518; // ebx
  int v519; // r9d
  int v520; // ebx
  int v521; // r9d
  unsigned int v522; // ebx
  int v523; // r9d
  int v524; // ebx
  unsigned int v525; // r14d
  int v526; // ebx
  int v527; // r14d
  int v528; // ebx
  int v529; // r14d
  unsigned int v530; // r8d
  int v531; // r14d
  int v532; // r8d
  int v533; // r14d
  unsigned int v534; // r8d
  int v535; // r14d
  unsigned int v536; // ebx
  int v537; // r14d
  int v538; // ebx
  int v539; // r14d
  int v540; // ebx
  int v541; // r14d
  int v542; // ebx
  int v543; // r14d
  unsigned __int64 v544; // rax
  char v545; // cl
  int v546; // r13d
  HANDLE v547; // rax
  HMODULE *v548; // rbx
  __int64 v549; // r12
  WCHAR *v550; // rbx
  const WCHAR *v551; // rdx
  __int64 v552; // rax
  WCHAR *v553; // rbx
  HMODULE *v554; // r8
  __int64 v555; // rcx
  unsigned __int64 v556; // rcx
  unsigned int v557; // ecx
  const CHAR *v558; // rdx
  __int64 v559; // rax
  void **v560; // rax
  int v561; // eax
  WCHAR *v562; // r12
  char *v563; // rax
  int v564; // r13d
  int v565; // ecx
  int v566; // esi
  int v567; // ebx
  _BYTE *v568; // r14
  unsigned __int8 *v569; // rdi
  __int64 v570; // r12
  int v571; // r11d
  int v572; // r10d
  int v573; // ebx
  unsigned int v574; // r9d
  int v575; // ebx
  unsigned int v576; // r9d
  int v577; // ebx
  int v578; // r9d
  unsigned int v579; // ebx
  int v580; // r9d
  int v581; // ebx
  int v582; // r9d
  unsigned int v583; // ebx
  int v584; // r9d
  int v585; // ebx
  unsigned int v586; // esi
  int v587; // ebx
  int v588; // esi
  int v589; // ebx
  int v590; // esi
  unsigned int v591; // r8d
  int v592; // esi
  int v593; // r8d
  int v594; // esi
  unsigned int v595; // r8d
  int v596; // esi
  int v597; // ebx
  int v598; // esi
  int v599; // ebx
  int v600; // esi
  int v601; // ebx
  int v602; // esi
  int v603; // ebx
  int v604; // esi
  unsigned __int64 v605; // rax
  char v606; // cl
  int v607; // r13d
  HANDLE v608; // rax
  HMODULE *v609; // rbx
  __int64 v610; // r12
  WCHAR *v611; // rbx
  const WCHAR *v612; // rdx
  __int64 v613; // rax
  WCHAR *v614; // rbx
  HMODULE *v615; // r8
  __int64 v616; // rcx
  unsigned __int64 v617; // rcx
  unsigned int v618; // ecx
  const CHAR *v619; // rdx
  __int64 v620; // rax
  void **v621; // rax
  int v622; // r13d
  signed int v623; // eax
  signed int v624; // r12d
  _DWORD *v625; // rdi
  signed int v626; // eax
  char *v627; // rbx
  _DWORD *v628; // r13
  _DWORD *v629; // rdi
  unsigned int kk; // r14d
  __int64 v631; // rax
  unsigned int v632; // r10d
  unsigned int v633; // r9d
  __int64 v634; // r8
  unsigned int v635; // ecx
  unsigned int *v636; // rdx
  __int64 v637; // rbx
  const wchar_t *v638; // rcx
  const wchar_t **v639; // rdx
  __int64 v640; // rdi
  __int64 v641; // rax
  const wchar_t *v642; // rbx
  char *v643; // rax
  int v644; // r11d
  unsigned __int64 v645; // r13
  int v646; // r14d
  int v647; // ebx
  _BYTE *v648; // r12
  unsigned __int8 *v649; // r13
  __int64 v650; // rsi
  int v651; // r10d
  int v652; // r9d
  int v653; // r8d
  int v654; // r11d
  unsigned int v655; // edi
  int v656; // r11d
  unsigned int v657; // edi
  int v658; // r11d
  int v659; // edi
  unsigned int v660; // r11d
  int v661; // edi
  int v662; // r11d
  int v663; // edi
  unsigned int v664; // r11d
  int v665; // edi
  int v666; // r11d
  unsigned int v667; // ebx
  int v668; // r11d
  int v669; // ebx
  int v670; // r11d
  int v671; // ebx
  unsigned int v672; // r11d
  int v673; // ebx
  int v674; // r11d
  int v675; // ebx
  unsigned int v676; // r11d
  int v677; // ebx
  int v678; // r11d
  int v679; // ebx
  int v680; // r11d
  int v681; // ebx
  int v682; // r11d
  int v683; // ebx
  int v684; // r11d
  int v685; // ebx
  unsigned __int64 v686; // rax
  __m128i v687; // xmm1
  WCHAR *v688; // r10
  __m128i v689; // xmm0
  __m128i v690; // xmm1
  __m128i v691; // xmm1
  __m128i v692; // xmm1
  WCHAR **v693; // rdx
  __int64 v694; // rdi
  unsigned int jj; // ecx
  __int64 v696; // rax
  void **v697; // rdi
  void **v698; // rbx
  unsigned int v699; // r8d
  WCHAR *v700; // rdx
  __int16 *v701; // rcx
  __int64 v702; // rax
  __int16 v703; // r9
  __int16 *v704; // rcx
  __int64 v705; // r13
  __int64 v706; // rcx
  int v707; // eax
  void *v708; // rax
  __int64 v709; // rcx
  signed int v710; // eax
  signed int v711; // eax
  __int64 v712; // r13
  _WORD *v713; // rdi
  __int64 v714; // rcx
  signed int v715; // eax
  unsigned int v716; // edi
  __int64 v717; // rax
  signed int v718; // eax
  signed int v719; // eax
  wchar_t *v720; // rax
  __int64 v721; // rbx
  __int64 v722; // rax
  signed int v723; // eax
  int v724; // ebx
  unsigned int v725; // edx
  int v726; // eax
  int v727; // r13d
  int v728; // ebx
  void *v729; // rdi
  void *v730; // rdi
  __int64 v731; // rdi
  bool v732; // sf
  unsigned int v733; // r13d
  __int64 v734; // rax
  bool v735; // sf
  void *v736; // rdi
  __int64 v737; // rbx
  int v738; // eax
  __int64 v739; // rdx
  int v740; // edx
  int v741; // r12d
  int v742; // ebx
  int v743; // edi
  __int64 v744; // rax
  int v745; // edx
  int v746; // ecx
  __int64 v747; // rax
  int v748; // eax
  HMODULE *v749; // rdi
  __int64 v750; // rbx
  unsigned int v751; // edi
  int v752; // r12d
  __int64 v753; // rax
  int v754; // eax
  void *v755; // rdi
  __int64 v756; // rax
  __int64 v757; // rax
  __int64 v758; // r13
  signed int v759; // r12d
  __int64 v760; // rax
  __int64 v761; // rdi
  bool v762; // sf
  int v763; // eax
  const WCHAR *v764; // rcx
  __int64 (__fastcall *v765)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v766; // rax
  int v767; // eax
  const WCHAR *v768; // rdx
  int v769; // r9d
  int v770; // edi
  int v771; // r10d
  int v772; // ecx
  int v773; // eax
  wchar_t *v774; // rax
  __int64 v775; // r12
  int v776; // edi
  unsigned __int8 *v777; // r9
  signed __int64 v778; // r10
  int v779; // r8d
  void *v780; // rdi
  __int64 v781; // rax
  __int64 v782; // rax
  __int64 v783; // r13
  signed int v784; // r12d
  __int64 v785; // rax
  __int64 v786; // rdi
  bool v787; // sf
  int v788; // eax
  const WCHAR *v789; // rcx
  __int64 (__fastcall *v790)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v791; // rax
  int v792; // eax
  int v793; // edx
  int v794; // r8d
  int v795; // edi
  int v796; // r9d
  int v797; // ecx
  int v798; // ebx
  const WCHAR *v799; // rdx
  wchar_t *v800; // rax
  int v801; // edi
  unsigned __int8 *v802; // r9
  signed __int64 v803; // r10
  int v804; // r8d
  LPVOID v805; // rdi
  char v806; // al
  int v807; // r11d
  unsigned int v808; // r12d
  int v809; // ecx
  int v810; // r10d
  int v811; // edi
  int v812; // r13d
  void *v813; // rax
  __int64 v814; // rax
  __int64 v815; // rcx
  unsigned int v816; // edi
  signed int v817; // r13d
  __int64 v818; // rax
  bool v819; // sf
  LPVOID v820; // rcx
  int v821; // eax
  __int64 v822; // rcx
  __int64 (__fastcall *v823)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v824; // rax
  LPCWSTR v825; // rdi
  int v826; // eax
  int v827; // edx
  int v828; // r10d
  int v829; // r8d
  int v830; // r11d
  int v831; // ecx
  int v832; // eax
  __int64 v833; // rdx
  __int64 v834; // rdi
  __int64 v835; // rax
  SIZE_T v836; // r13
  int v837; // edi
  unsigned __int8 *v838; // r9
  __int64 v839; // r10
  int v840; // r8d
  void *v841; // rdi
  __int64 v842; // rax
  __int64 v843; // rcx
  int v844; // edi
  SIZE_T v845; // rax
  bool v846; // sf
  __int64 v847; // rbx
  int v848; // eax
  __int64 v849; // rcx
  __int64 (__fastcall *v850)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v851; // rax
  int v852; // eax
  unsigned __int64 v853; // rdx
  int v854; // r9d
  int v855; // edi
  int v856; // r10d
  int v857; // ecx
  int v858; // eax
  const WCHAR *v859; // rax
  __int64 v860; // rsi
  int v861; // edi
  unsigned __int8 *v862; // r9
  signed __int64 v863; // r10
  int v864; // r8d
  __int64 v865; // rcx
  __int64 v866; // rcx
  __int64 v867; // rcx
  int v868; // eax
  HMODULE *v869; // rdi
  __int64 v870; // rbx
  int v871; // eax
  WCHAR *v872; // rbx
  char *v873; // rax
  int v874; // r14d
  int v875; // ebx
  int v876; // r11d
  _BYTE *v877; // rsi
  __int64 v878; // r12
  unsigned __int8 *v879; // rcx
  int v880; // r10d
  int v881; // r9d
  int v882; // r11d
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
  int v893; // edx
  int v894; // r11d
  unsigned int v895; // r13d
  int v896; // r11d
  int v897; // r13d
  int v898; // edx
  int v899; // r13d
  unsigned int v900; // r11d
  int v901; // r13d
  int v902; // r11d
  int v903; // r13d
  unsigned int v904; // r11d
  int v905; // r13d
  int v906; // r11d
  int v907; // r13d
  int v908; // r11d
  int v909; // r13d
  int v910; // r11d
  int v911; // r13d
  int v912; // r11d
  int v913; // r13d
  unsigned __int64 v914; // rax
  char v915; // cl
  int v916; // r12d
  WCHAR *v917; // rdi
  const WCHAR *v918; // rdx
  __int64 v919; // rax
  WCHAR *v920; // rdi
  char *v921; // r13
  __int64 v922; // rcx
  unsigned __int64 v923; // rcx
  unsigned int v924; // ecx
  const CHAR *v925; // rdx
  __int64 v926; // rax
  void **v927; // rax
  HANDLE v928; // rax
  HMODULE *v929; // rdi
  __int64 v930; // rbx
  HMODULE *v931; // rdi
  __int64 v932; // rbx
  int v933; // eax
  _QWORD *v934; // r12
  HANDLE v935; // rax
  WCHAR *v936; // rax
  WCHAR *v937; // rbx
  HANDLE v938; // rax
  _QWORD *v939; // rax
  unsigned __int64 v940; // r13
  unsigned int v941; // r11d
  int v942; // eax
  unsigned int v943; // r11d
  int v944; // r9d
  int v945; // eax
  unsigned int v946; // r11d
  int v947; // r9d
  int v948; // eax
  int v949; // r9d
  unsigned int v950; // edi
  HANDLE v951; // rax
  _DWORD *v952; // rax
  _DWORD *v953; // rdi
  LPVOID v954; // r11
  __int64 v955; // rcx
  int v956; // r10d
  unsigned int *v957; // rbx
  __int64 v958; // r11
  unsigned int v959; // edi
  int *v960; // rdi
  int v961; // r9d
  unsigned int v962; // r10d
  _OWORD *v963; // rax
  __int64 v964; // r11
  int *v965; // r9
  unsigned __int64 v966; // r9
  int v967; // r10d
  _DWORD *v968; // r9
  unsigned int v969; // edi
  unsigned int v970; // r11d
  void *v971; // rdi
  HANDLE v972; // rax
  void *v973; // rdi
  HANDLE v974; // rax
  HANDLE v975; // rax
  HANDLE v976; // rax
  int *v977; // r9
  unsigned __int64 v978; // r9
  int v979; // r10d
  _DWORD *v980; // r9
  unsigned int v981; // ecx
  unsigned int v982; // edi
  WCHAR *v983; // r13
  unsigned int *v984; // r12
  int v985; // edi
  unsigned int v986; // r9d
  SIZE_T v987; // r10
  unsigned int v988; // ecx
  unsigned int v989; // edi
  HANDLE v990; // rax
  _DWORD *v991; // rax
  unsigned int v992; // r11d
  void *v993; // rcx
  __int64 v994; // r9
  HANDLE v995; // rax
  int v996; // edi
  unsigned __int64 v997; // rdi
  const WCHAR *v998; // rdx
  unsigned __int8 v999; // al
  unsigned __int64 v1000; // rcx
  WCHAR *v1001; // rdi
  LPCWSTR v1002; // rcx
  unsigned int v1003; // r10d
  int v1004; // r11d
  unsigned __int64 v1005; // r9
  unsigned int v1006; // edx
  int v1007; // r11d
  int v1008; // ecx
  char v1009; // si
  int v1010; // r8d
  unsigned int v1011; // r11d
  unsigned int v1012; // ecx
  unsigned int v1013; // r8d
  WCHAR *v1014; // r14
  int v1015; // r9d
  char v1016; // r12
  int v1017; // r12d
  _BYTE *v1018; // r13
  unsigned __int8 *v1019; // rax
  unsigned __int64 v1020; // r14
  int v1021; // r15d
  int v1022; // r9d
  int v1023; // r8d
  int v1024; // r11d
  int v1025; // r10d
  int v1026; // r11d
  int v1027; // r10d
  int v1028; // r11d
  unsigned int v1029; // r10d
  int v1030; // r11d
  int v1031; // r10d
  int v1032; // r11d
  int v1033; // r10d
  int v1034; // r11d
  int v1035; // r10d
  unsigned int v1036; // r11d
  unsigned int v1037; // r10d
  int v1038; // r11d
  int v1039; // r10d
  int v1040; // r11d
  int v1041; // r10d
  int v1042; // r11d
  int v1043; // r10d
  int v1044; // r11d
  int v1045; // r10d
  unsigned int v1046; // r11d
  int v1047; // r10d
  unsigned int v1048; // ecx
  int v1049; // r10d
  int v1050; // r11d
  int v1051; // r10d
  int v1052; // r11d
  int v1053; // r10d
  int v1054; // r11d
  int v1055; // r10d
  int v1056; // r11d
  HANDLE v1057; // rax
  unsigned int *v1058; // rsi
  int v1059; // edi
  _QWORD *v1060; // rsi
  HANDLE v1061; // rax
  HANDLE v1062; // rax
  HANDLE v1063; // rax
  HANDLE v1064; // rax
  HANDLE v1065; // rax
  int v1066; // edi
  int v1067; // r10d
  int v1068; // r10d
  HANDLE v1069; // rax
  void *v1070; // rax
  HANDLE v1071; // rax
  _OWORD *v1072; // rax
  HANDLE v1073; // rax
  _QWORD *v1074; // rax
  HANDLE v1075; // rax
  HANDLE v1076; // rax
  HANDLE v1077; // rax
  HANDLE v1078; // rax
  unsigned int v1079; // edi
  HANDLE v1080; // rax
  _DWORD *v1081; // rax
  void *v1082; // rsi
  void *v1083; // rcx
  void *v1084; // rcx
  int v1085; // esi
  HANDLE v1086; // rax
  int v1087; // eax
  int v1088; // ecx
  SIZE_T v1089; // r9
  unsigned int v1090; // r11d
  int v1091; // r10d
  unsigned int v1092; // eax
  HANDLE v1093; // rax
  void *v1094; // rsi
  HANDLE v1095; // rax
  void *v1096; // rsi
  HANDLE v1097; // rax
  void *v1098; // rsi
  HANDLE v1099; // rax
  HANDLE v1100; // rax
  void *v1101; // rbx
  HANDLE v1102; // rax
  HANDLE v1103; // rax
  _QWORD *v1104; // rbx
  void *v1105; // rsi
  HANDLE v1106; // rax
  void *v1107; // rsi
  HANDLE v1108; // rax
  void *v1109; // rsi
  HANDLE v1110; // rax
  HANDLE v1111; // rax
  void *v1112; // rbx
  HANDLE v1113; // rax
  unsigned int v1114; // r10d
  SIZE_T v1115; // r9
  unsigned int *v1116; // rcx
  unsigned int v1117; // esi
  int v1118; // r10d
  int v1119; // r11d
  int v1120; // r10d
  unsigned int v1121; // eax
  SIZE_T v1122; // rsi
  unsigned int v1123; // edi
  HANDLE v1124; // rax
  unsigned int *v1125; // rax
  FARPROC v1126; // rax
  int v1127; // eax
  unsigned int v1128; // r9d
  WCHAR *v1129; // rdx
  unsigned int *v1130; // r8
  signed int v1131; // eax
  __int64 v1132; // rcx
  unsigned int *v1133; // rdi
  unsigned int *v1134; // r11
  SIZE_T v1135; // rbx
  unsigned int *v1136; // rdi
  unsigned int v1137; // r11d
  unsigned int v1138; // r10d
  SIZE_T v1139; // r13
  unsigned int v1140; // edi
  HANDLE v1141; // rax
  _QWORD *v1142; // rdi
  unsigned int *v1143; // rax
  HANDLE v1144; // rax
  void *v1145; // rax
  HANDLE v1146; // rax
  void *v1147; // rax
  HANDLE v1148; // rax
  void *v1149; // rax
  int v1150; // edi
  _QWORD *v1151; // rax
  HANDLE v1152; // rax
  HANDLE v1153; // rax
  HANDLE v1154; // rax
  HANDLE v1155; // rax
  _QWORD *v1156; // rax
  unsigned int *v1157; // r9
  _QWORD *v1158; // rdi
  void *v1159; // rbx
  HANDLE v1160; // rax
  void *v1161; // rbx
  HANDLE v1162; // rax
  void *v1163; // rbx
  HANDLE v1164; // rax
  HANDLE v1165; // rax
  unsigned __int64 v1166; // rdi
  int *v1167; // r11
  unsigned __int8 v1168; // dl
  unsigned __int8 *v1169; // rax
  unsigned int v1170; // r8d
  int v1171; // r10d
  unsigned __int8 *v1172; // r14
  int v1173; // r11d
  char v1174; // r15
  int v1175; // r9d
  int v1176; // ecx
  unsigned int v1177; // r10d
  int v1178; // edi
  int v1179; // ecx
  int v1180; // edx
  _BYTE *v1181; // rax
  char v1182; // si
  _DWORD *v1183; // rcx
  unsigned int v1184; // r9d
  unsigned int v1185; // r10d
  _BYTE *v1186; // r12
  unsigned __int8 *v1187; // rbx
  int v1188; // edx
  unsigned __int64 v1189; // rsi
  int v1190; // r11d
  unsigned int v1191; // r13d
  int v1192; // r15d
  int v1193; // r8d
  int v1194; // edi
  int v1195; // r9d
  int v1196; // r10d
  int v1197; // r9d
  unsigned int v1198; // r10d
  int v1199; // r9d
  int v1200; // r10d
  unsigned int v1201; // r9d
  int v1202; // r10d
  int v1203; // r9d
  int v1204; // r10d
  unsigned int v1205; // r9d
  int v1206; // r10d
  int v1207; // r9d
  unsigned int v1208; // r10d
  int v1209; // r9d
  int v1210; // r10d
  int v1211; // r9d
  int v1212; // r10d
  int v1213; // r9d
  int v1214; // r10d
  int v1215; // r9d
  int v1216; // r10d
  unsigned int v1217; // r9d
  int v1218; // r10d
  int v1219; // r9d
  int v1220; // r10d
  int v1221; // r9d
  int v1222; // r10d
  int v1223; // r9d
  int v1224; // r10d
  int v1225; // r9d
  int v1226; // r10d
  unsigned __int64 ii; // rax
  void *v1228; // r9
  int v1229; // edi
  void *v1230; // r11
  void *v1231; // r9
  SIZE_T v1232; // r10
  SIZE_T v1233; // r10
  void *v1234; // r11
  void *v1235; // r9
  SIZE_T v1236; // r10
  void *v1237; // rcx
  void *v1238; // r9
  SIZE_T v1239; // r10
  void *v1240; // r11
  unsigned __int64 v1241; // r14
  SIZE_T v1242; // r11
  int *v1243; // r11
  unsigned __int64 v1244; // r11
  void *v1245; // r9
  void *v1246; // r10
  HANDLE v1247; // rax
  size_t v1248; // rsi
  HRESULT (__stdcall *v1249)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v1250; // eax
  int v1251; // r8d
  int v1252; // r9d
  __int64 v1253; // rdx
  __int64 v1254; // rdx
  __int64 v1255; // rdx
  unsigned __int8 v1256; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1257; // [rsp+60h] [rbp-A0h]
  int v1258; // [rsp+64h] [rbp-9Ch]
  int v1259; // [rsp+64h] [rbp-9Ch]
  unsigned int v1260; // [rsp+64h] [rbp-9Ch]
  int v1261; // [rsp+64h] [rbp-9Ch]
  unsigned int nn; // [rsp+64h] [rbp-9Ch]
  unsigned int mm; // [rsp+64h] [rbp-9Ch]
  unsigned int v1264; // [rsp+64h] [rbp-9Ch]
  int v1265; // [rsp+64h] [rbp-9Ch]
  unsigned int v1266; // [rsp+64h] [rbp-9Ch]
  int v1267; // [rsp+64h] [rbp-9Ch]
  int v1268; // [rsp+64h] [rbp-9Ch]
  int v1269; // [rsp+64h] [rbp-9Ch]
  SIZE_T v1270; // [rsp+68h] [rbp-98h]
  SIZE_T v1271; // [rsp+68h] [rbp-98h]
  SIZE_T v1272; // [rsp+68h] [rbp-98h]
  SIZE_T v1273; // [rsp+68h] [rbp-98h]
  void *v1274; // [rsp+68h] [rbp-98h]
  void *v1275; // [rsp+68h] [rbp-98h]
  void *v1276; // [rsp+68h] [rbp-98h]
  void *v1277; // [rsp+68h] [rbp-98h]
  void *v1278; // [rsp+68h] [rbp-98h]
  void *v1279; // [rsp+68h] [rbp-98h]
  SIZE_T v1280; // [rsp+68h] [rbp-98h]
  void *v1281; // [rsp+68h] [rbp-98h]
  void *v1282; // [rsp+68h] [rbp-98h]
  void *v1283; // [rsp+68h] [rbp-98h]
  SIZE_T v1284; // [rsp+68h] [rbp-98h]
  SIZE_T v1285; // [rsp+68h] [rbp-98h]
  SIZE_T v1286; // [rsp+68h] [rbp-98h]
  char *v1287; // [rsp+68h] [rbp-98h]
  void *v1288; // [rsp+68h] [rbp-98h]
  void *v1289; // [rsp+68h] [rbp-98h]
  void *v1290; // [rsp+68h] [rbp-98h]
  unsigned int v1291; // [rsp+70h] [rbp-90h]
  int v1292; // [rsp+70h] [rbp-90h]
  int v1293; // [rsp+70h] [rbp-90h]
  unsigned int v1294; // [rsp+70h] [rbp-90h]
  unsigned int v1295; // [rsp+70h] [rbp-90h]
  int v1296; // [rsp+70h] [rbp-90h]
  unsigned int v1297; // [rsp+70h] [rbp-90h]
  int v1298; // [rsp+70h] [rbp-90h]
  unsigned int v1299; // [rsp+70h] [rbp-90h]
  unsigned int v1300; // [rsp+70h] [rbp-90h]
  int v1301; // [rsp+70h] [rbp-90h]
  wchar_t *v1302; // [rsp+78h] [rbp-88h]
  wchar_t *v1303; // [rsp+78h] [rbp-88h]
  wchar_t *v1304; // [rsp+78h] [rbp-88h]
  wchar_t *v1305; // [rsp+78h] [rbp-88h]
  wchar_t *v1306; // [rsp+78h] [rbp-88h]
  wchar_t *v1307; // [rsp+78h] [rbp-88h]
  wchar_t *v1308; // [rsp+78h] [rbp-88h]
  wchar_t *v1309; // [rsp+78h] [rbp-88h]
  wchar_t *v1310; // [rsp+78h] [rbp-88h]
  int v1311; // [rsp+78h] [rbp-88h]
  int v1312; // [rsp+78h] [rbp-88h]
  int v1313; // [rsp+78h] [rbp-88h]
  int v1314; // [rsp+78h] [rbp-88h]
  int v1315; // [rsp+78h] [rbp-88h]
  unsigned int v1316; // [rsp+78h] [rbp-88h]
  unsigned int v1317; // [rsp+78h] [rbp-88h]
  int v1318; // [rsp+78h] [rbp-88h]
  int v1319; // [rsp+78h] [rbp-88h]
  int v1320; // [rsp+80h] [rbp-80h]
  int v1321; // [rsp+80h] [rbp-80h]
  int v1322; // [rsp+80h] [rbp-80h]
  unsigned int v1323; // [rsp+80h] [rbp-80h]
  unsigned int v1324; // [rsp+80h] [rbp-80h]
  int v1325; // [rsp+80h] [rbp-80h]
  int v1326; // [rsp+80h] [rbp-80h]
  int v1327; // [rsp+80h] [rbp-80h]
  unsigned int v1328; // [rsp+80h] [rbp-80h]
  int v1329; // [rsp+84h] [rbp-7Ch]
  int v1330; // [rsp+84h] [rbp-7Ch]
  int v1331; // [rsp+84h] [rbp-7Ch]
  unsigned int v1332; // [rsp+84h] [rbp-7Ch]
  unsigned int v1333; // [rsp+84h] [rbp-7Ch]
  int v1334; // [rsp+84h] [rbp-7Ch]
  int v1335; // [rsp+84h] [rbp-7Ch]
  int v1336; // [rsp+84h] [rbp-7Ch]
  int v1337; // [rsp+84h] [rbp-7Ch]
  int v1338; // [rsp+84h] [rbp-7Ch]
  LPCWSTR v1339; // [rsp+88h] [rbp-78h]
  LPCWSTR v1340; // [rsp+88h] [rbp-78h]
  LPCWSTR v1341; // [rsp+88h] [rbp-78h]
  WCHAR *v1342; // [rsp+88h] [rbp-78h]
  WCHAR *v1343; // [rsp+88h] [rbp-78h]
  WCHAR *v1344; // [rsp+88h] [rbp-78h]
  LPCWSTR v1345; // [rsp+88h] [rbp-78h]
  LPCWSTR v1346; // [rsp+88h] [rbp-78h]
  LPCWSTR v1347; // [rsp+88h] [rbp-78h]
  LPCWSTR v1348; // [rsp+88h] [rbp-78h]
  int v1349; // [rsp+88h] [rbp-78h]
  int v1350; // [rsp+88h] [rbp-78h]
  LPCWSTR v1351; // [rsp+88h] [rbp-78h]
  unsigned int n; // [rsp+88h] [rbp-78h]
  int v1353; // [rsp+88h] [rbp-78h]
  LPCWSTR v1354; // [rsp+88h] [rbp-78h]
  int v1355; // [rsp+88h] [rbp-78h]
  int v1356; // [rsp+88h] [rbp-78h]
  LPCWSTR lpModuleName; // [rsp+90h] [rbp-70h]
  WCHAR *lpModuleNamea; // [rsp+90h] [rbp-70h]
  const wchar_t *lpModuleNameb; // [rsp+90h] [rbp-70h]
  LPCWSTR lpModuleNamec; // [rsp+90h] [rbp-70h]
  LPCWSTR lpModuleNamed; // [rsp+90h] [rbp-70h]
  LPCWSTR lpModuleNamee; // [rsp+90h] [rbp-70h]
  LPCWSTR lpModuleNamef; // [rsp+90h] [rbp-70h]
  int lpModuleNameg; // [rsp+90h] [rbp-70h]
  int lpModuleNameh; // [rsp+90h] [rbp-70h]
  int lpModuleNamei; // [rsp+90h] [rbp-70h]
  int lpModuleNamej; // [rsp+90h] [rbp-70h]
  int lpModuleNamek; // [rsp+90h] [rbp-70h]
  int lpModuleNamel; // [rsp+90h] [rbp-70h]
  int lpModuleNamem; // [rsp+90h] [rbp-70h]
  unsigned int lpModuleNamen; // [rsp+90h] [rbp-70h]
  unsigned int lpModuleNameo; // [rsp+90h] [rbp-70h]
  SIZE_T v1373; // [rsp+98h] [rbp-68h]
  SIZE_T v1374; // [rsp+98h] [rbp-68h]
  SIZE_T v1375; // [rsp+98h] [rbp-68h]
  SIZE_T v1376; // [rsp+98h] [rbp-68h]
  char *v1377; // [rsp+98h] [rbp-68h]
  SIZE_T v1378; // [rsp+98h] [rbp-68h]
  SIZE_T v1379; // [rsp+98h] [rbp-68h]
  SIZE_T v1380; // [rsp+98h] [rbp-68h]
  int v1381; // [rsp+98h] [rbp-68h]
  int v1382; // [rsp+98h] [rbp-68h]
  int v1383; // [rsp+98h] [rbp-68h]
  unsigned int v1384; // [rsp+98h] [rbp-68h]
  int v1385; // [rsp+98h] [rbp-68h]
  SIZE_T v1386; // [rsp+98h] [rbp-68h]
  int v1387; // [rsp+98h] [rbp-68h]
  wchar_t *v1388; // [rsp+A0h] [rbp-60h]
  wchar_t *v1389; // [rsp+A0h] [rbp-60h]
  wchar_t *v1390; // [rsp+A0h] [rbp-60h]
  wchar_t *v1391; // [rsp+A0h] [rbp-60h]
  wchar_t *v1392; // [rsp+A0h] [rbp-60h]
  wchar_t *v1393; // [rsp+A0h] [rbp-60h]
  wchar_t *v1394; // [rsp+A0h] [rbp-60h]
  int v1395; // [rsp+A0h] [rbp-60h]
  int v1396; // [rsp+A0h] [rbp-60h]
  int v1397; // [rsp+A0h] [rbp-60h]
  int v1398; // [rsp+A0h] [rbp-60h]
  unsigned int v1399; // [rsp+A0h] [rbp-60h]
  int v1400; // [rsp+A0h] [rbp-60h]
  int v1401; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v1402; // [rsp+A8h] [rbp-58h]
  unsigned int v1403; // [rsp+A8h] [rbp-58h]
  unsigned int v1404; // [rsp+A8h] [rbp-58h]
  unsigned int v1405; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1406; // [rsp+B0h] [rbp-50h]
  LPCWSTR v1407; // [rsp+B0h] [rbp-50h]
  LPCWSTR v1408; // [rsp+B0h] [rbp-50h]
  WCHAR *v1409; // [rsp+B0h] [rbp-50h]
  LPCWSTR v1410; // [rsp+B0h] [rbp-50h]
  WCHAR *v1411; // [rsp+B0h] [rbp-50h]
  WCHAR *v1412; // [rsp+B0h] [rbp-50h]
  WCHAR *v1413; // [rsp+B0h] [rbp-50h]
  WCHAR *v1414; // [rsp+B0h] [rbp-50h]
  WCHAR *v1415; // [rsp+B0h] [rbp-50h]
  WCHAR *v1416; // [rsp+B0h] [rbp-50h]
  LPCWSTR v1417; // [rsp+B0h] [rbp-50h]
  int v1418; // [rsp+B8h] [rbp-48h]
  unsigned int v1419; // [rsp+B8h] [rbp-48h]
  int v1420; // [rsp+B8h] [rbp-48h]
  char v1421; // [rsp+B8h] [rbp-48h]
  LPVOID v1422; // [rsp+C0h] [rbp-40h]
  _QWORD *v1423; // [rsp+C0h] [rbp-40h]
  _QWORD *v1424; // [rsp+C0h] [rbp-40h]
  LPVOID v1425; // [rsp+C0h] [rbp-40h]
  LPVOID v1426; // [rsp+C0h] [rbp-40h]
  int v1427; // [rsp+C0h] [rbp-40h]
  int v1428; // [rsp+C0h] [rbp-40h]
  int v1429; // [rsp+C0h] [rbp-40h]
  __int64 v1430; // [rsp+C0h] [rbp-40h]
  char *Src; // [rsp+C8h] [rbp-38h]
  const WCHAR *Srca; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *Srcb; // [rsp+C8h] [rbp-38h]
  void *Srcc; // [rsp+C8h] [rbp-38h]
  LPVOID Srcd; // [rsp+C8h] [rbp-38h]
  void *Srce; // [rsp+C8h] [rbp-38h]
  LPVOID Srcf; // [rsp+C8h] [rbp-38h]
  _QWORD *Srcg; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *Srch; // [rsp+C8h] [rbp-38h]
  LPVOID Srci; // [rsp+C8h] [rbp-38h]
  unsigned int Size; // [rsp+D0h] [rbp-30h]
  SIZE_T Sizea; // [rsp+D0h] [rbp-30h]
  int Sizeb; // [rsp+D0h] [rbp-30h]
  int Sizec; // [rsp+D0h] [rbp-30h]
  unsigned int Sized; // [rsp+D0h] [rbp-30h]
  unsigned int Sizee; // [rsp+D0h] [rbp-30h]
  int Sizef; // [rsp+D0h] [rbp-30h]
  int Sizeg; // [rsp+D0h] [rbp-30h]
  unsigned int *v1449; // [rsp+D8h] [rbp-28h]
  void *v1450; // [rsp+D8h] [rbp-28h]
  int v1451; // [rsp+D8h] [rbp-28h]
  int v1452; // [rsp+D8h] [rbp-28h]
  int v1453; // [rsp+D8h] [rbp-28h]
  const WCHAR *v1454; // [rsp+D8h] [rbp-28h]
  void *v1455; // [rsp+E0h] [rbp-20h]
  char *v1456; // [rsp+E0h] [rbp-20h]
  _WORD *v1457; // [rsp+E0h] [rbp-20h]
  __int64 v1458; // [rsp+E0h] [rbp-20h]
  __int64 v1459; // [rsp+E0h] [rbp-20h]
  int v1460; // [rsp+E0h] [rbp-20h]
  WCHAR *v1461; // [rsp+E0h] [rbp-20h]
  int v1462; // [rsp+E8h] [rbp-18h]
  int v1463; // [rsp+E8h] [rbp-18h]
  unsigned int v1464; // [rsp+E8h] [rbp-18h]
  unsigned int v1465; // [rsp+E8h] [rbp-18h]
  wchar_t *v1466; // [rsp+F0h] [rbp-10h]
  __int64 v1467; // [rsp+F0h] [rbp-10h]
  __int64 v1468; // [rsp+F0h] [rbp-10h]
  char *v1469; // [rsp+F0h] [rbp-10h]
  unsigned int *v1470; // [rsp+F0h] [rbp-10h]
  __int64 v1471; // [rsp+F8h] [rbp-8h]
  __int64 v1472; // [rsp+F8h] [rbp-8h]
  __int64 v1473; // [rsp+F8h] [rbp-8h]
  unsigned int *v1474; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *v1475; // [rsp+100h] [rbp+0h]
  _DWORD *v1476; // [rsp+100h] [rbp+0h]
  int v1477; // [rsp+100h] [rbp+0h]
  int v1478; // [rsp+100h] [rbp+0h]
  int v1479; // [rsp+100h] [rbp+0h]
  int v1480; // [rsp+100h] [rbp+0h]
  SIZE_T v1481; // [rsp+108h] [rbp+8h] BYREF
  __int64 v1482; // [rsp+110h] [rbp+10h]
  SIZE_T v1483; // [rsp+118h] [rbp+18h]
  WCHAR *v1484; // [rsp+120h] [rbp+20h]
  int v1485; // [rsp+128h] [rbp+28h] BYREF
  int v1486; // [rsp+12Ch] [rbp+2Ch]
  int v1487; // [rsp+130h] [rbp+30h] BYREF
  LPVOID v1488; // [rsp+138h] [rbp+38h]
  unsigned int v1489; // [rsp+140h] [rbp+40h] BYREF
  int v1490; // [rsp+144h] [rbp+44h] BYREF
  unsigned int v1491; // [rsp+148h] [rbp+48h] BYREF
  int v1492; // [rsp+14Ch] [rbp+4Ch] BYREF
  unsigned int v1493; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v1494; // [rsp+154h] [rbp+54h] BYREF
  unsigned int v1495; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v1496; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v1497; // [rsp+160h] [rbp+60h] BYREF
  int v1498; // [rsp+164h] [rbp+64h] BYREF
  int v1499; // [rsp+168h] [rbp+68h] BYREF
  int v1500; // [rsp+16Ch] [rbp+6Ch] BYREF
  SIZE_T v1501; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1502; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1503; // [rsp+17Ch] [rbp+7Ch] BYREF
  SIZE_T v1504; // [rsp+184h] [rbp+84h] BYREF
  unsigned int v1505; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1506; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v1507; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v1508; // [rsp+198h] [rbp+98h] BYREF
  int v1509; // [rsp+1A0h] [rbp+A0h]
  int v1510; // [rsp+1A4h] [rbp+A4h]
  LPVOID v1511; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 v1512; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v1513; // [rsp+1B8h] [rbp+B8h]
  int v1514; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v1515; // [rsp+1C4h] [rbp+C4h] BYREF
  unsigned int v1516; // [rsp+1C8h] [rbp+C8h] BYREF
  int v1517; // [rsp+1CCh] [rbp+CCh] BYREF
  int v1518; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v1519; // [rsp+1D4h] [rbp+D4h] BYREF
  unsigned int v1520; // [rsp+1D8h] [rbp+D8h] BYREF
  int v1521; // [rsp+1DCh] [rbp+DCh] BYREF
  int v1522; // [rsp+1E0h] [rbp+E0h] BYREF
  int v1523; // [rsp+1E4h] [rbp+E4h] BYREF
  int v1524; // [rsp+1E8h] [rbp+E8h] BYREF
  int v1525; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1526; // [rsp+1F0h] [rbp+F0h] BYREF
  int v1527; // [rsp+1F4h] [rbp+F4h] BYREF
  unsigned int v1528; // [rsp+1F8h] [rbp+F8h] BYREF
  int v1529; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1530; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v1531; // [rsp+204h] [rbp+104h] BYREF
  int v1532; // [rsp+208h] [rbp+108h] BYREF
  int v1533; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1534; // [rsp+210h] [rbp+110h] BYREF
  SIZE_T v1535; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v1536; // [rsp+21Ch] [rbp+11Ch] BYREF
  unsigned int v1537; // [rsp+220h] [rbp+120h] BYREF
  SIZE_T v1538; // [rsp+228h] [rbp+128h] BYREF
  unsigned int v1539; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v1540; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1541; // [rsp+23Ch] [rbp+13Ch] BYREF
  LPVOID v1542; // [rsp+240h] [rbp+140h]
  int v1543; // [rsp+248h] [rbp+148h] BYREF
  int v1544; // [rsp+24Ch] [rbp+14Ch] BYREF
  int v1545; // [rsp+250h] [rbp+150h] BYREF
  int v1546; // [rsp+254h] [rbp+154h] BYREF
  int v1547; // [rsp+258h] [rbp+158h] BYREF
  int v1548; // [rsp+25Ch] [rbp+15Ch] BYREF
  unsigned int v1549; // [rsp+260h] [rbp+160h] BYREF
  int v1550; // [rsp+264h] [rbp+164h] BYREF
  unsigned int v1551; // [rsp+268h] [rbp+168h] BYREF
  int v1552; // [rsp+26Ch] [rbp+16Ch] BYREF
  _DWORD *v1553; // [rsp+270h] [rbp+170h] BYREF
  wchar_t *String1; // [rsp+278h] [rbp+178h] BYREF
  wchar_t *v1555; // [rsp+280h] [rbp+180h] BYREF
  wchar_t *v1556; // [rsp+288h] [rbp+188h] BYREF
  wchar_t *v1557; // [rsp+290h] [rbp+190h] BYREF
  size_t pcchLength; // [rsp+298h] [rbp+198h] BYREF
  int *v1559; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v1560; // [rsp+2A8h] [rbp+1A8h] BYREF
  int *v1561; // [rsp+2B0h] [rbp+1B0h] BYREF
  size_t v1562; // [rsp+2B8h] [rbp+1B8h] BYREF
  int *v1563; // [rsp+2C0h] [rbp+1C0h] BYREF
  int *v1564; // [rsp+2C8h] [rbp+1C8h] BYREF
  int *v1565; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v1566[5]; // [rsp+2D8h] [rbp+1D8h] BYREF
  void *v1567; // [rsp+300h] [rbp+200h] BYREF
  int *v1568; // [rsp+308h] [rbp+208h] BYREF
  LPVOID v1569; // [rsp+310h] [rbp+210h] BYREF
  HMODULE phModule; // [rsp+318h] [rbp+218h] BYREF
  void *v1571; // [rsp+320h] [rbp+220h] BYREF
  unsigned __int64 v1572; // [rsp+328h] [rbp+228h] BYREF
  unsigned __int64 v1573; // [rsp+330h] [rbp+230h] BYREF
  unsigned __int64 v1574; // [rsp+338h] [rbp+238h] BYREF
  _DWORD *v1575; // [rsp+340h] [rbp+240h] BYREF
  _DWORD *v1576; // [rsp+348h] [rbp+248h] BYREF
  int *v1577; // [rsp+350h] [rbp+250h] BYREF
  LPVOID v1578; // [rsp+358h] [rbp+258h] BYREF
  unsigned int *v1579; // [rsp+360h] [rbp+260h] BYREF
  unsigned int *v1580; // [rsp+368h] [rbp+268h] BYREF
  __int64 v1581[3]; // [rsp+370h] [rbp+270h] BYREF
  void **v1582; // [rsp+388h] [rbp+288h] BYREF
  _DWORD *v1583; // [rsp+3A0h] [rbp+2A0h] BYREF
  WCHAR *v1584; // [rsp+3A8h] [rbp+2A8h] BYREF
  __int64 v1585; // [rsp+3B0h] [rbp+2B0h]
  void **v1586; // [rsp+3B8h] [rbp+2B8h] BYREF
  char *v1587; // [rsp+3C0h] [rbp+2C0h] BYREF
  _DWORD *v1588; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v1589; // [rsp+3D0h] [rbp+2D0h]
  __int64 v1590; // [rsp+3D8h] [rbp+2D8h] BYREF
  __int64 v1591; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v1592; // [rsp+3E8h] [rbp+2E8h] BYREF
  struct IServiceProvider *v1593; // [rsp+3F0h] [rbp+2F0h]
  CDesktopPositioner *v1594; // [rsp+3F8h] [rbp+2F8h]
  char *v1595; // [rsp+400h] [rbp+300h]
  __int128 v1596; // [rsp+410h] [rbp+310h] BYREF
  __int64 v1597; // [rsp+420h] [rbp+320h] BYREF
  int *v1598; // [rsp+428h] [rbp+328h] BYREF
  __int64 v1599[3]; // [rsp+438h] [rbp+338h] BYREF
  int *v1600; // [rsp+450h] [rbp+350h] BYREF
  int *v1601; // [rsp+458h] [rbp+358h] BYREF
  int *v1602; // [rsp+460h] [rbp+360h] BYREF
  void *v1603[5]; // [rsp+468h] [rbp+368h] BYREF
  void *v1604; // [rsp+490h] [rbp+390h] BYREF
  int *v1605; // [rsp+498h] [rbp+398h] BYREF
  unsigned int *v1606; // [rsp+4A0h] [rbp+3A0h] BYREF
  HMODULE hModule; // [rsp+4A8h] [rbp+3A8h] BYREF
  void *v1608; // [rsp+4B0h] [rbp+3B0h] BYREF
  SIZE_T v1609; // [rsp+4B8h] [rbp+3B8h] BYREF
  unsigned __int64 v1610; // [rsp+4C0h] [rbp+3C0h] BYREF
  SIZE_T v1611[2]; // [rsp+4C8h] [rbp+3C8h] BYREF
  __int64 v1612; // [rsp+4D8h] [rbp+3D8h] BYREF
  __int64 *v1613; // [rsp+4E0h] [rbp+3E0h] BYREF
  __int64 v1614; // [rsp+4E8h] [rbp+3E8h] BYREF
  __int64 v1615[2]; // [rsp+4F0h] [rbp+3F0h] BYREF
  _DWORD *v1616; // [rsp+500h] [rbp+400h] BYREF
  __int128 v1617; // [rsp+508h] [rbp+408h]
  __int128 v1618; // [rsp+518h] [rbp+418h]
  _OWORD *v1619; // [rsp+530h] [rbp+430h] BYREF
  _QWORD *v1620; // [rsp+540h] [rbp+440h] BYREF
  LPVOID lpMem[2]; // [rsp+548h] [rbp+448h] BYREF
  LPVOID v1622[3]; // [rsp+558h] [rbp+458h]
  unsigned __int64 *v1623; // [rsp+570h] [rbp+470h] BYREF
  _OWORD *v1624; // [rsp+580h] [rbp+480h] BYREF
  _QWORD *v1625; // [rsp+590h] [rbp+490h] BYREF
  wchar_t **v1626; // [rsp+5A0h] [rbp+4A0h] BYREF
  void *v1627; // [rsp+5B0h] [rbp+4B0h] BYREF
  int *v1628; // [rsp+5C0h] [rbp+4C0h] BYREF
  _DWORD *v1629; // [rsp+5D0h] [rbp+4D0h] BYREF
  size_t v1630; // [rsp+5D8h] [rbp+4D8h] BYREF
  LPVOID v1631; // [rsp+5E0h] [rbp+4E0h]
  __int128 v1632; // [rsp+5E8h] [rbp+4E8h]
  __int128 v1633; // [rsp+5F8h] [rbp+4F8h] BYREF
  LPVOID v1634[3]; // [rsp+608h] [rbp+508h]
  _DWORD *v1635; // [rsp+620h] [rbp+520h] BYREF
  _QWORD v1636[2]; // [rsp+628h] [rbp+528h] BYREF
  int v1637; // [rsp+638h] [rbp+538h]
  unsigned int v1638; // [rsp+63Ch] [rbp+53Ch]
  int v1639; // [rsp+640h] [rbp+540h]
  _QWORD v1640[2]; // [rsp+648h] [rbp+548h] BYREF
  int v1641; // [rsp+658h] [rbp+558h]
  unsigned int v1642; // [rsp+65Ch] [rbp+55Ch]
  int v1643; // [rsp+660h] [rbp+560h]
  _BYTE v1644[24]; // [rsp+670h] [rbp+570h] BYREF
  __int64 v1645; // [rsp+688h] [rbp+588h]
  _BYTE v1646[4]; // [rsp+6E0h] [rbp+5E0h] BYREF
  int v1647; // [rsp+6E4h] [rbp+5E4h]
  int v1648; // [rsp+6E8h] [rbp+5E8h]
  __int16 v1649; // [rsp+6F2h] [rbp+5F2h]
  __int64 v1650; // [rsp+6F8h] [rbp+5F8h]
  _BYTE v1651[4]; // [rsp+750h] [rbp+650h] BYREF
  int v1652; // [rsp+754h] [rbp+654h]
  int v1653; // [rsp+758h] [rbp+658h]
  wchar_t *v1654; // [rsp+768h] [rbp+668h]
  _BYTE v1655[24]; // [rsp+7C0h] [rbp+6C0h] BYREF
  const WCHAR *v1656; // [rsp+7D8h] [rbp+6D8h]
  _BYTE v1657[4]; // [rsp+830h] [rbp+730h] BYREF
  int v1658; // [rsp+834h] [rbp+734h]
  int v1659; // [rsp+838h] [rbp+738h]
  wchar_t *v1660; // [rsp+848h] [rbp+748h]
  _BYTE v1661[24]; // [rsp+8A0h] [rbp+7A0h] BYREF
  const WCHAR *v1662; // [rsp+8B8h] [rbp+7B8h]
  _BYTE v1663[4]; // [rsp+910h] [rbp+810h] BYREF
  int v1664; // [rsp+914h] [rbp+814h]
  int v1665; // [rsp+918h] [rbp+818h]
  __int64 v1666; // [rsp+928h] [rbp+828h]
  _BYTE v1667[4]; // [rsp+980h] [rbp+880h] BYREF
  int v1668; // [rsp+984h] [rbp+884h]
  int v1669; // [rsp+988h] [rbp+888h]
  const WCHAR *v1670; // [rsp+998h] [rbp+898h]
  _BYTE v1671[24]; // [rsp+9F0h] [rbp+8F0h] BYREF
  __int64 v1672; // [rsp+A08h] [rbp+908h]
  int v1673; // [rsp+A60h] [rbp+960h] BYREF
  int v1674; // [rsp+A64h] [rbp+964h]
  void *v1675; // [rsp+A68h] [rbp+968h]
  void *v1676; // [rsp+A70h] [rbp+970h]
  void *v1677; // [rsp+A78h] [rbp+978h]
  wchar_t *v1678; // [rsp+A80h] [rbp+980h]
  wchar_t *v1679; // [rsp+A88h] [rbp+988h]
  __int64 v1680; // [rsp+A90h] [rbp+990h]
  int v1681; // [rsp+A98h] [rbp+998h]
  __int128 v1682; // [rsp+A9Ch] [rbp+99Ch] BYREF
  __int128 v1683; // [rsp+AACh] [rbp+9ACh] BYREF
  unsigned int v1684; // [rsp+ABCh] [rbp+9BCh] BYREF
  unsigned int v1685; // [rsp+AC0h] [rbp+9C0h]
  unsigned int v1686; // [rsp+AC4h] [rbp+9C4h]
  unsigned int v1687; // [rsp+AC8h] [rbp+9C8h]
  __int64 v1688; // [rsp+AD0h] [rbp+9D0h]
  unsigned __int64 v1689; // [rsp+AD8h] [rbp+9D8h]
  unsigned __int64 v1690; // [rsp+AE0h] [rbp+9E0h]
  __int64 v1691; // [rsp+AE8h] [rbp+9E8h]
  __int128 v1692; // [rsp+AF0h] [rbp+9F0h] BYREF
  __int128 v1693; // [rsp+B00h] [rbp+A00h] BYREF
  __int128 v1694; // [rsp+B10h] [rbp+A10h] BYREF
  __int128 v1695; // [rsp+B20h] [rbp+A20h]
  __int128 v1696; // [rsp+B30h] [rbp+A30h] BYREF
  __int128 v1697; // [rsp+B40h] [rbp+A40h] BYREF
  __int64 v1698; // [rsp+B50h] [rbp+A50h] BYREF
  unsigned int v1699; // [rsp+B58h] [rbp+A58h]
  int v1700; // [rsp+B5Ch] [rbp+A5Ch]
  char v1701[12]; // [rsp+B60h] [rbp+A60h] BYREF
  unsigned int v1702; // [rsp+B6Ch] [rbp+A6Ch]
  __int128 v1703; // [rsp+B80h] [rbp+A80h] BYREF
  __int128 v1704; // [rsp+B90h] [rbp+A90h] BYREF
  __int64 v1705; // [rsp+BA0h] [rbp+AA0h]
  __int128 v1706; // [rsp+BA8h] [rbp+AA8h] BYREF
  __int128 v1707; // [rsp+BB8h] [rbp+AB8h] BYREF
  __int64 v1708; // [rsp+BC8h] [rbp+AC8h]
  __int128 v1709; // [rsp+BD0h] [rbp+AD0h] BYREF
  __int128 v1710; // [rsp+BE0h] [rbp+AE0h]
  __int64 v1711; // [rsp+BF0h] [rbp+AF0h]
  int v1712; // [rsp+BF8h] [rbp+AF8h]
  __int128 v1713; // [rsp+C00h] [rbp+B00h] BYREF
  __int128 v1714; // [rsp+C10h] [rbp+B10h]
  __int64 v1715; // [rsp+C20h] [rbp+B20h]
  int v1716; // [rsp+C28h] [rbp+B28h]
  __int128 v1717; // [rsp+C30h] [rbp+B30h] BYREF
  __int128 v1718; // [rsp+C40h] [rbp+B40h]
  __int64 v1719; // [rsp+C50h] [rbp+B50h]
  int v1720; // [rsp+C58h] [rbp+B58h]
  __int128 v1721; // [rsp+C60h] [rbp+B60h] BYREF
  __int128 v1722; // [rsp+C70h] [rbp+B70h]
  __int64 v1723; // [rsp+C80h] [rbp+B80h]
  int v1724; // [rsp+C88h] [rbp+B88h]
  __int128 v1725; // [rsp+C90h] [rbp+B90h] BYREF
  __int128 v1726; // [rsp+CA0h] [rbp+BA0h]
  __int64 v1727; // [rsp+CB0h] [rbp+BB0h]
  int v1728; // [rsp+CB8h] [rbp+BB8h]
  _DWORD v1729[6]; // [rsp+CC0h] [rbp+BC0h] BYREF
  char v1730; // [rsp+CDAh] [rbp+BDAh]
  wchar_t v1731[34]; // [rsp+CDCh] [rbp+BDCh] BYREF
  _DWORD v1732[6]; // [rsp+D20h] [rbp+C20h] BYREF
  char v1733; // [rsp+D3Ah] [rbp+C3Ah]
  wchar_t v1734[34]; // [rsp+D3Ch] [rbp+C3Ch] BYREF
  _DWORD v1735[6]; // [rsp+D80h] [rbp+C80h] BYREF
  char v1736; // [rsp+D9Ah] [rbp+C9Ah]
  wchar_t v1737[34]; // [rsp+D9Ch] [rbp+C9Ch] BYREF
  _BYTE v1738[68]; // [rsp+DE0h] [rbp+CE0h] BYREF
  __int16 v1739; // [rsp+E24h] [rbp+D24h]
  unsigned __int16 v1740; // [rsp+E86h] [rbp+D86h]
  __int64 v1741; // [rsp+E8Ch] [rbp+D8Ch]
  _QWORD v1742[6]; // [rsp+EC0h] [rbp+DC0h] BYREF
  int v1743; // [rsp+EF0h] [rbp+DF0h] BYREF
  __int128 v1744; // [rsp+EF8h] [rbp+DF8h]
  __int128 v1745; // [rsp+F08h] [rbp+E08h]
  __int128 v1746; // [rsp+F18h] [rbp+E18h]
  __int64 v1747; // [rsp+F28h] [rbp+E28h]
  _QWORD v1748[20]; // [rsp+F30h] [rbp+E30h] BYREF
  _WORD v1749[8]; // [rsp+FD0h] [rbp+ED0h] BYREF
  _BYTE v1750[176]; // [rsp+FE0h] [rbp+EE0h] BYREF
  WCHAR Filename[264]; // [rsp+1090h] [rbp+F90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+12E8h] [rbp+11E8h]

  v2 = a2;
  v1593 = a2;
  v3 = (__int64 *)this;
  v1594 = this;
  QueryService = a2->lpVtbl->QueryService;
  v5 = (_QWORD *)((char *)this + 200);
  v1595 = (char *)this + 200;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 25);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, _QWORD *))QueryService)(
         v2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v5);
  if ( v6 < 0 )
  {
    v37 = 103LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v7 = v2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3 + 26);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v7)(
         v2,
         &IID_IApplicationPositionPersistence,
         &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
         v3 + 26);
  if ( v6 < 0 )
  {
    v37 = 104LL;
    goto LABEL_40;
  }
  v8 = v2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3 + 27);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
         v2,
         &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
         &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
         v3 + 27);
  if ( v6 < 0 )
  {
    v37 = 105LL;
    goto LABEL_40;
  }
  v9 = v2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3 + 28);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v9)(
         v2,
         &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
         &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
         v3 + 28);
  if ( v6 < 0 )
  {
    v37 = 106LL;
    goto LABEL_40;
  }
  v10 = v2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3 + 29);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v10)(
         v2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         v3 + 29);
  if ( v6 < 0 )
  {
    v37 = 107LL;
    goto LABEL_40;
  }
  v11 = v2->lpVtbl->QueryService;
  v12 = (__int64 **)(v3 + 30);
  *(_QWORD *)&v1596 = v3 + 30;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3 + 30);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v11)(
         v2,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         v3 + 30);
  if ( v6 < 0 )
  {
    v37 = 108LL;
    goto LABEL_40;
  }
  v13 = v2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v3 + 31);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v13)(
         v2,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         v3 + 31);
  if ( v6 < 0 )
  {
    v37 = 109LL;
    goto LABEL_40;
  }
  v14 = v2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3 + 33);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v14)(
         v2,
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
         &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
         v3 + 33);
  if ( v6 < 0 )
  {
    v37 = 110LL;
    goto LABEL_40;
  }
  LOBYTE(v16) = 3;
  LOBYTE(v15) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
    v15,
    v16);
  v17 = v2->lpVtbl->QueryService;
  v18 = v3[35];
  v3[35] = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v17)(
    v2,
    &SID_VirtualDesktopManager,
    &GUID_b2f925b9_5a0f_4d2e_9f4d_2b1507593c10,
    v3 + 35);
  LOBYTE(v19) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ShellWindowingShowMaximized>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ShellWindowingShowMaximized>::GetImpl'::`2'::impl,
    v19);
  if ( IsUserOOBE() )
    goto LABEL_18;
  v1598 = 0LL;
  v1509 = 0;
  v1510 = 0;
  v1481 = 0LL;
  v1320 = 0;
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v1486 = -1;
  v38 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount )
    goto LABEL_91;
  v1258 = 0;
  v39 = 0LL;
  v40 = MemoryAlloc(0x338uLL);
  if ( !v40 )
    goto LABEL_57;
  v41 = 0;
  v42 = -1;
  v43 = 0;
  v44 = 0;
  v45 = v40 + 7;
  v46 = (unsigned __int8 *)&unk_180697D32;
  v47 = 103LL;
  do
  {
    v48 = v46[1] | ((*v46 | ((*(v46 - 1) | (*(v46 - 2) << 8)) << 8)) << 8);
    v49 = v46[5] | ((v46[4] | ((v46[3] | (v46[2] << 8)) << 8)) << 8);
    v50 = v48 ^ v44;
    v46 += 8;
    v51 = v50 ^ v43 ^ v49 ^ 0xAC987321;
    v52 = (4991 * __ROL4__(v51 + 1419157410, 5) + __ROL4__(v51, 10)) ^ v50;
    v53 = (43881 * __ROR4__(v52 + 133239679, 9) - __ROL4__(v52, 2)) ^ v51;
    v54 = (24670 * v53 - (v53 >> 13) - 123127970) ^ v52;
    v55 = (2033 * __ROL4__(v54 ^ 0xAB69, 6) - __ROL4__(v54, 2)) ^ v53;
    v56 = (133239679 - (v55 ^ 0xAB69605E)) ^ v54;
    v57 = (43881 * (v56 ^ 0x137F)) ^ __ROR4__(v56, 6) ^ v55;
    v58 = (24670 * __ROR4__(v57 + 133239679, 15) + __ROL4__(v57, 2)) ^ v56;
    v59 = (2033 * __ROR4__(v58 + 1419157410, 14) - __ROL4__(v58, 8)) ^ v57;
    v60 = (4991 * __ROR4__(v59 ^ 0xAB69605E, 12)) ^ __ROR4__(v59, 10) ^ v58;
    v61 = (v60 >> 10) ^ (43881 * (v60 ^ 0x7F1)) ^ v59;
    v62 = (2033 * (__ROR4__(~v61, 5) + 24670)) ^ v60;
    v63 = v61 ^ (v62 - 2033) ^ 0xAB69605E;
    v64 = (4991 * __ROL4__(v61 ^ (v62 - 2033) ^ 0xAB6967AF, 2) + (v63 >> 2)) ^ v62;
    v65 = (43881 * __ROR4__(v64 - 133239679, 6) + __ROL4__(v64, 7)) ^ v63;
    v66 = (24670 * (v65 ^ 0x137F) + __ROR4__(v65, 9)) ^ v64;
    v67 = (2033 * __ROL4__(v66 ^ 0xAB69, 5) + __ROL4__(v66, 7)) ^ v65;
    v68 = v66 ^ v67 ^ 0xAC987321;
    v69 = (4991 * __ROR4__(v68, 3) - 219010071) ^ v67;
    v70 = (24670 * __ROR4__(v69 - 133239679, 1) - __ROR4__(v69, 6)) ^ v68;
    v71 = (2033 * __ROL4__(v70 - 1419157410, 3) + __ROL4__(v70, 14)) ^ v69;
    v72 = (4991 * __ROL4__(v71 - 1419157410, 15) - __ROR4__(v71, 14)) ^ v70;
    v73 = (v72 >> 3) ^ (43881 * (v72 ^ 0x605E)) ^ v71;
    v74 = (24670 * __ROL4__(v73 ^ 0x7F1137F, 4)) ^ __ROL4__(v73, 2) ^ v72 ^ v41;
    v75 = v42 ^ v73;
    *(v45 - 4) = v74;
    v76 = __ROR4__(v74, 8);
    *v45 = v75;
    v77 = __ROR4__(v75, 8);
    *(v45 - 5) = v76;
    v78 = __ROR4__(v76, 8);
    *(v45 - 1) = v77;
    v79 = __ROR4__(v77, 8);
    *(v45 - 6) = v78;
    v80 = __ROR4__(v78, 8);
    *(v45 - 2) = v79;
    v81 = __ROR4__(v79, 8);
    *(v45 - 7) = v80;
    *(v45 - 3) = v81;
    v44 = __ROR4__(v80, 8);
    v43 = __ROR4__(v81, 8);
    v41 = v48;
    v42 = v49;
    v45 += 8;
    --v47;
  }
  while ( v47 );
  v82 = 0LL;
  v83 = 0;
  v39 = 0LL;
  v84 = 0;
  do
    v83 ^= v40[v82++];
  while ( v82 < 0x338 );
  if ( v83 != 64LL )
  {
    MemoryFree(v40);
LABEL_57:
    v84 = -1073741702;
    goto LABEL_58;
  }
  v39 = v40;
  v88 = (const WCHAR *)v40;
  v40[823] = 0;
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  if ( *v40 )
  {
    v89 = 0;
    while ( 1 )
    {
      v90 = v88;
      v91 = -1LL;
      v84 = 0;
      do
        ++v91;
      while ( v88[v91] );
      v92 = &v88[v91];
      v93 = (char *)&WARBIRD::g_arModuleInfo + 24 * v89;
      if ( !GetModuleHandleExW(0, v90, (HMODULE *)v93) )
        break;
      if ( **(_WORD **)v93 == 23117
        && (v94 = *(int *)(*(_QWORD *)v93 + 60LL), (unsigned int)v94 < 0x10000000)
        && (v95 = *(_QWORD *)v93 + v94, v95 >= *(_QWORD *)v93)
        && *(_DWORD *)v95 == 17744 )
      {
        if ( ((*(_WORD *)(v95 + 24) - 267) & 0xFEFF) != 0 )
        {
          v84 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v93 + 12) = *(_QWORD *)(v95 + 136);
          *((_DWORD *)v93 + 2) = *(_DWORD *)(v95 + 80);
        }
      }
      else
      {
        v84 = -1073741701;
      }
      v96 = *(_DWORD *)(v92 + 1);
      v88 = v92 + 3;
      for ( i = 0; i < v96; ++i )
      {
        v98 = (const CHAR *)v88;
        v99 = -1LL;
        do
          ++v99;
        while ( *((_BYTE *)v88 + v99) );
        v88 = (const WCHAR *)((char *)v88 + v99 + 1);
        if ( v84 < 0 )
        {
          v101 = v1258;
        }
        else
        {
          ProcAddress = (void **)GetProcAddress(*(HMODULE *)v93, v98);
          if ( !ProcAddress )
            goto LABEL_58;
          v101 = v1258;
          (&WARBIRD::g_FuncAddress)[v1258] = ProcAddress;
        }
        v1258 = v101 + 1;
      }
      ++v89;
      if ( !*(_BYTE *)v88 )
        goto LABEL_58;
    }
    v84 = -1073741702;
LABEL_58:
    if ( !v39 )
      goto LABEL_60;
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v39);
LABEL_60:
  if ( v84 >= 0 )
  {
    v38 = g_WarbirdSecureFunctionsRefCount;
LABEL_91:
    g_WarbirdSecureFunctionsRefCount = v38 + 1;
    goto LABEL_92;
  }
  v86 = (HMODULE *)&WARBIRD::g_arModuleInfo;
  v87 = 4LL;
  do
  {
    if ( *v86 )
      FreeLibrary(*v86);
    v86 += 3;
    --v87;
  }
  while ( v87 );
  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
  memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_92:
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  String1 = 0LL;
  v1555 = 0LL;
  v102 = 0;
  v103 = 0;
  if ( NtCurrentPeb()->SessionId )
  {
    v104 = ((__int64 (*)(void))off_1807A9210)();
    if ( !v104 )
      goto LABEL_102;
    v1556 = 0LL;
    v105 = 0LL;
    v106 = 0LL;
    while ( 1 )
    {
      v107 = 0LL;
      if ( v106 )
        v107 = v106;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned __int64 *))off_1807A9230)(
                           v104,
                           2LL,
                           v107,
                           v105,
                           &v1512) )
      {
        String1 = v106;
        goto LABEL_113;
      }
      LastError = GetLastError();
      if ( LastError != 122 )
        break;
      if ( v106 )
        goto LABEL_107;
      v106 = (wchar_t *)MemoryAlloc((unsigned int)v1512);
      if ( !v106 )
      {
        v103 = -2147024882;
LABEL_113:
        v1556 = 0LL;
        goto LABEL_114;
      }
      v1556 = v106;
      v105 = (unsigned int)v1512;
    }
    if ( !LastError )
    {
LABEL_107:
      v103 = -2147467259;
      goto LABEL_114;
    }
    if ( LastError > 0 )
      v103 = (unsigned __int16)LastError | 0x80070000;
    else
      v103 = LastError;
LABEL_114:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1556);
    if ( v103 < 0 )
      goto LABEL_145;
    v110 = off_1807A9228;
    CurrentThreadId = GetCurrentThreadId();
    v112 = ((__int64 (__fastcall *)(_QWORD))v110)(CurrentThreadId);
    if ( !v112 )
    {
      v103 = GetLastError();
      v113 = v103 < 0;
      if ( v103 > 0 )
      {
        v103 = (unsigned __int16)v103 | 0x80070000;
        v113 = v103 < 0;
      }
      if ( !v113 )
        v103 = -2147467259;
      goto LABEL_145;
    }
    v1557 = 0LL;
    v103 = 0;
    v114 = 0LL;
    v115 = 0LL;
    while ( 1 )
    {
      v116 = 0LL;
      if ( v115 )
        v116 = v115;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64, unsigned int *))off_1807A9230)(
                           v112,
                           2LL,
                           v116,
                           v114,
                           &v1515) )
      {
        v1555 = v115;
        goto LABEL_135;
      }
      v117 = GetLastError();
      if ( v117 != 122 )
        break;
      if ( v115 )
        goto LABEL_129;
      v115 = (wchar_t *)MemoryAlloc(v1515);
      if ( !v115 )
      {
        v103 = -2147024882;
LABEL_135:
        v1557 = 0LL;
        goto LABEL_136;
      }
      v1557 = v115;
      v114 = v1515;
    }
    if ( !v117 )
    {
LABEL_129:
      v103 = -2147467259;
      goto LABEL_136;
    }
    if ( v117 > 0 )
      v103 = (unsigned __int16)v117 | 0x80070000;
    else
      v103 = v117;
LABEL_136:
    SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1557);
    if ( v103 < 0 )
      goto LABEL_145;
    if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1555 && !wcscmp_0(v1555, L"Default") )
    {
      v1487 = 0;
      CurrentProcess = GetCurrentProcess();
      if ( (unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1487, 4LL) )
      {
        if ( (v1487 & 0xF) == 0 )
          v102 = 1;
        goto LABEL_144;
      }
LABEL_102:
      v103 = GetLastError();
      v109 = v103 < 0;
      if ( v103 > 0 )
      {
        v103 = (unsigned __int16)v103 | 0x80070000;
        v109 = v103 < 0;
      }
      if ( !v109 )
        v103 = -2147467259;
      goto LABEL_145;
    }
  }
LABEL_144:
  v1320 = v102;
LABEL_145:
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1555);
  SP<unsigned short,SP_MEM<unsigned short>>::Reset(&String1);
  v119 = 0;
  if ( v103 >= 0 )
    v119 = v1320;
  v1418 = v119;
  v120 = 4LL;
  v121 = LocalAlloc(0x40u, 4uLL);
  v1513 = v121;
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1481);
  if ( !v121 )
  {
    v1481 = 0LL;
    v122 = -2147024882;
LABEL_149:
    v123 = v1487;
    goto LABEL_150;
  }
  v1481 = (SIZE_T)v121;
  v127 = 0LL;
  v1302 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  *(_OWORD *)v1622 = 0LL;
  v128 = GetProcessHeap();
  v129 = (WCHAR *)HeapAlloc(v128, 8u, 0xA0uLL);
  v122 = -1073741801;
  if ( !v129 )
    goto LABEL_164;
  *(_OWORD *)v129 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
  *((_OWORD *)v129 + 1) = *((_OWORD *)&_ImageBase + 504323);
  *((_OWORD *)v129 + 2) = *((_OWORD *)&_ImageBase + 504324);
  *((_OWORD *)v129 + 3) = *((_OWORD *)&_ImageBase + 504325);
  *((_OWORD *)v129 + 4) = *((_OWORD *)&_ImageBase + 504326);
  *((_OWORD *)v129 + 5) = *((_OWORD *)&_ImageBase + 504327);
  *((_OWORD *)v129 + 6) = *((_OWORD *)&_ImageBase + 504328);
  *((_OWORD *)v129 + 7) = *((_OWORD *)&_ImageBase + 504329);
  *((_OWORD *)v129 + 8) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
  *((_OWORD *)v129 + 9) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
  lpModuleName = v129;
  v130 = GetProcessHeap();
  v131 = (wchar_t *)HeapAlloc(v130, 8u, 8uLL);
  if ( !v131 )
  {
    v127 = v129;
LABEL_164:
    v132 = v119;
    v1462 = -1073741801;
LABEL_166:
    v120 = 4LL;
    goto LABEL_291;
  }
  *(_QWORD *)v131 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
  v1302 = v131;
  v1388 = (wchar_t *)__rdtsc();
  v1516 = 0;
  v122 = RtlUIntAdd(4u, 4, (unsigned int *)&v1517);
  v1462 = v122;
  if ( v122 < 0 )
  {
    v132 = v119;
    goto LABEL_660;
  }
  v134 = RtlUIntAdd(0, v1517, &v1516);
  v122 = v134 | 0x10000000;
  v1462 = v134 | 0x10000000;
  v132 = v119;
  if ( v134 < 0 )
    goto LABEL_179;
  v122 = RtlUIntAdd(v135, 160, (unsigned int *)&v1518);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_660;
  v136 = RtlUIntAdd(v1516, v1518, &v1516);
  v122 = v137 | v136;
  v1462 = v137 | v136;
  if ( (v137 | v136) < 0 )
    goto LABEL_179;
  v122 = RtlUIntAdd(v135, (int)v135 + 4, (unsigned int *)&v1543);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_660;
  v138 = RtlUIntAdd(v1516, v1543, &v1516);
  v122 = v139 | v138;
  v1462 = v139 | v138;
  if ( (v139 | v138) < 0 )
    goto LABEL_179;
  v122 = RtlUIntAdd(v135, (int)v135 + 4, (unsigned int *)&v1544);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_660;
  v140 = RtlUIntAdd(v1516, v1544, &v1516);
  v122 = v142 | v140;
  v1462 = v142 | v140;
  if ( (v142 | v140) < 0 )
  {
LABEL_179:
    v127 = v129;
LABEL_290:
    v120 = v135;
    goto LABEL_291;
  }
  if ( StringCchLengthW(L"Shell-Windowing-ShowMaximized", v141, &pcchLength) < 0 )
  {
    v122 = -1073741762;
    v1462 = -1073741762;
    goto LABEL_179;
  }
  v122 = RtlUIntAdd(v135, 2 * (int)++pcchLength, (unsigned int *)&v1545);
  v1462 = v122;
  if ( v122 < 0 )
  {
LABEL_660:
    v127 = v129;
    v120 = v133;
    goto LABEL_291;
  }
  v143 = RtlUIntAdd(v1516, v1545, &v1516);
  v122 = v144 | v143;
  v1462 = v144 | v143;
  if ( (v144 | v143) < 0 )
    goto LABEL_179;
  v122 = RtlUIntAdd(v135, v135, (unsigned int *)&v1546);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_226;
  v146 = RtlUIntAdd(v1516, v1546, &v1516);
  v122 = v147 | v146;
  v1462 = v147 | v146;
  if ( (v147 | v146) < 0 )
    goto LABEL_179;
  v122 = RtlUIntAdd(v135, v135, (unsigned int *)&v1547);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_226;
  v148 = RtlUIntAdd(v1516, v1547, &v1516);
  v122 = v149 | v148;
  v1462 = v149 | v148;
  if ( (v149 | v148) < 0 )
    goto LABEL_179;
  HIDWORD(lpMem[0]) = v1516;
  v150 = v1516;
  v151 = GetProcessHeap();
  v152 = HeapAlloc(v151, 8u, v150);
  v153 = v152;
  if ( !v152 )
  {
    v122 = -1073741801;
    goto LABEL_188;
  }
  lpMem[1] = v152;
  LODWORD(lpMem[0]) = 0;
  v122 = RtlULongLongAdd((unsigned __int64)v152, 4LL, (unsigned __int64 *)&v1616);
  v1462 = v122;
  if ( v122 < 0 )
  {
LABEL_178:
    v132 = v119;
    goto LABEL_179;
  }
  if ( v153 + 2 > (_DWORD *)((char *)v153 + HIDWORD(lpMem[0])) )
  {
    v122 = -1073741789;
    v1462 = -1073741789;
    goto LABEL_178;
  }
  *v153 = v135;
  *v1616 = (_DWORD)v154;
  v155 = ++LODWORD(lpMem[0]);
  if ( lpMem[1] != v154 )
  {
    v164 = (int *)lpMem[1];
    v1559 = (int *)lpMem[1];
    if ( !v155 )
    {
LABEL_222:
      v122 = RtlULongLongAdd((unsigned __int64)v164, 4LL, (unsigned __int64 *)&v1624);
      v1462 = v122;
      if ( v122 < 0 )
        goto LABEL_198;
      if ( v164 + 41 > (int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
      {
        v122 = -1073741789;
LABEL_188:
        v1462 = v122;
LABEL_189:
        v132 = v119;
        v127 = v129;
        goto LABEL_192;
      }
      *v164 = 160;
      v162 = v1624;
      *v1624 = *(_OWORD *)v129;
      v162[1] = *((_OWORD *)v129 + 1);
      v162[2] = *((_OWORD *)v129 + 2);
      v162[3] = *((_OWORD *)v129 + 3);
      v162[4] = *((_OWORD *)v129 + 4);
      v162[5] = *((_OWORD *)v129 + 5);
      v162[6] = *((_OWORD *)v129 + 6);
      v162[7] = *((_OWORD *)v129 + 7);
      v162[8] = *((_OWORD *)v129 + 8);
      v162[9] = *((_OWORD *)v129 + 9);
      v157 = (int)lpMem[0];
      goto LABEL_210;
    }
    while ( 1 )
    {
      v122 = RtlUIntAdd(4u, *v164, &v1549);
      v1462 = v122;
      if ( v122 < 0 )
        break;
      v122 = RtlULongLongAdd((unsigned __int64)v164, v1549, (unsigned __int64 *)&v1559);
      v1462 = v122;
      if ( v122 < 0 )
        goto LABEL_189;
      v164 = v1559;
      if ( v165 + 1 >= v166 )
        goto LABEL_222;
    }
    v132 = v119;
LABEL_226:
    v127 = v129;
LABEL_229:
    v120 = v145;
    goto LABEL_291;
  }
  v120 = 4LL;
  v122 = RtlUIntAdd(4u, 160, (unsigned int *)&v1548);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_213;
  v122 = RtlUIntAdd(HIDWORD(lpMem[0]), v1548, (unsigned int *)lpMem + 1);
  v1462 = v122;
  v157 = (int)lpMem[0];
  if ( v122 < 0 )
  {
LABEL_198:
    v132 = v119;
    goto LABEL_191;
  }
LABEL_210:
  v163 = v157 + 1;
  LODWORD(lpMem[0]) = v163;
  v120 = 4LL;
  if ( lpMem[1] == v156 )
  {
    v122 = RtlUIntAdd(4u, 8, (unsigned int *)&v1550);
    v1462 = v122;
    if ( v122 >= 0 )
    {
      v122 = RtlUIntAdd(HIDWORD(lpMem[0]), v1550, (unsigned int *)lpMem + 1);
      v1462 = v122;
      v159 = (int)lpMem[0];
      if ( v122 < 0 )
      {
LABEL_202:
        v132 = v119;
        goto LABEL_191;
      }
      goto LABEL_231;
    }
LABEL_213:
    v132 = v119;
LABEL_217:
    v127 = (WCHAR *)lpModuleName;
    goto LABEL_291;
  }
  v168 = (int *)lpMem[1];
  v1560 = (int *)lpMem[1];
  if ( v163 )
  {
    do
    {
      v122 = RtlUIntAdd(4u, *v168, &v1551);
      v1462 = v122;
      if ( v122 < 0 )
        goto LABEL_213;
      v122 = RtlULongLongAdd((unsigned __int64)v168, v1551, (unsigned __int64 *)&v1560);
      v1462 = v122;
      if ( v122 < 0 )
        goto LABEL_213;
      v168 = v1560;
    }
    while ( v169 + 1 < v170 );
  }
  v122 = RtlULongLongAdd((unsigned __int64)v168, 4LL, (unsigned __int64 *)&v1625);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_202;
  if ( v168 + 3 > (int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
    goto LABEL_211;
  *v168 = 8;
  *v1625 = *(_QWORD *)v131;
  v159 = (int)lpMem[0];
LABEL_231:
  v167 = v159 + 1;
  LODWORD(lpMem[0]) = v167;
  if ( lpMem[1] != v158 )
  {
    v171 = (int *)lpMem[1];
    v1561 = (int *)lpMem[1];
    if ( v167 )
    {
      do
      {
        v122 = RtlUIntAdd(4u, *v171, &v1489);
        v1462 = v122;
        if ( v122 < 0 )
          goto LABEL_213;
        v122 = RtlULongLongAdd((unsigned __int64)v171, v1489, (unsigned __int64 *)&v1561);
        v1462 = v122;
        if ( v122 < 0 )
          goto LABEL_213;
        v171 = v1561;
      }
      while ( v172 + 1 < v173 );
    }
    v122 = RtlULongLongAdd((unsigned __int64)v171, 4LL, (unsigned __int64 *)&v1626);
    v1462 = v122;
    if ( v122 < 0 )
      goto LABEL_206;
    if ( v171 + 3 <= (int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
    {
      *v171 = 8;
      *v1626 = v1388;
      v161 = (int)lpMem[0];
      goto LABEL_239;
    }
LABEL_211:
    v122 = -1073741789;
    goto LABEL_212;
  }
  v122 = RtlUIntAdd(4u, 8, (unsigned int *)&v1552);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_213;
  v122 = RtlUIntAdd(HIDWORD(lpMem[0]), v1552, (unsigned int *)lpMem + 1);
  v1462 = v122;
  v161 = (int)lpMem[0];
  if ( v122 < 0 )
  {
LABEL_206:
    v132 = v119;
    goto LABEL_191;
  }
LABEL_239:
  LODWORD(lpMem[0]) = v161 + 1;
  if ( StringCchLengthW(L"Shell-Windowing-ShowMaximized", v160, &v1562) < 0 )
  {
    v122 = -1073741762;
LABEL_212:
    v1462 = v122;
    goto LABEL_213;
  }
  v122 = RtlULongLongAdd(v1562, 1LL, &v1562);
  v1462 = v122;
  if ( v122 >= 0 )
  {
    if ( 2 * (_DWORD)v1562 )
    {
      if ( lpMem[1] == v175 )
      {
        v122 = RtlUIntAdd(4u, 2 * (int)v1562, (unsigned int *)&v1490);
        v1462 = v122;
        if ( v122 >= 0 )
        {
          v122 = RtlUIntAdd(HIDWORD(lpMem[0]), v1490, (unsigned int *)lpMem + 1);
          v1462 = v122;
          v174 = (unsigned int)lpMem[0];
          if ( v122 >= 0 )
          {
            v174 = ++LODWORD(lpMem[0]);
            v122 = (int)v175;
            v1462 = (int)v175;
          }
        }
      }
      else
      {
        v176 = (int *)lpMem[1];
        v1563 = (int *)lpMem[1];
        if ( v174 )
        {
          while ( 1 )
          {
            v122 = RtlUIntAdd(4u, *v176, &v1491);
            v1462 = v122;
            if ( v122 < 0 )
              break;
            v122 = RtlULongLongAdd((unsigned __int64)v176, v1491, (unsigned __int64 *)&v1563);
            v1462 = v122;
            if ( v122 < 0 )
              break;
            v176 = v1563;
            if ( v177 + 1 >= v174 )
              goto LABEL_257;
          }
        }
        else
        {
LABEL_257:
          v122 = RtlULongLongAdd((unsigned __int64)v176, 4LL, (unsigned __int64 *)&v1627);
          v1462 = v122;
          v175 = 0LL;
          if ( v122 < 0 )
            goto LABEL_263;
          if ( (char *)v176 + v178 + 4 > (char *)lpMem[1] + HIDWORD(lpMem[0]) )
          {
            v122 = -1073741789;
            v1462 = -1073741789;
            goto LABEL_263;
          }
          *v176 = v178;
          memcpy_0(v1627, L"Shell-Windowing-ShowMaximized", (unsigned int)v178);
          v174 = ++LODWORD(lpMem[0]);
        }
        v175 = 0LL;
      }
    }
    else
    {
      v122 = -1073741811;
      v1462 = -1073741811;
    }
  }
LABEL_263:
  v132 = v119;
  if ( v122 < 0 )
    goto LABEL_191;
  if ( lpMem[1] == v175 )
  {
    v122 = RtlUIntAdd(4u, 4, (unsigned int *)&v1492);
    v1462 = v122;
    if ( v122 < 0 )
    {
LABEL_228:
      v127 = (WCHAR *)lpModuleName;
      goto LABEL_229;
    }
    v122 = RtlUIntAdd(HIDWORD(lpMem[0]), v1492, (unsigned int *)lpMem + 1);
    v1462 = v122;
    v180 = (int)lpMem[0];
    if ( v122 < 0 )
    {
LABEL_267:
      v132 = v119;
      goto LABEL_191;
    }
  }
  else
  {
    v182 = (int *)lpMem[1];
    v1564 = (int *)lpMem[1];
    if ( v174 )
    {
      while ( 1 )
      {
        v122 = RtlUIntAdd(4u, *v182, &v1493);
        v1462 = v122;
        if ( v122 < 0 )
          break;
        v122 = RtlULongLongAdd((unsigned __int64)v182, v1493, (unsigned __int64 *)&v1564);
        v1462 = v122;
        if ( v122 < 0 )
          goto LABEL_190;
        v182 = v1564;
        if ( v183 + 1 >= v184 )
          goto LABEL_278;
      }
LABEL_281:
      v132 = v119;
      goto LABEL_228;
    }
LABEL_278:
    v122 = RtlULongLongAdd((unsigned __int64)v182, 4LL, (unsigned __int64 *)&v1628);
    v1462 = v122;
    if ( v122 < 0 )
      goto LABEL_267;
    if ( v182 + 2 > (int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
    {
      v122 = -1073741789;
      v1462 = -1073741789;
      goto LABEL_190;
    }
    *v182 = 4;
    *v1628 = v119;
    v180 = (int)lpMem[0];
  }
  v181 = v180 + 1;
  LODWORD(lpMem[0]) = v181;
  if ( lpMem[1] == v179 )
  {
    v122 = RtlUIntAdd(4u, 4, (unsigned int *)&v1514);
    v1462 = v122;
    if ( v122 >= 0 )
    {
      v122 = RtlUIntAdd(HIDWORD(lpMem[0]), v1514, (unsigned int *)lpMem + 1);
      v1462 = v122;
      if ( v122 >= 0 )
      {
        ++LODWORD(lpMem[0]);
        goto LABEL_308;
      }
LABEL_307:
      v132 = v119;
      goto LABEL_191;
    }
    goto LABEL_281;
  }
  v185 = (int *)lpMem[1];
  v1565 = (int *)lpMem[1];
  if ( v181 )
  {
    do
    {
      v122 = RtlUIntAdd(4u, *v185, &v1494);
      v1462 = v122;
      if ( v122 < 0 )
        goto LABEL_190;
      v122 = RtlULongLongAdd((unsigned __int64)v185, v1494, (unsigned __int64 *)&v1565);
      v1462 = v122;
      if ( v122 < 0 )
        goto LABEL_190;
      v185 = v1565;
    }
    while ( v186 + 1 < v187 );
  }
  v122 = RtlULongLongAdd((unsigned __int64)v185, 4LL, (unsigned __int64 *)&v1629);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_307;
  if ( v185 + 2 > (int *)((char *)lpMem[1] + HIDWORD(lpMem[0])) )
  {
    v122 = -1073741789;
    v1462 = -1073741789;
    v132 = v119;
    goto LABEL_289;
  }
  *v185 = v135;
  *v1629 = v135;
  ++LODWORD(lpMem[0]);
LABEL_308:
  v122 = RtlUIntAdd(v135, v135, &v1495);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_190;
  v197 = v1495;
  v1496 = v1495;
  v122 = RtlUIntAdd(v196, 8, (unsigned int *)&v1497);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_190;
  v122 = RtlUIntAdd(v197, v1497, &v1496);
  v1462 = v122;
  if ( v122 < 0 )
  {
LABEL_320:
    v132 = v119;
    goto LABEL_191;
  }
  v122 = RtlUIntAdd(v198, v198, (unsigned int *)&v1498);
  v1462 = v122;
  if ( v122 < 0 )
  {
LABEL_190:
    v132 = v119;
LABEL_191:
    v127 = (WCHAR *)lpModuleName;
LABEL_192:
    v120 = 4LL;
    goto LABEL_291;
  }
  v122 = RtlUIntAdd(v1496, v1498, &v1496);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_320;
  v122 = RtlUIntAdd(v199, v199, (unsigned int *)&v1499);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_190;
  v122 = RtlUIntAdd(v1496, v1499, &v1496);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_320;
  v122 = RtlUIntAdd(v200, v200, (unsigned int *)&v1500);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_190;
  v122 = RtlUIntAdd(v1496, v1500, &v1496);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_320;
  v122 = RtlUIntAdd(v201, v201, (unsigned int *)&v1485);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_190;
  v122 = RtlUIntAdd(v1496, v1485, &v1496);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_320;
  v1259 = v1496;
  v203 = v202;
  v1373 = (SIZE_T)v202;
  v204 = (unsigned int)v202;
  v205 = (WCHAR *)v202;
  v1339 = (LPCWSTR)v202;
  v1455 = v202;
  v1321 = (int)v202;
  v206 = (unsigned int *)v202;
  v1511 = v202;
  v1475 = v202;
  v1422 = (LPVOID)__rdtsc();
  v1507 = 8;
  v208 = RtlUIntAdd(8u, SHIDWORD(lpMem[0]), &v1507);
  if ( v208 >= 0 )
  {
    v209 = (v1507 + 7) & 0xFFFFFFF8;
    if ( v209 < v1507 )
    {
      v122 = -805306219;
LABEL_325:
      v1462 = v122;
      v132 = v1418;
      goto LABEL_191;
    }
    v1507 = (v1507 + 7) & 0xFFFFFFF8;
    v210 = v209;
    v211 = GetProcessHeap();
    v212 = (char *)HeapAlloc(v211, 8u, v210);
    v213 = v212;
    if ( !v212 )
    {
      v122 = -805306345;
      goto LABEL_325;
    }
    v1566[0] = v212;
    *(_DWORD *)v212 = lpMem[0];
    v208 = RtlULongLongAdd((unsigned __int64)v212, 4LL, (unsigned __int64 *)v1566);
    if ( v208 < 0
      || (v215 = v1566[0],
          *(_DWORD *)v1566[0] = HIDWORD(lpMem[0]),
          v208 = RtlULongLongAdd((unsigned __int64)v215, v214, (unsigned __int64 *)v1566),
          v208 < 0) )
    {
      v216 = GetProcessHeap();
      HeapFree(v216, 0, v213);
      v204 = (unsigned int)v205;
    }
    else
    {
      *(_QWORD *)&v213[v1507 - 8] = v1422;
      memcpy_0(v1566[0], lpMem[1], HIDWORD(lpMem[0]));
      v203 = (unsigned __int8 *)v213;
      v1373 = (SIZE_T)v213;
      v204 = v1507;
    }
    v207 = 0LL;
  }
  v122 = v208 | 0x10000000;
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_411;
  v1423 = v207;
  if ( !v203 )
  {
    v122 = -805306355;
    goto LABEL_325;
  }
  v217 = v204;
  v1402 = v204;
  if ( v204 )
  {
    Size = v204 + 8;
    v218 = (char *)MemoryAlloc(v204 + 8LL);
    Src = v218;
    if ( v218 )
    {
      v219 = 0;
      for ( j = 0LL; j < v204; ++j )
        v219 ^= v203[j];
      v1256 = v219;
      v1689 = 0xC81ECB17B1B54A58uLL;
      v221 = v203;
      v222 = v218;
      v1271 = (SIZE_T)v218;
      v223 = 0;
      v224 = -1;
      v1463 = 0;
      v1329 = 0;
      v225 = v217 & 7;
      if ( (v217 & 7) != 0 )
      {
        v226 = 0;
        v227 = 0;
        v1291 = 0;
        v228 = 56;
        do
        {
          v229 = *v221++;
          if ( v227 >= 4 )
            v226 |= v229 << v228;
          else
            v223 |= v229 << (v228 - 32);
          v1463 = v226;
          v1329 = v223;
          v227 = v1291 + 1;
          v1291 = v227;
          v228 -= 8;
        }
        while ( (int)v227 < (int)v225 );
        v223 ^= 0xB17A307A;
        v230 = v226 ^ 0x42F6B18D;
        v231 = v223;
        v232 = v230;
        v1373 = (SIZE_T)v203;
        v233 = 0;
        v234 = (_BYTE *)v1271;
        do
        {
          v1272 = (SIZE_T)(v234 + 1);
          if ( v233 >= 4 )
          {
            v232 = __ROL4__(v232, 8);
            v235 = v232;
          }
          else
          {
            v231 = __ROL4__(v231, 8);
            v235 = v231;
          }
          *v234 = v235;
          ++v233;
          ++v234;
        }
        while ( (int)v233 < (int)v225 );
        v222 = (char *)v1272;
        v205 = (WCHAR *)v1339;
        v206 = (unsigned int *)v1339;
        v217 = v1402;
        if ( v225 <= 4 )
        {
          v224 = 0;
          if ( v225 >= 4 )
            goto LABEL_355;
          v223 = v223 >> (8 * (4 - v225)) << (8 * (4 - v225));
        }
        else
        {
          v224 = v230 >> (8 * (8 - v225)) << (8 * (8 - v225));
        }
        v222 = (char *)v1272;
      }
LABEL_355:
      v1273 = v217 >> 3;
      if ( v217 >> 3 )
      {
        v236 = WORD2(v1689);
        v237 = v222 + 7;
        v238 = v221 + 2;
        v239 = v1273;
        v240 = v1463;
        v241 = v1329;
        do
        {
          v242 = v238[1] | ((*v238 | ((*(v238 - 1) | (*(v238 - 2) << 8)) << 8)) << 8);
          v243 = v238[5] | ((v238[4] | ((v238[3] | (v238[2] << 8)) << 8)) << 8);
          v244 = v243 ^ v224;
          v245 = HIDWORD(v1689) ^ (v244 - 19032) ^ v242 ^ v223;
          v246 = (__ROR4__(HIDWORD(v1689) ^ v245, 15) * WORD1(v1689) + __ROR4__(v245, 7)) ^ v244;
          v247 = (__ROR4__(v246 - 1313519016, 9) * v236 - __ROR4__(v246, 10)) ^ v245;
          v248 = (__ROL4__(v247 ^ v236, 4) * HIWORD(v1689) + __ROL4__(v247, 5)) ^ v246;
          v249 = (HIDWORD(v1689) - (v248 ^ 0xB1B54A58)) ^ v247;
          v250 = (WORD1(v1689) * (v249 - 19032) - (v249 >> 6)) ^ v248;
          v251 = (19032 * (v236 ^ __ROR4__(v250, 15))) ^ v249;
          v252 = (v236 * (HIWORD(v1689) + __ROR4__(~v251, 3))) ^ v250;
          v253 = (v252 - 19032 - HIDWORD(v1689)) ^ v251;
          v254 = (WORD1(v1689) * (v253 ^ HIWORD(v1689))) ^ __ROR4__(v253, 10) ^ v252;
          v255 = (__ROL4__(v254 ^ 0x4A58, 6) * v236) ^ __ROR4__(v254, 3) ^ v253;
          v256 = (19032 * (__ROR4__(v255, 15) - HIWORD(v1689))) ^ v254;
          v257 = (v256 >> 15) ^ (19032 * __ROL4__(v256 - v236, 3)) ^ (v256 >> 1) ^ (19032 * (v256 ^ HIWORD(v1689))) ^ v255;
          v258 = (WORD1(v1689) * (v257 - v236) - (v257 >> 13)) ^ v256;
          v259 = (__ROR4__(-1313519016 - v258, 9) * v236) ^ __ROR4__(v258, 11) ^ v257;
          v260 = (v259 + 1313519016 - HIWORD(v1689)) ^ v258;
          v261 = (19032 * (v260 ^ WORD1(v1689)) - __ROR4__(v260, 7)) ^ v259;
          v262 = (__ROL4__(v261 ^ HIWORD(v1689), 4) * WORD1(v1689) - __ROR4__(v261, 16)) ^ v260;
          v263 = (__ROR4__(-1313519016 - v262, 10) * v236 + __ROR4__(v262, 4)) ^ v261;
          v264 = (__ROR4__(v263 + 1313519016, 4) * HIWORD(v1689)) ^ __ROR4__(v263, 9) ^ v262;
          v265 = (19032 * __ROL4__(HIDWORD(v1689) ^ v264, 8) - __ROL4__(v264, 2)) ^ v263;
          v266 = (__ROR4__(HIDWORD(v1689) - v265, 11) * WORD1(v1689) - __ROR4__(v265, 12)) ^ v264;
          v267 = (v266 >> 8) ^ (v236 * (v266 ^ WORD1(v1689))) ^ v265;
          v268 = v267 ^ HIDWORD(v1689) ^ 0xB1B54A58;
          v269 = v241 ^ v267;
          v270 = v240 ^ v268 ^ v266;
          *(v237 - 4) = v269;
          v271 = __ROR4__(v269, 8);
          *v237 = v270;
          v272 = __ROR4__(v270, 8);
          *(v237 - 5) = v271;
          v273 = __ROR4__(v271, 8);
          *(v237 - 1) = v272;
          v274 = __ROR4__(v272, 8);
          *(v237 - 6) = v273;
          v275 = __ROR4__(v273, 8);
          *(v237 - 2) = v274;
          v276 = __ROR4__(v274, 8);
          *(v237 - 7) = v275;
          *(v237 - 3) = v276;
          v223 = __ROR4__(v275, 8);
          v224 = __ROR4__(v276, 8);
          v241 = v242;
          v240 = v243;
          v237 += 8;
          --v239;
          v238 += 8;
        }
        while ( v239 );
        v219 = v1256;
        v205 = (WCHAR *)v1339;
        v206 = (unsigned int *)v1339;
        v203 = (unsigned __int8 *)v1373;
        v217 = v1402;
      }
      *(_QWORD *)&Src[v217] = v219;
      v1566[3] = (void *)8;
      v1566[4] = (void *)160;
      v277 = GetProcessHeap();
      v278 = (unsigned int *)HeapAlloc(v277, 8u, 0x30uLL);
      v279 = v278;
      if ( v278 )
      {
        *v278 = Size;
        v290 = GetProcessHeap();
        v291 = HeapAlloc(v290, 8u, Size);
        if ( v291 )
        {
          *((_QWORD *)v279 + 1) = v291;
          memcpy_0(v291, Src, Size);
          v279[4] = 160;
          v292 = GetProcessHeap();
          v293 = HeapAlloc(v292, 8u, 0xA0uLL);
          v280 = 0;
          if ( v293 )
          {
            *((_QWORD *)v279 + 3) = v293;
            *v293 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
            v293[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
            v293[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
            v293[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
            v293[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
            v293[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
            v293[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
            v293[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
            v293[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
            v293[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
            v279[8] = 8;
            v294 = GetProcessHeap();
            v295 = HeapAlloc(v294, 8u, 8uLL);
            if ( v295 )
            {
              *((_QWORD *)v279 + 5) = v295;
              *v295 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
              v205 = (WCHAR *)v279;
              v281 = 0LL;
LABEL_362:
              v282 = GetProcessHeap();
              HeapFree(v282, 0, Src);
              if ( v281 )
              {
                v1274 = (void *)v281[1];
                if ( v1274 )
                {
                  v283 = GetProcessHeap();
                  HeapFree(v283, 0, v1274);
                  v281[1] = 0LL;
                }
                v1275 = (void *)v281[3];
                if ( v1275 )
                {
                  v284 = GetProcessHeap();
                  HeapFree(v284, 0, v1275);
                  v281[3] = 0LL;
                }
                v1276 = (void *)v281[5];
                if ( v1276 )
                {
                  v285 = GetProcessHeap();
                  HeapFree(v285, 0, v1276);
                  v281[5] = 0LL;
                }
                v286 = GetProcessHeap();
                HeapFree(v286, 0, v281);
              }
              v122 = v280 | 0x10000000;
              v1462 = v122;
              if ( v122 < 0 )
                goto LABEL_411;
              LODWORD(v1501) = 4;
              v288 = RtlUIntAdd(4u, *(_DWORD *)v205, (unsigned int *)&v1501);
              if ( v288 >= 0 )
              {
                v288 = RtlUIntAdd(v1501, v287, (unsigned int *)&v1501);
                if ( v288 >= 0 )
                {
                  v288 = RtlUIntAdd(v1501, *((_DWORD *)v205 + 4), (unsigned int *)&v1501);
                  if ( v288 >= 0 )
                  {
                    v288 = RtlUIntAdd(v1501, v289, (unsigned int *)&v1501);
                    if ( v288 >= 0 )
                    {
                      v288 = RtlUIntAdd(v1501, *((_DWORD *)v205 + 8), (unsigned int *)&v1501);
                      if ( v288 >= 0 )
                      {
                        v1292 = v1501;
                        v300 = v1501;
                        v301 = GetProcessHeap();
                        v302 = HeapAlloc(v301, 8u, v300);
                        v303 = v302;
                        if ( !v302 )
                          goto LABEL_460;
                        v1567 = v302;
                        *v302 = *(_DWORD *)v205;
                        v288 = RtlULongLongAdd((unsigned __int64)v302, 4LL, (unsigned __int64 *)&v1567);
                        if ( v288 >= 0 )
                        {
                          memcpy_0(v1567, *((const void **)v205 + 1), *(unsigned int *)v205);
                          v288 = RtlULongLongAdd(
                                   (unsigned __int64)v1567,
                                   *(unsigned int *)v205,
                                   (unsigned __int64 *)&v1567);
                          if ( v288 >= 0 )
                          {
                            v304 = v1567;
                            *(_DWORD *)v1567 = *((_DWORD *)v205 + 4);
                            v288 = RtlULongLongAdd((unsigned __int64)v304, 4LL, (unsigned __int64 *)&v1567);
                            if ( v288 >= 0 )
                            {
                              memcpy_0(v1567, *((const void **)v205 + 3), *((unsigned int *)v205 + 4));
                              v288 = RtlULongLongAdd(
                                       (unsigned __int64)v1567,
                                       *((unsigned int *)v205 + 4),
                                       (unsigned __int64 *)&v1567);
                              if ( v288 >= 0 )
                              {
                                v305 = v1567;
                                *(_DWORD *)v1567 = *((_DWORD *)v205 + 8);
                                v288 = RtlULongLongAdd((unsigned __int64)v305, 4LL, (unsigned __int64 *)&v1567);
                                if ( v288 >= 0 )
                                {
                                  memcpy_0(v1567, *((const void **)v205 + 5), *((unsigned int *)v205 + 8));
                                  v288 = RtlULongLongAdd(
                                           (unsigned __int64)v1567,
                                           *((unsigned int *)v205 + 8),
                                           (unsigned __int64 *)&v1567);
                                  if ( v288 >= 0 )
                                  {
                                    v1455 = v303;
                                    v1321 = v1292;
                                    goto LABEL_399;
                                  }
                                }
                              }
                            }
                          }
                        }
                        v306 = GetProcessHeap();
                        HeapFree(v306, 0, v303);
                      }
                    }
                  }
                }
              }
              v303 = v1455;
LABEL_399:
              v122 = v288 | 0x10000000;
              v1462 = v122;
              if ( v122 < 0 )
                goto LABEL_411;
              v1502 = 8;
              v307 = RtlUIntAdd(8u, v1259, &v1502);
              v122 = v309 | v307;
              v1462 = v309 | v307;
              if ( (v309 | v307) >= 0 )
              {
                v310 = (v1502 + 7) & 0xFFFFFFF8;
                if ( v310 < v1502 )
                {
                  v122 = -1073741675;
LABEL_454:
                  v1462 = v122;
                  goto LABEL_411;
                }
                v1503 = (v1502 + 7) & 0xFFFFFFF8;
                v122 = RtlUIntAdd(v310, v308, &v1503);
                v1462 = v122;
                if ( v122 < 0 )
                  goto LABEL_411;
                if ( !lpMem[1] || LODWORD(lpMem[0]) <= 1 )
                {
                  v122 = -1073741811;
                  goto LABEL_454;
                }
                v1568 = (int *)lpMem[1];
                v122 = RtlULongLongAdd((unsigned __int64)lpMem[1], 4LL, (unsigned __int64 *)&v1568);
                v1462 = v122;
                if ( v122 >= 0 )
                {
                  v122 = RtlULongLongAdd((unsigned __int64)v1568, v311, (unsigned __int64 *)&v1568);
                  v1462 = v122;
                  if ( v122 >= 0 )
                  {
                    v1293 = *v1568;
                    v122 = RtlULongLongAdd((unsigned __int64)v1568, 4LL, (unsigned __int64 *)&v1568);
                    v1462 = v122;
                    if ( v122 >= 0 )
                    {
                      if ( LODWORD(lpMem[0]) > 2 )
                      {
                        v332 = lpMem[1];
                        v1569 = lpMem[1];
                        v1455 = v303;
                        v1321 = v312;
                        while ( 1 )
                        {
                          v122 = RtlULongLongAdd((unsigned __int64)v332, 4LL, (unsigned __int64 *)&v1569);
                          v1462 = v122;
                          if ( v122 < 0 )
                            break;
                          v122 = RtlULongLongAdd((unsigned __int64)v1569, v333, (unsigned __int64 *)&v1569);
                          v1462 = v122;
                          if ( v122 < 0 )
                            break;
                          v332 = v1569;
                          if ( (unsigned int)(v334 + 1) >= 2 )
                          {
                            v122 = RtlULongLongAdd((unsigned __int64)v1569, 4LL, (unsigned __int64 *)&v1569);
                            v1462 = v122;
                            if ( v122 < 0 )
                              break;
                            LODWORD(v1504) = 4;
                            v122 = RtlUIntAdd(4u, v335, (unsigned int *)&v1504);
                            v1462 = v122;
                            v337 = 0;
                            if ( v122 < 0 )
                              goto LABEL_456;
                            v122 = RtlUIntAdd(v1504, v336, (unsigned int *)&v1504);
                            v1462 = v122;
                            v337 = 0;
                            if ( v122 < 0 )
                              goto LABEL_456;
                            v122 = RtlUIntAdd(v1504, v1293, (unsigned int *)&v1504);
                            v1462 = v122;
                            v337 = 0;
                            if ( v122 < 0 )
                              goto LABEL_456;
                            v122 = RtlUIntAdd(v1504, v338, (unsigned int *)&v1504);
                            v1462 = v122;
                            v337 = 0;
                            if ( v122 < 0 )
                              goto LABEL_456;
                            v122 = RtlUIntAdd(v1504, v339, (unsigned int *)&v1504);
                            v1462 = v122;
                            v337 = 0;
                            if ( v122 < 0 )
                              goto LABEL_456;
                            v337 = v1504;
                            v1294 = v1504;
                            if ( (unsigned int)v1504 <= 0x400000 )
                              goto LABEL_457;
                            v122 = -2147418113;
                            goto LABEL_454;
                          }
                        }
                      }
                      else
                      {
                        v122 = -1073741811;
                        v1462 = -1073741811;
                      }
                    }
                  }
                }
LABEL_411:
                if ( !v203 )
                  goto LABEL_413;
                goto LABEL_412;
              }
              v337 = 0;
LABEL_456:
              v1294 = 0;
              if ( v122 < 0 )
                goto LABEL_411;
LABEL_457:
              v1280 = (SIZE_T)v203;
              Srca = v205;
              v1374 = (SIZE_T)v303;
              v341 = v337;
              v342 = GetProcessHeap();
              v343 = (unsigned int *)HeapAlloc(v342, 8u, v341);
              if ( v343 )
              {
                v206 = v343;
                v344 = (void *)v1374;
                if ( !v1374 )
                {
                  v122 = -2147024809;
                  v1455 = 0LL;
LABEL_472:
                  v1462 = v122;
                  goto LABEL_411;
                }
                v1636[0] = v1374;
                v1637 = v1321;
                v1636[1] = v343;
                v1638 = v1294;
                v1639 = 0;
                if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                  && (v345 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                {
                  v346 = ((__int64 (__fastcall *)(__int64, _QWORD *))v345)(134LL, v1636);
                  v122 = v346 | 0x10000000;
                  v1462 = v346 | 0x10000000;
                  v347 = v1294;
                  if ( v346 >= 0 )
                  {
                    v347 = v1638;
                    v348 = v203;
                    v349 = v205;
                    goto LABEL_474;
                  }
                }
                else
                {
                  v350 = GetLastError();
                  v122 = v350;
                  if ( v350 > 0 )
                    v122 = (unsigned __int16)v350 | 0x80070000;
                  if ( v122 >= 0 )
                    v122 = -2147467259;
                  v1462 = v122;
                  v347 = v1294;
                }
                v1455 = (void *)v1374;
                if ( v122 == -805306333 )
                {
                  v122 = -2147024774;
                  goto LABEL_472;
                }
                v349 = v205;
                v348 = v203;
                if ( v122 < 0 )
                  goto LABEL_411;
LABEL_474:
                if ( v347 >= 4 )
                {
                  v351 = *v206;
                  v1295 = *v206;
                  v352 = v206 + 1;
                  if ( v206 + 1 < v206 )
                    goto LABEL_495;
                  if ( v347 - 4 >= (unsigned int)v351 )
                  {
                    v1375 = *v206;
                    v353 = (unsigned int *)((char *)v352 + v351);
                    v1340 = (LPCWSTR)((char *)v352 + v351);
                    if ( (unsigned int *)((char *)v352 + v351) < v352 || (unsigned int)(v351 + 4) < 4 )
                      goto LABEL_495;
                    if ( v347 - ((_DWORD)v351 + 4) >= 4 )
                    {
                      v354 = *v353;
                      v355 = v353 + 1;
                      if ( v353 + 1 < v353 )
                        goto LABEL_495;
                      v356 = v351 + 8;
                      if ( (int)v351 + 8 < (unsigned int)(v351 + 4) )
                        goto LABEL_495;
                      if ( v347 - v356 >= (unsigned int)v354 )
                      {
                        if ( (unsigned int *)((char *)v355 + v354) < v355 )
                          goto LABEL_495;
                        v357 = v354 + v356;
                        if ( (unsigned int)v354 + v356 < v356 )
                          goto LABEL_495;
                        if ( v347 - v357 >= 4 )
                        {
                          v358 = *(unsigned int *)((char *)v355 + v354);
                          v1456 = (char *)v355 + v354 + 4;
                          if ( v1456 < (char *)v355 + v354 )
                            goto LABEL_495;
                          v359 = v357 + 4;
                          if ( v357 + 4 < v357 )
                            goto LABEL_495;
                          if ( v347 - v359 >= (unsigned int)v358 )
                          {
                            if ( v359 + (unsigned int)v358 >= v359 )
                            {
                              if ( v347 == v359 + (_DWORD)v358 && (unsigned int)(v354 + v358 + v351) + 12LL == v347 )
                              {
                                v360 = GetProcessHeap();
                                v361 = HeapAlloc(v360, 8u, 0x30uLL);
                                v1424 = v361;
                                if ( !v361 )
                                {
                                  v122 = -805306345;
                                  v1462 = -805306345;
                                  v1455 = v344;
                                  v205 = (WCHAR *)Srca;
                                  v203 = (unsigned __int8 *)v1280;
                                  goto LABEL_411;
                                }
                                v362 = v206 + 1;
                                if ( v206 == (unsigned int *)-4LL )
                                {
                                  *(_DWORD *)v361 = (_DWORD)v362;
                                  v361[1] = v362;
                                }
                                else
                                {
                                  *(_DWORD *)v361 = v1295;
                                  v363 = GetProcessHeap();
                                  v364 = HeapAlloc(v363, 8u, v1375);
                                  if ( !v364 )
                                    goto LABEL_508;
                                  v361[1] = v364;
                                  memcpy_0(v364, v206 + 1, v1375);
                                }
                                if ( v1340 == (LPCWSTR)-4LL )
                                {
                                  *((_DWORD *)v361 + 4) = 0;
                                  v361[3] = 0LL;
                                }
                                else
                                {
                                  *((_DWORD *)v361 + 4) = v354;
                                  v365 = GetProcessHeap();
                                  v366 = HeapAlloc(v365, 8u, v354);
                                  if ( !v366 )
                                    goto LABEL_508;
                                  v361[3] = v366;
                                  memcpy_0(v366, v1340 + 2, v354);
                                }
                                if ( !v1456 )
                                {
                                  *((_DWORD *)v361 + 8) = 0;
                                  v361[5] = 0LL;
                                  goto LABEL_523;
                                }
                                *((_DWORD *)v361 + 8) = v358;
                                v367 = GetProcessHeap();
                                v368 = HeapAlloc(v367, 8u, v358);
                                if ( v368 )
                                {
                                  v361[5] = v368;
                                  memcpy_0(v368, v1456, v358);
LABEL_523:
                                  v1511 = v361;
                                  v369 = 0;
                                  v1449 = v206;
                                  v1455 = v344;
                                  v205 = (WCHAR *)Srca;
                                  v1341 = Srca;
                                  v203 = (unsigned __int8 *)v1280;
                                  v1376 = v1280;
                                  v376 = (unsigned int *)v1511;
                                  goto LABEL_524;
                                }
LABEL_508:
                                v205 = (WCHAR *)Srca;
                                v203 = (unsigned __int8 *)v1280;
                                v369 = -1073741801;
                                v1511 = 0LL;
                                v370 = v1424;
                                v1281 = (void *)v1424[1];
                                if ( v1281 )
                                {
                                  v371 = GetProcessHeap();
                                  HeapFree(v371, 0, v1281);
                                  v370 = v1424;
                                  v1424[1] = 0LL;
                                }
                                v1282 = (void *)v370[3];
                                if ( v1282 )
                                {
                                  v372 = GetProcessHeap();
                                  HeapFree(v372, 0, v1282);
                                  v370 = v1424;
                                  v1424[3] = 0LL;
                                }
                                v1283 = (void *)v370[5];
                                if ( v1283 )
                                {
                                  v373 = GetProcessHeap();
                                  HeapFree(v373, 0, v1283);
                                  v1424[5] = 0LL;
                                }
                                v374 = GetProcessHeap();
                                HeapFree(v374, 0, v1424);
                                v1425 = v344;
                                v375 = v1511;
                                v376 = 0LL;
                                v1511 = 0LL;
                                v1449 = v206;
                                v1455 = v344;
                                v1341 = Srca;
                                v1376 = (SIZE_T)v203;
                                if ( v375 )
                                {
                                  v377 = v375;
                                  v378 = (void *)v375[1];
                                  if ( v378 )
                                  {
                                    v379 = GetProcessHeap();
                                    HeapFree(v379, 0, v378);
                                    v377[1] = 0LL;
                                  }
                                  v380 = (void *)v377[3];
                                  if ( v380 )
                                  {
                                    v381 = GetProcessHeap();
                                    HeapFree(v381, 0, v380);
                                    v377[3] = 0LL;
                                  }
                                  v382 = (void *)v377[5];
                                  if ( v382 )
                                  {
                                    v383 = GetProcessHeap();
                                    HeapFree(v383, 0, v382);
                                    v377[5] = 0LL;
                                  }
                                  v384 = GetProcessHeap();
                                  HeapFree(v384, 0, v377);
                                  v376 = 0LL;
                                  v1511 = 0LL;
                                  v369 = -1073741801;
                                  v1449 = v206;
                                  v344 = v1425;
                                  v1455 = v1425;
                                  v205 = (WCHAR *)Srca;
                                  v1341 = Srca;
                                  v1376 = (SIZE_T)v203;
                                }
LABEL_524:
                                v122 = v369 | 0x10000000;
                                v1462 = v122;
                                if ( v122 < 0 )
                                  goto LABEL_411;
                                if ( !v376 || (Srcb = (unsigned __int8 *)*((_QWORD *)v376 + 1)) == 0LL || !*v376 )
                                {
                                  v122 = -805306355;
                                  goto LABEL_454;
                                }
                                v385 = *v376 - 8LL;
                                v1426 = (LPVOID)v385;
                                v386 = MemoryAlloc(v385);
                                v1476 = v386;
                                if ( !v386 )
                                  goto LABEL_588;
                                v387 = 0;
                                v1688 = 0x7F1137FAB69605ELL;
                                v388 = Srcb;
                                v389 = v386;
                                v390 = v385 & 7;
                                if ( (v385 & 7) != 0 )
                                {
                                  v391 = 0;
                                  v1464 = 0;
                                  v392 = 56;
                                  v393 = Srcb;
                                  v394 = 0;
                                  v395 = 0;
                                  do
                                  {
                                    v396 = *v393++;
                                    if ( v391 >= 4 )
                                      v395 |= v396 << v392;
                                    else
                                      v394 |= v396 << (v392 - 32);
                                    v391 = v1464 + 1;
                                    v1464 = v391;
                                    v392 -= 8;
                                  }
                                  while ( (int)v391 < (int)v390 );
                                  v1296 = v395;
                                  v1330 = v394;
                                  v1465 = v394 ^ 0x92F65A5;
                                  v1260 = v395 ^ 0x699A899C;
                                  v397 = v394 ^ 0x92F65A5;
                                  v398 = v395 ^ 0x699A899C;
                                  v1449 = v206;
                                  v1455 = v344;
                                  v1341 = v205;
                                  v1376 = (SIZE_T)v203;
                                  v387 = 0;
                                  v385 = (unsigned __int64)v1426;
                                  v399 = 0;
                                  v400 = v386;
                                  do
                                  {
                                    Sizea = (SIZE_T)(v400 + 1);
                                    if ( v399 >= 4 )
                                    {
                                      v398 = __ROL4__(v398, 8);
                                      v401 = v398;
                                    }
                                    else
                                    {
                                      v397 = __ROL4__(v397, 8);
                                      v401 = v397;
                                    }
                                    *v400 = v401;
                                    ++v399;
                                    ++v400;
                                  }
                                  while ( (int)v399 < (int)v390 );
                                  v389 = (_DWORD *)Sizea;
                                  v402 = v1465;
                                  if ( v390 > 4 )
                                  {
                                    v403 = v1260 >> (8 * (8 - v390)) << (8 * (8 - v390));
                                    v389 = (_DWORD *)Sizea;
LABEL_543:
                                    v388 = v393;
                                    goto LABEL_544;
                                  }
                                  v403 = 0;
                                  if ( v390 >= 4 )
                                    goto LABEL_543;
                                  v388 = v393;
                                  v402 = v1465 >> (8 * (4 - v390)) << (8 * (4 - v390));
                                  v389 = (_DWORD *)Sizea;
                                }
                                else
                                {
                                  v1330 = 0;
                                  v1296 = -1;
                                  v403 = 0;
                                  v402 = 0;
                                }
LABEL_544:
                                v404 = v385 >> 3;
                                if ( v385 >> 3 )
                                {
                                  v405 = HIDWORD(v1688);
                                  v1261 = WORD1(v1688);
                                  v1322 = HIWORD(v1688);
                                  v406 = (char *)v389 + 7;
                                  v407 = v388 + 2;
                                  v408 = v1330;
                                  v409 = v1296;
                                  v410 = v404;
                                  v411 = WORD2(v1688);
                                  do
                                  {
                                    v412 = v407[1] | ((*v407 | ((*(v407 - 1) | (*(v407 - 2) << 8)) << 8)) << 8);
                                    v413 = v407[5] | ((v407[4] | ((v407[3] | (v407[2] << 8)) << 8)) << 8);
                                    v414 = v412 ^ v402;
                                    v407 += 8;
                                    v415 = v414 ^ v405 ^ 0xAB69605E ^ v413 ^ v403;
                                    v416 = (v411 * __ROL4__(v415 + 1419157410, 5) + __ROL4__(v415, 10)) ^ v414;
                                    v417 = (v1261 * __ROR4__(v416 + v405, 9) - __ROL4__(v416, 2)) ^ v415;
                                    v418 = (24670 * (v417 - v411) - (v417 >> 13)) ^ v416;
                                    v419 = (v1322 * __ROL4__(WORD1(v1688) ^ v418, 6) - __ROL4__(v418, 2)) ^ v417;
                                    v420 = (v405 - (v419 ^ 0xAB69605E)) ^ v418;
                                    v421 = (v1261 * (v411 ^ v420)) ^ __ROR4__(v420, 6) ^ v419;
                                    v422 = (24670 * __ROR4__(v421 + v405, 15) + __ROL4__(v421, 2)) ^ v420;
                                    v423 = (v1322 * __ROR4__(v422 + 1419157410, 14) - __ROL4__(v422, 8)) ^ v421;
                                    v424 = (v411 * __ROR4__(v423 ^ 0xAB69605E, 12)) ^ __ROR4__(v423, 10) ^ v422;
                                    v425 = (v424 >> 10) ^ (WORD1(v1688) * (HIWORD(v1688) ^ v424)) ^ v423;
                                    v426 = (HIWORD(v1688) * (__ROR4__(~v425, 5) + 24670)) ^ v424;
                                    v427 = (v426 - HIWORD(v1688)) ^ 0xAB69605E ^ v425;
                                    v428 = ((v427 >> 2) + v411 * __ROL4__(v427 ^ HIWORD(v1688), 2)) ^ v426;
                                    v429 = (v1261 * __ROR4__(v428 - v405, 6) + __ROL4__(v428, 7)) ^ v427;
                                    v430 = (24670 * (v429 ^ v411) + __ROR4__(v429, 9)) ^ v428;
                                    v431 = (v1322 * __ROL4__(v430 ^ WORD1(v1688), 5) + __ROL4__(v430, 7)) ^ v429;
                                    v432 = v405 ^ v431 ^ 0xAB69605E ^ v430;
                                    v433 = (v411 * (__ROR4__(v432, 3) - WORD1(v1688))) ^ v431;
                                    v434 = (24670 * __ROR4__(v433 - v405, 1) - __ROR4__(v433, 6)) ^ v432;
                                    v435 = (v1322 * __ROL4__(v434 - 1419157410, 3) + __ROL4__(v434, 14)) ^ v433;
                                    v436 = (v411 * __ROL4__(v435 - 1419157410, 15) - __ROR4__(v435, 14)) ^ v434;
                                    v437 = (v436 >> 3) ^ (WORD1(v1688) * (v436 ^ 0x605E)) ^ v435;
                                    v438 = (24670 * __ROL4__(v405 ^ v437, 4)) ^ __ROL4__(v437, 2) ^ v408 ^ v436;
                                    v439 = v409 ^ v437;
                                    *(v406 - 4) = v438;
                                    v440 = __ROR4__(v438, 8);
                                    *v406 = v439;
                                    v441 = __ROR4__(v439, 8);
                                    *(v406 - 5) = v440;
                                    v442 = __ROR4__(v440, 8);
                                    *(v406 - 1) = v441;
                                    v443 = __ROR4__(v441, 8);
                                    *(v406 - 6) = v442;
                                    v444 = __ROR4__(v442, 8);
                                    *(v406 - 2) = v443;
                                    v445 = __ROR4__(v443, 8);
                                    *(v406 - 7) = v444;
                                    *(v406 - 3) = v445;
                                    v402 = __ROR4__(v444, 8);
                                    v403 = __ROR4__(v445, 8);
                                    v408 = v412;
                                    v409 = v413;
                                    v406 += 8;
                                    --v410;
                                  }
                                  while ( v410 );
                                  v387 = 0;
                                  v205 = (WCHAR *)v1341;
                                  v206 = v1449;
                                  v203 = (unsigned __int8 *)v1376;
                                  v386 = v1476;
                                  v385 = (unsigned __int64)v1426;
                                }
                                for ( k = 0LL; k < v385; ++k )
                                  v387 ^= *((_BYTE *)v386 + k);
                                v447 = v1455;
                                v448 = v1511;
                                if ( v387 != *(_QWORD *)&Srcb[v385] )
                                {
                                  MemoryFree(v386);
LABEL_588:
                                  v122 = -805306367;
                                  v1462 = -805306367;
                                  v1475 = 0LL;
                                  goto LABEL_411;
                                }
                                v1505 = 0;
                                v1571 = v386;
                                if ( (unsigned int)v385 >= 4 )
                                {
                                  Sizeb = *v386;
                                  v340 = RtlULongLongAdd((unsigned __int64)v386, 4LL, (unsigned __int64 *)&v1571);
                                  v1475 = v449;
                                  v1511 = v450;
                                  if ( v340 < 0 )
                                    goto LABEL_453;
                                  v340 = RtlUIntAdd(0, 4, &v1505);
                                  v1475 = (unsigned __int8 *)v386;
                                  v1511 = v448;
                                  v451 = v205;
                                  if ( v340 < 0 )
                                    goto LABEL_453;
                                  if ( (unsigned int)v1426 - v1505 < 4 )
                                    goto LABEL_576;
                                  v1297 = *(_DWORD *)v1571;
                                  v340 = RtlULongLongAdd((unsigned __int64)v1571, 4LL, (unsigned __int64 *)&v1571);
                                  v1475 = v452;
                                  v1511 = v453;
                                  if ( v340 < 0 )
                                    goto LABEL_453;
                                  v340 = RtlUIntAdd(v1505, 4, &v1505);
                                  v1475 = (unsigned __int8 *)v386;
                                  v1511 = v448;
                                  v451 = v205;
                                  if ( v340 < 0 )
                                    goto LABEL_453;
                                  if ( (unsigned int)v1426 - v1505 < v1297 )
                                  {
LABEL_576:
                                    v205 = v451;
                                  }
                                  else
                                  {
                                    v340 = RtlUIntAdd(v1505, v1297, &v1505);
                                    v1475 = (unsigned __int8 *)v386;
                                    v1511 = v448;
                                    if ( v340 < 0 )
                                      goto LABEL_453;
                                    if ( (char *)v386 + (unsigned int)v1426 >= (char *)v1571 + v1297
                                      && (unsigned int)v1426 + (char *)v386 - (_BYTE *)v1571 - (unsigned __int64)v1297 < 8 )
                                    {
                                      Srcc = 0LL;
                                      v340 = 0;
                                      v1331 = 0;
                                      v1475 = (unsigned __int8 *)v386;
                                      v1511 = v448;
                                      if ( v1571 )
                                      {
                                        v1450 = v1571;
                                        v340 = RtlULongLongAdd((unsigned __int64)v1571, v1297, &v1572);
                                        v1475 = v454;
                                        v1511 = v455;
                                        if ( v340 < 0 )
                                          goto LABEL_453;
                                        v1475 = v454;
                                        v1511 = v455;
                                        v456 = v1572;
                                        if ( (unsigned __int64)v1450 < v1572 )
                                        {
                                          v1475 = v454;
                                          v1511 = v455;
                                          v457 = (unsigned __int64)v1450;
                                          while ( 1 )
                                          {
                                            v340 = RtlULongLongAdd(v457, 4LL, &v1573);
                                            if ( v340 < 0 )
                                              goto LABEL_453;
                                            if ( v1573 > v459 )
                                              goto LABEL_577;
                                            v340 = RtlUIntAdd(4u, *v458, &v1506);
                                            if ( v340 < 0 )
                                              goto LABEL_453;
                                            v340 = RtlULongLongAdd(v460, v1506, &v1574);
                                            v1511 = v461;
                                            v1455 = v447;
                                            if ( v340 < 0 )
                                              goto LABEL_453;
                                            v457 = v1574;
                                            v1511 = v461;
                                            v1455 = v447;
                                            if ( v1574 > v456 )
                                              goto LABEL_577;
                                            ++v1331;
                                            if ( v1574 >= v456 )
                                            {
                                              v1511 = v461;
                                              v1455 = v447;
                                              goto LABEL_579;
                                            }
                                          }
                                        }
                                        v457 = (unsigned __int64)v1450;
LABEL_579:
                                        if ( v457 != v456 )
                                        {
LABEL_577:
                                          v340 = -1073741811;
                                          goto LABEL_453;
                                        }
                                      }
                                      if ( v1297 )
                                      {
                                        v462 = GetProcessHeap();
                                        v463 = v1297;
                                        v464 = HeapAlloc(v462, 8u, v1297);
                                        Srcc = v464;
                                        v340 = 0;
                                        if ( !v464 )
                                        {
                                          v340 = -1073741801;
                                          goto LABEL_453;
                                        }
                                      }
                                      else
                                      {
                                        v463 = 0LL;
                                        v464 = 0LL;
                                      }
                                      if ( v1571 )
                                        memcpy_0(v464, v1571, v463);
                                      v1622[1] = Srcc;
                                      LODWORD(v1622[0]) = v1331;
                                      if ( Sizeb == v1331 )
                                        goto LABEL_453;
                                      goto LABEL_452;
                                    }
                                  }
                                }
                                v1511 = v448;
                                v1475 = (unsigned __int8 *)v386;
LABEL_452:
                                v340 = -1073741762;
LABEL_453:
                                v122 = v340 | 0x10000000;
                                goto LABEL_454;
                              }
                              goto LABEL_494;
                            }
LABEL_495:
                            v122 = -805306219;
                            goto LABEL_496;
                          }
                        }
                      }
                    }
                  }
                }
LABEL_494:
                v122 = -805306306;
LABEL_496:
                v1462 = v122;
                v1455 = v344;
                v205 = v349;
                v203 = v348;
                goto LABEL_411;
              }
LABEL_460:
              v122 = -805306345;
              goto LABEL_454;
            }
          }
        }
        v280 = -1073741801;
        v1277 = (void *)*((_QWORD *)v279 + 1);
        if ( v1277 )
        {
          v296 = GetProcessHeap();
          HeapFree(v296, 0, v1277);
          *((_QWORD *)v279 + 1) = 0LL;
        }
        v1278 = (void *)*((_QWORD *)v279 + 3);
        if ( v1278 )
        {
          v297 = GetProcessHeap();
          HeapFree(v297, 0, v1278);
          *((_QWORD *)v279 + 3) = 0LL;
        }
        v1279 = (void *)*((_QWORD *)v279 + 5);
        if ( v1279 )
        {
          v298 = GetProcessHeap();
          HeapFree(v298, 0, v1279);
          *((_QWORD *)v279 + 5) = 0LL;
        }
        v299 = GetProcessHeap();
        HeapFree(v299, 0, v279);
      }
      else
      {
        v280 = -1073741801;
      }
      v281 = v1423;
      goto LABEL_362;
    }
  }
  v122 = -805306367;
  v1462 = -805306367;
LABEL_412:
  v313 = GetProcessHeap();
  HeapFree(v313, 0, v203);
LABEL_413:
  if ( v205 )
  {
    v314 = (void *)*((_QWORD *)v205 + 1);
    if ( v314 )
    {
      v315 = GetProcessHeap();
      HeapFree(v315, 0, v314);
      *((_QWORD *)v205 + 1) = 0LL;
    }
    v316 = (void *)*((_QWORD *)v205 + 3);
    if ( v316 )
    {
      v317 = GetProcessHeap();
      HeapFree(v317, 0, v316);
      *((_QWORD *)v205 + 3) = 0LL;
    }
    v318 = (void *)*((_QWORD *)v205 + 5);
    if ( v318 )
    {
      v319 = GetProcessHeap();
      HeapFree(v319, 0, v318);
      *((_QWORD *)v205 + 5) = 0LL;
    }
    v320 = GetProcessHeap();
    HeapFree(v320, 0, v205);
  }
  if ( v1455 )
  {
    v321 = GetProcessHeap();
    HeapFree(v321, 0, v1455);
  }
  if ( v206 )
  {
    v322 = GetProcessHeap();
    HeapFree(v322, 0, v206);
  }
  v323 = v1511;
  if ( v1511 )
  {
    v324 = (void *)*((_QWORD *)v1511 + 1);
    if ( v324 )
    {
      v325 = GetProcessHeap();
      HeapFree(v325, 0, v324);
      v323[1] = 0LL;
    }
    v326 = (void *)v323[3];
    if ( v326 )
    {
      v327 = GetProcessHeap();
      HeapFree(v327, 0, v326);
      v323[3] = 0LL;
    }
    v328 = (void *)v323[5];
    if ( v328 )
    {
      v329 = GetProcessHeap();
      HeapFree(v329, 0, v328);
      v323[5] = 0LL;
    }
    v330 = GetProcessHeap();
    HeapFree(v330, 0, v323);
  }
  if ( v1475 )
  {
    v331 = GetProcessHeap();
    HeapFree(v331, 0, v1475);
  }
  v132 = v1418;
  if ( v122 < 0 )
    goto LABEL_191;
  if ( !LODWORD(v1622[0]) )
  {
    v122 = -1073425151;
LABEL_591:
    v1462 = v122;
    goto LABEL_191;
  }
  if ( !v1622[1] )
  {
    v122 = -1073741811;
    goto LABEL_591;
  }
  v465 = v1622[1];
  v1575 = v1622[1];
  v122 = RtlULongLongAdd((unsigned __int64)v1622[1], 4LL, (unsigned __int64 *)&v1575);
  v1462 = v122;
  if ( v122 < 0 )
  {
LABEL_289:
    v127 = (WCHAR *)lpModuleName;
    goto LABEL_290;
  }
  v467 = v1575;
  if ( !*v465 )
    v467 = 0LL;
  v1575 = v467;
  if ( *v465 != (_DWORD)v135 )
  {
    v122 = -1073741789;
    v1462 = -1073741789;
    goto LABEL_289;
  }
  v122 = *v467;
  v1462 = *v467;
  if ( *v467 == -805306333 )
  {
    v468 = -2147024774;
  }
  else
  {
    v468 = *v467;
    if ( v122 != -2147024774 && v122 < 0 )
      goto LABEL_289;
  }
  if ( LODWORD(v1622[0]) != 6 )
  {
    v122 = -1073425151;
LABEL_605:
    v1462 = v122;
LABEL_606:
    v132 = v466;
    goto LABEL_289;
  }
  if ( !v1622[1] )
  {
    v122 = -1073741811;
    goto LABEL_605;
  }
  v1576 = v1622[1];
  v469 = *(_DWORD *)v1622[1];
  v122 = RtlULongLongAdd((unsigned __int64)v1622[1], v135, (unsigned __int64 *)&v1576);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_606;
  v122 = RtlULongLongAdd((unsigned __int64)v1576, v469, (unsigned __int64 *)&v1576);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_606;
  v470 = *v1576;
  v122 = RtlULongLongAdd((unsigned __int64)v1576, v135, (unsigned __int64 *)&v1576);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_606;
  v471 = v1576;
  if ( !v470 )
    v471 = 0LL;
  v1576 = v471;
  if ( v470 != 8 )
  {
    v122 = -1073741789;
    goto LABEL_605;
  }
  v1284 = *(_QWORD *)v471;
  v120 = v135;
  if ( !v1622[1] )
    goto LABEL_214;
  v472 = (int *)v1622[1];
  v1577 = (int *)v1622[1];
  v473 = 0;
  do
  {
    v122 = RtlULongLongAdd((unsigned __int64)v472, v120, (unsigned __int64 *)&v1577);
    v1462 = v122;
    if ( v122 < 0 )
      goto LABEL_216;
    v122 = RtlULongLongAdd((unsigned __int64)v1577, v474, (unsigned __int64 *)&v1577);
    v1462 = v122;
    if ( v122 < 0 )
      goto LABEL_216;
    v473 += v475;
    v472 = v1577;
  }
  while ( v473 < 2 );
  v476 = *v1577;
  v122 = RtlULongLongAdd((unsigned __int64)v1577, v120, (unsigned __int64 *)&v1577);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_216;
  v477 = v1577;
  if ( !v476 )
    v477 = 0LL;
  v1577 = v477;
  if ( v476 != (_DWORD)v120 )
  {
LABEL_649:
    v122 = -1073741789;
    goto LABEL_215;
  }
  Sizec = *v477;
  if ( !v1622[1] )
  {
LABEL_214:
    v122 = -1073741811;
LABEL_215:
    v1462 = v122;
LABEL_216:
    v132 = v466;
    goto LABEL_217;
  }
  v478 = v1622[1];
  v1578 = v1622[1];
  v479 = 0;
  do
  {
    v122 = RtlULongLongAdd((unsigned __int64)v478, v120, (unsigned __int64 *)&v1578);
    v1462 = v122;
    if ( v122 < 0 )
      goto LABEL_216;
    v122 = RtlULongLongAdd((unsigned __int64)v1578, v480, (unsigned __int64 *)&v1578);
    v1462 = v122;
    if ( v122 < 0 )
      goto LABEL_216;
    v479 += v481;
    v478 = v1578;
  }
  while ( v479 < 3 );
  v122 = RtlULongLongAdd((unsigned __int64)v1578, v120, (unsigned __int64 *)&v1578);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_216;
  v483 = v1578;
  if ( !v482 )
    v483 = 0LL;
  v1578 = v483;
  v484 = (unsigned int *)v1622[1];
  v1579 = (unsigned int *)v1622[1];
  for ( m = 0; m < 4; ++m )
  {
    v486 = *v484;
    v122 = RtlULongLongAdd((unsigned __int64)v484, 4LL, (unsigned __int64 *)&v1579);
    v1462 = v122;
    if ( v122 < 0 )
      goto LABEL_658;
    v122 = RtlULongLongAdd((unsigned __int64)v1579, v486, (unsigned __int64 *)&v1579);
    v1462 = v122;
    v120 = 4LL;
    if ( v122 < 0 )
      goto LABEL_216;
    v484 = v1579;
  }
  v488 = *v1579;
  v122 = RtlULongLongAdd((unsigned __int64)v1579, 4LL, (unsigned __int64 *)&v1579);
  v1462 = v122;
  if ( v122 < 0 )
    goto LABEL_216;
  v489 = v1579;
  if ( !v488 )
    v489 = 0LL;
  v1579 = v489;
  if ( v488 != 4 )
    goto LABEL_649;
  v490 = (unsigned int *)v1622[1];
  v1580 = (unsigned int *)v1622[1];
  v491 = 0;
  v492 = *v489;
  do
  {
    v493 = *v490;
    v122 = RtlULongLongAdd((unsigned __int64)v490, 4LL, (unsigned __int64 *)&v1580);
    v1462 = v122;
    if ( v122 < 0 )
    {
      v132 = v494;
      v127 = (WCHAR *)lpModuleName;
      goto LABEL_166;
    }
    v122 = RtlULongLongAdd((unsigned __int64)v1580, v493, (unsigned __int64 *)&v1580);
    v1462 = v122;
    if ( v122 < 0 )
      goto LABEL_658;
    ++v491;
    v490 = v1580;
  }
  while ( v491 < 5 );
  v495 = *v1580;
  v496 = RtlULongLongAdd((unsigned __int64)v1580, 4LL, (unsigned __int64 *)&v1580);
  v122 = v496;
  v1462 = v496;
  if ( v496 < 0 )
  {
    v1462 = v496;
LABEL_658:
    v132 = v487;
    goto LABEL_191;
  }
  v499 = v1580;
  if ( !v495 )
    v499 = 0LL;
  v1580 = v499;
  v145 = 4LL;
  if ( v495 != 4 )
  {
    v122 = -1073741789;
LABEL_651:
    v1462 = v122;
    v132 = v487;
    goto LABEL_228;
  }
  v132 = *v499;
  if ( v1388 != (wchar_t *)v1284 )
  {
    v122 = -1073425151;
    goto LABEL_651;
  }
  v1510 = Sizec;
  if ( v492 > 4 || (unsigned int)v498 > 4 )
  {
    v122 = -2147024774;
    v1462 = -2147024774;
    goto LABEL_228;
  }
  memcpy_0(v1513, v497, v498);
  v127 = (WCHAR *)lpModuleName;
  v120 = 4LL;
  if ( v468 )
  {
    v122 = v468;
    v1462 = v468;
  }
LABEL_291:
  lpMem[0] = 0LL;
  v188 = lpMem[1];
  if ( lpMem[1] )
  {
    v189 = GetProcessHeap();
    HeapFree(v189, 0, v188);
    lpMem[1] = 0LL;
  }
  v1622[0] = 0LL;
  v190 = v1622[1];
  if ( v1622[1] )
  {
    v191 = GetProcessHeap();
    HeapFree(v191, 0, v190);
    v1622[1] = 0LL;
  }
  if ( v127 )
  {
    v192 = GetProcessHeap();
    HeapFree(v192, 0, v127);
  }
  if ( v1302 )
  {
    v193 = GetProcessHeap();
    HeapFree(v193, 0, v1302);
  }
  if ( v122 < 0 )
    goto LABEL_149;
  if ( v132 )
  {
    v1581[0] = 0LL;
    g_WarbirdNotificationInformation = v132;
    ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
    v195 = 0LL;
    if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
      goto LABEL_1258;
    v1270 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
    if ( !v1270 )
    {
      GetLastError();
      goto LABEL_1258;
    }
    g_WarbirdPaintInitTime = ((__int64 (*)(void))off_1807A9198)();
    v500 = g_WarbirdNotificationInformation;
    Sized = g_WarbirdNotificationInformation;
    memset_0(&v1673, 0, 0x70uLL);
    v1695 = 0LL;
    v1488 = 0LL;
    v1709 = 0LL;
    v1710 = 0LL;
    v1711 = 0LL;
    v1712 = 0;
    v1542 = 0LL;
    while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
      ;
    v501 = g_WarbirdSecureFunctionsRefCount;
    if ( g_WarbirdSecureFunctionsRefCount )
      goto LABEL_702;
    v1298 = 0;
    v1419 = 0;
    v502 = 0LL;
    v503 = (char *)MemoryAlloc(0x338uLL);
    lpModuleNamea = (WCHAR *)v503;
    if ( v503 )
    {
      v504 = -1;
      v505 = 0;
      v506 = 0;
      v507 = v503 + 7;
      v508 = (unsigned __int8 *)&unk_180697D32;
      v509 = 103LL;
      do
      {
        v510 = v508[1] | ((*v508 | ((*(v508 - 1) | (*(v508 - 2) << 8)) << 8)) << 8);
        v511 = v508[5] | ((v508[4] | ((v508[3] | (v508[2] << 8)) << 8)) << 8);
        v512 = v510 ^ v506;
        v508 += 8;
        v513 = v512 ^ v505 ^ v511 ^ 0xAC987321;
        v514 = (4991 * __ROL4__(v513 + 1419157410, 5) + __ROL4__(v513, 10)) ^ v512;
        v515 = (43881 * __ROR4__(v514 + 133239679, 9) - __ROL4__(v514, 2)) ^ v513;
        v516 = (24670 * v515 - (v515 >> 13) - 123127970) ^ v514;
        v517 = (2033 * __ROL4__(v516 ^ 0xAB69, 6) - __ROL4__(v516, 2)) ^ v515;
        v518 = (133239679 - (v517 ^ 0xAB69605E)) ^ v516;
        v519 = (43881 * (v518 ^ 0x137F)) ^ __ROR4__(v518, 6) ^ v517;
        v520 = (24670 * __ROR4__(v519 + 133239679, 15) + __ROL4__(v519, 2)) ^ v518;
        v521 = (2033 * __ROR4__(v520 + 1419157410, 14) - __ROL4__(v520, 8)) ^ v519;
        v522 = (4991 * __ROR4__(v521 ^ 0xAB69605E, 12)) ^ __ROR4__(v521, 10) ^ v520;
        v523 = (v522 >> 10) ^ (43881 * (v522 ^ 0x7F1)) ^ v521;
        v524 = (2033 * (__ROR4__(~v523, 5) + 24670)) ^ v522;
        v525 = v523 ^ (v524 - 2033) ^ 0xAB69605E;
        v526 = (4991 * __ROL4__(v523 ^ (v524 - 2033) ^ 0xAB6967AF, 2) + (v525 >> 2)) ^ v524;
        v527 = (43881 * __ROR4__(v526 - 133239679, 6) + __ROL4__(v526, 7)) ^ v525;
        v528 = (24670 * (v527 ^ 0x137F) + __ROR4__(v527, 9)) ^ v526;
        v529 = (2033 * __ROL4__(v528 ^ 0xAB69, 5) + __ROL4__(v528, 7)) ^ v527;
        v530 = v528 ^ v529 ^ 0xAC987321;
        v531 = (4991 * __ROR4__(v530, 3) - 219010071) ^ v529;
        v532 = (24670 * __ROR4__(v531 - 133239679, 1) - __ROR4__(v531, 6)) ^ v530;
        v533 = (2033 * __ROL4__(v532 - 1419157410, 3) + __ROL4__(v532, 14)) ^ v531;
        v534 = (4991 * __ROL4__(v533 - 1419157410, 15) - __ROR4__(v533, 14)) ^ v532;
        v535 = (v534 >> 3) ^ (43881 * (v534 ^ 0x605E)) ^ v533;
        v536 = (24670 * __ROL4__(v535 ^ 0x7F1137F, 4)) ^ __ROL4__(v535, 2) ^ v534 ^ (unsigned int)v195;
        v537 = v504 ^ v535;
        *(v507 - 4) = v536;
        v538 = __ROR4__(v536, 8);
        *v507 = v537;
        v539 = __ROR4__(v537, 8);
        *(v507 - 5) = v538;
        v540 = __ROR4__(v538, 8);
        *(v507 - 1) = v539;
        v541 = __ROR4__(v539, 8);
        *(v507 - 6) = v540;
        v542 = __ROR4__(v540, 8);
        *(v507 - 2) = v541;
        v543 = __ROR4__(v541, 8);
        *(v507 - 7) = v542;
        *(v507 - 3) = v543;
        v506 = __ROR4__(v542, 8);
        v505 = __ROR4__(v543, 8);
        LODWORD(v195) = v510;
        v504 = v511;
        v507 += 8;
        --v509;
      }
      while ( v509 );
      v544 = 0LL;
      v545 = 0;
      v500 = Sized;
      v122 = v1462;
      v502 = 0LL;
      v546 = 0;
      do
        v545 ^= *((_BYTE *)lpModuleNamea + v544++);
      while ( v544 < 0x338 );
      if ( v545 == 64LL )
      {
        v502 = lpModuleNamea;
        v550 = lpModuleNamea;
        *((_BYTE *)lpModuleNamea + 823) = 0;
        memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
        if ( !*(_BYTE *)lpModuleNamea )
        {
LABEL_673:
          v547 = GetProcessHeap();
          HeapFree(v547, 0, v502);
LABEL_674:
          if ( v546 < 0 )
          {
            v548 = (HMODULE *)&WARBIRD::g_arModuleInfo;
            v549 = 4LL;
            do
            {
              if ( *v548 )
                FreeLibrary(*v548);
              v548 += 3;
              --v549;
            }
            while ( v549 );
            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
            memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_703:
            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
            v1299 = 0;
            v1333 = 0;
            v1582 = 0LL;
            v1304 = 0LL;
            lpModuleNameb = 0LL;
            v1389 = 0LL;
            v1632 = 0LL;
            while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
              ;
            v561 = g_WarbirdSecureFunctionsRefCount;
            if ( g_WarbirdSecureFunctionsRefCount )
              goto LABEL_744;
            v1420 = 0;
            v1323 = 0;
            v562 = 0LL;
            v563 = (char *)MemoryAlloc(0x338uLL);
            v1342 = (WCHAR *)v563;
            if ( v563 )
            {
              v564 = 0;
              v565 = -1;
              v566 = 0;
              v567 = 0;
              v568 = v563 + 7;
              v569 = (unsigned __int8 *)&unk_180697D32;
              v570 = 103LL;
              do
              {
                v571 = v569[1] | ((*v569 | ((*(v569 - 1) | (*(v569 - 2) << 8)) << 8)) << 8);
                v572 = v569[5] | ((v569[4] | ((v569[3] | (v569[2] << 8)) << 8)) << 8);
                v573 = v571 ^ v567;
                v569 += 8;
                v574 = v573 ^ v566 ^ v572 ^ 0xAC987321;
                v575 = (4991 * __ROL4__(v574 + 1419157410, 5) + __ROL4__(v574, 10)) ^ v573;
                v576 = (43881 * __ROR4__(v575 + 133239679, 9) - __ROL4__(v575, 2)) ^ v574;
                v577 = (24670 * v576 - (v576 >> 13) - 123127970) ^ v575;
                v578 = (2033 * __ROL4__(v577 ^ 0xAB69, 6) - __ROL4__(v577, 2)) ^ v576;
                v579 = (133239679 - (v578 ^ 0xAB69605E)) ^ v577;
                v580 = (43881 * (v579 ^ 0x137F)) ^ __ROR4__(v579, 6) ^ v578;
                v581 = (24670 * __ROR4__(v580 + 133239679, 15) + __ROL4__(v580, 2)) ^ v579;
                v582 = (2033 * __ROR4__(v581 + 1419157410, 14) - __ROL4__(v581, 8)) ^ v580;
                v583 = (4991 * __ROR4__(v582 ^ 0xAB69605E, 12)) ^ __ROR4__(v582, 10) ^ v581;
                v584 = (v583 >> 10) ^ (43881 * (v583 ^ 0x7F1)) ^ v582;
                v585 = (2033 * (__ROR4__(~v584, 5) + 24670)) ^ v583;
                v586 = v584 ^ (v585 - 2033) ^ 0xAB69605E;
                v587 = ((v586 >> 2) + 4991 * __ROL4__(v584 ^ (v585 - 2033) ^ 0xAB6967AF, 2)) ^ v585;
                v588 = (43881 * __ROR4__(v587 - 133239679, 6) + __ROL4__(v587, 7)) ^ v586;
                v589 = (24670 * (v588 ^ 0x137F) + __ROR4__(v588, 9)) ^ v587;
                v590 = (2033 * __ROL4__(v589 ^ 0xAB69, 5) + __ROL4__(v589, 7)) ^ v588;
                v591 = v589 ^ v590 ^ 0xAC987321;
                v592 = (4991 * __ROR4__(v591, 3) - 219010071) ^ v590;
                v593 = (24670 * __ROR4__(v592 - 133239679, 1) - __ROR4__(v592, 6)) ^ v591;
                v594 = (2033 * __ROL4__(v593 - 1419157410, 3) + __ROL4__(v593, 14)) ^ v592;
                v595 = (4991 * __ROL4__(v594 - 1419157410, 15) - __ROR4__(v594, 14)) ^ v593;
                v596 = (v595 >> 3) ^ (43881 * (v595 ^ 0x605E)) ^ v594;
                v597 = (24670 * __ROL4__(v596 ^ 0x7F1137F, 4)) ^ __ROL4__(v596, 2) ^ v595 ^ v564;
                v598 = v565 ^ v596;
                *(v568 - 4) = v597;
                v599 = __ROR4__(v597, 8);
                *v568 = v598;
                v600 = __ROR4__(v598, 8);
                *(v568 - 5) = v599;
                v601 = __ROR4__(v599, 8);
                *(v568 - 1) = v600;
                v602 = __ROR4__(v600, 8);
                *(v568 - 6) = v601;
                v603 = __ROR4__(v601, 8);
                *(v568 - 2) = v602;
                v604 = __ROR4__(v602, 8);
                *(v568 - 7) = v603;
                *(v568 - 3) = v604;
                v567 = __ROR4__(v603, 8);
                v566 = __ROR4__(v604, 8);
                v564 = v571;
                v565 = v572;
                v568 += 8;
                --v570;
              }
              while ( v570 );
              v605 = 0LL;
              v606 = 0;
              v500 = Sized;
              v122 = v1462;
              v562 = 0LL;
              v607 = 0;
              do
                v606 ^= *((_BYTE *)v1342 + v605++);
              while ( v605 < 0x338 );
              if ( v606 == 64LL )
              {
                v562 = v1342;
                v611 = v1342;
                *((_BYTE *)v1342 + 823) = 0;
                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                if ( !*(_BYTE *)v1342 )
                {
LABEL_715:
                  v608 = GetProcessHeap();
                  HeapFree(v608, 0, v562);
LABEL_716:
                  if ( v607 < 0 )
                  {
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
                    memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
LABEL_745:
                    _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                    memset_0(&v1673, 0, 0x70uLL);
                    v1695 = 0LL;
                    v622 = v500 & 0xF;
                    Sizef = v622;
                    v1749[0] = (v500 >> 4) & 0xF;
                    v1749[1] = (v500 >> 8) & 0xF;
                    v1749[2] = (v500 >> 12) & 0xF;
                    v1378 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
                    v1421 = -1;
                    if ( !v1378 )
                    {
                      v623 = GetLastError();
                      v624 = v623;
                      if ( v623 > 0 )
                        v624 = (unsigned __int16)v623 | 0x80070000;
                      if ( v624 >= 0 )
                        v624 = -2147467259;
LABEL_953:
                      while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                        ;
                      v748 = g_WarbirdSecureFunctionsRefCount;
                      if ( g_WarbirdSecureFunctionsRefCount > 0 )
                      {
                        --g_WarbirdSecureFunctionsRefCount;
                        if ( v748 == 1 )
                        {
                          v749 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                          v750 = 4LL;
                          do
                          {
                            if ( *v749 )
                              FreeLibrary(*v749);
                            v749 += 3;
                            --v750;
                          }
                          while ( v750 );
                          memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                          memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
                        }
                      }
                      _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1582);
                      if ( v624 < 0 )
                      {
                        v195 = 0LL;
                        goto LABEL_1179;
                      }
                      v751 = v1695;
                      v1589 = v1695;
                      memset_0(v1646, 0, 0x68uLL);
                      v752 = 1;
                      v753 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1270, 7LL);
                      if ( v753
                        && (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                           v753,
                                           104LL,
                                           v1646) )
                      {
                        if ( v1649 != 32 || !v1650 || v1647 <= 0 || v1648 <= 0 )
                          v752 = 0;
                        if ( v752 )
                        {
LABEL_970:
                          ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(&v1682, v751, HIDWORD(v1589));
                          ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(&v1683, v751, HIDWORD(v1589));
                          if ( v622 == 1 )
                            v1542 = (LPVOID)((__int64 (__fastcall *)(_QWORD))off_1807A9128)(v1674 == 0 ? 0xB26720 : 0);
LABEL_972:
                          v1405 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9180)(v1270, 1LL);
                          v754 = 2064;
                          if ( v1673 )
                            v754 = 133138;
                          v1301 = v754;
                          if ( v752 )
                          {
                            v1335 = v1674;
                            v1307 = v1678;
                            v755 = v1675;
                            lpModuleNamec = (LPCWSTR)v1675;
                            memset_0(v1651, 0, 0x68uLL);
                            memset_0(v1655, 0, 0x68uLL);
                            v195 = 0LL;
                            v1391 = 0LL;
                            v1267 = 0;
                            v1326 = 0;
                            v1713 = 0LL;
                            v1714 = 0LL;
                            v1715 = 0LL;
                            v1716 = 0;
                            v1696 = 0LL;
                            if ( !v755 )
                              goto LABEL_1097;
                            v756 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1270, 7LL);
                            if ( v756 )
                            {
                              if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                                   v756,
                                                   104LL,
                                                   v1651) )
                              {
                                v1391 = v1654;
                                v1267 = v1652;
                                v1326 = v1653;
                              }
                              v757 = ((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1270);
                              v758 = v757;
                              if ( !v757 )
                                goto LABEL_1073;
                              v1590 = 0LL;
                              v759 = 0;
                              v1714 = 0LL;
                              v1715 = 0LL;
                              v1716 = 0;
                              LODWORD(v1713) = 40;
                              DWORD1(v1713) = DWORD2(v1682) - v1682;
                              DWORD2(v1713) = DWORD1(v1682) - HIDWORD(v1682);
                              HIDWORD(v1713) = 2097153;
                              v760 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                                       v757,
                                       &v1713,
                                       0LL,
                                       &v1590,
                                       0LL,
                                       0);
                              v761 = v760;
                              v1379 = v760;
                              if ( v760 )
                              {
                                v763 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                         v760,
                                         104LL,
                                         v1655);
                                v764 = 0LL;
                                if ( v763 )
                                  v764 = v1656;
                                v1346 = v764;
                                DWORD2(v1696) = DWORD2(v1682) - v1682;
                                HIDWORD(v1696) = HIDWORD(v1682) - DWORD1(v1682);
                                ((void (__fastcall *)(__int64, __int64))off_1807A9178)(v758, v761);
                                ((void (__fastcall *)(__int64, __int64))off_1807A9180)(v758, 1LL);
                                v1308 = (wchar_t *)((__int64 (__fastcall *)(__int64, wchar_t *))off_1807A9178)(
                                                     v758,
                                                     v1307);
                                v765 = off_1807A91E8;
                                v766 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
                                ((void (__fastcall *)(__int64, __int128 *, __int64))v765)(v758, &v1696, v766);
                                ((void (__fastcall *)(__int64, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                  v758,
                                  lpModuleNamec,
                                  0xFFFFFFFFLL,
                                  &v1696,
                                  v1301,
                                  0LL);
                                if ( Sizef == 1 )
                                {
                                  if ( v1335 )
                                    v767 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
                                  else
                                    v767 = 0xFFFFFF;
                                }
                                else
                                {
                                  v767 = -5723992;
                                }
                                v1336 = v767;
                                v768 = (const WCHAR *)(unsigned int)-(int)v1682;
                                if ( (int)v1682 >= 0 )
                                  v768 = 0LL;
                                v769 = 0;
                                if ( (int)v1682 >= 0 )
                                  v769 = v1682;
                                v770 = -DWORD1(v1682);
                                if ( (SDWORD1(v1682) & 0x80000000) == 0 )
                                  v770 = 0;
                                v771 = 0;
                                if ( (SDWORD1(v1682) & 0x80000000) == 0 )
                                  v771 = DWORD1(v1682);
                                v772 = DWORD2(v1696) - (_DWORD)v768;
                                if ( DWORD2(v1696) - (int)v768 >= v1267 - v769 )
                                  v772 = v1267 - v769;
                                v773 = HIDWORD(v1696) - v770;
                                if ( HIDWORD(v1696) - v770 >= v1326 - v771 )
                                  v773 = v1326 - v771;
                                v1327 = v773;
                                if ( v772 > 0 && v773 > 0 )
                                {
                                  v768 = &v1346[2 * (int)v768 + 2 * (__int64)(v770 * DWORD2(v1696))];
                                  lpModuleNamed = v768;
                                  v774 = &v1391[2 * v769 + 2 * (__int64)(v771 * v1267)];
                                  v1392 = v774;
                                  v1477 = 0;
                                  v1458 = 2LL * v1267;
                                  v775 = 2LL * SDWORD2(v1696);
                                  do
                                  {
                                    v776 = 0;
                                    v1268 = 0;
                                    v777 = (unsigned __int8 *)(v768 + 1);
                                    v778 = (char *)v774 - (char *)v768;
                                    do
                                    {
                                      if ( (unsigned __int8)((*v777 + *(v777 - 2) + 2 * (unsigned int)*(v777 - 1)) >> 2) != 0xFF )
                                      {
                                        v779 = (unsigned __int8)~((*v777 + *(v777 - 2) + 2 * (unsigned int)*(v777 - 1)) >> 2);
                                        v777[v778] -= ~((*v777 + *(v777 - 2) + 2 * (unsigned int)*(v777 - 1)) >> 2)
                                                    * (v1336 - v777[v778]);
                                        v777[v778 - 1] -= v779 * (BYTE1(v1336) - v777[v778 - 1]);
                                        v777[v778 - 2] -= v779 * (BYTE2(v1336) - v777[v778 - 2]);
                                        v777[v778 + 1] += v779 * (255 - v777[v778 + 1]) / 255;
                                        v776 = v1268;
                                      }
                                      v777 += 4;
                                      v1268 = ++v776;
                                    }
                                    while ( v776 < v772 );
                                    v768 = &lpModuleNamed[v775];
                                    lpModuleNamed = (LPCWSTR)((char *)lpModuleNamed + v775 * 2);
                                    v774 = &v1392[v1458];
                                    v1392 = (wchar_t *)((char *)v1392 + v1458 * 2);
                                    ++v1477;
                                  }
                                  while ( v1477 < v1327 );
                                  v759 = 0;
                                }
                                ((void (__fastcall *)(SIZE_T, const WCHAR *, _QWORD))off_1807A9138)(v1379, v768, 0LL);
                                if ( v1308 )
                                  ((void (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v758, v1308);
                              }
                              else
                              {
                                v759 = GetLastError();
                                v762 = v759 < 0;
                                if ( v759 > 0 )
                                {
                                  v759 = (unsigned __int16)v759 | 0x80070000;
                                  v762 = v759 < 0;
                                }
                                if ( !v762 )
                                  v759 = -2147467259;
                              }
                              ((void (__fastcall *)(__int64))off_1807A9130)(v758);
                              v195 = 0LL;
                              if ( v759 < 0 )
                                goto LABEL_1097;
                              v1478 = v1674;
                              v1309 = v1679;
                              v780 = v1676;
                              lpModuleNamee = (LPCWSTR)v1676;
                              memset_0(v1657, 0, 0x68uLL);
                              memset_0(v1661, 0, 0x68uLL);
                              v1393 = 0LL;
                              v1427 = 0;
                              v1337 = 0;
                              v1717 = 0LL;
                              v1718 = 0LL;
                              v1719 = 0LL;
                              v1720 = 0;
                              v1697 = 0LL;
                              if ( !v780 )
                                goto LABEL_1097;
                              v781 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9150)(v1270, 7LL);
                              if ( v781 )
                              {
                                if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                                     v781,
                                                     104LL,
                                                     v1657) )
                                {
                                  v1393 = v1660;
                                  v1427 = v1658;
                                  v1337 = v1659;
                                }
                                v782 = ((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1270);
                                v783 = v782;
                                if ( v782 )
                                {
                                  v1591 = 0LL;
                                  v784 = 0;
                                  v1718 = 0LL;
                                  v1719 = 0LL;
                                  v1720 = 0;
                                  LODWORD(v1717) = 40;
                                  DWORD1(v1717) = DWORD2(v1683) - v1683;
                                  DWORD2(v1717) = DWORD1(v1683) - HIDWORD(v1683);
                                  HIDWORD(v1717) = 2097153;
                                  v785 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                                           v782,
                                           &v1717,
                                           0LL,
                                           &v1591,
                                           0LL,
                                           0);
                                  v786 = v785;
                                  v1380 = v785;
                                  if ( !v785 )
                                  {
                                    v784 = GetLastError();
                                    v787 = v784 < 0;
                                    if ( v784 > 0 )
                                    {
                                      v784 = (unsigned __int16)v784 | 0x80070000;
                                      v787 = v784 < 0;
                                    }
                                    if ( !v787 )
                                      v784 = -2147467259;
LABEL_1061:
                                    ((void (__fastcall *)(__int64))off_1807A9130)(v783);
                                    v195 = 0LL;
                                    if ( v784 < 0 )
                                      goto LABEL_1097;
                                    v805 = 0LL;
LABEL_1176:
                                    ((void (__fastcall *)(SIZE_T, _QWORD))off_1807A9180)(v1270, v1405);
                                    v820 = v1488;
                                    if ( !v1488 )
                                    {
LABEL_1095:
                                      if ( !v805 )
                                        goto LABEL_1097;
                                      goto LABEL_1096;
                                    }
LABEL_1094:
                                    ((void (__fastcall *)(LPVOID))off_1807A9138)(v820);
                                    goto LABEL_1095;
                                  }
                                  v788 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                           v785,
                                           104LL,
                                           v1661);
                                  v789 = 0LL;
                                  if ( v788 )
                                    v789 = v1662;
                                  v1347 = v789;
                                  DWORD2(v1697) = DWORD2(v1683) - v1683;
                                  HIDWORD(v1697) = HIDWORD(v1683) - DWORD1(v1683);
                                  ((void (__fastcall *)(__int64, __int64))off_1807A9178)(v783, v786);
                                  ((void (__fastcall *)(__int64, __int64))off_1807A9180)(v783, 1LL);
                                  v1310 = (wchar_t *)((__int64 (__fastcall *)(__int64, wchar_t *))off_1807A9178)(
                                                       v783,
                                                       v1309);
                                  v790 = off_1807A91E8;
                                  v791 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
                                  ((void (__fastcall *)(__int64, __int128 *, __int64))v790)(v783, &v1697, v791);
                                  ((void (__fastcall *)(__int64, LPCWSTR, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                    v783,
                                    lpModuleNamee,
                                    0xFFFFFFFFLL,
                                    &v1697,
                                    v1301,
                                    0LL);
                                  if ( Sizef == 1 )
                                  {
                                    if ( !v1478 )
                                    {
                                      v1479 = 0xFFFFFF;
LABEL_1038:
                                      v793 = -(int)v1683;
                                      if ( (int)v1683 >= 0 )
                                        v793 = 0;
                                      v794 = 0;
                                      if ( (int)v1683 >= 0 )
                                        v794 = v1683;
                                      v795 = -DWORD1(v1683);
                                      if ( (SDWORD1(v1683) & 0x80000000) == 0 )
                                        v795 = 0;
                                      v796 = 0;
                                      if ( (SDWORD1(v1683) & 0x80000000) == 0 )
                                        v796 = DWORD1(v1683);
                                      v797 = DWORD2(v1697) - v793;
                                      if ( DWORD2(v1697) - v793 >= v1427 - v794 )
                                        v797 = v1427 - v794;
                                      v798 = HIDWORD(v1697) - v795;
                                      if ( HIDWORD(v1697) - v795 >= v1337 - v796 )
                                        v798 = v1337 - v796;
                                      if ( v797 > 0 && v798 > 0 )
                                      {
                                        v799 = &v1347[2 * v793 + 2 * (__int64)(v795 * DWORD2(v1697))];
                                        lpModuleNamef = v799;
                                        v800 = &v1393[2 * v794 + 2 * (__int64)(v796 * v1427)];
                                        v1394 = v800;
                                        Sizeg = 0;
                                        v1348 = (LPCWSTR)(4LL * SDWORD2(v1697));
                                        v1459 = 2LL * v1427;
                                        do
                                        {
                                          v801 = 0;
                                          v1428 = 0;
                                          v802 = (unsigned __int8 *)(v799 + 1);
                                          v803 = (char *)v800 - (char *)v799;
                                          do
                                          {
                                            if ( (unsigned __int8)((*v802 + *(v802 - 2) + 2 * (unsigned int)*(v802 - 1)) >> 2) != 0xFF )
                                            {
                                              v804 = (unsigned __int8)~((*v802
                                                                       + *(v802 - 2)
                                                                       + 2 * (unsigned int)*(v802 - 1)) >> 2);
                                              v802[v803] -= ~((*v802 + *(v802 - 2) + 2 * (unsigned int)*(v802 - 1)) >> 2)
                                                          * (v1421 - v802[v803]);
                                              v802[v803 - 1] -= v804 * (BYTE1(v1479) - v802[v803 - 1]);
                                              v802[v803 - 2] -= v804 * (BYTE2(v1479) - v802[v803 - 2]);
                                              v802[v803 + 1] += v804 * (255 - v802[v803 + 1]) / 255;
                                              v801 = v1428;
                                            }
                                            v802 += 4;
                                            v1428 = ++v801;
                                          }
                                          while ( v801 < v797 );
                                          v799 = (LPCWSTR)((char *)lpModuleNamef + (_QWORD)v1348);
                                          lpModuleNamef = (LPCWSTR)((char *)lpModuleNamef + (_QWORD)v1348);
                                          v800 = &v1394[v1459];
                                          v1394 = (wchar_t *)((char *)v1394 + v1459 * 2);
                                          ++Sizeg;
                                        }
                                        while ( Sizeg < v798 );
                                        v784 = 0;
                                      }
                                      ((void (__fastcall *)(SIZE_T))off_1807A9138)(v1380);
                                      if ( v1310 )
                                        ((void (__fastcall *)(__int64, wchar_t *))off_1807A9178)(v783, v1310);
                                      goto LABEL_1061;
                                    }
                                    v792 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
                                  }
                                  else
                                  {
                                    v792 = -5723992;
                                  }
                                  v1479 = v792;
                                  v1421 = v792;
                                  goto LABEL_1038;
                                }
LABEL_1073:
                                GetLastError();
                                v195 = 0LL;
                                goto LABEL_1097;
                              }
                            }
                            GetLastError();
                            goto LABEL_1097;
                          }
                          if ( v1674 || (v806 = -64, v622 == 1) )
                            v806 = -1;
                          LOWORD(v1480) = 0;
                          BYTE2(v1480) = v806;
                          HIBYTE(v1480) = 1;
                          v1429 = 0;
                          v1338 = 0;
                          v1269 = 0;
                          Srcd = (LPVOID)((__int64 (__fastcall *)(SIZE_T))off_1807A9110)(v1270);
                          v807 = 0;
                          if ( !Srcd )
                            goto LABEL_1073;
                          if ( v622 == 1 )
                          {
                            v808 = DWORD2(v1683) - v1683;
                            if ( DWORD2(v1683) - (int)v1683 <= DWORD2(v1682) - (int)v1682 )
                              v808 = DWORD2(v1682) - v1682;
                            v1328 = v808;
                            v809 = HIDWORD(v1683) - DWORD1(v1682);
                            LODWORD(v1511) = HIDWORD(v1683) - DWORD1(v1682);
                            v810 = 0;
                            if ( v1673 )
                            {
                              v1429 = v1682 + v808 - DWORD2(v1682);
                              v1269 = v1683 + v808 - DWORD2(v1683);
                              v810 = v1429;
                              v807 = v1269;
                              v809 = (int)v1511;
                            }
                            v811 = v810 + DWORD2(v1682) - v1682;
                            v1451 = HIDWORD(v1682) - DWORD1(v1682);
                            LODWORD(v1513) = v807 + DWORD2(v1683) - v1683;
                            v1460 = DWORD1(v1683) - DWORD1(v1682);
                            v1349 = HIDWORD(v1683) - DWORD1(v1682);
                            v812 = v1429;
                          }
                          else
                          {
                            v808 = DWORD2(v1695);
                            v1328 = DWORD2(v1695);
                            v809 = HIDWORD(v1695);
                            LODWORD(v1511) = HIDWORD(v1695);
                            v1617 = v1682;
                            v1618 = v1683;
                            v1451 = HIDWORD(v1682);
                            v811 = DWORD2(v1682);
                            v1338 = DWORD1(v1682);
                            v812 = v1682;
                            v1429 = v1682;
                            v1349 = HIDWORD(v1683);
                            LODWORD(v1513) = DWORD2(v1683);
                            v1460 = DWORD1(v1683);
                            v1269 = v1683;
                          }
                          v1592 = 0LL;
                          v1710 = 0LL;
                          v1711 = 0LL;
                          v1712 = 0;
                          LODWORD(v1709) = 40;
                          DWORD1(v1709) = v808;
                          DWORD2(v1709) = -v809;
                          HIDWORD(v1709) = 2097153;
                          v813 = (void *)((__int64 (__fastcall *)(LPVOID, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                                           Srcd,
                                           &v1709,
                                           0LL,
                                           &v1592,
                                           0LL,
                                           0);
                          v1488 = v813;
                          if ( !v813 )
                          {
                            GetLastError();
                            v195 = 0LL;
                            v805 = Srcd;
LABEL_1096:
                            ((void (__fastcall *)(LPVOID))off_1807A9130)(v805);
LABEL_1097:
                            if ( v1542 )
                              ((void (__fastcall *)(LPVOID))off_1807A9138)(v1542);
LABEL_1179:
                            if ( v1675 )
                            {
                              v865 = -1LL;
                              do
                                ++v865;
                              while ( *((_WORD *)v1675 + v865) );
                              memset(v1675, 0, 2 * v865 + 2);
                              MemoryFree(v1675);
                              v1675 = 0LL;
                            }
                            if ( v1676 )
                            {
                              v866 = -1LL;
                              do
                                ++v866;
                              while ( *((_WORD *)v1676 + v866) );
                              memset(v1676, 0, 2 * v866 + 2);
                              MemoryFree(v1676);
                              v1676 = 0LL;
                            }
                            if ( v1677 )
                            {
                              v867 = -1LL;
                              do
                                ++v867;
                              while ( *((_WORD *)v1677 + v867) );
                              memset(v1677, 0, 2 * v867 + 2);
                              MemoryFree(v1677);
                              v1677 = 0LL;
                            }
                            if ( v1678 )
                            {
                              ((void (*)(void))off_1807A9138)();
                              v1678 = 0LL;
                            }
                            if ( v1679 )
                            {
                              ((void (*)(void))off_1807A9138)();
                              v1679 = 0LL;
                            }
                            if ( v1680 )
                            {
                              ((void (*)(void))off_1807A9138)();
                              v1680 = 0LL;
                            }
                            while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                              ;
                            v868 = g_WarbirdSecureFunctionsRefCount;
                            if ( g_WarbirdSecureFunctionsRefCount > 0 )
                            {
                              --g_WarbirdSecureFunctionsRefCount;
                              if ( v868 == 1 )
                              {
                                v869 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                                v870 = 4LL;
                                do
                                {
                                  if ( *v869 )
                                    FreeLibrary(*v869);
                                  v869 += 3;
                                  --v870;
                                }
                                while ( v870 );
                                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                                memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
                              }
                            }
                            _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                            v1313 = g_WarbirdNotificationInformation;
                            v1482 = (unsigned int)((__int64 (*)(void))off_1807A9198)()
                                  - (unsigned int)g_WarbirdPaintInitTime;
                            v1744 = 0LL;
                            v1745 = 0LL;
                            v1746 = 0LL;
                            v1747 = 0LL;
                            while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                              ;
                            v871 = g_WarbirdSecureFunctionsRefCount;
                            if ( g_WarbirdSecureFunctionsRefCount )
                              goto LABEL_1248;
                            lpModuleNamek = 0;
                            v1384 = 0;
                            v872 = 0LL;
                            v1484 = 0LL;
                            v873 = (char *)MemoryAlloc(0x338uLL);
                            v1409 = (WCHAR *)v873;
                            if ( v873 )
                            {
                              v874 = 0;
                              v875 = -1;
                              v876 = 0;
                              v877 = v873 + 7;
                              v878 = 103LL;
                              v879 = (unsigned __int8 *)&unk_180697D32;
                              do
                              {
                                v880 = v879[1] | ((*v879 | ((*(v879 - 1) | (*(v879 - 2) << 8)) << 8)) << 8);
                                v881 = v879[5] | ((v879[4] | ((v879[3] | (v879[2] << 8)) << 8)) << 8);
                                v882 = v880 ^ v876;
                                v879 += 8;
                                v883 = v882 ^ (unsigned int)v195 ^ v881 ^ 0xAC987321;
                                v884 = (4991 * __ROL4__(v883 + 1419157410, 5) + __ROL4__(v883, 10)) ^ v882;
                                v885 = (43881 * __ROR4__(v884 + 133239679, 9) - __ROL4__(v884, 2)) ^ v883;
                                v886 = (24670 * v885 - (v885 >> 13) - 123127970) ^ v884;
                                v887 = (2033 * __ROL4__(v886 ^ 0xAB69, 6) - __ROL4__(v886, 2)) ^ v885;
                                v888 = (133239679 - (v887 ^ 0xAB69605E)) ^ v886;
                                v889 = (43881 * (v888 ^ 0x137F)) ^ __ROR4__(v888, 6) ^ v887;
                                v890 = (24670 * __ROR4__(v889 + 133239679, 15) + __ROL4__(v889, 2)) ^ v888;
                                v891 = (2033 * __ROR4__(v890 + 1419157410, 14) - __ROL4__(v890, 8)) ^ v889;
                                v892 = (4991 * __ROR4__(v891 ^ 0xAB69605E, 12)) ^ __ROR4__(v891, 10) ^ v890;
                                v893 = v891 ^ (v892 >> 10) ^ (43881 * (v892 ^ 0x7F1));
                                v894 = (2033 * (__ROR4__(~v893, 5) + 24670)) ^ v892;
                                v895 = v893 ^ (v894 - 2033) ^ 0xAB69605E;
                                v896 = ((v895 >> 2) + 4991 * __ROL4__(v893 ^ (v894 - 2033) ^ 0xAB6967AF, 2)) ^ v894;
                                v897 = (43881 * __ROR4__(v896 - 133239679, 6) + __ROL4__(v896, 7)) ^ v895;
                                v898 = (24670 * (v897 ^ 0x137F) + __ROR4__(v897, 9)) ^ v896;
                                v899 = (2033 * __ROL4__(v898 ^ 0xAB69, 5) + __ROL4__(v898, 7)) ^ v897;
                                v900 = v898 ^ v899 ^ 0xAC987321;
                                v901 = (4991 * __ROR4__(v900, 3) - 219010071) ^ v899;
                                v902 = (24670 * __ROR4__(v901 - 133239679, 1) - __ROR4__(v901, 6)) ^ v900;
                                v903 = (2033 * __ROL4__(v902 - 1419157410, 3) + __ROL4__(v902, 14)) ^ v901;
                                v904 = (4991 * __ROL4__(v903 - 1419157410, 15) - __ROR4__(v903, 14)) ^ v902;
                                v905 = (v904 >> 3) ^ (43881 * (v904 ^ 0x605E)) ^ v903;
                                v906 = v874 ^ (24670 * __ROL4__(v905 ^ 0x7F1137F, 4)) ^ __ROL4__(v905, 2) ^ v904;
                                v907 = v875 ^ v905;
                                *(v877 - 4) = v906;
                                v908 = __ROR4__(v906, 8);
                                *v877 = v907;
                                v909 = __ROR4__(v907, 8);
                                *(v877 - 5) = v908;
                                v910 = __ROR4__(v908, 8);
                                *(v877 - 1) = v909;
                                v911 = __ROR4__(v909, 8);
                                *(v877 - 6) = v910;
                                v912 = __ROR4__(v910, 8);
                                *(v877 - 2) = v911;
                                v913 = __ROR4__(v911, 8);
                                *(v877 - 7) = v912;
                                *(v877 - 3) = v913;
                                v876 = __ROR4__(v912, 8);
                                LODWORD(v195) = __ROR4__(v913, 8);
                                v874 = v880;
                                v875 = v881;
                                v877 += 8;
                                --v878;
                              }
                              while ( v878 );
                              v195 = 0LL;
                              v914 = 0LL;
                              v915 = 0;
                              v122 = v1462;
                              v872 = v1484;
                              v916 = (int)v1484;
                              do
                                v915 ^= *((_BYTE *)v1409 + v914++);
                              while ( v914 < 0x338 );
                              if ( v915 == 64LL )
                              {
                                v872 = v1409;
                                v917 = v1409;
                                *((_BYTE *)v1409 + 823) = 0;
                                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                                if ( !*(_BYTE *)v1409 )
                                  goto LABEL_1240;
                                while ( 1 )
                                {
                                  v918 = v917;
                                  v919 = -1LL;
                                  do
                                    ++v919;
                                  while ( v917[v919] );
                                  v920 = &v917[v919];
                                  v921 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1384;
                                  if ( !GetModuleHandleExW(0, v918, (HMODULE *)v921) )
                                    break;
                                  v916 = 0;
                                  if ( **(_WORD **)v921 == 23117
                                    && (v922 = *(int *)(*(_QWORD *)v921 + 60LL), (unsigned int)v922 < 0x10000000)
                                    && (v923 = *(_QWORD *)v921 + v922, v923 >= *(_QWORD *)v921)
                                    && *(_DWORD *)v923 == 17744 )
                                  {
                                    if ( ((*(_WORD *)(v923 + 24) - 267) & 0xFEFF) != 0 )
                                    {
                                      v916 = -1073741811;
                                    }
                                    else
                                    {
                                      *(_QWORD *)(v921 + 12) = *(_QWORD *)(v923 + 136);
                                      *((_DWORD *)v921 + 2) = *(_DWORD *)(v923 + 80);
                                    }
                                  }
                                  else
                                  {
                                    v916 = -1073741701;
                                  }
                                  v1399 = *(_DWORD *)(v920 + 1);
                                  v917 = v920 + 3;
                                  v924 = 0;
                                  for ( n = 0; v924 < v1399; n = v924 )
                                  {
                                    v925 = (const CHAR *)v917;
                                    v926 = -1LL;
                                    do
                                      ++v926;
                                    while ( *((_BYTE *)v917 + v926) );
                                    v917 = (WCHAR *)((char *)v917 + v926 + 1);
                                    if ( v916 >= 0 )
                                    {
                                      v927 = (void **)GetProcAddress(*(HMODULE *)v921, v925);
                                      if ( !v927 )
                                        goto LABEL_1238;
                                      (&WARBIRD::g_FuncAddress)[lpModuleNamek] = v927;
                                      v924 = n;
                                    }
                                    ++lpModuleNamek;
                                    ++v924;
                                  }
                                  ++v1384;
                                  v195 = 0LL;
                                  if ( !*(_BYTE *)v917 )
                                    goto LABEL_1239;
                                }
                                v916 = -1073741702;
LABEL_1238:
                                v195 = 0LL;
LABEL_1239:
                                if ( !v872 )
                                {
LABEL_1241:
                                  if ( v916 < 0 )
                                  {
                                    v929 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                                    v930 = 4LL;
                                    do
                                    {
                                      if ( *v929 )
                                        FreeLibrary(*v929);
                                      v929 += 3;
                                      --v930;
                                    }
                                    while ( v930 );
                                    v931 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                                    memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
                                    goto LABEL_1249;
                                  }
                                  v871 = g_WarbirdSecureFunctionsRefCount;
LABEL_1248:
                                  g_WarbirdSecureFunctionsRefCount = v871 + 1;
                                  v931 = (HMODULE *)&WARBIRD::g_arModuleInfo;
LABEL_1249:
                                  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                                  LODWORD(v1744) = v1482;
                                  v1743 = 1;
                                  LODWORD(v1745) = -1721306479;
                                  DWORD2(v1744) = 1;
                                  LODWORD(v1746) = 1;
                                  DWORD2(v1745) = 1;
                                  LODWORD(v1747) = v1313;
                                  DWORD2(v1746) = 1;
                                  v932 = 4LL;
                                  ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1807A91D0)(
                                    0LL,
                                    8225LL,
                                    4LL,
                                    &v1743);
                                  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                                    ;
                                  v933 = g_WarbirdSecureFunctionsRefCount;
                                  if ( g_WarbirdSecureFunctionsRefCount > 0 )
                                  {
                                    --g_WarbirdSecureFunctionsRefCount;
                                    if ( v933 == 1 )
                                    {
                                      do
                                      {
                                        if ( *v931 )
                                          FreeLibrary(*v931);
                                        v931 += 3;
                                        --v932;
                                      }
                                      while ( v932 );
                                      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                                      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
                                    }
                                  }
                                  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                                  ((void (__fastcall *)(_QWORD, SIZE_T))off_1807A9260)(0LL, v1270);
                                  v1513 = (void *)v1481;
LABEL_1258:
                                  SH<void *,SH_HANDLE>::Reset(v1581);
                                  v934 = 0LL;
                                  v1631 = 0LL;
                                  *(_OWORD *)v1634 = 0LL;
                                  v935 = GetProcessHeap();
                                  v936 = (WCHAR *)HeapAlloc(v935, 8u, 0xA0uLL);
                                  v937 = v936;
                                  if ( !v936 )
                                  {
LABEL_1298:
                                    v1630 = 0LL;
                                    v971 = v1631;
                                    if ( v1631 )
                                    {
                                      v972 = GetProcessHeap();
                                      HeapFree(v972, 0, v971);
                                      v1631 = 0LL;
                                    }
                                    v1634[0] = 0LL;
                                    v973 = v1634[1];
                                    if ( v1634[1] )
                                    {
                                      v974 = GetProcessHeap();
                                      HeapFree(v974, 0, v973);
                                      v1634[1] = 0LL;
                                    }
                                    if ( v195 )
                                    {
                                      v975 = GetProcessHeap();
                                      HeapFree(v975, 0, v195);
                                    }
                                    if ( v934 )
                                    {
                                      v976 = GetProcessHeap();
                                      HeapFree(v976, 0, v934);
                                    }
                                    goto LABEL_1306;
                                  }
                                  *(_OWORD *)v936 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
                                  *((_OWORD *)v936 + 1) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
                                  *((_OWORD *)v936 + 2) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
                                  *((_OWORD *)v936 + 3) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
                                  *((_OWORD *)v936 + 4) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
                                  *((_OWORD *)v936 + 5) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
                                  *((_OWORD *)v936 + 6) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
                                  *((_OWORD *)v936 + 7) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
                                  *((_OWORD *)v936 + 8) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
                                  *((_OWORD *)v936 + 9) = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
                                  v195 = v936;
                                  v1484 = v936;
                                  v938 = GetProcessHeap();
                                  v939 = HeapAlloc(v938, 8u, 8uLL);
                                  v934 = v939;
                                  if ( !v939 )
                                  {
                                    v934 = 0LL;
                                    goto LABEL_1298;
                                  }
                                  *v939 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
                                  v1482 = (__int64)v939;
                                  v940 = __rdtsc();
                                  v1520 = 0;
                                  if ( (int)RtlUIntAdd(4u, 4, (unsigned int *)&v1521) >= 0
                                    && (int)RtlUIntAdd(0, v1521, &v1520) >= 0
                                    && (int)RtlUIntAdd(v941, 160, (unsigned int *)&v1522) >= 0 )
                                  {
                                    v942 = RtlUIntAdd(v1520, v1522, &v1520);
                                    if ( (v944 | v942) >= 0 && (int)RtlUIntAdd(v943, 8, (unsigned int *)&v1523) >= 0 )
                                    {
                                      v945 = RtlUIntAdd(v1520, v1523, &v1520);
                                      if ( (v947 | v945) >= 0 && (int)RtlUIntAdd(v946, 8, (unsigned int *)&v1524) >= 0 )
                                      {
                                        v948 = RtlUIntAdd(v1520, v1524, &v1520);
                                        if ( (v949 | v948) >= 0 )
                                        {
                                          HIDWORD(v1630) = v1520;
                                          v950 = v1520;
                                          v951 = GetProcessHeap();
                                          v952 = HeapAlloc(v951, 8u, v950);
                                          v953 = v952;
                                          if ( v952 )
                                          {
                                            v1631 = v952;
                                            LODWORD(v1630) = 0;
                                            if ( (int)RtlULongLongAdd(
                                                        (unsigned __int64)v952,
                                                        4LL,
                                                        (unsigned __int64 *)&v1635) >= 0
                                              && v953 + 2 <= (_DWORD *)((char *)v953 + HIDWORD(v1630)) )
                                            {
                                              v955 = (unsigned int)((_DWORD)v954 + 4);
                                              *v953 = v955;
                                              *v1635 = v955;
                                              v956 = v1630 + 1;
                                              LODWORD(v1630) = v1630 + 1;
                                              if ( v1631 == v954 )
                                              {
                                                v957 = 0LL;
                                                if ( (int)RtlUIntAdd(v955, 160, (unsigned int *)&v1525) < 0 )
                                                  goto LABEL_1296;
                                                if ( (int)RtlUIntAdd(HIDWORD(v1630), v1525, (unsigned int *)&v1630 + 1) < 0 )
                                                  goto LABEL_1297;
                                                v959 = v1630 + 1;
LABEL_1282:
                                                LODWORD(v1630) = v959;
                                                if ( v1631 )
                                                {
                                                  v965 = (int *)v1631;
                                                  v1601 = (int *)v1631;
                                                  if ( v959 )
                                                  {
                                                    while ( (int)RtlUIntAdd(v958, *v965, &v1528) >= 0 )
                                                    {
                                                      if ( (int)RtlULongLongAdd(v966, v1528, (unsigned __int64 *)&v1601) < 0 )
                                                        goto LABEL_1297;
                                                      v965 = v1601;
                                                      if ( v967 + 1 >= v959 )
                                                        goto LABEL_1290;
                                                    }
                                                    goto LABEL_1296;
                                                  }
LABEL_1290:
                                                  if ( (int)RtlULongLongAdd(
                                                              (unsigned __int64)v965,
                                                              v958,
                                                              (unsigned __int64 *)&v1620) < 0
                                                    || v968 + 3 > (_DWORD *)((char *)v1631 + HIDWORD(v1630)) )
                                                  {
                                                    goto LABEL_1297;
                                                  }
                                                  *v968 = 8;
                                                  *v1620 = *v934;
                                                  goto LABEL_1293;
                                                }
                                                if ( (int)RtlUIntAdd(v958, 8, (unsigned int *)&v1527) < 0 )
                                                  goto LABEL_1296;
                                                if ( (int)RtlUIntAdd(HIDWORD(v1630), v1527, (unsigned int *)&v1630 + 1) >= 0 )
                                                {
LABEL_1293:
                                                  v969 = v1630 + 1;
                                                  LODWORD(v1630) = v1630 + 1;
                                                  if ( v1631 )
                                                  {
                                                    v977 = (int *)v1631;
                                                    v1602 = (int *)v1631;
                                                    if ( v969 )
                                                    {
                                                      while ( (int)RtlUIntAdd(v964, *v977, &v1530) >= 0
                                                           && (int)RtlULongLongAdd(
                                                                     v978,
                                                                     v1530,
                                                                     (unsigned __int64 *)&v1602) >= 0 )
                                                      {
                                                        v977 = v1602;
                                                        if ( v979 + 1 >= v969 )
                                                          goto LABEL_1311;
                                                      }
                                                      goto LABEL_1296;
                                                    }
LABEL_1311:
                                                    if ( (int)RtlULongLongAdd(
                                                                (unsigned __int64)v977,
                                                                v964,
                                                                (unsigned __int64 *)&v1623) < 0
                                                      || v980 + 3 > (_DWORD *)((char *)v1631 + HIDWORD(v1630)) )
                                                    {
                                                      goto LABEL_1296;
                                                    }
                                                    *v980 = 8;
                                                    *v1623 = v940;
                                                  }
                                                  else if ( (int)RtlUIntAdd(v964, 8, (unsigned int *)&v1529) < 0
                                                         || (int)RtlUIntAdd(
                                                                   HIDWORD(v1630),
                                                                   v1529,
                                                                   (unsigned int *)&v1630 + 1) < 0 )
                                                  {
                                                    goto LABEL_1296;
                                                  }
                                                  LODWORD(v1630) = v1630 + 1;
                                                  if ( (int)RtlUIntAdd(v970, v970, &v1531) < 0 )
                                                    goto LABEL_1296;
                                                  v982 = v1531;
                                                  v1532 = v1531;
                                                  if ( (int)RtlUIntAdd(v981, 8, (unsigned int *)&v1533) < 0
                                                    || (int)RtlUIntAdd(v982, v1533, (unsigned int *)&v1532) < 0 )
                                                  {
                                                    goto LABEL_1296;
                                                  }
                                                  v1314 = v1532;
                                                  v983 = 0LL;
                                                  v1410 = 0LL;
                                                  v1483 = 0LL;
                                                  v1400 = 0;
                                                  v984 = 0LL;
                                                  v1542 = 0LL;
                                                  v1488 = 0LL;
                                                  v1285 = __rdtsc();
                                                  v1534 = 8;
                                                  v985 = RtlUIntAdd(8u, SHIDWORD(v1630), &v1534);
                                                  if ( v985 >= 0 )
                                                  {
                                                    v988 = (v1534 + 7) & 0xFFFFFFF8;
                                                    if ( v988 < v1534 )
                                                      goto LABEL_1296;
                                                    v1534 = (v1534 + 7) & 0xFFFFFFF8;
                                                    v989 = v988;
                                                    v990 = GetProcessHeap();
                                                    v991 = HeapAlloc(v990, 8u, v989);
                                                    Srce = v991;
                                                    if ( !v991 )
                                                      goto LABEL_1296;
                                                    v1603[0] = v991;
                                                    *v991 = v1630;
                                                    v985 = RtlULongLongAdd(
                                                             (unsigned __int64)v991,
                                                             4LL,
                                                             (unsigned __int64 *)v1603);
                                                    if ( v985 < 0
                                                      || (v993 = v1603[0],
                                                          *(_DWORD *)v1603[0] = HIDWORD(v1630),
                                                          v985 = RtlULongLongAdd(
                                                                   (unsigned __int64)v993,
                                                                   v992,
                                                                   (unsigned __int64 *)v1603),
                                                          v985 < 0) )
                                                    {
                                                      v995 = GetProcessHeap();
                                                      HeapFree(v995, 0, Srce);
                                                      v986 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_QWORD *)(v1534 + v994 - 8) = v1285;
                                                      memcpy_0(v1603[0], v1631, HIDWORD(v1630));
                                                      v983 = (WCHAR *)Srce;
                                                      v1410 = (LPCWSTR)Srce;
                                                      v986 = v1534;
                                                    }
                                                    v987 = 0LL;
                                                  }
                                                  v996 = v985 | 0x10000000;
                                                  if ( v996 < 0 )
                                                    goto LABEL_1396;
                                                  v1286 = v987;
                                                  if ( v983 )
                                                  {
                                                    v997 = v986;
                                                    Srcf = (LPVOID)v986;
                                                    if ( !v986
                                                      || (v1481 = v986 + 8LL,
                                                          v998 = (const WCHAR *)MemoryAlloc(v1481),
                                                          (v1461 = (WCHAR *)v998) == 0LL) )
                                                    {
                                                      v996 = -805306367;
                                                      goto LABEL_1397;
                                                    }
                                                    v999 = 0;
                                                    v1257 = 0;
                                                    v1000 = 0LL;
                                                    if ( v997 )
                                                    {
                                                      do
                                                        v999 ^= *((_BYTE *)v983 + v1000++);
                                                      while ( v1000 < v997 );
                                                      v1257 = v999;
                                                    }
                                                    v1690 = 0xC81ECB17B1B54A58uLL;
                                                    v1001 = v983;
                                                    v1002 = v998;
                                                    v1454 = v998;
                                                    v1003 = 0;
                                                    v1004 = -1;
                                                    lpModuleNamel = 0;
                                                    v1385 = 0;
                                                    v1005 = (unsigned __int64)Srcf;
                                                    v1006 = (unsigned __int8)Srcf & 7;
                                                    if ( ((unsigned __int8)Srcf & 7) != 0 )
                                                    {
                                                      v1007 = 0;
                                                      v1008 = 0;
                                                      v1353 = 0;
                                                      v1009 = 56;
                                                      do
                                                      {
                                                        v1010 = *(unsigned __int8 *)v1001;
                                                        v1001 = (WCHAR *)((char *)v1001 + 1);
                                                        if ( v1008 >= 4 )
                                                          v1007 |= v1010 << v1009;
                                                        else
                                                          v1003 |= v1010 << (v1009 - 32);
                                                        lpModuleNamel = v1007;
                                                        v1385 = v1003;
                                                        v1008 = v1353 + 1;
                                                        v1353 = v1008;
                                                        v1009 -= 8;
                                                      }
                                                      while ( v1008 < (int)v1006 );
                                                      v1003 ^= 0xB17A307A;
                                                      v1011 = v1007 ^ 0x42F6B18D;
                                                      v1012 = v1003;
                                                      v1013 = v1011;
                                                      v1410 = v983;
                                                      v999 = v1257;
                                                      v1014 = (WCHAR *)v1454;
                                                      v1015 = 0;
                                                      do
                                                      {
                                                        v1354 = (WCHAR *)((char *)v1014 + 1);
                                                        if ( v1015 >= 4 )
                                                        {
                                                          v1013 = __ROL4__(v1013, 8);
                                                          v1016 = v1013;
                                                        }
                                                        else
                                                        {
                                                          v1012 = __ROL4__(v1012, 8);
                                                          v1016 = v1012;
                                                        }
                                                        *(_BYTE *)v1014 = v1016;
                                                        ++v1015;
                                                        v1014 = (WCHAR *)((char *)v1014 + 1);
                                                      }
                                                      while ( v1015 < (int)v1006 );
                                                      v1002 = v1354;
                                                      v957 = 0LL;
                                                      v984 = 0LL;
                                                      v1005 = (unsigned __int64)Srcf;
                                                      if ( v1006 <= 4 )
                                                      {
                                                        v1004 = 0;
                                                        if ( v1006 >= 4 )
                                                          goto LABEL_1348;
                                                        v1003 = v1003 >> (8 * (4 - v1006)) << (8 * (4 - v1006));
                                                      }
                                                      else
                                                      {
                                                        v1004 = v1011 >> (8 * (8 - v1006)) << (8 * (8 - v1006));
                                                      }
                                                      v1002 = v1354;
                                                    }
LABEL_1348:
                                                    if ( v1005 >> 3 )
                                                    {
                                                      v1017 = WORD2(v1690);
                                                      v1355 = HIWORD(v1690);
                                                      v1018 = (char *)v1002 + 7;
                                                      v1019 = (unsigned __int8 *)(v1001 + 1);
                                                      v1020 = v1005 >> 3;
                                                      v1021 = lpModuleNamel;
                                                      do
                                                      {
                                                        v1022 = v1019[1] | ((*v1019 | ((*(v1019 - 1) | (*(v1019 - 2) << 8)) << 8)) << 8);
                                                        v1023 = v1019[5] | ((v1019[4] | ((v1019[3] | (v1019[2] << 8)) << 8)) << 8);
                                                        v1024 = v1023 ^ v1004;
                                                        v1019 += 8;
                                                        v1025 = v1022 ^ HIDWORD(v1690) ^ (v1024 - 19032) ^ v1003;
                                                        v1026 = (__ROR4__(HIDWORD(v1690) ^ v1025, 15) * WORD1(v1690)
                                                               + __ROR4__(v1025, 7)) ^ v1024;
                                                        v1027 = (__ROR4__(v1026 - 1313519016, 9) * v1017
                                                               - __ROR4__(v1026, 10)) ^ v1025;
                                                        v1028 = (__ROL4__(v1027 ^ v1017, 4) * HIWORD(v1690)
                                                               + __ROL4__(v1027, 5)) ^ v1026;
                                                        v1029 = (HIDWORD(v1690) - (v1028 ^ 0xB1B54A58)) ^ v1027;
                                                        v1030 = (WORD1(v1690) * (v1029 - 19032) - (v1029 >> 6)) ^ v1028;
                                                        v1031 = (19032 * (v1017 ^ __ROR4__(v1030, 15))) ^ v1029;
                                                        v1032 = (v1017 * (HIWORD(v1690) + __ROR4__(~v1031, 3))) ^ v1030;
                                                        v1033 = (v1032 - HIDWORD(v1690) - 19032) ^ v1031;
                                                        v1034 = (WORD1(v1690) * (v1033 ^ HIWORD(v1690))) ^ __ROR4__(v1033, 10) ^ v1032;
                                                        v1035 = (__ROL4__(v1034 ^ 0x4A58, 6) * v1017) ^ __ROR4__(v1034, 3) ^ v1033;
                                                        v1036 = (19032 * (__ROR4__(v1035, 15) - HIWORD(v1690))) ^ v1034;
                                                        v1037 = (v1036 >> 15) ^ (19032 * __ROL4__(v1036 - v1017, 3)) ^ (v1036 >> 1) ^ (19032 * (v1036 ^ HIWORD(v1690))) ^ v1035;
                                                        v1038 = (WORD1(v1690) * (v1037 - v1017) - (v1037 >> 13)) ^ v1036;
                                                        v1039 = (v1017 * __ROR4__(-1313519016 - v1038, 9)) ^ __ROR4__(v1038, 11) ^ v1037;
                                                        v1040 = (v1039 - HIWORD(v1690) + 1313519016) ^ v1038;
                                                        v1041 = (19032 * (v1040 ^ WORD1(v1690)) - __ROR4__(v1040, 7)) ^ v1039;
                                                        v1042 = (WORD1(v1690) * __ROL4__(v1041 ^ HIWORD(v1690), 4)
                                                               - __ROR4__(v1041, 16)) ^ v1040;
                                                        v1043 = (v1017 * __ROR4__(-1313519016 - v1042, 10)
                                                               + __ROR4__(v1042, 4)) ^ v1041;
                                                        v1044 = (v1355 * __ROR4__(v1043 + 1313519016, 4)) ^ __ROR4__(v1043, 9) ^ v1042;
                                                        v1045 = (19032 * __ROL4__(HIDWORD(v1690) ^ v1044, 8)
                                                               - __ROL4__(v1044, 2)) ^ v1043;
                                                        v1046 = (WORD1(v1690) * __ROR4__(HIDWORD(v1690) - v1045, 11)
                                                               - __ROR4__(v1045, 12)) ^ v1044;
                                                        v1047 = (v1046 >> 8) ^ (v1017 * (WORD1(v1690) ^ v1046)) ^ v1045;
                                                        v1048 = HIDWORD(v1690) ^ v1047 ^ 0xB1B54A58;
                                                        v1049 = v1385 ^ v1047;
                                                        v1050 = v1021 ^ v1048 ^ v1046;
                                                        *(v1018 - 4) = v1049;
                                                        v1051 = __ROR4__(v1049, 8);
                                                        *v1018 = v1050;
                                                        v1052 = __ROR4__(v1050, 8);
                                                        *(v1018 - 5) = v1051;
                                                        v1053 = __ROR4__(v1051, 8);
                                                        *(v1018 - 1) = v1052;
                                                        v1054 = __ROR4__(v1052, 8);
                                                        *(v1018 - 6) = v1053;
                                                        v1055 = __ROR4__(v1053, 8);
                                                        *(v1018 - 2) = v1054;
                                                        v1056 = __ROR4__(v1054, 8);
                                                        *(v1018 - 7) = v1055;
                                                        *(v1018 - 3) = v1056;
                                                        v1003 = __ROR4__(v1055, 8);
                                                        v1004 = __ROR4__(v1056, 8);
                                                        v1385 = v1022;
                                                        v1021 = v1023;
                                                        v1018 += 8;
                                                        --v1020;
                                                      }
                                                      while ( v1020 );
                                                      v999 = v1257;
                                                      v122 = v1462;
                                                      v957 = 0LL;
                                                      v984 = 0LL;
                                                      v983 = (WCHAR *)v1410;
                                                      v1005 = (unsigned __int64)Srcf;
                                                    }
                                                    *(_QWORD *)((char *)v1461 + v1005) = v999;
                                                    v1603[4] = (void *)160;
                                                    v1057 = GetProcessHeap();
                                                    v1058 = (unsigned int *)HeapAlloc(v1057, 8u, 0x30uLL);
                                                    if ( v1058 )
                                                    {
                                                      *v1058 = v1481;
                                                      v1069 = GetProcessHeap();
                                                      v1070 = HeapAlloc(v1069, 8u, (unsigned int)v1481);
                                                      if ( v1070 )
                                                      {
                                                        *((_QWORD *)v1058 + 1) = v1070;
                                                        memcpy_0(v1070, v1461, (unsigned int)v1481);
                                                        v1058[4] = 160;
                                                        v1071 = GetProcessHeap();
                                                        v1072 = HeapAlloc(v1071, 8u, 0xA0uLL);
                                                        v1059 = 0;
                                                        if ( v1072 )
                                                        {
                                                          *((_QWORD *)v1058 + 3) = v1072;
                                                          *v1072 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                                                          v1072[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                                                          v1072[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                                                          v1072[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                                                          v1072[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                                                          v1072[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                                                          v1072[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                                                          v1072[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                                                          v1072[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                                                          v1072[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                                                          v1058[8] = 8;
                                                          v1073 = GetProcessHeap();
                                                          v1074 = HeapAlloc(v1073, 8u, 8uLL);
                                                          if ( v1074 )
                                                          {
                                                            *((_QWORD *)v1058 + 5) = v1074;
                                                            *v1074 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                                                            v957 = v1058;
                                                            v1060 = 0LL;
LABEL_1355:
                                                            v1061 = GetProcessHeap();
                                                            HeapFree(v1061, 0, v1461);
                                                            if ( v1060 )
                                                            {
                                                              v1411 = (WCHAR *)v1060[1];
                                                              if ( v1411 )
                                                              {
                                                                v1062 = GetProcessHeap();
                                                                HeapFree(v1062, 0, v1411);
                                                                v1060[1] = 0LL;
                                                              }
                                                              v1412 = (WCHAR *)v1060[3];
                                                              if ( v1412 )
                                                              {
                                                                v1063 = GetProcessHeap();
                                                                HeapFree(v1063, 0, v1412);
                                                                v1060[3] = 0LL;
                                                              }
                                                              v1413 = (WCHAR *)v1060[5];
                                                              if ( v1413 )
                                                              {
                                                                v1064 = GetProcessHeap();
                                                                HeapFree(v1064, 0, v1413);
                                                                v1060[5] = 0LL;
                                                              }
                                                              v1065 = GetProcessHeap();
                                                              HeapFree(v1065, 0, v1060);
                                                            }
                                                            v996 = v1059 | 0x10000000;
                                                            if ( v996 < 0 )
                                                              goto LABEL_1396;
                                                            LODWORD(v1535) = 4;
                                                            v1066 = RtlUIntAdd(4u, *v957, (unsigned int *)&v1535);
                                                            if ( v1066 >= 0 )
                                                            {
                                                              v1066 = RtlUIntAdd(v1535, v1067, (unsigned int *)&v1535);
                                                              if ( v1066 >= 0 )
                                                              {
                                                                v1066 = RtlUIntAdd(
                                                                          v1535,
                                                                          v957[4],
                                                                          (unsigned int *)&v1535);
                                                                if ( v1066 >= 0 )
                                                                {
                                                                  v1066 = RtlUIntAdd(
                                                                            v1535,
                                                                            v1068,
                                                                            (unsigned int *)&v1535);
                                                                  if ( v1066 >= 0 )
                                                                  {
                                                                    v1066 = RtlUIntAdd(
                                                                              v1535,
                                                                              v957[8],
                                                                              (unsigned int *)&v1535);
                                                                    if ( v1066 >= 0 )
                                                                    {
                                                                      lpModuleNamem = v1535;
                                                                      v1079 = v1535;
                                                                      v1080 = GetProcessHeap();
                                                                      v1081 = HeapAlloc(v1080, 8u, v1079);
                                                                      v1082 = v1081;
                                                                      if ( !v1081 )
                                                                        goto LABEL_1452;
                                                                      v1604 = v1081;
                                                                      *v1081 = *v957;
                                                                      v1066 = RtlULongLongAdd(
                                                                                (unsigned __int64)v1081,
                                                                                4LL,
                                                                                (unsigned __int64 *)&v1604);
                                                                      if ( v1066 >= 0 )
                                                                      {
                                                                        memcpy_0(
                                                                          v1604,
                                                                          *((const void **)v957 + 1),
                                                                          *v957);
                                                                        v1066 = RtlULongLongAdd(
                                                                                  (unsigned __int64)v1604,
                                                                                  *v957,
                                                                                  (unsigned __int64 *)&v1604);
                                                                        if ( v1066 >= 0 )
                                                                        {
                                                                          v1083 = v1604;
                                                                          *(_DWORD *)v1604 = v957[4];
                                                                          v1066 = RtlULongLongAdd(
                                                                                    (unsigned __int64)v1083,
                                                                                    4LL,
                                                                                    (unsigned __int64 *)&v1604);
                                                                          if ( v1066 >= 0 )
                                                                          {
                                                                            memcpy_0(
                                                                              v1604,
                                                                              *((const void **)v957 + 3),
                                                                              v957[4]);
                                                                            v1066 = RtlULongLongAdd(
                                                                                      (unsigned __int64)v1604,
                                                                                      v957[4],
                                                                                      (unsigned __int64 *)&v1604);
                                                                            if ( v1066 >= 0 )
                                                                            {
                                                                              v1084 = v1604;
                                                                              *(_DWORD *)v1604 = v957[8];
                                                                              v1066 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1084,
                                                                                        4LL,
                                                                                        (unsigned __int64 *)&v1604);
                                                                              if ( v1066 >= 0 )
                                                                              {
                                                                                memcpy_0(
                                                                                  v1604,
                                                                                  *((const void **)v957 + 5),
                                                                                  v957[8]);
                                                                                v1066 = RtlULongLongAdd(
                                                                                          (unsigned __int64)v1604,
                                                                                          v957[8],
                                                                                          (unsigned __int64 *)&v1604);
                                                                                if ( v1066 >= 0 )
                                                                                {
                                                                                  v1483 = (SIZE_T)v1082;
                                                                                  v1085 = lpModuleNamem;
                                                                                  v1400 = lpModuleNamem;
                                                                                  goto LABEL_1392;
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                      v1086 = GetProcessHeap();
                                                                      HeapFree(v1086, 0, v1082);
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            v1085 = v1483;
LABEL_1392:
                                                            v996 = v1066 | 0x10000000;
                                                            if ( v996 < 0 )
                                                              goto LABEL_1396;
                                                            v1536 = 8;
                                                            v1087 = RtlUIntAdd(8u, v1314, &v1536);
                                                            v996 = v1091 | v1087;
                                                            if ( (v1091 | v1087) >= 0 )
                                                            {
                                                              v1092 = (v1536 + 7) & 0xFFFFFFF8;
                                                              if ( v1092 >= v1536 )
                                                              {
                                                                v1537 = (v1536 + 7) & 0xFFFFFFF8;
                                                                v996 = RtlUIntAdd(v1092, v1088, &v1537);
                                                                if ( v996 >= 0 )
                                                                {
                                                                  if ( v1631 && (unsigned int)v1630 > 1 )
                                                                  {
                                                                    v1605 = (int *)v1631;
                                                                    v996 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1631,
                                                                             4LL,
                                                                             (unsigned __int64 *)&v1605);
                                                                    if ( v996 >= 0 )
                                                                    {
                                                                      v996 = RtlULongLongAdd(
                                                                               (unsigned __int64)v1605,
                                                                               v1114,
                                                                               (unsigned __int64 *)&v1605);
                                                                      if ( v996 >= 0 )
                                                                      {
                                                                        v1315 = *v1605;
                                                                        v996 = RtlULongLongAdd(
                                                                                 (unsigned __int64)v1605,
                                                                                 4LL,
                                                                                 (unsigned __int64 *)&v1605);
                                                                        if ( v996 >= 0 )
                                                                        {
                                                                          if ( (unsigned int)v1630 > 2 )
                                                                          {
                                                                            v1116 = (unsigned int *)v1631;
                                                                            v1606 = (unsigned int *)v1631;
                                                                            v1483 = v1115;
                                                                            v1400 = v1085;
                                                                            while ( 1 )
                                                                            {
                                                                              v1117 = *v1116;
                                                                              v996 = RtlULongLongAdd(
                                                                                       (unsigned __int64)v1116,
                                                                                       4LL,
                                                                                       (unsigned __int64 *)&v1606);
                                                                              if ( v996 < 0 )
                                                                                break;
                                                                              v996 = RtlULongLongAdd(
                                                                                       (unsigned __int64)v1606,
                                                                                       v1117,
                                                                                       (unsigned __int64 *)&v1606);
                                                                              if ( v996 < 0 )
                                                                                break;
                                                                              v1116 = v1606;
                                                                              if ( (unsigned int)(v1118 + 1) >= 2 )
                                                                              {
                                                                                v996 = RtlULongLongAdd(
                                                                                         (unsigned __int64)v1606,
                                                                                         4LL,
                                                                                         (unsigned __int64 *)&v1606);
                                                                                if ( v996 < 0 )
                                                                                  goto LABEL_1396;
                                                                                LODWORD(v1538) = 4;
                                                                                v996 = RtlUIntAdd(
                                                                                         4u,
                                                                                         v1119,
                                                                                         (unsigned int *)&v1538);
                                                                                v1090 = 0;
                                                                                if ( v996 < 0 )
                                                                                  goto LABEL_1448;
                                                                                v996 = RtlUIntAdd(
                                                                                         v1538,
                                                                                         4,
                                                                                         (unsigned int *)&v1538);
                                                                                if ( v996 < 0 )
                                                                                  goto LABEL_1448;
                                                                                v996 = RtlUIntAdd(
                                                                                         v1538,
                                                                                         v1315,
                                                                                         (unsigned int *)&v1538);
                                                                                if ( v996 < 0 )
                                                                                  goto LABEL_1448;
                                                                                v996 = RtlUIntAdd(
                                                                                         v1538,
                                                                                         4,
                                                                                         (unsigned int *)&v1538);
                                                                                if ( v996 < 0 )
                                                                                  goto LABEL_1448;
                                                                                v996 = RtlUIntAdd(
                                                                                         v1538,
                                                                                         v1120,
                                                                                         (unsigned int *)&v1538);
                                                                                if ( v996 < 0 )
                                                                                  goto LABEL_1448;
                                                                                v1121 = v1538;
                                                                                v1316 = v1538;
                                                                                if ( (unsigned int)v1538 > 0x400000 )
                                                                                {
                                                                                  v996 = -2147418113;
                                                                                  goto LABEL_1396;
                                                                                }
                                                                                goto LABEL_1449;
                                                                              }
                                                                            }
                                                                          }
                                                                          else
                                                                          {
                                                                            v996 = -1073741811;
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    v996 = -1073741811;
                                                                  }
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v996 = -1073741675;
                                                              }
                                                              goto LABEL_1396;
                                                            }
LABEL_1448:
                                                            v1121 = v1090;
                                                            v1316 = v1090;
                                                            if ( v996 < 0 )
                                                              goto LABEL_1396;
LABEL_1449:
                                                            v1417 = v983;
                                                            v1474 = v957;
                                                            v1122 = v1089;
                                                            v1123 = v1121;
                                                            v1124 = GetProcessHeap();
                                                            v1125 = (unsigned int *)HeapAlloc(v1124, 8u, v1123);
                                                            if ( v1125 )
                                                            {
                                                              v984 = v1125;
                                                              if ( !v1122 )
                                                              {
                                                                v996 = -2147024809;
                                                                v1483 = 0LL;
                                                                goto LABEL_1396;
                                                              }
                                                              v1640[0] = v1122;
                                                              v1641 = v1400;
                                                              v1640[1] = v1125;
                                                              v1642 = v1316;
                                                              v1643 = 0;
                                                              if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                                                                && (v1126 = GetProcAddress(
                                                                              hModule,
                                                                              "NtQuerySystemInformation")) != 0LL )
                                                              {
                                                                v1127 = ((__int64 (__fastcall *)(__int64, _QWORD *))v1126)(
                                                                          134LL,
                                                                          v1640);
                                                                v996 = v1127 | 0x10000000;
                                                                v1128 = v1316;
                                                                if ( v1127 >= 0 )
                                                                {
                                                                  v1128 = v1642;
                                                                  v1129 = v983;
                                                                  v1130 = v957;
                                                                  goto LABEL_1465;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v1131 = GetLastError();
                                                                v996 = v1131;
                                                                if ( v1131 > 0 )
                                                                  v996 = (unsigned __int16)v1131 | 0x80070000;
                                                                if ( v996 >= 0 )
                                                                  v996 = -2147467259;
                                                                v1128 = v1316;
                                                              }
                                                              v1483 = v1122;
                                                              if ( v996 == -805306333 )
                                                              {
                                                                v996 = -2147024774;
                                                                goto LABEL_1396;
                                                              }
                                                              v1130 = v957;
                                                              v1129 = v983;
                                                              if ( v996 < 0 )
                                                              {
LABEL_1396:
                                                                if ( !v983 )
                                                                {
LABEL_1398:
                                                                  if ( v957 )
                                                                  {
                                                                    v1094 = (void *)*((_QWORD *)v957 + 1);
                                                                    if ( v1094 )
                                                                    {
                                                                      v1095 = GetProcessHeap();
                                                                      HeapFree(v1095, 0, v1094);
                                                                      *((_QWORD *)v957 + 1) = 0LL;
                                                                    }
                                                                    v1096 = (void *)*((_QWORD *)v957 + 3);
                                                                    if ( v1096 )
                                                                    {
                                                                      v1097 = GetProcessHeap();
                                                                      HeapFree(v1097, 0, v1096);
                                                                      *((_QWORD *)v957 + 3) = 0LL;
                                                                    }
                                                                    v1098 = (void *)*((_QWORD *)v957 + 5);
                                                                    if ( v1098 )
                                                                    {
                                                                      v1099 = GetProcessHeap();
                                                                      HeapFree(v1099, 0, v1098);
                                                                      *((_QWORD *)v957 + 5) = 0LL;
                                                                    }
                                                                    v1100 = GetProcessHeap();
                                                                    HeapFree(v1100, 0, v957);
                                                                  }
                                                                  v1101 = (void *)v1483;
                                                                  if ( v1483 )
                                                                  {
                                                                    v1102 = GetProcessHeap();
                                                                    HeapFree(v1102, 0, v1101);
                                                                  }
                                                                  if ( v984 )
                                                                  {
                                                                    v1103 = GetProcessHeap();
                                                                    HeapFree(v1103, 0, v984);
                                                                  }
                                                                  v1104 = v1542;
                                                                  if ( v1542 )
                                                                  {
                                                                    v1105 = (void *)*((_QWORD *)v1542 + 1);
                                                                    if ( v1105 )
                                                                    {
                                                                      v1106 = GetProcessHeap();
                                                                      HeapFree(v1106, 0, v1105);
                                                                      v1104[1] = 0LL;
                                                                    }
                                                                    v1107 = (void *)v1104[3];
                                                                    if ( v1107 )
                                                                    {
                                                                      v1108 = GetProcessHeap();
                                                                      HeapFree(v1108, 0, v1107);
                                                                      v1104[3] = 0LL;
                                                                    }
                                                                    v1109 = (void *)v1104[5];
                                                                    if ( v1109 )
                                                                    {
                                                                      v1110 = GetProcessHeap();
                                                                      HeapFree(v1110, 0, v1109);
                                                                      v1104[5] = 0LL;
                                                                    }
                                                                    v1111 = GetProcessHeap();
                                                                    HeapFree(v1111, 0, v1104);
                                                                  }
                                                                  v1112 = v1488;
                                                                  if ( v1488 )
                                                                  {
                                                                    v1113 = GetProcessHeap();
                                                                    HeapFree(v1113, 0, v1112);
                                                                  }
                                                                  if ( v996 >= 0 && LODWORD(v1634[0]) && v1634[1] )
                                                                  {
                                                                    v1553 = v1634[1];
                                                                    RtlULongLongAdd(
                                                                      (unsigned __int64)v1634[1],
                                                                      4LL,
                                                                      (unsigned __int64 *)&v1553);
                                                                  }
                                                                  goto LABEL_1296;
                                                                }
LABEL_1397:
                                                                v1093 = GetProcessHeap();
                                                                HeapFree(v1093, 0, v983);
                                                                goto LABEL_1398;
                                                              }
LABEL_1465:
                                                              if ( v1128 >= 4 )
                                                              {
                                                                v1132 = *v984;
                                                                v1317 = *v984;
                                                                v1133 = v984 + 1;
                                                                if ( v984 + 1 < v984 )
                                                                  goto LABEL_1486;
                                                                if ( v1128 - 4 >= (unsigned int)v1132 )
                                                                {
                                                                  v1483 = *v984;
                                                                  v1134 = (unsigned int *)((char *)v1133 + v1132);
                                                                  v1469 = (char *)v1133 + v1132;
                                                                  if ( (unsigned int *)((char *)v1133 + v1132) < v1133
                                                                    || (unsigned int)(v1132 + 4) < 4 )
                                                                  {
                                                                    goto LABEL_1486;
                                                                  }
                                                                  if ( v1128 - ((_DWORD)v1132 + 4) >= 4 )
                                                                  {
                                                                    v1135 = *v1134;
                                                                    v1136 = v1134 + 1;
                                                                    if ( v1134 + 1 < v1134 )
                                                                      goto LABEL_1486;
                                                                    v1137 = v1132 + 8;
                                                                    if ( (int)v1132 + 8 < (unsigned int)(v1132 + 4) )
                                                                      goto LABEL_1486;
                                                                    if ( v1128 - v1137 >= (unsigned int)v1135 )
                                                                    {
                                                                      if ( (unsigned int *)((char *)v1136 + v1135) < v1136 )
                                                                        goto LABEL_1486;
                                                                      v1138 = v1135 + v1137;
                                                                      if ( (unsigned int)v1135 + v1137 < v1137 )
                                                                        goto LABEL_1486;
                                                                      if ( v1128 - v1138 >= 4 )
                                                                      {
                                                                        v1139 = *(unsigned int *)((char *)v1136 + v1135);
                                                                        v1287 = (char *)v1136 + v1135 + 4;
                                                                        if ( v1287 < (char *)v1136 + v1135 )
                                                                          goto LABEL_1486;
                                                                        v1140 = v1138 + 4;
                                                                        if ( v1138 + 4 < v1138 )
                                                                          goto LABEL_1486;
                                                                        if ( v1128 - v1140 >= (unsigned int)v1139 )
                                                                        {
                                                                          if ( v1140 + (unsigned int)v1139 >= v1140 )
                                                                          {
                                                                            if ( v1128 == v1140 + (_DWORD)v1139
                                                                              && (unsigned int)(v1135 + v1139 + v1132)
                                                                               + 12LL == v1128 )
                                                                            {
                                                                              v1141 = GetProcessHeap();
                                                                              v1142 = HeapAlloc(v1141, 8u, 0x30uLL);
                                                                              Srcg = v1142;
                                                                              if ( !v1142 )
                                                                              {
                                                                                v996 = -805306345;
                                                                                v1483 = v1122;
                                                                                v957 = v1474;
                                                                                v983 = (WCHAR *)v1417;
                                                                                goto LABEL_1396;
                                                                              }
                                                                              v1143 = v984 + 1;
                                                                              if ( v984 == (unsigned int *)-4LL )
                                                                              {
                                                                                *(_DWORD *)v1142 = (_DWORD)v1143;
                                                                                v1142[1] = v1143;
                                                                              }
                                                                              else
                                                                              {
                                                                                *(_DWORD *)v1142 = v1317;
                                                                                v1144 = GetProcessHeap();
                                                                                v1145 = HeapAlloc(v1144, 8u, v1483);
                                                                                if ( !v1145 )
                                                                                  goto LABEL_1499;
                                                                                v1142[1] = v1145;
                                                                                memcpy_0(v1145, v984 + 1, v1483);
                                                                              }
                                                                              if ( v1469 == (char *)-4LL )
                                                                              {
                                                                                *((_DWORD *)v1142 + 4) = 0;
                                                                                v1142[3] = 0LL;
                                                                              }
                                                                              else
                                                                              {
                                                                                *((_DWORD *)v1142 + 4) = v1135;
                                                                                v1146 = GetProcessHeap();
                                                                                v1147 = HeapAlloc(v1146, 8u, v1135);
                                                                                if ( !v1147 )
                                                                                  goto LABEL_1499;
                                                                                v1142[3] = v1147;
                                                                                memcpy_0(v1147, v1469 + 4, v1135);
                                                                              }
                                                                              if ( !v1287 )
                                                                              {
                                                                                *((_DWORD *)v1142 + 8) = 0;
                                                                                v1142[5] = 0LL;
                                                                                goto LABEL_1514;
                                                                              }
                                                                              *((_DWORD *)v1142 + 8) = v1139;
                                                                              v1148 = GetProcessHeap();
                                                                              v1149 = HeapAlloc(v1148, 8u, v1139);
                                                                              if ( v1149 )
                                                                              {
                                                                                v1142[5] = v1149;
                                                                                memcpy_0(v1149, v1287, v1139);
LABEL_1514:
                                                                                v1542 = v1142;
                                                                                v1150 = 0;
                                                                                v1470 = v984;
                                                                                v1483 = v1122;
                                                                                v957 = v1474;
                                                                                v983 = (WCHAR *)v1417;
                                                                                v1157 = (unsigned int *)v1542;
                                                                                goto LABEL_1515;
                                                                              }
LABEL_1499:
                                                                              v957 = v1474;
                                                                              v983 = (WCHAR *)v1417;
                                                                              v1150 = -1073741801;
                                                                              v1483 = v1122;
                                                                              v1542 = 0LL;
                                                                              v1151 = Srcg;
                                                                              v1288 = (void *)Srcg[1];
                                                                              if ( v1288 )
                                                                              {
                                                                                v1152 = GetProcessHeap();
                                                                                HeapFree(v1152, 0, v1288);
                                                                                v1151 = Srcg;
                                                                                Srcg[1] = 0LL;
                                                                              }
                                                                              v1289 = (void *)v1151[3];
                                                                              if ( v1289 )
                                                                              {
                                                                                v1153 = GetProcessHeap();
                                                                                HeapFree(v1153, 0, v1289);
                                                                                v1151 = Srcg;
                                                                                Srcg[3] = 0LL;
                                                                              }
                                                                              v1290 = (void *)v1151[5];
                                                                              if ( v1290 )
                                                                              {
                                                                                v1154 = GetProcessHeap();
                                                                                HeapFree(v1154, 0, v1290);
                                                                                Srcg[5] = 0LL;
                                                                              }
                                                                              v1155 = GetProcessHeap();
                                                                              HeapFree(v1155, 0, Srcg);
                                                                              v1481 = v1122;
                                                                              v1156 = v1542;
                                                                              v1157 = 0LL;
                                                                              v1542 = 0LL;
                                                                              v1470 = v984;
                                                                              v1483 = v1122;
                                                                              if ( v1156 )
                                                                              {
                                                                                v1158 = v1156;
                                                                                v1159 = (void *)v1156[1];
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
                                                                                v1157 = 0LL;
                                                                                v1542 = 0LL;
                                                                                v1150 = -1073741801;
                                                                                v1470 = v984;
                                                                                v1122 = v1481;
                                                                                v1483 = v1481;
                                                                                v957 = v1474;
                                                                              }
LABEL_1515:
                                                                              v996 = v1150 | 0x10000000;
                                                                              if ( v996 < 0 )
                                                                                goto LABEL_1396;
                                                                              if ( !v1157
                                                                                || (Srch = (unsigned __int8 *)*((_QWORD *)v1157 + 1)) == 0LL
                                                                                || !*v1157 )
                                                                              {
                                                                                v996 = -805306355;
                                                                                goto LABEL_1396;
                                                                              }
                                                                              v1166 = *v1157 - 8LL;
                                                                              v1481 = v1166;
                                                                              v1167 = (int *)MemoryAlloc(v1166);
                                                                              v1488 = v1167;
                                                                              if ( !v1167 )
                                                                                goto LABEL_1587;
                                                                              v1168 = 0;
                                                                              v1691 = 0x7F1137FAB69605ELL;
                                                                              v1169 = Srch;
                                                                              v1170 = v1166 & 7;
                                                                              if ( (v1166 & 7) != 0 )
                                                                              {
                                                                                v1318 = 0;
                                                                                v1171 = 0;
                                                                                v1172 = Srch;
                                                                                v1173 = 0;
                                                                                v1174 = 56;
                                                                                do
                                                                                {
                                                                                  v1175 = *v1172++;
                                                                                  if ( v1171 >= 4 )
                                                                                  {
                                                                                    v1173 |= v1175 << v1174;
                                                                                    v1176 = v1318;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    v1176 = (v1175 << (v1174 - 32)) | v1318;
                                                                                    v1318 = v1176;
                                                                                  }
                                                                                  ++v1171;
                                                                                  v1174 -= 8;
                                                                                }
                                                                                while ( v1171 < (int)v1170 );
                                                                                v1486 = v1173;
                                                                                lpModuleNamen = v1176 ^ 0x92F65A5;
                                                                                v1177 = v1173 ^ 0x699A899C;
                                                                                v1178 = 0;
                                                                                v1179 = v1176 ^ 0x92F65A5;
                                                                                v1180 = v1173 ^ 0x699A899C;
                                                                                v1470 = v984;
                                                                                v1483 = v1122;
                                                                                v1474 = v957;
                                                                                v1417 = v983;
                                                                                v1167 = (int *)v1488;
                                                                                v122 = v1462;
                                                                                v1181 = v1488;
                                                                                do
                                                                                {
                                                                                  v1386 = (SIZE_T)(v1181 + 1);
                                                                                  if ( v1178 >= 4 )
                                                                                  {
                                                                                    v1180 = __ROL4__(v1180, 8);
                                                                                    v1182 = v1180;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    v1179 = __ROL4__(v1179, 8);
                                                                                    v1182 = v1179;
                                                                                  }
                                                                                  *v1181 = v1182;
                                                                                  ++v1178;
                                                                                  ++v1181;
                                                                                }
                                                                                while ( v1178 < (int)v1170 );
                                                                                v1183 = (_DWORD *)v1386;
                                                                                v1168 = 0;
                                                                                v1122 = v1483;
                                                                                v1184 = lpModuleNamen;
                                                                                v1166 = v1481;
                                                                                if ( v1170 > 4 )
                                                                                {
                                                                                  v1185 = v1177 >> (8 * (8 - v1170)) << (8 * (8 - v1170));
                                                                                  v1183 = (_DWORD *)v1386;
LABEL_1534:
                                                                                  v1169 = v1172;
                                                                                  goto LABEL_1535;
                                                                                }
                                                                                v1185 = 0;
                                                                                if ( v1170 >= 4 )
                                                                                  goto LABEL_1534;
                                                                                v1169 = v1172;
                                                                                v1184 = lpModuleNamen >> (8 * (4 - v1170)) << (8 * (4 - v1170));
                                                                                v1183 = (_DWORD *)v1386;
                                                                              }
                                                                              else
                                                                              {
                                                                                v1318 = 0;
                                                                                v1185 = 0;
                                                                                v1184 = 0;
                                                                                v1183 = v1167;
                                                                              }
LABEL_1535:
                                                                              if ( v1166 >> 3 )
                                                                              {
                                                                                v1387 = WORD1(v1691);
                                                                                v1356 = HIWORD(v1691);
                                                                                v1186 = (char *)v1183 + 7;
                                                                                v1187 = v1169 + 2;
                                                                                v1188 = v1318;
                                                                                v1189 = v1166 >> 3;
                                                                                v1190 = HIDWORD(v1691);
                                                                                v1191 = HIDWORD(v1691) ^ 0xAB69605E;
                                                                                v1192 = WORD2(v1691);
                                                                                do
                                                                                {
                                                                                  v1193 = v1187[1] | ((*v1187 | ((*(v1187 - 1) | (*(v1187 - 2) << 8)) << 8)) << 8);
                                                                                  v1194 = v1187[5] | ((v1187[4] | ((v1187[3] | (v1187[2] << 8)) << 8)) << 8);
                                                                                  v1195 = v1193 ^ v1184;
                                                                                  v1187 += 8;
                                                                                  v1196 = v1195 ^ v1191 ^ v1194 ^ v1185;
                                                                                  v1197 = (v1192
                                                                                         * __ROL4__(
                                                                                             v1196 + 1419157410,
                                                                                             5)
                                                                                         + __ROL4__(v1196, 10)) ^ v1195;
                                                                                  v1198 = (v1387
                                                                                         * __ROR4__(v1190 + v1197, 9)
                                                                                         - __ROL4__(v1197, 2)) ^ v1196;
                                                                                  v1199 = (24670 * (v1198 - v1192)
                                                                                         - (v1198 >> 13)) ^ v1197;
                                                                                  v1200 = (v1356
                                                                                         * __ROL4__(
                                                                                             WORD1(v1691) ^ v1199,
                                                                                             6)
                                                                                         - __ROL4__(v1199, 2)) ^ v1198;
                                                                                  v1201 = (v1190 - (v1200 ^ 0xAB69605E)) ^ v1199;
                                                                                  v1202 = (v1387 * (v1192 ^ v1201)) ^ __ROR4__(v1201, 6) ^ v1200;
                                                                                  v1203 = (24670
                                                                                         * __ROR4__(v1190 + v1202, 15)
                                                                                         + __ROL4__(v1202, 2)) ^ v1201;
                                                                                  v1204 = (v1356
                                                                                         * __ROR4__(
                                                                                             v1203 + 1419157410,
                                                                                             14)
                                                                                         - __ROL4__(v1203, 8)) ^ v1202;
                                                                                  v1205 = (v1192
                                                                                         * __ROR4__(
                                                                                             v1204 ^ 0xAB69605E,
                                                                                             12)) ^ __ROR4__(v1204, 10) ^ v1203;
                                                                                  v1206 = (v1205 >> 10) ^ (WORD1(v1691) * (HIWORD(v1691) ^ v1205)) ^ v1204;
                                                                                  v1207 = (HIWORD(v1691)
                                                                                         * (__ROR4__(~v1206, 5) + 24670)) ^ v1205;
                                                                                  v1208 = (v1207 - HIWORD(v1691)) ^ 0xAB69605E ^ v1206;
                                                                                  v1209 = ((v1208 >> 2)
                                                                                         + v1192
                                                                                         * __ROL4__(
                                                                                             HIWORD(v1691) ^ v1208,
                                                                                             2)) ^ v1207;
                                                                                  v1210 = (v1387
                                                                                         * __ROR4__(v1209 - v1190, 6)
                                                                                         + __ROL4__(v1209, 7)) ^ v1208;
                                                                                  v1211 = (24670 * (v1192 ^ v1210)
                                                                                         + __ROR4__(v1210, 9)) ^ v1209;
                                                                                  v1212 = (v1356
                                                                                         * __ROL4__(
                                                                                             WORD1(v1691) ^ v1211,
                                                                                             5)
                                                                                         + __ROL4__(v1211, 7)) ^ v1210;
                                                                                  v1213 = v1212 ^ v1191 ^ v1211;
                                                                                  v1214 = (v1192
                                                                                         * (__ROR4__(v1213, 3)
                                                                                          - WORD1(v1691))) ^ v1212;
                                                                                  v1215 = (24670
                                                                                         * __ROR4__(v1214 - v1190, 1)
                                                                                         - __ROR4__(v1214, 6)) ^ v1213;
                                                                                  v1216 = (v1356
                                                                                         * __ROL4__(
                                                                                             v1215 - 1419157410,
                                                                                             3)
                                                                                         + __ROL4__(v1215, 14)) ^ v1214;
                                                                                  v1217 = (v1192
                                                                                         * __ROL4__(
                                                                                             v1216 - 1419157410,
                                                                                             15)
                                                                                         - __ROR4__(v1216, 14)) ^ v1215;
                                                                                  v1218 = (v1217 >> 3) ^ (WORD1(v1691) * (v1217 ^ 0x605E)) ^ v1216;
                                                                                  v1219 = v1188 ^ (24670
                                                                                                 * __ROL4__(
                                                                                                     v1218 ^ v1190,
                                                                                                     4)) ^ __ROL4__(v1218, 2) ^ v1217;
                                                                                  v1220 = v1486 ^ v1218;
                                                                                  *(v1186 - 4) = v1219;
                                                                                  v1221 = __ROR4__(v1219, 8);
                                                                                  *v1186 = v1220;
                                                                                  v1222 = __ROR4__(v1220, 8);
                                                                                  *(v1186 - 5) = v1221;
                                                                                  v1223 = __ROR4__(v1221, 8);
                                                                                  *(v1186 - 1) = v1222;
                                                                                  v1224 = __ROR4__(v1222, 8);
                                                                                  *(v1186 - 6) = v1223;
                                                                                  v1225 = __ROR4__(v1223, 8);
                                                                                  *(v1186 - 2) = v1224;
                                                                                  v1226 = __ROR4__(v1224, 8);
                                                                                  *(v1186 - 7) = v1225;
                                                                                  *(v1186 - 3) = v1226;
                                                                                  v1184 = __ROR4__(v1225, 8);
                                                                                  v1185 = __ROR4__(v1226, 8);
                                                                                  v1188 = v1193;
                                                                                  v1486 = v1194;
                                                                                  v1186 += 8;
                                                                                  --v1189;
                                                                                }
                                                                                while ( v1189 );
                                                                                v1168 = 0;
                                                                                v122 = v1462;
                                                                                v957 = v1474;
                                                                                v984 = v1470;
                                                                                v983 = (WCHAR *)v1417;
                                                                                v1122 = v1483;
                                                                                v1167 = (int *)v1488;
                                                                                v1166 = v1481;
                                                                              }
                                                                              for ( ii = 0LL; ii < v1166; ++ii )
                                                                                v1168 ^= *((_BYTE *)v1167 + ii);
                                                                              v1228 = v1542;
                                                                              v1483 = v1122;
                                                                              if ( v1168 != *(_QWORD *)&Srch[v1166] )
                                                                              {
                                                                                MemoryFree(v1167);
LABEL_1587:
                                                                                v996 = -805306367;
                                                                                v1488 = 0LL;
                                                                                goto LABEL_1396;
                                                                              }
                                                                              v1539 = 0;
                                                                              v1608 = v1167;
                                                                              if ( (unsigned int)v1166 < 4 )
                                                                              {
                                                                                v1483 = v1122;
LABEL_1584:
                                                                                v1488 = v1167;
                                                                                v1542 = v1228;
LABEL_1585:
                                                                                v1229 = -1073741762;
                                                                                goto LABEL_1586;
                                                                              }
                                                                              v1319 = *v1167;
                                                                              v1229 = RtlULongLongAdd(
                                                                                        (unsigned __int64)v1167,
                                                                                        4LL,
                                                                                        (unsigned __int64 *)&v1608);
                                                                              v1488 = v1230;
                                                                              v1542 = v1231;
                                                                              v1483 = v1232;
                                                                              if ( v1229 < 0 )
                                                                                goto LABEL_1586;
                                                                              v1229 = RtlUIntAdd(0, 4, &v1539);
                                                                              v1488 = v1167;
                                                                              v1542 = v1228;
                                                                              v1483 = v1233;
                                                                              if ( v1229 < 0 )
                                                                                goto LABEL_1586;
                                                                              if ( (unsigned int)v1481 - v1539 >= 4 )
                                                                              {
                                                                                lpModuleNameo = *(_DWORD *)v1608;
                                                                                v1229 = RtlULongLongAdd(
                                                                                          (unsigned __int64)v1608,
                                                                                          4LL,
                                                                                          (unsigned __int64 *)&v1608);
                                                                                v1488 = v1234;
                                                                                v1542 = v1235;
                                                                                v1483 = v1236;
                                                                                if ( v1229 < 0 )
                                                                                  goto LABEL_1586;
                                                                                v1229 = RtlUIntAdd(v1539, 4, &v1539);
                                                                                v1488 = v1167;
                                                                                v1542 = v1228;
                                                                                v1483 = v1233;
                                                                                if ( v1229 < 0 )
                                                                                  goto LABEL_1586;
                                                                                if ( (unsigned int)v1481 - v1539 >= lpModuleNameo )
                                                                                {
                                                                                  v1229 = RtlUIntAdd(
                                                                                            v1539,
                                                                                            lpModuleNameo,
                                                                                            &v1539);
                                                                                  v1488 = v1167;
                                                                                  v1542 = v1228;
                                                                                  v1483 = v1233;
                                                                                  if ( v1229 < 0 )
                                                                                    goto LABEL_1586;
                                                                                  if ( (char *)v1167
                                                                                     + (unsigned int)v1481 >= (char *)v1608 + lpModuleNameo
                                                                                    && (unsigned __int64)v1167
                                                                                     + (unsigned int)v1481
                                                                                     - (_QWORD)v1608
                                                                                     - lpModuleNameo < 8 )
                                                                                  {
                                                                                    v1237 = 0LL;
                                                                                    Srci = 0LL;
                                                                                    v1229 = 0;
                                                                                    v1401 = 0;
                                                                                    v1488 = v1167;
                                                                                    v1542 = v1228;
                                                                                    v1483 = v1233;
                                                                                    if ( !v1608 )
                                                                                      goto LABEL_1572;
                                                                                    v1481 = (SIZE_T)v1608;
                                                                                    v1229 = RtlULongLongAdd(
                                                                                              (unsigned __int64)v1608,
                                                                                              lpModuleNameo,
                                                                                              &v1609);
                                                                                    v1488 = v1240;
                                                                                    v1542 = v1238;
                                                                                    v1483 = v1239;
                                                                                    if ( v1229 >= 0 )
                                                                                    {
                                                                                      v1488 = v1240;
                                                                                      v1542 = v1238;
                                                                                      v1483 = v1239;
                                                                                      v1241 = v1609;
                                                                                      if ( v1481 < v1609 )
                                                                                      {
                                                                                        v1488 = v1240;
                                                                                        v1542 = v1238;
                                                                                        v1483 = v1122;
                                                                                        v1242 = v1481;
                                                                                        while ( 1 )
                                                                                        {
                                                                                          v1229 = RtlULongLongAdd(
                                                                                                    v1242,
                                                                                                    4LL,
                                                                                                    &v1610);
                                                                                          if ( v1229 < 0 )
                                                                                            break;
                                                                                          if ( v1610 > v1241 )
                                                                                            goto LABEL_1568;
                                                                                          v1229 = RtlUIntAdd(
                                                                                                    4u,
                                                                                                    *v1243,
                                                                                                    &v1540);
                                                                                          if ( v1229 < 0 )
                                                                                            goto LABEL_1586;
                                                                                          v1229 = RtlULongLongAdd(
                                                                                                    v1244,
                                                                                                    v1540,
                                                                                                    v1611);
                                                                                          v1488 = v1246;
                                                                                          v1542 = v1245;
                                                                                          v1483 = v1122;
                                                                                          if ( v1229 < 0 )
                                                                                            goto LABEL_1586;
                                                                                          v1242 = v1611[0];
                                                                                          v1488 = v1246;
                                                                                          v1542 = v1245;
                                                                                          v1483 = v1122;
                                                                                          if ( v1611[0] > v1241 )
                                                                                            goto LABEL_1568;
                                                                                          ++v1401;
                                                                                          if ( v1611[0] >= v1241 )
                                                                                          {
                                                                                            v1488 = v1246;
                                                                                            v1542 = v1245;
                                                                                            v1483 = v1122;
                                                                                            goto LABEL_1570;
                                                                                          }
                                                                                        }
LABEL_1580:
                                                                                        if ( v1229 < 0
                                                                                          || v1319 == LODWORD(v1634[0]) )
                                                                                        {
                                                                                          goto LABEL_1586;
                                                                                        }
                                                                                        goto LABEL_1585;
                                                                                      }
                                                                                      v1242 = v1481;
LABEL_1570:
                                                                                      if ( v1242 == v1241 )
                                                                                      {
                                                                                        v1237 = 0LL;
LABEL_1572:
                                                                                        if ( lpModuleNameo )
                                                                                        {
                                                                                          v1247 = GetProcessHeap();
                                                                                          v1248 = lpModuleNameo;
                                                                                          v1237 = HeapAlloc(
                                                                                                    v1247,
                                                                                                    8u,
                                                                                                    lpModuleNameo);
                                                                                          Srci = v1237;
                                                                                          if ( !v1237 )
                                                                                          {
                                                                                            v1229 = -1073741801;
                                                                                            goto LABEL_1586;
                                                                                          }
                                                                                          v1229 = 0;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          v1248 = 0LL;
                                                                                        }
                                                                                        if ( v1608 )
                                                                                        {
                                                                                          memcpy_0(v1237, v1608, v1248);
                                                                                          v1237 = Srci;
                                                                                        }
                                                                                        v1634[1] = v1237;
                                                                                        LODWORD(v1634[0]) = v1401;
                                                                                        goto LABEL_1580;
                                                                                      }
LABEL_1568:
                                                                                      v1229 = -1073741811;
                                                                                    }
LABEL_1586:
                                                                                    v996 = v1229 | 0x10000000;
                                                                                    goto LABEL_1396;
                                                                                  }
                                                                                }
                                                                              }
                                                                              v1483 = v1233;
                                                                              goto LABEL_1584;
                                                                            }
                                                                            goto LABEL_1485;
                                                                          }
LABEL_1486:
                                                                          v996 = -805306219;
                                                                          goto LABEL_1487;
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
LABEL_1485:
                                                              v996 = -805306306;
LABEL_1487:
                                                              v1483 = v1122;
                                                              v957 = v1130;
                                                              v983 = v1129;
                                                              goto LABEL_1396;
                                                            }
LABEL_1452:
                                                            v996 = -805306345;
                                                            goto LABEL_1396;
                                                          }
                                                        }
                                                      }
                                                      v1059 = -1073741801;
                                                      v1414 = (WCHAR *)*((_QWORD *)v1058 + 1);
                                                      if ( v1414 )
                                                      {
                                                        v1075 = GetProcessHeap();
                                                        HeapFree(v1075, 0, v1414);
                                                        *((_QWORD *)v1058 + 1) = 0LL;
                                                      }
                                                      v1415 = (WCHAR *)*((_QWORD *)v1058 + 3);
                                                      if ( v1415 )
                                                      {
                                                        v1076 = GetProcessHeap();
                                                        HeapFree(v1076, 0, v1415);
                                                        *((_QWORD *)v1058 + 3) = 0LL;
                                                      }
                                                      v1416 = (WCHAR *)*((_QWORD *)v1058 + 5);
                                                      if ( v1416 )
                                                      {
                                                        v1077 = GetProcessHeap();
                                                        HeapFree(v1077, 0, v1416);
                                                        *((_QWORD *)v1058 + 5) = 0LL;
                                                      }
                                                      v1078 = GetProcessHeap();
                                                      HeapFree(v1078, 0, v1058);
                                                    }
                                                    else
                                                    {
                                                      v1059 = -1073741801;
                                                    }
                                                    v1060 = (_QWORD *)v1286;
                                                    goto LABEL_1355;
                                                  }
LABEL_1296:
                                                  v934 = (_QWORD *)v1482;
                                                }
LABEL_1297:
                                                v195 = v1484;
                                                goto LABEL_1298;
                                              }
                                              v960 = (int *)v1631;
                                              v1600 = (int *)v1631;
                                              if ( v956 )
                                              {
                                                while ( (int)RtlUIntAdd(v955, *v960, &v1526) >= 0 )
                                                {
                                                  if ( (int)RtlULongLongAdd(
                                                              (unsigned __int64)v960,
                                                              v1526,
                                                              (unsigned __int64 *)&v1600) < 0 )
                                                    goto LABEL_1590;
                                                  v960 = v1600;
                                                  v955 = 4LL;
                                                  if ( v961 + 1 >= v962 )
                                                    goto LABEL_1279;
                                                }
                                                goto LABEL_1296;
                                              }
LABEL_1279:
                                              if ( (int)RtlULongLongAdd(
                                                          (unsigned __int64)v960,
                                                          v955,
                                                          (unsigned __int64 *)&v1619) >= 0
                                                && v960 + 41 <= (int *)((char *)v1631 + HIDWORD(v1630)) )
                                              {
                                                *v960 = 160;
                                                v963 = v1619;
                                                *v1619 = *(_OWORD *)v937;
                                                v963[1] = *((_OWORD *)v937 + 1);
                                                v963[2] = *((_OWORD *)v937 + 2);
                                                v963[3] = *((_OWORD *)v937 + 3);
                                                v963[4] = *((_OWORD *)v937 + 4);
                                                v963[5] = *((_OWORD *)v937 + 5);
                                                v963[6] = *((_OWORD *)v937 + 6);
                                                v963[7] = *((_OWORD *)v937 + 7);
                                                v963[8] = *((_OWORD *)v937 + 8);
                                                v963[9] = *((_OWORD *)v937 + 9);
                                                v959 = v1630 + 1;
                                                v957 = 0LL;
                                                v958 = 4LL;
                                                goto LABEL_1282;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
LABEL_1590:
                                  v195 = v937;
                                  goto LABEL_1298;
                                }
LABEL_1240:
                                v928 = GetProcessHeap();
                                HeapFree(v928, 0, v872);
                                goto LABEL_1241;
                              }
                              MemoryFree(v1409);
                            }
                            v916 = -1073741702;
                            goto LABEL_1239;
                          }
                          ((void (__fastcall *)(LPVOID, void *))off_1807A9178)(Srcd, v813);
                          if ( Sizef == 1 && v1542 )
                          {
                            v1698 = 0LL;
                            v1699 = v808;
                            v1700 = (int)v1511;
                            ((void (__fastcall *)(LPVOID, __int64 *))off_1807A91E8)(Srcd, &v1698);
                          }
                          v1381 = v1674;
                          v1466 = v1678;
                          v1483 = (SIZE_T)v1675;
                          memset_0(v1663, 0, 0x68uLL);
                          memset_0(v1644, 0, 0x68uLL);
                          v1471 = 0LL;
                          v1395 = 0;
                          lpModuleNameg = 0;
                          v1721 = 0LL;
                          v1722 = 0LL;
                          v1723 = 0LL;
                          v1724 = 0;
                          v1692 = 0LL;
                          if ( !v1483 )
                            goto LABEL_1091;
                          v814 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1807A9150)(Srcd, 7LL);
                          if ( !v814 )
                            goto LABEL_1090;
                          if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                               v814,
                                               104LL,
                                               v1663) )
                          {
                            v1471 = v1666;
                            v1395 = v1664;
                            lpModuleNameg = v1665;
                          }
                          v815 = ((__int64 (__fastcall *)(LPVOID))off_1807A9110)(Srcd);
                          v1406 = (LPCWSTR)v815;
                          if ( v815 )
                          {
                            v1452 = v1451 - v1338;
                            v816 = v811 - v812;
                            v1597 = 0LL;
                            v817 = 0;
                            v1722 = 0LL;
                            v1723 = 0LL;
                            v1724 = 0;
                            LODWORD(v1721) = 40;
                            DWORD1(v1721) = v816;
                            DWORD2(v1721) = -v1452;
                            HIDWORD(v1721) = 2097153;
                            v818 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                                     v815,
                                     &v1721,
                                     0LL,
                                     &v1597,
                                     0LL,
                                     0);
                            v1484 = (WCHAR *)v818;
                            if ( v818 )
                            {
                              v821 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                       v818,
                                       104LL,
                                       v1644);
                              v822 = 0LL;
                              if ( v821 )
                                v822 = v1645;
                              v1482 = v822;
                              *((_QWORD *)&v1692 + 1) = __PAIR64__(v1452, v816);
                              ((void (__fastcall *)(LPCWSTR, WCHAR *))off_1807A9178)(v1406, v1484);
                              ((void (__fastcall *)(LPCWSTR, __int64))off_1807A9180)(v1406, 1LL);
                              v1467 = ((__int64 (__fastcall *)(LPCWSTR, wchar_t *))off_1807A9178)(v1406, v1466);
                              v823 = off_1807A91E8;
                              v824 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
                              ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v823)(v1406, &v1692, v824);
                              v825 = v1406;
                              ((void (__fastcall *)(LPCWSTR, SIZE_T, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                v1406,
                                v1483,
                                0xFFFFFFFFLL,
                                &v1692,
                                v1301,
                                0LL);
                              if ( Sizef == 1 )
                              {
                                if ( v1381 )
                                  v826 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
                                else
                                  v826 = 0xFFFFFF;
                              }
                              else
                              {
                                v826 = -5723992;
                              }
                              v1382 = v826;
                              v827 = -v1429;
                              if ( v1429 >= 0 )
                                v827 = 0;
                              v828 = 0;
                              if ( v1429 >= 0 )
                                v828 = v1429;
                              v829 = -v1338;
                              if ( v1338 >= 0 )
                                v829 = 0;
                              v830 = 0;
                              if ( v1338 >= 0 )
                                v830 = v1338;
                              v831 = DWORD2(v1692) - v827;
                              if ( DWORD2(v1692) - v827 >= v1395 - v828 )
                                v831 = v1395 - v828;
                              v832 = HIDWORD(v1692) - v829;
                              if ( HIDWORD(v1692) - v829 >= lpModuleNameg - v830 )
                                v832 = lpModuleNameg - v830;
                              lpModuleNameh = v832;
                              if ( v831 > 0 && v832 > 0 )
                              {
                                v833 = v1482 + 4 * (v827 + (__int64)(v829 * DWORD2(v1692)));
                                v1482 = v833;
                                v834 = v1395;
                                v835 = v1471 + 4 * (v828 + (__int64)(v830 * v1395));
                                v1472 = v835;
                                v1396 = 0;
                                v1483 = 4LL * SDWORD2(v1692);
                                v1430 = 4 * v834;
                                v836 = v1483;
                                do
                                {
                                  v837 = 0;
                                  v1453 = 0;
                                  v838 = (unsigned __int8 *)(v833 + 2);
                                  v839 = v835 - v833;
                                  do
                                  {
                                    if ( (unsigned __int8)((*v838 + *(v838 - 2) + 2 * (unsigned int)*(v838 - 1)) >> 2) != 0xFF )
                                    {
                                      v840 = (unsigned __int8)~((*v838 + *(v838 - 2) + 2 * (unsigned int)*(v838 - 1)) >> 2);
                                      v838[v839] -= ~((*v838 + *(v838 - 2) + 2 * (unsigned int)*(v838 - 1)) >> 2)
                                                  * (v1382 - v838[v839]);
                                      v838[v839 - 1] -= v840 * (BYTE1(v1382) - v838[v839 - 1]);
                                      v838[v839 - 2] -= v840 * (BYTE2(v1382) - v838[v839 - 2]);
                                      v838[v839 + 1] += v840 * (255 - v838[v839 + 1]) / 255;
                                      v837 = v1453;
                                    }
                                    v838 += 4;
                                    v1453 = ++v837;
                                  }
                                  while ( v837 < v831 );
                                  v833 = v836 + v1482;
                                  v1482 += v836;
                                  v835 = v1430 + v1472;
                                  v1472 += v1430;
                                  ++v1396;
                                }
                                while ( v1396 < lpModuleNameh );
                                v808 = v1328;
                                v817 = 0;
                                v825 = v1406;
                              }
                              ((void (__fastcall *)(WCHAR *))off_1807A9138)(v1484);
                              if ( v1467 )
                                ((void (__fastcall *)(LPCWSTR, __int64))off_1807A9178)(v825, v1467);
                            }
                            else
                            {
                              v817 = GetLastError();
                              v819 = v817 < 0;
                              if ( v817 > 0 )
                              {
                                v817 = (unsigned __int16)v817 | 0x80070000;
                                v819 = v817 < 0;
                              }
                              if ( !v819 )
                                v817 = -2147467259;
                            }
                            ((void (__fastcall *)(LPCWSTR))off_1807A9130)(v1406);
                            if ( v817 >= 0 )
                            {
                              v1311 = v1674;
                              v1482 = (__int64)v1679;
                              v841 = v1676;
                              v1484 = (WCHAR *)v1676;
                              memset_0(v1667, 0, 0x68uLL);
                              memset_0(v1671, 0, 0x68uLL);
                              v195 = 0LL;
                              v1407 = 0LL;
                              lpModuleNamei = 0;
                              v1397 = 0;
                              v1725 = 0LL;
                              v1726 = 0LL;
                              v1727 = 0LL;
                              v1728 = 0;
                              v1693 = 0LL;
                              if ( !v841 )
                                goto LABEL_1092;
                              v805 = Srcd;
                              v842 = ((__int64 (__fastcall *)(LPVOID, __int64))off_1807A9150)(Srcd, 7LL);
                              if ( !v842 )
                                goto LABEL_1140;
                              if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_1807A9168)(
                                                   v842,
                                                   104LL,
                                                   v1667) )
                              {
                                v1407 = v1670;
                                lpModuleNamei = v1668;
                                v1397 = v1669;
                              }
                              v843 = ((__int64 (__fastcall *)(LPVOID))off_1807A9110)(Srcd);
                              v1473 = v843;
                              if ( !v843 )
                              {
LABEL_1140:
                                GetLastError();
                                goto LABEL_1093;
                              }
                              v1350 = v1349 - v1460;
                              v844 = (_DWORD)v1513 - v1269;
                              v1599[0] = 0LL;
                              v1726 = 0LL;
                              v1727 = 0LL;
                              v1728 = 0;
                              LODWORD(v1725) = 40;
                              DWORD1(v1725) = (_DWORD)v1513 - v1269;
                              DWORD2(v1725) = -v1350;
                              HIDWORD(v1725) = 2097153;
                              v845 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, _DWORD))off_1807A9118)(
                                       v843,
                                       &v1725,
                                       0LL,
                                       v1599,
                                       0LL,
                                       0);
                              v1483 = v845;
                              if ( !v845 )
                              {
                                LODWORD(v195) = GetLastError();
                                v846 = (int)v195 < 0;
                                if ( (int)v195 > 0 )
                                {
                                  LODWORD(v195) = (unsigned __int16)v195 | 0x80070000;
                                  v846 = (int)v195 < 0;
                                }
                                v847 = v1473;
                                if ( !v846 )
                                  LODWORD(v195) = -2147467259;
                                goto LABEL_1172;
                              }
                              v848 = ((__int64 (__fastcall *)(SIZE_T, __int64, _BYTE *))off_1807A9168)(
                                       v845,
                                       104LL,
                                       v1671);
                              v849 = 0LL;
                              if ( v848 )
                                v849 = v1672;
                              v1468 = v849;
                              *((_QWORD *)&v1693 + 1) = __PAIR64__(v1350, v844);
                              v847 = v1473;
                              ((void (__fastcall *)(__int64, SIZE_T))off_1807A9178)(v1473, v1483);
                              ((void (__fastcall *)(__int64, __int64))off_1807A9180)(v1473, 1LL);
                              v1482 = ((__int64 (__fastcall *)(__int64, __int64))off_1807A9178)(v1473, v1482);
                              v850 = off_1807A91E8;
                              v851 = ((__int64 (__fastcall *)(_QWORD))off_1807A9170)(0LL);
                              ((void (__fastcall *)(__int64, __int128 *, __int64))v850)(v1473, &v1693, v851);
                              ((void (__fastcall *)(__int64, WCHAR *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                v1473,
                                v1484,
                                0xFFFFFFFFLL,
                                &v1693,
                                v1301,
                                0LL);
                              if ( Sizef == 1 )
                              {
                                if ( !v1311 )
                                {
                                  v1312 = 0xFFFFFF;
LABEL_1149:
                                  v853 = (unsigned int)-v1269;
                                  if ( v1269 >= 0 )
                                    v853 = 0LL;
                                  v854 = 0;
                                  if ( v1269 >= 0 )
                                    v854 = v1269;
                                  v855 = -v1460;
                                  if ( v1460 >= 0 )
                                    v855 = 0;
                                  v856 = 0;
                                  if ( v1460 >= 0 )
                                    v856 = v1460;
                                  v857 = DWORD2(v1693) - v853;
                                  if ( DWORD2(v1693) - (int)v853 >= lpModuleNamei - v854 )
                                    v857 = lpModuleNamei - v854;
                                  v858 = HIDWORD(v1693) - v855;
                                  if ( HIDWORD(v1693) - v855 >= v1397 - v856 )
                                    v858 = v1397 - v856;
                                  v1398 = v858;
                                  if ( v857 > 0 && v858 > 0 )
                                  {
                                    v853 = v1468 + 4 * ((int)v853 + (__int64)(v855 * DWORD2(v1693)));
                                    v1484 = (WCHAR *)v853;
                                    v859 = &v1407[2 * v854 + 2 * (__int64)(v856 * lpModuleNamei)];
                                    v1408 = v859;
                                    v1383 = 0;
                                    v1351 = (LPCWSTR)(4LL * lpModuleNamei);
                                    v860 = 2LL * SDWORD2(v1693);
                                    do
                                    {
                                      v861 = 0;
                                      lpModuleNamej = 0;
                                      v862 = (unsigned __int8 *)(v853 + 2);
                                      v863 = (signed __int64)v859 - v853;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v862 + *(v862 - 2) + 2 * (unsigned int)*(v862 - 1)) >> 2) != 0xFF )
                                        {
                                          v864 = (unsigned __int8)~((*v862 + *(v862 - 2) + 2 * (unsigned int)*(v862 - 1)) >> 2);
                                          v862[v863] -= ~((*v862 + *(v862 - 2) + 2 * (unsigned int)*(v862 - 1)) >> 2)
                                                      * (v1421 - v862[v863]);
                                          v862[v863 - 1] -= v864 * (BYTE1(v1312) - v862[v863 - 1]);
                                          v862[v863 - 2] -= v864 * (BYTE2(v1312) - v862[v863 - 2]);
                                          v862[v863 + 1] += v864 * (255 - v862[v863 + 1]) / 255;
                                          v861 = lpModuleNamej;
                                        }
                                        v862 += 4;
                                        lpModuleNamej = ++v861;
                                      }
                                      while ( v861 < v857 );
                                      v853 = (unsigned __int64)&v1484[v860];
                                      v1484 = (WCHAR *)((char *)v1484 + v860 * 2);
                                      v859 = (LPCWSTR)((char *)v1408 + (_QWORD)v1351);
                                      v1408 = (LPCWSTR)((char *)v1408 + (_QWORD)v1351);
                                      ++v1383;
                                    }
                                    while ( v1383 < v1398 );
                                    v808 = v1328;
                                    v847 = v1473;
                                  }
                                  ((void (__fastcall *)(SIZE_T, unsigned __int64, _QWORD))off_1807A9138)(
                                    v1483,
                                    v853,
                                    0LL);
                                  if ( v1482 )
                                    ((void (__fastcall *)(__int64, __int64))off_1807A9178)(v847, v1482);
LABEL_1172:
                                  ((void (__fastcall *)(__int64))off_1807A9130)(v847);
                                  if ( (int)v195 >= 0 )
                                  {
                                    v195 = 0LL;
                                    v805 = Srcd;
                                    if ( Sizef == 1 )
                                      ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, int))WARBIRD::g_FuncAddress)(
                                        v1270,
                                        (unsigned int)v1682,
                                        DWORD1(v1682),
                                        v808,
                                        (_DWORD)v1511,
                                        Srcd,
                                        0,
                                        0,
                                        13369376);
                                    else
                                      ((void (__fastcall *)(SIZE_T, _QWORD, _QWORD, _QWORD, _DWORD, LPVOID, _DWORD, _DWORD, unsigned int, _DWORD, int))off_1807A9140)(
                                        v1270,
                                        (unsigned int)v1695,
                                        DWORD1(v1695),
                                        v808,
                                        (_DWORD)v1511,
                                        Srcd,
                                        0,
                                        0,
                                        v808,
                                        (_DWORD)v1511,
                                        v1480);
                                    goto LABEL_1176;
                                  }
                                  goto LABEL_1091;
                                }
                                v852 = ((__int64 (__fastcall *)(__int64))off_1807A9218)(8LL);
                              }
                              else
                              {
                                v852 = -5723992;
                              }
                              v1312 = v852;
                              v1421 = v852;
                              goto LABEL_1149;
                            }
                          }
                          else
                          {
LABEL_1090:
                            GetLastError();
                          }
LABEL_1091:
                          v195 = 0LL;
LABEL_1092:
                          v805 = Srcd;
LABEL_1093:
                          v820 = v1488;
                          goto LABEL_1094;
                        }
                      }
                      else
                      {
                        v752 = 0;
                      }
                      if ( v622 != 1 )
                        goto LABEL_972;
                      goto LABEL_970;
                    }
                    v625 = 0LL;
                    v1583 = 0LL;
                    v1584 = 0LL;
                    v1585 = 0LL;
                    v1586 = 0LL;
                    v1587 = 0LL;
                    v1588 = 0LL;
                    v624 = 0;
                    v1264 = 0;
                    v1519 = 0;
                    if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1807A91A0)(
                                          8LL,
                                          &v1508,
                                          0LL,
                                          &v1519) )
                      goto LABEL_751;
                    v627 = (char *)MemoryAlloc(2LL * v1519);
                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1587);
                    if ( !v627 )
                    {
                      v1587 = 0LL;
                      v624 = -2147024882;
                      goto LABEL_768;
                    }
                    v1587 = v627;
                    v628 = MemoryAlloc(4LL * (v1508 + 1));
                    SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1588);
                    if ( v628 )
                    {
                      v1588 = v628;
                      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1807A91A0)(
                                            8LL,
                                            &v1508,
                                            v627,
                                            &v1519) )
                      {
LABEL_751:
                        v626 = GetLastError();
                        v624 = v626;
                        if ( v626 > 0 )
                          v624 = (unsigned __int16)v626 | 0x80070000;
                        if ( v624 >= 0 )
                          v624 = -2147467259;
LABEL_768:
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1588);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1587);
                        if ( v624 < 0 )
                          goto LABEL_834;
                        v632 = 0;
                        v1324 = 0;
                        v633 = 0;
                        if ( v1264 )
                        {
                          v634 = 0LL;
                          while ( 2 )
                          {
                            v635 = 0;
                            v636 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
                            do
                            {
                              if ( v625[v634] == *v636 )
                              {
                                v632 = v635;
                                v1324 = v635;
                                goto LABEL_777;
                              }
                              ++v635;
                              ++v636;
                            }
                            while ( v635 < 0x26 );
                            ++v633;
                            ++v634;
                            if ( v633 < v1264 )
                              continue;
                            break;
                          }
                        }
LABEL_777:
                        v637 = v632;
                        v1265 = 0;
                        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64, _QWORD))off_1807A91A8)(
                                             `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v632],
                                             v1750,
                                             85LL,
                                             0LL)
                          && (int)((__int64 (__fastcall *)(_BYTE *, __int64, char *, __int64))off_1807A9190)(
                                    v1750,
                                    88LL,
                                    v1701,
                                    16LL) > 0 )
                        {
                          v1265 = (v1702 >> 27) & 1;
                        }
                        v638 = L"Segoe UI Light";
                        v639 = (const wchar_t **)v1748;
                        v640 = 19LL;
                        do
                        {
                          *v639 = v638;
                          v641 = -1LL;
                          do
                            ++v641;
                          while ( v638[v641] );
                          v638 += v641 + 1;
                          ++v639;
                          --v640;
                        }
                        while ( v640 );
                        v1304 = (wchar_t *)v1748[(unsigned __int8)`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping[3 * v637]];
                        lpModuleNameb = (const wchar_t *)v1748[(unsigned __int8)byte_18069BC41[3 * v637]];
                        v642 = (const wchar_t *)v1748[(unsigned __int8)byte_18069BC42[3 * v637]];
                        v1389 = (wchar_t *)v642;
                        v643 = (char *)MemoryAlloc(0x1C90uLL);
                        v1343 = (WCHAR *)v643;
                        v644 = 0;
                        if ( !v643 )
                        {
                          v624 = -2147024882;
                          v645 = 0LL;
                          goto LABEL_836;
                        }
                        v646 = 0;
                        v647 = 0;
                        v648 = v643 + 7;
                        v649 = (unsigned __int8 *)&unk_1806FCA92;
                        v650 = 914LL;
                        v651 = -1;
                        do
                        {
                          v652 = v649[1] | ((*v649 | ((*(v649 - 1) | (*(v649 - 2) << 8)) << 8)) << 8);
                          v653 = v649[5] | ((v649[4] | ((v649[3] | (v649[2] << 8)) << 8)) << 8);
                          v654 = v652 ^ v644;
                          v649 += 8;
                          v655 = v654 ^ v647 ^ v653 ^ 0xAC987321;
                          v656 = (4991 * __ROL4__(v655 + 1419157410, 5) + __ROL4__(v655, 10)) ^ v654;
                          v657 = (43881 * __ROR4__(v656 + 133239679, 9) - __ROL4__(v656, 2)) ^ v655;
                          v658 = (24670 * v657 - (v657 >> 13) - 123127970) ^ v656;
                          v659 = (2033 * __ROL4__(v658 ^ 0xAB69, 6) - __ROL4__(v658, 2)) ^ v657;
                          v660 = (133239679 - (v659 ^ 0xAB69605E)) ^ v658;
                          v661 = (43881 * (v660 ^ 0x137F)) ^ __ROR4__(v660, 6) ^ v659;
                          v662 = (24670 * __ROR4__(v661 + 133239679, 15) + __ROL4__(v661, 2)) ^ v660;
                          v663 = (2033 * __ROR4__(v662 + 1419157410, 14) - __ROL4__(v662, 8)) ^ v661;
                          v664 = (4991 * __ROR4__(v663 ^ 0xAB69605E, 12)) ^ __ROR4__(v663, 10) ^ v662;
                          v665 = (v664 >> 10) ^ (43881 * (v664 ^ 0x7F1)) ^ v663;
                          v666 = (2033 * (__ROR4__(~v665, 5) + 24670)) ^ v664;
                          v667 = v665 ^ (v666 - 2033) ^ 0xAB69605E;
                          v668 = ((v667 >> 2) + 4991 * __ROL4__(v665 ^ (v666 - 2033) ^ 0xAB6967AF, 2)) ^ v666;
                          v669 = (43881 * __ROR4__(v668 - 133239679, 6) + __ROL4__(v668, 7)) ^ v667;
                          v670 = (24670 * (v669 ^ 0x137F) + __ROR4__(v669, 9)) ^ v668;
                          v671 = (2033 * __ROL4__(v670 ^ 0xAB69, 5) + __ROL4__(v670, 7)) ^ v669;
                          v672 = v671 ^ v670 ^ 0xAC987321;
                          v673 = (4991 * __ROR4__(v672, 3) - 219010071) ^ v671;
                          v674 = (24670 * __ROR4__(v673 - 133239679, 1) - __ROR4__(v673, 6)) ^ v672;
                          v675 = (2033 * __ROL4__(v674 - 1419157410, 3) + __ROL4__(v674, 14)) ^ v673;
                          v676 = (4991 * __ROL4__(v675 - 1419157410, 15) - __ROR4__(v675, 14)) ^ v674;
                          v677 = (v676 >> 3) ^ (43881 * (v676 ^ 0x605E)) ^ v675;
                          v678 = v646 ^ (24670 * __ROL4__(v677 ^ 0x7F1137F, 4)) ^ __ROL4__(v677, 2) ^ v676;
                          v679 = v651 ^ v677;
                          *(v648 - 4) = v678;
                          v680 = __ROR4__(v678, 8);
                          *v648 = v679;
                          v681 = __ROR4__(v679, 8);
                          *(v648 - 5) = v680;
                          v682 = __ROR4__(v680, 8);
                          *(v648 - 1) = v681;
                          v683 = __ROR4__(v681, 8);
                          *(v648 - 6) = v682;
                          v684 = __ROR4__(v682, 8);
                          *(v648 - 2) = v683;
                          v685 = __ROR4__(v683, 8);
                          *(v648 - 7) = v684;
                          *(v648 - 3) = v685;
                          v644 = __ROR4__(v684, 8);
                          v647 = __ROR4__(v685, 8);
                          v646 = v652;
                          v651 = v653;
                          v648 += 8;
                          --v650;
                        }
                        while ( v650 );
                        v686 = 0LL;
                        v687 = 0LL;
                        v122 = v1462;
                        v688 = v1343;
                        v645 = 7312LL;
                        do
                        {
                          v689 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1343[v686]), v687);
                          v687 = v689;
                          v686 += 8LL;
                        }
                        while ( v686 < 3656 );
                        v690 = _mm_xor_si128(v689, _mm_srli_si128(v689, 8));
                        v691 = _mm_xor_si128(v690, _mm_srli_si128(v690, 4));
                        v692 = _mm_xor_si128(v691, _mm_srli_si128(v691, 2));
                        if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v692, _mm_srli_si128(v692, 1))) != 127LL )
                        {
                          MemoryFree(v1343);
                          v624 = -1073425151;
                          goto LABEL_834;
                        }
                        v1584 = v1343;
                        v1585 = 7312LL;
                        v624 = 0;
                        v693 = (WCHAR **)v1742;
                        v694 = 6LL;
                        do
                        {
                          for ( jj = 0; jj < 0x26; ++jj )
                          {
                            if ( v1324 == jj )
                              *v693 = v688;
                            v696 = -1LL;
                            do
                              ++v696;
                            while ( *((_BYTE *)v688 + v696) );
                            v688 = (WCHAR *)((char *)v688 + v696 + 1);
                          }
                          ++v693;
                          --v694;
                        }
                        while ( v694 );
                        v697 = (void **)MemoryAlloc(0x18uLL);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1586);
                        if ( !v697 )
                        {
                          v698 = 0LL;
                          v1586 = 0LL;
                          v624 = -2147024882;
LABEL_827:
                          if ( !v698 )
                          {
LABEL_835:
                            v642 = v1389;
LABEL_836:
                            if ( v1584 )
                              memset(v1584, 0, v645);
                            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1586);
                            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1584);
                            SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1583);
                            if ( v624 < 0 )
                              goto LABEL_951;
                            v1675 = *v1582;
                            v1676 = v1582[1];
                            v1677 = v1582[2];
                            v1633 = 0LL;
                            LODWORD(v1633) = 16;
                            if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_1807A9268)(
                                                  66LL,
                                                  0LL,
                                                  &v1633,
                                                  0LL) )
                            {
                              v715 = GetLastError();
                              v624 = v715;
                              if ( v715 > 0 )
                                v624 = (unsigned __int16)v715 | 0x80070000;
                              if ( v624 >= 0 )
                                v624 = -2147467259;
                              v1674 = 0;
LABEL_951:
                              v622 = Sizef;
                              goto LABEL_952;
                            }
                            v1674 = BYTE4(v1633) & 1;
                            v622 = Sizef;
                            v1404 = 42;
                            if ( Sizef == 1 )
                            {
                              v1299 = 42;
                            }
                            else
                            {
                              if ( Sizef != 2 )
                              {
                                if ( Sizef == 3 )
                                {
                                  v1299 = 225;
                                  v1333 = 225;
                                }
                                goto LABEL_852;
                              }
                              v1299 = 15;
                            }
                            v1333 = 11;
LABEL_852:
                            v716 = 96;
                            v1266 = 96;
                            memset_0(v1738, 0, 0xDCuLL);
                            v1739 = 220;
                            v624 = 0;
                            if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *))off_1807A91E0)(
                                                 0LL,
                                                 0xFFFFFFFFLL,
                                                 v1738) )
                            {
                              v716 = v1740;
                              *(_QWORD *)&v1632 = 0LL;
                              *((_QWORD *)&v1632 + 1) = v1741;
                              if ( v1740 < 0x60u )
                                v716 = 96;
                              v1266 = v716;
                            }
                            if ( Sizef == 1 )
                              v642 = v1304;
                            memset_0(v1729, 0, 0x5CuLL);
                            v1345 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(
                                               0LL,
                                               0LL,
                                               1027LL);
                            if ( !v1345 )
                              goto LABEL_864;
                            v1729[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(
                                               v1299,
                                               v716,
                                               72LL);
                            v1729[4] = 400;
                            v1730 = 5;
                            StringCchCopyW(v1731, 0x20uLL, v642);
                            v717 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1729);
                            if ( v717 )
                            {
                              v1678 = (wchar_t *)v717;
                            }
                            else
                            {
                              v718 = GetLastError();
                              v624 = v718;
                              if ( v718 > 0 )
                                v624 = (unsigned __int16)v718 | 0x80070000;
                              if ( v624 >= 0 )
                                v624 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, LPCWSTR))off_1807A9260)(0LL, v1345);
                            if ( v624 < 0 )
                              goto LABEL_952;
                            v720 = v1389;
                            if ( Sizef == 1 )
                              v720 = v1304;
                            v1390 = v720;
                            memset_0(v1732, 0, 0x5CuLL);
                            v624 = 0;
                            v721 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(0LL, 0LL, 1027LL);
                            if ( !v721 )
                            {
LABEL_864:
                              v719 = GetLastError();
                              v624 = v719;
                              if ( v719 > 0 )
                                v624 = (unsigned __int16)v719 | 0x80070000;
                              if ( v624 < 0 )
                                goto LABEL_952;
                              goto LABEL_867;
                            }
                            v1732[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(
                                               v1333,
                                               v716,
                                               72LL);
                            v1732[4] = 400;
                            v1733 = 5;
                            StringCchCopyW(v1734, 0x20uLL, v1390);
                            v722 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1732);
                            if ( v722 )
                            {
                              v1679 = (wchar_t *)v722;
                            }
                            else
                            {
                              v723 = GetLastError();
                              v624 = v723;
                              if ( v723 > 0 )
                                v624 = (unsigned __int16)v723 | 0x80070000;
                              if ( v624 >= 0 )
                                v624 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v721);
                            v724 = 0;
                            if ( v624 < 0 )
                              goto LABEL_952;
                            v725 = 0;
                            if ( Sizef != 1 )
                            {
                              if ( Sizef == 2 )
                              {
                                v724 = SDWORD2(v1632) / 4;
                                v725 = 0;
LABEL_884:
                                *((_QWORD *)&v1695 + 1) = __PAIR64__(v725, v724);
                                if ( Sizef == 1 )
                                {
                                  v726 = 150;
                                  v1334 = 32;
                                }
                                else
                                {
                                  if ( (unsigned int)(Sizef - 2) > 1 )
                                  {
                                    v1334 = 42;
                                    v727 = 42;
                                    v726 = 42;
LABEL_891:
                                    v1300 = v726;
                                    v728 = v724 - v726 - v727;
                                    DWORD2(v1683) = v728;
                                    DWORD2(v1682) = v728;
                                    v729 = v1675;
                                    v624 = 0;
                                    v1305 = (wchar_t *)((__int64 (__fastcall *)(SIZE_T, wchar_t *))off_1807A9178)(
                                                         v1378,
                                                         v1678);
                                    if ( !(unsigned int)((__int64 (__fastcall *)(SIZE_T, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                                          v1378,
                                                          v729,
                                                          0xFFFFFFFFLL,
                                                          &v1682,
                                                          3152,
                                                          0LL) )
                                      v624 = -2147467259;
                                    if ( v1305 )
                                      ((void (__fastcall *)(SIZE_T, wchar_t *))off_1807A9178)(v1378, v1305);
                                    if ( v624 < 0 )
                                      goto LABEL_951;
                                    v730 = v1676;
                                    v624 = 0;
                                    v1306 = (wchar_t *)((__int64 (__fastcall *)(SIZE_T, wchar_t *))off_1807A9178)(
                                                         v1378,
                                                         v1679);
                                    if ( !(unsigned int)((__int64 (__fastcall *)(SIZE_T, void *, __int64, __int128 *, int, _QWORD))off_1807A91D8)(
                                                          v1378,
                                                          v730,
                                                          0xFFFFFFFFLL,
                                                          &v1683,
                                                          3152,
                                                          0LL) )
                                      v624 = -2147467259;
                                    if ( v1306 )
                                      ((void (__fastcall *)(SIZE_T, wchar_t *))off_1807A9178)(v1378, v1306);
                                    if ( v624 < 0 )
                                      goto LABEL_951;
                                    if ( (unsigned int)(Sizef - 2) <= 1 )
                                    {
                                      v728 = DWORD2(v1683);
                                      if ( SDWORD2(v1682) > SDWORD2(v1683) )
                                        v728 = DWORD2(v1682);
                                    }
                                    if ( v1673 )
                                    {
                                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                                        &v1682,
                                        (unsigned int)(v728 + v727 - DWORD2(v1682)),
                                        v1404);
                                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                                        &v1683,
                                        (unsigned int)(v728 + v727 - DWORD2(v1683)),
                                        (unsigned int)(v1334 + HIDWORD(v1682)));
                                    }
                                    else
                                    {
                                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                                        &v1682,
                                        v1300,
                                        v1404);
                                      ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_1807A9250)(
                                        &v1683,
                                        v1300,
                                        (unsigned int)(v1334 + HIDWORD(v1682)));
                                    }
                                    v622 = Sizef;
                                    if ( (unsigned int)(Sizef - 2) <= 1 )
                                    {
                                      *((_QWORD *)&v1695 + 1) = __PAIR64__(HIDWORD(v1683), v728);
                                      v1681 = -5723992;
                                      goto LABEL_938;
                                    }
                                    if ( Sizef != 1 )
                                      goto LABEL_938;
                                    v1681 = 0xFFFFFF;
                                    memset_0(v1735, 0, 0x5CuLL);
                                    v624 = 0;
                                    v731 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91F8)(
                                             0LL,
                                             0LL,
                                             1027LL);
                                    if ( v731 )
                                    {
                                      v733 = v1266;
                                      v1735[0] = -(int)((__int64 (__fastcall *)(__int64, _QWORD))off_1807A91B8)(
                                                         11LL,
                                                         v1266);
                                      v1735[4] = 400;
                                      v1736 = 5;
                                      StringCchCopyW(v1737, 0x20uLL, lpModuleNameb);
                                      v734 = ((__int64 (__fastcall *)(_DWORD *))off_1807A9120)(v1735);
                                      if ( v734 )
                                      {
                                        v1680 = v734;
                                      }
                                      else
                                      {
                                        v624 = GetLastError();
                                        v735 = v624 < 0;
                                        if ( v624 > 0 )
                                        {
                                          v624 = (unsigned __int16)v624 | 0x80070000;
                                          v735 = v624 < 0;
                                        }
                                        if ( !v735 )
                                          v624 = -2147467259;
                                      }
                                      ((void (__fastcall *)(_QWORD, __int64))off_1807A9260)(0LL, v731);
                                      goto LABEL_921;
                                    }
                                    v624 = GetLastError();
                                    v732 = v624 < 0;
                                    if ( v624 > 0 )
                                    {
                                      v624 = (unsigned __int16)v624 | 0x80070000;
                                      v732 = v624 < 0;
                                    }
                                    if ( v732 )
                                    {
                                      v733 = v1266;
LABEL_921:
                                      if ( v624 < 0 )
                                        goto LABEL_951;
                                      v1686 = v728;
                                      v736 = v1677;
                                      v624 = 0;
                                      v737 = ((__int64 (__fastcall *)(SIZE_T, __int64))off_1807A9178)(v1378, v1680);
                                      if ( !(unsigned int)((__int64 (__fastcall *)(SIZE_T, void *, __int64, unsigned int *, int, _QWORD))off_1807A91D8)(
                                                            v1378,
                                                            v736,
                                                            0xFFFFFFFFLL,
                                                            &v1684,
                                                            1120,
                                                            0LL) )
                                        v624 = -2147467259;
                                      if ( v737 )
                                        ((void (__fastcall *)(SIZE_T, __int64))off_1807A9178)(v1378, v737);
                                      if ( v624 < 0 )
                                        goto LABEL_951;
                                      v738 = v1686 + 24;
                                      if ( (int)(v1686 + 24) < 90 )
                                        v738 = 90;
                                      v1686 = v738;
                                      v1687 = 32;
                                      v1684 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(
                                                v1684,
                                                v733,
                                                96LL);
                                      v1685 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(
                                                v1685,
                                                v733,
                                                96LL);
                                      v1686 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(
                                                v1686,
                                                v733,
                                                96LL);
                                      v1687 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1807A91B8)(
                                                v1687,
                                                v733,
                                                96LL);
                                      if ( v1673 )
                                      {
                                        v739 = (unsigned int)v1682;
                                        if ( (int)v1682 >= (int)v1683 )
                                          v739 = (unsigned int)v1683;
                                      }
                                      else
                                      {
                                        v740 = DWORD2(v1682);
                                        if ( SDWORD2(v1682) <= SDWORD2(v1683) )
                                          v740 = DWORD2(v1683);
                                        v739 = v1684 + v740 - v1686;
                                      }
                                      ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_1807A9250)(
                                        &v1684,
                                        v739,
                                        (unsigned int)(HIDWORD(v1683) + 36));
                                      v622 = Sizef;
LABEL_938:
                                      v741 = v1673;
                                      v742 = HIDWORD(v1695);
                                      v743 = DWORD2(v1695);
                                      switch ( v622 )
                                      {
                                        case 1:
                                          *(_QWORD *)&v1695 = 0LL;
                                          goto LABEL_946;
                                        case 2:
                                          v1706 = 0LL;
                                          v1707 = 0LL;
                                          v1708 = 0LL;
                                          v747 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1807A9248)(0LL, 1LL);
                                          LODWORD(v1706) = 40;
                                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1807A9208)(
                                                                v747,
                                                                &v1706) )
                                            goto LABEL_946;
                                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1707 + 4);
                                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1707 + 12);
                                          if ( v741 )
                                            v745 = DWORD1(v1707) + 5 * HIDWORD(v1707) / 100;
                                          else
                                            v745 = 95 * (HIDWORD(v1707) - v743) / 100;
                                          v746 = 95 * (v1708 - v742);
                                          break;
                                        case 3:
                                          v1703 = 0LL;
                                          v1704 = 0LL;
                                          v1705 = 0LL;
                                          v744 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1807A9248)(0LL, 1LL);
                                          LODWORD(v1703) = 40;
                                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_1807A9208)(
                                                                v744,
                                                                &v1703) )
                                            goto LABEL_946;
                                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1704 + 4);
                                          ((void (__fastcall *)(_QWORD, char *))off_1807A9240)(0LL, (char *)&v1704 + 12);
                                          v745 = 50 * (HIDWORD(v1704) - v743) / 100;
                                          v746 = 50 * (v1705 - v742);
                                          break;
                                        default:
                                          goto LABEL_946;
                                      }
                                      LODWORD(v1695) = v745;
                                      DWORD1(v1695) = v746 / 100;
LABEL_946:
                                      v624 = 0;
                                      goto LABEL_952;
                                    }
LABEL_867:
                                    v624 = -2147467259;
LABEL_952:
                                    ((void (__fastcall *)(_QWORD, SIZE_T))off_1807A9260)(0LL, v1378);
                                    goto LABEL_953;
                                  }
                                  v726 = 0;
                                  v1404 = 0;
                                  v1334 = 0;
                                }
                                v727 = 0;
                                goto LABEL_891;
                              }
                              if ( Sizef != 3 )
                                goto LABEL_884;
                            }
                            v724 = DWORD2(v1632);
                            v725 = HIDWORD(v1632);
                            goto LABEL_884;
                          }
                          v712 = 3LL;
                          do
                          {
                            v713 = *v698;
                            if ( *v698 )
                            {
                              v714 = -1LL;
                              do
                                ++v714;
                              while ( v713[v714] );
                              memset(v713, 0, 2 * v714 + 2);
                              MemoryFree(*v698);
                            }
                            ++v698;
                            --v712;
                          }
                          while ( v712 );
LABEL_834:
                          v645 = v1585;
                          goto LABEL_835;
                        }
                        v698 = v697;
                        v1586 = v697;
                        *(_OWORD *)v697 = 0LL;
                        v697[2] = 0LL;
                        v699 = 0;
                        v1403 = 0;
                        v700 = (WCHAR *)v697;
                        v1344 = (WCHAR *)v697;
                        v701 = v1749;
                        v1457 = v1749;
                        while ( 2 )
                        {
                          v702 = 0LL;
                          v703 = *v701;
                          v704 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
                          while ( v703 != *v704 )
                          {
                            v702 = (unsigned int)(v702 + 1);
                            ++v704;
                            if ( (unsigned int)v702 >= 6 )
                              goto LABEL_815;
                          }
                          v705 = v1742[v702];
                          v706 = -1LL;
                          do
                            ++v706;
                          while ( *(_BYTE *)(v706 + v705) );
                          v707 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))off_1807A91C0)(
                                   65001LL,
                                   0LL,
                                   v705,
                                   (unsigned int)(v706 + 1),
                                   0LL,
                                   0);
                          v1325 = v707;
                          if ( v707 )
                          {
                            v708 = MemoryAlloc(2LL * v707);
                            *(_QWORD *)v1344 = v708;
                            if ( v708 )
                            {
                              v709 = -1LL;
                              do
                                ++v709;
                              while ( *(_BYTE *)(v709 + v705) );
                              if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, void *, int))off_1807A91C0)(
                                                    65001LL,
                                                    0LL,
                                                    v705,
                                                    (unsigned int)(v709 + 1),
                                                    v708,
                                                    v1325) )
                              {
                                v710 = GetLastError();
                                v624 = v710;
                                if ( v710 > 0 )
                                  v624 = (unsigned __int16)v710 | 0x80070000;
                                v645 = v1585;
                                if ( v624 >= 0 )
                                  v624 = -2147467259;
                                goto LABEL_827;
                              }
                              v700 = v1344;
                              v699 = v1403;
LABEL_815:
                              v1403 = ++v699;
                              v701 = ++v1457;
                              v700 += 4;
                              v1344 = v700;
                              if ( v699 < 3 )
                                continue;
                              v698 = 0LL;
                              v1586 = 0LL;
                              v1582 = v697;
                              v1673 = v1265;
                            }
                            else
                            {
                              v624 = -2147024882;
                            }
                          }
                          else
                          {
                            v711 = GetLastError();
                            v624 = v711;
                            if ( v711 > 0 )
                              v624 = (unsigned __int16)v711 | 0x80070000;
                            if ( v624 >= 0 )
                              v624 = -2147467259;
                          }
                          break;
                        }
                        v645 = v1585;
                        goto LABEL_827;
                      }
                      v629 = v628;
                      if ( v1508 )
                      {
                        for ( kk = 0; kk < v1508; ++kk )
                        {
                          *v629 = ((__int64 (__fastcall *)(char *, _QWORD))off_1807A91B0)(v627, 0LL);
                          v631 = -1LL;
                          do
                            ++v631;
                          while ( *(_WORD *)&v627[2 * v631] );
                          v627 += 2 * v631 + 2;
                          ++v629;
                        }
                        v624 = 0;
                      }
                      *v629 = 1033;
                      v625 = v628;
                      v1583 = v628;
                      v1264 = v1508 + 1;
                    }
                    else
                    {
                      v624 = -2147024882;
                    }
                    v1588 = 0LL;
                    goto LABEL_768;
                  }
                  v561 = g_WarbirdSecureFunctionsRefCount;
LABEL_744:
                  g_WarbirdSecureFunctionsRefCount = v561 + 1;
                  goto LABEL_745;
                }
                while ( 1 )
                {
                  v612 = v611;
                  v613 = -1LL;
                  do
                    ++v613;
                  while ( v611[v613] );
                  v614 = &v611[v613];
                  v1377 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1323;
                  if ( !GetModuleHandleExW(0, v612, (HMODULE *)v1377) )
                    break;
                  v607 = 0;
                  v615 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1323);
                  if ( **(_WORD **)v1377 == 23117
                    && (v616 = *(int *)(*(_QWORD *)v1377 + 60LL), (unsigned int)v616 < 0x10000000)
                    && (v617 = *(_QWORD *)v1377 + v616, v617 >= *(_QWORD *)v1377)
                    && *(_DWORD *)v617 == 17744 )
                  {
                    if ( ((*(_WORD *)(v617 + 24) - 267) & 0xFEFF) != 0 )
                    {
                      v607 = -1073741811;
                    }
                    else
                    {
                      *(_QWORD *)(v1377 + 12) = *(_QWORD *)(v617 + 136);
                      *((_DWORD *)v1377 + 2) = *(_DWORD *)(v617 + 80);
                    }
                  }
                  else
                  {
                    v607 = -1073741701;
                  }
                  Sizee = *(_DWORD *)(v614 + 1);
                  v611 = v614 + 3;
                  v618 = 0;
                  for ( mm = 0; v618 < Sizee; mm = v618 )
                  {
                    v619 = (const CHAR *)v611;
                    v620 = -1LL;
                    do
                      ++v620;
                    while ( *((_BYTE *)v611 + v620) );
                    v611 = (WCHAR *)((char *)v611 + v620 + 1);
                    if ( v607 >= 0 )
                    {
                      v621 = (void **)GetProcAddress(*v615, v619);
                      if ( !v621 )
                        goto LABEL_714;
                      (&WARBIRD::g_FuncAddress)[v1420] = v621;
                      v615 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1323);
                      v618 = mm;
                    }
                    ++v1420;
                    ++v618;
                  }
                  ++v1323;
                  if ( !*(_BYTE *)v611 )
                    goto LABEL_714;
                }
              }
              else
              {
                MemoryFree(v1342);
              }
            }
            v607 = -1073741702;
LABEL_714:
            if ( !v562 )
              goto LABEL_716;
            goto LABEL_715;
          }
          v501 = g_WarbirdSecureFunctionsRefCount;
LABEL_702:
          g_WarbirdSecureFunctionsRefCount = v501 + 1;
          goto LABEL_703;
        }
        while ( 1 )
        {
          v551 = v550;
          v552 = -1LL;
          do
            ++v552;
          while ( v550[v552] );
          v553 = &v550[v552];
          v1303 = (wchar_t *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1419);
          if ( !GetModuleHandleExW(0, v551, (HMODULE *)v1303) )
            break;
          v546 = 0;
          v554 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1419);
          if ( **(_WORD **)v1303 == 23117
            && (v555 = *(int *)(*(_QWORD *)v1303 + 60LL), (unsigned int)v555 < 0x10000000)
            && (v556 = *(_QWORD *)v1303 + v555, v556 >= *(_QWORD *)v1303)
            && *(_DWORD *)v556 == 17744 )
          {
            if ( ((*(_WORD *)(v556 + 24) - 267) & 0xFEFF) != 0 )
            {
              v546 = -1073741811;
            }
            else
            {
              *(_QWORD *)(v1303 + 6) = *(_QWORD *)(v556 + 136);
              *((_DWORD *)v1303 + 2) = *(_DWORD *)(v556 + 80);
            }
          }
          else
          {
            v546 = -1073741701;
          }
          v1332 = *(_DWORD *)(v553 + 1);
          v550 = v553 + 3;
          v557 = 0;
          for ( nn = 0; v557 < v1332; nn = v557 )
          {
            v558 = (const CHAR *)v550;
            v559 = -1LL;
            do
              ++v559;
            while ( *((_BYTE *)v550 + v559) );
            v550 = (WCHAR *)((char *)v550 + v559 + 1);
            if ( v546 >= 0 )
            {
              v560 = (void **)GetProcAddress(*v554, v558);
              if ( !v560 )
                goto LABEL_672;
              (&WARBIRD::g_FuncAddress)[v1298] = v560;
              v554 = (HMODULE *)((char *)&WARBIRD::g_arModuleInfo + 24 * v1419);
              v557 = nn;
            }
            ++v1298;
            ++v557;
          }
          ++v1419;
          if ( !*(_BYTE *)v550 )
            goto LABEL_672;
        }
      }
      else
      {
        MemoryFree(lpModuleNamea);
      }
    }
    v546 = -1073741702;
LABEL_672:
    if ( !v502 )
      goto LABEL_674;
    goto LABEL_673;
  }
LABEL_1306:
  v1481 = 0LL;
  v1598 = (int *)v1513;
  v123 = v1510;
  v120 = 4LL;
LABEL_150:
  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
    ;
  v124 = g_WarbirdSecureFunctionsRefCount;
  if ( g_WarbirdSecureFunctionsRefCount > 0 )
  {
    --g_WarbirdSecureFunctionsRefCount;
    if ( v124 == 1 )
    {
      v125 = (HMODULE *)&WARBIRD::g_arModuleInfo;
      v126 = v120;
      do
      {
        if ( *v125 )
          FreeLibrary(*v125);
        v125 += 3;
        --v126;
      }
      while ( v126 );
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      memcpy_0(&WARBIRD::g_FuncAddress, &off_180646830, 0x170uLL);
    }
  }
  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1481);
  if ( v122 >= 0 )
  {
    if ( v123 == (_DWORD)v120 )
    {
      v20 = *v1598;
      goto LABEL_15;
    }
    goto LABEL_1596;
  }
  if ( v122 != -805306316 )
  {
    if ( v122 == -805306139 || v122 == -1073425151 )
    {
      v1509 = -1073418201;
      goto LABEL_1598;
    }
    if ( v122 == -805306306 )
    {
      v1509 = -1073418200;
      goto LABEL_1598;
    }
    v1509 = v122;
    if ( v122 != -2147024774 )
      goto LABEL_1598;
LABEL_1596:
    v1509 = -1073418210;
    goto LABEL_1598;
  }
  v1509 = -1073418222;
LABEL_1598:
  v20 = 0;
LABEL_15:
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1598);
  if ( v1509 < 0 || !v20 )
  {
    v12 = (__int64 **)v1596;
    v5 = v1595;
    v3 = (__int64 *)v1594;
    v2 = v1593;
    goto LABEL_18;
  }
  v1612 = 0LL;
  v2 = v1593;
  v1249 = v1593->lpVtbl->QueryService;
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v1612);
  v1250 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v1249)(
            v2,
            &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
            &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
            &v1612);
  v6 = v1250;
  if ( v1250 < 0 )
  {
    v1253 = 125LL;
LABEL_1603:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v1253,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v1250);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v1612);
    return (unsigned int)v6;
  }
  v3 = (__int64 *)v1594;
  v1250 = SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),CDesktopPositioner *>(
            (int)v1594 + 336,
            v1612,
            v1251,
            v1252,
            (__int64)v1594 - 40);
  v6 = v1250;
  if ( v1250 < 0 )
  {
    v1253 = 130LL;
    goto LABEL_1603;
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v1612);
  v5 = v3 + 25;
  v12 = (__int64 **)(v3 + 30);
LABEL_18:
  v21 = v3 - 5;
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v3[29] + 96LL))(
         v3[29],
         (unsigned __int64)(v3 + 13) & -(__int64)(v3 != (__int64 *)40),
         v3 + 40);
  if ( v6 < 0 )
  {
    v37 = 135LL;
    goto LABEL_40;
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64))(**v12 + 72))(
         *v12,
         (unsigned __int64)(v3 + 14) & -(__int64)(v3 != (__int64 *)40),
         (__int64)v3 + 324);
  if ( v6 < 0 )
  {
    v37 = 136LL;
    goto LABEL_40;
  }
  v22 = *v12;
  v23 = **v12;
  v24 = v3 + 24;
  v1553 = v3 + 24;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v23 + 24))(v22, v3 + 24);
  v25 = v2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3 + 34);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v25)(
         v2,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
         v3 + 34);
  if ( v6 < 0 )
  {
    v37 = 140LL;
    goto LABEL_40;
  }
  v1613 = 0LL;
  v26 = v3[34];
  v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)v26 + 24LL);
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v1613);
  v28 = v27(v26, 1LL, &v1613);
  v6 = v28;
  if ( v28 < 0 )
  {
    v1254 = 143LL;
LABEL_1609:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v1254,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v28);
    goto LABEL_36;
  }
  if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v5 + 32LL))(*v5, &v1541) >= 0 )
  {
    v29 = 0;
    if ( v1541 )
    {
      do
      {
        v1614 = 0LL;
        v30 = *v5;
        v31 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v5 + 40LL);
        wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v1614);
        if ( v31(v30, v29, &v1614) >= 0 )
        {
          v1694 = 0LL;
          v32 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v1614 + 88LL))(v1614, &v1694);
          if ( v32 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x9B,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v32);
          v33 = *v1613;
          v1596 = v1694;
          v34 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v33 + 56))(
                  v1613,
                  v1614,
                  &v1596,
                  1LL);
          if ( v34 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x9C,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v34);
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v1614);
        ++v29;
      }
      while ( v29 < v1541 );
      v24 = v1553;
      v3 = (__int64 *)v1594;
    }
  }
  v28 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v1613 + 40))(v1613, *v24 == 0 ? 3 : 0);
  v6 = v28;
  if ( v28 < 0 )
  {
    v1254 = 166LL;
    goto LABEL_1609;
  }
  v1615[0] = 0LL;
  wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(v1615);
  v35 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v5)(
          *v5,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          v1615);
  v6 = v35;
  if ( v35 < 0 )
  {
    v1255 = 170LL;
LABEL_1612:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v1255,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v35);
    goto LABEL_35;
  }
  v35 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v1615[0] + 24LL))(
          v1615[0],
          (unsigned __int64)(v3 + 12) & -(__int64)(v21 != 0LL),
          (__int64)v3 + 332);
  v6 = v35;
  if ( v35 < 0 )
  {
    v1255 = 171LL;
    goto LABEL_1612;
  }
  v6 = 0;
LABEL_35:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v1615);
LABEL_36:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v1613);
  return (unsigned int)v6;
}
