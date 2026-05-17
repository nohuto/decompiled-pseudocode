/*
 * XREFs of _fclrf @ 0x180098E40
 * Callers:
 *     _clrfp @ 0x180097E20 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
