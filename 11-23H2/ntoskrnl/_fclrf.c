/*
 * XREFs of _fclrf @ 0x1403DE3A0
 * Callers:
 *     _clrfp @ 0x1403DE288 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
