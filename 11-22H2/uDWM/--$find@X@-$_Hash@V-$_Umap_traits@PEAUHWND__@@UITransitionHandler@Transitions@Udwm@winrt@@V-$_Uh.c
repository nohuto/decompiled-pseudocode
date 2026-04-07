/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@std@@@std@@@1@AEBQEAUHWND__@@@Z @ 0x1800FC510
 * Callers:
 *     ?EnsureWorkAreaChangeTransitionRemoved@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FD518 (-EnsureWorkAreaChangeTransitionRemoved@TransitionManager@implementation@Transitions@Udwm@winrt@@.c)
 *     ?OnWindowMoveSizeChanged@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@@impl@winrt@@UEAAH_K@Z @ 0x1800FE580 (-OnWindowMoveSizeChanged@-$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIA.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18005527C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@PEAUHWND__@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@_K@Z @ 0x1800F8998 (--$_Find_last@PEAUHWND__@@@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UITransitionHandler@Transitions@U.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL);
  v7 = std::_Hash<std::_Umap_traits<HWND__ *,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<HWND__ *,std::hash<HWND__ *>,std::equal_to<HWND__ *>>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Find_last<HWND__ *>(
         a1,
         v9,
         v6,
         appended)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
