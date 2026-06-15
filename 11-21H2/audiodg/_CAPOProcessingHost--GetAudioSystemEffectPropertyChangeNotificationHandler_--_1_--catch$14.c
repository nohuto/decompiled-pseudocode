/*
 * XREFs of _CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler_::_1_::catch$14 @ 0x140065878
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400663FC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler_::_1_::catch_14(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 120),
                           (void *)0x1A6,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
                           a4);
  return 0LL;
}
