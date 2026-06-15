/*
 * XREFs of _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::catch$5 @ 0x180046699
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000C5DC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x160,
                           (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecifi"
                                "cendpointinfo.cpp",
                           a4);
  return 0LL;
}
