/*
 * XREFs of sub_1402D8A7C @ 0x1402D8A7C
 * Callers:
 *     sub_1405FEF58 @ 0x1405FEF58 (sub_1405FEF58.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 * Callees:
 *     sub_1402D8764 @ 0x1402D8764 (sub_1402D8764.c)
 *     sub_1405FECBC @ 0x1405FECBC (sub_1405FECBC.c)
 */

bool __fastcall sub_1402D8A7C(struct _DRIVER_OBJECT *a1)
{
  bool result; // al

  result = sub_1402D8764(a1);
  if ( result )
  {
    sub_1405FECBC(a1);
    return 1;
  }
  return result;
}
