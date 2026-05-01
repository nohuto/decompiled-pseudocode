/*
 * XREFs of ??1PendingActivationData@WindowEventDispatcher@@QEAA@XZ @ 0x1804BCB9C
 * Callers:
 *     ?Release@?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@UEAAKXZ @ 0x1804C8A10 (-Release@-$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@UEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 */

void __fastcall WindowEventDispatcher::PendingActivationData::~PendingActivationData(
        WindowEventDispatcher::PendingActivationData *this)
{
  HSTRING v2; // rcx

  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 2);
  v2 = (HSTRING)*((_QWORD *)this + 1);
  if ( v2 )
    WindowsDeleteString(v2);
}
