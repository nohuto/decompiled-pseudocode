/*
 * XREFs of ??_GCUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x18038E810
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800F81AC (--1-$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CUndockedSearchAppExperienceManagerConfig *__fastcall CUndockedSearchAppExperienceManagerConfig::`scalar deleting destructor'(
        CUndockedSearchAppExperienceManagerConfig *this,
        char a2)
{
  winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>::~TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>((CUndockedSearchAppExperienceManagerConfig *)((char *)this + 24));
  winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>::~TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>((CUndockedSearchAppExperienceManagerConfig *)((char *)this + 16));
  *(_QWORD *)this = &IUndockedSearchAppExperienceManagerConfig::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
