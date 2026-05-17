/*
 * XREFs of _guard_check_icall @ 0x1800953F4
 * Callers:
 *     _lfind @ 0x18008F940 (_lfind.c)
 *     bsearch @ 0x180091730 (bsearch.c)
 *     bsearch_s @ 0x180091830 (bsearch_s.c)
 *     qsort @ 0x180092BF0 (qsort.c)
 *     qsort_s @ 0x180092F90 (qsort_s.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18008E9E0 (_guard_check_icall_nop.c)
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  _guard_check_icall_fptr();
}
