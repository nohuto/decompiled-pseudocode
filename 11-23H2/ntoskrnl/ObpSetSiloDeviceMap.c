/*
 * XREFs of ObpSetSiloDeviceMap @ 0x1408588A4
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x140858660 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020BFF0 (PsGetEffectiveServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140293450 (PdcCreateWatchdogAroundClientCall.c)
 *     ObpSetDeviceMap @ 0x1407AFABC (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObpSetSiloDeviceMap(__int64 a1, void *a2, __int64 *a3)
{
  void *EffectiveServerSilo; // rax
  PEPROCESS v7; // rdx
  char v8; // di

  EffectiveServerSilo = (void *)PdcCreateWatchdogAroundClientCall();
  if ( (void *)a1 == EffectiveServerSilo )
  {
    v7 = PsInitialSystemProcess;
    v8 = 3;
  }
  else
  {
    v8 = 4;
    EffectiveServerSilo = (void *)PsGetEffectiveServerSilo(a1);
    v7 = 0LL;
  }
  return ObpSetDeviceMap(EffectiveServerSilo, (__int64)v7, a2, 0, v8, a3);
}
