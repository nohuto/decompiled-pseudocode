/*
 * XREFs of _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::catch$48 @ 0x1803EABCA
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::catch_48(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 600) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 568),
                            (void *)0x74,
                            (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
                            a4);
  return 0LL;
}
