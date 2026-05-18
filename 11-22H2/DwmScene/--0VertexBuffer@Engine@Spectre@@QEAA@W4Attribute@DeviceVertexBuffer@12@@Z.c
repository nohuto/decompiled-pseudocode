/*
 * XREFs of ??0VertexBuffer@Engine@Spectre@@QEAA@W4Attribute@DeviceVertexBuffer@12@@Z @ 0x180089450
 * Callers:
 *     ??$make_shared@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@23@@std@@YA?AV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@0@AEAW4Attribute@DeviceVertexBuffer@Engine@Spectre@@@Z @ 0x1800479A0 (--$make_shared@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@23@@std@@YA-AV-$s.c)
 * Callees:
 *     ??0ArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x18008878C (--0ArrayBuffer@Engine@Spectre@@IEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12.c)
 *     ??$?4UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@1@@Z @ 0x180089004 (--$-4UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U-$default_delete@UVertexBufferDesc@De.c)
 *     ??$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@HHHW4Format@34@W4Usage@34@AEAW4Attribute@234@$0A@@std@@YA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@0@$$QEAH00$$QEAW4Format@Engine@Spectre@@$$QEAW4Usage@34@AEAW4Attribute@DeviceVertexBuffer@34@@Z @ 0x1800892FC (--$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@HHHW4Format@34@W4Usage@34@AE.c)
 *     ??1?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180089520 (--1-$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U-$default_delete@UVertexBu.c)
 */

_QWORD *__fastcall Spectre::Engine::VertexBuffer::VertexBuffer(_QWORD *a1, int a2)
{
  __int64 *v3; // rax
  unsigned int v5; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+44h] [rbp-14h] BYREF
  __int64 v7[2]; // [rsp+48h] [rbp-10h] BYREF
  _QWORD *v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF
  int v10; // [rsp+80h] [rbp+28h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+30h] BYREF

  v9 = a2;
  v8 = a1;
  Spectre::Engine::ArrayBuffer::ArrayBuffer(a1, 11, 5);
  *a1 = &Spectre::Engine::VertexBuffer::`vftable';
  LODWORD(v8) = 0;
  v10 = 0;
  v11 = 0;
  v5 = 0;
  v6 = 0;
  v3 = std::make_unique<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc,int,int,int,enum Spectre::Engine::Format,enum Spectre::Engine::Usage,enum Spectre::Engine::DeviceVertexBuffer::Attribute &,0>(
         v7,
         &v6,
         &v5,
         &v11,
         &v10,
         &v8,
         &v9);
  std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::operator=<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc,std::default_delete<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>,0>(
    a1 + 14,
    v3);
  std::unique_ptr<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>::~unique_ptr<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>(v7);
  return a1;
}
