/*
 * XREFs of _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::catch$33 @ 0x18004D3E6
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180013E98 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::catch_33(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 192) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 184),
                            (void *)0xFC,
                            (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
                            a4);
  return 0LL;
}
