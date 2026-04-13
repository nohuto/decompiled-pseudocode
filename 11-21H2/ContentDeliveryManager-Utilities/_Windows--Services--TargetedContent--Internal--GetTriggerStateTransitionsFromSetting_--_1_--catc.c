/*
 * XREFs of _Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting_::_1_::catch$10 @ 0x1800F33FA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180044530 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting_::_1_::catch_10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x15F,
                            (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                            a4);
  return 0LL;
}
