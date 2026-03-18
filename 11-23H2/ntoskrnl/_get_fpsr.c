/*
 * XREFs of _get_fpsr @ 0x14042B030
 * Callers:
 *     _clrfp @ 0x1403DE288 (_clrfp.c)
 *     _ctrlfp @ 0x1403DE2AC (_ctrlfp.c)
 *     _set_statfp @ 0x1403DE330 (_set_statfp.c)
 *     _statfp @ 0x1403DE358 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
