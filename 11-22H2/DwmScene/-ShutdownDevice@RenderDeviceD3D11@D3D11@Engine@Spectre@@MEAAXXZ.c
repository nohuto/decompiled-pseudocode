/*
 * XREFs of ?ShutdownDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C7540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Flush@CommandList@Engine@Spectre@@QEAAX_N@Z @ 0x18003935C (-Flush@CommandList@Engine@Spectre@@QEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::ShutdownDevice(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  _QWORD *v1; // rbx
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (_QWORD *)((char *)this + 272);
  Spectre::Engine::CommandList::Flush(*((Spectre::Engine::CommandList **)this + 34));
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 48LL))(*v1);
  *(_OWORD *)v3 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v1, (__int64 *)v3);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 532);
  *((_DWORD *)this + 1062) = 6;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 533) + 880LL))(*((_QWORD *)this + 533));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 533) + 888LL))(*((_QWORD *)this + 533));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 533);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 534);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 535);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 580);
}
