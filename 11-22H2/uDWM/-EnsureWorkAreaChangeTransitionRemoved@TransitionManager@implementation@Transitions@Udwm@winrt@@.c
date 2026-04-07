/*
 * XREFs of ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FD518
 * Callers:
 *     ?EnsureWorkAreaChangeTransitionRemoved@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@@impl@winrt@@UEAAH_K@Z @ 0x1800FD4C0 (-EnsureWorkAreaChangeTransitionRemoved@-$produce@UTransitionManager@implementation@Transitions@U.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FE3E8 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180056D18 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@std@@@std@@@1@AEBQEAUHWND__@@@Z @ 0x1800FC510 (--$find@X@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V-$_Uh.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@2@PEAU32@@Z @ 0x1800FFA74 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::EnsureWorkAreaChangeTransitionRemoved(
        winrt::Udwm::Transitions::implementation::TransitionManager *this,
        __int64 a2)
{
  char *v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = (char *)this + 120;
  v6 = a2;
  std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::find<void>(
    (_QWORD *)this + 15,
    &v7,
    (const unsigned __int8 *)&v6);
  v4 = v7;
  if ( v7 != *((_QWORD *)this + 16) )
  {
    v6 = *(_QWORD *)(v7 + 24);
    v5 = v6;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Unchecked_erase(
      v2,
      v4);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  }
}
