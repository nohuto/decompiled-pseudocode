/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$16 @ 0x1800DA90E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_16(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(a2 + 408);
}
