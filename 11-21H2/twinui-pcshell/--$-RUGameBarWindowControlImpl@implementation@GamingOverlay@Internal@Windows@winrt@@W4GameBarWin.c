/*
 * XREFs of ??$?RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@AEBW4GameBarWindowState@4561@@Z @ 0x180340EA0
 * Callers:
 *     _lambda_990a3a94af437e7dcdd96bcbb6b9cde9_::operator() @ 0x1803416D0 (_lambda_990a3a94af437e7dcdd96bcbb6b9cde9_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001F7FC (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801892E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@34@W4GameBarWindowState@7834@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@1@AEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@41@AEBW4GameBarWindowState@7841@@Z @ 0x1803412A0 (--$invoke@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4Gam.c)
 *     ?remove@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1803451A0 (-remove@-$event@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::operator()<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int *v6; // rbx
  unsigned int *v7; // r9
  unsigned int *v8; // rsi
  PVOID *v9; // rdi
  __int64 v10; // rsi
  PVOID v11; // rax
  unsigned int *v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v12 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v7 = *(unsigned int **)a1;
  v8 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v12 = *(unsigned int **)a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)v7, 1u);
    v8 = v7;
    v6 = v12;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
  if ( v8 )
  {
    v9 = (PVOID *)(v8 + 2);
    v10 = (__int64)&v8[2 * v8[1] + 2];
    while ( v9 != (PVOID *)v10 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>,winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>(
                               v9,
                               a2,
                               a3) )
      {
        v11 = WINRT_IMPL_EncodePointer(*v9);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::remove(
          a1,
          v11);
      }
      ++v9;
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::Windows::Foundation::IInspectable>>>::unconditional_release_ref(&v12);
}
