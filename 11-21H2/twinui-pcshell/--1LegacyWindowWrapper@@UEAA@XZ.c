/*
 * XREFs of ??1LegacyWindowWrapper@@UEAA@XZ @ 0x1803FB1C0
 * Callers:
 *     ??_ELegacyWindowWrapper@@UEAAPEAXI@Z @ 0x1803FB240 (--_ELegacyWindowWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ @ 0x180407764 (--1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ.c)
 */

void __fastcall LegacyWindowWrapper::~LegacyWindowWrapper(LegacyWindowWrapper *this)
{
  LegacyUwpWindowWrapper::NavigationLevelHelper::~NavigationLevelHelper((LegacyWindowWrapper *)((char *)this + 656));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 78);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>((__int64)this);
}
