/*
 * XREFs of _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$0 @ 0x180337204
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor_0()
{
  return wil::unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>();
}
