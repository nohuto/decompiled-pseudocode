/*
 * XREFs of ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x18073B1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x180130C64 (-IsAgile@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsWithViewIdBase::put_ActivationViewSwitcher(
        RTL_SRWLOCK *this,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID Ptr; // rcx
  struct IUnknown *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 5;
  AcquireSRWLockExclusive(this + 5);
  if ( this[2].Ptr )
  {
    v5 = -2147418113;
  }
  else
  {
    v5 = 0;
    if ( !IsAgile(a2) )
      MicrosoftTelemetryAssertTriggeredNoArgs(v7, v6);
    if ( this[2].Ptr != a2 )
    {
      v10 = a2;
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v10);
      Ptr = this[2].Ptr;
      this[2].Ptr = a2;
      if ( Ptr )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v5;
}
