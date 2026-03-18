/*
 * XREFs of PoClearBroadcast @ 0x14098BB8C
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x1409834A8 (PopDirectedDripsDestroyBroadcast.c)
 *     PnprWakeDevices @ 0x140A9DF9C (PnprWakeDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14036EAF0 (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x1405875C4 (PopResumeDeviceIdle.c)
 *     IoFreePoDeviceNotifyList @ 0x140A9E754 (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C3CD70;
  if ( qword_140C3CD70 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C3CD70 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
