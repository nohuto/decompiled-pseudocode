/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x18001DA80
 * Callers:
 *     EtwpInitLoggerContext @ 0x18000A828 (EtwpInitLoggerContext.c)
 *     RtlInitializeResource @ 0x18001D900 (RtlInitializeResource.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18003A8EC (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlpInitMuiCriticalSection @ 0x18004C6A8 (RtlpInitMuiCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180067F0C (LdrpInitMuiCrits.c)
 *     LdrpInitParallelLoadingSupport @ 0x180085190 (LdrpInitParallelLoadingSupport.c)
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D88EC (LdrpCreateSoftwareEnclave.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
 *     RtlTraceDatabaseCreate @ 0x18010F1A0 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x18001D180 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  _BYTE v10[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]

  if ( (a3 & 0xE0000000) != 0 || (a3 & 0x11000000) == 0x11000000 )
    return 3221225713LL;
  if ( (a2 & 0xFF000000) != 0 )
    return 3221225712LL;
  if ( (a3 & 0x4000000) != 0 )
    return 0LL;
  v6 = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
  {
    if ( (a3 & 0x2000000) != 0 || !(_DWORD)a2 )
      v6 = 33556432LL;
    else
      v6 = a2 & 0xFFFFFF;
  }
  *(_QWORD *)(a1 + 32) = v6 | a3 & 0x9000000;
  if ( (a3 & 0x10000000) != 0 || RtlpForceCSDebugInfoCreation )
  {
    *(_QWORD *)a1 = -1LL;
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  else
  {
    *(_QWORD *)a1 = -1LL;
  }
  v7 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v9 = 2147353474LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v13 = a1;
    v11 = 5923;
    v12 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, a2, a3, a4) )
      v7 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v7, 66562LL, 16LL, v10);
  }
  return 0LL;
}
