/*
 * XREFs of ?EnsureProcessSubmixInSubmixContext@CProcessSubmixManager@@AEAAJAEBV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAUIProcessSubmixProxy@@@Z @ 0x1800D1920
 * Callers:
 *     _lambda_4353f9e11044a5b317e93e9c877fb0e4_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800CFF8C (_lambda_4353f9e11044a5b317e93e9c877fb0e4_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 * Callees:
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _lambda_6986283b23e7ccfa9503732e20a157f7_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800CFCB0 (_lambda_6986283b23e7ccfa9503732e20a157f7_--operator()_std--unique_ptr_CAppSubmixClient_std--defa.c)
 *     ??$emplace@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800D0E34 (--$emplace@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Use.c)
 *     ??0?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIProcessSubmixProxy@@@Z @ 0x1800D12C0 (--0-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIProcessSubmixPr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixManager::EnsureProcessSubmixInSubmixContext(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD **v6; // rdi
  _QWORD **i; // rbx
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a1;
  v4 = *a2;
  wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>(
    &v11,
    a3);
  std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::emplace<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
    (_QWORD *)(v4 + 24),
    (__int64)&v9,
    &v11);
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(&v11);
  if ( (_BYTE)v10 )
  {
    v5 = *a2;
    v6 = *(_QWORD ***)(*a2 + 96);
    v9 = &v12;
    v10 = a2;
    for ( i = *(_QWORD ***)(v5 + 88); i != v6; ++i )
      lambda_6986283b23e7ccfa9503732e20a157f7_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__(
        &v9,
        i);
  }
  return 0LL;
}
