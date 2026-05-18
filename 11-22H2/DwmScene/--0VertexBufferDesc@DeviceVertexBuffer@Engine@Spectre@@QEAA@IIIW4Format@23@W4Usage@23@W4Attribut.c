/*
 * XREFs of ??0VertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@QEAA@IIIW4Format@23@W4Usage@23@W4Attribute@123@@Z @ 0x1800894E4
 * Callers:
 *     ??$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@34@AEAW4Usage@34@W4Attribute@234@$0A@@std@@YA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@0@AEAI00AEAW4Format@Engine@Spectre@@AEAW4Usage@34@$$QEAW4Attribute@DeviceVertexBuffer@34@@Z @ 0x1800891DC (--$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@34@A.c)
 *     ??$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@AEAIAEBIAEAIAEAW4Format@34@AEAW4Usage@34@AEAW4Attribute@234@$0A@@std@@YA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@0@AEAIAEBI0AEAW4Format@Engine@Spectre@@AEAW4Usage@34@AEAW4Attribute@DeviceVertexBuffer@34@@Z @ 0x18008926C (--$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@AEAIAEBIAEAIAEAW4Format@34@A.c)
 *     ??$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@HHHW4Format@34@W4Usage@34@AEAW4Attribute@234@$0A@@std@@YA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@0@$$QEAH00$$QEAW4Format@Engine@Spectre@@$$QEAW4Usage@34@AEAW4Attribute@DeviceVertexBuffer@34@@Z @ 0x1800892FC (--$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@HHHW4Format@34@W4Usage@34@AE.c)
 *     ??$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@IIIW4Format@34@W4Usage@34@AEAW4Attribute@234@$0A@@std@@YA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@0@$$QEAI00$$QEAW4Format@Engine@Spectre@@$$QEAW4Usage@34@AEAW4Attribute@DeviceVertexBuffer@34@@Z @ 0x18008938C (--$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@IIIW4Format@34@W4Usage@34@AE.c)
 * Callees:
 *     ??0ArrayBufferDesc@Engine@Spectre@@QEAA@IIIW4Format@12@W4Usage@12@@Z @ 0x18008B354 (--0ArrayBufferDesc@Engine@Spectre@@QEAA@IIIW4Format@12@W4Usage@12@@Z.c)
 */

__int64 __fastcall Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::VertexBufferDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v7; // rcx
  __int64 result; // rax

  Spectre::Engine::ArrayBufferDesc::ArrayBufferDesc(a1, a2, a3, a4, a5, a6);
  *(_DWORD *)(v7 + 32) = a7;
  result = v7;
  *(_QWORD *)v7 = &Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc::`vftable';
  return result;
}
