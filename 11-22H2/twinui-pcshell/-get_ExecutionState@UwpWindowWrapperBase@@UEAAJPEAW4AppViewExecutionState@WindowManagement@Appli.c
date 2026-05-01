/*
 * XREFs of ?get_ExecutionState@UwpWindowWrapperBase@@UEAAJPEAW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804F2660
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn UwpWindowWrapperBase::get_ExecutionState(
        UwpWindowWrapperBase *this,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0x529,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
    a4);
}
