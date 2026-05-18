/*
 * XREFs of ?Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT_DESC@@IAEBVShaderProgram@34@@Z @ 0x1800D3A4C
 * Callers:
 *     ?CreateInternal@VertexLayoutD3D11@D3D11@Engine@Spectre@@MEAAXAEAVRenderDevice@34@AEBVShaderProgram@34@@Z @ 0x1800D4350 (-CreateInternal@VertexLayoutD3D11@D3D11@Engine@Spectre@@MEAAXAEAVRenderDevice@34@AEBVShaderProgr.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HJAEBV34@_N@Z @ 0x18006ED68 (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$a_ea_18006ED68.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11InputLayout@@@WRL@Microsoft@@@Z @ 0x1800D3BA8 (-Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11InputLayout@@@WRL@Microsof.c)
 *     ?size@ShaderProgram@Engine@Spectre@@QEBA_KXZ @ 0x1800D45DC (-size@ShaderProgram@Engine@Spectre@@QEBA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::VertexLayoutD3D11::Create(
        Spectre::Engine::D3D11::VertexLayoutD3D11 *this,
        struct Spectre::Engine::RenderDevice *a2,
        struct D3D11_INPUT_ELEMENT_DESC *a3,
        unsigned int a4,
        const struct Spectre::Engine::ShaderProgram *a5)
{
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, struct D3D11_INPUT_ELEMENT_DESC *, _QWORD); // r13
  int v11; // ebx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // [rsp+40h] [rbp-91h] BYREF
  __int64 v15; // [rsp+48h] [rbp-89h] BYREF
  __int64 v16; // [rsp+50h] [rbp-81h] BYREF
  _QWORD v17[4]; // [rsp+58h] [rbp-79h] BYREF
  _QWORD v18[4]; // [rsp+78h] [rbp-59h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-39h] BYREF

  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)a2, &v16);
  v14 = 0LL;
  v9 = v16;
  v10 = *(__int64 (__fastcall **)(__int64, struct D3D11_INPUT_ELEMENT_DESC *, _QWORD))(*(_QWORD *)v16 + 88LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  Spectre::Engine::ShaderProgram::size(a5);
  v11 = v10(v9, a3, a4);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(a2, v11);
  if ( v11 < 0 )
  {
    std::string::string(v18, (__int64)"VertexLayoutD3D11::Create() -- Direct3D could not create the input layout");
    v12 = std::string::string(
            v17,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\vertexlayoutd3d11.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v12, v13, v11, (const char *)v18, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v15 = v14;
  v14 = 0LL;
  Spectre::Engine::D3D11::VertexLayoutD3D11::Create(this, &v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
}
