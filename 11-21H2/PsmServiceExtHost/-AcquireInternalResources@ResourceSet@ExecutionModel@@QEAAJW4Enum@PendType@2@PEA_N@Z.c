/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKW4_HOST_GROUP@@PEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001D9C0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000E730 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x18001AC10 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001AD00 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18001B960 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180020490 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020554 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180025F60 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z @ 0x18002828C (-RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029970 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180037CC0 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003A2D4 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A410 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18003ADA8 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18003CEC8 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x18003F0D0 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18004292C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ??1?$CComPtrBase@VResourceManagerServerProxy@@@ATL@@QEAA@XZ @ 0x18004DCD0 (--1-$CComPtrBase@VResourceManagerServerProxy@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x18004F828 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004F834 (--_U@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004F84C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004F874 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800516EA (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18006F0D4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180083D1C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18008716C (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18008D1F0 (-RmpPolicyEnsureMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18008D3D4 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008DD24 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18008E320 (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18008E7B0 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(_QWORD *a1, int a2, _BYTE *a3)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 PageCount64; // rax
  __int128 v11; // xmm1
  unsigned __int64 v12; // rsi
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  char *Heap; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  int v21; // edx
  int v22; // eax
  int v23; // edi
  __int64 v24; // rdi
  unsigned int v25; // r15d
  PVOID v26; // rax
  PVOID v27; // rax
  unsigned int *v28; // r15
  char v29; // cl
  int v30; // eax
  __int64 v31; // rdx
  void **v32; // rbx
  unsigned int *v33; // rdi
  HANDLE *v34; // rbx
  __int64 v35; // rsi
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // r15d
  char *v39; // rbx
  struct _RM_PARTITION *v40; // r11
  __int64 v41; // r14
  __int64 v42; // rdi
  ExecutionModel::_ResourceInfo *v43; // rax
  ExecutionModel::_ResourceInfo *v44; // rbx
  __int64 v45; // xmm0_8
  int v46; // esi
  char v47; // si
  int v48; // r9d
  char v49; // bl
  char v50; // di
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  char v57; // r14
  __int64 v58; // r14
  _QWORD *v59; // rax
  int v60; // r8d
  _QWORD *i; // rcx
  __int64 v62; // rsi
  char v63; // r9
  char v64; // r10
  __int64 v65; // r11
  _QWORD *v66; // rsi
  _QWORD *j; // rbx
  _QWORD *v68; // rax
  _QWORD *v69; // r14
  _QWORD *v70; // rax
  _DWORD *v71; // rbx
  __int64 v72; // r10
  unsigned __int16 v73; // si
  __int64 v74; // rcx
  __int64 v75; // r10
  __int64 v76; // rbx
  __int64 v77; // r15
  char v78; // r8
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int16 v81; // r11
  unsigned __int64 v82; // rdx
  int v83; // r9d
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // rdx
  _QWORD *v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // xmm1_8
  __int64 v91; // rdi
  void *v92; // r13
  _OWORD *v93; // r14
  __int64 v94; // rcx
  _QWORD *v95; // r15
  _QWORD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rbx
  _DWORD *v99; // rbx
  __int64 v100; // rax
  __int16 v101; // r11
  _QWORD *v102; // rax
  __int64 v103; // r10
  unsigned __int16 v104; // r11
  __int64 v105; // r10
  __int64 v106; // r14
  __int64 v107; // r15
  unsigned int v108; // r11d
  char v109; // r8
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rax
  __int64 v112; // rdx
  unsigned __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rax
  __int16 v116; // si
  __int64 v117; // rax
  __int64 v118; // rcx
  int v119; // eax
  __int64 v120; // rcx
  void *v121; // rbx
  __int64 v123; // rbx
  _QWORD *v124; // r14
  int v125; // edi
  __int64 v126; // rdx
  _WORD *v127; // rcx
  __int16 v128; // ax
  __int128 v129; // xmm0
  int v130; // eax
  __int128 v131; // xmm1
  __int128 v132; // xmm0
  __int128 v133; // xmm1
  WCHAR *v134; // rbx
  __int64 v135; // rdi
  WCHAR v136; // cx
  __int64 v137; // rdx
  unsigned __int64 v138; // rsi
  __int64 v139; // rbx
  unsigned __int64 v140; // rsi
  __int64 v141; // r9
  unsigned __int64 v142; // r8
  struct _RM_ACTIVITY_HOST *v143; // rbx
  __int64 v144; // r8
  __int64 v145; // r9
  PVOID ProcessHeap; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  _QWORD *v149; // rcx
  __int64 v150; // rax
  int v151; // eax
  int v152; // eax
  unsigned __int64 v153; // r8
  _BYTE *v154; // rcx
  __int64 v155; // r8
  int v156; // ecx
  unsigned __int64 v157; // r9
  int v158; // edx
  __int64 v159; // r9
  unsigned __int64 v160; // r15
  __int64 v161; // r8
  unsigned __int64 v162; // rsi
  __int64 v163; // rdx
  int v164; // r8d
  int v165; // r9d
  ExecutionModel::ResourceSet *v166; // rbx
  unsigned __int16 v167; // ax
  unsigned __int16 v168; // r11
  __int64 v169; // rdx
  char v170; // bl
  bool v171; // zf
  _QWORD *v172; // rdx
  char *v173; // rcx
  __int64 v174; // rax
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  char v176; // [rsp+50h] [rbp-B0h] BYREF
  char v177; // [rsp+51h] [rbp-AFh]
  char v178; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int8 v179[5]; // [rsp+53h] [rbp-ADh] BYREF
  struct _RM_PARTITION *v180; // [rsp+58h] [rbp-A8h]
  char v181; // [rsp+60h] [rbp-A0h] BYREF
  char v182; // [rsp+61h] [rbp-9Fh] BYREF
  char v183; // [rsp+62h] [rbp-9Eh] BYREF
  unsigned int v184; // [rsp+64h] [rbp-9Ch]
  unsigned int v185; // [rsp+68h] [rbp-98h]
  unsigned int v186; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v187; // [rsp+70h] [rbp-90h] BYREF
  void *ProcessHandle; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v189; // [rsp+80h] [rbp-80h] BYREF
  char v190[4]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v191; // [rsp+8Ch] [rbp-74h]
  _QWORD *v192; // [rsp+90h] [rbp-70h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-68h]
  __int64 v194; // [rsp+A8h] [rbp-58h]
  _QWORD *v195; // [rsp+B0h] [rbp-50h] BYREF
  void *Block[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v197; // [rsp+C8h] [rbp-38h]
  int v198; // [rsp+D0h] [rbp-30h] BYREF
  int v199; // [rsp+D4h] [rbp-2Ch] BYREF
  int v200; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v201; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD *v202; // [rsp+E8h] [rbp-18h]
  __int64 v203; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v204; // [rsp+F8h] [rbp-8h]
  __int128 v205; // [rsp+108h] [rbp+8h]
  _BYTE *v206; // [rsp+118h] [rbp+18h]
  __int64 v207; // [rsp+120h] [rbp+20h] BYREF
  __int64 v208; // [rsp+128h] [rbp+28h] BYREF
  __int64 v209; // [rsp+130h] [rbp+30h] BYREF
  __int64 v210; // [rsp+138h] [rbp+38h]
  _BYTE *v211; // [rsp+140h] [rbp+40h]
  __int64 v212; // [rsp+148h] [rbp+48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+150h] [rbp+50h] BYREF
  EVENT_DESCRIPTOR v214; // [rsp+160h] [rbp+60h] BYREF
  __int64 v215; // [rsp+170h] [rbp+70h] BYREF
  __int64 v216; // [rsp+178h] [rbp+78h] BYREF
  __int64 v217; // [rsp+180h] [rbp+80h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+188h] [rbp+88h] BYREF
  __int128 v219; // [rsp+198h] [rbp+98h] BYREF
  __int64 v220; // [rsp+1A8h] [rbp+A8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v222; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v223; // [rsp+1F0h] [rbp+F0h]
  __int128 v224; // [rsp+200h] [rbp+100h]
  __int128 v225; // [rsp+210h] [rbp+110h]
  __int128 v226; // [rsp+220h] [rbp+120h]
  _BYTE v227[464]; // [rsp+230h] [rbp+130h] BYREF
  __int128 v228; // [rsp+400h] [rbp+300h] BYREF
  __int128 v229; // [rsp+410h] [rbp+310h]
  __int128 v230; // [rsp+420h] [rbp+320h]
  __int128 v231; // [rsp+430h] [rbp+330h]
  int v232; // [rsp+440h] [rbp+340h]
  int v233; // [rsp+444h] [rbp+344h]
  __int128 v234; // [rsp+450h] [rbp+350h] BYREF
  __int128 v235; // [rsp+460h] [rbp+360h]
  __int128 v236; // [rsp+470h] [rbp+370h]
  __int128 v237; // [rsp+480h] [rbp+380h]
  __int128 v238; // [rsp+490h] [rbp+390h]
  struct _EVENT_DATA_DESCRIPTOR v239; // [rsp+4A0h] [rbp+3A0h] BYREF
  void *v240; // [rsp+4B0h] [rbp+3B0h]
  int v241; // [rsp+4B8h] [rbp+3B8h]
  int v242; // [rsp+4BCh] [rbp+3BCh]
  unsigned int *v243; // [rsp+4C0h] [rbp+3C0h]
  __int64 v244; // [rsp+4C8h] [rbp+3C8h]
  char *v245; // [rsp+4D0h] [rbp+3D0h]
  __int64 v246; // [rsp+4D8h] [rbp+3D8h]
  char *v247; // [rsp+4E0h] [rbp+3E0h]
  __int64 v248; // [rsp+4E8h] [rbp+3E8h]
  char *v249; // [rsp+4F0h] [rbp+3F0h]
  __int64 v250; // [rsp+4F8h] [rbp+3F8h]
  int *v251; // [rsp+500h] [rbp+400h]
  __int64 v252; // [rsp+508h] [rbp+408h]
  int *v253; // [rsp+510h] [rbp+410h]
  __int64 v254; // [rsp+518h] [rbp+418h]
  char *v255; // [rsp+520h] [rbp+420h]
  __int64 v256; // [rsp+528h] [rbp+428h]
  unsigned __int8 *v257; // [rsp+530h] [rbp+430h]
  __int64 v258; // [rsp+538h] [rbp+438h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+540h] [rbp+440h] BYREF
  void *v260; // [rsp+550h] [rbp+450h]
  int v261; // [rsp+558h] [rbp+458h]
  int v262; // [rsp+55Ch] [rbp+45Ch]
  __int64 *v263; // [rsp+560h] [rbp+460h]
  __int64 v264; // [rsp+568h] [rbp+468h]
  __int64 *v265; // [rsp+570h] [rbp+470h]
  __int64 v266; // [rsp+578h] [rbp+478h]
  __int64 *v267; // [rsp+580h] [rbp+480h]
  __int64 v268; // [rsp+588h] [rbp+488h]
  __int64 *v269; // [rsp+590h] [rbp+490h]
  __int64 v270; // [rsp+598h] [rbp+498h]
  __int64 *v271; // [rsp+5A0h] [rbp+4A0h]
  __int64 v272; // [rsp+5A8h] [rbp+4A8h]
  __int64 *v273; // [rsp+5B0h] [rbp+4B0h]
  __int64 v274; // [rsp+5B8h] [rbp+4B8h]
  _BYTE v275[4]; // [rsp+5C0h] [rbp+4C0h] BYREF
  __int64 v276; // [rsp+5C4h] [rbp+4C4h]
  __int64 v277; // [rsp+5D8h] [rbp+4D8h]
  __int64 v278; // [rsp+5E0h] [rbp+4E0h]
  __int64 v279; // [rsp+5F0h] [rbp+4F0h]
  __int64 v280; // [rsp+600h] [rbp+500h]
  __int64 v281; // [rsp+608h] [rbp+508h]
  char v282[64]; // [rsp+618h] [rbp+518h] BYREF
  __int64 v283; // [rsp+658h] [rbp+558h]
  __int64 v284; // [rsp+660h] [rbp+560h]
  __int64 v285; // [rsp+668h] [rbp+568h]
  __int64 v286; // [rsp+670h] [rbp+570h]
  __int64 v287; // [rsp+678h] [rbp+578h]
  __int64 v288; // [rsp+680h] [rbp+580h]
  __int64 v289; // [rsp+688h] [rbp+588h]
  __int64 v290; // [rsp+690h] [rbp+590h]
  __int64 v291; // [rsp+698h] [rbp+598h]

  v3 = a1[165];
  Block[0] = Block;
  v4 = (__int64)a1;
  v206 = a3;
  Block[1] = Block;
  v192 = (_QWORD *)a1[8];
  v5 = a1[3];
  v197 = 0LL;
  LODWORD(v189) = a2;
  v195 = a1;
  v6 = *(_QWORD *)(v5 + 128);
  v7 = *(_QWORD *)(a1[164] + 64LL);
  memset_0(&v239, 0, 0x80uLL);
  memset_0(v275, 0, 0xF0uLL);
  v8 = *(_QWORD *)(v7 + 32);
  v276 = -1LL;
  NtManagePartition(v8, 0LL, 0LL, v275, 240);
  v12 = RmpPageSize * v291;
  *((_QWORD *)&v222 + 1) = RmpPageSize * v278;
  *(_QWORD *)&v224 = 0LL;
  *((_QWORD *)&v226 + 1) = 0LL;
  v9 = RmpPageSize * v279;
  *((_QWORD *)&v223 + 1) = RmpPageSize * v278 - RmpPageSize * v277;
  *(_QWORD *)&v222 = RmpPageSize * v291;
  *(_QWORD *)&v223 = RmpPageSize * v277;
  *((_QWORD *)&v224 + 1) = RmpPageSize * v279;
  PageCount64 = SwGetPageCount64(v282, 0LL, 5LL);
  *(_QWORD *)&v225 = RmpPageSize * (v280 + v281 + PageCount64);
  *(_QWORD *)&v226 = v290 + v289 + v288 + v287 + v286 + v285 + v284 + v283;
  *((_QWORD *)&v225 + 1) = v9 - v225;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v6 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v6 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v222,
    v12,
    (struct _RM_RESOURCE_USAGE_LIMITS *)&v239);
  v11 = v223;
  v234 = v222;
  LODWORD(v12) = 0;
  v236 = v224;
  v13 = v226;
  *(_WORD *)(v7 + 204) = 0;
  v14 = 0LL;
  v171 = (*(_BYTE *)(v4 + 1376) & 0x10) == 0;
  v15 = 0x11000002000LL;
  v235 = v11;
  v238 = v13;
  v237 = v225;
  v201 = 0LL;
  if ( !v171 || (v16 = *(int *)(v4 + 1336), (unsigned int)v16 <= 0x28) && _bittest64(&v15, v16) )
  {
    if ( (*(_BYTE *)(v4 + 1378) & 0x40) == 0 )
      goto LABEL_38;
  }
  v186 = 1;
  *(_OWORD *)P = 0LL;
  v194 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    while ( 1 )
    {
      v20 = *(_BYTE *)(v3 + 656);
      if ( v20 )
      {
        v21 = 8;
        if ( v20 == 1 )
          v21 = 4;
      }
      else
      {
        v21 = 0;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, char *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 40LL) + 72LL))(
              v3 + 552,
              *(unsigned int *)(v3 + 620),
              v3 + 88,
              *(unsigned int *)(v3 + 624),
              *(_QWORD *)(v3 + 32),
              v21,
              Heap,
              &v186);
      v23 = v22;
      if ( v22 >= 0 )
        break;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( v22 != -2147483643 )
      {
        RtlFreeHeap(ProcessHeap, 0, Heap);
        goto LABEL_29;
      }
      RtlFreeHeap(ProcessHeap, 0, Heap);
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v186);
      if ( !Heap )
      {
        v23 = -1073741801;
        goto LABEL_29;
      }
    }
    v24 = v186;
    if ( v186 )
    {
      v25 = 8 * v186;
      v26 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v186);
      P[0] = v26;
      if ( !v26 )
      {
        v23 = -1073741801;
        goto LABEL_22;
      }
      memset_0(v26, 0, v25);
      v27 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(4 * v24));
      P[1] = v27;
      if ( !v27 )
      {
        v23 = -1073741801;
        goto LABEL_22;
      }
      memset_0(v27, 0, (unsigned int)(4 * v24));
      ProcessHandle = 0LL;
      if ( (_DWORD)v24 )
      {
        v180 = (struct _RM_PARTITION *)Heap;
        v28 = (unsigned int *)Heap;
        do
        {
          v185 = *v28;
          ClientId.UniqueProcess = (HANDLE)v185;
          ClientId.UniqueThread = 0LL;
          ObjectAttributes.Length = 48;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
          {
            v29 = *(_BYTE *)(v3 + 656);
            if ( v29 )
            {
              v30 = 8;
              if ( v29 == 1 )
                v30 = 4;
            }
            else
            {
              v30 = 0;
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int, void *))(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 40LL) + 80LL))(
                   v3 + 552,
                   *(unsigned int *)(v3 + 620),
                   v3 + 88,
                   *(unsigned int *)(v3 + 624),
                   *(_QWORD *)(v3 + 32),
                   v30,
                   ProcessHandle) )
            {
              v31 = (unsigned int)v194;
              LODWORD(v194) = v194 + 1;
              *((_QWORD *)P[0] + v31) = ProcessHandle;
              *((_DWORD *)P[1] + v31) = v185;
            }
            else
            {
              NtClose(ProcessHandle);
            }
          }
          v28 += 2;
          --v24;
        }
        while ( v24 );
        v4 = (__int64)v195;
        Heap = (char *)v180;
      }
    }
    else
    {
      ProcessHandle = 0LL;
    }
    v23 = 0;
LABEL_22:
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( v23 >= 0 )
    {
      if ( (_DWORD)v194 )
      {
        v32 = (void **)P[0];
        v12 = (unsigned int)v194;
        v33 = (unsigned int *)P[1];
        do
        {
          RmpActivityHostCommitDebtCallback((struct _RM_ACTIVITY_HOST *)v3, *v32++, *v33++, &v201);
          --v12;
        }
        while ( v12 );
      }
      v23 = v12;
    }
    goto LABEL_29;
  }
  v23 = -1073741801;
LABEL_29:
  if ( (_DWORD)v194 )
  {
    v34 = (HANDLE *)P[0];
    v35 = (unsigned int)v194;
    do
    {
      NtClose(*v34++);
      --v35;
    }
    while ( v35 );
  }
  if ( P[0] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
  if ( P[1] )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
  if ( v23 < 0 )
  {
    if ( (unsigned int)dword_1800DC1E0 <= 4 )
      goto LABEL_42;
    if ( (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v18, v19) )
    {
      v212 = *(_QWORD *)(v3 + 32);
      v198 = v23;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (int)&dword_1800DC1E0,
        (int)&unk_1800C644E,
        v147,
        v148,
        (__int64)&v198,
        (__int64)&v212);
    }
  }
  v14 = v201;
LABEL_38:
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
  {
    v207 = v14;
    v274 = 8LL;
    v215 = v192[16];
    v216 = *(_QWORD *)(v4 + 1472);
    v217 = *((_QWORD *)&v223 + 1);
    v208 = *(_QWORD *)(v4 + 1448);
    v209 = *(_QWORD *)(v4 + 1752);
    v273 = &v215;
    v271 = &v216;
    v269 = &v217;
    v267 = &v207;
    v265 = &v208;
    v263 = &v209;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    v272 = 8LL;
    v270 = 8LL;
    v268 = 8LL;
    v266 = 8LL;
    v264 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v260 = &unk_1800C494A;
    UserData.Reserved = 2;
    v261 = 118;
    v262 = 1;
    v191 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
LABEL_42:
  v36 = RmpResourceCheckDestroyPartitionForAcquire(*(struct _RM_RESOURCE_SET **)(v4 + 1312));
  v37 = *(_QWORD *)(v4 + 1312);
  v184 = v36;
  v38 = v36;
  v203 = v4;
  v204 = 0LL;
  v180 = *(struct _RM_PARTITION **)(v37 + 64);
  v205 = 0LL;
  while ( 1 )
  {
    v39 = (char *)Block[0];
    if ( Block[0] == Block )
      break;
    v149 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v150 = *(_QWORD *)Block[0];
    *v149 = *(_QWORD *)Block[0];
    *(_QWORD *)(v150 + 8) = v149;
    ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>(v39 + 16);
    operator delete(v39);
  }
  v171 = *(_DWORD *)(v4 + 1464) == 2;
  v40 = v180;
  v41 = v201;
  *(_QWORD *)&v204 = Block;
  v197 = 0LL;
  *((_QWORD *)&v204 + 1) = v180;
  *(_QWORD *)&v205 = (char *)v180 + 160;
  if ( !v171 )
  {
    v47 = 0;
    v176 = 0;
    v48 = 0;
    goto LABEL_53;
  }
  v42 = *(_QWORD *)(v4 + 64);
  v43 = (ExecutionModel::_ResourceInfo *)operator new[](0x18uLL);
  v44 = v43;
  if ( !v43 )
  {
    v46 = -2147024882;
    goto LABEL_257;
  }
  ExecutionModel::_ResourceInfo::_ResourceInfo(v43);
  v45 = *(_QWORD *)(v4 + 1480);
  *(_OWORD *)v44 = *(_OWORD *)(v4 + 1464);
  *((_QWORD *)v44 + 2) = v45;
  v46 = ExecutionModel::BaseResourceSet::RecursiveVisit(
          v42,
          0,
          1,
          (_DWORD)v44,
          0,
          1,
          (__int64)&v176,
          (__int64)&v178,
          (__int64)Block,
          0LL);
  if ( v46 >= 0 )
  {
    v46 = 0;
LABEL_48:
    operator delete[](v44);
    goto LABEL_49;
  }
  if ( v44 )
    goto LABEL_48;
LABEL_49:
  if ( v46 < 0 )
  {
LABEL_257:
    v50 = v176;
    goto LABEL_258;
  }
  if ( !v178 )
  {
    if ( (_DWORD)v189 == 1 && *(_QWORD *)(v4 + 1472) <= *(_QWORD *)(*(_QWORD *)(v4 + 24) + 40LL) )
    {
      v47 = 1;
      v178 = 1;
      v176 = 1;
      utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(Block);
      goto LABEL_209;
    }
    v50 = 0;
    v46 = -2147220992;
    v176 = 0;
LABEL_258:
    v40 = v180;
    DWORD2(v205) = 0;
    v49 = 0;
    goto LABEL_259;
  }
  v47 = v176;
  if ( v176 )
  {
LABEL_209:
    v40 = v180;
    v49 = 2;
    DWORD2(v205) = 2;
    v48 = 0;
    goto LABEL_54;
  }
  v40 = v180;
  v48 = 0;
  DWORD2(v205) = 0;
LABEL_53:
  v49 = 0;
LABEL_54:
  v50 = v47;
  v51 = *(_QWORD *)(v4 + 1448);
  if ( v51 != -1LL && v41 != -1 )
  {
    v52 = v51 + v41;
    if ( v52 >= v51 )
      goto LABEL_57;
    v46 = -805306219;
LABEL_259:
    v57 = v178;
    goto LABEL_260;
  }
  v52 = -1LL;
LABEL_57:
  v53 = *(_QWORD *)(*(_QWORD *)(v4 + 1312) + 64LL);
  v202 = *(_DWORD **)(v4 + 1320);
  if ( (_DWORD)v189 == 1 )
  {
    v185 = 1;
  }
  else if ( (_DWORD)v189 )
  {
    v151 = 2;
    if ( (_DWORD)v189 != 2 )
      v151 = -1;
    v185 = v151;
  }
  else
  {
    v185 = 0;
  }
  v54 = *(_QWORD *)(v4 + 24);
  v55 = *(unsigned int *)(v4 + 1288);
  v191 = *(_DWORD *)(v4 + 1288);
  v56 = *(_QWORD *)(v54 + 128);
  v210 = v56;
  if ( !v52 )
    goto LABEL_60;
  if ( v52 + (_QWORD)v223 + 1LL < v52 )
  {
    *(_DWORD *)(v53 + 200) = 0;
    goto LABEL_255;
  }
  if ( *((_QWORD *)&v222 + 1) < v52 && *(char *)(v4 + 1378) >= 0 )
    goto LABEL_255;
  v152 = RmpEmPriorityCompare(v55, *(unsigned int *)(v56 + 516), v52 + v223);
  v154 = v245;
  if ( v152 < 0 )
    v154 = v243;
  v211 = v154;
  if ( v153 < (unsigned __int64)v245 && v153 < (unsigned __int64)v154 )
    goto LABEL_60;
  RmpPolicyEnsureMetricsForAcquire(v40, (struct _RM_SYSTEM_MEMORY_METRICS *)&v234);
  if ( (int)RmpEmPriorityCompare(v191, *(unsigned int *)(v210 + 516), v155) >= 0
    || (v157 = v52 + v235 - v236, v157 < (unsigned __int64)v211) )
  {
    if ( (unsigned __int64)v235 + v52 >= (unsigned __int64)v245 )
    {
      if ( v185 != 2 )
      {
        v158 = 2;
        v159 = v235 + v52 - (_QWORD)v245 + 1;
        goto LABEL_234;
      }
      goto LABEL_253;
    }
    v40 = v180;
    v48 = 0;
LABEL_60:
    HIDWORD(v205) = v48;
    v57 = 0;
    *(_DWORD *)(v53 + 200) = v48;
    goto LABEL_61;
  }
  if ( v185 == 2 )
  {
LABEL_253:
    v40 = v180;
LABEL_255:
    v38 = v184;
    v57 = 0;
    v46 = -2147220992;
LABEL_260:
    v177 = v57;
    goto LABEL_73;
  }
  v158 = 1;
  v159 = v157 - (_QWORD)v211;
LABEL_234:
  HIDWORD(v205) = v158;
  RmpPolicyGenerateReclaimListForCommit(v180, v53 + 160, v202, v159, v156, v158);
  v40 = v180;
  v48 = 0;
  v57 = 1;
LABEL_61:
  v177 = v57;
  if ( v47 )
  {
    v57 = 0;
    *(_DWORD *)(v53 + 200) = v48;
    v177 = 0;
    HIDWORD(v205) = v48;
    goto LABEL_236;
  }
  if ( v57 )
  {
LABEL_236:
    v38 = v184;
    v46 = v48;
    goto LABEL_73;
  }
  v58 = *(_QWORD *)(v4 + 64);
  v59 = *(_QWORD **)(v58 + 40);
  v60 = *(_DWORD *)(v4 + 1288);
  for ( i = v59; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(v58 + 40) )
    {
      v63 = v49;
      v64 = v50;
      while ( 1 )
      {
        v50 = v64;
        v49 = v63;
        if ( v59 == (_QWORD *)(v58 + 40) )
        {
          v57 = v177;
          goto LABEL_72;
        }
        v65 = v59[2];
        if ( *(_DWORD *)(v65 + 1280) == 1 && *(_DWORD *)(v65 + 1288) < v60 && *(_QWORD *)(v4 + 1448) )
        {
          v162 = *(unsigned int *)(v4 + 1440);
          if ( *(_QWORD *)(v65 + 24LL * (int)v162 + 80) )
          {
            v163 = *(_QWORD *)(v58 + 1272);
            if ( !_bittest64(&v163, v162) )
            {
              if ( (_DWORD)v189 == 1 )
              {
                v57 = 1;
                v177 = 1;
LABEL_72:
                v40 = v180;
                v38 = v184;
                v46 = 0;
              }
              else
              {
                v40 = v180;
                v46 = -2147220992;
                v57 = v177;
                v38 = v184;
              }
              goto LABEL_73;
            }
          }
          v60 = *(_DWORD *)(v4 + 1288);
        }
        v59 = (_QWORD *)*v59;
      }
    }
    v62 = i[2];
    if ( *(_DWORD *)(v62 + 1280) == 1 && *(_DWORD *)(v62 + 1288) < v60 && *(_QWORD *)(v4 + 1472) )
      break;
LABEL_66:
    ;
  }
  v160 = *(unsigned int *)(v4 + 1464);
  if ( !*(_QWORD *)(v62 + 24LL * (int)v160 + 80) || (v161 = *(_QWORD *)(v58 + 1272), _bittest64(&v161, v160)) )
  {
    v60 = *(_DWORD *)(v4 + 1288);
    goto LABEL_66;
  }
  v57 = v177;
  if ( (_DWORD)v189 == 1 )
  {
    v50 = 1;
    goto LABEL_72;
  }
  v40 = v180;
  v46 = -2147220992;
  v38 = v184;
LABEL_73:
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
  {
    v179[0] = BYTE12(v205);
    v178 = v49;
    v199 = *((_DWORD *)v40 + 50);
    v200 = v197;
    v257 = v179;
    v255 = &v178;
    v253 = &v199;
    v251 = &v200;
    v249 = &v181;
    v247 = &v182;
    v245 = &v183;
    v243 = &v187;
    *(_DWORD *)&v214.Level = 4;
    v239.Ptr = (ULONGLONG)off_1800DC1E8;
    v181 = v38;
    v182 = v57;
    v183 = v50;
    v187 = v46;
    v258 = 1LL;
    v256 = 1LL;
    v254 = 4LL;
    v252 = 4LL;
    v250 = 1LL;
    v248 = 1LL;
    v246 = 1LL;
    v244 = 4LL;
    *(_DWORD *)&v214.Id = 184549376;
    v214.Keyword = 9LL;
    v239.Size = *(unsigned __int16 *)off_1800DC1E8;
    v240 = &unk_1800C4BD7;
    v242 = 1;
    v239.Reserved = 2;
    v241 = 185;
    v191 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v214, 0LL, 0LL, 0xAu, &v239);
  }
  if ( v46 < 0 )
    goto LABEL_152;
  if ( v50 || v57 || v38 )
    LOBYTE(v38) = 1;
  v66 = v192 + 5;
  v176 = v38;
  for ( j = (_QWORD *)v192[5]; j != v66 && *(_DWORD *)(j[2] + 1288LL) < *(_DWORD *)(v4 + 1288); j = (_QWORD *)*j )
    ;
  v68 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v69 = v68;
  if ( !v68 )
  {
    v46 = -2147024882;
    goto LABEL_152;
  }
  v68[2] = v4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v70 = (_QWORD *)j[1];
  v69[1] = v70;
  *v69 = j;
  *v70 = v69;
  j[1] = v69;
  ++v66[2];
  if ( (_BYTE)v38 )
  {
LABEL_300:
    RtlQueryUnbiasedInterruptTime(&v189);
    v170 = v177;
    v171 = v184 == 0;
    *(_DWORD *)(v4 + 1760) = v189 / 0x2710;
    if ( v50 || v170 )
    {
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v4, 0, v171);
      if ( v50 || v170 )
        RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v203);
    }
    else
    {
      ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v4, 1u, v171);
    }
    goto LABEL_149;
  }
  v71 = (_DWORD *)(v4 + 1280);
  *(_DWORD *)(v4 + 1280) = 2;
  v72 = *(_QWORD *)(v3 + 1128);
  v73 = 102;
  v202 = (_DWORD *)(v4 + 1280);
  v74 = 102LL;
  if ( v72 != v3 + 1128 )
  {
    v75 = v72 - 1296;
    if ( v75 )
    {
      v76 = 0x11000002000LL;
      v77 = 0x8800001000LL;
      do
      {
        if ( *(_DWORD *)(v75 + 1280) == 2 || (*(_BYTE *)(v75 + 1332) & 4) != 0 )
        {
          v78 = *(_BYTE *)(v75 + 1378);
          if ( (v78 & 8) != 0 || (v79 = *(int *)(v75 + 1336), (unsigned int)v79 <= 0x27) && _bittest64(&v77, v79) )
          {
            v81 = 2;
          }
          else if ( (*(_BYTE *)(v75 + 1376) & 0x10) != 0
                 || (v80 = *(int *)(v75 + 1336), (unsigned int)v80 <= 0x28) && _bittest64(&v76, v80) )
          {
            v81 = 4;
          }
          else
          {
            v81 = 1;
          }
          if ( (*(_WORD *)(v75 + 1376) & 0x10) == 0
            && ((v82 = *(int *)(v75 + 1336), (unsigned int)v82 > 0x28) || !_bittest64(&v76, v82))
            || (v78 & 0x40) != 0 )
          {
            v81 |= 8u;
          }
          v83 = *(_DWORD *)(v75 + 1332) >> 3;
          LOWORD(v83) = *(_WORD *)(v75 + 1376) & 3 | (8 * ((*(_DWORD *)(v75 + 1332) & 8) != 0));
          v84 = (unsigned int)(2 * v83);
          LOWORD(v84) = v81 | (8 * (*(_WORD *)(v75 + 1376) & 8 | (2 * v83))) | 0x100;
          LOWORD(v74) = RmpPolicyDigestMerge(v74, v84);
        }
        v85 = *(_QWORD *)(v75 + 1296);
        if ( v85 == *(_QWORD *)(v75 + 1320) + 24 * (*(int *)(v75 + 1328) + 47LL) )
          break;
        v75 = v85 - 1296;
      }
      while ( v85 != 1296 );
      v4 = (__int64)v195;
      v73 = 102;
      v71 = v202;
      LOBYTE(v38) = v176;
    }
  }
  *(_WORD *)(v3 + 1176) = v74;
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v3, 1u);
  QueryUnbiasedInterruptTime((PULONGLONG)(v3 + 1472));
  if ( ((*(_DWORD *)(*(_QWORD *)(v3 + 48) + 508LL) & 4) != 0
     || (*(_BYTE *)(v3 + 1176) & 4) != 0 && (*(_BYTE *)(v3 + 1178) & 4) != 0)
    && ((*(_BYTE *)(v3 + 852) & 1) == 0
     || HampHostCanKillForResourcePressure(
          (struct _RM_HAM_ACTIVITY_HOST *)(v3 + 64),
          (*(_DWORD *)(*(_QWORD *)(v3 + 48) + 508LL) & 4) == 0))
    && (*(_BYTE *)(v3 + 1178) & 0x30) != 0 )
  {
    SetEvent(*(HANDLE *)(*(_QWORD *)(v3 + 56) + 88LL));
  }
  if ( (*(_BYTE *)(v3 + 852) & 1) == 0 )
  {
    if ( !v206 || !RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v3) )
    {
      v186 = 0;
      goto LABEL_108;
    }
    if ( (unsigned int)dword_1800DC1E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC1E0, 1LL, v144, v145) )
    {
      v192 = *(_QWORD **)(v4 + 1752);
      v195 = *(_QWORD **)(v3 + 32);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800DC1E0,
        (unsigned int)&unk_1800C4D20,
        v164,
        v165,
        (__int64)&v195,
        (__int64)&v192);
    }
    *(_DWORD *)(v4 + 1332) |= 4u;
    LOBYTE(v38) = 1;
    *v71 = 1;
    goto LABEL_300;
  }
  v186 = 1;
LABEL_108:
  *v71 = 1;
  v86 = *(_QWORD *)(v4 + 1312) + 80LL;
  v87 = *(_QWORD *)v86;
  v88 = *(_QWORD **)(*(_QWORD *)(v4 + 1312) + 88LL);
  if ( *(_QWORD *)(*(_QWORD *)v86 + 8LL) != v86 || *v88 != v86 )
    goto LABEL_299;
  *v88 = v87;
  *(_QWORD *)(v87 + 8) = v88;
  *(_OWORD *)v86 = 0LL;
  v89 = *(_QWORD *)(v4 + 64);
  v90 = *(_QWORD *)(v4 + 1480);
  UserDataCount = *(_DWORD *)(v4 + 8);
  v219 = *(_OWORD *)(v4 + 1464);
  v220 = v90;
  ExecutionModel::BaseResourceSet::RecursiveVisit(
    v89,
    1,
    1,
    (unsigned int)&v219,
    UserDataCount,
    1,
    (__int64)&v189,
    (__int64)v190,
    0LL,
    v4);
  v91 = *(_QWORD *)(v4 + 1320);
  *v71 = 2;
  if ( (*(_BYTE *)(v91 + 852) & 1) == 0 )
    goto LABEL_145;
  v92 = *(void **)(v4 + 24);
  v93 = (_OWORD *)(v4 + 1296);
  v94 = *(_QWORD *)(v4 + 1296);
  v95 = (_QWORD *)(v91 + 1128);
  v96 = *(_QWORD **)(v4 + 1304);
  ProcessHandle = v92;
  if ( *(_QWORD *)(v94 + 8) != v4 + 1296 )
    goto LABEL_299;
  if ( (_OWORD *)*v96 != v93 )
    goto LABEL_299;
  *v96 = v94;
  *(_QWORD *)(v94 + 8) = v96;
  *v93 = 0LL;
  --*(_DWORD *)(v91 + 1144);
  v97 = *(_QWORD *)v4;
  *(_DWORD *)(v4 + 1328) = 2;
  (*(void (__fastcall **)(__int64))(v97 + 16))(v4);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v98 = *(_QWORD *)(v4 + 1320);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v99 = (_DWORD *)(v98 + 1152);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v100 = *(_QWORD *)v99;
  if ( *(_DWORD **)(*(_QWORD *)v99 + 8LL) != v99 )
LABEL_299:
    __fastfail(3u);
  *(_QWORD *)v93 = v100;
  v101 = 102;
  *(_QWORD *)(v4 + 1304) = v99;
  *(_QWORD *)(v100 + 8) = v93;
  *(_QWORD *)v99 = v93;
  ++v99[4];
  *(_DWORD *)(v4 + 1328) = 1;
  *(_BYTE *)(v4 + 12) = 1;
  v102 = (_QWORD *)*v95;
  if ( (_QWORD *)*v95 != v95 )
  {
    v166 = (ExecutionModel::ResourceSet *)(v102 - 162);
    if ( v102 != (_QWORD *)1296 )
    {
      do
      {
        if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement(v166) )
        {
          v167 = RmpPolicyDigestCompute();
          v101 = RmpPolicyDigestMerge(v168, v167);
        }
        v169 = *((_QWORD *)v166 + 162);
        if ( v169 == *((_QWORD *)v166 + 165) + 24 * (*((int *)v166 + 332) + 47LL) )
          break;
        v166 = (ExecutionModel::ResourceSet *)(v169 - 1296);
      }
      while ( v169 != 1296 );
    }
  }
  *(_WORD *)(v91 + 1176) = v101;
  v103 = *(_QWORD *)(v91 + 1152);
  v104 = *(_WORD *)(v91 + 1178);
  v187 = v104;
  if ( v103 != v91 + 1152 )
  {
    v105 = v103 - 1296;
    if ( v105 )
    {
      v106 = 0x8800001000LL;
      v107 = 0x11000002000LL;
      v108 = 4;
      do
      {
        if ( *(_DWORD *)(v105 + 1280) == 2 || ((unsigned __int8)v108 & *(_BYTE *)(v105 + 1332)) != 0 )
        {
          v109 = *(_BYTE *)(v105 + 1378);
          if ( (v109 & 8) != 0 || (v110 = *(int *)(v105 + 1336), (unsigned int)v110 <= 0x27) && _bittest64(&v106, v110) )
          {
            v112 = 2LL;
          }
          else if ( (*(_BYTE *)(v105 + 1376) & 0x10) != 0
                 || (v111 = *(int *)(v105 + 1336), (unsigned int)v111 <= 0x28) && _bittest64(&v107, v111) )
          {
            v112 = v108;
          }
          else
          {
            v112 = 1LL;
          }
          if ( (*(_WORD *)(v105 + 1376) & 0x10) == 0
            && ((v113 = *(int *)(v105 + 1336), (unsigned int)v113 > 0x28) || !_bittest64(&v107, v113))
            || (v109 & 0x40) != 0 )
          {
            LOWORD(v112) = v112 | 8;
          }
          LOWORD(v112) = (8
                        * (*(_WORD *)(v105 + 1376) & 8 | (2
                                                        * (*(_WORD *)(v105 + 1376) & 3 | (8
                                                                                        * ((*(_DWORD *)(v105 + 1332) >> 3) & 1)))))) | v112 | 0x100;
          v73 = RmpPolicyDigestMerge(v73, v112);
        }
        v114 = *(_QWORD *)(v105 + 1296);
        if ( v114 == *(_QWORD *)(v105 + 1320) + 24 * (*(int *)(v105 + 1328) + 47LL) )
          break;
        v105 = v114 - 1296;
      }
      while ( v114 != 1296 );
      v4 = (__int64)v195;
      LOBYTE(v104) = v187;
      v92 = ProcessHandle;
    }
  }
  *(_WORD *)(v91 + 1178) = v73;
  v115 = *(_QWORD *)(v91 + 56);
  v116 = v73 & 0x80;
  if ( (v104 & 0x80u) != 0 )
  {
    if ( !v116 )
      --*(_DWORD *)(v115 + 212);
  }
  else if ( v116 )
  {
    ++*(_DWORD *)(v115 + 212);
  }
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v91, 3u);
  QueryUnbiasedInterruptTime((PULONGLONG)(v91 + 1472));
  if ( ((*(_DWORD *)(*(_QWORD *)(v91 + 48) + 508LL) & 4) != 0
     || (*(_BYTE *)(v91 + 1176) & 4) != 0 && (*(_BYTE *)(v91 + 1178) & 4) != 0)
    && ((*(_BYTE *)(v91 + 852) & 1) == 0
     || HampHostCanKillForResourcePressure(
          (struct _RM_HAM_ACTIVITY_HOST *)(v91 + 64),
          (*(_DWORD *)(*(_QWORD *)(v91 + 48) + 508LL) & 4) == 0))
    && (*(_BYTE *)(v91 + 1178) & 0x30) != 0 )
  {
    SetEvent(*(HANDLE *)(*(_QWORD *)(v91 + 56) + 88LL));
  }
  v117 = *(_QWORD *)(v91 + 48);
  *(_QWORD *)(v91 + 1224) = 0LL;
  v118 = *(_QWORD *)(v117 + 3232);
  v119 = *(_DWORD *)(v118 + 160);
  if ( (v119 & 3) == 0 )
  {
    *(_DWORD *)(v118 + 160) = v119 | 1;
    TpPostWork(*(_QWORD *)(v118 + 144));
  }
  if ( (*(_BYTE *)(v91 + 852) & 1) != 0 || (int)RmpActivityHostComputeAndApplyEnforcementSettings((PVOID)v91) >= 0 )
  {
    ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
      (ExecutionModel::ResourceManager *)v92,
      (struct _RM_ACTIVITY_HOST *)v91);
    if ( *(_DWORD *)(v91 + 624) == 2 )
    {
      v123 = v91 + 88;
      v179[0] = 0;
      RmpPsmIsSharedEntityFromPsmKey((const unsigned __int16 *)(v91 + 88), v179);
      if ( !v179[0] )
      {
        v180 = 0LL;
        v124 = *(_QWORD **)(v91 + 48);
        v192 = v124;
        if ( (int)CempPackageFamilyNameFromPsmKey(v91 + 88, v275) >= 0 )
        {
          v125 = *(_DWORD *)(v91 + 620);
          memset_0(v227, 0, 0x218uLL);
          v126 = 232LL;
          v127 = v227;
          while ( v126 != -2147483414 )
          {
            v128 = v127[456];
            if ( !v128 )
              break;
            *v127++ = v128;
            if ( !--v126 )
            {
              --v127;
              break;
            }
          }
          v129 = *(_OWORD *)(v123 + 464);
          v130 = *(_DWORD *)(v123 + 528);
          v131 = *(_OWORD *)(v123 + 480);
          *v127 = 0;
          v228 = v129;
          v132 = *(_OWORD *)(v123 + 496);
          v232 = v130;
          v229 = v131;
          v133 = *(_OWORD *)(v123 + 512);
          v233 = v125;
          v230 = v132;
          v231 = v133;
          v134 = (WCHAR *)v227;
          v135 = 314159LL;
          do
          {
            v136 = *v134++;
            LOWORD(v189) = RtlUpcaseUnicodeChar(v136);
            v135 = BYTE1(v189) + 37 * ((unsigned __int8)v189 + 37 * v135);
          }
          while ( v134 < (WCHAR *)&v228 );
          v137 = BYTE1(v233)
               + 37
               * ((unsigned __int8)v233
                + 37
                * (HIBYTE(v232)
                 + 37
                 * (BYTE2(v232)
                  + 37
                  * (BYTE1(v232)
                   + 37
                   * ((unsigned __int8)v232
                    + 37
                    * (HIBYTE(v231)
                     + 37 * (BYTE14(v231) + 37 * (BYTE13(v231) + 37 * (BYTE12(v231) + 37LL * BYTE11(v231))))))))));
          v138 = 0x6AE9F48AE50EFCC5LL * BYTE14(v228)
               + 0x5A90B6DB573C2B45LL * BYTE14(v230)
               + 0x65C63F607A7BA809LL * BYTE1(v229)
               + 0x3433B6F080FF8F35LL * BYTE10(v231)
               + 0xD1A7F3AEDA1FE1A5uLL * BYTE6(v230)
               + 0x7DA9078FE6510661LL * HIBYTE(v229)
               + 0x296E17CC49B5EC05LL * BYTE14(v229)
               + 0x16EA6DB39BB240F9LL * BYTE13(v230)
               + 0x5526FE2C4673CF11LL * BYTE11(v228)
               + 0x981EFA65455B8049uLL * BYTE1(v230)
               + 0xC53F5E946719795LL * BYTE2(v231)
               + 0xF91DC2FB38F228B5uLL * BYTE10(v229)
               + 0x3BF4C3C47ADF2FF1LL * BYTE3(v228)
               + 0x40B7CD9739B584A1LL * HIBYTE(v230)
               + 0xDC6C00E405D269C1uLL * BYTE7(v231)
               + 0x4EA2BC662EBCED75LL * BYTE10(v228)
               + 0x4F5D696EC151561DLL * BYTE4(v229)
               + 0x1CF3332BD290D80DLL * (unsigned __int8)v228
               + 0x9FEAE5B513875FC9uLL * BYTE1(v228)
               + 0xFCE97086A74B1CB9uLL * BYTE13(v229)
               + 0xC378F206849F0269uLL * BYTE9(v230)
               + 0x73D058131B2A8879LL * BYTE13(v228)
               + 0x8BA4A57B9C3D7391uLL * BYTE11(v230)
               + 0xBB24DD21FAFC26B1uLL * BYTE3(v231)
               + 0xBEEC149AF4096455uLL * BYTE2(v230)
               + 0x3C82EBCCD629C471LL * BYTE3(v230)
               + 0x8DBD43762DDB26BDuLL * BYTE12(v229)
               + 0x78803D01F0C17231LL * BYTE3(v229)
               + 0xF5BCA5B282606D41uLL * BYTE7(v229)
               + 0x423D249C25A50325LL * BYTE6(v228)
               + 0xFC7A30A306398A8DuLL * (unsigned __int8)v230
               + 0x407AFAF12AFB592DLL * BYTE8(v230)
               + 0x51C644DB3653E381LL * BYTE7(v230)
               + 0x4128EAEEFF459821LL * HIBYTE(v228)
               + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v231
               + 0xAA604B65C241EDD5uLL * BYTE2(v228)
               + 0xBD1CBAC2ED25B97DuLL * BYTE12(v228)
               + 0xBD90C36322378919uLL * BYTE5(v231)
               + 0x2B26220C747DAB5DLL * BYTE4(v230)
               + 0x14D2E4F3AFFE229LL * (BYTE9(v229) + 37LL * BYTE8(v229))
               + 37 * (BYTE2(v233) + 37 * v137);
          v139 = 0LL;
          v140 = HIBYTE(v233)
               + 0x2F2665556EEF39E1LL * v135
               + 0xDB9C20F4D76948E5uLL * BYTE6(v231)
               + 0x84417E6FF051D6ADuLL * BYTE8(v228)
               + 0x92D64A9170D97459uLL * BYTE5(v228)
               + 0x1D77462DBBD40701LL * BYTE7(v228)
               + 0xB5A728F1B3DF494DuLL * (unsigned __int8)v229
               + 0x288D4C21D6A4D26DLL * BYTE8(v231)
               + 0x38F8C7054F6DD0DDLL * BYTE4(v228)
               + 0x8443F2CCD7EFCA65uLL * BYTE6(v229)
               + 0x2ECBEADD94E1B3F5LL * BYTE10(v230)
               + 0x8B7970C2A4EFB2A9uLL * BYTE9(v231)
               + 0x4D463845869B9CD9LL * BYTE5(v230)
               + 0x6A88D147CBF58115LL * BYTE2(v229)
               + 0x4FE1DAF580C363FDLL * BYTE12(v230)
               + 0x5D853AC4C14E51E9LL * BYTE9(v228)
               + 0x65EC3D53F206D09DLL * BYTE4(v231)
               + 0x1DD2179B35A84099LL * BYTE5(v229)
               + 0xC8228AB72E6AE889uLL * BYTE1(v231)
               + 0x7C5AC014A0AC9951LL * BYTE11(v229)
               + v138;
LABEL_170:
          v187 = *((_DWORD *)v124 + 765);
          v141 = -1LL << (v187 & 0x1F);
          v142 = v140 & v141;
          if ( v139 )
          {
            v124 = v192;
            goto LABEL_172;
          }
          if ( v187 >> 5 )
          {
            v124 = v192;
            v139 = v192[383]
                 + 8
                 * ((((v140 & v141) >> 56)
                   + 37
                   * ((unsigned __int8)((v140 & v141) >> 48)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)((v140 & v141) >> 32) >> 8)
                     + 37
                     * ((unsigned __int8)((v140 & v141) >> 32)
                      + 37
                      * ((((unsigned int)v140 & (unsigned int)v141) >> 24)
                       + 37
                       * ((unsigned __int8)(((unsigned int)v140 & (unsigned int)v141) >> 16)
                        + 37
                        * ((unsigned __int8)((unsigned __int16)(v140 & v141) >> 8)
                         + 37 * ((unsigned __int8)v142 + 11623883)))))))) & ((v187 >> 5) - 1));
LABEL_172:
            while ( 1 )
            {
              v139 = *(_QWORD *)v139;
              if ( (v139 & 1) != 0 )
                break;
              if ( v142 == (v141 & *(_QWORD *)(v139 + 8)) )
              {
                if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v139, v227) )
                  goto LABEL_170;
                v92 = ProcessHandle;
                if ( !v139 )
                  goto LABEL_185;
                goto LABEL_176;
              }
            }
          }
          v92 = ProcessHandle;
        }
LABEL_185:
        v139 = (__int64)v180;
LABEL_176:
        v143 = *(struct _RM_ACTIVITY_HOST **)(v139 + 568);
        if ( v143 && RmpActivityHostHasPpleResourceSet(v143) )
          ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
            (ExecutionModel::ResourceManager *)v92,
            v143);
      }
    }
  }
  LOBYTE(v38) = v176;
LABEL_145:
  if ( (v186 & 1) != 0 )
  {
    v120 = *(_QWORD *)(v4 + 1712);
    if ( v120 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v120 + 32LL))(v120, *(_QWORD *)(v4 + 1720));
    *(_DWORD *)(v4 + 1332) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd((ExecutionModel::ResourceSet *)v4);
  }
LABEL_149:
  if ( v206 )
    *v206 = v38;
  v46 = 0;
LABEL_152:
  while ( 1 )
  {
    v121 = Block[0];
    if ( Block[0] == Block )
      break;
    v172 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v173 = (char *)Block[0] + 16;
    v174 = *(_QWORD *)Block[0];
    *v172 = *(_QWORD *)Block[0];
    *(_QWORD *)(v174 + 8) = v172;
    ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>(v173);
    operator delete(v121);
  }
  return (unsigned int)v46;
}
