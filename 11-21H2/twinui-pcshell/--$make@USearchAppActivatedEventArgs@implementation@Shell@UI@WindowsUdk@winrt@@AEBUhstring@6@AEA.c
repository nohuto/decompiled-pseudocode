/*
 * XREFs of ??$make@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEBUhstring@6@AEAW4SearchAppActivationMode@3456@AEAURect@Foundation@Windows@6@AEAUDeferralCompletedHandler@Foundation@Windows@6@AEA_NAEAU76@AEAUSearchAppHost@3456@@winrt@@YA?AUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@0@AEBUhstring@0@AEAW4SearchAppActivationMode@2340@AEAURect@Foundation@Windows@0@AEAUDeferralCompletedHandler@890@AEA_NAEAU50@AEAUSearchAppHost@2340@@Z @ 0x18019A35C
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z @ 0x1800FA4B8 (--0-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEAA@AEBUhstring@2@AEBW4SearchAppActivationMode@Shell@UI@WindowsUdk@2@AEBU?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@2@AEBUDeferralCompletedHandler@9Windows@2@_N0AEBUSearchAppHost@5672@@Z @ 0x18019B730 (--0-$heap_implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@imp.c)
 */

// Hidden C++ exception states: #wind=3
void (__fastcall **__fastcall winrt::make<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::hstring const &,enum winrt::WindowsUdk::UI::Shell::SearchAppActivationMode &,winrt::Windows::Foundation::Rect &,winrt::Windows::Foundation::DeferralCompletedHandler &,bool &,winrt::hstring &,winrt::WindowsUdk::UI::Shell::SearchAppHost &>(
        void (__fastcall **a1)(_QWORD, __int64 *, __int64 *),
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        __int64 a8))(_QWORD, __int64 *, __int64 *)
{
  void (__fastcall *v12)(_QWORD, __int64 *, __int64 *); // r15
  unsigned int v13; // esi
  char v14; // bl
  __int64 v15; // rax
  void (__fastcall **v17)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+8h] BYREF

  v17 = a1;
  v12 = 0LL;
  v13 = (unsigned int)operator new(0x98uLL);
  v14 = *a6;
  winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>::IReference<winrt::Windows::Foundation::Rect>(
    &v17,
    a4);
  v15 = winrt::impl::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>(
          v13,
          a2,
          a3,
          (unsigned int)&v17,
          a5,
          v14,
          a7,
          a8);
  if ( v15 )
    v12 = (void (__fastcall *)(_QWORD, __int64 *, __int64 *))(v15 + 16);
  *a1 = v12;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v17);
  return a1;
}
