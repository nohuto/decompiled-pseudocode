/*
 * XREFs of _CreativeFramework::DesktopSpotlightHelpers::DeleteDesktopSpotlightCreative_::_1_::catch$18 @ 0x1800F5C38
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180044530 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CreativeFramework::DesktopSpotlightHelpers::DeleteDesktopSpotlightCreative_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 1256),
                            (void *)0x88,
                            (int)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
                            a4);
  return 0LL;
}
