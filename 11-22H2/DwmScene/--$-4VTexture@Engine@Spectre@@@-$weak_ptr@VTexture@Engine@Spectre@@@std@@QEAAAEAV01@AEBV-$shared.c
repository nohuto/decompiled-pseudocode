/*
 * XREFs of ??$?4VTexture@Engine@Spectre@@@?$weak_ptr@VTexture@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@1@@Z @ 0x180015630
 * Callers:
 *     ??$make_shared@VTexture@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@0@XZ @ 0x180017544 (--$make_shared@VTexture@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VTexture@Engine@Spectre@@@0@X.c)
 *     ?AttachDeviceTextureInternal@Texture@Engine@Spectre@@AEAAXV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@@Z @ 0x180055C68 (-AttachDeviceTextureInternal@Texture@Engine@Spectre@@AEAAXV-$shared_ptr@VDeviceTexture@Engine@Sp.c)
 *     ??$make_shared@VConstantBuffer@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@0@XZ @ 0x180084348 (--$make_shared@VConstantBuffer@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VConstantBuffer@Engine.c)
 *     ?AttachDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@Z @ 0x180084B94 (-AttachDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceConstant.c)
 *     ?Load@Shader@Engine@Spectre@@QEAA_NAEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008B028 (-Load@Shader@Engine@Spectre@@QEAA_NAEBV-$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z.c)
 *     ?Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008C1B0 (-Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV-$shared_ptr.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::weak_ptr<Spectre::Engine::Texture>::operator=<Spectre::Engine::Texture>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx

  v2 = a2[1];
  v4 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    v4 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v5 = v2;
  }
  *a1 = v4;
  v6 = (std::_Ref_count_base *)a1[1];
  a1[1] = v5;
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
  return a1;
}
