/*
 * XREFs of ?HandleOutOfMemory@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAA_NXZ @ 0x1800C5B0C
 * Callers:
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Spectre::Engine::D3D11::RenderDeviceD3D11::HandleOutOfMemory(
        Spectre::Engine::D3D11::RenderDeviceD3D11 *this)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  char v3; // si
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  char *v7; // [rsp+38h] [rbp+10h]

  v2 = (Spectre::Engine::D3D11::RenderDeviceD3D11 *)((char *)this + 4168);
  v7 = (char *)this + 4168;
  std::_Mutex_base::lock((Spectre::Engine::D3D11::RenderDeviceD3D11 *)((char *)this + 4168));
  v3 = 0;
  v4 = **((_QWORD **)this + 517);
  v6 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    if ( v3 || (***(unsigned __int8 (__fastcall ****)(_QWORD))(v4 + 32))(*(_QWORD *)(v4 + 32)) )
      v3 = 1;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v6);
    v4 = v6;
  }
  _Mtx_unlock(v2);
  return v3;
}
