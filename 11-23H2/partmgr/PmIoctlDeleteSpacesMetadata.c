/*
 * XREFs of PmIoctlDeleteSpacesMetadata @ 0x1C001F1DC
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmDeleteSpacesMetadata @ 0x1C001F13C (PmDeleteSpacesMetadata.c)
 */

__int64 __fastcall PmIoctlDeleteSpacesMetadata(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  struct _KMUTANT *v3; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  KeWaitForSingleObject((PVOID)(v1 + 56), Executive, 0, 0, 0LL);
  v2 = PmDeleteSpacesMetadata((struct _DEVICE_EXTENSION *)v1);
  v3 = (struct _KMUTANT *)(v1 + 56);
  LODWORD(v1) = v2;
  KeReleaseMutex(v3, 0);
  return (unsigned int)v1;
}
