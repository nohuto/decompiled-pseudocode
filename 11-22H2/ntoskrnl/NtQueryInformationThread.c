/*
 * XREFs of NtQueryInformationThread @ 0x14079FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IoThreadToProcess @ 0x140289E60 (IoThreadToProcess.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     PsGetIoPriorityThread @ 0x1402A8A90 (PsGetIoPriorityThread.c)
 *     PsGetWorkOnBehalfThread @ 0x1402B68E4 (PsGetWorkOnBehalfThread.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     KeQueryValuesThread @ 0x1402C2C10 (KeQueryValuesThread.c)
 *     PsGetPagePriorityThread @ 0x1402E1520 (PsGetPagePriorityThread.c)
 *     KeQueryUserAffinityThread @ 0x14032956C (KeQueryUserAffinityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140329BD0 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x140329CF8 (KeQueryBasePriorityThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x140329E28 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PsGetEffectiveContainerId @ 0x14033D560 (PsGetEffectiveContainerId.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403B6620 (xKdEnumerateDebuggingDevices.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403CE794 (KeSetIdealProcessorThreadByNumber.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x14056EEA0 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x14056EEC4 (KeQueryPrimaryGroupAffinityThread.c)
 *     KeQueryCpuSetsThread @ 0x1405751A8 (KeQueryCpuSetsThread.c)
 *     PsQueryThreadStartAddress @ 0x1405A3F84 (PsQueryThreadStartAddress.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCopyVirtualMemory @ 0x1406F79C0 (MiCopyVirtualMemory.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     PsGetThreadExitStatus @ 0x1407A0660 (PsGetThreadExitStatus.c)
 *     PspWow64GetContextThread @ 0x1407A069C (PspWow64GetContextThread.c)
 *     VslGetSecureTebAddress @ 0x1409425EC (VslGetSecureTebAddress.c)
 *     PspGetThreadPpmPolicy @ 0x1409AE538 (PspGetThreadPpmPolicy.c)
 *     PspQueryLastCallThread @ 0x1409AF378 (PspQueryLastCallThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r14
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // r9
  char PreviousMode; // dl
  int v12; // r13d
  _PROCESSOR_NUMBER v13; // eax
  __int64 v14; // rcx
  NTSTATUS result; // eax
  int v16; // ebx
  char *v17; // rdi
  __int128 v18; // xmm6
  __int64 v19; // rax
  _WORD *v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r14
  __int64 v23; // r12
  NTSTATUS ContextThread; // edi
  PVOID v25; // rcx
  PVOID v26; // r8
  int PagePriorityThread; // eax
  PVOID v28; // rcx
  PVOID WorkOnBehalfThread; // rcx
  PVOID v30; // r9
  int IoPriorityThread; // eax
  void *v32; // rcx
  NTSTATUS v33; // edi
  unsigned __int16 *v34; // r14
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdi
  int v38; // ebx
  int v39; // ebx
  PVOID v40; // rdi
  ULONG_PTR v41; // r13
  unsigned __int64 v42; // rcx
  ULONG *v43; // r14
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  _KPROCESS *Process; // r8
  PVOID v47; // r12
  PVOID v48; // rcx
  PVOID v49; // rbx
  NTSTATUS v50; // r12d
  ULONG v51; // ebx
  NTSTATUS v52; // r14d
  unsigned int *v53; // rdi
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v55; // rcx
  PVOID v56; // rdi
  char v57; // di
  signed __int64 *v58; // r13
  signed __int64 v59; // rax
  const WCHAR *v60; // rdx
  unsigned __int16 v61; // ax
  ULONG v62; // ecx
  unsigned __int16 v63; // ax
  __int64 v64; // rsi
  int v65; // edi
  int ThreadPpmPolicy; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  PVOID Object; // [rsp+40h] [rbp-3C8h] BYREF
  unsigned __int8 v71; // [rsp+48h] [rbp-3C0h]
  char v72; // [rsp+49h] [rbp-3BFh]
  char v73; // [rsp+4Ah] [rbp-3BEh]
  NTSTATUS v74; // [rsp+4Ch] [rbp-3BCh]
  unsigned __int16 v75; // [rsp+54h] [rbp-3B4h]
  _PROCESSOR_NUMBER v76[6]; // [rsp+58h] [rbp-3B0h] BYREF
  _WORD *v77; // [rsp+70h] [rbp-398h]
  int v78; // [rsp+78h] [rbp-390h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+80h] [rbp-388h]
  PULONG v80; // [rsp+88h] [rbp-380h]
  unsigned __int64 CycleTimeStamp; // [rsp+90h] [rbp-378h] BYREF
  ULONG v82; // [rsp+98h] [rbp-370h]
  HANDLE v83; // [rsp+A0h] [rbp-368h]
  __int128 v84; // [rsp+A8h] [rbp-360h] BYREF
  __int128 v85; // [rsp+B8h] [rbp-350h] BYREF
  _OWORD v86[2]; // [rsp+C8h] [rbp-340h] BYREF
  __int128 v87; // [rsp+E8h] [rbp-320h]
  ULONG v88; // [rsp+F8h] [rbp-310h]
  __int64 v89[5]; // [rsp+100h] [rbp-308h] BYREF
  _OWORD v90[2]; // [rsp+130h] [rbp-2D8h] BYREF
  __int128 v91; // [rsp+150h] [rbp-2B8h] BYREF
  int v92; // [rsp+160h] [rbp-2A8h]
  __m128i v93[3]; // [rsp+168h] [rbp-2A0h] BYREF
  _DWORD v94[68]; // [rsp+1A0h] [rbp-268h] BYREF
  _QWORD Src[32]; // [rsp+2B0h] [rbp-158h] BYREF

  v5 = ThreadInformationLength;
  v83 = ThreadHandle;
  v80 = ReturnLength;
  DWORD1(v86[0]) = 0;
  v9 = 0LL;
  v89[0] = 0LL;
  v91 = 0LL;
  v92 = 0;
  v84 = 0LL;
  memset(v93, 0, sizeof(v93));
  memset(&v76[2], 0, 12);
  Object = 0LL;
  memset(&v94[2], 0, 0x100uLL);
  CycleTimeStamp = 0LL;
  memset(v90, 0, sizeof(v90));
  CurrentThread = KeGetCurrentThread();
  v77 = CurrentThread;
  RunRef = (PEX_RUNDOWN_REF)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v71 = PreviousMode;
  if ( PreviousMode )
  {
    v12 = 1;
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v13 = (_PROCESSOR_NUMBER)8;
    }
    else if ( (unsigned int)v5 >= 4 || ThreadInformationClass == ThreadPowerThrottlingState )
    {
      v13 = (_PROCESSOR_NUMBER)4;
    }
    else
    {
      v13 = (_PROCESSOR_NUMBER)1;
    }
    v76[1] = v13;
    if ( (_DWORD)v5 )
    {
      if ( ((*(_DWORD *)&v13 - 1) & (unsigned int)ThreadInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + v5 > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + v5 < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( ReturnLength )
    {
      v14 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    PreviousMode = v71;
  }
  else
  {
    v12 = 1;
  }
  DWORD1(v86[0]) = 0;
  v86[1] = 0LL;
  v87 = 0uLL;
  if ( ThreadInformationClass == ThreadActualBasePriority )
  {
    if ( (_DWORD)v5 == 4 )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 2048,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result >= 0 )
      {
        v16 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)ThreadInformation = v16;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass != ThreadCycleTime )
  {
    switch ( ThreadInformationClass )
    {
      case ThreadBasicInformation:
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v17 = (char *)Object;
        if ( *((_BYTE *)Object + 4) )
          LODWORD(v86[0]) = PsGetThreadExitStatus((PETHREAD)Object);
        else
          LODWORD(v86[0]) = 259;
        *((_QWORD *)&v86[0] + 1) = *((_QWORD *)v17 + 30);
        if ( (IoThreadToProcess((PETHREAD)v17)->SecureState.SecureHandle & 1) != 0 )
          VslGetSecureTebAddress(v17, (char *)v86 + 8);
        v18 = *(_OWORD *)(v17 + 1224);
        v19 = *((unsigned __int16 *)v17 + 280);
        v20 = (_WORD *)*((_QWORD *)v17 + 69);
        if ( (unsigned __int16)v19 < *v20 )
          v9 = *(_QWORD *)&v20[4 * v19 + 4];
        *(_QWORD *)&v87 = v9;
        DWORD2(v87) = v17[195];
        HIDWORD(v87) = KeQueryBasePriorityThread((__int64)v17);
        ObfDereferenceObjectWithTag(v17, 0x79517350u);
        *(_OWORD *)ThreadInformation = v86[0];
        *((_OWORD *)ThreadInformation + 1) = v18;
        *((_OWORD *)ThreadInformation + 2) = v87;
        if ( ReturnLength )
          *ReturnLength = 48;
        return 0;
      case ThreadTimes:
        if ( (_DWORD)v5 != 32 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v21 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
        v22 = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
        v23 = *((_QWORD *)Object + 144);
        if ( *((_BYTE *)Object + 4) )
          v9 = *((_QWORD *)Object + 145);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)ThreadInformation = v23;
        *((_QWORD *)ThreadInformation + 1) = v9;
        *((_QWORD *)ThreadInformation + 2) = v21;
        *((_QWORD *)ThreadInformation + 3) = v22;
        if ( ReturnLength )
          *ReturnLength = 32;
        return 0;
      case ThreadDescriptorTableEntry:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v36 = xKdEnumerateDebuggingDevices();
        goto LABEL_124;
      case ThreadQuerySetWin32StartAddress:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        LODWORD(v9) = ObpReferenceObjectByHandleWithTag(
                        (ULONG_PTR)ThreadHandle,
                        64,
                        (__int64)PsThreadType,
                        PreviousMode,
                        0x79517350u,
                        &Object,
                        0LL,
                        0LL);
        if ( (int)v9 >= 0 )
        {
          v37 = *((_QWORD *)Object + 164);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_QWORD *)ThreadInformation = v37;
          if ( ReturnLength )
            *ReturnLength = 8;
        }
        return v9;
      case ThreadPerformanceCount:
        if ( (_DWORD)v5 != 8 )
          return -1073741820;
        ContextThread = ObpReferenceObjectByHandleWithTag(
                          (ULONG_PTR)ThreadHandle,
                          64,
                          (__int64)PsThreadType,
                          PreviousMode,
                          0x79517350u,
                          &Object,
                          0LL,
                          0LL);
        if ( ContextThread >= 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_QWORD *)ThreadInformation = 0LL;
          if ( ReturnLength )
            *ReturnLength = 8;
        }
        return ContextThread;
      case ThreadAmILastThread:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        if ( LODWORD(CurrentThread->Process[1].ActiveProcessors.StaticBitmap[8]) != 1 )
          v12 = 0;
        *(_DWORD *)ThreadInformation = v12;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      case ThreadPriorityBoost:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        ContextThread = ObpReferenceObjectByHandleWithTag(
                          (ULONG_PTR)ThreadHandle,
                          2048,
                          (__int64)PsThreadType,
                          PreviousMode,
                          0x79517350u,
                          &Object,
                          0LL,
                          0LL);
        if ( ContextThread >= 0 )
        {
          v38 = (*((_DWORD *)Object + 30) >> 3) & 1;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *(_DWORD *)ThreadInformation = v38;
          if ( ReturnLength )
            *ReturnLength = 4;
        }
        return ContextThread;
      case ThreadIsIoPending:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        LOBYTE(v9) = *((_QWORD *)Object + 160) != (_QWORD)Object + 1280;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)ThreadInformation = v9;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      case ThreadHideFromDebugger:
        if ( (_DWORD)v5 != 1 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        if ( result < 0 )
          return result;
        v28 = Object;
        *(_BYTE *)ThreadInformation = (*((_DWORD *)Object + 344) & 4) != 0;
        if ( ReturnLength )
          *ReturnLength = 1;
        goto LABEL_71;
      case ThreadBreakOnTermination:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v39 = (*((_DWORD *)Object + 344) >> 5) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)ThreadInformation = v39;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      case ThreadIsTerminated:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( (*((_DWORD *)Object + 344) & 1) == 0 )
          v12 = 0;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)ThreadInformation = v12;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      case ThreadLastSystemCall:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   8,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v36 = PspQueryLastCallThread(Object, ThreadInformation, (unsigned int)v5, ReturnLength);
LABEL_124:
        LODWORD(v9) = v36;
        goto LABEL_125;
      case ThreadIoPriority:
      case ThreadEffectiveIoPriority:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        v74 = result;
        if ( result < 0 )
          return result;
        v30 = Object;
        if ( ThreadInformationClass == ThreadIoPriority )
          IoPriorityThread = (*((_DWORD *)Object + 344) >> 9) & 7;
        else
          IoPriorityThread = PsGetIoPriorityThread((__int64)Object);
        *(_DWORD *)ThreadInformation = IoPriorityThread;
        if ( ReturnLength )
          *ReturnLength = 4;
        ObfDereferenceObjectWithTag(v30, 0x79517350u);
        return v9;
      case ThreadPagePriority:
      case ThreadEffectivePagePriority:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        if ( result < 0 )
          return result;
        v26 = Object;
        if ( ThreadInformationClass == ThreadPagePriority )
          PagePriorityThread = (*((_DWORD *)Object + 344) >> 12) & 7;
        else
          PagePriorityThread = PsGetPagePriorityThread((__int64)Object);
        *(_DWORD *)ThreadInformation = PagePriorityThread;
        if ( ReturnLength )
          *ReturnLength = 4;
        goto LABEL_70;
      case ThreadTebInformation:
        if ( (_DWORD)v5 != 16 )
          return -1073741820;
        if ( PreviousMode )
        {
          v93[0] = *(__m128i *)ThreadInformation;
          ProbeForWrite((volatile void *)v93[0].m128i_i64[0], HIDWORD(_mm_srli_si128(v93[0], 8).m128i_u64[0]), 1u);
          ThreadInformation = v93;
          PreviousMode = v71;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   24,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v74 = result;
        if ( result < 0 )
          return result;
        v40 = Object;
        if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741816;
        }
        else
        {
          v41 = *((_QWORD *)Object + 68);
          v42 = 6224LL;
          if ( *(_QWORD *)(v41 + 1408) )
          {
            v42 = 12312LL;
            if ( *(_WORD *)(v41 + 2412) == 0x8664 )
              v42 = 14416LL;
          }
          v43 = (ULONG *)((char *)ThreadInformation + 12);
          CycleTimeStamp = (unsigned __int64)ThreadInformation + 12;
          v44 = *((unsigned int *)ThreadInformation + 3);
          if ( (_DWORD)v44 && (v45 = *((unsigned int *)ThreadInformation + 2), v45 < v42) && v44 <= v42 - v45 )
          {
            RunRef = (PEX_RUNDOWN_REF)((char *)Object + 1352);
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 169) )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              v47 = Object;
              if ( (_KPROCESS *)v41 == Process )
              {
                memmove(
                  *(void **)ThreadInformation,
                  (const void *)(*((_QWORD *)Object + 30) + *((unsigned int *)ThreadInformation + 2)),
                  *v43);
                ContextThread = v74;
              }
              else
              {
                ContextThread = MiCopyVirtualMemory(
                                  v41,
                                  (char *)(*((_QWORD *)Object + 30) + *((unsigned int *)ThreadInformation + 2)),
                                  (ULONG_PTR)Process,
                                  *(void **)ThreadInformation,
                                  *v43,
                                  v71,
                                  (size_t *)v89,
                                  0);
              }
              ExReleaseRundownProtection_0(RunRef);
              ObfDereferenceObjectWithTag(v47, 0x79517350u);
              if ( ContextThread >= 0 )
              {
                if ( ReturnLength )
                  *ReturnLength = *v43;
                ContextThread = 0;
                v74 = 0;
              }
              return ContextThread;
            }
            else
            {
              ObfDereferenceObjectWithTag(v40, 0x79517350u);
              return -1073741749;
            }
          }
          else
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return -1073741811;
          }
        }
      case ThreadWow64Context:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   8,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        ContextThread = PspWow64GetContextThread(Object, ThreadInformation, (unsigned int)v5, v71);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ContextThread >= 0 && ReturnLength )
          *ReturnLength = 716;
        return ContextThread;
      case ThreadGroupInformation:
        if ( (_DWORD)v5 != 16 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v33 = result;
        if ( result >= 0 )
        {
          v94[0] = 2097153;
          memset(&v94[1], 0, 0x104uLL);
          v34 = (unsigned __int16 *)Object;
          KeQueryUserAffinityThread((__int64)Object, (__int64)v94);
          v35 = v34[280];
          WORD4(v84) = v35;
          if ( (unsigned __int16)v35 < LOWORD(v94[0]) )
            v9 = *(_QWORD *)&v94[2 * v35 + 2];
          *(_QWORD *)&v84 = v9;
          *(_OWORD *)ThreadInformation = v84;
          if ( ReturnLength )
            *ReturnLength = 16;
          ObfDereferenceObjectWithTag(v34, 0x79517350u);
          return v33;
        }
        return result;
      case ThreadCounterProfiling:
        if ( (_DWORD)v5 != 1 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        if ( result < 0 )
          return result;
        v48 = Object;
        *(_BYTE *)ThreadInformation = *((_QWORD *)Object + 45) != 0LL;
        ObfDereferenceObjectWithTag(v48, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = 1;
        return v9;
      case ThreadIdealProcessorEx:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v76[0] = (_PROCESSOR_NUMBER)0x400000;
        KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, v76, v76);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_PROCESSOR_NUMBER *)ThreadInformation = v76[0];
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      case ThreadCpuAccountingInformation:
        if ( !(_DWORD)v5 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v74 = result;
        if ( result < 0 )
          return result;
        *(_BYTE *)ThreadInformation = *((_QWORD *)Object + 13) != 0LL;
        if ( ReturnLength )
          *ReturnLength = 1;
        LODWORD(v9) = v74;
        goto LABEL_125;
      case ThreadSuspendCount:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        if ( result < 0 )
          return result;
        v26 = Object;
        *(_DWORD *)ThreadInformation = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
        if ( ReturnLength )
          *ReturnLength = 4;
        goto LABEL_70;
      case ThreadHeterogeneousCpuPolicy:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        ContextThread = ObpReferenceObjectByHandleWithTag(
                          (ULONG_PTR)ThreadHandle,
                          2048,
                          (__int64)PsThreadType,
                          PreviousMode,
                          0x79517350u,
                          &Object,
                          0LL,
                          0LL);
        if ( ContextThread < 0 )
          return ContextThread;
        v49 = Object;
        *(_DWORD *)ThreadInformation = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
        if ( ReturnLength )
          *ReturnLength = 4;
        v25 = v49;
        goto LABEL_61;
      case ThreadContainerId:
        if ( (_DWORD)v5 != 16 )
          return -1073741820;
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v91);
        if ( result >= 0 )
        {
          *(_OWORD *)ThreadInformation = v91;
          if ( ReturnLength )
            *ReturnLength = 16;
        }
        return result;
      case ThreadNameInformation:
        v73 = 0;
        v57 = 0;
        v72 = 0;
        v50 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ThreadHandle,
                2048,
                (__int64)PsThreadType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        v74 = v50;
        if ( v50 < 0 )
        {
          v58 = (signed __int64 *)Object;
          v64 = (__int64)v77;
        }
        else
        {
          v73 = 1;
          --v77[242];
          v58 = (signed __int64 *)Object;
          ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1360, 0LL);
          v57 = 1;
          v72 = 1;
          v59 = v58[204];
          if ( v59 )
          {
            v60 = *(const WCHAR **)(v59 + 8);
            v61 = *(_WORD *)v59;
            v75 = v61;
          }
          else
          {
            v60 = &word_1408882A0;
            v61 = 0;
            v75 = 0;
          }
          v89[2] = (__int64)v60;
          v62 = v61 + 16;
          LODWORD(v80) = v62;
          v88 = v62;
          if ( v62 <= (unsigned int)v5 )
          {
            memmove((char *)ThreadInformation + 16, v60, v61);
            v63 = v75;
            *(_WORD *)ThreadInformation = v75;
            *((_WORD *)ThreadInformation + 1) = v63;
            *((_QWORD *)ThreadInformation + 1) = (char *)ThreadInformation + 16;
            v62 = (unsigned int)v80;
            v57 = v72;
          }
          else
          {
            v50 = -1073741789;
            v74 = -1073741789;
          }
          if ( ReturnLength )
            *ReturnLength = v62;
          v64 = (__int64)v77;
        }
        if ( v57 )
        {
          if ( _InterlockedCompareExchange64(v58 + 170, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v58 + 170);
          KeAbPostRelease((ULONG_PTR)(v58 + 170));
          KeLeaveCriticalRegionThread(v64);
          v50 = v74;
          v58 = (signed __int64 *)Object;
        }
        if ( v73 )
          ObfDereferenceObjectWithTag(v58, 0x79517350u);
        return v50;
      case ThreadSelectedCpuSets:
        if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
          return -1073741820;
        v50 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ThreadHandle,
                2048,
                (__int64)PsThreadType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        v74 = v50;
        if ( v50 >= 0 )
        {
          v51 = 8 * KeQueryCpuSetsThread((__int64)Object, Src);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v82 = v51;
          if ( ReturnLength )
            *ReturnLength = v51;
          if ( v51 >= (unsigned int)v5 )
            v51 = v5;
          v82 = v51;
          memmove(ThreadInformation, Src, v51);
        }
        return v50;
      case ThreadSystemThreadInformation:
        if ( (_DWORD)v5 != 80 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v52 = result;
        if ( result >= 0 )
        {
          v53 = (unsigned int *)Object;
          KeQueryValuesThread((__int64)Object, (__int64)v90);
          ThreadStartAddress = PsQueryThreadStartAddress((__int64)v53, 1);
          if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
            ThreadStartAddress = 0LL;
          *((_DWORD *)ThreadInformation + 17) = BYTE8(v90[0]);
          *((_DWORD *)ThreadInformation + 18) = BYTE9(v90[0]);
          *((_DWORD *)ThreadInformation + 15) = SBYTE11(v90[0]);
          *((_DWORD *)ThreadInformation + 14) = SBYTE10(v90[0]);
          *((_DWORD *)ThreadInformation + 6) = v90[0];
          v55 = KeMaximumIncrement;
          *(_QWORD *)ThreadInformation = KeMaximumIncrement * (unsigned __int64)v53[163];
          *((_QWORD *)ThreadInformation + 1) = v55 * v53[183];
          *((_QWORD *)ThreadInformation + 2) = *((_QWORD *)v53 + 144);
          *((_DWORD *)ThreadInformation + 16) = v53[85];
          *(_OWORD *)((char *)ThreadInformation + 40) = *(_OWORD *)(v53 + 306);
          *((_QWORD *)ThreadInformation + 4) = ThreadStartAddress;
          if ( ReturnLength )
            *ReturnLength = 80;
          ObfDereferenceObjectWithTag(v53, 0x79517350u);
          return v52;
        }
        return result;
      case ThreadActualGroupAffinity:
        if ( (_DWORD)v5 != 16 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        if ( result < 0 )
          return result;
        v56 = Object;
        KeQueryPrimaryGroupAffinityThread((__int64)Object, (__int64)&v84);
        *(_OWORD *)ThreadInformation = v84;
        if ( ReturnLength )
          *ReturnLength = 16;
        v28 = v56;
        goto LABEL_71;
      case ThreadDynamicCodePolicyInfo:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        ContextThread = result;
        if ( result < 0 )
          return result;
        v25 = Object;
        *(_DWORD *)ThreadInformation = (*((_DWORD *)Object + 344) & 0x40000) != 0;
        if ( ReturnLength )
          *ReturnLength = 4;
        goto LABEL_61;
      case ThreadExplicitCaseSensitivity:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v74 = result;
        if ( result < 0 )
          return result;
        *(_DWORD *)ThreadInformation = (*((_DWORD *)Object + 344) >> 19) & 1;
        if ( ReturnLength )
          *ReturnLength = 4;
        LODWORD(v9) = v74;
LABEL_125:
        v28 = Object;
        goto LABEL_71;
      case ThreadWorkOnBehalfTicket:
        v78 = 0;
        if ( (_DWORD)v5 != 16 )
          return -1073741820;
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        v85 = 0LL;
        WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v78);
        if ( WorkOnBehalfThread )
        {
          PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v85);
          if ( v78 )
            ObfDereferenceObject(v32);
        }
        else
        {
          PsEncodeThreadWorkOnBehalfTicket((__int64)v77, &v85);
          DWORD2(v85) |= 1u;
        }
        *(_OWORD *)ThreadInformation = v85;
        if ( ReturnLength )
          *ReturnLength = 16;
        return 0;
      case ThreadSubsystemInformation:
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        ContextThread = result;
        if ( result < 0 )
          return result;
        v25 = Object;
        if ( *((_QWORD *)Object + 198) )
          LODWORD(v9) = qword_140C381B0;
        *(_DWORD *)ThreadInformation = v9;
        if ( ReturnLength )
          *ReturnLength = 4;
LABEL_61:
        ObfDereferenceObjectWithTag(v25, 0x79517350u);
        return ContextThread;
      case ThreadPowerThrottlingState:
        if ( (unsigned int)v5 < 4 )
        {
          if ( ReturnLength )
            *ReturnLength = 12;
          return -1073741820;
        }
        *(_QWORD *)&v76[2].Group = *(_QWORD *)ThreadInformation;
        v65 = *((_DWORD *)ThreadInformation + 2);
        if ( *(_DWORD *)&v76[2] != 1 )
          return -1073741811;
        if ( ReturnLength )
          *ReturnLength = 12;
        if ( (_DWORD)v5 != 12 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        ThreadPpmPolicy = PspGetThreadPpmPolicy(Object);
        if ( ThreadPpmPolicy && (v67 = ThreadPpmPolicy - 1) != 0 && (v68 = v67 - 1) != 0 )
        {
          v69 = v68 - 1;
          if ( v69 )
          {
            if ( v69 == 5 )
            {
              v76[3] = (_PROCESSOR_NUMBER)1;
              v65 = 1;
              v76[4] = (_PROCESSOR_NUMBER)1;
            }
LABEL_278:
            *(_QWORD *)ThreadInformation = *(_QWORD *)&v76[2].Group;
            *((_DWORD *)ThreadInformation + 2) = v65;
            v74 = 0;
LABEL_70:
            v28 = v26;
            goto LABEL_71;
          }
          *(_QWORD *)&v76[3].Group = 1LL;
        }
        else
        {
          *(_QWORD *)&v76[3].Group = 0LL;
        }
        v65 = 0;
        goto LABEL_278;
      default:
        return -1073741821;
    }
  }
  if ( (_DWORD)v5 != 16 )
    return -1073741820;
  if ( ThreadHandle == (HANDLE)-2LL )
  {
    Object = CurrentThread;
LABEL_25:
    *(_QWORD *)ThreadInformation = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
    *((_QWORD *)ThreadInformation + 1) = CycleTimeStamp;
    if ( ReturnLength )
      *ReturnLength = 16;
    if ( ThreadHandle == (HANDLE)-2LL )
      return v9;
    v28 = v77;
LABEL_71:
    ObfDereferenceObjectWithTag(v28, 0x79517350u);
    return v9;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             2048,
             (__int64)PsThreadType,
             PreviousMode,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  LODWORD(v9) = result;
  if ( result >= 0 )
  {
    CurrentThread = (struct _KTHREAD *)Object;
    v77 = Object;
    goto LABEL_25;
  }
  return result;
}
