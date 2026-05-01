/*
 * XREFs of ??1FillCandidate@SnapLayoutHelpers@@QEAA@XZ @ 0x18046E2A8
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs___lambda_4217e144a03c6a3217c75ef3b58aa59f____::_1_::dtor$0 @ 0x1802C25FC (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellV_ea_1802C25FC.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$1 @ 0x18067130B (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$1.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$4 @ 0x180671323 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$4.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$5 @ 0x18067132F (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$5.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$7 @ 0x18067135C (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$7.c)
 *     _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$9 @ 0x180671389 (_SnapLayoutHelpers--DetermineFillWindow_--_1_--dtor$9.c)
 *     _SnapLayoutHelpers::GetRectForRegion_::_1_::dtor$5 @ 0x180673044 (_SnapLayoutHelpers--GetRectForRegion_--_1_--dtor$5.c)
 *     _SnapLayoutHelpers::GetRectForRegion_::_1_::dtor$6 @ 0x180673050 (_SnapLayoutHelpers--GetRectForRegion_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SnapLayoutHelpers::FillCandidate::~FillCandidate(__int64 *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(this);
}
