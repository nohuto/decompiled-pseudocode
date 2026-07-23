/*
 * XREFs of WmipRegisterDevice @ 0x14086C1C8
 * Callers:
 *     IoWMIRegistrationControl @ 0x14086C0F0 (IoWMIRegistrationControl.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x14022AA90 (ObReferenceObjectByPointer.c)
 *     WmipUnreferenceRegEntry @ 0x14022ABC4 (WmipUnreferenceRegEntry.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x14025A390 (IoGetAttachedDeviceReference.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     WmipFindRegEntryByDevice @ 0x1403C27A4 (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x1403C2864 (WmipAllocRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x1403D4CC0 (WmipDeregisterRegEntry.c)
 *     WmipRegisterOrUpdateDS @ 0x14086A204 (WmipRegisterOrUpdateDS.c)
 *     WmipQueueRegWork @ 0x14086C330 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14086C40C (WmipUpdateDeviceStackSize.c)
 */

__int64 __fastcall WmipRegisterDevice(struct _DEVICE_OBJECT *Object, int a2)
{
  int v2; // ebx
  bool v3; // bp
  char *RegEntryByDevice; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  __int64 v7; // rcx
  int updated; // edi
  _QWORD *v9; // rax

  v2 = 0;
  v3 = 0;
  if ( a2 < 0 )
    v2 = 0x10000000;
  if ( (a2 & 0x10000) != 0 )
    v2 |= 16 * (a2 & 0xF00000 | 0x4000000);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice((__int64)Object);
  if ( RegEntryByDevice )
  {
    KeReleaseMutex(&WmipSMMutex, 0);
    updated = 0x40000000;
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
  }
  else
  {
    if ( (v2 & 0x10000000) != 0
      || (AttachedDeviceReference = IoGetAttachedDeviceReference(Object),
          LOBYTE(v7) = AttachedDeviceReference->StackSize + 1,
          WmipUpdateDeviceStackSize(v7),
          ObfDereferenceObject(AttachedDeviceReference),
          updated = ObReferenceObjectByPointer(Object, 0, 0LL, 0),
          updated >= 0) )
    {
      v9 = WmipAllocRegEntry((__int64)Object, v2);
      RegEntryByDevice = (char *)v9;
      if ( v9 )
      {
        _InterlockedAdd((volatile signed __int32 *)v9 + 12, 1u);
        KeReleaseMutex(&WmipSMMutex, 0);
        if ( (v2 & 0x10000000) != 0 )
        {
          updated = WmipRegisterOrUpdateDS((__int64)RegEntryByDevice, 0);
          if ( updated < 0 )
            v3 = 1;
        }
        else
        {
          updated = WmipQueueRegWork(0LL, RegEntryByDevice);
          v3 = updated < 0;
        }
        WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
      }
      else
      {
        KeReleaseMutex(&WmipSMMutex, 0);
        updated = -1073741670;
      }
    }
    else
    {
      KeReleaseMutex(&WmipSMMutex, 0);
    }
    if ( v3 )
      WmipDeregisterRegEntry(RegEntryByDevice);
  }
  return (unsigned int)updated;
}
