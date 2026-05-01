/*
 * XREFs of ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18036AAF0
 * Callers:
 *     ??_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x18036ABF0 (--_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180069558 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18012D6A4 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

void __fastcall CPeopleBarJumpViewExperienceManager::~CPeopleBarJumpViewExperienceManager(
        CPeopleBarJumpViewExperienceManager *this,
        volatile int *a2)
{
  volatile int *v3; // rdx

  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
    (CPeopleBarJumpViewExperienceManager *)((char *)this + 400),
    a2);
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
    (CPeopleBarJumpViewExperienceManager *)((char *)this + 368),
    v3);
  WindowsDeleteString(*((HSTRING *)this + 45));
  *((_QWORD *)this + 45) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 39));
  *((_QWORD *)this + 39) = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 33);
  CSingleViewShellExperience::~CSingleViewShellExperience((CPeopleBarJumpViewExperienceManager *)((char *)this + 56));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>((__int64)this);
}
