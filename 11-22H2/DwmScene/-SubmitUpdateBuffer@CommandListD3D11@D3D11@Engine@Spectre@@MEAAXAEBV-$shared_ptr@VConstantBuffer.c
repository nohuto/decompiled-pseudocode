/*
 * XREFs of ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z @ 0x180070AF0 (-IncrementCounter@PerformanceManager@Engine@Spectre@@QEAAXW4Category@123@W4Property@123@_J@Z.c)
 *     ?Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ @ 0x180070B14 (-Instance@PerformanceManager@Engine@Spectre@@SAAEAV123@XZ.c)
 *     ?GetBlendState@RenderStateD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11BlendState@@@WRL@Microsoft@@XZ @ 0x1800D038C (-GetBlendState@RenderStateD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11BlendState@@@WRL@Mi.c)
 *     ?GetDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x1800D0488 (-GetDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceConstantBuffe.c)
 *     ?UpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXPEAUID3D11Buffer@@PEBXI@Z @ 0x1800D3560 (-UpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXPEAUID3D11Buffer@@PEBXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitUpdateBuffer(
        Spectre::Engine::D3D11::CommandListD3D11 *this,
        __int64 a2,
        const void *a3,
        unsigned int a4)
{
  struct Spectre::Engine::PerformanceManager *v7; // rax
  __int64 *v8; // r10
  __int64 *DeviceConstantBuffer; // rax
  char v10; // bl
  __int64 v11; // rsi
  std::_Ref_count_base *v12; // rdi
  struct ID3D11Buffer *v13; // rbx
  char v14; // [rsp+20h] [rbp-48h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  std::_Ref_count_base *v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v19; // [rsp+48h] [rbp-20h]
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v20) = 0;
  v7 = Spectre::Engine::PerformanceManager::Instance();
  Spectre::Engine::PerformanceManager::IncrementCounter((__int64)v7, 7, 4);
  if ( *v8 )
  {
    DeviceConstantBuffer = Spectre::Engine::ConstantBuffer::GetDeviceConstantBuffer(*v8, &v18, *((_DWORD *)this + 22));
    v10 = 1;
    v11 = *DeviceConstantBuffer;
  }
  else
  {
    v15 = 0LL;
    DeviceConstantBuffer = (__int64 *)&v14;
    v10 = 2;
    v11 = 0LL;
  }
  v16 = v11;
  v12 = (std::_Ref_count_base *)DeviceConstantBuffer[1];
  v17 = v12;
  *DeviceConstantBuffer = 0LL;
  DeviceConstantBuffer[1] = 0LL;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
  }
  if ( (v10 & 1) != 0 && v19 )
    std::_Ref_count_base::_Decref(v19);
  v13 = (struct ID3D11Buffer *)*Spectre::Engine::D3D11::RenderStateD3D11::GetBlendState(v11, &v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  Spectre::Engine::D3D11::CommandListD3D11::UpdateBuffer(this, v13, a3, a4);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
