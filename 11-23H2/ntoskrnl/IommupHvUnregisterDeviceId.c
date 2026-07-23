/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x140525AEC
 * Callers:
 *     HalpIommuCreateDevice @ 0x140829348 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140933C2C (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnregisterDeviceId()
{
  return ((__int64 (*)(void))qword_140C62620)();
}
