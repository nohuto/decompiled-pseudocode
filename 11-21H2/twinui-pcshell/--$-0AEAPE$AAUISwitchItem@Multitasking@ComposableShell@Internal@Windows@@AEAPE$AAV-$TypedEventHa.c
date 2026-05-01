/*
 * XREFs of ??$?0AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAV?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@4@@?$_Ref_count_obj2@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@QEAA@AEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAV?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@Foundation@6@@Z @ 0x180429CCC
 * Callers:
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x1804311E4 (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?add@SwitchItemChanged@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA?AVEventRegistrationToken@Foundation@6@PE$AAV?$TypedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@W4SwitchItemProperty@2345@@86@@Z @ 0x18043F0B0 (-add@SwitchItemChanged@ISwitchItem@Multitasking@ComposableShell@Internal@Windows@@UE$AAA-AVEvent.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj2<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>::_Ref_count_obj2<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  char v7; // [rsp+50h] [rbp+18h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>::`vftable';
  v4 = a1 + 16;
  v5 = *a3;
  *(_QWORD *)(a1 + 16) = __abi_winrt_ptr_ctor(*a2);
  *(_DWORD *)(v4 + 8) = 2;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 16) = *(_QWORD *)Windows::Internal::ComposableShell::Multitasking::ISwitchItem::SwitchItemChanged::add(
                                      *(_QWORD *)v4,
                                      &v7,
                                      v5);
  return a1;
}
