/*
 * XREFs of ??1_Creator@_Dir_enum_impl@filesystem@std@@QEAA@XZ @ 0x1806427B0
 * Callers:
 *     _std::filesystem::_Dir_enum_impl::_Initialize_dir_enum_std::filesystem::_Dir_enum_impl__::_1_::dtor$0 @ 0x1806417BA (_std--filesystem--_Dir_enum_impl--_Initialize_dir_enum_std--filesystem--_Dir_enum_i_ea_1806417BA.c)
 * Callees:
 *     __std_fs_directory_iterator_close @ 0x1802EB6EC (__std_fs_directory_iterator_close.c)
 */

void __fastcall std::filesystem::_Dir_enum_impl::_Creator::~_Creator(void **this)
{
  _std_fs_directory_iterator_close(this[4]);
  std::wstring::_Tidy_deallocate((__int64)this);
}
