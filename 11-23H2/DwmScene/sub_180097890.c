/*
 * XREFs of sub_180097890 @ 0x180097890
 * Callers:
 *     sub_1800970DC @ 0x1800970DC (sub_1800970DC.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_1800118B0 @ 0x1800118B0 (sub_1800118B0.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 */

__int64 __fastcall sub_180097890(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v3 = sub_1800118B0(a1, a2);
  if ( *a1 )
  {
    sub_18001203C(*a1, a1[1]);
    sub_1800100E8((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_18007E604(a1, v3);
}
