/*
 * XREFs of WmipUpdateRegistration @ 0x140863484
 * Callers:
 *     IoWMIRegistrationControl @ 0x14086C0F0 (IoWMIRegistrationControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14022ABC4 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x1403C27A4 (WmipFindRegEntryByDevice.c)
 *     WmipQueueRegWork @ 0x14086C330 (WmipQueueRegWork.c)
 */

__int64 __fastcall WmipUpdateRegistration(__int64 a1)
{
  __int64 RegEntryByDevice; // rax
  __int64 v2; // rdi
  unsigned int v3; // ebx

  RegEntryByDevice = WmipFindRegEntryByDevice(a1);
  v2 = RegEntryByDevice;
  if ( RegEntryByDevice )
  {
    v3 = WmipQueueRegWork(1LL, RegEntryByDevice);
    WmipUnreferenceRegEntry(v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
