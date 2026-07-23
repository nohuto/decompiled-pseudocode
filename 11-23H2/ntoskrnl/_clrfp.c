/*
 * XREFs of _clrfp @ 0x1403DE468
 * Callers:
 *     _raise_exc_ex @ 0x1403DE1A0 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1403DE580 (_fclrf.c)
 *     _get_fpsr @ 0x14042B3C0 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
