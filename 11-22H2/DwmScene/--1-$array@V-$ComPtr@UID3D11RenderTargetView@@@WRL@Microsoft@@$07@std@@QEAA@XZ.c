/*
 * XREFs of ??1?$array@V?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@$07@std@@QEAA@XZ @ 0x1800CFA74
 * Callers:
 *     _Spectre::Engine::D3D11::CommandListD3D11::SubmitRenderTargets_::_1_::dtor$0 @ 0x1800F1A0C (_Spectre--Engine--D3D11--CommandListD3D11--SubmitRenderTargets_--_1_--dtor$0.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18000B4B0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall std::array<Microsoft::WRL::ComPtr<ID3D11RenderTargetView>,8>::~array<Microsoft::WRL::ComPtr<ID3D11RenderTargetView>,8>(
        char *a1)
{
  `eh vector destructor iterator'(
    a1,
    8LL,
    8LL,
    (void (*)(void *))Microsoft::WRL::ComPtr<ID3D11DeviceContext1>::~ComPtr<ID3D11DeviceContext1>);
}
