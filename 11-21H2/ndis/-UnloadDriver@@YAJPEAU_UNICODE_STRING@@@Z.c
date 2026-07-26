/*
 * XREFs of ?UnloadDriver@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00CB5F4
 * Callers:
 *     ?Close@DriverService@@QEAAXXZ @ 0x1C0135F54 (-Close@DriverService@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall UnloadDriver(struct _UNICODE_STRING *a1)
{
  return ZwUnloadDriver(a1);
}
