/*
 * XREFs of ?GetSubmixHelper@DeviceGraphStore@@YAJAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x18010C780
 * Callers:
 *     ?GetFilteredSubmixes@DeviceGraphStore@@YAJKW4ProcessSubmixCapture@@KAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@@Z @ 0x18010C25C (-GetFilteredSubmixes@DeviceGraphStore@@YAJKW4ProcessSubmixCapture@@KAEAV-$unordered_set@V-$com_p.c)
 *     ?GetSubmixesForApplication@DeviceGraphStore@@YAJPEBGKAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@@Z @ 0x18010C890 (-GetSubmixesForApplication@DeviceGraphStore@@YAJPEBGKAEAV-$unordered_set@V-$com_ptr_t@UIProcessS.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall DeviceGraphStore::GetSubmixHelper(__int64 a1, unsigned __int64 a2)
{
  int v2; // ebx
  __int64 (__fastcall ***v3)(); // rdx
  __int64 (__fastcall **v5)(); // [rsp+40h] [rbp-58h] BYREF
  unsigned __int128 v6; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall ***v7)(); // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v5 = off_18017C640;
  v6 = __PAIR128__(a1, a2);
  v7 = &v5;
  v2 = CEndpointStoreCache::ForEachEndpoint(a1, (__int64)&v5);
  if ( v7 )
  {
    v3 = &v5;
    LOBYTE(v3) = v7 != &v5;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v7)[4])(v7, v3);
  }
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x302,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
