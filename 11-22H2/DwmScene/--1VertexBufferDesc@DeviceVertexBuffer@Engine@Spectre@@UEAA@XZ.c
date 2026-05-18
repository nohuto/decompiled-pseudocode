/*
 * XREFs of ??1VertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008955C
 * Callers:
 *     ??_GVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800895F0 (--_GVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::~VertexBufferDesc(
        Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc *this)
{
  Spectre::Engine::ArrayBufferDesc::~ArrayBufferDesc(this);
}
