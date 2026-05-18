/*
 * XREFs of ??0TextureDesc@Engine@Spectre@@AEAA@IIIW4TextureType@12@W4Format@12@IW4Usage@12@@Z @ 0x180055318
 * Callers:
 *     ??0TextureDesc@Engine@Spectre@@QEAA@IIIW4Format@12@IW4Usage@12@@Z @ 0x18005534C (--0TextureDesc@Engine@Spectre@@QEAA@IIIW4Format@12@IW4Usage@12@@Z.c)
 *     ??0TextureDesc@Engine@Spectre@@QEAA@IIW4Format@12@IW4Usage@12@@Z @ 0x180055388 (--0TextureDesc@Engine@Spectre@@QEAA@IIW4Format@12@IW4Usage@12@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Spectre::Engine::TextureDesc::TextureDesc(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  a1[5] = a7;
  a1[6] = a8;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
