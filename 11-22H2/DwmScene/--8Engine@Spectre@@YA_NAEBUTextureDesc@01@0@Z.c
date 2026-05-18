/*
 * XREFs of ??8Engine@Spectre@@YA_NAEBUTextureDesc@01@0@Z @ 0x1800557F0
 * Callers:
 *     ??9Engine@Spectre@@YA_NAEBUTextureDesc@01@0@Z @ 0x18005583C (--9Engine@Spectre@@YA_NAEBUTextureDesc@01@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::operator==(_DWORD *a1, _DWORD *a2)
{
  return a1 == a2
      || *a1 == *a2
      && a1[1] == a2[1]
      && a1[2] == a2[2]
      && a1[3] == a2[3]
      && a1[4] == a2[4]
      && a1[5] == a2[5]
      && a1[6] == a2[6];
}
