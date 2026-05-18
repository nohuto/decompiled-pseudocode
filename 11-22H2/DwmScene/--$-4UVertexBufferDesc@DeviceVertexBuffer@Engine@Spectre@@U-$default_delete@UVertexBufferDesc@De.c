/*
 * XREFs of ??$?4UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@$0A@@?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@1@@Z @ 0x180089004
 * Callers:
 *     ??0VertexBuffer@Engine@Spectre@@QEAA@W4Attribute@DeviceVertexBuffer@12@@Z @ 0x180089450 (--0VertexBuffer@Engine@Spectre@@QEAA@W4Attribute@DeviceVertexBuffer@12@@Z.c)
 *     ?SetAttribute@DeviceVertexBuffer@Engine@Spectre@@QEAAXW4Attribute@123@@Z @ 0x180089850 (-SetAttribute@DeviceVertexBuffer@Engine@Spectre@@QEAAXW4Attribute@123@@Z.c)
 * Callees:
 *     ??R?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@QEBAXPEAUArrayBufferDesc@Engine@Spectre@@@Z @ 0x1800888B4 (--R-$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@QEBAXPEAUArrayBufferDesc@Engine@Spect.c)
 */

_QWORD *__fastcall std::unique_ptr<Spectre::Engine::ArrayBufferDesc>::operator=<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc,std::default_delete<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>,0>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<Spectre::Engine::ArrayBufferDesc>::operator()((__int64)a1, v4);
  return a1;
}
