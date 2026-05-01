/*
 * XREFs of ??1?$unique_any_array_ptr@UtagPRESENTFRAME@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@@wil@@QEAA@XZ @ 0x18032C110
 * Callers:
 *     _GamingOverlayExperienceManager::PerfDataCollectionThread_::_1_::dtor$0 @ 0x180337204 (_GamingOverlayExperienceManager--PerfDataCollectionThread_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 wil::unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>()
{
  return wil::unique_any_array_ptr<tagPRESENTFRAME,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::reset();
}
