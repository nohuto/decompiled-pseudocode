/*
 * XREFs of _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$3 @ 0x1803A41D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,wil::err_exception_policy>::vector_iterator::~vector_iterator(a2 + 216);
}
