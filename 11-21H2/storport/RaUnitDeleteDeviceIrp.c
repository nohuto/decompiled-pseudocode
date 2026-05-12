/*
 * XREFs of RaUnitDeleteDeviceIrp @ 0x1C0022760
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C00226C4 (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     RaidDeleteUnit @ 0x1C0019D24 (RaidDeleteUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C001C0A8 (RaCallMiniportUnitControl.c)
 *     RaidAdapterRemoveUnit @ 0x1C001C558 (RaidAdapterRemoveUnit.c)
 *     RaUnitWaitForRemoveLock @ 0x1C001D350 (RaUnitWaitForRemoveLock.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001EFD0 (RaidUnitUnRegisterInterfaces.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C002283C (RaidAdapterRemoveZombieUnit.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitDeleteDeviceIrp(__int64 a1, IRP *a2)
{
  int v3; // eax
  unsigned int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  char v8; // bl
  struct _DEVICE_OBJECT *v10; // rcx

  v3 = *(_DWORD *)(a1 + 48) - 5;
  *(_DWORD *)(a1 + 48) = 6;
  if ( (v3 & 0xFFFFFFFD) != 0 )
    RaidUnitUnRegisterInterfaces(a1);
  RaUnitReleaseRemoveLock(a1);
  v5 = RaUnitWaitForRemoveLock(a1);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = v5;
  if ( *(_DWORD *)(v6 + 88) != 5 )
  {
    if ( RaidIsUnitControlSupported(a1, 9) )
      RaCallMiniportUnitControl(v6 + 336);
    if ( (*(_BYTE *)(a1 + 448) & 0x20) != 0 )
      RaidAdapterRemoveZombieUnit(v6, a1);
    else
      RaidAdapterRemoveUnit(v6, a1);
  }
  v8 = *(_BYTE *)(a1 + 448);
  RaidDeleteUnit(a1);
  if ( (v8 & 0x40) != 0 )
  {
    v10 = *(struct _DEVICE_OBJECT **)(v6 + 32);
    *(_BYTE *)(v6 + 106) = 1;
    IoInvalidateDeviceRelations(v10, BusRelations);
  }
  return RaidCompleteRequestEx(a2, 0, v7);
}
