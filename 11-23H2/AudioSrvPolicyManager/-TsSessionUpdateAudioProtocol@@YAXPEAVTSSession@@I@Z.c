/*
 * XREFs of ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x180039758
 * Callers:
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180038214 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDisconnect@@YAXK@Z @ 0x18003847C (-TsSessionIdDisconnect@@YAXK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180038CD4 (-TsSessionIdTerminate@@YAJK@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ?TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z @ 0x180038F48 (-TsSessionMayBeDeleted@@YA_NPEAVTSSession@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18003A4CC (-erase@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@s.c)
 */

void __fastcall TsSessionUpdateAudioProtocol(struct TSSession *a1, int a2)
{
  int v2; // esi
  _QWORD *i; // rbx
  unsigned int *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v10[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = 0;
  if ( a2 != 0xFFFF && a2 )
    v2 = ++dword_1800617C4;
  if ( *((_DWORD *)a1 + 1) != a2 || *((_DWORD *)a1 + 2) != v2 )
  {
    *((_DWORD *)a1 + 1) = a2;
    *((_DWORD *)a1 + 2) = v2;
    for ( i = (_QWORD *)*((_QWORD *)a1 + 2); i; i = (_QWORD *)*i )
    {
      v6 = (unsigned int *)i[1];
      v10[0] = 32;
      v10[1] = 0x2000;
      v10[6] = a2;
      v7 = *v6;
      v10[7] = v2;
      GenerateMediaEvent(v10, v7);
    }
  }
  if ( TsSessionMayBeDeleted(a1) )
  {
    EnterCriticalSection(&stru_180061648);
    v9 = &stru_180061648;
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::erase(
      v8,
      a1);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  }
}
