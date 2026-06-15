/*
 * XREFs of _CSleepStudyPowerReferenceManager::CreatePowerReferenceSubBlocker_::_1_::catch$30 @ 0x18007BC82
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D2C74 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSleepStudyPowerReferenceManager::CreatePowerReferenceSubBlocker_::_1_::catch_30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 136),
                           (void *)0xFC,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                           a4);
  return 0LL;
}
