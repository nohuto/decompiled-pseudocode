/*
 * XREFs of sub_140808810 @ 0x140808810
 * Callers:
 *     sub_140819A74 @ 0x140819A74 (sub_140819A74.c)
 *     sub_140819BD0 @ 0x140819BD0 (sub_140819BD0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140808810(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 6) )
    return *(_BYTE *)(a1 + 8) != 0;
  return v1;
}
