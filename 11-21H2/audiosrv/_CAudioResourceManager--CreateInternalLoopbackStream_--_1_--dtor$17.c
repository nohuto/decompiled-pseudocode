/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$17 @ 0x1800FFFFB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_17(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(a2 + 336);
}
