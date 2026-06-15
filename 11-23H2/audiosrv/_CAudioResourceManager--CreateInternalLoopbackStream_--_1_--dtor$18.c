/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$18 @ 0x1800DA926
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)(a2 + 584), a2);
}
