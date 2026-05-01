/*
 * XREFs of ??1NPSMDesktopShellComponent@@UEAA@XZ @ 0x180142E74
 * Callers:
 *     ??1?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ @ 0x1801BA0DC (--1-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_NPSMDesktopShellComponent___::heap_implements_wil::details::module_count_wrapper_NPSMDesktopShellComponent____::_1_::dtor$1 @ 0x1802B5998 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_NPSMDesktopShellComponent___--h.c)
 *     ??_ENPSMDesktopShellComponent@@UEAAPEAXI@Z @ 0x1806ED998 (--_ENPSMDesktopShellComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NPSMDesktopShellComponent::~NPSMDesktopShellComponent(NPSMDesktopShellComponent *this)
{
  char *v2; // rbx

  v2 = (char *)this + 160;
  SmartCookie::Unregister((NPSMDesktopShellComponent *)((char *)this + 160));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>(v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 18);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  winrt::immersive_shell_component::~immersive_shell_component((NPSMDesktopShellComponent *)((char *)this + 8));
}
