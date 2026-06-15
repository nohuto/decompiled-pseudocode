/*
 * XREFs of _lambda_f0b6db72f90930fb0e220606623a5dd0_::operator() @ 0x1800D8A98
 * Callers:
 *     wil::details::lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___::_lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___ @ 0x1800D8660 (wil--details--lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___--_lambda_call__lambda_f0b6.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081448 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18010BE88 (-GetAllStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f0b6db72f90930fb0e220606623a5dd0_::operator()(_QWORD **a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  DeviceGraphStore::GetAllStreamGroups(&v4);
  v2 = (__int64 *)*((_QWORD *)&v4 + 1);
  v3 = (__int64 *)v4;
  if ( (_QWORD)v4 != *((_QWORD *)&v4 + 1) )
  {
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v3 + 400LL))(*v3, **a1);
      ++v3;
    }
    while ( v3 != v2 );
    v2 = (__int64 *)*((_QWORD *)&v4 + 1);
    v3 = (__int64 *)v4;
  }
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v3, v2);
    std::_Deallocate<16,0>((void *)v4, (v5 - v4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
