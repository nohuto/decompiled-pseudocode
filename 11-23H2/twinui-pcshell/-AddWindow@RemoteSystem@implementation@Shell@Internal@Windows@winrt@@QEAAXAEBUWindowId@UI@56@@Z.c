/*
 * XREFs of ?AddWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180729464
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180719DA8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystem::AddWindow(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  RTL_SRWLOCK *v4; // rsi
  signed int v5; // eax

  v4 = this + 4;
  AcquireSRWLockExclusive(this + 4);
  v5 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)this[7].Ptr + 104LL))(this[7].Ptr, *(_QWORD *)a2);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
