/*
 * XREFs of ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18012D280
 * Callers:
 *     ??_GCBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z @ 0x1801BE630 (--_GCBaseTrayFlyoutExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18012D354 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x18012D540 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180174C24 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18043E3D0 (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBaseTrayFlyoutExperienceManager::~CBaseTrayFlyoutExperienceManager(
        CBaseTrayFlyoutExperienceManager *this)
{
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v2; // rcx

  *(_QWORD *)this = &CBaseTrayFlyoutExperienceManager::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CBaseTrayFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,IInputHostLayoutChanges>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CBaseTrayFlyoutExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInputHostLayoutChanges>'};
  *((_QWORD *)this + 6) = &CBaseTrayFlyoutExperienceManager::`vftable';
  CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(this, 0);
  *((_QWORD *)this + 56) = 0LL;
  v2 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 57);
  if ( v2 )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v2);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 57);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 57);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 47);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CBaseTrayFlyoutExperienceManager *)((char *)this + 336));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CBaseTrayFlyoutExperienceManager *)((char *)this + 304));
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 36);
  CSingleViewShellExperience::~CSingleViewShellExperience((CBaseTrayFlyoutExperienceManager *)((char *)this + 72));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IVirtualDesktopSwitchAnimator,IVirtualDesktopSwitchAnimator2>(this);
}
