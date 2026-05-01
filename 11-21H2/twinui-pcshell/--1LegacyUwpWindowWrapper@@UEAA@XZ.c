/*
 * XREFs of ??1LegacyUwpWindowWrapper@@UEAA@XZ @ 0x180403FCC
 * Callers:
 *     ??_ELegacyUwpWindowWrapper@@UEAAPEAXI@Z @ 0x1804041C0 (--_ELegacyUwpWindowWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ @ 0x180407764 (--1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ.c)
 */

void __fastcall LegacyUwpWindowWrapper::~LegacyUwpWindowWrapper(LegacyUwpWindowWrapper *this)
{
  LegacyUwpWindowWrapper::NavigationLevelHelper::~NavigationLevelHelper((LegacyUwpWindowWrapper *)((char *)this + 632));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 77);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>((__int64)this);
}
