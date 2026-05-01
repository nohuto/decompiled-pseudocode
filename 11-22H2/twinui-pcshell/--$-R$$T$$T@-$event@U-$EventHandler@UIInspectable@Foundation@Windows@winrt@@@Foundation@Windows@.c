/*
 * XREFs of ??$?R$$T$$T@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$T0@Z @ 0x18047E564
 * Callers:
 *     ?OnNetworkStatusChanged@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@@Z @ 0x180283F40 (-OnNetworkStatusChanged@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?ReportReactivationComplete@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost2@3456@@impl@winrt@@UEAAHXZ @ 0x18046A070 (-ReportReactivationComplete@-$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800D9EC8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$EventHandler@UIInspectable@Foundation@Win.c)
 *     ?remove@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801AEBD4 (-remove@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winr.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$$T$$T@impl@winrt@@YA_NAEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEB$$T1@Z @ 0x18047E6F0 (--$invoke@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$$T.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::operator()<std::nullptr_t,std::nullptr_t>(
        RTL_SRWLOCK *a1)
{
  __int64 v2; // rbx
  volatile signed __int32 *Ptr; // rdx
  volatile signed __int32 *v4; // rsi
  PVOID *v5; // rdi
  __int64 v6; // rsi
  PVOID v7; // rax
  PVOID v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (volatile signed __int32 *)a1->Ptr;
  v4 = 0LL;
  if ( a1->Ptr )
  {
    v8 = a1->Ptr;
    _InterlockedExchangeAdd(Ptr, 1u);
    v4 = Ptr;
    v2 = (__int64)v8;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v4 )
  {
    v5 = (PVOID *)(v4 + 2);
    v6 = (__int64)&v4[2 * *((unsigned int *)v4 + 1) + 2];
    while ( v5 != (PVOID *)v6 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,std::nullptr_t,std::nullptr_t>(v5) )
      {
        v7 = WINRT_IMPL_EncodePointer(*v5);
        winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::remove(
          (__int64)a1,
          v7);
      }
      ++v5;
    }
  }
  if ( v2 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref((__int64 *)&v8);
}
