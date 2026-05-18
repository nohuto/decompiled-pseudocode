/*
 * XREFs of ??1IndexBufferD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C42F0
 * Callers:
 *     ??_EIndexBufferD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800C4B00 (--_EIndexBufferD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Spectre::Engine::D3D11::IndexBufferD3D11::~IndexBufferD3D11(
        Spectre::Engine::D3D11::IndexBufferD3D11 *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
  Spectre::Engine::DeviceArrayBuffer::~DeviceArrayBuffer(this);
}
