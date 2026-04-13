/*
 * XREFs of ??1?$_Yarn@D@std@@QEAA@XZ @ 0x1800530B8
 * Callers:
 *     _std::locale::_Locimp::_Locimp_::_1_::dtor$1 @ 0x1800D4395 (_std--locale--_Locimp--_Locimp_--_1_--dtor$1.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$1 @ 0x1800D64D4 (_std--_Locinfo--_Locinfo_--_1_--dtor$1.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$2 @ 0x1800D64EA (_std--_Locinfo--_Locinfo_--_1_--dtor$2.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$5 @ 0x1800D652C (_std--_Locinfo--_Locinfo_--_1_--dtor$5.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$6 @ 0x1800D6542 (_std--_Locinfo--_Locinfo_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::_Yarn<char>::~_Yarn<char>()
{
  return std::_Yarn<wchar_t>::_Tidy();
}
