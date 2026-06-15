/*
 * XREFs of ?ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z @ 0x18002C834
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_::_Do_call @ 0x180039E90 (std--_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     WPP_SF_ @ 0x18001F1CC (WPP_SF_.c)
 *     ?MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18002D184 (-MuteAllAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18002F50C (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplySessionMuteChanges(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        unsigned int a3)
{
  CApplicationManager *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8 = v6;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids);
  }
  CApplicationManager::MuteAllAppsInSession(v5, a3);
  CApplicationManager::UnmuteDesktopAppsInSession(v5, a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return 0LL;
}
