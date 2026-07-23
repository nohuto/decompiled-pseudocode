/*
 * XREFs of _fclrf @ 0x1403DE580
 * Callers:
 *     _clrfp @ 0x1403DE468 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
