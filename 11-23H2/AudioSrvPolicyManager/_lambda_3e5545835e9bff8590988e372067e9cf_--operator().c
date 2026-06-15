/*
 * XREFs of _lambda_3e5545835e9bff8590988e372067e9cf_::operator() @ 0x180034378
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3e5545835e9bff8590988e372067e9cf__void_::_Do_call @ 0x180039E80 (std--_Func_impl_no_alloc__lambda_3e5545835e9bff8590988e372067e9cf__void_--_Do_call.c)
 * Callees:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007E90 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180024274 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_3e5545835e9bff8590988e372067e9cf_::operator()(struct _RTL_CRITICAL_SECTION *a1)
{
  __int128 v1; // rdi
  __int64 v2; // rax
  _QWORD *v3; // rbx
  _DWORD *v4; // r8
  const char *v5; // r9
  void *v6; // rbx
  int *i; // r14
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+10h] BYREF

  v11 = a1;
  v8 = 0LL;
  v1 = 0LL;
  v9 = 0LL;
  CApplicationManager::Lock((__int64)a1, &v12);
  EnterCriticalSection(&stru_180061648);
  v11 = &stru_180061648;
  v2 = qword_1800616E8;
  v3 = *(_QWORD **)qword_1800616E8;
  while ( v3 != (_QWORD *)v2 )
  {
    v4 = (_DWORD *)v3[3];
    if ( *((_QWORD *)&v1 + 1) == (_QWORD)v1 )
    {
      try
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(
          (const void **)&v8,
          *((_BYTE **)&v1 + 1),
          v4);
        *(_QWORD *)&v1 = v9;
        *((_QWORD *)&v1 + 1) = *((_QWORD *)&v8 + 1);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x5AD,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          v5);
        *(_QWORD *)&v1 = v9;
        *((_QWORD *)&v1 + 1) = *((_QWORD *)&v8 + 1);
        goto LABEL_7;
      }
    }
    else
    {
      **((_DWORD **)&v1 + 1) = *v4;
      *((_QWORD *)&v1 + 1) += 4LL;
      *((_QWORD *)&v8 + 1) = *((_QWORD *)&v1 + 1);
    }
    v3 = (_QWORD *)*v3;
    v2 = qword_1800616E8;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
LABEL_7:
  v6 = (void *)v8;
  for ( i = (int *)v8; i != *((int **)&v1 + 1); ++i )
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *i, 1);
  if ( v6 )
    std::_Deallocate<16,0>(v6, (v1 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
}
