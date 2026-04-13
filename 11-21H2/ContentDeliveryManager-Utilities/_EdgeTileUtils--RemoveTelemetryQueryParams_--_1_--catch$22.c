/*
 * XREFs of _EdgeTileUtils::RemoveTelemetryQueryParams_::_1_::catch$22 @ 0x1800F5FB5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180044530 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall EdgeTileUtils::RemoveTelemetryQueryParams_::_1_::catch_22(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 488),
                           (void *)0x70,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
                           a4);
  return 0LL;
}
