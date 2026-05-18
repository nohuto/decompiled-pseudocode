/*
 * XREFs of _Spectre::Engine::ResourceData::SetResource_::_1_::dtor$2 @ 0x1800EABE5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Engine::ResourceData::SetResource_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 128));
}
