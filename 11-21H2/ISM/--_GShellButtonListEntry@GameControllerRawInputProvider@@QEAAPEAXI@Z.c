/*
 * XREFs of ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x1800B39FC
 * Callers:
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800B387C (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x1800B42A0 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

GameControllerRawInputProvider::ShellButtonListEntry *__fastcall GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(
        GameControllerRawInputProvider::ShellButtonListEntry *this)
{
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 2);
  operator delete(this);
  return this;
}
