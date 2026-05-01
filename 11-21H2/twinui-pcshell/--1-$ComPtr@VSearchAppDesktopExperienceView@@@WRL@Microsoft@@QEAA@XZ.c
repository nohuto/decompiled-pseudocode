/*
 * XREFs of ??1?$ComPtr@VSearchAppDesktopExperienceView@@@WRL@Microsoft@@QEAA@XZ @ 0x1803982BC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SearchAppDesktopExperienceView_Windows::Internal::Shell::Experience::IShellExperiencePositioner_IServiceProvider___&_TwinUI::Cortana::ISearchAppExperienceManagerNotification___&__::_1_::dtor$1 @ 0x180397C66 (_Microsoft--WRL--Details--MakeAndInitialize_SearchAppDesktopExperienceView_Windows-_ea_180397C66.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VISearchAppDesktopNotifications@Cortana@TwinUI@@VISearchAppExperienceView@Cortana@TwinUI@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022CE10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShe_ea_18022CE10.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SearchAppDesktopExperienceView>::~ComPtr<SearchAppDesktopExperienceView>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::Release(result);
  }
  return result;
}
