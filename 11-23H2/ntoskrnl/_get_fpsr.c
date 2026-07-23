/*
 * XREFs of _get_fpsr @ 0x14042B3C0
 * Callers:
 *     _clrfp @ 0x1403DE468 (_clrfp.c)
 *     _ctrlfp @ 0x1403DE48C (_ctrlfp.c)
 *     _set_statfp @ 0x1403DE510 (_set_statfp.c)
 *     _statfp @ 0x1403DE538 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
