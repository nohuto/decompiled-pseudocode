/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x1800013C0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800E4340 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800E43E0 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlQueryProcessModuleInformation @ 0x180001558 (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18000230C (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCreateUserThreadEx @ 0x180008100 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetProcessMachines @ 0x180082B40 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A4510 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A4530 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1800A47F0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A4850 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x1800A4AD0 (NtTerminateThread.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800E3530 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800E36C0 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800E3C20 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800E40F8 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800E42E4 (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800E476C (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800E67CC (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x180117DA0 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x180117EA0 (RtlpDestroyExecutionRequiredRequest.c)
 */

__int64 __fastcall RtlQueryProcessDebugInformation(void *a1, unsigned int a2, __int64 a3)
{
  void (__fastcall __noreturn *v3)(); // rbx
  unsigned int v4; // r13d
  _QWORD *v5; // r15
  __int64 v9; // r8
  int v10; // r9d
  void *v11; // r8
  bool v12; // dl
  HANDLE v13; // rcx
  __int64 result; // rax
  int v15; // eax
  HANDLE v16; // rcx
  HANDLE v17; // r14
  HANDLE v18; // rcx
  HANDLE v19; // r15
  NTSTATUS v20; // eax
  int v21; // eax
  int v22; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v24; // [rsp+68h] [rbp-98h] BYREF
  HANDLE v25; // [rsp+70h] [rbp-90h] BYREF
  void (__fastcall __noreturn *v26)(); // [rsp+78h] [rbp-88h]
  void *v27; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER Timeout; // [rsp+98h] [rbp-68h] BYREF
  HANDLE v31; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v32; // [rsp+A8h] [rbp-58h] BYREF
  int v33; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+C8h] [rbp-38h]
  __int128 v37; // [rsp+D0h] [rbp-30h]
  _QWORD v38[18]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v39[12]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v40[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  void (__fastcall __noreturn *v41)(); // [rsp+1E0h] [rbp+E0h]

  v3 = 0LL;
  Handle = 0LL;
  v4 = 0;
  v5 = 0LL;
  v26 = RtlpQueryProcessDebugInformationRemote;
  if ( *(_QWORD *)(a3 + 48) && *(void **)(a3 + 48) != a1 )
    return 3221225485LL;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v9 = *(_QWORD *)(a3 + 72);
  Timeout.QuadPart = -600000000LL;
  if ( v9 )
    memset((void *)(a3 + 208), 0, v9 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  v10 = a2 & 0x41;
  v11 = a1;
  LODWORD(v24) = v10;
  v12 = 0;
  if ( (a2 & 0x3FFFFFBE) == 0 )
    v12 = (a2 & 0x80000000) != 0 && (a2 & 0x41) != 0;
  if ( v12 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v5 = a1;
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
      v15 = NtOpenProcess(&Handle, 0x1FFFFFLL, &v33, &v27);
      v16 = Handle;
      v5 = v38;
      v10 = (int)v24;
      v11 = a1;
      if ( v15 < 0 )
        v16 = 0LL;
      v38[1] = RtlpQueryReadVirtualMemory;
      Handle = v16;
      v38[2] = NtQueryInformationProcess;
      v38[0] = v16;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == v11 || (a2 & 0x40000000) != 0 || Handle )
  {
    if ( !v10 || (LODWORD(v3) = RtlQueryProcessModuleInformation(v5, a2, a3), !(_DWORD)v3) )
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
                LODWORD(v3) = RtlpQueryCriticalSectionOwnerInformation(a3, a2);
            }
          }
        }
      }
    }
    v13 = Handle;
    if ( !Handle )
      return (unsigned int)v3;
    goto LABEL_22;
  }
  if ( ((a2 - 1024) & 0xFFFFFBFF) == 0 )
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
      if ( (int)RtlWow64GetProcessMachines(Handle, &v24, 0LL) >= 0 )
      {
        if ( (_WORD)v24 )
        {
          v22 = 0;
          if ( (int)ZwDuplicateObject(-1LL, Handle, -1LL, &v25, 16, 0) >= 0 )
          {
            if ( (int)ZwReadVirtualMemory(v25, &LdrSystemDllInitBlock, v40, 240LL, &v29) >= 0 && v29 == 240 )
              v3 = v41;
            NtClose(v25);
            if ( v3 )
            {
              v26 = v3;
              v4 = 1;
            }
          }
        }
      }
      NtClose(Handle);
    }
    Handle = 0LL;
  }
  v24 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, v4, &v24);
  if ( (int)result >= 0 )
  {
    v17 = v24;
    v18 = v24;
    if ( !v24 )
      v18 = *(HANDLE *)(a3 + 136);
    LODWORD(v3) = RtlpCreateExecutionRequiredRequest(v18, &v32);
    v13 = v17;
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = RtlpCreateUserThreadEx(
                      (_DWORD)v17,
                      0,
                      6,
                      0,
                      0LL,
                      0LL,
                      v22,
                      (__int64)v26,
                      *(_QWORD *)(a3 + 16),
                      (__int64)&v31,
                      0LL);
      if ( (int)v3 >= 0 )
      {
        v19 = v31;
        v20 = NtWaitForSingleObject(v31, 1u, &Timeout);
        LODWORD(v3) = v20;
        if ( v20 < 0 )
        {
          NtTerminateThread(v19, (unsigned int)v20);
        }
        else
        {
          LODWORD(v3) = ZwQueryInformationThread(v19, 0LL, v39, 48LL, 0LL);
          if ( (int)v3 >= 0 )
            LODWORD(v3) = v39[0];
        }
        NtClose(v19);
      }
      NtClose(v17);
      if ( v32 )
        RtlpDestroyExecutionRequiredRequest(v32);
      if ( (int)v3 < 0 )
        return (unsigned int)v3;
      if ( v4 == 1 )
      {
        LODWORD(v3) = 0;
        *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a3 + 88)
                                                                                          + a3
                                                                                          + 80), 4));
      }
      else
      {
        LODWORD(v3) = RtlpCopyRemoteDebugInformation(a3);
        if ( (int)v3 < 0 )
          return (unsigned int)v3;
      }
      v21 = -1073741558;
      if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
        LODWORD(v3) = -1073741558;
      if ( (a2 & 0x40) != 0 && !*(_QWORD *)(a3 + 96) )
        goto LABEL_67;
      if ( (int)v3 >= 0 )
      {
        v21 = RtlpValidateRemoteDebugInformation(a3, a2, a3 + 208, *(_QWORD *)(a3 + 72) - 208LL);
LABEL_67:
        LODWORD(v3) = v21;
      }
      return (unsigned int)v3;
    }
LABEL_22:
    NtClose(v13);
    return (unsigned int)v3;
  }
  return result;
}
