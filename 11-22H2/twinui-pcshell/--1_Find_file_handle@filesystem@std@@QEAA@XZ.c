/*
 * XREFs of ??1_Find_file_handle@filesystem@std@@QEAA@XZ @ 0x1806427D8
 * Callers:
 *     _std::filesystem::_Dir_enum_impl::_Initialize_dir_enum_std::filesystem::_Dir_enum_impl__::_1_::dtor$3 @ 0x1806417AA (_std--filesystem--_Dir_enum_impl--_Initialize_dir_enum_std--filesystem--_Dir_enum_i_ea_1806417AA.c)
 *     _std::filesystem::_Dir_enum_impl::_Dir_enum_impl_::_1_::dtor$1 @ 0x180642674 (_std--filesystem--_Dir_enum_impl--_Dir_enum_impl_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::filesystem::_Find_file_handle::~_Find_file_handle(void **this)
{
  _std_fs_directory_iterator_close(*this);
}
