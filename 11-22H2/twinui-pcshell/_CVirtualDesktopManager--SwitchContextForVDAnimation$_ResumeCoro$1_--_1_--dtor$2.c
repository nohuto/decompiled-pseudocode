/*
 * XREFs of _CVirtualDesktopManager::SwitchContextForVDAnimation$_ResumeCoro$1_::_1_::dtor$2 @ 0x180215C64
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CVirtualDesktopManager::SwitchContextForVDAnimation__ResumeCoro_1_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 112) + 56LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(*(__int64 **)(a2 + 56));
}
