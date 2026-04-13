/*
 * XREFs of _CreativeFramework::EnumerateTargetedContentTiles_::_1_::catch$37 @ 0x1800F6726
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003B334 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CreativeFramework::EnumerateTargetedContentTiles_::_1_::catch_37(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 200),
    (void *)0x2D,
    (int)"shellcommon\\Shell\\ContentDeliveryManager\\Utils\\inc\\TargetedContentTileEnumerator.h",
    a4);
  return 0LL;
}
