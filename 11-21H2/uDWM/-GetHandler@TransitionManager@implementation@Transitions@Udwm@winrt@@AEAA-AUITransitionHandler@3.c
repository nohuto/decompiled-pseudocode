/*
 * XREFs of ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x180040C14
 * Callers:
 *     ?WindowMaximizeSnapPostTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x180013140 (-WindowMaximizeSnapPostTransition@-$produce@UTransitionManager@implementation@Transitions@Udwm@w.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCTopLevelWindow3D@@W4ShellTransition@345@@Z @ 0x18003F600 (-PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEA.c)
 *     ?StopRotation@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x180040300 (-StopRotation@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTran.c)
 *     ?PostTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHH@Z @ 0x1800FABE0 (-PostTransition@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransition.c)
 *     ?PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@345@@Z @ 0x1800FACD8 (-PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@3.c)
 *     ?SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800FB038 (-SkipAnimationDelays@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800FB2B8 (-UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@W4ShellTransition@345@@Z @ 0x1800FB548 (-UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Wi.c)
 *     ?WindowMaximizeSnapCancel@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIWindowStateTransitionManager@Private@345@@impl@winrt@@UEAAHXZ @ 0x1800FB7D0 (-WindowMaximizeSnapCancel@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UI.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800126F8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Find_last@W4ShellTransition@Transitions@Udwm@winrt@@@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@_K@Z @ 0x180040CB0 (--$_Find_last@W4ShellTransition@Transitions@Udwm@winrt@@@-$_Hash@V-$_Umap_traits@W4ShellTransiti.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        int a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = *((unsigned __int8 *)&v11 + v5++);
    v6 = 0x100000001B3LL * (v7 ^ v6);
  }
  while ( v5 < 4 );
  v8 = *(_QWORD *)(std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Find_last<enum winrt::Udwm::Transitions::ShellTransition>(
                     a1 + 48,
                     v10,
                     &v11,
                     v6)
                 + 8);
  if ( !v8 )
    v8 = *(_QWORD *)(a1 + 56);
  if ( v8 == *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)a2 = 0LL;
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(v8 + 24);
    winrt::Windows::Foundation::IUnknown::add_ref(a2);
  }
  return a2;
}
