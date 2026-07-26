/*
 * XREFs of ?LoadDriver@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00D0330
 * Callers:
 *     ?Reference@DriverService@@QEAAJXZ @ 0x1C0141FC4 (-Reference@DriverService@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall LoadDriver(struct _UNICODE_STRING *a1)
{
  return ZwLoadDriver(a1);
}
