/*
 * XREFs of ??1iterable_iterator@?$iterable_range@PEAU?$IKeyValuePair@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1804BCF6C
 * Callers:
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$6 @ 0x1804C269B (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$6.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$7 @ 0x1804C26A7 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$7.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$7 @ 0x1804D0998 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$7.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$8 @ 0x1804D09A4 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$8.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall wil::iterable_range<Windows::Foundation::Collections::IKeyValuePair<Windows::Internal::ApplicationModel::WindowManagement::WindowId,Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *> *> *,wil::err_exception_policy>::iterable_iterator::~iterable_iterator(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
