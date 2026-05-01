/*
 * XREFs of ??0?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@Platform@@AE$AAA@AEBV?$shared_ptr@I@std@@AEBV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@4@@Z @ 0x18042D7C4
 * Callers:
 *     ?GetView@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAPE$AAU?$IVectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@234@XZ @ 0x1804343C4 (-GetView@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Window_ea_1804343C4.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z @ 0x1800641DC (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@@Z.c)
 */

__int64 __fastcall Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  Platform::Object::Object(a1 + 40);
  *(_QWORD *)a1 = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Platform::Object's `Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>'};
  *(_QWORD *)(a1 + 8) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>'};
  *(_QWORD *)(a1 + 16) = ___7__VectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_Platform__6B__I__VectorView_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00PublicNonVirtuals_12__;
  *(_QWORD *)(a1 + 24) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Platform::Object's `Windows::UI::Xaml::Interop::IBindableVectorView'};
  *(_QWORD *)(a1 + 32) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Windows::UI::Xaml::Interop::IBindableIterable'};
  *(_QWORD *)(a1 + 40) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 48) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 56) = &Platform::Collections::VectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,std::equal_to<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 104);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a1 + 64),
    a2);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a1 + 80),
    a3);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)*a2;
  return a1;
}
