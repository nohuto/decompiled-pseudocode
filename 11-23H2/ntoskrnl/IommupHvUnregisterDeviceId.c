/*
 * XREFs of IommupHvUnregisterDeviceId @ 0x14052559C
 * Callers:
 *     HalpIommuCreateDevice @ 0x140829048 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140933A2C (HalpIommuDeleteDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnregisterDeviceId()
{
  return ((__int64 (*)(void))qword_140C62620)();
}
