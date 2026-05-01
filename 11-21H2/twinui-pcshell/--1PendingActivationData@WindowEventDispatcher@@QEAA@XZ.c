/*
 * XREFs of ??1PendingActivationData@WindowEventDispatcher@@QEAA@XZ @ 0x1803DF274
 * Callers:
 *     ?Release@?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@UEAAKXZ @ 0x180044420 (-Release@-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@UEAAKXZ.c)
 *     ?Release@?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@UEAAKXZ @ 0x1803F0B60 (-Release@-$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@UEAAKXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 */

void __fastcall WindowEventDispatcher::PendingActivationData::~PendingActivationData(
        WindowEventDispatcher::PendingActivationData *this)
{
  HSTRING v2; // rcx

  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 2);
  v2 = (HSTRING)*((_QWORD *)this + 1);
  if ( v2 )
    WindowsDeleteString(v2);
}
