/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@U_Dir_enum_impl@filesystem@std@@@std@@EEAAXXZ @ 0x1805874D0
 * Callers:
 *     <none>
 * Callees:
 *     __std_fs_directory_iterator_close @ 0x1805E3470 (__std_fs_directory_iterator_close.c)
 */

__int64 __fastcall std::_Ref_count_obj2<std::filesystem::_Dir_enum_impl>::_Destroy(__int64 a1)
{
  _std_fs_directory_iterator_close(*(_QWORD *)(a1 + 80));
  return std::wstring::_Tidy_deallocate(a1 + 48);
}
