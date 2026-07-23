/*
 * XREFs of sub_140986CD4 @ 0x140986CD4
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_14069B8FC @ 0x14069B8FC (sub_14069B8FC.c)
 */

NTSTATUS __fastcall sub_140986CD4(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  void *ProcessServerSilo; // rax

  ProcessServerSilo = (void *)PsGetProcessServerSilo(a1);
  return sub_14069B8FC(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}
