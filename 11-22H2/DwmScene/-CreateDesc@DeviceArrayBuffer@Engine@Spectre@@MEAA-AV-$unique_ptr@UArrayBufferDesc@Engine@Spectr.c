/*
 * XREFs of ?CreateDesc@DeviceArrayBuffer@Engine@Spectre@@MEAA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@IIW4Usage@23@W4Format@23@@Z @ 0x18008B480
 * Callers:
 *     <none>
 * Callees:
 *     Spectre::Engine::GetFormatPitch @ 0x180048848 (Spectre--Engine--GetFormatPitch.c)
 *     ??$make_unique@UArrayBufferDesc@Engine@Spectre@@AEAIAEBIAEAIAEAW4Format@23@AEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@0@AEAIAEBI0AEAW4Format@Engine@Spectre@@AEAW4Usage@34@@Z @ 0x18008B2CC (--$make_unique@UArrayBufferDesc@Engine@Spectre@@AEAIAEBIAEAIAEAW4Format@23@AEAW4Usage@23@$0A@@st.c)
 */

__int64 *__fastcall Spectre::Engine::DeviceArrayBuffer::CreateDesc(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6)
{
  int v7; // eax
  int v8; // r11d
  int v9; // r10d
  int FormatPitch; // eax
  int v11; // r11d
  int v13; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = a4;
  v14 = a3;
  if ( a6 == 23 || a6 == 24 )
  {
    FormatPitch = Spectre::Engine::GetFormatPitch(a6);
    v9 = ((v11 + 1) & 0xFFFFFFFE) * FormatPitch;
  }
  else
  {
    v7 = Spectre::Engine::GetFormatPitch(a6);
    v9 = v8 * v7;
  }
  v13 = v9;
  std::make_unique<Spectre::Engine::ArrayBufferDesc,unsigned int &,unsigned int const &,unsigned int &,enum Spectre::Engine::Format &,enum Spectre::Engine::Usage &,0>(
    a2,
    &v14,
    (unsigned int *)&v13,
    &v15,
    &a6,
    &a5);
  return a2;
}
