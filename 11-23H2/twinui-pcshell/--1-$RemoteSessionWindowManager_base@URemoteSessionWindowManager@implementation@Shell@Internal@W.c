/*
 * XREFs of ??1?$RemoteSessionWindowManager_base@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@$$V@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18065EE8C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::WindowsTracker_::_1_::dtor$0 @ 0x1802B9243 (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--WindowsTracker_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteSessionWindowManager_::_1_::dtor$0 @ 0x1802BAA1F (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--RemoteSessionWindo.c)
 *     _WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor$0 @ 0x1802BDC04 (_WindowDragInputProvider--WindowDragInputProvider_--_1_--dtor$0.c)
 *     _SnapMigrationHandler::SnapMigrationHandler_::_1_::dtor$0 @ 0x1802C188E (_SnapMigrationHandler--SnapMigrationHandler_--_1_--dtor$0.c)
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager_base<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,>::~RemoteSessionWindowManager_base<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,>(
        __int64 a1)
{
  signed __int64 v1; // rax
  signed __int64 v2; // rtt

  v1 = *(_QWORD *)(a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 - 1, v1);
    if ( v2 == v1 )
      return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  }
  winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v1));
  return winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
}
