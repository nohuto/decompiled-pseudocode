/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x180001320
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800E45A0 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800E4640 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlQueryProcessModuleInformation @ 0x1800014C0 (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000273C (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCreateUserThreadEx @ 0x18005C2F0 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetProcessMachines @ 0x18007EFF0 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A1350 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A1370 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1800A1630 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A1690 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x1800A1910 (NtTerminateThread.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800E3510 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36A0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800E3C30 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800E40C0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwner @ 0x1800E42EC (RtlpQueryCriticalSectionOwner.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800E4540 (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800E4B48 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800E6964 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1801196D0 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1801197D0 (RtlpDestroyExecutionRequiredRequest.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessDebugInformation(_QWORD *a1, int a2, __int64 a3)
{
  void (__fastcall __noreturn *v3)(); // rbx
  _QWORD *v4; // r15
  __int64 v8; // r8
  bool v9; // dl
  HANDLE v10; // rcx
  __int64 result; // rax
  int v12; // eax
  HANDLE v13; // rcx
  unsigned int v14; // r15d
  HANDLE v15; // r14
  HANDLE v16; // rcx
  HANDLE v17; // r15
  NTSTATUS v18; // eax
  int v19; // eax
  int v20; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+68h] [rbp-98h]
  __int16 v23; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE v24; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v25; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall __noreturn *v26)(); // [rsp+80h] [rbp-80h]
  _QWORD *v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v31; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v32; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h]
  __int128 v37; // [rsp+D8h] [rbp-28h]
  _QWORD v38[17]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v39[12]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v40[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  void (__fastcall __noreturn *v41)(); // [rsp+1E0h] [rbp+E0h]

  v3 = 0LL;
  v26 = RtlpQueryProcessDebugInformationRemote;
  v4 = 0LL;
  Handle = 0LL;
  v22 = 0;
  if ( *(_QWORD *)(a3 + 48) && *(_QWORD **)(a3 + 48) != a1 )
    return 3221225485LL;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v8 = *(_QWORD *)(a3 + 72);
  Timeout.QuadPart = -600000000LL;
  if ( v8 )
    memset_thunk_772440563353939046((void *)(a3 + 208), 0, v8 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  if ( a2 == -2147481600 )
    return RtlpQueryCriticalSectionOwner(a1, a3);
  v9 = 0;
  if ( (a2 & 0x3FFFFFBE) == 0 )
    v9 = a2 < 0 && (a2 & 0x41) != 0;
  if ( v9 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v4 = a1;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != a1 )
    {
      v33 = 48;
      v34 = 0LL;
      v36 = 0;
      v35 = 0LL;
      v27 = a1;
      v37 = 0LL;
      v28 = 0LL;
      v12 = NtOpenProcess(&Handle, 0x1FFFFFLL, &v33, &v27);
      v13 = Handle;
      v4 = v38;
      v38[1] = RtlpQueryReadVirtualMemory;
      if ( v12 < 0 )
        v13 = 0LL;
      v38[2] = NtQueryInformationProcess;
      Handle = v13;
      v38[0] = v13;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 || (a2 & 0x40000000) != 0 || Handle )
  {
    if ( (a2 & 0x41) == 0 || (LODWORD(v3) = RtlQueryProcessModuleInformation(v4, (unsigned int)a2, a3), !(_DWORD)v3) )
    {
      if ( (a2 & 2) == 0 || (LODWORD(v3) = RtlQueryProcessBackTraceInformation(a3), !(_DWORD)v3) )
      {
        if ( (a2 & 0x20) == 0 || (LODWORD(v3) = RtlQueryProcessLockInformation(a3), !(_DWORD)v3) )
        {
          if ( (a2 & 0x21C) == 0 || (LODWORD(v3) = RtlQueryProcessHeapInformation(a3), !(_DWORD)v3) )
          {
            if ( (a2 & 0x80u) == 0 || (LODWORD(v3) = AVrfpQueryProcessVerifierOptions(a3), !(_DWORD)v3) )
            {
              if ( (a2 & 0xC00) != 0 )
                LODWORD(v3) = RtlpQueryCriticalSectionOwnerInformation(a3, (unsigned int)a2);
            }
          }
        }
      }
    }
    v10 = Handle;
    if ( !Handle )
      return (unsigned int)v3;
    goto LABEL_23;
  }
  if ( a2 >= 0 && ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    v33 = 48;
    v34 = 0LL;
    v36 = 0;
    v35 = 0LL;
    v27 = a1;
    v37 = 0LL;
    v28 = 0LL;
    if ( (int)NtOpenProcess(&Handle, 4096LL, &v33, &v27) >= 0 )
    {
      if ( (int)RtlWow64GetProcessMachines(Handle, &v23, 0LL) >= 0 )
      {
        if ( v23 )
        {
          v20 = 0;
          if ( (int)ZwDuplicateObject(-1LL, Handle, -1LL, &v24, 16, 0) >= 0 )
          {
            if ( (int)ZwReadVirtualMemory(v24, &LdrSystemDllInitBlock, v40, 240LL, &v29) >= 0 && v29 == 240 )
              v3 = v41;
            NtClose(v24);
            if ( v3 )
            {
              v26 = v3;
              v22 = 1;
            }
          }
        }
      }
      NtClose(Handle);
    }
    Handle = 0LL;
  }
  v14 = v22;
  v25 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, v22, &v25);
  if ( (int)result >= 0 )
  {
    v15 = v25;
    v16 = v25;
    if ( !v25 )
      v16 = *(HANDLE *)(a3 + 136);
    LODWORD(v3) = RtlpCreateExecutionRequiredRequest(v16, &v32);
    v10 = v15;
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = RtlpCreateUserThreadEx(
                      (_DWORD)v15,
                      0,
                      6,
                      0,
                      0LL,
                      0LL,
                      v20,
                      (__int64)v26,
                      *(_QWORD *)(a3 + 16),
                      (__int64)&v31,
                      0LL);
      if ( (int)v3 >= 0 )
      {
        v17 = v31;
        v18 = NtWaitForSingleObject(v31, 1u, &Timeout);
        LODWORD(v3) = v18;
        if ( v18 < 0 )
        {
          NtTerminateThread(v17, (unsigned int)v18);
        }
        else
        {
          LODWORD(v3) = ZwQueryInformationThread(v17, 0LL, v39, 48LL, 0LL);
          if ( (int)v3 >= 0 )
            LODWORD(v3) = v39[0];
        }
        NtClose(v17);
        v14 = v22;
      }
      NtClose(v15);
      if ( v32 )
        RtlpDestroyExecutionRequiredRequest(v32);
      if ( (int)v3 < 0 )
        return (unsigned int)v3;
      if ( v14 == 1 )
      {
        LODWORD(v3) = 0;
        *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a3 + 88)
                                                                                          + a3
                                                                                          + 80), 4));
      }
      else if ( !v14 )
      {
        LODWORD(v3) = RtlpCopyRemoteDebugInformation(a3);
        if ( (int)v3 < 0 )
          return (unsigned int)v3;
      }
      v19 = -1073741558;
      if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
        LODWORD(v3) = -1073741558;
      if ( (a2 & 0x40) != 0 && !*(_QWORD *)(a3 + 96) )
        goto LABEL_71;
      if ( (int)v3 >= 0 )
      {
        v19 = RtlpValidateRemoteDebugInformation(a3, (unsigned int)a2, a3 + 208, *(_QWORD *)(a3 + 72) - 208LL);
LABEL_71:
        LODWORD(v3) = v19;
      }
      return (unsigned int)v3;
    }
LABEL_23:
    NtClose(v10);
    return (unsigned int)v3;
  }
  return result;
}
