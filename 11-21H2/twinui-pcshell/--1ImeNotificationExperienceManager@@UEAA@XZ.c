/*
 * XREFs of ??1ImeNotificationExperienceManager@@UEAA@XZ @ 0x1803600C8
 * Callers:
 *     ??_EImeNotificationExperienceManager@@UEAAPEAXI@Z @ 0x180360100 (--_EImeNotificationExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180069558 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ImeNotificationExperienceManager::~ImeNotificationExperienceManager(
        ImeNotificationExperienceManager *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 32);
  CSingleViewShellExperience::~CSingleViewShellExperience((ImeNotificationExperienceManager *)((char *)this + 48));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>((__int64)this);
}
