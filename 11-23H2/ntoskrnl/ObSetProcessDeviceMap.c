/*
 * XREFs of ObSetProcessDeviceMap @ 0x14097C62C
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14028C410 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x1407AFCAC (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObSetProcessDeviceMap(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  void *ProcessServerSilo; // rax

  ProcessServerSilo = (void *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}
