/*
 * XREFs of _CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::ForEachEntry_::_1_::catch$15 @ 0x18007833A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D2CC4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::ForEachEntry_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0xDF,
                            (unsigned int)"avcore\\audiocore\\Include\\LockedList.h",
                            a4);
  return 0LL;
}
