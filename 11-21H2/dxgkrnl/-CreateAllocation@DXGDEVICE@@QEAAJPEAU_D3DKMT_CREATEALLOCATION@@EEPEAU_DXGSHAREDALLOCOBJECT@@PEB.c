/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0185854 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C018DB90 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C019F7B4 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CF87C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009AD4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000D9FC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E260 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000EF68 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C002B700 (--0DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C002B714 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C002B9D0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C002BC60 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C004AD54 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0173080 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C01887E0 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C018D7E0 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C01950A0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C0195680 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019DC2C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019F408 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C01C5F88 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C01D0438 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01D98D8 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02D6824 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C02D6948 (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C02E38D4 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C02E6C98 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02E6D98 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C0317E84 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C03746FC (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C03798B4 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0379B34 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        __int64 a3,
        __int64 a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        UINT a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13,
        void *a14,
        UINT a15)
{
  char v15; // di
  unsigned __int8 v16; // r13
  DXGDEVICE *v18; // rsi
  __int64 v19; // rcx
  UINT v20; // ebx
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v24; // r9
  struct DXGPROCESS *v25; // rdi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v27; // rax
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // edx
  __int64 v30; // rdi
  __int64 NumAllocations; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v32; // r15
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r13
  int v35; // edi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  void **p_Next; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  void **v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdi
  PSLIST_ENTRY v46; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v47; // rdi
  UINT v48; // ecx
  __int64 DriverAllocations; // r15
  struct DXGRESOURCE *v50; // r13
  size_t v51; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  __int64 VidPnSourceId; // r9
  UINT v54; // r8d
  D3DKMT_CREATEALLOCATIONFLAGS v55; // ecx
  __int64 v56; // r12
  __int64 v57; // rdx
  UINT Value; // eax
  struct _D3DDDI_ALLOCATIONINFO2 *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // r8
  struct DXGALLOCATION *v62; // rdi
  __int64 v63; // rcx
  unsigned int v64; // edx
  __int64 v65; // rcx
  UINT v66; // eax
  PVOID *hSection; // rdi
  SIZE_T Size; // r12
  UINT v69; // r12d
  __int64 v70; // rax
  unsigned __int64 PrivateDriverDataSize; // rcx
  __int64 v72; // r9
  const wchar_t *v73; // r9
  char *v74; // rdx
  __int64 v75; // r8
  struct _D3DDDI_ALLOCATIONINFO2 *v76; // rcx
  char *v77; // r9
  size_t v78; // r8
  char *pPrivateDriverData; // rdx
  UINT v80; // eax
  void *v81; // r9
  size_t v82; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  __int64 v84; // r9
  unsigned int v85; // edx
  UINT v86; // edi
  __int64 v87; // rcx
  __int64 i; // rcx
  UINT v89; // r15d
  unsigned __int64 v90; // rax
  __int64 v91; // rdi
  void *v92; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v93; // eax
  int v94; // eax
  __int64 v95; // rax
  char v96; // cl
  struct _D3DDDI_ALLOCATIONINFO2 *v97; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS v98; // eax
  struct _DXGK_ALLOCATIONINFO *v99; // r8
  UINT v100; // edx
  unsigned int v101; // eax
  int v102; // edx
  __int64 v103; // rax
  struct DXGALLOCATION *v104; // r12
  UINT v105; // edi
  __int64 v106; // r13
  __int64 v107; // rsi
  unsigned __int64 *v108; // rbx
  __int64 v109; // r8
  __int64 v110; // rax
  struct DXGGLOBAL *Global; // rdi
  __int64 v112; // rax
  __int64 v113; // rax
  D3DKMT_HANDLE v114; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v115; // eax
  D3DKMT_HANDLE v116; // ecx
  unsigned __int8 v117; // di
  __int64 v118; // r8
  __int64 v119; // r9
  D3DKMT_HANDLE *v120; // rdx
  struct DXGALLOCATION *v121; // rdx
  UINT v122; // r12d
  const struct DXGALLOCATION *v123; // rdi
  unsigned int v124; // edx
  __int64 v125; // rax
  __int64 v126; // rcx
  struct _D3DKMT_CREATEALLOCATION *v127; // r12
  UINT v128; // eax
  unsigned int v129; // eax
  UINT PrivateRuntimeDataSize; // ecx
  size_t v131; // r8
  char *pPrivateRuntimeData; // rdx
  void *v133; // r9
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rcx
  struct _D3DKMT_CREATEALLOCATION *v137; // rdx
  const void *v138; // rdx
  __int64 v139; // rax
  struct DXGALLOCATION *v140; // r12
  struct _D3DDDI_ALLOCATIONINFO2 *v141; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v142; // rdi
  void *v143; // rcx
  void *v144; // rdx
  unsigned int v145; // ecx
  __int64 v146; // r12
  unsigned __int8 v147; // di
  D3DKMT_CREATEALLOCATIONFLAGS v148; // edx
  const void *v149; // r11
  const void *v150; // r10
  void **v151; // rax
  unsigned int v152; // r9d
  struct _D3DDDI_ALLOCATIONINFO2 *v153; // r12
  signed int v154; // eax
  __int64 v155; // rdi
  _DWORD *v156; // rdx
  D3DKMT_CREATEALLOCATIONFLAGS v157; // ecx
  int v158; // eax
  struct _DXGSHAREDALLOCOBJECT *v159; // rcx
  struct DXGALLOCATION *v160; // rdi
  struct _EPROCESS *v161; // r13
  UINT v162; // r15d
  int v163; // ecx
  _DWORD *v164; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v165; // eax
  char v166; // r12
  __int64 v167; // rcx
  __int64 v168; // r8
  HANDLE v169; // r9
  struct _DXGSHAREDALLOCOBJECT *v170; // rdi
  UINT v171; // eax
  __int64 v172; // r12
  unsigned int v173; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v174; // ecx
  bool v175; // zf
  void *v176; // rcx
  __int64 v177; // r8
  int v178; // edx
  struct _DXGK_ALLOCATIONINFO *v179; // rcx
  NTSTATUS v180; // eax
  __int64 v181; // rdi
  __int64 v182; // r12
  HANDLE v183; // rax
  struct _DXGK_ALLOCATIONINFO *v184; // r12
  int v185; // eax
  __int64 v186; // rdx
  int v187; // ecx
  __int64 v188; // r8
  struct COREDEVICEACCESS *v189; // r9
  int Resident; // eax
  struct DXGALLOCATION *v191; // r12
  UINT v192; // eax
  __int64 v193; // rdi
  __int64 v194; // rdx
  char *v195; // rcx
  size_t v196; // rcx
  size_t v197; // r12
  const void *v198; // rdx
  char *v199; // rcx
  size_t v200; // r8
  void **v201; // rax
  HANDLE CurrentProcessId; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v203; // eax
  int v204; // eax
  __int64 v205; // rdi
  struct DXGALLOCATION *v206; // rdx
  __int64 v207; // rdi
  D3DKMT_CREATEALLOCATIONFLAGS v208; // ecx
  HANDLE v209; // rcx
  NTSTATUS v210; // eax
  int v211; // eax
  _QWORD *v212; // rdx
  struct _D3DKM_CREATESTANDARDALLOCATION *v213; // rcx
  struct DXGALLOCATION *v214; // r12
  int v215; // edi
  int v216; // ecx
  int v217; // eax
  __int64 v218; // rdx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rcx
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rax
  __int64 v223; // rcx
  struct _D3DKMT_CREATEALLOCATION *v224; // rdi
  union _D3DKMT_CREATEALLOCATION::$B6A7B73B65E251118539A3C0BADB02B0 *p_pStandardAllocation; // rsi
  __int64 v226; // rcx
  __int64 v227; // r8
  int v228; // r9d
  unsigned int v229; // edx
  __int64 v230; // rax
  _DWORD *hPrivateRuntimeResourceHandle; // r8
  __int64 v232; // rdi
  UINT v233; // r12d
  __int64 v234; // rdx
  int v235; // eax
  struct DXGALLOCATION *v236; // r12
  struct DXGALLOCATION *v237; // rdi
  _QWORD *v238; // rax
  __int64 v239; // rcx
  __int64 v240; // rax
  __int64 v241; // rdx
  _QWORD *v242; // rcx
  __int64 v243; // rcx
  __int64 v244; // rcx
  char v245; // di
  int v246; // eax
  __int64 v247; // rcx
  struct DXGPROCESS *v248; // r12
  unsigned int v249; // r8d
  __int64 v250; // rax
  __int64 v251; // r9
  int v252; // edx
  void **v253; // rdi
  struct _SLIST_ENTRY *v254; // rdi
  __int64 v255; // rbx
  PVOID *Object; // [rsp+20h] [rbp-3D8h]
  int Objecta; // [rsp+20h] [rbp-3D8h]
  PVOID *Objectb; // [rsp+20h] [rbp-3D8h]
  __int64 HandleInformation; // [rsp+28h] [rbp-3D0h]
  __int64 v260; // [rsp+30h] [rbp-3C8h]
  int Src; // [rsp+40h] [rbp-3B8h]
  int v262; // [rsp+48h] [rbp-3B0h]
  int v263; // [rsp+50h] [rbp-3A8h]
  int v264; // [rsp+60h] [rbp-398h]
  int v265; // [rsp+68h] [rbp-390h]
  int v266; // [rsp+70h] [rbp-388h]
  int v267; // [rsp+78h] [rbp-380h]
  int v268; // [rsp+88h] [rbp-370h]
  int v269; // [rsp+E0h] [rbp-318h]
  int v270; // [rsp+E8h] [rbp-310h]
  unsigned __int8 v271; // [rsp+100h] [rbp-2F8h]
  unsigned __int8 v272; // [rsp+101h] [rbp-2F7h]
  struct DXGALLOCATION *v273; // [rsp+108h] [rbp-2F0h]
  unsigned __int8 v274[4]; // [rsp+118h] [rbp-2E0h] BYREF
  unsigned int HostProcess; // [rsp+11Ch] [rbp-2DCh]
  __int64 v276; // [rsp+120h] [rbp-2D8h]
  char v277; // [rsp+128h] [rbp-2D0h]
  struct _D3DDDI_ALLOCATIONINFO2 *v278; // [rsp+130h] [rbp-2C8h]
  UINT v279; // [rsp+138h] [rbp-2C0h]
  char v280; // [rsp+13Ch] [rbp-2BCh]
  void **v281; // [rsp+140h] [rbp-2B8h]
  void **v282; // [rsp+148h] [rbp-2B0h]
  UINT v283; // [rsp+150h] [rbp-2A8h]
  struct _DXGK_ALLOCATIONINFO *v284; // [rsp+158h] [rbp-2A0h]
  char v285; // [rsp+160h] [rbp-298h]
  char v286; // [rsp+168h] [rbp-290h]
  struct DXGALLOCATION *v287; // [rsp+170h] [rbp-288h] BYREF
  PVOID v288; // [rsp+178h] [rbp-280h]
  struct DXGPROCESS *v289; // [rsp+180h] [rbp-278h]
  void *v290; // [rsp+188h] [rbp-270h]
  __int64 v291; // [rsp+190h] [rbp-268h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v292; // [rsp+198h] [rbp-260h]
  struct DXGRESOURCE *v293; // [rsp+1A0h] [rbp-258h]
  int v294; // [rsp+1A8h] [rbp-250h]
  __int64 v295; // [rsp+1B0h] [rbp-248h]
  struct _EPROCESS *v296; // [rsp+1B8h] [rbp-240h]
  void *v297; // [rsp+1C0h] [rbp-238h]
  unsigned __int64 *v298; // [rsp+1C8h] [rbp-230h]
  const struct DXGALLOCATION *j; // [rsp+1D0h] [rbp-228h]
  struct DXGPROCESS *v300; // [rsp+1D8h] [rbp-220h]
  struct COREDEVICEACCESS *v301; // [rsp+1E0h] [rbp-218h]
  struct _DXGSHAREDALLOCOBJECT *v302; // [rsp+1E8h] [rbp-210h]
  DXGDEVICE *v303; // [rsp+1F0h] [rbp-208h]
  struct _DXGK_OPENALLOCATIONINFO *v304; // [rsp+1F8h] [rbp-200h]
  struct _D3DKMT_CREATEALLOCATION *v305; // [rsp+200h] [rbp-1F8h]
  struct _D3DKMT_CREATEALLOCATION *v306; // [rsp+210h] [rbp-1E8h]
  struct DXGRESOURCE *v307; // [rsp+220h] [rbp-1D8h] BYREF
  struct _D3DDDI_ALLOCATIONINFO2 *v308; // [rsp+228h] [rbp-1D0h]
  PVOID v309; // [rsp+230h] [rbp-1C8h] BYREF
  char v310[8]; // [rsp+238h] [rbp-1C0h] BYREF
  unsigned int *v311; // [rsp+240h] [rbp-1B8h]
  struct _D3DKMT_CREATEALLOCATION *v312; // [rsp+248h] [rbp-1B0h]
  struct _EX_RUNDOWN_REF *v313; // [rsp+250h] [rbp-1A8h] BYREF
  unsigned __int8 *v314; // [rsp+258h] [rbp-1A0h] BYREF
  unsigned __int64 *v315; // [rsp+260h] [rbp-198h]
  PSLIST_ENTRY ListEntry; // [rsp+268h] [rbp-190h]
  unsigned __int64 *v317; // [rsp+270h] [rbp-188h]
  DXGFASTMUTEX *v318; // [rsp+278h] [rbp-180h] BYREF
  char v319; // [rsp+280h] [rbp-178h]
  struct DXGALLOCATION *v320; // [rsp+288h] [rbp-170h] BYREF
  __int64 v321; // [rsp+290h] [rbp-168h] BYREF
  struct _EX_RUNDOWN_REF *v322; // [rsp+298h] [rbp-160h] BYREF
  PVOID v323; // [rsp+2A0h] [rbp-158h] BYREF
  DXGFASTMUTEX *v324; // [rsp+2A8h] [rbp-150h] BYREF
  char v325; // [rsp+2B0h] [rbp-148h]
  char v326[8]; // [rsp+2B8h] [rbp-140h] BYREF
  __int64 v327; // [rsp+2C0h] [rbp-138h]
  int v328; // [rsp+2C8h] [rbp-130h]
  struct _D3DDDI_ALLOCATIONINFO2 *v329; // [rsp+2D0h] [rbp-128h]
  __int64 v330; // [rsp+2D8h] [rbp-120h]
  struct _DXGKARG_DESCRIBEALLOCATION v331; // [rsp+2E0h] [rbp-118h] BYREF
  _BYTE v332[24]; // [rsp+310h] [rbp-E8h] BYREF
  _BYTE v333[24]; // [rsp+328h] [rbp-D0h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v334; // [rsp+340h] [rbp-B8h] BYREF

  v15 = a4;
  v272 = a4;
  v16 = a3;
  v271 = a3;
  v18 = this;
  v291 = (__int64)this;
  v303 = this;
  v306 = a2;
  v305 = a2;
  v312 = a2;
  v286 = a3;
  v302 = a5;
  v292 = a6;
  v301 = a7;
  v296 = a9;
  v311 = a10;
  v317 = a11;
  v298 = a12;
  v288 = a13;
  v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v19 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 168)) )
  {
    v20 = 0;
  }
  else
  {
    WdLogSingleEntry1(1LL, 4741LL);
    v20 = 0;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      4741LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v16 && v15 )
  {
    WdLogSingleEntry1(1LL, 4746LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!(UserMode && OpenShared)", 4746LL, 0LL, 0LL, 0LL, 0LL);
  }
  v21 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  v277 = *(_BYTE *)(v21 + 209);
  v285 = v277;
  CurrentProcess = PsGetCurrentProcess(v21, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v25 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v27 = (struct DXGPROCESS *)*((_QWORD *)Current + 3), (v289 = v27) == 0LL) )
  {
    v27 = v25;
    v289 = v25;
  }
  v300 = v27;
  Flags = a2->Flags;
  if ( (*(_WORD *)&Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 2156LL) & 0x10) == 0 )
    {
      WdLogSingleEntry2(3LL, v18, -1073741811LL);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&Flags & 2) == 0 )
    {
      WdLogSingleEntry3(3LL, v18, -1073741811LL, 1LL);
      return 3221225485LL;
    }
  }
  v281 = 0LL;
  v290 = 0LL;
  v30 = *((_QWORD *)v18 + 2);
  ListEntry = 0LL;
  v330 = v30;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v45 = v30 + 1536;
    ++*(_DWORD *)(v45 + 20);
    v46 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v45);
    v278 = (struct _D3DDDI_ALLOCATIONINFO2 *)v46;
    if ( !v46 )
    {
      ++*(_DWORD *)(v45 + 24);
      v46 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v45 + 48))(
                            *(unsigned int *)(v45 + 36),
                            *(unsigned int *)(v45 + 44),
                            *(unsigned int *)(v45 + 40));
      v278 = (struct _D3DDDI_ALLOCATIONINFO2 *)v46;
    }
    v47 = (struct _D3DDDI_ALLOCATIONINFO2 *)v46;
    ListEntry = v46;
    if ( !v46 )
    {
      WdLogSingleEntry1(6LL, v18);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Out of memory allocating scratch data",
        (__int64)v18,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741801LL;
    }
    v284 = (struct _DXGK_ALLOCATIONINFO *)&v46[45];
    v304 = (struct _DXGK_OPENALLOCATIONINFO *)&v46[30];
    p_Next = (void **)&v46[40].Next;
    v282 = (void **)&v46[40].Next;
    v43 = (void **)(&v46[42].Next + 1);
    v281 = (void **)(&v46[42].Next + 1);
    v297 = v46;
    goto LABEL_64;
  }
  v32 = 0LL;
  v278 = 0LL;
  v297 = 0LL;
  v33 = (unsigned int)NumAllocations;
  v34 = 96 * NumAllocations;
  v35 = 0;
  if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
  {
    v36 = 96LL * (unsigned int)NumAllocations;
    if ( !is_mul_ok(v33, 0x60uLL) )
      v36 = -1LL;
    v32 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new[](v36, 0x4B677844u, 256LL, v24);
    v278 = v32;
    v297 = v32;
  }
  else
  {
    v35 = -1073741675;
  }
  v284 = 0LL;
  if ( v34 <= 0xFFFFFFFF )
  {
    v35 = 0;
    if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v37 = 88LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
        v37 = -1LL;
      v284 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v37, 0x4B677844u, 258LL, v24);
    }
    else
    {
      v35 = -1073741675;
    }
  }
  v304 = 0LL;
  if ( v35 >= 0 )
  {
    v35 = 0;
    if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v38 = 32LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
        v38 = -1LL;
      v304 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v38, 0x4B677844u, 256LL, v24);
    }
    else
    {
      v35 = -1073741675;
    }
  }
  p_Next = 0LL;
  v282 = 0LL;
  if ( v35 >= 0 )
  {
    v35 = 0;
    if ( 8 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
    {
      v40 = 8LL * a2->NumAllocations;
      if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
        v40 = -1LL;
      p_Next = (void **)operator new[](v40, 0x4B677844u, 256LL, v24);
      v282 = p_Next;
      v16 = v271;
      if ( v271 )
      {
        v42 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v42 = -1LL;
        v43 = (void **)operator new[](v42, 0x4B677844u, 256LL, v41);
        v281 = v43;
        p_Next = v282;
      }
      else
      {
        v43 = 0LL;
      }
      goto LABEL_47;
    }
    v35 = -1073741675;
  }
  v16 = v271;
  v43 = 0LL;
LABEL_47:
  if ( v35 < 0 || !v32 || !v284 || !v304 || !p_Next || !v43 && v16 )
  {
    operator delete[](v32);
    operator delete[](v284);
    operator delete[](v304);
    operator delete[](v282);
    operator delete[](v281);
    if ( v35 >= 0 )
    {
      v35 = -1073741801;
      v44 = -1073741801LL;
    }
    else
    {
      v44 = v35;
    }
    WdLogSingleEntry3(3LL, v18, a2->NumAllocations, v44);
    return (unsigned int)v35;
  }
  v47 = v278;
LABEL_64:
  v308 = v47;
  v329 = v47;
  v48 = 0;
  v279 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      p_Next[v48] = 0LL;
      if ( v16 )
        v43[v48] = 0LL;
      ++v48;
    }
    while ( v48 < a2->NumAllocations );
    v279 = v48;
  }
  v273 = 0LL;
  v287 = 0LL;
  LODWORD(DriverAllocations) = 0;
  v276 = 0LL;
  v274[0] = 0;
  v50 = 0LL;
  v293 = 0LL;
  v280 = 0;
  v307 = 0LL;
  DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v324);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v326, 0LL, 0);
  if ( v271 )
  {
    v51 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v51) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v51 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v47, pAllocationInfo, v51);
  }
  else
  {
    memmove(v47, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v294 = -1;
  v283 = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    v47->pPrivateDriverData = a14;
    v47->PrivateDriverDataSize = a15;
  }
  v54 = 0;
  HostProcess = 0;
  if ( a2->NumAllocations )
  {
    v55 = a2->Flags;
    while ( 1 )
    {
      v56 = v54;
      if ( (*(_WORD *)&v55 & 0x800) != 0 )
      {
        v57 = v54;
        Value = v47[v57].Flags.Value;
        if ( (Value & 1) != 0 )
        {
          VidPnSourceId = v47[v57].VidPnSourceId;
          v294 = VidPnSourceId;
          v283 = VidPnSourceId;
          if ( !*((_QWORD *)v18 + 231) )
          {
            Value &= ~1u;
            v47[v57].Flags.Value = Value;
          }
        }
        if ( (Value & 2) != 0 )
        {
          WdLogSingleEntry2(3LL, v18, -1073741811LL);
          LODWORD(DriverAllocations) = -1073741811;
          v276 = 3221225485LL;
          goto LABEL_117;
        }
      }
      v59 = &v47[v54];
      if ( (v59->Flags.Value & 1) != 0 && !v277 )
      {
        v60 = *((_QWORD *)v18 + 231);
        v295 = v60;
        if ( v60 )
        {
          v63 = *(_QWORD *)(v60 + 2792);
          if ( !v63 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v63 + 16)) )
          {
            WdLogSingleEntry1(1LL, 5006LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->IsDisplayAdapter() && pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
              5006LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v64 = *((_DWORD *)v18 + 464);
          v65 = v295;
          if ( *(_DWORD *)(*(_QWORD *)(v295 + 2792) + 96LL) != v64 )
          {
            WdLogSingleEntry1(1LL, 5012LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == this->GetNumVidPnSources()",
              5012LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v64 = *((_DWORD *)v18 + 464);
            v65 = v295;
          }
          v61 = v59->VidPnSourceId;
          if ( (unsigned int)v61 >= v64 )
            goto LABEL_89;
          if ( !*((_DWORD *)v18 + 108)
            && !v272
            && (*((_DWORD *)v289 + 106) & 0x100) == 0
            && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v65 + 2792), v18, v61) )
          {
            v72 = v278[v56].VidPnSourceId;
            LODWORD(DriverAllocations) = -1071775744;
            v276 = -1071775744LL;
            WdLogSingleEntry4(3LL, -1071775744LL, v18, v72, HostProcess);
            v62 = 0LL;
            goto LABEL_448;
          }
          v54 = HostProcess;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)v18 + 5) + 424LL) & 0x100) == 0 )
        {
          v61 = v278[v54].VidPnSourceId;
LABEL_89:
          WdLogSingleEntry3(3LL, v18, v61, -1073741811LL);
          LODWORD(DriverAllocations) = -1073741811;
          v276 = 3221225485LL;
          v62 = 0LL;
          goto LABEL_448;
        }
      }
      v66 = v59->Flags.Value;
      if ( (v66 & 2) != 0 && (v66 & 1) == 0 )
      {
        WdLogSingleEntry2(3LL, -1073741811LL, v18);
        LODWORD(DriverAllocations) = -1073741811;
        v276 = 3221225485LL;
        v62 = 0LL;
        goto LABEL_448;
      }
      v55 = a2->Flags;
      if ( (*(_DWORD *)&v55 & 0x10000) != 0 )
      {
        if ( (*(_BYTE *)&v55 & 0x20) != 0 && !v59->hSection || (*(_DWORD *)&v55 & 0x20000) != 0 && !v59->hSection )
        {
          WdLogSingleEntry2(2LL, v18, -1073741811LL);
          v260 = 0LL;
          HandleInformation = -1073741811LL;
          v73 = L"Device 0x%I64x: ExistingSysMem pointer or Section Handle not specified, returning 0x%I64x";
          goto LABEL_121;
        }
        hSection = (PVOID *)v59->hSection;
        Size = a2->pStandardAllocation->ExistingHeapData.Size;
        if ( (*(_BYTE *)&v55 & 0x20) != 0 && hSection != (PVOID *)((unsigned __int64)hSection & 0xFFFFFFFFFFFFF000uLL) )
          break;
        if ( Size != (Size & 0xFFFFFFFFFFFFF000uLL) )
          break;
      }
      HostProcess = ++v54;
      v47 = v278;
      if ( v54 >= a2->NumAllocations )
        goto LABEL_112;
    }
    WdLogSingleEntry2(2LL, hSection, Size);
    v260 = 0LL;
    HandleInformation = Size;
    Object = hSection;
    v73 = L"Existing sysmem must be paged aligned and a multiple of page in size.                    pSysMem:0x%I64x, Size:0x%I64x";
    goto LABEL_122;
  }
LABEL_112:
  v69 = 0;
  v279 = 0;
  while ( v69 < a2->NumAllocations )
  {
    v70 = v69;
    PrivateDriverDataSize = v278[v70].PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize > 0x7FFFFFFF )
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
      v62 = 0LL;
      goto LABEL_448;
    }
    if ( v278[v70].pPrivateDriverData && (_DWORD)PrivateDriverDataSize )
    {
      if ( v271 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
        PrivateDriverDataSize = (unsigned int)(2 * PrivateDriverDataSize);
      v74 = (char *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL, VidPnSourceId);
      v282[v69] = v74;
      if ( !v74 )
      {
        LODWORD(DriverAllocations) = -1073741801;
        v276 = 3221225495LL;
        v75 = a2->NumAllocations;
        goto LABEL_131;
      }
      if ( v271 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
      {
        v76 = &v278[v69];
        v77 = &v74[v76->PrivateDriverDataSize];
        v281[v69] = v77;
        v78 = v76->PrivateDriverDataSize;
        pPrivateDriverData = (char *)v76->pPrivateDriverData;
        if ( &pPrivateDriverData[v78] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[v78] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v77, pPrivateDriverData, v78);
      }
    }
    else
    {
      v282[v69] = 0LL;
      if ( v271 )
        v281[v69] = 0LL;
    }
    v279 = ++v69;
    v47 = v278;
  }
  if ( v271 )
  {
    if ( a2->pStandardAllocation )
    {
      v80 = a2->PrivateDriverDataSize;
      if ( v80 )
      {
        v81 = (void *)operator new[](v80, 0x4B677844u, 258LL, VidPnSourceId);
        v290 = v81;
        if ( !v81 )
        {
          LODWORD(DriverAllocations) = -1073741801;
          v276 = 3221225495LL;
          v75 = a2->PrivateDriverDataSize;
LABEL_131:
          WdLogSingleEntry3(3LL, v18, v75, -1073741801LL);
          v62 = 0LL;
          goto LABEL_448;
        }
        v82 = a2->PrivateDriverDataSize;
        pStandardAllocation = a2->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v82) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v82 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v81, pStandardAllocation, v82);
      }
    }
  }
  LODWORD(DriverAllocations) = DXGDEVICE::OpenResourceObject(
                                 v18,
                                 a2,
                                 v47,
                                 v272,
                                 v296,
                                 v302,
                                 (struct DXGRESOURCEREFERENCE *)&v307,
                                 v274,
                                 v292,
                                 (struct DXGAUTOMUTEX *)&v324,
                                 (struct DXGAUTOPUSHLOCK *)v326);
  v276 = (unsigned int)DriverAllocations;
  if ( (int)DriverAllocations < 0 )
  {
LABEL_117:
    v62 = 0LL;
    goto LABEL_448;
  }
  v50 = v307;
  v293 = v307;
  if ( v307 && (*((_DWORD *)v307 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    WdLogSingleEntry3(2LL, v18, v307, -1073741811LL);
    v260 = -1073741811LL;
    HandleInformation = (__int64)v50;
    v73 = L"Device 0x%I64x: Driver asked to create a shared resource, but resource 0x%p already exists, and is non-shared,"
           " returning 0x%I64x";
LABEL_121:
    Object = (PVOID *)v18;
LABEL_122:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v73, (__int64)Object, HandleInformation, v260, 0LL, 0LL);
    LODWORD(DriverAllocations) = -1073741811;
    v276 = 3221225485LL;
    v62 = 0LL;
    goto LABEL_448;
  }
  v85 = v274[0];
  HostProcess = v274[0];
  v86 = a2->NumAllocations;
  v87 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v87 + 184) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v87 + 168)) )
    {
      WdLogSingleEntry1(1LL, 4661LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
        4661LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v85 = HostProcess;
  }
  if ( v50 )
  {
    if ( !v85 )
    {
      for ( i = *((_QWORD *)v50 + 3); i; ++v86 )
        i = *(_QWORD *)(i + 64);
    }
    if ( v86 > 0x10 )
    {
      v89 = v86;
      v90 = 8LL * v86;
      if ( !is_mul_ok(v86, 8uLL) )
        v90 = -1LL;
      v91 = operator new[](v90, 0x4B677844u, 256LL, v84);
      if ( !v91 )
      {
        WdLogSingleEntry3(3LL, v18, v89, -1073741801LL);
        LODWORD(DriverAllocations) = -1073741801;
        v276 = 3221225495LL;
        v62 = v287;
        v273 = v287;
        goto LABEL_448;
      }
      if ( !HostProcess )
      {
        v92 = (void *)*((_QWORD *)v50 + 8);
        if ( v92 )
          operator delete[](v92);
      }
      *((_QWORD *)v50 + 8) = v91;
    }
  }
  v320 = 0LL;
  LODWORD(DriverAllocations) = DXGDEVICE::CreateAllocationObjects(v18, a2->NumAllocations, &v287, v50, &v320);
  v276 = (unsigned int)DriverAllocations;
  v62 = v287;
  v273 = v287;
  if ( (int)DriverAllocations >= 0 )
  {
    if ( v320 )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice(v18, v50, v287, v320);
      v280 = 1;
    }
    v93 = a2->Flags;
    if ( (*(_WORD *)&v93 & 0x800) != 0 )
    {
      if ( v294 != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v50 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v50 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v50 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v50 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
      goto LABEL_189;
    }
    if ( (*(_WORD *)&v93 & 0x1000) != 0 )
    {
      if ( !v292 )
        goto LABEL_189;
      v94 = *(_DWORD *)v292;
      if ( (*(_DWORD *)v292 & 0x80u) != 0 )
      {
        WdLogSingleEntry1(1LL, 5303LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCreateStandardAllocation->Flags.Primary == 0",
          5303LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v94 = *(_DWORD *)v292;
      }
      if ( (v94 & 0x100) == 0 )
      {
LABEL_189:
        if ( v277 )
          goto LABEL_212;
        memset(v284, 0, 88LL * a2->NumAllocations);
        v96 = v272;
        if ( v272 )
        {
          v97 = v278;
        }
        else
        {
          Objectb = (PVOID *)v62;
          v97 = v278;
          DriverAllocations = (unsigned int)DXGDEVICE::CreateDriverAllocations(
                                              v18,
                                              a2,
                                              v278,
                                              v284,
                                              (struct DXGALLOCATION *)Objectb,
                                              v50,
                                              v282,
                                              v281,
                                              v290,
                                              v292,
                                              v271,
                                              (struct _D3DKMT_CREATESTANDARDALLOCATION *)v288);
          v276 = DriverAllocations;
          v96 = 0;
        }
        if ( (int)DriverAllocations < 0 )
          goto LABEL_447;
        LODWORD(DriverAllocations) = DXGDEVICE::OpenAllocations(
                                       v18,
                                       a2,
                                       v97,
                                       v273,
                                       v304,
                                       v282,
                                       v281,
                                       (D3DKMT_CREATESTANDARDALLOCATION *)v290,
                                       v271,
                                       v96,
                                       a8,
                                       v311,
                                       v317);
        v276 = (unsigned int)DriverAllocations;
        if ( (int)DriverAllocations < 0 )
          goto LABEL_447;
        v98 = a2->Flags;
        v99 = v284;
        v100 = v284->Flags.Value;
        if ( (*(_BYTE *)&v98 & 8) != 0 )
        {
          v100 |= 0x4000008u;
          v284->Flags.Value = v100;
          v98 = a2->Flags;
        }
        if ( (*(_WORD *)&v98 & 0x100) != 0 )
        {
          v100 = v100 & 0xFEFFFFFB | 0x1000000;
        }
        else
        {
          if ( (*(_WORD *)&v98 & 0x200) == 0 )
          {
LABEL_202:
            v101 = v100 & 0xFFFFF7FF;
            v102 = v100 | 0x800;
            if ( (*(_DWORD *)&a2->Flags & 0x8000) == 0 )
              v102 = v101;
            v99->Flags.Value = v102;
            if ( (*(_DWORD *)&a2->Flags & 0x80000) != 0 )
              v99->Flags.Value = v102 | 0x1000;
            LODWORD(DriverAllocations) = DXGDEVICE::CreateVidMmAllocations(v18, a2, v97, v99, v273, v292, v272, v301);
            v276 = (unsigned int)DriverAllocations;
            if ( (int)DriverAllocations < 0 )
              goto LABEL_447;
            if ( v298 )
            {
              v103 = *((_QWORD *)v18 + 2);
              v104 = v273;
              v105 = 0;
              if ( a2->NumAllocations )
              {
                v106 = *(_QWORD *)(v103 + 656);
                v107 = *(_QWORD *)(v103 + 648);
                v108 = v298;
                do
                {
                  v109 = *(_DWORD *)&a2->Flags >> 5;
                  LOBYTE(v109) = (*(_DWORD *)&a2->Flags & 0x20) != 0;
                  v108[v105] = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v107 + 8) + 640LL))(
                                 v106,
                                 *((_QWORD *)v104 + 3),
                                 v109);
                  v104 = (struct DXGALLOCATION *)*((_QWORD *)v104 + 8);
                  ++v105;
                }
                while ( v105 < a2->NumAllocations );
                v20 = 0;
                v18 = (DXGDEVICE *)v291;
                v50 = v293;
              }
            }
LABEL_212:
            if ( v274[0] )
            {
              if ( v50 )
              {
                if ( (*((_DWORD *)v50 + 1) & 1) != 0 )
                {
                  v110 = *((_QWORD *)v50 + 7);
                  if ( !*(_DWORD *)(v110 + 24) && (*(_DWORD *)(v110 + 12) & 8) == 0 )
                  {
                    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v318);
                    if ( v319 )
                      WdLogSingleEntry5(0LL, 275LL, 4LL, &v318, 0LL, 0LL);
                    DXGFASTMUTEX::Acquire(v318);
                    v319 = 1;
                    if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
                    {
                      WdLogSingleEntry1(1LL, 5443LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"0 != (pCreateAllocation->Flags.CreateShared)",
                        5443LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    if ( (*((_DWORD *)v289 + 106) & 0x100) != 0 )
                    {
                      *(_DWORD *)(*((_QWORD *)v50 + 7) + 24LL) = DXGPROCESS::AllocHandleSafe(
                                                                   *((_QWORD *)v289 + 76),
                                                                   *((_QWORD *)v50 + 7),
                                                                   2u);
                      *(_DWORD *)(*((_QWORD *)v50 + 7) + 12LL) |= 0x2000u;
                    }
                    else
                    {
                      Global = DXGGLOBAL_GetGlobal();
                      v112 = *((_QWORD *)v50 + 7);
                      v291 = v112;
                      if ( *((struct _KTHREAD **)Global + 39) != KeGetCurrentThread() )
                      {
                        WdLogSingleEntry1(1LL, 1433LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"m_ShareMutex.IsOwner()",
                          1433LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        v112 = v291;
                      }
                      *(_DWORD *)(*((_QWORD *)v50 + 7) + 24LL) = HMGRTABLE::AllocHandle(
                                                                   (char *)Global + 336,
                                                                   v112,
                                                                   2LL,
                                                                   2LL,
                                                                   0);
                      v273 = v287;
                    }
                    if ( !*(_DWORD *)(*((_QWORD *)v50 + 7) + 24LL) )
                    {
                      WdLogSingleEntry2(3LL, v18, -1073741801LL);
                      LODWORD(DriverAllocations) = -1073741801;
                      v276 = 3221225495LL;
                      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v318);
                      goto LABEL_447;
                    }
                    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v318);
                  }
                }
              }
              DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
                (DXGAUTOPUSHLOCKEXCLUSIVE *)v332,
                (struct _KTHREAD **)v18 + 30);
              v113 = *((_QWORD *)v18 + 7);
              if ( v113 )
              {
                *(_QWORD *)(v113 + 32) = v50;
                v113 = *((_QWORD *)v18 + 7);
              }
              *((_QWORD *)v50 + 5) = v113;
              *((_QWORD *)v18 + 7) = v50;
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v332);
            }
            v114 = 0;
            if ( v50 )
              v114 = *((_DWORD *)v50 + 4);
            a2->hResource = v114;
            v115 = a2->Flags;
            if ( ((*(_BYTE *)&v115 & 2) != 0 || v272) && (*(_BYTE *)&v115 & 0x40) == 0 )
              v116 = *(_DWORD *)(*((_QWORD *)v50 + 7) + 24LL);
            else
              v116 = 0;
            a2->hGlobalShare = v116;
            v117 = v271;
            if ( v271 )
            {
              v118 = 0LL;
              v279 = 0;
              v119 = (__int64)v273;
              j = v273;
              while ( (unsigned int)v118 < a2->NumAllocations )
              {
                v120 = &a2->pAllocationInfo->hAllocation + 24 * (unsigned int)v118;
                if ( (unsigned __int64)v120 >= MmUserProbeAddress )
                  v120 = (D3DKMT_HANDLE *)MmUserProbeAddress;
                *v120 = *(_DWORD *)(v119 + 16);
                v118 = (unsigned int)(v118 + 1);
                v279 = v118;
                v119 = *(_QWORD *)(v119 + 64);
                j = (const struct DXGALLOCATION *)v119;
              }
            }
            else
            {
              v118 = 0LL;
              v279 = 0;
              v121 = v273;
              v119 = (__int64)v273;
              j = v273;
              if ( !a2->NumAllocations )
              {
LABEL_250:
                if ( (*(_DWORD *)(*((_QWORD *)v18 + 5) + 424LL) & 0x100) == 0 || *((_DWORD *)v18 + 464) )
                {
                  v122 = 0;
                  v279 = 0;
                  v123 = v121;
                  for ( j = v121; v122 < a2->NumAllocations; j = v123 )
                  {
                    v124 = *(_DWORD *)(*((_QWORD *)v123 + 6) + 4LL);
                    if ( (v124 & 1) != 0 )
                    {
                      LODWORD(DriverAllocations) = DXGDEVICE::AddPrimaryAllocation(v18, v123);
                      v276 = (unsigned int)DriverAllocations;
                      if ( (int)DriverAllocations < 0 )
                        goto LABEL_447;
                    }
                    else if ( (v124 & 2) != 0 )
                    {
                      DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v18, (v124 >> 6) & 0xF, v123, 0, 1u);
                    }
                    v279 = ++v122;
                    v123 = (const struct DXGALLOCATION *)*((_QWORD *)v123 + 8);
                  }
                  v117 = v271;
                }
                if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
                {
                  if ( a2->pPrivateRuntimeData )
                  {
                    v125 = *((_QWORD *)v50 + 7);
                    if ( *(_QWORD *)(v125 + 104) )
                    {
                      v129 = *(_DWORD *)(v125 + 112);
                      v127 = v305;
                      PrivateRuntimeDataSize = v305->PrivateRuntimeDataSize;
                      if ( v129 != PrivateRuntimeDataSize )
                      {
                        LODWORD(DriverAllocations) = -1073741811;
                        v276 = 3221225485LL;
                        WdLogSingleEntry3(3LL, v18, PrivateRuntimeDataSize, v129);
                        goto LABEL_447;
                      }
                    }
                    else
                    {
                      *(_QWORD *)(*((_QWORD *)v50 + 7) + 104LL) = operator new[](
                                                                    a2->PrivateRuntimeDataSize,
                                                                    0x4B677844u,
                                                                    258LL,
                                                                    v119);
                      v126 = *((_QWORD *)v50 + 7);
                      v127 = v305;
                      v128 = v305->PrivateRuntimeDataSize;
                      if ( !*(_QWORD *)(v126 + 104) )
                      {
LABEL_264:
                        LODWORD(DriverAllocations) = -1073741801;
                        v276 = 3221225495LL;
                        WdLogSingleEntry3(3LL, v18, v128, -1073741801LL);
                        goto LABEL_447;
                      }
                      *(_DWORD *)(v126 + 112) = v128;
                    }
                    if ( v117 )
                    {
                      v131 = v127->PrivateRuntimeDataSize;
                      pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
                      v133 = *(void **)(*((_QWORD *)v50 + 7) + 104LL);
                      if ( &pPrivateRuntimeData[v131] < pPrivateRuntimeData
                        || (unsigned __int64)&pPrivateRuntimeData[v131] > MmUserProbeAddress )
                      {
                        *(_BYTE *)MmUserProbeAddress = 0;
                      }
                      memmove(v133, pPrivateRuntimeData, v131);
                    }
                    else
                    {
                      memmove(
                        *(void **)(*((_QWORD *)v50 + 7) + 104LL),
                        a2->pPrivateRuntimeData,
                        a2->PrivateRuntimeDataSize);
                    }
                    if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
                    {
                      LODWORD(DriverAllocations) = CheckNoKmdAccessPrivateData(
                                                     v127->PrivateRuntimeDataSize,
                                                     *(void **)(*((_QWORD *)v50 + 7) + 104LL),
                                                     0xFF000004);
                      v276 = (unsigned int)DriverAllocations;
                      if ( (int)DriverAllocations < 0 )
                        goto LABEL_447;
                    }
                  }
                  if ( a2->pStandardAllocation )
                  {
                    v134 = a2->PrivateDriverDataSize;
                    if ( (_DWORD)v134 )
                    {
                      v135 = *((_QWORD *)v50 + 7);
                      if ( *(_QWORD *)(v135 + 120) )
                      {
                        v145 = *(_DWORD *)(v135 + 128);
                        if ( v145 != (_DWORD)v134 )
                        {
                          LODWORD(DriverAllocations) = -1073741811;
                          v276 = 3221225485LL;
                          WdLogSingleEntry4(3LL, v18, v134, v145, 5696LL);
                          goto LABEL_447;
                        }
                      }
                      else
                      {
                        *(_QWORD *)(*((_QWORD *)v50 + 7) + 120LL) = operator new[](
                                                                      (unsigned int)v134,
                                                                      0x4B677844u,
                                                                      258LL,
                                                                      v119);
                        v136 = *((_QWORD *)v50 + 7);
                        v137 = v305;
                        v128 = v305->PrivateDriverDataSize;
                        if ( !*(_QWORD *)(v136 + 120) )
                          goto LABEL_264;
                        *(_DWORD *)(v136 + 128) = v128;
                        LODWORD(v134) = v137->PrivateDriverDataSize;
                      }
                      v138 = v290;
                      if ( !v117 )
                        v138 = a2->pStandardAllocation;
                      memmove(*(void **)(*((_QWORD *)v50 + 7) + 120LL), v138, (unsigned int)v134);
                      if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
                      {
                        LODWORD(DriverAllocations) = CheckNoKmdAccessPrivateData(
                                                       a2->PrivateDriverDataSize,
                                                       *(void **)(*((_QWORD *)v50 + 7) + 120LL),
                                                       0xFF000001);
                        v276 = (unsigned int)DriverAllocations;
                        if ( (int)DriverAllocations < 0 )
                          goto LABEL_447;
                      }
                    }
                  }
                  v139 = 0LL;
                  v279 = 0;
                  v62 = v273;
                  v140 = v273;
                  j = v273;
                  if ( a2->NumAllocations )
                  {
                    v141 = v278;
                    while ( 1 )
                    {
                      v295 = v139;
                      v142 = &v141[v139];
                      if ( v142->pPrivateDriverData )
                      {
                        *(_QWORD *)(*((_QWORD *)v140 + 6) + 32LL) = operator new[](
                                                                      v142->PrivateDriverDataSize,
                                                                      0x4B677844u,
                                                                      258LL,
                                                                      v119);
                        v143 = *(void **)(*((_QWORD *)v140 + 6) + 32LL);
                        if ( !v143 )
                        {
                          LODWORD(DriverAllocations) = -1073741801;
                          v276 = 3221225495LL;
                          WdLogSingleEntry4(3LL, v18, v279 + 1, v278[v295].PrivateDriverDataSize, -1073741801LL);
                          goto LABEL_447;
                        }
                        if ( !v271 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                          v144 = v142->pPrivateDriverData;
                        else
                          v144 = v281[v295];
                        memmove(v143, v144, v142->PrivateDriverDataSize);
                        *(_DWORD *)(*((_QWORD *)v140 + 6) + 40LL) = v142->PrivateDriverDataSize;
                        v141 = v278;
                      }
                      v139 = v279 + 1;
                      v279 = v139;
                      v140 = (struct DXGALLOCATION *)*((_QWORD *)v140 + 8);
                      j = v140;
                      if ( (unsigned int)v139 >= a2->NumAllocations )
                        goto LABEL_297;
                    }
                  }
                }
                else
                {
LABEL_297:
                  v62 = v273;
                }
                v146 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
                v295 = v146;
                v317 = (unsigned __int64 *)v146;
                if ( !*(_BYTE *)(v146 + 209) )
                  goto LABEL_403;
                if ( v272 )
                {
LABEL_371:
                  if ( *(_BYTE *)(v146 + 209) )
                  {
                    v62 = v273;
                    if ( v272 )
                      goto LABEL_404;
                    if ( !bTracingEnabled )
                      goto LABEL_404;
                    v191 = v273;
                    v192 = 0;
                    HostProcess = 0;
                    if ( !a2->NumAllocations )
                      goto LABEL_404;
                    do
                    {
                      if ( bTracingEnabled )
                      {
                        LODWORD(v287) = *((_DWORD *)v191 + 5);
                        v193 = *((_QWORD *)v191 + 5);
                        if ( v193 )
                          v302 = *(struct _DXGSHAREDALLOCOBJECT **)(v193 + 48);
                        else
                          v302 = 0LL;
                        if ( v193 )
                          v283 = *(_DWORD *)(v193 + 16);
                        else
                          v283 = 0;
                        LODWORD(v288) = *((_DWORD *)v191 + 4);
                        if ( v193 )
                          v308 = *(struct _D3DDDI_ALLOCATIONINFO2 **)(v193 + 56);
                        else
                          v308 = 0LL;
                        v312 = *(struct _D3DKMT_CREATEALLOCATION **)(*((_QWORD *)v18 + 2) + 16LL);
                        CurrentProcessId = PsGetCurrentProcessId();
                        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
                          McTemplateK0ppppppppppppq_EtwWriteTransfer(
                            (__int64)v312,
                            &EventCreateDeviceAllocation,
                            (__int64)v302,
                            CurrentProcessId,
                            v18,
                            v312,
                            v191);
                        v192 = HostProcess;
                      }
                      HostProcess = ++v192;
                      v191 = (struct DXGALLOCATION *)*((_QWORD *)v191 + 8);
                    }
                    while ( v192 < a2->NumAllocations );
                  }
LABEL_403:
                  v62 = v273;
LABEL_404:
                  v203 = a2->Flags;
                  if ( (*(_WORD *)&v203 & 0x800) != 0 )
                  {
                    memset(&v331.Width, 0, 40);
                    v331.hAllocation = *(HANDLE *)(*((_QWORD *)v62 + 6) + 16LL);
                    v204 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)v18 + 2), &v331, v118);
                    LODWORD(DriverAllocations) = v204;
                    v276 = v204;
                    if ( v204 < 0 )
                    {
                      WdLogSingleEntry4(3LL, v204, v18, *((unsigned int *)v62 + 4), v62);
                      goto LABEL_448;
                    }
                    if ( v331.Format == D3DDDIFMT_UNKNOWN && v331.Height != 1 )
                    {
                      WdLogSingleEntry3(3LL, -1073741811LL, v18, v331.Height);
                      LODWORD(DriverAllocations) = -1073741811;
                      v276 = 3221225485LL;
                      goto LABEL_448;
                    }
                    v205 = *((_QWORD *)v62 + 5);
                    if ( (*(_DWORD *)(*(_QWORD *)(v205 + 56) + 12LL) & 0x20) != 0 )
                    {
                      v206 = v273;
                    }
                    else
                    {
                      WdLogSingleEntry1(1LL, 6140LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"pAllocationObjectList->m_pOwningResource->m_pSharedResource->m_CrossAdapter",
                        6140LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      v206 = v273;
                      v205 = *((_QWORD *)v273 + 5);
                    }
                    v207 = *(_QWORD *)(v205 + 56);
                    *(_DWORD *)(v207 + 208) = v331.Width;
                    *(_DWORD *)(v207 + 212) = v331.Height;
                    *(_DWORD *)(v207 + 216) = v331.Format;
                    v208 = v305->Flags;
                    if ( (*((_BYTE *)v18 + 1869) & 1) != 0 )
                    {
                      if ( (*(_DWORD *)&v208 & 0x20000) != 0 )
                      {
                        v209 = v278->hSection;
                        v309 = 0LL;
                        v210 = ObReferenceObjectByHandle(v209, 0x20000u, MmSectionObjectType, v271, &v309, 0LL);
                        *(_QWORD *)(v207 + 192) = v309;
                        LODWORD(DriverAllocations) = v210;
                        v276 = (unsigned int)v210;
                        if ( v210 < 0 )
                        {
                          v181 = v210;
                          WdLogSingleEntry2(2LL, v278->hSection, v210);
                          v183 = v278->hSection;
LABEL_362:
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
                            (__int64)v183,
                            v181,
                            0LL,
                            0LL,
                            0LL);
                          goto LABEL_447;
                        }
                        *(_DWORD *)(v207 + 12) |= 0x400u;
                      }
                    }
                    else
                    {
                      if ( (*(_BYTE *)&v208 & 0x20) == 0 )
                      {
                        *(_QWORD *)(v207 + 192) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 648LL) + 8LL)
                                                                                            + 696LL))(
                                                    *(_QWORD *)(*((_QWORD *)v18 + 2) + 656LL),
                                                    *((_QWORD *)v206 + 3));
                        *(_DWORD *)(v207 + 12) |= 0x400u;
                      }
                      *(_QWORD *)(v207 + 224) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 648LL) + 8LL)
                                                                                          + 768LL))(
                                                  *(_QWORD *)(*((_QWORD *)v18 + 2) + 656LL),
                                                  *((_QWORD *)v273 + 3));
                    }
                    v211 = v294;
                    *(_DWORD *)(v207 + 232) = v294;
                    if ( v211 != -1 )
                    {
                      *(_DWORD *)(v207 + 12) |= 0x40u;
                      *(_DWORD *)(v207 + 12) ^= ((unsigned __int8)*(_DWORD *)(v207 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
                    }
                  }
                  else if ( (*(_WORD *)&v203 & 0x1000) != 0 )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 648LL)
                                                                                        + 8LL)
                                                                            + 776LL))(
                      *(_QWORD *)(*((_QWORD *)v18 + 2) + 656LL),
                      *((_QWORD *)v62 + 3),
                      *((_QWORD *)v292 + 43),
                      v119);
                  }
                  v212 = (_QWORD *)*((_QWORD *)v18 + 2);
                  v309 = v212;
                  if ( (*(_DWORD *)(v212[2] + 2156LL) & 0x40) != 0 )
                  {
                    v213 = v292;
                    if ( v292 )
                    {
                      v62 = v273;
                      if ( (*(_DWORD *)v292 & 0x200) != 0 )
                        goto LABEL_448;
                      memset(&v334, 0, 56);
                      memset(&v334.DriverProtection, 0, 40);
                      v334.Protection.Value = 1LL;
                      v283 = 0;
                      v214 = v273;
                      if ( !a2->NumAllocations )
                        goto LABEL_448;
                      while ( 1 )
                      {
                        v215 = (*((_DWORD *)v214 + 18) >> 12) & 0x3F;
                        if ( *((_DWORD *)v213 + 4) == 4 )
                        {
                          v216 = *(_DWORD *)(*((_QWORD *)v213 + 3) + 12LL);
                          if ( ((v216 - 1) & 0xFFFFFFFC) != 0 || v216 == 2 )
                          {
                            if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL)) )
                              v215 = -1;
                            v212 = v309;
                          }
                        }
                        if ( v277 )
                        {
                          v217 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 4344LL),
                                   *((_DWORD *)v289 + 126),
                                   v18,
                                   0,
                                   *((_DWORD *)v214 + 5),
                                   &v334);
                        }
                        else
                        {
                          LOBYTE(Objecta) = 0;
                          v217 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v212[81] + 8LL) + 808LL))(
                                   v212[82],
                                   0LL,
                                   *((_QWORD *)v214 + 3),
                                   &v334,
                                   Objecta,
                                   v215);
                        }
                        LODWORD(DriverAllocations) = v217;
                        v276 = (unsigned int)v217;
                        if ( v217 < 0 )
                          break;
                        v221 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
                        if ( *(_BYTE *)(v221 + 2710) )
                        {
                          v175 = (*((_DWORD *)DXGPROCESS::GetCurrent(v221, v218, v219, v220) + 106) & 0x180) == 0;
                          BaseAddress = v334.BaseAddress;
                          if ( v175 )
                            BaseAddress = v334.VirtualAddress;
                          v334.BaseAddress = BaseAddress;
                        }
                        v334.VirtualAddress = 0LL;
                        ++v283;
                        v214 = (struct DXGALLOCATION *)*((_QWORD *)v214 + 8);
                        v212 = v309;
                        v213 = v292;
                        if ( v283 >= a2->NumAllocations )
                          goto LABEL_447;
                      }
                      WdLogSingleEntry1(3LL, v217);
                    }
                  }
LABEL_447:
                  v62 = v273;
                  goto LABEL_448;
                }
                HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v18 + 5));
                if ( !HostProcess )
                {
                  WdLogSingleEntry1(2LL, -1073741823LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to get host adapter process, returning 0x%I64x",
                    -1073741823LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  LODWORD(DriverAllocations) = -1073741823;
                  v276 = 3221225473LL;
                  goto LABEL_448;
                }
                v314 = 0LL;
                v147 = DXGDEVICE::UmdManagesResidency(v18) && v292 && (unsigned int)(*((_DWORD *)v292 + 4) - 1) <= 2;
                v148 = a2->Flags;
                if ( (*(_BYTE *)&v148 & 2) != 0 )
                  v149 = *(const void **)(*((_QWORD *)v50 + 7) + 104LL);
                else
                  v149 = 0LL;
                v150 = v290;
                if ( v271 )
                {
                  v151 = v281;
                  if ( (*(_DWORD *)&v148 & 0x10000) == 0 )
                    goto LABEL_315;
                }
                else
                {
                  v150 = a2->pStandardAllocation;
                }
                v151 = v282;
LABEL_315:
                if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
                  v152 = *((_DWORD *)v50 + 5);
                else
                  v152 = 0;
                v153 = v278;
                v154 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v295 + 4344),
                         HostProcess,
                         *((_DWORD *)v18 + 110),
                         v152,
                         a2,
                         v278,
                         v151,
                         v150,
                         v149,
                         v271,
                         v147,
                         &v314);
                HostProcess = v154;
                if ( !v314 )
                {
                  v155 = v154;
                  WdLogSingleEntry1(2LL, v154);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"VmBusSendCreateAllocation failed: 0x%I64x",
                    v155,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  LODWORD(DriverAllocations) = HostProcess;
                  v276 = HostProcess;
                  goto LABEL_447;
                }
                v156 = v314;
                v296 = (struct _EPROCESS *)v314;
                if ( !v50 )
                  goto LABEL_329;
                *((_DWORD *)v50 + 5) = *((_DWORD *)v314 + 1);
                v157 = a2->Flags;
                if ( (*(_BYTE *)&v157 & 2) == 0 )
                  goto LABEL_329;
                v158 = v156[2];
                if ( (*(_BYTE *)&v157 & 0x40) != 0 )
                {
                  if ( v158 )
                  {
                    WdLogSingleEntry1(1LL, 5820LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"NULL == pOutput->hGlobalSharedResource",
                      5820LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
LABEL_327:
                    v156 = v296;
                  }
                }
                else if ( !v158 )
                {
                  WdLogSingleEntry1(1LL, 5824LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pOutput->hGlobalSharedResource",
                    5824LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  goto LABEL_327;
                }
                *(_DWORD *)(*((_QWORD *)v50 + 7) + 28LL) = v156[2];
LABEL_329:
                v298 = 0LL;
                v315 = 0LL;
                if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v50 )
                {
                  v298 = *(unsigned __int64 **)(*((_QWORD *)v50 + 7) + 136LL);
                  v315 = v298;
                }
                v159 = v273;
                v160 = v273;
                LODWORD(v288) = 0;
                if ( a2->NumAllocations )
                {
                  v161 = v296;
                  v162 = 0;
                  do
                  {
                    v163 = *((_DWORD *)v161 + 3);
                    *((_DWORD *)v160 + 32) = v163;
                    v164 = (_DWORD *)((char *)v161 + 72 * v162);
                    *((_DWORD *)v160 + 5) = v164[4];
                    *((_BYTE *)v160 + 128) = v163 | 4;
                    v165 = a2->Flags;
                    if ( (*(_BYTE *)&v165 & 2) != 0 && (*(_DWORD *)&v165 & 0x20020) != 0 )
                      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v160 + 5) + 56LL) + 200LL) = v164[7];
                    else
                      *((_DWORD *)v160 + 31) = v164[7];
                    if ( *((_BYTE *)v161 + 12) & 1 | ((*((_BYTE *)v161 + 12) & 2) != 0) )
                      *((_QWORD *)v160 + 13) = v153[v162].hSection;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 1;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 2;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 4;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 8;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 0x20;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 0x800;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 0x1000;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 0x2000;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 0x4000;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 0x40000;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 0x80000;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ v164[6]) & 0x100000;
                    *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) |= 0x20000u;
                    if ( (v153[v162].Flags.Value & 1) != 0 )
                    {
                      *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) ^ (v153[v162].VidPnSourceId << 6)) & 0x3C0;
                      if ( *((_QWORD *)v18 + 231) != *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) )
                        *(_DWORD *)(*((_QWORD *)v160 + 6) + 4LL) |= 4u;
                    }
                    if ( bTracingEnabled )
                    {
                      v166 = (*((_DWORD *)v160 + 18) >> 12) & 0x3F;
                      v291 = *((_QWORD *)v160 + 6);
                      v301 = (struct COREDEVICEACCESS *)*((unsigned int *)v160 + 30);
                      v311 = *(unsigned int **)(*((_QWORD *)v18 + 2) + 16LL);
                      v169 = PsGetCurrentProcessId();
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
                        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
                          v167,
                          &EventCreateAdapterAllocation,
                          v168,
                          (__int64)v169,
                          (char)v18,
                          (char)v311,
                          0,
                          (char)v301,
                          Src,
                          v262,
                          v263,
                          0,
                          v264,
                          v265,
                          v266,
                          v267,
                          v291,
                          v268,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          v269,
                          v270,
                          v166,
                          0);
                      v153 = v278;
                    }
                    ++v162;
                    v160 = (struct DXGALLOCATION *)*((_QWORD *)v160 + 8);
                  }
                  while ( v162 < a2->NumAllocations );
                  LODWORD(DriverAllocations) = v276;
                  v50 = v293;
                  v156 = v296;
                  v159 = v273;
                }
                if ( (HostProcess & 0x80000000) != 0 )
                {
                  LODWORD(DriverAllocations) = HostProcess;
                  v276 = HostProcess;
                  goto LABEL_447;
                }
                v170 = v159;
                v302 = v159;
                v171 = 0;
                while ( 1 )
                {
                  HostProcess = v171;
                  if ( v171 >= a2->NumAllocations )
                    break;
                  v172 = v171;
                  v173 = v156[18 * v171 + 8];
                  v174 = a2->Flags;
                  if ( (*(_DWORD *)&v174 & 0x10000) != 0 )
                  {
                    v291 = 96LL * v171;
                    v175 = (*(_BYTE *)&v174 & 0x20) == 0;
                    v176 = *(HANDLE *)((char *)&v308->hSection + v291);
                    if ( v175 )
                    {
                      v323 = 0LL;
                      v180 = ObReferenceObjectByHandle(v176, 0x20000u, MmSectionObjectType, v271, &v323, 0LL);
                      v288 = v323;
                      LODWORD(DriverAllocations) = v180;
                      v276 = (unsigned int)v180;
                      if ( v180 < 0 )
                      {
                        v181 = v180;
                        v182 = v291;
                        WdLogSingleEntry2(2LL, *(HANDLE *)((char *)&v278->hSection + v291), v180);
                        v183 = *(HANDLE *)((char *)&v278->hSection + v182);
                        goto LABEL_362;
                      }
                      v184 = &v284[v172];
                      v185 = ProcessSectionAttributes(v323, v184);
                      DriverAllocations = v185;
                      v276 = v185;
                      if ( v185 < 0 )
                      {
                        WdLogSingleEntry3(2LL, v18, v185, 5984LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
                          (__int64)v18,
                          DriverAllocations,
                          5984LL,
                          0LL,
                          0LL);
                        ObfDereferenceObject(v288);
                        goto LABEL_447;
                      }
                      v186 = *(_QWORD *)(*((_QWORD *)v170 + 5) + 56LL);
                      *(_DWORD *)(v186 + 12) |= 0x400u;
                      v187 = *(_DWORD *)(v186 + 12);
                      *(_QWORD *)(v186 + 192) = v288;
                      *(_DWORD *)(v186 + 204) = v184->Alignment;
                      *(_DWORD *)(v186 + 12) = v187 ^ ((unsigned __int16)v187 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v184->Flags.0 << 9)) & 0x800;
                    }
                    else
                    {
                      v291 = *(__int64 *)((char *)&v308->hSection + v291);
                      if ( (*((_BYTE *)v18 + 1869) & 1) == 0 )
                      {
                        LODWORD(DriverAllocations) = ProcessSysMemAttributes(v176, v173, &v284[v171]);
                        v276 = (unsigned int)DriverAllocations;
                        if ( (int)DriverAllocations < 0 )
                          goto LABEL_447;
                        v176 = (void *)v291;
                      }
                      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
                      {
                        v177 = *(_QWORD *)(*((_QWORD *)v170 + 5) + 56LL);
                        *(_DWORD *)(v177 + 12) |= 0x200u;
                        v178 = *(_DWORD *)(v177 + 12);
                        *(_QWORD *)(v177 + 192) = v176;
                        v179 = &v284[v172];
                        *(_DWORD *)(v177 + 204) = v179->Alignment;
                        *(_DWORD *)(v177 + 12) = v178 ^ ((unsigned __int16)v178 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v179->Flags.0 << 9)) & 0x800;
                      }
                    }
                  }
                  v188 = HostProcess;
                  v291 = HostProcess;
                  v189 = (struct COREDEVICEACCESS *)&v278[HostProcess];
                  v301 = v189;
                  if ( (*((_DWORD *)v189 + 8) & 1) != 0 )
                  {
                    v313 = 0LL;
                    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                      (DXGALLOCATIONREFERENCE *)&v322,
                      (struct _EX_RUNDOWN_REF *)v170);
                    DXGALLOCATIONREFERENCE::MoveAssign(&v313, &v322);
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v322);
                    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 4344LL),
                                 *((_DWORD *)v289 + 126),
                                 *((_DWORD *)v18 + 110),
                                 0,
                                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                                 1u,
                                 (const struct DXGALLOCATIONREFERENCE *)&v313,
                                 0LL,
                                 0LL);
                    DriverAllocations = Resident;
                    v276 = Resident;
                    if ( Resident < 0 )
                    {
                      WdLogSingleEntry1(2LL, Resident);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
                        DriverAllocations,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v313);
                      break;
                    }
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v313);
                    v188 = v291;
                    v189 = v301;
                  }
                  *(_QWORD *)(*((_QWORD *)v170 + 6) + 16LL) = *((_QWORD *)v170 + 6);
                  v194 = *((_QWORD *)v170 + 6);
                  v195 = (char *)v296 + 72 * v188;
                  *((_DWORD *)v170 + 30) = *((_DWORD *)v195 + 8);
                  *(_QWORD *)(v194 + 112) = *((unsigned int *)v195 + 8);
                  *(_OWORD *)(v194 + 64) = *(_OWORD *)(v195 + 40);
                  *(_OWORD *)(v194 + 80) = *(_OWORD *)(v195 + 56);
                  *(_OWORD *)(v194 + 96) = *(_OWORD *)(v195 + 72);
                  v196 = *((unsigned int *)v189 + 6);
                  if ( !v271 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                  {
                    v197 = *((unsigned int *)v189 + 6);
                    v288 = (PVOID)(8 * v188);
                    v200 = v196;
                    v198 = *(void **)((char *)v282 + (_QWORD)v288);
                    v199 = (char *)*((_QWORD *)v189 + 2);
                  }
                  else
                  {
                    v197 = (unsigned int)v196;
                    v288 = (PVOID)(8 * v188);
                    v198 = v281[v188];
                    v199 = (char *)*((_QWORD *)v189 + 2);
                    if ( (unsigned __int64)&v199[v197] > MmUserProbeAddress || &v199[v197] <= v199 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    v200 = v197;
                  }
                  memmove(v199, v198, v200);
                  if ( v298 )
                  {
                    if ( !v271 || (v201 = v281, (*(_DWORD *)&a2->Flags & 0x10000) != 0) )
                      v201 = v282;
                    memmove((void *)*(v298 - 2), *(const void **)((char *)v201 + (_QWORD)v288), v197);
                    v298 = (unsigned __int64 *)*v298;
                    v315 = v298;
                  }
                  v156 = v296;
                  v171 = HostProcess + 1;
                  v170 = (struct _DXGSHAREDALLOCOBJECT *)*((_QWORD *)v170 + 8);
                  v302 = v170;
                }
                operator delete[](v314);
                if ( (int)DriverAllocations < 0 )
                  goto LABEL_447;
                v146 = v295;
                goto LABEL_371;
              }
              do
              {
                *(&a2->pAllocationInfo->hAllocation + 24 * (unsigned int)v118) = *(_DWORD *)(v119 + 16);
                v118 = (unsigned int)(v118 + 1);
                v119 = *(_QWORD *)(v119 + 64);
              }
              while ( (unsigned int)v118 < a2->NumAllocations );
              v279 = v118;
              j = (const struct DXGALLOCATION *)v119;
            }
            v121 = v273;
            goto LABEL_250;
          }
          v100 |= 0x800004u;
        }
        v99->Flags.Value = v100;
        goto LABEL_202;
      }
    }
    else
    {
      if ( !v50 )
        goto LABEL_189;
      v95 = *((_QWORD *)v50 + 7);
      if ( !v95 || (*(_BYTE *)(v95 + 12) & 0x60) != 0x60 )
        goto LABEL_189;
    }
    *((_DWORD *)v50 + 1) |= 8u;
    goto LABEL_189;
  }
LABEL_448:
  if ( v325 )
  {
    v325 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v324);
  }
  if ( v328 == 1 )
  {
    v328 = 0;
    ExReleasePushLockSharedEx(v327, 0LL);
LABEL_454:
    KeLeaveCriticalRegion();
    goto LABEL_455;
  }
  if ( v328 == 2 )
  {
    v328 = 0;
    v223 = v327;
    *(_QWORD *)(v327 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v223, 0LL);
    goto LABEL_454;
  }
LABEL_455:
  if ( (int)DriverAllocations < 0 )
  {
    if ( v62 )
    {
      v233 = 0;
      if ( a2->NumAllocations )
      {
        do
        {
          v234 = *((_QWORD *)v62 + 6);
          if ( *(_QWORD *)(v234 + 8) && !v272 )
          {
            if ( (v235 = *(_DWORD *)(v234 + 4), (v235 & 1) != 0) && !*((_DWORD *)v18 + 108) || (v235 & 2) != 0 )
            {
              if ( (v235 & 0x10) != 0 )
              {
                WdLogSingleEntry1(1LL, 6330LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"!pAllocation->m_pAllocation->m_Invalidated",
                  6330LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v234 = *((_QWORD *)v62 + 6);
              }
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 648LL) + 8LL)
                                                     + 200LL))(
                *(_QWORD *)(*((_QWORD *)v18 + 2) + 656LL),
                *(_QWORD *)(v234 + 8));
              *(_DWORD *)(*((_QWORD *)v62 + 6) + 4LL) |= 0x10u;
            }
          }
          ++v233;
          v62 = (struct DXGALLOCATION *)*((_QWORD *)v62 + 8);
        }
        while ( v233 < a2->NumAllocations );
        LODWORD(DriverAllocations) = v276;
        v50 = v293;
      }
      v62 = v273;
    }
    if ( v274[0] )
    {
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v310, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v307, v310);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v310);
      DXGDEVICE::RemoveResourceFromDeviceList(v18, v50);
      DXGDEVICE::DestroyResource(v18, v50, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
    }
    else if ( v62 )
    {
      if ( v280 )
        DXGDEVICE::RemoveAllocationsWithoutDestroy(v18, v50, v62, a2->NumAllocations);
      if ( !v50 || *((_QWORD *)v50 + 7) )
      {
        v236 = v62;
        do
        {
          v237 = v236;
          v238 = (_QWORD *)((char *)v236 + 64);
          v236 = (struct DXGALLOCATION *)*((_QWORD *)v236 + 8);
          *((_QWORD *)v237 + 7) = 0LL;
          *v238 = 0LL;
          if ( v50 )
          {
            v239 = *((_QWORD *)v50 + 7);
            if ( v239 )
            {
              if ( *(_QWORD *)(*((_QWORD *)v237 + 6) + 48LL) )
              {
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v239 + 32));
                --*(_DWORD *)(*((_QWORD *)v50 + 7) + 132LL);
                v240 = *((_QWORD *)v237 + 6) + 48LL;
                v241 = *(_QWORD *)v240;
                v242 = *(_QWORD **)(*((_QWORD *)v237 + 6) + 56LL);
                if ( *(_QWORD *)(*(_QWORD *)v240 + 8LL) != v240 || *v242 != v240 )
                  __fastfail(3u);
                *v242 = v241;
                *(_QWORD *)(v241 + 8) = v242;
                *(_QWORD *)(*((_QWORD *)v237 + 6) + 48LL) = 0LL;
                v243 = *((_QWORD *)v50 + 7) + 32LL;
                *(_QWORD *)(v243 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v243, 0LL);
                KeLeaveCriticalRegion();
              }
            }
          }
          DXGDEVICE::DestroyAllocations(v18, 0LL, 0, v237, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        }
        while ( v236 );
        v62 = v273;
      }
      if ( v50 )
      {
        v244 = *((_QWORD *)v50 + 7);
        if ( v244 )
        {
          v245 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v244 + 32));
          v246 = *((_DWORD *)v50 + 1);
          if ( (v246 & 0x10) == 0 )
          {
            *((_DWORD *)v50 + 1) = v246 | 0x10;
            v245 = 1;
          }
          v247 = *((_QWORD *)v50 + 7) + 32LL;
          *(_QWORD *)(v247 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v247, 0LL);
          KeLeaveCriticalRegion();
          if ( v245 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList(v18, v50);
            v248 = v289;
            DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v333, v289);
            DXGPROCESS::GetResourceUnsafe((__int64)v248, (DXGRESOURCEREFERENCE *)&v321, *((_DWORD *)v50 + 4));
            if ( v321 )
            {
              v249 = *(_DWORD *)(v321 + 16);
              v250 = (v249 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v250 < *((_DWORD *)v248 + 74) )
              {
                v251 = *((_QWORD *)v248 + 35);
                v252 = *(_DWORD *)(v251 + 16 * v250 + 8);
                if ( ((v249 >> 25) & 0x60) == (*(_BYTE *)(v251 + 16 * v250 + 8) & 0x60)
                  && (v252 & 0x2000) == 0
                  && (v252 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v251 + 16LL * ((v249 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
              DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v310, 0LL);
              DXGRESOURCEREFERENCE::MoveAssign(&v307, v310);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v310);
            }
            else
            {
              v245 = 0;
            }
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v321);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v333);
            if ( v245 )
              DXGDEVICE::DestroyResource(v18, v50, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations(v18, v50, 0, v62, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        }
      }
    }
  }
  else if ( v274[0] )
  {
    v224 = (struct _D3DKMT_CREATEALLOCATION *)*((_QWORD *)v18 + 5);
    v312 = v224;
    p_pStandardAllocation = (union _D3DKMT_CREATEALLOCATION::$B6A7B73B65E251118539A3C0BADB02B0 *)&v224[3].pStandardAllocation;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(&v224[3].pStandardAllocation, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v228 = (int)v224[3].Flags;
        if ( v228 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v226, (const EVENT_DESCRIPTOR *)"g", v227, v228);
      }
      ExAcquirePushLockExclusiveEx(&v224[3].pStandardAllocation, 0LL);
    }
    *(_QWORD *)&v224[3].PrivateDriverDataSize = KeGetCurrentThread();
    v229 = *((_DWORD *)v50 + 4);
    v230 = (v229 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v230 < v224[4].hGlobalShare )
    {
      hPrivateRuntimeResourceHandle = v224[3].hPrivateRuntimeResourceHandle;
      if ( ((v229 >> 25) & 0x60) == (hPrivateRuntimeResourceHandle[4 * v230 + 2] & 0x60)
        && (hPrivateRuntimeResourceHandle[4 * v230 + 2] & 0x1F) != 0 )
      {
        v232 = 2LL * ((v229 >> 6) & 0xFFFFFF);
        if ( (hPrivateRuntimeResourceHandle[4 * ((v229 >> 6) & 0xFFFFFF) + 2] & 0x2000) == 0 )
        {
          WdLogSingleEntry1(1LL, 217LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            217LL,
            0LL,
            0LL,
            0LL,
            0LL);
          hPrivateRuntimeResourceHandle = v312[3].hPrivateRuntimeResourceHandle;
        }
        hPrivateRuntimeResourceHandle[2 * v232 + 2] &= ~0x2000u;
      }
    }
    p_pStandardAllocation[1].pStandardAllocation = 0LL;
    ExReleasePushLockExclusiveEx(p_pStandardAllocation, 0LL);
    KeLeaveCriticalRegion();
  }
  v253 = v282;
  if ( a2->NumAllocations )
  {
    do
      operator delete[](v253[v20++]);
    while ( v20 < a2->NumAllocations );
  }
  operator delete[](v290);
  if ( a2->NumAllocations > 5 )
  {
    operator delete[](v278);
    operator delete[](v284);
    operator delete[](v304);
    operator delete[](v253);
    operator delete[](v281);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v326);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v324);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v307);
  v254 = ListEntry;
  if ( ListEntry )
  {
    v255 = v330 + 1536;
    ++*(_DWORD *)(v330 + 1564);
    if ( ExQueryDepthSList((PSLIST_HEADER)v255) < *(_WORD *)(v255 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v255, v254);
    }
    else
    {
      ++*(_DWORD *)(v255 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v255 + 56))(v254);
    }
  }
  return (unsigned int)DriverAllocations;
}
