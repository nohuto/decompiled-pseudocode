/*
 * XREFs of _set_fpsr @ 0x180098E30
 * Callers:
 *     _control87 @ 0x1800969CC (_control87.c)
 *     _ctrlfp @ 0x180097E44 (_ctrlfp.c)
 *     _set_statfp @ 0x180097EC8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
