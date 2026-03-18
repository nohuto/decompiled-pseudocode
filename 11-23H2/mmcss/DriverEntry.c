/*
 * XREFs of DriverEntry @ 0x1C000F200
 * Callers:
 *     GsDriverEntry @ 0x1C000F010 (GsDriverEntry.c)
 * Callees:
 *     wil_UninitializeFeatureStaging @ 0x1C000B008 (wil_UninitializeFeatureStaging.c)
 *     CsTerminate @ 0x1C000D8D8 (CsTerminate.c)
 *     wil_InitializeFeatureStaging @ 0x1C000F078 (wil_InitializeFeatureStaging.c)
 *     CsInitialize @ 0x1C000F240 (CsInitialize.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx

  wil_InitializeFeatureStaging();
  result = CsInitialize(DriverObject);
  v4 = result;
  if ( result < 0 )
  {
    CsTerminate();
    wil_UninitializeFeatureStaging();
    return v4;
  }
  return result;
}
