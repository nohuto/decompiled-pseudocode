/*
 * XREFs of Spectre::Engine::D3D11::GetFormat @ 0x1800CE990
 * Callers:
 *     _anonymous_namespace_::GetD3DTextureFormat @ 0x1800CE0DC (_anonymous_namespace_--GetD3DTextureFormat.c)
 *     ?GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@II@Z @ 0x1800CEC40 (-GetOrCreateCPUStagingTexture@TextureD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11Texture2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::D3D11::GetFormat(int a1, char a2)
{
  int v2; // edx

  if ( (unsigned int)(a1 - 23) <= 1 )
    v2 = 2;
  else
    v2 = (a2 & 8) != 0;
  return Spectre::Engine::D3D11::D3DUtils::GetFormat(a1, v2);
}
