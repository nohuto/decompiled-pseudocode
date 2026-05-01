/*
 * XREFs of _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::catch$68 @ 0x180496F49
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::catch_68(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 616),
    (void *)0x77,
    (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
    a4);
  return 0LL;
}
