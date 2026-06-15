/*
 * XREFs of _CAudioStream::UpdatePMPEffectToggle_::_1_::catch$32 @ 0x1800EE4D9
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800DBA78 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioStream::UpdatePMPEffectToggle_::_1_::catch_32(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x7D1,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    a4);
  return 0LL;
}
