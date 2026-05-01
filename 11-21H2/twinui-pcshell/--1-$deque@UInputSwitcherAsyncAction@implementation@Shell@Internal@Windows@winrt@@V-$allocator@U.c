/*
 * XREFs of ??1?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18017DB80
 * Callers:
 *     ??1InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E2778 (--1InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InputSwitchingManager_::_1_::dtor$2 @ 0x18021C901 (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--InputSwitc_ea_18021C901.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
  void *v9; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  while ( v2 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) - 1LL + v2)));
    v7 = *(std::_Ref_count_base **)(v6 + 40);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    v8 = *(std::_Ref_count_base **)(v6 + 24);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    v2 = *(_QWORD *)(a1 + 32) - 1LL;
    *(_QWORD *)(a1 + 32) = v2;
    if ( !v2 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v9 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v9 )
      std::_Deallocate<16,0>(v9, 0x38uLL);
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
