/*
 * XREFs of _statfp @ 0x180097EF0
 * Callers:
 *     _raise_exc_ex @ 0x1800978E4 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800A58F0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
