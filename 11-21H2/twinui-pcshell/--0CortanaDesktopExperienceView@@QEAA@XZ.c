/*
 * XREFs of ??0CortanaDesktopExperienceView@@QEAA@XZ @ 0x1803A5268
 * Callers:
 *     ??$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803A50D8 (--$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@Cortana@TwinUI@@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAA@XZ @ 0x1803A51B4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIShellExperiencePosition_ea_1803A51B4.c)
 */

CortanaDesktopExperienceView *__fastcall CortanaDesktopExperienceView::CortanaDesktopExperienceView(
        CortanaDesktopExperienceView *this)
{
  CortanaDesktopExperienceView *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>(this);
  *(_QWORD *)this = &CortanaDesktopExperienceView::`vftable'{for `Windows::Internal::Shell::Experience::IShellExperiencePositioner'};
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 2) = &CortanaDesktopExperienceView::`vftable'{for `TwinUI::Cortana::ICortanaDesktopNotifications'};
  *((_QWORD *)this + 3) = &CortanaDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 4) = &CortanaDesktopExperienceView::`vftable'{for `ILightDismissNotification'};
  *((_QWORD *)this + 5) = &CortanaDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 6) = &CortanaDesktopExperienceView::`vftable'{for `Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 7) = &CortanaDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_QWORD *)this + 8) = &CortanaDesktopExperienceView::`vftable'{for `IImmersiveSessionIdleNotification'};
  *((_QWORD *)this + 9) = &CortanaDesktopExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaWNFNotification>'};
  *((_WORD *)this + 68) = 0;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *(_OWORD *)((char *)this + 148) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_OWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 48) = 13;
  *(_OWORD *)((char *)this + 196) = 0LL;
  *(_OWORD *)((char *)this + 212) = 0LL;
  *(_QWORD *)((char *)this + 228) = 0LL;
  result = this;
  *(_QWORD *)((char *)this + 236) = 0LL;
  *((_DWORD *)this + 61) = 0x10000;
  *((_DWORD *)this + 62) = 0x10000;
  *(_QWORD *)((char *)this + 252) = 0LL;
  *(_QWORD *)((char *)this + 260) = 0LL;
  *((_DWORD *)this + 67) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_BYTE *)this + 288) = 0;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_BYTE *)this + 312) = 0;
  *((_DWORD *)this + 79) = 56;
  *((GUID *)this + 20) = GUID_NULL;
  *((_QWORD *)this + 42) = 0LL;
  *((_BYTE *)this + 344) = 0;
  *((_DWORD *)this + 87) = 57;
  *((GUID *)this + 22) = GUID_NULL;
  *((_QWORD *)this + 46) = 0LL;
  return result;
}
