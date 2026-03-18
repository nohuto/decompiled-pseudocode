/*
 * XREFs of ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70
 * Callers:
 *     ?VidMmWorkerThreadProc@@YAXPEAX@Z @ 0x1C00B8930 (-VidMmWorkerThreadProc@@YAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C000211C (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C001CDF8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C001CE1C (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0iq_EtwWriteTransfer @ 0x1C002F01C (McTemplateK0iq_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C002F09C (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0ppx_EtwWriteTransfer @ 0x1C002F124 (McTemplateK0ppx_EtwWriteTransfer.c)
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x1C002F1B0 (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     McTemplateK0qqtqttp_EtwWriteTransfer @ 0x1C002F248 (McTemplateK0qqtqttp_EtwWriteTransfer.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0085AA0 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C009D21C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C009DD54 (-TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ.c)
 *     ?CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ @ 0x1C009EA90 (-CleanupMarkedForEvictionAllocationsWorker@VIDMM_GLOBAL@@QEAAEXZ.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009EB00 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C009F000 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C009F7DC (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C009F89C (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C009F9F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C009FBA4 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A2358 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A26D8 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A3248 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C00A3B50 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00A7100 (-ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00A8498 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00AABA4 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00AB56C (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetDefragSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@GI@Z @ 0x1C00D7484 (-GetDefragSegment@VIDMM_GLOBAL@@QEAAPEAVVIDMM_SEGMENT@@GI@Z.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C00DD7F8 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00DDD18 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?DefragmentSegment@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00DDEDC (-DefragmentSegment@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?EndOperation@VIDMM_WORKER_THREAD@@AEAAX_N0@Z @ 0x1C00DE5F8 (-EndOperation@VIDMM_WORKER_THREAD@@AEAAX_N0@Z.c)
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00DED6C (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00E1718 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00E1824 (-RewindPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00E59A4 (-LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00E5DEC (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00E6150 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00EA340 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00ED5DC (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C00EDDA8 (-AssignBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z.c)
 *     ?SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00EE654 (-SendBudgetChangeNotifications@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00EE730 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::Run(VIDMM_WORKER_THREAD *this)
{
  VIDMM_WORKER_THREAD *v1; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct VIDMM_DEVICE *v3; // r15
  struct _KEVENT *v4; // rcx
  char *v5; // rsi
  char v6; // r12
  char v7; // r13
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _BOOL8 v12; // rbx
  union _LARGE_INTEGER *v13; // rbx
  NTSTATUS v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r14
  _QWORD **v23; // rbx
  _QWORD **v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // r14
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  VIDMM_PAGING_QUEUE *v30; // r8
  VIDMM_PAGING_QUEUE **v31; // r9
  char *v32; // r12
  VIDMM_WORKER_THREAD *v33; // r13
  VIDMM_PAGING_QUEUE *v34; // rsi
  __int64 v35; // rbx
  __int64 v36; // r15
  __int64 v37; // rcx
  __int64 v38; // r8
  VIDMM_WORKER_THREAD *v39; // r13
  char *v40; // r12
  __int64 v41; // rax
  VIDMM_WORKER_THREAD *v42; // r13
  char *v43; // r12
  __int64 v44; // rsi
  int v45; // ebx
  char v46; // dl
  VIDMM_PAGING_QUEUE *v47; // r8
  char v48; // cl
  VIDMM_PAGING_QUEUE **v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rcx
  char *v52; // r13
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  char v56; // r12
  char *v57; // rbx
  char v58; // bl
  _DWORD *v59; // r12
  __int64 v60; // rdx
  int v61; // eax
  bool v62; // zf
  __int64 v63; // rbx
  VIDMM_PROCESS_BUDGET_STATE **v64; // rbx
  unsigned int v65; // r12d
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // r11d
  VIDMM_PROCESS_BUDGET_STATE *v69; // r8
  __int64 *v70; // r9
  VIDMM_PROCESS_BUDGET_STATE *v71; // rax
  unsigned __int64 v72; // r10
  __int64 v73; // rdx
  VIDMM_PROCESS_BUDGET_STATE *v74; // r12
  unsigned int v75; // ebx
  VIDMM_PROCESS_BUDGET_STATE *v76; // rcx
  __int64 v77; // r11
  __int64 v78; // r8
  __int64 v79; // r13
  _BYTE *v80; // r9
  struct _RTL_BALANCED_NODE *v81; // rax
  _QWORD *i; // rdx
  __int64 v83; // r11
  _QWORD **v84; // rcx
  _QWORD *v85; // rax
  int v86; // ebx
  char v87; // al
  __int64 v88; // rbx
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  VIDMM_PAGING_QUEUE **v92; // rcx
  __int64 v93; // rax
  VIDMM_PAGING_QUEUE *v94; // rcx
  VIDMM_PAGING_QUEUE **v95; // rax
  struct _KEVENT *v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rbx
  LARGE_INTEGER v99; // r14
  unsigned __int64 v100; // r15
  __int64 v101; // rsi
  unsigned __int64 v102; // r12
  unsigned __int64 v103; // r13
  unsigned __int64 v104; // rax
  int v105; // ecx
  __int64 v106; // r8
  LARGE_INTEGER v107; // rax
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rdx
  unsigned __int64 v115; // rax
  unsigned __int64 v116; // rcx
  int v117; // eax
  int v118; // eax
  int v119; // eax
  VIDMM_GLOBAL *v120; // rsi
  char v121; // r15
  unsigned int v122; // r14d
  __int64 v123; // rdx
  struct _RTL_BALANCED_NODE *v124; // rax
  _QWORD *k; // r8
  __int64 v126; // r9
  unsigned __int64 v127; // rcx
  unsigned __int64 v128; // rax
  char v129; // al
  _QWORD **v130; // rcx
  _QWORD *v131; // rax
  __int64 v132; // r9
  unsigned __int64 v133; // rcx
  unsigned __int64 v134; // r8
  unsigned __int64 v135; // r8
  char v136; // al
  _QWORD *m; // rcx
  __int64 v138; // rdx
  struct _RTL_BALANCED_NODE *v139; // rax
  _QWORD *n; // r8
  __int64 v141; // r9
  unsigned __int64 v142; // rcx
  unsigned __int64 v143; // rax
  char v144; // al
  _QWORD **v145; // rcx
  _QWORD *v146; // rax
  _QWORD *ii; // rcx
  char v148; // r13
  VIDMM_GLOBAL *v149; // rsi
  __int64 v150; // rbx
  __int64 v151; // rcx
  __int64 v152; // r8
  VIDMM_GLOBAL *v153; // rbx
  __int64 v154; // rsi
  char v155; // bl
  VIDMM_GLOBAL *v156; // rbx
  VIDMM_GLOBAL **v157; // r14
  __int64 v158; // rcx
  __int64 v159; // r8
  char *v160; // rcx
  VIDMM_GLOBAL *v161; // rsi
  VIDMM_GLOBAL *v162; // rbx
  __int64 v163; // r14
  __int64 v164; // rcx
  VIDMM_GLOBAL *v165; // r8
  VIDMM_GLOBAL *v166; // rcx
  struct VIDMM_ALLOC *NextPendingTermination; // rax
  unsigned int v168; // r15d
  VIDMM_GLOBAL *v169; // rbx
  int v170; // eax
  VIDMM_GLOBAL *v171; // rsi
  unsigned int v172; // ebx
  VIDMM_SEGMENT *v173; // rcx
  __int64 v174; // r9
  unsigned __int64 v175; // rcx
  unsigned __int64 v176; // r8
  unsigned __int64 v177; // r8
  char v178; // al
  unsigned int v179; // r8d
  __int64 v180; // rcx
  __int64 v181; // rdx
  _QWORD *j; // rcx
  VIDMM_GLOBAL *v183; // rcx
  __int64 v184; // rsi
  int v185; // ebx
  unsigned __int8 v186; // r11
  VIDMM_GLOBAL *v187; // rcx
  __int64 v188; // r15
  __int64 v189; // r15
  __int64 v190; // rbx
  __int64 v191; // rbx
  __int64 v192; // rax
  __int64 v193; // rsi
  int v194; // ebx
  char v195; // dl
  VIDMM_PAGING_QUEUE *v196; // r8
  char v197; // cl
  VIDMM_PAGING_QUEUE **v198; // rax
  unsigned __int64 v199; // rax
  __int64 v200; // r10
  VIDMM_GLOBAL *v201; // r12
  __int64 v202; // r8
  VIDMM_GLOBAL **v203; // rax
  struct _VIDMM_GLOBAL_ALLOC *v204; // r13
  VIDMM_GLOBAL *v205; // r15
  VIDMM_GLOBAL **v206; // rcx
  __int64 v207; // rax
  __int64 v208; // rcx
  __int64 v209; // rcx
  VIDMM_GLOBAL **v210; // rcx
  char v211; // r14
  int v212; // r9d
  char v213; // bl
  int v214; // r9d
  VIDMM_PAGING_QUEUE **v215; // r10
  VIDMM_PAGING_QUEUE **v216; // r10
  int v217; // r9d
  int v218; // r9d
  struct _KEVENT *v219; // rcx
  int v220; // r8d
  __int64 v221; // r13
  int v222; // r8d
  __int64 v223; // rdx
  int v224; // r8d
  __int64 v225; // rax
  __int64 v226; // rdx
  unsigned int v227; // eax
  VIDMM_PAGING_QUEUE **v228; // r10
  VIDMM_PAGING_QUEUE **v229; // r10
  struct _KEVENT *v230; // rcx
  __int64 v231; // rbx
  DXGPUSHLOCK *v232; // r14
  _QWORD **v233; // rbx
  _QWORD **v234; // rsi
  _QWORD *v235; // rax
  _QWORD **v236; // rsi
  _QWORD *v237; // rbx
  VIDMM_GLOBAL **v238; // rcx
  _QWORD *v239; // rax
  __int64 v240; // rax
  __int64 v241; // rax
  __int64 v242; // rax
  __int64 v243; // rax
  VIDMM_PAGING_QUEUE **v244; // rax
  VIDMM_PAGING_QUEUE **v245; // rax
  __int64 v246; // rcx
  _QWORD *v247; // rax
  __int64 v248; // rcx
  __int64 v249; // rcx
  __int64 v250; // rax
  __int64 v251; // rax
  __int64 v252; // rcx
  VIDMM_COMMIT_TELEMETRY *v253; // rcx
  _QWORD *v254; // rax
  char *v255; // rbx
  VIDMM_COMMIT_TELEMETRY *v256; // rcx
  int v257; // r12d
  int v258; // eax
  struct VIDMM_SEGMENT *DefragSegment; // rax
  struct VIDMM_SEGMENT *v260; // rbx
  _QWORD *v261; // rbx
  char IsProcessCommitRelinquished; // al
  const CHAR *v263; // r8
  struct VIDMM_DEVICE *v264; // rax
  struct VIDMM_DEVICE *v265; // rbx
  __int64 v266; // rdx
  __int64 v267; // rcx
  unsigned int v268; // r14d
  __int64 v269; // rcx
  __int64 v270; // r8
  __int64 v271; // rsi
  unsigned int jj; // r14d
  __int64 v273; // rsi
  __int64 v274; // rax
  __int64 v275; // rcx
  __int64 v276; // r13
  int v277; // eax
  unsigned __int8 v278; // [rsp+50h] [rbp-B0h]
  char v279; // [rsp+51h] [rbp-AFh]
  char v280; // [rsp+52h] [rbp-AEh]
  char v281; // [rsp+53h] [rbp-ADh]
  char v282; // [rsp+54h] [rbp-ACh]
  bool v283; // [rsp+55h] [rbp-ABh] BYREF
  int v284; // [rsp+58h] [rbp-A8h]
  int v285; // [rsp+5Ch] [rbp-A4h]
  bool v286; // [rsp+60h] [rbp-A0h] BYREF
  int v287; // [rsp+64h] [rbp-9Ch]
  VIDMM_PROCESS_BUDGET_STATE *v288; // [rsp+68h] [rbp-98h]
  bool v289[8]; // [rsp+70h] [rbp-90h] BYREF
  struct VIDMM_ALLOC *v290; // [rsp+78h] [rbp-88h] BYREF
  int v291; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v292; // [rsp+84h] [rbp-7Ch]
  char *v293; // [rsp+88h] [rbp-78h]
  _DWORD ThreadInformation[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v295; // [rsp+98h] [rbp-68h]
  __int64 v296; // [rsp+A0h] [rbp-60h]
  char v297[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v298; // [rsp+B0h] [rbp-50h]
  int v299; // [rsp+B8h] [rbp-48h]
  union _LARGE_INTEGER v300; // [rsp+C0h] [rbp-40h] BYREF
  struct VIDMM_DEVICE *v301; // [rsp+C8h] [rbp-38h]
  int v302; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v303; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v304; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v305; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v306; // [rsp+F0h] [rbp-10h]
  struct VIDMM_ALLOC *v307; // [rsp+F8h] [rbp-8h] BYREF
  PVOID Object; // [rsp+100h] [rbp+0h] BYREF
  __int64 v309; // [rsp+108h] [rbp+8h]
  void *v310; // [rsp+118h] [rbp+18h]
  int v311; // [rsp+120h] [rbp+20h]
  void *v312; // [rsp+130h] [rbp+30h]
  int v313; // [rsp+138h] [rbp+38h]
  char v314[8]; // [rsp+140h] [rbp+40h] BYREF
  DXGPUSHLOCK *v315; // [rsp+148h] [rbp+48h]
  int v316; // [rsp+150h] [rbp+50h]
  void *v317; // [rsp+160h] [rbp+60h]
  int v318; // [rsp+168h] [rbp+68h]
  int v319; // [rsp+170h] [rbp+70h] BYREF
  __int64 v320; // [rsp+174h] [rbp+74h]
  int v321; // [rsp+17Ch] [rbp+7Ch]
  struct VIDMM_ALLOC *v322; // [rsp+180h] [rbp+80h]
  __int64 v323; // [rsp+188h] [rbp+88h]
  __int128 v324; // [rsp+190h] [rbp+90h]
  __int128 v325; // [rsp+1A0h] [rbp+A0h]
  __int128 v326; // [rsp+1B0h] [rbp+B0h]
  int v327; // [rsp+1D0h] [rbp+D0h]
  int v328; // [rsp+1E8h] [rbp+E8h]
  bool v330; // [rsp+248h] [rbp+148h]
  bool v331; // [rsp+250h] [rbp+150h] BYREF
  char v332; // [rsp+258h] [rbp+158h]

  v1 = this;
  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)v1 + 1) = CurrentThread;
  KeSetActualBasePriorityThread(CurrentThread, 15LL);
  ThreadInformation[0] = 1;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination|0x20, ThreadInformation, 4u);
  v3 = 0LL;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)v1 + 22) + 24LL), Executive, 0, 0, 0LL);
  v4 = (struct _KEVENT *)(*((_QWORD *)v1 + 22) + 48LL);
  *((_DWORD *)v1 + 6) = 1;
  KeSetEvent(v4, 0, 0);
  v5 = (char *)v1 + 56;
  v6 = 0;
  v309 = *((_QWORD *)v1 + 22);
  v7 = 0;
  v330 = 0;
  v332 = 0;
  v8 = 0;
  v286 = 0;
  Object = (PVOID)(v309 + 24);
  *((_QWORD *)v1 + 24) = 0x8000000000000000uLL;
  v283 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v1 + 56, 0LL);
  *((_QWORD *)v1 + 8) = KeGetCurrentThread();
  while ( 2 )
  {
    while ( 2 )
    {
      *((_QWORD *)v1 + 2) = 0LL;
      if ( v6 || (v12 = v283) || v8 )
      {
        *((_QWORD *)v1 + 24) = 0LL;
        v300.QuadPart = 0LL;
LABEL_8:
        v13 = &v300;
        goto LABEL_9;
      }
      v300 = *(union _LARGE_INTEGER *)((char *)v1 + 192);
      if ( v300.QuadPart != 0x8000000000000000uLL )
        goto LABEL_8;
      if ( g_IsInternalReleaseOrDbg )
      {
        v239 = (_QWORD *)WdLogNewEntry5_WdTrace(0x8000000000000000uLL, v9, v10, v11);
        v239[3] = 0LL;
        v239[5] = 0LL;
        v239[4] = v12;
      }
      v13 = 0LL;
LABEL_9:
      *((_QWORD *)v5 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
      ++*((_QWORD *)v1 + 32);
      v14 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, v13, 0LL);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v5, 0LL);
      *((_QWORD *)v5 + 1) = KeGetCurrentThread();
      v15 = *(_QWORD *)v1;
      v16 = MEMORY[0xFFFFF78000000320];
      *(_QWORD *)(v15 + 4632) = v16 * KeQueryTimeIncrement();
      v19 = *(_QWORD *)v1;
      v20 = *(_QWORD *)(*(_QWORD *)v1 + 4632LL);
      if ( v20 - *(_QWORD *)(*(_QWORD *)v1 + 7176LL) > qword_1C006E410 )
      {
        *(_QWORD *)(v19 + 7160) = 0LL;
        *(_DWORD *)(v19 + 7168) = 0;
        *(_QWORD *)(v19 + 7176) = v20;
      }
      v283 = 0;
      v280 = 0;
      *((_BYTE *)v1 + 184) = 0;
      v284 = 0;
      v279 = 0;
      if ( v14 )
      {
        if ( v14 == 258 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            v241 = WdLogNewEntry5_WdTrace(v19, v20, v17, v18);
            v19 = *((_QWORD *)v1 + 24);
            *(_QWORD *)(v241 + 24) = v19;
          }
          goto LABEL_17;
        }
      }
      else
      {
        v19 = *((unsigned int *)v1 + 7);
        if ( (_DWORD)v19 != *((_DWORD *)v1 + 6) )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            v240 = WdLogNewEntry5_WdTrace(v19, v20, v17, v18);
            *(_QWORD *)(v240 + 24) = *((int *)v1 + 6);
            *(_QWORD *)(v240 + 32) = *((int *)v1 + 7);
            v19 = *((unsigned int *)v1 + 7);
          }
          v20 = 1LL;
          *((_DWORD *)v1 + 50) = 1;
          if ( (unsigned int)(v19 - 2) <= 3 )
          {
            KeWaitForSingleObject((PVOID)(*(_QWORD *)v1 + 41152LL), Executive, 0, 0, 0LL);
            v231 = *(_QWORD *)v1;
            v232 = (DXGPUSHLOCK *)(*(_QWORD *)v1 + 40056LL);
            DXGPUSHLOCK::AcquireExclusive(v232);
            v233 = (_QWORD **)(v231 + 40040);
            while ( 1 )
            {
              v234 = (_QWORD **)*v233;
              if ( (_QWORD **)(*v233)[1] != v233 )
                goto LABEL_20;
              v235 = *v234;
              if ( (_QWORD **)(*v234)[1] != v234 )
                goto LABEL_20;
              *v233 = v235;
              v235[1] = v233;
              if ( v234 == v233 )
                break;
              (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD *))(*v234[2] + 24LL))(
                v234[2],
                0LL,
                v234[3],
                v234[4]);
              operator delete(v234);
            }
            *((_QWORD *)v232 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v232, 0LL);
            KeLeaveCriticalRegion();
          }
          else if ( (_DWORD)v19 == 1 )
          {
            v219 = (struct _KEVENT *)*((_QWORD *)v1 + 22);
            *((_DWORD *)v1 + 6) = 1;
            KeSetEvent(v219 + 2, 0, 0);
          }
          goto LABEL_16;
        }
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        v242 = WdLogNewEntry5_WdTrace(v19, v20, v17, v18);
        v19 = *((int *)v1 + 6);
        *(_QWORD *)(v242 + 24) = v19;
      }
      *((_DWORD *)v1 + 50) = 0;
LABEL_16:
      v6 = 1;
      v330 = 1;
LABEL_17:
      if ( *((_QWORD *)v1 + 24) && (byte_1C006E942 & 0x40) != 0 )
        McTemplateK0iq_EtwWriteTransfer(v19, v20, v17);
      v21 = *(_QWORD *)v1;
      *((_QWORD *)v1 + 24) = 0x8000000000000000uLL;
      v22 = v21 + 40056;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v21 + 40056));
      v23 = (_QWORD **)(v21 + 40040);
      while ( 1 )
      {
        v24 = (_QWORD **)*v23;
        if ( (_QWORD **)(*v23)[1] != v23 )
          goto LABEL_20;
        v25 = *v24;
        if ( (_QWORD **)(*v24)[1] != v24 )
          goto LABEL_20;
        *v23 = v25;
        v25[1] = v23;
        if ( v24 == v23 )
          break;
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD *))(*v24[2] + 24LL))(v24[2], 0LL, v24[3], v24[4]);
        operator delete(v24);
      }
      *(_QWORD *)(v22 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v22, 0LL);
      KeLeaveCriticalRegion();
      if ( !v6 && !v7 && !v286 )
        goto LABEL_224;
      v27 = 0LL;
      v282 = 0;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v1 + 144, 0LL);
      v32 = (char *)v1 + 112;
      *((_QWORD *)v1 + 19) = KeGetCurrentThread();
      v33 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 14);
      if ( v33 == (VIDMM_WORKER_THREAD *)((char *)v1 + 112) )
        goto LABEL_25;
      v184 = *(_QWORD *)v1;
      v332 = 1;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v184 + 41104, 0LL);
      v185 = *(_DWORD *)(v184 + 41144);
      *(_QWORD *)(v184 + 41112) = 0LL;
      ExReleasePushLockExclusiveEx(v184 + 41104, 0LL);
      KeLeaveCriticalRegion();
      v186 = v332;
      LOBYTE(v28) = 0;
      v30 = v33;
      do
      {
        v34 = v30;
        if ( !v185
          || (v243 = *((_QWORD *)v30 + 4), !*(_BYTE *)(v243 + 24))
          || *(_DWORD *)(v243 + 48) != 203
          || (v29 = *(_QWORD *)(*(_QWORD *)(v243 + 64) + 96LL), (*(_DWORD *)v29 & 0x20000) == 0) )
        {
          LOBYTE(v28) = 1;
          v186 = 0;
        }
        v31 = *(VIDMM_PAGING_QUEUE ***)v30;
        if ( *(char **)v30 == v32 )
          break;
        if ( v31[1] != v30 )
          goto LABEL_20;
        v244 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v30 + 1);
        if ( *v244 != v30 )
          goto LABEL_20;
        *v244 = (VIDMM_PAGING_QUEUE *)v31;
        v31[1] = (VIDMM_PAGING_QUEUE *)v244;
        v245 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 15);
        if ( *v245 != (VIDMM_PAGING_QUEUE *)v32 )
          goto LABEL_20;
        *((_QWORD *)v30 + 1) = v245;
        *(_QWORD *)v30 = v32;
        *v245 = v30;
        *((_QWORD *)v1 + 15) = v30;
        if ( v31 != (VIDMM_PAGING_QUEUE **)v33 )
          v30 = (VIDMM_PAGING_QUEUE *)v31;
        v29 = 0LL;
        if ( v31 != (VIDMM_PAGING_QUEUE **)v33 )
          v29 = v186;
        v186 = v29;
      }
      while ( (_BYTE)v29 );
      if ( !(_BYTE)v28 )
      {
LABEL_25:
        v34 = 0LL;
      }
      else if ( v34 )
      {
        goto LABEL_50;
      }
      if ( ((*((_DWORD *)v1 + 7) - 1) & 0xFFFFFFFD) == 0 )
      {
        v35 = *(_QWORD *)v1;
        v299 = 0;
        v298 = v35 + 44480;
        if ( v35 != -44480 && *(struct _KTHREAD **)(v35 + 44488) == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 1425LL);
          DxgkLogInternalTriageEvent(v246, 262146LL);
        }
        v36 = v298;
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v36, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v214 = *(_DWORD *)(v36 + 24);
            if ( v214 != -1 && (byte_1C006E941 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventBlockThread, v38, v214);
          }
          ExAcquirePushLockSharedEx(v36, 0LL);
        }
        v299 = 1;
        if ( *(_QWORD *)(v35 + 44512) == v35 + 44512 )
        {
          if ( *(_QWORD *)(v35 + 44528) == v35 + 44528 )
          {
            if ( *(_QWORD *)(v35 + 44544) == v35 + 44544 )
            {
              if ( !*(_BYTE *)(*(_QWORD *)(v35 + 24) + 2742LL) && !*(_BYTE *)(*(_QWORD *)(v35 + 16) + 913LL)
                || *(_QWORD *)(v35 + 44560) == v35 + 44560 )
              {
                v282 = 0;
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v297);
                v3 = 0LL;
                goto LABEL_37;
              }
              v220 = 4;
            }
            else
            {
              v220 = 3;
            }
          }
          else
          {
            v220 = 2;
          }
        }
        else
        {
          v220 = 1;
        }
        v282 = 1;
        v221 = *(_QWORD *)(v35 + 16 * ((unsigned int)(v220 - 1) + 2782LL)) - 192LL;
        if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v35) )
        {
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v297);
          goto LABEL_386;
        }
        if ( v222 == 2 )
        {
          v247 = *(_QWORD **)(v221 + 248);
          if ( !v247 )
            goto LABEL_384;
          v248 = v247[29];
          if ( v248 <= *(_QWORD *)(*v247 + 4632LL) )
            goto LABEL_384;
          v221 = 0LL;
          v226 = *(_QWORD *)(v35 + 4632) - v248;
          v224 = 8;
        }
        else
        {
          if ( v222 != 3 )
            goto LABEL_384;
          v223 = *(_QWORD *)(v35 + 4632);
          v224 = 6;
          v225 = *(_QWORD *)(v221 + 224);
          if ( v223 < v225 )
          {
            v221 = 0LL;
            v226 = v223 - v225;
          }
          else
          {
            v226 = 0LL;
          }
        }
        VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v35, v226, v224);
        if ( v299 != 1 )
        {
          if ( v299 != 2 )
            goto LABEL_386;
          v249 = v298;
          v299 = 0;
          *(_QWORD *)(v298 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v249, 0LL);
          goto LABEL_385;
        }
LABEL_384:
        v299 = 0;
        ExReleasePushLockSharedEx(v298, 0LL);
LABEL_385:
        KeLeaveCriticalRegion();
LABEL_386:
        v3 = (struct VIDMM_DEVICE *)v221;
        if ( v221 && (*(_DWORD *)(v221 + 60) & 7) == 1 )
        {
LABEL_53:
          *((_QWORD *)v1 + 2) = v3;
          *((_QWORD *)v1 + 19) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v1 + 144, 0LL);
          KeLeaveCriticalRegion();
          v332 = v282;
          if ( v3 )
          {
            if ( (byte_1C006E942 & 0x40) != 0 )
              McTemplateK0ppp_EtwWriteTransfer(v26, &EventVidMmSelectOperation, v10, *((_QWORD *)v3 + 3), v34, v27);
            if ( v34 )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, v9, v10, v11) + 24) = v34;
              if ( *((_BYTE *)v27 + 24) && *((_DWORD *)v27 + 12) == 206 )
              {
                v190 = MEMORY[0xFFFFF78000000320];
                v27[18] = v190 * KeQueryTimeIncrement();
              }
            }
            else if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, v9, v10, v11) + 24) = v3;
            }
            memset((char *)v1 + 288, 0, 0x80uLL);
            *((_QWORD *)v1 + 33) = v3;
            *((_QWORD *)v1 + 34) = v34;
            *((_QWORD *)v1 + 35) = v27;
            *((LARGE_INTEGER *)v1 + 37) = KeQueryPerformanceCounter(0LL);
          }
          goto LABEL_63;
        }
LABEL_37:
        v39 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 12);
        v40 = (char *)v1 + 96;
        if ( v39 == (VIDMM_WORKER_THREAD *)((char *)v1 + 96) )
          goto LABEL_38;
        v193 = *(_QWORD *)v1;
        v332 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v193 + 41104, 0LL);
        v194 = *(_DWORD *)(v193 + 41144);
        *(_QWORD *)(v193 + 41112) = 0LL;
        ExReleasePushLockExclusiveEx(v193 + 41104, 0LL);
        KeLeaveCriticalRegion();
        v195 = 0;
        v196 = v39;
        while ( 1 )
        {
          v34 = v196;
          if ( v194
            && (v250 = *((_QWORD *)v196 + 4), *(_BYTE *)(v250 + 24))
            && *(_DWORD *)(v250 + 48) == 203
            && (**(_DWORD **)(*(_QWORD *)(v250 + 64) + 96LL) & 0x20000) != 0 )
          {
            v197 = v332;
          }
          else
          {
            v197 = 0;
            v195 = 1;
            v332 = 0;
          }
          v198 = *(VIDMM_PAGING_QUEUE ***)v196;
          if ( *(char **)v196 == v40 )
            break;
          if ( v198[1] != v196 )
            goto LABEL_20;
          v228 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v196 + 1);
          if ( *v228 != v196 )
            goto LABEL_20;
          *v228 = (VIDMM_PAGING_QUEUE *)v198;
          v198[1] = (VIDMM_PAGING_QUEUE *)v228;
          v229 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 13);
          if ( *v229 != (VIDMM_PAGING_QUEUE *)v40 )
            goto LABEL_20;
          *(_QWORD *)v196 = v40;
          *((_QWORD *)v196 + 1) = v229;
          *v229 = v196;
          *((_QWORD *)v1 + 13) = v196;
          if ( v198 != (VIDMM_PAGING_QUEUE **)v39 )
          {
            v196 = (VIDMM_PAGING_QUEUE *)v198;
            if ( v197 )
              continue;
          }
          break;
        }
        if ( !v195 )
        {
LABEL_38:
          v34 = 0LL;
        }
        else if ( v34 )
        {
          goto LABEL_50;
        }
        if ( *((_BYTE *)v1 + 240) )
        {
          v41 = *(_QWORD *)v1;
          *((_BYTE *)v1 + 240) = 0;
          *((_QWORD *)v1 + 31) = *(_QWORD *)(v41 + 4632);
        }
        if ( v3 && *(_QWORD *)(*(_QWORD *)v1 + 4632LL) - *((_QWORD *)v1 + 31) >= qword_1C006E4D0 )
          goto LABEL_390;
        v42 = (VIDMM_WORKER_THREAD *)*((_QWORD *)v1 + 10);
        v43 = (char *)v1 + 80;
        if ( v42 == (VIDMM_WORKER_THREAD *)((char *)v1 + 80) )
          goto LABEL_43;
        v44 = *(_QWORD *)v1;
        v332 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v44 + 41104, 0LL);
        v45 = *(_DWORD *)(v44 + 41144);
        *(_QWORD *)(v44 + 41112) = 0LL;
        ExReleasePushLockExclusiveEx(v44 + 41104, 0LL);
        KeLeaveCriticalRegion();
        v46 = 0;
        v47 = v42;
        while ( 1 )
        {
          v34 = v47;
          if ( v45
            && (v251 = *((_QWORD *)v47 + 4), *(_BYTE *)(v251 + 24))
            && *(_DWORD *)(v251 + 48) == 203
            && (**(_DWORD **)(*(_QWORD *)(v251 + 64) + 96LL) & 0x20000) != 0 )
          {
            v48 = v332;
          }
          else
          {
            v48 = 0;
            v46 = 1;
            v332 = 0;
          }
          v49 = *(VIDMM_PAGING_QUEUE ***)v47;
          if ( *(char **)v47 == v43 )
            break;
          if ( v49[1] != v47 )
            goto LABEL_20;
          v215 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v47 + 1);
          if ( *v215 != v47 )
            goto LABEL_20;
          *v215 = (VIDMM_PAGING_QUEUE *)v49;
          v49[1] = (VIDMM_PAGING_QUEUE *)v215;
          v216 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v1 + 11);
          if ( *v216 != (VIDMM_PAGING_QUEUE *)v43 )
            goto LABEL_20;
          *(_QWORD *)v47 = v43;
          *((_QWORD *)v47 + 1) = v216;
          *v216 = v47;
          *((_QWORD *)v1 + 11) = v47;
          if ( v49 != (VIDMM_PAGING_QUEUE **)v42 )
          {
            v47 = (VIDMM_PAGING_QUEUE *)v49;
            if ( v48 )
              continue;
          }
          break;
        }
        if ( !v46 )
        {
LABEL_43:
          *((_BYTE *)v1 + 240) = 1;
          v34 = 0LL;
          goto LABEL_53;
        }
        if ( !v34 )
        {
LABEL_390:
          *((_BYTE *)v1 + 240) = 1;
          goto LABEL_53;
        }
LABEL_50:
        v27 = (__int64 *)*((_QWORD *)v34 + 4);
        v50 = (_QWORD *)((char *)v34 + 32);
        v3 = (struct VIDMM_DEVICE *)*((_QWORD *)v34 + 17);
        if ( (VIDMM_PAGING_QUEUE *)v27[1] != (VIDMM_PAGING_QUEUE *)((char *)v34 + 32)
          || (v51 = *v27, *(__int64 **)(*v27 + 8) != v27) )
        {
LABEL_20:
          __fastfail(3u);
        }
        *v50 = v51;
        *(_QWORD *)(v51 + 8) = v50;
        *v27 = 0LL;
        v27[1] = 0LL;
        goto LABEL_53;
      }
      v34 = (VIDMM_PAGING_QUEUE *)*((_QWORD *)v1 + 10);
      if ( v34 != (VIDMM_WORKER_THREAD *)((char *)v1 + 80) )
      {
        while ( *((_DWORD *)v34 + 29) != 3 )
        {
          v34 = *(VIDMM_PAGING_QUEUE **)v34;
          if ( v34 == (VIDMM_WORKER_THREAD *)((char *)v1 + 80) )
            goto LABEL_398;
        }
        goto LABEL_50;
      }
LABEL_398:
      v34 = 0LL;
      if ( !g_IsInternalReleaseOrDbg )
        goto LABEL_53;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v29, v28, v30, v31) + 24) = *((int *)v1 + 7);
      *((_QWORD *)v1 + 2) = 0LL;
      *((_QWORD *)v1 + 19) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v1 + 144, 0LL);
      KeLeaveCriticalRegion();
      v27 = 0LL;
      v332 = 0;
LABEL_63:
      v52 = (char *)v1 + 208;
      while ( 1 )
      {
LABEL_64:
        *((_QWORD *)v52 + 1) = 0LL;
        *((_QWORD *)v52 + 2) = 0LL;
        *(_QWORD *)v52 = 0LL;
        v52[24] = 0;
        ++*((_DWORD *)v1 + 88);
        v290 = 0LL;
        v331 = 0;
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
        v278 = 0;
        v287 = 2;
        if ( v3 )
        {
          v53 = *((_QWORD *)v3 + 2);
          v278 = 0;
          if ( v53 )
          {
            v11 = 0LL;
            if ( *(_DWORD *)(*(_QWORD *)v3 + 7016LL) )
            {
              while ( 1 )
              {
                v10 = *(_QWORD *)(v53 + 48) + 296LL * (unsigned int)v11;
                if ( *(_QWORD *)(v10 + 200) > *(_QWORD *)(v10 + 24) || *(_QWORD *)(v10 + 208) > *(_QWORD *)(v10 + 32) )
                  break;
                v11 = (unsigned int)(v11 + 1);
                if ( (unsigned int)v11 >= *(_DWORD *)(*(_QWORD *)v3 + 7016LL) )
                  goto LABEL_72;
              }
              v278 = 1;
            }
LABEL_72:
            v54 = *(_QWORD *)(*(_QWORD *)(v53 + 40) + 32LL);
            if ( (*(_DWORD *)(v54 + 424) & 4) != 0 )
              v287 = 0;
            else
              v287 = 2 - ((*(_DWORD *)(v54 + 432) & 1) != 0);
          }
          else
          {
            v287 = 2;
          }
        }
        v55 = 0LL;
        v56 = v287;
        v9 = 3 * (v278 + 2LL * v284);
        v26 = 12LL;
        if ( v287 != 2 )
          v55 = 12LL;
        v57 = (char *)&unk_1C0052360 + 48 * v284 + 24 * v278 + v55;
        v293 = v57;
        if ( !v34 )
          break;
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(12LL, v9, v10, v11);
        v58 = v57[8];
        if ( (byte_1C006E941 & 1) != 0 )
          McTemplateK0ppx_EtwWriteTransfer(v26, v9, v10, v34, v27, v27[5]);
        v59 = v27 + 6;
        v60 = *((int *)v27 + 12);
        if ( *((_BYTE *)v27 + 24) )
        {
          WdLogSingleEntry5(4LL, v60, v27, v27[8], v27[7], v27[4]);
          v61 = VIDMM_GLOBAL::ProcessDeferredCommand(
                  *(VIDMM_GLOBAL **)v1,
                  (unsigned __int64)(v27 + 6),
                  (__int64)&v331,
                  *((_BYTE *)v27 + 25),
                  (struct VIDMM_ALLOC **)v27[4],
                  *((struct _VIDSCH_SYNC_OBJECT **)v34 + 11),
                  v58,
                  &v290);
          v62 = *((_BYTE *)v27 + 24) == 0;
          v285 = v61;
          if ( v62 )
          {
            v63 = v27[9];
            if ( !v63 )
            {
              v63 = v27[8];
              if ( v63 )
                v63 = *(_QWORD *)(v63 + 8);
            }
          }
          else
          {
            v63 = v27[7];
          }
          v64 = *(VIDMM_PROCESS_BUDGET_STATE ***)(v63 + 16);
          v65 = 0;
          v281 = 0;
          if ( *((_DWORD *)*v64 + 1754) )
          {
            do
            {
              v288 = (VIDMM_PROCESS_BUDGET_STATE *)((char *)v64[6] + 296 * v65);
              if ( v64 != (VIDMM_PROCESS_BUDGET_STATE **)-360LL && v64[46] == KeGetCurrentThread() )
              {
                WdLogSingleEntry1(1LL, 1425LL);
                DxgkLogInternalTriageEvent(v252, 262146LL);
              }
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v64 + 45, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v218 = *((_DWORD *)v64 + 96);
                  if ( v218 != -1 && (byte_1C006E941 & 1) != 0 )
                    McTemplateK0q_EtwWriteTransfer(v66, (__int64)&EventBlockThread, v67, v218);
                }
                ExAcquirePushLockSharedEx(v64 + 45, 0LL);
              }
              v68 = 0;
              v69 = v288;
              v70 = (__int64 *)((char *)v288 + 184);
              v71 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)*v64 + 5028) + 1584LL * v65 + 496);
              v288 = v71;
              while ( 1 )
              {
                v72 = *(v70 - 6);
                if ( v68 == 1 )
                {
                  v199 = VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(v69);
                  v72 = v199 + v200;
                  v71 = v288;
                }
                v73 = *v70;
                v296 = *(unsigned int *)v71;
                v295 = v73;
                if ( v72 > v73 * (v296 + 100) / 0x64uLL || v72 < v295 * (100 - v296) / 0x64uLL )
                  break;
                ++v68;
                v71 = (VIDMM_PROCESS_BUDGET_STATE *)((char *)v288 + 24);
                ++v70;
                v288 = (VIDMM_PROCESS_BUDGET_STATE *)((char *)v288 + 24);
                if ( v68 >= 2 )
                  goto LABEL_94;
              }
              v281 = 1;
LABEL_94:
              v328 = 0;
              ExReleasePushLockSharedEx(v64 + 45, 0LL);
              KeLeaveCriticalRegion();
              ++v65;
              v288 = *v64;
            }
            while ( v65 < *((_DWORD *)v288 + 1754) );
            v1 = this;
            if ( v281 )
            {
              v310 = &VIDMM_PARTITION::_PartitionLock;
              ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
              v74 = v288;
              v75 = 0;
              v292 = *((_DWORD *)v288 + 1754);
              if ( v292 )
              {
                v76 = (VIDMM_PROCESS_BUDGET_STATE *)*((_QWORD *)v288 + 5028);
                v288 = v76;
                while ( 2 )
                {
                  v77 = v75;
                  v78 = 672LL;
                  v79 = 1584LL * v75;
                  v80 = (char *)v76 + v79 + 512;
                  do
                  {
                    if ( (*v80 & 1) != 0 )
                    {
                      v81 = VIDMM_PARTITION::_PartitionTree;
                      for ( i = 0LL; v81; v81 = v81->Children[0] )
                        i = v81->Children;
                      if ( i )
                      {
                        v83 = 336 * v77;
                        while ( !*(_BYTE *)(*(_QWORD *)(i[5]
                                                      + 376LL * *(unsigned int *)(*((_QWORD *)v74 + 3) + 240LL)
                                                      + 24)
                                          + v83
                                          + 128) )
                        {
                          v84 = (_QWORD **)i[1];
                          v85 = i;
                          if ( v84 )
                          {
                            i = (_QWORD *)i[1];
                            for ( j = *v84; j; j = (_QWORD *)*j )
                              i = j;
                          }
                          else
                          {
                            for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                                  i;
                                  i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                            {
                              if ( (_QWORD *)*i == v85 )
                                break;
                              v85 = i;
                            }
                          }
                          if ( !i )
                          {
                            v76 = v288;
                            v77 = v75;
                            goto LABEL_291;
                          }
                        }
LABEL_466:
                        v311 = 0;
                        ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                        _InterlockedIncrement64((volatile signed __int64 *)v74 + 5574);
                        v26 = *(_QWORD *)v74;
                        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v74 + 8LL) )
                          KeSetEvent(*(PRKEVENT *)(v26 + 176), 0, 0);
                        goto LABEL_118;
                      }
                    }
                    else if ( *((_BYTE *)v76 + v79 + v78) )
                    {
                      goto LABEL_466;
                    }
LABEL_291:
                    v80 += 24;
                    v78 += 336LL;
                  }
                  while ( v78 < 1344 );
                  if ( ++v75 < v292 )
                    continue;
                  break;
                }
              }
              v311 = 0;
              ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
            }
LABEL_118:
            v52 = (char *)this + 208;
          }
          v86 = v285;
          v59 = v27 + 6;
        }
        else
        {
          WdLogSingleEntry4(4LL, v60, v27, *((unsigned __int8 *)v27 + 25), v27[4]);
          v187 = *(VIDMM_GLOBAL **)v1;
          v331 = 0;
          v290 = 0LL;
          v86 = VIDMM_GLOBAL::ProcessSystemCommand(
                  v187,
                  (struct _VIDMM_SYSTEM_COMMAND *)(v27 + 6),
                  *((_BYTE *)v27 + 25),
                  (struct VIDMM_ALLOC *)v27[4],
                  *((struct _VIDSCH_SYNC_OBJECT **)v34 + 11));
          v285 = v86;
        }
        if ( (byte_1C006E941 & 1) != 0 )
          McTemplateK0ppxx_EtwWriteTransfer(v26, &EventPagingQueueComplete, v10, v34, v27, v27[5], 0LL);
        v87 = *((_BYTE *)v27 + 24);
        if ( v86 == -1071775232 )
        {
          v285 = 0;
        }
        else
        {
          if ( v87 && (!v331 || *((_BYTE *)v27 + 120)) && v27[9] )
          {
            v285 = 0;
LABEL_128:
            if ( *v59 == 206 )
            {
              v191 = MEMORY[0xFFFFF78000000320];
              v192 = v191 * KeQueryTimeIncrement();
              v27[19] = v192;
              if ( v192 - v27[17] > 1000000 )
              {
                VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v52, *(struct VIDMM_GLOBAL **)v1, v3, 0LL);
                VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(v253, (struct VIDMM_PAGING_QUEUE_PACKET *)v27);
                *((_QWORD *)v52 + 1) = 0LL;
                *((_QWORD *)v52 + 2) = 0LL;
                *(_QWORD *)v52 = 0LL;
                v52[24] = 0;
              }
            }
            goto LABEL_129;
          }
          if ( v86 < 0 )
            goto LABEL_140;
        }
        if ( v87 )
          goto LABEL_128;
LABEL_129:
        v88 = *((_QWORD *)v34 + 10);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v88 + 144, 0LL);
        *(_QWORD *)(v88 + 152) = KeGetCurrentThread();
        v92 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v34 + 3);
        if ( *v92 != (VIDMM_PAGING_QUEUE *)((char *)v34 + 16) )
          goto LABEL_20;
        *v27 = (__int64)v34 + 16;
        v27[1] = (__int64)v92;
        *v92 = (VIDMM_PAGING_QUEUE *)v27;
        *((_QWORD *)v34 + 3) = v27;
        if ( *((VIDMM_PAGING_QUEUE **)v34 + 4) == (VIDMM_PAGING_QUEUE *)((char *)v34 + 32) )
        {
          v93 = *((int *)v34 + 28);
          if ( (_DWORD)v93 )
          {
            if ( (_DWORD)v93 != 1 )
              WdLogSingleEntry5(0LL, 270LL, 58LL, v34, v93, 0LL);
            if ( g_IsInternalReleaseOrDbg )
            {
              v254 = (_QWORD *)WdLogNewEntry5_WdTrace(v92, v89, v90, v91);
              v254[3] = v34;
              v254[4] = *((int *)v34 + 28);
              v254[5] = 0LL;
            }
            v94 = *(VIDMM_PAGING_QUEUE **)v34;
            if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)v34 + 8LL) != v34 )
              goto LABEL_20;
            v95 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)v34 + 1);
            if ( *v95 != v34 )
              goto LABEL_20;
            *v95 = v94;
            *((_QWORD *)v94 + 1) = v95;
            v96 = (struct _KEVENT *)*((_QWORD *)v34 + 15);
            *(_QWORD *)v34 = 0LL;
            *((_QWORD *)v34 + 1) = 0LL;
            *((_DWORD *)v34 + 28) = 0;
            KeSetEvent(v96, 0, 0);
          }
        }
        --*(_DWORD *)(*((_QWORD *)v34 + 17) + 72LL);
        --*(_DWORD *)(*((_QWORD *)v34 + 10) + 168LL);
        v97 = *((_QWORD *)v34 + 10) + 144LL;
        *(_QWORD *)(v97 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v97, 0LL);
        KeLeaveCriticalRegion();
        if ( (*((_DWORD *)v3 + 15) & 7) == 1 )
        {
          v34 = 0LL;
          v279 = 0;
          v27 = 0LL;
        }
        else
        {
LABEL_140:
          v6 = v330;
          if ( v3 )
          {
            v57 = v293;
            v11 = (unsigned int)v285;
            v56 = v287;
LABEL_142:
            if ( (byte_1C006E942 & 0x40) != 0 )
              McTemplateK0qqtqttp_EtwWriteTransfer(
                v331,
                (unsigned __int8)v57[8],
                v278,
                v11,
                v284,
                v278,
                v56,
                v57[8],
                v331,
                (char)v290);
            v6 = v330;
          }
          v98 = v285;
          if ( v285 >= 0 )
            goto LABEL_146;
          if ( v279 )
            WdLogSingleEntry5(0LL, 270LL, 54LL, v3, v34, v27);
          WdLogSingleEntry4(3LL, v27, v3, v98, v331);
          v62 = !v331;
          *((_BYTE *)v1 + 184) = 1;
          if ( v62 )
            goto LABEL_510;
          v255 = v293;
          while ( 1 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
            VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v52, *(struct VIDMM_GLOBAL **)v1, v3, v290);
            if ( !v278 )
              VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(v256, v255[8]);
            v257 = v284;
            v301 = 0LL;
            v258 = VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(v1, v3, v290);
            if ( !v258 )
            {
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
              goto LABEL_64;
            }
            if ( v258 == -1071775484 )
              break;
            if ( (**((_DWORD **)v290 + 12) & 0x20000) != 0 )
            {
              if ( *((_BYTE *)v27 + 24) )
              {
                if ( *((_DWORD *)v27 + 12) == 203 && *((_DWORD *)v27 + 20) == 5 )
                {
                  v9 = 1584LL * (*(_DWORD *)(**(_QWORD **)v290 + 68LL) & 0x3F);
                  v26 = *(_QWORD *)(*(_QWORD *)v1 + 40224LL);
                  if ( (*(_BYTE *)(v9 + v26 + 437) & 4) == 0 )
                  {
                    if ( g_IsInternalReleaseOrDbg )
                      WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
                    v284 = v257;
                    *((_DWORD *)v27 + 20) = 6;
                    goto LABEL_64;
                  }
                }
              }
            }
            VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound((VIDMM_COMMIT_TELEMETRY *)v52, v255[8]);
            if ( v287 <= 0 )
            {
              DefragSegment = VIDMM_GLOBAL::GetDefragSegment(
                                *(VIDMM_GLOBAL **)v1,
                                *(_WORD *)(**(_QWORD **)v290 + 68LL) & 0x3F,
                                *(_DWORD *)(**(_QWORD **)v290 + 60LL));
              v260 = DefragSegment;
              if ( DefragSegment )
              {
                WdLogSingleEntry1(4LL, DefragSegment);
                VIDMM_WORKER_THREAD::DefragmentSegment(v1, v260);
LABEL_525:
                v284 = v257;
                goto LABEL_64;
              }
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
              if ( !dword_1C006E580 || KdRefreshDebuggerNotPresent() )
                goto LABEL_509;
              v261 = *(_QWORD **)(*(_QWORD *)v290 + 8LL);
              IsProcessCommitRelinquished = PsIsProcessCommitRelinquished(*v261);
              v26 = (unsigned int)g_UnrecoverablePagingFailureDebugMode;
              if ( g_UnrecoverablePagingFailureDebugMode )
              {
                if ( IsProcessCommitRelinquished )
                {
LABEL_521:
                  v11 = v261[4];
                  if ( v11 && !*(_BYTE *)(v11 + 588) )
                  {
                    DbgPrintEx(
                      0x65u,
                      0,
                      "\n"
                      "We broke in to the debugger as a unrecoverable paging failure occurred after a process had its\n"
                      "virtual address space torn down, yet we do not detect ourselves in the frozen state for that proce"
                      "ss.\n"
                      "DXGPROCESS 0x%I64p and Mm should be inspected for how we reached this state.\n");
                    __debugbreak();
                  }
                }
LABEL_509:
                v6 = v330;
LABEL_510:
                v264 = v3;
                if ( v34 && *((_BYTE *)v27 + 24) )
                {
                  v62 = v27[9] == 0;
                  *((_BYTE *)v27 + 120) = 1;
                  if ( v62 )
                  {
                    v264 = (struct VIDMM_DEVICE *)v27[7];
                    if ( !v264 )
                    {
                      v264 = *(struct VIDMM_DEVICE **)(v27[8] + 8);
                      goto LABEL_515;
                    }
LABEL_516:
                    v26 = *((_QWORD *)v264 + 4);
                    if ( v26 )
                      VidSchMarkDeviceAsError(v26);
                  }
                }
                else
                {
LABEL_515:
                  if ( v264 )
                    goto LABEL_516;
                }
                v279 = 1;
                if ( !v331 )
                {
                  if ( v34 )
                  {
                    VIDMM_PAGING_QUEUE::ReclaimPacket(v34, (struct VIDMM_PAGING_QUEUE_PACKET *)v27);
                    v279 = 1;
                  }
                  goto LABEL_146;
                }
                v284 = 0;
                goto LABEL_64;
              }
              if ( IsProcessCommitRelinquished )
                goto LABEL_521;
              v263 = "\n"
                     "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                     "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                     "Paging operation type: Failure to process paging packet \"?? ((dxgmms2!VIDMM_PAGING_QUEUE_PACKET*)0"
                     "x%p)\"\n"
                     "from paging queue \"?? ((dxgmms2!VIDMM_PAGING_QUEUE*)0x%p)\".\n";
              if ( !v27 )
                v263 = "\n"
                       "Video memory manager cannot ensure forward progress on this paging operation, and the device\n"
                       "\"?? ((dxgmms2!VIDMM_DEVICE*)0x%p)\" will be placed in error.\n"
                       "Paging operation type: Failure to resume device\n";
              DbgPrintEx(0x65u, 0, v263, v3, v27, v34);
              DbgPrintEx(
                0x65u,
                0,
                "\n"
                "We broke into the debugger to allow a chance for debugging this issue.\n"
                "\n"
                "To disable debug breaks on unrecoverable paging packet failures, run \"?? dxgmms2!g_UnrecoverablePagingF"
                "ailureDebugMode=1\"\n"
                "or \"ed 0x%p 1\"\n"
                "To re-attempt the failed paging packet execution for debugging purposes, run \"?? dxgmms2!g_Unrecoverabl"
                "ePagingFailureDebugMode=2\"\n"
                "or \"ed 0x%p 2\"\n"
                "To re-attempt the suspend attempt for debugging purposes, run \"?? dxgmms2!g_UnrecoverablePagingFailureD"
                "ebugMode=3\"\n"
                "or \"ed 0x%p 3\"\n"
                "!!! Note that option 2 will result in an unrecoverable machine state that should be rebooted after stepp"
                "ing through the code is done.!!!\n"
                "\n",
                (const void *)&g_UnrecoverablePagingFailureDebugMode,
                (const void *)&g_UnrecoverablePagingFailureDebugMode,
                (const void *)&g_UnrecoverablePagingFailureDebugMode);
              __debugbreak();
              if ( g_UnrecoverablePagingFailureDebugMode == 2 )
                goto LABEL_525;
              if ( g_UnrecoverablePagingFailureDebugMode != 3 )
                goto LABEL_509;
              v255 = v293;
            }
            else
            {
              if ( g_IsInternalReleaseOrDbg )
                WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
              --v287;
            }
            v284 = v257;
            if ( !v331 )
              goto LABEL_509;
          }
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
          v265 = v301;
          if ( (*((_DWORD *)v3 + 15) & 7) != 0 || !VIDMM_DEVICE::IsBetterYieldCandidate(v3, v301) )
          {
            VIDMM_DEVICE::Yield(v3, v265);
            if ( v265 != v3 )
            {
              if ( v34 )
                VIDMM_PAGING_QUEUE::RewindPacket(v34, (struct VIDMM_PAGING_QUEUE_PACKET *)v27);
              v266 = *(_QWORD *)(*(_QWORD *)v1 + 4632LL) - *((_QWORD *)v265 + 29);
              if ( v266 > *((_QWORD *)v1 + 24) )
              {
                *((_QWORD *)v1 + 24) = v266;
                *((_DWORD *)v1 + 50) = 8;
              }
              VIDMM_WORKER_THREAD::EndOperation(v1, 0, 0);
              v6 = v330;
              v5 = (char *)v1 + 56;
              v7 = v332;
              v8 = 0;
              goto LABEL_2;
            }
          }
          else
          {
            VIDMM_DEVICE::Yield(v265, v3);
          }
        }
      }
      if ( v3 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(12LL, v9, v10, v11);
        v227 = VIDMM_DEVICE::Resume(v3, (unsigned __int8)v57[8], &v331, &v290);
        v11 = v227;
        v285 = v227;
        v330 = v282 || *((_DWORD *)v1 + 42);
        goto LABEL_142;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(12LL, v9, v10, v11);
      v6 = 0;
      v330 = 0;
LABEL_146:
      if ( *((_QWORD *)v1 + 33) )
      {
        v99 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *((_QWORD *)v1 + 37));
        v100 = *((_QWORD *)v1 + 39);
        v101 = *(_QWORD *)(*((_QWORD *)v1 + 33) + 16LL);
        v102 = *((_QWORD *)v1 + 38);
        v103 = *((_QWORD *)v1 + 43);
        LODWORD(v293) = *((_DWORD *)v1 + 90);
        LODWORD(v296) = *((_DWORD *)v1 + 89);
        LODWORD(v295) = *((_DWORD *)v1 + 94);
        v285 = *((_DWORD *)v1 + 93);
        v306 = *((_QWORD *)v1 + 42);
        v287 = *((_DWORD *)v1 + 92);
        v305 = *((_QWORD *)v1 + 41);
        v292 = *((_DWORD *)v1 + 91);
        v304 = *((_QWORD *)v1 + 40);
        LODWORD(v288) = *((_DWORD *)v1 + 88);
        v104 = *((_QWORD *)v1 + 36);
        if ( v104 > 0x100000000LL )
        {
          v284 = 21;
        }
        else
        {
          v62 = !_BitScanReverse((unsigned int *)&v105, v104 >> 12);
          ThreadInformation[1] = v105;
          if ( v62 )
            v284 = 0;
          else
            v284 = v105 + 1;
        }
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v1 + 3584, 0LL);
        v106 = (unsigned int)v284;
        *((_QWORD *)v1 + 449) = KeGetCurrentThread();
        v107 = v99;
        v108 = v304;
        ++*((_DWORD *)v1 + v106 + 104);
        if ( *((_QWORD *)v1 + v106 + 63) > v99.QuadPart )
          v107 = *(LARGE_INTEGER *)((char *)v1 + 8 * v106 + 504);
        *((_QWORD *)v1 + v106 + 85) += v99.QuadPart;
        *((LARGE_INTEGER *)v1 + v106 + 63) = v107;
        *((_DWORD *)v1 + v106 + 214) += v292;
        v109 = v108;
        if ( *((_QWORD *)v1 + v106 + 118) > v108 )
          v109 = *((_QWORD *)v1 + v106 + 118);
        *((_QWORD *)v1 + v106 + 140) += v108;
        v110 = v305;
        *((_QWORD *)v1 + v106 + 118) = v109;
        *((_DWORD *)v1 + v106 + 324) += v287;
        v111 = v110;
        if ( *((_QWORD *)v1 + v106 + 173) > v110 )
          v111 = *((_QWORD *)v1 + v106 + 173);
        *((_QWORD *)v1 + v106 + 195) += v110;
        v112 = v306;
        *((_QWORD *)v1 + v106 + 173) = v111;
        *((_DWORD *)v1 + v106 + 434) += v285;
        v113 = v112;
        if ( *((_QWORD *)v1 + v106 + 228) > v112 )
          v113 = *((_QWORD *)v1 + v106 + 228);
        *((_QWORD *)v1 + v106 + 250) += v112;
        *((_QWORD *)v1 + v106 + 228) = v113;
        v114 = v100;
        *((_DWORD *)v1 + v106 + 544) += v295;
        v115 = v103;
        if ( *((_QWORD *)v1 + v106 + 283) > v103 )
          v115 = *((_QWORD *)v1 + v106 + 283);
        *((_QWORD *)v1 + v106 + 305) += v103;
        *((_QWORD *)v1 + v106 + 283) = v115;
        v116 = v102;
        *((_DWORD *)v1 + v106 + 654) += v296;
        if ( *((_QWORD *)v1 + v106 + 338) > v102 )
          v116 = *((_QWORD *)v1 + v106 + 338);
        *((_QWORD *)v1 + v106 + 360) += v102;
        v117 = (int)v293;
        *((_QWORD *)v1 + v106 + 338) = v116;
        *((_DWORD *)v1 + v106 + 764) += v117;
        if ( *((_QWORD *)v1 + v106 + 393) > v100 )
          v114 = *((_QWORD *)v1 + v106 + 393);
        *((_QWORD *)v1 + v106 + 415) += v100;
        v118 = (int)v288;
        *((_QWORD *)v1 + v106 + 393) = v114;
        *((_DWORD *)v1 + v106 + 874) += v118;
        *((_QWORD *)v1 + 449) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v1 + 3584, 0LL);
        KeLeaveCriticalRegion();
        if ( v101 )
        {
          v11 = *((unsigned int *)v1 + 94);
          v10 = *((unsigned int *)v1 + 97);
          v9 = *((unsigned int *)v1 + 96);
          v26 = v279 != 0;
          v119 = *((_DWORD *)v1 + 95);
          *(_DWORD *)(v101 + 1752) += v119;
          *(_DWORD *)(v101 + 1756) += v9;
          *(_DWORD *)(v101 + 1760) += v10;
          *(_DWORD *)(v101 + 1764) += v11;
          *(_DWORD *)(v101 + 1768) += v26;
          if ( v119 || (_DWORD)v9 || (_DWORD)v10 || (_DWORD)v11 || v279 )
            *(_BYTE *)(v101 + 1772) = 1;
        }
        v6 = v330;
        *((_QWORD *)v1 + 33) = 0LL;
      }
      if ( *((_DWORD *)v1 + 7) == 1 )
      {
        v120 = *(VIDMM_GLOBAL **)v1;
        v312 = &VIDMM_PARTITION::_PartitionLock;
        v313 = 0;
        v121 = 0;
        ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
        v122 = 0;
        v313 = 1;
        if ( *((_DWORD *)v120 + 1754) )
        {
          do
          {
            v123 = *((_QWORD *)v120 + 5028);
            if ( (*(_BYTE *)(v123 + 1584LL * v122 + 512) & 1) != 0 )
            {
              v124 = VIDMM_PARTITION::_PartitionTree;
              for ( k = 0LL; v124; v124 = v124->Children[0] )
                k = v124->Children;
              while ( k )
              {
                v126 = 336LL * v122 + *(_QWORD *)(376LL * *(unsigned int *)(*((_QWORD *)v120 + 3) + 240LL) + k[5] + 24);
                v127 = *(_QWORD *)(v126 + 16);
                v129 = 0;
                if ( v127 )
                {
                  v128 = v127 == 0x1E4AE7D9ALL
                       ? 100LL * *(_QWORD *)(v126 + 120) / 0x1E4AE7D9AuLL
                       : 100LL * *(_QWORD *)(v126 + 120) / v127;
                  if ( (__int64)(100 - v128) < (unsigned int)dword_1C006E4A8 )
                    v129 = 1;
                }
                if ( v129 != *(_BYTE *)(v126 + 128) )
                {
                  v121 = 1;
                  *(_BYTE *)(v126 + 128) = v129;
                }
                v130 = (_QWORD **)k[1];
                v131 = k;
                if ( v130 )
                {
                  k = (_QWORD *)k[1];
                  for ( m = *v130; m; m = (_QWORD *)*m )
                    k = m;
                }
                else
                {
                  for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    if ( (_QWORD *)*k == v131 )
                      break;
                    v131 = k;
                  }
                }
              }
            }
            else
            {
              v132 = v123 + 1584LL * v122;
              v133 = *(_QWORD *)(v132 + 560);
              v136 = 0;
              if ( v133 )
              {
                v134 = 100LL * *(_QWORD *)(v132 + 664);
                v135 = v133 == 917943092 ? v134 / 0x36B6B334 : v134 / v133;
                if ( (__int64)(100 - v135) < (unsigned int)dword_1C006E4A8 )
                  v136 = 1;
              }
              if ( v136 != *(_BYTE *)(v132 + 672) )
              {
                v121 = 1;
                *(_BYTE *)(v132 + 672) = v136;
              }
            }
            v138 = *((_QWORD *)v120 + 5028);
            if ( (*(_BYTE *)(v138 + 1584LL * v122 + 536) & 1) != 0 )
            {
              v139 = VIDMM_PARTITION::_PartitionTree;
              for ( n = 0LL; v139; v139 = v139->Children[0] )
                n = v139->Children;
              while ( n )
              {
                v141 = 336LL * v122 + *(_QWORD *)(376LL * *(unsigned int *)(*((_QWORD *)v120 + 3) + 240LL) + n[5] + 24);
                v142 = *(_QWORD *)(v141 + 16);
                v144 = 0;
                if ( v142 )
                {
                  v143 = v142 == 0x1E4AE7D9ALL
                       ? 100LL * *(_QWORD *)(v141 + 120) / 0x1E4AE7D9AuLL
                       : 100LL * *(_QWORD *)(v141 + 120) / v142;
                  if ( (__int64)(100 - v143) < (unsigned int)dword_1C006E4A8 )
                    v144 = 1;
                }
                if ( v144 != *(_BYTE *)(v141 + 128) )
                {
                  v121 = 1;
                  *(_BYTE *)(v141 + 128) = v144;
                }
                v145 = (_QWORD **)n[1];
                v146 = n;
                if ( v145 )
                {
                  n = (_QWORD *)n[1];
                  for ( ii = *v145; ii; ii = (_QWORD *)*ii )
                    n = ii;
                }
                else
                {
                  for ( n = (_QWORD *)(n[2] & 0xFFFFFFFFFFFFFFFCuLL); n; n = (_QWORD *)(n[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    if ( (_QWORD *)*n == v146 )
                      break;
                    v146 = n;
                  }
                }
              }
            }
            else
            {
              v174 = v138 + 1584LL * v122;
              v175 = *(_QWORD *)(v174 + 896);
              v178 = 0;
              if ( v175 )
              {
                v176 = 100LL * *(_QWORD *)(v174 + 1000);
                v177 = v175 == 917943092 ? v176 / 0x36B6B334 : v176 / v175;
                if ( (__int64)(100 - v177) < (unsigned int)dword_1C006E4A8 )
                  v178 = 1;
              }
              if ( v178 != *(_BYTE *)(v174 + 1008) )
              {
                v121 = 1;
                *(_BYTE *)(v174 + 1008) = v178;
              }
            }
            ++v122;
          }
          while ( v122 < *((_DWORD *)v120 + 1754) );
          v6 = v330;
        }
        v148 = v332;
        v313 = 0;
        ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
        v62 = ((unsigned __int8)v121 | *((_BYTE *)v1 + 184)) == 0;
        *((_BYTE *)v1 + 184) |= v121;
        if ( !v62 )
          VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)v1, 0);
        VIDMM_GLOBAL::HandlePromotionCandidates(*(VIDMM_GLOBAL **)v1, &v286);
        v149 = *(VIDMM_GLOBAL **)v1;
        v150 = *(_QWORD *)v1 + 44480LL;
        if ( *(_QWORD *)v1 != -44480LL && *(struct _KTHREAD **)(*(_QWORD *)v1 + 44488LL) == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 1425LL);
          DxgkLogInternalTriageEvent(v267, 262146LL);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v150, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v212 = *(_DWORD *)(v150 + 24);
            if ( v212 != -1 && (byte_1C006E941 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer(v151, (__int64)&EventBlockThread, v152, v212);
          }
          ExAcquirePushLockSharedEx(v150, 0LL);
        }
        v327 = 0;
        if ( *((VIDMM_GLOBAL **)v149 + 5564) == (VIDMM_GLOBAL *)((char *)v149 + 44512) )
        {
          ExReleasePushLockSharedEx(v150, 0LL);
          KeLeaveCriticalRegion();
        }
        else
        {
          ExReleasePushLockSharedEx(v150, 0LL);
          KeLeaveCriticalRegion();
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
          v6 = 1;
          v332 = v148;
          v330 = 1;
        }
      }
LABEL_224:
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
      if ( (unsigned int)(*((_DWORD *)v1 + 6) - 3) > 2 )
      {
        if ( dword_1C006E470 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
          v153 = *(VIDMM_GLOBAL **)v1;
          v154 = *(_QWORD *)(*(_QWORD *)v1 + 44592LL);
          if ( v154 == *(_QWORD *)(*(_QWORD *)v1 + 44600LL) )
          {
            v155 = 0;
          }
          else
          {
            v303 = 0LL;
            v302 = 14001;
            if ( (byte_1C006E942 & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventVidMmProfilerEnter, v10, 14001);
            DXGETWPROFILER_BASE::PushProfilerEntry();
            v268 = 0;
            if ( *((_DWORD *)v153 + 1754) )
            {
              do
              {
                v291 = 0;
                DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v314, (struct _KTHREAD **)v153 + 5130, 0);
                DXGPUSHLOCK::AcquireShared(v315);
                v316 = 1;
                v317 = &VIDMM_PARTITION::_PartitionLock;
                ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                v318 = 1;
                VIDMM_GLOBAL::SetupBudgetState(v153, (struct VIDMM_BUDGET_STATE *)&v291, v268);
                VIDMM_GLOBAL::AssignBudgets(v153, (struct VIDMM_BUDGET_STATE *)&v291, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL);
                if ( (*(_BYTE *)(1584LL * v268 + *((_QWORD *)v153 + 5028) + 536) & 2) != 0 )
                  VIDMM_GLOBAL::AssignBudgets(
                    v153,
                    (struct VIDMM_BUDGET_STATE *)&v291,
                    D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL);
                ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v314);
                ++v268;
              }
              while ( v268 < *((_DWORD *)v153 + 1754) );
              v1 = this;
            }
            *((_QWORD *)v153 + 5575) = v154;
            VIDMM_GLOBAL::SendBudgetChangeNotifications(v153);
            v155 = 1;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v302);
            if ( (byte_1C006E942 & 0x40) != 0 )
              McTemplateK0q_EtwWriteTransfer(v269, (__int64)&EventVidMmProfilerExit, v270, v302);
          }
          VIDMM_GLOBAL::HandleTrimWnf(*(VIDMM_GLOBAL **)v1, v155);
        }
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
        v156 = *(VIDMM_GLOBAL **)v1;
        if ( qword_1C006E3C0 )
        {
          v157 = (VIDMM_GLOBAL **)((char *)v156 + 39960);
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v156 + 39976, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v217 = *((_DWORD *)v156 + 10000);
              if ( v217 != -1 && (byte_1C006E941 & 1) != 0 )
                McTemplateK0q_EtwWriteTransfer(v158, (__int64)&EventBlockThread, v159, v217);
            }
            ExAcquirePushLockSharedEx((char *)v156 + 39976, 0LL);
          }
          v160 = (char *)v156 + 39976;
          if ( *v157 == (VIDMM_GLOBAL *)v157 )
          {
            ExReleasePushLockSharedEx(v160, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            ExReleasePushLockSharedEx(v160, 0LL);
            KeLeaveCriticalRegion();
            if ( (*((_DWORD *)v156 + 1764) & 0x8000) != 0
              || (v188 = *((_QWORD *)v156 + 579) - *((_QWORD *)v156 + 890), v188 >= qword_1C006E3C0) )
            {
              DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)v156 + 39976));
              v201 = *v157;
              if ( *v157 == (VIDMM_GLOBAL *)v157 )
              {
                v211 = 0;
              }
              else
              {
                VIDMM_GLOBAL::StartPreparation((__int64)v156, 0xFFFFFFFF, 0LL, 0LL, 1001);
                do
                {
                  v203 = *(VIDMM_GLOBAL ***)v201;
                  v204 = (VIDMM_GLOBAL *)((char *)v201 - 416);
                  v205 = v201;
                  v201 = (VIDMM_GLOBAL *)v203;
                  if ( v203[1] != v205 )
                    goto LABEL_20;
                  v206 = (VIDMM_GLOBAL **)*((_QWORD *)v205 + 1);
                  if ( *v206 != v205 )
                    goto LABEL_20;
                  *v206 = (VIDMM_GLOBAL *)v203;
                  v203[1] = (VIDMM_GLOBAL *)v206;
                  v207 = *((_QWORD *)v204 + 66);
                  *(_QWORD *)v205 = 0LL;
                  v208 = *(unsigned __int16 *)(v207 + 4);
                  if ( (_WORD)v208 && (_WORD)v208 != 3 )
                  {
                    if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
                      McTemplateK0p_EtwWriteTransfer(v208, &EventProcessOfferAllocation, v202, v204);
                    v209 = *((_QWORD *)v204 + 15);
                    if ( v209 && (*(_DWORD *)(v209 + 80) & 0x1001) == 0 )
                    {
                      if ( *((_DWORD *)v204 + 28) == 2 )
                        VIDMM_SEGMENT::OfferAllocation((VIDMM_GLOBAL **)v209, v204);
                    }
                    else
                    {
                      v210 = (VIDMM_GLOBAL **)*((_QWORD *)v156 + 5004);
                      if ( *v210 != (VIDMM_GLOBAL *)((char *)v156 + 40024) )
                        goto LABEL_20;
                      *(_QWORD *)v205 = (char *)v156 + 40024;
                      *((_QWORD *)v205 + 1) = v210;
                      *v210 = v205;
                      *((_QWORD *)v156 + 5004) = v205;
                    }
                  }
                }
                while ( v201 != (VIDMM_GLOBAL *)v157 );
                v211 = 1;
              }
              *((_QWORD *)v156 + 4998) = 0LL;
              ExReleasePushLockExclusiveEx((char *)v156 + 39976, 0LL);
              KeLeaveCriticalRegion();
              *((_QWORD *)v156 + 890) = *((_QWORD *)v156 + 579);
              v189 = -qword_1C006E3C0;
              if ( v211 )
                VIDMM_GLOBAL::EndPreparation(v156, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
            }
            else
            {
              v189 = v188 - qword_1C006E3C0;
            }
            VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v156, v189, 3);
          }
        }
        v161 = *(VIDMM_GLOBAL **)v1;
        if ( *(_DWORD *)(*(_QWORD *)v1 + 7056LL)
          || *((_QWORD *)v161 + 895) < (unsigned __int64)qword_1C006E400
          && *((_DWORD *)v161 + 1792) < (unsigned int)dword_1C006E408 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v26, v9, v10, v11);
            v161 = *(VIDMM_GLOBAL **)v1;
          }
          VIDMM_GLOBAL::ProcessSystemMemoryOfferList(v161);
          v162 = *(VIDMM_GLOBAL **)v1;
          if ( (*(_DWORD *)(*(_QWORD *)v1 + 7056LL) & 0x8000) != 0 )
          {
            VIDMM_GLOBAL::StartPreparation((__int64)v162, 0xFFFFFFFF, 0LL, 0LL, 1003);
            v271 = 0LL;
            if ( *((_DWORD *)v162 + 926) )
            {
              do
              {
                VIDMM_SEGMENT::TrimOfferLists(*(_QWORD *)(*((_QWORD *)v162 + 464) + 8 * v271), 12LL, 0LL, 0LL);
                v271 = (unsigned int)(v271 + 1);
              }
              while ( (unsigned int)v271 < *((_DWORD *)v162 + 926) );
              v1 = this;
            }
            VIDMM_GLOBAL::EndPreparation(v162, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
            v162 = *(VIDMM_GLOBAL **)v1;
          }
          *((_QWORD *)v162 + 466) = (char *)v162 + 3720;
          *((_QWORD *)v162 + 465) = (char *)v162 + 3720;
          v161 = *(VIDMM_GLOBAL **)v1;
          if ( qword_1C006E3B8 )
          {
            v163 = 0x8000000000000000uLL;
            if ( *((_BYTE *)v161 + 40178) )
            {
              v179 = *((_DWORD *)v161 + 926);
              v180 = 0LL;
              if ( v179 )
              {
                while ( 1 )
                {
                  v181 = *(_QWORD *)(*((_QWORD *)v161 + 464) + 8 * v180);
                  if ( (*(_DWORD *)(v181 + 80) & 0x1001) != 0 && *(_QWORD *)(v181 + 176) != v181 + 176 )
                    break;
                  v180 = (unsigned int)(v180 + 1);
                  if ( (unsigned int)v180 >= v179 )
                    goto LABEL_249;
                }
                *((_QWORD *)v161 + 889) = *((_QWORD *)v161 + 579);
                *((_BYTE *)v161 + 40178) = 0;
                v163 = -qword_1C006E3B8;
              }
            }
            else
            {
              v164 = *((_QWORD *)v161 + 579) - *((_QWORD *)v161 + 889);
              if ( v164 >= qword_1C006E3B8 )
              {
                VIDMM_GLOBAL::StartPreparation((__int64)v161, 0xFFFFFFFF, 0LL, 0LL, 207);
                v213 = VIDMM_GLOBAL::CleanupMarkedForEvictionAllocationsWorker(v161);
                VIDMM_GLOBAL::EndPreparation(v161, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
                if ( !v213 )
                  *((_BYTE *)v161 + 40178) = 1;
              }
              else
              {
                v163 = v164 - qword_1C006E3B8;
              }
            }
LABEL_249:
            VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v161, v163, 2);
            v161 = *(VIDMM_GLOBAL **)v1;
          }
        }
        v6 = v330;
        v165 = v161;
        if ( !v330 && !VIDMM_GLOBAL::UnderCleanupLimit(v161) )
        {
          VIDMM_GLOBAL::ResetCleanupCounters(v166, 1);
          v165 = *(VIDMM_GLOBAL **)v1;
          v280 = 1;
        }
        NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination((KSPIN_LOCK *)v165, &v283);
        v168 = 0;
        if ( NextPendingTermination )
        {
          v183 = *(VIDMM_GLOBAL **)v1;
          v322 = NextPendingTermination;
          v320 = 0LL;
          v321 = 0;
          v323 = 0LL;
          v324 = 0LL;
          v325 = 0LL;
          v326 = 0LL;
          v319 = 200;
          v289[0] = 0;
          v307 = 0LL;
          VIDMM_GLOBAL::ProcessDeferredCommand(v183, (unsigned __int64)&v319, (__int64)v289, 0, 0LL, 0LL, 0, &v307);
        }
        v169 = *(VIDMM_GLOBAL **)v1;
        if ( *(_BYTE *)(*(_QWORD *)v1 + 40938LL) )
        {
          for ( jj = 0; jj < *((_DWORD *)v169 + 1754); ++jj )
          {
            v273 = *((_QWORD *)v169 + 5028) + 1584LL * jj;
            if ( !*(_DWORD *)(v273 + 432) && (*(_BYTE *)(v273 + 436) & 0x40) == 0 )
            {
              if ( *(_DWORD *)(v273 + 24) )
              {
                do
                {
                  v274 = *((_QWORD *)v169 + 464);
                  v275 = v168 + *(_DWORD *)(v273 + 20);
                  v276 = *(_QWORD *)(v274 + 8 * v275);
                  v9 = *(unsigned int *)(v276 + 368);
                  if ( (_DWORD)v9 != -1 )
                  {
                    if ( (*(_BYTE *)(v273 + 436) & 0x40) == 0 )
                    {
                      v277 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v274 + 8 * v275));
                      if ( v277 == *(_DWORD *)(v273 + 60) || v277 == *(_DWORD *)(v273 + 44) )
                      {
                        if ( *(_QWORD *)(v273 + 464) != v273 + 464 )
                        {
                          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v169, jj);
                          VIDMM_GLOBAL::StartPreparation((__int64)v169, jj, 0LL, 0LL, 121);
                          VIDMM_GLOBAL::FlushScratchGpuVaRanges(v169, jj);
                          VIDMM_GLOBAL::EndPreparation(v169, jj, 0LL, 0, 0LL, 0LL);
                        }
                        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v169, jj);
                        *(_BYTE *)(v273 + 436) |= 0x40u;
                        v9 = *(unsigned int *)(v276 + 368);
                      }
                    }
                    (*((void (__fastcall **)(_QWORD, __int64, _QWORD))v169 + 5018))(*((_QWORD *)v169 + 5019), v9, 0LL);
                  }
                  ++v168;
                }
                while ( v168 < *(_DWORD *)(v273 + 24) );
              }
              v168 = 0;
            }
          }
          *((_BYTE *)v169 + 40938) = 0;
        }
      }
      v7 = v332;
      v5 = (char *)v1 + 56;
      v8 = v280;
      if ( v6 )
      {
LABEL_2:
        v3 = 0LL;
        continue;
      }
      break;
    }
    v170 = *((_DWORD *)v1 + 7);
    if ( v170 == *((_DWORD *)v1 + 6) )
      goto LABEL_258;
    if ( v170 == 5 )
    {
      v170 = 5;
      v236 = (_QWORD **)(*(_QWORD *)v1 + 44576LL);
      v237 = *v236;
      if ( *v236 != v236 )
      {
        do
        {
          v238 = (VIDMM_GLOBAL **)(v237 - 26);
          if ( !*(v237 - 2) && v238[3] )
            VIDMM_DEVICE::FullySuspend(v238);
          v237 = (_QWORD *)*v237;
        }
        while ( v237 != v236 );
        v170 = *((_DWORD *)v1 + 7);
      }
    }
    v230 = (struct _KEVENT *)(*((_QWORD *)v1 + 22) + 48LL);
    *((_DWORD *)v1 + 6) = v170;
    KeSetEvent(v230, 0, 0);
    if ( *((_DWORD *)v1 + 7) != 2 )
    {
LABEL_258:
      v171 = *(VIDMM_GLOBAL **)v1;
      v3 = 0LL;
      v172 = 0;
      if ( *(_DWORD *)(*(_QWORD *)v1 + 3704LL) )
      {
        do
        {
          v173 = *(VIDMM_SEGMENT **)(*((_QWORD *)v171 + 464) + 8LL * v172);
          if ( (*((_BYTE *)v173 + 82) & 1) != 0 )
            VIDMM_SEGMENT::CurateVPR(v173);
          ++v172;
        }
        while ( v172 < *((_DWORD *)v171 + 926) );
      }
      v5 = (char *)v1 + 56;
      continue;
    }
    break;
  }
  *((_QWORD *)v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 56, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(*((PVOID *)v1 + 1));
  PsTerminateSystemThread(0);
}
