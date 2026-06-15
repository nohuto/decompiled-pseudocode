/*
 * XREFs of ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@@Z @ 0x18002D4EC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call @ 0x180030ED0 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Do_call.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180008FE0 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000C490 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800291DC (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002D32C (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     WPP_SF_Ss @ 0x180030050 (WPP_SF_Ss.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnApplicationStateChanged(
        struct CApplication *a1,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        int a5)
{
  CApplicationManager *v8; // rbp
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  int v10; // r8d
  int v11; // ebx
  const char *v12; // rax
  int Application; // edi
  struct CApplication *v14; // rdi
  __int64 v15; // rcx
  __int64 *Next; // rax
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+40h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+48h] [rbp-20h] BYREF
  struct CApplication *v20; // [rsp+70h] [rbp+8h] BYREF

  v20 = a1;
  v8 = g_ApplicationManager;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19 = v9;
  v11 = a5;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v12 = "LAUNCHED";
    if ( a5 )
      v12 = "PENDING_TERMINATION";
    WPP_SF_Ss(*((_QWORD *)WPP_GLOBAL_Control + 2), (unsigned int)"PENDING_TERMINATION", v10, (_DWORD)a2, (__int64)v12);
  }
  v20 = 0LL;
  Application = CApplicationManager::GetApplication(v8, a2, a3, a4, &v20, 0, 0LL);
  if ( Application >= 0 )
  {
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v14 = v20;
        if ( *((_DWORD *)v20 + 52) )
          CApplicationManager::OnApplicationClosed(v8, a2, *((CApplication **)v20 + 87), a4);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v14 + 32));
        v18 = (struct _RTL_CRITICAL_SECTION *)((char *)v14 + 32);
        v20 = (struct CApplication *)*((_QWORD *)v14 + 9);
        while ( v20 )
        {
          Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v15, (_QWORD **)&v20);
          v15 = *Next;
          if ( !*(_DWORD *)(*Next + 416) )
            *(_DWORD *)(v15 + 416) = 1;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
      }
    }
    else
    {
      CApplication::ReviveProcessesPendingTermination(v20);
    }
    Application = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  return (unsigned int)Application;
}
