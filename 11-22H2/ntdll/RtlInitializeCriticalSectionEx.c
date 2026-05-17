/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x18005FC80
 * Callers:
 *     LdrpInitMuiCrits @ 0x180008BC4 (LdrpInitMuiCrits.c)
 *     RtlpInitMuiCriticalSection @ 0x180011C54 (RtlpInitMuiCriticalSection.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800270A0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     EtwpInitLoggerContext @ 0x18005EF28 (EtwpInitLoggerContext.c)
 *     LdrpInitParallelLoadingSupport @ 0x18005F7B8 (LdrpInitParallelLoadingSupport.c)
 *     RtlInitializeResource @ 0x18005F860 (RtlInitializeResource.c)
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800D8BFC (LdrpCreateSoftwareEnclave.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     RtlTraceDatabaseCreate @ 0x18010F360 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005F9E0 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  _DWORD *SharedData; // rcx
  __int64 v8; // rcx
  _BYTE v9[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+26h] [rbp-42h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]

  if ( (a3 & 0xE0000000) != 0 || (a3 & 0x11000000) == 0x11000000 )
    return 3221225713LL;
  if ( (a2 & 0xFF000000) != 0 )
    return 3221225712LL;
  if ( (a3 & 0x4000000) != 0 )
    return 0LL;
  v5 = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
  {
    if ( (a3 & 0x2000000) != 0 || !a2 )
      v5 = 33556432LL;
    else
      v5 = a2 & 0xFFFFFF;
  }
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 32) = v5 | a3 & 0x9000000;
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
  v6 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v8 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v8 = 2147353474LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v12 = a1;
    v10 = 5923;
    v11 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v6, 66562LL, 16LL, v9);
  }
  return 0LL;
}
