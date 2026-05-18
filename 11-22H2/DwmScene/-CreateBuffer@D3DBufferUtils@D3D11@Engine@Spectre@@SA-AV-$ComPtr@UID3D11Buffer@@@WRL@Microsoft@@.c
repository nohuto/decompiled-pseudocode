/*
 * XREFs of ?CreateBuffer@D3DBufferUtils@D3D11@Engine@Spectre@@SA?AV?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@PEBDAEAVRenderDeviceD3D11@234@AEAUArrayBufferDesc@34@PEBXW4D3D11_BIND_FLAG@@@Z @ 0x1800D8568
 * Callers:
 *     ?CreateInternal@VertexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z @ 0x1800D3710 (-CreateInternal@VertexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z.c)
 *     ?CreateInternal@IndexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z @ 0x1800D83D0 (-CreateInternal@IndexBufferD3D11@D3D11@Engine@Spectre@@MEAAXPEBX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HJAEBV34@_N@Z @ 0x18006ED68 (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$a_ea_18006ED68.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Spectre::Engine::D3D11::D3DBufferUtils::CreateBuffer(
        __int64 *a1,
        __int64 a2,
        Spectre::Engine::D3D11::RenderDeviceD3D11 *a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  int v8; // eax
  __int128 *v9; // rcx
  __int128 *v10; // r14
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, int *, __int128 *, __int64 *); // rdi
  int v13; // ebx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v17[3]; // [rsp+38h] [rbp-A1h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-89h] BYREF
  int v19; // [rsp+70h] [rbp-69h] BYREF
  int v20; // [rsp+74h] [rbp-65h]
  int v21; // [rsp+78h] [rbp-61h]
  __int64 v22; // [rsp+7Ch] [rbp-5Dh]
  int v23; // [rsp+84h] [rbp-55h]
  _QWORD v24[4]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v26; // [rsp+E0h] [rbp+7h] BYREF

  v17[1] = (__int64)a1;
  v22 = 0LL;
  v23 = 0;
  v19 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v9 = &v26;
  do
  {
    *(_DWORD *)v9 = v8++;
    v9 = (__int128 *)((char *)v9 + 4);
  }
  while ( v8 < 4 );
  v20 = *((_DWORD *)&v26 + *(unsigned int *)(a4 + 24));
  v21 = a6;
  Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)a3, v17);
  v26 = 0LL;
  v10 = 0LL;
  if ( v20 == 2 )
  {
    LODWORD(v22) = 0x10000;
  }
  else
  {
    *(_QWORD *)&v26 = a5;
    v10 = &v26;
  }
  *a1 = 0LL;
  v11 = v17[0];
  v12 = *(__int64 (__fastcall **)(__int64, int *, __int128 *, __int64 *))(*(_QWORD *)v17[0] + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  v13 = v12(v11, &v19, v10, a1);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(a3, v13);
  if ( v13 < 0 )
  {
    std::string::string(v24, (__int64)"D3DBufferUtils::CreateBuffer() - Direct3D could not create the buffer");
    v14 = std::string::string(
            v18,
            (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\d3dbufferutils.cpp");
    Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v14, v15, v13, (const char *)v24, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
  return a1;
}
