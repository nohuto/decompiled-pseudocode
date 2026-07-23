/*
 * XREFs of sub_14042A590 @ 0x14042A590
 * Callers:
 *     bsearch @ 0x1403E1840 (bsearch.c)
 *     bsearch_s @ 0x1403E1950 (bsearch_s.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     qsort_s @ 0x1403E2250 (qsort_s.c)
 *     sub_1403EBEB0 @ 0x1403EBEB0 (sub_1403EBEB0.c)
 *     sub_1403ECE50 @ 0x1403ECE50 (sub_1403ECE50.c)
 *     sub_1403ECF30 @ 0x1403ECF30 (sub_1403ECF30.c)
 *     sub_1403F93A0 @ 0x1403F93A0 (sub_1403F93A0.c)
 *     sub_140AD23C0 @ 0x140AD23C0 (sub_140AD23C0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14042A590(ULONG_PTR a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // r10

  if ( (a1 & 0x8000000000000000uLL) == 0LL )
    goto LABEL_8;
  if ( !qword_140E01900 )
    return;
  v1 = *(_QWORD *)(qword_140E01900 + 8 * (a1 >> 9));
  v2 = a1 >> 3;
  if ( (a1 & 0xF) == 0 )
  {
    if ( _bittest64(&v1, v2) )
      return;
LABEL_8:
    sub_14042A530(a1);
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
    goto LABEL_8;
}
