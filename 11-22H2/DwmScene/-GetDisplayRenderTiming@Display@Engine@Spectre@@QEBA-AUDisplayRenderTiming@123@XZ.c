/*
 * XREFs of ?GetDisplayRenderTiming@Display@Engine@Spectre@@QEBA?AUDisplayRenderTiming@123@XZ @ 0x180057958
 * Callers:
 *     ?SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z @ 0x180036A54 (-SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall Spectre::Engine::Display::GetDisplayRenderTiming(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 464);
  *a2 = *(_OWORD *)(a1 + 448);
  a2[1] = v3;
  return result;
}
