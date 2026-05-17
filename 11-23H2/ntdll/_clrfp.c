/*
 * XREFs of _clrfp @ 0x180098620
 * Callers:
 *     _raise_exc_ex @ 0x1800980E4 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x180099640 (_fclrf.c)
 *     _get_fpsr @ 0x1800A79A0 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
