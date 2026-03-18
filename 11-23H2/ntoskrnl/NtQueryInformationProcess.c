/*
 * XREFs of NtQueryInformationProcess @ 0x1406FCA90
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x140206EC4 (ExUnlockUserBuffer.c)
 *     PsGetEffectiveServerSilo @ 0x14020BFF0 (PsGetEffectiveServerSilo.c)
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C40 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 *     MmGetSessionId @ 0x1402A3C40 (MmGetSessionId.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     KeQuerySystemTimePrecise @ 0x1402BE530 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     ExGenRandom @ 0x1403175D0 (ExGenRandom.c)
 *     KeQueryGroupMaskProcess @ 0x14032A180 (KeQueryGroupMaskProcess.c)
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     KeQueryAffinityProcess @ 0x14034C110 (KeQueryAffinityProcess.c)
 *     MmQueryWorkingSetInformation @ 0x14034C258 (MmQueryWorkingSetInformation.c)
 *     PsGetWin32KFilterSet @ 0x14034DEA0 (PsGetWin32KFilterSet.c)
 *     PsQueryProcessCommandLine @ 0x1403546F0 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x140366928 (MmQueryCommitReleaseState.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403B6C80 (xKdEnumerateDebuggingDevices.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1403C7028 (ExQueryHandleExceptionsPermanency.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040FD50 (Feature_FsctlProcessMitigation__private_IsEnabledNoReporting.c)
 *     ZwQueryInformationJobObject @ 0x14041D7E0 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     memset @ 0x140435A00 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x140574FC4 (KeQueryCpuSetsProcess.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     PsReferenceProcessFilePointer @ 0x14069A0A0 (PsReferenceProcessFilePointer.c)
 *     PsQueryRuntimeProcess @ 0x1406B2550 (PsQueryRuntimeProcess.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCopyVirtualMemory @ 0x1406F7910 (MiCopyVirtualMemory.c)
 *     ObQueryDeviceMapInformation @ 0x1406FC310 (ObQueryDeviceMapInformation.c)
 *     PsQueryProcessAttributes @ 0x14071DE14 (PsQueryProcessAttributes.c)
 *     ObOpenObjectByPointer @ 0x1407374D0 (ObOpenObjectByPointer.c)
 *     PsQueryProcessEnergyValues @ 0x140741FD0 (PsQueryProcessEnergyValues.c)
 *     ObGetProcessHandleCount @ 0x1407425D8 (ObGetProcessHandleCount.c)
 *     ObReferenceProcessHandleTable @ 0x140742640 (ObReferenceProcessHandleTable.c)
 *     PsQueryStatisticsProcess @ 0x140742BB0 (PsQueryStatisticsProcess.c)
 *     PsGetProcessDeepFreezeStats @ 0x140751884 (PsGetProcessDeepFreezeStats.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754850 (EtwQueryProcessTelemetryInfo.c)
 *     IoQueryFileDosDeviceName @ 0x14075A8C0 (IoQueryFileDosDeviceName.c)
 *     ObCloseHandle @ 0x14076B890 (ObCloseHandle.c)
 *     PsQueryTotalCycleTimeProcess @ 0x14079F610 (PsQueryTotalCycleTimeProcess.c)
 *     ExEnumHandleTable @ 0x1407ADF70 (ExEnumHandleTable.c)
 *     MmGetSectionInformation @ 0x1407BA090 (MmGetSectionInformation.c)
 *     PspQueryQuotaLimits @ 0x1407BCB94 (PspQueryQuotaLimits.c)
 *     PsQueryFullProcessImageName @ 0x1407CDB78 (PsQueryFullProcessImageName.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407D10C4 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     ExIsRestrictedCaller @ 0x1407D8824 (ExIsRestrictedCaller.c)
 *     PspGetRedirectionTrustPolicy @ 0x1407DE0A8 (PspGetRedirectionTrustPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1407E9E80 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ExSystemExceptionFilter @ 0x140865AA0 (ExSystemExceptionFilter.c)
 *     KeGetExecuteOptions @ 0x140874D88 (KeGetExecuteOptions.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x140875050 (PsQueryProcessSignatureMitigationPolicy.c)
 *     DbgkOpenProcessDebugPort @ 0x140936CE0 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x1409424B0 (VslGetSecurePebAddress.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1409985A8 (PoQueryProcessEnergyTrackingState.c)
 *     PspQueryPooledQuotaLimits @ 0x1409AF3A8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1409AF554 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1409B6300 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1409E8098 (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F8CA0 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryProcessHandleInformation @ 0x1409F8ED4 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x1409F90D8 (ExReferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

int __fastcall NtQueryInformationProcess(
        ULONG_PTR BugCheckParameter1,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  size_t v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdx
  unsigned __int8 PreviousMode; // bl
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  int result; // eax
  __int128 *v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  int DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v21; // r12
  struct _FILE_OBJECT *v22; // rbx
  int v23; // r12d
  POBJECT_NAME_INFORMATION v24; // rbx
  unsigned int v25; // edi
  unsigned __int64 v26; // rdi
  int v27; // r12d
  _KPROCESS *v28; // r13
  unsigned __int16 UserAffinityPrimaryGroup; // dx
  __int64 v30; // rax
  int v31; // eax
  __int16 v32; // cx
  _DWORD *v33; // rdx
  int v34; // ecx
  int v35; // ebx
  _QWORD *v36; // rbx
  struct _EX_RUNDOWN_REF *v37; // rbx
  unsigned int v38; // eax
  __int64 v39; // rcx
  int ExecuteOptions; // ebx
  _DWORD *v41; // rcx
  HANDLE v42; // rdx
  int ProcessHandleCount; // edi
  int ProcessTelemetryCoverage; // eax
  int v45; // ebx
  int v46; // ebx
  unsigned int v47; // edi
  __int64 v48; // r9
  int SessionId; // ebx
  __int64 EffectiveServerSilo; // rax
  unsigned __int64 *v51; // rax
  int v52; // ebx
  unsigned __int64 v53; // r13
  int v54; // edi
  struct _EX_RUNDOWN_REF *v55; // r12
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // r8
  unsigned int v60; // ecx
  __int64 v61; // rdx
  _OWORD *v62; // rax
  __int64 v63; // r9
  int v64; // eax
  PVOID v65; // r12
  void *Process; // r10
  void *v67; // r10
  _DWORD *p_LockNV; // rcx
  int v69; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v72; // ecx
  unsigned __int64 v73; // rax
  struct _EX_RUNDOWN_REF *v74; // r13
  void *Ptr; // r12
  int v76; // ecx
  __int64 v77; // rdx
  int v78; // ebx
  PVOID v79; // rdi
  unsigned int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rax
  HANDLE v83; // rax
  ULONG_PTR v84; // rdi
  int ProcessHandleInformation; // edi
  PVOID v86; // rcx
  __int64 v87; // rsi
  PVOID v88; // rbx
  __int64 v89; // rdi
  int v90; // r12d
  int v91; // ecx
  __int64 v92; // rcx
  unsigned int GroupMaskProcess; // ecx
  void *v94; // r8
  unsigned int v95; // edx
  unsigned int v96; // eax
  unsigned int v97; // ebx
  __int64 v98; // rbx
  PVOID v99; // rbx
  __int64 v100; // rax
  __int64 *v101; // rcx
  void *v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rcx
  unsigned int v105; // eax
  __int64 v106; // rbx
  struct _EX_RUNDOWN_REF *v107; // r14
  __int64 v108; // rax
  int v109; // edi
  __int64 v110; // rax
  int v111; // ecx
  int v112; // eax
  int v113; // ecx
  int v114; // eax
  int v115; // ecx
  int v116; // eax
  int v117; // ecx
  int v118; // eax
  int v119; // ecx
  int v120; // eax
  int v121; // ecx
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int RedirectionTrustPolicy; // eax
  int v128; // eax
  int v129; // eax
  int v130; // edi
  __int64 v131; // rax
  int v132; // ebx
  struct _EX_RUNDOWN_REF *v133; // rbx
  __int64 v134; // rax
  char v135; // r9
  PVOID v136; // rbx
  int ProcessCommandLine; // eax
  PVOID v138; // r8
  __int64 v139; // rax
  __int64 v140; // r8
  unsigned int v141; // ebx
  _QWORD *p_Lock; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v144; // eax
  int v145; // eax
  size_t v146; // r8
  unsigned __int64 ExtensionTable; // rdi
  int v148; // ebx
  __int64 (__fastcall *v149)(PVOID, __int64 *); // rax
  PVOID v150; // rdi
  _DWORD *v151; // r8
  int v152; // ecx
  __int64 v153; // rax
  int v154; // ebx
  _DWORD *v155; // r8
  _KPROCESS *v156; // r10
  __int64 v157; // rbx
  _QWORD *v158; // rdi
  __int64 v159; // rcx
  int v160; // ecx
  _KPROCESS *v161; // rcx
  __int64 v162; // rdx
  __int64 *v163; // rax
  int v164; // eax
  signed __int32 v165[8]; // [rsp+0h] [rbp-768h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-748h]
  PVOID Object; // [rsp+40h] [rbp-728h] BYREF
  int i; // [rsp+48h] [rbp-720h]
  _BYTE v169[2]; // [rsp+4Ch] [rbp-71Ch] BYREF
  char v170; // [rsp+4Eh] [rbp-71Ah] BYREF
  char v171; // [rsp+4Fh] [rbp-719h] BYREF
  PVOID P; // [rsp+50h] [rbp-718h] BYREF
  unsigned __int16 v173; // [rsp+58h] [rbp-710h] BYREF
  ULONG_PTR v174; // [rsp+60h] [rbp-708h]
  int v175; // [rsp+68h] [rbp-700h] BYREF
  unsigned int v176; // [rsp+6Ch] [rbp-6FCh] BYREF
  unsigned __int64 p_Process; // [rsp+70h] [rbp-6F8h] BYREF
  __int16 v178; // [rsp+78h] [rbp-6F0h]
  PVOID v179; // [rsp+80h] [rbp-6E8h] BYREF
  int v180; // [rsp+88h] [rbp-6E0h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-6D8h] BYREF
  unsigned int v182; // [rsp+98h] [rbp-6D0h]
  struct _OBJECT_NAME_INFORMATION v183; // [rsp+A0h] [rbp-6C8h] BYREF
  __int128 v184; // [rsp+B0h] [rbp-6B8h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-6A8h] BYREF
  struct _KTHREAD *v186; // [rsp+C8h] [rbp-6A0h]
  int v187; // [rsp+D0h] [rbp-698h]
  int v188; // [rsp+D4h] [rbp-694h] BYREF
  unsigned int v189; // [rsp+D8h] [rbp-690h]
  unsigned int v190; // [rsp+DCh] [rbp-68Ch] BYREF
  __int64 v191; // [rsp+E0h] [rbp-688h]
  unsigned int *v192; // [rsp+E8h] [rbp-680h]
  unsigned __int64 v193; // [rsp+F0h] [rbp-678h]
  struct _OBJECT_NAME_INFORMATION v194; // [rsp+100h] [rbp-668h] BYREF
  unsigned int v195; // [rsp+110h] [rbp-658h]
  int v196; // [rsp+118h] [rbp-650h]
  int v197; // [rsp+11Ch] [rbp-64Ch] BYREF
  __int64 v198; // [rsp+120h] [rbp-648h] BYREF
  __int64 v199; // [rsp+128h] [rbp-640h] BYREF
  int v200; // [rsp+130h] [rbp-638h]
  PVOID v201; // [rsp+138h] [rbp-630h] BYREF
  __int64 v202; // [rsp+140h] [rbp-628h] BYREF
  HANDLE v203[5]; // [rsp+148h] [rbp-620h] BYREF
  __int64 v204; // [rsp+170h] [rbp-5F8h]
  __int128 v205; // [rsp+178h] [rbp-5F0h] BYREF
  __int64 v206; // [rsp+188h] [rbp-5E0h]
  __int64 v207; // [rsp+190h] [rbp-5D8h]
  __int64 v208; // [rsp+198h] [rbp-5D0h]
  __int64 v209; // [rsp+1A0h] [rbp-5C8h]
  __int64 v210; // [rsp+1A8h] [rbp-5C0h]
  int v211; // [rsp+1B0h] [rbp-5B8h]
  int v212; // [rsp+1B4h] [rbp-5B4h]
  struct _KTHREAD *v214; // [rsp+1C0h] [rbp-5A8h]
  unsigned __int128 v215; // [rsp+1C8h] [rbp-5A0h]
  unsigned __int128 v216; // [rsp+1D8h] [rbp-590h]
  unsigned __int128 v217; // [rsp+1E8h] [rbp-580h]
  __int128 Src; // [rsp+200h] [rbp-568h] BYREF
  __int128 v219; // [rsp+210h] [rbp-558h] BYREF
  __int128 v220; // [rsp+220h] [rbp-548h] BYREF
  __int128 v221; // [rsp+230h] [rbp-538h]
  __int128 v222; // [rsp+240h] [rbp-528h]
  __int128 v223; // [rsp+250h] [rbp-518h]
  __int128 v224; // [rsp+260h] [rbp-508h] BYREF
  __int128 v225; // [rsp+270h] [rbp-4F8h] BYREF
  __int128 v226; // [rsp+280h] [rbp-4E8h]
  _OWORD v227[2]; // [rsp+290h] [rbp-4D8h] BYREF
  __int128 v228; // [rsp+2B0h] [rbp-4B8h]
  __int128 v229; // [rsp+2C0h] [rbp-4A8h]
  __int128 v230; // [rsp+2D0h] [rbp-498h]
  __int128 v231; // [rsp+2E0h] [rbp-488h]
  __int64 v232; // [rsp+2F0h] [rbp-478h]
  unsigned __int64 v233; // [rsp+300h] [rbp-468h]
  ULONG_PTR v234; // [rsp+308h] [rbp-460h]
  unsigned __int64 v235; // [rsp+310h] [rbp-458h]
  __int128 v236; // [rsp+318h] [rbp-450h] BYREF
  __int64 v237; // [rsp+328h] [rbp-440h] BYREF
  int v238; // [rsp+330h] [rbp-438h]
  __int128 v239; // [rsp+338h] [rbp-430h]
  __int128 v240; // [rsp+348h] [rbp-420h]
  __int64 v241; // [rsp+358h] [rbp-410h]
  $115DCDF994C6370D29323EAB0E0C9502 v242; // [rsp+360h] [rbp-408h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v243; // [rsp+390h] [rbp-3D8h] BYREF
  __int128 v244; // [rsp+3C0h] [rbp-3A8h]
  __int128 v245; // [rsp+3D0h] [rbp-398h]
  __int128 v246; // [rsp+3E0h] [rbp-388h]
  __int128 v247; // [rsp+3F0h] [rbp-378h]
  __int128 v248; // [rsp+400h] [rbp-368h]
  __int128 v249; // [rsp+410h] [rbp-358h]
  __int128 v250; // [rsp+420h] [rbp-348h]
  __int128 v251; // [rsp+430h] [rbp-338h]
  __int128 v252; // [rsp+440h] [rbp-328h]
  __int64 v253; // [rsp+450h] [rbp-318h]
  _OWORD v254[27]; // [rsp+460h] [rbp-308h] BYREF
  _QWORD v255[34]; // [rsp+610h] [rbp-158h] BYREF

  v5 = a4;
  v6 = a3;
  v174 = BugCheckParameter1;
  v193 = a3;
  v195 = a4;
  v192 = a5;
  memset(&v242, 0, sizeof(v242));
  v9 = 0LL;
  v175 = 0;
  Handle = 0LL;
  v180 = 0;
  memset(v255, 0, 0x108uLL);
  v179 = 0LL;
  v176 = 0;
  v197 = 0;
  v212 = 0;
  v215 = 0LL;
  v216 = 0LL;
  v217 = 0LL;
  v244 = 0LL;
  v245 = 0LL;
  v246 = 0LL;
  v247 = 0LL;
  v248 = 0LL;
  v249 = 0LL;
  v250 = 0LL;
  v251 = 0LL;
  v252 = 0LL;
  v253 = 0LL;
  memset(&v203[1], 0, 32);
  v204 = 0LL;
  v191 = 0LL;
  v236 = 0LL;
  v198 = 0LL;
  v239 = 0LL;
  v240 = 0LL;
  v241 = 0LL;
  v199 = 0LL;
  ObjectNameInformation = 0LL;
  v173 = 0;
  v178 = 0;
  Object = 0LL;
  v202 = 0LL;
  v190 = 0;
  memset(v227, 0, sizeof(v227));
  v228 = 0LL;
  v229 = 0LL;
  v230 = 0LL;
  v231 = 0LL;
  v232 = 0LL;
  Src = 0LL;
  v219 = 0LL;
  v220 = 0LL;
  v221 = 0LL;
  v222 = 0LL;
  v223 = 0LL;
  v224 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v169[1] = PreviousMode;
  CurrentThread = KeGetCurrentThread();
  v186 = CurrentThread;
  v214 = CurrentThread;
  if ( PreviousMode )
  {
    if ( a2 != 61 )
    {
      if ( a2 == 65 )
      {
        v13 = 7LL;
LABEL_14:
        if ( (_DWORD)v5 )
        {
          if ( (v6 & v13) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = v6 + v5;
          v14 = 0x7FFFFFFF0000LL;
          if ( v6 + v5 > 0x7FFFFFFF0000LL || v10 < v6 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v14 = 0x7FFFFFFF0000LL;
        }
        if ( a5 )
        {
          v15 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
            v15 = (__int64)a5;
          *(_DWORD *)v15 = *(_DWORD *)v15;
          CurrentThread = v186;
        }
        goto LABEL_26;
      }
      if ( ((a2 - 70) & 0xFFFFFFFB) != 0 )
      {
        if ( a2 == 92 )
        {
          v13 = 7LL;
        }
        else if ( a2 == 94 )
        {
          v13 = 7LL;
        }
        else
        {
          v13 = 3LL;
          if ( a2 == 87 )
            v13 = 0LL;
        }
        goto LABEL_14;
      }
    }
    v13 = 0LL;
    goto LABEL_14;
  }
  v14 = 0x7FFFFFFF0000LL;
LABEL_26:
  switch ( a2 )
  {
    case 0:
      v169[0] = 0;
      if ( (_DWORD)v5 == 64 )
      {
        v26 = v6;
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
        v179 = (PVOID)64;
        *(_QWORD *)v6 = 64LL;
        v6 += 8LL;
        v175 = 64;
      }
      else
      {
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        v26 = 0LL;
        ObjectNameInformation = 0LL;
        v179 = (PVOID)48;
        v175 = 48;
      }
      p_Process = v6;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v27 = result;
      i = result;
      if ( result < 0 )
        return result;
      v28 = (_KPROCESS *)Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 501);
      *(_QWORD *)(v6 + 8) = v28[1].Affinity.StaticBitmap[24];
      if ( (v28->SecureState.SecureHandle & 1) != 0 )
        VslGetSecurePebAddress(v28);
      if ( v27 < 0 )
        goto LABEL_65;
      ObjectNameInformation = 0LL;
      if ( (*(_DWORD *)&v28->0 & 0x1000) != 0 )
      {
        p_Process = (unsigned __int64)&v186->Process;
        if ( v28 != v186->Process )
          goto LABEL_76;
      }
      else
      {
        p_Process = (unsigned __int64)&v214->Process;
      }
      LODWORD(v255[0]) = 2097153;
      memset((char *)v255 + 4, 0, 0x104uLL);
      KeQueryAffinityProcess((__int64)v28, (__int64)v255, &v176, 0LL, &v173);
      if ( v28 == *(_KPROCESS **)p_Process )
      {
        UserAffinityPrimaryGroup = v186->UserAffinityPrimaryGroup;
        v30 = v176;
        if ( !_bittest64(&v30, UserAffinityPrimaryGroup) )
          goto LABEL_76;
      }
      else
      {
        UserAffinityPrimaryGroup = v173;
      }
      if ( UserAffinityPrimaryGroup != 32 )
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v255[UserAffinityPrimaryGroup + 1];
LABEL_76:
      if ( v26 )
        PsQueryProcessAttributes(v28, v169, 0LL);
      *(_QWORD *)(v6 + 16) = ObjectNameInformation;
      *(_DWORD *)(v6 + 24) = v28->BasePriority;
      *(_QWORD *)(v6 + 32) = v28[1].Header.WaitListHead.Flink;
      *(_QWORD *)(v6 + 40) = v28[1].Affinity.StaticBitmap[22];
      if ( v26 )
      {
        *(_DWORD *)(v26 + 56) = 0;
        if ( (BYTE2(v28[2].Header.WaitListHead.Flink) & 7) != 0 )
        {
          *(_DWORD *)(v26 + 56) = 1;
          v31 = 3;
        }
        else
        {
          v31 = 2;
        }
        if ( v28[1].Affinity.StaticBitmap[30] )
        {
          v32 = WORD2(v28[2].Affinity.StaticBitmap[20]);
          if ( v32 == 332 || v32 == 452 )
            *(_DWORD *)(v26 + 56) = v31;
        }
        if ( (v28[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
          *(_DWORD *)(v26 + 56) |= 4u;
        v33 = Object;
        v34 = *(_DWORD *)(v26 + 56) ^ ((unsigned __int8)*(_DWORD *)(v26 + 56) ^ (unsigned __int8)(*((_DWORD *)Object
                                                                                                  + 280) >> 4)) & 8;
        *(_DWORD *)(v26 + 56) = v34;
        if ( v33[222] + ((v33[158] >> 3) & 1) )
          *(_DWORD *)(v26 + 56) = v34 | 0x10;
        if ( *((_QWORD *)v33 + 162) && *(_DWORD *)(*((_QWORD *)Object + 162) + 1056LL) )
          *(_DWORD *)(v26 + 56) |= 0x20u;
        if ( v169[0] )
          *(_DWORD *)(v26 + 56) |= 0x40u;
        v28 = (_KPROCESS *)Object;
        if ( (*((_BYTE *)Object + 992) & 1) != 0 )
          *(_DWORD *)(v26 + 56) |= 0x80u;
        if ( *(_QWORD *)&v28[2].Affinity.Count )
          *(_DWORD *)(v26 + 56) |= 0x100u;
        v27 = i;
      }
      if ( a5 )
        *a5 = (unsigned int)v179;
LABEL_65:
      ObfDereferenceObjectWithTag(v28, 0x79517350u);
      return v27;
    case 1:
      return PspQueryQuotaLimits(BugCheckParameter1, (__int64)a5, PreviousMode);
    case 2:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        PsQueryStatisticsProcess(Object, v227);
        v215 = __PAIR128__(v229, *((unsigned __int64 *)&v228 + 1));
        v216 = __PAIR128__(v230, *((unsigned __int64 *)&v229 + 1));
        v217 = __PAIR128__(v231, *((unsigned __int64 *)&v230 + 1));
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)v6 = v215;
        *(_OWORD *)(v6 + 16) = v216;
        *(_OWORD *)(v6 + 32) = v217;
        if ( a5 )
          *a5 = 48;
        return DeviceMapInformation;
      }
      return result;
    case 3:
      if ( (((_DWORD)v5 - 88) & 0xFFFFFFE7) != 0 || (_DWORD)v5 == 104 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        Src = *((_OWORD *)Object + 73);
        LODWORD(v219) = *((_DWORD *)Object + 417);
        v36 = Object;
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v242);
        i = MmQueryWorkingSetInformation((_QWORD *)&v219 + 1, &v220, &v224, &v199, &v198, &v197);
        KiUnstackDetachProcess(&v242);
        *(_QWORD *)&v221 = v36[143];
        *((_QWORD *)&v220 + 1) = *((_QWORD *)Object + 145);
        *(_QWORD *)&v222 = *((_QWORD *)Object + 142);
        *((_QWORD *)&v221 + 1) = *((_QWORD *)Object + 144);
        *((_QWORD *)&v222 + 1) = *((_QWORD *)Object + 201) << 12;
        *(_QWORD *)&v223 = *((_QWORD *)Object + 202) << 12;
        *((_QWORD *)&v224 + 1) = *((_QWORD *)Object + 293) << 12;
        *((_QWORD *)&v223 + 1) = *((_QWORD *)&v222 + 1);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = i;
        if ( i >= 0 )
        {
          memmove((void *)v6, &Src, v5);
          if ( a5 )
            *a5 = v5;
          return 0;
        }
      }
      return result;
    case 4:
      if ( (_DWORD)v5 != 32 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v37 = (struct _EX_RUNDOWN_REF *)Object;
        v38 = PsQueryRuntimeProcess((__int64)Object, &v190);
        v39 = (unsigned int)KeMaximumIncrement;
        *(_QWORD *)(v6 + 16) = (unsigned int)KeMaximumIncrement * (unsigned __int64)v38;
        *(_QWORD *)(v6 + 24) = v39 * v190;
        *(struct _EX_RUNDOWN_REF *)v6 = v37[141];
        *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v37[264];
        if ( a5 )
          *a5 = 32;
        goto LABEL_386;
      }
      return result;
    case 7:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        Handle = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 175) >> 64);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = Handle;
        if ( a5 )
          *a5 = 8;
        return 0;
      }
      return result;
    case 10:
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1040,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
        goto LABEL_158;
      }
      return result;
    case 12:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v35 = *((_DWORD *)Object + 382);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v35;
        if ( a5 )
          *a5 = 4;
        return 0;
      }
      return result;
    case 14:
      return PspQueryPooledQuotaLimits(BugCheckParameter1, PreviousMode);
    case 15:
    case 42:
      return PspQueryWorkingSetWatch(BugCheckParameter1, (__int64)a5, PreviousMode);
    case 18:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        HIBYTE(v178) = *((_BYTE *)Object + 1463);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v178;
        if ( a5 )
          *a5 = 2;
        return 0;
      }
      return result;
    case 19:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               BugCheckParameter1,
                               1024,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v45 = *((_BYTE *)Object + 1127) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v45;
        if ( a5 )
          *a5 = 4;
      }
      return DeviceMapInformation;
    case 20:
      LODWORD(P) = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessHandleCount = ObGetProcessHandleCount(Object, &P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = (_DWORD)P;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 21:
      if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v37 = (struct _EX_RUNDOWN_REF *)Object;
      if ( (*((_DWORD *)Object + 158) & 0x1000) != 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      LODWORD(v255[0]) = 2097153;
      memset((char *)v255 + 4, 0, 0x104uLL);
      KeQueryAffinityProcess((__int64)Object, (__int64)v255, &v176, 0LL, &v173);
      v92 = v255[v173 + 1];
      if ( (_DWORD)v5 == 16 )
        *(_WORD *)(v6 + 8) = v173;
      *(_QWORD *)v6 = v92;
      if ( a5 )
        *a5 = v5;
      goto LABEL_386;
    case 22:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               BugCheckParameter1,
                               4096,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v46 = (*((_DWORD *)Object + 158) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v46;
        if ( a5 )
          *a5 = 4;
      }
      return DeviceMapInformation;
    case 23:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v182 = *(_DWORD *)(v6 + 40);
        v47 = v182;
        if ( (v182 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v47 = 0;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = ObQueryDeviceMapInformation((_KPROCESS *)Object, v6, v47, v48);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && a5 )
        *a5 = v5;
      return DeviceMapInformation;
    case 24:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      SessionId = MmGetSessionId((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = SessionId;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 26:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v51 = (unsigned __int64 *)*((_QWORD *)Object + 176);
      if ( v51 )
        v9 = *v51;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v9;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 27:
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v17 = &v236;
      if ( (unsigned int)v5 >= 0x10 )
        v17 = (__int128 *)v6;
      v18 = v6 + 16;
      v19 = 0LL;
      if ( (unsigned int)v5 >= 0x10 )
      {
        v19 = v18;
        LODWORD(v9) = v5 - 16;
      }
      v175 = v9;
      DeviceMapInformation = PsQueryFullProcessImageName(Object, v17, v19, &v175);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v19 )
        DeviceMapInformation = -1073741820;
      if ( a5 && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *a5 = v175 + 16;
      return DeviceMapInformation;
    case 28:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 1;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 29:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v52 = (*((_DWORD *)Object + 281) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v52;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 30:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, PreviousMode, &Handle);
      v42 = Handle;
      if ( DeviceMapInformation < 0 )
        v42 = 0LL;
      Handle = v42;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handle;
      if ( a5 )
        *a5 = 8;
      return DeviceMapInformation;
    case 31:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) & 2) == 0;
      if ( a5 )
        *a5 = 4;
      goto LABEL_160;
    case 32:
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
        return -1073741790;
      p_Process = (unsigned int)(v5 - 16) / 0xA0uLL;
      v53 = v6 + 16;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v54 = result;
      if ( result >= 0 )
      {
        v55 = (struct _EX_RUNDOWN_REF *)Object;
        v56 = ObReferenceProcessHandleTable(Object);
        v57 = v56;
        v199 = v56;
        if ( v56 )
        {
          v58 = ExReferenceHandleDebugInfo(v56);
          v59 = v58;
          v198 = v58;
          if ( v58 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v60 = *(_DWORD *)(v58 + 4);
            v61 = *(_DWORD *)(v58 + 72) % v60;
            v189 = v61;
            while ( 1 )
            {
              v200 = v9;
              if ( (unsigned int)v9 >= v60 )
                break;
              v62 = (_OWORD *)(v59 + 160 * v61);
              v254[0] = v62[5];
              v254[1] = v62[6];
              v254[2] = v62[7];
              v254[3] = v62[8];
              v254[4] = v62[9];
              v254[5] = v62[10];
              v254[6] = v62[11];
              v254[7] = v62[12];
              v254[8] = v62[13];
              v254[9] = v62[14];
              v63 = *(_QWORD *)&v254[1];
              if ( *(_QWORD *)v6 == *(_QWORD *)&v254[1] || !*(_QWORD *)v6 )
              {
                v64 = DWORD2(v254[1]);
                if ( DWORD2(v254[1]) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)p_Process )
                  {
                    p_Process = (unsigned int)(p_Process - 1);
                    v211 = p_Process;
                    *(_QWORD *)v53 = v63;
                    *(_OWORD *)(v53 + 8) = v254[0];
                    *(_DWORD *)(v53 + 24) = v64;
                    *(_OWORD *)(v53 + 32) = v254[2];
                    *(_OWORD *)(v53 + 48) = v254[3];
                    *(_OWORD *)(v53 + 64) = v254[4];
                    *(_OWORD *)(v53 + 80) = v254[5];
                    *(_OWORD *)(v53 + 96) = v254[6];
                    *(_OWORD *)(v53 + 112) = v254[7];
                    *(_OWORD *)(v53 + 128) = v254[8];
                    *(_OWORD *)(v53 + 144) = v254[9];
                    v53 += 160LL;
                    v233 = v53;
                  }
                  else
                  {
                    v54 = -1073741820;
                    i = -1073741820;
                  }
                }
              }
              if ( (_DWORD)v61 )
              {
                v61 = (unsigned int)(v61 - 1);
                v189 = v61;
                v60 = *(_DWORD *)(v59 + 4);
              }
              else
              {
                v60 = *(_DWORD *)(v59 + 4);
                v61 = v60 - 1;
                v189 = v60 - 1;
              }
              LODWORD(v9) = v9 + 1;
            }
            if ( a5 )
              *a5 = v53 - v6;
            ExDereferenceHandleDebugInfo(v57, v59);
            v65 = Object;
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
            ObfDereferenceObjectWithTag(v65, 0x79517350u);
            return v54;
          }
          else
          {
            ExReleaseRundownProtection_0(v55 + 139);
            ObfDereferenceObjectWithTag(v55, 0x79517350u);
            return -1073741811;
          }
        }
        else
        {
          ObfDereferenceObjectWithTag(v55, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case 33:
    case 110:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      i = result;
      if ( result < 0 )
        return result;
      v76 = (*((_DWORD *)Object + 281) >> 27) & 7;
      if ( a2 == 33 )
      {
        *(_DWORD *)v6 = v76;
      }
      else
      {
        v77 = *((_QWORD *)Object + 162);
        if ( v77 && v76 >= *(_DWORD *)(v77 + 1068) )
          v76 = *(_DWORD *)(v77 + 1068);
        *(_DWORD *)v6 = v76;
        ExecuteOptions = i;
      }
      if ( a5 )
        *a5 = 4;
      goto LABEL_159;
    case 34:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( BugCheckParameter1 == -1LL )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        Process = Object;
      }
      ExecuteOptions = KeGetExecuteOptions(Process, &v180);
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(v67, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v180;
        if ( a5 )
          *a5 = 4;
      }
      return ExecuteOptions;
    case 36:
      p_Process = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( BugCheckParameter1 == -1LL )
      {
        p_LockNV = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = p_LockNV;
      }
      else
      {
        v201 = 0LL;
        result = ObReferenceObjectByHandle(
                   (HANDLE)BugCheckParameter1,
                   0x20u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   &v201,
                   0LL);
        p_LockNV = v201;
        Object = v201;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        v69 = p_LockNV[330];
        if ( v69 )
          break;
        KeQuerySystemTimePrecise(&p_Process);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v72 = ExGenRandom(1);
        v73 = __rdtsc();
        _InterlockedCompareExchange(
          (volatile signed __int32 *)Object + 330,
          v73 ^ v72 ^ CurrentPrcb->MmPageFaultCount ^ p_Process ^ HIDWORD(p_Process) ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        p_LockNV = Object;
      }
      *(_DWORD *)v6 = v69;
      if ( a5 )
        *a5 = 4;
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObject(p_LockNV);
      return v9;
    case 37:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v74 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == v186->Process )
      {
        Ptr = (void *)*((_QWORD *)Object + 163);
        if ( !Ptr )
          result = -1073741558;
        DeviceMapInformation = result;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
      {
        Ptr = v74[163].Ptr;
        if ( Ptr )
          ObfReferenceObject(v74[163].Ptr);
        else
          DeviceMapInformation = -1073741811;
        ExReleaseRundownProtection_0(v74 + 139);
        LODWORD(v9) = 1;
      }
      else
      {
        DeviceMapInformation = -1073741558;
        Ptr = 0LL;
        LODWORD(v9) = 1;
      }
      ObfDereferenceObjectWithTag(v74, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        DeviceMapInformation = MmGetSectionInformation(Ptr, 1LL, v6);
        if ( (_DWORD)v9 )
          ObfDereferenceObject(Ptr);
        if ( DeviceMapInformation >= 0 && a5 )
          *a5 = 64;
      }
      return DeviceMapInformation;
    case 38:
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v78 = result;
      if ( result < 0 )
        return result;
      v79 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, &v202);
      *(_QWORD *)(v6 + 8) = v202;
      if ( a5 )
        *a5 = 16;
      goto LABEL_687;
    case 39:
    case 111:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      i = result;
      if ( result < 0 )
        return result;
      v80 = (*((_DWORD *)Object + 280) >> 12) & 7;
      if ( a2 == 39 )
      {
        *(_DWORD *)v6 = v80;
      }
      else
      {
        v81 = *((_QWORD *)Object + 162);
        if ( v81 && v80 >= *(_DWORD *)(v81 + 1076) )
          v80 = *(_DWORD *)(v81 + 1076);
        *(_DWORD *)v6 = v80;
        ExecuteOptions = i;
      }
      if ( a5 )
        *a5 = 4;
      goto LABEL_159;
    case 43:
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v21 = (struct _EX_RUNDOWN_REF *)Object;
      v22 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 180);
      v179 = v22;
      if ( v22 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          ObfReferenceObject(v22);
          ExReleaseRundownProtection_0(v21 + 139);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer(
                                 (struct _EX_RUNDOWN_REF *)Object,
                                 (unsigned __int64 *)&v179);
        v22 = (struct _FILE_OBJECT *)v179;
      }
      ObfDereferenceObjectWithTag(v21, 0x79517350u);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v23 = IoQueryFileDosDeviceName(v22, &ObjectNameInformation);
      ObfDereferenceObject(v22);
      if ( v23 >= 0 )
      {
        v24 = ObjectNameInformation;
        v25 = ObjectNameInformation->Name.MaximumLength + 16;
        if ( v25 <= (unsigned int)v5 )
        {
          *(_WORD *)v6 = ObjectNameInformation->Name.Length;
          *(_WORD *)(v6 + 2) = v24->Name.MaximumLength;
          if ( v24->Name.MaximumLength )
          {
            v9 = v6 + 16;
            memmove((void *)(v6 + 16), v24->Name.Buffer, v24->Name.MaximumLength);
          }
          *(_QWORD *)(v6 + 8) = v9;
        }
        else
        {
          v23 = -1073741820;
          i = -1073741820;
        }
        if ( a5 )
          *a5 = v25;
        ExFreePoolWithTag(v24, 0);
      }
      return v23;
    case 44:
      P = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v84 = *(_QWORD *)v6;
      v234 = *(_QWORD *)v6;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ExecuteOptions = ObpReferenceObjectByHandleWithTag(
                         v84,
                         1048608,
                         (__int64)IoFileObjectType,
                         PreviousMode,
                         0x79517350u,
                         &v179,
                         0LL,
                         0LL);
      v41 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_160;
      ProcessHandleInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (unsigned __int64 *)&P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v86 = v179;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_396;
      v87 = *((_QWORD *)v179 + 5);
      v88 = P;
      v89 = *((_QWORD *)P + 5);
      v90 = 0;
      if ( v87 != v89 )
        v90 = -1073741823;
      ObfDereferenceObject(v179);
      ObfDereferenceObject(v88);
      result = v90;
      if ( v87 == v89 && a5 )
        *a5 = 0;
      return result;
    case 45:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v182 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v91 = (v182 >> 19) & 1 | 2;
      if ( (v182 & 0x40000) == 0 )
        v91 = (v182 >> 19) & 1;
      *(_DWORD *)v6 = v91;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 46:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v182 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v182 & 0x200000) != 0;
      *(_DWORD *)v6 = v9;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 47:
      if ( !a5 || (v5 & 1) != 0 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
        v176 = GroupMaskProcess;
        do
        {
          _BitScanForward(&v95, GroupMaskProcess);
          v96 = v9 + 2;
          v175 = v9 + 2;
          if ( (int)v9 + 2 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v95;
            v6 += 2LL;
            v235 = v6;
          }
          _bittestandreset((signed __int32 *)&v176, v95);
          LODWORD(v9) = v9 + 2;
          GroupMaskProcess = v176;
        }
        while ( v176 );
        *a5 = v96;
        v97 = (unsigned int)v5 < v96 ? 0xC0000023 : 0;
        i = v97;
        ObfDereferenceObjectWithTag(v94, 0x79517350u);
        return v97;
      }
      return result;
    case 49:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v98 = *((_QWORD *)Object + 169);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v98;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 50:
      memset(&v243, 0, sizeof(v243));
      v187 = 0;
      v183 = 0LL;
      v237 = 0LL;
      if ( PreviousMode != 1 )
        return -1073741823;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 1,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result >= 0 )
      {
        v99 = Object;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          KiStackAttachProcess((_KPROCESS *)v99, 0, (__int64)&v243);
          v100 = 0LL;
          v101 = (__int64 *)*((_QWORD *)v99 + 176);
          if ( v101 )
            v100 = *v101;
          if ( v100 )
          {
            *(_QWORD *)&v194.Name.Length = *(unsigned int *)(v100 + 16);
            v187 = *(_DWORD *)(*(_QWORD *)&v194.Name.Length + 104LL);
            v102 = *(void **)(*(_QWORD *)&v194.Name.Length + 112LL);
            P = v102;
            *(_DWORD *)&v183.Name.Length = (_DWORD)v102;
            v183.Name.Buffer = (wchar_t *)HIDWORD(v102);
          }
          else
          {
            P = *(PVOID *)(*((_QWORD *)v99 + 170) + 32LL);
            v103 = (__int64)P + 164;
            if ( (unsigned __int64)P + 164 >= 0x7FFFFFFF0000LL )
              v103 = 0x7FFFFFFF0000LL;
            v187 = *(_DWORD *)v103;
            v194 = 0LL;
            v104 = (__int64)P + 176;
            if ( (unsigned __int64)P + 176 >= 0x7FFFFFFF0000LL )
              v104 = 0x7FFFFFFF0000LL;
            *(_DWORD *)&v194.Name.Length = *(_DWORD *)v104;
            v194.Name.Buffer = *(wchar_t **)(v104 + 8);
            v183 = v194;
            LOWORD(v102) = v194.Name.Length;
          }
          DeviceMapInformation = i;
          KiUnstackDetachProcess(&v243);
          if ( DeviceMapInformation < 0 )
            goto LABEL_384;
          v105 = (unsigned __int16)v102 + 6;
          if ( a5 )
            *a5 = v105;
          if ( (unsigned int)v5 >= v105 )
          {
            *(_DWORD *)v6 = v187;
            *(_WORD *)(v6 + 4) = (_WORD)v102;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            i = -1073741820;
          }
          if ( DeviceMapInformation >= 0 && (_WORD)v102 )
          {
            v37 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MiCopyVirtualMemory(
                                     (ULONG_PTR)Object,
                                     (char *)v183.Name.Buffer,
                                     (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
                                     (void *)(v6 + 6),
                                     v183.Name.Length,
                                     1,
                                     (size_t *)&v237,
                                     0);
          }
          else
          {
LABEL_384:
            v37 = (struct _EX_RUNDOWN_REF *)Object;
          }
          ExReleaseRundownProtection_0(v37 + 139);
LABEL_386:
          ObfDereferenceObjectWithTag(v37, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_365:
          ObfDereferenceObjectWithTag(v99, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case 51:
      if ( (unsigned int)v5 < 0x10 )
      {
        if ( a5 )
          *a5 = 16;
        return -1073741820;
      }
      P = 0LL;
      result = ObReferenceObjectByHandle(
                 (HANDLE)BugCheckParameter1,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 PreviousMode,
                 &P,
                 0LL);
      if ( result >= 0 )
      {
        v106 = (__int64)v186;
        --v186->KernelApcDisable;
        v107 = (struct _EX_RUNDOWN_REF *)P;
        v108 = ObReferenceProcessHandleTable(P);
        if ( v108 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v108, v6, (unsigned int)v5, a5);
          ExReleaseRundownProtection_0(v107 + 139);
        }
        else
        {
          ProcessHandleInformation = -1073741558;
        }
        KeLeaveCriticalRegionThread(v106);
        v86 = v107;
LABEL_396:
        ObfDereferenceObject(v86);
        return ProcessHandleInformation;
      }
      return result;
    case 52:
      v188 = 0;
      v170 = 0;
      v171 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v109 = *(_DWORD *)v6;
      v196 = *(_DWORD *)v6;
      if ( BugCheckParameter1 == -1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v109 = v196;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   4096,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
      }
      break;
    case 54:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v130 = result;
      i = result;
      if ( result < 0 )
        return result;
      v99 = Object;
      v131 = ObReferenceProcessHandleTable(Object);
      if ( !v131 )
        goto LABEL_365;
      LOBYTE(v9) = (*(_BYTE *)(v131 + 44) & 2) != 0;
      *(_DWORD *)v6 = v9;
      goto LABEL_555;
    case 55:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 619) & 0x7FFFFFFF;
      *(_DWORD *)(v6 + 4) = v41[627] & 0x7FFFFFFF;
      goto LABEL_160;
    case 58:
      *(_QWORD *)&v194.Name.Length = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(v6, v5, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v194, (struct _MDL **)&P);
      if ( result >= 0 )
      {
        v132 = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1088,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
        if ( v132 >= 0 )
        {
          v183 = 0LL;
          v133 = (struct _EX_RUNDOWN_REF *)Object;
          v134 = ObReferenceProcessHandleTable(Object);
          if ( v134 )
          {
            *(_QWORD *)&v183.Name.Length = *(_QWORD *)&v194.Name.Length;
            v183.Name.Buffer = (wchar_t *)((unsigned int)v5 >> 2);
            ExEnumHandleTable(v134, PspHandleTableWalker, &v183, 0LL);
            ExReleaseRundownProtection_0(v133 + 139);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v133, 0x79517350u);
          if ( a5 )
            *a5 = 4 * HIDWORD(v183.Name.Buffer);
          ExUnlockUserBuffer((struct _MDL *)P);
          return v9;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v132;
        }
      }
      return result;
    case 59:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1024,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 158) >> 5) & 1;
      goto LABEL_160;
    case 60:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               BugCheckParameter1,
                               4096,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v135 = PreviousMode;
      v136 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v135, a5);
      goto LABEL_572;
    case 61:
      v23 = ObpReferenceObjectByHandleWithTag(
              BugCheckParameter1,
              4096,
              (__int64)PsProcessType,
              PreviousMode,
              0x79517350u,
              &Object,
              0LL,
              0LL);
      if ( v23 < 0 )
        return v23;
      if ( (_DWORD)v5 )
      {
        v138 = Object;
        *(_BYTE *)v6 = *((_BYTE *)Object + 2170);
        if ( a5 )
          *a5 = 1;
        v23 = 0;
      }
      else
      {
        v23 = -1073741820;
        v138 = Object;
      }
      if ( !v138 )
        return v23;
      ObfDereferenceObjectWithTag(v138, 0x79517350u);
      return v23;
    case 64:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               BugCheckParameter1,
                               4096,
                               (__int64)PsProcessType,
                               PreviousMode,
                               0x79517350u,
                               &Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v136 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                             (ULONG_PTR)Object,
                             (volatile void *)v6,
                             (unsigned int)v5,
                             (__int64)a5);
LABEL_572:
      DeviceMapInformation = ProcessCommandLine;
      if ( v136 )
        goto LABEL_573;
      return DeviceMapInformation;
    case 65:
      LODWORD(P) = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v183 = *(struct _OBJECT_NAME_INFORMATION *)v6;
        v184 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v183.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v183.Name.MaximumLength + 1) >= 8u || v183.Name.Buffer )
          {
            v23 = -1073741811;
          }
          else
          {
            v23 = ObpReferenceObjectByHandleWithTag(
                    BugCheckParameter1,
                    4096,
                    (__int64)PsProcessType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            if ( v23 >= 0 )
            {
              MmQueryCommitReleaseState((_KPROCESS *)Object, &P, &v183.Name.Buffer, &v184, (_QWORD *)&v184 + 1);
              *(_DWORD *)(&v183.Name.MaximumLength + 1) ^= ((unsigned __int8)P ^ *((_BYTE *)&v183.Name.MaximumLength + 2)) & 1;
              v183.Name.Buffer = (wchar_t *)((__int64)v183.Name.Buffer << 12);
              *(_QWORD *)&v184 = (_QWORD)v184 << 12;
              *((_QWORD *)&v184 + 1) <<= 12;
              *(struct _OBJECT_NAME_INFORMATION *)v6 = v183;
              *(_OWORD *)(v6 + 16) = v184;
              v23 = 0;
            }
          }
        }
        else
        {
          v23 = -1073741735;
        }
      }
      else
      {
        v23 = -1073741820;
      }
      if ( !Object )
        return v23;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v23;
    case 66:
    case 67:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
        return -1073741820;
      v23 = ObpReferenceObjectByHandleWithTag(
              BugCheckParameter1,
              4096,
              (__int64)PsProcessType,
              PreviousMode,
              0x79517350u,
              &Object,
              0LL,
              0LL);
      if ( v23 >= 0 )
      {
        LOBYTE(v9) = a2 == 67;
        v141 = 8 * KeQueryCpuSetsProcess((__int64)Object, v254, v140, v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( a5 )
          *a5 = v141;
        if ( v141 >= (unsigned int)v5 )
          v141 = v5;
        memmove((void *)v6, v254, v141);
      }
      return v23;
    case 69:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v203[4] = 0LL;
      v204 = 0LL;
      if ( *((_QWORD *)Object + 162) )
      {
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v242);
        ZwQueryInformationJobObject(0LL, 28LL);
        ObjectType = 0LL;
        ZwQueryInformationJobObject(0LL, 9LL);
        KiUnstackDetachProcess(&v242);
        *(_OWORD *)&v203[2] = v239;
        v203[1] = (HANDLE)v240;
        v82 = v204;
        if ( (v245 & 0x200000) != 0 )
          v82 = v253;
        v204 = v82;
        v83 = v203[4];
        if ( (v245 & 0x200) != 0 )
          v83 = (HANDLE)*((_QWORD *)&v251 + 1);
        v203[4] = v83;
        *(__m256i *)v6 = *(__m256i *)&v203[1];
        *(_QWORD *)(v6 + 32) = v204;
        if ( a5 )
          *a5 = 40;
      }
      else
      {
        LODWORD(v9) = -1073741394;
      }
      goto LABEL_316;
    case 70:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_BYTE *)v6 = *((int *)Object + 280) < 0;
      goto LABEL_160;
    case 71:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v130 = result;
      i = result;
      if ( result < 0 )
        return result;
      v99 = Object;
      v139 = ObReferenceProcessHandleTable(Object);
      if ( !v139 )
        goto LABEL_365;
      LOBYTE(v9) = (*(_BYTE *)(v139 + 44) & 0x10) != 0;
      *(_DWORD *)v6 = v9;
LABEL_555:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v99 + 139);
      ObfDereferenceObjectWithTag(v99, 0x79517350u);
      return v130;
    case 72:
      return PsIumGetOnDemandDebugChallenge(BugCheckParameter1, v6, (unsigned int)v5, a5);
    case 73:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( BugCheckParameter1 == -1LL )
      {
        p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        Object = p_Lock;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        p_Lock = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(p_Lock);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v144 = NoChildProcessRestrictedPolicy - 1;
      if ( !v144 )
        goto LABEL_624;
      v145 = v144 - 1;
      if ( v145 )
      {
        if ( v145 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_624:
        *(_BYTE *)v6 = 1;
      }
      if ( a5 )
        *a5 = 3;
      if ( BugCheckParameter1 == -1LL )
        return v9;
LABEL_628:
      ObfDereferenceObjectWithTag(p_Lock, 0x79517350u);
      return 0;
    case 74:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_BYTE *)v6 = (*((_DWORD *)Object + 543) & 0x200) != 0;
      goto LABEL_160;
    case 75:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      if ( *((_QWORD *)Object + 280) )
        LODWORD(v9) = qword_140C38190;
      *(_DWORD *)v6 = v9;
      if ( a5 )
        *a5 = 4;
      goto LABEL_160;
    case 76:
      memset(v254, 0, sizeof(v254));
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v78 = result;
      if ( result < 0 )
        return result;
      v79 = Object;
      PsQueryProcessEnergyValues(Object, v254);
      v146 = 432LL;
      if ( (unsigned int)v5 <= 0x1B0 )
        v146 = (unsigned int)v5;
      memmove((void *)v6, v254, v146);
      if ( a5 )
        *a5 = 432;
      goto LABEL_687;
    case 77:
      v237 = 0LL;
      v238 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v148 = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL,
               0LL);
      if ( v148 >= 0 )
      {
        v149 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v150 = Object;
        v148 = v149(Object, &v237);
        if ( v148 >= 0 )
        {
          *(_QWORD *)v6 = v237;
          *(_DWORD *)(v6 + 8) = v238;
          if ( a5 )
            *a5 = 12;
          v148 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v150, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v148;
    case 79:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( BugCheckParameter1 == -1LL )
      {
        v151 = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = v151;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v151 = Object;
      }
      *(_DWORD *)v6 = 0;
      v152 = 0;
      if ( (v151[628] & 0x4000) != 0 )
      {
        v152 = 1;
        *(_DWORD *)v6 = 1;
      }
      if ( (v151[628] & 0x8000) != 0 )
        *(_DWORD *)v6 = v152 | 2;
      *(_DWORD *)(v6 + 4) = v151[602];
      if ( a5 )
        *a5 = 8;
      if ( BugCheckParameter1 == -1LL )
        return v9;
      ObfDereferenceObjectWithTag(v151, 0x79517350u);
      return 0;
    case 81:
      if ( PreviousMode )
        return -1073741790;
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 0,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v136 = Object;
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(v186, Object, v6);
        if ( DeviceMapInformation >= 0 && a5 )
        {
          *a5 = 48;
          ObfDereferenceObjectWithTag(v136, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_573:
          ObfDereferenceObjectWithTag(v136, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case 82:
      memset(v254, 0, 144);
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      p_Lock = Object;
      PoQueryProcessEnergyTrackingState(Object, v254);
      if ( (unsigned int)v5 >= 0x90 )
        LODWORD(v5) = 144;
      memmove((void *)v6, v254, (unsigned int)v5);
      if ( a5 )
        *a5 = v5;
      i = 0;
      goto LABEL_628;
    case 84:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 1048,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v79 = Object;
      v153 = *((_QWORD *)Object + 124);
      if ( v153 )
      {
        *(_QWORD *)&v254[0] = 0LL;
        memset(&v254[1], 0, 88);
        *((_QWORD *)&v254[0] + 1) = v153;
        v78 = VslpEnterIumSecureMode(2u, 61, 0, (__int64)v254);
LABEL_687:
        ObfDereferenceObjectWithTag(v79, 0x79517350u);
        return v78;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case 85:
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, a5);
LABEL_158:
      ExecuteOptions = ProcessTelemetryCoverage;
LABEL_159:
      v41 = Object;
      goto LABEL_160;
    case 87:
    case 96:
      if ( a2 == 87 && !(_DWORD)v5 || a2 == 96 && (unsigned int)v5 < 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      v154 = result;
      if ( result >= 0 )
      {
        v155 = Object;
        *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 280)) & 3;
        if ( a2 == 96 )
          *(_DWORD *)v6 |= (v155[543] & 0x100000 | v155[543] & 0x80000 | ((v155[543] & 0x10000000 | (v155[543] >> 2) & 0x8000000u) >> 6)) >> 17;
        ObfDereferenceObjectWithTag(v155, 0x79517350u);
        return v154;
      }
      return result;
    case 88:
      v225 = 0LL;
      v226 = 0LL;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      v206 = 0LL;
      v207 = 0LL;
      v208 = 0LL;
      v210 = 0LL;
      v157 = (__int64)v186;
      --v186->KernelApcDisable;
      v158 = Object;
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1080, 0LL);
      v159 = v158[292] >> 61;
      if ( (v159 == 3 || v159 == 4)
        && (v208 = v158[292] & 0x1FFFFFFFFFFFFFFFLL, v206 = v158[291], v207 = v206 - v158[288], v159 == 3) )
      {
        v160 = v210 | 0x200;
      }
      else
      {
        v160 = v210;
      }
      LODWORD(v210) = (v160 & 0xFFFFFF00 | *((_BYTE *)v158 + 2171) & 7 | (2 * (*((_BYTE *)v158 + 2171) & 0x38))) ^ ((v160 & 0xFF00 | *((_BYTE *)v158 + 2171) & 7 | (unsigned __int16)(2 * (*((_BYTE *)v158 + 2171) & 0x38))) ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v158 + 543) << 6)) & 0x100;
      if ( _InterlockedCompareExchange64(v158 + 135, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v158 + 135);
      KeAbPostRelease((ULONG_PTR)(v158 + 135));
      KeLeaveCriticalRegionThread(v157);
      p_Lock = Object;
      PsGetProcessDeepFreezeStats(Object, &v225);
      v205 = v225;
      v209 = v226;
      if ( !v207 )
        v207 = v225 - p_Lock[288];
      if ( !v208 )
        v208 = *((_QWORD *)&v225 + 1) - p_Lock[289] - v226;
      if ( (unsigned int)v5 >= 0x38 )
        LODWORD(v5) = 56;
      memmove((void *)v6, &v205, (unsigned int)v5);
      if ( a5 )
        *a5 = v5;
      i = 0;
      goto LABEL_628;
    case 89:
      v203[0] = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( v6 < 0x7FFFFFFF0000LL )
          v14 = v6;
        *(_QWORD *)v14 = *(_QWORD *)v14;
      }
      v156 = KeGetCurrentThread()->ApcState.Process;
      if ( BugCheckParameter1 != -1LL || v156 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer(
                 (PVOID)v156[1].Affinity.StaticBitmap[17],
                 0,
                 0LL,
                 5u,
                 MmSectionObjectType,
                 PreviousMode,
                 v203);
      if ( result >= 0 )
      {
        *(HANDLE *)v6 = v203[0];
        if ( a5 )
          *a5 = 8;
      }
      return result;
    case 92:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 287);
      if ( a5 )
        *a5 = 8;
LABEL_160:
      ObfDereferenceObjectWithTag(v41, 0x79517350u);
      return ExecuteOptions;
    case 94:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 280) & 0x8000) != 0 )
      {
        _InterlockedOr(v165, 0);
        *(_QWORD *)v6 = *((_QWORD *)Object + 316);
        if ( a5 )
          *a5 = 8;
        i = 0;
LABEL_316:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v9;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741700;
      }
    case 97:
      if ( (_DWORD)v5 == 8 )
      {
        if ( BugCheckParameter1 == -1LL )
        {
          v161 = KeGetCurrentThread()->ApcState.Process;
          if ( v161[1].Affinity.StaticBitmap[24] )
          {
            v162 = 0LL;
            v163 = (__int64 *)v161[1].Affinity.StaticBitmap[30];
            if ( v163 )
              v162 = *v163;
            if ( v162 )
            {
              if ( (*(_DWORD *)(v162 + 1140) & 1) != 0 )
                LODWORD(v191) = 1;
            }
            else
            {
              v164 = v191;
              if ( (*(_BYTE *)(v161[1].Affinity.StaticBitmap[24] + 1984) & 1) != 0 )
                v164 = 1;
              LODWORD(v191) = v164;
            }
          }
          *(_QWORD *)v6 = v191;
          if ( a5 )
            *a5 = 8;
          return v9;
        }
        else
        {
          return -1073741811;
        }
      }
      else
      {
        if ( a5 )
          *a5 = 8;
        return -1073741820;
      }
    case 106:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 16;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 109:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      if ( !PsIsCurrentThreadInServerSilo() )
      {
        EffectiveServerSilo = PsGetEffectiveServerSilo(*((_QWORD *)Object + 162));
        if ( EffectiveServerSilo )
          LODWORD(v9) = *(_DWORD *)(EffectiveServerSilo + 1452);
      }
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v9;
      if ( a5 )
        *a5 = 4;
      return 0;
    default:
      return -1073741821;
  }
  switch ( v109 )
  {
    case 1:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x40) == 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      if ( (*((_DWORD *)Object + 628) & 0x10) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 628) & 0x20) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      if ( (*((_DWORD *)Object + 628) & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_548;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v115 = *((_DWORD *)Object + 628);
      if ( (v115 & 0x100) != 0 )
      {
        v116 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v115 & 0x800) == 0 )
          goto LABEL_436;
        v116 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v116;
LABEL_436:
      if ( (*((_DWORD *)Object + 628) & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 628) & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_548;
    case 3:
      i = 0;
      v110 = ObReferenceProcessHandleTable(Object);
      if ( v110 )
      {
        ExQueryHandleExceptionsPermanency(v110, &v170, &v171);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v170 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v171 )
          *(_DWORD *)(v6 + 4) |= 2u;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
      }
      else
      {
        i = -1073741558;
      }
      goto LABEL_548;
    case 4:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v111 = *((_DWORD *)Object + 628);
      if ( (v111 & 0x1000) != 0 )
      {
        v112 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v111 & 0x2000) == 0 )
          goto LABEL_424;
        v112 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v112;
LABEL_424:
      if ( !(unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting() )
        goto LABEL_548;
      v113 = *((_DWORD *)Object + 732);
      if ( (v113 & 2) != 0 )
      {
        v114 = *(_DWORD *)(v6 + 4) | 4;
      }
      else
      {
        if ( (v113 & 4) == 0 )
          goto LABEL_548;
        v114 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v114;
      goto LABEL_548;
    case 6:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x80u) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_548;
    case 7:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 1) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      if ( (*((_DWORD *)Object + 628) & 2) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 628) & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      if ( (*((_DWORD *)Object + 629) & 0x2000000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      if ( (*((_DWORD *)Object + 629) & 0x4000000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x10u;
      goto LABEL_548;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v188, v14, 0x140000000uLL);
      *(_DWORD *)(v6 + 4) = v188;
      goto LABEL_548;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v117 = *((_DWORD *)Object + 628);
      if ( (v117 & 0x10000) != 0 )
      {
        v118 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v117 & 0x20000) == 0 )
          goto LABEL_548;
        v118 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v118;
      goto LABEL_548;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v119 = *((_DWORD *)Object + 628);
      if ( (v119 & 0x80000) != 0 )
      {
        v120 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v119 & 0x100000) == 0 )
          goto LABEL_467;
        v120 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v120;
LABEL_467:
      v121 = *((_DWORD *)Object + 628);
      if ( (v121 & 0x200000) != 0 )
      {
        v122 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v121 & 0x400000) == 0 )
          goto LABEL_472;
        v122 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v122;
LABEL_472:
      if ( (*((_DWORD *)Object + 628) & 0x40000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_548;
    case 11:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 4) = PsGetWin32KFilterSet() & 0xF | *(_DWORD *)(v6 + 4) & 0xFFFFFFF0;
      goto LABEL_548;
    case 12:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 629) & 1) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      if ( (*((_DWORD *)Object + 629) & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      if ( (*((_DWORD *)Object + 629) & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x10u;
      if ( (*((_DWORD *)Object + 629) & 0x10) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x40u;
      if ( (*((_DWORD *)Object + 629) & 0x40) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x100u;
      if ( (*((_DWORD *)Object + 629) & 0x100) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x400u;
      if ( (*((_DWORD *)Object + 629) & 2) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 629) & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      if ( (*((_DWORD *)Object + 629) & 0x800) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x20u;
      if ( (*((_DWORD *)Object + 629) & 0x20) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x80u;
      if ( (*((_DWORD *)Object + 629) & 0x80u) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      if ( (*((_DWORD *)Object + 629) & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_548;
    case 13:
      i = 0;
      v123 = PspGetNoChildProcessRestrictedPolicy(Object);
      *(_DWORD *)(v6 + 4) = 0;
      v124 = v123 - 1;
      if ( !v124 )
        goto LABEL_506;
      v125 = v124 - 1;
      if ( v125 )
      {
        if ( v125 != 1 )
          goto LABEL_548;
        v126 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_506:
        v126 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v126;
      goto LABEL_548;
    case 14:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x40000000) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      if ( *((int *)Object + 628) < 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 629) & 0x1000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      if ( (*((_DWORD *)Object + 629) & 0x2000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      if ( (*((_DWORD *)Object + 732) & 1) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x10u;
      goto LABEL_548;
    case 15:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      if ( (*((_DWORD *)Object + 629) & 0x8000) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 629) & 0x20000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      if ( (*((_DWORD *)Object + 629) & 0x40000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      if ( (*((_DWORD *)Object + 629) & 0x100000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x10u;
      if ( (*((_DWORD *)Object + 629) & 0x200000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x20u;
      if ( (*((_DWORD *)Object + 629) & 0x400000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x40u;
      if ( (*((_DWORD *)Object + 629) & 0x800000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x80u;
      if ( (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x100u;
      if ( *((int *)Object + 629) < 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      goto LABEL_548;
    case 16:
      i = 0;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(Object, v10, v14, 0x140000000uLL);
      *(_DWORD *)(v6 + 4) = 0;
      v128 = RedirectionTrustPolicy - 1;
      if ( v128 )
      {
        if ( v128 != 1 )
          goto LABEL_548;
        v129 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        v129 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v129;
LABEL_548:
      if ( BugCheckParameter1 != -1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    default:
      i = -1073741637;
      goto LABEL_548;
  }
}
