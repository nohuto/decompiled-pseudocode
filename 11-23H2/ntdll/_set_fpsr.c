/*
 * XREFs of _set_fpsr @ 0x180099630
 * Callers:
 *     _control87 @ 0x1800971CC (_control87.c)
 *     _ctrlfp @ 0x180098644 (_ctrlfp.c)
 *     _set_statfp @ 0x1800986C8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
