/*
 * XREFs of ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18010BE88
 * Callers:
 *     _lambda_f0b6db72f90930fb0e220606623a5dd0_::operator() @ 0x1800D8A98 (_lambda_f0b6db72f90930fb0e220606623a5dd0_--operator().c)
 *     _lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator() @ 0x180105180 (_lambda_cbfc2ac73cdc91d5edb18bccca546a72_--operator().c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall DeviceGraphStore::GetAllStreamGroups(__int64 a1)
{
  int v1; // ebx
  _QWORD *v2; // rdx
  _QWORD v4[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v5; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4[0] = off_18017C610;
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
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
    (const char *)(unsigned int)v1);
  return (unsigned int)v1;
}
