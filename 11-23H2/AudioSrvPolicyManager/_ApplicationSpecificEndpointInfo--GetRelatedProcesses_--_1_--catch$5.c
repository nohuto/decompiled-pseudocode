/*
 * XREFs of _ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::catch$5 @ 0x180049F19
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001DFAC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x14D,
                           (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecifi"
                                "cendpointinfo.cpp",
                           a4);
  return 0LL;
}
