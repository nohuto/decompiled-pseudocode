/*
 * XREFs of _JointResize::CalculateSecondaryViews_::_1_::catch$35 @ 0x1805287FA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall JointResize::CalculateSecondaryViews_::_1_::catch_35(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 52) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 632),
                           (void *)0x3CC,
                           (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
                           a4);
  return 0LL;
}
