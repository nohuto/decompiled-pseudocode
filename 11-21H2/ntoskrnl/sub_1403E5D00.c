/*
 * XREFs of sub_1403E5D00 @ 0x1403E5D00
 * Callers:
 *     _clrfp @ 0x1403E5BF4 (_clrfp.c)
 * Callees:
 *     <none>
 */

void sub_1403E5D00()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
