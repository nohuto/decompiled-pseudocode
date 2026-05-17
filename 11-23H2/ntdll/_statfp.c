/*
 * XREFs of _statfp @ 0x1800986F0
 * Callers:
 *     _raise_exc_ex @ 0x1800980E4 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800A79A0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
