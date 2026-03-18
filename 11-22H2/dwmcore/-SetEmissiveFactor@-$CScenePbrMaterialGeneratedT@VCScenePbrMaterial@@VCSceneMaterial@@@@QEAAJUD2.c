/*
 * XREFs of ?SetEmissiveFactor@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x1801C6B00
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnEmissiveFactorChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1802509A8 (-OnEmissiveFactorChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetEmissiveFactor(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 104) = v2;
  CScenePbrMaterial::OnEmissiveFactorChanged((CScenePbrMaterial *)a1);
  return 0LL;
}
