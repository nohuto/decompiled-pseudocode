/*
 * XREFs of ?CreateDesc@ArrayBuffer@Engine@Spectre@@MEAA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@IIIW4Usage@23@W4Format@23@@Z @ 0x1800889F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_unique@UArrayBufferDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@0@AEAI00AEAW4Format@Engine@Spectre@@AEAW4Usage@34@@Z @ 0x180088704 (--$make_unique@UArrayBufferDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAW4Usage@23@$0A@@st.c)
 */

__int64 *Spectre::Engine::ArrayBuffer::CreateDesc(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, ...)
{
  unsigned int v6; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF
  __int64 v8; // [rsp+60h] [rbp+28h] BYREF
  va_list va; // [rsp+60h] [rbp+28h]
  __int64 v10; // [rsp+68h] [rbp+30h] BYREF
  va_list va1; // [rsp+68h] [rbp+30h]
  va_list va2; // [rsp+70h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v7 = a4;
  v6 = a3;
  std::make_unique<Spectre::Engine::ArrayBufferDesc,unsigned int &,unsigned int &,unsigned int &,enum Spectre::Engine::Format &,enum Spectre::Engine::Usage &,0>(
    a2,
    &v6,
    &v7,
    (unsigned int *)va,
    (int *)va2,
    (__int64 *)va1);
  return a2;
}
