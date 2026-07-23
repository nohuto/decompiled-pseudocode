/*
 * XREFs of sub_14023BA88 @ 0x14023BA88
 * Callers:
 *     sub_14023BA30 @ 0x14023BA30 (sub_14023BA30.c)
 *     sub_140308640 @ 0x140308640 (sub_140308640.c)
 *     sub_14045B3DA @ 0x14045B3DA (sub_14045B3DA.c)
 *     sub_1405740C4 @ 0x1405740C4 (sub_1405740C4.c)
 * Callees:
 *     <none>
 */

bool sub_14023BA88()
{
  char v0; // cl

  v0 = 1;
  if ( (dword_140D069C8 & 1) != 0 )
    return (dword_140D069C8 & 2) != 0;
  if ( (dword_140D068EC & 0x800) == 0 || !dword_140D06A24 )
    return 0;
  return v0;
}
