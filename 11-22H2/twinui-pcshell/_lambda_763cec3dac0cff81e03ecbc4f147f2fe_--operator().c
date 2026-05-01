/*
 * XREFs of _lambda_763cec3dac0cff81e03ecbc4f147f2fe_::operator() @ 0x18004AFF0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe___::Run @ 0x18004AFE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe___--Run.c)
 * Callees:
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800130A4 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returnc.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800130C8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18001319C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUSearchAppActivatedEventArgs@4561@@Z @ 0x18004B0D0 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@USearchAppActivatedEventArgs@2345@.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B0B84 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ @ 0x1800B724C (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800B8618 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_763cec3dac0cff81e03ecbc4f147f2fe_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  __int64 v6; // rdi
  struct IInspectable *v7; // [rsp+40h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp+10h] BYREF
  LPVOID v9; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 16), &v7) >= 0 && v7 )
  {
    v2 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(*(_QWORD *)(a1 + 24) + 824LL);
    pv = (LPVOID)v2;
    if ( v2 )
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 336));
    tip2::details::shared_data<1,0,0>::begin_update(v2 + 8);
    *(_BYTE *)(v2 + 284) = 1;
    tip2::details::shared_data<1,0,0>::end_update(v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(&pv);
    if ( pv )
      tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(pv);
    v3 = (*(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL) - 16LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 168LL) != 0LL);
    v4 = (_QWORD *)(v3 + 48);
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>>::operator()<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs>(
      v3 + 48,
      v3,
      a1 + 8);
    if ( !*v4 )
    {
      v6 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(*(_QWORD *)(a1 + 24) + 824LL);
      v9 = (LPVOID)v6;
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 336));
      tip2::details::shared_data<1,0,0>::begin_update(v6 + 8);
      *(_BYTE *)(v6 + 284) = 0;
      tip2::details::shared_data<1,0,0>::end_update(v6 + 8);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(&v9);
      if ( v9 )
        tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(v9);
      UndockedSearchAppExperienceManager::Activate(
        *(UndockedSearchAppExperienceManager **)(a1 + 24),
        (const struct winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs *)(a1 + 8),
        *(_BYTE *)a1);
    }
  }
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
}
