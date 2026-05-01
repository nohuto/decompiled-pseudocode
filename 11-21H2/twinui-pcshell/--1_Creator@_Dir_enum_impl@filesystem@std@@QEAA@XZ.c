/*
 * XREFs of ??1_Creator@_Dir_enum_impl@filesystem@std@@QEAA@XZ @ 0x180584884
 * Callers:
 *     _std::filesystem::_Dir_enum_impl::_Initialize_dir_enum_std::filesystem::_Dir_enum_impl__::_1_::dtor$0 @ 0x180582F4A (_std--filesystem--_Dir_enum_impl--_Initialize_dir_enum_std--filesystem--_Dir_enum_i_ea_180582F4A.c)
 * Callees:
 *     __std_fs_directory_iterator_close @ 0x1805E3470 (__std_fs_directory_iterator_close.c)
 */

void __fastcall std::filesystem::_Dir_enum_impl::_Creator::~_Creator(std::filesystem::_Dir_enum_impl::_Creator *this)
{
  _std_fs_directory_iterator_close(*((_QWORD *)this + 4));
  std::wstring::_Tidy_deallocate((__int64)this);
}
