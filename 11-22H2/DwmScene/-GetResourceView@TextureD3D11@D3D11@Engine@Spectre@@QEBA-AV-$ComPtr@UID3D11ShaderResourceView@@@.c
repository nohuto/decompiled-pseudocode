/*
 * XREFs of ?GetResourceView@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@XZ @ 0x1800CEFCC
 * Callers:
 *     ?SubmitShaderTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@I@Z @ 0x1800D2530 (-SubmitShaderTexture@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV-$shared_p.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ @ 0x1800CE020 (-EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ.c)
 */

__int64 *__fastcall Spectre::Engine::D3D11::TextureD3D11::GetResourceView(
        Spectre::Engine::D3D11::TextureD3D11 *a1,
        __int64 *a2)
{
  Spectre::Engine::D3D11::TextureD3D11::EnsureResourceView(a1);
  *a2 = *((_QWORD *)a1 + 20);
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(a2);
  return a2;
}
