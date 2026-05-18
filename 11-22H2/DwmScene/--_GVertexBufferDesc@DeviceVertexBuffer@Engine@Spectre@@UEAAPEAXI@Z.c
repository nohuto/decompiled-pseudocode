/*
 * XREFs of ??_GVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800895F0
 * Callers:
 *     ??1?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180089520 (--1-$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U-$default_delete@UVertexBu.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1VertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@UEAA@XZ @ 0x18008955C (--1VertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc *__fastcall Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`scalar deleting destructor'(
        Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc *this,
        char a2)
{
  Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::~VertexBufferDesc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
