/*
 * XREFs of ?TryGetHitTestResultForPoint@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@AEBUPoint@967@@Z @ 0x180685830
 * Callers:
 *     ?TryGetHitTestResultForPoint@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerStatics@34567@@impl@winrt@@UEAAHUPoint@Foundation@Windows@3@PEAPEAX@Z @ 0x1806857C0 (-TryGetHitTestResultForPoint@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComp.c)
 *     ?HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18068B1A8 (-HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18068B628 (-OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z.c)
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18068B7B0 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$?RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventArgs@2UI@WindowsUdk@5@@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@1@AEBUWindowDraggingEventArgs@4UI@WindowsUdk@1@@Z @ 0x180680DB4 (--$-RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventA.c)
 *     ??$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@?$factory_cache_entry@USnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@UISnapEventFactoryStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@Z @ 0x180681EC4 (--$call@AEAV_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@@-$factory_cache_entry@USnapEventFactory@.c)
 *     ??R_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180682ED8 (--R_lambda_32ed34ebfde5e368616da7ac4eaeafd9_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@She.c)
 *     ?GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV1234567@XZ @ 0x180683C88 (-GetInstance@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SAAEAV123.c)
 *     ?HitTestResult@?$consume_WindowsUdk_UI_Shell_IWindowDraggingEventArgs@UIWindowDraggingEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806846F8 (-HitTestResult@-$consume_WindowsUdk_UI_Shell_IWindowDraggingEventArgs@UIWindowDraggingEventArgs@.c)
 *     ?TryGetForPoint@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA?AUDesktopSnapLayoutManager@34567@AEBUPoint@Foundation@67@@Z @ 0x1806856F4 (-TryGetForPoint@ExtensionCache@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA-A.c)
 */

// Hidden C++ exception states: #wind=3
struct IInspectable __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::TryGetHitTestResultForPoint(
        const struct winrt::Windows::Foundation::Point *a1,
        float *a2)
{
  RTL_SRWLOCK *Instance; // rax
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  RTL_SRWLOCK *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  float *v10; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  RTL_SRWLOCK *v13; // [rsp+78h] [rbp+38h] BYREF

  Instance = (RTL_SRWLOCK *)winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::GetInstance();
  winrt::Windows::Internal::Shell::SnapComponent::implementation::ExtensionCache::TryGetForPoint(
    Instance,
    (float **)&v13,
    a2);
  v6 = v13;
  if ( v13 )
  {
    v10 = a2;
    v11[1] = &qword_180991F58;
    _InterlockedIncrement64(&qword_180991F58);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics> )
    {
      _lambda_32ed34ebfde5e368616da7ac4eaeafd9_::operator()(
        &v10,
        (__int64)&v12,
        (__int64)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>);
      _InterlockedDecrement64(&qword_180991F58);
    }
    else
    {
      _InterlockedDecrement64(&qword_180991F58);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::SnapInternal::SnapEventFactory,winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::call<_lambda_32ed34ebfde5e368616da7ac4eaeafd9_ &>(
        v5,
        (__int64)&v12,
        &v10);
    }
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>::operator()<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::WindowsUdk::UI::Shell::WindowDraggingEventArgs>(
      v6 + 7,
      (__int64)&v13,
      (__int64)&v12);
    v7 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDraggingEventArgs<winrt::WindowsUdk::UI::Shell::IWindowDraggingEventArgs>::HitTestResult(
           &v12,
           v11);
    v8 = *v7;
    *v7 = 0LL;
    *(_QWORD *)a1 = v8;
    if ( v11[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v11);
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v13);
  return (struct IInspectable)a1;
}
