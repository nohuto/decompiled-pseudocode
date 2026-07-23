/*
 * XREFs of NtQueryInformationProcess @ 0x1406FCB40
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x140206EC4 (ExUnlockUserBuffer.c)
 *     PsGetEffectiveServerSilo @ 0x14020C010 (PsGetEffectiveServerSilo.c)
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     MmGetSessionId @ 0x1402A3B20 (MmGetSessionId.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     KeQuerySystemTimePrecise @ 0x1402BE500 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 *     KeQueryGroupMaskProcess @ 0x140329FA0 (KeQueryGroupMaskProcess.c)
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     KeQueryAffinityProcess @ 0x14034BB10 (KeQueryAffinityProcess.c)
 *     MmQueryWorkingSetInformation @ 0x14034BC58 (MmQueryWorkingSetInformation.c)
 *     PsGetWin32KFilterSet @ 0x14034D8A0 (PsGetWin32KFilterSet.c)
 *     PsQueryProcessCommandLine @ 0x1403540F0 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x1403662D8 (MmQueryCommitReleaseState.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403B6620 (xKdEnumerateDebuggingDevices.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1403C69C8 (ExQueryHandleExceptionsPermanency.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040F5E4 (Feature_FsctlProcessMitigation__private_IsEnabledNoReporting.c)
 *     ZwQueryInformationJobObject @ 0x14041D120 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x140575064 (KeQueryCpuSetsProcess.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     PsReferenceProcessFilePointer @ 0x14069A0A0 (PsReferenceProcessFilePointer.c)
 *     PsQueryRuntimeProcess @ 0x1406B2550 (PsQueryRuntimeProcess.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCopyVirtualMemory @ 0x1406F79C0 (MiCopyVirtualMemory.c)
 *     ObQueryDeviceMapInformation @ 0x1406FC3C0 (ObQueryDeviceMapInformation.c)
 *     PsQueryProcessAttributes @ 0x14071DE84 (PsQueryProcessAttributes.c)
 *     ObOpenObjectByPointer @ 0x1407379D0 (ObOpenObjectByPointer.c)
 *     PsQueryProcessEnergyValues @ 0x1407424E0 (PsQueryProcessEnergyValues.c)
 *     ObGetProcessHandleCount @ 0x140742AE8 (ObGetProcessHandleCount.c)
 *     ObReferenceProcessHandleTable @ 0x140742B50 (ObReferenceProcessHandleTable.c)
 *     PsQueryStatisticsProcess @ 0x1407430C0 (PsQueryStatisticsProcess.c)
 *     PsGetProcessDeepFreezeStats @ 0x140751D94 (PsGetProcessDeepFreezeStats.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754D60 (EtwQueryProcessTelemetryInfo.c)
 *     IoQueryFileDosDeviceName @ 0x14075ADD0 (IoQueryFileDosDeviceName.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     PsQueryTotalCycleTimeProcess @ 0x14079FB20 (PsQueryTotalCycleTimeProcess.c)
 *     ExEnumHandleTable @ 0x1407AE520 (ExEnumHandleTable.c)
 *     MmGetSectionInformation @ 0x1407BA640 (MmGetSectionInformation.c)
 *     PspQueryQuotaLimits @ 0x1407BD124 (PspQueryQuotaLimits.c)
 *     PsQueryFullProcessImageName @ 0x1407CE108 (PsQueryFullProcessImageName.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407D1644 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     ExIsRestrictedCaller @ 0x1407D8DA4 (ExIsRestrictedCaller.c)
 *     PspGetRedirectionTrustPolicy @ 0x1407DE628 (PspGetRedirectionTrustPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1407EA400 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ExSystemExceptionFilter @ 0x140865F70 (ExSystemExceptionFilter.c)
 *     KeGetExecuteOptions @ 0x140875258 (KeGetExecuteOptions.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x140875520 (PsQueryProcessSignatureMitigationPolicy.c)
 *     DbgkOpenProcessDebugPort @ 0x140936D90 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x140942560 (VslGetSecurePebAddress.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140998658 (PoQueryProcessEnergyTrackingState.c)
 *     PspQueryPooledQuotaLimits @ 0x1409AF458 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1409AF604 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1409B63B0 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1409E8148 (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F8D50 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryProcessHandleInformation @ 0x1409F8F84 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x1409F9188 (ExReferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
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
  NTSTATUS result; // eax
  __int128 *v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  NTSTATUS DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v21; // r12
  struct _FILE_OBJECT *v22; // rbx
  NTSTATUS v23; // r12d
  POBJECT_NAME_INFORMATION v24; // rbx
  ULONG v25; // edi
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
  NTSTATUS ExecuteOptions; // ebx
  _DWORD *v41; // rcx
  HANDLE v42; // rdx
  int ProcessHandleCount; // edi
  NTSTATUS ProcessTelemetryCoverage; // eax
  int v45; // ebx
  int v46; // ebx
  unsigned int v47; // edi
  __int64 v48; // r9
  int SessionId; // ebx
  __int64 EffectiveServerSilo; // rax
  unsigned __int64 *v51; // rax
  int v52; // ebx
  unsigned __int64 v53; // r13
  NTSTATUS v54; // edi
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
  NTSTATUS v78; // ebx
  PVOID v79; // rdi
  unsigned int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rax
  HANDLE v83; // rax
  ULONG_PTR v84; // rdi
  NTSTATUS ProcessHandleInformation; // edi
  PVOID v86; // rcx
  __int64 v87; // rsi
  PVOID v88; // rbx
  __int64 v89; // rdi
  NTSTATUS v90; // r12d
  int v91; // ecx
  __int64 v92; // rcx
  unsigned int GroupMaskProcess; // ecx
  void *v94; // r8
  unsigned int v95; // edx
  ULONG v96; // eax
  NTSTATUS v97; // ebx
  __int64 v98; // rbx
  PVOID v99; // rbx
  __int64 v100; // rax
  __int64 *v101; // rcx
  void *v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rcx
  ULONG v105; // eax
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
  NTSTATUS v130; // edi
  __int64 v131; // rax
  NTSTATUS v132; // ebx
  struct _EX_RUNDOWN_REF *v133; // rbx
  __int64 v134; // rax
  char v135; // r9
  PVOID v136; // rbx
  NTSTATUS ProcessCommandLine; // eax
  PVOID v138; // r8
  __int64 v139; // rax
  __int64 v140; // r8
  ULONG v141; // ebx
  _QWORD *p_Lock; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v144; // eax
  int v145; // eax
  size_t v146; // r8
  unsigned __int64 ExtensionTable; // rdi
  NTSTATUS v148; // ebx
  __int64 (__fastcall *v149)(PVOID, __int64 *); // rax
  PVOID v150; // rdi
  _DWORD *v151; // r8
  int v152; // ecx
  __int64 v153; // rax
  NTSTATUS v154; // ebx
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
  PVOID Object; // [rsp+40h] [rbp-728h] BYREF
  NTSTATUS i; // [rsp+48h] [rbp-720h]
  _BYTE v168[2]; // [rsp+4Ch] [rbp-71Ch] BYREF
  char v169; // [rsp+4Eh] [rbp-71Ah] BYREF
  char v170; // [rsp+4Fh] [rbp-719h] BYREF
  PVOID P; // [rsp+50h] [rbp-718h] BYREF
  unsigned __int16 v172; // [rsp+58h] [rbp-710h] BYREF
  HANDLE v173; // [rsp+60h] [rbp-708h]
  int v174; // [rsp+68h] [rbp-700h] BYREF
  unsigned int v175; // [rsp+6Ch] [rbp-6FCh] BYREF
  unsigned __int64 p_Process; // [rsp+70h] [rbp-6F8h] BYREF
  __int16 v177; // [rsp+78h] [rbp-6F0h]
  PVOID v178; // [rsp+80h] [rbp-6E8h] BYREF
  int v179; // [rsp+88h] [rbp-6E0h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-6D8h] BYREF
  unsigned int v181; // [rsp+98h] [rbp-6D0h]
  _OBJECT_NAME_INFORMATION v182; // [rsp+A0h] [rbp-6C8h] BYREF
  __int128 v183; // [rsp+B0h] [rbp-6B8h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-6A8h] BYREF
  struct _KTHREAD *v185; // [rsp+C8h] [rbp-6A0h]
  int v186; // [rsp+D0h] [rbp-698h]
  int v187; // [rsp+D4h] [rbp-694h] BYREF
  unsigned int v188; // [rsp+D8h] [rbp-690h]
  unsigned int v189; // [rsp+DCh] [rbp-68Ch] BYREF
  __int64 v190; // [rsp+E0h] [rbp-688h]
  PULONG v191; // [rsp+E8h] [rbp-680h]
  PVOID v192; // [rsp+F0h] [rbp-678h]
  _OBJECT_NAME_INFORMATION v193; // [rsp+100h] [rbp-668h] BYREF
  ULONG v194; // [rsp+110h] [rbp-658h]
  int v195; // [rsp+118h] [rbp-650h]
  int v196; // [rsp+11Ch] [rbp-64Ch] BYREF
  __int64 v197; // [rsp+120h] [rbp-648h] BYREF
  __int64 v198; // [rsp+128h] [rbp-640h] BYREF
  int v199; // [rsp+130h] [rbp-638h]
  PVOID v200; // [rsp+138h] [rbp-630h] BYREF
  __int64 v201; // [rsp+140h] [rbp-628h] BYREF
  HANDLE v202[5]; // [rsp+148h] [rbp-620h] BYREF
  __int64 v203; // [rsp+170h] [rbp-5F8h]
  __int128 v204; // [rsp+178h] [rbp-5F0h] BYREF
  __int64 v205; // [rsp+188h] [rbp-5E0h]
  __int64 v206; // [rsp+190h] [rbp-5D8h]
  __int64 v207; // [rsp+198h] [rbp-5D0h]
  __int64 v208; // [rsp+1A0h] [rbp-5C8h]
  __int64 v209; // [rsp+1A8h] [rbp-5C0h]
  int v210; // [rsp+1B0h] [rbp-5B8h]
  int v211; // [rsp+1B4h] [rbp-5B4h]
  struct _KTHREAD *v213; // [rsp+1C0h] [rbp-5A8h]
  __int128 v214; // [rsp+1C8h] [rbp-5A0h]
  __int128 v215; // [rsp+1D8h] [rbp-590h]
  __int128 v216; // [rsp+1E8h] [rbp-580h]
  __int128 Src; // [rsp+200h] [rbp-568h] BYREF
  __int128 v218; // [rsp+210h] [rbp-558h] BYREF
  __int128 v219; // [rsp+220h] [rbp-548h] BYREF
  __int128 v220; // [rsp+230h] [rbp-538h]
  __int128 v221; // [rsp+240h] [rbp-528h]
  __int128 v222; // [rsp+250h] [rbp-518h]
  __int128 v223; // [rsp+260h] [rbp-508h] BYREF
  __int128 v224; // [rsp+270h] [rbp-4F8h] BYREF
  __int128 v225; // [rsp+280h] [rbp-4E8h]
  _OWORD v226[6]; // [rsp+290h] [rbp-4D8h] BYREF
  __int64 v227; // [rsp+2F0h] [rbp-478h]
  unsigned __int64 v228; // [rsp+300h] [rbp-468h]
  ULONG_PTR v229; // [rsp+308h] [rbp-460h]
  unsigned __int64 v230; // [rsp+310h] [rbp-458h]
  __int128 v231; // [rsp+318h] [rbp-450h] BYREF
  __int64 v232; // [rsp+328h] [rbp-440h] BYREF
  int v233; // [rsp+330h] [rbp-438h]
  __int128 JobObjectInformation; // [rsp+338h] [rbp-430h] BYREF
  __int128 v235; // [rsp+348h] [rbp-420h]
  __int64 v236; // [rsp+358h] [rbp-410h]
  $115DCDF994C6370D29323EAB0E0C9502 v237; // [rsp+360h] [rbp-408h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v238; // [rsp+390h] [rbp-3D8h] BYREF
  __int128 v239; // [rsp+3C0h] [rbp-3A8h] BYREF
  __int128 v240; // [rsp+3D0h] [rbp-398h]
  __int128 v241; // [rsp+3E0h] [rbp-388h]
  __int128 v242; // [rsp+3F0h] [rbp-378h]
  __int128 v243; // [rsp+400h] [rbp-368h]
  __int128 v244; // [rsp+410h] [rbp-358h]
  __int128 v245; // [rsp+420h] [rbp-348h]
  __int128 v246; // [rsp+430h] [rbp-338h]
  __int128 v247; // [rsp+440h] [rbp-328h]
  __int64 v248; // [rsp+450h] [rbp-318h]
  _OWORD v249[27]; // [rsp+460h] [rbp-308h] BYREF
  _QWORD v250[34]; // [rsp+610h] [rbp-158h] BYREF

  v5 = ProcessInformationLength;
  v6 = (unsigned __int64)ProcessInformation;
  v173 = ProcessHandle;
  v192 = ProcessInformation;
  v194 = ProcessInformationLength;
  v191 = ReturnLength;
  memset(&v237, 0, sizeof(v237));
  v9 = 0LL;
  v174 = 0;
  Handle = 0LL;
  v179 = 0;
  memset(v250, 0, 0x108uLL);
  v178 = 0LL;
  v175 = 0;
  v196 = 0;
  v211 = 0;
  v214 = 0LL;
  v215 = 0LL;
  v216 = 0LL;
  v239 = 0LL;
  v240 = 0LL;
  v241 = 0LL;
  v242 = 0LL;
  v243 = 0LL;
  v244 = 0LL;
  v245 = 0LL;
  v246 = 0LL;
  v247 = 0LL;
  v248 = 0LL;
  memset(&v202[1], 0, 32);
  v203 = 0LL;
  v190 = 0LL;
  v231 = 0LL;
  v197 = 0LL;
  JobObjectInformation = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  v198 = 0LL;
  ObjectNameInformation = 0LL;
  v172 = 0;
  v177 = 0;
  Object = 0LL;
  v201 = 0LL;
  v189 = 0;
  memset(v226, 0, sizeof(v226));
  v227 = 0LL;
  Src = 0LL;
  v218 = 0LL;
  v219 = 0LL;
  v220 = 0LL;
  v221 = 0LL;
  v222 = 0LL;
  v223 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v168[1] = PreviousMode;
  CurrentThread = KeGetCurrentThread();
  v185 = CurrentThread;
  v213 = CurrentThread;
  if ( PreviousMode )
  {
    if ( ProcessInformationClass != ProcessProtectionInformation )
    {
      if ( ProcessInformationClass == ProcessCommitReleaseInformation )
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
        if ( ReturnLength )
        {
          v15 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
            v15 = (__int64)ReturnLength;
          *(_DWORD *)v15 = *(_DWORD *)v15;
          CurrentThread = v185;
        }
        goto LABEL_26;
      }
      if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) != 0 )
      {
        if ( ProcessInformationClass == ProcessSequenceNumber )
        {
          v13 = 7LL;
        }
        else if ( ProcessInformationClass == ProcessSecurityDomainInformation )
        {
          v13 = 7LL;
        }
        else
        {
          v13 = 3LL;
          if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
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
  switch ( ProcessInformationClass )
  {
    case ProcessBasicInformation:
      v168[0] = 0;
      if ( (_DWORD)v5 == 64 )
      {
        v26 = v6;
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
        v178 = (PVOID)64;
        *(_QWORD *)v6 = 64LL;
        v6 += 8LL;
        v174 = 64;
      }
      else
      {
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        v26 = 0LL;
        ObjectNameInformation = 0LL;
        v178 = (PVOID)48;
        v174 = 48;
      }
      p_Process = v6;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        p_Process = (unsigned __int64)&v185->Process;
        if ( v28 != v185->Process )
          goto LABEL_76;
      }
      else
      {
        p_Process = (unsigned __int64)&v213->Process;
      }
      LODWORD(v250[0]) = 2097153;
      memset((char *)v250 + 4, 0, 0x104uLL);
      KeQueryAffinityProcess((__int64)v28, (__int64)v250, &v175, 0LL, &v172);
      if ( v28 == *(_KPROCESS **)p_Process )
      {
        UserAffinityPrimaryGroup = v185->UserAffinityPrimaryGroup;
        v30 = v175;
        if ( !_bittest64(&v30, UserAffinityPrimaryGroup) )
          goto LABEL_76;
      }
      else
      {
        UserAffinityPrimaryGroup = v172;
      }
      if ( UserAffinityPrimaryGroup != 32 )
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v250[UserAffinityPrimaryGroup + 1];
LABEL_76:
      if ( v26 )
        PsQueryProcessAttributes(v28, v168, 0LL);
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
        if ( v168[0] )
          *(_DWORD *)(v26 + 56) |= 0x40u;
        v28 = (_KPROCESS *)Object;
        if ( (*((_BYTE *)Object + 992) & 1) != 0 )
          *(_DWORD *)(v26 + 56) |= 0x80u;
        if ( *(_QWORD *)&v28[2].Affinity.Count )
          *(_DWORD *)(v26 + 56) |= 0x100u;
        v27 = i;
      }
      if ( ReturnLength )
        *ReturnLength = (unsigned int)v178;
LABEL_65:
      ObfDereferenceObjectWithTag(v28, 0x79517350u);
      return v27;
    case ProcessQuotaLimits:
      return PspQueryQuotaLimits((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, PreviousMode);
    case ProcessIoCounters:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        PsQueryStatisticsProcess(Object, v226);
        v214 = *(_OWORD *)((char *)&v226[2] + 8);
        v215 = *(_OWORD *)((char *)&v226[3] + 8);
        v216 = *(_OWORD *)((char *)&v226[4] + 8);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)v6 = v214;
        *(_OWORD *)(v6 + 16) = v215;
        *(_OWORD *)(v6 + 32) = v216;
        if ( ReturnLength )
          *ReturnLength = 48;
        return DeviceMapInformation;
      }
      return result;
    case ProcessVmCounters:
      if ( (((_DWORD)v5 - 88) & 0xFFFFFFE7) != 0 || (_DWORD)v5 == 104 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        LODWORD(v218) = *((_DWORD *)Object + 417);
        v36 = Object;
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v237);
        i = MmQueryWorkingSetInformation((_QWORD *)&v218 + 1, &v219, &v223, &v198, &v197, &v196);
        KiUnstackDetachProcess(&v237);
        *(_QWORD *)&v220 = v36[143];
        *((_QWORD *)&v219 + 1) = *((_QWORD *)Object + 145);
        *(_QWORD *)&v221 = *((_QWORD *)Object + 142);
        *((_QWORD *)&v220 + 1) = *((_QWORD *)Object + 144);
        *((_QWORD *)&v221 + 1) = *((_QWORD *)Object + 201) << 12;
        *(_QWORD *)&v222 = *((_QWORD *)Object + 202) << 12;
        *((_QWORD *)&v223 + 1) = *((_QWORD *)Object + 293) << 12;
        *((_QWORD *)&v222 + 1) = *((_QWORD *)&v221 + 1);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = i;
        if ( i >= 0 )
        {
          memmove((void *)v6, &Src, v5);
          if ( ReturnLength )
            *ReturnLength = v5;
          return 0;
        }
      }
      return result;
    case ProcessTimes:
      if ( (_DWORD)v5 != 32 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        v38 = PsQueryRuntimeProcess((__int64)Object, &v189);
        v39 = KeMaximumIncrement;
        *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)v38;
        *(_QWORD *)(v6 + 24) = v39 * v189;
        *(struct _EX_RUNDOWN_REF *)v6 = v37[141];
        *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v37[264];
        if ( ReturnLength )
          *ReturnLength = 32;
        goto LABEL_386;
      }
      return result;
    case ProcessDebugPort:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      }
      return result;
    case ProcessLdtInformation:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
    case ProcessDefaultHardErrorMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return result;
    case ProcessPooledUsageAndLimits:
      return PspQueryPooledQuotaLimits((ULONG_PTR)ProcessHandle, PreviousMode);
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      return PspQueryWorkingSetWatch((ULONG_PTR)ProcessHandle, (__int64)ReturnLength, PreviousMode);
    case ProcessPriorityClass:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        HIBYTE(v177) = *((_BYTE *)Object + 1463);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v177;
        if ( ReturnLength )
          *ReturnLength = 2;
        return 0;
      }
      return result;
    case ProcessWx86Information:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
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
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessHandleCount:
      LODWORD(P) = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessAffinityMask:
      if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      LODWORD(v250[0]) = 2097153;
      memset((char *)v250 + 4, 0, 0x104uLL);
      KeQueryAffinityProcess((__int64)Object, (__int64)v250, &v175, 0LL, &v172);
      v92 = v250[v172 + 1];
      if ( (_DWORD)v5 == 16 )
        *(_WORD *)(v6 + 8) = v172;
      *(_QWORD *)v6 = v92;
      if ( ReturnLength )
        *ReturnLength = v5;
      goto LABEL_386;
    case ProcessPriorityBoost:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
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
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessDeviceMap:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v181 = *(_DWORD *)(v6 + 40);
        v47 = v181;
        if ( (v181 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v47 = 0;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( DeviceMapInformation >= 0 && ReturnLength )
        *ReturnLength = v5;
      return DeviceMapInformation;
    case ProcessSessionInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessWow64Information:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessImageFileName:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v17 = &v231;
      if ( (unsigned int)v5 >= 0x10 )
        v17 = (__int128 *)v6;
      v18 = v6 + 16;
      v19 = 0LL;
      if ( (unsigned int)v5 >= 0x10 )
      {
        v19 = v18;
        LODWORD(v9) = v5 - 16;
      }
      v174 = v9;
      DeviceMapInformation = PsQueryFullProcessImageName(Object, v17, v19, &v174);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v19 )
        DeviceMapInformation = -1073741820;
      if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *ReturnLength = v174 + 16;
      return DeviceMapInformation;
    case ProcessLUIDDeviceMapsEnabled:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 1;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessBreakOnTermination:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessDebugObjectHandle:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 8;
      return DeviceMapInformation;
    case ProcessDebugFlags:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_160;
    case ProcessHandleTracing:
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
        return -1073741790;
      p_Process = (unsigned int)(v5 - 16) / 0xA0uLL;
      v53 = v6 + 16;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        v198 = v56;
        if ( v56 )
        {
          v58 = ExReferenceHandleDebugInfo(v56);
          v59 = v58;
          v197 = v58;
          if ( v58 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v60 = *(_DWORD *)(v58 + 4);
            v61 = *(_DWORD *)(v58 + 72) % v60;
            v188 = v61;
            while ( 1 )
            {
              v199 = v9;
              if ( (unsigned int)v9 >= v60 )
                break;
              v62 = (_OWORD *)(v59 + 160 * v61);
              v249[0] = v62[5];
              v249[1] = v62[6];
              v249[2] = v62[7];
              v249[3] = v62[8];
              v249[4] = v62[9];
              v249[5] = v62[10];
              v249[6] = v62[11];
              v249[7] = v62[12];
              v249[8] = v62[13];
              v249[9] = v62[14];
              v63 = *(_QWORD *)&v249[1];
              if ( *(_QWORD *)v6 == *(_QWORD *)&v249[1] || !*(_QWORD *)v6 )
              {
                v64 = DWORD2(v249[1]);
                if ( DWORD2(v249[1]) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)p_Process )
                  {
                    p_Process = (unsigned int)(p_Process - 1);
                    v210 = p_Process;
                    *(_QWORD *)v53 = v63;
                    *(_OWORD *)(v53 + 8) = v249[0];
                    *(_DWORD *)(v53 + 24) = v64;
                    *(_OWORD *)(v53 + 32) = v249[2];
                    *(_OWORD *)(v53 + 48) = v249[3];
                    *(_OWORD *)(v53 + 64) = v249[4];
                    *(_OWORD *)(v53 + 80) = v249[5];
                    *(_OWORD *)(v53 + 96) = v249[6];
                    *(_OWORD *)(v53 + 112) = v249[7];
                    *(_OWORD *)(v53 + 128) = v249[8];
                    *(_OWORD *)(v53 + 144) = v249[9];
                    v53 += 160LL;
                    v228 = v53;
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
                v188 = v61;
                v60 = *(_DWORD *)(v59 + 4);
              }
              else
              {
                v60 = *(_DWORD *)(v59 + 4);
                v61 = v60 - 1;
                v188 = v60 - 1;
              }
              LODWORD(v9) = v9 + 1;
            }
            if ( ReturnLength )
              *ReturnLength = v53 - v6;
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
    case ProcessIoPriority:
    case ProcessEffectiveIoPriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ProcessInformationClass == ProcessIoPriority )
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
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_159;
    case ProcessExecuteFlags:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
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
      ExecuteOptions = KeGetExecuteOptions(Process, &v179);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v67, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v179;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return ExecuteOptions;
    case ProcessCookie:
      p_Process = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        p_LockNV = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = p_LockNV;
      }
      else
      {
        v200 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v200, 0LL);
        p_LockNV = v200;
        Object = v200;
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
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObject(p_LockNV);
      return v9;
    case ProcessImageInformation:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( Object == v185->Process )
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
        if ( DeviceMapInformation >= 0 && ReturnLength )
          *ReturnLength = 64;
      }
      return DeviceMapInformation;
    case ProcessCycleTime:
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, &v201);
      *(_QWORD *)(v6 + 8) = v201;
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_687;
    case ProcessPagePriority:
    case ProcessEffectivePagePriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ProcessInformationClass == ProcessPagePriority )
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
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_159;
    case ProcessImageFileNameWin32:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      v178 = v22;
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
                                 (unsigned __int64 *)&v178);
        v22 = (struct _FILE_OBJECT *)v178;
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
        if ( ReturnLength )
          *ReturnLength = v25;
        ExFreePoolWithTag(v24, 0);
      }
      return v23;
    case ProcessImageFileMapping:
      P = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v84 = *(_QWORD *)v6;
      v229 = *(_QWORD *)v6;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
                         &v178,
                         0LL,
                         0LL);
      v41 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_160;
      ProcessHandleInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (unsigned __int64 *)&P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v86 = v178;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_396;
      v87 = *((_QWORD *)v178 + 5);
      v88 = P;
      v89 = *((_QWORD *)P + 5);
      v90 = 0;
      if ( v87 != v89 )
        v90 = -1073741823;
      ObfDereferenceObject(v178);
      ObfDereferenceObject(v88);
      result = v90;
      if ( v87 == v89 && ReturnLength )
        *ReturnLength = 0;
      return result;
    case ProcessAffinityUpdateMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v181 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v91 = (v181 >> 19) & 1 | 2;
      if ( (v181 & 0x40000) == 0 )
        v91 = (v181 >> 19) & 1;
      *(_DWORD *)v6 = v91;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessMemoryAllocationMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v181 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v181 & 0x200000) != 0;
      *(_DWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessGroupInformation:
      if ( !ReturnLength || (v5 & 1) != 0 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        v175 = GroupMaskProcess;
        do
        {
          _BitScanForward(&v95, GroupMaskProcess);
          v96 = v9 + 2;
          v174 = v9 + 2;
          if ( (int)v9 + 2 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v95;
            v6 += 2LL;
            v230 = v6;
          }
          _bittestandreset((signed __int32 *)&v175, v95);
          LODWORD(v9) = v9 + 2;
          GroupMaskProcess = v175;
        }
        while ( v175 );
        *ReturnLength = v96;
        v97 = (unsigned int)v5 < v96 ? 0xC0000023 : 0;
        i = v97;
        ObfDereferenceObjectWithTag(v94, 0x79517350u);
        return v97;
      }
      return result;
    case ProcessConsoleHostProcess:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      memset(&v238, 0, sizeof(v238));
      v186 = 0;
      v182 = 0LL;
      v232 = 0LL;
      if ( PreviousMode != 1 )
        return -1073741823;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
          KiStackAttachProcess((_KPROCESS *)v99, 0, (__int64)&v238);
          v100 = 0LL;
          v101 = (__int64 *)*((_QWORD *)v99 + 176);
          if ( v101 )
            v100 = *v101;
          if ( v100 )
          {
            *(_QWORD *)&v193.Name.Length = *(unsigned int *)(v100 + 16);
            v186 = *(_DWORD *)(*(_QWORD *)&v193.Name.Length + 104LL);
            v102 = *(void **)(*(_QWORD *)&v193.Name.Length + 112LL);
            P = v102;
            *(_DWORD *)&v182.Name.Length = (_DWORD)v102;
            v182.Name.Buffer = (wchar_t *)HIDWORD(v102);
          }
          else
          {
            P = *(PVOID *)(*((_QWORD *)v99 + 170) + 32LL);
            v103 = (__int64)P + 164;
            if ( (unsigned __int64)P + 164 >= 0x7FFFFFFF0000LL )
              v103 = 0x7FFFFFFF0000LL;
            v186 = *(_DWORD *)v103;
            v193 = 0LL;
            v104 = (__int64)P + 176;
            if ( (unsigned __int64)P + 176 >= 0x7FFFFFFF0000LL )
              v104 = 0x7FFFFFFF0000LL;
            *(_DWORD *)&v193.Name.Length = *(_DWORD *)v104;
            v193.Name.Buffer = *(wchar_t **)(v104 + 8);
            v182 = v193;
            LOWORD(v102) = v193.Name.Length;
          }
          DeviceMapInformation = i;
          KiUnstackDetachProcess(&v238);
          if ( DeviceMapInformation < 0 )
            goto LABEL_384;
          v105 = (unsigned __int16)v102 + 6;
          if ( ReturnLength )
            *ReturnLength = v105;
          if ( (unsigned int)v5 >= v105 )
          {
            *(_DWORD *)v6 = v186;
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
                                     (char *)v182.Name.Buffer,
                                     (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
                                     (void *)(v6 + 6),
                                     v182.Name.Length,
                                     1,
                                     (size_t *)&v232,
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
    case ProcessHandleInformation:
      if ( (unsigned int)v5 < 0x10 )
      {
        if ( ReturnLength )
          *ReturnLength = 16;
        return -1073741820;
      }
      P = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, PreviousMode, &P, 0LL);
      if ( result >= 0 )
      {
        v106 = (__int64)v185;
        --v185->KernelApcDisable;
        v107 = (struct _EX_RUNDOWN_REF *)P;
        v108 = ObReferenceProcessHandleTable(P);
        if ( v108 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v108, v6, (unsigned int)v5, ReturnLength);
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
    case ProcessMitigationPolicy:
      v187 = 0;
      v169 = 0;
      v170 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v109 = *(_DWORD *)v6;
      v195 = *(_DWORD *)v6;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v109 = v195;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
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
    case ProcessHandleCheckingMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
    case ProcessKeepAliveCount:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
    case ProcessHandleTable:
      *(_QWORD *)&v193.Name.Length = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(v6, v5, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v193, (struct _MDL **)&P);
      if ( result >= 0 )
      {
        v132 = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 1088,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
        if ( v132 >= 0 )
        {
          v182 = 0LL;
          v133 = (struct _EX_RUNDOWN_REF *)Object;
          v134 = ObReferenceProcessHandleTable(Object);
          if ( v134 )
          {
            *(_QWORD *)&v182.Name.Length = *(_QWORD *)&v193.Name.Length;
            v182.Name.Buffer = (wchar_t *)((unsigned int)v5 >> 2);
            ExEnumHandleTable(v134, PspHandleTableWalker, &v182, 0LL);
            ExReleaseRundownProtection_0(v133 + 139);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v133, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v182.Name.Buffer);
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
    case ProcessCheckStackExtentsMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
    case ProcessCommandLineInformation:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
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
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v135, ReturnLength);
      goto LABEL_572;
    case ProcessProtectionInformation:
      v23 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ProcessHandle,
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
        if ( ReturnLength )
          *ReturnLength = 1;
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
    case ProcessTelemetryIdInformation:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)ProcessHandle,
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
                             (__int64)ReturnLength);
LABEL_572:
      DeviceMapInformation = ProcessCommandLine;
      if ( v136 )
        goto LABEL_573;
      return DeviceMapInformation;
    case ProcessCommitReleaseInformation:
      LODWORD(P) = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v182 = *(_OBJECT_NAME_INFORMATION *)v6;
        v183 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v182.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v182.Name.MaximumLength + 1) >= 8u || v182.Name.Buffer )
          {
            v23 = -1073741811;
          }
          else
          {
            v23 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ProcessHandle,
                    4096,
                    (__int64)PsProcessType,
                    PreviousMode,
                    0x79517350u,
                    &Object,
                    0LL,
                    0LL);
            if ( v23 >= 0 )
            {
              MmQueryCommitReleaseState((_KPROCESS *)Object, &P, &v182.Name.Buffer, &v183, (_QWORD *)&v183 + 1);
              *(_DWORD *)(&v182.Name.MaximumLength + 1) ^= ((unsigned __int8)P ^ *((_BYTE *)&v182.Name.MaximumLength + 2)) & 1;
              v182.Name.Buffer = (wchar_t *)((__int64)v182.Name.Buffer << 12);
              *(_QWORD *)&v183 = (_QWORD)v183 << 12;
              *((_QWORD *)&v183 + 1) <<= 12;
              *(_OBJECT_NAME_INFORMATION *)v6 = v182;
              *(_OWORD *)(v6 + 16) = v183;
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
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
        return -1073741820;
      v23 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ProcessHandle,
              4096,
              (__int64)PsProcessType,
              PreviousMode,
              0x79517350u,
              &Object,
              0LL,
              0LL);
      if ( v23 >= 0 )
      {
        LOBYTE(v9) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
        v141 = 8 * KeQueryCpuSetsProcess((__int64)Object, v249, v140, v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v141;
        if ( v141 >= (unsigned int)v5 )
          v141 = v5;
        memmove((void *)v6, v249, v141);
      }
      return v23;
    case ProcessJobMemoryInformation:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v202[4] = 0LL;
      v203 = 0LL;
      if ( *((_QWORD *)Object + 162) )
      {
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v237);
        ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, &JobObjectInformation, 0x28u, 0LL);
        ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, &v239, 0x98u, 0LL);
        KiUnstackDetachProcess(&v237);
        *(_OWORD *)&v202[2] = JobObjectInformation;
        v202[1] = (HANDLE)v235;
        v82 = v203;
        if ( (v240 & 0x200000) != 0 )
          v82 = v248;
        v203 = v82;
        v83 = v202[4];
        if ( (v240 & 0x200) != 0 )
          v83 = (HANDLE)*((_QWORD *)&v246 + 1);
        v202[4] = v83;
        *(__m256i *)v6 = *(__m256i *)&v202[1];
        *(_QWORD *)(v6 + 32) = v203;
        if ( ReturnLength )
          *ReturnLength = 40;
      }
      else
      {
        LODWORD(v9) = -1073741394;
      }
      goto LABEL_316;
    case ProcessInPrivate:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, v6, (unsigned int)v5, ReturnLength);
    case ProcessChildProcessInformation:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        Object = p_Lock;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 3;
      if ( ProcessHandle == (HANDLE)-1LL )
        return v9;
LABEL_628:
      ObfDereferenceObjectWithTag(p_Lock, 0x79517350u);
      return 0;
    case ProcessHighGraphicsPriorityInformation:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
    case ProcessSubsystemInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        LODWORD(v9) = qword_140C381B0;
      *(_DWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_160;
    case ProcessEnergyValues:
      memset(v249, 0, sizeof(v249));
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      PsQueryProcessEnergyValues(Object, v249);
      v146 = 432LL;
      if ( (unsigned int)v5 <= 0x1B0 )
        v146 = (unsigned int)v5;
      memmove((void *)v6, v249, v146);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_687;
    case ProcessPowerThrottlingState:
      v232 = 0LL;
      v233 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v148 = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
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
        v148 = v149(Object, &v232);
        if ( v148 >= 0 )
        {
          *(_QWORD *)v6 = v232;
          *(_DWORD *)(v6 + 8) = v233;
          if ( ReturnLength )
            *ReturnLength = 12;
          v148 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v150, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v148;
    case ProcessWin32kSyscallFilterInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v151 = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = v151;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 8;
      if ( ProcessHandle == (HANDLE)-1LL )
        return v9;
      ObfDereferenceObjectWithTag(v151, 0x79517350u);
      return 0;
    case ProcessWakeInformation:
      if ( PreviousMode )
        return -1073741790;
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(v185, Object, v6);
        if ( DeviceMapInformation >= 0 && ReturnLength )
        {
          *ReturnLength = 48;
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
    case ProcessEnergyTrackingState:
      memset(v249, 0, 144);
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      PoQueryProcessEnergyTrackingState(Object, v249);
      if ( (unsigned int)v5 >= 0x90 )
        LODWORD(v5) = 144;
      memmove((void *)v6, v249, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = v5;
      i = 0;
      goto LABEL_628;
    case ProcessCaptureTrustletLiveDump:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        *(_QWORD *)&v249[0] = 0LL;
        memset(&v249[1], 0, 88);
        *((_QWORD *)&v249[0] + 1) = v153;
        v78 = VslpEnterIumSecureMode(2u, 61, 0, (__int64)v249);
LABEL_687:
        ObfDereferenceObjectWithTag(v79, 0x79517350u);
        return v78;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case ProcessTelemetryCoverage:
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
                 4096,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, ReturnLength);
LABEL_158:
      ExecuteOptions = ProcessTelemetryCoverage;
LABEL_159:
      v41 = Object;
      goto LABEL_160;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !(_DWORD)v5
        || ProcessInformationClass == ProcessEnableLogging && (unsigned int)v5 < 4 )
      {
        return -1073741820;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        if ( ProcessInformationClass == ProcessEnableLogging )
          *(_DWORD *)v6 |= (v155[543] & 0x100000 | v155[543] & 0x80000 | ((v155[543] & 0x10000000 | (v155[543] >> 2) & 0x8000000u) >> 6)) >> 17;
        ObfDereferenceObjectWithTag(v155, 0x79517350u);
        return v154;
      }
      return result;
    case ProcessUptimeInformation:
      v224 = 0LL;
      v225 = 0LL;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      v205 = 0LL;
      v206 = 0LL;
      v207 = 0LL;
      v209 = 0LL;
      v157 = (__int64)v185;
      --v185->KernelApcDisable;
      v158 = Object;
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1080, 0LL);
      v159 = v158[292] >> 61;
      if ( (v159 == 3 || v159 == 4)
        && (v207 = v158[292] & 0x1FFFFFFFFFFFFFFFLL, v205 = v158[291], v206 = v205 - v158[288], v159 == 3) )
      {
        v160 = v209 | 0x200;
      }
      else
      {
        v160 = v209;
      }
      LODWORD(v209) = (v160 & 0xFFFFFF00 | *((_BYTE *)v158 + 2171) & 7 | (2 * (*((_BYTE *)v158 + 2171) & 0x38))) ^ ((v160 & 0xFF00 | *((_BYTE *)v158 + 2171) & 7 | (unsigned __int16)(2 * (*((_BYTE *)v158 + 2171) & 0x38))) ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v158 + 543) << 6)) & 0x100;
      if ( _InterlockedCompareExchange64(v158 + 135, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v158 + 135);
      KeAbPostRelease((ULONG_PTR)(v158 + 135));
      KeLeaveCriticalRegionThread(v157);
      p_Lock = Object;
      PsGetProcessDeepFreezeStats(Object, &v224);
      v204 = v224;
      v208 = v225;
      if ( !v206 )
        v206 = v224 - p_Lock[288];
      if ( !v207 )
        v207 = *((_QWORD *)&v224 + 1) - p_Lock[289] - v225;
      if ( (unsigned int)v5 >= 0x38 )
        LODWORD(v5) = 56;
      memmove((void *)v6, &v204, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = v5;
      i = 0;
      goto LABEL_628;
    case ProcessImageSection:
      v202[0] = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( v6 < 0x7FFFFFFF0000LL )
          v14 = v6;
        *(_QWORD *)v14 = *(_QWORD *)v14;
      }
      v156 = KeGetCurrentThread()->ApcState.Process;
      if ( ProcessHandle != (HANDLE)-1LL || v156 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer(
                 (PVOID)v156[1].Affinity.StaticBitmap[17],
                 0,
                 0LL,
                 5u,
                 MmSectionObjectType,
                 PreviousMode,
                 v202);
      if ( result >= 0 )
      {
        *(HANDLE *)v6 = v202[0];
        if ( ReturnLength )
          *ReturnLength = 8;
      }
      return result;
    case ProcessSequenceNumber:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 8;
LABEL_160:
      ObfDereferenceObjectWithTag(v41, 0x79517350u);
      return ExecuteOptions;
    case ProcessSecurityDomainInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
        if ( ReturnLength )
          *ReturnLength = 8;
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
    case ProcessLeapSecondInformation:
      if ( (_DWORD)v5 == 8 )
      {
        if ( ProcessHandle == (HANDLE)-1LL )
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
                LODWORD(v190) = 1;
            }
            else
            {
              v164 = v190;
              if ( (*(_BYTE *)(v161[1].Affinity.StaticBitmap[24] + 1984) & 1) != 0 )
                v164 = 1;
              LODWORD(v190) = v164;
            }
          }
          *(_QWORD *)v6 = v190;
          if ( ReturnLength )
            *ReturnLength = 8;
          return v9;
        }
        else
        {
          return -1073741811;
        }
      }
      else
      {
        if ( ReturnLength )
          *ReturnLength = 8;
        return -1073741820;
      }
    case ProcessAltPrefetchParam:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 16;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessMembershipInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ProcessHandle,
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
      if ( ReturnLength )
        *ReturnLength = 4;
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
        ExQueryHandleExceptionsPermanency(v110, &v169, &v170);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v169 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v170 )
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
      PsQueryProcessSignatureMitigationPolicy(Object, &v187, v14, 0x140000000uLL);
      *(_DWORD *)(v6 + 4) = v187;
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
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    default:
      i = -1073741637;
      goto LABEL_548;
  }
}
