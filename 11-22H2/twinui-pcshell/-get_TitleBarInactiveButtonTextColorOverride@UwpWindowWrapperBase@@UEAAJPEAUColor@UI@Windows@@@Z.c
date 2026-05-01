/*
 * XREFs of ?get_TitleBarInactiveButtonTextColorOverride@UwpWindowWrapperBase@@UEAAJPEAUColor@UI@Windows@@@Z @ 0x1804F2FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_TitleBarInactiveButtonTextColorOverride(
        UwpWindowWrapperBase *this,
        struct Windows::UI::Color *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24D,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
