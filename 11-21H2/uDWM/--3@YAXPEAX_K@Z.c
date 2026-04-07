/*
 * XREFs of ??3@YAXPEAX_K@Z @ 0x180107720
 * Callers:
 *     _CDWMDXGIAdapter::Create_::_1_::dtor$0 @ 0x1800655EE (_CDWMDXGIAdapter--Create_--_1_--dtor$0.c)
 *     _winrt::make_winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper_CTopLevelWindow3D____::_1_::dtor$0 @ 0x180065BE6 (_winrt--make_winrt--Udwm--Transitions--implementation--AnimatedTransitionVisualWrapper_CTopLevel.c)
 *     _CAnimationEngine::CTransitionVisualSet::Initialize_::_1_::dtor$0 @ 0x180065CE2 (_CAnimationEngine--CTransitionVisualSet--Initialize_--_1_--dtor$0.c)
 *     _winrt::make_winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler__::_1_::dtor$0 @ 0x180065E7A (_winrt--make_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHan.c)
 *     _winrt::make_self_winrt::Udwm::Transitions::implementation::TransitionManager__::_1_::dtor$0 @ 0x18006623E (_winrt--make_self_winrt--Udwm--Transitions--implementation--TransitionManager__--_1_--dtor$0.c)
 *     _CMagnifierControl::OnMagnifierApiMessage_::_1_::dtor$1 @ 0x1800C7287 (_CMagnifierControl--OnMagnifierApiMessage_--_1_--dtor$1.c)
 *     _CMagnifierControl::OnMagnifierApiMessage_::_1_::dtor$3 @ 0x1800C72A5 (_CMagnifierControl--OnMagnifierApiMessage_--_1_--dtor$3.c)
 *     _winrt::make_winrt::impl::key_value_pair_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_double____winrt::hstring_const_&_double_const_&__::_1_::dtor$0 @ 0x1800F92FE (_winrt--make_winrt--impl--key_value_pair_winrt--Windows--Foundation--Collections--IKeyValuePair_.c)
 *     _winrt::make_winrt::impl::map_impl_winrt::hstring_double_std::map_winrt::hstring_double_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__double______winrt::impl::single_threaded_collection_base__std::map_winrt::hstring_double_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__double________::_1_::dtor$0 @ 0x1800F93AB (_winrt--make_winrt--impl--map_impl_winrt--hstring_double_std--map_winrt--hstring_double_std--les.c)
 *     _winrt::make_winrt::Udwm::Transitions::implementation::UserResizeVisual_CTopLevelWindow3D___&_bool__::_1_::dtor$0 @ 0x1800FC9D7 (_winrt--make_winrt--Udwm--Transitions--implementation--UserResizeVisual_CTopLevelWindow3D___-_bo.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
}
