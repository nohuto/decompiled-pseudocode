/*
 * XREFs of ?GetData@GpuQueryD3D11@D3D11@Engine@Spectre@@UEBA?AUGetDataResult@GpuQuery@34@W4FlushOption@634@@Z @ 0x1800D7F10
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
__int64 __fastcall Spectre::Engine::D3D11::GpuQueryD3D11::GetData(__int64 a1, __int64 a2, int a3)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v12; // [rsp+38h] [rbp-38h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v13; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v14; // [rsp+48h] [rbp-28h]
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 136) != 1 )
    goto LABEL_19;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(*(_QWORD *)(a1 + 120) + 72LL, &v11);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(
    (__int64 *)&v13,
    &v11);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  Spectre::Engine::D3D11::CommandListD3D11::GetContext(*(_QWORD *)(a1 + 120), &v11);
  v6 = *(_DWORD *)(a1 + 140);
  if ( !v6 )
  {
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64, bool))(*(_QWORD *)v11 + 232LL))(
           v11,
           *(_QWORD *)(a1 + 96),
           &v15,
           16LL,
           a3 != 1);
    if ( !v8 )
    {
      *(_QWORD *)(a1 + 144) = v15;
      *(_BYTE *)(a1 + 152) = DWORD2(v15) != 0;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64, bool))(*(_QWORD *)v11 + 232LL))(
           v11,
           *(_QWORD *)(a1 + 96),
           &v15,
           8LL,
           a3 != 1);
    if ( !v8 )
    {
      v9 = v15;
      goto LABEL_9;
    }
LABEL_15:
    if ( v8 != 1 )
    {
      Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v13, v8);
      *(_DWORD *)(a1 + 136) = 5;
    }
    goto LABEL_17;
  }
  if ( v7 != 2 )
    goto LABEL_17;
  LODWORD(v15) = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, __int64, bool))(*(_QWORD *)v11 + 232LL))(
         v11,
         *(_QWORD *)(a1 + 96),
         &v15,
         4LL,
         a3 != 1);
  if ( v8 )
    goto LABEL_15;
  v9 = (int)v15;
LABEL_9:
  *(_QWORD *)(a1 + 144) = v9;
LABEL_14:
  *(_DWORD *)(a1 + 136) = 2;
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
LABEL_19:
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 16) = 1;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 136);
  if ( *(_DWORD *)(a1 + 136) == 2 )
    *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 144);
  return a2;
}
