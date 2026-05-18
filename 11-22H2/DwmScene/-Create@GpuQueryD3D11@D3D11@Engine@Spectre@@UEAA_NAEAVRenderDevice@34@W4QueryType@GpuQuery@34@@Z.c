/*
 * XREFs of ?Create@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAA_NAEAVRenderDevice@34@W4QueryType@GpuQuery@34@@Z @ 0x1800D7D30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??$spectre_safe_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@Utils@Spectre@@YAPEAVRenderDeviceD3D11@D3D11@Engine@1@PEAVRenderDevice@41@@Z @ 0x1800D7BB8 (--$spectre_safe_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@Utils@Spectre@@Y.c)
 *     ?Reset@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8380 (-Reset@GpuQueryD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Spectre::Engine::D3D11::GpuQueryD3D11::Create(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  int v6; // r8d
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v7; // r15
  _QWORD *Device; // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64 *, __int64); // rdi
  int v11; // ebx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = Spectre::Utils::spectre_safe_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(a2);
  v7 = (Spectre::Engine::D3D11::RenderDeviceD3D11 *)v5;
  v13 = 0LL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      LODWORD(v13) = 2;
    }
    else if ( v6 == 2 )
    {
      LODWORD(v13) = 4;
    }
  }
  else
  {
    LODWORD(v13) = 3;
  }
  Device = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(v5, &v14);
  v9 = *Device;
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)*Device + 192LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 96));
  v11 = v10(v9, &v13, a1 + 96);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v7, v11);
  if ( v11 )
    return 0;
  *(_DWORD *)(a1 + 140) = a3;
  Spectre::Engine::D3D11::GpuQueryD3D11::Reset((Spectre::Engine::D3D11::GpuQueryD3D11 *)a1);
  return 1;
}
