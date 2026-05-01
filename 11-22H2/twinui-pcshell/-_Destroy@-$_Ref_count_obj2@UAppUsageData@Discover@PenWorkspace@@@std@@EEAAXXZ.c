/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@UAppUsageData@Discover@PenWorkspace@@@std@@EEAAXXZ @ 0x1801BC950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<PenWorkspace::Discover::AppUsageData>::_Destroy(__int64 a1)
{
  return std::wstring::_Tidy_deallocate(a1 + 16);
}
