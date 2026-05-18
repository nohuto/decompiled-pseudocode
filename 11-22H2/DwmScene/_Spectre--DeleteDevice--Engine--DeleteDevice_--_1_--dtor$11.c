/*
 * XREFs of _Spectre::DeleteDevice::Engine::DeleteDevice_::_1_::dtor$11 @ 0x1800E5B2D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::DeleteDevice::Engine::DeleteDevice_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return std::unique_lock<std::mutex>::~unique_lock<std::mutex>(a2 + 80);
}
