/*
 * XREFs of ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x1800406CC
 * Callers:
 *     ?StopRotation@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x180040660 (-StopRotation@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTran.c)
 *     ?PostTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHH@Z @ 0x1800FE680 (-PostTransition@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransition.c)
 *     ?PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@345@@Z @ 0x1800FE7A8 (-PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@3.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCTopLevelWindow3D@@W4ShellTransition@345@@Z @ 0x1800FE850 (-PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEA.c)
 *     ?RegisterTransitionBitmap@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800FEA50 (-RegisterTransitionBitmap@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAUHWND.c)
 *     ?SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800FEF98 (-SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800FF218 (-UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@W4ShellTransition@345@@Z @ 0x1800FF4A8 (-UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Wi.c)
 *     ?WindowMaximizeSnapCancel@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x1800FF730 (-WindowMaximizeSnapCancel@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UI.c)
 *     ?WindowMaximizeSnapPostTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x1800FF7E0 (-WindowMaximizeSnapPostTransition@-$produce@UTransitionManager@implementation@Transitions@Udwm@w.c)
 * Callees:
 *     ??$_Find_last@W4ShellTransition@Transitions@Udwm@winrt@@@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@_K@Z @ 0x1800408E0 (--$_Find_last@W4ShellTransition@Transitions@Udwm@winrt@@@-$_Hash@V-$_Umap_traits@W4ShellTransiti.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18005527C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180056D18 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(
        unsigned __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        int a3)
{
  unsigned __int64 appended; // rax
  __int64 v6; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v9, 4uLL);
  v6 = *(_QWORD *)(std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Find_last<enum winrt::Udwm::Transitions::ShellTransition>(
                     a1 + 56,
                     v8,
                     &v9,
                     appended)
                 + 8);
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 64);
  if ( v6 == *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)a2 = 0LL;
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(v6 + 24);
    winrt::Windows::Foundation::IUnknown::add_ref(a2);
  }
  return a2;
}
