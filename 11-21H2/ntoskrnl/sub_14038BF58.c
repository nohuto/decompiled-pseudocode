/*
 * XREFs of sub_14038BF58 @ 0x14038BF58
 * Callers:
 *     sub_14038BB00 @ 0x14038BB00 (sub_14038BB00.c)
 *     sub_14038BCE0 @ 0x14038BCE0 (sub_14038BCE0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14038BF58(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (DWORD1(xmmword_140C22740) & 0x800000) != 0 && *(_QWORD *)(a1 - 80) && (*(_DWORD *)(a1 + 600) & 0x10000) != 0 )
    return (*(_DWORD *)(a1 + 600) & 0x20000) == 0;
  return v1;
}
