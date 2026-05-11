/*
 * XREFs of _clrfp @ 0x1C00188C0
 * Callers:
 *     _raise_exc_ex @ 0x1C0018630 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1C00189D0 (_fclrf.c)
 *     _get_fpsr @ 0x1C0019640 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
