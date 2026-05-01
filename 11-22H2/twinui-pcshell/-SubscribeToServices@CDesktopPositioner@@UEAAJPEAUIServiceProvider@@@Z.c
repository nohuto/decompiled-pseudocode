/*
 * XREFs of ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180119110
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     RtlULongLongAdd @ 0x1800C4F80 (RtlULongLongAdd.c)
 *     RtlUIntAdd @ 0x1800C4FA0 (RtlUIntAdd.c)
 *     StringCchLengthW @ 0x1800C4FC0 (StringCchLengthW.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800F18C8 (-IsUserOOBE@@YA_NXZ.c)
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180113F10 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabletPostureWindowingShowMaximized@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118ABC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabletPostureWindowingShowMaximized@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118CC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapOnShow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119080 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapOnShow@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reset@?$SP@GV?$SP_MEM@G@@@@QEAAXXZ @ 0x180153944 (-Reset@-$SP@GV-$SP_MEM@G@@@@QEAAXXZ.c)
 *     ?MemoryAlloc@@YAPEAX_K@Z @ 0x180163C3C (-MemoryAlloc@@YAPEAX_K@Z.c)
 *     ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x180166334 (-Attach@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXPEAE@Z.c)
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x180166378 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1801A2020 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z @ 0x1801AF260 (-IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     wcscmp_0 @ 0x1801CE4C6 (wcscmp_0.c)
 *     ?Reset@?$SP@PEAGV?$SP_MEM@PEAG@@@@QEAAXXZ @ 0x180286160 (-Reset@-$SP@PEAGV-$SP_MEM@PEAG@@@@QEAAXXZ.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Reset@?$SH@PEAXVSH_HANDLE@@@@QEAAXXZ @ 0x18074A364 (-Reset@-$SH@PEAXVSH_HANDLE@@@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDesktopPositioner::SubscribeToServices(CDesktopPositioner *this, struct IServiceProvider *a2)
{
  struct IServiceProvider *v2; // rsi
  CDesktopPositioner *v3; // r13
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  _QWORD *v5; // r12
  int v6; // edi
  __int64 v7; // rdx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 **v12; // r14
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 **v14; // r15
  HRESULT (__stdcall *v15)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  HRESULT (__stdcall *v19)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v20; // rcx
  __int64 v21; // r9
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r15d
  int v27; // eax
  _BYTE *v28; // rbx
  int v29; // r13d
  int v30; // ecx
  int v31; // esi
  int v32; // r11d
  _BYTE *v33; // r15
  unsigned __int8 *v34; // r12
  __int64 v35; // r14
  int v36; // r10d
  int v37; // r9d
  int v38; // r11d
  unsigned int v39; // r8d
  int v40; // r11d
  unsigned int v41; // r8d
  int v42; // r11d
  int v43; // r8d
  unsigned int v44; // r11d
  int v45; // r8d
  int v46; // r11d
  int v47; // r8d
  unsigned int v48; // r11d
  int v49; // r8d
  int v50; // r11d
  unsigned int v51; // esi
  int v52; // r11d
  int v53; // esi
  int v54; // r11d
  int v55; // esi
  unsigned int v56; // edi
  int v57; // esi
  int v58; // edi
  int v59; // esi
  unsigned int v60; // edi
  int v61; // esi
  int v62; // r11d
  int v63; // esi
  int v64; // r11d
  int v65; // esi
  int v66; // r11d
  int v67; // esi
  int v68; // r11d
  int v69; // esi
  unsigned __int64 v70; // rax
  char v71; // cl
  int v72; // r14d
  unsigned int v73; // r13d
  HMODULE *v74; // rdi
  __int64 v75; // rbx
  const WCHAR *v76; // rdx
  __int64 v77; // rax
  _BYTE *v78; // rbx
  char *v79; // rdi
  __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  unsigned int v82; // r12d
  unsigned int mm; // r15d
  const CHAR *v84; // rdx
  __int64 v85; // rax
  void **v86; // rdx
  int v87; // eax
  HANDLE v88; // rax
  int v89; // esi
  signed int LastError; // edi
  __int64 v91; // r14
  wchar_t *v92; // rax
  bool v93; // sf
  wchar_t *v94; // rbx
  __int64 i; // r9
  wchar_t *v96; // r8
  signed int v97; // eax
  HDESK (__fastcall *v98)(WARBIRD_DELAY_LOAD *__hidden, unsigned int); // rdi
  DWORD CurrentThreadId; // eax
  __int64 v100; // r14
  wchar_t *v101; // rax
  bool v102; // sf
  wchar_t *v103; // rbx
  __int64 j; // r9
  wchar_t *v105; // r8
  signed int v106; // eax
  HANDLE CurrentProcess; // rax
  unsigned int v108; // r13d
  HLOCAL v109; // rax
  void *v110; // r15
  int v111; // r14d
  WCHAR *v112; // r12
  HANDLE ProcessHeap; // rax
  _OWORD *v114; // rax
  int v115; // edi
  void *v116; // r13
  HANDLE v117; // rax
  void *v118; // r13
  HANDLE v119; // rax
  HANDLE v120; // rax
  HANDLE v121; // rax
  DWORD ModuleFileNameW; // eax
  __int64 v123; // r12
  HANDLE v124; // rax
  _QWORD *v125; // r10
  WCHAR *v126; // r10
  int v127; // eax
  unsigned int v128; // r9d
  WCHAR *v129; // r10
  int v130; // eax
  unsigned int v131; // r9d
  int v132; // eax
  unsigned int v133; // r9d
  int v134; // eax
  size_t v135; // rdx
  int v136; // eax
  int v137; // eax
  unsigned int v138; // r9d
  int v139; // eax
  unsigned int v140; // edi
  HANDLE v141; // rax
  void *v142; // rax
  _DWORD *v143; // rdi
  int v144; // eax
  int v145; // r11d
  int v146; // r10d
  unsigned int v147; // r9d
  int v148; // r10d
  int *v149; // rdi
  unsigned int v150; // r9d
  unsigned int v151; // r10d
  unsigned int v152; // r11d
  __int64 v153; // rdi
  int v154; // r10d
  int *v155; // r9
  unsigned __int64 v156; // r9
  unsigned int v157; // r10d
  unsigned int *v158; // r9
  size_t v159; // rdx
  int v160; // r10d
  int *v161; // rdi
  unsigned int v162; // r10d
  int v163; // r11d
  unsigned int v164; // r10d
  unsigned int v165; // r11d
  int *v166; // rdi
  int v167; // r11d
  __int64 v168; // r9
  __int64 v169; // r9
  int v170; // edi
  int v171; // r10d
  int *v172; // rdi
  unsigned int v173; // r10d
  unsigned int v174; // r9d
  int *v175; // rdi
  unsigned int v176; // r10d
  unsigned int v177; // ecx
  unsigned int v178; // edi
  unsigned int v179; // r9d
  unsigned int v180; // r9d
  unsigned int v181; // r9d
  unsigned int v182; // r9d
  unsigned __int8 *v183; // r11
  unsigned int v184; // edi
  unsigned __int8 *v185; // r13
  unsigned int v186; // r9d
  _QWORD *v187; // r11
  int v188; // r14d
  unsigned int v189; // ecx
  unsigned int v190; // edi
  HANDLE v191; // rax
  WCHAR *v192; // r9
  void *v193; // r9
  void *v194; // rcx
  char *v195; // r9
  HANDLE v196; // rax
  unsigned __int64 v197; // r14
  char *v198; // rdx
  unsigned __int8 v199; // al
  unsigned __int64 v200; // rcx
  unsigned __int8 *v201; // r8
  char *v202; // rcx
  unsigned int v203; // r10d
  int v204; // r11d
  unsigned int v205; // edx
  int v206; // r11d
  unsigned int v207; // ecx
  char v208; // si
  int v209; // r9d
  unsigned int v210; // r11d
  unsigned int v211; // ecx
  unsigned int v212; // r9d
  _BYTE *v213; // rbx
  char v214; // di
  _BYTE *v215; // r15
  unsigned __int8 *v216; // rdx
  unsigned __int64 v217; // rsi
  int v218; // r14d
  int v219; // eax
  int v220; // r12d
  int v221; // r9d
  int v222; // r8d
  int v223; // r11d
  int v224; // r10d
  int v225; // r11d
  int v226; // r10d
  int v227; // r11d
  unsigned int v228; // r10d
  int v229; // r11d
  int v230; // r10d
  int v231; // r11d
  int v232; // r10d
  int v233; // r11d
  int v234; // r10d
  unsigned int v235; // r11d
  unsigned int v236; // r10d
  int v237; // r11d
  int v238; // r10d
  int v239; // r11d
  int v240; // r10d
  int v241; // r11d
  int v242; // r10d
  int v243; // r11d
  int v244; // r10d
  unsigned int v245; // r11d
  int v246; // r10d
  unsigned int v247; // ecx
  int v248; // r10d
  int v249; // r11d
  int v250; // r10d
  int v251; // r11d
  int v252; // r10d
  int v253; // r11d
  int v254; // r10d
  int v255; // r11d
  HANDLE v256; // rax
  _QWORD *v257; // r14
  int v258; // r14d
  const void **v259; // rdi
  HANDLE v260; // rax
  void *v261; // rax
  HANDLE v262; // rax
  _OWORD *v263; // rax
  HANDLE v264; // rax
  LPVOID v265; // rax
  _QWORD *v266; // rax
  HANDLE v267; // rax
  HANDLE v268; // rax
  HANDLE v269; // rax
  HANDLE v270; // rax
  HANDLE v271; // rax
  _QWORD *v272; // rax
  HANDLE v273; // rax
  HANDLE v274; // rax
  HANDLE v275; // rax
  HANDLE v276; // rax
  int v277; // ecx
  int v278; // r10d
  int v279; // r14d
  int v280; // r9d
  int v281; // r11d
  unsigned int v282; // edi
  HANDLE v283; // rax
  _DWORD *v284; // rax
  SIZE_T v285; // rcx
  void *v286; // rcx
  SIZE_T v287; // r9
  void *v288; // rcx
  SIZE_T v289; // r9
  HANDLE v290; // rax
  int v291; // eax
  int v292; // ecx
  SIZE_T v293; // r11
  unsigned int v294; // eax
  SIZE_T v295; // r11
  LPVOID v296; // rcx
  unsigned int v297; // r11d
  int v298; // r10d
  LPVOID v299; // rcx
  unsigned int v300; // r11d
  int v301; // r10d
  int v302; // ecx
  int v303; // r10d
  SIZE_T v304; // r9
  unsigned int v305; // r14d
  HANDLE v306; // rax
  void *v307; // rax
  signed int v308; // eax
  unsigned int v309; // edx
  HANDLE v310; // rax
  _QWORD *v311; // rdi
  void *v312; // r13
  void *v313; // r13
  HANDLE v314; // rax
  void *v315; // r13
  HANDLE v316; // rax
  HANDLE v317; // rax
  HANDLE v318; // rax
  void *v319; // rdi
  HANDLE v320; // rax
  void *v321; // rdi
  HANDLE v322; // rax
  _QWORD *v323; // rdi
  void *v324; // r13
  HANDLE v325; // rax
  void *v326; // r13
  HANDLE v327; // rax
  HANDLE v328; // rax
  HANDLE v329; // rax
  void *v330; // rdi
  HANDLE v331; // rax
  FARPROC v332; // rax
  int v333; // eax
  unsigned __int8 *v334; // r8
  void *v335; // r11
  WCHAR *v336; // rcx
  const void **v337; // r9
  SIZE_T v338; // r14
  __int64 v339; // r11
  const void **v340; // rax
  unsigned int v341; // r8d
  unsigned int v342; // r8d
  unsigned int v343; // ecx
  void *v344; // rax
  HANDLE v345; // rax
  _QWORD *v346; // rdx
  int v347; // r14d
  HANDLE v348; // rax
  void *v349; // rcx
  void *v350; // r8
  HANDLE v351; // rax
  void *v352; // rcx
  void *v353; // rcx
  SIZE_T v354; // rax
  HANDLE v355; // rax
  void *v356; // rcx
  _QWORD *v357; // rax
  HANDLE v358; // rax
  HANDLE v359; // rax
  HANDLE v360; // rax
  HANDLE v361; // rax
  unsigned int *v362; // r11
  void *v363; // r14
  HANDLE v364; // rax
  void *v365; // r14
  HANDLE v366; // rax
  void *v367; // r14
  HANDLE v368; // rax
  HANDLE v369; // rax
  int v370; // r14d
  int *v371; // r11
  unsigned __int8 v372; // dl
  char *v373; // r8
  SIZE_T v374; // r10
  unsigned int v375; // ecx
  char v376; // dl
  unsigned __int8 *v377; // rsi
  int v378; // r11d
  int v379; // r14d
  int v380; // ecx
  signed int v381; // r14d
  unsigned int v382; // r9d
  int v383; // ecx
  int v384; // ebx
  int v385; // edi
  _BYTE *v386; // r8
  char v387; // r10
  LPCWSTR v388; // rcx
  unsigned int v389; // r14d
  int v390; // r13d
  unsigned int v391; // r12d
  unsigned int v392; // edi
  _BYTE *v393; // r15
  unsigned __int8 *v394; // rcx
  unsigned int v395; // ebx
  int v396; // edx
  int v397; // r10d
  char *v398; // r11
  int v399; // r9d
  int v400; // r8d
  int v401; // r14d
  int v402; // ebx
  int v403; // r14d
  unsigned int v404; // ebx
  int v405; // r14d
  int v406; // ebx
  unsigned int v407; // r14d
  int v408; // ebx
  int v409; // r14d
  int v410; // ebx
  unsigned int v411; // r14d
  int v412; // ebx
  int v413; // r14d
  unsigned int v414; // ebx
  int v415; // r14d
  int v416; // ebx
  int v417; // r14d
  int v418; // ebx
  unsigned int v419; // r14d
  int v420; // ebx
  int v421; // r14d
  int v422; // ebx
  unsigned int v423; // r14d
  int v424; // ebx
  int v425; // r14d
  int v426; // ebx
  int v427; // r14d
  int v428; // ebx
  int v429; // r14d
  int v430; // ebx
  int v431; // r14d
  int v432; // ebx
  unsigned __int64 jj; // rax
  SIZE_T v434; // r9
  int v435; // r14d
  void *v436; // r11
  SIZE_T v437; // r9
  WCHAR *v438; // rdi
  void *v439; // r10
  void *v440; // r11
  SIZE_T v441; // r9
  void *v442; // r10
  void *v443; // r10
  SIZE_T v444; // r9
  void *v445; // r11
  LPVOID v446; // r14
  WCHAR *v447; // r10
  unsigned __int64 v448; // rcx
  int *v449; // rcx
  SIZE_T v450; // r9
  SIZE_T v451; // r11
  void *v452; // r10
  HANDLE v453; // rax
  size_t v454; // rdi
  WCHAR *v455; // rcx
  _DWORD *v456; // r13
  int v457; // r9d
  __int64 v458; // r11
  _DWORD *v459; // rax
  int *v460; // rcx
  int v461; // edi
  unsigned int v462; // r10d
  int v463; // edi
  __int64 v464; // r11
  int *v465; // rax
  int *v466; // rcx
  unsigned int v467; // edi
  unsigned int v468; // r10d
  int v469; // edi
  __int64 v470; // r11
  int *v471; // rax
  int *v472; // rcx
  unsigned int v473; // edi
  unsigned int v474; // r10d
  int v475; // edi
  int *v476; // r11
  int *v477; // rcx
  unsigned int v478; // edi
  unsigned int v479; // r10d
  int v480; // edi
  int *v481; // rax
  unsigned int *v482; // rcx
  unsigned int kk; // edi
  int v484; // r9d
  unsigned int v485; // edi
  int v486; // eax
  const void *v487; // r11
  unsigned int *v488; // rax
  unsigned int v489; // edi
  int v490; // eax
  int v491; // r13d
  char *v492; // rax
  int v493; // ecx
  int v494; // r11d
  _BYTE *v495; // rbx
  unsigned __int8 *v496; // rsi
  __int64 v497; // rdi
  int v498; // r10d
  int v499; // r9d
  int v500; // r13d
  unsigned int v501; // r11d
  int v502; // r13d
  unsigned int v503; // r11d
  int v504; // r13d
  int v505; // r11d
  unsigned int v506; // r13d
  int v507; // r11d
  int v508; // r13d
  int v509; // r11d
  unsigned int v510; // r13d
  int v511; // edx
  int v512; // r13d
  unsigned int v513; // r11d
  int v514; // r13d
  int v515; // r11d
  int v516; // r13d
  int v517; // r11d
  unsigned int v518; // r8d
  int v519; // r11d
  int v520; // r8d
  int v521; // r11d
  unsigned int v522; // r8d
  int v523; // r11d
  int v524; // r13d
  int v525; // r11d
  int v526; // r13d
  int v527; // r11d
  int v528; // r13d
  int v529; // r11d
  int v530; // r13d
  int v531; // r11d
  unsigned __int64 v532; // rax
  char v533; // cl
  WCHAR *v534; // r15
  int v535; // r12d
  HMODULE *v536; // r15
  __int64 v537; // r12
  const WCHAR *v538; // rdx
  __int64 v539; // rax
  WCHAR *v540; // r15
  char *v541; // r13
  __int64 v542; // rcx
  unsigned __int64 v543; // rcx
  unsigned int v544; // ecx
  const CHAR *v545; // rdx
  __int64 v546; // rax
  void **v547; // rax
  HANDLE v548; // rax
  int v549; // eax
  char *v550; // rax
  int v551; // ecx
  int v552; // esi
  _BYTE *v553; // rbx
  unsigned __int8 *v554; // rdi
  __int64 v555; // r12
  int v556; // r15d
  int v557; // r11d
  int v558; // r10d
  int v559; // r13d
  unsigned int v560; // r9d
  int v561; // r13d
  unsigned int v562; // r9d
  int v563; // r13d
  int v564; // r9d
  unsigned int v565; // r13d
  int v566; // r9d
  int v567; // r13d
  int v568; // r9d
  unsigned int v569; // r13d
  int v570; // r9d
  int v571; // r13d
  unsigned int v572; // esi
  int v573; // r13d
  int v574; // esi
  int v575; // r13d
  int v576; // esi
  unsigned int v577; // r8d
  int v578; // esi
  int v579; // r8d
  int v580; // esi
  unsigned int v581; // r8d
  int v582; // esi
  int v583; // r13d
  int v584; // esi
  int v585; // r13d
  int v586; // esi
  int v587; // r13d
  int v588; // esi
  int v589; // r13d
  int v590; // esi
  unsigned __int64 v591; // rax
  char v592; // cl
  WCHAR *v593; // r15
  int v594; // r12d
  HMODULE *v595; // r15
  __int64 v596; // r12
  const WCHAR *v597; // rdx
  __int64 v598; // rax
  WCHAR *v599; // r15
  char *v600; // r13
  __int64 v601; // rcx
  unsigned __int64 v602; // rcx
  unsigned int v603; // ecx
  const CHAR *v604; // rdx
  __int64 v605; // rax
  void **v606; // rax
  HANDLE v607; // rax
  int v608; // r13d
  signed int v609; // eax
  signed int v610; // r15d
  _DWORD *v611; // rdi
  signed int v612; // eax
  char *v613; // r13
  _DWORD *v614; // r12
  unsigned int n; // ebx
  __int64 v616; // rax
  unsigned int v617; // r10d
  unsigned int v618; // r9d
  __int64 v619; // r8
  unsigned int v620; // ecx
  unsigned int *v621; // rdx
  __int64 v622; // rdi
  const wchar_t *v623; // rcx
  wchar_t **v624; // rdx
  __int64 v625; // r8
  __int64 v626; // rax
  wchar_t *v627; // r12
  const wchar_t *v628; // r13
  char *v629; // rax
  int v630; // r11d
  unsigned __int64 v631; // rcx
  int v632; // r13d
  int v633; // r15d
  _BYTE *v634; // rsi
  unsigned __int8 *v635; // rbx
  __int64 v636; // r12
  int v637; // r10d
  int v638; // r9d
  int v639; // r8d
  int v640; // r11d
  unsigned int v641; // edi
  int v642; // r11d
  unsigned int v643; // edi
  int v644; // r11d
  int v645; // edi
  unsigned int v646; // r11d
  int v647; // edi
  int v648; // r11d
  int v649; // edi
  unsigned int v650; // r11d
  int v651; // edi
  int v652; // r11d
  unsigned int v653; // r15d
  int v654; // r11d
  int v655; // r15d
  int v656; // r11d
  int v657; // r15d
  unsigned int v658; // edx
  int v659; // r15d
  int v660; // edx
  int v661; // r15d
  unsigned int v662; // edx
  int v663; // r15d
  int v664; // r11d
  int v665; // r15d
  int v666; // r11d
  int v667; // r15d
  int v668; // r11d
  int v669; // r15d
  int v670; // r11d
  int v671; // r15d
  unsigned __int64 v672; // rax
  __m128i v673; // xmm1
  char *v674; // r10
  __m128i v675; // xmm0
  __m128i v676; // xmm1
  __m128i v677; // xmm1
  __m128i v678; // xmm1
  _QWORD *v679; // rdx
  __int64 v680; // r8
  unsigned int m; // ecx
  __int64 v682; // rax
  _QWORD *v683; // r12
  unsigned int v684; // r8d
  _QWORD *v685; // rdx
  __int16 *v686; // rcx
  __int64 v687; // rax
  __int16 v688; // r9
  __int16 *v689; // rcx
  void *v690; // rax
  __int64 v691; // rcx
  int v692; // eax
  void *v693; // rax
  __int64 v694; // rcx
  signed int v695; // eax
  signed int v696; // eax
  __int64 v697; // rcx
  _WORD *v698; // rdi
  __int64 v699; // rcx
  void **v700; // rax
  void **v701; // rax
  void **v702; // rax
  signed int v703; // eax
  int v704; // eax
  unsigned int v705; // edi
  const wchar_t *v706; // rax
  bool v707; // sf
  int v708; // eax
  HMODULE *v709; // rdi
  unsigned int v710; // edi
  int v711; // r15d
  __int64 v712; // rax
  __int64 v713; // rax
  bool v714; // sf
  signed int v715; // eax
  __int64 v716; // rax
  signed int v717; // eax
  unsigned int v718; // edx
  unsigned int v719; // r13d
  int v720; // eax
  unsigned int v721; // r12d
  void *v722; // rdi
  void *v723; // rdi
  __int64 v724; // rdi
  bool v725; // sf
  unsigned int v726; // r13d
  __int64 v727; // rax
  bool v728; // sf
  void *v729; // rdi
  __int64 v730; // r12
  int v731; // eax
  __int64 v732; // rdx
  int v733; // edx
  int v734; // r12d
  int v735; // r15d
  int v736; // edi
  __int64 v737; // rax
  __int64 v738; // rax
  int v739; // edx
  int v740; // eax
  void *v741; // r13
  __int64 v742; // rax
  __int64 v743; // rax
  __int64 v744; // r15
  __int64 v745; // rax
  __int64 v746; // rdi
  signed int v747; // edi
  bool v748; // sf
  int v749; // eax
  SIZE_T v750; // rcx
  __int64 (__fastcall *v751)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v752; // rax
  int v753; // edx
  int v754; // r9d
  int v755; // r8d
  int v756; // r10d
  int v757; // r13d
  int v758; // r11d
  char *v759; // rdx
  __int64 v760; // rdi
  size_t v761; // rax
  int v762; // r8d
  unsigned __int8 *v763; // r9
  size_t v764; // r10
  int v765; // r8d
  void *v766; // r13
  __int64 v767; // rax
  __int64 v768; // rcx
  __int64 v769; // rcx
  __int64 v770; // rcx
  int v771; // eax
  HMODULE *v772; // rdi
  __int64 v773; // r15
  int v774; // r13d
  int v775; // eax
  char *v776; // rax
  int v777; // esi
  int v778; // r12d
  int v779; // r13d
  int v780; // r11d
  _BYTE *v781; // rbx
  unsigned __int8 *v782; // rcx
  __int64 v783; // r15
  int v784; // r10d
  int v785; // r9d
  int v786; // r11d
  unsigned int v787; // r8d
  int v788; // r11d
  unsigned int v789; // r8d
  int v790; // r11d
  int v791; // r8d
  unsigned int v792; // r11d
  int v793; // r8d
  int v794; // r11d
  int v795; // r8d
  unsigned int v796; // r11d
  int v797; // edx
  int v798; // r11d
  unsigned int v799; // r13d
  int v800; // r11d
  int v801; // r13d
  int v802; // r11d
  int v803; // r13d
  unsigned int v804; // r11d
  int v805; // r13d
  int v806; // r11d
  int v807; // r13d
  unsigned int v808; // r11d
  int v809; // r13d
  int v810; // r11d
  int v811; // r13d
  int v812; // r11d
  int v813; // r13d
  int v814; // r11d
  int v815; // r13d
  int v816; // r11d
  int v817; // r13d
  unsigned __int64 v818; // rax
  char v819; // cl
  WCHAR *v820; // r15
  int v821; // r12d
  HMODULE *v822; // rdi
  __int64 v823; // r15
  __int64 v824; // rax
  __int64 v825; // r15
  __int64 v826; // rax
  __int64 v827; // rdi
  signed int v828; // eax
  signed int v829; // edi
  int v830; // eax
  SIZE_T v831; // rcx
  __int64 (__fastcall *v832)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v833; // rax
  int v834; // eax
  int v835; // edx
  int v836; // r9d
  int v837; // r8d
  int v838; // r10d
  int v839; // r13d
  int v840; // r11d
  char *v841; // rdx
  size_t v842; // rax
  int v843; // r8d
  unsigned __int8 *v844; // r9
  size_t v845; // r10
  int v846; // r8d
  LPCWSTR v847; // rdi
  size_t v848; // r12
  unsigned int v849; // r15d
  int v850; // ecx
  int v851; // edi
  int v852; // edi
  int v853; // r12d
  int v854; // r13d
  void *v855; // rax
  __int64 v856; // rax
  LPVOID v857; // rcx
  __int64 v858; // rcx
  unsigned int v859; // edi
  __int64 v860; // rax
  signed int v861; // edi
  bool v862; // sf
  int v863; // eax
  char *v864; // rcx
  __int64 (__fastcall *v865)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v866; // rax
  int v867; // eax
  int v868; // edx
  int v869; // r9d
  int v870; // r8d
  int v871; // r10d
  int v872; // ecx
  int v873; // eax
  unsigned __int8 *v874; // rdx
  char *v875; // rax
  signed int v876; // r11d
  __int64 v877; // r12
  int v878; // r8d
  unsigned __int8 *v879; // r9
  signed __int64 v880; // r10
  int v881; // r8d
  void *v882; // rdi
  __int64 v883; // rax
  __int64 v884; // rax
  __int64 v885; // rdi
  int v886; // r13d
  unsigned int v887; // r12d
  __int64 v888; // rax
  signed int v889; // edi
  bool v890; // sf
  LPVOID v891; // r12
  int v892; // eax
  SIZE_T v893; // rcx
  __int64 (__fastcall *v894)(WARBIRD_DELAY_LOAD *__hidden, HDC, const struct tagRECT *, HBRUSH); // rdi
  __int64 v895; // rax
  int v896; // eax
  int v897; // edx
  int v898; // r9d
  int v899; // r8d
  int v900; // r10d
  int v901; // ecx
  int v902; // r13d
  SIZE_T v903; // rdx
  char *v904; // rax
  signed int v905; // r11d
  int v906; // r8d
  unsigned __int8 *v907; // r9
  char *v908; // r10
  int v909; // r8d
  const WCHAR *v910; // rdx
  __int64 v911; // rax
  WCHAR *v912; // r15
  char *v913; // rdi
  __int64 v914; // rcx
  unsigned __int64 v915; // rcx
  unsigned int v916; // ecx
  const CHAR *v917; // rdx
  __int64 v918; // rax
  void **v919; // rax
  HANDLE v920; // rax
  __int64 v921; // r15
  int v922; // eax
  HMODULE *v923; // rdi
  void *v924; // r15
  HANDLE v925; // rax
  _OWORD *v926; // rax
  HANDLE v927; // rax
  WCHAR *v928; // rax
  const WCHAR *v929; // r13
  unsigned int v930; // r11d
  int v931; // eax
  int v932; // r9d
  unsigned int v933; // r11d
  int v934; // r10d
  int v935; // eax
  int v936; // r9d
  unsigned int v937; // r11d
  int v938; // r10d
  int v939; // eax
  int v940; // r10d
  unsigned int v941; // edi
  HANDLE v942; // rax
  void *v943; // rdi
  unsigned __int8 *v944; // r13
  int v945; // r10d
  _DWORD *v946; // r11
  int v947; // r11d
  __int64 v948; // r11
  int *v949; // r9
  unsigned __int64 v950; // r9
  unsigned int v951; // r11d
  unsigned int *v952; // r9
  unsigned int v953; // r10d
  int v954; // r9d
  int v955; // r10d
  __int64 v956; // r11
  int *v957; // r10
  unsigned __int64 v958; // r10
  unsigned int v959; // r9d
  _DWORD *v960; // r10
  unsigned int v961; // edi
  int v962; // r10d
  unsigned int v963; // r11d
  int *v964; // r9
  unsigned __int64 v965; // r9
  _DWORD *v966; // r9
  unsigned int v967; // ecx
  unsigned int v968; // edi
  int v969; // edi
  unsigned int v970; // r9d
  WCHAR *v971; // r11
  unsigned int v972; // ecx
  unsigned int v973; // edi
  HANDLE v974; // rax
  _DWORD *v975; // rax
  SIZE_T v976; // r9
  void *v977; // rcx
  SIZE_T v978; // r9
  HANDLE v979; // rax
  int v980; // edi
  unsigned __int64 v981; // rdi
  char *v982; // rdx
  unsigned __int8 v983; // al
  unsigned __int64 v984; // rcx
  unsigned __int8 *v985; // rdi
  char *v986; // rcx
  unsigned int v987; // r9d
  int v988; // r10d
  SIZE_T v989; // r11
  int v990; // edx
  int v991; // r10d
  unsigned int v992; // ecx
  char v993; // bl
  int v994; // r8d
  unsigned int v995; // r10d
  unsigned int v996; // ecx
  unsigned int v997; // r8d
  _BYTE *v998; // rsi
  int v999; // r11d
  char v1000; // di
  int v1001; // r13d
  _BYTE *v1002; // r14
  unsigned __int8 *v1003; // r12
  SIZE_T v1004; // rsi
  unsigned int v1005; // r11d
  int v1006; // r15d
  int v1007; // r8d
  int v1008; // edi
  int v1009; // r10d
  int v1010; // r9d
  int v1011; // r10d
  int v1012; // r9d
  int v1013; // r10d
  unsigned int v1014; // r9d
  int v1015; // r10d
  int v1016; // r9d
  int v1017; // r10d
  int v1018; // r9d
  unsigned int v1019; // r10d
  int v1020; // r9d
  unsigned int v1021; // r10d
  unsigned int v1022; // r9d
  int v1023; // r10d
  int v1024; // r9d
  int v1025; // r10d
  int v1026; // r9d
  int v1027; // r10d
  int v1028; // r9d
  int v1029; // r10d
  int v1030; // r9d
  unsigned int v1031; // r10d
  int v1032; // r9d
  int v1033; // ecx
  int v1034; // r9d
  int v1035; // r10d
  int v1036; // r9d
  int v1037; // r10d
  int v1038; // r9d
  int v1039; // r10d
  int v1040; // r9d
  int v1041; // r10d
  const void *v1042; // rdi
  HANDLE v1043; // rax
  const void **v1044; // rbx
  int v1045; // edi
  HANDLE v1046; // rax
  void *v1047; // rax
  HANDLE v1048; // rax
  _OWORD *v1049; // rax
  HANDLE v1050; // rax
  _QWORD *v1051; // rax
  HANDLE v1052; // rax
  HANDLE v1053; // rax
  HANDLE v1054; // rax
  HANDLE v1055; // rax
  HANDLE v1056; // rax
  WCHAR *v1057; // rax
  HANDLE v1058; // rax
  HANDLE v1059; // rax
  HANDLE v1060; // rax
  HANDLE v1061; // rax
  int v1062; // ecx
  int v1063; // edi
  int v1064; // r9d
  int v1065; // r10d
  unsigned int v1066; // edi
  HANDLE v1067; // rax
  _DWORD *v1068; // rax
  void *v1069; // rcx
  void *v1070; // rcx
  void *v1071; // r9
  unsigned int *v1072; // rdi
  void *v1073; // rcx
  void *v1074; // r9
  unsigned int *v1075; // rdi
  HANDLE v1076; // rax
  int v1077; // eax
  int v1078; // ecx
  void *v1079; // r10
  unsigned int v1080; // eax
  HANDLE v1081; // rax
  _QWORD *v1082; // rbx
  void *v1083; // rsi
  HANDLE v1084; // rax
  void *v1085; // rsi
  HANDLE v1086; // rax
  void *v1087; // rsi
  HANDLE v1088; // rax
  HANDLE v1089; // rax
  void *v1090; // rbx
  HANDLE v1091; // rax
  HANDLE v1092; // rax
  void *v1093; // rsi
  HANDLE v1094; // rax
  void *v1095; // rsi
  HANDLE v1096; // rax
  void *v1097; // rsi
  HANDLE v1098; // rax
  HANDLE v1099; // rax
  HANDLE v1100; // rax
  _DWORD *v1101; // rdi
  unsigned __int64 v1102; // rcx
  __int64 v1103; // r11
  int *v1104; // rax
  int v1105; // edi
  unsigned int v1106; // r9d
  void *v1107; // r10
  void *v1108; // rcx
  unsigned int v1109; // r11d
  int v1110; // r10d
  void *v1111; // rcx
  unsigned int v1112; // r11d
  int v1113; // r10d
  int v1114; // ecx
  int v1115; // r10d
  void *v1116; // r9
  unsigned int v1117; // edi
  HANDLE v1118; // rax
  WCHAR *v1119; // rax
  signed int v1120; // eax
  unsigned int v1121; // edx
  FARPROC ProcAddress; // rax
  int v1123; // eax
  unsigned __int8 *v1124; // r8
  void *v1125; // r11
  __int64 v1126; // rcx
  const void **v1127; // r9
  SIZE_T v1128; // rdi
  void *v1129; // r9
  unsigned int v1130; // edi
  SIZE_T v1131; // r8
  char *v1132; // rcx
  unsigned int *v1133; // r11
  unsigned int v1134; // ecx
  unsigned int v1135; // edi
  WCHAR *v1136; // rax
  HANDLE v1137; // rax
  _DWORD *v1138; // rdx
  int v1139; // edi
  HANDLE v1140; // rax
  void *v1141; // rcx
  void *v1142; // r8
  HANDLE v1143; // rax
  void *v1144; // rcx
  WCHAR *v1145; // rcx
  WCHAR *v1146; // rax
  HANDLE v1147; // rax
  void *v1148; // rcx
  _QWORD *v1149; // rax
  HANDLE v1150; // rax
  HANDLE v1151; // rax
  HANDLE v1152; // rax
  HANDLE v1153; // rax
  unsigned int *v1154; // r11
  _QWORD *v1155; // rdi
  void *v1156; // rbx
  HANDLE v1157; // rax
  void *v1158; // rbx
  HANDLE v1159; // rax
  void *v1160; // rbx
  HANDLE v1161; // rax
  HANDLE v1162; // rax
  int v1163; // edi
  _DWORD *v1164; // r9
  unsigned __int8 v1165; // dl
  SIZE_T v1166; // rcx
  _QWORD *v1167; // r10
  unsigned __int8 *v1168; // rsi
  unsigned int v1169; // r9d
  int v1170; // r14d
  int v1171; // r11d
  int v1172; // ecx
  unsigned int v1173; // r8d
  int v1174; // ecx
  int v1175; // edx
  _BYTE *v1176; // rdi
  int v1177; // ebx
  char v1178; // r10
  unsigned int v1179; // r11d
  SIZE_T v1180; // rdi
  int v1181; // r13d
  unsigned int v1182; // r14d
  _BYTE *v1183; // r12
  unsigned __int8 *v1184; // r15
  unsigned int v1185; // edx
  int v1186; // ebx
  SIZE_T v1187; // r10
  int v1188; // r9d
  int v1189; // r8d
  int v1190; // r11d
  int v1191; // edx
  int v1192; // r11d
  unsigned int v1193; // edx
  int v1194; // r11d
  int v1195; // edx
  unsigned int v1196; // r11d
  int v1197; // edx
  int v1198; // r11d
  int v1199; // edx
  unsigned int v1200; // r11d
  int v1201; // edx
  int v1202; // r11d
  unsigned int v1203; // edx
  int v1204; // r11d
  int v1205; // edx
  int v1206; // r11d
  int v1207; // edx
  int v1208; // r11d
  int v1209; // edx
  int v1210; // r11d
  int v1211; // edx
  unsigned int v1212; // r11d
  unsigned int v1213; // edx
  int v1214; // r11d
  int v1215; // edx
  int v1216; // r11d
  int v1217; // edx
  int v1218; // r11d
  int v1219; // edx
  int v1220; // r11d
  int v1221; // edx
  SIZE_T k; // rax
  _QWORD *v1223; // r11
  int v1224; // edi
  void *v1225; // r9
  _QWORD *v1226; // r11
  void *v1227; // r8
  void *v1228; // r9
  _QWORD *v1229; // r11
  void *v1230; // r9
  _QWORD *v1231; // r11
  LPVOID v1232; // rcx
  void *v1233; // rsi
  SIZE_T v1234; // r10
  int *v1235; // rcx
  unsigned int v1236; // r11d
  void *v1237; // r9
  _QWORD *v1238; // r10
  HANDLE v1239; // rax
  size_t v1240; // rbx
  void *v1241; // rsi
  void *v1242; // rdi
  HANDLE v1243; // rax
  void *v1244; // rdi
  HANDLE v1245; // rax
  HANDLE v1246; // rax
  HANDLE v1247; // rax
  int v1248; // esi
  int v1249; // eax
  HMODULE *v1250; // rdi
  __int64 v1251; // rbx
  int v1252; // edi
  char IsScreenSizeRequirementMet; // al
  HRESULT (__stdcall *v1254)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v1255; // rcx
  __int64 v1256; // rax
  char *v1257; // r14
  __int64 *v1258; // rcx
  __int64 v1259; // rax
  _DWORD *v1260; // r15
  HRESULT (__stdcall *v1261)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v1262; // rbx
  __int64 (__fastcall *v1263)(__int64, __int64, __int64 **); // rdi
  int v1264; // eax
  __int64 v1265; // rdx
  unsigned int v1266; // esi
  __int64 v1267; // rbx
  int (__fastcall *v1268)(__int64, _QWORD, __int64 *); // rdi
  int v1269; // eax
  __int64 v1270; // rax
  int v1271; // eax
  int v1272; // eax
  __int64 v1273; // rdx
  unsigned int *v1275; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v1276; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v1277; // [rsp+60h] [rbp-A0h]
  size_t v1278; // [rsp+68h] [rbp-98h]
  size_t v1279; // [rsp+68h] [rbp-98h]
  void *v1280; // [rsp+68h] [rbp-98h]
  void *v1281; // [rsp+68h] [rbp-98h]
  void *v1282; // [rsp+68h] [rbp-98h]
  void *v1283; // [rsp+68h] [rbp-98h]
  void *v1284; // [rsp+68h] [rbp-98h]
  void *v1285; // [rsp+68h] [rbp-98h]
  SIZE_T v1286; // [rsp+68h] [rbp-98h]
  void *v1287; // [rsp+68h] [rbp-98h]
  int v1288; // [rsp+68h] [rbp-98h]
  const wchar_t *v1289; // [rsp+68h] [rbp-98h]
  size_t v1290; // [rsp+68h] [rbp-98h]
  size_t v1291; // [rsp+68h] [rbp-98h]
  size_t v1292; // [rsp+68h] [rbp-98h]
  size_t v1293; // [rsp+68h] [rbp-98h]
  void *v1294; // [rsp+68h] [rbp-98h]
  size_t v1295; // [rsp+68h] [rbp-98h]
  size_t v1296; // [rsp+68h] [rbp-98h]
  size_t v1297; // [rsp+68h] [rbp-98h]
  _QWORD *v1298; // [rsp+68h] [rbp-98h]
  void *v1299; // [rsp+68h] [rbp-98h]
  void *v1300; // [rsp+68h] [rbp-98h]
  void *v1301; // [rsp+68h] [rbp-98h]
  WCHAR *lpModuleName; // [rsp+70h] [rbp-90h]
  LPCWSTR lpModuleNamea; // [rsp+70h] [rbp-90h]
  LPCWSTR lpModuleNameb; // [rsp+70h] [rbp-90h]
  LPCWSTR lpModuleNamec; // [rsp+70h] [rbp-90h]
  LPCWSTR lpModuleNamed; // [rsp+70h] [rbp-90h]
  int lpModuleNamee; // [rsp+70h] [rbp-90h]
  LPCWSTR lpModuleNamef; // [rsp+70h] [rbp-90h]
  int lpModuleNameg; // [rsp+70h] [rbp-90h]
  int lpModuleNameh; // [rsp+70h] [rbp-90h]
  int lpModuleNamei; // [rsp+70h] [rbp-90h]
  int lpModuleNamej; // [rsp+70h] [rbp-90h]
  unsigned int lpModuleNamek; // [rsp+70h] [rbp-90h]
  unsigned int lpModuleNamel; // [rsp+70h] [rbp-90h]
  int lpModuleNamem; // [rsp+70h] [rbp-90h]
  int lpModuleNamen; // [rsp+70h] [rbp-90h]
  int lpModuleNameo; // [rsp+70h] [rbp-90h]
  int lpModuleNamep; // [rsp+70h] [rbp-90h]
  int lpModuleNameq; // [rsp+70h] [rbp-90h]
  int lpModuleNamer; // [rsp+70h] [rbp-90h]
  LPVOID v1321; // [rsp+78h] [rbp-88h]
  _QWORD *v1322; // [rsp+78h] [rbp-88h]
  _DWORD *v1323; // [rsp+78h] [rbp-88h]
  LPVOID v1324; // [rsp+78h] [rbp-88h]
  void *v1325; // [rsp+78h] [rbp-88h]
  __int64 v1326; // [rsp+78h] [rbp-88h]
  int v1327; // [rsp+78h] [rbp-88h]
  __int64 v1328; // [rsp+78h] [rbp-88h]
  int v1329; // [rsp+78h] [rbp-88h]
  int v1330; // [rsp+78h] [rbp-88h]
  int v1331; // [rsp+78h] [rbp-88h]
  int v1332; // [rsp+78h] [rbp-88h]
  unsigned int v1333; // [rsp+78h] [rbp-88h]
  unsigned int v1334; // [rsp+78h] [rbp-88h]
  char *v1335; // [rsp+78h] [rbp-88h]
  int v1336; // [rsp+78h] [rbp-88h]
  int v1337; // [rsp+78h] [rbp-88h]
  int v1338; // [rsp+78h] [rbp-88h]
  int v1339; // [rsp+78h] [rbp-88h]
  unsigned int v1340; // [rsp+78h] [rbp-88h]
  unsigned int v1341; // [rsp+78h] [rbp-88h]
  int v1342; // [rsp+80h] [rbp-80h]
  char *v1343; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v1344; // [rsp+80h] [rbp-80h]
  const WCHAR *v1345; // [rsp+80h] [rbp-80h]
  LPVOID v1346; // [rsp+80h] [rbp-80h]
  LPVOID v1347; // [rsp+80h] [rbp-80h]
  void *v1348; // [rsp+80h] [rbp-80h]
  void *v1349; // [rsp+80h] [rbp-80h]
  void *v1350; // [rsp+80h] [rbp-80h]
  void *v1351; // [rsp+80h] [rbp-80h]
  void *v1352; // [rsp+80h] [rbp-80h]
  void *v1353; // [rsp+80h] [rbp-80h]
  void *v1354; // [rsp+80h] [rbp-80h]
  LPVOID v1355; // [rsp+80h] [rbp-80h]
  LPVOID v1356; // [rsp+80h] [rbp-80h]
  unsigned int v1357; // [rsp+88h] [rbp-78h]
  const void **v1358; // [rsp+88h] [rbp-78h]
  SIZE_T v1359; // [rsp+88h] [rbp-78h]
  WCHAR *v1360; // [rsp+88h] [rbp-78h]
  SIZE_T v1361; // [rsp+88h] [rbp-78h]
  SIZE_T v1362; // [rsp+88h] [rbp-78h]
  SIZE_T v1363; // [rsp+88h] [rbp-78h]
  SIZE_T v1364; // [rsp+88h] [rbp-78h]
  SIZE_T v1365; // [rsp+88h] [rbp-78h]
  SIZE_T v1366; // [rsp+88h] [rbp-78h]
  SIZE_T v1367; // [rsp+88h] [rbp-78h]
  SIZE_T v1368; // [rsp+88h] [rbp-78h]
  SIZE_T v1369; // [rsp+88h] [rbp-78h]
  void *v1370; // [rsp+88h] [rbp-78h]
  SIZE_T v1371; // [rsp+88h] [rbp-78h]
  unsigned int ii; // [rsp+90h] [rbp-70h]
  int v1373; // [rsp+90h] [rbp-70h]
  unsigned int v1374; // [rsp+90h] [rbp-70h]
  int v1375; // [rsp+90h] [rbp-70h]
  int v1376; // [rsp+90h] [rbp-70h]
  int v1377; // [rsp+90h] [rbp-70h]
  int v1378; // [rsp+90h] [rbp-70h]
  LPCWSTR v1379; // [rsp+98h] [rbp-68h]
  LPCWSTR v1380; // [rsp+98h] [rbp-68h]
  LPCWSTR v1381; // [rsp+98h] [rbp-68h]
  WCHAR *v1382; // [rsp+98h] [rbp-68h]
  LPCWSTR v1383; // [rsp+98h] [rbp-68h]
  WCHAR *v1384; // [rsp+98h] [rbp-68h]
  LPCWSTR v1385; // [rsp+98h] [rbp-68h]
  LPCWSTR v1386; // [rsp+98h] [rbp-68h]
  LPCWSTR v1387; // [rsp+98h] [rbp-68h]
  LPCWSTR v1388; // [rsp+98h] [rbp-68h]
  LPCWSTR v1389; // [rsp+98h] [rbp-68h]
  LPCWSTR v1390; // [rsp+98h] [rbp-68h]
  WCHAR *v1391; // [rsp+98h] [rbp-68h]
  LPCWSTR v1392; // [rsp+98h] [rbp-68h]
  WCHAR *v1393; // [rsp+98h] [rbp-68h]
  LPCWSTR v1394; // [rsp+98h] [rbp-68h]
  size_t v1395; // [rsp+A0h] [rbp-60h]
  void *v1396; // [rsp+A0h] [rbp-60h]
  void *v1397; // [rsp+A0h] [rbp-60h]
  void *v1398; // [rsp+A0h] [rbp-60h]
  void *v1399; // [rsp+A0h] [rbp-60h]
  SIZE_T v1400; // [rsp+A0h] [rbp-60h]
  char *v1401; // [rsp+A0h] [rbp-60h]
  size_t v1402; // [rsp+A0h] [rbp-60h]
  size_t v1403; // [rsp+A0h] [rbp-60h]
  unsigned __int8 *v1404; // [rsp+A0h] [rbp-60h]
  size_t v1405; // [rsp+A0h] [rbp-60h]
  LPCWSTR v1406; // [rsp+A8h] [rbp-58h]
  WCHAR *v1407; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1408; // [rsp+A8h] [rbp-58h]
  const wchar_t *v1409; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1410; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1411; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1412; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1413; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1414; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1415; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1416; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1417; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1418; // [rsp+A8h] [rbp-58h]
  LPCWSTR v1419; // [rsp+A8h] [rbp-58h]
  WCHAR *v1420; // [rsp+A8h] [rbp-58h]
  void *Src; // [rsp+B0h] [rbp-50h]
  char *Srca; // [rsp+B0h] [rbp-50h]
  void *Srcb; // [rsp+B0h] [rbp-50h]
  int Srcc; // [rsp+B0h] [rbp-50h]
  int Srcd; // [rsp+B0h] [rbp-50h]
  int Srce; // [rsp+B0h] [rbp-50h]
  unsigned int Srcf; // [rsp+B0h] [rbp-50h]
  unsigned int Srcg; // [rsp+B0h] [rbp-50h]
  int Srch; // [rsp+B0h] [rbp-50h]
  int Srci; // [rsp+B0h] [rbp-50h]
  void *Srcj; // [rsp+B0h] [rbp-50h]
  SIZE_T v1432; // [rsp+B8h] [rbp-48h]
  _DWORD *v1433; // [rsp+B8h] [rbp-48h]
  SIZE_T v1434; // [rsp+B8h] [rbp-48h]
  SIZE_T v1435; // [rsp+B8h] [rbp-48h]
  unsigned int v1436; // [rsp+B8h] [rbp-48h]
  signed int v1437; // [rsp+B8h] [rbp-48h]
  unsigned int v1438; // [rsp+B8h] [rbp-48h]
  unsigned int v1439; // [rsp+B8h] [rbp-48h]
  SIZE_T v1440; // [rsp+B8h] [rbp-48h]
  int v1441; // [rsp+B8h] [rbp-48h]
  int v1442; // [rsp+B8h] [rbp-48h]
  LPVOID v1443; // [rsp+C0h] [rbp-40h]
  char *v1444; // [rsp+C0h] [rbp-40h]
  _WORD *v1445; // [rsp+C0h] [rbp-40h]
  int v1446; // [rsp+C0h] [rbp-40h]
  int v1447; // [rsp+C0h] [rbp-40h]
  int v1448; // [rsp+C0h] [rbp-40h]
  int v1449; // [rsp+C0h] [rbp-40h]
  unsigned int v1450; // [rsp+C0h] [rbp-40h]
  int v1451; // [rsp+C0h] [rbp-40h]
  unsigned int v1452; // [rsp+C0h] [rbp-40h]
  unsigned int v1453; // [rsp+C0h] [rbp-40h]
  unsigned int v1454; // [rsp+C0h] [rbp-40h]
  _QWORD *v1455; // [rsp+C0h] [rbp-40h]
  const void **v1456; // [rsp+C0h] [rbp-40h]
  void *v1457; // [rsp+C0h] [rbp-40h]
  int v1458; // [rsp+C0h] [rbp-40h]
  int v1459; // [rsp+C0h] [rbp-40h]
  unsigned int v1460; // [rsp+C8h] [rbp-38h]
  int v1461; // [rsp+C8h] [rbp-38h]
  int v1462; // [rsp+C8h] [rbp-38h]
  int v1463; // [rsp+C8h] [rbp-38h]
  int v1464; // [rsp+C8h] [rbp-38h]
  int v1465; // [rsp+C8h] [rbp-38h]
  unsigned int v1466; // [rsp+C8h] [rbp-38h]
  int v1467; // [rsp+C8h] [rbp-38h]
  int v1468; // [rsp+C8h] [rbp-38h]
  unsigned int v1469; // [rsp+C8h] [rbp-38h]
  unsigned int v1470; // [rsp+C8h] [rbp-38h]
  void *v1471; // [rsp+D0h] [rbp-30h]
  _QWORD *v1472; // [rsp+D0h] [rbp-30h]
  _QWORD *v1473; // [rsp+D0h] [rbp-30h]
  void *v1474; // [rsp+D0h] [rbp-30h]
  const wchar_t *v1475; // [rsp+D0h] [rbp-30h]
  _QWORD *v1476; // [rsp+D0h] [rbp-30h]
  __int64 v1477; // [rsp+D0h] [rbp-30h]
  LPVOID v1478; // [rsp+D0h] [rbp-30h]
  LPVOID v1479; // [rsp+D0h] [rbp-30h]
  LPVOID v1480; // [rsp+D0h] [rbp-30h]
  char *v1481; // [rsp+D0h] [rbp-30h]
  LPVOID v1482; // [rsp+D0h] [rbp-30h]
  void *v1483; // [rsp+D0h] [rbp-30h]
  _DWORD *v1484; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v1485; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1486; // [rsp+D8h] [rbp-28h]
  WCHAR *v1487; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1488; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1489; // [rsp+D8h] [rbp-28h]
  LPCWSTR v1490; // [rsp+D8h] [rbp-28h]
  unsigned int Size; // [rsp+E0h] [rbp-20h]
  int Sizea; // [rsp+E0h] [rbp-20h]
  int Sizeb; // [rsp+E0h] [rbp-20h]
  char *Sizec; // [rsp+E0h] [rbp-20h]
  int Sized; // [rsp+E0h] [rbp-20h]
  unsigned int Sizee; // [rsp+E0h] [rbp-20h]
  unsigned int Sizef; // [rsp+E0h] [rbp-20h]
  unsigned int Sizeg; // [rsp+E0h] [rbp-20h]
  unsigned int Sizeh; // [rsp+E0h] [rbp-20h]
  int Sizei; // [rsp+E0h] [rbp-20h]
  int Sizej; // [rsp+E0h] [rbp-20h]
  int Sizek; // [rsp+E0h] [rbp-20h]
  int Sizel; // [rsp+E0h] [rbp-20h]
  signed int Sizem; // [rsp+E0h] [rbp-20h]
  int v1505; // [rsp+E8h] [rbp-18h]
  unsigned int v1506; // [rsp+E8h] [rbp-18h]
  _QWORD *v1507; // [rsp+E8h] [rbp-18h]
  signed int v1508; // [rsp+E8h] [rbp-18h]
  int v1509; // [rsp+E8h] [rbp-18h]
  unsigned int v1510; // [rsp+E8h] [rbp-18h]
  unsigned int v1511; // [rsp+E8h] [rbp-18h]
  unsigned int v1512; // [rsp+E8h] [rbp-18h]
  int v1513; // [rsp+E8h] [rbp-18h]
  char v1514; // [rsp+E8h] [rbp-18h]
  SIZE_T v1515; // [rsp+F0h] [rbp-10h] BYREF
  size_t v1516; // [rsp+F8h] [rbp-8h]
  __int64 v1517; // [rsp+100h] [rbp+0h]
  LPVOID v1518; // [rsp+108h] [rbp+8h]
  void *v1519; // [rsp+110h] [rbp+10h]
  LPVOID v1520; // [rsp+118h] [rbp+18h]
  SIZE_T v1521; // [rsp+120h] [rbp+20h]
  SIZE_T v1522; // [rsp+128h] [rbp+28h]
  LPVOID v1523; // [rsp+130h] [rbp+30h]
  SIZE_T v1524; // [rsp+138h] [rbp+38h]
  unsigned int v1525; // [rsp+140h] [rbp+40h] BYREF
  LPVOID v1526; // [rsp+148h] [rbp+48h]
  unsigned int dwBytes; // [rsp+150h] [rbp+50h] BYREF
  int dwBytes_4; // [rsp+154h] [rbp+54h]
  int v1529; // [rsp+158h] [rbp+58h]
  int v1530; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v1531; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v1532; // [rsp+164h] [rbp+64h] BYREF
  int v1533; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v1534; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v1535; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v1536; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v1537; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1538; // [rsp+17Ch] [rbp+7Ch] BYREF
  int v1539; // [rsp+180h] [rbp+80h] BYREF
  int v1540; // [rsp+184h] [rbp+84h] BYREF
  int v1541; // [rsp+188h] [rbp+88h] BYREF
  int v1542; // [rsp+18Ch] [rbp+8Ch] BYREF
  unsigned int v1543; // [rsp+190h] [rbp+90h] BYREF
  SIZE_T v1544; // [rsp+194h] [rbp+94h] BYREF
  unsigned int v1545; // [rsp+19Ch] [rbp+9Ch] BYREF
  unsigned int v1546; // [rsp+1A0h] [rbp+A0h] BYREF
  SIZE_T v1547; // [rsp+1A4h] [rbp+A4h] BYREF
  int v1548; // [rsp+1ACh] [rbp+ACh] BYREF
  unsigned int v1549; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v1550; // [rsp+1B4h] [rbp+B4h] BYREF
  unsigned int v1551; // [rsp+1B8h] [rbp+B8h] BYREF
  int v1552; // [rsp+1BCh] [rbp+BCh]
  void *v1553; // [rsp+1C8h] [rbp+C8h]
  int v1554; // [rsp+1D0h] [rbp+D0h] BYREF
  int v1555; // [rsp+1D4h] [rbp+D4h]
  int v1556; // [rsp+1D8h] [rbp+D8h]
  unsigned int v1557; // [rsp+1DCh] [rbp+DCh] BYREF
  unsigned int v1558; // [rsp+1E0h] [rbp+E0h] BYREF
  int v1559; // [rsp+1E4h] [rbp+E4h] BYREF
  int v1560; // [rsp+1E8h] [rbp+E8h] BYREF
  int v1561; // [rsp+1ECh] [rbp+ECh] BYREF
  unsigned int v1562; // [rsp+1F0h] [rbp+F0h] BYREF
  int v1563; // [rsp+1F4h] [rbp+F4h] BYREF
  int v1564; // [rsp+1F8h] [rbp+F8h] BYREF
  int v1565; // [rsp+1FCh] [rbp+FCh] BYREF
  unsigned int v1566[3]; // [rsp+200h] [rbp+100h] BYREF
  int v1567; // [rsp+20Ch] [rbp+10Ch] BYREF
  unsigned int v1568; // [rsp+210h] [rbp+110h] BYREF
  int v1569; // [rsp+214h] [rbp+114h] BYREF
  unsigned int v1570; // [rsp+218h] [rbp+118h] BYREF
  int v1571; // [rsp+21Ch] [rbp+11Ch] BYREF
  unsigned int v1572; // [rsp+220h] [rbp+120h] BYREF
  unsigned int v1573; // [rsp+224h] [rbp+124h] BYREF
  int v1574; // [rsp+228h] [rbp+128h] BYREF
  int v1575; // [rsp+22Ch] [rbp+12Ch] BYREF
  unsigned int v1576; // [rsp+230h] [rbp+130h] BYREF
  SIZE_T v1577; // [rsp+234h] [rbp+134h] BYREF
  unsigned int v1578; // [rsp+23Ch] [rbp+13Ch] BYREF
  unsigned int v1579; // [rsp+240h] [rbp+140h] BYREF
  SIZE_T v1580; // [rsp+244h] [rbp+144h] BYREF
  unsigned int v1581; // [rsp+24Ch] [rbp+14Ch] BYREF
  unsigned int v1582; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v1583; // [rsp+254h] [rbp+154h] BYREF
  int v1584; // [rsp+258h] [rbp+158h] BYREF
  int v1585; // [rsp+25Ch] [rbp+15Ch] BYREF
  int v1586; // [rsp+260h] [rbp+160h] BYREF
  int v1587; // [rsp+264h] [rbp+164h] BYREF
  int v1588; // [rsp+270h] [rbp+170h] BYREF
  unsigned int v1589; // [rsp+274h] [rbp+174h] BYREF
  int v1590; // [rsp+278h] [rbp+178h] BYREF
  unsigned int v1591; // [rsp+27Ch] [rbp+17Ch] BYREF
  int v1592; // [rsp+280h] [rbp+180h] BYREF
  _DWORD *v1593; // [rsp+288h] [rbp+188h] BYREF
  int *v1594; // [rsp+290h] [rbp+190h] BYREF
  wchar_t *String1; // [rsp+2A8h] [rbp+1A8h] BYREF
  wchar_t *v1596; // [rsp+2B0h] [rbp+1B0h] BYREF
  wchar_t *v1597; // [rsp+2B8h] [rbp+1B8h] BYREF
  wchar_t *v1598; // [rsp+2C0h] [rbp+1C0h] BYREF
  size_t pcchLength[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  int *v1600; // [rsp+2D8h] [rbp+1D8h] BYREF
  int *v1601; // [rsp+2E0h] [rbp+1E0h] BYREF
  int *v1602; // [rsp+2E8h] [rbp+1E8h] BYREF
  size_t v1603; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v1604; // [rsp+2F8h] [rbp+1F8h] BYREF
  int *v1605; // [rsp+300h] [rbp+200h] BYREF
  int *v1606; // [rsp+308h] [rbp+208h] BYREF
  void *v1607[5]; // [rsp+310h] [rbp+210h] BYREF
  void *v1608; // [rsp+338h] [rbp+238h] BYREF
  _DWORD *v1609; // [rsp+340h] [rbp+240h] BYREF
  LPVOID v1610; // [rsp+348h] [rbp+248h] BYREF
  HMODULE phModule; // [rsp+350h] [rbp+250h] BYREF
  struct IServiceProvider *v1612; // [rsp+358h] [rbp+258h]
  CDesktopPositioner *v1613; // [rsp+360h] [rbp+260h]
  char *v1614; // [rsp+368h] [rbp+268h]
  void *v1615; // [rsp+370h] [rbp+270h] BYREF
  const WCHAR *v1616; // [rsp+378h] [rbp+278h] BYREF
  const WCHAR *v1617; // [rsp+380h] [rbp+280h] BYREF
  const WCHAR *v1618; // [rsp+388h] [rbp+288h] BYREF
  _DWORD *v1619; // [rsp+390h] [rbp+290h] BYREF
  int *v1620; // [rsp+398h] [rbp+298h] BYREF
  int *v1621; // [rsp+3A0h] [rbp+2A0h] BYREF
  int *v1622; // [rsp+3A8h] [rbp+2A8h] BYREF
  int *v1623; // [rsp+3B0h] [rbp+2B0h] BYREF
  unsigned int *v1624; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int64 v1625; // [rsp+3C0h] [rbp+2C0h] BYREF
  WCHAR *v1626; // [rsp+3D0h] [rbp+2D0h]
  void **v1627; // [rsp+3D8h] [rbp+2D8h] BYREF
  WCHAR *v1628; // [rsp+3E8h] [rbp+2E8h]
  _DWORD *v1629; // [rsp+3F0h] [rbp+2F0h] BYREF
  void *v1630; // [rsp+3F8h] [rbp+2F8h] BYREF
  __int64 v1631; // [rsp+400h] [rbp+300h]
  _QWORD *v1632; // [rsp+408h] [rbp+308h] BYREF
  char *v1633; // [rsp+410h] [rbp+310h] BYREF
  _DWORD *v1634; // [rsp+418h] [rbp+318h] BYREF
  __int64 v1635; // [rsp+420h] [rbp+320h]
  __int64 v1636; // [rsp+428h] [rbp+328h] BYREF
  __int64 v1637; // [rsp+430h] [rbp+330h] BYREF
  __int64 v1638; // [rsp+438h] [rbp+338h] BYREF
  __int64 v1639; // [rsp+440h] [rbp+340h] BYREF
  __int64 **v1640; // [rsp+448h] [rbp+348h]
  _QWORD v1641[4]; // [rsp+450h] [rbp+350h] BYREF
  int *v1642; // [rsp+470h] [rbp+370h] BYREF
  int *v1643; // [rsp+478h] [rbp+378h] BYREF
  int *v1644; // [rsp+480h] [rbp+380h] BYREF
  void *v1645[5]; // [rsp+488h] [rbp+388h] BYREF
  void *v1646; // [rsp+4B0h] [rbp+3B0h] BYREF
  _DWORD *v1647; // [rsp+4B8h] [rbp+3B8h] BYREF
  void *v1648; // [rsp+4C0h] [rbp+3C0h] BYREF
  HMODULE hModule; // [rsp+4C8h] [rbp+3C8h] BYREF
  void *v1650; // [rsp+4D0h] [rbp+3D0h] BYREF
  LPVOID v1651; // [rsp+4D8h] [rbp+3D8h] BYREF
  LPVOID v1652; // [rsp+4E0h] [rbp+3E0h] BYREF
  void *v1653; // [rsp+4E8h] [rbp+3E8h] BYREF
  LPVOID v1654[2]; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int128 v1655; // [rsp+500h] [rbp+400h] BYREF
  __int64 *v1656; // [rsp+510h] [rbp+410h] BYREF
  __int64 v1657; // [rsp+518h] [rbp+418h] BYREF
  __int64 v1658[2]; // [rsp+520h] [rbp+420h] BYREF
  _DWORD *v1659; // [rsp+530h] [rbp+430h] BYREF
  __int128 v1660; // [rsp+538h] [rbp+438h]
  __int128 v1661; // [rsp+548h] [rbp+448h]
  void *v1662; // [rsp+560h] [rbp+460h] BYREF
  void *v1663; // [rsp+570h] [rbp+470h] BYREF
  size_t v1664; // [rsp+578h] [rbp+478h] BYREF
  LPVOID lpMem; // [rsp+580h] [rbp+480h]
  LPVOID v1666[3]; // [rsp+588h] [rbp+488h]
  size_t *v1667; // [rsp+5A0h] [rbp+4A0h] BYREF
  void *v1668; // [rsp+5B0h] [rbp+4B0h] BYREF
  void *v1669; // [rsp+5C0h] [rbp+4C0h] BYREF
  _QWORD *v1670; // [rsp+5D0h] [rbp+4D0h] BYREF
  void *v1671; // [rsp+5E0h] [rbp+4E0h] BYREF
  unsigned int *v1672; // [rsp+5F0h] [rbp+4F0h] BYREF
  unsigned int *v1673; // [rsp+600h] [rbp+500h] BYREF
  size_t v1674; // [rsp+608h] [rbp+508h] BYREF
  void *v1675; // [rsp+610h] [rbp+510h]
  __int128 v1676; // [rsp+618h] [rbp+518h]
  __int128 v1677; // [rsp+628h] [rbp+528h] BYREF
  LPVOID v1678[3]; // [rsp+638h] [rbp+538h]
  _DWORD *v1679; // [rsp+650h] [rbp+550h] BYREF
  _QWORD v1680[2]; // [rsp+658h] [rbp+558h] BYREF
  int v1681; // [rsp+668h] [rbp+568h]
  unsigned int v1682; // [rsp+66Ch] [rbp+56Ch]
  int v1683; // [rsp+670h] [rbp+570h]
  _QWORD v1684[2]; // [rsp+678h] [rbp+578h] BYREF
  int v1685; // [rsp+688h] [rbp+588h]
  unsigned int v1686; // [rsp+68Ch] [rbp+58Ch]
  int v1687; // [rsp+690h] [rbp+590h]
  _BYTE v1688[24]; // [rsp+6A0h] [rbp+5A0h] BYREF
  char *v1689; // [rsp+6B8h] [rbp+5B8h]
  _BYTE v1690[4]; // [rsp+710h] [rbp+610h] BYREF
  int v1691; // [rsp+714h] [rbp+614h]
  int v1692; // [rsp+718h] [rbp+618h]
  __int16 v1693; // [rsp+722h] [rbp+622h]
  __int64 v1694; // [rsp+728h] [rbp+628h]
  _BYTE v1695[4]; // [rsp+780h] [rbp+680h] BYREF
  int v1696; // [rsp+784h] [rbp+684h]
  int v1697; // [rsp+788h] [rbp+688h]
  size_t v1698; // [rsp+798h] [rbp+698h]
  _BYTE v1699[24]; // [rsp+7F0h] [rbp+6F0h] BYREF
  SIZE_T v1700; // [rsp+808h] [rbp+708h]
  _BYTE v1701[4]; // [rsp+860h] [rbp+760h] BYREF
  int v1702; // [rsp+864h] [rbp+764h]
  int v1703; // [rsp+868h] [rbp+768h]
  size_t v1704; // [rsp+878h] [rbp+778h]
  _BYTE v1705[24]; // [rsp+8D0h] [rbp+7D0h] BYREF
  SIZE_T v1706; // [rsp+8E8h] [rbp+7E8h]
  _BYTE v1707[4]; // [rsp+940h] [rbp+840h] BYREF
  int v1708; // [rsp+944h] [rbp+844h]
  int v1709; // [rsp+948h] [rbp+848h]
  char *v1710; // [rsp+958h] [rbp+858h]
  _BYTE v1711[4]; // [rsp+9B0h] [rbp+8B0h] BYREF
  int v1712; // [rsp+9B4h] [rbp+8B4h]
  int v1713; // [rsp+9B8h] [rbp+8B8h]
  size_t v1714; // [rsp+9C8h] [rbp+8C8h]
  _BYTE v1715[24]; // [rsp+A20h] [rbp+920h] BYREF
  SIZE_T v1716; // [rsp+A38h] [rbp+938h]
  int v1717; // [rsp+A90h] [rbp+990h] BYREF
  int v1718; // [rsp+A94h] [rbp+994h]
  void *v1719; // [rsp+A98h] [rbp+998h]
  void *v1720; // [rsp+AA0h] [rbp+9A0h]
  void *v1721; // [rsp+AA8h] [rbp+9A8h]
  const WCHAR *v1722; // [rsp+AB0h] [rbp+9B0h]
  const WCHAR *v1723; // [rsp+AB8h] [rbp+9B8h]
  __int64 v1724; // [rsp+AC0h] [rbp+9C0h]
  int v1725; // [rsp+AC8h] [rbp+9C8h]
  __int128 v1726; // [rsp+ACCh] [rbp+9CCh] BYREF
  __int128 v1727; // [rsp+ADCh] [rbp+9DCh] BYREF
  unsigned int v1728; // [rsp+AECh] [rbp+9ECh] BYREF
  unsigned int v1729; // [rsp+AF0h] [rbp+9F0h]
  unsigned int v1730; // [rsp+AF4h] [rbp+9F4h]
  unsigned int v1731; // [rsp+AF8h] [rbp+9F8h]
  unsigned __int64 v1732; // [rsp+B00h] [rbp+A00h]
  __int64 v1733; // [rsp+B08h] [rbp+A08h]
  unsigned __int64 v1734; // [rsp+B10h] [rbp+A10h]
  __int64 v1735; // [rsp+B18h] [rbp+A18h]
  __int128 v1736; // [rsp+B20h] [rbp+A20h] BYREF
  __int128 v1737; // [rsp+B30h] [rbp+A30h] BYREF
  __int128 v1738; // [rsp+B40h] [rbp+A40h] BYREF
  __int128 v1739; // [rsp+B50h] [rbp+A50h]
  __int128 v1740; // [rsp+B60h] [rbp+A60h] BYREF
  __int128 v1741; // [rsp+B70h] [rbp+A70h] BYREF
  __int64 v1742; // [rsp+B80h] [rbp+A80h] BYREF
  unsigned int v1743; // [rsp+B88h] [rbp+A88h]
  int v1744; // [rsp+B8Ch] [rbp+A8Ch]
  char v1745[12]; // [rsp+B90h] [rbp+A90h] BYREF
  unsigned int v1746; // [rsp+B9Ch] [rbp+A9Ch]
  __int128 v1747; // [rsp+BB0h] [rbp+AB0h] BYREF
  __int128 v1748; // [rsp+BC0h] [rbp+AC0h] BYREF
  __int64 v1749; // [rsp+BD0h] [rbp+AD0h]
  __int128 v1750; // [rsp+BD8h] [rbp+AD8h] BYREF
  __int128 v1751; // [rsp+BE8h] [rbp+AE8h] BYREF
  __int64 v1752; // [rsp+BF8h] [rbp+AF8h]
  __int128 v1753; // [rsp+C00h] [rbp+B00h] BYREF
  __int128 v1754; // [rsp+C10h] [rbp+B10h]
  __int64 v1755; // [rsp+C20h] [rbp+B20h]
  int v1756; // [rsp+C28h] [rbp+B28h]
  __int128 v1757; // [rsp+C30h] [rbp+B30h] BYREF
  __int128 v1758; // [rsp+C40h] [rbp+B40h]
  __int64 v1759; // [rsp+C50h] [rbp+B50h]
  int v1760; // [rsp+C58h] [rbp+B58h]
  __int128 v1761; // [rsp+C60h] [rbp+B60h] BYREF
  __int128 v1762; // [rsp+C70h] [rbp+B70h]
  __int64 v1763; // [rsp+C80h] [rbp+B80h]
  int v1764; // [rsp+C88h] [rbp+B88h]
  __int128 v1765; // [rsp+C90h] [rbp+B90h] BYREF
  __int128 v1766; // [rsp+CA0h] [rbp+BA0h]
  __int64 v1767; // [rsp+CB0h] [rbp+BB0h]
  int v1768; // [rsp+CB8h] [rbp+BB8h]
  __int128 v1769; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int128 v1770; // [rsp+CD0h] [rbp+BD0h]
  __int64 v1771; // [rsp+CE0h] [rbp+BE0h]
  int v1772; // [rsp+CE8h] [rbp+BE8h]
  _DWORD v1773[6]; // [rsp+CF0h] [rbp+BF0h] BYREF
  char v1774; // [rsp+D0Ah] [rbp+C0Ah]
  wchar_t v1775[34]; // [rsp+D0Ch] [rbp+C0Ch] BYREF
  _DWORD v1776[6]; // [rsp+D50h] [rbp+C50h] BYREF
  char v1777; // [rsp+D6Ah] [rbp+C6Ah]
  wchar_t v1778[34]; // [rsp+D6Ch] [rbp+C6Ch] BYREF
  _DWORD v1779[6]; // [rsp+DB0h] [rbp+CB0h] BYREF
  char v1780; // [rsp+DCAh] [rbp+CCAh]
  wchar_t v1781[34]; // [rsp+DCCh] [rbp+CCCh] BYREF
  _BYTE v1782[68]; // [rsp+E10h] [rbp+D10h] BYREF
  __int16 v1783; // [rsp+E54h] [rbp+D54h]
  unsigned __int16 v1784; // [rsp+EB6h] [rbp+DB6h]
  __int64 v1785; // [rsp+EBCh] [rbp+DBCh]
  _QWORD v1786[6]; // [rsp+EF0h] [rbp+DF0h] BYREF
  int v1787; // [rsp+F20h] [rbp+E20h] BYREF
  __int128 v1788; // [rsp+F28h] [rbp+E28h]
  __int128 v1789; // [rsp+F38h] [rbp+E38h]
  __int128 v1790; // [rsp+F48h] [rbp+E48h]
  __int64 v1791; // [rsp+F58h] [rbp+E58h]
  wchar_t *v1792[20]; // [rsp+F60h] [rbp+E60h] BYREF
  _WORD v1793[8]; // [rsp+1000h] [rbp+F00h] BYREF
  _BYTE v1794[176]; // [rsp+1010h] [rbp+F10h] BYREF
  WCHAR Filename[264]; // [rsp+10C0h] [rbp+FC0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1318h] [rbp+1218h]

  v2 = a2;
  v1612 = a2;
  v3 = this;
  v1613 = this;
  QueryService = a2->lpVtbl->QueryService;
  v5 = (_QWORD *)((char *)this + 224);
  v1614 = (char *)this + 224;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 28);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, _QWORD *))QueryService)(
         v2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v5);
  if ( v6 >= 0 )
  {
    v8 = v2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v3 + 29);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v8)(
           v2,
           &IID_IApplicationPositionPersistence,
           &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
           (char *)v3 + 232);
    if ( v6 < 0 )
    {
      v7 = 173LL;
      goto LABEL_3;
    }
    v9 = v2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v3 + 30);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
           v2,
           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
           &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
           (char *)v3 + 240);
    if ( v6 < 0 )
    {
      v7 = 174LL;
      goto LABEL_3;
    }
    v10 = v2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v3 + 31);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
           v2,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           &GUID_55fa44d3_fe5d_40c3_bc17_14db2012770a,
           (char *)v3 + 248);
    if ( v6 < 0 )
    {
      v7 = 175LL;
      goto LABEL_3;
    }
    v11 = v2->lpVtbl->QueryService;
    v12 = (__int64 **)((char *)v3 + 256);
    v1640 = (__int64 **)((char *)v3 + 256);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v3 + 32);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
           v2,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           (char *)v3 + 256);
    if ( v6 < 0 )
    {
      v7 = 176LL;
      goto LABEL_3;
    }
    v13 = v2->lpVtbl->QueryService;
    v14 = (__int64 **)((char *)v3 + 264);
    *(_QWORD *)&v1655 = (char *)v3 + 264;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v3 + 33);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
           v2,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           (char *)v3 + 264);
    if ( v6 < 0 )
    {
      v7 = 177LL;
      goto LABEL_3;
    }
    v15 = v2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v3 + 34);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v15)(
           v2,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           (char *)v3 + 272);
    if ( v6 < 0 )
    {
      v7 = 178LL;
      goto LABEL_3;
    }
    v16 = v2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v3 + 36);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
           v2,
           &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
           &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
           (char *)v3 + 288);
    if ( v6 < 0 )
    {
      v7 = 179LL;
      goto LABEL_3;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapOnShow>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SnapOnShow>::GetImpl'::`2'::impl,
      1u,
      v17,
      v18);
    v19 = v2->lpVtbl->QueryService;
    v20 = *((_QWORD *)v3 + 39);
    *((_QWORD *)v3 + 39) = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v19)(
           v2,
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &GUID_5e9e5234_68b0_59eb_92a9_b3676447192b,
           (char *)v3 + 312);
    if ( v6 < 0 )
    {
      v7 = 183LL;
      goto LABEL_3;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
      1u,
      3u,
      v21);
    v22 = v2->lpVtbl->QueryService;
    v23 = *((_QWORD *)v3 + 38);
    *((_QWORD *)v3 + 38) = 0LL;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v22)(
      v2,
      &SID_VirtualDesktopManager,
      &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
      (char *)v3 + 304);
    if ( IsUserOOBE() )
    {
LABEL_1646:
      v1255 = *v12;
      v1256 = **v12;
      v1257 = (char *)v3 - 48;
      v6 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64))(v1256 + 96))(
             v1255,
             ((unsigned __int64)v3 + 120) & -(__int64)(v3 != (CDesktopPositioner *)48),
             (__int64)v3 + 360);
      if ( v6 < 0 )
      {
        v7 = 226LL;
        goto LABEL_3;
      }
      v6 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64))(**v14 + 72))(
             *v14,
             ((unsigned __int64)v3 + 128) & -(__int64)(v3 != (CDesktopPositioner *)48),
             (__int64)v3 + 364);
      if ( v6 < 0 )
      {
        v7 = 227LL;
        goto LABEL_3;
      }
      v1258 = *v14;
      v1259 = **v14;
      v1260 = (_DWORD *)((char *)v3 + 216);
      v1593 = (_DWORD *)((char *)v3 + 216);
      (*(void (__fastcall **)(__int64 *, __int64))(v1259 + 24))(v1258, (__int64)v3 + 216);
      v1261 = v2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v3 + 37);
      v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v1261)(
             v2,
             &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
             &GUID_9c4a7f24_303d_47a7_994e_503f26217d06,
             (char *)v3 + 296);
      if ( v6 < 0 )
      {
        v7 = 231LL;
        goto LABEL_3;
      }
      v1656 = 0LL;
      v1262 = *((_QWORD *)v3 + 37);
      v1263 = *(__int64 (__fastcall **)(__int64, __int64, __int64 **))(*(_QWORD *)v1262 + 24LL);
      wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v1656);
      v1264 = v1263(v1262, 1LL, &v1656);
      v6 = v1264;
      if ( v1264 < 0 )
      {
        v1265 = 234LL;
LABEL_1665:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v1265,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v1264,
          (int)v1275);
LABEL_1673:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v1656);
        return (unsigned int)v6;
      }
      if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v5 + 32LL))(*v5, &v1583) >= 0 )
      {
        v1266 = 0;
        if ( v1583 )
        {
          do
          {
            v1657 = 0LL;
            v1267 = *v5;
            v1268 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v5 + 40LL);
            wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v1657);
            if ( v1268(v1267, v1266, &v1657) >= 0 )
            {
              v1738 = 0LL;
              v1269 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v1657 + 88LL))(v1657, &v1738);
              if ( v1269 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xF6,
                  (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v1269,
                  (int)v1275);
              v1270 = *v1656;
              v1655 = v1738;
              v1271 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v1270 + 56))(
                        v1656,
                        v1657,
                        &v1655,
                        1LL);
              if ( v1271 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xF7,
                  (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                  (const char *)(unsigned int)v1271,
                  (int)v1275);
            }
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v1657);
            ++v1266;
          }
          while ( v1266 < v1583 );
          v1260 = v1593;
          v3 = v1613;
        }
      }
      v1264 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v1656 + 40))(v1656, *v1260 == 0 ? 3 : 0);
      v6 = v1264;
      if ( v1264 < 0 )
      {
        v1265 = 257LL;
        goto LABEL_1665;
      }
      v1658[0] = 0LL;
      wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(v1658);
      v1272 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v5)(
                *v5,
                &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                v1658);
      v6 = v1272;
      if ( v1272 >= 0 )
      {
        v1272 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v1658[0] + 24LL))(
                  v1658[0],
                  ((unsigned __int64)v3 + 112) & -(__int64)(v1257 != 0LL),
                  (__int64)v3 + 372);
        v6 = v1272;
        if ( v1272 >= 0 )
        {
          v6 = 0;
          goto LABEL_1672;
        }
        v1273 = 262LL;
      }
      else
      {
        v1273 = 261LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v1273,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v1272,
        (int)v1275);
LABEL_1672:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v1658);
      goto LABEL_1673;
    }
    v1552 = 0;
    if ( (unsigned int)CloudPCHelpers::GetCloudPCMode() == 1 )
    {
      *((_DWORD *)v3 + 127) = 1;
      goto LABEL_1644;
    }
    v1594 = 0LL;
    v1555 = 0;
    v1556 = 0;
    v1515 = 0LL;
    v26 = 0;
    dwBytes = 0;
    while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
      ;
    dwBytes_4 = -1;
    v27 = g_WarbirdSecureFunctionsRefCount;
    if ( !g_WarbirdSecureFunctionsRefCount )
    {
      LODWORD(v1522) = 0;
      v28 = MemoryAlloc(0x338uLL);
      lpModuleName = (WCHAR *)v28;
      if ( !v28 )
        goto LABEL_37;
      v29 = 0;
      v30 = -1;
      v31 = 0;
      v32 = 0;
      v33 = v28 + 7;
      v34 = (unsigned __int8 *)&unk_180832662;
      v35 = 103LL;
      do
      {
        v36 = v34[1] | ((*v34 | ((*(v34 - 1) | (*(v34 - 2) << 8)) << 8)) << 8);
        v37 = v34[5] | ((v34[4] | ((v34[3] | (v34[2] << 8)) << 8)) << 8);
        v38 = v36 ^ v32;
        v34 += 8;
        v39 = v38 ^ v31 ^ v37 ^ 0xAC987321;
        v40 = (4991 * __ROL4__(v39 + 1419157410, 5) + __ROL4__(v39, 10)) ^ v38;
        v41 = (43881 * __ROR4__(v40 + 133239679, 9) - __ROL4__(v40, 2)) ^ v39;
        v42 = (24670 * v41 - (v41 >> 13) - 123127970) ^ v40;
        v43 = (2033 * __ROL4__(v42 ^ 0xAB69, 6) - __ROL4__(v42, 2)) ^ v41;
        v44 = (133239679 - (v43 ^ 0xAB69605E)) ^ v42;
        v45 = (43881 * (v44 ^ 0x137F)) ^ __ROR4__(v44, 6) ^ v43;
        v46 = (24670 * __ROR4__(v45 + 133239679, 15) + __ROL4__(v45, 2)) ^ v44;
        v47 = (2033 * __ROR4__(v46 + 1419157410, 14) - __ROL4__(v46, 8)) ^ v45;
        v48 = (4991 * __ROR4__(v47 ^ 0xAB69605E, 12)) ^ __ROR4__(v47, 10) ^ v46;
        v49 = (v48 >> 10) ^ (43881 * (v48 ^ 0x7F1)) ^ v47;
        v50 = (2033 * (__ROR4__(~v49, 5) + 24670)) ^ v48;
        v51 = v49 ^ (v50 - 2033) ^ 0xAB69605E;
        v52 = (4991 * __ROL4__(v49 ^ (v50 - 2033) ^ 0xAB6967AF, 2) + (v51 >> 2)) ^ v50;
        v53 = (43881 * __ROR4__(v52 - 133239679, 6) + __ROL4__(v52, 7)) ^ v51;
        v54 = (24670 * (v53 ^ 0x137F) + __ROR4__(v53, 9)) ^ v52;
        v55 = (2033 * __ROL4__(v54 ^ 0xAB69, 5) + __ROL4__(v54, 7)) ^ v53;
        v56 = v55 ^ v54 ^ 0xAC987321;
        v57 = (4991 * __ROR4__(v56, 3) - 219010071) ^ v55;
        v58 = (24670 * __ROR4__(v57 - 133239679, 1) - __ROR4__(v57, 6)) ^ v56;
        v59 = (2033 * __ROL4__(v58 - 1419157410, 3) + __ROL4__(v58, 14)) ^ v57;
        v60 = (4991 * __ROL4__(v59 - 1419157410, 15) - __ROR4__(v59, 14)) ^ v58;
        v61 = (v60 >> 3) ^ (43881 * (v60 ^ 0x605E)) ^ v59;
        v62 = (24670 * __ROL4__(v61 ^ 0x7F1137F, 4)) ^ __ROL4__(v61, 2) ^ v60 ^ v29;
        v63 = v30 ^ v61;
        *(v33 - 4) = v62;
        v64 = __ROR4__(v62, 8);
        *v33 = v63;
        v65 = __ROR4__(v63, 8);
        *(v33 - 5) = v64;
        v66 = __ROR4__(v64, 8);
        *(v33 - 1) = v65;
        v67 = __ROR4__(v65, 8);
        *(v33 - 6) = v66;
        v68 = __ROR4__(v66, 8);
        *(v33 - 2) = v67;
        v69 = __ROR4__(v67, 8);
        *(v33 - 7) = v68;
        *(v33 - 3) = v69;
        v32 = __ROR4__(v68, 8);
        v31 = __ROR4__(v69, 8);
        v29 = v36;
        v30 = v37;
        v33 += 8;
        --v35;
      }
      while ( v35 );
      v70 = 0LL;
      v71 = 0;
      v72 = 0;
      v73 = 0;
      do
        v71 ^= v28[v70++];
      while ( v70 < 0x338 );
      if ( v71 != 64LL )
      {
        MemoryFree(v28);
        v26 = 0;
LABEL_37:
        v74 = (HMODULE *)&WARBIRD::g_arModuleInfo;
        v75 = 4LL;
        do
        {
          if ( *v74 )
            FreeLibrary(*v74);
          v74 += 3;
          --v75;
        }
        while ( v75 );
        memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
        memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_68:
        _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
        String1 = 0LL;
        v1596 = 0LL;
        v89 = 0;
        LastError = 0;
        if ( NtCurrentPeb()->SessionId )
        {
          v91 = ((__int64 (*)(void))off_180985210)();
          v92 = 0LL;
          if ( !v91 )
          {
LABEL_70:
            LastError = GetLastError();
            v93 = LastError < 0;
            if ( LastError > 0 )
            {
              LastError = (unsigned __int16)LastError | 0x80070000;
              v93 = LastError < 0;
            }
            if ( !v93 )
              LastError = -2147467259;
            goto LABEL_120;
          }
          v94 = 0LL;
          v1597 = 0LL;
          for ( i = 0LL; ; i = v1557 )
          {
            v96 = v94;
            if ( !v92 )
              v96 = 0LL;
            v1275 = &v1557;
            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64))off_180985230)(
                                 v91,
                                 2LL,
                                 v96,
                                 i) )
            {
              v1597 = 0LL;
              String1 = v94;
              goto LABEL_90;
            }
            v97 = GetLastError();
            if ( v97 != 122 )
              break;
            if ( v94 )
              goto LABEL_84;
            v94 = (wchar_t *)MemoryAlloc(v1557);
            SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1597);
            v92 = v94;
            v1597 = v94;
            if ( !v94 )
            {
              LastError = -2147024882;
              goto LABEL_90;
            }
          }
          if ( !v97 )
          {
LABEL_84:
            LastError = -2147467259;
            goto LABEL_90;
          }
          if ( v97 > 0 )
            LastError = (unsigned __int16)v97 | 0x80070000;
          else
            LastError = v97;
LABEL_90:
          SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1597);
          if ( LastError < 0 )
            goto LABEL_120;
          v98 = off_180985228;
          CurrentThreadId = GetCurrentThreadId();
          v100 = ((__int64 (__fastcall *)(_QWORD))v98)(CurrentThreadId);
          v101 = 0LL;
          if ( !v100 )
          {
            LastError = GetLastError();
            v102 = LastError < 0;
            if ( LastError > 0 )
            {
              LastError = (unsigned __int16)LastError | 0x80070000;
              v102 = LastError < 0;
            }
            if ( !v102 )
              LastError = -2147467259;
            goto LABEL_120;
          }
          v103 = 0LL;
          v1598 = 0LL;
          LastError = 0;
          for ( j = 0LL; ; j = v1558 )
          {
            v105 = v103;
            if ( !v101 )
              v105 = 0LL;
            v1275 = &v1558;
            if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, wchar_t *, __int64))off_180985230)(
                                 v100,
                                 2LL,
                                 v105,
                                 j) )
            {
              v1598 = 0LL;
              v1596 = v103;
              goto LABEL_111;
            }
            v106 = GetLastError();
            if ( v106 != 122 )
              break;
            if ( v103 )
              goto LABEL_105;
            v103 = (wchar_t *)MemoryAlloc(v1558);
            SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1598);
            v101 = v103;
            v1598 = v103;
            if ( !v103 )
            {
              LastError = -2147024882;
              goto LABEL_111;
            }
          }
          if ( !v106 )
          {
LABEL_105:
            LastError = -2147467259;
            goto LABEL_111;
          }
          LastError = v106 > 0 ? (unsigned __int16)v106 | 0x80070000 : v106;
LABEL_111:
          SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1598);
          if ( LastError < 0 )
          {
LABEL_120:
            SP<unsigned short,SP_MEM<unsigned short>>::Reset(&v1596);
            SP<unsigned short,SP_MEM<unsigned short>>::Reset(&String1);
            v108 = 0;
            if ( LastError >= 0 )
              v108 = v26;
            LODWORD(v1517) = v108;
            v109 = LocalAlloc(0x40u, 4uLL);
            SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(&v1515, v109);
            v1553 = (void *)v1515;
            v110 = 0LL;
            if ( !v1515 )
            {
              v111 = -2147024882;
LABEL_1614:
              v1248 = v1530;
LABEL_1615:
              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                ;
              v1249 = g_WarbirdSecureFunctionsRefCount;
              if ( g_WarbirdSecureFunctionsRefCount > 0 )
              {
                --g_WarbirdSecureFunctionsRefCount;
                if ( v1249 == 1 )
                {
                  v1250 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                  v1251 = 4LL;
                  do
                  {
                    if ( *v1250 )
                      FreeLibrary(*v1250);
                    v1250 += 3;
                    --v1251;
                  }
                  while ( v1251 );
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                }
              }
              _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
              SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1515);
              if ( v111 >= 0 )
              {
                if ( v1248 == 4 )
                {
                  v1252 = *v1594;
                  goto LABEL_1636;
                }
              }
              else
              {
                switch ( v111 )
                {
                  case -805306316:
                    v1555 = -1073418222;
LABEL_1632:
                    v1252 = v1552;
LABEL_1636:
                    SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(&v1594);
                    if ( v1555 >= 0 && v1252 )
                    {
                      v3 = v1613;
                      *((_DWORD *)v1613 + 127) = 2;
                    }
                    else
                    {
                      wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabletPostureWindowingShowMaximized>::ReportUsage(
                        `wil::Feature<__WilFeatureTraits_Feature_TabletPostureWindowingShowMaximized>::GetImpl'::`2'::impl,
                        1u,
                        v24,
                        v25);
                      IsScreenSizeRequirementMet = Windows::Internal::DeviceCapabilitiesW::IsScreenSizeRequirementMet();
                      v3 = v1613;
                      if ( !IsScreenSizeRequirementMet )
                      {
                        v5 = v1614;
                        v14 = (__int64 **)v1655;
                        v12 = v1640;
                        goto LABEL_1643;
                      }
                      *((_DWORD *)v1613 + 127) = 3;
                    }
                    v5 = (_QWORD *)((char *)v3 + 224);
                    v14 = (__int64 **)((char *)v3 + 264);
                    v12 = (__int64 **)((char *)v3 + 256);
LABEL_1643:
                    v2 = v1612;
LABEL_1644:
                    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapOnShow>::ReportUsage(
                      `wil::Feature<__WilFeatureTraits_Feature_SnapOnShow>::GetImpl'::`2'::impl,
                      1u,
                      v24,
                      v25);
                    v1254 = v2->lpVtbl->QueryService;
                    wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset((char *)v3 + 320);
                    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v1254)(
                           v2,
                           &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                           &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                           (char *)v3 + 320);
                    if ( v6 < 0 )
                    {
                      v7 = 223LL;
                      goto LABEL_3;
                    }
                    goto LABEL_1646;
                  case -805306139:
                  case -1073425151:
                    v1555 = -1073418201;
                    goto LABEL_1632;
                  case -805306306:
                    v1555 = -1073418200;
                    goto LABEL_1632;
                }
                v1555 = v111;
                if ( v111 != -2147024774 )
                  goto LABEL_1632;
              }
              v1555 = -1073418210;
              goto LABEL_1632;
            }
            v112 = 0LL;
            lpMem = 0LL;
            *(_OWORD *)v1666 = 0LL;
            ProcessHeap = GetProcessHeap();
            v114 = HeapAlloc(ProcessHeap, 8u, 0xA0uLL);
            v111 = -1073741801;
            v1529 = 56;
            if ( !v114 )
              goto LABEL_125;
            v110 = v114;
            *v114 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
            v114[1] = *((_OWORD *)&_ImageBase + 625603);
            v114[2] = *((_OWORD *)&_ImageBase + 625604);
            v114[3] = *((_OWORD *)&_ImageBase + 625605);
            v114[4] = *((_OWORD *)&_ImageBase + 625606);
            v114[5] = *((_OWORD *)&_ImageBase + 625607);
            v114[6] = *((_OWORD *)&_ImageBase + 625608);
            v114[7] = *((_OWORD *)&_ImageBase + 625609);
            v114[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
            v114[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
            v124 = GetProcessHeap();
            v125 = HeapAlloc(v124, 8u, 8uLL);
            if ( !v125 )
            {
              LODWORD(v1522) = -1073741801;
LABEL_144:
              v115 = v108;
              goto LABEL_127;
            }
            *v125 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
            v1443 = (LPVOID)__rdtsc();
            dwBytes = 0;
            v111 = RtlUIntAdd(4u, 4, (unsigned int *)&v1548);
            LODWORD(v1522) = v111;
            if ( v111 < 0 )
            {
              v115 = v108;
              v112 = v126;
              goto LABEL_127;
            }
            v127 = RtlUIntAdd(0, v1548, &dwBytes);
            v111 = v127 | 0x10000000;
            LODWORD(v1522) = v127 | 0x10000000;
            v115 = v108;
            v112 = v129;
            if ( v127 < 0 )
              goto LABEL_127;
            v111 = RtlUIntAdd(v128, 160, (unsigned int *)&v1559);
            LODWORD(v1522) = v111;
            if ( v111 < 0 )
              goto LABEL_127;
            v130 = RtlUIntAdd(dwBytes, v1559, &dwBytes);
            v111 = v130 | 0x10000000;
            LODWORD(v1522) = v130 | 0x10000000;
            if ( v130 < 0 )
              goto LABEL_127;
            v111 = RtlUIntAdd(v131, v131 + 4, (unsigned int *)&v1561);
            LODWORD(v1522) = v111;
            if ( v111 < 0 )
              goto LABEL_127;
            v132 = RtlUIntAdd(dwBytes, v1561, &dwBytes);
            v111 = v132 | 0x10000000;
            LODWORD(v1522) = v132 | 0x10000000;
            if ( v132 < 0 )
              goto LABEL_127;
            v111 = RtlUIntAdd(v133, v133 + 4, (unsigned int *)&v1584);
            LODWORD(v1522) = v111;
            if ( v111 < 0 )
              goto LABEL_127;
            v134 = RtlUIntAdd(dwBytes, v1584, &dwBytes);
            v111 = v134 | 0x10000000;
            LODWORD(v1522) = v134 | 0x10000000;
            if ( v134 < 0 )
              goto LABEL_127;
            if ( StringCchLengthW(L"Shell-Windowing-ShowMaximized", v135, pcchLength) < 0 )
            {
              v111 = -1073741762;
LABEL_155:
              LODWORD(v1522) = v111;
              goto LABEL_127;
            }
            ++pcchLength[0];
            v111 = RtlUIntAdd(4u, 2 * LODWORD(pcchLength[0]), (unsigned int *)&v1585);
            LODWORD(v1522) = v111;
            if ( v111 < 0 )
              goto LABEL_127;
            v136 = RtlUIntAdd(dwBytes, v1585, &dwBytes);
            v111 = v136 | 0x10000000;
            LODWORD(v1522) = v136 | 0x10000000;
            if ( v136 < 0 )
              goto LABEL_127;
            v111 = RtlUIntAdd(4u, 4, (unsigned int *)&v1586);
            LODWORD(v1522) = v111;
            if ( v111 < 0 )
              goto LABEL_127;
            v137 = RtlUIntAdd(dwBytes, v1586, &dwBytes);
            v111 = v137 | 0x10000000;
            LODWORD(v1522) = v137 | 0x10000000;
            if ( v137 < 0
              || (v111 = RtlUIntAdd(v138, v138, (unsigned int *)&v1587), LODWORD(v1522) = v111, v111 < 0)
              || (v139 = RtlUIntAdd(dwBytes, v1587, &dwBytes),
                  v111 = v139 | 0x10000000,
                  LODWORD(v1522) = v139 | 0x10000000,
                  v139 < 0) )
            {
LABEL_127:
              v1664 = 0LL;
              v116 = lpMem;
              if ( lpMem )
              {
                v117 = GetProcessHeap();
                HeapFree(v117, 0, v116);
                lpMem = 0LL;
              }
              v1666[0] = 0LL;
              v118 = v1666[1];
              if ( v1666[1] )
              {
                v119 = GetProcessHeap();
                HeapFree(v119, 0, v118);
                v1666[1] = 0LL;
              }
              if ( v110 )
              {
                v120 = GetProcessHeap();
                HeapFree(v120, 0, v110);
              }
              if ( v112 )
              {
                v121 = GetProcessHeap();
                HeapFree(v121, 0, v112);
              }
              if ( v111 < 0 )
                goto LABEL_1614;
              if ( !v115 )
              {
LABEL_1613:
                v1515 = 0LL;
                v1594 = (int *)v1553;
                v1248 = v1556;
                goto LABEL_1615;
              }
              v1625 = 0LL;
              g_WarbirdNotificationInformation = v115;
              ModuleFileNameW = GetModuleFileNameW(&_ImageBase, Filename, 0x104u);
              v123 = 0LL;
              if ( !ModuleFileNameW || ModuleFileNameW == 260 && GetLastError() == 122 )
                goto LABEL_1258;
              v1395 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
              if ( !v1395 )
              {
                GetLastError();
LABEL_1258:
                SH<void *,SH_HANDLE>::Reset(&v1625);
                v924 = 0LL;
                v1675 = 0LL;
                *(_OWORD *)v1678 = 0LL;
                v925 = GetProcessHeap();
                v926 = HeapAlloc(v925, 8u, 0xA0uLL);
                if ( !v926 )
                  goto LABEL_1605;
                v924 = v926;
                *v926 = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[0];
                v926[1] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[1];
                v926[2] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[2];
                v926[3] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[3];
                v926[4] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[4];
                v926[5] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[5];
                v926[6] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[6];
                v926[7] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[7];
                v926[8] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[8];
                v926[9] = `WarbirdUmGetDecryptionCipher'::`2'::DecryptionCipher[9];
                v927 = GetProcessHeap();
                v928 = (WCHAR *)HeapAlloc(v927, 8u, 8uLL);
                v929 = v928;
                if ( !v928 )
                  goto LABEL_1605;
                *(_QWORD *)v928 = `WarbirdUmGetDecryptionKey'::`2'::nDecryptionKey;
                v1403 = __rdtsc();
                v1562 = 0;
                v123 = (__int64)v929;
                if ( (int)RtlUIntAdd(4u, 4, (unsigned int *)&v1563) < 0 )
                  goto LABEL_1605;
                if ( (int)RtlUIntAdd(0, v1563, &v1562) < 0 )
                  goto LABEL_1605;
                if ( (int)RtlUIntAdd(v930, 160, (unsigned int *)&v1564) < 0 )
                  goto LABEL_1605;
                v931 = RtlUIntAdd(v1562, v1564, &v1562);
                if ( (v934 | v931) < 0 )
                  goto LABEL_1605;
                if ( (int)RtlUIntAdd(v933, v932 + 8, (unsigned int *)&v1565) < 0 )
                  goto LABEL_1605;
                v935 = RtlUIntAdd(v1562, v1565, &v1562);
                if ( (v938 | v935) < 0 )
                  goto LABEL_1605;
                if ( (int)RtlUIntAdd(v937, v936 + 8, v1566) < 0 )
                  goto LABEL_1605;
                v939 = RtlUIntAdd(v1562, v1566[0], &v1562);
                if ( (v940 | v939) < 0 )
                  goto LABEL_1605;
                HIDWORD(v1674) = v1562;
                v941 = v1562;
                v942 = GetProcessHeap();
                v943 = HeapAlloc(v942, 8u, v941);
                if ( !v943 )
                  goto LABEL_1605;
                v1675 = v943;
                LODWORD(v1674) = 0;
                v1641[3] = v943;
                v1489 = v929;
                v1347 = v924;
                v944 = 0LL;
                if ( (int)RtlULongLongAdd((unsigned __int64)v943, 4LL, (unsigned __int64 *)&v1679) < 0
                  || v946 + 2 > (_DWORD *)((char *)v946 + HIDWORD(v1674)) )
                {
                  goto LABEL_1605;
                }
                *v946 = 4;
                *v1679 = 4;
                v947 = v1674 + 1;
                LODWORD(v1674) = v1674 + 1;
                if ( v1675 )
                {
                  v949 = (int *)v1675;
                  v1642 = (int *)v1675;
                  lpModuleNamek = 0;
                  if ( v947 )
                  {
                    do
                    {
                      if ( (int)RtlUIntAdd(4u, *v949, &v1568) < 0
                        || (int)RtlULongLongAdd(v950, v1568, (unsigned __int64 *)&v1642) < 0 )
                      {
                        goto LABEL_1605;
                      }
                      ++lpModuleNamek;
                      v1489 = (LPCWSTR)v123;
                      v1347 = v924;
                      v949 = v1642;
                    }
                    while ( lpModuleNamek < v951 );
                    v944 = 0LL;
                  }
                  if ( (int)RtlULongLongAdd((unsigned __int64)v949, 4LL, (unsigned __int64 *)&v1662) < 0
                    || (char *)v952 + v953 + 4 > (char *)v1675 + HIDWORD(v1674) )
                  {
                    goto LABEL_1605;
                  }
                  *v952 = v953;
                  memcpy_0(v1662, v924, v953);
                  v948 = 4LL;
                }
                else if ( (int)RtlUIntAdd(4u, v945, (unsigned int *)&v1567) < 0
                       || (int)RtlUIntAdd(HIDWORD(v1674), v1567, (unsigned int *)&v1674 + 1) < 0 )
                {
                  goto LABEL_1605;
                }
                v954 = v1674 + 1;
                LODWORD(v1674) = v1674 + 1;
                if ( v123 )
                {
                  if ( v1675 )
                  {
                    v957 = (int *)v1675;
                    v1643 = (int *)v1675;
                    lpModuleNamel = 0;
                    if ( v954 )
                    {
                      do
                      {
                        if ( (int)RtlUIntAdd(4u, *v957, &v1570) < 0
                          || (int)RtlULongLongAdd(v958, v1570, (unsigned __int64 *)&v1643) < 0 )
                        {
                          goto LABEL_1605;
                        }
                        ++lpModuleNamel;
                        v1489 = (LPCWSTR)v123;
                        v1347 = v924;
                        v957 = v1643;
                      }
                      while ( lpModuleNamel < v959 );
                      v944 = 0LL;
                      v948 = 4LL;
                    }
                    if ( (int)RtlULongLongAdd((unsigned __int64)v957, v948, (unsigned __int64 *)&v1663) < 0
                      || v960 + 3 > (_DWORD *)((char *)v1675 + HIDWORD(v1674)) )
                    {
                      goto LABEL_1605;
                    }
                    *v960 = 8;
                    memcpy_0(v1663, (const void *)v123, 8uLL);
                    v956 = 4LL;
                    v955 = 1;
                  }
                  else if ( (int)RtlUIntAdd(v948, 8, (unsigned int *)&v1569) < 0
                         || (int)RtlUIntAdd(HIDWORD(v1674), v1569, (unsigned int *)&v1674 + 1) < 0 )
                  {
                    goto LABEL_1605;
                  }
                  v961 = v955 + v1674;
                  LODWORD(v1674) = v955 + v1674;
                  if ( v1675 )
                  {
                    v964 = (int *)v1675;
                    v1644 = (int *)v1675;
                    if ( v961 )
                    {
                      do
                      {
                        if ( (int)RtlUIntAdd(4u, *v964, &v1572) < 0
                          || (int)RtlULongLongAdd(v965, v1572, (unsigned __int64 *)&v1644) < 0 )
                        {
                          goto LABEL_1605;
                        }
                        LODWORD(v944) = (_DWORD)v944 + 1;
                        v1489 = (LPCWSTR)v123;
                        v1347 = v924;
                        v964 = v1644;
                      }
                      while ( (unsigned int)v944 < v961 );
                      v956 = 4LL;
                    }
                    v944 = 0LL;
                    if ( (int)RtlULongLongAdd((unsigned __int64)v964, v956, (unsigned __int64 *)&v1667) < 0
                      || v966 + 3 > (_DWORD *)((char *)v1675 + HIDWORD(v1674)) )
                    {
                      goto LABEL_1605;
                    }
                    *v966 = 8;
                    *v1667 = v1403;
                    LODWORD(v1674) = v1674 + 1;
                  }
                  else
                  {
                    if ( (int)RtlUIntAdd(v956, 8, (unsigned int *)&v1571) < 0
                      || (int)RtlUIntAdd(HIDWORD(v1674), v1571, (unsigned int *)&v1674 + 1) < 0 )
                    {
                      goto LABEL_1605;
                    }
                    LODWORD(v1674) = v962 + v1674;
                  }
                  if ( (int)RtlUIntAdd(v963, v963, &v1573) >= 0 )
                  {
                    v968 = v1573;
                    v1574 = v1573;
                    if ( (int)RtlUIntAdd(v967, 8, (unsigned int *)&v1575) >= 0
                      && (int)RtlUIntAdd(v968, v1575, (unsigned int *)&v1574) >= 0 )
                    {
                      lpModuleNamem = v1574;
                      v1404 = 0LL;
                      v1333 = 0;
                      v1523 = 0LL;
                      v1519 = 0LL;
                      v1451 = 0;
                      v1420 = 0LL;
                      v1298 = 0LL;
                      v1483 = 0LL;
                      v1390 = (LPCWSTR)__rdtsc();
                      v1576 = 8;
                      v969 = RtlUIntAdd(8u, SHIDWORD(v1674), &v1576);
                      if ( v969 >= 0 )
                      {
                        v972 = (v1576 + 7) & 0xFFFFFFF8;
                        if ( v972 < v1576 )
                          goto LABEL_1605;
                        v1576 = (v1576 + 7) & 0xFFFFFFF8;
                        v973 = v972;
                        v974 = GetProcessHeap();
                        v975 = HeapAlloc(v974, 8u, v973);
                        v1518 = v975;
                        if ( !v975 )
                          goto LABEL_1605;
                        v1645[0] = v975;
                        *v975 = v1674;
                        v969 = RtlULongLongAdd((unsigned __int64)v975, 4LL, (unsigned __int64 *)v1645);
                        v1521 = v976;
                        v1489 = (LPCWSTR)v123;
                        v1347 = v924;
                        if ( v969 < 0
                          || (v977 = v1645[0],
                              *(_DWORD *)v1645[0] = HIDWORD(v1674),
                              v969 = RtlULongLongAdd((unsigned __int64)v977, 4LL, (unsigned __int64 *)v1645),
                              v1521 = v978,
                              v1489 = (LPCWSTR)v123,
                              v1347 = v924,
                              v969 < 0) )
                        {
                          v979 = GetProcessHeap();
                          HeapFree(v979, 0, (LPVOID)v1521);
                          v970 = 0;
                        }
                        else
                        {
                          *(_QWORD *)(v1576 + v978 - 8) = v1390;
                          memcpy_0(v1645[0], v1675, HIDWORD(v1674));
                          v944 = (unsigned __int8 *)v1518;
                          v1404 = (unsigned __int8 *)v1518;
                          v970 = v1576;
                          v1333 = v1576;
                          v1489 = (LPCWSTR)v123;
                          v1347 = v924;
                        }
                        v971 = 0LL;
                      }
                      v980 = v969 | 0x10000000;
                      if ( v980 < 0 )
                        goto LABEL_1388;
                      v1391 = v971;
                      if ( v944 )
                      {
                        v981 = v970;
                        v1369 = v970;
                        if ( !v970 || (v1515 = v970 + 8LL, v982 = (char *)MemoryAlloc(v1515), (v1526 = v982) == 0LL) )
                        {
                          v980 = -805306367;
LABEL_1389:
                          v1081 = GetProcessHeap();
                          HeapFree(v1081, 0, v944);
LABEL_1390:
                          v1082 = v1523;
                          if ( v1523 )
                          {
                            v1083 = (void *)*((_QWORD *)v1523 + 1);
                            if ( v1083 )
                            {
                              v1084 = GetProcessHeap();
                              HeapFree(v1084, 0, v1083);
                              v1082[1] = 0LL;
                            }
                            v1085 = (void *)v1082[3];
                            if ( v1085 )
                            {
                              v1086 = GetProcessHeap();
                              HeapFree(v1086, 0, v1085);
                              v1082[3] = 0LL;
                            }
                            v1087 = (void *)v1082[5];
                            if ( v1087 )
                            {
                              v1088 = GetProcessHeap();
                              HeapFree(v1088, 0, v1087);
                              v1082[5] = 0LL;
                            }
                            v1089 = GetProcessHeap();
                            HeapFree(v1089, 0, v1082);
                          }
                          v1090 = v1519;
                          if ( v1519 )
                          {
                            v1091 = GetProcessHeap();
                            HeapFree(v1091, 0, v1090);
                          }
                          if ( v1420 )
                          {
                            v1092 = GetProcessHeap();
                            HeapFree(v1092, 0, v1420);
                          }
                          if ( v1298 )
                          {
                            v1093 = (void *)v1298[1];
                            if ( v1093 )
                            {
                              v1094 = GetProcessHeap();
                              HeapFree(v1094, 0, v1093);
                              v1298[1] = 0LL;
                            }
                            v1095 = (void *)v1298[3];
                            if ( v1095 )
                            {
                              v1096 = GetProcessHeap();
                              HeapFree(v1096, 0, v1095);
                              v1298[3] = 0LL;
                            }
                            v1097 = (void *)v1298[5];
                            if ( v1097 )
                            {
                              v1098 = GetProcessHeap();
                              HeapFree(v1098, 0, v1097);
                              v1298[5] = 0LL;
                            }
                            v1099 = GetProcessHeap();
                            HeapFree(v1099, 0, v1298);
                          }
                          if ( v1483 )
                          {
                            v1100 = GetProcessHeap();
                            HeapFree(v1100, 0, v1483);
                          }
                          if ( v980 >= 0 )
                          {
                            if ( LODWORD(v1678[0]) )
                            {
                              v1101 = v1678[1];
                              if ( v1678[1] )
                              {
                                v1654[0] = v1678[1];
                                if ( (int)RtlULongLongAdd((unsigned __int64)v1678[1], 4LL, (unsigned __int64 *)v1654) >= 0 )
                                {
                                  v1104 = (int *)v1654[0];
                                  if ( !*v1101 )
                                    v1104 = 0LL;
                                  v1654[0] = v1104;
                                  if ( *v1101 == (_DWORD)v1103 && *v1104 >= 0 && v1101 && LODWORD(v1678[0]) > 1 )
                                  {
                                    v1593 = (_DWORD *)v1102;
                                    v1105 = 0;
                                    while ( (int)RtlULongLongAdd(v1102, v1103, (unsigned __int64 *)&v1593) >= 0
                                         && (int)RtlULongLongAdd(
                                                   (unsigned __int64)v1593,
                                                   v1106,
                                                   (unsigned __int64 *)&v1593) >= 0 )
                                    {
                                      ++v1105;
                                      v1102 = (unsigned __int64)v1593;
                                      if ( v1105 )
                                      {
                                        RtlULongLongAdd((unsigned __int64)v1593, v1103, (unsigned __int64 *)&v1593);
                                        goto LABEL_1605;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto LABEL_1605;
                        }
                        v983 = 0;
                        v1277 = 0;
                        v984 = 0LL;
                        if ( v981 )
                        {
                          do
                            v983 ^= v944[v984++];
                          while ( v984 < v981 );
                          v1277 = v983;
                        }
                        v1734 = 0xC81ECB17B1B54A58uLL;
                        v985 = v944;
                        v986 = v982;
                        v1520 = v982;
                        v987 = 0;
                        v988 = -1;
                        LODWORD(v1518) = 0;
                        LODWORD(v1521) = 0;
                        v989 = v1333;
                        v990 = v1333 & 7;
                        if ( (v1333 & 7) != 0 )
                        {
                          v991 = 0;
                          v992 = 0;
                          v1334 = 0;
                          v993 = 56;
                          do
                          {
                            v994 = *v985++;
                            if ( v992 >= 4 )
                              v991 |= v994 << v993;
                            else
                              v987 |= v994 << (v993 - 32);
                            LODWORD(v1518) = v991;
                            LODWORD(v1521) = v987;
                            v992 = v1334 + 1;
                            v1334 = v992;
                            v993 -= 8;
                          }
                          while ( (int)v992 < v990 );
                          v1524 = (SIZE_T)v985;
                          v987 ^= 0xB17A307A;
                          v995 = v991 ^ 0x42F6B18D;
                          v996 = v987;
                          v997 = v995;
                          v1489 = (LPCWSTR)v123;
                          v1347 = v924;
                          v1404 = v944;
                          v111 = v1522;
                          v998 = v1520;
                          v999 = 0;
                          do
                          {
                            v1335 = v998 + 1;
                            if ( v999 >= 4 )
                            {
                              v997 = __ROL4__(v997, 8);
                              v1000 = v997;
                            }
                            else
                            {
                              v996 = __ROL4__(v996, 8);
                              v1000 = v996;
                            }
                            *v998 = v1000;
                            ++v999;
                            ++v998;
                          }
                          while ( v999 < v990 );
                          v986 = v1335;
                          v1520 = v1335;
                          v983 = v1277;
                          v985 = (unsigned __int8 *)v1524;
                          v989 = v1369;
                          if ( (unsigned int)v990 <= 4 )
                          {
                            v988 = 0;
                            if ( (unsigned int)v990 >= 4 )
                              goto LABEL_1342;
                            v987 = v987 >> (8 * (4 - v990)) << (8 * (4 - v990));
                          }
                          else
                          {
                            v988 = v995 >> (8 * (8 - v990)) << (8 * (8 - v990));
                          }
                          v986 = (char *)v1520;
                        }
LABEL_1342:
                        if ( v989 >> 3 )
                        {
                          v1336 = WORD1(v1734);
                          v1001 = WORD2(v1734);
                          LODWORD(v1520) = HIWORD(v1734);
                          v1002 = v986 + 7;
                          v1003 = v985 + 2;
                          v1004 = v989 >> 3;
                          v1005 = HIDWORD(v1734) ^ 0xB1B54A58;
                          v1006 = (int)v1518;
                          do
                          {
                            v1007 = v1003[1] | ((*v1003 | ((*(v1003 - 1) | (*(v1003 - 2) << 8)) << 8)) << 8);
                            v1008 = v1003[5] | ((v1003[4] | ((v1003[3] | (v1003[2] << 8)) << 8)) << 8);
                            v1009 = v1008 ^ v988;
                            v1003 += 8;
                            v1010 = v1007 ^ HIDWORD(v1734) ^ (v1009 - 19032) ^ v987;
                            v1011 = (v1336 * __ROR4__(v1010 ^ HIDWORD(v1734), 15) + __ROR4__(v1010, 7)) ^ v1009;
                            v1012 = (v1001 * __ROR4__(v1011 - 1313519016, 9) - __ROR4__(v1011, 10)) ^ v1010;
                            v1013 = ((_DWORD)v1520 * __ROL4__(v1001 ^ v1012, 4) + __ROL4__(v1012, 5)) ^ v1011;
                            v1014 = (HIDWORD(v1734) - (v1013 ^ 0xB1B54A58)) ^ v1012;
                            v1015 = (WORD1(v1734) * (v1014 - 19032) - (v1014 >> 6)) ^ v1013;
                            v1016 = (19032 * (v1001 ^ __ROR4__(v1015, 15))) ^ v1014;
                            v1017 = (v1001 * (HIWORD(v1734) + __ROR4__(~v1016, 3))) ^ v1015;
                            v1018 = (v1017 - HIDWORD(v1734) - 19032) ^ v1016;
                            v1019 = (v1336 * ((unsigned int)v1520 ^ v1018)) ^ __ROR4__(v1018, 10) ^ v1017;
                            v1020 = (v1001 * __ROL4__(v1019 ^ 0x4A58, 6)) ^ __ROR4__(v1019, 3) ^ v1018;
                            v1021 = (19032 * (__ROR4__(v1020, 15) - HIWORD(v1734))) ^ v1019;
                            v1022 = (v1021 >> 15) ^ (19032 * __ROL4__(v1021 - v1001, 3)) ^ (v1021 >> 1) ^ (19032 * (HIWORD(v1734) ^ v1021)) ^ v1020;
                            v1023 = (WORD1(v1734) * (v1022 - v1001) - (v1022 >> 13)) ^ v1021;
                            v1024 = (v1001 * __ROR4__(-1313519016 - v1023, 9)) ^ __ROR4__(v1023, 11) ^ v1022;
                            v1025 = (v1024 + 1313519016 - HIWORD(v1734)) ^ v1023;
                            v1026 = (19032 * (v1336 ^ v1025) - __ROR4__(v1025, 7)) ^ v1024;
                            v1027 = (v1336 * __ROL4__(HIWORD(v1734) ^ v1026, 4) - __ROR4__(v1026, 16)) ^ v1025;
                            v1028 = (v1001 * __ROR4__(-1313519016 - v1027, 10) + __ROR4__(v1027, 4)) ^ v1026;
                            v1029 = ((_DWORD)v1520 * __ROR4__(v1028 + 1313519016, 4)) ^ __ROR4__(v1028, 9) ^ v1027;
                            v1030 = (19032 * __ROL4__(HIDWORD(v1734) ^ v1029, 8) - __ROL4__(v1029, 2)) ^ v1028;
                            v1031 = (v1336 * __ROR4__(HIDWORD(v1734) - v1030, 11) - __ROR4__(v1030, 12)) ^ v1029;
                            v1032 = (v1031 >> 8) ^ (v1001 * (WORD1(v1734) ^ v1031)) ^ v1030;
                            v1033 = v1032 ^ v1005;
                            v1034 = v1521 ^ v1032;
                            v1035 = v1006 ^ v1033 ^ v1031;
                            *(v1002 - 4) = v1034;
                            v1036 = __ROR4__(v1034, 8);
                            *v1002 = v1035;
                            v1037 = __ROR4__(v1035, 8);
                            *(v1002 - 5) = v1036;
                            v1038 = __ROR4__(v1036, 8);
                            *(v1002 - 1) = v1037;
                            v1039 = __ROR4__(v1037, 8);
                            *(v1002 - 6) = v1038;
                            v1040 = __ROR4__(v1038, 8);
                            *(v1002 - 2) = v1039;
                            v1041 = __ROR4__(v1039, 8);
                            *(v1002 - 7) = v1040;
                            *(v1002 - 3) = v1041;
                            v987 = __ROR4__(v1040, 8);
                            v988 = __ROR4__(v1041, 8);
                            LODWORD(v1521) = v1007;
                            v1006 = v1008;
                            v1002 += 8;
                            --v1004;
                          }
                          while ( v1004 );
                          v983 = v1277;
                          v111 = v1522;
                          v924 = v1347;
                          v123 = (__int64)v1489;
                          v944 = v1404;
                          v989 = v1369;
                        }
                        v1042 = v1526;
                        *(_QWORD *)((char *)v1526 + v989) = v983;
                        v1645[4] = (void *)160;
                        v1043 = GetProcessHeap();
                        v1044 = (const void **)HeapAlloc(v1043, 8u, 0x30uLL);
                        if ( v1044 )
                        {
                          *(_DWORD *)v1044 = v1515;
                          v1046 = GetProcessHeap();
                          v1047 = HeapAlloc(v1046, 8u, (unsigned int)v1515);
                          if ( !v1047 )
                            goto LABEL_1351;
                          v1044[1] = v1047;
                          memcpy_0(v1047, v1042, (unsigned int)v1515);
                          *((_DWORD *)v1044 + 4) = 160;
                          v1048 = GetProcessHeap();
                          v1049 = HeapAlloc(v1048, 8u, 0xA0uLL);
                          if ( !v1049 )
                            goto LABEL_1351;
                          v1044[3] = v1049;
                          *v1049 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                          v1049[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                          v1049[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                          v1049[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                          v1049[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                          v1049[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                          v1049[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                          v1049[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                          v1049[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                          v1049[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                          *((_DWORD *)v1044 + 8) = 8;
                          v1050 = GetProcessHeap();
                          v1051 = HeapAlloc(v1050, 8u, 8uLL);
                          v1045 = 0;
                          if ( v1051 )
                          {
                            v1044[5] = v1051;
                            *v1051 = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                            v1391 = 0LL;
                          }
                          else
                          {
LABEL_1351:
                            v1045 = -1073741801;
                            v1348 = (void *)v1044[1];
                            if ( v1348 )
                            {
                              v1052 = GetProcessHeap();
                              HeapFree(v1052, 0, v1348);
                              v1044[1] = 0LL;
                            }
                            v1349 = (void *)v1044[3];
                            if ( v1349 )
                            {
                              v1053 = GetProcessHeap();
                              HeapFree(v1053, 0, v1349);
                              v1044[3] = 0LL;
                            }
                            v1350 = (void *)v1044[5];
                            if ( v1350 )
                            {
                              v1054 = GetProcessHeap();
                              HeapFree(v1054, 0, v1350);
                              v1044[5] = 0LL;
                            }
                            v1055 = GetProcessHeap();
                            HeapFree(v1055, 0, v1044);
                            v1044 = 0LL;
                          }
                        }
                        else
                        {
                          v1045 = -1073741801;
                          v1044 = 0LL;
                        }
                        v1523 = v1044;
                        v1056 = GetProcessHeap();
                        HeapFree(v1056, 0, v1526);
                        v1057 = v1391;
                        if ( v1391 )
                        {
                          v1351 = (void *)*((_QWORD *)v1391 + 1);
                          if ( v1351 )
                          {
                            v1058 = GetProcessHeap();
                            HeapFree(v1058, 0, v1351);
                            v1057 = v1391;
                            *((_QWORD *)v1391 + 1) = 0LL;
                          }
                          v1352 = (void *)*((_QWORD *)v1057 + 3);
                          if ( v1352 )
                          {
                            v1059 = GetProcessHeap();
                            HeapFree(v1059, 0, v1352);
                            v1057 = v1391;
                            *((_QWORD *)v1391 + 3) = 0LL;
                          }
                          v1353 = (void *)*((_QWORD *)v1057 + 5);
                          if ( v1353 )
                          {
                            v1060 = GetProcessHeap();
                            HeapFree(v1060, 0, v1353);
                            *((_QWORD *)v1391 + 5) = 0LL;
                          }
                          v1061 = GetProcessHeap();
                          HeapFree(v1061, 0, v1391);
                          v1523 = v1044;
                        }
                        v980 = v1045 | 0x10000000;
                        if ( v980 < 0 )
                          goto LABEL_1388;
                        v1515 = (SIZE_T)(v1044 + 4);
                        v1518 = v1044 + 2;
                        LODWORD(v1577) = 4;
                        v1063 = RtlUIntAdd(4u, *(_DWORD *)v1044, (unsigned int *)&v1577);
                        if ( v1063 >= 0 )
                        {
                          v1063 = RtlUIntAdd(v1577, v1062, (unsigned int *)&v1577);
                          if ( v1063 >= 0 )
                          {
                            v1063 = RtlUIntAdd(v1577, v1064, (unsigned int *)&v1577);
                            if ( v1063 >= 0 )
                            {
                              v1063 = RtlUIntAdd(v1577, 4, (unsigned int *)&v1577);
                              if ( v1063 >= 0 )
                              {
                                v1063 = RtlUIntAdd(v1577, v1065, (unsigned int *)&v1577);
                                if ( v1063 >= 0 )
                                {
                                  v1337 = v1577;
                                  v1066 = v1577;
                                  v1067 = GetProcessHeap();
                                  v1068 = HeapAlloc(v1067, 8u, v1066);
                                  v1521 = (SIZE_T)v1068;
                                  if ( !v1068 )
                                    goto LABEL_1453;
                                  v1646 = v1068;
                                  *v1068 = *(_DWORD *)v1044;
                                  v1063 = RtlULongLongAdd((unsigned __int64)v1068, 4LL, (unsigned __int64 *)&v1646);
                                  v1520 = v1069;
                                  v1523 = v1044;
                                  if ( v1063 < 0 )
                                    goto LABEL_1383;
                                  memcpy_0(v1646, v1044[1], *(unsigned int *)v1044);
                                  v1063 = RtlULongLongAdd(
                                            (unsigned __int64)v1646,
                                            *(unsigned int *)v1044,
                                            (unsigned __int64 *)&v1646);
                                  v1520 = (LPVOID)v1521;
                                  v1523 = v1044;
                                  if ( v1063 < 0 )
                                    goto LABEL_1383;
                                  v1070 = v1646;
                                  *(_DWORD *)v1646 = *(_DWORD *)v1518;
                                  v1063 = RtlULongLongAdd((unsigned __int64)v1070, 4LL, (unsigned __int64 *)&v1646);
                                  v1520 = v1071;
                                  v1523 = v1044;
                                  if ( v1063 < 0 )
                                    goto LABEL_1383;
                                  v1072 = (unsigned int *)v1518;
                                  memcpy_0(v1646, v1044[3], *(unsigned int *)v1518);
                                  v1063 = RtlULongLongAdd((unsigned __int64)v1646, *v1072, (unsigned __int64 *)&v1646);
                                  v1520 = (LPVOID)v1521;
                                  v1523 = v1044;
                                  if ( v1063 < 0 )
                                    goto LABEL_1383;
                                  v1073 = v1646;
                                  *(_DWORD *)v1646 = *(_DWORD *)v1515;
                                  v1063 = RtlULongLongAdd((unsigned __int64)v1073, 4LL, (unsigned __int64 *)&v1646);
                                  v1520 = v1074;
                                  v1523 = v1044;
                                  if ( v1063 < 0
                                    || (v1075 = (unsigned int *)v1515,
                                        memcpy_0(v1646, v1044[5], *(unsigned int *)v1515),
                                        v1063 = RtlULongLongAdd(
                                                  (unsigned __int64)v1646,
                                                  *v1075,
                                                  (unsigned __int64 *)&v1646),
                                        v1520 = (LPVOID)v1521,
                                        v1523 = v1044,
                                        v1063 < 0) )
                                  {
LABEL_1383:
                                    v1076 = GetProcessHeap();
                                    HeapFree(v1076, 0, v1520);
                                  }
                                  else
                                  {
                                    v1519 = (void *)v1521;
                                    v1451 = v1337;
                                    v1523 = v1044;
                                  }
                                }
                              }
                            }
                          }
                        }
                        v980 = v1063 | 0x10000000;
                        if ( v980 < 0 )
                          goto LABEL_1388;
                        v1578 = 8;
                        v1077 = RtlUIntAdd(8u, lpModuleNamem, &v1578);
                        v980 = v1077 | 0x10000000;
                        if ( v1077 < 0 )
                          goto LABEL_1388;
                        v1080 = (v1578 + 7) & 0xFFFFFFF8;
                        if ( v1080 < v1578 )
                        {
                          v980 = -1073741675;
                          goto LABEL_1388;
                        }
                        v1579 = (v1578 + 7) & 0xFFFFFFF8;
                        v1519 = v1079;
                        v1523 = v1044;
                        v980 = RtlUIntAdd(v1080, v1078, &v1579);
                        if ( v980 < 0 )
                          goto LABEL_1388;
                        v1523 = v1044;
                        v1519 = v1107;
                        if ( !v1675 )
                          goto LABEL_1430;
                        v1523 = v1044;
                        v1519 = v1107;
                        if ( (unsigned int)v1674 <= 1 )
                          goto LABEL_1430;
                        v1108 = v1675;
                        v1647 = v1675;
                        do
                        {
                          v980 = RtlULongLongAdd((unsigned __int64)v1108, 4LL, (unsigned __int64 *)&v1647);
                          if ( v980 < 0 )
                            goto LABEL_1388;
                          v980 = RtlULongLongAdd((unsigned __int64)v1647, v1109, (unsigned __int64 *)&v1647);
                          if ( v980 < 0 )
                            goto LABEL_1388;
                          v1108 = v1647;
                        }
                        while ( v1110 == -1 );
                        lpModuleNamen = *v1647;
                        v980 = RtlULongLongAdd((unsigned __int64)v1647, 4LL, (unsigned __int64 *)&v1647);
                        if ( v980 < 0 )
                          goto LABEL_1388;
                        if ( !v1675 || (unsigned int)v1674 <= 2 )
                        {
LABEL_1430:
                          v980 = -1073741811;
                          goto LABEL_1388;
                        }
                        v1111 = v1675;
                        v1648 = v1675;
                        do
                        {
                          v980 = RtlULongLongAdd((unsigned __int64)v1111, 4LL, (unsigned __int64 *)&v1648);
                          if ( v980 < 0 )
                            goto LABEL_1388;
                          v980 = RtlULongLongAdd((unsigned __int64)v1648, v1112, (unsigned __int64 *)&v1648);
                          if ( v980 < 0 )
                            goto LABEL_1388;
                          v1111 = v1648;
                        }
                        while ( (unsigned int)(v1113 + 1) < 2 );
                        v980 = RtlULongLongAdd((unsigned __int64)v1648, 4LL, (unsigned __int64 *)&v1648);
                        if ( v980 < 0
                          || (LODWORD(v1580) = 4, v980 = RtlUIntAdd(4u, v1579, (unsigned int *)&v1580), v980 < 0)
                          || (v980 = RtlUIntAdd(v1580, v1114, (unsigned int *)&v1580), v980 < 0)
                          || (v980 = RtlUIntAdd(v1580, lpModuleNamen, (unsigned int *)&v1580), v980 < 0)
                          || (v980 = RtlUIntAdd(v1580, 4, (unsigned int *)&v1580), v980 < 0)
                          || (v980 = RtlUIntAdd(v1580, v1115, (unsigned int *)&v1580), v980 < 0) )
                        {
LABEL_1388:
                          if ( !v944 )
                            goto LABEL_1390;
                          goto LABEL_1389;
                        }
                        v1438 = v1580;
                        if ( (unsigned int)v1580 > 0x400000 )
                        {
                          v980 = -2147418113;
                          goto LABEL_1388;
                        }
                        v1354 = v1116;
                        v1117 = v1580;
                        v1118 = GetProcessHeap();
                        v1119 = (WCHAR *)HeapAlloc(v1118, 8u, v1117);
                        if ( !v1119 )
                        {
LABEL_1453:
                          v980 = -805306345;
                          goto LABEL_1388;
                        }
                        v1420 = v1119;
                        if ( !v1354 )
                        {
                          v980 = -2147024809;
                          v1420 = v1119;
                          v1523 = v1044;
LABEL_1471:
                          v1519 = v1354;
                          goto LABEL_1388;
                        }
                        v1684[0] = v1354;
                        v1685 = v1451;
                        v1684[1] = v1119;
                        v1686 = v1438;
                        v1687 = 0;
                        if ( GetModuleHandleExW(1u, L"ntdll.dll", &hModule)
                          && (ProcAddress = GetProcAddress(hModule, "NtQuerySystemInformation")) != 0LL )
                        {
                          v1123 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(134LL, v1684);
                          v980 = v1123 | 0x10000000;
                          v1121 = v1438;
                          if ( v1123 >= 0 )
                          {
                            v1121 = v1686;
                            v1124 = v944;
                            v1125 = v924;
                            v1126 = v123;
                            v1127 = v1044;
LABEL_1468:
                            v1518 = 0LL;
                            v924 = v1125;
                            v944 = v1124;
                            if ( v1121 < 4 )
                            {
                              v980 = -805306306;
LABEL_1470:
                              v1523 = v1127;
                              goto LABEL_1471;
                            }
                            v1128 = *(unsigned int *)v1420;
                            lpModuleNameo = *(_DWORD *)v1420;
                            v1392 = v1420 + 2;
                            v123 = v1126;
                            if ( v1420 + 2 < v1420 )
                            {
                              v980 = -805306219;
                              goto LABEL_1470;
                            }
                            v1129 = v1354;
                            v1519 = v1354;
                            v1523 = v1044;
                            if ( v1121 - 4 < (unsigned int)v1128 )
                            {
                              v980 = -805306306;
LABEL_1475:
                              v1523 = v1044;
LABEL_1476:
                              v1519 = v1354;
                              goto LABEL_1388;
                            }
                            v1521 = v1128;
                            v1520 = (char *)v1392 + v1128;
                            if ( (LPCWSTR)((char *)v1392 + v1128) < v1392 )
                              goto LABEL_1602;
                            v1130 = v1128 + 4;
                            if ( v1130 < 4 )
                              goto LABEL_1602;
                            if ( v1121 - v1130 < 4 )
                              goto LABEL_1480;
                            v1131 = *(unsigned int *)v1520;
                            v1338 = *(_DWORD *)v1520;
                            v1132 = (char *)v1520 + 4;
                            v1519 = v1354;
                            v1523 = v1044;
                            if ( (char *)v1520 + 4 < v1520 )
                              goto LABEL_1601;
                            v924 = v1125;
                            v1452 = v1130 + 4;
                            if ( v1130 + 4 < v1130 )
                            {
                              v980 = -805306219;
                              v1523 = v1044;
                              goto LABEL_1476;
                            }
                            if ( v1121 - (v1130 + 4) < (unsigned int)v1131 )
                            {
LABEL_1480:
                              v980 = -805306306;
                              goto LABEL_1388;
                            }
                            v1524 = v1131;
                            v1133 = (unsigned int *)&v1132[v1131];
                            v1519 = v1354;
                            v1523 = v1044;
                            if ( &v1132[v1131] < v1132 )
                            {
LABEL_1601:
                              v980 = -805306219;
                              goto LABEL_1388;
                            }
                            v1134 = v1131 + v1452;
                            if ( (unsigned int)v1131 + v1452 < v1452 )
                            {
LABEL_1602:
                              v980 = -805306219;
                              goto LABEL_1475;
                            }
                            if ( v1121 - v1134 < 4 )
                              goto LABEL_1480;
                            v1135 = *v1133;
                            v1439 = *v1133;
                            Srcj = v1133 + 1;
                            v1523 = v1044;
                            if ( v1133 + 1 < v1133 )
                            {
                              v980 = -805306219;
                              goto LABEL_1476;
                            }
                            v1519 = v1354;
                            v1453 = v1134 + 4;
                            if ( v1134 + 4 < v1134 )
                            {
                              v980 = -805306219;
                              goto LABEL_1493;
                            }
                            v1370 = v1354;
                            if ( v1121 - v1453 < v1135 )
                              goto LABEL_1480;
                            v1454 = v1135 + v1453;
                            v1519 = v1354;
                            v1523 = v1044;
                            if ( v1454 < v1134 + 4 )
                            {
                              v980 = -805306219;
                              goto LABEL_1388;
                            }
                            v1405 = (size_t)v944;
                            v1355 = v924;
                            v1490 = (LPCWSTR)v123;
                            v1136 = v1420;
                            if ( v1121 != v1454 )
                            {
LABEL_1492:
                              v980 = -805306306;
                              v1420 = v1136;
LABEL_1493:
                              v1523 = v1044;
                              v1519 = v1129;
                              goto LABEL_1388;
                            }
                            if ( lpModuleNameo + v1135 + (unsigned int)v1131 + 12LL != v1121 )
                            {
                              v1136 = v1420;
                              goto LABEL_1492;
                            }
                            v1137 = GetProcessHeap();
                            v1138 = HeapAlloc(v1137, 8u, 0x30uLL);
                            v1455 = v1138;
                            if ( !v1138 )
                            {
                              v980 = -805306345;
                              v1523 = v1044;
                              v1519 = v1370;
                              goto LABEL_1388;
                            }
                            v1139 = 0;
                            if ( v1420 == (WCHAR *)-4LL )
                            {
                              *v1138 = 0;
                              *((_QWORD *)v1138 + 1) = 0LL;
                              v1142 = Srcj;
                            }
                            else
                            {
                              *v1138 = lpModuleNameo;
                              v1140 = GetProcessHeap();
                              v1141 = HeapAlloc(v1140, 8u, v1521);
                              if ( !v1141 )
                                goto LABEL_1508;
                              v1455[1] = v1141;
                              memcpy_0(v1141, v1392, v1521);
                              v1138 = v1455;
                              v1142 = Srcj;
                            }
                            v1405 = (size_t)v944;
                            v1355 = v924;
                            v1490 = (LPCWSTR)v123;
                            v1523 = v1044;
                            v1455 = v1138;
                            if ( v1520 == (LPVOID)-4LL )
                            {
                              v1138[4] = 0;
                              *((_QWORD *)v1138 + 3) = 0LL;
                              v1146 = (WCHAR *)v1519;
                              v1145 = v1420;
LABEL_1506:
                              if ( v1142 )
                              {
                                v1138[8] = v1439;
                                v1147 = GetProcessHeap();
                                v1148 = HeapAlloc(v1147, 8u, v1439);
                                if ( !v1148 )
                                  goto LABEL_1508;
                                v1455[5] = v1148;
                                v1139 = 0;
                                memcpy_0(v1148, Srcj, v1439);
                                v1138 = v1455;
                                v1145 = v1420;
                                v1523 = v1044;
                                v1490 = (LPCWSTR)v123;
                                v1355 = v924;
                                v1405 = (size_t)v944;
                                v1146 = (WCHAR *)v1519;
                              }
                              else
                              {
                                v1138[8] = 0;
                                *((_QWORD *)v1138 + 5) = 0LL;
                              }
                              v1518 = v1138;
                              goto LABEL_1518;
                            }
                            v1138[4] = v1338;
                            v1143 = GetProcessHeap();
                            v1144 = HeapAlloc(v1143, 8u, v1524);
                            if ( v1144 )
                            {
                              v1455[3] = v1144;
                              v1139 = 0;
                              memcpy_0(v1144, (char *)v1520 + 4, v1524);
                              v1138 = v1455;
                              v1142 = Srcj;
                              v1145 = v1420;
                              v1523 = v1044;
                              v1490 = (LPCWSTR)v123;
                              v1355 = v924;
                              v1405 = (size_t)v944;
                              v1146 = (WCHAR *)v1519;
                              goto LABEL_1506;
                            }
LABEL_1508:
                            v1139 = -1073741801;
                            v1149 = v1455;
                            v1299 = (void *)v1455[1];
                            if ( v1299 )
                            {
                              v1150 = GetProcessHeap();
                              HeapFree(v1150, 0, v1299);
                              v1149 = v1455;
                              v1455[1] = 0LL;
                            }
                            v1300 = (void *)v1149[3];
                            if ( v1300 )
                            {
                              v1151 = GetProcessHeap();
                              HeapFree(v1151, 0, v1300);
                              v1149 = v1455;
                              v1455[3] = 0LL;
                            }
                            v1301 = (void *)v1149[5];
                            if ( v1301 )
                            {
                              v1152 = GetProcessHeap();
                              HeapFree(v1152, 0, v1301);
                              v1455[5] = 0LL;
                            }
                            v1153 = GetProcessHeap();
                            HeapFree(v1153, 0, v1455);
                            v1146 = (WCHAR *)v1519;
                            v1145 = v1420;
                            v1138 = v1518;
LABEL_1518:
                            v1393 = v1146;
                            v1515 = (SIZE_T)v924;
                            v1456 = v1044;
                            v1440 = (SIZE_T)v1145;
                            lpModuleNamep = v1139;
                            v1154 = 0LL;
                            if ( v1139 < 0 )
                            {
                              v1298 = 0LL;
                              v1420 = v1145;
                              v1523 = v1044;
                              v1490 = (LPCWSTR)v123;
                              v1355 = v924;
                              v1405 = (size_t)v944;
                              v1519 = v1146;
                              if ( v1138 )
                              {
                                v1155 = v1518;
                                v1156 = (void *)*((_QWORD *)v1518 + 1);
                                if ( v1156 )
                                {
                                  v1157 = GetProcessHeap();
                                  HeapFree(v1157, 0, v1156);
                                  v1155[1] = 0LL;
                                }
                                v1158 = (void *)v1155[3];
                                if ( v1158 )
                                {
                                  v1159 = GetProcessHeap();
                                  HeapFree(v1159, 0, v1158);
                                  v1155[3] = 0LL;
                                }
                                v1160 = (void *)v1155[5];
                                if ( v1160 )
                                {
                                  v1161 = GetProcessHeap();
                                  HeapFree(v1161, 0, v1160);
                                  v1155[5] = 0LL;
                                }
                                v1162 = GetProcessHeap();
                                HeapFree(v1162, 0, v1155);
                                v1154 = 0LL;
                                v1298 = 0LL;
                                v1420 = (WCHAR *)v1440;
                                v1044 = v1456;
                                v1523 = v1456;
                                v1490 = (LPCWSTR)v123;
                                v924 = (void *)v1515;
                                v1355 = (LPVOID)v1515;
                                v1405 = (size_t)v944;
                                v1139 = lpModuleNamep;
                                v1519 = v1393;
                              }
                            }
                            else
                            {
                              v1154 = v1138;
                              v1298 = v1138;
                            }
                            v980 = v1139 | 0x10000000;
                            if ( v980 < 0 )
                              goto LABEL_1388;
                            if ( !v1154 || (v1394 = (LPCWSTR)*((_QWORD *)v1154 + 1)) == 0LL || !*v1154 )
                            {
                              v980 = -805306355;
                              goto LABEL_1388;
                            }
                            v1163 = *v1154 - 8;
                            v1371 = *v1154 - 8LL;
                            v1164 = MemoryAlloc(v1371);
                            v1484 = v1164;
                            if ( !v1164 )
                            {
LABEL_1559:
                              v1483 = 0LL;
                              v980 = -805306367;
                              goto LABEL_1388;
                            }
                            v1165 = 0;
                            v1735 = 0x7F1137FAB69605ELL;
                            v1166 = (SIZE_T)v1394;
                            v1515 = (SIZE_T)v1394;
                            v1520 = v1164;
                            v1441 = v1163 & 7;
                            v1167 = v1298;
                            if ( (v1163 & 7) != 0 )
                            {
                              lpModuleNameq = 0;
                              v1168 = (unsigned __int8 *)v1515;
                              v1169 = 0;
                              v1170 = 0;
                              do
                              {
                                v1171 = *v1168++;
                                if ( v1169 >= 4 )
                                {
                                  v1170 |= v1171 << v1529;
                                  v1172 = lpModuleNameq;
                                }
                                else
                                {
                                  v1172 = (v1171 << (v1529 - 32)) | lpModuleNameq;
                                  lpModuleNameq = v1172;
                                }
                                ++v1169;
                                v1529 -= 8;
                              }
                              while ( (int)v1169 < v1441 );
                              dwBytes_4 = v1170;
                              v1515 = (SIZE_T)v1168;
                              v1339 = v1172 ^ 0x92F65A5;
                              v1173 = v1170 ^ 0x699A899C;
                              v1174 = v1172 ^ 0x92F65A5;
                              v1175 = v1170 ^ 0x699A899C;
                              v1523 = v1044;
                              v1490 = (LPCWSTR)v123;
                              v1355 = v924;
                              v1405 = (size_t)v944;
                              v1164 = v1484;
                              v111 = v1522;
                              v1176 = v1484;
                              v1177 = 0;
                              do
                              {
                                v1457 = v1176 + 1;
                                if ( v1177 >= 4 )
                                {
                                  v1175 = __ROL4__(v1175, 8);
                                  v1178 = v1175;
                                }
                                else
                                {
                                  v1174 = __ROL4__(v1174, 8);
                                  v1178 = v1174;
                                }
                                *v1176 = v1178;
                                ++v1177;
                                ++v1176;
                              }
                              while ( v1177 < v1441 );
                              v1520 = v1457;
                              v1165 = 0;
                              v1044 = (const void **)v1523;
                              v1167 = v1298;
                              v1179 = v1339;
                              if ( (unsigned int)v1441 <= 4 )
                              {
                                v1340 = 0;
                                if ( (unsigned int)v1441 < 4 )
                                  v1179 = v1179 >> (8 * (4 - v1441)) << (8 * (4 - v1441));
                              }
                              else
                              {
                                v1340 = v1173 >> (8 * (8 - v1441)) << (8 * (8 - v1441));
                              }
                              v1166 = v1515;
                            }
                            else
                            {
                              lpModuleNameq = 0;
                              v1340 = 0;
                              v1179 = 0;
                            }
                            v1180 = v1371;
                            v1515 = v1371 >> 3;
                            if ( v1371 >> 3 )
                            {
                              v1181 = HIDWORD(v1735);
                              v1182 = HIDWORD(v1735) ^ 0xAB69605E;
                              v1458 = WORD2(v1735);
                              v1442 = WORD1(v1735);
                              LODWORD(v1518) = 24670;
                              LODWORD(v1521) = HIWORD(v1735);
                              v1183 = (char *)v1520 + 7;
                              v1184 = (unsigned __int8 *)(v1166 + 2);
                              v1185 = v1340;
                              v1186 = lpModuleNameq;
                              v1187 = v1515;
                              do
                              {
                                v1188 = v1184[1] | ((*v1184 | ((*(v1184 - 1) | (*(v1184 - 2) << 8)) << 8)) << 8);
                                v1189 = v1184[5] | ((v1184[4] | ((v1184[3] | (v1184[2] << 8)) << 8)) << 8);
                                v1190 = v1188 ^ v1179;
                                v1184 += 8;
                                v1191 = v1190 ^ v1182 ^ v1189 ^ v1185;
                                v1192 = (__ROL4__(v1191 + 1419157410, 5) * v1458 + __ROL4__(v1191, 10)) ^ v1190;
                                v1193 = (__ROR4__(v1192 + v1181, 9) * WORD1(v1735) - __ROL4__(v1192, 2)) ^ v1191;
                                v1194 = ((_DWORD)v1518 * (v1193 - v1458) - (v1193 >> 13)) ^ v1192;
                                v1195 = (__ROL4__(v1194 ^ WORD1(v1735), 6) * HIWORD(v1735) - __ROL4__(v1194, 2)) ^ v1193;
                                v1196 = (v1181 - (v1195 ^ 0xAB69605E)) ^ v1194;
                                v1197 = (WORD1(v1735) * (v1196 ^ v1458)) ^ __ROR4__(v1196, 6) ^ v1195;
                                v1198 = (__ROR4__(v1197 + v1181, 15) * (_DWORD)v1518 + __ROL4__(v1197, 2)) ^ v1196;
                                v1199 = (__ROR4__(v1198 + 1419157410, 14) * HIWORD(v1735) - __ROL4__(v1198, 8)) ^ v1197;
                                v1200 = (__ROR4__(v1199 ^ 0xAB69605E, 12) * v1458) ^ __ROR4__(v1199, 10) ^ v1198;
                                v1201 = (v1200 >> 10) ^ (WORD1(v1735) * (v1200 ^ HIWORD(v1735))) ^ v1199;
                                v1202 = (HIWORD(v1735) * ((_DWORD)v1518 + __ROR4__(~v1201, 5))) ^ v1200;
                                v1203 = (v1202 - HIWORD(v1735)) ^ 0xAB69605E ^ v1201;
                                v1204 = ((v1203 >> 2) + v1458 * __ROL4__(v1203 ^ HIWORD(v1735), 2)) ^ v1202;
                                v1205 = (v1442 * __ROR4__(v1204 - v1181, 6) + __ROL4__(v1204, 7)) ^ v1203;
                                v1206 = ((_DWORD)v1518 * (v1205 ^ v1458) + __ROR4__(v1205, 9)) ^ v1204;
                                v1207 = (v1521 * __ROL4__(v1206 ^ WORD1(v1735), 5) + __ROL4__(v1206, 7)) ^ v1205;
                                v1208 = v1207 ^ v1182 ^ v1206;
                                v1209 = (v1458 * (__ROR4__(v1208, 3) - WORD1(v1735))) ^ v1207;
                                v1210 = ((_DWORD)v1518 * __ROR4__(v1209 - v1181, 1) - __ROR4__(v1209, 6)) ^ v1208;
                                v1211 = (v1521 * __ROL4__(v1210 - 1419157410, 3) + __ROL4__(v1210, 14)) ^ v1209;
                                v1212 = (v1458 * __ROL4__(v1211 - 1419157410, 15) - __ROR4__(v1211, 14)) ^ v1210;
                                v1213 = (v1212 >> 3) ^ (WORD1(v1735) * (v1212 ^ (unsigned int)v1518)) ^ v1211;
                                v1214 = v1186 ^ ((_DWORD)v1518 * __ROL4__(v1213 ^ v1181, 4)) ^ __ROL4__(v1213, 2) ^ v1212;
                                v1215 = dwBytes_4 ^ v1213;
                                *(v1183 - 4) = v1214;
                                v1216 = __ROR4__(v1214, 8);
                                *v1183 = v1215;
                                v1217 = __ROR4__(v1215, 8);
                                *(v1183 - 5) = v1216;
                                v1218 = __ROR4__(v1216, 8);
                                *(v1183 - 1) = v1217;
                                v1219 = __ROR4__(v1217, 8);
                                *(v1183 - 6) = v1218;
                                v1220 = __ROR4__(v1218, 8);
                                *(v1183 - 2) = v1219;
                                v1221 = __ROR4__(v1219, 8);
                                *(v1183 - 7) = v1220;
                                *(v1183 - 3) = v1221;
                                v1179 = __ROR4__(v1220, 8);
                                v1185 = __ROR4__(v1221, 8);
                                v1186 = v1188;
                                dwBytes_4 = v1189;
                                v1183 += 8;
                                --v1187;
                              }
                              while ( v1187 );
                              v1165 = 0;
                              v111 = v1522;
                              v924 = v1355;
                              v123 = (__int64)v1490;
                              v944 = (unsigned __int8 *)v1405;
                              v1044 = (const void **)v1523;
                              v1167 = v1298;
                              v1164 = v1484;
                              v1180 = v1371;
                            }
                            for ( k = 0LL; k < v1180; ++k )
                              v1165 ^= *((_BYTE *)v1164 + k);
                            v1356 = v1519;
                            v1223 = v1167;
                            v1523 = v1044;
                            v1298 = v1167;
                            if ( v1165 != *(_QWORD *)((char *)v1394 + v1180) )
                            {
                              MemoryFree(v1164);
                              goto LABEL_1559;
                            }
                            v1581 = 0;
                            v1650 = v1164;
                            if ( (unsigned int)v1180 >= 4 )
                            {
                              lpModuleNamer = *v1164;
                              v1224 = RtlULongLongAdd((unsigned __int64)v1164, 4LL, (unsigned __int64 *)&v1650);
                              v1483 = v1225;
                              v1298 = v1226;
                              v1523 = v1044;
                              v1519 = v1356;
                              if ( v1224 < 0 )
                                goto LABEL_1596;
                              v1224 = RtlUIntAdd(0, 4, &v1581);
                              v1483 = v1164;
                              v1298 = v1223;
                              v1523 = v1044;
                              v1227 = v1356;
                              v1519 = v1356;
                              if ( v1224 < 0 )
                                goto LABEL_1596;
                              if ( (unsigned int)v1371 - v1581 < 4 )
                                goto LABEL_1564;
                              v1341 = *(_DWORD *)v1650;
                              v1224 = RtlULongLongAdd((unsigned __int64)v1650, 4LL, (unsigned __int64 *)&v1650);
                              v1483 = v1228;
                              v1298 = v1229;
                              v1523 = v1044;
                              v1519 = v1356;
                              if ( v1224 < 0 )
                                goto LABEL_1596;
                              v1224 = RtlUIntAdd(v1581, 4, &v1581);
                              v1483 = v1164;
                              v1298 = v1223;
                              v1523 = v1044;
                              v1227 = v1356;
                              v1519 = v1356;
                              if ( v1224 < 0 )
                                goto LABEL_1596;
                              if ( (unsigned int)v1371 - v1581 < v1341 )
                              {
LABEL_1564:
                                v1519 = v1227;
LABEL_1594:
                                v1523 = v1044;
                                v1298 = v1223;
                                v1483 = v1164;
                                goto LABEL_1595;
                              }
                              v1224 = RtlUIntAdd(v1581, v1341, &v1581);
                              v1483 = v1164;
                              v1298 = v1223;
                              v1523 = v1044;
                              v1519 = v1356;
                              if ( v1224 < 0 )
                                goto LABEL_1596;
                              if ( (char *)v1164 + (unsigned int)v1371 >= (char *)v1650 + v1341
                                && (unsigned __int64)v1164
                                 + (unsigned int)v1371
                                 - (unsigned __int64)v1341
                                 - (_QWORD)v1650 < 8 )
                              {
                                v1224 = 0;
                                v1459 = 0;
                                v1483 = v1164;
                                v1298 = v1223;
                                v1523 = v1044;
                                v1519 = v1356;
                                if ( !v1650 )
                                {
LABEL_1583:
                                  if ( v1341 )
                                  {
                                    v1239 = GetProcessHeap();
                                    v1240 = v1341;
                                    v1241 = HeapAlloc(v1239, 8u, v1341);
                                    v1224 = 0;
                                    if ( !v1241 )
                                    {
                                      v1224 = -1073741801;
                                      goto LABEL_1596;
                                    }
                                  }
                                  else
                                  {
                                    v1240 = 0LL;
                                    v1241 = 0LL;
                                  }
                                  if ( v1650 )
                                    memcpy_0(v1241, v1650, v1240);
                                  v1678[1] = v1241;
                                  LODWORD(v1678[0]) = v1459;
                                  if ( lpModuleNamer == v1459 )
                                    goto LABEL_1596;
LABEL_1595:
                                  v1224 = -1073741762;
                                  goto LABEL_1596;
                                }
                                v1518 = v1650;
                                v1224 = RtlULongLongAdd((unsigned __int64)v1650, v1341, (unsigned __int64 *)&v1651);
                                v1483 = v1230;
                                v1298 = v1231;
                                v1523 = v1044;
                                v1519 = v1356;
                                if ( v1224 >= 0 )
                                {
                                  v1483 = v1230;
                                  v1298 = v1231;
                                  v1523 = v1044;
                                  v1519 = v1356;
                                  v1232 = v1518;
                                  if ( v1518 < v1651 )
                                  {
                                    v1233 = v1230;
                                    v1483 = v1230;
                                    v1298 = v1231;
                                    v1234 = (SIZE_T)v1420;
                                    v1523 = v1044;
                                    v1519 = v1356;
                                    while ( 1 )
                                    {
                                      v1521 = v1234;
                                      v1520 = v1231;
                                      v1224 = RtlULongLongAdd((unsigned __int64)v1232, 4LL, (unsigned __int64 *)&v1652);
                                      if ( v1224 < 0 )
                                        goto LABEL_1596;
                                      if ( v1652 > v1651 )
                                        goto LABEL_1587;
                                      v1224 = RtlUIntAdd(v1236, *v1235, &v1582);
                                      if ( v1224 < 0 )
                                        goto LABEL_1596;
                                      v1224 = RtlULongLongAdd(
                                                (unsigned __int64)v1518,
                                                v1582,
                                                (unsigned __int64 *)&v1653);
                                      v1483 = v1233;
                                      v1298 = v1238;
                                      v1234 = v1521;
                                      v1420 = (WCHAR *)v1521;
                                      v1523 = v1044;
                                      v1519 = v1237;
                                      if ( v1224 < 0 )
                                        goto LABEL_1596;
                                      v1232 = v1653;
                                      v1518 = v1653;
                                      v1483 = v1233;
                                      v1523 = v1044;
                                      v1519 = v1237;
                                      if ( v1653 > v1651 )
                                      {
                                        v1224 = -1073741811;
                                        v1298 = v1520;
                                        v1420 = (WCHAR *)v1521;
                                        goto LABEL_1596;
                                      }
                                      ++v1459;
                                      v1231 = v1520;
                                      v1298 = v1520;
                                      v1420 = (WCHAR *)v1521;
                                      if ( v1653 >= v1651 )
                                      {
                                        v1483 = v1233;
                                        v1298 = v1520;
                                        v1420 = (WCHAR *)v1521;
                                        v1523 = v1044;
                                        v1519 = v1237;
                                        break;
                                      }
                                    }
                                  }
                                  if ( v1232 != v1651 )
                                  {
LABEL_1587:
                                    v1224 = -1073741811;
                                    goto LABEL_1596;
                                  }
                                  goto LABEL_1583;
                                }
LABEL_1596:
                                v980 = v1224 | 0x10000000;
                                goto LABEL_1388;
                              }
                            }
                            v1519 = v1356;
                            goto LABEL_1594;
                          }
                        }
                        else
                        {
                          v1120 = GetLastError();
                          v980 = v1120;
                          if ( v1120 > 0 )
                            v980 = (unsigned __int16)v1120 | 0x80070000;
                          if ( v980 >= 0 )
                            v980 = -2147467259;
                          v1121 = v1438;
                        }
                        v1519 = v1354;
                        if ( v980 == -805306333 )
                        {
                          v980 = -2147024774;
                          v1523 = v1044;
                          goto LABEL_1388;
                        }
                        v1127 = v1044;
                        v1523 = v1044;
                        v1126 = v123;
                        v1125 = v924;
                        v1124 = v944;
                        if ( v980 < 0 )
                          goto LABEL_1388;
                        goto LABEL_1468;
                      }
                    }
                  }
                }
LABEL_1605:
                v1674 = 0LL;
                v1242 = v1675;
                if ( v1675 )
                {
                  v1243 = GetProcessHeap();
                  HeapFree(v1243, 0, v1242);
                  v1675 = 0LL;
                }
                v1678[0] = 0LL;
                v1244 = v1678[1];
                if ( v1678[1] )
                {
                  v1245 = GetProcessHeap();
                  HeapFree(v1245, 0, v1244);
                  v1678[1] = 0LL;
                }
                if ( v924 )
                {
                  v1246 = GetProcessHeap();
                  HeapFree(v1246, 0, v924);
                }
                if ( v123 )
                {
                  v1247 = GetProcessHeap();
                  HeapFree(v1247, 0, (LPVOID)v123);
                }
                goto LABEL_1613;
              }
              g_WarbirdPaintInitTime = ((__int64 (*)(void))off_180985198)();
              v489 = g_WarbirdNotificationInformation;
              Srcf = g_WarbirdNotificationInformation;
              memset_0(&v1717, 0, 0x70uLL);
              v1739 = 0LL;
              v1523 = 0LL;
              v1753 = 0LL;
              v1754 = 0LL;
              v1755 = 0LL;
              v1756 = 0;
              v1519 = 0LL;
              while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                ;
              v490 = g_WarbirdSecureFunctionsRefCount;
              v491 = 0;
              if ( !g_WarbirdSecureFunctionsRefCount )
              {
                v1468 = 0;
                v1512 = 0;
                v492 = (char *)MemoryAlloc(0x338uLL);
                v1407 = (WCHAR *)v492;
                if ( !v492 )
                  goto LABEL_647;
                v493 = -1;
                v494 = 0;
                v495 = v492 + 7;
                v496 = (unsigned __int8 *)&unk_180832662;
                v497 = 103LL;
                do
                {
                  v498 = v496[1] | ((*v496 | ((*(v496 - 1) | (*(v496 - 2) << 8)) << 8)) << 8);
                  v499 = v496[5] | ((v496[4] | ((v496[3] | (v496[2] << 8)) << 8)) << 8);
                  v500 = v498 ^ v491;
                  v496 += 8;
                  v501 = v499 ^ v500 ^ v494 ^ 0xAC987321;
                  v502 = (4991 * __ROL4__(v501 + 1419157410, 5) + __ROL4__(v501, 10)) ^ v500;
                  v503 = (43881 * __ROR4__(v502 + 133239679, 9) - __ROL4__(v502, 2)) ^ v501;
                  v504 = (24670 * v503 - (v503 >> 13) - 123127970) ^ v502;
                  v505 = (2033 * __ROL4__(v504 ^ 0xAB69, 6) - __ROL4__(v504, 2)) ^ v503;
                  v506 = (133239679 - (v505 ^ 0xAB69605E)) ^ v504;
                  v507 = (43881 * (v506 ^ 0x137F)) ^ __ROR4__(v506, 6) ^ v505;
                  v508 = (24670 * __ROR4__(v507 + 133239679, 15) + __ROL4__(v507, 2)) ^ v506;
                  v509 = (2033 * __ROR4__(v508 + 1419157410, 14) - __ROL4__(v508, 8)) ^ v507;
                  v510 = (4991 * __ROR4__(v509 ^ 0xAB69605E, 12)) ^ __ROR4__(v509, 10) ^ v508;
                  v511 = (v510 >> 10) ^ (43881 * (v510 ^ 0x7F1)) ^ v509;
                  v512 = (2033 * (__ROR4__(~v511, 5) + 24670)) ^ v510;
                  v513 = v511 ^ (v512 - 2033) ^ 0xAB69605E;
                  v514 = (4991 * __ROL4__(v511 ^ (v512 - 2033) ^ 0xAB6967AF, 2) + (v513 >> 2)) ^ v512;
                  v515 = (43881 * __ROR4__(v514 - 133239679, 6) + __ROL4__(v514, 7)) ^ v513;
                  v516 = (24670 * (v515 ^ 0x137F) + __ROR4__(v515, 9)) ^ v514;
                  v517 = (2033 * __ROL4__(v516 ^ 0xAB69, 5) + __ROL4__(v516, 7)) ^ v515;
                  v518 = v517 ^ v516 ^ 0xAC987321;
                  v519 = (4991 * __ROR4__(v518, 3) - 219010071) ^ v517;
                  v520 = (24670 * __ROR4__(v519 - 133239679, 1) - __ROR4__(v519, 6)) ^ v518;
                  v521 = (2033 * __ROL4__(v520 - 1419157410, 3) + __ROL4__(v520, 14)) ^ v519;
                  v522 = (4991 * __ROL4__(v521 - 1419157410, 15) - __ROR4__(v521, 14)) ^ v520;
                  v523 = (v522 >> 3) ^ (43881 * (v522 ^ 0x605E)) ^ v521;
                  v524 = (24670 * __ROL4__(v523 ^ 0x7F1137F, 4)) ^ __ROL4__(v523, 2) ^ v522 ^ v123;
                  v525 = v493 ^ v523;
                  *(v495 - 4) = v524;
                  v526 = __ROR4__(v524, 8);
                  *v495 = v525;
                  v527 = __ROR4__(v525, 8);
                  *(v495 - 5) = v526;
                  v528 = __ROR4__(v526, 8);
                  *(v495 - 1) = v527;
                  v529 = __ROR4__(v527, 8);
                  *(v495 - 6) = v528;
                  v530 = __ROR4__(v528, 8);
                  *(v495 - 2) = v529;
                  v531 = __ROR4__(v529, 8);
                  *(v495 - 7) = v530;
                  *(v495 - 3) = v531;
                  v491 = __ROR4__(v530, 8);
                  v494 = __ROR4__(v531, 8);
                  LODWORD(v123) = v498;
                  v493 = v499;
                  v495 += 8;
                  --v497;
                }
                while ( v497 );
                v491 = 0;
                v532 = 0LL;
                v533 = 0;
                v489 = Srcf;
                v534 = v1407;
                v535 = 0;
                do
                  v533 ^= *((_BYTE *)v1407 + v532++);
                while ( v532 < 0x338 );
                if ( v533 != 64LL )
                {
                  MemoryFree(v1407);
LABEL_647:
                  v536 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                  v537 = 4LL;
                  do
                  {
                    if ( *v536 )
                      FreeLibrary(*v536);
                    v536 += 3;
                    --v537;
                  }
                  while ( v537 );
                  memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                  memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_681:
                  _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                  v1469 = 0;
                  LODWORD(v1516) = 0;
                  v1627 = 0LL;
                  v1289 = 0LL;
                  v1676 = 0LL;
                  while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                    ;
                  v549 = g_WarbirdSecureFunctionsRefCount;
                  if ( !g_WarbirdSecureFunctionsRefCount )
                  {
                    v1513 = 0;
                    ii = 0;
                    Sizee = 0;
                    v550 = (char *)MemoryAlloc(0x338uLL);
                    v1384 = (WCHAR *)v550;
                    if ( !v550 )
                      goto LABEL_691;
                    v551 = 0;
                    LODWORD(v1517) = -1;
                    v552 = 0;
                    v553 = v550 + 7;
                    v554 = (unsigned __int8 *)&unk_180832662;
                    v555 = 103LL;
                    v556 = -1;
                    do
                    {
                      v557 = v554[1] | ((*v554 | ((*(v554 - 1) | (*(v554 - 2) << 8)) << 8)) << 8);
                      v558 = v554[5] | ((v554[4] | ((v554[3] | (v554[2] << 8)) << 8)) << 8);
                      v559 = v557 ^ v491;
                      v554 += 8;
                      v560 = v559 ^ v552 ^ v558 ^ 0xAC987321;
                      v561 = (4991 * __ROL4__(v560 + 1419157410, 5) + __ROL4__(v560, 10)) ^ v559;
                      v562 = (43881 * __ROR4__(v561 + 133239679, 9) - __ROL4__(v561, 2)) ^ v560;
                      v563 = (24670 * v562 - (v562 >> 13) - 123127970) ^ v561;
                      v564 = (2033 * __ROL4__(v563 ^ 0xAB69, 6) - __ROL4__(v563, 2)) ^ v562;
                      v565 = (133239679 - (v564 ^ 0xAB69605E)) ^ v563;
                      v566 = (43881 * (v565 ^ 0x137F)) ^ __ROR4__(v565, 6) ^ v564;
                      v567 = (24670 * __ROR4__(v566 + 133239679, 15) + __ROL4__(v566, 2)) ^ v565;
                      v568 = (2033 * __ROR4__(v567 + 1419157410, 14) - __ROL4__(v567, 8)) ^ v566;
                      v569 = (4991 * __ROR4__(v568 ^ 0xAB69605E, 12)) ^ __ROR4__(v568, 10) ^ v567;
                      v570 = (v569 >> 10) ^ (43881 * (v569 ^ 0x7F1)) ^ v568;
                      v571 = (2033 * (__ROR4__(~v570, 5) + 24670)) ^ v569;
                      v572 = v570 ^ (v571 - 2033) ^ 0xAB69605E;
                      v573 = (4991 * __ROL4__(v570 ^ (v571 - 2033) ^ 0xAB6967AF, 2) + (v572 >> 2)) ^ v571;
                      v574 = (43881 * __ROR4__(v573 - 133239679, 6) + __ROL4__(v573, 7)) ^ v572;
                      v575 = (24670 * (v574 ^ 0x137F) + __ROR4__(v574, 9)) ^ v573;
                      v576 = (2033 * __ROL4__(v575 ^ 0xAB69, 5) + __ROL4__(v575, 7)) ^ v574;
                      v577 = v575 ^ v576 ^ 0xAC987321;
                      v578 = (4991 * __ROR4__(v577, 3) - 219010071) ^ v576;
                      v579 = (24670 * __ROR4__(v578 - 133239679, 1) - __ROR4__(v578, 6)) ^ v577;
                      v580 = (2033 * __ROL4__(v579 - 1419157410, 3) + __ROL4__(v579, 14)) ^ v578;
                      v581 = (4991 * __ROL4__(v580 - 1419157410, 15) - __ROR4__(v580, 14)) ^ v579;
                      v582 = (v581 >> 3) ^ (43881 * (v581 ^ 0x605E)) ^ v580;
                      v583 = (24670 * __ROL4__(v582 ^ 0x7F1137F, 4)) ^ __ROL4__(v582, 2) ^ v581 ^ v551;
                      v584 = v556 ^ v582;
                      *(v553 - 4) = v583;
                      v585 = __ROR4__(v583, 8);
                      *v553 = v584;
                      v586 = __ROR4__(v584, 8);
                      *(v553 - 5) = v585;
                      v587 = __ROR4__(v585, 8);
                      *(v553 - 1) = v586;
                      v588 = __ROR4__(v586, 8);
                      *(v553 - 6) = v587;
                      v589 = __ROR4__(v587, 8);
                      *(v553 - 2) = v588;
                      v590 = __ROR4__(v588, 8);
                      *(v553 - 7) = v589;
                      *(v553 - 3) = v590;
                      v491 = __ROR4__(v589, 8);
                      v552 = __ROR4__(v590, 8);
                      v551 = v557;
                      v556 = v558;
                      v553 += 8;
                      --v555;
                    }
                    while ( v555 );
                    v591 = 0LL;
                    v592 = 0;
                    v489 = Srcf;
                    v111 = v1522;
                    v593 = v1384;
                    v594 = 0;
                    do
                      v592 ^= *((_BYTE *)v1384 + v591++);
                    while ( v591 < 0x338 );
                    if ( v592 != 64LL )
                    {
                      MemoryFree(v1384);
LABEL_691:
                      v595 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                      v596 = 4LL;
                      do
                      {
                        if ( *v595 )
                          FreeLibrary(*v595);
                        v595 += 3;
                        --v596;
                      }
                      while ( v596 );
                      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                      memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
LABEL_724:
                      v123 = 0LL;
                      _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                      memset_0(&v1717, 0, 0x70uLL);
                      v1739 = 0LL;
                      v608 = v489 & 0xF;
                      Srch = v608;
                      v1793[0] = (v489 >> 4) & 0xF;
                      v1793[1] = (v489 >> 8) & 0xF;
                      v1793[2] = (v489 >> 12) & 0xF;
                      v1385 = (LPCWSTR)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(
                                         0LL,
                                         0LL,
                                         1027LL);
                      v1514 = -1;
                      if ( !v1385 )
                      {
                        v609 = GetLastError();
                        v610 = v609;
                        if ( v609 > 0 )
                          v610 = (unsigned __int16)v609 | 0x80070000;
                        if ( v610 >= 0 )
                          v610 = -2147467259;
LABEL_856:
                        while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                          ;
                        v708 = g_WarbirdSecureFunctionsRefCount;
                        if ( g_WarbirdSecureFunctionsRefCount > 0 )
                        {
                          --g_WarbirdSecureFunctionsRefCount;
                          if ( v708 == 1 )
                          {
                            v709 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                            v123 = 4LL;
                            do
                            {
                              if ( *v709 )
                                FreeLibrary(*v709);
                              v709 += 3;
                              --v123;
                            }
                            while ( v123 );
                            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                            memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                          }
                        }
                        _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                        SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1627);
                        if ( v610 < 0 )
                        {
LABEL_1024:
                          if ( v1719 )
                          {
                            v768 = -1LL;
                            do
                              ++v768;
                            while ( *((_WORD *)v1719 + v768) );
                            memset(v1719, 0, 2 * v768 + 2);
                            MemoryFree(v1719);
                            v1719 = 0LL;
                          }
                          if ( v1720 )
                          {
                            v769 = -1LL;
                            do
                              ++v769;
                            while ( *((_WORD *)v1720 + v769) );
                            memset(v1720, 0, 2 * v769 + 2);
                            MemoryFree(v1720);
                            v1720 = 0LL;
                          }
                          if ( v1721 )
                          {
                            v770 = -1LL;
                            do
                              ++v770;
                            while ( *((_WORD *)v1721 + v770) );
                            memset(v1721, 0, 2 * v770 + 2);
                            MemoryFree(v1721);
                            v1721 = 0LL;
                          }
                          if ( v1722 )
                          {
                            ((void (*)(void))off_180985138)();
                            v1722 = 0LL;
                          }
                          if ( v1723 )
                          {
                            ((void (*)(void))off_180985138)();
                            v1723 = 0LL;
                          }
                          if ( v1724 )
                          {
                            ((void (*)(void))off_180985138)();
                            v1724 = 0LL;
                          }
                          while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                            ;
                          v771 = g_WarbirdSecureFunctionsRefCount;
                          if ( g_WarbirdSecureFunctionsRefCount > 0 )
                          {
                            --g_WarbirdSecureFunctionsRefCount;
                            if ( v771 == 1 )
                            {
                              v772 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                              v773 = 4LL;
                              do
                              {
                                if ( *v772 )
                                  FreeLibrary(*v772);
                                v772 += 3;
                                --v773;
                              }
                              while ( v773 );
                              memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                              memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                            }
                          }
                          _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                          lpModuleNamee = g_WarbirdNotificationInformation;
                          v774 = ((__int64 (*)(void))off_180985198)() - g_WarbirdPaintInitTime;
                          v1342 = v774;
                          v1788 = 0LL;
                          v1789 = 0LL;
                          v1790 = 0LL;
                          v1791 = 0LL;
                          while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                            ;
                          v775 = g_WarbirdSecureFunctionsRefCount;
                          if ( !g_WarbirdSecureFunctionsRefCount )
                          {
                            v1327 = 0;
                            v1436 = 0;
                            v776 = (char *)MemoryAlloc(0x338uLL);
                            v1487 = (WCHAR *)v776;
                            if ( !v776 )
                              goto LABEL_1061;
                            v777 = 0;
                            v778 = -1;
                            v779 = 0;
                            v780 = 0;
                            v781 = v776 + 7;
                            v782 = (unsigned __int8 *)&unk_180832662;
                            v783 = 103LL;
                            do
                            {
                              v784 = v782[1] | ((*v782 | ((*(v782 - 1) | (*(v782 - 2) << 8)) << 8)) << 8);
                              v785 = v782[5] | ((v782[4] | ((v782[3] | (v782[2] << 8)) << 8)) << 8);
                              v786 = v784 ^ v780;
                              v782 += 8;
                              v787 = v786 ^ v779 ^ v785 ^ 0xAC987321;
                              v788 = (4991 * __ROL4__(v787 + 1419157410, 5) + __ROL4__(v787, 10)) ^ v786;
                              v789 = (43881 * __ROR4__(v788 + 133239679, 9) - __ROL4__(v788, 2)) ^ v787;
                              v790 = (24670 * v789 - (v789 >> 13) - 123127970) ^ v788;
                              v791 = (2033 * __ROL4__(v790 ^ 0xAB69, 6) - __ROL4__(v790, 2)) ^ v789;
                              v792 = (133239679 - (v791 ^ 0xAB69605E)) ^ v790;
                              v793 = (43881 * (v792 ^ 0x137F)) ^ __ROR4__(v792, 6) ^ v791;
                              v794 = (24670 * __ROR4__(v793 + 133239679, 15) + __ROL4__(v793, 2)) ^ v792;
                              v795 = (2033 * __ROR4__(v794 + 1419157410, 14) - __ROL4__(v794, 8)) ^ v793;
                              v796 = (4991 * __ROR4__(v795 ^ 0xAB69605E, 12)) ^ __ROR4__(v795, 10) ^ v794;
                              v797 = v795 ^ (v796 >> 10) ^ (43881 * (v796 ^ 0x7F1));
                              v798 = (2033 * (__ROR4__(~v797, 5) + 24670)) ^ v796;
                              v799 = v797 ^ (v798 - 2033) ^ 0xAB69605E;
                              v800 = ((v799 >> 2) + 4991 * __ROL4__(v797 ^ (v798 - 2033) ^ 0xAB6967AF, 2)) ^ v798;
                              v801 = (43881 * __ROR4__(v800 - 133239679, 6) + __ROL4__(v800, 7)) ^ v799;
                              v802 = (24670 * (v801 ^ 0x137F) + __ROR4__(v801, 9)) ^ v800;
                              v803 = (2033 * __ROL4__(v802 ^ 0xAB69, 5) + __ROL4__(v802, 7)) ^ v801;
                              v804 = v803 ^ v802 ^ 0xAC987321;
                              v805 = (4991 * __ROR4__(v804, 3) - 219010071) ^ v803;
                              v806 = (24670 * __ROR4__(v805 - 133239679, 1) - __ROR4__(v805, 6)) ^ v804;
                              v807 = (2033 * __ROL4__(v806 - 1419157410, 3) + __ROL4__(v806, 14)) ^ v805;
                              v808 = (4991 * __ROL4__(v807 - 1419157410, 15) - __ROR4__(v807, 14)) ^ v806;
                              v809 = (v808 >> 3) ^ (43881 * (v808 ^ 0x605E)) ^ v807;
                              v810 = v777 ^ (24670 * __ROL4__(v809 ^ 0x7F1137F, 4)) ^ __ROL4__(v809, 2) ^ v808;
                              v811 = v778 ^ v809;
                              *(v781 - 4) = v810;
                              v812 = __ROR4__(v810, 8);
                              *v781 = v811;
                              v813 = __ROR4__(v811, 8);
                              *(v781 - 5) = v812;
                              v814 = __ROR4__(v812, 8);
                              *(v781 - 1) = v813;
                              v815 = __ROR4__(v813, 8);
                              *(v781 - 6) = v814;
                              v816 = __ROR4__(v814, 8);
                              *(v781 - 2) = v815;
                              v817 = __ROR4__(v815, 8);
                              *(v781 - 7) = v816;
                              *(v781 - 3) = v817;
                              v780 = __ROR4__(v816, 8);
                              v779 = __ROR4__(v817, 8);
                              v777 = v784;
                              v778 = v785;
                              v781 += 8;
                              --v783;
                            }
                            while ( v783 );
                            v818 = 0LL;
                            v819 = 0;
                            v820 = v1487;
                            v821 = 0;
                            do
                              v819 ^= *((_BYTE *)v1487 + v818++);
                            while ( v818 < 0x338 );
                            if ( v819 != 64LL )
                            {
                              MemoryFree(v1487);
LABEL_1060:
                              v774 = v1342;
LABEL_1061:
                              v822 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                              v823 = 4LL;
                              v123 = 0LL;
                              do
                              {
                                if ( *v822 )
                                  FreeLibrary(*v822);
                                v822 += 3;
                                --v823;
                              }
                              while ( v823 );
                              memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                              memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                              goto LABEL_1248;
                            }
                            *((_BYTE *)v1487 + 823) = 0;
                            memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                            if ( !*(_BYTE *)v1487 )
                              goto LABEL_1244;
                            while ( 1 )
                            {
                              v910 = v820;
                              v911 = -1LL;
                              do
                                ++v911;
                              while ( v820[v911] );
                              v912 = &v820[v911];
                              v913 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1436;
                              if ( !GetModuleHandleExW(0, v910, (HMODULE *)v913) )
                                break;
                              v821 = 0;
                              if ( **(_WORD **)v913 == 23117
                                && (v914 = *(int *)(*(_QWORD *)v913 + 60LL), (unsigned int)v914 < 0x10000000)
                                && (v915 = *(_QWORD *)v913 + v914, v915 >= *(_QWORD *)v913)
                                && *(_DWORD *)v915 == 17744 )
                              {
                                if ( ((*(_WORD *)(v915 + 24) - 267) & 0xFEFF) != 0 )
                                {
                                  v821 = -1073741811;
                                }
                                else
                                {
                                  *(_QWORD *)(v913 + 12) = *(_QWORD *)(v915 + 136);
                                  *((_DWORD *)v913 + 2) = *(_DWORD *)(v915 + 80);
                                }
                              }
                              else
                              {
                                v821 = -1073741701;
                              }
                              v1450 = *(_DWORD *)(v912 + 1);
                              v820 = v912 + 3;
                              v916 = 0;
                              for ( LODWORD(v1518) = 0; v916 < v1450; LODWORD(v1518) = v916 )
                              {
                                v917 = (const CHAR *)v820;
                                v918 = -1LL;
                                do
                                  ++v918;
                                while ( *((_BYTE *)v820 + v918) );
                                v820 = (WCHAR *)((char *)v820 + v918 + 1);
                                if ( v821 >= 0 )
                                {
                                  v919 = (void **)GetProcAddress(*(HMODULE *)v913, v917);
                                  if ( !v919 )
                                    goto LABEL_1243;
                                  (&WARBIRD::g_FuncAddress)[v1327] = v919;
                                  v916 = (unsigned int)v1518;
                                }
                                ++v1327;
                                ++v916;
                              }
                              ++v1436;
                              if ( !*(_BYTE *)v820 )
                                goto LABEL_1243;
                            }
                            v821 = -1073741702;
LABEL_1243:
                            if ( v1487 )
                            {
LABEL_1244:
                              v920 = GetProcessHeap();
                              HeapFree(v920, 0, v1487);
                            }
                            if ( v821 < 0 )
                              goto LABEL_1060;
                            v775 = g_WarbirdSecureFunctionsRefCount;
                            v774 = v1342;
                            v123 = 0LL;
                          }
                          g_WarbirdSecureFunctionsRefCount = v775 + 1;
LABEL_1248:
                          _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                          LODWORD(v1788) = v774;
                          v1787 = 1;
                          LODWORD(v1789) = -1721306479;
                          DWORD2(v1788) = 1;
                          LODWORD(v1790) = 1;
                          DWORD2(v1789) = 1;
                          LODWORD(v1791) = lpModuleNamee;
                          DWORD2(v1790) = 1;
                          v921 = 4LL;
                          ((void (__fastcall *)(_QWORD, __int64, __int64, int *))qword_1809851D0)(
                            0LL,
                            8225LL,
                            4LL,
                            &v1787);
                          while ( _InterlockedCompareExchange(&g_WarbirdSecureFunctionsLock, 1, 0) )
                            ;
                          v922 = g_WarbirdSecureFunctionsRefCount;
                          if ( g_WarbirdSecureFunctionsRefCount > 0 )
                          {
                            --g_WarbirdSecureFunctionsRefCount;
                            if ( v922 == 1 )
                            {
                              v923 = (HMODULE *)&WARBIRD::g_arModuleInfo;
                              do
                              {
                                if ( *v923 )
                                  FreeLibrary(*v923);
                                v923 += 3;
                                --v921;
                              }
                              while ( v921 );
                              memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                              memcpy_0(&WARBIRD::g_FuncAddress, &off_1807CC3E0, 0x170uLL);
                            }
                          }
                          _InterlockedExchange(&g_WarbirdSecureFunctionsLock, 0);
                          ((void (__fastcall *)(_QWORD, size_t))off_180985260)(0LL, v1395);
                          v1553 = (void *)v1515;
                          goto LABEL_1258;
                        }
                        v710 = v1739;
                        v1635 = v1739;
                        memset_0(v1690, 0, 0x68uLL);
                        v711 = 1;
                        v712 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1395, 7LL);
                        v123 = 0LL;
                        if ( v712
                          && (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                             v712,
                                             104LL,
                                             v1690) )
                        {
                          if ( v1693 != 32 || !v1694 || v1691 <= 0 || v1692 <= 0 )
                            v711 = 0;
                          if ( v711 )
                          {
LABEL_969:
                            ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                              &v1726,
                              v710,
                              HIDWORD(v1635));
                            ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                              &v1727,
                              v710,
                              HIDWORD(v1635));
                            if ( v608 == 1 )
                              v1519 = (void *)((__int64 (__fastcall *)(_QWORD))off_180985128)(v1718 == 0 ? 0xB26720 : 0);
LABEL_971:
                            v1470 = ((__int64 (__fastcall *)(size_t, __int64))off_180985180)(v1395, 1LL);
                            v740 = 2064;
                            if ( v1717 )
                              v740 = 133138;
                            LODWORD(v1516) = v740;
                            if ( v711 )
                            {
                              v1375 = v1718;
                              v1412 = v1722;
                              v741 = v1719;
                              memset_0(v1695, 0, 0x68uLL);
                              memset_0(v1699, 0, 0x68uLL);
                              v1290 = 0LL;
                              Sizei = 0;
                              LODWORD(v1517) = 0;
                              v1757 = 0LL;
                              v1758 = 0LL;
                              v1759 = 0LL;
                              v1760 = 0;
                              v1740 = 0LL;
                              if ( !v741 )
                                goto LABEL_1022;
                              v742 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1395, 7LL);
                              if ( v742 )
                              {
                                if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                     v742,
                                                     104LL,
                                                     v1695) )
                                {
                                  v1290 = v1698;
                                  Sizei = v1696;
                                  LODWORD(v1517) = v1697;
                                }
                                v743 = ((__int64 (__fastcall *)(size_t))off_180985110)(v1395);
                                v744 = v743;
                                v1479 = (LPVOID)v743;
                                if ( v743 )
                                {
                                  v1636 = 0LL;
                                  v1758 = 0LL;
                                  v1759 = 0LL;
                                  v1760 = 0;
                                  LODWORD(v1757) = 40;
                                  DWORD1(v1757) = DWORD2(v1726) - v1726;
                                  DWORD2(v1757) = DWORD1(v1726) - HIDWORD(v1726);
                                  HIDWORD(v1757) = 2097153;
                                  LODWORD(v1275) = 0;
                                  v745 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *))off_180985118)(
                                           v743,
                                           &v1757,
                                           0LL,
                                           &v1636);
                                  v746 = v745;
                                  v1386 = (LPCWSTR)v745;
                                  if ( v745 )
                                  {
                                    v749 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                             v745,
                                             104LL,
                                             v1699);
                                    v750 = 0LL;
                                    if ( v749 )
                                      v750 = v1700;
                                    v1362 = v750;
                                    DWORD2(v1740) = DWORD2(v1726) - v1726;
                                    HIDWORD(v1740) = HIDWORD(v1726) - DWORD1(v1726);
                                    ((void (__fastcall *)(__int64, __int64))off_180985178)(v744, v746);
                                    ((void (__fastcall *)(__int64, __int64))off_180985180)(v744, 1LL);
                                    v1413 = (LPCWSTR)((__int64 (__fastcall *)(__int64, LPCWSTR))off_180985178)(
                                                       v744,
                                                       v1412);
                                    v751 = off_1809851E8;
                                    v752 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                                    ((void (__fastcall *)(__int64, __int128 *, __int64))v751)(v744, &v1740, v752);
                                    v747 = 0;
                                    LODWORD(v1275) = v1516;
                                    ((void (__fastcall *)(__int64, void *, __int64, __int128 *))off_1809851D8)(
                                      v744,
                                      v741,
                                      0xFFFFFFFFLL,
                                      &v1740);
                                    if ( Srch == 1 )
                                    {
                                      if ( v1375 )
                                        v1376 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                                      else
                                        v1376 = 0xFFFFFF;
                                    }
                                    else
                                    {
                                      v1376 = -5723992;
                                    }
                                    v753 = -(int)v1726;
                                    if ( (int)v1726 >= 0 )
                                      v753 = 0;
                                    v754 = 0;
                                    if ( (int)v1726 >= 0 )
                                      v754 = v1726;
                                    v755 = -DWORD1(v1726);
                                    if ( (SDWORD1(v1726) & 0x80000000) == 0 )
                                      v755 = 0;
                                    v756 = 0;
                                    if ( (SDWORD1(v1726) & 0x80000000) == 0 )
                                      v756 = DWORD1(v1726);
                                    v757 = DWORD2(v1740) - v753;
                                    if ( DWORD2(v1740) - v753 >= Sizei - v754 )
                                      v757 = Sizei - v754;
                                    v758 = HIDWORD(v1740) - v755;
                                    if ( HIDWORD(v1740) - v755 >= (int)v1517 - v756 )
                                      v758 = v1517 - v756;
                                    if ( v757 > 0 && v758 > 0 )
                                    {
                                      v759 = (char *)(v1362 + 4 * (v753 + (__int64)(v755 * DWORD2(v1740))));
                                      v1363 = (SIZE_T)v759;
                                      v760 = Sizei;
                                      v761 = v1290 + 4 * (v754 + (__int64)(v756 * Sizei));
                                      v1291 = v761;
                                      v762 = 0;
                                      Sizej = 0;
                                      lpModuleNamed = (LPCWSTR)(4LL * SDWORD2(v1740));
                                      v1326 = 4 * v760;
                                      while ( 1 )
                                      {
                                        LODWORD(v1517) = 0;
                                        v763 = (unsigned __int8 *)(v759 + 2);
                                        v764 = v761 - (_QWORD)v759;
                                        do
                                        {
                                          if ( (unsigned __int8)((*v763 + *(v763 - 2) + 2 * (unsigned int)*(v763 - 1)) >> 2) != 0xFF )
                                          {
                                            v765 = (unsigned __int8)~((*v763
                                                                     + *(v763 - 2)
                                                                     + 2 * (unsigned int)*(v763 - 1)) >> 2);
                                            v763[v764] -= ~((*v763 + *(v763 - 2) + 2 * (unsigned int)*(v763 - 1)) >> 2)
                                                        * (v1376 - v763[v764]);
                                            v763[v764 - 1] += ((((unsigned __int64)(2155905153LL
                                                                                  * v765
                                                                                  * (BYTE1(v1376) - v763[v764 - 1])) >> 32) & 0x80000000) != 0LL)
                                                            + ((int)((unsigned __int64)(2155905153LL
                                                                                      * v765
                                                                                      * (BYTE1(v1376) - v763[v764 - 1])) >> 32) >> 7);
                                            v763[v764 - 2] += ((((unsigned __int64)(2155905153LL
                                                                                  * v765
                                                                                  * (BYTE2(v1376) - v763[v764 - 2])) >> 32) & 0x80000000) != 0LL)
                                                            + ((int)((unsigned __int64)(2155905153LL
                                                                                      * v765
                                                                                      * (BYTE2(v1376) - v763[v764 - 2])) >> 32) >> 7);
                                            v763[v764 + 1] += ((((unsigned __int64)(2155905153LL
                                                                                  * v765
                                                                                  * (255 - v763[v764 + 1])) >> 32) & 0x80000000) != 0LL)
                                                            + ((int)((unsigned __int64)(2155905153LL
                                                                                      * v765
                                                                                      * (255 - v763[v764 + 1])) >> 32) >> 7);
                                            v762 = v1517;
                                          }
                                          v747 = 0;
                                          v763 += 4;
                                          LODWORD(v1517) = ++v762;
                                        }
                                        while ( v762 < v757 );
                                        v759 = (char *)lpModuleNamed + v1363;
                                        v1363 += (SIZE_T)lpModuleNamed;
                                        v761 = v1326 + v1291;
                                        v1291 += v1326;
                                        if ( ++Sizej >= v758 )
                                          break;
                                        v762 = 0;
                                      }
                                      v111 = v1522;
                                      v744 = (__int64)v1479;
                                    }
                                    ((void (__fastcall *)(LPCWSTR))off_180985138)(v1386);
                                    if ( v1413 )
                                      ((void (__fastcall *)(__int64, LPCWSTR))off_180985178)(v744, v1413);
                                  }
                                  else
                                  {
                                    v747 = GetLastError();
                                    v748 = v747 < 0;
                                    if ( v747 > 0 )
                                    {
                                      v747 = (unsigned __int16)v747 | 0x80070000;
                                      v748 = v747 < 0;
                                    }
                                    if ( !v748 )
                                      v747 = -2147467259;
                                  }
                                  ((void (__fastcall *)(__int64))off_180985130)(v744);
                                  if ( v747 >= 0 )
                                  {
                                    v1377 = v1718;
                                    v1414 = v1723;
                                    v766 = v1720;
                                    memset_0(v1701, 0, 0x68uLL);
                                    memset_0(v1705, 0, 0x68uLL);
                                    v1292 = 0LL;
                                    Sizek = 0;
                                    LODWORD(v1517) = 0;
                                    v1761 = 0LL;
                                    v1762 = 0LL;
                                    v1763 = 0LL;
                                    v1764 = 0;
                                    v1741 = 0LL;
                                    if ( v766 )
                                    {
                                      v767 = ((__int64 (__fastcall *)(size_t, __int64))off_180985150)(v1395, 7LL);
                                      if ( v767 )
                                      {
                                        if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                             v767,
                                                             104LL,
                                                             v1701) )
                                        {
                                          v1292 = v1704;
                                          Sizek = v1702;
                                          LODWORD(v1517) = v1703;
                                        }
                                        v824 = ((__int64 (__fastcall *)(size_t))off_180985110)(v1395);
                                        v825 = v824;
                                        v1480 = (LPVOID)v824;
                                        if ( v824 )
                                        {
                                          v1637 = 0LL;
                                          v1762 = 0LL;
                                          v1763 = 0LL;
                                          v1764 = 0;
                                          LODWORD(v1761) = 40;
                                          DWORD1(v1761) = DWORD2(v1727) - v1727;
                                          DWORD2(v1761) = DWORD1(v1727) - HIDWORD(v1727);
                                          HIDWORD(v1761) = 2097153;
                                          LODWORD(v1275) = 0;
                                          v826 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *))off_180985118)(
                                                   v824,
                                                   &v1761,
                                                   0LL,
                                                   &v1637);
                                          v827 = v826;
                                          v1387 = (LPCWSTR)v826;
                                          if ( !v826 )
                                          {
                                            v828 = GetLastError();
                                            v829 = v828;
                                            v123 = 0LL;
                                            if ( v828 > 0 )
                                              v829 = (unsigned __int16)v828 | 0x80070000;
                                            if ( v829 >= 0 )
                                              v829 = -2147467259;
LABEL_1106:
                                            ((void (__fastcall *)(__int64))off_180985130)(v825);
                                            if ( v829 < 0 )
                                              goto LABEL_1022;
                                            v847 = 0LL;
                                            v848 = v1395;
LABEL_1218:
                                            ((void (__fastcall *)(size_t, _QWORD))off_180985180)(v848, v1470);
                                            v857 = v1523;
                                            v123 = 0LL;
                                            if ( !v1523 )
                                            {
LABEL_1129:
                                              if ( !v847 )
                                                goto LABEL_1022;
                                              goto LABEL_1130;
                                            }
LABEL_1128:
                                            ((void (__fastcall *)(LPVOID))off_180985138)(v857);
                                            goto LABEL_1129;
                                          }
                                          v830 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                   v826,
                                                   104LL,
                                                   v1705);
                                          v831 = 0LL;
                                          if ( v830 )
                                            v831 = v1706;
                                          v1364 = v831;
                                          DWORD2(v1741) = DWORD2(v1727) - v1727;
                                          HIDWORD(v1741) = HIDWORD(v1727) - DWORD1(v1727);
                                          ((void (__fastcall *)(__int64, __int64))off_180985178)(v825, v827);
                                          ((void (__fastcall *)(__int64, __int64))off_180985180)(v825, 1LL);
                                          v1415 = (LPCWSTR)((__int64 (__fastcall *)(__int64, LPCWSTR))off_180985178)(
                                                             v825,
                                                             v1414);
                                          v832 = off_1809851E8;
                                          v833 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                                          ((void (__fastcall *)(__int64, __int128 *, __int64))v832)(v825, &v1741, v833);
                                          v829 = 0;
                                          LODWORD(v1275) = v1516;
                                          ((void (__fastcall *)(__int64, void *, __int64, __int128 *))off_1809851D8)(
                                            v825,
                                            v766,
                                            0xFFFFFFFFLL,
                                            &v1741);
                                          if ( Srch == 1 )
                                          {
                                            if ( !v1377 )
                                            {
                                              Srci = 0xFFFFFF;
LABEL_1083:
                                              v835 = -(int)v1727;
                                              if ( (int)v1727 >= 0 )
                                                v835 = 0;
                                              v836 = 0;
                                              if ( (int)v1727 >= 0 )
                                                v836 = v1727;
                                              v837 = -DWORD1(v1727);
                                              if ( (SDWORD1(v1727) & 0x80000000) == 0 )
                                                v837 = 0;
                                              v838 = 0;
                                              if ( (SDWORD1(v1727) & 0x80000000) == 0 )
                                                v838 = DWORD1(v1727);
                                              v839 = DWORD2(v1741) - v835;
                                              if ( DWORD2(v1741) - v835 >= Sizek - v836 )
                                                v839 = Sizek - v836;
                                              v840 = HIDWORD(v1741) - v837;
                                              if ( HIDWORD(v1741) - v837 >= (int)v1517 - v838 )
                                                v840 = v1517 - v838;
                                              if ( v839 > 0 && v840 > 0 )
                                              {
                                                v841 = (char *)(v1364 + 4 * (v835 + (__int64)(v837 * DWORD2(v1741))));
                                                v1365 = (SIZE_T)v841;
                                                v842 = v1292 + 4 * (v836 + (__int64)(v838 * Sizek));
                                                v1293 = v842;
                                                LODWORD(v1516) = 0;
                                                lpModuleNamef = (LPCWSTR)(4LL * SDWORD2(v1741));
                                                v1328 = 4LL * Sizek;
                                                do
                                                {
                                                  v843 = 0;
                                                  v1378 = 0;
                                                  v844 = (unsigned __int8 *)(v841 + 2);
                                                  v845 = v842 - (_QWORD)v841;
                                                  do
                                                  {
                                                    if ( (unsigned __int8)((*v844
                                                                          + *(v844 - 2)
                                                                          + 2 * (unsigned int)*(v844 - 1)) >> 2) != 0xFF )
                                                    {
                                                      v846 = (unsigned __int8)~((*v844
                                                                               + *(v844 - 2)
                                                                               + 2 * (unsigned int)*(v844 - 1)) >> 2);
                                                      v844[v845] -= ~((*v844
                                                                     + *(v844 - 2)
                                                                     + 2 * (unsigned int)*(v844 - 1)) >> 2)
                                                                  * (v1514 - v844[v845]);
                                                      v844[v845 - 1] += ((((unsigned __int64)(2155905153LL
                                                                                            * v846
                                                                                            * (BYTE1(Srci)
                                                                                             - v844[v845 - 1])) >> 32) & 0x80000000) != 0LL)
                                                                      + ((int)((unsigned __int64)(2155905153LL
                                                                                                * v846
                                                                                                * (BYTE1(Srci)
                                                                                                 - v844[v845 - 1])) >> 32) >> 7);
                                                      v844[v845 - 2] += ((((unsigned __int64)(2155905153LL
                                                                                            * v846
                                                                                            * (BYTE2(Srci)
                                                                                             - v844[v845 - 2])) >> 32) & 0x80000000) != 0LL)
                                                                      + ((int)((unsigned __int64)(2155905153LL
                                                                                                * v846
                                                                                                * (BYTE2(Srci)
                                                                                                 - v844[v845 - 2])) >> 32) >> 7);
                                                      v844[v845 + 1] += ((((unsigned __int64)(2155905153LL
                                                                                            * v846
                                                                                            * (255 - v844[v845 + 1])) >> 32) & 0x80000000) != 0LL)
                                                                      + ((int)((unsigned __int64)(2155905153LL
                                                                                                * v846
                                                                                                * (255 - v844[v845 + 1])) >> 32) >> 7);
                                                      v843 = v1378;
                                                    }
                                                    v829 = 0;
                                                    v844 += 4;
                                                    v1378 = ++v843;
                                                  }
                                                  while ( v843 < v839 );
                                                  v841 = (char *)lpModuleNamef + v1365;
                                                  v1365 += (SIZE_T)lpModuleNamef;
                                                  v842 = v1328 + v1293;
                                                  v1293 += v1328;
                                                  LODWORD(v1516) = v1516 + 1;
                                                }
                                                while ( (int)v1516 < v840 );
                                                v111 = v1522;
                                                v825 = (__int64)v1480;
                                              }
                                              ((void (__fastcall *)(LPCWSTR))off_180985138)(v1387);
                                              v123 = 0LL;
                                              if ( v1415 )
                                                ((void (__fastcall *)(__int64, LPCWSTR))off_180985178)(v825, v1415);
                                              goto LABEL_1106;
                                            }
                                            v834 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                                          }
                                          else
                                          {
                                            v834 = -5723992;
                                          }
                                          Srci = v834;
                                          v1514 = v834;
                                          goto LABEL_1083;
                                        }
                                      }
                                      GetLastError();
                                    }
                                  }
                                  v123 = 0LL;
                                  goto LABEL_1022;
                                }
                              }
LABEL_1109:
                              GetLastError();
                              goto LABEL_1022;
                            }
                            Sizel = 0;
                            LODWORD(v1517) = 0;
                            LODWORD(v1526) = 0;
                            v1488 = (LPCWSTR)((__int64 (__fastcall *)(size_t))off_180985110)(v1395);
                            if ( !v1488 )
                              goto LABEL_1109;
                            if ( v608 == 1 )
                            {
                              v849 = DWORD2(v1727) - v1727;
                              if ( DWORD2(v1727) - (int)v1727 <= DWORD2(v1726) - (int)v1726 )
                                v849 = DWORD2(v1726) - v1726;
                              LODWORD(v1553) = v849;
                              v850 = HIDWORD(v1727) - DWORD1(v1726);
                              LODWORD(v1524) = HIDWORD(v1727) - DWORD1(v1726);
                              v851 = 0;
                              if ( v1717 )
                              {
                                Sizel = v1726 + v849 - DWORD2(v1726);
                                LODWORD(v1526) = v1727 + v849 - DWORD2(v1727);
                                v851 = Sizel;
                                LODWORD(v123) = (_DWORD)v1526;
                                v850 = v1524;
                              }
                              v852 = DWORD2(v1726) + v851 - v1726;
                              LODWORD(v1520) = HIDWORD(v1726) - DWORD1(v1726);
                              v853 = DWORD2(v1727) + v123 - v1727;
                              LODWORD(v1518) = DWORD1(v1727) - DWORD1(v1726);
                              v854 = HIDWORD(v1727) - DWORD1(v1726);
                            }
                            else
                            {
                              v849 = DWORD2(v1739);
                              LODWORD(v1553) = DWORD2(v1739);
                              v850 = HIDWORD(v1739);
                              LODWORD(v1524) = HIDWORD(v1739);
                              v1660 = v1726;
                              v1661 = v1727;
                              LODWORD(v1520) = HIDWORD(v1726);
                              v852 = DWORD2(v1726);
                              LODWORD(v1517) = DWORD1(v1726);
                              Sizel = v1726;
                              v854 = HIDWORD(v1727);
                              v853 = DWORD2(v1727);
                              LODWORD(v1518) = DWORD1(v1727);
                              LODWORD(v1526) = v1727;
                            }
                            LODWORD(v1521) = v853;
                            v1638 = 0LL;
                            v1754 = 0LL;
                            v1755 = 0LL;
                            v1756 = 0;
                            LODWORD(v1753) = 40;
                            DWORD1(v1753) = v849;
                            DWORD2(v1753) = -v850;
                            HIDWORD(v1753) = 2097153;
                            LODWORD(v1275) = 0;
                            v855 = (void *)((__int64 (__fastcall *)(LPCWSTR, __int128 *, _QWORD, __int64 *))off_180985118)(
                                             v1488,
                                             &v1753,
                                             0LL,
                                             &v1638);
                            v1523 = v855;
                            if ( !v855 )
                            {
                              GetLastError();
                              v847 = v1488;
                              v123 = 0LL;
LABEL_1130:
                              ((void (__fastcall *)(LPCWSTR))off_180985130)(v847);
LABEL_1022:
                              if ( v1519 )
                                ((void (__fastcall *)(void *))off_180985138)(v1519);
                              goto LABEL_1024;
                            }
                            ((void (__fastcall *)(LPCWSTR, void *))off_180985178)(v1488, v855);
                            if ( Srch == 1 && v1519 )
                            {
                              v1742 = 0LL;
                              v1743 = v849;
                              v1744 = v1524;
                              ((void (__fastcall *)(LPCWSTR, __int64 *))off_1809851E8)(v1488, &v1742);
                            }
                            v1446 = v1718;
                            v1416 = v1722;
                            v1294 = v1719;
                            memset_0(v1707, 0, 0x68uLL);
                            memset_0(v1688, 0, 0x68uLL);
                            v1481 = 0LL;
                            v1329 = 0;
                            lpModuleNameg = 0;
                            v1765 = 0LL;
                            v1766 = 0LL;
                            v1767 = 0LL;
                            v1768 = 0;
                            v1736 = 0LL;
                            if ( !v1294 )
                              goto LABEL_1125;
                            v856 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_180985150)(v1488, 7LL);
                            if ( v856 )
                            {
                              if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                   v856,
                                                   104LL,
                                                   v1707) )
                              {
                                v1481 = v1710;
                                v1329 = v1708;
                                lpModuleNameg = v1709;
                              }
                              v858 = ((__int64 (__fastcall *)(LPCWSTR))off_180985110)(v1488);
                              v1388 = (LPCWSTR)v858;
                              if ( v858 )
                              {
                                LODWORD(v1520) = (_DWORD)v1520 - v1517;
                                v859 = v852 - Sizel;
                                v1639 = 0LL;
                                v1766 = 0LL;
                                v1767 = 0LL;
                                v1768 = 0;
                                LODWORD(v1765) = 40;
                                DWORD1(v1765) = v859;
                                DWORD2(v1765) = -(int)v1520;
                                HIDWORD(v1765) = 2097153;
                                LODWORD(v1275) = 0;
                                v860 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *))off_180985118)(
                                         v858,
                                         &v1765,
                                         0LL,
                                         &v1639);
                                v1366 = v860;
                                if ( v860 )
                                {
                                  v863 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                           v860,
                                           104LL,
                                           v1688);
                                  v864 = 0LL;
                                  if ( v863 )
                                    v864 = v1689;
                                  v1343 = v864;
                                  *((_QWORD *)&v1736 + 1) = __PAIR64__((unsigned int)v1520, v859);
                                  ((void (__fastcall *)(LPCWSTR, SIZE_T))off_180985178)(v1388, v1366);
                                  ((void (__fastcall *)(LPCWSTR, __int64))off_180985180)(v1388, 1LL);
                                  v1417 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(
                                                     v1388,
                                                     v1416);
                                  v865 = off_1809851E8;
                                  v866 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                                  ((void (__fastcall *)(LPCWSTR, __int128 *, __int64))v865)(v1388, &v1736, v866);
                                  LODWORD(v1275) = v1516;
                                  ((void (__fastcall *)(LPCWSTR, void *, __int64, __int128 *))off_1809851D8)(
                                    v1388,
                                    v1294,
                                    0xFFFFFFFFLL,
                                    &v1736);
                                  if ( Srch == 1 )
                                  {
                                    if ( v1446 )
                                      v867 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                                    else
                                      v867 = 0xFFFFFF;
                                  }
                                  else
                                  {
                                    v867 = -5723992;
                                  }
                                  v1447 = v867;
                                  v868 = -Sizel;
                                  if ( Sizel >= 0 )
                                    v868 = 0;
                                  v869 = 0;
                                  if ( Sizel >= 0 )
                                    v869 = Sizel;
                                  v870 = -(int)v1517;
                                  if ( (int)v1517 >= 0 )
                                    v870 = 0;
                                  v871 = 0;
                                  if ( (int)v1517 >= 0 )
                                    v871 = v1517;
                                  v872 = DWORD2(v1736) - v868;
                                  if ( DWORD2(v1736) - v868 >= v1329 - v869 )
                                    v872 = v1329 - v869;
                                  v873 = HIDWORD(v1736) - v870;
                                  if ( HIDWORD(v1736) - v870 >= lpModuleNameg - v871 )
                                    v873 = lpModuleNameg - v871;
                                  lpModuleNameh = v873;
                                  v861 = 0;
                                  if ( v872 > 0 && v873 > 0 )
                                  {
                                    v874 = (unsigned __int8 *)&v1343[4 * v868 + 4 * (__int64)(v870 * DWORD2(v1736))];
                                    v1344 = v874;
                                    v875 = &v1481[4 * v869 + 4 * (__int64)(v871 * v1329)];
                                    v1295 = (size_t)v875;
                                    LODWORD(v1520) = 0;
                                    v1517 = 4LL * v1329;
                                    v876 = 0;
                                    Sizem = 0;
                                    v877 = 4LL * SDWORD2(v1736);
                                    do
                                    {
                                      v878 = 0;
                                      v1330 = 0;
                                      v879 = v874 + 2;
                                      v880 = v875 - (char *)v874;
                                      do
                                      {
                                        if ( (unsigned __int8)((*v879 + *(v879 - 2) + 2 * (unsigned int)*(v879 - 1)) >> 2) != 0xFF )
                                        {
                                          v881 = (unsigned __int8)~((*v879 + *(v879 - 2) + 2 * (unsigned int)*(v879 - 1)) >> 2);
                                          v879[v880] -= ~((*v879 + *(v879 - 2) + 2 * (unsigned int)*(v879 - 1)) >> 2)
                                                      * (v1447 - v879[v880]);
                                          v879[v880 - 1] -= v881 * (BYTE1(v1447) - v879[v880 - 1]);
                                          v879[v880 - 2] -= v881 * (BYTE2(v1447) - v879[v880 - 2]);
                                          v879[v880 + 1] += v881 * (255 - v879[v880 + 1]) / 255;
                                          v878 = v1330;
                                          v876 = Sizem;
                                        }
                                        v861 = v876;
                                        v879 += 4;
                                        v1330 = ++v878;
                                      }
                                      while ( v878 < v872 );
                                      v874 = &v1344[v877];
                                      v1344 += v877;
                                      v875 = (char *)(v1517 + v1295);
                                      v1295 += v1517;
                                      LODWORD(v1520) = (_DWORD)v1520 + 1;
                                      Sizem = v876;
                                    }
                                    while ( (int)v1520 < lpModuleNameh );
                                    v111 = v1522;
                                    v849 = (unsigned int)v1553;
                                    v853 = v1521;
                                  }
                                  ((void (__fastcall *)(SIZE_T))off_180985138)(v1366);
                                  if ( v1417 )
                                    ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1388, v1417);
                                }
                                else
                                {
                                  v861 = GetLastError();
                                  v862 = v861 < 0;
                                  if ( v861 > 0 )
                                  {
                                    v861 = (unsigned __int16)v861 | 0x80070000;
                                    v862 = v861 < 0;
                                  }
                                  if ( !v862 )
                                    v861 = -2147467259;
                                }
                                ((void (__fastcall *)(LPCWSTR))off_180985130)(v1388);
                                if ( v861 < 0 )
                                  goto LABEL_1125;
                                lpModuleNamei = v1718;
                                v1345 = v1723;
                                v882 = v1720;
                                v1418 = (LPCWSTR)v1720;
                                memset_0(v1711, 0, 0x68uLL);
                                memset_0(v1715, 0, 0x68uLL);
                                v1296 = 0LL;
                                v1331 = 0;
                                v1448 = 0;
                                v1769 = 0LL;
                                v1770 = 0LL;
                                v1771 = 0LL;
                                v1772 = 0;
                                v1737 = 0LL;
                                if ( !v882 )
                                  goto LABEL_1125;
                                v847 = v1488;
                                v883 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_180985150)(v1488, 7LL);
                                if ( !v883 )
                                {
                                  GetLastError();
                                  goto LABEL_1126;
                                }
                                if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                                     v883,
                                                     104LL,
                                                     v1711) )
                                {
                                  v1296 = v1714;
                                  v1331 = v1712;
                                  v1448 = v1713;
                                }
                                v884 = ((__int64 (__fastcall *)(LPCWSTR))off_180985110)(v1488);
                                v885 = v884;
                                v1482 = (LPVOID)v884;
                                if ( v884 )
                                {
                                  v886 = v854 - (_DWORD)v1518;
                                  v887 = v853 - (_DWORD)v1526;
                                  v1641[0] = 0LL;
                                  v1770 = 0LL;
                                  v1771 = 0LL;
                                  v1772 = 0;
                                  LODWORD(v1769) = 40;
                                  DWORD1(v1769) = v887;
                                  DWORD2(v1769) = -v886;
                                  HIDWORD(v1769) = 2097153;
                                  LODWORD(v1275) = 0;
                                  v888 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, _QWORD *))off_180985118)(
                                           v884,
                                           &v1769,
                                           0LL,
                                           v1641);
                                  v1389 = (LPCWSTR)v888;
                                  if ( !v888 )
                                  {
                                    v889 = GetLastError();
                                    v890 = v889 < 0;
                                    if ( v889 > 0 )
                                    {
                                      v889 = (unsigned __int16)v889 | 0x80070000;
                                      v890 = v889 < 0;
                                    }
                                    if ( !v890 )
                                      v889 = -2147467259;
                                    v891 = v1482;
LABEL_1214:
                                    ((void (__fastcall *)(LPVOID))off_180985130)(v891);
                                    v123 = 0LL;
                                    if ( v889 >= 0 )
                                    {
                                      v847 = v1488;
                                      LODWORD(v1275) = v1524;
                                      v848 = v1395;
                                      if ( Srch == 1 )
                                        ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD))WARBIRD::g_FuncAddress)(
                                          v1395,
                                          (unsigned int)v1726,
                                          DWORD1(v1726),
                                          v849);
                                      else
                                        ((void (__fastcall *)(size_t, _QWORD, _QWORD, _QWORD))off_180985140)(
                                          v1395,
                                          (unsigned int)v1739,
                                          DWORD1(v1739),
                                          v849);
                                      goto LABEL_1218;
                                    }
                                    v847 = v1488;
LABEL_1127:
                                    v857 = v1523;
                                    goto LABEL_1128;
                                  }
                                  v892 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))off_180985168)(
                                           v888,
                                           104LL,
                                           v1715);
                                  v893 = 0LL;
                                  if ( v892 )
                                    v893 = v1716;
                                  v1367 = v893;
                                  *((_QWORD *)&v1737 + 1) = __PAIR64__(v886, v887);
                                  ((void (__fastcall *)(__int64, LPCWSTR))off_180985178)(v885, v1389);
                                  ((void (__fastcall *)(__int64, __int64))off_180985180)(v885, 1LL);
                                  v1346 = (LPVOID)((__int64 (__fastcall *)(__int64, const WCHAR *))off_180985178)(
                                                    v885,
                                                    v1345);
                                  v894 = off_1809851E8;
                                  v895 = ((__int64 (__fastcall *)(_QWORD))off_180985170)(0LL);
                                  v891 = v1482;
                                  ((void (__fastcall *)(LPVOID, __int128 *, __int64))v894)(v1482, &v1737, v895);
                                  v889 = 0;
                                  LODWORD(v1275) = v1516;
                                  ((void (__fastcall *)(LPVOID, LPCWSTR, __int64, __int128 *))off_1809851D8)(
                                    v1482,
                                    v1418,
                                    0xFFFFFFFFLL,
                                    &v1737);
                                  if ( Srch == 1 )
                                  {
                                    if ( !lpModuleNamei )
                                    {
                                      lpModuleNamej = 0xFFFFFF;
LABEL_1191:
                                      v897 = -(int)v1526;
                                      if ( (int)v1526 >= 0 )
                                        v897 = 0;
                                      v898 = 0;
                                      if ( (int)v1526 >= 0 )
                                        v898 = (int)v1526;
                                      v899 = -(int)v1518;
                                      if ( (int)v1518 >= 0 )
                                        v899 = 0;
                                      v900 = 0;
                                      if ( (int)v1518 >= 0 )
                                        v900 = (int)v1518;
                                      v901 = DWORD2(v1737) - v897;
                                      if ( DWORD2(v1737) - v897 >= v1331 - v898 )
                                        v901 = v1331 - v898;
                                      v902 = HIDWORD(v1737) - v899;
                                      if ( HIDWORD(v1737) - v899 >= v1448 - v900 )
                                        v902 = v1448 - v900;
                                      if ( v901 > 0 && v902 > 0 )
                                      {
                                        v903 = v1367 + 4 * (v897 + (__int64)(v899 * DWORD2(v1737)));
                                        v1419 = (LPCWSTR)v903;
                                        v904 = (char *)(v1296 + 4 * (v898 + (__int64)(v900 * v1331)));
                                        v1297 = (size_t)v904;
                                        v1449 = 0;
                                        v1368 = 2LL * SDWORD2(v1737);
                                        v1518 = (LPVOID)(4LL * v1331);
                                        v905 = 0;
                                        v1437 = 0;
                                        do
                                        {
                                          v906 = 0;
                                          v1332 = 0;
                                          v907 = (unsigned __int8 *)(v903 + 2);
                                          v908 = &v904[-v903];
                                          do
                                          {
                                            if ( (unsigned __int8)((*v907 + *(v907 - 2) + 2 * (unsigned int)*(v907 - 1)) >> 2) != 0xFF )
                                            {
                                              v909 = (unsigned __int8)~((*v907
                                                                       + *(v907 - 2)
                                                                       + 2 * (unsigned int)*(v907 - 1)) >> 2);
                                              v907[(_QWORD)v908] -= ~((*v907
                                                                     + *(v907 - 2)
                                                                     + 2 * (unsigned int)*(v907 - 1)) >> 2)
                                                                  * (v1514 - v907[(_QWORD)v908]);
                                              v907[(_QWORD)v908 - 1] -= v909
                                                                      * (BYTE1(lpModuleNamej) - v907[(_QWORD)v908 - 1]);
                                              v907[(_QWORD)v908 - 2] -= v909
                                                                      * (BYTE2(lpModuleNamej) - v907[(_QWORD)v908 - 2]);
                                              v907[(_QWORD)v908 + 1] += v909 * (255 - v907[(_QWORD)v908 + 1]) / 255;
                                              v906 = v1332;
                                              v905 = v1437;
                                            }
                                            v889 = v905;
                                            v907 += 4;
                                            v1332 = ++v906;
                                          }
                                          while ( v906 < v901 );
                                          v903 = (SIZE_T)&v1419[v1368];
                                          v1419 = (LPCWSTR)((char *)v1419 + v1368 * 2);
                                          v904 = (char *)v1518 + v1297;
                                          v1297 += (size_t)v1518;
                                          ++v1449;
                                          v1437 = v905;
                                        }
                                        while ( v1449 < v902 );
                                        v111 = v1522;
                                        v849 = (unsigned int)v1553;
                                        v891 = v1482;
                                      }
                                      ((void (__fastcall *)(LPCWSTR))off_180985138)(v1389);
                                      if ( v1346 )
                                        ((void (__fastcall *)(LPVOID, LPVOID))off_180985178)(v891, v1346);
                                      goto LABEL_1214;
                                    }
                                    v896 = ((__int64 (__fastcall *)(__int64))off_180985218)(8LL);
                                  }
                                  else
                                  {
                                    v896 = -5723992;
                                  }
                                  lpModuleNamej = v896;
                                  v1514 = v896;
                                  goto LABEL_1191;
                                }
                              }
                            }
                            GetLastError();
LABEL_1125:
                            v847 = v1488;
LABEL_1126:
                            v123 = 0LL;
                            goto LABEL_1127;
                          }
                        }
                        else
                        {
                          v711 = 0;
                        }
                        if ( v608 != 1 )
                          goto LABEL_971;
                        goto LABEL_969;
                      }
                      v611 = 0LL;
                      v1629 = 0LL;
                      v1630 = 0LL;
                      v1631 = 0LL;
                      v1632 = 0LL;
                      v1633 = 0LL;
                      v1634 = 0LL;
                      v610 = 0;
                      v1551 = 0;
                      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))off_1809851A0)(
                                            8LL,
                                            &v1525,
                                            0LL,
                                            &v1551) )
                        goto LABEL_730;
                      v613 = (char *)MemoryAlloc(2LL * v1551);
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1633);
                      if ( !v613 )
                      {
                        v1633 = 0LL;
                        v610 = -2147024882;
                        goto LABEL_746;
                      }
                      v1633 = v613;
                      v614 = MemoryAlloc(4LL * (v1525 + 1));
                      SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1634);
                      if ( v614 )
                      {
                        v1634 = v614;
                        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, unsigned int *, char *, unsigned int *))off_1809851A0)(
                                              8LL,
                                              &v1525,
                                              v613,
                                              &v1551) )
                        {
LABEL_730:
                          v612 = GetLastError();
                          v610 = v612;
                          if ( v612 > 0 )
                            v610 = (unsigned __int16)v612 | 0x80070000;
                          if ( v610 >= 0 )
                            v610 = -2147467259;
LABEL_746:
                          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1634);
                          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1633);
                          if ( v610 < 0 )
                          {
                            v628 = 0LL;
                            v627 = 0LL;
                          }
                          else
                          {
                            v617 = 0;
                            Sizef = 0;
                            v618 = 0;
                            if ( ii )
                            {
                              v619 = 0LL;
LABEL_749:
                              v620 = 0;
                              v621 = `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray;
                              while ( v611[v619] != *v621 )
                              {
                                ++v620;
                                ++v621;
                                if ( v620 >= 0x26 )
                                {
                                  ++v618;
                                  ++v619;
                                  if ( v618 >= ii )
                                    goto LABEL_755;
                                  goto LABEL_749;
                                }
                              }
                              v617 = v620;
                              Sizef = v620;
                            }
LABEL_755:
                            v622 = v617;
                            v1373 = 0;
                            if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64))off_1809851A8)(
                                                 `CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::uLanguageArray[v617],
                                                 v1794,
                                                 85LL)
                              && (int)((__int64 (__fastcall *)(_BYTE *, __int64, char *))off_180985190)(
                                        v1794,
                                        88LL,
                                        v1745) > 0 )
                            {
                              v1373 = (v1746 >> 27) & 1;
                            }
                            v623 = L"Segoe UI Light";
                            v624 = v1792;
                            v625 = 19LL;
                            do
                            {
                              *v624 = (wchar_t *)v623;
                              v626 = -1LL;
                              do
                                ++v626;
                              while ( v623[v626] );
                              v623 += v626 + 1;
                              ++v624;
                              --v625;
                            }
                            while ( v625 );
                            v627 = v1792[*((unsigned __int8 *)&`CUxDisplayStringsT<CEmptyType>::GetFontsForLCIDIndex'::`2'::LangFontIndexMapping
                                         + 3 * v622)];
                            v1408 = v627;
                            v1361 = (SIZE_T)v627;
                            v1289 = v1792[(unsigned __int8)byte_180836F31[3 * v622]];
                            v628 = v1792[(unsigned __int8)byte_180836F32[3 * v622]];
                            v1475 = v628;
                            v629 = (char *)MemoryAlloc(0x1C90uLL);
                            v1444 = v629;
                            v630 = 0;
                            if ( !v629 )
                            {
                              v610 = -2147024882;
                              v631 = 0LL;
                              goto LABEL_816;
                            }
                            v632 = 0;
                            LODWORD(v1517) = -1;
                            v633 = 0;
                            v634 = v629 + 7;
                            v635 = (unsigned __int8 *)&unk_1808B5392;
                            v636 = 914LL;
                            v637 = -1;
                            do
                            {
                              v638 = v635[1] | ((*v635 | ((*(v635 - 1) | (*(v635 - 2) << 8)) << 8)) << 8);
                              v639 = v635[5] | ((v635[4] | ((v635[3] | (v635[2] << 8)) << 8)) << 8);
                              v640 = v638 ^ v630;
                              v635 += 8;
                              v641 = v640 ^ v633 ^ v639 ^ 0xAC987321;
                              v642 = (4991 * __ROL4__(v641 + 1419157410, 5) + __ROL4__(v641, 10)) ^ v640;
                              v643 = (43881 * __ROR4__(v642 + 133239679, 9) - __ROL4__(v642, 2)) ^ v641;
                              v644 = (24670 * v643 - (v643 >> 13) - 123127970) ^ v642;
                              v645 = (2033 * __ROL4__(v644 ^ 0xAB69, 6) - __ROL4__(v644, 2)) ^ v643;
                              v646 = (133239679 - (v645 ^ 0xAB69605E)) ^ v644;
                              v647 = (43881 * (v646 ^ 0x137F)) ^ __ROR4__(v646, 6) ^ v645;
                              v648 = (24670 * __ROR4__(v647 + 133239679, 15) + __ROL4__(v647, 2)) ^ v646;
                              v649 = (2033 * __ROR4__(v648 + 1419157410, 14) - __ROL4__(v648, 8)) ^ v647;
                              v650 = (4991 * __ROR4__(v649 ^ 0xAB69605E, 12)) ^ __ROR4__(v649, 10) ^ v648;
                              v651 = (v650 >> 10) ^ (43881 * (v650 ^ 0x7F1)) ^ v649;
                              v652 = (2033 * (__ROR4__(~v651, 5) + 24670)) ^ v650;
                              v653 = v651 ^ (v652 - 2033) ^ 0xAB69605E;
                              v654 = ((v653 >> 2) + 4991 * __ROL4__(v651 ^ (v652 - 2033) ^ 0xAB6967AF, 2)) ^ v652;
                              v655 = (43881 * __ROR4__(v654 - 133239679, 6) + __ROL4__(v654, 7)) ^ v653;
                              v656 = (24670 * (v655 ^ 0x137F) + __ROR4__(v655, 9)) ^ v654;
                              v657 = (2033 * __ROL4__(v656 ^ 0xAB69, 5) + __ROL4__(v656, 7)) ^ v655;
                              v658 = v657 ^ v656 ^ 0xAC987321;
                              v659 = (4991 * __ROR4__(v658, 3) - 219010071) ^ v657;
                              v660 = (24670 * __ROR4__(v659 - 133239679, 1) - __ROR4__(v659, 6)) ^ v658;
                              v661 = (2033 * __ROL4__(v660 - 1419157410, 3) + __ROL4__(v660, 14)) ^ v659;
                              v662 = (4991 * __ROL4__(v661 - 1419157410, 15) - __ROR4__(v661, 14)) ^ v660;
                              v663 = (v662 >> 3) ^ (43881 * (v662 ^ 0x605E)) ^ v661;
                              v664 = (24670 * __ROL4__(v663 ^ 0x7F1137F, 4)) ^ __ROL4__(v663, 2) ^ v662 ^ v632;
                              v665 = v637 ^ v663;
                              *(v634 - 4) = v664;
                              v666 = __ROR4__(v664, 8);
                              *v634 = v665;
                              v667 = __ROR4__(v665, 8);
                              *(v634 - 5) = v666;
                              v668 = __ROR4__(v666, 8);
                              *(v634 - 1) = v667;
                              v669 = __ROR4__(v667, 8);
                              *(v634 - 6) = v668;
                              v670 = __ROR4__(v668, 8);
                              *(v634 - 2) = v669;
                              v671 = __ROR4__(v669, 8);
                              *(v634 - 7) = v670;
                              *(v634 - 3) = v671;
                              v630 = __ROR4__(v670, 8);
                              v633 = __ROR4__(v671, 8);
                              v632 = v638;
                              v637 = v639;
                              v634 += 8;
                              --v636;
                            }
                            while ( v636 );
                            v672 = 0LL;
                            v673 = 0LL;
                            v111 = v1522;
                            v674 = v1444;
                            v628 = v1475;
                            v627 = (wchar_t *)v1408;
                            do
                            {
                              v675 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)&v1444[v672]), v673);
                              v673 = v675;
                              v672 += 16LL;
                            }
                            while ( v672 < 0x1C90 );
                            v676 = _mm_xor_si128(v675, _mm_srli_si128(v675, 8));
                            v677 = _mm_xor_si128(v676, _mm_srli_si128(v676, 4));
                            v678 = _mm_xor_si128(v677, _mm_srli_si128(v677, 2));
                            if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_xor_si128(v678, _mm_srli_si128(v678, 1))) == 127LL )
                            {
                              v1630 = v1444;
                              v1631 = 7312LL;
                              v610 = 0;
                              if ( v1444 )
                                v1631 = 7312LL;
                              else
                                v674 = 0LL;
                              v679 = v1786;
                              v680 = 6LL;
                              do
                              {
                                for ( m = 0; m < 0x26; ++m )
                                {
                                  if ( Sizef == m )
                                    *v679 = v674;
                                  v682 = -1LL;
                                  do
                                    ++v682;
                                  while ( v674[v682] );
                                  v674 += v682 + 1;
                                }
                                ++v679;
                                --v680;
                              }
                              while ( v680 );
                              v683 = MemoryAlloc(0x18uLL);
                              SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1632);
                              if ( v683 )
                              {
                                v1632 = v683;
                                *(_OWORD *)v683 = 0LL;
                                v683[2] = 0LL;
                                v684 = 0;
                                Sizeg = 0;
                                v685 = v683;
                                v1476 = v683;
                                v686 = v1793;
                                v1445 = v1793;
                                v1435 = (SIZE_T)v683;
                                v1631 = 7312LL;
                                while ( 2 )
                                {
                                  v687 = 0LL;
                                  v688 = *v686;
                                  v689 = &`CUxDisplayStringsT<CEmptyType>::GetAllPreferredStrings'::`2'::wStringIds;
                                  while ( v688 != *v689 )
                                  {
                                    v687 = (unsigned int)(v687 + 1);
                                    ++v689;
                                    if ( (unsigned int)v687 >= 6 )
                                      goto LABEL_797;
                                  }
                                  v690 = (void *)v1786[v687];
                                  v1518 = v690;
                                  v691 = -1LL;
                                  do
                                    ++v691;
                                  while ( *((_BYTE *)v690 + v691) );
                                  LODWORD(v1275) = 0;
                                  v692 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD))off_1809851C0)(
                                           65001LL,
                                           0LL,
                                           v690,
                                           (unsigned int)(v691 + 1));
                                  LODWORD(v1517) = v692;
                                  if ( !v692 )
                                  {
                                    v696 = GetLastError();
                                    v610 = v696;
                                    if ( v696 > 0 )
                                      v610 = (unsigned __int16)v696 | 0x80070000;
                                    if ( v610 >= 0 )
                                      v610 = -2147467259;
                                    goto LABEL_807;
                                  }
                                  v693 = MemoryAlloc(2LL * v692);
                                  *v1476 = v693;
                                  if ( !v693 )
                                    goto LABEL_783;
                                  v694 = -1LL;
                                  do
                                    ++v694;
                                  while ( *((_BYTE *)v1518 + v694) );
                                  LODWORD(v1275) = (_DWORD)v693;
                                  if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, LPVOID, _QWORD))off_1809851C0)(
                                                        65001LL,
                                                        0LL,
                                                        v1518,
                                                        (unsigned int)(v694 + 1)) )
                                  {
                                    v695 = GetLastError();
                                    v610 = v695;
                                    if ( v695 > 0 )
                                      v610 = (unsigned __int16)v695 | 0x80070000;
                                    if ( v610 >= 0 )
                                      v610 = -2147467259;
                                    goto LABEL_807;
                                  }
                                  v685 = v1476;
                                  v684 = Sizeg;
LABEL_797:
                                  Sizeg = ++v684;
                                  v686 = ++v1445;
                                  v1476 = ++v685;
                                  if ( v684 < 3 )
                                    continue;
                                  break;
                                }
                                v683 = 0LL;
                                v1632 = 0LL;
                                v1627 = (void **)v1435;
                                v1717 = v1373;
                              }
                              else
                              {
                                v683 = 0LL;
                                v1632 = 0LL;
LABEL_783:
                                v610 = -2147024882;
                              }
LABEL_807:
                              if ( v683 )
                              {
                                v697 = 3LL;
                                v1477 = 3LL;
                                v1631 = 7312LL;
                                v1408 = (LPCWSTR)v1361;
                                do
                                {
                                  v698 = (_WORD *)*v683;
                                  if ( *v683 )
                                  {
                                    v699 = -1LL;
                                    do
                                      ++v699;
                                    while ( v698[v699] );
                                    memset(v698, 0, 2 * v699 + 2);
                                    MemoryFree((void *)*v683);
                                    v697 = v1477;
                                  }
                                  ++v683;
                                  v1477 = --v697;
                                }
                                while ( v697 );
                              }
                              v627 = (wchar_t *)v1408;
                            }
                            else
                            {
                              v610 = -1073425151;
                              MemoryFree(v1444);
                            }
                          }
                          v631 = v1631;
LABEL_816:
                          if ( v1630 )
                            memset(v1630, 0, v631);
                          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1632);
                          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1630);
                          SP<unsigned short *,SP_MEM<unsigned short *>>::Reset(&v1629);
                          if ( v610 < 0 )
                            goto LABEL_853;
                          if ( v1627 )
                            v700 = v1627;
                          else
                            v700 = 0LL;
                          v1719 = *v700;
                          if ( v1627 )
                            v701 = v1627;
                          else
                            v701 = 0LL;
                          v1720 = v701[1];
                          if ( v1627 )
                            v702 = v1627;
                          else
                            v702 = 0LL;
                          v1721 = v702[2];
                          v1677 = 0LL;
                          LODWORD(v1677) = 16;
                          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int128 *, _QWORD))off_180985268)(
                                                66LL,
                                                0LL,
                                                &v1677,
                                                0LL) )
                          {
                            v703 = GetLastError();
                            v610 = v703;
                            v123 = 0LL;
                            if ( v703 > 0 )
                              v610 = (unsigned __int16)v703 | 0x80070000;
                            if ( v610 >= 0 )
                              v610 = -2147467259;
                            v1718 = 0;
                            goto LABEL_854;
                          }
                          v1718 = BYTE4(v1677) & 1;
                          v704 = 42;
                          v1374 = 42;
                          switch ( Srch )
                          {
                            case 1:
                              LODWORD(v1516) = 11;
                              break;
                            case 2:
                              v1469 = 15;
                              LODWORD(v1516) = 11;
                              goto LABEL_842;
                            case 3:
                              v704 = 225;
                              LODWORD(v1516) = 225;
                              break;
                            default:
                              goto LABEL_842;
                          }
                          v1469 = v704;
LABEL_842:
                          v705 = 96;
                          Sizeh = 96;
                          memset_0(v1782, 0, 0xDCuLL);
                          v1783 = 220;
                          if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, __int64, _BYTE *))off_1809851E0)(
                                               0LL,
                                               0xFFFFFFFFLL,
                                               v1782) )
                          {
                            v705 = v1784;
                            *(_QWORD *)&v1676 = 0LL;
                            *((_QWORD *)&v1676 + 1) = v1785;
                            if ( v1784 < 0x60u )
                              v705 = 96;
                            Sizeh = v705;
                          }
                          v706 = v628;
                          if ( Srch == 1 )
                            v706 = v627;
                          v1409 = v706;
                          memset_0(v1773, 0, 0x5CuLL);
                          v610 = 0;
                          v1478 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(
                                            0LL,
                                            0LL,
                                            1027LL);
                          if ( v1478 )
                          {
                            v1773[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                               v1469,
                                               v705,
                                               72LL);
                            v1773[4] = 400;
                            v1774 = 5;
                            StringCchCopyW(v1775, 32LL, v1409);
                            v713 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1773);
                            if ( v713 )
                            {
                              v1722 = (const WCHAR *)v713;
                            }
                            else
                            {
                              v610 = GetLastError();
                              v714 = v610 < 0;
                              if ( v610 > 0 )
                              {
                                v610 = (unsigned __int16)v610 | 0x80070000;
                                v714 = v610 < 0;
                              }
                              if ( !v714 )
                                v610 = -2147467259;
                            }
                            ((void (__fastcall *)(_QWORD, LPVOID))off_180985260)(0LL, v1478);
                          }
                          else
                          {
                            v610 = GetLastError();
                            v707 = v610 < 0;
                            if ( v610 > 0 )
                            {
                              v610 = (unsigned __int16)v610 | 0x80070000;
                              v707 = v610 < 0;
                            }
                            if ( !v707 )
                            {
                              v610 = -2147467259;
LABEL_853:
                              v123 = 0LL;
LABEL_854:
                              v608 = Srch;
LABEL_855:
                              ((void (__fastcall *)(_QWORD, LPCWSTR))off_180985260)(0LL, v1385);
                              goto LABEL_856;
                            }
                          }
                          if ( v610 < 0 )
                            goto LABEL_853;
                          if ( Srch == 1 )
                            v628 = v627;
                          memset_0(v1776, 0, 0x5CuLL);
                          v610 = 0;
                          v123 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(0LL, 0LL, 1027LL);
                          if ( !v123 )
                          {
                            v715 = GetLastError();
                            v610 = v715;
                            if ( v715 > 0 )
                              v610 = (unsigned __int16)v715 | 0x80070000;
                            if ( v610 >= 0 )
                              v610 = -2147467259;
                            goto LABEL_854;
                          }
                          v1776[0] = -(int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                             (unsigned int)v1516,
                                             v705,
                                             72LL);
                          v1776[4] = 400;
                          v1777 = 5;
                          StringCchCopyW(v1778, 32LL, v628);
                          v716 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1776);
                          if ( v716 )
                          {
                            v1723 = (const WCHAR *)v716;
                          }
                          else
                          {
                            v717 = GetLastError();
                            v610 = v717;
                            if ( v717 > 0 )
                              v610 = (unsigned __int16)v717 | 0x80070000;
                            if ( v610 >= 0 )
                              v610 = -2147467259;
                          }
                          ((void (__fastcall *)(_QWORD, __int64))off_180985260)(0LL, v123);
                          v123 = 0LL;
                          if ( v610 < 0 )
                            goto LABEL_854;
                          v718 = 0;
                          if ( Srch != 1 )
                          {
                            if ( Srch == 2 )
                            {
                              LODWORD(v123) = SDWORD2(v1676) / 4;
                              v718 = 0;
LABEL_900:
                              *((_QWORD *)&v1739 + 1) = __PAIR64__(v718, v123);
                              if ( Srch == 1 )
                              {
                                v720 = 150;
                                LODWORD(v1516) = 32;
                              }
                              else
                              {
                                if ( (unsigned int)(Srch - 2) >= 2 )
                                {
                                  v1374 = v1525;
                                  v719 = v1525;
                                  v720 = v1469;
                                  goto LABEL_907;
                                }
                                v720 = 0;
                                v1374 = 0;
                                LODWORD(v1516) = 0;
                              }
                              v719 = 0;
                              v1469 = v720;
LABEL_907:
                              v721 = v123 - v720 - v719;
                              DWORD2(v1727) = v721;
                              DWORD2(v1726) = v721;
                              v722 = v1719;
                              v610 = 0;
                              v1410 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_180985178)(
                                                 v1385,
                                                 v1722);
                              LODWORD(v1275) = 3152;
                              if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *))off_1809851D8)(
                                                    v1385,
                                                    v722,
                                                    0xFFFFFFFFLL,
                                                    &v1726) )
                                v610 = -2147467259;
                              if ( v1410 )
                                ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1385, v1410);
                              if ( v610 < 0 )
                                goto LABEL_853;
                              v723 = v1720;
                              v610 = 0;
                              v1411 = (LPCWSTR)((__int64 (__fastcall *)(LPCWSTR, const WCHAR *))off_180985178)(
                                                 v1385,
                                                 v1723);
                              LODWORD(v1275) = 3152;
                              if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, __int128 *))off_1809851D8)(
                                                    v1385,
                                                    v723,
                                                    0xFFFFFFFFLL,
                                                    &v1727) )
                                v610 = -2147467259;
                              if ( v1411 )
                                ((void (__fastcall *)(LPCWSTR, LPCWSTR))off_180985178)(v1385, v1411);
                              if ( v610 < 0 )
                                goto LABEL_853;
                              if ( (unsigned int)(Srch - 2) <= 1 )
                              {
                                v721 = DWORD2(v1727);
                                if ( SDWORD2(v1726) > SDWORD2(v1727) )
                                  v721 = DWORD2(v1726);
                              }
                              if ( v1717 )
                              {
                                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                  &v1726,
                                  v721 + v719 - DWORD2(v1726),
                                  v1374);
                                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                  &v1727,
                                  v721 + v719 - DWORD2(v1727),
                                  (unsigned int)(v1516 + HIDWORD(v1726)));
                              }
                              else
                              {
                                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(&v1726, v1469, v1374);
                                ((void (__fastcall *)(__int128 *, _QWORD, _QWORD))off_180985250)(
                                  &v1727,
                                  v1469,
                                  (unsigned int)(v1516 + HIDWORD(v1726)));
                              }
                              v608 = Srch;
                              if ( (unsigned int)(Srch - 2) <= 1 )
                              {
                                *((_QWORD *)&v1739 + 1) = __PAIR64__(HIDWORD(v1727), v721);
                                v1725 = -5723992;
                              }
                              else if ( Srch == 1 )
                              {
                                v1725 = 0xFFFFFF;
                                memset_0(v1779, 0, 0x5CuLL);
                                v610 = 0;
                                v724 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851F8)(
                                         0LL,
                                         0LL,
                                         1027LL);
                                if ( v724 )
                                {
                                  v726 = Sizeh;
                                  v1779[0] = -(int)((__int64 (__fastcall *)(__int64, _QWORD))off_1809851B8)(11LL, Sizeh);
                                  v1779[4] = 400;
                                  v1780 = 5;
                                  StringCchCopyW(v1781, 32LL, v1289);
                                  v727 = ((__int64 (__fastcall *)(_DWORD *))off_180985120)(v1779);
                                  if ( v727 )
                                  {
                                    v1724 = v727;
                                  }
                                  else
                                  {
                                    v610 = GetLastError();
                                    v728 = v610 < 0;
                                    if ( v610 > 0 )
                                    {
                                      v610 = (unsigned __int16)v610 | 0x80070000;
                                      v728 = v610 < 0;
                                    }
                                    if ( !v728 )
                                      v610 = -2147467259;
                                  }
                                  ((void (__fastcall *)(_QWORD, __int64))off_180985260)(0LL, v724);
                                }
                                else
                                {
                                  v610 = GetLastError();
                                  v725 = v610 < 0;
                                  if ( v610 > 0 )
                                  {
                                    v610 = (unsigned __int16)v610 | 0x80070000;
                                    v725 = v610 < 0;
                                  }
                                  if ( !v725 )
                                  {
                                    v610 = -2147467259;
                                    v123 = 0LL;
                                    goto LABEL_855;
                                  }
                                  v726 = Sizeh;
                                }
                                if ( v610 < 0 )
                                  goto LABEL_853;
                                v1730 = v721;
                                v729 = v1721;
                                v610 = 0;
                                v730 = ((__int64 (__fastcall *)(LPCWSTR, __int64))off_180985178)(v1385, v1724);
                                LODWORD(v1275) = 1120;
                                if ( !(unsigned int)((__int64 (__fastcall *)(LPCWSTR, void *, __int64, unsigned int *))off_1809851D8)(
                                                      v1385,
                                                      v729,
                                                      0xFFFFFFFFLL,
                                                      &v1728) )
                                  v610 = -2147467259;
                                if ( v730 )
                                  ((void (__fastcall *)(LPCWSTR, __int64))off_180985178)(v1385, v730);
                                v123 = 0LL;
                                if ( v610 < 0 )
                                  goto LABEL_854;
                                v731 = v1730 + 24;
                                if ( (int)(v1730 + 24) < 90 )
                                  v731 = 90;
                                v1730 = v731;
                                v1731 = 32;
                                v1728 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                          v1728,
                                          v726,
                                          96LL);
                                v1729 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                          v1729,
                                          v726,
                                          96LL);
                                v1730 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                          v1730,
                                          v726,
                                          96LL);
                                v1731 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))off_1809851B8)(
                                          v1731,
                                          v726,
                                          96LL);
                                if ( v1717 )
                                {
                                  v732 = (unsigned int)v1726;
                                  if ( (int)v1726 >= (int)v1727 )
                                    v732 = (unsigned int)v1727;
                                }
                                else
                                {
                                  v733 = DWORD2(v1726);
                                  if ( SDWORD2(v1726) <= SDWORD2(v1727) )
                                    v733 = DWORD2(v1727);
                                  v732 = v1728 + v733 - v1730;
                                }
                                ((void (__fastcall *)(unsigned int *, __int64, _QWORD))off_180985250)(
                                  &v1728,
                                  v732,
                                  (unsigned int)(HIDWORD(v1727) + 36));
                                v608 = Srch;
                              }
                              v734 = v1717;
                              v735 = HIDWORD(v1739);
                              v736 = DWORD2(v1739);
                              switch ( v608 )
                              {
                                case 1:
                                  v123 = 0LL;
                                  *(_QWORD *)&v1739 = 0LL;
                                  break;
                                case 2:
                                  v1750 = 0LL;
                                  v1751 = 0LL;
                                  v1752 = 0LL;
                                  v738 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180985248)(0LL, 1LL);
                                  LODWORD(v1750) = 40;
                                  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_180985208)(
                                                       v738,
                                                       &v1750) )
                                  {
                                    ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1751 + 4);
                                    ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1751 + 12);
                                    if ( v734 )
                                      v739 = DWORD1(v1751) + 5 * HIDWORD(v1751) / 100;
                                    else
                                      v739 = 95 * (HIDWORD(v1751) - v736) / 100;
                                    LODWORD(v1739) = v739;
                                    DWORD1(v1739) = 95 * ((int)v1752 - v735) / 100;
                                  }
                                  break;
                                case 3:
                                  v1747 = 0LL;
                                  v1748 = 0LL;
                                  v1749 = 0LL;
                                  v737 = ((__int64 (__fastcall *)(_QWORD, __int64))off_180985248)(0LL, 1LL);
                                  LODWORD(v1747) = 40;
                                  v123 = 0LL;
                                  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int128 *))off_180985208)(
                                                       v737,
                                                       &v1747) )
                                  {
                                    ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1748 + 4);
                                    ((void (__fastcall *)(_QWORD, char *))off_180985240)(0LL, (char *)&v1748 + 12);
                                    LODWORD(v1739) = 50 * (HIDWORD(v1748) - v736) / 100;
                                    DWORD1(v1739) = 50 * ((int)v1749 - v735) / 100;
                                  }
                                  break;
                                default:
                                  v123 = 0LL;
                                  break;
                              }
                              v610 = 0;
                              goto LABEL_855;
                            }
                            if ( Srch != 3 )
                              goto LABEL_900;
                          }
                          LODWORD(v123) = DWORD2(v1676);
                          v718 = HIDWORD(v1676);
                          goto LABEL_900;
                        }
                        v611 = v614;
                        if ( v1525 )
                        {
                          for ( n = 0; n < v1525; ++n )
                          {
                            *v614 = ((__int64 (__fastcall *)(char *, _QWORD))off_1809851B0)(v613, 0LL);
                            v616 = -1LL;
                            do
                              ++v616;
                            while ( *(_WORD *)&v613[2 * v616] );
                            v613 += 2 * v616 + 2;
                            ++v614;
                          }
                        }
                        *v614 = 1033;
                        v1629 = v611;
                        ii = v1525 + 1;
                      }
                      else
                      {
                        v610 = -2147024882;
                      }
                      v1634 = 0LL;
                      goto LABEL_746;
                    }
                    *((_BYTE *)v1384 + 823) = 0;
                    memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                    if ( !*(_BYTE *)v1384 )
                      goto LABEL_720;
                    v1628 = v1384;
                    while ( 1 )
                    {
                      v597 = v593;
                      v598 = -1LL;
                      do
                        ++v598;
                      while ( v593[v598] );
                      v599 = &v593[v598];
                      v600 = (char *)&WARBIRD::g_arModuleInfo + 24 * Sizee;
                      if ( !GetModuleHandleExW(0, v597, (HMODULE *)v600) )
                        break;
                      v594 = 0;
                      if ( **(_WORD **)v600 == 23117
                        && (v601 = *(int *)(*(_QWORD *)v600 + 60LL), (unsigned int)v601 < 0x10000000)
                        && (v602 = *(_QWORD *)v600 + v601, v602 >= *(_QWORD *)v600)
                        && *(_DWORD *)v602 == 17744 )
                      {
                        if ( ((*(_WORD *)(v602 + 24) - 267) & 0xFEFF) != 0 )
                        {
                          v594 = -1073741811;
                        }
                        else
                        {
                          *(_QWORD *)(v600 + 12) = *(_QWORD *)(v602 + 136);
                          *((_DWORD *)v600 + 2) = *(_DWORD *)(v602 + 80);
                        }
                      }
                      else
                      {
                        v594 = -1073741701;
                      }
                      Srcg = *(_DWORD *)(v599 + 1);
                      v593 = v599 + 3;
                      v603 = 0;
                      for ( ii = 0; v603 < Srcg; ii = v603 )
                      {
                        v604 = (const CHAR *)v593;
                        v605 = -1LL;
                        do
                          ++v605;
                        while ( *((_BYTE *)v593 + v605) );
                        v593 = (WCHAR *)((char *)v593 + v605 + 1);
                        if ( v594 >= 0 )
                        {
                          v606 = (void **)GetProcAddress(*(HMODULE *)v600, v604);
                          if ( !v606 )
                            goto LABEL_719;
                          (&WARBIRD::g_FuncAddress)[v1513] = v606;
                          v603 = ii;
                        }
                        ++v1513;
                        ++v603;
                      }
                      ++Sizee;
                      if ( !*(_BYTE *)v593 )
                        goto LABEL_719;
                    }
                    v594 = -1073741702;
LABEL_719:
                    v593 = v1628;
                    if ( v1628 )
                    {
LABEL_720:
                      v607 = GetProcessHeap();
                      HeapFree(v607, 0, v593);
                    }
                    if ( v594 < 0 )
                      goto LABEL_691;
                    v549 = g_WarbirdSecureFunctionsRefCount;
                  }
                  g_WarbirdSecureFunctionsRefCount = v549 + 1;
                  goto LABEL_724;
                }
                *((_BYTE *)v1407 + 823) = 0;
                memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
                if ( !*(_BYTE *)v1407 )
                  goto LABEL_677;
                v1626 = v1407;
                while ( 1 )
                {
                  v538 = v534;
                  v539 = -1LL;
                  do
                    ++v539;
                  while ( v534[v539] );
                  v540 = &v534[v539];
                  v541 = (char *)&WARBIRD::g_arModuleInfo + 24 * v1512;
                  if ( !GetModuleHandleExW(0, v538, (HMODULE *)v541) )
                    break;
                  v535 = 0;
                  if ( **(_WORD **)v541 == 23117
                    && (v542 = *(int *)(*(_QWORD *)v541 + 60LL), (unsigned int)v542 < 0x10000000)
                    && (v543 = *(_QWORD *)v541 + v542, v543 >= *(_QWORD *)v541)
                    && *(_DWORD *)v543 == 17744 )
                  {
                    if ( ((*(_WORD *)(v543 + 24) - 267) & 0xFEFF) != 0 )
                    {
                      v535 = -1073741811;
                    }
                    else
                    {
                      *(_QWORD *)(v541 + 12) = *(_QWORD *)(v543 + 136);
                      *((_DWORD *)v541 + 2) = *(_DWORD *)(v543 + 80);
                    }
                  }
                  else
                  {
                    v535 = -1073741701;
                  }
                  LODWORD(v1516) = *(_DWORD *)(v540 + 1);
                  v534 = v540 + 3;
                  v544 = 0;
                  for ( ii = 0; v544 < (unsigned int)v1516; ii = v544 )
                  {
                    v545 = (const CHAR *)v534;
                    v546 = -1LL;
                    do
                      ++v546;
                    while ( *((_BYTE *)v534 + v546) );
                    v534 = (WCHAR *)((char *)v534 + v546 + 1);
                    if ( v535 >= 0 )
                    {
                      v547 = (void **)GetProcAddress(*(HMODULE *)v541, v545);
                      if ( !v547 )
                        goto LABEL_675;
                      (&WARBIRD::g_FuncAddress)[v1468] = v547;
                      v544 = ii;
                    }
                    ++v1468;
                    ++v544;
                  }
                  ++v1512;
                  v491 = 0;
                  if ( !*(_BYTE *)v534 )
                    goto LABEL_676;
                }
                v535 = -1073741702;
LABEL_675:
                v491 = 0;
LABEL_676:
                v534 = v1626;
                if ( v1626 )
                {
LABEL_677:
                  v548 = GetProcessHeap();
                  HeapFree(v548, 0, v534);
                }
                if ( v535 < 0 )
                  goto LABEL_647;
                v490 = g_WarbirdSecureFunctionsRefCount;
              }
              g_WarbirdSecureFunctionsRefCount = v490 + 1;
              goto LABEL_681;
            }
            HIDWORD(v1664) = dwBytes;
            v140 = dwBytes;
            v141 = GetProcessHeap();
            v142 = HeapAlloc(v141, 8u, v140);
            if ( !v142 )
            {
              v111 = -1073741801;
LABEL_125:
              LODWORD(v1522) = v111;
LABEL_126:
              v115 = v108;
              goto LABEL_127;
            }
            lpMem = v142;
            LODWORD(v1664) = 0;
            v143 = v142;
            pcchLength[1] = (size_t)v142;
            lpModuleNamea = v112;
            Size = 8;
            v1321 = v110;
            v144 = RtlULongLongAdd((unsigned __int64)v142, 4LL, (unsigned __int64 *)&v1659);
            v111 = v144;
            LODWORD(v1522) = v144;
            if ( v144 < 0 )
            {
              v115 = v108;
              goto LABEL_127;
            }
            if ( v143 + 2 > (_DWORD *)((char *)v143 + HIDWORD(v1664)) )
            {
LABEL_169:
              v111 = -1073741789;
              goto LABEL_125;
            }
            *v143 = 4;
            *v1659 = 0;
            v146 = v1664 + 1;
            LODWORD(v1664) = v1664 + 1;
            if ( !v145 )
              goto LABEL_166;
            if ( lpMem )
            {
              v149 = (int *)lpMem;
              v1600 = (int *)lpMem;
              ii = 0;
              if ( v146 )
              {
                do
                {
                  v111 = RtlUIntAdd(4u, *v149, &v1589);
                  LODWORD(v1522) = v111;
                  if ( v111 < 0 )
                    goto LABEL_144;
                  v111 = RtlULongLongAdd((unsigned __int64)v149, v1589, (unsigned __int64 *)&v1600);
                  LODWORD(v1522) = v111;
                  if ( v111 < 0 )
                    goto LABEL_144;
                  ++ii;
                  v149 = v1600;
                }
                while ( ii < v151 );
                lpModuleNamea = v112;
                Size = v150;
                v1321 = v110;
              }
              v111 = RtlULongLongAdd((unsigned __int64)v149, 4LL, (unsigned __int64 *)&v1668);
              LODWORD(v1522) = v111;
              if ( v111 >= 0 )
              {
                if ( (char *)v149 + v152 + 4 > (char *)lpMem + HIDWORD(v1664) )
                  goto LABEL_169;
                *v149 = v152;
                memcpy_0(v1668, v110, v152);
                v147 = 4;
                v148 = v1664 + 1;
                LODWORD(v1664) = v1664 + 1;
                goto LABEL_184;
              }
            }
            else
            {
              v111 = RtlUIntAdd(4u, v145, (unsigned int *)&v1588);
              LODWORD(v1522) = v111;
              if ( v111 < 0 )
                goto LABEL_144;
              v111 = RtlUIntAdd(HIDWORD(v1664), v1588, (unsigned int *)&v1664 + 1);
              LODWORD(v1522) = v111;
              if ( v111 >= 0 )
              {
                v148 = v1664 + 1;
                LODWORD(v1664) = v1664 + 1;
LABEL_184:
                if ( !v112 )
                {
                  if ( Size )
                    goto LABEL_166;
LABEL_188:
                  if ( lpMem )
                  {
                    v155 = (int *)lpMem;
                    v1601 = (int *)lpMem;
                    ii = 0;
                    if ( v148 )
                    {
                      do
                      {
                        v111 = RtlUIntAdd(4u, *v155, &v1591);
                        LODWORD(v1522) = v111;
                        if ( v111 < 0 )
                          goto LABEL_144;
                        v111 = RtlULongLongAdd(v156, v1591, (unsigned __int64 *)&v1601);
                        LODWORD(v1522) = v111;
                        if ( v111 < 0 )
                          goto LABEL_144;
                        ++ii;
                        v155 = v1601;
                      }
                      while ( ii < v157 );
                      lpModuleNamea = v112;
                      v1321 = v110;
                    }
                    v111 = RtlULongLongAdd((unsigned __int64)v155, 4LL, (unsigned __int64 *)&v1669);
                    LODWORD(v1522) = v111;
                    if ( v111 >= 0 )
                    {
                      if ( (char *)v158 + Size + 4 > (char *)lpMem + HIDWORD(v1664) )
                        goto LABEL_169;
                      *v158 = Size;
                      if ( v112 )
                        memcpy_0(v1669, v112, Size);
                      v153 = 1LL;
                      v154 = v1664 + 1;
                      LODWORD(v1664) = v1664 + 1;
LABEL_203:
                      if ( lpMem )
                      {
                        v161 = (int *)lpMem;
                        v1602 = (int *)lpMem;
                        ii = 0;
                        if ( v154 )
                        {
                          do
                          {
                            v111 = RtlUIntAdd(4u, *v161, &v1531);
                            LODWORD(v1522) = v111;
                            if ( v111 < 0 )
                              goto LABEL_144;
                            v111 = RtlULongLongAdd((unsigned __int64)v161, v1531, (unsigned __int64 *)&v1602);
                            LODWORD(v1522) = v111;
                            if ( v111 < 0 )
                              goto LABEL_144;
                            ++ii;
                            v161 = v1602;
                          }
                          while ( ii < v162 );
                          lpModuleNamea = v112;
                          v1321 = v110;
                        }
                        v111 = RtlULongLongAdd((unsigned __int64)v161, 4LL, (unsigned __int64 *)&v1670);
                        LODWORD(v1522) = v111;
                        if ( v111 >= 0 )
                        {
                          if ( v161 + 3 > (int *)((char *)lpMem + HIDWORD(v1664)) )
                            goto LABEL_169;
                          *v161 = 8;
                          *v1670 = v1443;
                          v160 = v1664;
                          v153 = (unsigned int)(v163 - 3);
LABEL_206:
                          LODWORD(v1664) = v153 + v160;
                          if ( StringCchLengthW(L"Shell-Windowing-ShowMaximized", v159, &v1603) < 0 )
                          {
                            v111 = -1073741762;
                            goto LABEL_125;
                          }
                          v111 = RtlULongLongAdd(v1603, v153, &v1603);
                          LODWORD(v1522) = v111;
                          if ( v111 >= 0 )
                          {
                            if ( 2 * (_DWORD)v1603 )
                            {
                              if ( !lpMem )
                              {
                                v111 = RtlUIntAdd(v165, 2 * (int)v1603, (unsigned int *)&v1554);
                                LODWORD(v1522) = v111;
                                if ( v111 >= 0 )
                                {
                                  v111 = RtlUIntAdd(HIDWORD(v1664), v1554, (unsigned int *)&v1664 + 1);
                                  LODWORD(v1522) = v111;
                                  v164 = v1664;
                                  if ( v111 >= 0 )
                                  {
                                    v164 = v153 + v1664;
                                    LODWORD(v1664) = v153 + v1664;
                                    v111 = 0;
                                    LODWORD(v1522) = 0;
                                  }
                                }
                                goto LABEL_234;
                              }
                              v166 = (int *)lpMem;
                              v1604 = (int *)lpMem;
                              if ( v164 )
                              {
                                do
                                {
                                  v111 = RtlUIntAdd(4u, *v166, &v1532);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_234;
                                  v111 = RtlULongLongAdd((unsigned __int64)v166, v1532, (unsigned __int64 *)&v1604);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_234;
                                  v166 = v1604;
                                }
                                while ( v167 + 1 < v164 );
                              }
                              v111 = RtlULongLongAdd((unsigned __int64)v166, 4LL, (unsigned __int64 *)&v1671);
                              LODWORD(v1522) = v111;
                              if ( v111 < 0 )
                                goto LABEL_234;
                              if ( (char *)v166 + v168 + 4 <= (char *)lpMem + HIDWORD(v1664) )
                              {
                                *v166 = v168;
                                memcpy_0(v1671, L"Shell-Windowing-ShowMaximized", (unsigned int)v168);
                                v164 = v1664 + 1;
                                LODWORD(v1664) = v1664 + 1;
                                goto LABEL_234;
                              }
                              v111 = -1073741789;
                            }
                            else
                            {
                              v111 = -1073741811;
                            }
                            LODWORD(v1522) = v111;
                          }
LABEL_234:
                          v115 = v108;
                          if ( v111 < 0 )
                            goto LABEL_127;
                          if ( lpMem )
                          {
                            v172 = (int *)lpMem;
                            v1605 = (int *)lpMem;
                            ii = 0;
                            if ( v164 )
                            {
                              do
                              {
                                v111 = RtlUIntAdd(4u, *v172, &v1534);
                                LODWORD(v1522) = v111;
                                if ( v111 < 0 )
                                  goto LABEL_144;
                                v111 = RtlULongLongAdd((unsigned __int64)v172, v1534, (unsigned __int64 *)&v1605);
                                LODWORD(v1522) = v111;
                                if ( v111 < 0 )
                                  goto LABEL_144;
                                ++ii;
                                v172 = v1605;
                              }
                              while ( ii < v173 );
                              lpModuleNamea = v112;
                              v1321 = v110;
                            }
                            v111 = RtlULongLongAdd((unsigned __int64)v172, 4LL, (unsigned __int64 *)&v1672);
                            LODWORD(v1522) = v111;
                            if ( v111 >= 0 )
                            {
                              if ( v172 + 2 > (int *)((char *)lpMem + HIDWORD(v1664)) )
                                goto LABEL_169;
                              *v172 = v169;
                              *v1672 = v108;
                              v170 = v169 - 3;
                              v171 = v169 - 3 + v1664;
                              LODWORD(v1664) = v171;
LABEL_248:
                              if ( lpMem )
                              {
                                v175 = (int *)lpMem;
                                v1606 = (int *)lpMem;
                                ii = 0;
                                if ( v171 )
                                {
                                  do
                                  {
                                    v111 = RtlUIntAdd(4u, *v175, &v1536);
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_144;
                                    v111 = RtlULongLongAdd((unsigned __int64)v175, v1536, (unsigned __int64 *)&v1606);
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_144;
                                    ++ii;
                                    v175 = v1606;
                                  }
                                  while ( ii < v176 );
                                  lpModuleNamea = v112;
                                  v1321 = v110;
                                  v169 = 4LL;
                                }
                                v111 = RtlULongLongAdd((unsigned __int64)v175, v169, (unsigned __int64 *)&v1673);
                                LODWORD(v1522) = v111;
                                if ( v111 >= 0 )
                                {
                                  if ( v175 + 2 > (int *)((char *)lpMem + HIDWORD(v1664)) )
                                    goto LABEL_169;
                                  *v175 = v174;
                                  *v1673 = v174;
                                  LODWORD(v1664) = v1664 + 1;
LABEL_261:
                                  v111 = RtlUIntAdd(v174, v174, &v1537);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_126;
                                  v178 = v1537;
                                  v1538 = v1537;
                                  v111 = RtlUIntAdd(v177, 8, (unsigned int *)&v1539);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_126;
                                  v111 = RtlUIntAdd(v178, v1539, &v1538);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_273;
                                  v111 = RtlUIntAdd(v179, v179, (unsigned int *)&v1540);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_126;
                                  v111 = RtlUIntAdd(v1538, v1540, &v1538);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_273;
                                  v111 = RtlUIntAdd(v180, v180, (unsigned int *)&v1560);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_126;
                                  v111 = RtlUIntAdd(v1538, v1560, &v1538);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_273;
                                  v111 = RtlUIntAdd(v181, v181, (unsigned int *)&v1541);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_126;
                                  v111 = RtlUIntAdd(v1538, v1541, &v1538);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_273;
                                  v111 = RtlUIntAdd(v182, v182, (unsigned int *)&v1542);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_126;
                                  v111 = RtlUIntAdd(v1538, v1542, &v1538);
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                  {
LABEL_273:
                                    v115 = v108;
                                    goto LABEL_127;
                                  }
                                  v184 = v1538;
                                  ii = v1538;
                                  v185 = v183;
                                  v1432 = (SIZE_T)v183;
                                  v1518 = v183;
                                  v1521 = (SIZE_T)v183;
                                  v1505 = (int)v183;
                                  v1520 = v183;
                                  LODWORD(v1516) = (_DWORD)v183;
                                  v1524 = (SIZE_T)v183;
                                  v1526 = v183;
                                  Src = (void *)__rdtsc();
                                  v1543 = 8;
                                  v188 = RtlUIntAdd(8u, SHIDWORD(v1664), &v1543);
                                  if ( v188 >= 0 )
                                  {
                                    v189 = (v1543 + 7) & 0xFFFFFFF8;
                                    if ( v189 < v1543 )
                                    {
                                      v111 = -805306219;
LABEL_277:
                                      LODWORD(v1522) = v111;
                                      v115 = v1517;
                                      goto LABEL_127;
                                    }
                                    v1543 = (v1543 + 7) & 0xFFFFFFF8;
                                    LODWORD(v1522) = v184;
                                    v190 = v189;
                                    v191 = GetProcessHeap();
                                    v192 = (WCHAR *)HeapAlloc(v191, 8u, v190);
                                    v1379 = v192;
                                    if ( !v192 )
                                    {
                                      v111 = -805306345;
                                      LODWORD(v1522) = -805306345;
                                      v115 = v1517;
                                      goto LABEL_127;
                                    }
                                    v1607[0] = v192;
                                    *(_DWORD *)v192 = v1664;
                                    v188 = RtlULongLongAdd((unsigned __int64)v192, 4LL, (unsigned __int64 *)v1607);
                                    v1471 = v193;
                                    v184 = v1522;
                                    ii = v1522;
                                    lpModuleNamea = v112;
                                    v1321 = v110;
                                    if ( v188 < 0
                                      || (v194 = v1607[0],
                                          *(_DWORD *)v1607[0] = HIDWORD(v1664),
                                          v188 = RtlULongLongAdd((unsigned __int64)v194, 4LL, (unsigned __int64 *)v1607),
                                          v1471 = v195,
                                          ii = v184,
                                          lpModuleNamea = v112,
                                          v1321 = v110,
                                          v188 < 0) )
                                    {
                                      v196 = GetProcessHeap();
                                      HeapFree(v196, 0, v1471);
                                      v186 = (unsigned int)v185;
                                    }
                                    else
                                    {
                                      *(_QWORD *)&v195[v1543 - 8] = Src;
                                      memcpy_0(v1607[0], lpMem, HIDWORD(v1664));
                                      v185 = (unsigned __int8 *)v1379;
                                      v1432 = (SIZE_T)v1379;
                                      v186 = v1543;
                                      ii = v184;
                                      lpModuleNamea = v112;
                                      v1321 = v110;
                                    }
                                    v187 = 0LL;
                                  }
                                  v111 = v188 | 0x10000000;
                                  LODWORD(v1522) = v111;
                                  if ( v111 < 0 )
                                    goto LABEL_395;
                                  v1472 = v187;
                                  if ( !v185 )
                                  {
                                    v111 = -805306355;
                                    goto LABEL_277;
                                  }
                                  v197 = v186;
                                  v1380 = (LPCWSTR)v186;
                                  if ( !v186
                                    || (v1357 = v186 + 8, v198 = (char *)MemoryAlloc(v186 + 8LL), (Srca = v198) == 0LL) )
                                  {
                                    v111 = -805306367;
                                    LODWORD(v1522) = -805306367;
                                    goto LABEL_396;
                                  }
                                  v199 = 0;
                                  v1276 = 0;
                                  v200 = 0LL;
                                  if ( v197 )
                                  {
                                    do
                                      v199 ^= v185[v200++];
                                    while ( v200 < v197 );
                                    v1276 = v199;
                                  }
                                  v1732 = 0xC81ECB17B1B54A58uLL;
                                  v201 = v185;
                                  v202 = v198;
                                  v1278 = (size_t)v198;
                                  v203 = 0;
                                  v204 = -1;
                                  Sizea = 0;
                                  LODWORD(v1522) = 0;
                                  v205 = v197 & 7;
                                  if ( (v197 & 7) != 0 )
                                  {
                                    v206 = 0;
                                    v207 = 0;
                                    v1460 = 0;
                                    v208 = 56;
                                    do
                                    {
                                      v209 = *v201++;
                                      if ( v207 >= 4 )
                                        v206 |= v209 << v208;
                                      else
                                        v203 |= v209 << (v208 - 32);
                                      Sizea = v206;
                                      LODWORD(v1522) = v203;
                                      v207 = v1460 + 1;
                                      v1460 = v207;
                                      v208 -= 8;
                                    }
                                    while ( (int)v207 < (int)v205 );
                                    v203 ^= 0xB17A307A;
                                    v210 = v206 ^ 0x42F6B18D;
                                    v211 = v203;
                                    v212 = v210;
                                    v1461 = 0;
                                    ii = v184;
                                    lpModuleNamea = v112;
                                    v1321 = v110;
                                    v1432 = (SIZE_T)v185;
                                    v197 = (unsigned __int64)v1380;
                                    v213 = (_BYTE *)v1278;
                                    do
                                    {
                                      v1279 = (size_t)(v213 + 1);
                                      if ( v1461 >= 4 )
                                      {
                                        v212 = __ROL4__(v212, 8);
                                        v214 = v212;
                                      }
                                      else
                                      {
                                        v211 = __ROL4__(v211, 8);
                                        v214 = v211;
                                      }
                                      *v213 = v214;
                                      ++v1461;
                                      ++v213;
                                    }
                                    while ( v1461 < (int)v205 );
                                    v202 = (char *)v1279;
                                    v199 = v1276;
                                    v184 = ii;
                                    if ( v205 <= 4 )
                                    {
                                      v204 = 0;
                                      if ( v205 >= 4 )
                                        goto LABEL_309;
                                      v203 = v203 >> (8 * (4 - v205)) << (8 * (4 - v205));
                                    }
                                    else
                                    {
                                      v204 = v210 >> (8 * (8 - v205)) << (8 * (8 - v205));
                                    }
                                    v202 = (char *)v1279;
                                  }
LABEL_309:
                                  if ( v197 >> 3 )
                                  {
                                    v215 = v202 + 7;
                                    v216 = v201 + 2;
                                    v217 = v197 >> 3;
                                    v218 = Sizea;
                                    v219 = v1522;
                                    v220 = WORD2(v1732);
                                    do
                                    {
                                      v221 = v216[1] | ((*v216 | ((*(v216 - 1) | (*(v216 - 2) << 8)) << 8)) << 8);
                                      v222 = v216[5] | ((v216[4] | ((v216[3] | (v216[2] << 8)) << 8)) << 8);
                                      v223 = v222 ^ v204;
                                      v224 = HIDWORD(v1732) ^ (v223 - 19032) ^ v221 ^ v203;
                                      v225 = (__ROR4__(v224 ^ HIDWORD(v1732), 15) * WORD1(v1732) + __ROR4__(v224, 7)) ^ v223;
                                      v226 = (__ROR4__(v225 - 1313519016, 9) * v220 - __ROR4__(v225, 10)) ^ v224;
                                      v227 = (__ROL4__(v226 ^ v220, 4) * HIWORD(v1732) + __ROL4__(v226, 5)) ^ v225;
                                      v228 = (HIDWORD(v1732) - (v227 ^ 0xB1B54A58)) ^ v226;
                                      v229 = (WORD1(v1732) * (v228 - 19032) - (v228 >> 6)) ^ v227;
                                      v230 = (19032 * (v220 ^ __ROR4__(v229, 15))) ^ v228;
                                      v231 = (v220 * (HIWORD(v1732) + __ROR4__(~v230, 3))) ^ v229;
                                      v232 = (v231 - HIDWORD(v1732) - 19032) ^ v230;
                                      v233 = (WORD1(v1732) * (v232 ^ HIWORD(v1732))) ^ __ROR4__(v232, 10) ^ v231;
                                      v234 = (__ROL4__(v233 ^ 0x4A58, 6) * v220) ^ __ROR4__(v233, 3) ^ v232;
                                      v235 = (19032 * (__ROR4__(v234, 15) - HIWORD(v1732))) ^ v233;
                                      v236 = (v235 >> 15) ^ (19032 * __ROL4__(v235 - v220, 3)) ^ (v235 >> 1) ^ (19032 * (v235 ^ HIWORD(v1732))) ^ v234;
                                      v237 = (WORD1(v1732) * (v236 - v220) - (v236 >> 13)) ^ v235;
                                      v238 = (__ROR4__(-1313519016 - v237, 9) * v220) ^ __ROR4__(v237, 11) ^ v236;
                                      v239 = (v238 + 1313519016 - HIWORD(v1732)) ^ v237;
                                      v240 = (19032 * (v239 ^ WORD1(v1732)) - __ROR4__(v239, 7)) ^ v238;
                                      v241 = (__ROL4__(v240 ^ HIWORD(v1732), 4) * WORD1(v1732) - __ROR4__(v240, 16)) ^ v239;
                                      v242 = (__ROR4__(-1313519016 - v241, 10) * v220 + __ROR4__(v241, 4)) ^ v240;
                                      v243 = (__ROR4__(v242 + 1313519016, 4) * HIWORD(v1732)) ^ __ROR4__(v242, 9) ^ v241;
                                      v244 = (19032 * __ROL4__(v243 ^ HIDWORD(v1732), 8) - __ROL4__(v243, 2)) ^ v242;
                                      v245 = (__ROR4__(HIDWORD(v1732) - v244, 11) * WORD1(v1732) - __ROR4__(v244, 12)) ^ v243;
                                      v246 = (v245 >> 8) ^ (v220 * (v245 ^ WORD1(v1732))) ^ v244;
                                      v247 = v246 ^ HIDWORD(v1732) ^ 0xB1B54A58;
                                      v248 = v219 ^ v246;
                                      v249 = v218 ^ v247 ^ v245;
                                      *(v215 - 4) = v248;
                                      v250 = __ROR4__(v248, 8);
                                      *v215 = v249;
                                      v251 = __ROR4__(v249, 8);
                                      *(v215 - 5) = v250;
                                      v252 = __ROR4__(v250, 8);
                                      *(v215 - 1) = v251;
                                      v253 = __ROR4__(v251, 8);
                                      *(v215 - 6) = v252;
                                      v254 = __ROR4__(v252, 8);
                                      *(v215 - 2) = v253;
                                      v255 = __ROR4__(v253, 8);
                                      *(v215 - 7) = v254;
                                      *(v215 - 3) = v255;
                                      v203 = __ROR4__(v254, 8);
                                      v204 = __ROR4__(v255, 8);
                                      v219 = v221;
                                      v218 = v222;
                                      v215 += 8;
                                      --v217;
                                      v216 += 8;
                                    }
                                    while ( v217 );
                                    v199 = v1276;
                                    v110 = v1321;
                                    v112 = (WCHAR *)lpModuleNamea;
                                    v185 = (unsigned __int8 *)v1432;
                                    v184 = ii;
                                    v197 = (unsigned __int64)v1380;
                                  }
                                  *(_QWORD *)&Srca[v197] = v199;
                                  v1607[4] = (void *)160;
                                  v256 = GetProcessHeap();
                                  v257 = HeapAlloc(v256, 8u, 0x30uLL);
                                  v1322 = v257;
                                  if ( !v257 )
                                  {
                                    v258 = -1073741801;
                                    v259 = 0LL;
LABEL_327:
                                    v1518 = v259;
                                    v271 = GetProcessHeap();
                                    HeapFree(v271, 0, Srca);
                                    v272 = v1472;
                                    if ( v1472 )
                                    {
                                      v1283 = (void *)v1472[1];
                                      if ( v1283 )
                                      {
                                        v273 = GetProcessHeap();
                                        HeapFree(v273, 0, v1283);
                                        v272 = v1472;
                                        v1472[1] = 0LL;
                                      }
                                      v1284 = (void *)v272[3];
                                      if ( v1284 )
                                      {
                                        v274 = GetProcessHeap();
                                        HeapFree(v274, 0, v1284);
                                        v272 = v1472;
                                        v1472[3] = 0LL;
                                      }
                                      v1285 = (void *)v272[5];
                                      if ( v1285 )
                                      {
                                        v275 = GetProcessHeap();
                                        HeapFree(v275, 0, v1285);
                                        v1472[5] = 0LL;
                                      }
                                      v276 = GetProcessHeap();
                                      HeapFree(v276, 0, v1472);
                                      v1518 = v259;
                                    }
                                    v1358 = v259;
                                    v111 = v258 | 0x10000000;
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
                                    lpModuleNameb = (LPCWSTR)v259;
                                    v1323 = v259 + 4;
                                    v1433 = v259 + 2;
                                    LODWORD(v1544) = 4;
                                    v279 = RtlUIntAdd(4u, *(_DWORD *)v259, (unsigned int *)&v1544);
                                    if ( v279 >= 0 )
                                    {
                                      v279 = RtlUIntAdd(v1544, v277, (unsigned int *)&v1544);
                                      if ( v279 >= 0 )
                                      {
                                        v279 = RtlUIntAdd(v1544, v280, (unsigned int *)&v1544);
                                        if ( v279 >= 0 )
                                        {
                                          v279 = RtlUIntAdd(v1544, 4, (unsigned int *)&v1544);
                                          if ( v279 >= 0 )
                                          {
                                            v279 = RtlUIntAdd(v1544, v281, (unsigned int *)&v1544);
                                            if ( v279 >= 0 )
                                            {
                                              Sizeb = v1544;
                                              v282 = v1544;
                                              v283 = GetProcessHeap();
                                              v284 = HeapAlloc(v283, 8u, v282);
                                              Srcb = v284;
                                              if ( !v284 )
                                              {
LABEL_384:
                                                v111 = -805306345;
                                                goto LABEL_488;
                                              }
                                              v1608 = v284;
                                              *v284 = *(_DWORD *)lpModuleNameb;
                                              v279 = RtlULongLongAdd(
                                                       (unsigned __int64)v284,
                                                       4LL,
                                                       (unsigned __int64 *)&v1608);
                                              v1522 = v285;
                                              v259 = v1358;
                                              v1518 = v1358;
                                              if ( v279 < 0 )
                                                goto LABEL_352;
                                              memcpy_0(v1608, v1358[1], *(unsigned int *)v1358);
                                              v279 = RtlULongLongAdd(
                                                       (unsigned __int64)v1608,
                                                       *(unsigned int *)v1358,
                                                       (unsigned __int64 *)&v1608);
                                              v1522 = (SIZE_T)Srcb;
                                              v1518 = v1358;
                                              if ( v279 < 0 )
                                                goto LABEL_352;
                                              v286 = v1608;
                                              *(_DWORD *)v1608 = *v1433;
                                              v279 = RtlULongLongAdd(
                                                       (unsigned __int64)v286,
                                                       4LL,
                                                       (unsigned __int64 *)&v1608);
                                              v1522 = v287;
                                              v1518 = v1358;
                                              if ( v279 < 0 )
                                                goto LABEL_352;
                                              memcpy_0(v1608, *((const void **)lpModuleNameb + 3), (unsigned int)*v1433);
                                              v279 = RtlULongLongAdd(
                                                       (unsigned __int64)v1608,
                                                       (unsigned int)*v1433,
                                                       (unsigned __int64 *)&v1608);
                                              v1522 = (SIZE_T)Srcb;
                                              v259 = v1358;
                                              v1518 = v1358;
                                              if ( v279 < 0 )
                                                goto LABEL_352;
                                              v288 = v1608;
                                              *(_DWORD *)v1608 = *v1323;
                                              v279 = RtlULongLongAdd(
                                                       (unsigned __int64)v288,
                                                       4LL,
                                                       (unsigned __int64 *)&v1608);
                                              v1522 = v289;
                                              v1518 = v1358;
                                              if ( v279 < 0
                                                || (memcpy_0(
                                                      v1608,
                                                      *((const void **)lpModuleNameb + 5),
                                                      (unsigned int)*v1323),
                                                    v279 = RtlULongLongAdd(
                                                             (unsigned __int64)v1608,
                                                             (unsigned int)*v1323,
                                                             (unsigned __int64 *)&v1608),
                                                    v1522 = (SIZE_T)Srcb,
                                                    v259 = v1358,
                                                    v1518 = v1358,
                                                    v278 = ii,
                                                    v279 < 0) )
                                              {
LABEL_352:
                                                v290 = GetProcessHeap();
                                                HeapFree(v290, 0, (LPVOID)v1522);
                                                v278 = ii;
                                              }
                                              else
                                              {
                                                v1521 = (SIZE_T)Srcb;
                                                v1505 = Sizeb;
                                                v1518 = v1358;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    v111 = v279 | 0x10000000;
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
                                    v1545 = 8;
                                    v291 = RtlUIntAdd(8u, v278, &v1545);
                                    v111 = v291 | 0x10000000;
                                    LODWORD(v1522) = v291 | 0x10000000;
                                    if ( v291 < 0 )
                                      goto LABEL_395;
                                    v294 = (v1545 + 7) & 0xFFFFFFF8;
                                    if ( v294 < v1545 )
                                    {
                                      v111 = -1073741675;
LABEL_488:
                                      LODWORD(v1522) = v111;
                                      goto LABEL_395;
                                    }
                                    v1546 = (v1545 + 7) & 0xFFFFFFF8;
                                    v1521 = v293;
                                    v1518 = v259;
                                    v111 = RtlUIntAdd(v294, v292, &v1546);
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
                                    v1518 = v259;
                                    v1521 = v295;
                                    if ( !lpMem || (v1518 = v259, v1521 = v295, (unsigned int)v1664 <= 1) )
                                    {
LABEL_360:
                                      v111 = -1073741811;
                                      goto LABEL_488;
                                    }
                                    v296 = lpMem;
                                    v1609 = lpMem;
                                    do
                                    {
                                      v111 = RtlULongLongAdd((unsigned __int64)v296, 4LL, (unsigned __int64 *)&v1609);
                                      LODWORD(v1522) = v111;
                                      if ( v111 < 0 )
                                        goto LABEL_395;
                                      v111 = RtlULongLongAdd((unsigned __int64)v1609, v297, (unsigned __int64 *)&v1609);
                                      LODWORD(v1522) = v111;
                                      if ( v111 < 0 )
                                        goto LABEL_395;
                                      v296 = v1609;
                                    }
                                    while ( v298 == -1 );
                                    v1462 = *v1609;
                                    v111 = RtlULongLongAdd((unsigned __int64)v1609, 4LL, (unsigned __int64 *)&v1609);
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
                                    if ( !lpMem || (unsigned int)v1664 <= 2 )
                                      goto LABEL_360;
                                    v299 = lpMem;
                                    v1610 = lpMem;
                                    do
                                    {
                                      v111 = RtlULongLongAdd((unsigned __int64)v299, 4LL, (unsigned __int64 *)&v1610);
                                      LODWORD(v1522) = v111;
                                      if ( v111 < 0 )
                                        goto LABEL_395;
                                      v111 = RtlULongLongAdd((unsigned __int64)v1610, v300, (unsigned __int64 *)&v1610);
                                      LODWORD(v1522) = v111;
                                      if ( v111 < 0 )
                                        goto LABEL_395;
                                      v299 = v1610;
                                    }
                                    while ( (unsigned int)(v301 + 1) < 2 );
                                    v111 = RtlULongLongAdd((unsigned __int64)v1610, 4LL, (unsigned __int64 *)&v1610);
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
                                    LODWORD(v1547) = 4;
                                    v111 = RtlUIntAdd(4u, v1546, (unsigned int *)&v1547);
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
                                    v111 = RtlUIntAdd(v1547, v302, (unsigned int *)&v1547);
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
                                    v111 = RtlUIntAdd(v1547, v1462, (unsigned int *)&v1547);
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
                                    v111 = RtlUIntAdd(v1547, 4, (unsigned int *)&v1547);
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
                                    v111 = RtlUIntAdd(v1547, v303, (unsigned int *)&v1547);
                                    LODWORD(v1522) = v111;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
                                    v305 = v1547;
                                    LODWORD(v1516) = v1547;
                                    if ( (unsigned int)v1547 > 0x400000 )
                                    {
                                      v111 = -2147418113;
                                      goto LABEL_488;
                                    }
                                    v1286 = v304;
                                    v306 = GetProcessHeap();
                                    v307 = HeapAlloc(v306, 8u, v305);
                                    if ( !v307 )
                                      goto LABEL_384;
                                    v1520 = v307;
                                    if ( !v1286 )
                                    {
                                      v111 = -2147024809;
                                      v1520 = v307;
                                      v1518 = v259;
LABEL_429:
                                      LODWORD(v1522) = v111;
                                      v1521 = v1286;
                                      goto LABEL_395;
                                    }
                                    v1680[0] = v1286;
                                    v1681 = v1505;
                                    v1680[1] = v307;
                                    v1682 = v305;
                                    v1683 = 0;
                                    if ( GetModuleHandleExW(1u, L"ntdll.dll", &phModule)
                                      && (v332 = GetProcAddress(phModule, "NtQuerySystemInformation")) != 0LL )
                                    {
                                      v333 = ((__int64 (__fastcall *)(__int64, _QWORD *))v332)(134LL, v1680);
                                      v111 = v333 | 0x10000000;
                                      LODWORD(v1522) = v333 | 0x10000000;
                                      v309 = v1516;
                                      if ( v333 >= 0 )
                                      {
                                        v309 = v1682;
                                        v334 = v185;
                                        v335 = v110;
                                        v336 = v112;
                                        v337 = v259;
                                        goto LABEL_426;
                                      }
                                    }
                                    else
                                    {
                                      v308 = GetLastError();
                                      v111 = v308;
                                      if ( v308 > 0 )
                                        v111 = (unsigned __int16)v308 | 0x80070000;
                                      if ( v111 >= 0 )
                                        v111 = -2147467259;
                                      LODWORD(v1522) = v111;
                                      v309 = v1516;
                                    }
                                    v1521 = v1286;
                                    if ( v111 == -805306333 )
                                    {
                                      v111 = -2147024774;
                                      LODWORD(v1522) = -2147024774;
                                      v1518 = v259;
                                      goto LABEL_395;
                                    }
                                    v337 = v259;
                                    v1518 = v259;
                                    v336 = v112;
                                    v335 = v110;
                                    v334 = v185;
                                    if ( v111 < 0 )
                                      goto LABEL_395;
LABEL_426:
                                    v1473 = 0LL;
                                    v110 = v335;
                                    v185 = v334;
                                    if ( v309 < 4 )
                                    {
                                      v111 = -805306306;
LABEL_428:
                                      v1518 = v337;
                                      goto LABEL_429;
                                    }
                                    v338 = *(unsigned int *)v1520;
                                    v1463 = *(_DWORD *)v1520;
                                    v1381 = (LPCWSTR)((char *)v1520 + 4);
                                    v112 = v336;
                                    if ( (char *)v1520 + 4 < v1520 )
                                    {
                                      v111 = -805306219;
                                      goto LABEL_428;
                                    }
                                    v1521 = v1286;
                                    v1518 = v259;
                                    if ( v309 - 4 < (unsigned int)v338 )
                                    {
                                      v111 = -805306306;
LABEL_433:
                                      v1518 = v259;
LABEL_434:
                                      LODWORD(v1522) = v111;
                                      v1521 = v1286;
                                      goto LABEL_395;
                                    }
                                    v1359 = v338;
                                    if ( (LPCWSTR)((char *)v1381 + v338) < v1381 || (unsigned int)v338 >= 0xFFFFFFFC )
                                      goto LABEL_563;
                                    if ( v309 - ((_DWORD)v338 + 4) < 4 )
                                    {
LABEL_438:
                                      v111 = -805306306;
                                      goto LABEL_488;
                                    }
                                    v339 = *(unsigned int *)((char *)v1381 + v338);
                                    LODWORD(v1516) = *(_DWORD *)((char *)v1381 + v338);
                                    Sizec = (char *)v1381 + v338 + 4;
                                    v1521 = v1286;
                                    v1518 = v259;
                                    if ( Sizec >= (char *)v1381 + v338 )
                                    {
                                      v340 = v259;
                                      v341 = v338 + 8;
                                      if ( (int)v338 + 8 < (unsigned int)(v338 + 4) )
                                        goto LABEL_561;
                                      if ( v309 - v341 < (unsigned int)v339 )
                                        goto LABEL_438;
                                      v1522 = (unsigned int)v339;
                                      v1521 = v1286;
                                      v1518 = v259;
                                      if ( &Sizec[(unsigned int)v339] < Sizec )
                                        goto LABEL_562;
                                      v340 = v259;
                                      v1506 = v341 + v339;
                                      if ( v341 + (unsigned int)v339 < v341 )
                                      {
LABEL_561:
                                        v111 = -805306219;
                                        v1518 = v340;
                                        goto LABEL_434;
                                      }
                                      if ( v309 - (v341 + (_DWORD)v339) < 4 )
                                        goto LABEL_438;
                                      v342 = *(_DWORD *)&Sizec[v339];
                                      ii = v342;
                                      v1519 = &Sizec[v339 + 4];
                                      v1521 = v1286;
                                      v1518 = v259;
                                      if ( v1519 >= &Sizec[v339] )
                                      {
                                        v343 = v1506 + 4;
                                        if ( v1506 + 4 >= v1506 )
                                        {
                                          v1396 = v1520;
                                          if ( v309 - v343 < v342 )
                                            goto LABEL_438;
                                          v1521 = v1286;
                                          v1518 = v259;
                                          if ( v343 + v342 < v343 )
                                          {
                                            v111 = -805306219;
                                            LODWORD(v1522) = -805306219;
                                            goto LABEL_395;
                                          }
                                          v1434 = (SIZE_T)v185;
                                          v1324 = v110;
                                          lpModuleNamec = v112;
                                          v344 = v1520;
                                          if ( v309 != v343 + v342 )
                                          {
LABEL_450:
                                            v111 = -805306306;
                                            v1520 = v344;
                                            goto LABEL_433;
                                          }
                                          if ( (unsigned int)v338 + v342 + (_DWORD)v339 + 12LL != v309 )
                                          {
                                            v344 = v1520;
                                            goto LABEL_450;
                                          }
                                          v345 = GetProcessHeap();
                                          v346 = HeapAlloc(v345, 8u, 0x30uLL);
                                          v1507 = v346;
                                          if ( !v346 )
                                          {
                                            v111 = -805306345;
                                            LODWORD(v1522) = -805306345;
                                            v1520 = v1396;
                                            v1518 = v259;
                                            v1521 = v1286;
                                            goto LABEL_395;
                                          }
                                          v347 = 0;
                                          if ( v1381 )
                                          {
                                            *(_DWORD *)v346 = v1463;
                                            v348 = GetProcessHeap();
                                            v349 = HeapAlloc(v348, 8u, v1359);
                                            if ( !v349 )
                                              goto LABEL_465;
                                            v1507[1] = v349;
                                            memcpy_0(v349, v1381, v1359);
                                            v346 = v1507;
                                            v350 = v1519;
                                          }
                                          else
                                          {
                                            *(_DWORD *)v346 = 0;
                                            v346[1] = 0LL;
                                            v350 = v1519;
                                          }
                                          v1434 = (SIZE_T)v185;
                                          v1324 = v110;
                                          lpModuleNamec = v112;
                                          v1518 = v259;
                                          v1507 = v346;
                                          if ( !Sizec )
                                          {
                                            *((_DWORD *)v346 + 4) = 0;
                                            v346[3] = 0LL;
                                            v354 = v1521;
                                            v353 = v1520;
LABEL_463:
                                            if ( v350 )
                                            {
                                              *((_DWORD *)v346 + 8) = ii;
                                              v355 = GetProcessHeap();
                                              v356 = HeapAlloc(v355, 8u, ii);
                                              if ( !v356 )
                                                goto LABEL_465;
                                              v1507[5] = v356;
                                              v347 = 0;
                                              memcpy_0(v356, v1519, ii);
                                              v346 = v1507;
                                              v353 = v1520;
                                              v1518 = v259;
                                              lpModuleNamec = v112;
                                              v1324 = v110;
                                              v1434 = (SIZE_T)v185;
                                              v354 = v1521;
                                            }
                                            else
                                            {
                                              *((_DWORD *)v346 + 8) = 0;
                                              v346[5] = 0LL;
                                            }
                                            v1473 = v346;
                                            goto LABEL_475;
                                          }
                                          *((_DWORD *)v346 + 4) = v1516;
                                          v351 = GetProcessHeap();
                                          v352 = HeapAlloc(v351, 8u, v1522);
                                          if ( v352 )
                                          {
                                            v1507[3] = v352;
                                            v347 = 0;
                                            memcpy_0(v352, Sizec, v1522);
                                            v346 = v1507;
                                            v350 = v1519;
                                            v353 = v1520;
                                            v1518 = v259;
                                            lpModuleNamec = v112;
                                            v1324 = v110;
                                            v1434 = (SIZE_T)v185;
                                            v354 = v1521;
                                            goto LABEL_463;
                                          }
LABEL_465:
                                          v347 = -1073741801;
                                          v357 = v1507;
                                          v1397 = (void *)v1507[1];
                                          if ( v1397 )
                                          {
                                            v358 = GetProcessHeap();
                                            HeapFree(v358, 0, v1397);
                                            v357 = v1507;
                                            v1507[1] = 0LL;
                                          }
                                          v1398 = (void *)v357[3];
                                          if ( v1398 )
                                          {
                                            v359 = GetProcessHeap();
                                            HeapFree(v359, 0, v1398);
                                            v357 = v1507;
                                            v1507[3] = 0LL;
                                          }
                                          v1399 = (void *)v357[5];
                                          if ( v1399 )
                                          {
                                            v360 = GetProcessHeap();
                                            HeapFree(v360, 0, v1399);
                                            v1507[5] = 0LL;
                                          }
                                          v361 = GetProcessHeap();
                                          HeapFree(v361, 0, v1507);
                                          v354 = v1521;
                                          v353 = v1520;
                                          v346 = 0LL;
LABEL_475:
                                          v1400 = v354;
                                          v1523 = v110;
                                          v1287 = v353;
                                          v1464 = v347;
                                          v362 = 0LL;
                                          if ( v347 < 0 )
                                          {
                                            v1524 = 0LL;
                                            v1520 = v353;
                                            v1518 = v259;
                                            lpModuleNamec = v112;
                                            v1324 = v110;
                                            v1434 = (SIZE_T)v185;
                                            v1521 = v354;
                                            if ( v346 )
                                            {
                                              v363 = (void *)v1473[1];
                                              if ( v363 )
                                              {
                                                v364 = GetProcessHeap();
                                                HeapFree(v364, 0, v363);
                                                v1473[1] = 0LL;
                                              }
                                              v365 = (void *)v1473[3];
                                              if ( v365 )
                                              {
                                                v366 = GetProcessHeap();
                                                HeapFree(v366, 0, v365);
                                                v1473[3] = 0LL;
                                              }
                                              v367 = (void *)v1473[5];
                                              if ( v367 )
                                              {
                                                v368 = GetProcessHeap();
                                                HeapFree(v368, 0, v367);
                                                v1473[5] = 0LL;
                                              }
                                              v369 = GetProcessHeap();
                                              HeapFree(v369, 0, v1473);
                                              v362 = 0LL;
                                              v1524 = 0LL;
                                              v1520 = v1287;
                                              v1518 = v259;
                                              lpModuleNamec = v112;
                                              v110 = v1523;
                                              v1324 = v1523;
                                              v1434 = (SIZE_T)v185;
                                              v347 = v1464;
                                              v1521 = v1400;
                                            }
                                          }
                                          else
                                          {
                                            v362 = (unsigned int *)v346;
                                            v1524 = (SIZE_T)v346;
                                          }
                                          v111 = v347 | 0x10000000;
                                          LODWORD(v1522) = v111;
                                          if ( v111 >= 0 )
                                          {
                                            if ( !v362 || (v1401 = (char *)*((_QWORD *)v362 + 1)) == 0LL || !*v362 )
                                            {
                                              v111 = -805306355;
                                              goto LABEL_488;
                                            }
                                            v370 = *v362 - 8;
                                            v1485 = *v362 - 8LL;
                                            v371 = (int *)MemoryAlloc(v1485);
                                            v1523 = v371;
                                            if ( !v371 )
                                            {
LABEL_518:
                                              v1526 = 0LL;
                                              v111 = -805306367;
                                              goto LABEL_488;
                                            }
                                            v372 = 0;
                                            v1733 = 0x7F1137FAB69605ELL;
                                            v373 = v1401;
                                            v1519 = v1401;
                                            v1288 = v370 & 7;
                                            v374 = v1524;
                                            if ( (v370 & 7) != 0 )
                                            {
                                              LODWORD(v1516) = 0;
                                              v375 = 0;
                                              v1508 = 0;
                                              v376 = 56;
                                              v377 = (unsigned __int8 *)v1519;
                                              v378 = 0;
                                              while ( 1 )
                                              {
                                                v379 = *v377++;
                                                if ( v375 >= 4 )
                                                {
                                                  v378 |= v379 << v376;
                                                  v380 = v1516;
                                                }
                                                else
                                                {
                                                  v380 = (v379 << (v376 - 32)) | v1516;
                                                  LODWORD(v1516) = v380;
                                                }
                                                v381 = v1508 + 1;
                                                v1508 = v381;
                                                v376 -= 8;
                                                if ( v381 >= v1288 )
                                                  break;
                                                v375 = v381;
                                              }
                                              v1465 = v378;
                                              v1519 = v377;
                                              v1509 = v380 ^ 0x92F65A5;
                                              v382 = v378 ^ 0x699A899C;
                                              v383 = v380 ^ 0x92F65A5;
                                              v384 = v378 ^ 0x699A899C;
                                              v372 = 0;
                                              ii = 0;
                                              v1518 = v259;
                                              lpModuleNamec = v112;
                                              v1324 = v110;
                                              v1434 = (SIZE_T)v185;
                                              v371 = (int *)v1523;
                                              v385 = 0;
                                              v386 = v1523;
                                              do
                                              {
                                                v1406 = (LPCWSTR)(v386 + 1);
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
                                                *v386 = v387;
                                                ++v385;
                                                ++v386;
                                              }
                                              while ( v385 < v1288 );
                                              v388 = v1406;
                                              v374 = v1524;
                                              v389 = v1509;
                                              if ( (unsigned int)v1288 > 4 )
                                              {
                                                v1510 = v382 >> (8 * (8 - v1288)) << (8 * (8 - v1288));
                                                v388 = v1406;
LABEL_506:
                                                v373 = (char *)v1519;
                                                goto LABEL_507;
                                              }
                                              v1510 = 0;
                                              if ( (unsigned int)v1288 >= 4 )
                                                goto LABEL_506;
                                              v373 = (char *)v1519;
                                              v389 = v389 >> (8 * (4 - v1288)) << (8 * (4 - v1288));
                                              v388 = v1406;
                                            }
                                            else
                                            {
                                              LODWORD(v1516) = 0;
                                              v1465 = -1;
                                              v1510 = 0;
                                              v389 = 0;
                                              v388 = (LPCWSTR)v371;
                                            }
LABEL_507:
                                            v1519 = (void *)(v1485 >> 3);
                                            if ( v1485 >> 3 )
                                            {
                                              v390 = HIDWORD(v1733);
                                              v391 = HIDWORD(v1733) ^ 0xAB69605E;
                                              v392 = WORD2(v1733);
                                              ii = WORD2(v1733);
                                              Sized = WORD1(v1733);
                                              LODWORD(v1522) = 24670;
                                              Srcc = HIWORD(v1733);
                                              v393 = (char *)v388 + 7;
                                              v394 = (unsigned __int8 *)(v373 + 2);
                                              v395 = v1510;
                                              v396 = v1516;
                                              v397 = v1465;
                                              v398 = (char *)v1519;
                                              do
                                              {
                                                v399 = v394[1] | ((*v394 | ((*(v394 - 1) | (*(v394 - 2) << 8)) << 8)) << 8);
                                                v400 = v394[5] | ((v394[4] | ((v394[3] | (v394[2] << 8)) << 8)) << 8);
                                                v401 = v399 ^ v389;
                                                v1519 = v394 + 8;
                                                v402 = v391 ^ v401 ^ v400 ^ v395;
                                                v403 = (v392 * __ROL4__(v402 + 1419157410, 5) + __ROL4__(v402, 10)) ^ v401;
                                                v404 = (Sized * __ROR4__(v403 + v390, 9) - __ROL4__(v403, 2)) ^ v402;
                                                v405 = (v1522 * (v404 - v392) - (v404 >> 13)) ^ v403;
                                                v406 = (Srcc * __ROL4__(WORD1(v1733) ^ v405, 6) - __ROL4__(v405, 2)) ^ v404;
                                                v407 = (v390 - (v406 ^ 0xAB69605E)) ^ v405;
                                                v408 = (WORD1(v1733) * (v392 ^ v407)) ^ __ROR4__(v407, 6) ^ v406;
                                                v409 = (__ROR4__(v408 + v390, 15) * v1522 + __ROL4__(v408, 2)) ^ v407;
                                                v410 = (HIWORD(v1733) * __ROR4__(v409 + 1419157410, 14)
                                                      - __ROL4__(v409, 8)) ^ v408;
                                                v411 = (ii * __ROR4__(v410 ^ 0xAB69605E, 12)) ^ __ROR4__(v410, 10) ^ v409;
                                                v412 = (v411 >> 10) ^ (WORD1(v1733) * (HIWORD(v1733) ^ v411)) ^ v410;
                                                v413 = (HIWORD(v1733) * (v1522 + __ROR4__(~v412, 5))) ^ v411;
                                                v414 = (v413 - HIWORD(v1733)) ^ 0xAB69605E ^ v412;
                                                v415 = ((v414 >> 2) + ii * __ROL4__(HIWORD(v1733) ^ v414, 2)) ^ v413;
                                                v416 = (Sized * __ROR4__(v415 - v390, 6) + __ROL4__(v415, 7)) ^ v414;
                                                v417 = (v1522 * (ii ^ v416) + __ROR4__(v416, 9)) ^ v415;
                                                v418 = (Srcc * __ROL4__(WORD1(v1733) ^ v417, 5) + __ROL4__(v417, 7)) ^ v416;
                                                v419 = v390 ^ v418 ^ 0xAB69605E ^ v417;
                                                v420 = (ii * (__ROR4__(v419, 3) - WORD1(v1733))) ^ v418;
                                                v421 = (__ROR4__(v420 - v390, 1) * v1522 - __ROR4__(v420, 6)) ^ v419;
                                                v422 = (HIWORD(v1733) * __ROL4__(v421 - 1419157410, 3)
                                                      + __ROL4__(v421, 14)) ^ v420;
                                                v423 = (__ROL4__(v422 - 1419157410, 15) * ii - __ROR4__(v422, 14)) ^ v421;
                                                v424 = (v423 >> 3) ^ (WORD1(v1733) * (v423 ^ v1522)) ^ v422;
                                                v425 = (__ROL4__(v390 ^ v424, 4) * v1522) ^ __ROL4__(v424, 2) ^ v396 ^ v423;
                                                v426 = v397 ^ v424;
                                                *(v393 - 4) = v425;
                                                v427 = __ROR4__(v425, 8);
                                                *v393 = v426;
                                                v428 = __ROR4__(v426, 8);
                                                *(v393 - 5) = v427;
                                                v429 = __ROR4__(v427, 8);
                                                *(v393 - 1) = v428;
                                                v430 = __ROR4__(v428, 8);
                                                *(v393 - 6) = v429;
                                                v431 = __ROR4__(v429, 8);
                                                *(v393 - 2) = v430;
                                                v432 = __ROR4__(v430, 8);
                                                *(v393 - 7) = v431;
                                                *(v393 - 3) = v432;
                                                v389 = __ROR4__(v431, 8);
                                                v395 = __ROR4__(v432, 8);
                                                v396 = v399;
                                                v397 = v400;
                                                v393 += 8;
                                                --v398;
                                                v394 = (unsigned __int8 *)v1519;
                                                v392 = ii;
                                              }
                                              while ( v398 );
                                              v372 = 0;
                                              v110 = v1324;
                                              v112 = (WCHAR *)lpModuleNamec;
                                              v185 = (unsigned __int8 *)v1434;
                                              v374 = v1524;
                                              v371 = (int *)v1523;
                                            }
                                            for ( jj = 0LL; jj < v1485; ++jj )
                                              v372 ^= *((_BYTE *)v371 + jj);
                                            v1523 = (LPVOID)v1521;
                                            v1474 = v1518;
                                            v1382 = (WCHAR *)v1520;
                                            v434 = v374;
                                            v1524 = v374;
                                            if ( v372 != *(_QWORD *)&v1401[v1485] )
                                            {
                                              MemoryFree(v371);
                                              goto LABEL_518;
                                            }
                                            v1549 = 0;
                                            v1615 = v371;
                                            if ( (unsigned int)v1485 < 4 )
                                            {
                                              v1521 = (SIZE_T)v1523;
LABEL_557:
                                              v1526 = v371;
                                              v1524 = v434;
LABEL_558:
                                              v435 = -1073741762;
                                              goto LABEL_559;
                                            }
                                            Srcd = *v371;
                                            v435 = RtlULongLongAdd(
                                                     (unsigned __int64)v371,
                                                     4LL,
                                                     (unsigned __int64 *)&v1615);
                                            v1526 = v436;
                                            v1524 = v437;
                                            v438 = v1382;
                                            v1520 = v1382;
                                            v1518 = v1474;
                                            v1521 = (SIZE_T)v1523;
                                            if ( v435 < 0 )
                                              goto LABEL_559;
                                            v435 = RtlUIntAdd(0, 4, &v1549);
                                            v1526 = v371;
                                            v1524 = v434;
                                            v1520 = v1382;
                                            v1518 = v439;
                                            v1521 = (SIZE_T)v1523;
                                            if ( v435 < 0 )
                                              goto LABEL_559;
                                            if ( (unsigned int)v1485 - v1549 < 4 )
                                              goto LABEL_524;
                                            v1466 = *(_DWORD *)v1615;
                                            v435 = RtlULongLongAdd(
                                                     (unsigned __int64)v1615,
                                                     4LL,
                                                     (unsigned __int64 *)&v1615);
                                            v1526 = v440;
                                            v1524 = v441;
                                            v1520 = v1382;
                                            v1518 = v442;
                                            v1521 = (SIZE_T)v1523;
                                            if ( v435 < 0 )
                                              goto LABEL_559;
                                            v435 = RtlUIntAdd(v1549, 4, &v1549);
                                            v1526 = v371;
                                            v1524 = v434;
                                            v1520 = v1382;
                                            v1518 = v439;
                                            v1521 = (SIZE_T)v1523;
                                            if ( v435 < 0 )
                                              goto LABEL_559;
                                            if ( (unsigned int)v1485 - v1549 < v1466 )
                                            {
LABEL_524:
                                              v1518 = v439;
                                            }
                                            else
                                            {
                                              v435 = RtlUIntAdd(v1549, v1466, &v1549);
                                              v1526 = v371;
                                              v1524 = v434;
                                              v1520 = v1382;
                                              v1518 = v443;
                                              v1521 = (SIZE_T)v1523;
                                              if ( v435 < 0 )
                                                goto LABEL_559;
                                              if ( (char *)v371 + (unsigned int)v1485 >= (char *)v1615 + v1466
                                                && (unsigned __int64)v371 + (unsigned int)v1485 - (_QWORD)v1615 - v1466 < 8 )
                                              {
                                                v1486 = 0LL;
                                                v435 = 0;
                                                LODWORD(v1516) = 0;
                                                v1526 = v371;
                                                v1524 = v434;
                                                v1520 = v1382;
                                                v1518 = v443;
                                                v1521 = (SIZE_T)v1523;
                                                if ( !v1615 )
                                                  goto LABEL_547;
                                                v1383 = (LPCWSTR)v1615;
                                                v435 = RtlULongLongAdd(
                                                         (unsigned __int64)v1615,
                                                         v1466,
                                                         (unsigned __int64 *)&v1616);
                                                v1526 = v445;
                                                v1524 = v444;
                                                v1520 = v438;
                                                v1518 = v1474;
                                                v1521 = (SIZE_T)v1523;
                                                if ( v435 >= 0 )
                                                {
                                                  v1526 = v445;
                                                  v1524 = v444;
                                                  v1520 = v438;
                                                  v1518 = v1474;
                                                  v1521 = (SIZE_T)v1523;
                                                  if ( v1383 < v1616 )
                                                  {
                                                    v446 = v445;
                                                    v1526 = v445;
                                                    v1524 = v444;
                                                    v447 = v438;
                                                    v1520 = v438;
                                                    v1518 = v1474;
                                                    v1521 = (SIZE_T)v1523;
                                                    v448 = (unsigned __int64)v1383;
                                                    while ( 1 )
                                                    {
                                                      v1360 = v447;
                                                      v1325 = v446;
                                                      v435 = RtlULongLongAdd(v448, 4LL, (unsigned __int64 *)&v1617);
                                                      if ( v435 < 0 )
                                                        goto LABEL_559;
                                                      if ( v1617 > v1616 )
                                                        goto LABEL_544;
                                                      v435 = RtlUIntAdd(4u, *v449, &v1550);
                                                      if ( v435 < 0 )
                                                        goto LABEL_559;
                                                      v435 = RtlULongLongAdd(
                                                               (unsigned __int64)v1383,
                                                               v1550,
                                                               (unsigned __int64 *)&v1618);
                                                      v1526 = v452;
                                                      v1524 = v451;
                                                      v447 = v1360;
                                                      v1520 = v1360;
                                                      v1518 = v1474;
                                                      v1521 = v450;
                                                      if ( v435 < 0 )
                                                        goto LABEL_559;
                                                      v448 = (unsigned __int64)v1618;
                                                      v1383 = v1618;
                                                      v1524 = v451;
                                                      v1520 = v1360;
                                                      v1521 = v450;
                                                      if ( v1618 > v1616 )
                                                      {
                                                        v435 = -1073741811;
                                                        v1526 = v1325;
                                                        v1518 = v1474;
                                                        goto LABEL_559;
                                                      }
                                                      LODWORD(v1516) = v1516 + 1;
                                                      v1526 = v1325;
                                                      v1518 = v1474;
                                                      if ( v1618 >= v1616 )
                                                      {
                                                        v1526 = v1325;
                                                        v1524 = v451;
                                                        v1520 = v1360;
                                                        v1518 = v1474;
                                                        v1521 = v450;
                                                        goto LABEL_546;
                                                      }
                                                      v446 = v1526;
                                                    }
                                                  }
                                                  v448 = (unsigned __int64)v1383;
LABEL_546:
                                                  if ( (const WCHAR *)v448 == v1616 )
                                                  {
LABEL_547:
                                                    if ( v1466 )
                                                    {
                                                      v453 = GetProcessHeap();
                                                      v454 = v1466;
                                                      v455 = (WCHAR *)HeapAlloc(v453, 8u, v1466);
                                                      v1486 = v455;
                                                      v435 = 0;
                                                      if ( !v455 )
                                                      {
                                                        v435 = -1073741801;
                                                        goto LABEL_559;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v454 = 0LL;
                                                      v455 = 0LL;
                                                    }
                                                    if ( v1615 )
                                                      memcpy_0(v455, v1615, v454);
                                                    v1666[1] = (LPVOID)v1486;
                                                    LODWORD(v1666[0]) = v1516;
                                                    if ( Srcd == (_DWORD)v1516 )
                                                      goto LABEL_559;
                                                    goto LABEL_558;
                                                  }
LABEL_544:
                                                  v435 = -1073741811;
                                                }
LABEL_559:
                                                v111 = v435 | 0x10000000;
                                                goto LABEL_488;
                                              }
                                              v1518 = v443;
                                            }
                                            v1521 = (SIZE_T)v1523;
                                            v1520 = v1382;
                                            goto LABEL_557;
                                          }
LABEL_395:
                                          if ( !v185 )
                                          {
LABEL_397:
                                            v311 = v1518;
                                            v312 = 0LL;
                                            if ( v1518 )
                                            {
                                              v313 = (void *)*((_QWORD *)v1518 + 1);
                                              if ( v313 )
                                              {
                                                v314 = GetProcessHeap();
                                                HeapFree(v314, 0, v313);
                                                v311[1] = 0LL;
                                              }
                                              v315 = (void *)v311[3];
                                              if ( v315 )
                                              {
                                                v316 = GetProcessHeap();
                                                HeapFree(v316, 0, v315);
                                                v311[3] = 0LL;
                                              }
                                              v312 = (void *)v311[5];
                                              if ( v312 )
                                              {
                                                v317 = GetProcessHeap();
                                                HeapFree(v317, 0, v312);
                                                v312 = 0LL;
                                                v311[5] = 0LL;
                                              }
                                              v318 = GetProcessHeap();
                                              HeapFree(v318, 0, v311);
                                            }
                                            v319 = (void *)v1521;
                                            if ( v1521 )
                                            {
                                              v320 = GetProcessHeap();
                                              HeapFree(v320, 0, v319);
                                            }
                                            v321 = v1520;
                                            if ( v1520 )
                                            {
                                              v322 = GetProcessHeap();
                                              HeapFree(v322, 0, v321);
                                            }
                                            v323 = (_QWORD *)v1524;
                                            if ( v1524 )
                                            {
                                              v324 = *(void **)(v1524 + 8);
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
                                              v312 = (void *)v323[5];
                                              if ( v312 )
                                              {
                                                v328 = GetProcessHeap();
                                                HeapFree(v328, 0, v312);
                                                v312 = 0LL;
                                                v323[5] = 0LL;
                                              }
                                              v329 = GetProcessHeap();
                                              HeapFree(v329, 0, v323);
                                            }
                                            v330 = v1526;
                                            if ( v1526 )
                                            {
                                              v331 = GetProcessHeap();
                                              HeapFree(v331, 0, v330);
                                            }
                                            v115 = v1517;
                                            if ( v111 >= 0 )
                                            {
                                              if ( !LODWORD(v1666[0]) )
                                              {
                                                v111 = -1073425151;
                                                goto LABEL_155;
                                              }
                                              if ( v1666[1] == v312 )
                                              {
                                                v111 = -1073741811;
                                                goto LABEL_155;
                                              }
                                              v456 = v1666[1];
                                              v1619 = v1666[1];
                                              v111 = RtlULongLongAdd(
                                                       (unsigned __int64)v1666[1],
                                                       4LL,
                                                       (unsigned __int64 *)&v1619);
                                              LODWORD(v1522) = v111;
                                              if ( v111 >= 0 )
                                              {
                                                v459 = v1619;
                                                if ( !*v456 )
                                                  v459 = 0LL;
                                                v1619 = v459;
                                                if ( *v456 != (_DWORD)v458 )
                                                {
                                                  v111 = -1073741789;
                                                  goto LABEL_155;
                                                }
                                                v111 = *v459;
                                                LODWORD(v1522) = v111;
                                                if ( v111 == -805306333 )
                                                {
                                                  Srce = -2147024774;
                                                  goto LABEL_575;
                                                }
                                                Srce = v111;
                                                if ( v111 == -2147024774 || (Srce = v111, v111 >= 0) )
                                                {
LABEL_575:
                                                  if ( LODWORD(v1666[0]) == 6 )
                                                  {
                                                    if ( v1666[1] )
                                                    {
                                                      v460 = (int *)v1666[1];
                                                      v1620 = (int *)v1666[1];
                                                      v461 = 0;
                                                      while ( 1 )
                                                      {
                                                        v111 = RtlULongLongAdd(
                                                                 (unsigned __int64)v460,
                                                                 v458,
                                                                 (unsigned __int64 *)&v1620);
                                                        LODWORD(v1522) = v111;
                                                        if ( v111 < 0 )
                                                          goto LABEL_578;
                                                        v111 = RtlULongLongAdd(
                                                                 (unsigned __int64)v1620,
                                                                 v462,
                                                                 (unsigned __int64 *)&v1620);
                                                        LODWORD(v1522) = v111;
                                                        if ( v111 < 0 )
                                                          goto LABEL_578;
                                                        ++v461;
                                                        v460 = v1620;
                                                        if ( v461 )
                                                        {
                                                          v463 = *v1620;
                                                          v111 = RtlULongLongAdd(
                                                                   (unsigned __int64)v1620,
                                                                   v458,
                                                                   (unsigned __int64 *)&v1620);
                                                          LODWORD(v1522) = v111;
                                                          if ( v111 < 0 )
                                                            goto LABEL_578;
                                                          v465 = v1620;
                                                          if ( !v463 )
                                                            v465 = 0LL;
                                                          v1620 = v465;
                                                          if ( v463 != 8 )
                                                          {
LABEL_592:
                                                            v111 = -1073741789;
                                                            goto LABEL_577;
                                                          }
                                                          v1402 = *(_QWORD *)v465;
                                                          if ( v1666[1] )
                                                          {
                                                            v466 = (int *)v1666[1];
                                                            v1621 = (int *)v1666[1];
                                                            v467 = 0;
                                                            while ( 1 )
                                                            {
                                                              v111 = RtlULongLongAdd(
                                                                       (unsigned __int64)v466,
                                                                       v464,
                                                                       (unsigned __int64 *)&v1621);
                                                              LODWORD(v1522) = v111;
                                                              if ( v111 < 0 )
                                                                goto LABEL_578;
                                                              v111 = RtlULongLongAdd(
                                                                       (unsigned __int64)v1621,
                                                                       v468,
                                                                       (unsigned __int64 *)&v1621);
                                                              LODWORD(v1522) = v111;
                                                              if ( v111 < 0 )
                                                                goto LABEL_578;
                                                              ++v467;
                                                              v466 = v1621;
                                                              if ( v467 >= 2 )
                                                              {
                                                                v469 = *v1621;
                                                                v111 = RtlULongLongAdd(
                                                                         (unsigned __int64)v1621,
                                                                         v464,
                                                                         (unsigned __int64 *)&v1621);
                                                                LODWORD(v1522) = v111;
                                                                if ( v111 < 0 )
                                                                  goto LABEL_578;
                                                                v471 = v1621;
                                                                if ( !v469 )
                                                                  v471 = 0LL;
                                                                v1621 = v471;
                                                                if ( v469 != (_DWORD)v470 )
                                                                  goto LABEL_592;
                                                                v1467 = *v471;
                                                                if ( !v1666[1] )
                                                                  goto LABEL_583;
                                                                v472 = (int *)v1666[1];
                                                                v1622 = (int *)v1666[1];
                                                                v473 = 0;
                                                                while ( 1 )
                                                                {
                                                                  v111 = RtlULongLongAdd(
                                                                           (unsigned __int64)v472,
                                                                           v470,
                                                                           (unsigned __int64 *)&v1622);
                                                                  LODWORD(v1522) = v111;
                                                                  if ( v111 < 0 )
                                                                    goto LABEL_578;
                                                                  v111 = RtlULongLongAdd(
                                                                           (unsigned __int64)v1622,
                                                                           v474,
                                                                           (unsigned __int64 *)&v1622);
                                                                  LODWORD(v1522) = v111;
                                                                  if ( v111 < 0 )
                                                                    goto LABEL_578;
                                                                  ++v473;
                                                                  v472 = v1622;
                                                                  if ( v473 >= 3 )
                                                                  {
                                                                    v475 = *v1622;
                                                                    LODWORD(v1516) = *v1622;
                                                                    v111 = RtlULongLongAdd(
                                                                             (unsigned __int64)v1622,
                                                                             v470,
                                                                             (unsigned __int64 *)&v1622);
                                                                    LODWORD(v1522) = v111;
                                                                    if ( v111 < 0 )
                                                                      goto LABEL_578;
                                                                    v476 = v1622;
                                                                    if ( !v475 )
                                                                      v476 = 0LL;
                                                                    v1622 = v476;
                                                                    if ( v1666[1] )
                                                                    {
                                                                      v477 = (int *)v1666[1];
                                                                      v1623 = (int *)v1666[1];
                                                                      v478 = 0;
                                                                      while ( 1 )
                                                                      {
                                                                        v111 = RtlULongLongAdd(
                                                                                 (unsigned __int64)v477,
                                                                                 4LL,
                                                                                 (unsigned __int64 *)&v1623);
                                                                        LODWORD(v1522) = v111;
                                                                        if ( v111 < 0 )
                                                                          goto LABEL_578;
                                                                        v111 = RtlULongLongAdd(
                                                                                 (unsigned __int64)v1623,
                                                                                 v479,
                                                                                 (unsigned __int64 *)&v1623);
                                                                        LODWORD(v1522) = v111;
                                                                        if ( v111 < 0 )
                                                                          goto LABEL_578;
                                                                        ++v478;
                                                                        v477 = v1623;
                                                                        if ( v478 >= 4 )
                                                                        {
                                                                          v480 = *v1623;
                                                                          v111 = RtlULongLongAdd(
                                                                                   (unsigned __int64)v1623,
                                                                                   4LL,
                                                                                   (unsigned __int64 *)&v1623);
                                                                          LODWORD(v1522) = v111;
                                                                          if ( v111 < 0 )
                                                                            goto LABEL_578;
                                                                          v481 = v1623;
                                                                          if ( !v480 )
                                                                            v481 = 0LL;
                                                                          v1623 = v481;
                                                                          if ( v480 == 4 )
                                                                          {
                                                                            v1511 = *v481;
                                                                            if ( !v1666[1] )
                                                                              goto LABEL_583;
                                                                            v482 = (unsigned int *)v1666[1];
                                                                            v1624 = (unsigned int *)v1666[1];
                                                                            for ( kk = 0; kk < 5; ++kk )
                                                                            {
                                                                              ii = *v482;
                                                                              v111 = RtlULongLongAdd(
                                                                                       (unsigned __int64)v482,
                                                                                       4LL,
                                                                                       (unsigned __int64 *)&v1624);
                                                                              LODWORD(v1522) = v111;
                                                                              if ( v111 < 0
                                                                                || (v111 = RtlULongLongAdd(
                                                                                             (unsigned __int64)v1624,
                                                                                             ii,
                                                                                             (unsigned __int64 *)&v1624),
                                                                                    LODWORD(v1522) = v111,
                                                                                    v111 < 0) )
                                                                              {
                                                                                v115 = v484;
                                                                                goto LABEL_127;
                                                                              }
                                                                              v482 = v1624;
                                                                            }
                                                                            v485 = *v1624;
                                                                            v486 = RtlULongLongAdd(
                                                                                     (unsigned __int64)v1624,
                                                                                     4LL,
                                                                                     (unsigned __int64 *)&v1624);
                                                                            v111 = v486;
                                                                            LODWORD(v1522) = v486;
                                                                            if ( v486 < 0 )
                                                                            {
                                                                              LODWORD(v1522) = v486;
                                                                              goto LABEL_578;
                                                                            }
                                                                            v488 = v1624;
                                                                            if ( !v485 )
                                                                              v488 = 0LL;
                                                                            v1624 = v488;
                                                                            if ( v485 == 4 )
                                                                            {
                                                                              v115 = *v488;
                                                                              if ( v1443 != (LPVOID)v1402 )
                                                                                goto LABEL_576;
                                                                              v1556 = v1467;
                                                                              if ( v1511 > 4 || (unsigned int)v1516 > 4 )
                                                                              {
                                                                                v111 = -2147024774;
                                                                                goto LABEL_155;
                                                                              }
                                                                              memcpy_0(v1553, v487, (unsigned int)v1516);
                                                                              if ( Srce )
                                                                              {
                                                                                v111 = Srce;
                                                                                LODWORD(v1522) = Srce;
                                                                              }
                                                                              goto LABEL_127;
                                                                            }
                                                                          }
                                                                          goto LABEL_592;
                                                                        }
                                                                      }
                                                                    }
                                                                    goto LABEL_583;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                          break;
                                                        }
                                                      }
                                                    }
LABEL_583:
                                                    v111 = -1073741811;
                                                  }
                                                  else
                                                  {
LABEL_576:
                                                    v111 = -1073425151;
                                                  }
LABEL_577:
                                                  LODWORD(v1522) = v111;
LABEL_578:
                                                  v115 = v457;
                                                  goto LABEL_127;
                                                }
                                              }
                                            }
                                            goto LABEL_127;
                                          }
LABEL_396:
                                          v310 = GetProcessHeap();
                                          HeapFree(v310, 0, v185);
                                          goto LABEL_397;
                                        }
LABEL_563:
                                        v111 = -805306219;
                                        goto LABEL_433;
                                      }
                                    }
LABEL_562:
                                    v111 = -805306219;
                                    goto LABEL_488;
                                  }
                                  ii = v184;
                                  *(_DWORD *)v257 = v1357;
                                  v260 = GetProcessHeap();
                                  v261 = HeapAlloc(v260, 8u, v1357);
                                  if ( v261 )
                                  {
                                    v257[1] = v261;
                                    v1322 = v257;
                                    memcpy_0(v261, Srca, v1357);
                                    *((_DWORD *)v257 + 4) = 160;
                                    v262 = GetProcessHeap();
                                    v263 = HeapAlloc(v262, 8u, 0xA0uLL);
                                    if ( !v263 )
                                    {
LABEL_320:
                                      v258 = -1073741801;
                                      v266 = v1322;
                                      v1280 = (void *)v1322[1];
                                      if ( v1280 )
                                      {
                                        v267 = GetProcessHeap();
                                        HeapFree(v267, 0, v1280);
                                        v266 = v1322;
                                        v1322[1] = 0LL;
                                      }
                                      v1281 = (void *)v266[3];
                                      if ( v1281 )
                                      {
                                        v268 = GetProcessHeap();
                                        HeapFree(v268, 0, v1281);
                                        v266 = v1322;
                                        v1322[3] = 0LL;
                                      }
                                      v1282 = (void *)v266[5];
                                      if ( v1282 )
                                      {
                                        v269 = GetProcessHeap();
                                        HeapFree(v269, 0, v1282);
                                        v1322[5] = 0LL;
                                      }
                                      v270 = GetProcessHeap();
                                      HeapFree(v270, 0, v1322);
                                      v259 = 0LL;
                                      goto LABEL_327;
                                    }
                                    v257[3] = v263;
                                    ii = v184;
                                    *v263 = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[0];
                                    v263[1] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[1];
                                    v263[2] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[2];
                                    v263[3] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[3];
                                    v263[4] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[4];
                                    v263[5] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[5];
                                    v263[6] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[6];
                                    v263[7] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[7];
                                    v263[8] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[8];
                                    v263[9] = `WarbirdUmGetEncryptionCipher'::`2'::EncryptionCipher[9];
                                    *((_DWORD *)v257 + 8) = 8;
                                    v264 = GetProcessHeap();
                                    v265 = HeapAlloc(v264, 8u, 8uLL);
                                    if ( v265 )
                                    {
                                      v257[5] = v265;
                                      v258 = 0;
                                      *(_QWORD *)v1322[5] = `WarbirdUmGetEncryptionKey'::`2'::nEncryptionKey;
                                      v259 = (const void **)v1322;
                                      v1472 = 0LL;
                                      goto LABEL_327;
                                    }
                                    v1322 = v257;
                                  }
                                  ii = v184;
                                  goto LABEL_320;
                                }
                              }
                              else
                              {
                                v111 = RtlUIntAdd(v169, v169, (unsigned int *)&v1535);
                                LODWORD(v1522) = v111;
                                if ( v111 < 0 )
                                  goto LABEL_144;
                                v111 = RtlUIntAdd(HIDWORD(v1664), v1535, (unsigned int *)&v1664 + 1);
                                LODWORD(v1522) = v111;
                                if ( v111 >= 0 )
                                {
                                  LODWORD(v1664) = v170 + v1664;
                                  goto LABEL_261;
                                }
                              }
                              v115 = v108;
                              goto LABEL_127;
                            }
                          }
                          else
                          {
                            v111 = RtlUIntAdd(4u, 4, (unsigned int *)&v1533);
                            LODWORD(v1522) = v111;
                            if ( v111 < 0 )
                              goto LABEL_127;
                            v111 = RtlUIntAdd(HIDWORD(v1664), v1533, (unsigned int *)&v1664 + 1);
                            LODWORD(v1522) = v111;
                            if ( v111 >= 0 )
                            {
                              v170 = 1;
                              v171 = v1664 + 1;
                              LODWORD(v1664) = v1664 + 1;
                              goto LABEL_248;
                            }
                          }
                          v115 = v108;
                          goto LABEL_127;
                        }
                      }
                      else
                      {
                        v111 = RtlUIntAdd(4u, 8, (unsigned int *)&v1592);
                        LODWORD(v1522) = v111;
                        if ( v111 < 0 )
                          goto LABEL_144;
                        v111 = RtlUIntAdd(HIDWORD(v1664), v1592, (unsigned int *)&v1664 + 1);
                        LODWORD(v1522) = v111;
                        v160 = v1664;
                        if ( v111 >= 0 )
                          goto LABEL_206;
                      }
                      v115 = v108;
                      goto LABEL_127;
                    }
                  }
                  else
                  {
                    v111 = RtlUIntAdd(v147, Size, (unsigned int *)&v1590);
                    LODWORD(v1522) = v111;
                    if ( v111 < 0 )
                      goto LABEL_144;
                    v111 = RtlUIntAdd(HIDWORD(v1664), v1590, (unsigned int *)&v1664 + 1);
                    LODWORD(v1522) = v111;
                    if ( v111 >= 0 )
                    {
                      v153 = 1LL;
                      v154 = v1664 + 1;
                      LODWORD(v1664) = v1664 + 1;
                      goto LABEL_203;
                    }
                  }
                  v115 = v108;
                  goto LABEL_127;
                }
                if ( Size )
                  goto LABEL_188;
LABEL_166:
                v111 = -1073741811;
                goto LABEL_125;
              }
            }
            v115 = v108;
            goto LABEL_127;
          }
          if ( String1 && !wcscmp_0(String1, L"WinSta0") && v1596 && !wcscmp_0(v1596, L"Default") )
          {
            v1530 = 0;
            CurrentProcess = GetCurrentProcess();
            if ( !(unsigned int)GetProcessMitigationPolicy(CurrentProcess, 11LL, &v1530, 4LL) )
              goto LABEL_70;
            if ( (v1530 & 0xF) == 0 )
              v89 = 1;
          }
        }
        v26 = v89;
        goto LABEL_120;
      }
      v28[823] = 0;
      memset_0(&WARBIRD::g_arModuleInfo, 0, 0x60uLL);
      if ( !*v28 )
        goto LABEL_64;
      while ( 1 )
      {
        v76 = (const WCHAR *)v28;
        v77 = -1LL;
        v72 = 0;
        do
          ++v77;
        while ( *(_WORD *)&v28[2 * v77] );
        v78 = &v28[2 * v77];
        v79 = (char *)&WARBIRD::g_arModuleInfo + 24 * v73;
        if ( !GetModuleHandleExW(0, v76, (HMODULE *)v79) )
          break;
        if ( **(_WORD **)v79 == 23117
          && (v80 = *(int *)(*(_QWORD *)v79 + 60LL), (unsigned int)v80 < 0x10000000)
          && (v81 = *(_QWORD *)v79 + v80, v81 >= *(_QWORD *)v79)
          && *(_DWORD *)v81 == 17744 )
        {
          if ( ((*(_WORD *)(v81 + 24) - 267) & 0xFEFF) != 0 )
          {
            v72 = -1073741811;
          }
          else
          {
            *(_QWORD *)(v79 + 12) = *(_QWORD *)(v81 + 136);
            *((_DWORD *)v79 + 2) = *(_DWORD *)(v81 + 80);
          }
        }
        else
        {
          v72 = -1073741701;
        }
        v82 = *(_DWORD *)(v78 + 2);
        v28 = v78 + 6;
        for ( mm = 0; mm < v82; ++mm )
        {
          v84 = v28;
          v85 = -1LL;
          do
            ++v85;
          while ( v28[v85] );
          v28 += v85 + 1;
          if ( v72 < 0 )
          {
            v87 = v1522;
          }
          else
          {
            v86 = (void **)GetProcAddress(*(HMODULE *)v79, v84);
            if ( !v86 )
              goto LABEL_63;
            v87 = v1522;
            (&WARBIRD::g_FuncAddress)[(unsigned int)v1522] = v86;
          }
          LODWORD(v1522) = v87 + 1;
        }
        ++v73;
        if ( !*v28 )
          goto LABEL_63;
      }
      v72 = -1073741702;
LABEL_63:
      if ( lpModuleName )
      {
LABEL_64:
        v88 = GetProcessHeap();
        HeapFree(v88, 0, lpModuleName);
      }
      v26 = dwBytes;
      if ( v72 < 0 )
        goto LABEL_37;
      v27 = g_WarbirdSecureFunctionsRefCount;
    }
    g_WarbirdSecureFunctionsRefCount = v27 + 1;
    goto LABEL_68;
  }
  v7 = 172LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v6,
    (int)v1275);
  return (unsigned int)v6;
}
