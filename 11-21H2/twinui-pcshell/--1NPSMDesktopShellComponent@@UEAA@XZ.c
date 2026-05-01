/*
 * XREFs of ??1NPSMDesktopShellComponent@@UEAA@XZ @ 0x1800CC6F8
 * Callers:
 *     ??1?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ @ 0x1800CC760 (--1-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_NPSMDesktopShellComponent___::heap_implements_wil::details::module_count_wrapper_NPSMDesktopShellComponent____::_1_::dtor$1 @ 0x18021C63F (_winrt--impl--heap_implements_wil--details--module_count_wrapper_NPSMDesktopShellComponent___--h.c)
 *     ??_ENPSMDesktopShellComponent@@UEAAPEAXI@Z @ 0x1805DEFDC (--_ENPSMDesktopShellComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ @ 0x1800AA928 (--1-$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall NPSMDesktopShellComponent::~NPSMDesktopShellComponent(NPSMDesktopShellComponent *this)
{
  char *v2; // rbx

  v2 = (char *)this + 160;
  SmartCookie::Unregister((NPSMDesktopShellComponent *)((char *)this + 160));
  wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((__int64)v2);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 19);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 18);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  winrt::immersive_shell_component::~immersive_shell_component((NPSMDesktopShellComponent *)((char *)this + 8));
}
