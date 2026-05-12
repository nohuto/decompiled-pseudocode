/*
 * XREFs of PmDriverReinitialization @ 0x1C001DDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PmDriverReinitialization(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  *((_BYTE *)PmControlObject->DeviceExtension + 165) = 0;
}
