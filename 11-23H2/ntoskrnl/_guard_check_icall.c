/*
 * XREFs of _guard_check_icall @ 0x140429F60
 * Callers:
 *     bsearch @ 0x1403D9FE0 (bsearch.c)
 *     bsearch_s @ 0x1403DA0F0 (bsearch_s.c)
 *     qsort @ 0x1403DA610 (qsort.c)
 *     qsort_s @ 0x1403DA9F0 (qsort_s.c)
 *     sub_1403E4750 @ 0x1403E4750 (sub_1403E4750.c)
 *     sub_1403E5730 @ 0x1403E5730 (sub_1403E5730.c)
 *     sub_1403E5810 @ 0x1403E5810 (sub_1403E5810.c)
 *     sub_1403F1AA0 @ 0x1403F1AA0 (sub_1403F1AA0.c)
 *     KeGuardCheckICall @ 0x140B137B0 (KeGuardCheckICall.c)
 * Callees:
 *     <none>
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  __int64 v1; // rdx
  uintptr_t v2; // r10
  unsigned __int64 v3; // r10

  if ( (Target & 0x8000000000000000uLL) == 0LL )
    goto LABEL_8;
  if ( !guard_icall_bitmap )
    return;
  v1 = *(_QWORD *)(guard_icall_bitmap + 8 * (Target >> 9));
  v2 = Target >> 3;
  if ( (Target & 0xF) == 0 )
  {
    if ( _bittest64(&v1, v2) )
      return;
LABEL_8:
    guard_icall_bugcheck(Target);
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
    goto LABEL_8;
}
