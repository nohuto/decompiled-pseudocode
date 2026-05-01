/*
 * XREFs of ??1SnapWindowProvider@SnapLauncher@@UEAA@XZ @ 0x18022DDE4
 * Callers:
 *     ??_E?$heap_implements@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@UEAAPEAXI@Z @ 0x18022DE10 (--_E-$heap_implements@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

void __fastcall SnapLauncher::SnapWindowProvider::~SnapWindowProvider(SnapLauncher::SnapWindowProvider *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)((char *)this + 40);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)this + 24);
}
