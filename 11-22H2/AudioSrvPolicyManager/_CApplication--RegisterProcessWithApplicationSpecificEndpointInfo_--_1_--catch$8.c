/*
 * XREFs of _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::catch$8 @ 0x18004A719
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001E19C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 136),
                           (void *)0x9BC,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           a4);
  return 0LL;
}
