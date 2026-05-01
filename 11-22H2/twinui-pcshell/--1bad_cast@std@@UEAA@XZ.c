/*
 * XREFs of ??1bad_cast@std@@UEAA@XZ @ 0x18038D2C8
 * Callers:
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$0 @ 0x1803D44CA (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$0.c)
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$0_0 @ 0x1803D45EA (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$0_0.c)
 *     _std::filesystem::_Throw_fs_error_::_1_::dtor$4 @ 0x180645639 (_std--filesystem--_Throw_fs_error_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
