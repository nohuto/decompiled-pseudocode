/*
 * XREFs of _get_fpsr @ 0x1800AAAF0
 * Callers:
 *     _control87 @ 0x18009B8B0 (_control87.c)
 *     _clrfp @ 0x18009CD2C (_clrfp.c)
 *     _ctrlfp @ 0x18009CD50 (_ctrlfp.c)
 *     _set_statfp @ 0x18009CDD4 (_set_statfp.c)
 *     _statfp @ 0x18009CDFC (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
