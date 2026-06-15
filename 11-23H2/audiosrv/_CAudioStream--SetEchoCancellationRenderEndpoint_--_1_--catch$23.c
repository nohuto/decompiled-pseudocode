/*
 * XREFs of _CAudioStream::SetEchoCancellationRenderEndpoint_::_1_::catch$23 @ 0x1800EDD2A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D2C74 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioStream::SetEchoCancellationRenderEndpoint_::_1_::catch_23(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 128) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x88C,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                            a4);
  return 0LL;
}
