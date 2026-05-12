/*
 * XREFs of sub_1C0024588 @ 0x1C0024588
 * Callers:
 *     sub_1C00A0174 @ 0x1C00A0174 (sub_1C00A0174.c)
 *     sub_1C00A034C @ 0x1C00A034C (sub_1C00A034C.c)
 *     sub_1C00B5078 @ 0x1C00B5078 (sub_1C00B5078.c)
 *     sub_1C00B5114 @ 0x1C00B5114 (sub_1C00B5114.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1C0024588(_QWORD *a1)
{
  while ( 1 )
  {
    if ( a1 >= qword_1C0092DC0 )
      return 0LL;
    if ( *a1 )
      break;
    ++a1;
  }
  return a1;
}
