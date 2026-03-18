/*
 * XREFs of ?SetIsDoubleSided@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z @ 0x1801A2FC4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnIsDoubleSidedChanged@CScenePbrMaterial@@QEAAXXZ @ 0x18023DC20 (-OnIsDoubleSidedChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetIsDoubleSided(
        CScenePbrMaterial *a1,
        char a2)
{
  if ( a2 != *((_BYTE *)a1 + 108) )
  {
    *((_BYTE *)a1 + 108) = a2;
    CScenePbrMaterial::OnIsDoubleSidedChanged(a1);
  }
  return 0LL;
}
