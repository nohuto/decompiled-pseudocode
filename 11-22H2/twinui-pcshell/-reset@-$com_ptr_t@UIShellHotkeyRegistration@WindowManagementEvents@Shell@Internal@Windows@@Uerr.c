/*
 * XREFs of ?reset@?$com_ptr_t@UIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1802758A0
 * Callers:
 *     ??4?$com_ptr_t@UIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x1802611D0 (--4-$com_ptr_t@UIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@Uerr_exc.c)
 *     ??I?$com_ptr_t@UIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAPEAPEAUIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@XZ @ 0x1802613E0 (--I-$com_ptr_t@UIShellHotkeyRegistration@WindowManagementEvents@Shell@Internal@Windows@@Uerr_exc.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::Shell::WindowManagementEvents::IShellHotkeyRegistration,wil::err_exception_policy>::reset(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
