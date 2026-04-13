/*
 * XREFs of _CopyFaviconToEdge_::_1_::catch$24 @ 0x1800F5E83
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180044530 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CopyFaviconToEdge_::_1_::catch_24(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 184),
                           (void *)0x56,
                           (int)"shellcommon\\Shell\\inc\\CopyEdgeAssetsHelper.h",
                           a4);
  return 0LL;
}
