/*
 * XREFs of ??1?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180089520
 * Callers:
 *     ??0VertexBuffer@Engine@Spectre@@QEAA@W4Attribute@DeviceVertexBuffer@12@@Z @ 0x180089450 (--0VertexBuffer@Engine@Spectre@@QEAA@W4Attribute@DeviceVertexBuffer@12@@Z.c)
 *     ?CreateDesc@DeviceVertexBuffer@Engine@Spectre@@MEAA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@IIW4Usage@23@W4Format@23@@Z @ 0x180089700 (-CreateDesc@DeviceVertexBuffer@Engine@Spectre@@MEAA-AV-$unique_ptr@UArrayBufferDesc@Engine@Spect.c)
 *     ?CreateDesc@VertexBuffer@Engine@Spectre@@MEAA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@IIIW4Usage@23@W4Format@23@@Z @ 0x180089760 (-CreateDesc@VertexBuffer@Engine@Spectre@@MEAA-AV-$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U-.c)
 *     ?SetAttribute@DeviceVertexBuffer@Engine@Spectre@@QEAAXW4Attribute@123@@Z @ 0x180089850 (-SetAttribute@DeviceVertexBuffer@Engine@Spectre@@QEAAXW4Attribute@123@@Z.c)
 * Callees:
 *     ??_GVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800895F0 (--_GVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@UEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>::~unique_ptr<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>(
        Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc **a1)
{
  Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`scalar deleting destructor'(v1, 1u);
  return result;
}
