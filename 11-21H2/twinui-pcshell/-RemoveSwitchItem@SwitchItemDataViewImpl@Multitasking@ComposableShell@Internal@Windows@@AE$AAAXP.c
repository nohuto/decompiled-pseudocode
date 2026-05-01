/*
 * XREFs of ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180437A18
 * Callers:
 *     ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Z @ 0x180437280 (-OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@.c)
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x180437F30 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find_lower_bound@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@?$_Tree@V?$_Tmap_traits@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@USwitchItemComparator@SwitchItemDataViewImpl@2345@V?$allocator@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$shared_ptr@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@@std@@PEAX@std@@@1@AEBQE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18042C83C (--$_Find_lower_bound@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@-$_Tree@V.c)
 *     ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x18042DECC (--0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18043A2AC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLigh.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::RemoveSwitchItem(
        __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // r10
  __int64 v5; // rdx
  int v6; // ebp
  _QWORD *v7; // rdi
  std::_Ref_count_base *v8; // rcx
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64 *, __int64 *, __int64); // rbp
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r8
  _BYTE v15[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v3 = __abi_winrt_ptr_ctor(a2);
  v17 = v3;
  std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemComparator,std::allocator<std::pair<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc * const,std::shared_ptr<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>>>,0>>::_Find_lower_bound<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
    a1 + 13,
    (__int64)v15,
    &v17);
  v5 = v16;
  if ( *(_BYTE *)(v16 + 25) || v3 < *(_QWORD *)(v16 + 32) )
    v5 = *v4;
  if ( v5 != *v4 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 8LL);
    v7 = (_QWORD *)std::_Tree_val<std::_Tree_simple_types<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>>::_Extract(v4);
    v8 = (std::_Ref_count_base *)v7[6];
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    v9 = v7[4];
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    std::_Deallocate<16,0>(v7, 0x38uLL);
    if ( !v6 )
    {
      v10 = *(void (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 64);
      v11 = Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
      v12 = Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
              (__int64)v11,
              v3,
              1);
      v13 = v12;
      v14 = v12 ? v12 + 8 : 0LL;
      v10(a1, a1 + 2, v14);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
}
