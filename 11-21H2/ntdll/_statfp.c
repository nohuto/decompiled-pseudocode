/*
 * XREFs of _statfp @ 0x18009CDFC
 * Callers:
 *     _raise_exc_ex @ 0x18009C7F4 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800AAAF0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
