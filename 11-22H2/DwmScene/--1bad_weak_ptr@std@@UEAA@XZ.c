/*
 * XREFs of ??1bad_weak_ptr@std@@UEAA@XZ @ 0x180010FBC
 * Callers:
 *     _std::_Throw_bad_weak_ptr_::_1_::dtor$0 @ 0x1800E3C5F (_std--_Throw_bad_weak_ptr_--_1_--dtor$0.c)
 *     _Spectre::Utils::SpectreException::SpectreException_::_1_::dtor$0 @ 0x1800E45F9 (_Spectre--Utils--SpectreException--SpectreException_--_1_--dtor$0.c)
 *     _Spectre::Utils::SpectreException::SpectreException_::_1_::dtor$0_0 @ 0x1800E4727 (_Spectre--Utils--SpectreException--SpectreException_--_1_--dtor$0_0.c)
 *     _std::_Throw_system_error_::_1_::dtor$0 @ 0x1800E4DCE (_std--_Throw_system_error_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::bad_weak_ptr::~bad_weak_ptr(std::bad_weak_ptr *this)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
}
