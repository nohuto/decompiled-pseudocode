/*
 * XREFs of ?get_TileActivatedInfo@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@6@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1803A0230
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::get_TileActivatedInfo(
        __int64 a1,
        _QWORD *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x76,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappactivatedeventargs.cpp",
    (const char *)0x80004001LL);
  *a2 = 0LL;
  return 0LL;
}
