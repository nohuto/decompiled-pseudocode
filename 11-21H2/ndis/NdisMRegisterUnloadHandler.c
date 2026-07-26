/*
 * XREFs of NdisMRegisterUnloadHandler @ 0x1C005AF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMRegisterUnloadHandler(NDIS_HANDLE NdisWrapperHandle, PDRIVER_UNLOAD UnloadHandler)
{
  _QWORD *DriverObjectExtension; // rax
  struct _DRIVER_OBJECT *v4; // rcx

  DriverObjectExtension = NdisWrapperHandle;
  v4 = *(struct _DRIVER_OBJECT **)NdisWrapperHandle;
  if ( v4 )
    DriverObjectExtension = IoGetDriverObjectExtension(v4, (PVOID)0x4E4D4944);
  if ( *((_BYTE *)DriverObjectExtension + 24) < 6u )
    DriverObjectExtension[13] = UnloadHandler;
}
