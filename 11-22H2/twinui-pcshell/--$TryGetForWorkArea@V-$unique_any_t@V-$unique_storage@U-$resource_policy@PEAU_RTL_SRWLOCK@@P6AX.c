/*
 * XREFs of ??$TryGetForWorkArea@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA?AUDesktopSnapLayoutManager@23456@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBURect@Foundation@56@@Z @ 0x180680F7C
 * Callers:
 *     ?GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBURect@Foundation@67@@Z @ 0x180683D0C (-GetOrCreateForWorkArea@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z @ 0x1805216D8 (--8Foundation@Windows@winrt@@YA_NAEBURect@012@0@Z.c)
 *     ?get@?$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1806861FC (-get@-$weak_ref@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QE.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::TryGetForWorkArea<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        float *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 v8; // r8
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  while ( 1 )
  {
    if ( v4 == v6 )
    {
      *a2 = 0LL;
      return a2;
    }
    winrt::weak_ref<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager>::get(v4, &v10);
    if ( v10 )
      break;
LABEL_5:
    v4 += 8LL;
  }
  if ( !winrt::Windows::Foundation::operator==((float *)(v10 + 32), a4) )
  {
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    goto LABEL_5;
  }
  *a2 = v8;
  return a2;
}
