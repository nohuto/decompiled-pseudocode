/*
 * XREFs of ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x180357DDC
 * Callers:
 *     ??_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x180358160 (--_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180069558 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EED70 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall TwinUI::Cortana::ShellExperienceView::~ShellExperienceView(volatile signed __int32 **this)
{
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(this + 35);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(this + 32);
  CSingleViewShellExperience::~CSingleViewShellExperience((CSingleViewShellExperience *)(this + 6));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewIconLoaderNotifications>((__int64)this);
}
