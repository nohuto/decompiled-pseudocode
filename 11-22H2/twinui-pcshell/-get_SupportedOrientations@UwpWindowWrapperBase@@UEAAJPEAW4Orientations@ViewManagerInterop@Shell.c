/*
 * XREFs of ?get_SupportedOrientations@UwpWindowWrapperBase@@UEAAJPEAW4Orientations@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804F2D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_SupportedOrientations(
        UwpWindowWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::Orientations *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)a2 = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4BB,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
