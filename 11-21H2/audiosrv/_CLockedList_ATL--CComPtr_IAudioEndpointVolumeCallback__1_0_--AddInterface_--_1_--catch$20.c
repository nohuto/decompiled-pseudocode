/*
 * XREFs of _CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::AddInterface_::_1_::catch$20 @ 0x1800CFE6B
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C76BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::AddInterface_::_1_::catch_20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x89,
                           (int)"avcore\\audiocore\\Include\\LockedList.h",
                           a4);
  return 0LL;
}
