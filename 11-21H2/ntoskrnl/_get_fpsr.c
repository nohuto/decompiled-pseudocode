/*
 * XREFs of _get_fpsr @ 0x14042B9F0
 * Callers:
 *     _clrfp @ 0x1403E5BF4 (_clrfp.c)
 *     _ctrlfp @ 0x1403E5C18 (_ctrlfp.c)
 *     sub_1403E5C9C @ 0x1403E5C9C (sub_1403E5C9C.c)
 *     _statfp @ 0x1403E5CC4 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
