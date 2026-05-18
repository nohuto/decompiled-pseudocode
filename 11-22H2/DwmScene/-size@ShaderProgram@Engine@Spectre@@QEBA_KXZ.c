/*
 * XREFs of ?size@ShaderProgram@Engine@Spectre@@QEBA_KXZ @ 0x1800D45DC
 * Callers:
 *     ?Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT_DESC@@IAEBVShaderProgram@34@@Z @ 0x1800D3A4C (-Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT.c)
 *     ?Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D46B0 (-Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D5540 (-Load@PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7400 (-Load@GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D76A0 (-Load@DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 *     ?Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D7950 (-Load@HullShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Spectre::Engine::ShaderProgram::size(Spectre::Engine::ShaderProgram *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)this == v1 )
    return (unsigned int)(*((_DWORD *)this + 8) - *((_DWORD *)this + 6));
  else
    return v1 - *(_QWORD *)this;
}
