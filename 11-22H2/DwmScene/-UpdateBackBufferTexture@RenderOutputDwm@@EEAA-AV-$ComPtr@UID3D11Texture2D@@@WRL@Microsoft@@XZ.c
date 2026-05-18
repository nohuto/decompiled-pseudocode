/*
 * XREFs of ?UpdateBackBufferTexture@RenderOutputDwm@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x180011850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall RenderOutputDwm::UpdateBackBufferTexture(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 1696);
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(a2);
  return a2;
}
