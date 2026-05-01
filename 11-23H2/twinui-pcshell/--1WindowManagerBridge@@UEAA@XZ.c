/*
 * XREFs of ??1WindowManagerBridge@@UEAA@XZ @ 0x1804BCE94
 * Callers:
 *     ??_EWindowManagerBridge@@UEAAPEAXI@Z @ 0x1804BD710 (--_EWindowManagerBridge@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall WindowManagerBridge::~WindowManagerBridge(WindowManagerBridge *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  wil::details *v4; // rcx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 35);
  v3 = (wil::details *)*((_QWORD *)this + 34);
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  v4 = (wil::details *)*((_QWORD *)this + 33);
  if ( v4 )
    wil::details::CloseHandle(v4, v2);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 6);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 4);
}
