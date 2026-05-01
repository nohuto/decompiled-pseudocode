/*
 * XREFs of ??0GuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@AEBW4SnapAssistUsage@23456@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@6@@Z @ 0x1806887F8
 * Callers:
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x18066AB0C (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Buy_nonzero@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1806888B0 (-_Buy_nonzero@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V-$al.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs::GuidedSnapAssistCompletedArgs(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  void **v4; // rsi
  __int64 v5; // rdx
  size_t v6; // r14
  const void *v7; // rbp
  char *v8; // rbx

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs>::`vftable';
  *(_DWORD *)(a1 + 24) = *a2;
  v4 = (void **)(a1 + 32);
  v5 = *(unsigned int *)(a3 + 8);
  v6 = 4 * v5;
  v7 = *(const void **)a3;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v5 )
  {
    std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Buy_nonzero(a1 + 32);
    v8 = (char *)*v4;
    memmove_0(*v4, v7, v6);
    *(_QWORD *)(a1 + 40) = &v8[v6];
  }
  return a1;
}
