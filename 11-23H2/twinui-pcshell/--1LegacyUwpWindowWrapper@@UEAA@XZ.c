/*
 * XREFs of ??1LegacyUwpWindowWrapper@@UEAA@XZ @ 0x1804E108C
 * Callers:
 *     ??_ELegacyUwpWindowWrapper@@UEAAPEAXI@Z @ 0x1804E1110 (--_ELegacyUwpWindowWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ @ 0x1804E2724 (--1NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAA@XZ.c)
 */

void __fastcall LegacyUwpWindowWrapper::~LegacyUwpWindowWrapper(LegacyUwpWindowWrapper *this)
{
  __int64 v2; // rdx

  LegacyUwpWindowWrapper::NavigationLevelHelper::~NavigationLevelHelper((LegacyUwpWindowWrapper *)((char *)this + 648));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 79);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,UwpWindowWrapperBase,ILegacyViewWrapper>(
    (__int64)this,
    v2);
}
