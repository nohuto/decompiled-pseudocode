/*
 * XREFs of ?GetBuffers@Mesh@Engine@Spectre@@IEAA?AV?$array@PEAVArrayBuffer@Engine@Spectre@@$08@std@@XZ @ 0x1800487D8
 * Callers:
 *     ?AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180047E90 (-AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?DetachDevice@Mesh@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180048750 (-DetachDevice@Mesh@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Engine::Mesh::GetBuffers(_QWORD *a1, _QWORD *a2)
{
  *a2 = a1[18];
  a2[1] = a1[22];
  a2[2] = a1[20];
  a2[3] = a1[24];
  a2[4] = a1[26];
  a2[5] = a1[28];
  a2[6] = a1[30];
  a2[7] = a1[32];
  a2[8] = a1[34];
  return a2;
}
