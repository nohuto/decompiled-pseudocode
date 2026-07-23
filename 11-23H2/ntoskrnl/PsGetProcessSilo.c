/*
 * XREFs of PsGetProcessSilo @ 0x1405A4240
 * Callers:
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x1409AC870 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x14031CAA4 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 1296));
}
