/*
 * XREFs of ??0GuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@AEBW4SnapAssistUsage@23456@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@6@@Z @ 0x1805B54F0
 * Callers:
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@@Z @ 0x18059C15C (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18031AEE0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs::GuidedSnapAssistCompletedArgs(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned __int64 v4; // rcx
  size_t v5; // rsi
  const void *v6; // rbp
  size_t size_of; // rax
  char *v8; // rax
  char *v9; // rbx

  *(_QWORD *)(a1 + 16) = &winrt::impl::produce<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs,winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::WindowSnapping::implementation::GuidedSnapAssistCompletedArgs>::`vftable';
  *(_DWORD *)(a1 + 24) = *a2;
  v4 = *(unsigned int *)(a3 + 8);
  v5 = 4 * v4;
  v6 = *(const void **)a3;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v4 )
  {
    size_of = std::_Get_size_of_n<4>(v4);
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 40) = v8;
    *(_QWORD *)(a1 + 48) = &v8[v5];
    v9 = *(char **)(a1 + 32);
    memmove_0(v9, v6, v5);
    *(_QWORD *)(a1 + 40) = &v9[v5];
  }
  return a1;
}
