/*
 * XREFs of ??$make_unique@$$BY0A@E$0A@@std@@YA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@_K@Z @ 0x1400A03D4
 * Callers:
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x1400A04C0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x140028518 (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<unsigned char [0],0>(_QWORD *a1, size_t a2)
{
  void *v4; // rbx

  v4 = operator new[](a2);
  memset_0(v4, 0, a2);
  *a1 = v4;
  return a1;
}
