/*
 * XREFs of ?SubmitIndexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800D0FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDeviceBuffer@ArrayBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180088B9C (-GetDeviceBuffer@ArrayBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceArrayBuffer@Engine@Spect.c)
 *     ?GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA?AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z @ 0x1800C9E48 (-GetFormat@D3DUtils@D3D11@Engine@Spectre@@SA-AW4DXGI_FORMAT@@W4Format@34@W4ColorSpace@234@@Z.c)
 *     ?GetBuffer@VertexBufferD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@XZ @ 0x1800D03CC (-GetBuffer@VertexBufferD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Buffer@@@WRL@Microsoft.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::SubmitIndexBuffer(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 *DeviceBuffer; // rax
  char v7; // bl
  __int64 v8; // rdi
  std::_Ref_count_base *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 Format; // r8
  char v13; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-40h]
  __int64 v15; // [rsp+40h] [rbp-38h]
  std::_Ref_count_base *v16; // [rsp+48h] [rbp-30h]
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  std::_Ref_count_base *v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v19) = 0;
  if ( *a2 )
  {
    DeviceBuffer = Spectre::Engine::ArrayBuffer::GetDeviceBuffer(*a2, &v17, *(_DWORD *)(a1 + 88));
    v7 = 1;
    v8 = *DeviceBuffer;
  }
  else
  {
    v14 = 0LL;
    DeviceBuffer = (__int64 *)&v13;
    v7 = 2;
    v8 = 0LL;
  }
  v15 = v8;
  v9 = (std::_Ref_count_base *)DeviceBuffer[1];
  v16 = v9;
  *DeviceBuffer = 0LL;
  DeviceBuffer[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  if ( (v7 & 1) != 0 && v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( v8 )
  {
    v10 = *Spectre::Engine::D3D11::VertexBufferD3D11::GetBuffer(v8, &v19);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    v11 = *(_QWORD *)(*a2 + 112);
    if ( v11 )
      LODWORD(v11) = *(_DWORD *)(v11 + 20);
    Format = (unsigned int)Spectre::Engine::D3D11::D3DUtils::GetFormat(v11, 0);
  }
  else
  {
    v10 = 0LL;
    Format = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 152LL))(
    *(_QWORD *)(a1 + 144),
    v10,
    Format,
    a3);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
