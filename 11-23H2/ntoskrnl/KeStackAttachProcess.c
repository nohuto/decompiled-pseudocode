/*
 * XREFs of KeStackAttachProcess @ 0x14034DF50
 * Callers:
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  KiStackAttachProcess(PROCESS, 0, (__int64)ApcState);
}
