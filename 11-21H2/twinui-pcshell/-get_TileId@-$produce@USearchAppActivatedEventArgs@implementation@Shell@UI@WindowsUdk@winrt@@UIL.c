/*
 * XREFs of ?get_TileId@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1803A02B0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>::get_TileId(
        volatile signed __int32 *a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  *a2 = 0LL;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x6F,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappactivatedeventargs.cpp",
    (const char *)0x80004001LL);
  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v9, &LocaleName);
    v3 = v9;
    v9 = 0LL;
    *a2 = v3;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9, v4, v5, v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
