/*
 * XREFs of _lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator() @ 0x18009BA60
 * Callers:
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x18009C800 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 * Callees:
 *     ?AreWindowsInSameCompositeApp@CUIHierarchy@@AEAA_N_K0@Z @ 0x18009BD6C (-AreWindowsInSameCompositeApp@CUIHierarchy@@AEAA_N_K0@Z.c)
 *     ?PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z @ 0x18009D018 (-PropagateActivationState@CUIHierarchy@@AEAA_NPEAUCUIWindow@@0_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e08e03aa5b167d5be50e1fd6214815c7_::operator()(__int64 a1, struct CUIWindow **a2)
{
  struct CUIWindow *v4; // rdx
  struct CUIWindow *v5; // rdi
  bool v6; // al

  v4 = *a2;
  v5 = 0LL;
  if ( v4 )
  {
    v6 = CUIHierarchy::AreWindowsInSameCompositeApp(*(CUIHierarchy **)a1, *((_QWORD *)v4 + 2), **(_QWORD **)(a1 + 8));
    if ( v6 )
      v5 = **(struct CUIWindow ***)(a1 + 16);
    CUIHierarchy::PropagateActivationState(*(CUIHierarchy **)a1, *a2, v5, v6);
  }
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)a2);
}
