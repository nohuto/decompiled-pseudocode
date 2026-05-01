/*
 * XREFs of _lambda_cad582326f08631f2948fcf147cbafec_::operator() @ 0x18019C860
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___::Run @ 0x1801A0B70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ?data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchFullActivationTest@@@2@XZ @ 0x18019C174 (-data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchFu.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18019D74C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUSearchAppActivatedEventArgs@4561@@Z @ 0x1801A376C (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cad582326f08631f2948fcf147cbafec_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 16), (__int64)&v10) >= 0 && v10 )
  {
    v2 = *tip::tip_test<_tip_SearchFullActivationTest>::data(*(_QWORD *)(a1 + 24) + 728LL, v9);
    v3 = v2 + 172;
    if ( !v2 )
      v3 = 28LL;
    *(_BYTE *)v3 = 1;
    tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v9);
    v4 = (*(_QWORD *)(*(_QWORD *)(a1 + 24) + 160LL) - 16LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 160LL) != 0LL);
    v5 = (_QWORD *)(v4 + 40);
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>::operator()<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>(
      v4 + 40,
      v4,
      a1 + 8);
    if ( !*v5 )
    {
      v6 = *tip::tip_test<_tip_SearchFullActivationTest>::data(*(_QWORD *)(a1 + 24) + 728LL, v9);
      v7 = v6 + 172;
      if ( !v6 )
        v7 = 28LL;
      *(_BYTE *)v7 = 0;
      tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v9);
      UndockedSearchAppExperienceManager::Activate(
        *(UndockedSearchAppExperienceManager **)(a1 + 24),
        (const struct winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs *)(a1 + 8),
        *(_BYTE *)a1);
    }
  }
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
}
