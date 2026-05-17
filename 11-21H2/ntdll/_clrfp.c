/*
 * XREFs of _clrfp @ 0x18009CD2C
 * Callers:
 *     _raise_exc_ex @ 0x18009C7F4 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x18009DD00 (_fclrf.c)
 *     _get_fpsr @ 0x1800AAAF0 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
