/*
 * XREFs of ?UnloadDriver@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00D034C
 * Callers:
 *     ?Close@DriverService@@QEAAXXZ @ 0x1C0141DB0 (-Close@DriverService@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall UnloadDriver(struct _UNICODE_STRING *a1)
{
  return ZwUnloadDriver(a1);
}
