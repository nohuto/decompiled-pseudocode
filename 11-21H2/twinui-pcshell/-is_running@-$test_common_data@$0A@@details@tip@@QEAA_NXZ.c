/*
 * XREFs of ?is_running@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18004764C
 * Callers:
 *     ?v_DismissView@TaskViewHost@@MEAAXXZ @ 0x180041AE0 (-v_DismissView@TaskViewHost@@MEAAXXZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x1805FE150 (-v_DismissView@XamlAltTabViewHost@@MEAAXXZ.c)
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x180605380 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall tip::details::test_common_data<0>::is_running(__int64 a1)
{
  bool v2; // bl
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  wil::AcquireSRWLockExclusive(v4, a1 + 16);
  v2 = 0;
  if ( *(_QWORD *)(a1 + 120) )
    v2 = (*(_DWORD *)(a1 + 24) & 0x100) == 0;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v4);
  return v2;
}
