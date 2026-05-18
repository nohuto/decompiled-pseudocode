/*
 * XREFs of ?Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11InputLayout@@@WRL@Microsoft@@@Z @ 0x1800D3BA8
 * Callers:
 *     ?Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT_DESC@@IAEBVShaderProgram@34@@Z @ 0x1800D3A4C (-Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Spectre::Engine::D3D11::VertexLayoutD3D11::Create(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = v3;
  v7 = v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
}
