/*
 * XREFs of ??$_Uninitialized_copy@PEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801C8E60
 * Callers:
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801C9198 (--0Edge@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801C77B4 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Uninitialized_copy<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 v6; // rcx

  for ( i = a1; i != a2; ++i )
  {
    v6 = *i;
    *a3 = *i;
    if ( v6 )
      (**(void (__fastcall ***)(__int64))(v6 + 16))(v6 + 16);
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(a3, a3);
  return a3;
}
