/*
 * XREFs of ?SubmitShaderConstantBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXW4EShaderType@34@AEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800D19A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetBlendState@RenderStateD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11BlendState@@@WRL@Microsoft@@XZ @ 0x1800D038C (-GetBlendState@RenderStateD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11BlendState@@@WRL@Mi.c)
 *     ?GetDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x1800D0488 (-GetDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceConstantBuffe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitShaderConstantBuffer(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4)
{
  __int64 *DeviceConstantBuffer; // rax
  char v8; // di
  __int64 v9; // rsi
  std::_Ref_count_base *v10; // r14
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h]
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  std::_Ref_count_base *v18; // [rsp+58h] [rbp-8h]
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF

  if ( *a3 )
  {
    DeviceConstantBuffer = Spectre::Engine::ConstantBuffer::GetDeviceConstantBuffer(*a3, &v17, *(_DWORD *)(a1 + 88));
    v8 = 1;
    v9 = *DeviceConstantBuffer;
  }
  else
  {
    v14 = 0LL;
    DeviceConstantBuffer = &v13;
    v8 = 2;
    v9 = 0LL;
  }
  v15 = v9;
  v10 = (std::_Ref_count_base *)DeviceConstantBuffer[1];
  v16 = v10;
  *DeviceConstantBuffer = 0LL;
  DeviceConstantBuffer[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  if ( (v8 & 1) != 0 && v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( v9 )
  {
    v19 = *Spectre::Engine::D3D11::RenderStateD3D11::GetBlendState(v9, &v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  else
  {
    v19 = 0LL;
  }
  v11 = a2 - 1;
  if ( v11 )
  {
    v12 = v11 - 3;
    if ( v12 )
    {
      if ( v12 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 128LL))(
          *(_QWORD *)(a1 + 144),
          a4,
          1LL,
          &v19);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 176LL))(
        *(_QWORD *)(a1 + 144),
        a4,
        1LL,
        &v19);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 56LL))(
      *(_QWORD *)(a1 + 144),
      a4,
      1LL,
      &v19);
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
