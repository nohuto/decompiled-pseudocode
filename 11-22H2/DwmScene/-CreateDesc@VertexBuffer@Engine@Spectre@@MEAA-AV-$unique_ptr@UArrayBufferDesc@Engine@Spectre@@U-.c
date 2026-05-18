/*
 * XREFs of ?CreateDesc@VertexBuffer@Engine@Spectre@@MEAA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@IIIW4Usage@23@W4Format@23@@Z @ 0x180089760
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@34@AEAW4Usage@34@W4Attribute@234@$0A@@std@@YA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@0@AEAI00AEAW4Format@Engine@Spectre@@AEAW4Usage@34@$$QEAW4Attribute@DeviceVertexBuffer@34@@Z @ 0x1800891DC (--$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@34@A.c)
 *     ??1?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x180089520 (--1-$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U-$default_delete@UVertexBu.c)
 */

__int64 *Spectre::Engine::VertexBuffer::CreateDesc(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, ...)
{
  __int64 v4; // rax
  int v6; // ecx
  __int64 *v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+50h] [rbp+8h] BYREF
  Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc *v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+28h] BYREF
  va_list va; // [rsp+70h] [rbp+28h]
  __int64 v16; // [rsp+78h] [rbp+30h] BYREF
  va_list va1; // [rsp+78h] [rbp+30h]
  va_list va2; // [rsp+80h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v13 = a4;
  v12 = a3;
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
    v6 = *(_DWORD *)(v4 + 32);
  else
    v6 = -1;
  v10 = v6;
  v7 = std::make_unique<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc,unsigned int &,unsigned int &,unsigned int &,enum Spectre::Engine::Format &,enum Spectre::Engine::Usage &,enum Spectre::Engine::DeviceVertexBuffer::Attribute,0>(
         (__int64 *)&v11,
         &v12,
         &v13,
         (unsigned int *)va,
         (int *)va2,
         (__int64 *)va1,
         &v10);
  v8 = *v7;
  *v7 = 0LL;
  *a2 = v8;
  std::unique_ptr<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>::~unique_ptr<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc>(&v11);
  return a2;
}
