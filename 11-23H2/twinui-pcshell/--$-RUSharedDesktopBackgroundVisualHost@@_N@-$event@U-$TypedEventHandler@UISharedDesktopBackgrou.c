/*
 * XREFs of ??$?RUSharedDesktopBackgroundVisualHost@@_N@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEB_N@Z @ 0x1806E5814
 * Callers:
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1806EC214 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 *     ?XamlHostThreadStartProc@SharedDesktopBackgroundVisualHost@@AEAAXXZ @ 0x1806EC5A4 (-XamlHostThreadStartProc@SharedDesktopBackgroundVisualHost@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@USize@Foundation@56@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180044148 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 *     WINRT_IMPL_EncodePointer @ 0x1801C78E4 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     ?remove@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x180412F50 (-remove@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Int.c)
 *     ??$invoke@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@USharedDesktopBackgroundVisualHost@@_N@impl@winrt@@YA_NAEBU?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@1@AEBUSharedDesktopBackgroundVisualHost@@AEB_N@Z @ 0x1806E5FC4 (--$invoke@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes_ea_1806E5FC4.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::operator()<SharedDesktopBackgroundVisualHost,bool>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int *v6; // rbx
  unsigned int *Ptr; // r9
  unsigned int *v8; // rsi
  PVOID *v9; // rdi
  __int64 v10; // rsi
  PVOID v11; // rax
  unsigned int *v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v12 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (unsigned int *)a1->Ptr;
  v8 = 0LL;
  if ( a1->Ptr )
  {
    v12 = (unsigned int *)a1->Ptr;
    _InterlockedExchangeAdd((volatile signed __int32 *)Ptr, 1u);
    v8 = Ptr;
    v6 = v12;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v8 )
  {
    v9 = (PVOID *)(v8 + 2);
    v10 = (__int64)&v8[2 * v8[1] + 2];
    while ( v9 != (PVOID *)v10 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>,SharedDesktopBackgroundVisualHost,bool>(
                               v9,
                               a2,
                               a3) )
      {
        v11 = WINRT_IMPL_EncodePointer(*v9);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::remove(
          (__int64)a1,
          v11);
      }
      ++v9;
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,winrt::Windows::Foundation::Size>>>::unconditional_release_ref(&v12);
}
