/*
 * XREFs of ??$?0AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18078D7C0
 * Callers:
 *     ??$_Emplace@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@_N@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18078DB80 (--$_Emplace@AEBV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@-$_Tree@V-$_Tse.c)
 * Callees:
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  size_t size_of; // rax
  _QWORD *v8; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v8;
  wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
    v8 + 4,
    *a4);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + a1[1] + 24) = 0;
  return a1;
}
