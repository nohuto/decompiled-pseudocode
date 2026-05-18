/*
 * XREFs of ?empty@ShaderProgram@Engine@Spectre@@QEBA_NXZ @ 0x180050BC0
 * Callers:
 *     ?AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EShaderType@23@VShaderProgram@23@@Z @ 0x18004F42C (-AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ?GetShader@ShaderManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18004FE4C (-GetShader@ShaderManager@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@V-$ba.c)
 *     ?Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D46B0 (-Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D5540 (-Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7400 (-Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D76A0 (-Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7950 (-Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::ShaderProgram::empty(Spectre::Engine::ShaderProgram *this)
{
  return *(_QWORD *)this == *((_QWORD *)this + 1) && *((_DWORD *)this + 8) == *((_DWORD *)this + 6);
}
