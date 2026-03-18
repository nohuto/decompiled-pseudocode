/*
 * XREFs of PspGetJobSilo @ 0x14031C814
 * Callers:
 *     PsIsProcessInSilo @ 0x140289FEC (PsIsProcessInSilo.c)
 *     PsGetJobSilo @ 0x14031C7E0 (PsGetJobSilo.c)
 *     PsGetProcessSilo @ 0x1405A3D50 (PsGetProcessSilo.c)
 *     PsGetParentSilo @ 0x1406831E0 (PsGetParentSilo.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1536) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1288);
  return a1;
}
