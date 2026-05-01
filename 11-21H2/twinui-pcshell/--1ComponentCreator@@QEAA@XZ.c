/*
 * XREFs of ??1ComponentCreator@@QEAA@XZ @ 0x1803AFCB8
 * Callers:
 *     _ImmersiveShellComponentsConfiguration::ImmersiveShellComponentsConfiguration_::_1_::dtor$4 @ 0x1803AFB7C (_ImmersiveShellComponentsConfiguration--ImmersiveShellComponentsConfiguration_--_1_--dtor$4.c)
 *     ??1CImmersiveShellCreationBehavior@@EEAA@XZ @ 0x1803AFC4C (--1CImmersiveShellCreationBehavior@@EEAA@XZ.c)
 *     ??1ImmersiveShellComponentsConfiguration@@UEAA@XZ @ 0x1803AFCF0 (--1ImmersiveShellComponentsConfiguration@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall ComponentCreator::~ComponentCreator(ComponentCreator *this)
{
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)this + 2);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)this + 1);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)this);
}
