/*
 * XREFs of _CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem_::_1_::catch$5 @ 0x180045BB7
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000C5DC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 160) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 152),
                            (void *)0x1F2,
                            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\pickerhostcontext.cpp",
                            a4);
  return 0LL;
}
