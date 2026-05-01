/*
 * XREFs of ?BuildRect@ColumnSmartFillSolver@AdvancedSmartFill@SnapLayoutHelpers@@UEBA?AUtagRECT@@JJJJ@Z @ 0x1801865B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall SnapLayoutHelpers::AdvancedSmartFill::ColumnSmartFillSolver::BuildRect(
        SnapLayoutHelpers::AdvancedSmartFill::ColumnSmartFillSolver *this,
        struct tagRECT *__return_ptr retstr,
        LONG a3,
        LONG a4,
        LONG a5,
        LONG a6)
{
  struct tagRECT *result; // rax

  retstr->top = a5;
  retstr->bottom = a6;
  result = retstr;
  retstr->left = a3;
  retstr->right = a4;
  return result;
}
