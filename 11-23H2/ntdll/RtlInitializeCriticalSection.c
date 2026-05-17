/*
 * XREFs of RtlInitializeCriticalSection @ 0x18005C7C0
 * Callers:
 *     NtdllRunOnceInitMuiCrits @ 0x18009F4B0 (NtdllRunOnceInitMuiCrits.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005CB50 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSection(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // cc
  bool v4; // zf
  __int64 v5; // rdi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  _BYTE v9[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+26h] [rbp-42h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 8) = -1;
  v2 = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = NtCurrentPeb()->NumberOfProcessors <= 1;
  *(_QWORD *)a1 = -1LL;
  if ( !v3 )
    v2 = 33556432LL;
  v4 = RtlpForceCSDebugInfoCreation == 0;
  *(_QWORD *)(a1 + 32) = v2;
  if ( !v4 )
  {
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v5 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v7 = 2147353474LL;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v12 = a1;
    v10 = 5923;
    v11 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v5, 66562LL, 16LL, v9);
  }
  return 0LL;
}
