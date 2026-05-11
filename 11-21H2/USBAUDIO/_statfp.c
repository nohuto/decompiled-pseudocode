/*
 * XREFs of _statfp @ 0x1C0018990
 * Callers:
 *     _raise_exc_ex @ 0x1C0018630 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C0019640 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
