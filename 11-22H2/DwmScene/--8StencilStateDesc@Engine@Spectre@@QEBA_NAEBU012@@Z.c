/*
 * XREFs of ??8StencilStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z @ 0x180043C24
 * Callers:
 *     ??8RenderStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z @ 0x180043B4C (--8RenderStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::StencilStateDesc::operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
