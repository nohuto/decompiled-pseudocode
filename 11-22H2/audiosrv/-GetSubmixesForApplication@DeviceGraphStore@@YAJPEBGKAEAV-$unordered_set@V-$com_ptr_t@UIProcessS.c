/*
 * XREFs of ?GetSubmixesForApplication@DeviceGraphStore@@YAJPEBGKAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@@Z @ 0x18010C890
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800D1B34 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800D3304 (-clear@-$_Hash@V-$_Uset_traits@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetSubmixHelper@DeviceGraphStore@@YAJAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x18010C780 (-GetSubmixHelper@DeviceGraphStore@@YAJAEAV-$unordered_set@V-$com_ptr_t@UIProcessSubmixProxy@@Uer.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall DeviceGraphStore::GetSubmixesForApplication(__int64 a1, int a2, unsigned __int64 *a3)
{
  unsigned int SubmixHelper; // ebx
  __int64 (__fastcall ***v5)(); // rdx
  __int128 v7; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall **v8)(); // [rsp+40h] [rbp-58h] BYREF
  __int128 v9; // [rsp+48h] [rbp-50h]
  __int64 (__fastcall ***v10)(); // [rsp+78h] [rbp-20h]
  __int64 v11; // [rsp+A0h] [rbp+8h] BYREF
  int v12; // [rsp+A8h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::clear(a3);
  *(_QWORD *)&v7 = &v12;
  *((_QWORD *)&v7 + 1) = &v11;
  v8 = off_18017C6A0;
  v9 = v7;
  v10 = &v8;
  SubmixHelper = DeviceGraphStore::GetSubmixHelper((__int64)a3, (unsigned __int64)&v8);
  if ( v10 )
  {
    v5 = &v8;
    LOBYTE(v5) = v10 != &v8;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v10)[4])(v10, v5);
  }
  return SubmixHelper;
}
