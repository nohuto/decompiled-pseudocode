/*
 * XREFs of _set_fpsr @ 0x1403DE390
 * Callers:
 *     _ctrlfp @ 0x1403DE2AC (_ctrlfp.c)
 *     _set_statfp @ 0x1403DE330 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
