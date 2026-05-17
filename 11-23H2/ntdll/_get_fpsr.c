/*
 * XREFs of _get_fpsr @ 0x1800A79A0
 * Callers:
 *     _control87 @ 0x1800971CC (_control87.c)
 *     _clrfp @ 0x180098620 (_clrfp.c)
 *     _ctrlfp @ 0x180098644 (_ctrlfp.c)
 *     _set_statfp @ 0x1800986C8 (_set_statfp.c)
 *     _statfp @ 0x1800986F0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
