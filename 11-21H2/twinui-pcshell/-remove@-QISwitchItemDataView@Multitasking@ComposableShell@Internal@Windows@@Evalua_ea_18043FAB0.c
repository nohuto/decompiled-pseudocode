/*
 * XREFs of ?remove@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@UE$AAAXVEventRegistrationToken@Foundation@5@@Z @ 0x18043FAB0
 * Callers:
 *     ?remove@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@SwitchItemDataViewImpl@2345@W7E$AAAXVEventRegistrationToken@Foundation@5@@Z @ 0x1802027C0 (-remove@-QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@EvaluateItem@Switch.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x180439624 (-UpdateAllItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _remove__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__EvaluateItem_SwitchItemDataViewImpl_2345_UE_AAAXVEventRegistrationToken_Foundation_5__Z(
        RTL_SRWLOCK *a1,
        struct Platform::Details::EventLock *a2)
{
  struct EventRegistrationToken v4; // r9
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v5, a1 + 7);
  Platform::Details::EventSourceRemove((Platform::Details *)&a1[8], &a1[17].Ptr, a2, v4);
  a1[9].Ptr = 0LL;
  Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::UpdateAllItemState((__int64)a1);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
}
