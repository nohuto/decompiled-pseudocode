/*
 * XREFs of ??1DeviceArrayBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008B3C8
 * Callers:
 *     ??_GDeviceVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052D10 (--_GDeviceVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??_EDeviceArrayBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180052D60 (--_EDeviceArrayBuffer@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1IndexBufferD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C42F0 (--1IndexBufferD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 *     ??1VertexBufferD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D36CC (--1VertexBufferD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??1?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18008883C (--1-$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U-$default_delete@UArrayBufferDesc@Engine@Spect.c)
 */

void __fastcall Spectre::Engine::DeviceArrayBuffer::~DeviceArrayBuffer(Spectre::Engine::DeviceArrayBuffer *this)
{
  *(_QWORD *)this = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::~unique_ptr<Spectre::Engine::ArrayBufferDesc>((_QWORD *)this + 12);
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}
