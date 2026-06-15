/*
 * XREFs of _EndpointDevice::InitAdapterInformation_::_1_::catch$13 @ 0x18007A988
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D2C74 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall EndpointDevice::InitAdapterInformation_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 264),
                           (void *)0xB5,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                           a4);
  return 0LL;
}
