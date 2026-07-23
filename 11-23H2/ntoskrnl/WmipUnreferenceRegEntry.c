/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14022ABC4
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1403D4CC0 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x1406C74B0 (WmipForwardWmiIrp.c)
 *     WmipQueryWmiDataBlock @ 0x1407AB770 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x1407E2DB4 (IoWMISystemControl.c)
 *     WmipFreeTraceDeviceList @ 0x1408492B8 (WmipFreeTraceDeviceList.c)
 *     WmipEventNotification @ 0x140855CF0 (WmipEventNotification.c)
 *     WmipUpdateRegistration @ 0x140863484 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14086C0F0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14086C1C8 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x14086F300 (WmipRegistrationWorker.c)
 *     WmipDeregisterDevice @ 0x1408827A8 (WmipDeregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
