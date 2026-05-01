/*
 * XREFs of ?GetPropertyAsBoolean@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180414CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetPropertyAsBoolean(
        UwpWindowWrapperBase *this,
        HSTRING a2,
        unsigned __int8 *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2CD,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
