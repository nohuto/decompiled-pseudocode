/*
 * XREFs of NVMeControllerPowerUp @ 0x1C000E25C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00036A0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0007DCC (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C00097A8 (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000D910 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000DB58 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000DE44 (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1C0010718 (NVMeQueuesReInit.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0024864 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
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
    v3 = *(_DWORD *)(a1 + 4344);
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(a1 + 4344) = v3 & 0xFFFFFFFD;
      NVMeSetNonOperationalPowerStatePermissiveMode(a1);
    }
  }
  return inited;
}
