/*
 * XREFs of FilterEval @ 0x140788650
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140788544 (PiDqQueryEvaluateFilter.c)
 *     ConstraintEval @ 0x1407FB468 (ConstraintEval.c)
 *     ValidFilter @ 0x1407FBC00 (ValidFilter.c)
 * Callees:
 *     FilterEvalStrict @ 0x140789D68 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x14078D828 (FilterEvalImpliedAnd.c)
 */

__int64 __fastcall FilterEval(int a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, (_DWORD)a4, a5);
  return FilterEvalImpliedAnd(a1, a2, a3, (_DWORD)a4, a5);
}
