/*
 * XREFs of ?GetReadableSampler@DepthBufferD3D11@D3D11@Engine@Spectre@@UEBA?AV?$shared_ptr@VDeviceSampler@Engine@Spectre@@@std@@W4ShaderAccessMode@DeviceDepthBuffer@34@@Z @ 0x1800D6D00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::D3D11::DepthBufferD3D11::GetReadableSampler(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r9
  int v4; // r8d
  int v5; // r8d
  _QWORD *v6; // rdx

  v3 = a2;
  v4 = a3 - 1;
  if ( !v4 )
  {
    v6 = a1 + 26;
    goto LABEL_8;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = a1 + 28;
    goto LABEL_8;
  }
  if ( v5 == 1 )
  {
    v6 = a1 + 30;
LABEL_8:
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v3, v6);
    return v3;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  return v3;
}
