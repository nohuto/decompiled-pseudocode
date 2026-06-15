/*
 * XREFs of ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FC730
 * Callers:
 *     _lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator() @ 0x1800F7BE0 (_lambda_cbfc2ac73cdc91d5edb18bccca546a72_--operator().c)
 *     _lambda_51b537ae7010953ae74a8f2f5f133c3e_::operator() @ 0x1800FE60C (_lambda_51b537ae7010953ae74a8f2f5f133c3e_--operator().c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800422B0 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall DeviceGraphStore::GetAllStreamGroups(__int64 a1)
{
  int v1; // ebx
  _QWORD *v2; // rdx
  _QWORD v4[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v5; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4[0] = off_180177580;
  v4[1] = a1;
  v5 = v4;
  v1 = CEndpointStoreCache::ForEachEndpoint(a1, (__int64)v4);
  if ( v5 )
  {
    v2 = v4;
    LOBYTE(v2) = v5 != v4;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v5 + 32LL))(v5, v2);
  }
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x314,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
    (const char *)(unsigned int)v1);
  return (unsigned int)v1;
}
