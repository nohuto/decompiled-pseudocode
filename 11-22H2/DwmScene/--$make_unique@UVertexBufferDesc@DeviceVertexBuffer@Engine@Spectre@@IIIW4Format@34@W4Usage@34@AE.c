/*
 * XREFs of ??$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@IIIW4Format@34@W4Usage@34@AEAW4Attribute@234@$0A@@std@@YA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@0@$$QEAI00$$QEAW4Format@Engine@Spectre@@$$QEAW4Usage@34@AEAW4Attribute@DeviceVertexBuffer@34@@Z @ 0x18008938C
 * Callers:
 *     ?SetAttribute@DeviceVertexBuffer@Engine@Spectre@@QEAAXW4Attribute@123@@Z @ 0x180089850 (-SetAttribute@DeviceVertexBuffer@Engine@Spectre@@QEAAXW4Attribute@123@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0VertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@QEAA@IIIW4Format@23@W4Usage@23@W4Attribute@123@@Z @ 0x1800894E4 (--0VertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@QEAA@IIIW4Format@23@W4Usage@23@W4Attribut.c)
 */

__int64 *__fastcall std::make_unique<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc,unsigned int,unsigned int,unsigned int,enum Spectre::Engine::Format,enum Spectre::Engine::Usage,enum Spectre::Engine::DeviceVertexBuffer::Attribute &,0>(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  void *v11; // rcx
  __int64 v12; // rax

  v11 = operator new(0x28uLL);
  v12 = 0LL;
  if ( v11 )
    v12 = Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::VertexBufferDesc(v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
