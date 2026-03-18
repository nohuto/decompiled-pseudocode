/*
 * XREFs of NVMeControllerPowerUp @ 0x1C0018D60
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0005860 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 *     ControllerReset @ 0x1C0007A88 (ControllerReset.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0017B68 (NVMeControllerStartFailureEventLog.c)
 *     NVMeQueuesReInit @ 0x1C0019CD8 (NVMeQueuesReInit.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C002473C (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 */

__int64 __fastcall NVMeControllerPowerUp(__int64 a1)
{
  unsigned int inited; // edi
  int v3; // eax

  *(_DWORD *)(a1 + 32) &= ~4u;
  NVMeQueuesReInit();
  inited = ControllerReset(a1, 1);
  if ( inited || (inited = NVMeControllerInitPart1(a1, 0)) != 0 || (inited = NVMeControllerInitPart2(a1, 0, 1)) != 0 )
  {
    NVMeControllerStartFailureEventLog(a1);
  }
  else
  {
    NVMeControllerInitPart3(a1);
    v3 = *(_DWORD *)(a1 + 4136);
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(a1 + 4136) = v3 & 0xFFFFFFFD;
      NVMeSetNonOperationalPowerStatePermissiveMode(a1);
    }
  }
  return inited;
}
