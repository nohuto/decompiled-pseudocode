/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x180063320
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005F9E0 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionAndSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  unsigned __int64 v3; // rcx
  ULONG v4; // edx
  bool v5; // zf
  __int64 v6; // rdi
  _DWORD *SharedData; // rcx
  __int64 v8; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  unsigned __int64 v12; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v13; // [rsp+48h] [rbp-20h]

  CriticalSection->LockCount = -1;
  v3 = 0LL;
  v4 = SpinCount & 0xFFFFFF;
  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
  {
    if ( v4 )
      v3 = v4;
    else
      v3 = 33556432LL;
  }
  CriticalSection->SpinCount = v3;
  v5 = RtlpForceCSDebugInfoCreation == 0;
  CriticalSection->SpinCount = v3;
  CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  if ( !v5 )
  {
    RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  v6 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v8 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v8 = 2147353474LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v13 = CriticalSection;
    v11 = 5923;
    v12 = CriticalSection->SpinCount;
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
