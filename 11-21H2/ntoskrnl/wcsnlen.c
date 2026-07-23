/*
 * XREFs of wcsnlen @ 0x1403E3480
 * Callers:
 *     _wcslwr_s @ 0x1403E1550 (_wcslwr_s.c)
 *     sub_14051FB70 @ 0x14051FB70 (sub_14051FB70.c)
 *     sub_14052AF40 @ 0x14052AF40 (sub_14052AF40.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_140862C90 @ 0x140862C90 (sub_140862C90.c)
 *     sub_1409BA71C @ 0x1409BA71C (sub_1409BA71C.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 *     sub_1409E1514 @ 0x1409E1514 (sub_1409E1514.c)
 *     sub_140A202A4 @ 0x140A202A4 (sub_140A202A4.c)
 *     sub_140A224B0 @ 0x140A224B0 (sub_140A224B0.c)
 * Callees:
 *     <none>
 */

size_t __cdecl wcsnlen(const wchar_t *Src, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Src )
  {
    if ( !*Src )
      break;
    ++result;
  }
  return result;
}
