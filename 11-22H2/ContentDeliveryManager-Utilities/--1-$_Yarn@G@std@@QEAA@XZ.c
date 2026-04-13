/*
 * XREFs of ??1?$_Yarn@G@std@@QEAA@XZ @ 0x180053114
 * Callers:
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$3 @ 0x1800D6550 (_std--_Locinfo--_Locinfo_--_1_--dtor$3.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$4 @ 0x1800D6566 (_std--_Locinfo--_Locinfo_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Yarn<unsigned short>::~_Yarn<unsigned short>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    free(v2);
  *a1 = 0LL;
}
