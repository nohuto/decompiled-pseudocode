/*
 * XREFs of ?CreateDesc@DeviceVertexBuffer@Engine@Spectre@@IEAA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@std@@IIW4Usage@23@W4Format@23@W4Attribute@123@@Z @ 0x180089658
 * Callers:
 *     ?CreateDesc@DeviceVertexBuffer@Engine@Spectre@@MEAA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@IIW4Usage@23@W4Format@23@@Z @ 0x180089700 (-CreateDesc@DeviceVertexBuffer@Engine@Spectre@@MEAA-AV-$unique_ptr@UArrayBufferDesc@Engine@Spect.c)
 * Callees:
 *     Spectre::Engine::GetFormatPitch @ 0x180048848 (Spectre--Engine--GetFormatPitch.c)
 *     ??$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@AEAIAEBIAEAIAEAW4Format@34@AEAW4Usage@34@AEAW4Attribute@234@$0A@@std@@YA?AV?$unique_ptr@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@U?$default_delete@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@@std@@@0@AEAIAEBI0AEAW4Format@Engine@Spectre@@AEAW4Usage@34@AEAW4Attribute@DeviceVertexBuffer@34@@Z @ 0x18008926C (--$make_unique@UVertexBufferDesc@DeviceVertexBuffer@Engine@Spectre@@AEAIAEBIAEAIAEAW4Format@34@A.c)
 */

__int64 *Spectre::Engine::DeviceVertexBuffer::CreateDesc(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        ...)
{
  int v5; // r10d
  int v6; // r11d
  int v7; // r10d
  int FormatPitch; // eax
  int v9; // r11d
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
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
  v11 = a1;
  if ( (_DWORD)v16 == 23 || (_DWORD)v16 == 24 )
  {
    FormatPitch = Spectre::Engine::GetFormatPitch(v16);
    v7 = ((v9 + 1) & 0xFFFFFFFE) * FormatPitch;
  }
  else
  {
    v5 = Spectre::Engine::GetFormatPitch(v16);
    v7 = v6 * v5;
  }
  LODWORD(v11) = v7;
  std::make_unique<Spectre::Engine::DeviceVertexBuffer::VertexBufferDesc,unsigned int &,unsigned int const &,unsigned int &,enum Spectre::Engine::Format &,enum Spectre::Engine::Usage &,enum Spectre::Engine::DeviceVertexBuffer::Attribute &,0>(
    a2,
    &v12,
    (unsigned int *)&v11,
    &v13,
    (__int64 *)va1,
    (__int64 *)va,
    (int *)va2);
  return a2;
}
