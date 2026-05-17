/*
 * XREFs of _clrfp @ 0x180097E20
 * Callers:
 *     _raise_exc_ex @ 0x1800978E4 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x180098E40 (_fclrf.c)
 *     _get_fpsr @ 0x1800A58F0 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
