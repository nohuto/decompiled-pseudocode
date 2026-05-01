/*
 * XREFs of ??1SecondaryViewInfo@JointResize@@QEAA@XZ @ 0x1801EA59C
 * Callers:
 *     _winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_e5041e3efe5dfcfff3a6fe9f3f91f36f____::_1_::dtor$0 @ 0x1801EA019 (_winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_e5041e3efe5.c)
 *     _JointResize::CalculateSecondaryViews_::_1_::dtor$8 @ 0x1805287B2 (_JointResize--CalculateSecondaryViews_--_1_--dtor$8.c)
 *     _JointResize::CalculateSecondaryViews_::_1_::dtor$14 @ 0x1805287EE (_JointResize--CalculateSecondaryViews_--_1_--dtor$14.c)
 *     _SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor$0 @ 0x1805A2E1B (_SnapLayoutHelpers--AdvancedSmartFill--DetermineFillWindow_--_1_--dtor$0.c)
 *     _SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor$3 @ 0x1805A2E33 (_SnapLayoutHelpers--AdvancedSmartFill--DetermineFillWindow_--_1_--dtor$3.c)
 *     _SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor$4 @ 0x1805A2E3F (_SnapLayoutHelpers--AdvancedSmartFill--DetermineFillWindow_--_1_--dtor$4.c)
 *     _SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor$6 @ 0x1805A2E66 (_SnapLayoutHelpers--AdvancedSmartFill--DetermineFillWindow_--_1_--dtor$6.c)
 *     _SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow_::_1_::dtor$8 @ 0x1805A2E90 (_SnapLayoutHelpers--AdvancedSmartFill--DetermineFillWindow_--_1_--dtor$8.c)
 *     _SnapLayoutHelpers::AdvancedSmartFill::GetRectForRegion_::_1_::dtor$5 @ 0x1805A566D (_SnapLayoutHelpers--AdvancedSmartFill--GetRectForRegion_--_1_--dtor$5.c)
 *     _SnapLayoutHelpers::AdvancedSmartFill::GetRectForRegion_::_1_::dtor$6 @ 0x1805A5679 (_SnapLayoutHelpers--AdvancedSmartFill--GetRectForRegion_--_1_--dtor$6.c)
 *     _winrt::Windows::UI::Xaml::Controls::DragItemsStartingEventHandler::DragItemsStartingEventHandler__lambda_2b9ca255212db89297b14d5a504c020f____::_1_::dtor$0 @ 0x1806055A5 (_winrt--Windows--UI--Xaml--Controls--DragItemsStartingEventHandler--DragItemsStartingEventHandle.c)
 *     _winrt::Windows::UI::Xaml::Input::PointerEventHandler::PointerEventHandler__lambda_3591e69cd7734f7f9a496e70d8c5fafc____::_1_::dtor$0 @ 0x18060561D (_winrt--Windows--UI--Xaml--Input--PointerEventHandler--PointerEventHandler__lambda_3591e69cd7734.c)
 *     _winrt::Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler__lambda_4d1b25a0649ea28e3acc4cfd8c5ad9c0____::_1_::dtor$0 @ 0x180605695 (_winrt--Windows--UI--Xaml--RoutedEventHandler--RoutedEventHandler__lambda_4d1b25a0649ea28e3acc4c.c)
 *     _winrt::Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler__lambda_547b57529218c70345269c3b33480baf____::_1_::dtor$0 @ 0x18060570D (_winrt--Windows--UI--Xaml--RoutedEventHandler--RoutedEventHandler__lambda_547b57529218c70345269c.c)
 *     _winrt::Windows::UI::Xaml::Input::PointerEventHandler::PointerEventHandler__lambda_63f0ba8d47001b6298cbfa6e1cb1ee7f____::_1_::dtor$0 @ 0x180605785 (_winrt--Windows--UI--Xaml--Input--PointerEventHandler--PointerEventHandler__lambda_63f0ba8d47001.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs_::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::Input::ContextRequestedEventArgs___lambda_93a01a015314866c96b4de2e509c5117____::_1_::dtor$0 @ 0x1806057FD (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Xaml--UIElement_winrt--Window.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::Controls::ListViewBase_winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs_::TypedEventHandler_winrt::Windows::UI::Xaml::Controls::ListViewBase_winrt::Windows::UI::Xaml::Controls::DragItemsCompletedEventArgs___lambda_a4fc72a842dbf7eb265aa59110ec49be____::_1_::dtor$0 @ 0x1806058D9 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Xaml--Controls--ListViewBase_.c)
 *     _winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_b9ce315f83a5c088afafe0d2d1441397____::_1_::dtor$0 @ 0x180605951 (_winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_b9ce315f83a.c)
 *     _winrt::Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler__lambda_daf47e21d6afac0102e99be942e3237f____::_1_::dtor$0 @ 0x1806059C9 (_winrt--Windows--UI--Xaml--RoutedEventHandler--RoutedEventHandler__lambda_daf47e21d6afac0102e99b.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall JointResize::SecondaryViewInfo::~SecondaryViewInfo(__int64 *this)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(this);
}
