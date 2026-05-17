/*
 * XREFs of _guard_check_icall @ 0x180095BF4
 * Callers:
 *     _lfind @ 0x180090140 (_lfind.c)
 *     bsearch @ 0x180091F30 (bsearch.c)
 *     bsearch_s @ 0x180092030 (bsearch_s.c)
 *     qsort @ 0x1800933F0 (qsort.c)
 *     qsort_s @ 0x180093790 (qsort_s.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18008F1E0 (_guard_check_icall_nop.c)
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  _guard_check_icall_fptr();
}
