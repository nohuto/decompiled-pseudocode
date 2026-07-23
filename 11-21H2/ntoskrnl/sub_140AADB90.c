/*
 * XREFs of sub_140AADB90 @ 0x140AADB90
 * Callers:
 *     sub_140A4AF0C @ 0x140A4AF0C (sub_140A4AF0C.c)
 *     sub_140A4C960 @ 0x140A4C960 (sub_140A4C960.c)
 *     sub_140B56D04 @ 0x140B56D04 (sub_140B56D04.c)
 * Callees:
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 */

__int64 __fastcall sub_140AADB90(__int64 a1, unsigned int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return sub_140AAD490(a1, a2);
  else
    return 3221225473LL;
}
