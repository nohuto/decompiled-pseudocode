/*
 * XREFs of ?GetMipLevels@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056828
 * Callers:
 *     ?EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ @ 0x1800CE020 (-EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ.c)
 *     ?SubmitCopyTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@IIII0II@Z @ 0x1800D0870 (-SubmitCopyTexture2D@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VTexture@Engin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::DeviceTexture::GetMipLevels(Spectre::Engine::DeviceTexture *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 14);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
