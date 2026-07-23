/*
 * XREFs of PsGetProcessSilo @ 0x1405E0470
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x1409AB7B0 (PsIsProcessInAppSilo.c)
 * Callees:
 *     sub_140212034 @ 0x140212034 (sub_140212034.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return sub_140212034(*(_QWORD *)(a1 + 1296));
}
