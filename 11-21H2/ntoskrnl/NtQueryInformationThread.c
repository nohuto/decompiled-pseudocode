/*
 * XREFs of NtQueryInformationThread @ 0x1407BF670
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     PsGetEffectiveContainerId @ 0x140234210 (PsGetEffectiveContainerId.c)
 *     sub_140234504 @ 0x140234504 (sub_140234504.c)
 *     sub_14025C33C @ 0x14025C33C (sub_14025C33C.c)
 *     sub_140280CBC @ 0x140280CBC (sub_140280CBC.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F61F8 @ 0x1402F61F8 (sub_1402F61F8.c)
 *     sub_1402F6220 @ 0x1402F6220 (sub_1402F6220.c)
 *     sub_140302C20 @ 0x140302C20 (sub_140302C20.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1403861B4 @ 0x1403861B4 (sub_1403861B4.c)
 *     SkIsSecureKernel @ 0x1403DF740 (SkIsSecureKernel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x14056B210 (KeQueryHeteroCpuPolicyThread.c)
 *     sub_14056B234 @ 0x14056B234 (sub_14056B234.c)
 *     sub_1405725CC @ 0x1405725CC (sub_1405725CC.c)
 *     PsGetThreadExitStatus @ 0x1406E2920 (PsGetThreadExitStatus.c)
 *     sub_140704EF8 @ 0x140704EF8 (sub_140704EF8.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 *     sub_1409322EC @ 0x1409322EC (sub_1409322EC.c)
 *     sub_1409AE2F8 @ 0x1409AE2F8 (sub_1409AE2F8.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r14
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // r9
  char v10; // r10
  int v11; // r12d
  int v12; // eax
  __int64 v13; // rcx
  NTSTATUS result; // eax
  NTSTATUS v15; // edi
  PVOID v16; // rcx
  ULONG_PTR v17; // rdi
  PVOID v18; // rcx
  int v19; // ebx
  char *v20; // rdi
  __int128 v21; // xmm6
  __int64 v22; // rax
  _WORD *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  NTSTATUS v26; // edi
  __int64 v27; // rdi
  unsigned __int16 *v28; // r14
  __int64 v29; // rax
  int v30; // ebx
  int v31; // ebx
  PVOID v32; // rdi
  ULONG_PTR v33; // r12
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  ULONG_PTR v37; // r8
  struct _EX_RUNDOWN_REF *v38; // r14
  PVOID v39; // rcx
  PVOID v40; // r8
  PVOID v41; // rbx
  NTSTATUS v42; // r12d
  ULONG v43; // ebx
  __int64 v44; // r8
  __int64 v45; // r9
  NTSTATUS v46; // r14d
  unsigned int *v47; // rdi
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  PVOID v52; // rdi
  __int64 v53; // rdi
  signed __int64 *v54; // r13
  char v55; // dl
  signed __int64 v56; // rax
  const WCHAR *v57; // r9
  unsigned __int16 v58; // ax
  ULONG v59; // ecx
  unsigned __int16 v60; // ax
  PVOID Object; // [rsp+40h] [rbp-3C8h] BYREF
  char v62; // [rsp+48h] [rbp-3C0h]
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-3B8h]
  KPROCESSOR_MODE v64; // [rsp+58h] [rbp-3B0h]
  char v65; // [rsp+59h] [rbp-3AFh]
  NTSTATUS v66; // [rsp+5Ch] [rbp-3ACh]
  unsigned __int16 v67; // [rsp+64h] [rbp-3A4h]
  _PROCESSOR_NUMBER v68; // [rsp+68h] [rbp-3A0h] BYREF
  _WORD *v69; // [rsp+70h] [rbp-398h]
  _DWORD v70[2]; // [rsp+78h] [rbp-390h] BYREF
  ULONG v71; // [rsp+80h] [rbp-388h]
  HANDLE v72; // [rsp+88h] [rbp-380h]
  __int128 v73; // [rsp+90h] [rbp-378h] BYREF
  PULONG v74; // [rsp+A0h] [rbp-368h]
  struct _KTHREAD *v75; // [rsp+A8h] [rbp-360h]
  unsigned __int64 CycleTimeStamp; // [rsp+B0h] [rbp-358h] BYREF
  __int128 v77; // [rsp+B8h] [rbp-350h] BYREF
  _OWORD v78[2]; // [rsp+C8h] [rbp-340h] BYREF
  __int128 v79; // [rsp+E8h] [rbp-320h]
  ULONG v80; // [rsp+F8h] [rbp-310h]
  const WCHAR *v81; // [rsp+100h] [rbp-308h]
  size_t v82[2]; // [rsp+120h] [rbp-2E8h] BYREF
  _OWORD v83[2]; // [rsp+130h] [rbp-2D8h] BYREF
  __int128 v84; // [rsp+150h] [rbp-2B8h]
  __int128 v85; // [rsp+160h] [rbp-2A8h]
  __int128 v86; // [rsp+170h] [rbp-298h] BYREF
  int v87; // [rsp+180h] [rbp-288h]
  __m128i v88; // [rsp+188h] [rbp-280h] BYREF
  _DWORD v89[68]; // [rsp+1A0h] [rbp-268h] BYREF
  _QWORD Src[32]; // [rsp+2B0h] [rbp-158h] BYREF

  v5 = ThreadInformationLength;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  v72 = ThreadHandle;
  v74 = ReturnLength;
  DWORD1(v78[0]) = 0;
  v8 = 0LL;
  v82[0] = 0LL;
  v86 = 0LL;
  v87 = 0;
  v77 = 0LL;
  v88 = 0LL;
  Object = 0LL;
  memset(&v89[2], 0, 0x100uLL);
  CycleTimeStamp = 0LL;
  memset(v83, 0, sizeof(v83));
  CurrentThread = KeGetCurrentThread();
  v69 = CurrentThread;
  v75 = CurrentThread;
  v10 = *((_BYTE *)CurrentThread + 562);
  v64 = v10;
  if ( v10 )
  {
    v11 = 1;
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v12 = 8;
    }
    else
    {
      v12 = 1;
      if ( (unsigned int)v5 >= 4 )
        v12 = 4;
    }
    v70[1] = v12;
    if ( (_DWORD)v5 )
    {
      if ( ((v12 - 1) & (unsigned int)ThreadInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + v5 > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + v5 < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( ReturnLength )
    {
      v13 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
  }
  else
  {
    v11 = 1;
  }
  DWORD1(v78[0]) = 0;
  v78[1] = 0LL;
  v79 = 0uLL;
  if ( ThreadInformationClass != ThreadCycleTime )
  {
    if ( ThreadInformationClass == ThreadTimes )
    {
      if ( (_DWORD)v5 == 32 )
      {
        result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        *(_QWORD *)&v85 = DesiredTime * (unsigned __int64)*((unsigned int *)Object + 163);
        *((_QWORD *)&v85 + 1) = DesiredTime * (unsigned __int64)*((unsigned int *)Object + 183);
        *(_QWORD *)&v84 = *((_QWORD *)Object + 144);
        if ( *((_BYTE *)Object + 4) )
          *((_QWORD *)&v84 + 1) = *((_QWORD *)Object + 145);
        else
          *((_QWORD *)&v84 + 1) = 0LL;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)ThreadInformation = v84;
        *((_OWORD *)ThreadInformation + 1) = v85;
        if ( ReturnLength )
          *ReturnLength = 32;
        return 0;
      }
    }
    else if ( ThreadInformationClass == ThreadActualBasePriority )
    {
      if ( (_DWORD)v5 == 4 )
      {
        result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v19 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)ThreadInformation = v19;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
    }
    else
    {
      if ( ThreadInformationClass )
      {
        switch ( ThreadInformationClass )
        {
          case ThreadDescriptorTableEntry:
            result = sub_140732D40(BugCheckParameter1, 64, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            LODWORD(v8) = SkIsSecureKernel();
            goto LABEL_124;
          case ThreadQuerySetWin32StartAddress:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            LODWORD(v8) = sub_140732D40(
                            BugCheckParameter1,
                            64,
                            (__int64)PsThreadType,
                            v10,
                            0x79517350u,
                            &Object,
                            0LL,
                            0LL);
            if ( (int)v8 >= 0 )
            {
              v27 = *((_QWORD *)Object + 164);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_QWORD *)ThreadInformation = v27;
              if ( ReturnLength )
                *ReturnLength = 8;
            }
            return v8;
          case ThreadPerformanceCount:
            if ( (_DWORD)v5 != 8 )
              return -1073741820;
            v26 = sub_140732D40(BugCheckParameter1, 64, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            if ( v26 >= 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_QWORD *)ThreadInformation = 0LL;
              if ( ReturnLength )
                *ReturnLength = 8;
            }
            return v26;
          case ThreadAmILastThread:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            if ( *(_DWORD *)(*((_QWORD *)CurrentThread + 68) + 1520LL) != 1 )
              v11 = 0;
            *(_DWORD *)ThreadInformation = v11;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadPriorityBoost:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            v26 = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            if ( v26 >= 0 )
            {
              v30 = (*((_DWORD *)Object + 30) >> 3) & 1;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              *(_DWORD *)ThreadInformation = v30;
              if ( ReturnLength )
                *ReturnLength = 4;
            }
            return v26;
          case ThreadIsIoPending:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 64, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            if ( *((PVOID *)Object + 160) == (char *)Object + 1280 )
              v11 = 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)ThreadInformation = v11;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadHideFromDebugger:
            if ( (_DWORD)v5 != 1 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 64, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            LODWORD(v8) = result;
            if ( result < 0 )
              return result;
            v18 = Object;
            *(_BYTE *)ThreadInformation = (*((_DWORD *)Object + 344) & 4) != 0;
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_73;
          case ThreadBreakOnTermination:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 64, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v31 = (*((_DWORD *)Object + 344) >> 5) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)ThreadInformation = v31;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadIsTerminated:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            if ( (*((_DWORD *)Object + 344) & 1) == 0 )
              v11 = 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_DWORD *)ThreadInformation = v11;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadLastSystemCall:
            result = sub_140732D40(BugCheckParameter1, 8, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            LODWORD(v8) = sub_1409AE2F8(Object, ThreadInformation, (unsigned int)v5, ReturnLength);
            v18 = Object;
            goto LABEL_73;
          case ThreadIoPriority:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            LODWORD(v8) = result;
            v66 = result;
            if ( result < 0 )
              return result;
            v18 = Object;
            *(_DWORD *)ThreadInformation = (*((_DWORD *)Object + 344) >> 9) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_73;
          case ThreadPagePriority:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            LODWORD(v8) = result;
            if ( result < 0 )
              return result;
            v18 = Object;
            *(_DWORD *)ThreadInformation = (*((_DWORD *)Object + 344) >> 12) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_73;
          case ThreadTebInformation:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( v10 )
            {
              v88 = *(__m128i *)ThreadInformation;
              ProbeForWrite((volatile void *)v88.m128i_i64[0], HIDWORD(_mm_srli_si128(v88, 8).m128i_u64[0]), 1u);
              ThreadInformation = &v88;
              v10 = v64;
            }
            v69 = ThreadInformation;
            result = sub_140732D40(BugCheckParameter1, 24, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            v66 = result;
            if ( result < 0 )
              return result;
            v32 = Object;
            if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return -1073741816;
            }
            else
            {
              v33 = *((_QWORD *)Object + 68);
              v34 = 6224LL;
              if ( *(_QWORD *)(v33 + 1408) )
              {
                v34 = 12312LL;
                if ( *(_WORD *)(v33 + 2412) == 0x8664 )
                  v34 = 14416LL;
              }
              v35 = *((unsigned int *)ThreadInformation + 3);
              if ( (_DWORD)v35 && (v36 = *((unsigned int *)ThreadInformation + 2), v36 < v34) && v35 <= v34 - v36 )
              {
                if ( sub_140347810((struct _EX_RUNDOWN_REF *)Object + 169) )
                {
                  v37 = *((_QWORD *)KeGetCurrentThread() + 23);
                  v38 = (struct _EX_RUNDOWN_REF *)Object;
                  if ( v33 == v37 )
                  {
                    memmove(
                      *(void **)ThreadInformation,
                      (const void *)(*((_QWORD *)Object + 30) + *((unsigned int *)ThreadInformation + 2)),
                      *((unsigned int *)ThreadInformation + 3));
                    v26 = v66;
                  }
                  else
                  {
                    v26 = sub_1407BB560(
                            v33,
                            (char *)(*((_QWORD *)Object + 30) + *((unsigned int *)ThreadInformation + 2)),
                            v37,
                            *(void **)ThreadInformation,
                            *((unsigned int *)ThreadInformation + 3),
                            v64,
                            v82,
                            0);
                  }
                  sub_1402AD030(v38 + 169);
                  ObfDereferenceObjectWithTag(v38, 0x79517350u);
                  if ( v26 >= 0 )
                  {
                    if ( ReturnLength )
                      *ReturnLength = *((_DWORD *)ThreadInformation + 3);
                    v26 = 0;
                    v66 = 0;
                  }
                  return v26;
                }
                else
                {
                  ObfDereferenceObjectWithTag(v32, 0x79517350u);
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
            result = sub_140732D40(BugCheckParameter1, 8, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v26 = sub_140704EF8((__int64)Object, (ULONG *)ThreadInformation, v5, v64);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( v26 >= 0 && ReturnLength )
              *ReturnLength = 716;
            return v26;
          case ThreadGroupInformation:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            v26 = result;
            if ( result < 0 )
              return result;
            v89[0] = 2097153;
            memset(&v89[1], 0, 0x104uLL);
            v28 = (unsigned __int16 *)Object;
            sub_14025C33C((__int64)Object, (__int64)v89);
            v29 = v28[280];
            WORD4(v77) = v29;
            if ( (unsigned __int16)v29 < LOWORD(v89[0]) )
              v8 = *(_QWORD *)&v89[2 * v29 + 2];
            *(_QWORD *)&v77 = v8;
            *(_OWORD *)ThreadInformation = v77;
            if ( ReturnLength )
              *ReturnLength = 16;
            ObfDereferenceObjectWithTag(v28, 0x79517350u);
            return v26;
          case ThreadCounterProfiling:
            if ( (_DWORD)v5 != 1 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 64, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            LODWORD(v8) = result;
            if ( result < 0 )
              return result;
            v39 = Object;
            *(_BYTE *)ThreadInformation = *((_QWORD *)Object + 45) != 0LL;
            ObfDereferenceObjectWithTag(v39, 0x79517350u);
            if ( ReturnLength )
              *ReturnLength = 1;
            return v8;
          case ThreadIdealProcessorEx:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v68 = (_PROCESSOR_NUMBER)0x400000;
            sub_1403861B4((__int64)Object, &v68, &v68);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_PROCESSOR_NUMBER *)ThreadInformation = v68;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadCpuAccountingInformation:
            if ( !(_DWORD)v5 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 64, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            v66 = result;
            if ( result < 0 )
              return result;
            *(_BYTE *)ThreadInformation = *((_QWORD *)Object + 13) != 0LL;
            if ( ReturnLength )
              *ReturnLength = 1;
            LODWORD(v8) = v66;
            goto LABEL_124;
          case ThreadSuspendCount:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            LODWORD(v8) = result;
            if ( result < 0 )
              return result;
            v40 = Object;
            *(_DWORD *)ThreadInformation = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            v18 = v40;
            goto LABEL_73;
          case ThreadHeterogeneousCpuPolicy:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            v26 = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            if ( v26 < 0 )
              return v26;
            v41 = Object;
            *(_DWORD *)ThreadInformation = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            ObfDereferenceObjectWithTag(v41, 0x79517350u);
            return v26;
          case ThreadContainerId:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( BugCheckParameter1 != -2LL )
              return -1073741811;
            result = PsGetEffectiveContainerId(4, (__int64)CurrentThread, (__int64)&v86);
            if ( result >= 0 )
            {
              *(_OWORD *)ThreadInformation = v86;
              if ( ReturnLength )
                *ReturnLength = 16;
            }
            return result;
          case ThreadNameInformation:
            v65 = 0;
            v62 = 0;
            v42 = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            v66 = v42;
            if ( v42 < 0 )
            {
              v54 = (signed __int64 *)Object;
              v55 = v62;
              v53 = (__int64)v69;
            }
            else
            {
              v65 = 1;
              v53 = (__int64)v69;
              --v69[242];
              v54 = (signed __int64 *)Object;
              ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1360, 0LL);
              v55 = 1;
              v62 = 1;
              v56 = v54[204];
              if ( v56 )
              {
                v57 = *(const WCHAR **)(v56 + 8);
                v58 = *(_WORD *)v56;
                v67 = v58;
              }
              else
              {
                v57 = &word_140867F00;
                v58 = 0;
                v67 = 0;
              }
              v81 = v57;
              v59 = v58 + 16;
              LODWORD(BugCheckParameter1) = v59;
              v80 = v59;
              if ( v59 <= (unsigned int)v5 )
              {
                memmove((char *)ThreadInformation + 16, v57, v58);
                v60 = v67;
                *(_WORD *)ThreadInformation = v67;
                *((_WORD *)ThreadInformation + 1) = v60;
                *((_QWORD *)ThreadInformation + 1) = (char *)ThreadInformation + 16;
                v59 = BugCheckParameter1;
                v55 = v62;
                v53 = (__int64)v69;
              }
              else
              {
                v42 = -1073741789;
                v66 = -1073741789;
              }
              if ( ReturnLength )
                *ReturnLength = v59;
            }
            if ( v55 )
            {
              if ( _InterlockedCompareExchange64(v54 + 170, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v54 + 170);
              sub_1402AFC00((ULONG_PTR)(v54 + 170));
              sub_1402AC800(v53);
              v42 = v66;
              v54 = (signed __int64 *)Object;
            }
            if ( v65 )
              ObfDereferenceObjectWithTag(v54, 0x79517350u);
            return v42;
          case ThreadSelectedCpuSets:
            if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
              return -1073741820;
            v42 = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            v66 = v42;
            if ( v42 >= 0 )
            {
              v43 = 8 * sub_1405725CC((__int64)Object, Src);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v71 = v43;
              if ( ReturnLength )
                *ReturnLength = v43;
              if ( v43 >= (unsigned int)v5 )
                v43 = v5;
              v71 = v43;
              memmove(ThreadInformation, Src, v43);
            }
            return v42;
          case ThreadSystemThreadInformation:
            if ( (_DWORD)v5 != 80 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            v46 = result;
            if ( result >= 0 )
            {
              v47 = (unsigned int *)Object;
              sub_140302C20((__int64)Object, v83, v44, v45);
              v48 = sub_140280CBC((__int64)v47, 1);
              if ( v48 > 0x7FFFFFFEFFFFLL )
                v48 = 0LL;
              *((_DWORD *)ThreadInformation + 17) = BYTE8(v83[0]);
              *((_DWORD *)ThreadInformation + 18) = BYTE9(v83[0]);
              *((_DWORD *)ThreadInformation + 15) = SBYTE11(v83[0]);
              *((_DWORD *)ThreadInformation + 14) = SBYTE10(v83[0]);
              *((_DWORD *)ThreadInformation + 6) = v83[0];
              v49 = DesiredTime;
              *(_QWORD *)ThreadInformation = DesiredTime * (unsigned __int64)v47[163];
              *((_QWORD *)ThreadInformation + 1) = v49 * v47[183];
              *((_QWORD *)ThreadInformation + 2) = *((_QWORD *)v47 + 144);
              *((_DWORD *)ThreadInformation + 16) = v47[85];
              *(_OWORD *)((char *)ThreadInformation + 40) = *(_OWORD *)(v47 + 306);
              *((_QWORD *)ThreadInformation + 4) = v48;
              if ( ReturnLength )
                *ReturnLength = 80;
              ObfDereferenceObjectWithTag(v47, 0x79517350u);
              return v46;
            }
            return result;
          case ThreadActualGroupAffinity:
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            LODWORD(v8) = result;
            if ( result < 0 )
              return result;
            v52 = Object;
            sub_14056B234((__int64)Object, (__int64)&v77, v50, v51);
            *(_OWORD *)ThreadInformation = v77;
            if ( ReturnLength )
              *ReturnLength = 16;
            v18 = v52;
            goto LABEL_73;
          case ThreadDynamicCodePolicyInfo:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            v15 = result;
            if ( result < 0 )
              return result;
            v16 = Object;
            *(_DWORD *)ThreadInformation = (*((_DWORD *)Object + 344) & 0x40000) != 0;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_29;
          case ThreadExplicitCaseSensitivity:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            v66 = result;
            if ( result < 0 )
              return result;
            *(_DWORD *)ThreadInformation = (*((_DWORD *)Object + 344) >> 19) & 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            LODWORD(v8) = v66;
LABEL_124:
            v18 = Object;
            goto LABEL_73;
          case ThreadWorkOnBehalfTicket:
            v70[0] = 0;
            if ( (_DWORD)v5 != 16 )
              return -1073741820;
            if ( BugCheckParameter1 != -2LL )
              return -1073741811;
            v73 = 0LL;
            v24 = sub_1402F6220((__int64)CurrentThread, v70);
            if ( v24 )
            {
              sub_1402F61F8((__int64)v24, &v73);
              if ( v70[0] )
                ObfDereferenceObject(v25);
            }
            else
            {
              sub_1402F61F8((__int64)v69, &v73);
              DWORD2(v73) |= 1u;
            }
            *(_OWORD *)ThreadInformation = v73;
            if ( ReturnLength )
              *ReturnLength = 16;
            return 0;
          case ThreadSubsystemInformation:
            if ( (_DWORD)v5 != 4 )
              return -1073741820;
            result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
            v15 = result;
            if ( result < 0 )
              return result;
            v16 = Object;
            if ( *((_QWORD *)Object + 198) )
              LODWORD(v8) = qword_140C1BE50;
            *(_DWORD *)ThreadInformation = v8;
            if ( ReturnLength )
              *ReturnLength = 4;
LABEL_29:
            ObfDereferenceObjectWithTag(v16, 0x79517350u);
            result = v15;
            break;
          default:
            return -1073741821;
        }
        return result;
      }
      if ( (_DWORD)v5 == 48 )
      {
        result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v20 = (char *)Object;
        if ( *((_BYTE *)Object + 4) )
          LODWORD(v78[0]) = PsGetThreadExitStatus((PETHREAD)Object);
        else
          LODWORD(v78[0]) = 259;
        *((_QWORD *)&v78[0] + 1) = *((_QWORD *)v20 + 30);
        if ( (*((_BYTE *)PsGetThreadProcess((PETHREAD)v20) + 992) & 1) != 0 )
          sub_1409322EC(v20, (char *)v78 + 8);
        v21 = *(_OWORD *)(v20 + 1224);
        v22 = *((unsigned __int16 *)v20 + 280);
        v23 = (_WORD *)*((_QWORD *)v20 + 69);
        if ( (unsigned __int16)v22 < *v23 )
          v8 = *(_QWORD *)&v23[4 * v22 + 4];
        *(_QWORD *)&v79 = v8;
        DWORD2(v79) = v20[195];
        HIDWORD(v79) = sub_140234504((__int64)v20);
        ObfDereferenceObjectWithTag(v20, 0x79517350u);
        *(_OWORD *)ThreadInformation = v78[0];
        *((_OWORD *)ThreadInformation + 1) = v21;
        *((_OWORD *)ThreadInformation + 2) = v79;
        if ( ReturnLength )
          *ReturnLength = 48;
        return 0;
      }
    }
    return -1073741820;
  }
  if ( (_DWORD)v5 != 16 )
    return -1073741820;
  v17 = BugCheckParameter1;
  if ( BugCheckParameter1 == -2LL )
  {
    Object = CurrentThread;
  }
  else
  {
    result = sub_140732D40(BugCheckParameter1, 2048, (__int64)PsThreadType, v10, 0x79517350u, &Object, 0LL, 0LL);
    LODWORD(v8) = result;
    if ( result < 0 )
      return result;
    CurrentThread = (struct _KTHREAD *)Object;
    v69 = Object;
  }
  *(_QWORD *)ThreadInformation = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
  *((_QWORD *)ThreadInformation + 1) = CycleTimeStamp;
  if ( ReturnLength )
    *ReturnLength = 16;
  v18 = v69;
  if ( v17 != -2LL )
LABEL_73:
    ObfDereferenceObjectWithTag(v18, 0x79517350u);
  return v8;
}
