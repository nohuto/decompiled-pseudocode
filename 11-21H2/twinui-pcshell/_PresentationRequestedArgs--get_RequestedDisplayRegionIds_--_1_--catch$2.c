/*
 * XREFs of _PresentationRequestedArgs::get_RequestedDisplayRegionIds_::_1_::catch$2 @ 0x1802ED241
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PresentationRequestedArgs::get_RequestedDisplayRegionIds_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x29E,
                           (int)"pcshell\\twinui\\appmanager\\lib\\amcommon.cpp",
                           a4);
  return 0LL;
}
