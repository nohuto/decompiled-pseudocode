/*
 * XREFs of _statfp @ 0x1403DE358
 * Callers:
 *     _raise_exc_ex @ 0x1403DDFC0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14042B030 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
