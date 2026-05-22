/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18018F9E8
 * Callers:
 *     ?GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x18019066C (-GetClientsForProcess@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClien.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180190798 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18003BDEC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1801314F8 (--$_Uninitialized_move@PEAV-$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180137064 (-_Change_array@-$vector@V-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wi.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x18018FCB0 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // r14
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 *result; // rax
  __int64 *v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v19 = v12;
  v14 = &v12[v5];
  try
  {
    wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
      v14,
      *a3);
    v20 = v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<wil::com_ptr_t<BamoDeviceDockClientProxy,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<BamoDeviceDockClientProxy,wil::err_returncode_policy>>>(
        v17,
        a2,
        v13);
      v20 = v13;
      v16 = v14 + 1;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<wil::com_ptr_t<BamoDeviceDockClientProxy,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<BamoDeviceDockClientProxy,wil::err_returncode_policy>>>(
      v17,
      v15,
      v16);
    std::vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::_Change_array(
      (__int64)a1,
      (__int64)v13,
      v8,
      v7);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>>(
      v20,
      v14 + 1);
    std::_Deallocate<16,0>(v19, 8 * v7);
    throw;
  }
  return result;
}
