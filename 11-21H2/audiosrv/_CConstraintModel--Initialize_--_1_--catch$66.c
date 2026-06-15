/*
 * XREFs of _CConstraintModel::Initialize_::_1_::catch$66 @ 0x1800718C2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C76BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CConstraintModel::Initialize_::_1_::catch_66(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 2088),
                           (void *)0x142,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\constraintmodel\\lib\\constraintmodel.cpp",
                           a4);
  return 0LL;
}
