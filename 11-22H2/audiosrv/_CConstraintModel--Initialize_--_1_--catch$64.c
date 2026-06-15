/*
 * XREFs of _CConstraintModel::Initialize_::_1_::catch$64 @ 0x18007D386
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D2CC4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CConstraintModel::Initialize_::_1_::catch_64(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 2104),
                           (void *)0x142,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\constraintmodel\\lib\\constraintmodel.cpp",
                           a4);
  return 0LL;
}
