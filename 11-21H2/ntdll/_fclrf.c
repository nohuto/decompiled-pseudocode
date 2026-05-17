/*
 * XREFs of _fclrf @ 0x18009DD00
 * Callers:
 *     _clrfp @ 0x18009CD2C (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
