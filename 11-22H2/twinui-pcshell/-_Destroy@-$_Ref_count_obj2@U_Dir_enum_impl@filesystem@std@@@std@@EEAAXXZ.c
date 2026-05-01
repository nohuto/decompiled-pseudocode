/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@U_Dir_enum_impl@filesystem@std@@@std@@EEAAXXZ @ 0x1806452F0
 * Callers:
 *     <none>
 * Callees:
 *     __std_fs_directory_iterator_close @ 0x1802EB6EC (__std_fs_directory_iterator_close.c)
 */

__int64 __fastcall std::_Ref_count_obj2<std::filesystem::_Dir_enum_impl>::_Destroy(__int64 a1)
{
  _std_fs_directory_iterator_close(*(void **)(a1 + 80));
  return std::wstring::_Tidy_deallocate(a1 + 48);
}
