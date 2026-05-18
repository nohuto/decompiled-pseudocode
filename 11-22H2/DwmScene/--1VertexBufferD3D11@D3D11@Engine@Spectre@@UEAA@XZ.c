/*
 * XREFs of ??1VertexBufferD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D36CC
 * Callers:
 *     ??_GVertexBufferD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800C4B80 (--_GVertexBufferD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Spectre::Engine::D3D11::VertexBufferD3D11::~VertexBufferD3D11(
        Spectre::Engine::D3D11::VertexBufferD3D11 *this)
{
  *(_QWORD *)this = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
  *(_QWORD *)this = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  Spectre::Engine::DeviceArrayBuffer::~DeviceArrayBuffer(this);
}
