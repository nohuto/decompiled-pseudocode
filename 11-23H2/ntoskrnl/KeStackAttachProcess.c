/*
 * XREFs of KeStackAttachProcess @ 0x14034E0F0
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  KiStackAttachProcess(PROCESS, 0, (__int64)ApcState);
}
