/*
 * XREFs of sub_1C0035BE0 @ 0x1C0035BE0
 * Callers:
 *     sub_1C00A81A4 @ 0x1C00A81A4 (sub_1C00A81A4.c)
 *     sub_1C00A85AC @ 0x1C00A85AC (sub_1C00A85AC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C0035BE0(struct _UNICODE_STRING *a1)
{
  NTSTATUS result; // eax

  if ( a1[342].Buffer )
    return IoSetDeviceInterfaceState(a1 + 342, 0);
  return result;
}
