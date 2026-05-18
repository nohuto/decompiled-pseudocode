/*
 * XREFs of ?Load@VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA_NAEBVShaderProgram@34@@Z @ 0x1800D46B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@@Z @ 0x180029730 (-SetMemoryTrackingData@RendererResource@Engine@Spectre@@IEAAX_KW4Category@PerformanceManager@23@.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ??$static_pointer_cast@IX@std@@YA?AV?$shared_ptr@I@0@AEBV?$shared_ptr@X@0@@Z @ 0x180047A7C (--$static_pointer_cast@IX@std@@YA-AV-$shared_ptr@I@0@AEBV-$shared_ptr@X@0@@Z.c)
 *     ?empty@ShaderProgram@Engine@Spectre@@QEBA_NXZ @ 0x180050BC0 (-empty@ShaderProgram@Engine@Spectre@@QEBA_NXZ.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ?size@ShaderProgram@Engine@Spectre@@QEBA_KXZ @ 0x1800D45DC (-size@ShaderProgram@Engine@Spectre@@QEBA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall Spectre::Engine::D3D11::VertexShaderD3D11::Load(
        Spectre::Engine::D3D11::VertexShaderD3D11 *this,
        const struct Spectre::Engine::ShaderProgram *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64, unsigned __int64, _QWORD, char *); // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ebx
  const char *Name; // rax
  const char *v12; // rbx
  __int64 v13; // r14
  void (__fastcall *v14)(__int64, const GUID *, _QWORD, const char *); // r15
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  __int64 v19; // [rsp+38h] [rbp-51h] BYREF
  std::_Ref_count_base *v20; // [rsp+40h] [rbp-49h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v21; // [rsp+58h] [rbp-31h] BYREF
  std::_Ref_count_base *v22; // [rsp+60h] [rbp-29h]
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF

  if ( *((_BYTE *)this + 96) )
  {
    std::string::string(
      &v21,
      (__int64)"VertexShaderD3D11::Load() -- this function can only be called once per shader instance");
    v4 = std::string::string(
           &v19,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\vertexshaderd3d11.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v4,
      v5,
      (__int64)&v21,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !Spectre::Engine::ShaderProgram::empty(a2) )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 72, &v19);
    std::static_pointer_cast<unsigned int,void>(&v21, &v19);
    Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v21, &v18);
    v6 = v18;
    v7 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD, char *))(*(_QWORD *)v18 + 96LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
    v8 = Spectre::Engine::ShaderProgram::size(a2);
    v9 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == *((_QWORD *)a2 + 1) )
      v9 = *((_QWORD *)a2 + 3);
    v10 = v7(v6, v9, v8, 0LL, (char *)this + 104);
    Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v21, v10);
    if ( v10 >= 0 )
    {
      *((_BYTE *)this + 96) = 1;
      Name = (const char *)Spectre::Engine::RendererResource::GetName((__int64)this, pExceptionObject);
      v12 = Name;
      if ( *((_QWORD *)Name + 3) >= 0x10uLL )
        v12 = *(const char **)Name;
      v13 = *((_QWORD *)this + 13);
      if ( v13 )
      {
        v14 = *(void (__fastcall **)(__int64, const GUID *, _QWORD, const char *))(*(_QWORD *)v13 + 40LL);
        if ( v12 )
          v15 = strnlen(v12, 0x7FFFFFFFuLL);
        else
          v15 = 0;
        v14(v13, &WKPDID_D3DDebugObjectName, v15, v12);
      }
      std::string::_Tidy_deallocate((__int64)pExceptionObject);
      v16 = Spectre::Engine::ShaderProgram::size(a2);
      Spectre::Engine::RendererResource::SetMemoryTrackingData((__int64)this, v16, 8);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
  }
  return *((_BYTE *)this + 96);
}
