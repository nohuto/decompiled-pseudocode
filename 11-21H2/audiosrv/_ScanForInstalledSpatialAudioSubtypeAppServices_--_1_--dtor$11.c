/*
 * XREFs of _ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor$11 @ 0x180071E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return wil::unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>::~unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>(a2 + 1336);
}
