/*
 * XREFs of ?SetAttribute@DeviceVertexBuffer@Engine@Spectre@@QEAAXW4Attribute@123@@Z @ 0x180089850
 * Callers:
 *     ?CreateDeviceBuffer@VertexBuffer@Engine@Spectre@@MEAA?AV?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@AEAVRenderDevice@23@@Z @ 0x1800897F0 (-CreateDeviceBuffer@VertexBuffer@Engine@Spectre@@MEAA-AV-$shared_ptr@VDeviceArrayBuffer@Engine@S.c)
 * Callees:
 *     ??$?4UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@1@@Z @ 0x180089004 (--$-4UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U-$default_delete@UVertexBufferDesc@De.c)
 *     ??$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@IIIW4Format@34@W4Usage@34@AEAW4Attribute@234@$0A@@std@@YA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@0@$$QEAI00$$QEAW4Format@Engine@Spectre@@$$QEAW4Usage@34@AEAW4Attribute@DeviceVertexBuffer@34@@Z @ 0x18008938C (--$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@IIIW4Format@34@W4Usage@34@AE.c)
 *     ??1?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180089520 (--1-$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U-$default_delete@UVertexBu.c)
 */

void *__fastcall Spectre::Engine::DeviceVertexBuffer::SetAttribute(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  unsigned int v3; // eax
  _DWORD *v4; // rcx
  __int64 *v5; // rax
  unsigned int v7; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+44h] [rbp-14h] BYREF
  Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc *v9[2]; // [rsp+48h] [rbp-10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF
  int v12; // [rsp+80h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+30h] BYREF

  v11 = a2;
  v2 = (_QWORD *)(a1 + 96);
  v3 = 0;
  v4 = *(_DWORD **)(a1 + 96);
  if ( v4 )
  {
    v10 = v4[6];
    v12 = v4[5];
    v13 = v4[4];
    v7 = v4[3];
    v3 = v4[2];
  }
  else
  {
    v10 = 0;
    v12 = 0;
    v13 = 0;
    v7 = 0;
  }
  v8 = v3;
  v5 = std::make_unique<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc,unsigned int,unsigned int,unsigned int,enum Spectre::Engine::Format,enum Spectre::Engine::Usage,enum Spectre::Engine::DeviceVertexBuffer::Attribute &,0>(
         (__int64 *)v9,
         &v8,
         &v7,
         &v13,
         &v12,
         &v10,
         &v11);
  std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::operator=<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc,std::default_delete<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>,0>(
    v2,
    v5);
  return std::unique_ptr<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>::~unique_ptr<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>(v9);
}
