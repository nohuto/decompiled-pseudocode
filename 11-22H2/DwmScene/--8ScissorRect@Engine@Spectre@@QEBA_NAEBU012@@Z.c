/*
 * XREFs of ??8ScissorRect@Engine@Spectre@@QEBA_NAEBU012@@Z @ 0x180059CE4
 * Callers:
 *     ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360 (-CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     ?Set@ScissorState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009F520 (-Set@ScissorState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::ScissorRect::operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
