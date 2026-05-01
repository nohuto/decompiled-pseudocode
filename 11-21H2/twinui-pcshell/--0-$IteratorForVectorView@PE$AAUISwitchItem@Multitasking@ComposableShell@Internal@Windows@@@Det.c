/*
 * XREFs of ??0?$IteratorForVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@QE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@5@@Z @ 0x18042D5A8
 * Callers:
 *     ?First@?Q?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x180433AC4 (-First@-Q-$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_180433AC4.c)
 *     ?First@?Q?$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IIterator@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x180433B6C (-First@-Q-$IIterable@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_180433B6C.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z @ 0x1800641DC (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z.c)
 */

__int64 __fastcall Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>(
        __int64 a1,
        int **a2,
        _QWORD *a3)
{
  int v6; // eax

  Platform::Object::Object(a1 + 24);
  *(_QWORD *)a1 = &Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `Windows::Foundation::Collections::IIterator<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>'};
  *(_QWORD *)(a1 + 8) = ___7__IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Details_Collections_Platform__6B__I__IteratorForVectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PublicNonVirtuals_123__;
  *(_QWORD *)(a1 + 16) = &Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `Windows::UI::Xaml::Interop::IBindableIterator'};
  *(_QWORD *)(a1 + 24) = &Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 32) = &Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 40) = &Platform::Collections::Details::IteratorForVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 88);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a1 + 48),
    a2);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a1 + 64),
    a3);
  v6 = **a2;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 80) = v6;
  return a1;
}
