/*
 * XREFs of NtGdiGetPhysicalMonitors @ 0x1C0270100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiGetPhysicalMonitors(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int PhysicalMonitorObjects; // ebx

  OPM::CMutex::Lock((OPM::CMutex *)P);
  PhysicalMonitorObjects = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  if ( PhysicalMonitorObjects >= 0 )
  {
    PhysicalMonitorObjects = DrvCreatePhysicalMonitorObjects(a1, 1LL, 1LL, 1LL, a2, a3, a4);
    ReleaseUserCriticalSection();
  }
  OPM::CMutex::Unlock((OPM::CMutex *)P);
  return (unsigned int)PhysicalMonitorObjects;
}
