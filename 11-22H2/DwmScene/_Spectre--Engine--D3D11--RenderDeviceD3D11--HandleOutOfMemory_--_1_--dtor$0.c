/*
 * XREFs of _Spectre::Engine::D3D11::RenderDeviceD3D11::HandleOutOfMemory_::_1_::dtor$0 @ 0x1800F16DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::HandleOutOfMemory_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 56));
}
