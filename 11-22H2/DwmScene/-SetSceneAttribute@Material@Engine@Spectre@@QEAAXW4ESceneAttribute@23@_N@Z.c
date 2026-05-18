/*
 * XREFs of ?SetSceneAttribute@Material@Engine@Spectre@@QEAAXW4ESceneAttribute@23@_N@Z @ 0x180044888
 * Callers:
 *     ?OnMeshUpdate@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_KAEBVFrameData@23@@Z @ 0x18009B520 (-OnMeshUpdate@BaseShaderExtension@Engine@Spectre@@UEAAXPEBVMeshInstance@23@_KAEBVFrameData@23@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Material::SetSceneAttribute(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = 1LL << a2;
  v4 = *(_QWORD *)(a1 + 160);
  if ( a3 )
  {
    v5 = result | v4;
  }
  else
  {
    result = ~result;
    v5 = result & v4;
  }
  *(_QWORD *)(a1 + 160) = v5;
  return result;
}
