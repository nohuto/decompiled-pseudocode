/*
 * XREFs of NtSetInformationJobObject @ 0x1406A4040
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSchedulingGroupWeights @ 0x140200D84 (KeSetSchedulingGroupWeights.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     KeSetSchedulingGroupCpuRates @ 0x140205474 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     KeIsEmptyAffinityEx @ 0x140255050 (KeIsEmptyAffinityEx.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     KeInitializeDpc @ 0x1402BF970 (KeInitializeDpc.c)
 *     KeAddGroupAffinityEx @ 0x140307D30 (KeAddGroupAffinityEx.c)
 *     KeFirstGroupAffinityEx @ 0x140308FB0 (KeFirstGroupAffinityEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     PspHardDereferenceSiloWorker @ 0x140353F7C (PspHardDereferenceSiloWorker.c)
 *     KeQueryActiveGroupCount @ 0x140361E20 (KeQueryActiveGroupCount.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1403626A8 (KeQuerySchedulingGroupReadyTime.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403DB480 (wcsnlen.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x14057D350 (KeSetSchedulingGroupCycleNotification.c)
 *     PspJobIsAppSilo @ 0x1405A39E8 (PspJobIsAppSilo.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140683BA8 (PspAddSchedulingGroupToJobChain.c)
 *     PspFreeRateControl @ 0x140684EAC (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140684EF8 (PspAllocateRateControl.c)
 *     PsReturnSharedPoolQuota @ 0x14069ECA8 (PsReturnSharedPoolQuota.c)
 *     PspLockRootJobExclusive @ 0x14069F000 (PspLockRootJobExclusive.c)
 *     PspBindProcessSessionToJob @ 0x14069FBC4 (PspBindProcessSessionToJob.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1406A0A74 (PspGetJobLimitInformationValidFlags.c)
 *     PspUnlockJobChain @ 0x1406A0C10 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x1406A0CC8 (PspLockJobChain.c)
 *     PspUnlockJobConditionally @ 0x1406A30A0 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1406A30D0 (PspLockJobConditionally.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1406A3BFC (PspUnlockJob.c)
 *     PspRateControlLimitFlag @ 0x1406A3E20 (PspRateControlLimitFlag.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1406A3F44 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1406A3FC4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1406A6B5C (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1406A6BB4 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406A6BDC (PspNotificationLimitRateControlToleranceField.c)
 *     PsInvokeWin32Callout @ 0x1406AF850 (PsInvokeWin32Callout.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     IopFreeMiniCompletionPacket @ 0x140728C70 (IopFreeMiniCompletionPacket.c)
 *     SePrivilegeCheck @ 0x14072F320 (SePrivilegeCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x1407380F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     PsChargeSharedPoolQuota @ 0x14075C654 (PsChargeSharedPoolQuota.c)
 *     IoAllocateMiniCompletionPacket @ 0x1407864F0 (IoAllocateMiniCompletionPacket.c)
 *     PspIsContextAdmin @ 0x1407D07D8 (PspIsContextAdmin.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1407D083C (PspSetEnergyTrackingStateJobTree.c)
 *     PspSetJobIoRateControl @ 0x1407D861C (PspSetJobIoRateControl.c)
 *     PspSetJobIoAttribution @ 0x1407D8864 (PspSetJobIoAttribution.c)
 *     PspScheduleEnforcementWorker @ 0x1407D8D58 (PspScheduleEnforcementWorker.c)
 *     PspFreezeJobTree @ 0x1407DA648 (PspFreezeJobTree.c)
 *     SeCheckPrivilegedObject @ 0x1407E05E4 (SeCheckPrivilegedObject.c)
 *     PspSetBackgroundJobTree @ 0x1407E5DB8 (PspSetBackgroundJobTree.c)
 *     PspCreateSilo @ 0x1407E6988 (PspCreateSilo.c)
 *     PspAssignSiloSystemRootPath @ 0x1409ACA60 (PspAssignSiloSystemRootPath.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACC94 (PspConvertSiloToServerSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409B1E98 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1409B1F60 (PspApplyWorkingSetLimits.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1409B2268 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1409B2AB4 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x1409B2CD4 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x1409B3018 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x1409B30A4 (PspSetNetRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1409B3370 (PspSetPagePriorityLimitJobTree.c)
 *     EtwTraceJobSetQuery @ 0x1409E574C (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B70 (ObCreateSiloRootDirectory.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  size_t v4; // r14
  __int64 v5; // r13
  unsigned int v7; // ecx
  bool v8; // zf
  __m128i *v9; // rdi
  NTSTATUS result; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // esi
  int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // r10
  PRKEVENT v20; // r14
  void *v21; // rdi
  ULONG_PTR MiniCompletionPacket; // rbx
  unsigned int v23; // ebx
  struct _ERESOURCE *p_WaitListHead; // rcx
  char v25; // bl
  unsigned int *v26; // r11
  PETHREAD v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  int v30; // edx
  KPROCESSOR_MODE v31; // r14
  char v32; // al
  int v33; // ecx
  int v34; // eax
  char v35; // al
  int v36; // ecx
  __int64 v37; // rcx
  JOBOBJECTINFOCLASS v38; // edi
  struct _SECURITY_SUBJECT_CONTEXT *Pool2; // rdi
  ULONG v40; // edx
  struct _SECURITY_SUBJECT_CONTEXT *v41; // rcx
  BOOLEAN v42; // al
  int v43; // eax
  unsigned int v44; // edi
  char v45; // di
  unsigned __int16 Group; // ax
  __int64 v47; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v48; // rax
  struct _KEVENT *v49; // rcx
  _OWORD *v50; // rax
  char v51; // bl
  char v52; // di
  struct _LIST_ENTRY *p_Blink; // rsi
  struct _LIST_ENTRY *i; // rbx
  char *v55; // rcx
  unsigned int v56; // ecx
  unsigned int v57; // r14d
  unsigned __int16 v58; // cx
  __m128i v59; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v61; // rax
  SECURITY_IMPERSONATION_LEVEL *p_ImpersonationLevel; // rdi
  BOOLEAN v63; // al
  PERESOURCE v64; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v66; // rax
  struct _KEVENT *v67; // rdx
  _OWORD *v68; // rax
  __int64 v69; // r8
  __int64 v70; // rsi
  __int64 v71; // rdi
  int v72; // eax
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned int v75; // edx
  int v76; // eax
  __int32 v77; // ebx
  char v78; // bl
  bool v79; // cc
  volatile LONG Lock; // eax
  __int64 *RateControl; // rax
  __int64 *v82; // r8
  PRKEVENT v83; // rsi
  __int16 v84; // dx
  __int64 v85; // rax
  __int64 *v86; // rcx
  _QWORD *v87; // rbx
  int v88; // ebx
  __int64 v89; // rcx
  int v90; // r8d
  struct _ERESOURCE *v91; // rbx
  signed __int8 v92; // cf
  BOOLEAN v93; // al
  __int64 v94; // rdx
  int Silo; // eax
  BOOLEAN v96; // al
  unsigned __int64 v97; // rcx
  unsigned __int128 v98; // kr00_16
  __int64 v99; // rdx
  int v100; // edx
  int v101; // eax
  int v102; // edx
  int *v103; // r9
  int *v104; // r10
  PRKEVENT v105; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *v106; // rdi
  __int64 v107; // rdi
  int v108; // esi
  __int64 v109; // rdx
  _DWORD *v110; // r8
  _DWORD *v111; // rax
  __int64 v112; // r8
  _DWORD *v113; // rax
  _DWORD *v114; // r8
  int v115; // edx
  _DWORD *v116; // rax
  struct _LIST_ENTRY *Blink; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  unsigned __int16 v119; // cx
  unsigned int v120; // eax
  _WORD *v121; // rbx
  wchar_t *v122; // rbx
  ULONG v123; // edx
  char v124; // bl
  PETHREAD v125; // rdi
  BOOLEAN v126; // al
  unsigned __int64 v127; // xmm0_8
  size_t v128; // rdi
  wchar_t *v129; // rax
  signed __int32 v130[8]; // [rsp+0h] [rbp-D08h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-CC8h]
  PRKEVENT Event; // [rsp+48h] [rbp-CC0h] BYREF
  JOBOBJECTINFOCLASS v133; // [rsp+50h] [rbp-CB8h]
  int v134; // [rsp+58h] [rbp-CB0h]
  __int16 v135; // [rsp+5Ch] [rbp-CACh] BYREF
  KPROCESSOR_MODE v136; // [rsp+5Eh] [rbp-CAAh]
  int v137; // [rsp+60h] [rbp-CA8h]
  _DWORD Size[3]; // [rsp+64h] [rbp-CA4h]
  unsigned __int16 v139; // [rsp+70h] [rbp-C98h]
  __int64 v140; // [rsp+78h] [rbp-C90h] BYREF
  PETHREAD Thread; // [rsp+80h] [rbp-C88h]
  PSECURITY_SUBJECT_CONTEXT v142; // [rsp+88h] [rbp-C80h]
  __int64 v143; // [rsp+90h] [rbp-C78h] BYREF
  PVOID P; // [rsp+98h] [rbp-C70h]
  __int8 v145; // [rsp+A0h] [rbp-C68h]
  __int8 v146; // [rsp+A1h] [rbp-C67h]
  __int8 v147; // [rsp+A2h] [rbp-C66h]
  unsigned __int32 v148; // [rsp+A4h] [rbp-C64h]
  int JobLimitInformationValidFlags; // [rsp+A8h] [rbp-C60h]
  __int64 v150; // [rsp+B0h] [rbp-C58h]
  __int64 v151; // [rsp+B8h] [rbp-C50h] BYREF
  unsigned int v152; // [rsp+C0h] [rbp-C48h] BYREF
  unsigned int v153; // [rsp+C4h] [rbp-C44h]
  PERESOURCE v154; // [rsp+C8h] [rbp-C40h]
  void *Src; // [rsp+D0h] [rbp-C38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-C30h] BYREF
  void *v157; // [rsp+F8h] [rbp-C10h]
  __int64 v158[2]; // [rsp+100h] [rbp-C08h] BYREF
  __int64 v159; // [rsp+110h] [rbp-BF8h] BYREF
  __int64 v160; // [rsp+118h] [rbp-BF0h] BYREF
  PVOID Object; // [rsp+120h] [rbp-BE8h] BYREF
  __m128i v162; // [rsp+128h] [rbp-BE0h] BYREF
  __int64 v163; // [rsp+138h] [rbp-BD0h] BYREF
  wchar_t *v164; // [rsp+140h] [rbp-BC8h]
  __m128i v165; // [rsp+148h] [rbp-BC0h] BYREF
  __int32 v166; // [rsp+158h] [rbp-BB0h]
  __int32 v167; // [rsp+15Ch] [rbp-BACh]
  __int64 v168; // [rsp+160h] [rbp-BA8h]
  __int64 v169; // [rsp+168h] [rbp-BA0h]
  unsigned __int8 *v170; // [rsp+170h] [rbp-B98h]
  unsigned int v171; // [rsp+178h] [rbp-B90h]
  ULONG_PTR BugCheckParameter1[2]; // [rsp+180h] [rbp-B88h]
  PVOID v173[2]; // [rsp+190h] [rbp-B78h]
  __int128 v174; // [rsp+1A0h] [rbp-B68h] BYREF
  __int128 v175; // [rsp+1B0h] [rbp-B58h]
  __int32 v176; // [rsp+1C0h] [rbp-B48h]
  PRKEVENT v177; // [rsp+1C8h] [rbp-B40h] BYREF
  int v178; // [rsp+1D0h] [rbp-B38h]
  int v179; // [rsp+1D4h] [rbp-B34h]
  __int64 v180; // [rsp+1D8h] [rbp-B30h]
  __m128i v181; // [rsp+1E0h] [rbp-B28h]
  __m128i v182; // [rsp+1F0h] [rbp-B18h]
  __int64 v183; // [rsp+200h] [rbp-B08h]
  __int64 v184; // [rsp+208h] [rbp-B00h]
  __int64 v185; // [rsp+210h] [rbp-AF8h]
  __int64 v186; // [rsp+218h] [rbp-AF0h]
  _BYTE v187[72]; // [rsp+220h] [rbp-AE8h] BYREF
  _QWORD v188[18]; // [rsp+270h] [rbp-A98h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+300h] [rbp-A08h] BYREF
  _OWORD v190[5]; // [rsp+320h] [rbp-9E8h] BYREF
  __m128i v191; // [rsp+370h] [rbp-998h] BYREF
  __int128 v192; // [rsp+380h] [rbp-988h] BYREF
  unsigned __int128 v193; // [rsp+390h] [rbp-978h]
  __int128 v194; // [rsp+3A0h] [rbp-968h]
  __int64 v195; // [rsp+3B0h] [rbp-958h]
  __int128 v196; // [rsp+3B8h] [rbp-950h] BYREF
  __int128 v197; // [rsp+3C8h] [rbp-940h]
  __int128 v198; // [rsp+3D8h] [rbp-930h]
  _QWORD v199[20]; // [rsp+3F0h] [rbp-918h] BYREF
  _QWORD v200[262]; // [rsp+490h] [rbp-878h] BYREF

  v4 = JobObjectInformationLength;
  Size[0] = JobObjectInformationLength;
  v5 = JobObjectInformationClass;
  v150 = (__int64)JobHandle;
  v133 = JobObjectInformationClass;
  Src = JobObjectInformation;
  memset(&v200[1], 0, 0x100uLL);
  *(_OWORD *)BugCheckParameter1 = 0LL;
  v169 = 0LL;
  v168 = 0LL;
  v160 = 0LL;
  v159 = 0LL;
  v135 = 0;
  v163 = 0LL;
  memset(v199, 0, 0x98uLL);
  v191 = 0LL;
  v162 = 0LL;
  memset(v187, 0, 0x44uLL);
  Object = 0LL;
  memset(v188, 0, sizeof(v188));
  Event = 0LL;
  v152 = 0;
  memset(&v200[34], 0, 0x718uLL);
  v174 = 0LL;
  v175 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  LODWORD(v157) = 0;
  memset(v190, 0, 0x48uLL);
  v196 = 0LL;
  v197 = 0LL;
  v198 = 0LL;
  v192 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v140 = 0LL;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  v151 = 0LL;
  *(_OWORD *)v158 = 0LL;
  v143 = 0LL;
  v181 = 0LL;
  v182 = 0LL;
  LODWORD(v183) = 0;
  v165 = 0LL;
  *(_OWORD *)v173 = 0LL;
  if ( (unsigned int)(v5 - 1) > 0x30 )
    return -1073741821;
  switch ( (_DWORD)v5 )
  {
    case 9:
      if ( (_DWORD)v4 == 144 || (_DWORD)v4 == 152 )
        goto LABEL_14;
      return -1073741820;
    case 0xC:
      v8 = (((_DWORD)v4 - 48) & 0xFFFFFFF7) == 0;
LABEL_13:
      if ( v8 )
        goto LABEL_14;
      return -1073741820;
    case 0x1F:
      if ( (_DWORD)v4 == 48 || (_DWORD)v4 == 96 )
        goto LABEL_14;
      v8 = (_DWORD)v4 == 144;
      goto LABEL_13;
  }
  v7 = dword_140A7ADDC[v5];
  if ( (_DWORD)v4 != v7 && ((_DWORD)v5 != 11 && (_DWORD)v5 != 14 || (unsigned int)v4 < v7) )
    return -1073741820;
LABEL_14:
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v136 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__m128i *)Src;
    if ( (_DWORD)v4 )
    {
      if ( ((dword_140A7AEAC[v5] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + v4 > 0x7FFFFFFF0000LL || (char *)Src + v4 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v9 = (__m128i *)Src;
  }
  if ( !JobHandle )
    return -1073741816;
  v11 = 2LL;
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)JobHandle, 0x79517350u, (__int64)&Event, 0LL, 0LL);
  if ( result >= 0 )
  {
    v13 = 0;
    v134 = 0;
    LOBYTE(v137) = 0;
    v170 = &Thread->WaitBlockFill11[166];
    --Thread->SpecialApcDisable;
    if ( (int)v5 <= 25 )
    {
      if ( (_DWORD)v5 == 25 )
      {
        v20 = Event;
        ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
        KeResetEvent(v20);
LABEL_323:
        ExReleaseResourceLite((PERESOURCE)&v20[2].Header.WaitListHead);
        goto LABEL_324;
      }
      if ( (int)v5 <= 14 )
      {
        if ( (_DWORD)v5 == 14 )
        {
LABEL_203:
          v142 = 0LL;
          P = 0LL;
          v56 = 16;
          if ( (_DWORD)v5 != 14 )
            v56 = 2;
          Size[0] = v56;
          if ( (unsigned int)v4 % v56 )
          {
            v13 = -1073741820;
            goto LABEL_457;
          }
          v57 = (unsigned int)v4 / v56;
          v153 = v57;
          LODWORD(v200[0]) = 2097153;
          memset((char *)v200 + 4, 0, 0x104uLL);
          v58 = KeQueryActiveGroupCount() - 1;
          LOWORD(v137) = v58;
          while ( v57 )
          {
            if ( (_DWORD)v5 == 14 )
            {
              v59 = *v9;
              v162 = v59;
              epi16 = _mm_extract_epi16(v59, 4);
              v162.m128i_i16[4] = epi16;
              v139 = epi16;
              v150 = v59.m128i_i64[0];
            }
            else
            {
              v61 = v9->m128i_u16[0];
              v139 = v61;
              if ( (unsigned __int16)v61 > v58 )
                goto LABEL_217;
              v150 = qword_140D1EFE8[v61];
              epi16 = v139;
            }
            if ( epi16 > v58 || v200[epi16 + 1] || v150 != (v150 & qword_140D1EFE8[epi16]) )
            {
LABEL_217:
              v13 = -1073741811;
              v134 = -1073741811;
              break;
            }
            KeAddGroupAffinityEx((unsigned __int16 *)v200, v139, v150);
            v57 = --v153;
            v9 = (__m128i *)((char *)Src + Size[0]);
            Src = v9;
            v13 = v134;
            v58 = v137;
          }
          v20 = Event;
          if ( v13 < 0 )
            goto LABEL_495;
          v154 = (PERESOURCE)&Event[22];
          if ( *(_QWORD *)&Event[22].Header.Lock )
            goto LABEL_223;
          Pool2 = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePool2(256LL, 40LL, 1632269136LL);
          v142 = Pool2;
          if ( !Pool2 )
            goto LABEL_138;
          P = (PVOID)PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 40LL, 0LL);
          if ( P )
          {
            v20 = Event;
LABEL_223:
            SeCaptureSubjectContextEx(
              Thread,
              Thread->ApcState.Process,
              (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
            p_ImpersonationLevel = &SubjectContext.ImpersonationLevel;
            if ( PreviousMode )
            {
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              v63 = SePrivilegeCheck(
                      &RequiredPrivileges,
                      (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                      1);
              LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v63) & 1;
            }
            else
            {
              LODWORD(SubjectContext.ClientToken) |= 1u;
            }
            *(_QWORD *)&Size[1] = (char *)v20 + 56;
            ExAcquireResourceExclusiveLite((PERESOURCE)&v20[2].Header.WaitListHead, 1u);
            v13 = PspEnumJobsAndProcessesInJobHierarchy(
                    v20,
                    0,
                    0,
                    (int)PspSetAffinityLimitCallback,
                    (__int64)&SubjectContext,
                    1);
            v134 = v13;
            if ( v13 >= 0 )
            {
              v64 = v154;
              Flink = v154->SystemResourcesList.Flink;
              if ( v154->SystemResourcesList.Flink )
              {
                v174 = *(_OWORD *)&Flink->Blink;
                v175 = *(_OWORD *)&Flink[1].Blink;
                p_ImpersonationLevel = (SECURITY_IMPERSONATION_LEVEL *)&v174;
              }
              else
              {
                v154->SystemResourcesList.Flink = (struct _LIST_ENTRY *)v142;
                v20[22].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)P;
                v142 = 0LL;
                p_ImpersonationLevel = 0LL;
              }
              v66 = (struct _SECURITY_SUBJECT_CONTEXT *)v64->SystemResourcesList.Flink;
              *v66 = SubjectContext;
              v66[1].ClientToken = v157;
              v158[0] = (__int64)v20;
              HIDWORD(v158[1]) = v20[10].Header.WaitListHead.Blink;
              LODWORD(v158[1]) = -17;
              v67 = v20 + 11;
              v68 = v200;
              v69 = 2LL;
              do
              {
                *(_OWORD *)&v67->Header.Lock = *v68;
                *(_OWORD *)&v67->Header.WaitListHead.Blink = v68[1];
                v67[1].Header.WaitListHead = (LIST_ENTRY)v68[2];
                *(_OWORD *)&v67[2].Header.Lock = v68[3];
                *(_OWORD *)&v67[2].Header.WaitListHead.Blink = v68[4];
                v67[3].Header.WaitListHead = (LIST_ENTRY)v68[5];
                *(_OWORD *)&v67[4].Header.Lock = v68[6];
                v67 = (struct _KEVENT *)((char *)v67 + 128);
                v67[-1].Header.WaitListHead = (LIST_ENTRY)v68[7];
                v68 += 8;
                --v69;
              }
              while ( v69 );
              *(_QWORD *)&v67->Header.Lock = *(_QWORD *)v68;
              if ( (_DWORD)v5 == 14 && (unsigned int)KeIsEmptyAffinityEx(&v20[11]) )
              {
                LODWORD(v20[10].Header.WaitListHead.Blink) &= ~0x10u;
                _InterlockedAnd(&v20[64].Header.Lock, 0xFFFFFFFD);
              }
              else
              {
                LODWORD(v20[10].Header.WaitListHead.Blink) |= 0x10u;
                _InterlockedOr(&v20[64].Header.Lock, 2u);
              }
              v20 = Event;
              PspEnumJobsAndProcessesInJobHierarchy(
                Event,
                (int)PspSetJobLimitsJobPreCallback,
                0,
                (int)PspSetJobLimitsProcessCallback,
                (__int64)v158,
                5);
              v13 = v134;
            }
            ExReleaseResourceLite(*(PERESOURCE *)&Size[1]);
            if ( p_ImpersonationLevel )
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)p_ImpersonationLevel);
            if ( !v142 )
              goto LABEL_495;
            ExFreePoolWithTag(v142, 0x614A7350u);
            v55 = (char *)P;
            goto LABEL_241;
          }
LABEL_140:
          v40 = 1632269136;
          v41 = Pool2;
LABEL_141:
          ExFreePoolWithTag(v41, v40);
          v13 = -1073741670;
          goto LABEL_457;
        }
        if ( (_DWORD)v5 == 2 )
          goto LABEL_84;
        if ( (_DWORD)v5 != 4 )
        {
          if ( (_DWORD)v5 == 5 )
          {
            v181 = *v9;
            v182 = v9[1];
            v183 = v9[2].m128i_i64[0];
            v13 = (v181.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
LABEL_457:
            v20 = Event;
            goto LABEL_495;
          }
          if ( (_DWORD)v5 != 6 )
          {
            if ( (_DWORD)v5 != 7 )
            {
              if ( (_DWORD)v5 != 9 )
              {
                if ( (_DWORD)v5 != 11 )
                {
                  if ( (_DWORD)v5 == 12 )
                    goto LABEL_42;
LABEL_456:
                  v13 = -1073741821;
                  goto LABEL_457;
                }
                goto LABEL_203;
              }
LABEL_84:
              memmove(v199, v9, v4);
              if ( (unsigned int)v4 < 0x98 )
                memset((char *)v199 + v4, 0, 152 - v4);
              JobLimitInformationValidFlags = PspGetJobLimitInformationValidFlags(v5, v4);
              Size[0] = ~JobLimitInformationValidFlags;
              v30 = v199[2];
              if ( (~JobLimitInformationValidFlags & v199[2]) != 0 )
                goto LABEL_467;
              memset(&SubjectContext, 0, sizeof(SubjectContext));
              v157 = 0LL;
              LODWORD(v200[66]) = v199[2];
              P = 0LL;
              *(_QWORD *)&Size[1] = 0LL;
              v142 = 0LL;
              HIDWORD(v200[66]) = (v199[2] & 8) != 0 ? LODWORD(v199[5]) : 0;
              if ( (v199[2] & 0x20) != 0 )
              {
                if ( LODWORD(v199[7]) > 6 )
                  goto LABEL_467;
                v31 = PreviousMode;
                if ( (unsigned int)(LODWORD(v199[7]) - 3) <= 1 )
                {
                  LOBYTE(v29) = PreviousMode;
                  v32 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                          SeIncreaseBasePriorityPrivilege,
                          v150,
                          2LL,
                          v29) & 1;
                  LOBYTE(v33) = 4 * v32;
                  v137 = v33;
                  if ( !v32 )
                  {
LABEL_91:
                    v13 = -1073741727;
                    goto LABEL_457;
                  }
                  v30 = v199[2];
                }
                BYTE5(v200[169]) = v199[7];
              }
              else
              {
                BYTE5(v200[169]) = 0;
                v31 = PreviousMode;
              }
              if ( (v30 & 0x80u) == 0 )
              {
                HIDWORD(v200[106]) = 5;
              }
              else
              {
                v34 = HIDWORD(v199[7]);
                if ( HIDWORD(v199[7]) >= 0xA )
                  goto LABEL_467;
                if ( HIDWORD(v199[7]) > 5 )
                {
                  LOBYTE(v29) = v31;
                  v35 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                          SeIncreaseBasePriorityPrivilege,
                          v150,
                          2LL,
                          v29) & 1;
                  LOBYTE(v36) = 4 * v35;
                  v137 = v36;
                  if ( !v35 )
                    goto LABEL_91;
                  v30 = v199[2];
                  v34 = HIDWORD(v199[7]);
                }
                HIDWORD(v200[106]) = v34;
              }
              if ( (v30 & 2) != 0 )
              {
                if ( !v199[0] )
                  goto LABEL_467;
                v200[62] = v199[0];
              }
              else
              {
                v200[62] = 0LL;
              }
              if ( (v30 & 4) != 0 )
              {
                if ( !v199[1] )
                  goto LABEL_467;
                v200[63] = v199[1];
              }
              if ( (v30 & 1) != 0 )
              {
                v37 = v199[3];
                if ( !v199[3] && !v199[4]
                  || v199[3] == -1LL && v199[4] == -1LL
                  || v199[3] > v199[4]
                  || v199[3] < 0x14000uLL )
                {
                  goto LABEL_467;
                }
                if ( v199[3] > (unsigned __int64)PspMinimumWorkingSet )
                {
                  if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v31) )
                    goto LABEL_91;
                  v30 = v199[2];
                  v37 = v199[3];
                }
                v200[64] = v37;
                v200[65] = v199[4];
              }
              else
              {
                v200[64] = 0LL;
                v200[65] = 0LL;
              }
              if ( (v30 & 0x100) != 0 )
              {
                if ( v199[14] < 0x1000uLL )
                  goto LABEL_467;
                v200[118] = v199[14] >> 12;
              }
              else
              {
                v200[118] = 0LL;
              }
              if ( (v30 & 0x200) != 0 )
              {
                if ( v199[15] < 0x1000uLL )
                  goto LABEL_467;
                v200[119] = v199[15] >> 12;
              }
              else
              {
                v200[119] = 0LL;
              }
              if ( (v30 & 0x200000) != 0 )
              {
                if ( v199[18] < 0x1000uLL )
                  goto LABEL_467;
                v200[120] = v199[18] >> 12;
              }
              else
              {
                v200[120] = 0LL;
              }
              LODWORD(v200[67]) = 2097153;
              memset((char *)&v200[67] + 4, 0, 0x104uLL);
              v38 = v200[66];
              v133 = v200[66];
              v20 = Event;
              if ( (v200[66] & 0x10) == 0 )
              {
                LOBYTE(v43) = v137;
                goto LABEL_148;
              }
              if ( (Event[64].Header.LockNV & 2) == 0 && v199[6] )
              {
                if ( !*(_QWORD *)&Event[22].Header.Lock )
                {
                  Pool2 = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePool2(256LL, 40LL, 1632269136LL);
                  P = Pool2;
                  if ( !Pool2 )
                    goto LABEL_138;
                  *(_QWORD *)&Size[1] = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 40LL, 0LL);
                  if ( !*(_QWORD *)&Size[1] )
                    goto LABEL_140;
                  v20 = Event;
                  v133 = v200[66];
                  v13 = v134;
                }
                SeCaptureSubjectContextEx(
                  Thread,
                  Thread->ApcState.Process,
                  (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
                v142 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
                if ( PreviousMode )
                {
                  RequiredPrivileges.PrivilegeCount = 1;
                  RequiredPrivileges.Control = 1;
                  RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                  RequiredPrivileges.Privilege[0].Attributes = 0;
                  v42 = SePrivilegeCheck(
                          &RequiredPrivileges,
                          (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                          1);
                  LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v42) & 1;
                }
                else
                {
                  LODWORD(SubjectContext.ClientToken) |= 1u;
                }
                v43 = v137;
                LOBYTE(v43) = v137 | 2;
                v137 = v43;
                v38 = v133;
LABEL_148:
                PreviousMode = v43;
                ExAcquireResourceExclusiveLite((PERESOURCE)&v20[2].Header.WaitListHead, 1u);
                if ( (v38 & 4) == 0 )
                {
                  if ( (v38 & 0x40) != 0 )
                  {
                    v38 |= (__int64)v20[10].Header.WaitListHead.Blink & 4;
                    v200[63] = v20[9].Header.WaitListHead.Blink;
                  }
                  else
                  {
                    v200[63] = 0LL;
                  }
                }
                v44 = v38 & 0xFFFFFFBF;
                LODWORD(v200[66]) = v44;
                if ( (PreviousMode & 2) == 0 )
                {
                  if ( (v44 & 0x4000) != 0 && (v20[64].Header.LockNV & 2) == 0 )
                    goto LABEL_154;
LABEL_172:
                  if ( ((__int64)v20[10].Header.WaitListHead.Blink & 1) != 0 && (v200[66] & 1) == 0 )
                  {
                    _InterlockedOr(v130, 0);
                    if ( (qword_140D0C390 & 1) != 0 )
                      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&qword_140D0C390);
                    v13 = v134;
                    v20 = Event;
                  }
                  v158[0] = (__int64)v20;
                  HIDWORD(v158[1]) = v20[10].Header.WaitListHead.Blink;
                  *(_QWORD *)&v20[10].Header.Lock = v200[64];
                  v20[10].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v200[65];
                  HIDWORD(v20[10].Header.WaitListHead.Blink) = HIDWORD(v200[66]);
                  if ( (PreviousMode & 2) != 0 )
                  {
                    v49 = v20 + 11;
                    v50 = &v200[67];
                    do
                    {
                      *(_OWORD *)&v49->Header.Lock = *v50;
                      *(_OWORD *)&v49->Header.WaitListHead.Blink = v50[1];
                      v49[1].Header.WaitListHead = (LIST_ENTRY)v50[2];
                      *(_OWORD *)&v49[2].Header.Lock = v50[3];
                      *(_OWORD *)&v49[2].Header.WaitListHead.Blink = v50[4];
                      v49[3].Header.WaitListHead = (LIST_ENTRY)v50[5];
                      *(_OWORD *)&v49[4].Header.Lock = v50[6];
                      v49 = (struct _KEVENT *)((char *)v49 + 128);
                      v49[-1].Header.WaitListHead = (LIST_ENTRY)v50[7];
                      v50 += 8;
                      --v11;
                    }
                    while ( v11 );
                    *(_QWORD *)&v49->Header.Lock = *(_QWORD *)v50;
                  }
                  BYTE1(v20[45].Header.SignalState) = BYTE5(v200[169]);
                  v20[24].Header.SignalState = HIDWORD(v200[106]);
                  v20[9].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v200[62];
                  v20[9].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v200[63];
                  if ( (_DWORD)v5 == 9 )
                  {
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v20[52], 0LL);
                    LODWORD(v20[10].Header.WaitListHead.Blink) = LODWORD(v200[66]) | (__int64)v20[10].Header.WaitListHead.Blink & Size[0];
                    *(_QWORD *)&v20[28].Header.Lock = v200[118];
                    v20[28].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v200[119];
                    v20[28].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v200[120];
                    PspUnlockJobMemoryLimitsExclusive(v20, 0LL, 0LL);
                  }
                  else
                  {
                    LODWORD(v20[10].Header.WaitListHead.Blink) = LODWORD(v200[66]) | (__int64)v20[10].Header.WaitListHead.Blink & Size[0];
                  }
                  LODWORD(v158[1]) = ~(LODWORD(v20[10].Header.WaitListHead.Blink) | HIDWORD(v158[1]));
                  if ( (v199[2] & 4) != 0 )
                  {
                    PspEnumJobsAndProcessesInJobHierarchy(
                      v20,
                      0,
                      0,
                      (int)PspSetJobTimeLimitCallback,
                      (__int64)&v20[9].Header.WaitListHead.Blink,
                      1);
                    v20[7].Header.WaitListHead.Blink = 0LL;
                    *(_QWORD *)&v20[8].Header.Lock = 0LL;
                    KeResetEvent(v20);
                  }
                  if ( ((__int64)v20[10].Header.WaitListHead.Blink & 6) != 0 )
                  {
                    _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                    v20 = Event;
                    v13 = v134;
                  }
                  v51 = v158[1];
                  PspEnumJobsAndProcessesInJobHierarchy(
                    v20,
                    (int)PspSetJobLimitsJobPreCallback,
                    (int)PspSetJobLimitsJobPostCallback,
                    (int)PspSetJobLimitsProcessCallback,
                    (__int64)v158,
                    5);
                  v45 = PreviousMode | 1;
                  if ( (v51 & 1) != 0 )
                    v45 = PreviousMode;
                  goto LABEL_190;
                }
                if ( (v20[64].Header.LockNV & 2) != 0 )
                {
LABEL_154:
                  v13 = -1073741811;
                  v134 = -1073741811;
LABEL_155:
                  v45 = v137;
LABEL_190:
                  v52 = v45 & 1;
                  if ( v52 )
                  {
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D0C390, 0LL);
                    _InterlockedOr(&v20[64].Header.Lock, 0x100u);
                    v20 = Event;
                    p_Blink = (struct _LIST_ENTRY *)&Event[1].Header.WaitListHead.Blink;
                    for ( i = Event[1].Header.WaitListHead.Blink; i != p_Blink; i = i->Flink )
                    {
                      if ( ((__int64)i[-23].Blink & 1) == 0 )
                        PspAddProcessToWorkingSetChangeList(&i[-93].Blink);
                    }
                    v13 = v134;
                  }
                  ExReleaseResourceLite((PERESOURCE)&v20[2].Header.WaitListHead);
                  if ( v52 )
                    PspApplyWorkingSetLimits(v20);
                  if ( v142 )
                    SeReleaseSubjectContext(v142);
                  if ( !P )
                    goto LABEL_495;
                  ExFreePoolWithTag(P, 0x614A7350u);
                  v55 = *(char **)&Size[1];
LABEL_241:
                  PsReturnSharedPoolQuota(v55, 0x28uLL, 0LL);
                  goto LABEL_495;
                }
                if ( ((__int64)v20[10].Header.WaitListHead.Blink & 0x10) != 0 )
                {
                  KeFirstGroupAffinityEx((__int64)&v162, &v20[11]);
                  Group = v162.m128i_u16[4];
                }
                else
                {
                  Group = KeGetCurrentPrcb()->Group;
                  v162.m128i_i16[4] = Group;
                }
                if ( v199[6] != (qword_140D1EFE8[Group] & v199[6]) )
                {
                  v20 = Event;
                  goto LABEL_154;
                }
                if ( LOWORD(v200[67]) <= (unsigned int)v162.m128i_i16[4] )
                {
                  if ( WORD1(v200[67]) <= (unsigned int)v162.m128i_i16[4] )
                  {
LABEL_165:
                    v20 = Event;
                    v13 = PspEnumJobsAndProcessesInJobHierarchy(
                            Event,
                            0,
                            0,
                            (int)PspSetAffinityLimitCallback,
                            (__int64)&SubjectContext,
                            1);
                    v134 = v13;
                    if ( v13 < 0 )
                      goto LABEL_155;
                    v47 = *(_QWORD *)&v20[22].Header.Lock;
                    if ( v47 )
                    {
                      v174 = *(_OWORD *)(v47 + 8);
                      v175 = *(_OWORD *)(v47 + 24);
                      v142 = (PSECURITY_SUBJECT_CONTEXT)&v174;
                    }
                    else
                    {
                      *(_QWORD *)&v20[22].Header.Lock = P;
                      v20[22].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)&Size[1];
                      P = 0LL;
                      v142 = 0LL;
                    }
                    v48 = *(struct _SECURITY_SUBJECT_CONTEXT **)&v20[22].Header.Lock;
                    *v48 = SubjectContext;
                    v48[1].ClientToken = v157;
                    goto LABEL_172;
                  }
                  LOWORD(v200[67]) = v162.m128i_i16[4] + 1;
                }
                v200[v162.m128i_u16[4] + 68] |= v199[6];
                goto LABEL_165;
              }
LABEL_351:
              v13 = -1073741811;
              goto LABEL_495;
            }
            v143 = 0LL;
            *(__m128i *)BugCheckParameter1 = *v9;
            if ( !BugCheckParameter1[1] )
            {
              v20 = Event;
              ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
              if ( v20 )
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&v20[52], 0LL);
              v21 = *(void **)&v20[23].Header.Lock;
              *(_QWORD *)&v20[23].Header.Lock = 0LL;
              PspUnlockJobMemoryLimitsExclusive(v20, 0LL, 0LL);
              ExReleaseResourceLite((PERESOURCE)&v20[2].Header.WaitListHead);
              if ( v21 )
                ObfDereferenceObjectWithTag(v21, 0x624A7350u);
              goto LABEL_495;
            }
            v13 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1[1], 0x624A7350u, (__int64)&Object, 0LL, 0LL);
            v20 = Event;
            if ( v13 >= 0 )
            {
              if ( Event[50].Header.WaitListHead.Blink )
              {
                MiniCompletionPacket = 0LL;
              }
              else
              {
                MiniCompletionPacket = IoAllocateMiniCompletionPacket(&PspNotificationPacketCallback, Event);
                v143 = MiniCompletionPacket;
                if ( !MiniCompletionPacket )
                {
                  v13 = -1073741670;
                  goto LABEL_66;
                }
              }
              ExAcquireResourceExclusiveLite((PERESOURCE)&v20[2].Header.WaitListHead, 1u);
              if ( *(_QWORD *)&v20[23].Header.Lock
                || ((__int64)v20[10].Header.WaitListHead.Blink & 0x2000) != 0 && (v20[64].Header.LockNV & 1) != 0 )
              {
                ExReleaseResourceLite((PERESOURCE)&v20[2].Header.WaitListHead);
                ObfDereferenceObjectWithTag(Object, 0x624A7350u);
                v13 = -1073741811;
                MiniCompletionPacket = v143;
              }
              else
              {
                if ( v20[50].Header.WaitListHead.Blink )
                {
                  MiniCompletionPacket = v143;
                }
                else
                {
                  v20[50].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MiniCompletionPacket;
                  MiniCompletionPacket = 0LL;
                }
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&v20[52], 0LL);
                v20[23].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)BugCheckParameter1[0];
                *(_QWORD *)&v20[23].Header.Lock = Object;
                v20[23].Header.WaitListHead.Blink = 0LL;
                PspUnlockJobMemoryLimitsExclusive(v20, 0LL, 0LL);
                if ( ((__int64)v20[45].Header.WaitListHead.Flink & 0x40) != 0 )
                  PspEnumJobsAndProcessesInJobHierarchy(
                    v20,
                    0,
                    0,
                    (int)PspAssociateCompletionPortCallback,
                    (__int64)v20,
                    1);
                ExReleaseResourceLite((PERESOURCE)&v20[2].Header.WaitListHead);
              }
              goto LABEL_66;
            }
            MiniCompletionPacket = 0LL;
LABEL_66:
            if ( MiniCompletionPacket )
            {
              *(_QWORD *)(MiniCompletionPacket + 56) = 0LL;
              IopFreeMiniCompletionPacket(MiniCompletionPacket);
            }
            goto LABEL_495;
          }
          v171 = v9->m128i_i32[0];
          v23 = v171;
          v20 = Event;
          if ( v171 > 1 )
            goto LABEL_351;
          ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
          HIDWORD(v20[22].Header.WaitListHead.Blink) = v23;
          goto LABEL_70;
        }
        v148 = v9->m128i_i32[0];
        v20 = Event;
        if ( (v148 & 0xFFFFFE00) != 0 )
          goto LABEL_351;
        v25 = 8;
        PspLockJobChain((__int64)Event, (__int64)Thread, 0);
        if ( (unsigned __int8)PspDoesJobHierarchyPermitUILimits((__int64)v20) )
        {
          if ( v20[24].Header.LockNV == -2 )
          {
            v13 = -1073741790;
          }
          else
          {
            v20 = Event;
            PspBindProcessSessionToJob((__int64)Event, (__int64)KeGetCurrentThread()->ApcState.Process);
            v152 = *v26;
            if ( v152 > 0xFFFFFFFD )
              goto LABEL_81;
            if ( LODWORD(v20[22].Header.WaitListHead.Blink) == v148 )
              goto LABEL_81;
            v179 = 0;
            PspUnlockJobChain((__int64)v20, (__int64)Thread, 1);
            v25 = 0;
            v177 = v20;
            v178 = 0;
            v180 = v148;
            v13 = PsInvokeWin32Callout(6LL, &v177, 1LL, &v152);
            v134 = v13;
            if ( v13 >= 0 )
            {
LABEL_81:
              LODWORD(v20[22].Header.WaitListHead.Blink) = v148;
              _InterlockedOr(&v20[64].Header.Lock, 0x10u);
              v20 = Event;
              v13 = v134;
            }
          }
        }
        else
        {
          v13 = -1073741637;
        }
        v27 = Thread;
        v28 = (__int64)v20;
        if ( v25 == 8 )
        {
LABEL_83:
          PspUnlockJobChain(v28, (__int64)v27, 0);
          goto LABEL_495;
        }
LABEL_448:
        PspUnlockJob(v28, (__int64)v27);
        goto LABEL_495;
      }
      if ( (_DWORD)v5 != 15 )
      {
        if ( (_DWORD)v5 != 16 )
        {
          if ( (_DWORD)v5 == 18 )
          {
            v191 = *v9;
            if ( v191.m128i_i32[0]
              && (v191.m128i_i32[0] & 0xFFFFFFF0) == 0
              && ((v191.m128i_i8[0] & 1) != 0 || (v191.m128i_i8[0] & 8) == 0) )
            {
              v20 = Event;
              v13 = PspFreezeJobTree(Event, &v191);
              if ( v13 >= 0 )
                v9->m128i_i32[0] = v191.m128i_i32[0];
              goto LABEL_495;
            }
            goto LABEL_467;
          }
          if ( (_DWORD)v5 != 21 )
          {
            switch ( (_DWORD)v5 )
            {
              case 0x16:
                LOBYTE(v135) = v9->m128i_i8[0];
                v20 = Event;
                ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                if ( (v20[64].Header.LockNV & 0x20) == 0 )
                  goto LABEL_250;
                v74 = *(_QWORD *)&v20[51].Header.Lock;
                v75 = *(_DWORD *)(v74 + 40);
                if ( (v75 & 0x40) != 0 )
                  goto LABEL_250;
                if ( (v75 & 0x21) != 0 )
                {
                  v13 = -1073741637;
                  goto LABEL_70;
                }
                if ( ((v75 >> 3) & 1) == ((_BYTE)v135 != 0) )
                  goto LABEL_250;
                LOBYTE(v73) = -(char)v135;
                *(_DWORD *)(v74 + 40) = ((_BYTE)v135 != 0 ? 8 : 0) | v75 & 0xFFFFFFF7;
                KeSetSchedulingGroupRankBias(*(_QWORD *)&v20[51].Header.Lock + 128LL, v135, v73);
                PspEnumJobsAndProcessesInJobHierarchy(
                  v20,
                  0,
                  0,
                  (int)PspSetProcessCacheIsolationCallback,
                  (__int64)&v135,
                  1);
                break;
              case 0x17:
                if ( v9->m128i_i8[0] != 1 )
                {
                  v13 = -1073741811;
                  v134 = -1073741811;
                  v20 = Event;
                  goto LABEL_495;
                }
                v20 = Event;
                PspEnumJobsAndProcessesInJobHierarchy(
                  Event,
                  0,
                  (int)PspEnableTimerVirtualization,
                  (int)PspEnableProcessTimerVirtualization,
                  0LL,
                  0);
                goto LABEL_324;
              case 0x18:
                v70 = v9->m128i_i64[0];
                v184 = v9->m128i_i64[0];
                v20 = Event;
                ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                if ( (v20[64].Header.LockNV & 0x20) == 0 )
                {
LABEL_250:
                  v13 = -1073741811;
LABEL_70:
                  p_WaitListHead = (struct _ERESOURCE *)&v20[2].Header.WaitListHead;
LABEL_71:
                  ExReleaseResourceLite(p_WaitListHead);
                  goto LABEL_495;
                }
                v71 = *(_QWORD *)&v20[51].Header.Lock;
                v72 = *(_DWORD *)(v71 + 40);
                if ( (v72 & 0x10) == 0 )
                {
                  *(_DWORD *)(v71 + 40) = v72 | 0x10;
                  KeInitializeDpc((PRKDPC)(v71 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v20);
                }
                KeSetSchedulingGroupCycleNotification(v71 + 128, v71 + 48, v70);
                break;
              default:
                goto LABEL_456;
            }
            v13 = 0;
            goto LABEL_70;
          }
          v145 = v9->m128i_i8[0];
          v20 = Event;
          v76 = PspSetBackgroundJobTree(Event);
LABEL_265:
          v13 = v76;
          if ( v76 < 0 )
            goto LABEL_495;
          goto LABEL_324;
        }
        v167 = v9->m128i_i32[0];
        v77 = v167;
        v20 = Event;
        if ( (v167 & 0xFFFFC001) != 0 )
          goto LABEL_351;
        ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
        if ( v20 )
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&v20[52], 0LL);
        LODWORD(v20[45].Header.WaitListHead.Flink) = v77;
        PspUnlockJobMemoryLimitsExclusive(v20, 0LL, 0LL);
        goto LABEL_323;
      }
      memmove(&v159, v9, v4);
      v78 = v159;
      if ( (v159 & 0xFFFFFFE0) != 0 )
        goto LABEL_467;
      LODWORD(v140) = HIDWORD(v159);
      Size[0] = v159 & 1;
      if ( (v159 & 1) != 0 )
      {
        if ( (v159 & 2) != 0 )
        {
          if ( (v159 & 0x10) != 0 )
            goto LABEL_467;
          v79 = (unsigned int)(HIDWORD(v159) - 1) <= 8;
        }
        else if ( (v159 & 0x10) != 0 )
        {
          if ( (v159 & 4) != 0 || !WORD2(v159) || WORD2(v159) > HIWORD(v159) )
            goto LABEL_467;
          v79 = HIWORD(v159) <= 0x2710u;
        }
        else
        {
          v79 = (unsigned int)(HIDWORD(v159) - 1) <= 0x270F;
        }
        if ( !v79 )
          goto LABEL_467;
      }
      v20 = Event;
      PspLockJobChain((__int64)Event, (__int64)Thread, 0);
      Lock = v20[64].Header.Lock;
      if ( Size[0] )
      {
        if ( (Lock & 0x20) == 0 )
        {
          RateControl = PspAllocateRateControl(2LL);
          v82 = RateControl;
          if ( !RateControl )
          {
            v13 = -1073741670;
            goto LABEL_321;
          }
          *(_QWORD *)&v20[51].Header.Lock = RateControl;
LABEL_297:
          v83 = v20 + 51;
          *(_QWORD *)&Size[1] = v20 + 51;
          *(_DWORD *)(*(_QWORD *)&v20[51].Header.Lock + 40LL) = 0;
          v84 = WORD2(v159);
          *(_DWORD *)(*(_QWORD *)&v20[51].Header.Lock + 44LL) = HIDWORD(v159);
          if ( Size[0] )
          {
            if ( (v78 & 4) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v83->Header.Lock + 40LL) |= 1u;
              WORD1(v140) = v84;
            }
            if ( (v78 & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v83->Header.Lock + 40LL) |= 4u;
              HIDWORD(v140) = 0;
            }
            else
            {
              HIDWORD(v140) = 1;
              if ( (v78 & 0x14) == 0 )
                WORD1(v140) = 10000;
            }
            if ( (v78 & 8) != 0 )
              *(_DWORD *)(*(_QWORD *)&v83->Header.Lock + 40LL) |= 2u;
            if ( (v78 & 0x10) != 0 )
              *(_DWORD *)(*(_QWORD *)&v83->Header.Lock + 40LL) |= 0x20u;
            v85 = *(_QWORD *)&v83->Header.Lock;
            v86 = (__int64 *)(*(_QWORD *)&v83->Header.Lock + 128LL);
            if ( *(__int64 **)&v83->Header.Lock == v82 )
            {
              *v86 = v140;
              v13 = PspAddSchedulingGroupToJobChain((__int64)v20[53].Header.WaitListHead.Blink, (__int64)v20);
              v134 = v13;
              if ( v13 < 0 )
              {
                v87 = *(_QWORD **)&Size[1];
                if ( **(_QWORD **)&Size[1] )
                {
                  PspFreeRateControl(**(PVOID ***)&Size[1], 2u);
                  *v87 = 0LL;
                }
                goto LABEL_321;
              }
              _InterlockedOr(&v20[64].Header.Lock, 0x20u);
              v20 = Event;
              v83 = *(PRKEVENT *)&Size[1];
            }
            else
            {
              v143 = *(_QWORD *)&v83->Header.Lock + 128LL;
              if ( (*(_DWORD *)(v85 + 40) & 4) != 0 )
                KeSetSchedulingGroupWeights(1u, (__int64)&v143, (__int64)&v140);
              else
                KeSetSchedulingGroupCpuRates((__int64)v86, &v143, &v140);
            }
            v160 = *(_QWORD *)(*(_QWORD *)&v83->Header.Lock + 40LL);
          }
          else
          {
            v140 = 0x327102710LL;
            *(_DWORD *)(*(_QWORD *)&v83->Header.Lock + 40LL) |= 0x40u;
            v88 = v140;
            *(_DWORD *)(*(_QWORD *)&v83->Header.Lock + 44LL) = v140;
            v143 = *(_QWORD *)&v83->Header.Lock + 128LL;
            HIBYTE(v135) = (*(_DWORD *)(v143 + 4) & 4) != 0;
            v20[51].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v20[51].Header.WaitListHead.Blink
                                                                     + KeQuerySchedulingGroupReadyTime(v143));
            KeSetSchedulingGroupCpuRates(v89, &v143, &v140);
            HIDWORD(v160) = v88;
            if ( HIBYTE(v135) )
            {
              HIBYTE(v135) = 0;
              PspEnumJobsAndProcessesInJobHierarchy(
                v20,
                0,
                0,
                (int)PspSetProcessCacheIsolationCallback,
                (__int64)&v135 + 1,
                1);
            }
          }
          v13 = 0;
          if ( (PerfGlobalGroupMask & 0x80000) != 0 )
            EtwTraceJobSetQuery((_DWORD)v20, 15, (unsigned int)&v160, 0, 0, 1829);
LABEL_321:
          v27 = Thread;
          v28 = (__int64)v20;
          goto LABEL_83;
        }
      }
      else if ( (Lock & 0x20) == 0 )
      {
        v13 = -1073741811;
        goto LABEL_321;
      }
      v82 = 0LL;
      goto LABEL_297;
    }
    if ( (int)v5 > 42 )
    {
      if ( (_DWORD)v5 == 43 )
      {
        v186 = v9->m128i_i64[0];
        LOBYTE(v12) = PreviousMode;
        v20 = Event;
        Silo = PspSetJobMemoryPartition(Event, v12);
        goto LABEL_494;
      }
      if ( (_DWORD)v5 == 44 )
      {
        v20 = Event;
        v91 = (struct _ERESOURCE *)&Event[2].Header.WaitListHead;
        ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
        if ( v20[64].Header.LockNV >= 0 )
        {
          v20[61].Header.WaitListHead = (LIST_ENTRY)*v9;
          _InterlockedOr(&v20[64].Header.Lock, 0x80000000);
          ExReleaseResourceLite(v91);
          v13 = 0;
          goto LABEL_457;
        }
        v13 = -1073741791;
LABEL_491:
        p_WaitListHead = v91;
        goto LABEL_71;
      }
      if ( (_DWORD)v5 != 45 )
      {
        if ( (_DWORD)v5 == 46 )
        {
          v163 = v9->m128i_i64[0];
          v20 = Event;
          v76 = PspSetEnergyTrackingStateJobTree(Event, (__int64)&v163);
          goto LABEL_265;
        }
        if ( (_DWORD)v5 != 47 )
        {
          if ( (_DWORD)v5 == 48 )
          {
            v169 = v9->m128i_i64[0];
            if ( (v169 & 0xFFFFFFFE) != 0 || HIDWORD(v169) >= 5 )
              goto LABEL_467;
            v20 = Event;
            PspSetIoPriorityLimitJobTree(Event);
          }
          else
          {
            if ( (_DWORD)v5 != 49 )
              goto LABEL_456;
            v168 = v9->m128i_i64[0];
            if ( (v168 & 0xFFFFFFFE) != 0 || HIDWORD(v168) >= 8 )
              goto LABEL_467;
            v20 = Event;
            if ( (v168 & 1) != 0 && !HIDWORD(v168) )
              goto LABEL_351;
            PspSetPagePriorityLimitJobTree(Event);
          }
LABEL_324:
          v13 = 0;
          goto LABEL_495;
        }
        v147 = v9->m128i_i8[0];
        if ( v147 != 1 )
          goto LABEL_467;
        v126 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
        v20 = Event;
        if ( v126 )
        {
          if ( (Event[64].Header.LockNV & 0x40000000) == 0 )
            goto LABEL_351;
          v13 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Event, 2LL) == 0 ? 0xC0000022 : 0;
LABEL_495:
          v8 = (*(_WORD *)v170)++ == 0xFFFF;
          if ( v8 && ($C71981A45BEB2B45F82C232A7085991E *)Thread->ApcState.ApcListHead[0].Flink != &Thread->152 )
            KiCheckForKernelApcDelivery();
          if ( v13 )
          {
            if ( (PerfGlobalGroupMask & 0x80000) != 0 )
              EtwTraceJobSetQuery((_DWORD)v20, v5, 0, 0, v13, 1831);
          }
          ObfDereferenceObjectWithTag(v20, 0x79517350u);
          return v13;
        }
        goto LABEL_347;
      }
      v20 = Event;
      if ( (Event[64].Header.LockNV & 0x40000000) == 0 )
        goto LABEL_349;
      v164 = 0LL;
      v165 = *v9;
      v127 = _mm_srli_si128(v165, 8).m128i_u64[0];
      if ( !v127 || (unsigned __int16)(v165.m128i_i16[0] - 1) > 0x206u || (v165.m128i_i8[0] & 1) != 0 )
      {
        v13 = -1073741811;
        v134 = -1073741811;
        goto LABEL_495;
      }
      if ( PreviousMode == 1 )
      {
        if ( (v127 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v127 + v165.m128i_u16[0] > 0x7FFFFFFF0000LL || v127 + v165.m128i_u16[0] < v127 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v128 = v165.m128i_u16[0];
      v129 = (wchar_t *)ExAllocatePool2(256LL, v165.m128i_u16[0], 1918071632LL);
      v122 = v129;
      v164 = v129;
      if ( !v129 )
      {
        v13 = -1073741670;
        v134 = -1073741670;
        goto LABEL_495;
      }
      memmove(v129, (const void *)v127, v128);
      if ( wcsnlen(v122, v128 >> 1) == v128 >> 1 )
      {
        v165.m128i_i64[1] = (__int64)v122;
        v13 = PspAssignSiloSystemRootPath(v20, &v165);
      }
      else
      {
        v13 = -1073741811;
      }
      if ( !v122 )
        goto LABEL_495;
      v123 = 1918071632;
LABEL_437:
      ExFreePoolWithTag(v122, v123);
      goto LABEL_495;
    }
    if ( (_DWORD)v5 == 42 )
    {
      v124 = 0;
      *(__m128i *)v187 = *v9;
      *(__m128i *)&v187[16] = v9[1];
      *(__m128i *)&v187[32] = v9[2];
      *(__m128i *)&v187[48] = v9[3];
      *(_QWORD *)&v187[64] = v9[4].m128i_i64[0];
      v20 = Event;
      if ( (*(_DWORD *)v187 & 0xFFFFFFFC) != 0 || (v187[0] & 3) == 0 )
      {
        v13 = -1073741811;
      }
      else
      {
        v124 = 8;
        v125 = Thread;
        PspLockRootJobExclusive((__int64)Event, (__int64)Thread, &v151);
        PspLockJobConditionally((__int64)v20, &v151);
        v13 = PspSetJobIoAttribution(v20);
        if ( v13 >= 0 )
        {
          PspUnlockJobConditionally((__int64)v20, &v151);
          PspUnlockJob(v151, (__int64)v125);
          v124 = 0;
        }
      }
      if ( v124 != 8 )
        goto LABEL_495;
      PspUnlockJobConditionally((__int64)v20, &v151);
      v27 = Thread;
      v28 = v151;
      goto LABEL_448;
    }
    if ( (_DWORD)v5 == 27 )
    {
      v20 = Event;
      if ( Event )
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&Event[52], 0LL);
      v20[29].Header.WaitListHead.Flink = 0LL;
      *(_QWORD *)&v20[29].Header.Lock = 0LL;
      PspUnlockJobMemoryLimitsExclusive(v20, 0LL, 0LL);
      goto LABEL_324;
    }
    if ( (_DWORD)v5 != 31 )
    {
      switch ( (_DWORD)v5 )
      {
        case ' ':
          v20 = Event;
          Silo = PspSetNetRateControl(v9, Size[0], Event);
          break;
        case '!':
LABEL_42:
          if ( (_DWORD)v4 == 48 )
          {
            memmove(&v196, v9, v4);
            v15 = DWORD2(v198);
            v18 = *((_QWORD *)&v196 + 1);
            v19 = v196;
            v190[0] = v196;
            v16 = *((_QWORD *)&v197 + 1);
            v17 = v197;
            v190[1] = v197;
            LODWORD(v190[2]) = v198;
            *(_QWORD *)((char *)&v190[2] + 4) = *(_QWORD *)((char *)&v198 + 4);
            v14 = 459268;
            JobLimitInformationValidFlags = 459268;
          }
          else
          {
            if ( (_DWORD)v4 == 56 )
            {
              memmove(&v192, v9, v4);
              v15 = v195;
              DWORD2(v190[2]) = v195;
              v18 = *((_QWORD *)&v192 + 1);
              v19 = v192;
              v190[0] = v192;
              v97 = *((_QWORD *)&v193 + 1);
              v98 = v193;
              *(_QWORD *)&v190[3] = v98 >> 64;
              v17 = v98;
              *(_QWORD *)&v190[1] = v193;
              v16 = v194;
              *(_OWORD *)((char *)&v190[1] + 8) = v194;
              v14 = 2589188;
              JobLimitInformationValidFlags = 2589188;
              goto LABEL_357;
            }
            memmove(v190, v9, v4);
            v14 = 2064900;
            JobLimitInformationValidFlags = 2064900;
            v15 = DWORD2(v190[2]);
            v16 = *((_QWORD *)&v190[1] + 1);
            v17 = *(_QWORD *)&v190[1];
            v18 = *((_QWORD *)&v190[0] + 1);
            v19 = *(_QWORD *)&v190[0];
          }
          v97 = *(_QWORD *)&v190[3];
LABEL_357:
          if ( (~v14 & (unsigned int)v15) == 0 )
          {
            if ( (v15 & 0x8000) != 0 )
            {
              if ( v97 < 0x1000 )
                goto LABEL_467;
            }
            else
            {
              v97 = 0LL;
              *(_QWORD *)&v190[3] = 0LL;
            }
            if ( (v15 & 0x200) != 0 )
            {
              if ( v16 < 0x1000 || v16 < v97 )
                goto LABEL_467;
            }
            else
            {
              *((_QWORD *)&v190[1] + 1) = 0LL;
            }
            if ( (v15 & 4) != 0 )
            {
              if ( !v17 )
                goto LABEL_467;
            }
            else
            {
              *(_QWORD *)&v190[1] = 0LL;
            }
            if ( (v15 & 0x10000) != 0 )
            {
              if ( !v19 )
                goto LABEL_467;
            }
            else
            {
              *(_QWORD *)&v190[0] = 0LL;
            }
            if ( (v15 & 0x20000) != 0 )
            {
              if ( !v18 )
                goto LABEL_467;
            }
            else
            {
              *((_QWORD *)&v190[0] + 1) = 0LL;
            }
            v99 = 0LL;
            do
            {
              PspNotificationLimitRateControlToleranceField(v190, v99, v15);
              PspNotificationLimitRateControlToleranceIntervalField(v190);
              v101 = PspRateControlLimitFlag(v100);
              if ( (v101 & (unsigned int)v15) != 0 )
              {
                if ( !*v103 || *v103 > 3 || !*v104 || *v104 > 3 )
                  goto LABEL_467;
              }
              else
              {
                *v103 = 0;
                *v104 = 0;
                v15 = DWORD2(v190[2]);
              }
              v99 = (unsigned int)(v102 + 1);
            }
            while ( (int)v99 < 3 );
            v20 = Event;
            v105 = Event + 50;
            if ( *(_QWORD *)&Event[50].Header.Lock )
            {
              v106 = 0LL;
              *(_QWORD *)&Size[1] = 0LL;
              goto LABEL_394;
            }
            v106 = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePool2(256LL, 136LL, 1649046352LL);
            if ( v106 )
            {
              *(_QWORD *)&Size[1] = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 136LL, 0LL);
              v41 = v106;
              if ( !*(_QWORD *)&Size[1] )
              {
                v40 = 1649046352;
                goto LABEL_141;
              }
              memset(v106, 0, 0x88uLL);
              v20 = Event;
LABEL_394:
              v154 = (PERESOURCE)&v20[2].Header.WaitListHead;
              ExAcquireResourceExclusiveLite((PERESOURCE)&v20[2].Header.WaitListHead, 1u);
              if ( *(_QWORD *)&v105->Header.Lock )
              {
                if ( v106 )
                {
                  ExFreePoolWithTag(v106, 0x624A7350u);
                  PsReturnSharedPoolQuota(*(char **)&Size[1], 0x88uLL, 0LL);
                }
              }
              else
              {
                *(_QWORD *)&v105->Header.Lock = v106;
                v20[50].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)&Size[1];
              }
              v107 = *(_QWORD *)&v105->Header.Lock;
              v108 = **(_DWORD **)&v105->Header.Lock;
              *(_OWORD *)(v107 + 8) = v190[0];
              *(_QWORD *)(v107 + 24) = *(_QWORD *)&v190[1];
              v109 = 0LL;
              v110 = (_DWORD *)(v107 + 60);
              do
              {
                v111 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v190, v109, v110);
                *(_DWORD *)(v112 - 12) = *v111;
                v113 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v190);
                *v114 = *v113;
                v109 = (unsigned int)(v115 + 1);
                v110 = v114 + 1;
              }
              while ( (int)v109 < 3 );
              *(_QWORD *)&Size[1] = v20 + 52;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&v20[52], 0LL);
              *(_QWORD *)(v107 + 32) = *(_QWORD *)&v190[3] >> 12;
              *(_QWORD *)(v107 + 40) = *((_QWORD *)&v190[1] + 1) >> 12;
              **(_DWORD **)&v105->Header.Lock = DWORD2(v190[2]);
              PspUnlockJobMemoryLimitsExclusive(v20, 0LL, 0LL);
              if ( (**(_DWORD **)&v105->Header.Lock & 0xFFFF7DFF) != 0 )
              {
                _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                v20 = Event;
              }
              if ( v108 )
              {
                v116 = *(_DWORD **)&v105->Header.Lock;
                if ( **(_DWORD **)&v105->Header.Lock )
                {
LABEL_407:
                  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                    EtwTraceJobSetQuery((_DWORD)v20, v5, (unsigned int)v190, 0, 0, 1829);
                  ExReleaseResourceLite(v154);
                  ExAcquirePushLockSharedEx(*(ULONG_PTR *)&Size[1], 0LL);
                  Blink = v20[64].Header.WaitListHead.Blink;
                  v20 = Event;
                  JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                           (__int64)Event,
                                                           (unsigned __int64)Event[49].Header.WaitListHead.Blink,
                                                           (unsigned __int64)Event[49].Header.WaitListHead.Blink
                                                         + (unsigned __int64)Blink,
                                                           33280);
                  PspUnlockJobMemoryLimitsShared((__int64)v20, 0LL);
                  if ( JobMemoryUsageNotificationViolations )
                  {
                    PspScheduleEnforcementWorker(*(_QWORD *)&v20[54].Header.Lock);
                    v20 = Event;
                  }
                  goto LABEL_324;
                }
              }
              else
              {
                v116 = *(_DWORD **)&v105->Header.Lock;
                if ( !**(_DWORD **)&v105->Header.Lock )
                  goto LABEL_407;
              }
              PspEnumJobsAndProcessesInJobHierarchy(
                v20,
                (int)PspSetJobNotificationCountCallback,
                0,
                0,
                (__int64)v116,
                5);
              goto LABEL_407;
            }
LABEL_138:
            v13 = -1073741670;
            goto LABEL_495;
          }
LABEL_467:
          v13 = -1073741811;
          goto LABEL_457;
        case '#':
          v20 = Event;
          Silo = PspCreateSilo(Event);
          break;
        case '%':
          v96 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v20 = Event;
          if ( !v96 )
            goto LABEL_347;
          if ( (Event[64].Header.LockNV & 0x40000000) == 0 )
            goto LABEL_349;
          if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Event, 4LL) )
            goto LABEL_351;
          v176 = v9->m128i_i32[0];
          Silo = ObCreateSiloRootDirectory(v20);
          break;
        case '(':
          v93 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v20 = Event;
          if ( v93 )
          {
            if ( (Event[64].Header.LockNV & 0x40000000) != 0 )
            {
              if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Event, 4LL) )
                goto LABEL_351;
              v185 = v9->m128i_i64[0];
              v146 = v9->m128i_i8[8];
              LOBYTE(v94) = PreviousMode;
              Silo = PspConvertSiloToServerSilo(v20, v94);
              break;
            }
LABEL_349:
            v13 = -1073740535;
            goto LABEL_495;
          }
LABEL_347:
          v13 = -1073741727;
          goto LABEL_495;
        case ')':
          v166 = v9->m128i_i32[0];
          v20 = Event;
          if ( !PspJobIsAppSilo((__int64)Event) || v90 != 2 )
            goto LABEL_351;
          v91 = (struct _ERESOURCE *)&v20[2].Header.WaitListHead;
          ExAcquireResourceExclusiveLite((PERESOURCE)&v20[2].Header.WaitListHead, 1u);
          if ( v20[60].Header.LockNV )
          {
            v13 = -1073740529;
          }
          else
          {
            v92 = _interlockedbittestandset(&v20[64].Header.Lock, 0x1Du);
            v20 = Event;
            if ( v92 )
            {
              v13 = 255;
            }
            else
            {
              PspHardDereferenceSiloWorker((__int64)Event);
              v13 = 0;
            }
          }
          goto LABEL_491;
        default:
          goto LABEL_456;
      }
LABEL_494:
      v13 = Silo;
      goto LABEL_495;
    }
    memmove(v188, v9, v4);
    if ( v188[3] )
    {
      v119 = v188[5];
      if ( !LOWORD(v188[5]) )
        goto LABEL_425;
      if ( (v188[3] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v188[3] + (unsigned __int64)LOWORD(v188[5]) > 0x7FFFFFFF0000LL
        || v188[3] + (unsigned __int64)LOWORD(v188[5]) < v188[3] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v119 = v188[5];
      }
      if ( !v119 || (v119 & 1) != 0 )
      {
LABEL_425:
        v13 = -1073741811;
        v134 = -1073741811;
        v20 = Event;
        goto LABEL_435;
      }
      v120 = 32;
      if ( PreviousMode == 1 )
        v120 = 257;
      v173[1] = (PVOID)ExAllocatePool2(v120, v119 + 2LL, 1649046352LL);
      if ( !v173[1] )
      {
        v13 = -1073741801;
        v134 = -1073741801;
        v20 = Event;
        goto LABEL_435;
      }
      v121 = v173[1];
      memmove(v173[1], (const void *)v188[3], LOWORD(v188[5]));
      v121[(unsigned __int64)LOWORD(v188[5]) >> 1] = 0;
      v188[3] = v121;
    }
    if ( (v188[4] & 0xFFFFFFF000000000uLL) != 0 )
    {
      v13 = -1073741811;
    }
    else
    {
      if ( !v188[7] && !v188[2] && !v188[10] || (unsigned __int8)PspIsContextAdmin() )
      {
        v20 = Event;
        v13 = PspSetJobIoRateControl(Event);
        goto LABEL_435;
      }
      v13 = -1073741790;
    }
    v20 = Event;
LABEL_435:
    v122 = (wchar_t *)v173[1];
    if ( !v173[1] )
      goto LABEL_495;
    v123 = 0;
    goto LABEL_437;
  }
  return result;
}
