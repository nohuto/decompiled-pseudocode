/*
 * XREFs of sub_1402A4660 @ 0x1402A4660
 * Callers:
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FBC90 @ 0x1402FBC90 (sub_1402FBC90.c)
 *     sub_140383ABC @ 0x140383ABC (sub_140383ABC.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 * Callees:
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402A4660(_DWORD *P)
{
  if ( P )
  {
    sub_14028AB90(P);
    ExFreePoolWithTag(P, 0);
  }
}
