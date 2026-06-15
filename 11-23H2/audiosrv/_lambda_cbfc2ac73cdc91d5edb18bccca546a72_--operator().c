/*
 * XREFs of _lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator() @ 0x180105130
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_::_Do_call @ 0x18010AE40 (std--_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_--_Do_call.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081418 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18010BE38 (-GetAllStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 */

// Hidden C++ exception states: #wind=1
void lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator()()
{
  __int64 *v0; // rdi
  __int64 *v1; // rbx
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  v3 = 0LL;
  DeviceGraphStore::GetAllStreamGroups(&v2);
  v0 = (__int64 *)*((_QWORD *)&v2 + 1);
  v1 = (__int64 *)v2;
  if ( (_QWORD)v2 != *((_QWORD *)&v2 + 1) )
  {
    do
      (*(void (**)(void))(*(_QWORD *)*v1++ + 400LL))();
    while ( v1 != v0 );
    v0 = (__int64 *)*((_QWORD *)&v2 + 1);
    v1 = (__int64 *)v2;
  }
  if ( v1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v1, v0);
    std::_Deallocate<16,0>((void *)v2, (v3 - v2) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
