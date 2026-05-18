/*
 * XREFs of ??$make_unique@UArrayBufferDesc@Engine@Spectre@@AEAIAEAIAEAIAEAW4Format@23@AEAW4Usage@23@$0A@@std@@YA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@0@AEAI00AEAW4Format@Engine@Spectre@@AEAW4Usage@34@@Z @ 0x180088704
 * Callers:
 *     ?CreateDesc@ArrayBuffer@Engine@Spectre@@MEAA?AV?$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U?$default_delete@UArrayBufferDesc@Engine@Spectre@@@std@@@std@@IIIW4Usage@23@W4Format@23@@Z @ 0x1800889F0 (-CreateDesc@ArrayBuffer@Engine@Spectre@@MEAA-AV-$unique_ptr@UArrayBufferDesc@Engine@Spectre@@U-$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0ArrayBufferDesc@Engine@Spectre@@QEAA@IIIW4Format@12@W4Usage@12@@Z @ 0x18008B354 (--0ArrayBufferDesc@Engine@Spectre@@QEAA@IIIW4Format@12@W4Usage@12@@Z.c)
 */

__int64 *__fastcall std::make_unique<Spectre::Engine::ArrayBufferDesc,unsigned int &,unsigned int &,unsigned int &,enum Spectre::Engine::Format &,enum Spectre::Engine::Usage &,0>(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  void *v10; // rcx
  __int64 v11; // rax

  v10 = operator new(0x20uLL);
  v11 = 0LL;
  if ( v10 )
    v11 = Spectre::Engine::ArrayBufferDesc::ArrayBufferDesc(v10, *a2, *a3, *a4, *a5, *a6);
  *a1 = v11;
  return a1;
}
