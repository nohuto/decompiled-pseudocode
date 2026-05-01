/*
 * XREFs of ?Initialize@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801BA910
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::Initialize(
        winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator *this,
        struct IServiceProvider *a2)
{
  char *v2; // rbx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rsi

  v2 = (char *)this + 48;
  QueryService = a2->lpVtbl->QueryService;
  if ( *((_QWORD *)this + 6) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 6);
  ((void (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
    a2,
    &SID_VirtualDesktopManager,
    &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c,
    v2);
}
