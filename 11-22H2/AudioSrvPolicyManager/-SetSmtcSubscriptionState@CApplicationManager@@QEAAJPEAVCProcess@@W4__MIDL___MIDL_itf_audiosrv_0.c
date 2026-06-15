/*
 * XREFs of ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18002F558
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call @ 0x180031120 (std--_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113F0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x1800144A0 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002E95C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetSmtcSubscriptionState(
        struct _RTL_CRITICAL_SECTION *a1,
        struct CProcess *a2,
        int a3,
        int a4)
{
  CApplicationManager *v7; // rdi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  int v9; // ebx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a1;
  v7 = g_ApplicationManager;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v11 = v8;
  v9 = CApplicationManager::Register(v7, a2);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v9);
    }
    AudPolicyLogError("CApplicationManager::SetSmtcSubscriptionState", 644, v9);
  }
  else
  {
    CProcess::SetHasSmtcSubscription((__int64)a2, a3, a4);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  return (unsigned int)v9;
}
