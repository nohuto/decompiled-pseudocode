/*
 * XREFs of ??9Viewport@Engine@Spectre@@QEAA_NAEBU012@@Z @ 0x18009F2D4
 * Callers:
 *     ?Set@ViewportState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z @ 0x18009F390 (-Set@ViewportState@Engine@Spectre@@UEAAXPEAVCommandList@23@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::Viewport::operator!=(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3] || a1[4] != a2[4] || a1[5] != a2[5];
}
