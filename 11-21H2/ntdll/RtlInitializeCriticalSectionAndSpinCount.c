/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x18006A0F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x18001D180 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionAndSpinCount(__int64 a1, int a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  bool v5; // zf
  __int64 v6; // rdi
  _DWORD *SharedData; // rcx
  __int64 v8; // rcx
  _BYTE v10[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]

  *(_DWORD *)(a1 + 8) = -1;
  v3 = 0LL;
  v4 = a2 & 0xFFFFFF;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
  {
    if ( v4 )
      v3 = v4;
    else
      v3 = 33556432LL;
  }
  v5 = RtlpForceCSDebugInfoCreation == 0;
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)a1 = -1LL;
  if ( !v5 )
  {
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v6 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v8 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v8 = 2147353474LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v13 = a1;
    v11 = 5923;
    v12 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v6, 66562LL, 16LL, v10);
  }
  return 0LL;
}
