/*
 * XREFs of _set_fpsr @ 0x18009DCF0
 * Callers:
 *     _control87 @ 0x18009B8B0 (_control87.c)
 *     _ctrlfp @ 0x18009CD50 (_ctrlfp.c)
 *     _set_statfp @ 0x18009CDD4 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
