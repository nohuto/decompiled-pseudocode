/*
 * XREFs of ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x1800FF8FC
 * Callers:
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800A5394 (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FFD90 (--0-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Wi.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x18010087C (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180101988 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@6789@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputHostLayoutChanges@@@WRL@Microsoft@@QEAA@XZ @ 0x180191C3C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UILightDismissNotification@@UIBaseExpe.c)
 *     ??0SmartCookie@@QEAA@XZ @ 0x1802DB274 (--0SmartCookie@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=23
CActionCenterExperienceManager *__fastcall CActionCenterExperienceManager::CActionCenterExperienceManager(
        CActionCenterExperienceManager *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>();
  *(_QWORD *)this = &CActionCenterExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 2) = &CActionCenterExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 4) = &CActionCenterExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::IActionCenterExperienceManager'};
  *((_QWORD *)this + 5) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 6) = &CActionCenterExperienceManager::`vftable'{for `IEdgeUiTouchInvocation'};
  *((_QWORD *)this + 7) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 8) = &CActionCenterExperienceManager::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 9) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 10) = &CActionCenterExperienceManager::`vftable'{for `Windows::Foundation::IClosable'};
  *((_QWORD *)this + 11) = &CActionCenterExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 14) = &CActionCenterExperienceManager::`vftable';
  *((_QWORD *)this + 15) = 0LL;
  CSingleViewShellExperience::CSingleViewShellExperience((char *)this + 128, (char *)this + 112, 0LL);
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_BYTE *)this + 360) = 0;
  *((_DWORD *)this + 91) = 82;
  *((GUID *)this + 23) = GUID_NULL;
  *((_QWORD *)this + 48) = 0LL;
  *((_BYTE *)this + 392) = 0;
  *((_DWORD *)this + 99) = 83;
  *((GUID *)this + 25) = GUID_NULL;
  *((_QWORD *)this + 52) = 0LL;
  *((_WORD *)this + 212) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_WORD *)this + 224) = 1;
  *(_QWORD *)((char *)this + 452) = 0LL;
  *((_BYTE *)this + 460) = 0;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = 0;
  *((_BYTE *)this + 476) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  SmartCookie::SmartCookie((CActionCenterExperienceManager *)((char *)this + 504));
  *((_DWORD *)this + 158) = SHTaskPoolGetUniqueContext();
  *(_QWORD *)((char *)this + 636) = 0LL;
  *((_DWORD *)this + 161) = 0;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *(_OWORD *)((char *)this + 696) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_DWORD *)this + 180) = SHTaskPoolGetUniqueContext();
  *((_QWORD *)this + 91) = 0LL;
  *((_BYTE *)this + 736) = 0;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_BYTE *)this + 776) = 1;
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>((char *)this + 784);
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  winrt::impl::resume_apartment_context::resume_apartment_context((CActionCenterExperienceManager *)((char *)this + 848));
  return this;
}
