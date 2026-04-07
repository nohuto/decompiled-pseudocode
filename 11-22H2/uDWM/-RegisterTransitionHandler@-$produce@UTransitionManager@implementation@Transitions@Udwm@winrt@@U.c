/*
 * XREFs of ?RegisterTransitionHandler@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHHPEAX@Z @ 0x180057080
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@_N@1@AEBW4ShellTransition@Transitions@Udwm@winrt@@@Z @ 0x180040750 (--$_Try_emplace@AEBW4ShellTransition@Transitions@Udwm@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4Shell.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180056CD0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::ITransitionManager>::RegisterTransitionHandler(
        __int64 a1,
        int a2,
        __int64 a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  v4 = a1 + 48;
  if ( !a1 )
    v4 = 56LL;
  try
  {
    v5 = std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Try_emplace<enum winrt::Udwm::Transitions::ShellTransition const &,>(
           v4,
           (__int64)v7,
           (const unsigned __int8 *)&v8);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)v5 + 24LL),
      (winrt::Windows::Foundation::IUnknown *)&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v8);
  }
  return result;
}
