/*
 * XREFs of ??1?$_Yarn@D@std@@QEAA@XZ @ 0x180057BBC
 * Callers:
 *     _std::locale::_Locimp::_Locimp_::_1_::dtor$1 @ 0x1800ED785 (_std--locale--_Locimp--_Locimp_--_1_--dtor$1.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$1 @ 0x1800EF74C (_std--_Locinfo--_Locinfo_--_1_--dtor$1.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$2 @ 0x1800EF762 (_std--_Locinfo--_Locinfo_--_1_--dtor$2.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$3 @ 0x1800EF778 (_std--_Locinfo--_Locinfo_--_1_--dtor$3.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$4 @ 0x1800EF78E (_std--_Locinfo--_Locinfo_--_1_--dtor$4.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$5 @ 0x1800EF7A4 (_std--_Locinfo--_Locinfo_--_1_--dtor$5.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$6 @ 0x1800EF7BA (_std--_Locinfo--_Locinfo_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Yarn<char>::~_Yarn<char>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    free(v2);
  *a1 = 0LL;
}
