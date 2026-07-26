/*
 * XREFs of ndisMiniBlockFromDriverObject @ 0x1C0118D14
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C002B0F4 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ndisMiniBlockFromDriverObject(PDRIVER_OBJECT DriverObject, char a2)
{
  PVOID result; // rax

  if ( !a2 || (result = IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E494944)) == 0LL )
  {
    result = IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E4D4944);
    if ( !result )
      return IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E494944);
  }
  return result;
}
