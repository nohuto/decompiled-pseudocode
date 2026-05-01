/*
 * XREFs of ??1vector_iterator@?$vector_range@U?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180396F90
 * Callers:
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$3 @ 0x1803A41D4 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$4 @ 0x1803A41E0 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$4.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$27 @ 0x1804C274F (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$27.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$28 @ 0x1804C275B (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$28.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$28 @ 0x1804D0A4C (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$28.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$29 @ 0x1804D0A58 (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$29.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,wil::err_exception_policy>::vector_iterator::~vector_iterator(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 16));
}
