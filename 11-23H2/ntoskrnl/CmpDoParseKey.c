/*
 * XREFs of CmpDoParseKey @ 0x1406E9130
 * Callers:
 *     CmpParseKey @ 0x1406E69B0 (CmpParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     PsGetCurrentThreadProcess @ 0x14020BB00 (PsGetCurrentThreadProcess.c)
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140212E94 (_tlgWriteAgg.c)
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     CmpAllocatePool @ 0x14022CFFC (CmpAllocatePool.c)
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     CmpTransSilentIgnore @ 0x1402315B0 (CmpTransSilentIgnore.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SeAccessCheck @ 0x140231720 (SeAccessCheck.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14028C410 (PsGetProcessServerSilo.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     CmpArmDelayedCloseTimer @ 0x1402B97FC (CmpArmDelayedCloseTimer.c)
 *     ExpReleaseFastMutexContended @ 0x1402BC1F0 (ExpReleaseFastMutexContended.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402C0B10 (PsGetServerSiloServiceSessionId.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExpAcquireFastMutexContended @ 0x1402FCFDC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpGetSecurityDescriptorForKcbStackEx @ 0x14067F19C (CmpGetSecurityDescriptorForKcbStackEx.c)
 *     CmRmIsKcbStackVisible @ 0x140680480 (CmRmIsKcbStackVisible.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpGetComponentNameAtIndex @ 0x140690A1C (CmpGetComponentNameAtIndex.c)
 *     CmpComputeComponentHashes @ 0x140690B10 (CmpComputeComponentHashes.c)
 *     CmpExpandPathInfo @ 0x140690E54 (CmpExpandPathInfo.c)
 *     CmpDoWritethroughReparse @ 0x140693570 (CmpDoWritethroughReparse.c)
 *     CmpRecordParseFailure @ 0x140693738 (CmpRecordParseFailure.c)
 *     CmpFreeKeyControlBlock @ 0x140699D40 (CmpFreeKeyControlBlock.c)
 *     CmpCheckExeOwnerForPca @ 0x14069A314 (CmpCheckExeOwnerForPca.c)
 *     CmpCheckKeyOwnerForPca @ 0x14069E2E4 (CmpCheckKeyOwnerForPca.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1406C0560 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x1406C0760 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406D0F30 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmpIsKeyStackSymlink @ 0x1406D3230 (CmpIsKeyStackSymlink.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3EDC (CmpIsKeyStackDeleted.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406D57D0 (CmpGetKcbAtLayerHeight.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406D7B9C (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1406D7BE0 (CmpConstructNameWithStatus.c)
 *     CmpLockKcbExclusive @ 0x1406D8498 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406D8540 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D92F8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD500 (CmpVEExecuteOpenLogic.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     HvResetDirtyData @ 0x14070567C (HvResetDirtyData.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FD58 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x140710874 (CmpGetKeyNodeForKcb.c)
 *     SeQueryInformationToken @ 0x1407198A0 (SeQueryInformationToken.c)
 *     CmpCreateKeyBody @ 0x14072FA00 (CmpCreateKeyBody.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737E90 (SeCaptureSubjectContextEx.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x1407408D0 (CmpDoesProcessBelongToServiceSession.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751F24 (CmpDoQueueLateUnloadWorker.c)
 *     CmpTransSearchAddTransFromHive @ 0x140768998 (CmpTransSearchAddTransFromHive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1407690E0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14076A25C (CmpLockHashEntrySharedByKcb.c)
 *     CmpUnlockHashEntry @ 0x14076A7B0 (CmpUnlockHashEntry.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076A9A0 (CmpUnlockHashEntryByKcb.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14076AAAC (CmpRebuildKcbCacheFromNode.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 *     CmRmIsKCBVisible @ 0x1407B3BD0 (CmRmIsKCBVisible.c)
 *     SeAppendPrivileges @ 0x1407B66C0 (SeAppendPrivileges.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1407BA678 (CmpVEPerformOpenAccessCheck.c)
 *     CmpVEExecuteCreateLogic @ 0x1407BA724 (CmpVEExecuteCreateLogic.c)
 *     CmpEnlistKeyBody @ 0x1407C053C (CmpEnlistKeyBody.c)
 *     CmListGetPrevElement @ 0x1407C52D0 (CmListGetPrevElement.c)
 *     CmpSetKcbAtLayerHeight @ 0x1407D50FC (CmpSetKcbAtLayerHeight.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1407D8254 (CmpUpdateHiveRootCellFlags.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1407DDA78 (CmpTryToLockHashEntryExclusive.c)
 *     CmpGetComponentHashAtIndex @ 0x1407E6594 (CmpGetComponentHashAtIndex.c)
 *     CmpWaitForHiveMount @ 0x14084DD8C (CmpWaitForHiveMount.c)
 *     CmpCreateHiveRootCell @ 0x1408746CC (CmpCreateHiveRootCell.c)
 *     CmpSetAccessStateForBackupRestore @ 0x140880888 (CmpSetAccessStateForBackupRestore.c)
 *     CmpPublishEventForPcaResolver @ 0x140A12DC8 (CmpPublishEventForPcaResolver.c)
 *     CmpCleanupPathInfo @ 0x140A13D50 (CmpCleanupPathInfo.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A179F4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140A1A4B8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A1A6B4 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpLogUnsupportedOperation @ 0x140A200A0 (CmpLogUnsupportedOperation.c)
 *     CmpPromoteKey @ 0x140A2685C (CmpPromoteKey.c)
 *     HvpGetBinContextInitialize @ 0x140AF5200 (HvpGetBinContextInitialize.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 *     CmListGetNextElement @ 0x140AF56A8 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpDoParseKey(
        __int64 a1,
        struct _ACCESS_STATE *a2,
        unsigned __int8 a3,
        __int16 a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7,
        int a8,
        PVOID *a9)
{
  __int64 v9; // r14
  unsigned __int16 v11; // si
  __m128i v13; // xmm6
  __int64 v14; // r8
  ULONG_PTR v15; // r12
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r12
  char v26; // al
  _QWORD *v27; // rax
  __int64 v28; // r11
  char *v29; // r10
  __int64 v30; // r15
  __int64 v31; // rax
  char *v32; // rdi
  __int64 v33; // rsi
  unsigned __int16 v34; // dx
  unsigned __int16 v35; // r11
  unsigned __int16 v36; // ax
  __int16 v37; // r9
  _WORD *v38; // r8
  __int16 v39; // cx
  __int16 v40; // ax
  int v41; // edi
  __int16 v42; // dx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  ULONG_PTR v45; // r12
  __int16 v46; // r8
  __int16 v47; // r10
  __int64 v48; // r9
  __int64 v49; // rax
  __int16 v50; // cx
  __int64 v51; // r9
  __int16 v52; // r8
  int v53; // eax
  unsigned int v54; // edx
  int *v55; // rcx
  char v56; // r15
  bool v57; // zf
  int v58; // edi
  struct _PRIVILEGE_SET *v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r10
  __int64 v62; // r10
  unsigned __int16 ii; // cx
  __int64 v64; // rax
  char v65; // di
  __int64 v66; // rdx
  __int64 v67; // r8
  ULONG_PTR v68; // r15
  __int16 v69; // r10
  char v70; // di
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  char v76; // cl
  __int16 v77; // di
  __int16 v78; // r13
  _WORD *v79; // rsi
  __int16 v80; // r12
  __int16 v81; // r15
  int v82; // eax
  __m128i v83; // xmm0
  __int64 v84; // rax
  unsigned __int16 *v85; // r10
  __int64 v86; // r11
  unsigned __int16 v87; // dx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v89; // dx
  __int64 v90; // rax
  unsigned int v91; // esi
  __int16 v92; // r13
  int v93; // r9d
  __int16 v94; // ax
  unsigned __int16 *v95; // r10
  __int64 v96; // r11
  unsigned __int16 v97; // dx
  _QWORD *v98; // rax
  unsigned __int16 v99; // dx
  int *v100; // rcx
  int v101; // eax
  int v102; // r8d
  int v103; // eax
  char v104; // al
  __int16 v105; // di
  __int64 v106; // rsi
  __int64 *v107; // rdi
  signed __int64 v108; // rax
  signed __int64 v109; // rdx
  __int64 v110; // rtt
  __int64 v111; // rax
  int *v112; // rax
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // r12
  unsigned __int16 v114; // cx
  __int64 v115; // rax
  char v116; // di
  int *v117; // rsi
  char v118; // r15
  int v119; // eax
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  bool v123; // di
  int v124; // eax
  _QWORD *v125; // rdi
  __int64 v126; // r15
  unsigned __int64 v127; // rsi
  _QWORD *v128; // rax
  _QWORD *v129; // rcx
  signed __int64 v130; // rdx
  ULONG_PTR v131; // rtt
  __int64 v132; // r8
  unsigned int v133; // r9d
  signed __int64 v134; // rdx
  ULONG_PTR v135; // rtt
  __int16 v136; // r15
  __int64 v137; // rdi
  __int64 v138; // r9
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  int v147; // r8d
  __int64 v148; // rdi
  int v149; // ebx
  struct _PRIVILEGE_SET *Pool; // rcx
  struct _PRIVILEGE_SET *v151; // rcx
  int v152; // ebx
  int *v153; // r12
  __int64 *v154; // rsi
  __int64 v155; // rdx
  __int64 v156; // r10
  __int64 v157; // r10
  __int16 v158; // cx
  __int16 v159; // bx
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // r8
  __int64 v165; // rax
  __int64 v166; // r9
  int v167; // ecx
  unsigned __int16 v168; // r8
  __int64 v169; // rdx
  __int16 v170; // bx
  __int64 v171; // rcx
  int v172; // ebx
  __int64 v173; // r8
  int v174; // edx
  __m128i *v175; // r9
  char v176; // al
  int v177; // ecx
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // r8
  ULONG_PTR v184; // rax
  __int64 *v185; // rax
  int v186; // eax
  __int64 v187; // rcx
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // r10
  __int64 v191; // rdi
  __int64 v192; // rdx
  __int64 i; // r10
  __int64 v194; // r10
  __int64 v195; // r12
  __int64 v196; // rcx
  __int16 j; // bx
  __int64 v198; // rcx
  __int16 k; // bx
  __int64 v200; // rcx
  int v201; // r8d
  __int16 v202; // bx
  __int64 v203; // r15
  unsigned __int16 *ComponentNameAtIndex; // r12
  int ComponentHashAtIndex; // ebx
  int v206; // r8d
  __int64 v207; // rcx
  ULONG_PTR v208; // rdx
  ULONG_PTR v209; // rcx
  int HiveRootCell; // eax
  int updated; // eax
  ULONG_PTR v212; // rbx
  __int64 v213; // rdi
  int started; // eax
  __int16 m; // bx
  __int64 v216; // rcx
  int KeyBody; // eax
  signed __int64 *v218; // rbx
  unsigned __int64 v219; // r15
  ULONG_PTR v220; // rbx
  ULONG_PTR v221; // rcx
  int v222; // r15d
  int v223; // eax
  __int64 v224; // rbx
  PACCESS_STATE v225; // r13
  __int64 v226; // r8
  __int64 v227; // rcx
  __int64 v228; // rbx
  int v229; // r12d
  volatile signed __int64 *v230; // rbx
  unsigned __int8 v231; // di
  unsigned __int16 *v232; // rbx
  unsigned __int16 v233; // dx
  __int64 v234; // rcx
  __int64 NextElement; // rax
  __int64 v236; // r9
  int v237; // ecx
  unsigned __int16 v238; // r8
  __int64 v239; // rdx
  int SymbolicLinkTarget; // eax
  __int64 v241; // rcx
  __m128i *v242; // rbx
  int v243; // eax
  int v244; // eax
  int v245; // eax
  __int64 v246; // rax
  __int64 v247; // rdx
  __int64 v248; // r8
  __int64 v249; // rax
  __int64 v250; // rdx
  __int64 v251; // r8
  const UNICODE_STRING *v252; // rax
  UNICODE_STRING *v253; // r12
  unsigned __int16 *p_Length; // rbx
  int v255; // eax
  int v256; // eax
  __int64 v257; // rcx
  _KPROCESS *v258; // rdi
  __int64 ProcessServerSilo; // rax
  int ServerSiloServiceSessionId; // ebx
  __int64 v261; // r8
  __int64 v262; // rcx
  __int64 v263; // r8
  int v264; // eax
  __int64 v265; // rcx
  PACCESS_STATE v266; // r12
  int Logic; // eax
  __int64 v268; // rcx
  int v269; // r9d
  _KPROCESS *v270; // rdi
  __int64 v271; // rax
  int v272; // ebx
  __int64 v273; // r8
  __int64 v274; // rcx
  int v275; // eax
  int v276; // eax
  int v277; // eax
  __int64 v278; // rcx
  int v279; // eax
  int v280; // eax
  int v281; // eax
  int v282; // ebx
  __int64 SecurityDescriptorForKcbStack; // rax
  __int64 v284; // r9
  int v285; // r15d
  ACCESS_MASK OriginalDesiredAccess; // ecx
  __int64 v287; // rdi
  __int64 v288; // rdx
  __int16 v289; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v291; // r13
  ACCESS_MASK v292; // ecx
  __int64 v293; // r8
  PACCESS_STATE v294; // r12
  BOOLEAN v295; // di
  struct _PRIVILEGE_SET *v296; // r13
  __int64 v297; // rbx
  int v298; // edi
  __int64 v299; // rdx
  __int64 v300; // r10
  __int64 v301; // r10
  unsigned __int16 v302; // bx
  ULONG_PTR v303; // rax
  __int64 v304; // r14
  PPRIVILEGE_SET v305; // rdi
  __int64 v306; // r12
  ULONG_PTR v307; // rdi
  __int64 PrevElement; // rbx
  __int64 v309; // r9
  __int64 v310; // r8
  __int64 v311; // r9
  struct _KTHREAD *v312; // rax
  PACCESS_STATE v313; // r13
  void *v314; // r12
  struct _KTHREAD *v315; // rax
  ACCESS_MASK RemainingDesiredAccess; // r9d
  struct _ACCESS_STATE *v317; // r8
  ACCESS_MASK v318; // eax
  _WORD *v319; // rbx
  __int64 v320; // r13
  UNICODE_STRING *v321; // rcx
  PERESOURCE *ClientToken; // rcx
  _KPROCESS *v323; // rax
  BOOLEAN v324; // al
  ULONG_PTR v325; // rbx
  int v326; // edi
  __int16 n; // bx
  __int64 v328; // rcx
  ULONG_PTR v329; // rbx
  int v330; // eax
  __int64 v331; // rdx
  __int64 v332; // rcx
  __int64 v333; // r8
  __int64 v334; // r9
  PACCESS_STATE v335; // rbx
  _SLIST_ENTRY *v336; // rdx
  struct _KPRCB *v337; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  signed __int64 v339; // rcx
  __int64 v340; // r11
  unsigned __int64 v341; // r8
  signed __int64 v342; // r10
  bool v343; // r9
  unsigned __int64 v344; // rax
  ULONG_PTR v345; // rbx
  unsigned int v346; // r12d
  unsigned __int64 *v347; // rdi
  __int64 v348; // rax
  __int64 v349; // rsi
  signed __int32 v350; // eax
  signed __int32 v351; // ett
  unsigned __int64 *v352; // rdi
  __int64 v353; // rax
  __int64 v354; // rsi
  ULONG_PTR v355; // rdi
  __int64 v356; // rsi
  __int64 v357; // rax
  __int64 v358; // rcx
  __int64 v359; // rcx
  signed __int64 v360; // rax
  ULONG_PTR v361; // rdi
  __int64 v362; // rdi
  struct _KTHREAD *v363; // rax
  signed __int64 *v364; // rdi
  signed __int64 v365; // rax
  signed __int64 v366; // rdx
  signed __int64 v367; // rtt
  bool v368; // dl
  int v369; // ecx
  __int64 v370; // rax
  __int64 v371; // r8
  __int64 v372; // rdi
  unsigned __int8 CurrentIrql; // r15
  ULONG_PTR v374; // r8
  _QWORD *v375; // rax
  __int64 v376; // rdx
  unsigned __int64 v377; // rdi
  bool v378; // r15
  signed __int32 v379; // eax
  unsigned __int8 v380; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v383; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-E0h]
  PGENERIC_MAPPING GenericMapping; // [rsp+30h] [rbp-D0h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+38h] [rbp-C8h]
  PACCESS_MASK GrantedAccess; // [rsp+40h] [rbp-C0h]
  int Child; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v390; // [rsp+64h] [rbp-9Ch]
  char v391[11]; // [rsp+65h] [rbp-9Bh] BYREF
  char v392; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-88h] BYREF
  int v394; // [rsp+80h] [rbp-80h]
  char v395; // [rsp+84h] [rbp-7Ch]
  char v396; // [rsp+85h] [rbp-7Bh]
  unsigned __int16 v397[2]; // [rsp+88h] [rbp-78h] BYREF
  char v398; // [rsp+8Ch] [rbp-74h] BYREF
  int v399; // [rsp+90h] [rbp-70h]
  PACCESS_STATE AccessState; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v401; // [rsp+A0h] [rbp-60h]
  char v402; // [rsp+A8h] [rbp-58h]
  char v403; // [rsp+A9h] [rbp-57h]
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v405; // [rsp+B8h] [rbp-48h] BYREF
  ACCESS_MASK v406[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v407; // [rsp+C8h] [rbp-38h] BYREF
  NTSTATUS AccessStatus[2]; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-28h]
  __m128i v410; // [rsp+E0h] [rbp-20h] BYREF
  ULONG_PTR v411; // [rsp+F0h] [rbp-10h]
  __int64 v412; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v413; // [rsp+100h] [rbp+0h]
  __int64 v414; // [rsp+108h] [rbp+8h] BYREF
  ULONG_PTR v415; // [rsp+110h] [rbp+10h] BYREF
  PVOID TokenInformation; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v417[4]; // [rsp+120h] [rbp+20h] BYREF
  __m128i v418; // [rsp+130h] [rbp+30h]
  ULONG_PTR v419; // [rsp+140h] [rbp+40h] BYREF
  PPRIVILEGE_SET v420; // [rsp+148h] [rbp+48h] BYREF
  PACCESS_STATE v421; // [rsp+150h] [rbp+50h]
  PVOID *v422; // [rsp+158h] [rbp+58h] BYREF
  __int64 v423; // [rsp+160h] [rbp+60h] BYREF
  __m128i v424; // [rsp+170h] [rbp+70h]
  __int128 v425; // [rsp+180h] [rbp+80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+190h] [rbp+90h] BYREF
  __int128 v427; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v428; // [rsp+1B0h] [rbp+B0h]
  __int128 v429; // [rsp+1C0h] [rbp+C0h] BYREF
  PPRIVILEGE_SET v430[2]; // [rsp+1D0h] [rbp+D0h]
  __int64 v431; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v432; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v433; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v434; // [rsp+1F8h] [rbp+F8h]
  __int128 v435; // [rsp+208h] [rbp+108h]
  __int128 v436; // [rsp+218h] [rbp+118h] BYREF
  __int64 v437[2]; // [rsp+230h] [rbp+130h] BYREF
  PPRIVILEGE_SET v438[2]; // [rsp+240h] [rbp+140h]
  int v439[4]; // [rsp+250h] [rbp+150h] BYREF
  PPRIVILEGE_SET v440[2]; // [rsp+260h] [rbp+160h]
  __int128 v441; // [rsp+270h] [rbp+170h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+280h] [rbp+180h]
  __int64 v443[2]; // [rsp+290h] [rbp+190h] BYREF
  PPRIVILEGE_SET v444[2]; // [rsp+2A0h] [rbp+1A0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+2B0h] [rbp+1B0h] BYREF
  __m128i v446; // [rsp+2D0h] [rbp+1D0h]
  __m128i v447; // [rsp+2E0h] [rbp+1E0h]
  int v448[44]; // [rsp+2F0h] [rbp+1F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v449; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 *v450; // [rsp+3C0h] [rbp+2C0h]
  __int64 v451; // [rsp+3C8h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v452; // [rsp+3D0h] [rbp+2D0h] BYREF

  v9 = a7;
  *(_QWORD *)v406 = a5;
  v11 = 0;
  v422 = a9;
  v412 = a1;
  v401 = 0LL;
  BugCheckParameter4 = 0LL;
  v398 = 0;
  v403 = 0;
  v395 = 0;
  *(_DWORD *)&v391[1] = 0;
  v392 = 0;
  v390 = a3;
  AccessState = a2;
  v423 = a7;
  LOWORD(v407) = 0;
  v405 = 0LL;
  DestinationString = 0LL;
  v414 = 0LL;
  v425 = 0LL;
  v396 = 0;
  Object = 0LL;
  v415 = 0LL;
  v413 = 0LL;
  v399 = 0;
  v397[0] = 0;
  v419 = 0LL;
  *(_QWORD *)v417 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize(&v417[1]);
  v13 = *a6;
  v391[0] = 0;
  v410 = v13;
  CmpInitializeDelayDerefContext(&v425);
  LOBYTE(v394) = 0;
  v421 = 0LL;
  memset(v448, 0, 0xA8uLL);
  *(_OWORD *)(a7 + 160) = 0LL;
  *(_OWORD *)(a7 + 176) = 0LL;
  *(_OWORD *)(a7 + 192) = 0LL;
  *(_QWORD *)(a7 + 208) = 0LL;
  *(_OWORD *)v437 = 0LL;
  WORD1(v437[0]) = -1;
  *(_OWORD *)v439 = 0LL;
  HIWORD(v439[0]) = -1;
  *(_OWORD *)v443 = 0LL;
  WORD1(v443[0]) = -1;
  *(_OWORD *)v438 = 0LL;
  *(_OWORD *)v440 = 0LL;
  *(_OWORD *)v444 = 0LL;
  *(_QWORD *)(a7 + 224) = 0LL;
  *(_QWORD *)(a7 + 232) = 0LL;
  *(_QWORD *)(a7 + 240) = 0LL;
  *(_QWORD *)(a7 + 248) = 0LL;
  *(_QWORD *)(a7 + 256) = 0LL;
  *(_QWORD *)(a7 + 264) = 0LL;
  *(_QWORD *)(a7 + 272) = 0LL;
  *(_QWORD *)(a7 + 280) = 0LL;
  *(_QWORD *)(a7 + 288) = 0LL;
  v15 = *(_QWORD *)(a7 + 88);
  BugCheckParameter2 = v15;
  *(_QWORD *)(a7 + 216) = v15;
  if ( (a4 & 0x100) != 0 )
    *(_DWORD *)a7 |= 0x200u;
  v16 = *(_QWORD *)(a7 + 72);
  v17 = 0LL;
  *(_QWORD *)(a7 + 88) = 0LL;
  if ( v16 )
  {
    v18 = *(_QWORD *)(a1 + 56);
    if ( v18 && v16 != v18 )
    {
      Child = -1072103422;
      CmpRecordParseFailure(a7, 256, -1072103422);
      v19 = v401;
      goto LABEL_730;
    }
    *(_QWORD *)AccessStatus = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 64);
    v16 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)AccessStatus = v14;
  }
  *(_DWORD *)(a7 + 20) = *(unsigned __int16 *)(a1 + 50);
  v20 = *(_QWORD *)(a1 + 8);
  v21 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( !v15 )
  {
LABEL_83:
    v76 = 0;
    LODWORD(v45) = _mm_cvtsi128_si32(v13);
    v424 = v13;
    v418 = v13;
    v68 = *(_QWORD *)(v412 + 8);
    v411 = v68;
    v402 = 0;
    *(_DWORD *)&v391[7] = v45;
    v410.m128i_i16[0] = v45;
    if ( !(_WORD)v45 )
    {
      v69 = 0;
      *(_DWORD *)&v391[7] = 0;
      goto LABEL_132;
    }
    v77 = v418.m128i_i16[0];
    v78 = 0;
    v79 = (_WORD *)v418.m128i_i64[1];
    v80 = v418.m128i_i16[1];
    do
    {
      if ( v78 >= 32 )
        break;
      if ( *v79 == 92 )
      {
        ++v78;
        v81 = v424.m128i_i16[0] - v77;
        v424.m128i_i16[0] = v81;
        v424.m128i_i16[1] = v81;
        if ( v78 > 8 && !v76 )
        {
          v82 = CmpExpandPathInfo((__int64)v448);
          if ( v82 < 0 )
            goto LABEL_117;
          v402 = 1;
          LODWORD(v17) = 0;
        }
        v83 = v424;
        v84 = (unsigned int)(v78 - 1);
        if ( (unsigned int)v84 >= 8 )
          *(__m128i *)(*(_QWORD *)&v448[40] + 16 * ((unsigned int)(v78 - 9) + 6LL)) = v424;
        else
          *(__m128i *)&v448[4 * v84 + 8] = v424;
        v446 = v83;
        if ( v81 )
        {
          v85 = (unsigned __int16 *)v446.m128i_i64[1];
          v86 = (unsigned __int16)(((unsigned __int16)(v81 - 1) >> 1) + 1);
          do
          {
            v87 = *v85;
            if ( *v85 >= 0x61u )
            {
              if ( v87 <= 0x7Au )
              {
                v87 -= 32;
              }
              else
              {
                CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                v87 = NLS_UPCASE(CurrentServerSiloGlobals[154], v89);
              }
            }
            ++v85;
            LODWORD(v17) = v87 + 37 * v17;
            --v86;
          }
          while ( v86 );
        }
        v90 = (unsigned int)(v78 - 1);
        if ( (unsigned int)v90 >= 8 )
          *(_DWORD *)(*(_QWORD *)&v448[40] + 4LL * (unsigned int)(v78 - 9)) = v17;
        else
          v448[v90] = v17;
        if ( v77 )
        {
          do
          {
            if ( *v79 != 92 )
              break;
            ++v79;
            v80 -= 2;
            v77 -= 2;
          }
          while ( v77 );
          v418.m128i_i16[0] = v77;
          v418.m128i_i64[1] = (__int64)v79;
          v418.m128i_i16[1] = v80;
        }
        v13 = v418;
        v76 = v402;
        LODWORD(v17) = 0;
        v424 = v418;
      }
      else
      {
        ++v79;
        v77 -= 2;
        v80 -= 2;
        v418.m128i_i64[1] = (__int64)v79;
        v418.m128i_i16[1] = v80;
        v418.m128i_i16[0] = v77;
      }
    }
    while ( v77 );
    LOWORD(v45) = *(_WORD *)&v391[7];
    v68 = v411;
    v91 = v78;
    if ( v77 )
    {
      v82 = -1073741811;
    }
    else
    {
      v92 = v78 + 1;
      if ( v92 <= 8 || v76 || (v82 = CmpExpandPathInfo((__int64)v448), v82 >= 0) )
      {
        if ( v91 >= 8 )
          *(__m128i *)(*(_QWORD *)&v448[40] + 16 * (v91 - 8 + 6LL)) = v13;
        else
          *(__m128i *)&v448[4 * v91 + 8] = v13;
        v447 = v13;
        v93 = 0;
        v94 = _mm_cvtsi128_si32(v13);
        v424.m128i_i16[0] = v94;
        if ( v94 )
        {
          v95 = (unsigned __int16 *)v447.m128i_i64[1];
          v96 = (unsigned __int16)(((unsigned __int16)(v94 - 1) >> 1) + 1);
          do
          {
            v97 = *v95;
            if ( *v95 >= 0x61u )
            {
              if ( v97 <= 0x7Au )
              {
                v97 -= 32;
              }
              else
              {
                v98 = PsGetCurrentServerSiloGlobals();
                v97 = NLS_UPCASE(v98[154], v99);
              }
            }
            ++v95;
            v93 = v97 + 37 * v93;
            --v96;
          }
          while ( v96 );
        }
        if ( v91 >= 8 )
          *(_DWORD *)(*(_QWORD *)&v448[40] + 4LL * (v91 - 8)) = v93;
        else
          v448[v91] = v93;
        v11 = v399;
        v69 = v92;
        *(_DWORD *)&v391[7] = (unsigned __int16)v92;
        v17 = 0LL;
LABEL_132:
        v67 = (unsigned int)v69;
        v66 = 0LL;
        v397[0] = v69;
        if ( v69 )
        {
          v17 = *(_QWORD *)&v448[40];
          while ( 1 )
          {
            v100 = (unsigned int)v66 >= 8
                 ? (int *)(*(_QWORD *)&v448[40] + 16 * ((unsigned int)(v66 - 8) + 6LL))
                 : &v448[4 * (unsigned int)v66 + 8];
            if ( *(_WORD *)v100 > 0x200u )
              break;
            v66 = (unsigned int)(v66 + 1);
            if ( (unsigned int)v66 >= (unsigned int)v67 )
              goto LABEL_73;
          }
          Child = -1073741811;
          CmpRecordParseFailure(a7, 1536, -1073741811);
          v19 = v401;
          goto LABEL_728;
        }
LABEL_73:
        v70 = v392;
        *(_QWORD *)(a7 + 224) = v68;
        *(_QWORD *)(a7 + 248) = v68;
        v71 = v69 + ((*(_DWORD *)(v68 + 8) >> 21) & 0x3FF) - (unsigned int)v11;
        if ( (unsigned int)v71 > 0x200 )
        {
          Child = -1073741811;
          CmpRecordParseFailure(a7, 1792, -1073741811);
          v19 = v401;
          goto LABEL_728;
        }
        if ( !v391[2] )
        {
          if ( (*(_DWORD *)a7 & 0x400) != 0 )
            CmpLockRegistryExclusive(v71, v66);
          else
            CmpLockRegistry(v71, v66, v67, v17);
          v69 = *(_WORD *)&v391[7];
          v391[2] = 1;
        }
        v101 = *(_DWORD *)(v412 + 48);
        if ( (v101 & 9) != 0 )
        {
          v102 = -1073741444;
          if ( (v101 & 1) != 0 )
            v102 = -1073740763;
          Child = v102;
          CmpRecordParseFailure(a7, 2048, v102);
          v19 = v401;
          goto LABEL_728;
        }
        if ( (_WORD)v399 == v69 )
        {
          CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v68);
          v19 = v68;
          v401 = v68;
          BugCheckParameter4 = v68;
          if ( v68 == BugCheckParameter2 )
          {
            LOWORD(v68) = v399;
            v392 = 0;
            v391[0] = v70;
          }
          else
          {
            CmpLockHashEntrySharedByKcb(v68);
            LOWORD(v68) = v399;
            v391[0] = 1;
          }
        }
        else
        {
          v103 = CmpPerformCompleteKcbCacheLookup(
                   v68,
                   v11,
                   v69,
                   (__int64)v448,
                   (_DWORD *)a7,
                   (volatile signed __int64 **)&BugCheckParameter4,
                   v391,
                   &v407);
          Child = v103;
          if ( v103 < 0 || v103 == 259 )
          {
            CmpRecordParseFailure(a7, 2432, v103);
            v19 = BugCheckParameter4;
LABEL_726:
            if ( v391[0] )
              CmpUnlockHashEntryByKcb(v19);
            goto LABEL_728;
          }
          v19 = BugCheckParameter4;
          v104 = v407;
          WORD1(v68) = HIWORD(v399);
          LOWORD(v68) = v407 + v399;
          v401 = BugCheckParameter4;
          v399 = v68;
          *(_QWORD *)(a7 + 232) = BugCheckParameter4;
          *(_BYTE *)(a7 + 256) = v104;
          *(_QWORD *)(a7 + 248) = v19;
        }
        v105 = *(_WORD *)&v391[7];
        if ( (_WORD)v68 == *(_WORD *)&v391[7] && (*(_DWORD *)a7 & 1) == 0 )
        {
          v106 = *(_QWORD *)(v19 + 32);
          *(_QWORD *)(*(_QWORD *)(v106 + 1648)
                    + 24
                    * ((unsigned int)(*(_DWORD *)(v106 + 1656) - 1) & ((unsigned int)(101027
                                                                                    * (*(_DWORD *)(v19 + 16) ^ (*(_DWORD *)(v19 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v19 + 16) ^ (*(_DWORD *)(v19 + 16) >> 9))) >> 9)))
                    + 8) = 0LL;
          v107 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v19 + 32) + 1648LL)
                           + 24
                           * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v19 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(v19 + 16) ^ (*(_DWORD *)(v19 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v19 + 16) ^ (*(_DWORD *)(v19 + 16) >> 9))) >> 9))));
          _m_prefetchw(v107);
          v108 = *v107;
          v109 = *v107 - 16;
          if ( (*v107 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v109 = 0LL;
          if ( (v108 & 2) != 0 || (v110 = *v107, v110 != _InterlockedCompareExchange64(v107, v109, v108)) )
            ExfReleasePushLock(v107);
          KeAbPostRelease((ULONG_PTR)v107);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v106 + 4232), 0xFFFFFFFF) == 1 )
            CmpDeleteHive((PVOID)v106);
          v105 = v397[0];
          v19 = BugCheckParameter4;
          LOWORD(v45) = v410.m128i_i16[0];
          *(_DWORD *)&v391[7] = v397[0];
          v401 = BugCheckParameter4;
          v391[0] = 0;
        }
        CmpLockKcbShared(v19);
        if ( (__int16)v68 >= v105 )
        {
          RtlInitUnicodeString(&DestinationString, 0LL);
        }
        else
        {
          v111 = (unsigned int)(__int16)v68;
          if ( (unsigned int)v111 >= 8 )
            v112 = (int *)(*(_QWORD *)&v448[40] + 16 * ((unsigned int)(v111 - 8) + 6LL));
          else
            v112 = &v448[4 * v111 + 8];
          DestinationString.Buffer = (wchar_t *)*((_QWORD *)v112 + 1);
          DestinationString.Length = v45 - 2 * (((__int64)DestinationString.Buffer - v410.m128i_i64[1]) >> 1);
          DestinationString.MaximumLength = DestinationString.Length;
        }
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        if ( !CmpVEEnabled
          || (*(_DWORD *)(a7 + 24) & 0x10) != 0
          || *(_WORD *)(v19 + 66)
          || *(_QWORD *)(v19 + 32) == CmpMasterHive )
        {
          goto LABEL_194;
        }
        v57 = (*(_DWORD *)(v19 + 8) & 0x20000) == 0;
        v434 = 0LL;
        v435 = 0LL;
        if ( v57 )
        {
          LODWORD(v434) = 0;
          *((_QWORD *)&v435 + 1) = 0LL;
          *((_QWORD *)&v434 + 1) = v19;
          v114 = 0;
          while ( 1 )
          {
            if ( v114 < 2u )
              v115 = *((_QWORD *)&v434 + v114 + 1);
            else
              v115 = *(_QWORD *)(*((_QWORD *)&v435 + 1) + 8LL * v114 - 16);
            if ( *(_WORD *)(v115 + 66) && *(_BYTE *)(v115 + 65) == 1 )
            {
LABEL_186:
              v116 = 1;
              goto LABEL_187;
            }
            if ( *(_DWORD *)(v115 + 40) != -1 )
              break;
            if ( (--v114 & 0x8000u) != 0 )
              goto LABEL_186;
          }
          v116 = 0;
LABEL_187:
          if ( !v116
            && (*(_DWORD *)(*(_QWORD *)(v19 + 32) + 4112LL) & 0x10) == 0
            && (*(_DWORD *)(v19 + 184) & 0x2000000) == 0 )
          {
            goto LABEL_194;
          }
        }
        v117 = (int *)(a7 + 16);
        v118 = 0;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        if ( !CmpVEEnabled )
          goto LABEL_194;
        if ( a7 == -16 || (*v117 & 1) == 0 )
        {
          if ( !v390 )
            goto LABEL_194;
          if ( AccessState == (PACCESS_STATE)-32LL )
          {
            CurrentThread = KeGetCurrentThread();
            CurrentThreadProcess = PsGetCurrentThreadProcess();
            SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
            p_SubjectContext = &SubjectContext;
            v19 = BugCheckParameter4;
            v118 = 1;
            *(_DWORD *)&v391[7] = v397[0];
            v401 = BugCheckParameter4;
          }
          else
          {
            p_SubjectContext = &AccessState->SubjectSecurityContext;
          }
          LODWORD(TokenInformation) = 0;
          v123 = 0;
          if ( !p_SubjectContext->ClientToken )
          {
            SeQueryInformationToken(p_SubjectContext->PrimaryToken, TokenVirtualizationEnabled, &TokenInformation);
            if ( (_DWORD)TokenInformation )
              v123 = 1;
          }
          if ( a7 != -16 )
          {
            if ( v123 )
              v124 = *v117 | 5;
            else
              v124 = *v117 | 3;
            *v117 = v124;
          }
          if ( v118 )
            SeReleaseSubjectContext(&SubjectContext);
          if ( !v123 )
            goto LABEL_194;
        }
        else if ( (*v117 & 2) != 0 )
        {
          goto LABEL_194;
        }
        if ( (*(_DWORD *)a7 & 8) == 0 )
        {
          if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess(a7 + 168);
            *(_DWORD *)(a7 + 160) |= 1u;
          }
          if ( (*(_DWORD *)(v19 + 184) & 0x2000000) != 0 )
            v119 = CmpVEExecuteVirtualStoreParseLogic(v19, &DestinationString, a7, *(_QWORD *)v406);
          else
            v119 = CmpVEExecuteRealStoreParseLogic(
                     v19,
                     (unsigned int)&DestinationString,
                     a7,
                     v406[0],
                     (__int64)p_SubjectSecurityContext);
LABEL_195:
          Child = v119;
          CmpUnlockKcb(v19);
          if ( Child != -1073741199 )
          {
            CmpRecordParseFailure(a7, 2496, Child);
            goto LABEL_726;
          }
          v125 = *(_QWORD **)(a7 + 64);
          v126 = *(_QWORD *)(v19 + 32);
          if ( v125 && v125 != (_QWORD *)v126 )
          {
            if ( (*(_DWORD *)(v126 + 4112) & 1) != 0 )
            {
              v127 = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpHiveListHeadLock, 17LL, 0LL) )
                ExfAcquirePushLockSharedEx(
                  (signed __int64 *)&CmpHiveListHeadLock,
                  0LL,
                  v127,
                  (__int64)&CmpHiveListHeadLock);
              if ( v127 )
                *(_BYTE *)(v127 + 18) = 1;
              v128 = *(_QWORD **)(v126 + 4120);
              if ( v128 != (_QWORD *)(v126 + 4120) )
              {
                while ( 1 )
                {
                  v129 = v128;
                  if ( v128 - 515 == v125 )
                    break;
                  v128 = (_QWORD *)*v128;
                  if ( *v129 == v126 + 4120 )
                    goto LABEL_230;
                }
                _m_prefetchw(&CmpHiveListHeadLock);
                v134 = CmpHiveListHeadLock - 16;
                if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                  v134 = 0LL;
                if ( (CmpHiveListHeadLock & 2) != 0
                  || (v135 = CmpHiveListHeadLock,
                      v135 != _InterlockedCompareExchange64(
                                (volatile signed __int64 *)&CmpHiveListHeadLock,
                                v134,
                                CmpHiveListHeadLock)) )
                {
                  ExfReleasePushLock(&CmpHiveListHeadLock);
                }
                KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
                v19 = BugCheckParameter4;
                v136 = v397[0];
                v401 = BugCheckParameter4;
LABEL_250:
                if ( v16 || *(_QWORD *)AccessStatus )
                {
                  if ( *(_QWORD *)(v19 + 32) == CmpMasterHive )
                  {
                    v395 = 1;
                    v16 = 0LL;
                    v137 = 0LL;
                  }
                  else if ( (v16 || *(_QWORD *)AccessStatus) && *(_WORD *)(v19 + 66) )
                  {
                    CmpLogUnsupportedOperation(8LL);
                    if ( !PsIsCurrentThreadInServerSilo() )
                    {
                      Child = -1072103419;
                      CmpRecordParseFailure(a7, 2816, -1072103419);
                      goto LABEL_726;
                    }
                    v16 = 0LL;
                    v137 = 0LL;
                  }
                  else
                  {
                    v137 = *(_QWORD *)AccessStatus;
                  }
                }
                else
                {
                  v137 = 0LL;
                }
                if ( !CmpTransSilentIgnore() && (v16 || v137) )
                {
                  Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(v19 + 32), v16, v137, 0, (__int64)&v405);
                  if ( Child < 0 )
                  {
                    if ( v391[0] )
                    {
                      CmpUnlockHashEntryByKcb(v19);
                      v391[0] = 0;
                    }
                    CmpUnlockRegistry(v140, v139, v141, v142);
                    Child = CmpTransSearchAddTransFromHive(*(_QWORD *)(v19 + 32), v16, v137, 1, (__int64)&v405);
                    CmpLockRegistry(v144, v143, v145, v146);
                    v147 = Child;
                    v391[2] = 1;
                    if ( Child >= 0 )
                      v147 = -1073741267;
                    Child = v147;
                    CmpRecordParseFailure(a7, 3072, v147);
                    goto LABEL_726;
                  }
                  v148 = v405;
                  v138 = 0LL;
                }
                else
                {
                  v148 = v138;
                  v405 = v138;
                }
                v149 = *(__int16 *)(v19 + 66);
                Pool = (struct _PRIVILEGE_SET *)v138;
                if ( v149 >= 2 )
                {
                  Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 8LL * (unsigned int)(v149 - 1), 892751171LL);
                  if ( !Pool )
                  {
                    Child = -1073741670;
                    CmpRecordParseFailure(a7, 3328, -1073741670);
                    goto LABEL_726;
                  }
                  v138 = 0LL;
                }
                v438[1] = Pool;
                WORD1(v437[0]) = -1;
                v151 = (struct _PRIVILEGE_SET *)v138;
                LOWORD(v437[0]) = v149;
                v152 = *(__int16 *)(v19 + 66);
                if ( v152 >= 2 )
                {
                  v151 = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 8LL * (unsigned int)(v152 - 1), 892751171LL);
                  if ( !v151 )
                  {
                    Child = -1073741670;
                    CmpRecordParseFailure(a7, 3584, -1073741670);
                    goto LABEL_726;
                  }
                  v138 = 0LL;
                }
                HIWORD(v439[0]) = -1;
                v153 = v439;
                LOWORD(v439[0]) = v152;
                v154 = v437;
                v440[1] = v151;
                Child = v138;
                WORD1(v437[0]) = *(_WORD *)(v19 + 66);
                v155 = *(__int16 *)(v19 + 66);
                if ( (_WORD)v155 )
                {
                  v156 = *(_QWORD *)(v19 + 192);
                  if ( v156 )
                  {
                    do
                    {
                      CmpSetKcbAtLayerHeight(v437, v155, *(_QWORD *)(v156 + 16));
                      v156 = *(_QWORD *)(v157 + 24);
                      LOWORD(v155) = v155 - 1;
                    }
                    while ( v156 );
                    v138 = 0LL;
                  }
                }
                else
                {
                  v437[v155 + 1] = v19;
                }
                if ( (__int16)v399 >= v136 )
                {
LABEL_366:
                  v190 = *(_QWORD *)(v19 + 72);
                  v191 = (__int64)v153;
                  v413 = (__int64)v153;
                  if ( v190 )
                  {
                    *((_WORD *)v153 + 1) = *(_WORD *)(v190 + 66);
                    v192 = *(__int16 *)(v190 + 66);
                    if ( (_WORD)v192 )
                    {
                      for ( i = *(_QWORD *)(v190 + 192); i; LOWORD(v192) = v192 - 1 )
                      {
                        CmpSetKcbAtLayerHeight(v153, v192, *(_QWORD *)(i + 16));
                        i = *(_QWORD *)(v194 + 24);
                      }
                    }
                    else
                    {
                      *(_QWORD *)&v153[2 * v192 + 2] = v190;
                    }
                  }
                  else
                  {
                    v191 = v138;
                    v413 = v138;
                  }
                  v195 = v412;
                  v196 = *(_QWORD *)(v412 + 8);
                  if ( *(_QWORD *)(v19 + 72) != v196 && v19 != v196 )
                  {
                    CmpLockKcbShared(v196);
                    v391[1] = 1;
                  }
                  if ( v191 )
                  {
                    for ( j = 0; j <= *(__int16 *)(v191 + 2); ++j )
                    {
                      if ( j < 2 )
                        v198 = *(_QWORD *)(v191 + 8LL * j + 8);
                      else
                        v198 = *(_QWORD *)(*(_QWORD *)(v191 + 24) + 8LL * j - 16);
                      CmpLockKcbShared(v198);
                    }
                    v391[4] = 1;
                  }
                  for ( k = 0; k <= *((__int16 *)v154 + 1); ++k )
                  {
                    if ( k < 2 )
                      v200 = v154[k + 1];
                    else
                      v200 = *(_QWORD *)(v154[3] + 8LL * k - 16);
                    CmpLockKcbShared(v200);
                  }
                  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v195, 0LL) )
                  {
                    v201 = -1073741444;
                    if ( (*(_BYTE *)(v195 + 48) & 1) != 0 )
                      v201 = -1073740763;
                    Child = v201;
                    CmpRecordParseFailure(a7, 5888, v201);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)(v19 + 8) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 6016, -1073741772);
                    goto LABEL_427;
                  }
                  v202 = v399 - 1;
                  if ( (*(_DWORD *)(v19 + 184) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 6144, -1073741772);
                    goto LABEL_427;
                  }
                  v203 = v405;
                  if ( !CmRmIsKcbStackVisible((__int64)v154) )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 6400, -1073741772);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)a7 & 2) != 0 )
                  {
                    CmpUnlockKcbStack((__int64)v154);
                    CmpUnlockKcbStack(v191);
                    if ( v391[1] )
                      CmpUnlockKcb(*(_QWORD *)(v195 + 8));
                    v396 = CmpTryToLockHashEntryExclusive(*(_QWORD *)(a7 + 48), 0LL);
                    if ( v391[1] )
                      CmpLockKcbShared(*(_QWORD *)(v195 + 8));
                    CmpLockKcbStackTopExclusiveRestShared(v191);
                    CmpLockKcbStackTopExclusiveRestShared(v154);
                    ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex((__int64)v448, v202);
                    ComponentHashAtIndex = CmpGetComponentHashAtIndex(v448);
                    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v412, 0LL) )
                    {
                      v206 = -1073741444;
                      if ( (*(_BYTE *)(v412 + 48) & 1) != 0 )
                        v206 = -1073740763;
                      Child = v206;
                      CmpRecordParseFailure(a7, 6656, v206);
                      goto LABEL_427;
                    }
                    if ( CmpIsKeyStackDeleted(v191) )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 6912, -1073741772);
                      goto LABEL_427;
                    }
                    if ( !CmpIsKeyStackDeleted((__int64)v154) )
                    {
                      Child = -1073741790;
                      CmpRecordParseFailure(a7, 7168, -1073741790);
                      goto LABEL_427;
                    }
                    v207 = *(_QWORD *)(v19 + 72);
                    if ( *(_QWORD *)(v207 + 32) != CmpMasterHive )
                    {
                      Child = -1073741790;
                      CmpRecordParseFailure(a7, 7424, -1073741790);
                      goto LABEL_427;
                    }
                    if ( (*(_DWORD *)(v207 + 184) & 0x20000) != 0 )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 7680, -1073741772);
                      goto LABEL_427;
                    }
                    if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                    {
                      CmpAttachToRegistryProcess(a7 + 168);
                      *(_DWORD *)(a7 + 160) |= 1u;
                    }
                    v208 = *(unsigned int *)(a7 + 40);
                    v209 = *(_QWORD *)(a7 + 48);
                    if ( (_DWORD)v208 == -1 )
                    {
                      HiveRootCell = CmpCreateHiveRootCell(v209, a7 + 40);
                      Child = HiveRootCell;
                      if ( HiveRootCell < 0 )
                      {
                        CmpRecordParseFailure(a7, 7808, HiveRootCell);
                        goto LABEL_427;
                      }
                    }
                    else
                    {
                      updated = CmpUpdateHiveRootCellFlags(v209, v208);
                      Child = updated;
                      if ( updated < 0 )
                      {
                        CmpRecordParseFailure(a7, 7936, updated);
                        goto LABEL_427;
                      }
                    }
                    *(_WORD *)(v19 + 186) |= 2u;
                    *(_DWORD *)AccessMode = 0;
                    LODWORD(GenericMapping) = ComponentHashAtIndex;
                    Child = CmpCreateKeyControlBlock(
                              *(_QWORD *)(a7 + 48),
                              -1,
                              v19,
                              *(_QWORD *)(a7 + 80),
                              1,
                              ComponentNameAtIndex,
                              GenericMapping,
                              *(_QWORD *)AccessMode,
                              &v419);
                    *(_WORD *)(v19 + 186) &= ~2u;
                    if ( Child < 0 )
                    {
                      CmpRecordParseFailure(a7, 0x2000, Child);
                      goto LABEL_427;
                    }
                    v212 = v419;
                    v401 = v419;
                    v213 = v19;
                    BugCheckParameter4 = v419;
                    CmpDereferenceKeyControlBlockUnsafe(v19);
                    CmpUnlockHashEntryByKcb(v19);
                    v391[0] = 0;
                    started = CmpStartKcbStackForTopLayerKcb((__int64)v443, v212);
                    Child = started;
                    if ( started < 0 )
                    {
                      CmpRecordParseFailure(a7, 8448, started);
LABEL_426:
                      v19 = v401;
                      goto LABEL_427;
                    }
                    *(_WORD *)(v19 + 186) |= 2u;
                    CmpLockKcbStackTopExclusiveRestShared(v443);
                    *(_WORD *)(v19 + 186) &= ~2u;
                    v403 = 1;
                    KeyBody = CmpCreateKeyBody(v212, 3, (__int64)v443, (__int64)&Object, (__int64)&v391[3]);
                    Child = KeyBody;
                    if ( KeyBody < 0 )
                    {
                      CmpRecordParseFailure(a7, 8576, KeyBody);
                      CmpUnlockKcbStack((__int64)v443);
                      goto LABEL_426;
                    }
                    v218 = (signed __int64 *)(*(_QWORD *)(v19 + 32) + 72LL);
                    v219 = KeAbPreAcquire((__int64)v218, 0LL);
                    if ( _InterlockedCompareExchange64(v218, 17LL, 0LL) )
                      ExfAcquirePushLockSharedEx(v218, 0LL, v219, (__int64)v218);
                    if ( v219 )
                      *(_BYTE *)(v219 + 18) = 1;
                    v220 = v419;
                    HvLockHiveFlusherExclusive(*(_QWORD *)(v419 + 32));
                    v221 = *(_QWORD *)(v220 + 32);
                    v222 = *(_DWORD *)(v221 + 104);
                    v223 = HvpMarkCellDirty(v221, *(unsigned int *)(a7 + 40));
                    Child = v223;
                    if ( v223 < 0 )
                    {
                      CmpRecordParseFailure(a7, 8704, v223);
LABEL_438:
                      HvUnlockHiveFlusherExclusive(*(_QWORD *)(v220 + 32));
                      v224 = *(_QWORD *)(v213 + 32);
                      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v224 + 72), 0LL, 17LL) != 17 )
                        ExfReleasePushLockShared((signed __int64 *)(v224 + 72));
                      KeAbPostRelease(v224 + 72);
                      v401 = BugCheckParameter4;
                      CmpUnlockKcbStack((__int64)v443);
                      goto LABEL_426;
                    }
                    v225 = AccessState;
                    Child = CmpCreateChild(
                              v413,
                              (__int64)v154,
                              (__int64)AccessState,
                              ComponentNameAtIndex,
                              a7,
                              10,
                              0,
                              1,
                              v405);
                    if ( Child < 0 )
                      goto LABEL_438;
                    LOBYTE(v226) = 1;
                    *(_DWORD *)(v220 + 40) = *(_DWORD *)(a7 + 40);
                    *(_DWORD *)(CmpGetKeyNodeForKcb(v220, v417, v226) + 16) = *(_DWORD *)(v213 + 40);
                    ++*(_QWORD *)(v220 + 304);
                    CmpRebuildKcbCacheFromNode(v220);
                    v227 = *(_QWORD *)(v220 + 32);
                    if ( (*(_BYTE *)(v227 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v227, v417);
                    else
                      HvpReleaseCellPaged(v227, v417);
                    if ( !v222 )
                      HvResetDirtyData(*(_QWORD *)(v220 + 32));
                    HvUnlockHiveFlusherExclusive(*(_QWORD *)(v220 + 32));
                    v228 = *(_QWORD *)(v213 + 32);
                    v229 = 0;
                    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v228 + 72), 0LL, 17LL) != 17 )
                      ExfReleasePushLockShared((signed __int64 *)(v228 + 72));
                    KeAbPostRelease(v228 + 72);
                    v230 = (volatile signed __int64 *)v419;
                    *(_WORD *)(v213 + 8) |= 8u;
                    CmpReferenceKeyControlBlockUnsafe(v230);
                    *(_QWORD *)(v213 + 104) = v230;
                    CmpUnlockHashEntry(*(PVOID *)(a7 + 48));
                    v231 = v390;
                    v401 = BugCheckParameter4;
                    v396 = 0;
                    *(_DWORD *)(a7 + 32) = 1;
LABEL_605:
                    if ( *(_DWORD *)(a7 + 32) == 1 )
                    {
                      *((_WORD *)Object + 2) = *(_WORD *)(*((_QWORD *)Object + 1) + 66LL);
                      goto LABEL_706;
                    }
                    *(_DWORD *)&v391[7] = *(_DWORD *)(a7 + 24) & 4;
                    v282 = *(_DWORD *)&v391[7];
                    LOBYTE(v394) = 0;
                    SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStackEx();
                    if ( v282 )
                    {
                      LOBYTE(v284) = 1;
                      if ( (int)CmpSetAccessStateForBackupRestore(v225, v231, SecurityDescriptorForKcbStack, v284) < 0 )
                      {
                        v285 = -1073741790;
                        LOBYTE(v394) = 0;
                        Child = -1073741790;
LABEL_704:
                        CmpRecordParseFailure(v9, 15584, v285);
LABEL_709:
                        if ( v403 )
                          CmpUnlockKcbStack((__int64)v443);
                        goto LABEL_426;
                      }
                    }
                    OriginalDesiredAccess = v225->OriginalDesiredAccess;
                    v285 = -1073741790;
                    v441 = 0LL;
                    v287 = *((_QWORD *)Object + 1);
                    *(_OWORD *)Privileges = 0LL;
                    WORD1(v441) = -1;
                    v288 = *(_QWORD *)(v287 + 32);
                    if ( (*(_DWORD *)(v288 + 160) & 0x100000) != 0 && (OriginalDesiredAccess & 0xD0026) != 0 )
                    {
                      if ( (OriginalDesiredAccess & 0xD0002) != 0 || (*(_DWORD *)(v288 + 4112) & 0x2000) == 0 )
                      {
                        v229 = -1073741790;
                      }
                      else if ( *(_BYTE *)(v287 + 65) )
                      {
                        v229 = -1073741790;
                      }
                      else
                      {
                        v229 = CmpStartKcbStackForTopLayerKcb((__int64)&v441, v287);
                        if ( v229 >= 0 )
                        {
                          v289 = *(_WORD *)(v287 + 66) - 1;
                          if ( v289 >= 0 )
                          {
                            while ( 1 )
                            {
                              KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v441, v289);
                              WORD1(v441) = v289;
                              v291 = KcbAtLayerHeight;
                              if ( CmpIsKeyStackDeleted((__int64)&v441) )
                              {
LABEL_624:
                                v229 = -1073741790;
                                goto LABEL_626;
                              }
                              if ( (*(_DWORD *)(*(_QWORD *)(v291 + 32) + 160LL) & 0x100000) == 0 )
                                break;
                              if ( (*(_DWORD *)(*(_QWORD *)(v287 + 32) + 4112LL) & 0x2000) == 0 || *(_BYTE *)(v287 + 65) )
                                goto LABEL_624;
                              if ( --v289 < 0 )
                                goto LABEL_626;
                            }
                            v229 = 0;
LABEL_626:
                            v225 = AccessState;
                          }
                          v282 = *(_DWORD *)&v391[7];
                        }
                      }
                    }
                    if ( Privileges[1] )
                      CmSiFreeMemory(Privileges[1]);
                    if ( v229 < 0 )
                    {
                      Child = -1073741790;
                      LOBYTE(v394) = 0;
                      goto LABEL_704;
                    }
                    v292 = v225->OriginalDesiredAccess;
                    if ( (v292 & *(_DWORD *)(a7 + 96)) != v292 )
                    {
                      Child = -1073741790;
                      LOBYTE(v394) = 0;
                      goto LABEL_704;
                    }
                    if ( v282 && !v225->RemainingDesiredAccess )
                    {
                      LOBYTE(v394) = 0;
LABEL_706:
                      *v422 = Object;
                      Object = 0LL;
                      if ( !*(_DWORD *)(v9 + 32) )
                        *(_DWORD *)(v9 + 32) = 2;
                      Child = v391[3] != 0 ? 0x40000016 : 0;
                      goto LABEL_709;
                    }
                    if ( !v292 && (*(_DWORD *)a7 & 0x1000) != 0 )
                    {
                      LOBYTE(v394) = 0;
                      goto LABEL_706;
                    }
                    v406[0] = 0;
                    v429 = 0LL;
                    WORD1(v429) = -1;
                    v420 = 0LL;
                    *(_OWORD *)v430 = 0LL;
                    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(Object, v405) )
                    {
                      v294 = AccessState;
                      v293 = 3221225852LL;
                      AccessStatus[0] = -1073741444;
                      v295 = 0;
                      goto LABEL_684;
                    }
                    v296 = 0LL;
                    v297 = *((_QWORD *)Object + 1);
                    v298 = *(__int16 *)(v297 + 66);
                    if ( v298 >= 2 )
                    {
                      v296 = (struct _PRIVILEGE_SET *)CmpAllocatePool(
                                                        256LL,
                                                        8LL * (unsigned int)(v298 - 1),
                                                        892751171LL);
                      if ( !v296 )
                      {
                        v295 = 0;
                        v294 = AccessState;
                        AccessStatus[0] = -1073741670;
LABEL_683:
                        v282 = *(_DWORD *)&v391[7];
LABEL_684:
                        if ( v430[1] )
                          CmSiFreeMemory(v430[1]);
                        if ( v295 )
                        {
                          LOBYTE(v394) = 0;
                          goto LABEL_706;
                        }
                        if ( v282 )
                        {
                          v325 = v401;
                        }
                        else
                        {
                          if ( (int)CmpVEPerformOpenAccessCheck(Object, v9, AccessStatus[0]) >= 0 )
                          {
                            LOBYTE(v394) = 0;
                            goto LABEL_706;
                          }
                          if ( KeGetCurrentThread()->PreviousMode == 1 )
                          {
                            v323 = PsGetCurrentThreadProcess();
                            if ( !(unsigned __int8)CmpDoesProcessBelongToServiceSession(v323)
                              && (v294->RemainingDesiredAccess & 0xD0026) != 0 )
                            {
                              v324 = CmpCheckKeyOwnerForPca((__int64)v154, v405);
                              v325 = BugCheckParameter4;
                              v326 = (unsigned __int8)v394;
                              if ( v324 )
                                v326 = 1;
                              v401 = BugCheckParameter4;
                              v394 = v326;
                              goto LABEL_700;
                            }
                          }
                          v325 = BugCheckParameter4;
                          v401 = BugCheckParameter4;
                        }
                        v326 = v394;
LABEL_700:
                        Child = -1073741790;
                        if ( (_BYTE)v326 )
                        {
                          if ( (*(_DWORD *)(v9 + 160) & 1) == 0 )
                          {
                            CmpAttachToRegistryProcess(v9 + 168);
                            *(_DWORD *)(v9 + 160) |= 1u;
                          }
                          v423 = 0LL;
                          CmpConstructNameWithStatus(v325, &v423, v293);
                          v285 = Child;
                          v421 = (PACCESS_STATE)v423;
                          v394 = v326;
                        }
                        goto LABEL_704;
                      }
                    }
                    LOWORD(v429) = v298;
                    v430[1] = v296;
                    v299 = *(__int16 *)(v297 + 66);
                    WORD1(v429) = v299;
                    if ( (_WORD)v299 )
                    {
                      v300 = *(_QWORD *)(v297 + 192);
                      if ( !v300 )
                      {
LABEL_650:
                        v302 = WORD1(v429);
                        AccessStatus[0] = 0;
                        v303 = 0LL;
                        v411 = 0LL;
                        if ( (SWORD1(v429) & 0x8000u) == 0 )
                        {
                          v304 = v405;
                          do
                          {
                            if ( v302 < 2u )
                              v305 = v430[v302 - 1];
                            else
                              v305 = (PPRIVILEGE_SET)*((_QWORD *)v296 + v302 - 2);
                            if ( HIWORD(v305[3].Control) && BYTE1(v305[3].Control) == 1 )
                              break;
                            if ( v305[2].PrivilegeCount != -1 )
                            {
                              if ( (unsigned __int8)CmRmIsKCBVisible(v305, v304) )
                              {
                                v411 = (ULONG_PTR)v305;
                                if ( HIWORD(v305[3].Control) )
                                {
                                  if ( BYTE1(v305[3].Control) )
                                    break;
                                }
                              }
                            }
                            --v302;
                          }
                          while ( (v302 & 0x8000u) == 0 );
                          v9 = v423;
                          v285 = -1073741790;
                          v303 = v411;
                        }
                        v306 = *(_QWORD *)(v303 + 88);
                        if ( v405 )
                        {
                          v307 = v303 + 208;
                          v433 = 0LL;
                          PrevElement = CmListGetPrevElement(v303 + 208, &v433, v293, v405);
                          if ( PrevElement )
                          {
                            while ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(PrevElement + 56), v309)
                                 || *(_DWORD *)(PrevElement + 68) != 9 )
                            {
                              PrevElement = CmListGetPrevElement(v307, &v433, v310, v311);
                              if ( !PrevElement )
                                goto LABEL_670;
                              v309 = v405;
                            }
                            v306 = *(_QWORD *)(PrevElement + 88);
                          }
                        }
LABEL_670:
                        v312 = KeGetCurrentThread();
                        v313 = AccessState;
                        v314 = (void *)(v306 + 32);
                        --v312->KernelApcDisable;
                        ExAcquireResourceSharedLite(*((PERESOURCE *)v313->SubjectSecurityContext.PrimaryToken + 6), 1u);
                        if ( v313->SubjectSecurityContext.ClientToken )
                        {
                          v315 = KeGetCurrentThread();
                          --v315->KernelApcDisable;
                          ExAcquireResourceSharedLite(*((PERESOURCE *)v313->SubjectSecurityContext.ClientToken + 6), 1u);
                        }
                        RemainingDesiredAccess = v313->RemainingDesiredAccess;
                        v406[0] = 0;
                        v420 = 0LL;
                        v295 = SeAccessCheck(
                                 v314,
                                 &v313->SubjectSecurityContext,
                                 1u,
                                 RemainingDesiredAccess,
                                 v313->PreviouslyGrantedAccess,
                                 &v420,
                                 (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                                 v390,
                                 v406,
                                 AccessStatus);
                        if ( v420 )
                        {
                          SeAppendPrivileges(v313, v420);
                          CmSiFreeMemory(v420);
                        }
                        v317 = v313;
                        if ( v295 )
                        {
                          v318 = v406[0];
                          v313->PreviouslyGrantedAccess |= v406[0];
                          v313->RemainingDesiredAccess &= ~(v318 | 0x2000000);
                        }
                        v319 = Object;
                        v320 = v405;
                        *((_WORD *)Object + 24) |= 2u;
                        v321 = (UNICODE_STRING *)(CmKeyObjectType + 2);
                        if ( v320 )
                        {
                          SeOpenObjectAuditAlarmWithTransaction(
                            v321,
                            v319,
                            0LL,
                            v314,
                            v317,
                            0,
                            v295,
                            v390,
                            (GUID *)(v320 + 88),
                            &v317->GenerateOnClose);
                        }
                        else if ( v390 )
                        {
                          SeOpenObjectAuditAlarmWithTransaction(
                            v321,
                            Object,
                            0LL,
                            v314,
                            v317,
                            0,
                            v295,
                            v390,
                            0LL,
                            &v317->GenerateOnClose);
                        }
                        v294 = AccessState;
                        v319[24] &= ~2u;
                        ExReleaseResourceLite(*((PERESOURCE *)v294->SubjectSecurityContext.PrimaryToken + 6));
                        KeLeaveCriticalRegion();
                        ClientToken = (PERESOURCE *)v294->SubjectSecurityContext.ClientToken;
                        if ( ClientToken )
                        {
                          ExReleaseResourceLite(ClientToken[6]);
                          KeLeaveCriticalRegion();
                        }
                        v401 = BugCheckParameter4;
                        goto LABEL_683;
                      }
                      do
                      {
                        CmpSetKcbAtLayerHeight(&v429, v299, *(_QWORD *)(v300 + 16));
                        v300 = *(_QWORD *)(v301 + 24);
                        LOWORD(v299) = v299 - 1;
                      }
                      while ( v300 );
                    }
                    else
                    {
                      v430[v299 - 1] = (PPRIVILEGE_SET)v297;
                    }
                    v296 = v430[1];
                    goto LABEL_650;
                  }
                  if ( (*(_DWORD *)a7 & 0x20) != 0 )
                  {
                    CmpUnlockKcbStack((__int64)v154);
                    CmpUnlockKcbStack(v191);
                    CmpLockKcbStackTopExclusiveRestShared(v191);
                    CmpLockKcbStackTopExclusiveRestShared(v154);
                    if ( CmpIsKeyStackDeleted(v191) )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 8960, -1073741772);
                      goto LABEL_427;
                    }
                    if ( (*(_DWORD *)(*(_QWORD *)(v19 + 72) + 184LL) & 0x20000) != 0 )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 9216, -1073741772);
                      goto LABEL_427;
                    }
                    v232 = (unsigned __int16 *)CmpGetComponentNameAtIndex((__int64)v448, v202);
                    CmpCleanUpKcbCachedSymlink(v19);
                    *(_WORD *)(v19 + 186) |= 0x40u;
                    *(_DWORD *)(v19 + 100) = -1;
                    *(_DWORD *)(v19 + 96) = *(_DWORD *)(a7 + 56);
                    Child = CmpCreateKeyBody(v19, 3, (__int64)v154, (__int64)&Object, (__int64)&v391[3]);
                    if ( Child >= 0 )
                    {
                      v229 = 0;
                      if ( CmpIsKeyStackDeleted((__int64)v154) )
                      {
                        Child = CmpCreateChild(v191, (__int64)v154, (__int64)AccessState, v232, a7, 64, 0, 0, v203);
                        if ( Child < 0 )
                          goto LABEL_427;
                        *(_DWORD *)(a7 + 32) = 1;
                      }
                      v231 = v390;
LABEL_604:
                      v225 = AccessState;
                      goto LABEL_605;
                    }
LABEL_427:
                    for ( m = 0; m <= *((__int16 *)v154 + 1); ++m )
                    {
                      if ( m < 2 )
                        v216 = v154[m + 1];
                      else
                        v216 = *(_QWORD *)(v154[3] + 8LL * m - 16);
                      CmpUnlockKcb(v216);
                    }
                    v191 = v413;
LABEL_715:
                    if ( v391[4] )
                    {
                      for ( n = 0; n <= *(__int16 *)(v191 + 2); ++n )
                      {
                        if ( n < 2 )
                          v328 = *(_QWORD *)(v191 + 8LL * n + 8);
                        else
                          v328 = *(_QWORD *)(*(_QWORD *)(v191 + 24) + 8LL * n - 16);
                        CmpUnlockKcb(v328);
                      }
                    }
                    goto LABEL_721;
                  }
                  v233 = *((_WORD *)v154 + 1);
                  v432 = 0LL;
                  while ( (v233 & 0x8000u) == 0 )
                  {
                    v234 = v233 < 2u ? v154[v233 + 1] : *(_QWORD *)(v154[3] + 8LL * v233 - 16);
                    if ( *(_WORD *)(v234 + 66) && *(_BYTE *)(v234 + 65) == 1 )
                      break;
                    if ( *(_DWORD *)(v234 + 40) != -1 )
                    {
                      if ( v203 )
                      {
                        NextElement = CmListGetNextElement(v154[1] + 208, &v432, 32LL);
                        if ( NextElement )
                        {
                          while ( 1 )
                          {
                            v237 = *(_DWORD *)(NextElement + 68);
                            if ( v237 == 2 || v237 == 11 )
                              break;
                            NextElement = CmListGetNextElement(v236 + 208, &v432, 32LL);
                            if ( !NextElement )
                              goto LABEL_477;
                          }
                          if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), v203) )
                            break;
                        }
                      }
LABEL_477:
                      v238 = *((_WORD *)v154 + 1);
                      if ( (v238 & 0x8000u) == 0 )
                      {
                        while ( 1 )
                        {
                          v239 = v238 < 2u ? v154[v238 + 1] : *(_QWORD *)(v154[3] + 8LL * v238 - 16);
                          if ( *(_DWORD *)(v239 + 40) != -1 )
                            break;
                          if ( (--v238 & 0x8000u) != 0 )
                            goto LABEL_483;
                        }
                        if ( (*(_DWORD *)(v239 + 184) & 0x100000) != 0 && !_bittest((const signed __int32 *)a7, 9u) )
                        {
                          if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                          {
                            Child = -1073741771;
                            CmpRecordParseFailure(a7, 14080, -1073741771);
                            goto LABEL_427;
                          }
                          if ( v391[4] )
                          {
                            CmpUnlockKcbStack(v191);
                            v391[4] = 0;
                          }
                          if ( v391[1] )
                          {
                            CmpUnlockKcb(*(_QWORD *)(v195 + 8));
                            v391[1] = 0;
                          }
                          if ( v391[0] )
                          {
                            CmpUnlockHashEntryByKcb(v19);
                            v391[0] = 0;
                          }
                          SymbolicLinkTarget = CmpGetSymbolicLinkTarget(
                                                 (__int64)v154,
                                                 (__int64)v448,
                                                 0,
                                                 0,
                                                 v203,
                                                 a7,
                                                 (__int64)&v425,
                                                 *(__int64 *)v406,
                                                 (ULONG_PTR *)(a7 + 88),
                                                 &v414);
                          Child = SymbolicLinkTarget;
                          if ( SymbolicLinkTarget >= 0 )
                          {
                            *(_DWORD *)a7 &= ~8u;
                            if ( !*(_QWORD *)(a7 + 64) )
                            {
                              v241 = *(_QWORD *)(v414 + 32);
                              if ( (*(_DWORD *)(v241 + 4112) & 1) != 0 )
                                *(_QWORD *)(a7 + 64) = v241;
                            }
                            Child = 260;
                            CmpRecordParseFailure(a7, 14592, 260);
                          }
                          else
                          {
                            CmpRecordParseFailure(a7, 14336, SymbolicLinkTarget);
                          }
                          goto LABEL_715;
                        }
                      }
LABEL_483:
                      if ( v395 )
                      {
                        Child = -1073741811;
                        CmpRecordParseFailure(a7, 14848, -1073741811);
                        goto LABEL_427;
                      }
                      if ( (*(_DWORD *)(v19 + 184) & 0x20000) != 0 )
                      {
                        Child = -1073741772;
                        CmpRecordParseFailure(a7, 15104, -1073741772);
                        goto LABEL_427;
                      }
                      if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                      {
                        Child = -1073741771;
                        CmpRecordParseFailure(a7, 15360, -1073741771);
                        goto LABEL_427;
                      }
                      v242 = *(__m128i **)v406;
                      v229 = 0;
                      v243 = CmpDoWritethroughReparse(v19, (__int64)v154, v191, 0, 0LL, a7, *(UNICODE_STRING **)v406);
                      Child = v243;
                      if ( v243 != -1073741199 )
                      {
                        CmpRecordParseFailure(a7, 15424, v243);
                        goto LABEL_427;
                      }
                      v231 = v390;
                      v244 = CmpVEExecuteOpenLogic(
                               v19,
                               (_DWORD *)a7,
                               0,
                               v242,
                               v390,
                               (__int64)&AccessState->SubjectSecurityContext);
                      Child = v244;
                      if ( v244 != -1073741199 )
                      {
                        CmpRecordParseFailure(a7, 15488, v244);
                        goto LABEL_427;
                      }
                      v245 = CmpCreateKeyBody(v19, 2, (__int64)v154, (__int64)&Object, (__int64)&v391[3]);
                      Child = v245;
                      if ( v245 < 0 )
                      {
                        if ( v245 == -1073741444 )
                          v245 = -1073741772;
                        Child = v245;
                        CmpRecordParseFailure(a7, 15552, v245);
                        goto LABEL_427;
                      }
                      goto LABEL_604;
                    }
                    --v233;
                  }
                  if ( v395 )
                  {
                    Child = -1073741811;
                    CmpRecordParseFailure(a7, 9728, -1073741811);
                    goto LABEL_427;
                  }
                  if ( CmpIsKeyStackDeleted(v191) || !CmRmIsKcbStackVisible(v191) )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 9984, -1073741772);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 72) + 184LL) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 10240, -1073741772);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)a7 & 1) == 0 )
                  {
                    if ( CmpLoadingSystemHivesActive
                      && (v19 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                      && *(_QWORD *)(BugCheckParameter4 + 32) == CmpMasterHive
                      && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                      && (v246 = CmpGetComponentNameAtIndex((__int64)v448, v202),
                          (unsigned __int8)CmpWaitForHiveMount(v246, v247, v248, a7 + 136)) )
                    {
                      *(_DWORD *)a7 |= 0x100u;
                      Child = 259;
                      CmpRecordParseFailure(a7, 10496, 259);
                    }
                    else
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 10752, -1073741772);
                    }
                    goto LABEL_427;
                  }
                  if ( *(_QWORD *)(v19 + 32) == CmpMasterHive && CmpNoMasterCreates )
                  {
                    v19 = BugCheckParameter4;
                    if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
                    {
                      if ( CmpLoadingSystemHivesActive
                        && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                        && (v249 = CmpGetComponentNameAtIndex((__int64)v448, v202),
                            (unsigned __int8)CmpWaitForHiveMount(v249, v250, v251, a7 + 136)) )
                      {
                        *(_DWORD *)a7 |= 0x100u;
                        Child = 259;
                        CmpRecordParseFailure(a7, 11008, 259);
                      }
                      else
                      {
                        Child = -1073741811;
                        CmpRecordParseFailure(a7, 11264, -1073741811);
                      }
                      goto LABEL_427;
                    }
                    v203 = v405;
                    v401 = BugCheckParameter4;
                  }
                  v252 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex((__int64)v448, v202);
                  v253 = *(UNICODE_STRING **)v406;
                  p_Length = &v252->Length;
                  v255 = CmpDoWritethroughReparse(v19, (__int64)v154, v191, 1, v252, a7, *(UNICODE_STRING **)v406);
                  Child = v255;
                  if ( v255 != -1073741199 )
                  {
                    CmpRecordParseFailure(a7, 11392, v255);
                    goto LABEL_427;
                  }
                  v256 = CmpCreateKeyBody(v19, 0, (__int64)v154, (__int64)&Object, (__int64)&v391[3]);
                  Child = v256;
                  if ( v256 < 0 )
                  {
                    CmpRecordParseFailure(a7, 11456, v256);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)(a7 + 160) & 1) == 0 )
                  {
                    CmpAttachToRegistryProcess(a7 + 168);
                    *(_DWORD *)(a7 + 160) |= 1u;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)(v19 + 72) + 40LL) == -1 )
                  {
                    v257 = *(_DWORD *)(a7 + 24) >> 2;
                    LOBYTE(v257) = (*(_DWORD *)(a7 + 24) & 4) != 0;
                    if ( !CmpCheckCreateAccessOnKcbStack(
                            v257,
                            v191,
                            a7,
                            (__int64)AccessState,
                            v390,
                            16 * (*(_DWORD *)(a7 + 24) & 2),
                            v257,
                            v203,
                            (__int64)Object,
                            1,
                            &Child) )
                    {
                      v19 = BugCheckParameter4;
                      if ( KeGetCurrentThread()->PreviousMode == 1 )
                      {
                        v258 = PsGetCurrentThreadProcess();
                        ProcessServerSilo = PsGetProcessServerSilo((__int64)v258);
                        ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
                        if ( (unsigned int)MmGetSessionIdEx((__int64)v258) != ServerSiloServiceSessionId )
                        {
                          if ( CmpCheckKeyOwnerForPca(v413, v405) )
                          {
                            v262 = *(_QWORD *)(v19 + 72);
                            LOBYTE(v394) = 1;
                            AccessState = 0LL;
                            CmpConstructNameWithStatus(v262, &AccessState, v261);
                            v421 = AccessState;
                          }
                        }
                      }
                      CmpRecordParseFailure(a7, 11520, Child);
                      goto LABEL_427;
                    }
                    CmpUnlockKcbStack((__int64)v154);
                    CmpUnlockKcbStack(v191);
                    if ( v391[1] )
                    {
                      CmpUnlockKcb(*(_QWORD *)(v412 + 8));
                      v391[1] = 0;
                    }
                    LOBYTE(v263) = 1;
                    v264 = CmpPromoteKey(v191, 0LL, v263);
                    Child = v264;
                    if ( v264 < 0 )
                    {
                      if ( v264 == -1073741444 )
                        v264 = -1073741772;
                      Child = v264;
                      CmpRecordParseFailure(a7, 11776, v264);
                      goto LABEL_721;
                    }
                  }
                  else
                  {
                    CmpUnlockKcbStack((__int64)v154);
                    CmpUnlockKcbStack(v191);
                    CmpLockKcbStackTopExclusiveRestShared(v191);
                  }
                  v391[4] = 1;
                  CmpLockKcbStackTopExclusiveRestShared(v154);
                  if ( !CmRmIsKcbStackVisible((__int64)v154) )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 12032, -1073741772);
                    goto LABEL_427;
                  }
                  if ( (*(_DWORD *)(v19 + 8) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 12160, -1073741772);
                    goto LABEL_427;
                  }
                  if ( CmpIsKeyStackDeleted((__int64)v154) )
                  {
                    if ( CmpIsKeyStackDeleted(v191) || !CmRmIsKcbStackVisible(v191) )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 12288, -1073741772);
                      goto LABEL_427;
                    }
                    v265 = *(_QWORD *)(v19 + 72);
                    if ( (*(_DWORD *)(v265 + 184) & 0x20000) != 0 )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 12544, -1073741772);
                      goto LABEL_427;
                    }
                    GrantedAccess = (PACCESS_MASK)&v253->Length;
                    v266 = AccessState;
                    Logic = CmpVEExecuteCreateLogic(
                              v265,
                              v19,
                              (_DWORD)p_Length,
                              (_DWORD)AccessState,
                              v390,
                              16 * (*(_DWORD *)(a7 + 24) & 2u),
                              v203,
                              a7,
                              (__int64)GrantedAccess);
                    Child = Logic;
                    if ( Logic == -1073741739 )
                    {
                      *(_DWORD *)a7 |= 0x400u;
                      Child = -1073741267;
                      CmpRecordParseFailure(a7, 12672, -1073741267);
                      goto LABEL_427;
                    }
                    if ( Logic != -1073741199 )
                    {
                      CmpRecordParseFailure(a7, 12736, Logic);
                      goto LABEL_427;
                    }
                    v268 = *(_DWORD *)(a7 + 24) >> 2;
                    LOBYTE(v268) = (*(_DWORD *)(a7 + 24) & 4) != 0;
                    if ( CmpCheckCreateAccessOnKcbStack(
                           v268,
                           v191,
                           a7,
                           (__int64)v266,
                           v390,
                           16 * (*(_DWORD *)(a7 + 24) & 2),
                           v268,
                           v203,
                           (__int64)Object,
                           0,
                           &Child) )
                    {
                      LOBYTE(v269) = 1;
                      v275 = CmpEnlistKeyBody((_DWORD)Object, v19, v203, v269, (__int64)v154);
                      Child = v275;
                      if ( v275 < 0 )
                      {
                        CmpRecordParseFailure(a7, 12928, v275);
                        goto LABEL_427;
                      }
                      v276 = CmpCreateChild(
                               v191,
                               (__int64)v154,
                               (__int64)v266,
                               p_Length,
                               a7,
                               8 * (*(_WORD *)(a7 + 24) & 2u),
                               0,
                               0,
                               v203);
                      Child = v276;
                      if ( v276 < 0 )
                      {
                        CmpRecordParseFailure(a7, 12992, v276);
                        goto LABEL_427;
                      }
                      v231 = v390;
                      v225 = v266;
                      v229 = 0;
                      *(_DWORD *)(a7 + 32) = 1;
                      goto LABEL_605;
                    }
                    v19 = BugCheckParameter4;
                    if ( KeGetCurrentThread()->PreviousMode == 1 )
                    {
                      v270 = PsGetCurrentThreadProcess();
                      v271 = PsGetProcessServerSilo((__int64)v270);
                      v272 = PsGetServerSiloServiceSessionId(v271);
                      if ( (unsigned int)MmGetSessionIdEx((__int64)v270) != v272 )
                      {
                        if ( CmpCheckKeyOwnerForPca(v413, v405) )
                        {
                          v274 = *(_QWORD *)(v19 + 72);
                          LOBYTE(v394) = 1;
                          v422 = 0LL;
                          CmpConstructNameWithStatus(v274, &v422, v273);
                          v421 = (PACCESS_STATE)v422;
                        }
                      }
                    }
                    CmpRecordParseFailure(a7, 12800, Child);
                    goto LABEL_427;
                  }
                  if ( !CmpIsKeyStackSymlink((__int64)v154) || _bittest((const signed __int32 *)a7, 9u) )
                  {
                    if ( (*(_DWORD *)(v19 + 184) & 0x20000) != 0 )
                    {
                      Child = -1073741772;
                      CmpRecordParseFailure(a7, 13568, -1073741772);
                      goto LABEL_427;
                    }
                    if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                    {
                      Child = -1073741771;
                      CmpRecordParseFailure(a7, 13824, -1073741771);
                      goto LABEL_427;
                    }
                    v279 = CmpDoWritethroughReparse(v19, (__int64)v154, v191, 0, 0LL, a7, v253);
                    Child = v279;
                    if ( v279 != -1073741199 )
                    {
                      CmpRecordParseFailure(a7, 13888, v279);
                      goto LABEL_427;
                    }
                    v231 = v390;
                    v280 = CmpVEExecuteOpenLogic(
                             v19,
                             (_DWORD *)a7,
                             1,
                             (__m128i *)v253,
                             v390,
                             (__int64)&AccessState->SubjectSecurityContext);
                    Child = v280;
                    if ( v280 != -1073741199 )
                    {
                      CmpRecordParseFailure(a7, 13952, v280);
                      goto LABEL_427;
                    }
                    v281 = CmpCreateKeyBody(v19, 3, (__int64)v154, (__int64)&Object, (__int64)&v391[3]);
                    Child = v281;
                    if ( v281 < 0 )
                    {
                      CmpRecordParseFailure(a7, 14016, v281);
                      goto LABEL_427;
                    }
                    v229 = 0;
                    goto LABEL_604;
                  }
                  if ( (*(_DWORD *)(a7 + 24) & 2) != 0 )
                  {
                    Child = -1073741771;
                    CmpRecordParseFailure(a7, 13056, -1073741771);
                    goto LABEL_427;
                  }
                  CmpUnlockKcbStack(v191);
                  if ( v391[1] )
                  {
                    CmpUnlockKcb(*(_QWORD *)(v412 + 8));
                    v391[1] = 0;
                  }
                  if ( v391[0] )
                  {
                    CmpUnlockHashEntryByKcb(v19);
                    v391[0] = 0;
                  }
                  v277 = CmpGetSymbolicLinkTarget(
                           (__int64)v154,
                           (__int64)v448,
                           0,
                           0,
                           v203,
                           a7,
                           (__int64)&v425,
                           (__int64)v253,
                           (ULONG_PTR *)(a7 + 88),
                           &v414);
                  Child = v277;
                  if ( v277 >= 0 )
                  {
                    *(_DWORD *)a7 &= ~8u;
                    if ( !*(_QWORD *)(a7 + 64) )
                    {
                      v278 = *(_QWORD *)(v414 + 32);
                      if ( (*(_DWORD *)(v278 + 4112) & 1) != 0 )
                        *(_QWORD *)(a7 + 64) = v278;
                    }
                    Child = 260;
                    CmpRecordParseFailure(a7, 13440, 260);
                  }
                  else
                  {
                    CmpRecordParseFailure(a7, 13312, v277);
                  }
LABEL_721:
                  if ( v391[1] )
                    CmpUnlockKcb(*(_QWORD *)(v412 + 8));
                  if ( v396 )
                    CmpUnlockHashEntry(*(PVOID *)(v9 + 48));
                  goto LABEL_726;
                }
                *(_DWORD *)&v391[7] = v136;
                while ( 2 )
                {
                  v158 = *((_WORD *)v154 + 1);
                  v159 = v138;
                  if ( (__int16)v138 <= v158 )
                  {
                    do
                    {
                      if ( v159 < 2 )
                        v160 = v154[v159 + 1];
                      else
                        v160 = *(_QWORD *)(v154[3] + 8LL * v159 - 16);
                      CmpLockKcbShared(v160);
                      v158 = *((_WORD *)v154 + 1);
                      ++v159;
                    }
                    while ( v159 <= v158 );
                    v138 = 0LL;
                  }
                  if ( (*(_DWORD *)(v19 + 8) & 0x20000) != 0 )
                  {
                    Child = -1073741772;
                    CmpRecordParseFailure(a7, 3968, -1073741772);
                    goto LABEL_427;
                  }
                  v431 = v138;
                  if ( v158 >= 0 )
                  {
                    while ( 1 )
                    {
                      if ( v158 < 2 )
                        v161 = v154[v158 + 1];
                      else
                        v161 = *(_QWORD *)(v154[3] + 8LL * v158 - 16);
                      if ( *(_WORD *)(v161 + 66) && *(_BYTE *)(v161 + 65) == 1 )
                        goto LABEL_303;
                      if ( *(_DWORD *)(v161 + 40) != -1 )
                        break;
                      if ( --v158 < 0 )
                        goto LABEL_303;
                    }
                    if ( !v148 )
                    {
LABEL_318:
                      v168 = *((_WORD *)v154 + 1);
                      if ( (v168 & 0x8000u) != 0 )
                      {
LABEL_324:
                        v170 = v138;
                        if ( (__int16)v138 > *((__int16 *)v154 + 1) )
                          goto LABEL_331;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v169 = v168 < 2u ? v154[v168 + 1] : *(_QWORD *)(v154[3] + 8LL * v168 - 16);
                          if ( *(_DWORD *)(v169 + 40) != -1 )
                            break;
                          if ( (--v168 & 0x8000u) != 0 )
                            goto LABEL_324;
                        }
                        if ( (*(_DWORD *)(v169 + 184) & 0x100000) != 0 )
                        {
                          v186 = CmpGetSymbolicLinkTarget(
                                   (__int64)v154,
                                   (__int64)v448,
                                   v399,
                                   v136,
                                   v148,
                                   a7,
                                   (__int64)&v425,
                                   *(__int64 *)v406,
                                   (ULONG_PTR *)(a7 + 88),
                                   &v414);
                          Child = v186;
                          if ( v186 >= 0 )
                          {
                            *(_DWORD *)a7 &= ~8u;
                            if ( !*(_QWORD *)(a7 + 64) )
                            {
                              v187 = *(_QWORD *)(v414 + 32);
                              if ( (*(_DWORD *)(v187 + 4112) & 1) != 0 )
                                *(_QWORD *)(a7 + 64) = v187;
                            }
                            v188 = *(unsigned __int8 *)(a7 + 258);
                            Child = 260;
                            if ( (unsigned __int8)v188 < 4u )
                            {
                              *(_DWORD *)(a7 + 8 * v188 + 260) = 260;
                              *(_DWORD *)(a7 + 8LL * (unsigned __int8)(*(_BYTE *)(a7 + 258))++ + 264) = 4864;
                            }
                          }
                          else
                          {
                            CmpRecordParseFailure(a7, 4608, v186);
                          }
                          goto LABEL_726;
                        }
                        v170 = v138;
                      }
                      do
                      {
                        if ( v170 < 2 )
                          v171 = v154[v170 + 1];
                        else
                          v171 = *(_QWORD *)(v154[3] + 8LL * v170 - 16);
                        CmpUnlockKcb(v171);
                        ++v170;
                      }
                      while ( v170 <= *((__int16 *)v154 + 1) );
LABEL_331:
                      v172 = v399;
                      v173 = (unsigned int)(__int16)v399;
                      if ( (unsigned int)v173 >= 8 )
                      {
                        v175 = (__m128i *)(*(_QWORD *)&v448[40] + 16 * ((unsigned int)(v173 - 8) + 6LL));
                        v174 = *(_DWORD *)(*(_QWORD *)&v448[40] + 4LL * (unsigned int)(v173 - 8));
                      }
                      else
                      {
                        v174 = v448[v173];
                        v175 = (__m128i *)&v448[4 * (unsigned int)v173 + 8];
                      }
                      v176 = (*(_DWORD *)a7 & 1) != 0 && (_DWORD)v173 == *(_DWORD *)&v391[7] - 1;
                      *(_DWORD *)AccessMode = v174 + 37 * *(_DWORD *)(v19 + 16);
                      Child = CmpWalkOneLevel(
                                v19,
                                (__int64)v154,
                                &v415,
                                (__int64)v153,
                                (bool *)&v398,
                                v175,
                                v174,
                                *(ULONG_PTR *)AccessMode,
                                v148,
                                v176,
                                a7);
                      v177 = Child;
                      if ( Child == -1073741772 )
                      {
                        if ( !CmpLoadingSystemHivesActive )
                          goto LABEL_362;
                        v19 = BugCheckParameter4;
                        if ( (struct _KTHREAD *)CmpMountThread == KeGetCurrentThread()
                          || *(_QWORD *)(BugCheckParameter4 + 32) != CmpMasterHive )
                        {
                          v177 = Child;
                          goto LABEL_362;
                        }
                        if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000 && (__int16)v172 > 0 )
                        {
                          v178 = CmpGetComponentNameAtIndex((__int64)v448, (__int16)v172 - 1);
                          if ( (unsigned __int8)CmpWaitForHiveMount(v178, v179, v180, a7 + 136) )
                          {
                            *(_DWORD *)a7 |= 0x100u;
                            Child = 259;
                            CmpRecordParseFailure(a7, 5120, 259);
                            goto LABEL_726;
                          }
                        }
                        if ( (*(_DWORD *)(v19 + 8) & 0x7FE00000) == 0x400000 )
                        {
                          v181 = CmpGetComponentNameAtIndex((__int64)v448, (__int16)v172);
                          if ( (unsigned __int8)CmpWaitForHiveMount(v181, v182, v183, a7 + 136) )
                          {
                            *(_DWORD *)a7 |= 0x100u;
                            Child = 259;
                            CmpRecordParseFailure(a7, 5376, 259);
                            goto LABEL_726;
                          }
                        }
                        v177 = Child;
                      }
                      if ( v177 >= 0 )
                      {
                        v184 = v415;
                        ++*(_BYTE *)(a7 + 257);
                        *(_QWORD *)(a7 + 240) = v184;
                        *(_QWORD *)(a7 + 248) = v184;
                        v138 = 0LL;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
                        LOWORD(v172) = v172 + 1;
                        v19 = v415;
                        v136 = v397[0];
                        v391[0] = v398;
                        v185 = v154;
                        v401 = v415;
                        v154 = (__int64 *)v153;
                        BugCheckParameter4 = v415;
                        v153 = (int *)v185;
                        v415 = 0LL;
                        v398 = 0;
                        v399 = v172;
                        if ( (__int16)v172 < (__int16)v397[0] )
                        {
                          v148 = v405;
                          continue;
                        }
                        goto LABEL_366;
                      }
LABEL_362:
                      v189 = *(unsigned __int8 *)(a7 + 258);
                      if ( (unsigned __int8)v189 < 4u )
                      {
                        *(_DWORD *)(a7 + 8 * v189 + 260) = v177;
                        *(_DWORD *)(a7 + 8LL * (unsigned __int8)(*(_BYTE *)(a7 + 258))++ + 264) = 5504;
                      }
                      goto LABEL_726;
                    }
                    v165 = CmListGetNextElement(v154[1] + 208, &v431, 32LL);
                    if ( !v165 )
                      goto LABEL_317;
                    while ( 1 )
                    {
                      v167 = *(_DWORD *)(v165 + 68);
                      if ( v167 == 2 || v167 == 11 )
                        break;
                      v165 = CmListGetNextElement(v166 + 208, &v431, 32LL);
                      if ( !v165 )
                        goto LABEL_317;
                    }
                    if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(v165 + 56), v148) )
                    {
LABEL_317:
                      LOWORD(v138) = 0;
                      goto LABEL_318;
                    }
                  }
                  break;
                }
LABEL_303:
                if ( CmpLoadingSystemHivesActive
                  && (v19 = BugCheckParameter4, (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread())
                  && *(_QWORD *)(BugCheckParameter4 + 32) == CmpMasterHive
                  && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x7FE00000) == 0x600000
                  && (__int16)v399 > 0
                  && (v162 = CmpGetComponentNameAtIndex((__int64)v448, (__int16)v399 - 1),
                      (unsigned __int8)CmpWaitForHiveMount(v162, v163, v164, a7 + 136)) )
                {
                  *(_DWORD *)a7 |= 0x100u;
                  Child = 259;
                  CmpRecordParseFailure(a7, 3840, 259);
                }
                else
                {
                  Child = -1073741772;
                  CmpRecordParseFailure(a7, 4096, -1073741772);
                }
                goto LABEL_427;
              }
LABEL_230:
              _m_prefetchw(&CmpHiveListHeadLock);
              v130 = CmpHiveListHeadLock - 16;
              if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v130 = 0LL;
              if ( (CmpHiveListHeadLock & 2) != 0
                || (v131 = CmpHiveListHeadLock,
                    v131 != _InterlockedCompareExchange64(
                              (volatile signed __int64 *)&CmpHiveListHeadLock,
                              v130,
                              CmpHiveListHeadLock)) )
              {
                ExfReleasePushLock(&CmpHiveListHeadLock);
              }
              KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
              v19 = BugCheckParameter4;
            }
            if ( PsIsCurrentThreadInServerSilo() && (unsigned int)dword_140C04390 > 5 )
            {
              if ( tlgKeywordOn((__int64)&dword_140C04390, 0x200000010000LL) )
              {
                v412 = 0x1000000LL;
                v450 = &v412;
                v451 = 8LL;
                tlgWriteAgg((__int64)&dword_140C04390, (unsigned __int8 *)&byte_140036D15, v132, 3u, &v449);
                v133 = dword_140C04390;
              }
              if ( v133 > 5 )
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140C04390,
                  (unsigned __int8 *)&byte_140036D67,
                  0LL,
                  0LL,
                  2u,
                  &v452);
            }
            Child = -1073741790;
            CmpRecordParseFailure(a7, 2560, -1073741790);
            goto LABEL_726;
          }
          v136 = *(_WORD *)&v391[7];
          goto LABEL_250;
        }
LABEL_194:
        v119 = -1073741199;
        goto LABEL_195;
      }
    }
LABEL_117:
    Child = v82;
    CmpRecordParseFailure(a7, 1280, v82);
    v19 = v401;
LABEL_728:
    if ( v392 )
      CmpUnlockHashEntryByKcb(BugCheckParameter2);
    goto LABEL_730;
  }
  if ( v20 != v21 )
  {
    CmpLockRegistry(v20, v21, v14, 0LL);
    CmpDereferenceKeyControlBlock(v15);
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry(0LL, v22, v23, v24);
LABEL_81:
    v391[2] = 0;
LABEL_82:
    v17 = 0LL;
    goto LABEL_83;
  }
  if ( (*(_DWORD *)a7 & 0x400) != 0 )
    ((void (*)(void))CmpLockRegistryExclusive)();
  else
    CmpLockRegistry(v20, v21, v14, 0LL);
  v25 = *(_QWORD *)(v15 + 296);
  v391[2] = 1;
  v26 = v25 & 1;
  if ( (v25 & 1) != 0 )
    v25 &= ~1uLL;
  if ( !v25
    || v26
    || (v27 = PsGetCurrentServerSiloGlobals(),
        v28 = *(_QWORD *)v406,
        v29 = *(char **)(v25 + 8),
        v30 = v27[154],
        v31 = *(unsigned __int16 *)v25,
        **(_WORD **)v406 < (unsigned __int16)v31) )
  {
LABEL_80:
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
    BugCheckParameter2 = 0LL;
    CmpUnlockRegistry(v73, v72, v74, v75);
    v13 = v410;
    v401 = BugCheckParameter4;
    goto LABEL_81;
  }
  v32 = &v29[v31];
  if ( v29 >= &v29[v31] )
    goto LABEL_26;
  v33 = *(_QWORD *)(*(_QWORD *)v406 + 8LL) - (_QWORD)v29;
  do
  {
    v34 = *(_WORD *)&v29[v33];
    if ( *(_WORD *)v29 != v34 )
    {
      NLS_UPCASE(v30, v34);
      v36 = NLS_UPCASE(v30, v35);
      if ( v36 != v37 )
      {
        v11 = v399;
        goto LABEL_80;
      }
    }
    v29 += 2;
  }
  while ( v29 < v32 );
  v11 = v399;
  v28 = *(_QWORD *)v406;
LABEL_26:
  v38 = (_WORD *)(*(_QWORD *)(v28 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)v25 >> 1));
  v39 = *(_WORD *)v28 - *(_WORD *)v25;
  v40 = *(_WORD *)(v28 + 2) - *(_WORD *)v25;
  v410.m128i_i64[1] = (__int64)v38;
  v410.m128i_i16[0] = v39;
  v410.m128i_i16[1] = v40;
  if ( v39 )
  {
    do
    {
      if ( *v38 != 92 )
        break;
      v39 -= 2;
      v40 -= 2;
      ++v38;
      v410.m128i_i16[0] = v39;
      v410.m128i_i16[1] = v40;
    }
    while ( v39 );
    v410.m128i_i64[1] = (__int64)v38;
  }
  v41 = ((*(_DWORD *)(BugCheckParameter2 + 8) >> 21) & 0x3FF) - 1;
  if ( (*(_DWORD *)a7 & 1) == 0 || v39 )
  {
    v45 = BugCheckParameter2;
  }
  else
  {
    v42 = *(_WORD *)v25;
    v43 = *(_QWORD *)(v28 + 8);
    v44 = *(unsigned __int16 *)v25;
    v45 = BugCheckParameter2;
    v46 = *(_WORD *)v28 - v42;
    v47 = *(_WORD *)(v28 + 2) - v42;
    v410.m128i_i16[0] = v46;
    v410.m128i_i16[1] = v47;
    v48 = v43 + 2 * (v44 >> 1);
    v49 = *(_QWORD *)(BugCheckParameter2 + 80);
    v410.m128i_i64[1] = v48;
    v50 = *(_WORD *)(v49 + 24);
    if ( (*(_DWORD *)v49 & 1) != 0 )
    {
      v50 *= 2;
      v51 = v48 - 2LL * *(unsigned __int16 *)(v49 + 24);
      v52 = v50 + v46;
    }
    else
    {
      v52 = v50 + v46;
      v51 = v48 - 2 * ((unsigned __int64)*(unsigned __int16 *)(v49 + 24) >> 1);
    }
    v410.m128i_i16[1] = v50 + v47;
    v11 = 1;
    v410.m128i_i16[0] = v52;
    v399 = 1;
    --v41;
    v410.m128i_i64[1] = v51;
  }
  v53 = CmpComputeComponentHashes(&v410, (__int16 *)v397, (__int64)v448);
  Child = v53;
  if ( v53 < 0 )
  {
    CmpRecordParseFailure(a7, 512, v53);
    v19 = BugCheckParameter4;
    goto LABEL_730;
  }
  *(_DWORD *)&v391[7] = v397[0];
  if ( (unsigned int)((__int16)v397[0] + v41) > 0x20 )
  {
    Child = -1073741811;
    CmpRecordParseFailure(a7, 768, -1073741811);
    v19 = BugCheckParameter4;
    goto LABEL_730;
  }
  v54 = 0;
  if ( !v397[0] )
  {
LABEL_47:
    if ( v11 == v397[0] )
    {
      CmpLockHashEntrySharedByKcb(v45);
      v56 = 1;
      v392 = 1;
    }
    else
    {
      v56 = 0;
    }
    CmpLockKcbShared(v45);
    v57 = (*(_DWORD *)(v45 + 8) & 0x20000) == 0;
    v427 = 0LL;
    v428 = 0LL;
    if ( !v57 )
    {
LABEL_76:
      CmpUnlockKcb(v45);
      if ( v56 )
      {
        CmpUnlockHashEntryByKcb(v45);
        v392 = 0;
      }
      CmpDereferenceKeyControlBlock(v45);
      v13 = *a6;
      v11 = 0;
      BugCheckParameter2 = 0LL;
      v399 = 0;
      v410 = v13;
      CmpCleanupPathInfo(v448);
      memset(v448, 0, 0xA8uLL);
      v401 = BugCheckParameter4;
      goto LABEL_82;
    }
    v58 = *(__int16 *)(v45 + 66);
    v59 = 0LL;
    WORD1(v427) = -1;
    if ( v58 < 2
      || (v59 = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, 8LL * (unsigned int)(v58 - 1), 892751171LL)) != 0LL )
    {
      v60 = *(__int16 *)(v45 + 66);
      LOWORD(v427) = v58;
      *((_QWORD *)&v428 + 1) = v59;
      WORD1(v427) = v60;
      if ( (_WORD)v60 )
      {
        v61 = *(_QWORD *)(v45 + 192);
        if ( !v61 )
          goto LABEL_59;
        do
        {
          CmpSetKcbAtLayerHeight(&v427, v60, *(_QWORD *)(v61 + 16));
          v61 = *(_QWORD *)(v62 + 24);
          LOWORD(v60) = v60 - 1;
        }
        while ( v61 );
      }
      else
      {
        *((_QWORD *)&v427 + v60 + 1) = v45;
      }
    }
    v59 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v428 + 1);
LABEL_59:
    for ( ii = WORD1(v427); (ii & 0x8000u) == 0; --ii )
    {
      v64 = ii < 2u ? *((_QWORD *)&v427 + ii + 1) : *((_QWORD *)v59 + ii - 2);
      if ( *(_WORD *)(v64 + 66) && *(_BYTE *)(v64 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v64 + 40) != -1 )
      {
        v65 = 0;
        goto LABEL_68;
      }
    }
    v65 = 1;
LABEL_68:
    if ( v59 )
      CmSiFreeMemory(v59);
    if ( !v65 && (*(_DWORD *)(v45 + 8) & 0x40000) == 0 )
    {
      CmpUnlockKcb(v45);
      v68 = v45;
      LOWORD(v45) = v410.m128i_i16[0];
      v69 = *(_WORD *)&v391[7];
      v401 = BugCheckParameter4;
      goto LABEL_73;
    }
    goto LABEL_76;
  }
  while ( 1 )
  {
    v55 = v54 >= 8 ? (int *)(*(_QWORD *)&v448[40] + 16 * (v54 - 8 + 6LL)) : &v448[4 * v54 + 8];
    if ( *(_WORD *)v55 > 0x200u )
      break;
    if ( ++v54 >= (__int16)v397[0] )
      goto LABEL_47;
  }
  Child = -1073741811;
  CmpRecordParseFailure(a7, 1024, -1073741811);
  v19 = BugCheckParameter4;
LABEL_730:
  if ( v438[1] )
    CmSiFreeMemory(v438[1]);
  if ( v440[1] )
    CmSiFreeMemory(v440[1]);
  if ( v444[1] )
    CmSiFreeMemory(v444[1]);
  v329 = v415;
  if ( v415 )
  {
    CmpDereferenceKeyControlBlockUnsafe(v19);
    CmpDereferenceKeyControlBlock(v329);
    goto LABEL_738;
  }
  if ( v19 )
  {
    v436 = 0LL;
    CmpInitializeDelayDerefContext(&v436);
    v339 = *(_QWORD *)v19;
    v340 = *(_QWORD *)(v19 + 32);
    if ( *(_QWORD *)v19 > 1uLL )
    {
      while ( 1 )
      {
        v341 = v339 - 1;
        v342 = v339;
        v343 = v339 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v340 + 2944) == 1;
        v344 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v341, v339);
        v339 = v344;
        if ( v344 == v342 )
          break;
        if ( v344 <= 1 )
          goto LABEL_767;
      }
      if ( v344 < v341 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
      if ( v343 )
        CmpDoQueueLateUnloadWorker(v340);
      goto LABEL_738;
    }
LABEL_767:
    v345 = *(_QWORD *)(BugCheckParameter4 + 32);
    v346 = *(_DWORD *)(BugCheckParameter4 + 16);
    v347 = (unsigned __int64 *)(*(_QWORD *)(v345 + 1648)
                              + 24
                              * ((unsigned int)(*(_DWORD *)(v345 + 1656) - 1) & ((101027 * (v346 ^ (v346 >> 9))) ^ ((unsigned __int64)(101027 * (v346 ^ (v346 >> 9))) >> 9))));
    v348 = KeAbPreAcquire((__int64)v347, 0LL);
    v349 = v348;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v347, 0LL) )
      ExfAcquirePushLockExclusiveEx(v347, v348, (__int64)v347);
    if ( v349 )
      *(_BYTE *)(v349 + 18) = 1;
    v347[1] = (unsigned __int64)KeGetCurrentThread();
    _m_prefetchw((const void *)(v345 + 4232));
    v350 = *(_DWORD *)(v345 + 4232);
    if ( !v350 )
LABEL_835:
      KeBugCheckEx(0x51u, 0x17uLL, v345, 8uLL, BugCheckParameter4);
    while ( 1 )
    {
      v351 = v350;
      v350 = _InterlockedCompareExchange((volatile signed __int32 *)(v345 + 4232), v350 + 1, v350);
      if ( v351 == v350 )
        break;
      if ( !v350 )
        goto LABEL_835;
    }
    v352 = (unsigned __int64 *)(BugCheckParameter4 + 48);
    v353 = KeAbPreAcquire(BugCheckParameter4 + 48, 0LL);
    v354 = v353;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v352, 0LL) )
      ExfAcquirePushLockExclusiveEx(v352, v353, (__int64)v352);
    if ( v354 )
      *(_BYTE *)(v354 + 18) = 1;
    v355 = BugCheckParameter4;
    v356 = 0LL;
    *(_QWORD *)(BugCheckParameter4 + 56) = KeGetCurrentThread();
    v357 = *(_QWORD *)(v355 + 192);
    if ( v357 )
    {
      v358 = *(_QWORD *)(v357 + 24);
      if ( v358 )
      {
        v356 = *(_QWORD *)(v358 + 16);
        CmpUnlockKcb(v355);
        CmpLockKcbExclusive(v356);
        CmpLockKcbExclusive(v355);
      }
    }
    v359 = *(_QWORD *)(v355 + 32);
    v360 = _InterlockedDecrement64((volatile signed __int64 *)v355);
    if ( v360 == 2 )
    {
      v361 = BugCheckParameter4;
      if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v359 + 2944) == 1 )
        CmpDoQueueLateUnloadWorker(v359);
    }
    else
    {
      if ( !v360 )
      {
        if ( (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
        {
          v362 = *(_QWORD *)(v355 + 32);
          CmpCleanUpKcbCacheWithLock(BugCheckParameter4, (__int64)&v436);
          v363 = KeGetCurrentThread();
          *(_DWORD *)(v362 + 160) |= 0x80u;
          *(_QWORD *)(v362 + 4176) = v363;
          *(_DWORD *)(v362 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v362 + 4236), 1u) & 0x7F) + 4240) = 31;
          if ( (*(_DWORD *)(v362 + 160) & 0x20) == 0
            && _InterlockedExchangeAdd((volatile signed __int32 *)(v362 + 4232), 0xFFFFFFFF) == 1 )
          {
            CmpDeleteHive((PVOID)v362);
          }
        }
        else
        {
          v368 = 0;
          v369 = *(_DWORD *)(BugCheckParameter4 + 8);
          if ( (v369 & 0x20) == 0 )
            v368 = (v369 & 0x20000) == 0;
          if ( CmpHoldLazyFlush
            && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x100000) == 0
            && (*(_DWORD *)(BugCheckParameter4 + 8) & 8) == 0
            || !v368 )
          {
            CmpCleanUpKcbCacheWithLock(BugCheckParameter4, (__int64)&v436);
            v361 = BugCheckParameter4;
            if ( *(struct _KTHREAD **)(BugCheckParameter4 + 56) != KeGetCurrentThread()
              && (*(_DWORD *)(BugCheckParameter4 + 8) & 0x80000) != 0 )
            {
              CmpFreeKeyControlBlock(BugCheckParameter4);
            }
            goto LABEL_795;
          }
          v370 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
          v372 = v370;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
            ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v370, v371);
          if ( v372 )
            *(_BYTE *)(v372 + 18) = 1;
          v374 = BugCheckParameter4;
          *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
          v375 = (_QWORD *)(BugCheckParameter4 + 224);
          if ( (_QWORD *)*v375 != v375 )
            KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter4, 0LL, 0LL);
          v376 = CmpDelayedLRUListHead;
          if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
            __fastfail(3u);
          *v375 = CmpDelayedLRUListHead;
          v375[1] = &CmpDelayedLRUListHead;
          *(_QWORD *)(v376 + 8) = v375;
          CmpDelayedLRUListHead = (__int64)v375;
          *(_BYTE *)(v374 + 64) |= 2u;
          ++qword_140D552B8;
          v377 = *((unsigned __int8 *)&CmpDelayedCloseTableLock + 48);
          v378 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
          *(&CmpDelayedCloseTableLock + 1) = 0LL;
          v379 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
          if ( v379 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v379);
          if ( (_DWORD)KiIrqlFlags )
          {
            v380 = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v380 <= 0xFu && (unsigned __int8)v377 <= 0xFu && v380 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v383 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v377 + 1));
              v57 = (v383 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v383;
              if ( v57 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(v377);
          KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
          if ( v378 )
            CmpArmDelayedCloseTimer();
        }
      }
      v361 = BugCheckParameter4;
    }
LABEL_795:
    CmpUnlockKcb(v361);
    if ( v356 )
      CmpUnlockKcb(v356);
    v364 = (signed __int64 *)(*(_QWORD *)(v345 + 1648)
                            + 24
                            * ((unsigned int)(*(_DWORD *)(v345 + 1656) - 1) & ((101027 * (v346 ^ (v346 >> 9))) ^ ((unsigned __int64)(101027 * (v346 ^ (v346 >> 9))) >> 9))));
    v364[1] = 0LL;
    _m_prefetchw(v364);
    v365 = *v364;
    v366 = *v364 - 16;
    if ( (*v364 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v366 = 0LL;
    if ( (v365 & 2) != 0 || (v367 = *v364, v367 != _InterlockedCompareExchange64(v364, v366, v365)) )
      ExfReleasePushLock(v364);
    KeAbPostRelease((ULONG_PTR)v364);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v345 + 4232), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v345);
    CmpDrainDelayDerefContext((_QWORD **)&v436);
  }
LABEL_738:
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  v330 = *(_DWORD *)(v9 + 100);
  if ( v330 && (v330 & 2) != 0 )
  {
    LOBYTE(PreviouslyGrantedAccess) = 1;
    CmpSearchKeyControlBlockTreeEx(CmpSyncKcbCacheForHive, *(_QWORD *)(v9 + 112), &v425, 0LL, PreviouslyGrantedAccess);
    *(_DWORD *)(v9 + 100) &= ~2u;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v425);
  if ( v391[2] )
    CmpUnlockRegistry(v332, v331, v333, v334);
  v335 = v421;
  if ( v421 )
  {
    if ( (_BYTE)v394 && CmpCheckExeOwnerForPca() )
      CmpPublishEventForPcaResolver(v9, v335);
    CmpFreeTransientPoolWithTag(v335, 0x624E4D43u);
  }
  if ( (*(_DWORD *)(v9 + 160) & 1) != 0 )
    CmpDetachFromRegistryProcess(v9 + 168);
  if ( Object )
    ObfDereferenceObject(Object);
  v336 = *(_SLIST_ENTRY **)&v448[40];
  if ( *(_QWORD *)&v448[40] )
  {
    v337 = KeGetCurrentPrcb();
    P = v337->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses, P = v337->PPLookasideList[8].L, ++P->TotalFrees, LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v336);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v336);
    }
  }
  return (unsigned int)Child;
}
