/*
 * XREFs of _statfp @ 0x1403DE538
 * Callers:
 *     _raise_exc_ex @ 0x1403DE1A0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14042B3C0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
