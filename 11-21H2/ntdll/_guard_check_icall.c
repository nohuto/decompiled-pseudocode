/*
 * XREFs of _guard_check_icall @ 0x18009A30C
 * Callers:
 *     _lfind @ 0x180094980 (_lfind.c)
 *     bsearch @ 0x180096740 (bsearch.c)
 *     bsearch_s @ 0x180096840 (bsearch_s.c)
 *     qsort @ 0x180097BF0 (qsort.c)
 *     qsort_s @ 0x180097F90 (qsort_s.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180093A90 (_guard_check_icall_nop.c)
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  _guard_check_icall_fptr();
}
