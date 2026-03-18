/*
 * XREFs of wcschr @ 0x1C00D5E68
 * Callers:
 *     ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C0069A20 (-ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0072CC4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 *     ParseWindowStation @ 0x1C0098FC0 (ParseWindowStation.c)
 *     InitCreateUserSubsystem @ 0x1C02E32B8 (InitCreateUserSubsystem.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
