/*
 * XREFs of _set_statfp @ 0x1C0019F2C
 * Callers:
 *     _exception_enabled @ 0x1C00197D4 (_exception_enabled.c)
 * Callees:
 *     _set_fpsr @ 0x1C0019F80 (_set_fpsr.c)
 *     _get_fpsr @ 0x1C001AC00 (_get_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}
