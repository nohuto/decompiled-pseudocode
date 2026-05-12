/*
 * XREFs of sub_1C0035B0C @ 0x1C0035B0C
 * Callers:
 *     sub_1C00A81A4 @ 0x1C00A81A4 (sub_1C00A81A4.c)
 *     sub_1C00A85AC @ 0x1C00A85AC (sub_1C00A85AC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C0035B0C(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 5952) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5944), 0);
  return result;
}
