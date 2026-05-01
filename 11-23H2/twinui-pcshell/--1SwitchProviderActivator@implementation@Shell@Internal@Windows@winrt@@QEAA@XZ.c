/*
 * XREFs of ??1SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18071D5B4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x18071D930 (-_Destroy@-$_Ref_count_obj2@USwitchProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x18071CE88 (--$_Destroy_range@V-$allocator@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop.c)
 *     ?revoke@?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18071D9F0 (-revoke@-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::~SwitchProviderActivator(
        winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator *this)
{
  __int64 *v1; // rdi
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  __int64 *v5; // rcx

  v1 = (__int64 *)((char *)this + 72);
  winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::revoke((char *)this + 72);
  if ( *v1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v1);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  if ( *((_QWORD *)this + 6) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 6);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
  v5 = (__int64 *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>>(
      v5,
      *((__int64 **)this + 2));
    std::_Deallocate<16,0>(*((void **)this + 1), 8 * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 1)) >> 3));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
