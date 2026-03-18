/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14022AAB4
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1403D4AE0 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x1406C7480 (WmipForwardWmiIrp.c)
 *     WmipQueryWmiDataBlock @ 0x1407AB580 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x1407E2AE4 (IoWMISystemControl.c)
 *     WmipFreeTraceDeviceList @ 0x140848FB8 (WmipFreeTraceDeviceList.c)
 *     WmipEventNotification @ 0x1408559F0 (WmipEventNotification.c)
 *     WmipUpdateRegistration @ 0x140863244 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14086BEB0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14086BF88 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x14086F0C0 (WmipRegistrationWorker.c)
 *     WmipDeregisterDevice @ 0x140882568 (WmipDeregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
