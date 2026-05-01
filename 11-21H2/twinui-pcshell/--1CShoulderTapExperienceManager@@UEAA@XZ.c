/*
 * XREFs of ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x18036C698
 * Callers:
 *     ??_GCShoulderTapExperienceManager@@UEAAPEAXI@Z @ 0x18036C810 (--_GCShoulderTapExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180069558 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall CShoulderTapExperienceManager::~CShoulderTapExperienceManager(CShoulderTapExperienceManager *this)
{
  WindowsDeleteString(*((HSTRING *)this + 41));
  *((_QWORD *)this + 41) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 40));
  *((_QWORD *)this + 40) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 39));
  *((_QWORD *)this + 39) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 36));
  *((_QWORD *)this + 36) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 35));
  *((_QWORD *)this + 35) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 34));
  *((_QWORD *)this + 34) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 33));
  *((_QWORD *)this + 33) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
  CSingleViewShellExperience::~CSingleViewShellExperience((CShoulderTapExperienceManager *)((char *)this + 40));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>((__int64)this);
}
