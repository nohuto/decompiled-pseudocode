/*
 * XREFs of _lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator() @ 0x18067A258
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___::Invoke @ 0x18067B680 (winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lambda_1e80c37ddcd.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18067B110 (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_1e80c37ddcde987ca8d07444e2bbbfce_::operator()(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v4; // rbx
  void *pData; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v7; // [rsp+50h] [rbp+18h]

  v6 = a2;
  winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)a1, &pData);
  v3 = (RTL_SRWLOCK *)pData;
  if ( pData )
  {
    v4 = (RTL_SRWLOCK *)((char *)pData + 176);
    AcquireSRWLockExclusive((PSRWLOCK)pData + 22);
    v7 = v3 + 22;
    if ( v3[7].Ptr )
    {
      v6 = 0LL;
      winrt::Windows::Foundation::IUnknown::operator=(
        (winrt::Windows::Foundation::IUnknown *)&v3[7],
        (winrt::Windows::Foundation::IUnknown *)&v6);
      if ( v6 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
      SnapFlyoutHost::InternalShowFlyout(v3, *(HWND *)(a1 + 8));
      v4 = v7;
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  if ( v3 )
    winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref((volatile signed __int64 **)&pData);
}
