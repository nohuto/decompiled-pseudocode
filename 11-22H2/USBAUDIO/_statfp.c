/*
 * XREFs of _statfp @ 0x1C0019F54
 * Callers:
 *     _raise_exc_ex @ 0x1C0019BF0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C001AC00 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
