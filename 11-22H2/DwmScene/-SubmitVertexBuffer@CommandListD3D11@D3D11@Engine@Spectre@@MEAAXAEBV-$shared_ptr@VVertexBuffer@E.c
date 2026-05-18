/*
 * XREFs of ?SubmitVertexBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@III@Z @ 0x1800D3260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDeviceBuffer@ArrayBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@W4RenderDeviceID@23@@Z @ 0x180088B9C (-GetDeviceBuffer@ArrayBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VDeviceArrayBuffer@Engine@Spect.c)
 *     ?GetBuffer@VertexBufferD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@XZ @ 0x1800D03CC (-GetBuffer@VertexBufferD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Buffer@@@WRL@Microsoft.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void Spectre::Engine::D3D11::CommandListD3D11::SubmitVertexBuffer(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        ...)
{
  __int64 *DeviceBuffer; // rax
  char v7; // bl
  __int64 v8; // rdi
  std::_Ref_count_base *v9; // rsi
  char v10; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v11; // [rsp+48h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-20h]
  std::_Ref_count_base *v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v15; // [rsp+68h] [rbp-8h]
  __int64 v16; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+38h] BYREF
  int v18; // [rsp+B8h] [rbp+48h] BYREF
  va_list va; // [rsp+C0h] [rbp+50h] BYREF

  va_start(va, a4);
  v18 = a4;
  LODWORD(v16) = 0;
  if ( *a2 )
  {
    DeviceBuffer = Spectre::Engine::ArrayBuffer::GetDeviceBuffer(*a2, &v14, *(_DWORD *)(a1 + 88));
    v7 = 1;
    v8 = *DeviceBuffer;
  }
  else
  {
    v11 = 0LL;
    DeviceBuffer = (__int64 *)&v10;
    v7 = 2;
    v8 = 0LL;
  }
  v12 = v8;
  v9 = (std::_Ref_count_base *)DeviceBuffer[1];
  v13 = v9;
  *DeviceBuffer = 0LL;
  DeviceBuffer[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  if ( (v7 & 1) != 0 && v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( v8 )
  {
    v16 = *Spectre::Engine::D3D11::VertexBufferD3D11::GetBuffer(v8, &v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  }
  else
  {
    v16 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *, char *, int *))(**(_QWORD **)(a1 + 144) + 144LL))(
    *(_QWORD *)(a1 + 144),
    a3,
    1LL,
    &v16,
    va,
    &v18);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
