/*
 * XREFs of ?revoke_impl@?$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@AEAAXUITaskbarLayout@Shell@UI@WindowsUdk@3@@Z @ 0x1801A31A4
 * Callers:
 *     ??1?$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18019BC0C (--1-$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITaskbarLayout@She.c)
 *     ?revoke@?$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGI@AA@impl@winrt@@QEAAXXZ @ 0x1801A312C (-revoke@-$event_revoker@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITaskbarLayou.c)
 * Callees:
 *     ??_9type@?$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BGI@AA @ 0x1801F59D0 (--_9type@-$abi@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@X@impl@winrt@@$BGI@AA.c)
 */

void __fastcall _revoke_impl___event_revoker_UITaskbarLayout_Shell_UI_WindowsUdk_winrt___MP8type___abi_UITaskbarLayout_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGI_AA_impl_winrt__AEAAXUITaskbarLayout_Shell_UI_WindowsUdk_3__Z(
        __int64 a1,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a2)
{
  if ( *(_QWORD *)a2 )
     winrt::impl::abi<winrt::WindowsUdk::UI::Shell::ITaskbarLayout,void>::type::`vcall'{104,{flat}}(
      *(_QWORD *)a2,
      *(_QWORD *)(a1 + 8));
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a2);
}
