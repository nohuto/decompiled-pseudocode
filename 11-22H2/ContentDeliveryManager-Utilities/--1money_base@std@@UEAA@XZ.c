/*
 * XREFs of ??1money_base@std@@UEAA@XZ @ 0x180010440
 * Callers:
 *     _std::moneypunct_char_0_::_Getcat_::_1_::dtor$3 @ 0x1800D45A2 (_std--moneypunct_char_0_--_Getcat_--_1_--dtor$3.c)
 *     _std::locale::_Locimp::_Makewloc_::_1_::dtor$59 @ 0x1800D4863 (_std--locale--_Locimp--_Makewloc_--_1_--dtor$59.c)
 *     _std::locale::_Locimp::_Makexloc_::_1_::dtor$36 @ 0x1800D4ACA (_std--locale--_Locimp--_Makexloc_--_1_--dtor$36.c)
 * Callees:
 *     <none>
 */

void __fastcall std::money_base::~money_base(std::money_base *this)
{
  *(_QWORD *)this = &std::_Facet_base::`vftable';
}
