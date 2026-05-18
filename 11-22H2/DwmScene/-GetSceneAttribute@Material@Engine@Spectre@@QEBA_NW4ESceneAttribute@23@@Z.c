/*
 * XREFs of ?GetSceneAttribute@Material@Engine@Spectre@@QEBA_NW4ESceneAttribute@23@@Z @ 0x1800443E8
 * Callers:
 *     ?PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18004C270 (-PostUpdate@MeshInstance@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall Spectre::Engine::Material::GetSceneAttribute(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 160);
  return _bittest64(&v2, a2);
}
