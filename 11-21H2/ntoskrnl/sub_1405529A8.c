/*
 * XREFs of sub_1405529A8 @ 0x1405529A8
 * Callers:
 *     sub_14054A4B0 @ 0x14054A4B0 (sub_14054A4B0.c)
 *     sub_14054A5C0 @ 0x14054A5C0 (sub_14054A5C0.c)
 *     sub_14054A610 @ 0x14054A610 (sub_14054A610.c)
 *     sub_14054A840 @ 0x14054A840 (sub_14054A840.c)
 *     sub_140567038 @ 0x140567038 (sub_140567038.c)
 * Callees:
 *     <none>
 */

char sub_1405529A8()
{
  char result; // al

  result = qword_140D00A80;
  if ( qword_140D00A80 )
    return (*(_DWORD *)(qword_140D00A80 + 1368) & 8) != 0;
  return result;
}
