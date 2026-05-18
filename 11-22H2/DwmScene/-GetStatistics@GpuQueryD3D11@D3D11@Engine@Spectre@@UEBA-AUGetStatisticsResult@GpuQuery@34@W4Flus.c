/*
 * XREFs of ?GetStatistics@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA?AUGetStatisticsResult@GpuQuery@34@W4FlushOption@634@@Z @ 0x1800D8130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@@Z @ 0x1800CF74C (--$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA-AV-$s.c)
 *     ?GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA?AV?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@XZ @ 0x1800D040C (-GetContext@CommandListD3D11@D3D11@Engine@Spectre@@QEAA-AV-$ComPtr@UID3D11DeviceContext1@@@WRL@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::D3D11::GpuQueryD3D11::GetStatistics(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-49h] BYREF
  std::_Ref_count_base *v9; // [rsp+38h] [rbp-41h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v10; // [rsp+40h] [rbp-39h] BYREF
  std::_Ref_count_base *v11; // [rsp+48h] [rbp-31h]
  _QWORD v12[12]; // [rsp+50h] [rbp-29h] BYREF

  if ( *(_DWORD *)(a1 + 136) == 1 )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*(_QWORD *)(a1 + 120) + 72LL, &v8);
    std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(
      (__int64 *)&v10,
      &v8);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    Spectre::Engine::D3D11::CommandListD3D11::GetContext(*(_QWORD *)(a1 + 120), &v8);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, __int64, bool))(*(_QWORD *)v8 + 232LL))(
           v8,
           *(_QWORD *)(a1 + 96),
           v12,
           88LL,
           a3 != 1);
    if ( v6 )
    {
      if ( v6 != 1 )
        Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v10, v6);
    }
    else
    {
      *(_QWORD *)(a1 + 208) = v12[6];
      *(_QWORD *)(a1 + 200) = v12[5];
      *(_QWORD *)(a1 + 240) = v12[10];
      *(_QWORD *)(a1 + 232) = v12[9];
      *(_QWORD *)(a1 + 184) = v12[3];
      *(_QWORD *)(a1 + 192) = v12[4];
      *(_QWORD *)(a1 + 224) = v12[8];
      *(_QWORD *)(a1 + 216) = v12[7];
      *(_QWORD *)(a1 + 168) = v12[1];
      *(_QWORD *)(a1 + 160) = v12[0];
      *(_QWORD *)(a1 + 176) = v12[2];
      *(_DWORD *)(a1 + 136) = 2;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 136) == 2 )
  {
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(a2 + 40) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 208);
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(a1 + 224);
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 240);
  }
  return a2;
}
