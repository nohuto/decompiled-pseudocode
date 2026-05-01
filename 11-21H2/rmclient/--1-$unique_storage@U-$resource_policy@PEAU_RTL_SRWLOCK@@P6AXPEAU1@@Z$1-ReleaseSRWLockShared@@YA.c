/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18000CE44
 * Callers:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18000F48C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x18000CA50 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  void (__stdcall *v3)(PSRWLOCK); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    v3 = ReleaseSRWLockShared;
    return wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
  return result;
}
