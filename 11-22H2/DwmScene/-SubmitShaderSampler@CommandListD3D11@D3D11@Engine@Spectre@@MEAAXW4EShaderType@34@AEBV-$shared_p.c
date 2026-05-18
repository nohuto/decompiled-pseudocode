/*
 * XREFs of ?SubmitShaderSampler@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV?$shared_ptr@VSampler@Engine@Spectre@@@std@@I@Z @ 0x1800D23E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDeviceRenderState@RenderState@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceRenderState@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180054A8C (-GetDeviceRenderState@RenderState@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceRenderState@Engine@.c)
 *     ??$dynamic_pointer_cast@VSamplerD3D11@D3D11@Engine@Spectre@@VDeviceSampler@34@@std@@YA?AV?$shared_ptr@VSamplerD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceSampler@Engine@Spectre@@@0@@Z @ 0x1800CF814 (--$dynamic_pointer_cast@VSamplerD3D11@D3D11@Engine@Spectre@@VDeviceSampler@34@@std@@YA-AV-$share.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitShaderSampler(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4)
{
  __int64 v7; // rbx
  int v8; // edi
  int v9; // edi
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  std::_Ref_count_base *v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+90h] [rbp+30h] BYREF

  v15 = 0LL;
  if ( *a3 )
  {
    Spectre::Engine::RenderState::GetDeviceRenderState(*a3, &v13, *(_DWORD *)(a1 + 88));
    std::dynamic_pointer_cast<Spectre::Engine::D3D11::SamplerD3D11,Spectre::Engine::DeviceSampler>(&v11, &v13);
    v7 = *(_QWORD *)(v11 + 184);
    v10 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v15 = v7;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 3;
    if ( v9 )
    {
      if ( v9 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 80LL))(
          *(_QWORD *)(a1 + 144),
          a4,
          1LL,
          &v15);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 256LL))(
        *(_QWORD *)(a1 + 144),
        a4,
        1LL,
        &v15);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 208LL))(
      *(_QWORD *)(a1 + 144),
      a4,
      1LL,
      &v15);
  }
}
