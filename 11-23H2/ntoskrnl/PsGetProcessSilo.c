/*
 * XREFs of PsGetProcessSilo @ 0x1405A3D50
 * Callers:
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x1409AC670 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x14031C814 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 1296));
}
