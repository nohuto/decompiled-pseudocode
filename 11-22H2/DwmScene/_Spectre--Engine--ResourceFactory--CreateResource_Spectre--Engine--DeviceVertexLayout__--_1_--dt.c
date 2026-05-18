/*
 * XREFs of _Spectre::Engine::ResourceFactory::CreateResource_Spectre::Engine::DeviceVertexLayout__::_1_::dtor$0 @ 0x1800E3B24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Engine::ResourceFactory::CreateResource_Spectre::Engine::DeviceVertexLayout__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 136));
}
