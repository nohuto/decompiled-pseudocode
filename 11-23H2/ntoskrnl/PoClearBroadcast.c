/*
 * XREFs of PoClearBroadcast @ 0x14098BD8C
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x1409836A8 (PopDirectedDripsDestroyBroadcast.c)
 *     PnprWakeDevices @ 0x140A9DE0C (PnprWakeDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14036EC90 (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x140587AB4 (PopResumeDeviceIdle.c)
 *     IoFreePoDeviceNotifyList @ 0x140A9E5C4 (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140C3CD10;
  if ( qword_140C3CD10 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140C3CD10 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
