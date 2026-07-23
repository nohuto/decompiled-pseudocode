/*
 * XREFs of sub_140290FCC @ 0x140290FCC
 * Callers:
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 * Callees:
 *     sub_1402F8020 @ 0x1402F8020 (sub_1402F8020.c)
 *     sub_14039F200 @ 0x14039F200 (sub_14039F200.c)
 */

void sub_140290FCC()
{
  __int64 v0; // rcx
  char v1; // dl

  if ( (dword_140D068EC & 0x8000) == 0 )
  {
    if ( (unsigned __int8)sub_1402F8020() )
    {
      v1 = *(_BYTE *)(v0 + 195);
      if ( v1 < 16 && (*(_DWORD *)(v0 + 120) & 8) == 0 && v1 > 0 )
        sub_14039F200(v0);
    }
  }
}
