/*
 * XREFs of _lambda_9eab5fffffb4d5efa4b277bf7cba1fe6_::operator() @ 0x1800345E8
 * Callers:
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180038374 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180009190 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800342B8 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x180038F48 (-TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18003A4CC (-erase@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@s.c)
 */

__int64 __fastcall lambda_9eab5fffffb4d5efa4b277bf7cba1fe6_::operator()(__int64 **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 *v5; // rax
  struct TSSession *v6; // rbx
  __int64 v7; // r9
  __int64 **v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // r8
  __int64 *v11; // rax
  __int64 v12; // rcx
  char *v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct TSSession *v17; // [rsp+50h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+18h] BYREF

  v2 = TsSessionFromSessionId(*(_DWORD *)(**a1 + 164), 0, &v17);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *a1;
    v6 = v17;
    v14 = 0LL;
    v7 = *v5;
    v8 = (__int64 **)((char *)v17 + 40);
    v15 = &v14;
    v9 = (__int64 *)*((_QWORD *)v17 + 5);
    v13 = (char *)v17 + 40;
    while ( v9 )
    {
      if ( v9[1] == v7 )
      {
        v10 = *v8;
        v9 = (__int64 *)**v8;
        *v10 = 0LL;
        *v8 = v9;
        *v15 = (__int64)v10;
        v15 = v10;
      }
      else
      {
        v8 = (__int64 **)v9;
        v9 = (__int64 *)*v9;
      }
    }
    std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v13);
    if ( TsSessionMayBeDeleted(v6) )
    {
      EnterCriticalSection(&stru_180061648);
      v11 = *a1;
      v18 = &stru_180061648;
      v12 = *v11;
      LODWORD(v17) = *(_DWORD *)(*v11 + 164);
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::erase(
        v12,
        &v17);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x585,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
