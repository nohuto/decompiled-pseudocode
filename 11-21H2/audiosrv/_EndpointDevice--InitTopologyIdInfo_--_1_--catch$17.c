/*
 * XREFs of _EndpointDevice::InitTopologyIdInfo_::_1_::catch$17 @ 0x18006F936
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C76BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall EndpointDevice::InitTopologyIdInfo_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 696),
                           (void *)0x109,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                           a4);
  return 0LL;
}
