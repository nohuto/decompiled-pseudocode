/*
 * XREFs of ?GetTaskbarLayout@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@XZ @ 0x18019EEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1800F9C44 (-Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *__fastcall CUndockedSearchAppExperienceManagerConfig::GetTaskbarLayout(
        __int64 a1,
        winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *a2)
{
  winrt::Windows::Foundation::IUnknown *v2; // rdi
  winrt::Windows::Foundation::IUnknown *v4; // rax
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (winrt::Windows::Foundation::IUnknown *)(a1 + 24);
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v4 = (winrt::Windows::Foundation::IUnknown *)winrt::WindowsUdk::UI::Shell::TaskbarLayout::Current(&v6);
    winrt::Windows::Foundation::IUnknown::operator=(v2, v4);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v6);
  }
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(a2, v2);
  return a2;
}
