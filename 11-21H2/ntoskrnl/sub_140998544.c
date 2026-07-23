/*
 * XREFs of sub_140998544 @ 0x140998544
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_14099596C @ 0x14099596C (sub_14099596C.c)
 * Callees:
 *     sub_1409897C4 @ 0x1409897C4 (sub_1409897C4.c)
 */

bool sub_140998544()
{
  char v0; // bl

  v0 = 0;
  if ( !byte_140C1F9E0 && dword_140C23318 == 2 )
    return sub_1409897C4() == 0;
  return v0;
}
