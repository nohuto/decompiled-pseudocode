/*
 * XREFs of ??0SearchAppDesktopExperienceView@@QEAA@XZ @ 0x1803981C8
 * Callers:
 *     ??$MakeAndInitialize@VSearchAppDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180397BA4 (--$MakeAndInitialize@VSearchAppDesktopExperienceView@@UIShellExperiencePositioner@Experience@She.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VISearchAppDesktopNotifications@Cortana@TwinUI@@VISearchAppExperienceView@Cortana@TwinUI@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@VICortanaWNFNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAA@XZ @ 0x18039812C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIShellExperiencePositioner@Experience.c)
 */

SearchAppDesktopExperienceView *__fastcall SearchAppDesktopExperienceView::SearchAppDesktopExperienceView(
        SearchAppDesktopExperienceView *this)
{
  SearchAppDesktopExperienceView *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>(this);
  *(_QWORD *)this = &SearchAppDesktopExperienceView::`vftable'{for `Windows::Internal::Shell::Experience::IShellExperiencePositioner'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 1) = &SearchAppDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,TwinUI::Cortana::ISearchAppDesktopNotifications,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 2) = &SearchAppDesktopExperienceView::`vftable'{for `TwinUI::Cortana::ISearchAppDesktopNotifications'};
  *((_QWORD *)this + 3) = &SearchAppDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ISearchAppExperienceView,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 4) = &SearchAppDesktopExperienceView::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 5) = &SearchAppDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 6) = &SearchAppDesktopExperienceView::`vftable'{for `IInputHostLayoutChanges'};
  *((_QWORD *)this + 7) = &SearchAppDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_BYTE *)this + 120) = 0;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *(_OWORD *)((char *)this + 132) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 148) = 0;
  *((_OWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 44) = 13;
  *(_OWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 196) = 0LL;
  result = this;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *((_BYTE *)this + 212) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  return result;
}
