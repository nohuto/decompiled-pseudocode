/*
 * XREFs of _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$35 @ 0x18006D010
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D9180 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch_35(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 408),
    (void *)0x788,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    a4);
  return 0LL;
}
