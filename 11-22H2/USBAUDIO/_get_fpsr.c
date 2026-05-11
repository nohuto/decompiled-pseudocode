/*
 * XREFs of _get_fpsr @ 0x1C001AC00
 * Callers:
 *     _clrfp @ 0x1C0019E84 (_clrfp.c)
 *     _ctrlfp @ 0x1C0019EA8 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0019F2C (_set_statfp.c)
 *     _statfp @ 0x1C0019F54 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
