/*
 * XREFs of ??1bad_cast@std@@UEAA@XZ @ 0x1802D6B80
 * Callers:
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$0 @ 0x18057E98A (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$0.c)
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$0_0 @ 0x18057EAA2 (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$0_0.c)
 *     _std::filesystem::_Throw_fs_error_::_1_::dtor$4 @ 0x180587909 (_std--filesystem--_Throw_fs_error_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
