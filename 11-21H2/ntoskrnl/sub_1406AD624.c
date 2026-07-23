/*
 * XREFs of sub_1406AD624 @ 0x1406AD624
 * Callers:
 *     sub_1402361E4 @ 0x1402361E4 (sub_1402361E4.c)
 *     PsWow64IsMachineSupported @ 0x1406AD5D0 (PsWow64IsMachineSupported.c)
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 *     sub_1407111FC @ 0x1407111FC (sub_1407111FC.c)
 *     sub_140927394 @ 0x140927394 (sub_140927394.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 *     sub_140B24D94 @ 0x140B24D94 (sub_140B24D94.c)
 *     sub_140B30EE0 @ 0x140B30EE0 (sub_140B30EE0.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall sub_1406AD624(int a1)
{
  _UNKNOWN **v1; // rax

  v1 = off_140D3B180[a1];
  if ( v1 && v1[4] )
    return v1 + 1;
  else
    return 0LL;
}
