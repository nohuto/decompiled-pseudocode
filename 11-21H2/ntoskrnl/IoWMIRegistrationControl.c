/*
 * XREFs of IoWMIRegistrationControl @ 0x1406C8220
 * Callers:
 *     DifIoWMIRegistrationControlWrapper @ 0x140611730 (DifIoWMIRegistrationControlWrapper.c)
 *     PpmEnableWmiInterface @ 0x1408565CC (PpmEnableWmiInterface.c)
 *     ViDdiDriverEntry @ 0x140A834A0 (ViDdiDriverEntry.c)
 *     WheaInitialize @ 0x140AFF910 (WheaInitialize.c)
 *     WmipDriverEntry @ 0x140B22C40 (WmipDriverEntry.c)
 * Callees:
 *     WmipFindRegEntryByDevice @ 0x140248854 (WmipFindRegEntryByDevice.c)
 *     WmipUnreferenceRegEntry @ 0x1402E0164 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     WmipEnterSMCritSection @ 0x14045F87C (WmipEnterSMCritSection.c)
 *     WmipUpdateRegistration @ 0x1406C81D4 (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x1406C82F8 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140810420 (WmipDeregisterDevice.c)
 *     WmipSetTraceNotify @ 0x140810B00 (WmipSetTraceNotify.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  char v2; // r14
  ULONG v4; // eax
  ULONG v5; // eax
  NTSTATUS v6; // ebx
  ULONG v8; // eax
  ULONG v10; // eax
  ULONG v11; // eax
  __int64 RegEntryByDevice; // rbx

  v2 = 0;
  if ( WmipServiceDeviceObject )
  {
    v4 = Action & 0x7FFFFFFF;
    if ( (Action & 0x80000000) == 0 )
      v4 = Action;
    if ( (v4 & 0x10000) != 0 )
    {
      v2 = 1;
      v4 &= 0xFF0EFFFF;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v6 = WmipRegisterDevice(DeviceObject);
      if ( v2 )
        WmipSetTraceNotify(DeviceObject);
      return v6;
    }
    v8 = v5 - 1;
    if ( !v8 )
      return WmipDeregisterDevice(DeviceObject);
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          return -1073741811;
        RegEntryByDevice = WmipFindRegEntryByDevice((__int64)DeviceObject);
        if ( !RegEntryByDevice )
          return -1073741811;
        WmipEnterSMCritSection();
        _InterlockedOr((volatile signed __int32 *)(RegEntryByDevice + 48), 0x20000000u);
        KeReleaseMutex(&WmipSMMutex, 0);
        WmipUnreferenceRegEntry(RegEntryByDevice);
        return 0;
      }
      return WmipUpdateRegistration((__int64)DeviceObject);
    }
    else
    {
      v6 = WmipDeregisterDevice(DeviceObject);
      if ( v6 < 0 )
        return v6;
      return WmipRegisterDevice(DeviceObject);
    }
  }
  return -1073741823;
}
