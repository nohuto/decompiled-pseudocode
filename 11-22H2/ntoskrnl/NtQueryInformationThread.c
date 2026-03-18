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

__int64 __fastcall NtQueryInformationThread(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __m128i *a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v5; // r14
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // r9
  char PreviousMode; // dl
  int v12; // r13d
  struct _PROCESSOR_NUMBER v13; // eax
  __int64 v14; // rcx
  __int64 result; // rax
  __int32 v16; // ebx
  char *v17; // rdi
  __m128i v18; // xmm6
  __int64 v19; // rax
  _WORD *v20; // rcx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r14
  __int64 v23; // r12
  int ContextThread; // edi
  PVOID v25; // rcx
  PVOID v26; // r8
  __int32 PagePriorityThread; // eax
  PVOID v28; // rcx
  PVOID WorkOnBehalfThread; // rcx
  PVOID v30; // r9
  __int32 IoPriorityThread; // eax
  void *v32; // rcx
  unsigned int v33; // edi
  unsigned __int16 *v34; // r14
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdi
  int v38; // ebx
  int v39; // ebx
  PVOID v40; // rdi
  ULONG_PTR v41; // r13
  unsigned __int64 v42; // rcx
  __int32 *v43; // r14
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  _KPROCESS *Process; // r8
  PVOID v47; // r12
  PVOID v48; // rcx
  PVOID v49; // rbx
  int v50; // r12d
  unsigned int v51; // ebx
  unsigned int v52; // r14d
  unsigned int *v53; // rdi
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v55; // rcx
  PVOID v56; // rdi
  char v57; // di
  signed __int64 *v58; // r13
  signed __int64 v59; // rax
  const WCHAR *v60; // rdx
  unsigned __int16 v61; // ax
  unsigned int v62; // ecx
  __int16 v63; // ax
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
  int v74; // [rsp+4Ch] [rbp-3BCh]
  __int16 v75; // [rsp+54h] [rbp-3B4h]
  struct _PROCESSOR_NUMBER v76[6]; // [rsp+58h] [rbp-3B0h] BYREF
  _WORD *v77; // [rsp+70h] [rbp-398h]
  int v78; // [rsp+78h] [rbp-390h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+80h] [rbp-388h]
  unsigned int *v80; // [rsp+88h] [rbp-380h]
  unsigned __int64 CycleTimeStamp; // [rsp+90h] [rbp-378h] BYREF
  unsigned int v82; // [rsp+98h] [rbp-370h]
  ULONG_PTR v83; // [rsp+A0h] [rbp-368h]
  __m128i v84; // [rsp+A8h] [rbp-360h] BYREF
  __m128i v85; // [rsp+B8h] [rbp-350h] BYREF
  _OWORD v86[2]; // [rsp+C8h] [rbp-340h] BYREF
  __m128i v87; // [rsp+E8h] [rbp-320h]
  unsigned int v88; // [rsp+F8h] [rbp-310h]
  __int64 v89[5]; // [rsp+100h] [rbp-308h] BYREF
  _OWORD v90[2]; // [rsp+130h] [rbp-2D8h] BYREF
  __m128i v91; // [rsp+150h] [rbp-2B8h] BYREF
  int v92; // [rsp+160h] [rbp-2A8h]
  __m128i v93[3]; // [rsp+168h] [rbp-2A0h] BYREF
  _DWORD v94[68]; // [rsp+1A0h] [rbp-268h] BYREF
  _QWORD Src[32]; // [rsp+2B0h] [rbp-158h] BYREF

  v5 = a4;
  v83 = BugCheckParameter1;
  v80 = a5;
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
    if ( a2 == 38 )
    {
      v13 = (struct _PROCESSOR_NUMBER)8;
    }
    else if ( (unsigned int)v5 >= 4 || a2 == 49 )
    {
      v13 = (struct _PROCESSOR_NUMBER)4;
    }
    else
    {
      v13 = (struct _PROCESSOR_NUMBER)1;
    }
    v76[1] = v13;
    if ( (_DWORD)v5 )
    {
      if ( ((*(_DWORD *)&v13 - 1) & (unsigned int)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)a3->m128i_u64 + v5 > 0x7FFFFFFF0000LL || &a3->m128i_i8[v5] < (__int8 *)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( a5 )
    {
      v14 = (__int64)a5;
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
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
  if ( a2 == 25 )
  {
    if ( (_DWORD)v5 == 4 )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 BugCheckParameter1,
                 2048,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( (int)result >= 0 )
      {
        v16 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i32[0] = v16;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      }
      return result;
    }
    return 3221225476LL;
  }
  if ( a2 != 23 )
  {
    switch ( a2 )
    {
      case 0:
        if ( (_DWORD)v5 != 48 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        v17 = (char *)Object;
        if ( *((_BYTE *)Object + 4) )
          LODWORD(v86[0]) = PsGetThreadExitStatus((PETHREAD)Object);
        else
          LODWORD(v86[0]) = 259;
        *((_QWORD *)&v86[0] + 1) = *((_QWORD *)v17 + 30);
        if ( (IoThreadToProcess((PETHREAD)v17)->SecureState.SecureHandle & 1) != 0 )
          VslGetSecureTebAddress(v17, (char *)v86 + 8);
        v18 = *(__m128i *)(v17 + 1224);
        v19 = *((unsigned __int16 *)v17 + 280);
        v20 = (_WORD *)*((_QWORD *)v17 + 69);
        if ( (unsigned __int16)v19 < *v20 )
          v9 = *(_QWORD *)&v20[4 * v19 + 4];
        v87.m128i_i64[0] = v9;
        v87.m128i_i32[2] = v17[195];
        v87.m128i_i32[3] = KeQueryBasePriorityThread((__int64)v17);
        ObfDereferenceObjectWithTag(v17, 0x79517350u);
        *a3 = (__m128i)v86[0];
        a3[1] = v18;
        a3[2] = v87;
        if ( a5 )
          *a5 = 48;
        return 0LL;
      case 1:
        if ( (_DWORD)v5 != 32 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        v21 = (unsigned int)KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
        v22 = (unsigned int)KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
        v23 = *((_QWORD *)Object + 144);
        if ( *((_BYTE *)Object + 4) )
          v9 = *((_QWORD *)Object + 145);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i64[0] = v23;
        a3->m128i_i64[1] = v9;
        a3[1].m128i_i64[0] = v21;
        a3[1].m128i_i64[1] = v22;
        if ( a5 )
          *a5 = 32;
        return 0LL;
      case 6:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        v36 = xKdEnumerateDebuggingDevices();
        goto LABEL_124;
      case 9:
        if ( (_DWORD)v5 != 8 )
          return 3221225476LL;
        LODWORD(v9) = ObpReferenceObjectByHandleWithTag(
                        BugCheckParameter1,
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
          a3->m128i_i64[0] = v37;
          if ( a5 )
            *a5 = 8;
        }
        return (unsigned int)v9;
      case 11:
        if ( (_DWORD)v5 != 8 )
          return 3221225476LL;
        ContextThread = ObpReferenceObjectByHandleWithTag(
                          BugCheckParameter1,
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
          a3->m128i_i64[0] = 0LL;
          if ( a5 )
            *a5 = 8;
        }
        return (unsigned int)ContextThread;
      case 12:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        if ( LODWORD(CurrentThread->Process[1].ActiveProcessors.StaticBitmap[8]) != 1 )
          v12 = 0;
        a3->m128i_i32[0] = v12;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      case 14:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        ContextThread = ObpReferenceObjectByHandleWithTag(
                          BugCheckParameter1,
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
          a3->m128i_i32[0] = v38;
          if ( a5 )
            *a5 = 4;
        }
        return (unsigned int)ContextThread;
      case 16:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        LOBYTE(v9) = *((_QWORD *)Object + 160) != (_QWORD)Object + 1280;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i32[0] = v9;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      case 17:
        if ( (_DWORD)v5 != 1 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        if ( (int)result < 0 )
          return result;
        v28 = Object;
        a3->m128i_i8[0] = (*((_DWORD *)Object + 344) & 4) != 0;
        if ( a5 )
          *a5 = 1;
        goto LABEL_71;
      case 18:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        v39 = (*((_DWORD *)Object + 344) >> 5) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i32[0] = v39;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      case 20:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        if ( (*((_DWORD *)Object + 344) & 1) == 0 )
          v12 = 0;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        a3->m128i_i32[0] = v12;
        if ( a5 )
          *a5 = 4;
        return 0LL;
      case 21:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   8,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        v36 = PspQueryLastCallThread(Object, a3, (unsigned int)v5, a5);
LABEL_124:
        LODWORD(v9) = v36;
        goto LABEL_125;
      case 22:
      case 54:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        v74 = result;
        if ( (int)result < 0 )
          return result;
        v30 = Object;
        if ( a2 == 22 )
          IoPriorityThread = (*((_DWORD *)Object + 344) >> 9) & 7;
        else
          IoPriorityThread = PsGetIoPriorityThread((__int64)Object);
        a3->m128i_i32[0] = IoPriorityThread;
        if ( a5 )
          *a5 = 4;
        ObfDereferenceObjectWithTag(v30, 0x79517350u);
        return (unsigned int)v9;
      case 24:
      case 55:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        if ( (int)result < 0 )
          return result;
        v26 = Object;
        if ( a2 == 24 )
          PagePriorityThread = (*((_DWORD *)Object + 344) >> 12) & 7;
        else
          PagePriorityThread = PsGetPagePriorityThread((__int64)Object);
        a3->m128i_i32[0] = PagePriorityThread;
        if ( a5 )
          *a5 = 4;
        goto LABEL_70;
      case 26:
        if ( (_DWORD)v5 != 16 )
          return 3221225476LL;
        if ( PreviousMode )
        {
          v93[0] = *a3;
          ProbeForWrite((volatile void *)v93[0].m128i_i64[0], HIDWORD(_mm_srli_si128(v93[0], 8).m128i_u64[0]), 1u);
          a3 = v93;
          PreviousMode = v71;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   24,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v74 = result;
        if ( (int)result < 0 )
          return result;
        v40 = Object;
        if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return 3221225480LL;
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
          v43 = &a3->m128i_i32[3];
          CycleTimeStamp = (unsigned __int64)&a3->m128i_u64[1] + 4;
          v44 = a3->m128i_u32[3];
          if ( (_DWORD)v44 && (v45 = a3->m128i_u32[2], v45 < v42) && v44 <= v42 - v45 )
          {
            RunRef = (PEX_RUNDOWN_REF)((char *)Object + 1352);
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 169) )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              v47 = Object;
              if ( (_KPROCESS *)v41 == Process )
              {
                memmove(
                  (void *)a3->m128i_i64[0],
                  (const void *)(*((_QWORD *)Object + 30) + a3->m128i_u32[2]),
                  (unsigned int)*v43);
                ContextThread = v74;
              }
              else
              {
                ContextThread = MiCopyVirtualMemory(
                                  v41,
                                  (char *)(*((_QWORD *)Object + 30) + a3->m128i_u32[2]),
                                  (ULONG_PTR)Process,
                                  (void *)a3->m128i_i64[0],
                                  (unsigned int)*v43,
                                  v71,
                                  (size_t *)v89,
                                  0);
              }
              ExReleaseRundownProtection_0(RunRef);
              ObfDereferenceObjectWithTag(v47, 0x79517350u);
              if ( ContextThread >= 0 )
              {
                if ( a5 )
                  *a5 = *v43;
                ContextThread = 0;
                v74 = 0;
              }
              return (unsigned int)ContextThread;
            }
            else
            {
              ObfDereferenceObjectWithTag(v40, 0x79517350u);
              return 3221225547LL;
            }
          }
          else
          {
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return 3221225485LL;
          }
        }
      case 29:
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   8,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        ContextThread = PspWow64GetContextThread(Object, a3, (unsigned int)v5, v71);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ContextThread >= 0 && a5 )
          *a5 = 716;
        return (unsigned int)ContextThread;
      case 30:
        if ( (_DWORD)v5 != 16 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v33 = result;
        if ( (int)result >= 0 )
        {
          v94[0] = 2097153;
          memset(&v94[1], 0, 0x104uLL);
          v34 = (unsigned __int16 *)Object;
          KeQueryUserAffinityThread((__int64)Object, (__int64)v94);
          v35 = v34[280];
          v84.m128i_i16[4] = v35;
          if ( (unsigned __int16)v35 < LOWORD(v94[0]) )
            v9 = *(_QWORD *)&v94[2 * v35 + 2];
          v84.m128i_i64[0] = v9;
          *a3 = v84;
          if ( a5 )
            *a5 = 16;
          ObfDereferenceObjectWithTag(v34, 0x79517350u);
          return v33;
        }
        return result;
      case 32:
        if ( (_DWORD)v5 != 1 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        if ( (int)result < 0 )
          return result;
        v48 = Object;
        a3->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
        ObfDereferenceObjectWithTag(v48, 0x79517350u);
        if ( a5 )
          *a5 = 1;
        return (unsigned int)v9;
      case 33:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        v76[0] = (struct _PROCESSOR_NUMBER)0x400000;
        KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, v76, v76);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(struct _PROCESSOR_NUMBER *)a3->m128i_i8 = v76[0];
        if ( a5 )
          *a5 = 4;
        return 0LL;
      case 34:
        if ( !(_DWORD)v5 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v74 = result;
        if ( (int)result < 0 )
          return result;
        a3->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
        if ( a5 )
          *a5 = 1;
        LODWORD(v9) = v74;
        goto LABEL_125;
      case 35:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        if ( (int)result < 0 )
          return result;
        v26 = Object;
        a3->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
        if ( a5 )
          *a5 = 4;
        goto LABEL_70;
      case 36:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        ContextThread = ObpReferenceObjectByHandleWithTag(
                          BugCheckParameter1,
                          2048,
                          (__int64)PsThreadType,
                          PreviousMode,
                          0x79517350u,
                          &Object,
                          0LL,
                          0LL);
        if ( ContextThread < 0 )
          return (unsigned int)ContextThread;
        v49 = Object;
        a3->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
        if ( a5 )
          *a5 = 4;
        v25 = v49;
        goto LABEL_61;
      case 37:
        if ( (_DWORD)v5 != 16 )
          return 3221225476LL;
        if ( BugCheckParameter1 != -2LL )
          return 3221225485LL;
        result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v91);
        if ( (int)result >= 0 )
        {
          *a3 = v91;
          if ( a5 )
            *a5 = 16;
        }
        return result;
      case 38:
        v73 = 0;
        v57 = 0;
        v72 = 0;
        v50 = ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
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
            memmove(&a3[1], v60, v61);
            v63 = v75;
            a3->m128i_i16[0] = v75;
            a3->m128i_i16[1] = v63;
            a3->m128i_i64[1] = (__int64)a3[1].m128i_i64;
            v62 = (unsigned int)v80;
            v57 = v72;
          }
          else
          {
            v50 = -1073741789;
            v74 = -1073741789;
          }
          if ( a5 )
            *a5 = v62;
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
        return (unsigned int)v50;
      case 39:
        if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
          return 3221225476LL;
        v50 = ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
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
          if ( a5 )
            *a5 = v51;
          if ( v51 >= (unsigned int)v5 )
            v51 = v5;
          v82 = v51;
          memmove(a3, Src, v51);
        }
        return (unsigned int)v50;
      case 40:
        if ( (_DWORD)v5 != 80 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v52 = result;
        if ( (int)result >= 0 )
        {
          v53 = (unsigned int *)Object;
          KeQueryValuesThread((__int64)Object, (__int64)v90);
          ThreadStartAddress = PsQueryThreadStartAddress((__int64)v53, 1);
          if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
            ThreadStartAddress = 0LL;
          a3[4].m128i_i32[1] = BYTE8(v90[0]);
          a3[4].m128i_i32[2] = BYTE9(v90[0]);
          a3[3].m128i_i32[3] = SBYTE11(v90[0]);
          a3[3].m128i_i32[2] = SBYTE10(v90[0]);
          a3[1].m128i_i32[2] = v90[0];
          v55 = (unsigned int)KeMaximumIncrement;
          a3->m128i_i64[0] = (unsigned int)KeMaximumIncrement * (unsigned __int64)v53[163];
          a3->m128i_i64[1] = v55 * v53[183];
          a3[1].m128i_i64[0] = *((_QWORD *)v53 + 144);
          a3[4].m128i_i32[0] = v53[85];
          *(__m128i *)((char *)a3 + 40) = *(__m128i *)(v53 + 306);
          a3[2].m128i_i64[0] = ThreadStartAddress;
          if ( a5 )
            *a5 = 80;
          ObfDereferenceObjectWithTag(v53, 0x79517350u);
          return v52;
        }
        return result;
      case 41:
        if ( (_DWORD)v5 != 16 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        LODWORD(v9) = result;
        if ( (int)result < 0 )
          return result;
        v56 = Object;
        KeQueryPrimaryGroupAffinityThread((__int64)Object, (__int64)&v84);
        *a3 = v84;
        if ( a5 )
          *a5 = 16;
        v28 = v56;
        goto LABEL_71;
      case 42:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        ContextThread = result;
        if ( (int)result < 0 )
          return result;
        v25 = Object;
        a3->m128i_i32[0] = (*((_DWORD *)Object + 344) & 0x40000) != 0;
        if ( a5 )
          *a5 = 4;
        goto LABEL_61;
      case 43:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v74 = result;
        if ( (int)result < 0 )
          return result;
        a3->m128i_i32[0] = (*((_DWORD *)Object + 344) >> 19) & 1;
        if ( a5 )
          *a5 = 4;
        LODWORD(v9) = v74;
LABEL_125:
        v28 = Object;
        goto LABEL_71;
      case 44:
        v78 = 0;
        if ( (_DWORD)v5 != 16 )
          return 3221225476LL;
        if ( BugCheckParameter1 != -2LL )
          return 3221225485LL;
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
          v85.m128i_i32[2] |= 1u;
        }
        *a3 = v85;
        if ( a5 )
          *a5 = 16;
        return 0LL;
      case 45:
        if ( (_DWORD)v5 != 4 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        ContextThread = result;
        if ( (int)result < 0 )
          return result;
        v25 = Object;
        if ( *((_QWORD *)Object + 198) )
          LODWORD(v9) = qword_140C381B0;
        a3->m128i_i32[0] = v9;
        if ( a5 )
          *a5 = 4;
LABEL_61:
        ObfDereferenceObjectWithTag(v25, 0x79517350u);
        return (unsigned int)ContextThread;
      case 49:
        if ( (unsigned int)v5 < 4 )
        {
          if ( a5 )
            *a5 = 12;
          return 3221225476LL;
        }
        *(_QWORD *)&v76[2].Group = a3->m128i_i64[0];
        v65 = a3->m128i_i32[2];
        if ( *(_DWORD *)&v76[2] != 1 )
          return 3221225485LL;
        if ( a5 )
          *a5 = 12;
        if ( (_DWORD)v5 != 12 )
          return 3221225476LL;
        result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   64,
                   (__int64)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( (int)result < 0 )
          return result;
        ThreadPpmPolicy = PspGetThreadPpmPolicy(Object);
        if ( ThreadPpmPolicy && (v67 = ThreadPpmPolicy - 1) != 0 && (v68 = v67 - 1) != 0 )
        {
          v69 = v68 - 1;
          if ( v69 )
          {
            if ( v69 == 5 )
            {
              v76[3] = (struct _PROCESSOR_NUMBER)1;
              v65 = 1;
              v76[4] = (struct _PROCESSOR_NUMBER)1;
            }
LABEL_278:
            a3->m128i_i64[0] = *(_QWORD *)&v76[2].Group;
            a3->m128i_i32[2] = v65;
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
        return 3221225475LL;
    }
  }
  if ( (_DWORD)v5 != 16 )
    return 3221225476LL;
  if ( BugCheckParameter1 == -2LL )
  {
    Object = CurrentThread;
LABEL_25:
    a3->m128i_i64[0] = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
    a3->m128i_i64[1] = CycleTimeStamp;
    if ( a5 )
      *a5 = 16;
    if ( BugCheckParameter1 == -2LL )
      return (unsigned int)v9;
    v28 = v77;
LABEL_71:
    ObfDereferenceObjectWithTag(v28, 0x79517350u);
    return (unsigned int)v9;
  }
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             2048,
             (__int64)PsThreadType,
             PreviousMode,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  LODWORD(v9) = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = (struct _KTHREAD *)Object;
    v77 = Object;
    goto LABEL_25;
  }
  return result;
}
