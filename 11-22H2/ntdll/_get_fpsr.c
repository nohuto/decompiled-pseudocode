/*
 * XREFs of _get_fpsr @ 0x1800A58F0
 * Callers:
 *     _control87 @ 0x1800969CC (_control87.c)
 *     _clrfp @ 0x180097E20 (_clrfp.c)
 *     _ctrlfp @ 0x180097E44 (_ctrlfp.c)
 *     _set_statfp @ 0x180097EC8 (_set_statfp.c)
 *     _statfp @ 0x180097EF0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
