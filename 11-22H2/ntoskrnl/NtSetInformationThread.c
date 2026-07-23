/*
 * XREFs of NtSetInformationThread @ 0x140733AB0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1402031E0 (KeIsSubsetAffinityEx.c)
 *     PsSetIoPriorityThread @ 0x140207824 (PsSetIoPriorityThread.c)
 *     PsGetEffectiveServerSilo @ 0x14020C010 (PsGetEffectiveServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     KeIsEmptyAffinityEx @ 0x140255050 (KeIsEmptyAffinityEx.c)
 *     PspRevertContainerImpersonation @ 0x140259D1C (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x140259DC0 (PsImpersonateContainerOfThread.c)
 *     IoThreadToProcess @ 0x140289E60 (IoThreadToProcess.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessServerSilo @ 0x14028C060 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297574 (PsGetServerSiloGlobals.c)
 *     KeSetPriorityThread @ 0x1402B0310 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402B9630 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402B9D70 (KeSetBasePriorityThread.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     PsSetPagePriorityThread @ 0x1402C1718 (PsSetPagePriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x1402F5F64 (MmGetDefaultPagePriority.c)
 *     MmGetMinWsPagePriority @ 0x1402FBDA0 (MmGetMinWsPagePriority.c)
 *     IoBoostThreadIoPriority @ 0x14031B140 (IoBoostThreadIoPriority.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CAD0 (PsAttachSiloToCurrentThread.c)
 *     KeVerifyGroupAffinity @ 0x140321194 (KeVerifyGroupAffinity.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140349554 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403656C8 (KeQueryPrimaryGroupProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KeSetIdealProcessorThread @ 0x1403CE740 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403CE794 (KeSetIdealProcessorThreadByNumber.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14056F134 (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x140573ED8 (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x140575BD0 (KeSetSelectedCpuSetsThread.c)
 *     PsGetProcessSilo @ 0x1405A3DE0 (PsGetProcessSilo.c)
 *     EtwTraceThreadSetName @ 0x1406ACBBC (EtwTraceThreadSetName.c)
 *     RtlTestProtectedAccess @ 0x1406B828C (RtlTestProtectedAccess.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspThreadFromTicket @ 0x1406FABD8 (PspThreadFromTicket.c)
 *     PsImpersonateClient @ 0x140734F30 (PsImpersonateClient.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcessThread @ 0x140742FC0 (PsGetNextProcessThread.c)
 *     PspWriteTebIdealProcessor @ 0x14076FF4C (PspWriteTebIdealProcessor.c)
 *     PspWow64SetContextThread @ 0x1407A0968 (PspWow64SetContextThread.c)
 *     PspSetThreadPpmPolicy @ 0x1407CD7B0 (PspSetThreadPpmPolicy.c)
 *     SeCheckPrivilegedObject @ 0x1407E05E4 (SeCheckPrivilegedObject.c)
 *     PspIsSiloInSilo @ 0x1407E5990 (PspIsSiloInSilo.c)
 *     KeSetDisableBoostThread @ 0x1407EB3F4 (KeSetDisableBoostThread.c)
 *     KeEnableProfiling @ 0x140974E88 (KeEnableProfiling.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  size_t v4; // r14
  struct _LIST_ENTRY *v7; // rbx
  struct _KTHREAD *CurrentThread; // r13
  __int64 PreviousMode; // r9
  unsigned int v10; // r15d
  __int64 v11; // rax
  NTSTATUS result; // eax
  struct _KTHREAD *v13; // rax
  KPROCESSOR_MODE v14; // r9
  PVOID v15; // rdi
  HANDLE v16; // rdi
  NTSTATUS v17; // esi
  int v18; // edi
  PETHREAD v19; // rbx
  _KPROCESS *Process; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rax
  LONG v24; // edx
  NTSTATUS v25; // r14d
  int v26; // edi
  char v27; // r9
  PETHREAD v28; // rcx
  ULONG v29; // edx
  LONG v30; // edi
  NTSTATUS v31; // esi
  PETHREAD v32; // rbx
  void *v33; // r15
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int16 v36; // ax
  unsigned __int16 v37; // di
  __int64 Pool2; // rax
  PETHREAD v39; // rdi
  PETHREAD v40; // rbx
  unsigned int v41; // edi
  PETHREAD v42; // rbx
  UCHAR v43; // di
  PETHREAD v44; // rbx
  NTSTATUS v45; // edi
  int v46; // edx
  unsigned int v47; // r15d
  NTSTATUS v48; // r13d
  PETHREAD v49; // rdi
  _KPROCESS *v50; // rsi
  struct _EX_RUNDOWN_REF *v51; // rdx
  __int64 NextProcessThread; // rax
  struct _EX_RUNDOWN_REF *v53; // rdi
  unsigned __int64 Count; // rcx
  unsigned __int64 v55; // rax
  _WORD *v56; // rdx
  char v57; // r8
  unsigned __int64 v58; // r9
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  __int16 v62; // r8
  KPRIORITY v63; // edi
  _KPROCESS *v64; // r14
  unsigned __int64 v65; // rax
  char *v66; // rdi
  PETHREAD v67; // rdi
  NTSTATUS v68; // ebx
  unsigned int v69; // edi
  PETHREAD v70; // rcx
  __int64 v71; // rdi
  PETHREAD v72; // rsi
  _KPROCESS *v73; // r15
  struct _KTHREAD *v74; // rcx
  int v75; // edi
  int v76; // esi
  NTSTATUS v77; // edi
  PVOID v78; // rcx
  char v79; // di
  int IsSubsetAffinity; // eax
  unsigned __int64 v81; // rcx
  PETHREAD v82; // rdi
  NTSTATUS v83; // ebx
  __int64 v84; // rdx
  unsigned int v85; // edi
  int v86; // edi
  int v87; // edi
  struct _KTHREAD *v88; // rax
  struct _LIST_ENTRY *v89; // rax
  struct _LIST_ENTRY *v90; // rdi
  PEPROCESS v91; // rsi
  char IsSiloInSilo; // al
  struct _LIST_ENTRY *v93; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  char v96; // [rsp+40h] [rbp-3A8h]
  PETHREAD Thread; // [rsp+48h] [rbp-3A0h] BYREF
  NTSTATUS v98; // [rsp+50h] [rbp-398h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-390h]
  char v100; // [rsp+60h] [rbp-388h]
  char v101; // [rsp+61h] [rbp-387h]
  char v102; // [rsp+62h] [rbp-386h]
  __int16 v103[2]; // [rsp+68h] [rbp-380h] BYREF
  _PROCESSOR_NUMBER v104; // [rsp+6Ch] [rbp-37Ch] BYREF
  char v105; // [rsp+70h] [rbp-378h]
  LONG Increment; // [rsp+74h] [rbp-374h]
  void *v107; // [rsp+78h] [rbp-370h]
  PVOID v108; // [rsp+80h] [rbp-368h] BYREF
  struct _KTHREAD *v109; // [rsp+88h] [rbp-360h]
  int v110; // [rsp+90h] [rbp-358h]
  PVOID Object[2]; // [rsp+98h] [rbp-350h] BYREF
  unsigned int v112; // [rsp+A8h] [rbp-340h]
  PVOID P; // [rsp+B0h] [rbp-338h]
  __int128 v114; // [rsp+B8h] [rbp-330h] BYREF
  __int128 v115; // [rsp+C8h] [rbp-320h]
  unsigned __int64 v116; // [rsp+D8h] [rbp-310h]
  PVOID v117; // [rsp+E0h] [rbp-308h] BYREF
  ULONG_PTR v118; // [rsp+E8h] [rbp-300h]
  HANDLE v119; // [rsp+F0h] [rbp-2F8h] BYREF
  unsigned __int64 v120; // [rsp+F8h] [rbp-2F0h]
  void *Src[2]; // [rsp+100h] [rbp-2E8h]
  int v122; // [rsp+110h] [rbp-2D8h]
  int v123; // [rsp+114h] [rbp-2D4h]
  int v124; // [rsp+118h] [rbp-2D0h]
  unsigned int v125; // [rsp+11Ch] [rbp-2CCh]
  unsigned int v126; // [rsp+120h] [rbp-2C8h]
  int v127; // [rsp+124h] [rbp-2C4h]
  int v128; // [rsp+130h] [rbp-2B8h]
  int v129; // [rsp+134h] [rbp-2B4h]
  HANDLE Handle; // [rsp+148h] [rbp-2A0h]
  int v131; // [rsp+150h] [rbp-298h]
  unsigned int v132; // [rsp+154h] [rbp-294h]
  __m128i v133; // [rsp+160h] [rbp-288h]
  int v134; // [rsp+170h] [rbp-278h]
  __int64 v135; // [rsp+178h] [rbp-270h]
  HANDLE v136; // [rsp+180h] [rbp-268h]
  _QWORD v137[34]; // [rsp+190h] [rbp-258h] BYREF
  char v138[256]; // [rsp+2A0h] [rbp-148h] BYREF

  v4 = ThreadInformationLength;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  v7 = 0LL;
  Thread = 0LL;
  v114 = 0LL;
  memset(v137, 0, 0x108uLL);
  v103[0] = 0;
  v110 = 0;
  v112 = 0;
  v108 = 0LL;
  v120 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v104 = 0;
  v117 = 0LL;
  *(_OWORD *)Src = 0LL;
  v119 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v109 = CurrentThread;
  PreviousMode = (unsigned __int8)CurrentThread->PreviousMode;
  v96 = PreviousMode;
  if ( (_BYTE)PreviousMode )
  {
    if ( ThreadInformationClass < ThreadEnableAlignmentFaultFixup && ThreadInformationClass >= ThreadImpersonationToken
      || ThreadInformationClass >= ThreadSelectedCpuSets
      && ThreadInformationClass < ThreadManageWritesToExecutableMemory )
    {
LABEL_4:
      v10 = 3;
      v11 = 3LL;
    }
    else
    {
      switch ( ThreadInformationClass )
      {
        case ThreadAffinityMask:
        case ThreadGroupInformation:
        case ThreadCpuAccountingInformation:
        case ThreadNameInformation:
        case ThreadManageWritesToExecutableMemory:
          v11 = 7LL;
          v10 = 3;
          break;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v11 = 0LL;
          v10 = 3;
          break;
        default:
          goto LABEL_4;
      }
    }
    if ( (_DWORD)v4 )
    {
      if ( ((unsigned __int64)ThreadInformation & v11) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + v4 > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + v4 < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    v10 = 3;
  }
  if ( ThreadInformationClass == ThreadImpersonationToken )
  {
    if ( (_DWORD)v4 == 8 )
    {
      Handle = *(HANDLE *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 128,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x79517350u,
                 &Thread,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v13 = KeGetCurrentThread();
        if ( Handle )
        {
          v14 = v13->PreviousMode;
          Object[0] = 0LL;
          LODWORD(v7) = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)SeTokenObjectType, v14, Object, 0LL);
          if ( (int)v7 >= 0 )
          {
            v15 = Object[0];
            if ( *((_DWORD *)Object[0] + 48) == 2 )
            {
              LODWORD(v7) = PsImpersonateClient(
                              Thread,
                              Object[0],
                              0,
                              0,
                              *((SECURITY_IMPERSONATION_LEVEL *)Object[0] + 49));
              ObfDereferenceObject(v15);
            }
            else
            {
              ObfDereferenceObject(Object[0]);
              LODWORD(v7) = -1073741656;
            }
          }
        }
        else
        {
          PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
        }
LABEL_21:
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        return (int)v7;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass != ThreadWorkOnBehalfTicket )
  {
    switch ( ThreadInformationClass )
    {
      case ThreadPriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v134 = *(_DWORD *)ThreadInformation;
        v63 = v134;
        if ( (unsigned int)(v134 - 1) > 0x1E )
          return -1073741811;
        if ( v134 < 16 )
          goto LABEL_158;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 BugCheckParameter1,
                                 1024LL,
                                 PreviousMode) )
          return -1073741727;
        LOBYTE(PreviousMode) = v96;
LABEL_158:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        KeSetPriorityThread(Thread, v63);
LABEL_50:
        v28 = Thread;
LABEL_51:
        v29 = 2035381072;
        goto LABEL_52;
      case ThreadBasePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v18 = *(_DWORD *)ThreadInformation;
        Increment = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        v19 = Thread;
        Process = Thread->Process;
        v21 = (unsigned int)(v18 + 16);
        if ( (unsigned int)v21 > 0x20 || (v22 = 0x10007C001LL, !_bittest64(&v22, v21)) )
        {
          if ( CurrentThread->ApcState.Process != (_KPROCESS *)*((_QWORD *)PsGetServerSiloGlobals(0LL) + 110)
            && HIBYTE(Process[1].ActiveProcessors.StaticBitmap[0]) != 4 )
          {
            v25 = -1073741811;
LABEL_43:
            ObfDereferenceObjectWithTag(v19, 0x79517350u);
            return v25;
          }
        }
        v23 = (_DWORD *)Process[1].Affinity.StaticBitmap[16];
        v108 = v23;
        if ( v23 && (v23[260] & 0x20) != 0 && HIBYTE(Process[1].ActiveProcessors.StaticBitmap[0]) != 4 )
        {
          v24 = Increment;
          if ( Increment > 0 )
          {
            v19 = Thread;
            goto LABEL_42;
          }
        }
        else
        {
          v24 = Increment;
        }
        v19 = Thread;
        KeSetBasePriorityThread(Thread, v24);
LABEL_42:
        v25 = v98;
        goto LABEL_43;
      case ThreadAffinityMask:
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        *(_QWORD *)&v114 = *(_QWORD *)ThreadInformation;
        v71 = v114;
        if ( !(_QWORD)v114 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v72 = Thread;
          v73 = Thread->Process;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v73[1].ProfileListHead.Blink) )
          {
            if ( !KiSetLegacyAffinityThread((__int64)v72, v71) )
              LODWORD(v7) = -1073741811;
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v73[1].ProfileListHead.Blink);
          }
          else
          {
            LODWORD(v7) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v72, 0x79517350u);
          return (int)v7;
        }
        return result;
      case ThreadEnableAlignmentFaultFixup:
        if ( (_DWORD)v4 != 1 )
          return -1073741820;
        v79 = *(_BYTE *)ThreadInformation;
        v105 = *(_BYTE *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        if ( v79 )
          _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 2u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 2u);
        goto LABEL_50;
      case ThreadQuerySetWin32StartAddress:
        return -1073741811;
      case ThreadZeroTlsCell:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v47 = *(_DWORD *)ThreadInformation;
        v110 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v48 = result;
        v98 = result;
        if ( result < 0 )
          return result;
        v49 = Thread;
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( v49 != v109 )
          return -1073741811;
        v50 = v49->Process;
        v109 = (struct _KTHREAD *)v50;
        v51 = 0LL;
        while ( 2 )
        {
          NextProcessThread = PsGetNextProcessThread(v50, v51);
          Thread = (PETHREAD)NextProcessThread;
          v53 = (struct _EX_RUNDOWN_REF *)NextProcessThread;
          if ( !NextProcessThread )
            return v48;
          if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(NextProcessThread + 1352)) )
            goto LABEL_123;
          Count = v53[30].Count;
          if ( !Count )
            goto LABEL_153;
          v55 = v50[1].Affinity.StaticBitmap[30];
          if ( v55 )
          {
            v56 = (_WORD *)&v50[2].Affinity.StaticBitmap[20] + 2;
            v62 = WORD2(v50[2].Affinity.StaticBitmap[20]);
            if ( v62 == 332 || v62 == 452 )
            {
              v57 = 1;
              goto LABEL_128;
            }
          }
          else
          {
            v56 = (_WORD *)&v50[2].Affinity.StaticBitmap[20] + 2;
          }
          v57 = 0;
LABEL_128:
          v102 = v57;
          v58 = Count + 0x2000;
          if ( !v57 )
            v58 = 0LL;
          if ( v47 >= 0x40 )
          {
            if ( v47 < 0x440 )
            {
              if ( v55 && (*v56 == 332 || *v56 == 452) )
              {
                if ( v58 )
                {
                  v61 = *(unsigned int *)(v58 + 3988);
                  if ( (_DWORD)v61 )
                    *(_DWORD *)(v61 + 4LL * (v47 - 64)) = 0;
                }
              }
              else
              {
                v59 = *(_QWORD *)(Count + 6016);
                v135 = v59;
                if ( v59 )
                {
                  v60 = v59 + 8LL * (v47 - 64);
                  if ( v60 >= 0x7FFFFFFF0000LL )
                    v60 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v60 = 0LL;
                }
              }
            }
          }
          else if ( v55 && (*v56 == 332 || *v56 == 452) )
          {
            if ( v58 )
              *(_DWORD *)(v58 + 4LL * v47 + 3600) = 0;
          }
          else
          {
            *(_QWORD *)(Count + 8LL * v47 + 5248) = 0LL;
          }
LABEL_153:
          ExReleaseRundownProtection_0(v53 + 169);
LABEL_123:
          v51 = v53;
          continue;
        }
      case ThreadIdealProcessor:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v112 = *(_DWORD *)ThreadInformation;
        v43 = v112;
        if ( v112 > 0x40 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v44 = Thread;
        v45 = KeSetIdealProcessorThread(Thread, v43);
        if ( (v44->MiscFlags & 0x400) == 0 )
          PspWriteTebIdealProcessor(CurrentThread, v44);
LABEL_107:
        ObfDereferenceObjectWithTag(v44, 0x79517350u);
        return v45;
      case ThreadPriorityBoost:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v76 = *(_DWORD *)ThreadInformation;
        v122 = v76;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v77 = result;
        if ( result >= 0 )
        {
          KeSetDisableBoostThread(Thread, v76 != 0);
          ObfDereferenceObjectWithTag(v78, 0x79517350u);
          return v77;
        }
        return result;
      case ThreadSetTlsArrayAddress:
        return -1073741822;
      case ThreadHideFromDebugger:
        if ( (_DWORD)v4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 4u);
        goto LABEL_176;
      case ThreadBreakOnTermination:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v75 = *(_DWORD *)ThreadInformation;
        v123 = *(_DWORD *)ThreadInformation;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v96,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        if ( v75 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x20u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFDF);
        goto LABEL_50;
      case ThreadSwitchLegacyState:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   0xFFFFFFFFFFFFFFFEuLL,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v28 = Thread;
        Thread->NpxState |= MEMORY[0xFFFFF780000003D8] | 3LL;
        goto LABEL_51;
      case ThreadIoPriority:
        if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( (_DWORD)v4 == 4 )
        {
          v41 = *(_DWORD *)ThreadInformation;
          v124 = *(_DWORD *)ThreadInformation;
          LOBYTE(ThreadInformation) = 0;
        }
        else
        {
          v120 = *(_QWORD *)ThreadInformation;
          v41 = v120;
          ThreadInformation = (PVOID)HIDWORD(v120);
        }
        if ( v41 >= 4 )
          return -1073741811;
        if ( v41 < 3 )
          goto LABEL_97;
        if ( !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 BugCheckParameter1,
                                 32LL,
                                 PreviousMode) )
          return -1073741727;
        LOBYTE(PreviousMode) = v96;
LABEL_97:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v42 = Thread;
          if ( (_BYTE)ThreadInformation == 1 && ((*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7) < (int)v41 )
            IoBoostThreadIoPriority((volatile signed __int64 *)&Thread->Header.Lock, v41, 0);
          PsSetIoPriorityThread((__int64)v42, v41);
          ObfDereferenceObjectWithTag(v42, 0x79517350u);
          return 0;
        }
        return result;
      case ThreadPagePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v126 = *(_DWORD *)ThreadInformation;
        v26 = v126;
        if ( v126 > (unsigned int)MmGetDefaultPagePriority() || v126 < (unsigned int)MmGetMinWsPagePriority() )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v27,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        PsSetPagePriorityThread((__int64)Thread, v26);
        goto LABEL_50;
      case ThreadActualBasePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        Increment = *(_DWORD *)ThreadInformation;
        v30 = Increment;
        if ( (unsigned int)(Increment - 1) > 0x1E )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v31 = result;
        if ( result >= 0 )
        {
          v32 = Thread;
          if ( v30 < 16
            || HIBYTE(Thread->Process[1].ActiveProcessors.StaticBitmap[0]) == 4
            || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v96) )
          {
            KeSetActualBasePriorityThread((ULONG_PTR)v32, v30);
          }
          else
          {
            v31 = -1073741727;
          }
          ObfDereferenceObjectWithTag(v32, 0x79517350u);
          return v31;
        }
        return result;
      case ThreadWow64Context:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   16,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v67 = Thread;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
          {
            v68 = PspWow64SetContextThread(v67);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v67[1].WaitStatus);
            ObfDereferenceObjectWithTag(v67, 0x79517350u);
            return v68;
          }
          else
          {
            ObfDereferenceObjectWithTag(v67, 0x79517350u);
            return -1073741749;
          }
        }
        return result;
      case ThreadGroupInformation:
        if ( (_DWORD)v4 != 16 )
          return -1073741820;
        v114 = *(_OWORD *)ThreadInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v114, 1) )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   v96,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        LODWORD(v137[0]) = 2097153;
        memset((char *)v137 + 4, 0, 0x104uLL);
        if ( !WORD4(v114) )
          goto LABEL_166;
        if ( WORD1(v137[0]) > WORD4(v114) )
        {
          LOWORD(v137[0]) = WORD4(v114) + 1;
LABEL_166:
          v137[WORD4(v114) + 1] |= v114;
        }
        v64 = Thread->Process;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v64[1], 0LL);
        v65 = v64[1].Affinity.StaticBitmap[16];
        v108 = (PVOID)v65;
        v66 = (char *)v65;
        if ( v65
          && (ExAcquireResourceSharedLite((PERESOURCE)(v65 + 56), 1u), (*((_DWORD *)v66 + 260) & 0x10) != 0)
          && (IsSubsetAffinity = KeIsSubsetAffinityEx((__int64)v137, (__int64)(v66 + 712))) == 0 )
        {
          v98 = -1073741823;
        }
        else
        {
          KeSetUserAffinityThread((__int64)Thread, (__int64)v137);
          KeQueryPrimaryGroupProcess((__int64)v64, v103);
          v98 = 0;
          if ( !(unsigned int)KeIsEmptyAffinityEx(v137) )
          {
            v98 = 0;
            if ( v103[0] != WORD4(v114) )
            {
              _interlockedbittestandset((volatile signed __int32 *)&v64->632, 0xCu);
              v98 = 0;
              v66 = (char *)v108;
            }
          }
        }
        if ( v66 )
          ExReleaseResourceLite((PERESOURCE)(v66 + 56));
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v64[1].Header.Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v64[1].Header.Lock);
        KeAbPostRelease((ULONG_PTR)&v64[1]);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_176;
      case ThreadCounterProfiling:
        if ( (_DWORD)v4 != 24 )
          return -1073741820;
        v115 = *(_OWORD *)ThreadInformation;
        v116 = *((_QWORD *)ThreadInformation + 2);
        v81 = v116;
        if ( (v116 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v116 >= 0x7FFFFFFF0000LL )
          v81 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v81 = *(_BYTE *)v81;
        *(_BYTE *)(v81 + 447) = *(_BYTE *)(v81 + 447);
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v82 = Thread;
          if ( Thread == KeGetCurrentThread() )
          {
            if ( HIDWORD(v115) )
              v83 = KeEnableProfiling(Thread, DWORD2(v115), v115, v116);
            else
              v83 = KeDisableProfiling((__int64)Thread, v116);
          }
          else
          {
            v83 = -1073741637;
          }
          ObfDereferenceObjectWithTag(v82, 0x79517350u);
          return v83;
        }
        return result;
      case ThreadIdealProcessorEx:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v104 = *(_PROCESSOR_NUMBER *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v44 = Thread;
        v45 = KeSetIdealProcessorThreadByNumber(Thread, &v104, &v104);
        if ( v45 >= 0 )
        {
          if ( (v44->MiscFlags & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v44);
          *(_PROCESSOR_NUMBER *)ThreadInformation = v104;
        }
        goto LABEL_107;
      case ThreadCpuAccountingInformation:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        v136 = *(HANDLE *)ThreadInformation;
        if ( v136 )
        {
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)v136,
                     2,
                     (__int64)MmSessionObjectType,
                     PreviousMode,
                     0x79517350u,
                     &v117,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v7 = (struct _LIST_ENTRY *)v117;
          v84 = *((_QWORD *)v117 + 4);
          if ( !v84 )
          {
            ObfDereferenceObjectWithTag(v117, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v84) )
          {
            ObfDereferenceObjectWithTag(v7, 0x79517350u);
            return -1073740714;
          }
        }
        else
        {
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL) )
            return -1073740713;
          ObfDereferenceObject(CurrentThread[1].ApcState.ApcListHead[1].Flink);
        }
        CurrentThread[1].ApcState.ApcListHead[1].Flink = v7;
        return 0;
      case ThreadHeterogeneousCpuPolicy:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v85 = MEMORY[4];
        v131 = MEMORY[4];
        if ( MEMORY[4] > 8u )
          return -1073741811;
        v17 = ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
                1024,
                (__int64)PsThreadType,
                PreviousMode,
                0x79517350u,
                &Thread,
                0LL,
                0LL);
        if ( v17 < 0 )
          return v17;
        KeSetUserHeteroCpuPolicyThread((__int64)Thread, v85);
        goto LABEL_32;
      case ThreadNameInformation:
        v101 = 0;
        v33 = 0LL;
        v107 = 0LL;
        P = 0LL;
        v100 = 0;
        if ( (_DWORD)v4 == 16 )
        {
          v25 = ObpReferenceObjectByHandleWithTag(
                  BugCheckParameter1,
                  1024,
                  (__int64)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Thread,
                  0LL,
                  0LL);
          v98 = v25;
          if ( v25 < 0 )
            goto LABEL_82;
          v101 = 1;
          if ( v96 )
          {
            v133 = 0LL;
            v34 = 0x7FFFFFFF0000LL;
            if ( (unsigned __int64)ThreadInformation < 0x7FFFFFFF0000LL )
              v34 = (__int64)ThreadInformation;
            v133.m128i_i32[0] = *(_DWORD *)v34;
            v35 = *(_QWORD *)(v34 + 8);
            v133.m128i_i64[1] = v35;
            *(__m128i *)Src = v133;
            v36 = _mm_cvtsi128_si32(v133);
            if ( v36 )
            {
              if ( (v35 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v35 + v36 > 0x7FFFFFFF0000LL || v36 + v35 < v35 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v25 = v98;
            v33 = v107;
          }
          else
          {
            *(_OWORD *)Src = *(_OWORD *)ThreadInformation;
          }
          v37 = (unsigned __int16)Src[0];
          if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
          {
            v25 = -1073741811;
          }
          else
          {
            Pool2 = ExAllocatePool2(64LL, LOWORD(Src[0]) + 16LL, 1833855060LL);
            v33 = (void *)Pool2;
            v107 = (void *)Pool2;
            if ( Pool2 )
            {
              *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
              *(_WORD *)Pool2 = v37;
              *(_WORD *)(Pool2 + 2) = v37;
              memmove((void *)(Pool2 + 16), Src[1], v37);
              --CurrentThread->KernelApcDisable;
              v39 = Thread;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
              v100 = 1;
              P = *(PVOID *)&v39[1].WaitBlockFill11[160];
              *(_QWORD *)&v39[1].WaitBlockFill11[160] = v33;
              v33 = 0LL;
              v107 = 0LL;
              EtwTraceThreadSetName((__int64)v39);
              goto LABEL_82;
            }
            v25 = -1073741670;
          }
        }
        else
        {
          v25 = -1073741820;
        }
        v98 = v25;
LABEL_82:
        if ( v100 )
        {
          v40 = Thread;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v40[1].WaitBlockList);
          KeAbPostRelease((ULONG_PTR)&v40[1].WaitBlockList);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          v25 = v98;
          v33 = v107;
        }
        if ( v101 )
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( P )
          ExFreePoolWithTag(P, 0x6D4E6854u);
        if ( v33 )
          ExFreePoolWithTag(v33, 0x6D4E6854u);
        return v25;
      case ThreadSelectedCpuSets:
        if ( (v4 & 7) != 0 || (unsigned int)v4 > 0x100 )
          return -1073741820;
        memmove(v138, ThreadInformation, v4);
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   1024,
                   (__int64)PsThreadType,
                   v96,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        LODWORD(v7) = KeSetSelectedCpuSetsThread((__int64)Thread, (unsigned int)v4 >> 3, v138);
        goto LABEL_21;
      case ThreadDynamicCodePolicyInfo:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v127 = *(_DWORD *)ThreadInformation;
        if ( v127 == 1 )
        {
          if ( ((__int64)CurrentThread->Process[2].ReadyListHead.Blink & 0x200) != 0 )
          {
            _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
            return 0;
          }
          return -1073741790;
        }
        if ( v127 )
          return -1073741811;
        _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
        return 0;
      case ThreadExplicitCaseSensitivity:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v86 = *(_DWORD *)ThreadInformation;
        v128 = *(_DWORD *)ThreadInformation;
        if ( !(_BYTE)PreviousMode )
          goto LABEL_294;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        if ( !RtlTestProtectedAccess(
                (PS_PROTECTION)SBYTE2(CurrentThread->Process[2].Header.WaitListHead.Flink),
                (PS_PROTECTION)81) )
          return -1073741790;
        LOBYTE(PreviousMode) = v96;
LABEL_294:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        if ( v86 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x80000u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFF7FFFF);
LABEL_176:
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        return v98;
      case ThreadDbgkWerReportActive:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v87 = *(_DWORD *)ThreadInformation;
        v129 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        if ( v87 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFDFFFFF);
        goto LABEL_176;
      case ThreadAttachContainer:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        v118 = *(_QWORD *)ThreadInformation;
        v88 = KeGetCurrentThread();
        if ( v118 )
        {
          Thread = v88;
          if ( v88[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(
                     v118,
                     32,
                     (__int64)PsJobType,
                     PreviousMode,
                     0x6D497350u,
                     &v108,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v90 = (struct _LIST_ENTRY *)v108;
          if ( (*((_DWORD *)v108 + 385) & 2) == 0 )
          {
            ObfDereferenceObjectWithTag(v108, 0x6D497350u);
            return -1073741811;
          }
          v91 = IoThreadToProcess(Thread);
          PsGetProcessSilo((__int64)v91);
          IsSiloInSilo = PspIsSiloInSilo(v90);
          v93 = v90;
          if ( !IsSiloInSilo
            || (EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v90),
                ProcessServerSilo = PsGetProcessServerSilo((__int64)v91),
                v93 = v90,
                ProcessServerSilo != EffectiveServerSilo) )
          {
            ObfDereferenceObjectWithTag(v93, 0x6D497350u);
            return -1073741811;
          }
          PsAttachSiloToCurrentThread(v90);
        }
        else
        {
          if ( v88[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
            return -1073741811;
          v89 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
          v29 = 1833530192;
          v28 = (PETHREAD)v89;
LABEL_52:
          ObfDereferenceObjectWithTag(v28, v29);
        }
        return 0;
      case ThreadManageWritesToExecutableMemory:
        return -1073741637;
      case ThreadPowerThrottlingState:
        if ( (_DWORD)v4 != 12 )
          return -1073741820;
        Object[0] = *(PVOID *)ThreadInformation;
        v46 = *((_DWORD *)ThreadInformation + 2);
        if ( LODWORD(Object[0]) != 1 || (HIDWORD(Object[0]) & 0xFFFFFFFE) != 0 || (~HIDWORD(Object[0]) & v46) != 0 )
          return -1073741811;
        if ( (BYTE4(Object[0]) & 1) != 0 )
        {
          if ( (v46 & 1) != 0 )
            v10 = 8;
        }
        else
        {
          v10 = 0;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        PspSetThreadPpmPolicy(Thread, v10);
        goto LABEL_50;
      case ThreadWorkloadClass:
        if ( BugCheckParameter1 != -2LL || (_BYTE)PreviousMode )
          return -1073741790;
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v125 = *(_DWORD *)ThreadInformation;
        if ( v125 >= 2 )
          return -1073741811;
        v74 = KeGetCurrentThread();
        *((_DWORD *)&v74[1].SwapListEntry + 3) ^= (*((_DWORD *)&v74[1].SwapListEntry + 3) ^ (v125 << 11)) & 0x800;
        KeUpdateThreadCpuSets((__int64)v74);
        return 0;
      case ThreadStrongerBadHandleChecks:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( BugCheckParameter1 != -2LL )
          return -1073741790;
        v132 = *(_DWORD *)ThreadInformation;
        v69 = v132;
        if ( v132 > 1 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   0xFFFFFFFFFFFFFFFEuLL,
                   32,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Thread,
                   0LL,
                   0LL);
        if ( result >= 0 )
        {
          v70 = Thread;
          *((_DWORD *)&Thread[1].SwapListEntry + 3) ^= (*((_DWORD *)&Thread[1].SwapListEntry + 3) ^ (v69 << 12)) & 0x1000;
          ObfDereferenceObjectWithTag(v70, 0x79517350u);
          return 0;
        }
        return result;
      default:
        return -1073741821;
    }
  }
  if ( BugCheckParameter1 != -2LL )
    return -1073741811;
  if ( (_DWORD)v4 != 8 )
    return -1073741820;
  v16 = *(HANDLE *)ThreadInformation;
  v119 = *(HANDLE *)ThreadInformation;
  v17 = ObpReferenceObjectByHandleWithTag(
          0xFFFFFFFFFFFFFFFEuLL,
          1024,
          (__int64)PsThreadType,
          PreviousMode,
          0x79517350u,
          &Thread,
          0LL,
          0LL);
  if ( v17 >= 0 )
  {
    Object[0] = 0LL;
    if ( v16 )
    {
      v17 = PspThreadFromTicket(&v119, (PETHREAD *)Object);
      if ( v17 >= 0 )
      {
        PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
        PsImpersonateContainerOfThread((__int64)Object[0]);
        ObfDereferenceObject(Object[0]);
      }
    }
    else
    {
      PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
    }
LABEL_32:
    ObfDereferenceObjectWithTag(Thread, 0x79517350u);
  }
  return v17;
}
