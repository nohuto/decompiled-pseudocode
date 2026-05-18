/*
 * XREFs of ?CreateDesc@DeviceVertexBuffer@Engine@Spectre@@MEAA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@IIW4Usage@23@W4Format@23@@Z @ 0x180089700
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180089520 (--1-$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U-$default_delete@UVertexBu.c)
 *     ?CreateDesc@DeviceVertexBuffer@Engine@Spectre@@IEAA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@std@@IIW4Usage@23@W4Format@23@W4Attribute@123@@Z @ 0x180089658 (-CreateDesc@DeviceVertexBuffer@Engine@Spectre@@IEAA-AV-$unique_ptr@UVertexBufferDesc@DeviceVerte.c)
 */

__int64 *__fastcall Spectre::Engine::DeviceVertexBuffer::CreateDesc(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6)
{
  __int64 v6; // rax
  int v8; // eax
  __int64 *Desc; // rax
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc *v15; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
    v8 = *(_DWORD *)(v6 + 32);
  else
    v8 = -1;
  v14 = v8;
  v13 = a6;
  v12 = a5;
  Desc = Spectre::Engine::DeviceVertexBuffer::CreateDesc(a1, (__int64 *)&v15, a3, a4, v12, v13, v14);
  v10 = *Desc;
  *Desc = 0LL;
  *a2 = v10;
  std::unique_ptr<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>::~unique_ptr<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>(&v15);
  return a2;
}
