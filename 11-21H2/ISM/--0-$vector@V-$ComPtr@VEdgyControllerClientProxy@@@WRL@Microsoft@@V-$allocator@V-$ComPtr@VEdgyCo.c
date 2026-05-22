/*
 * XREFs of ??0?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801AAC80
 * Callers:
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801AAE00 (--0Edge@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18003BDEC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801A93F8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>(
        __int64 **a1,
        __int64 **a2)
{
  __int64 *v3; // r14
  __int64 *v4; // rbp
  size_t size_of; // rax
  __int64 *v6; // rdi
  __int64 v7; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *a2;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    size_of = std::_Get_size_of_n<8>(v4 - v3);
    v6 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = &v6[v4 - v3];
    do
    {
      v7 = *v3;
      *v6 = *v3;
      if ( v7 )
        (**(void (__fastcall ***)(__int64))(v7 + 16))(v7 + 16);
      ++v6;
      ++v3;
    }
    while ( v3 != v4 );
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(v6, v6);
    a1[1] = v6;
  }
  return a1;
}
