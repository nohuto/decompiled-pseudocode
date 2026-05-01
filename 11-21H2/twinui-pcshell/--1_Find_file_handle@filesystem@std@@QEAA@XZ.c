/*
 * XREFs of ??1_Find_file_handle@filesystem@std@@QEAA@XZ @ 0x1805848AC
 * Callers:
 *     _std::filesystem::_Dir_enum_impl::_Initialize_dir_enum_std::filesystem::_Dir_enum_impl__::_1_::dtor$3 @ 0x180582F3A (_std--filesystem--_Dir_enum_impl--_Initialize_dir_enum_std--filesystem--_Dir_enum_i_ea_180582F3A.c)
 *     _std::filesystem::_Dir_enum_impl::_Dir_enum_impl_::_1_::dtor$1 @ 0x1805847A4 (_std--filesystem--_Dir_enum_impl--_Dir_enum_impl_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::filesystem::_Find_file_handle::~_Find_file_handle(std::filesystem::_Find_file_handle *this)
{
  _std_fs_directory_iterator_close(*(_QWORD *)this);
}
