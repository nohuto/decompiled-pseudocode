/*
 * XREFs of ??1?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18019FF84
 * Callers:
 *     ??1InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18019FE90 (--1InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InputSwitchingManager_::_1_::dtor$2 @ 0x1802B4BE7 (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--InputSwitc_ea_1802B4BE7.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::~deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rdi
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  void *v10; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) - 1LL + v2)));
    v7 = *(std::_Ref_count_base **)(v6 + 40);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    v8 = *(std::_Ref_count_base **)(v6 + 24);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v10 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v10 )
      std::_Deallocate<16,0>(v10, 0x38uLL);
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8LL * *(_QWORD *)(a1 + 16));
  v5 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate<16,0>(v5, 0x10uLL);
}
