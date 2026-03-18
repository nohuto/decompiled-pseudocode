/*
 * XREFs of ACPIInternalIsPci @ 0x1C00A0FB0
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0006A34 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001778 (ACPIInternalSetFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     IsPciDevice @ 0x1C001CDCC (IsPciDevice.c)
 *     IsNsobjPciBus @ 0x1C0094D74 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInternalIsPci(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rsi
  void *v3; // rbx
  __int64 v4; // rax
  int v5; // r9d
  __int128 Event; // [rsp+30h] [rbp-28h] BYREF
  __int128 Event_16; // [rsp+40h] [rbp-18h]
  char v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = 0;
  Event = 0LL;
  Event_16 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v3 = (void *)(DeviceExtension + 8);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x102000000LL) != 0 )
    return 0LL;
  v4 = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( IsNsobjPciBus(*(volatile signed __int32 **)(v4 + 760)) == 1 )
  {
    ACPIInternalSetFlags(v3, 0x2000000uLL);
    return 0LL;
  }
  DWORD2(Event_16) = -1073741275;
  KeInitializeEvent((PRKEVENT)&Event, SynchronizationEvent, 0);
  v5 = IsPciDevice(
         *(volatile signed __int32 **)(DeviceExtension + 760),
         (__int64)AmlisuppCompletePassive,
         (__int64)&Event,
         &v9);
  if ( v5 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v5 = DWORD2(Event_16);
  }
  if ( v5 >= 0 && v9 == 1 )
    ACPIInternalSetFlags(v3, 0x100000000uLL);
  return (unsigned int)v5;
}
