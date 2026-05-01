/*
 * XREFs of ?ChangeTitleBarInputRoutingInfo@UwpWindowWrapperBase@@UEAAJUInputRoutingInfo@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804F0E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 UwpWindowWrapperBase::ChangeTitleBarInputRoutingInfo()
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AD,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
