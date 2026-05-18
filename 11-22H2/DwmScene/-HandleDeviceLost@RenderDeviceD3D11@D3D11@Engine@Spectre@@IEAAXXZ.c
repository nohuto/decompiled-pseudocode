/*
 * XREFs of ?HandleDeviceLost@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXXZ @ 0x1800C5A84
 * Callers:
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::HandleDeviceLost(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  char *v5; // [rsp+38h] [rbp+10h]

  v2 = (Spectre::Engine::D3D11::RenderDeviceD3D11 *)((char *)this + 4168);
  v5 = (char *)this + 4168;
  std::_Mutex_base::lock((Spectre::Engine::D3D11::RenderDeviceD3D11 *)((char *)this + 4168));
  v3 = **((_QWORD **)this + 519);
  v4 = v3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    (***(void (__fastcall ****)(_QWORD, _QWORD))(v3 + 32))(*(_QWORD *)(v3 + 32), *((unsigned int *)this + 1062));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v4);
    v3 = v4;
  }
  _Mtx_unlock(v2);
}
