/*
 * XREFs of ?Internal_WaitForOperationHelper@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800D0624
 * Callers:
 *     ?FinalizeFlush@CommandListD3D11@D3D11@Engine@Spectre@@MEAAX_N@Z @ 0x1800D0160 (-FinalizeFlush@CommandListD3D11@D3D11@Engine@Spectre@@MEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?Flush@CommandList@Engine@Spectre@@QEAAX_N@Z @ 0x18003935C (-Flush@CommandList@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@@Z @ 0x1800CF74C (--$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA-AV-$s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::Internal_WaitForOperationHelper(
        Spectre::Engine::D3D11::CommandListD3D11 *this)
{
  _QWORD *Device; // rax
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, int *, __int64 *); // rbx
  int v5; // eax
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v6; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp-10h] BYREF
  std::_Ref_count_base *v9; // [rsp+48h] [rbp-8h]
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  int v12; // [rsp+80h] [rbp+30h] BYREF
  int v13; // [rsp+84h] [rbp+34h]

  v12 = 0;
  v13 = 0;
  v11 = 0LL;
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 72, &v8);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(
    (__int64 *)&v6,
    &v8);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  Device = Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice((__int64)v6, &v10);
  v3 = *Device;
  v4 = *(int (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)*Device + 192LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  LOBYTE(v4) = v4(v3, &v12, &v11) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( (_BYTE)v4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 224LL))(*((_QWORD *)this + 18), v11);
    Spectre::Engine::CommandList::Flush(this);
    LODWORD(v10) = 0;
    do
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64, _DWORD))(**((_QWORD **)this + 18) + 232LL))(
             *((_QWORD *)this + 18),
             v11,
             &v10,
             4LL,
             0);
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v6, v5);
          break;
        }
        _Thrd_yield();
      }
    }
    while ( !(_DWORD)v10 );
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
}
