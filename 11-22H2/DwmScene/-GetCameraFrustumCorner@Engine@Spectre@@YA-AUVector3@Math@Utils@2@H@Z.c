/*
 * XREFs of ?GetCameraFrustumCorner@Engine@Spectre@@YA?AUVector3@Math@Utils@2@H@Z @ 0x18005B9D8
 * Callers:
 *     ?RenderSymbols@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18005CA50 (-RenderSymbols@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::GetCameraFrustumCorner(__int64 a1, int a2)
{
  __int64 v2; // rdx
  int v3; // eax

  v2 = 3LL * a2;
  v3 = dword_180112560[v2 + 2];
  *(_QWORD *)a1 = *(_QWORD *)&dword_180112560[v2];
  *(_DWORD *)(a1 + 8) = v3;
  return a1;
}
