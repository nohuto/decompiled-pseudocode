/*
 * XREFs of _lambda_9c7f48dca1dc7726f0d5a31e6a2a9389_::operator() @ 0x1805AEEDC
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_9c7f48dca1dc7726f0d5a31e6a2a9389___::Invoke @ 0x1805AFA60 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_9c7f48dca1d.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18033DCB8 (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF4BC (-InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_storag.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1805B1DE4 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA-AU-$com_ptr@VSnapFlyoutHost@@@2@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_9c7f48dca1dc7726f0d5a31e6a2a9389_::operator()(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  winrt::weak_ref<SnapFlyoutHost>::get(a1, &v4);
  v3 = v4;
  if ( v4 )
  {
    wil::AcquireSRWLockExclusive(&v6, v4 + 18);
    if ( v3[7].Ptr )
    {
      v5 = 0LL;
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)&v3[7],
        (winrt::Windows::Foundation::IUnknown *)&v5);
      if ( v5 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
      SnapFlyoutHost::InternalShow(v3, *(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16));
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
  }
  if ( v3 )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref((volatile __int64 **)&v4);
}
