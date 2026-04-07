/*
 * XREFs of ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180040D9C
 * Callers:
 *     ?CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003F454 (-CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003FED0 (-ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@.c)
 * Callees:
 *     TestQueryData @ 0x180013850 (TestQueryData.c)
 *     ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x180013CB4 (-TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180041324 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x180042334 (-update_from_test_info@-$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x18004462C (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::details::test_common_data<0>::complete(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v4; // r8d
  struct TestInfo *v5; // rdx
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[2]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h]

  wil::AcquireSRWLockExclusive(v7, a1 + 16);
  *(_DWORD *)(a1 + 24) |= 0x300u;
  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    v4 = *(_DWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 120) = 0LL;
    if ( (unsigned int)TestQueryData(v2, 2u, v4, (__int64)v8) )
    {
      tip::details::test_common_data<0>::update_from_test_info(a1, v8);
      tip::details::test_common_data<0>::evaluate_and_report(v6, v9);
    }
    tip::details::TestInfoDelete((LPVOID *)v8, v5);
  }
  return wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v7);
}
