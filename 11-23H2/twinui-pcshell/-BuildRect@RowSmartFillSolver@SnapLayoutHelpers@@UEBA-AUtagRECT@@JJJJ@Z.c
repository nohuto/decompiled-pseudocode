/*
 * XREFs of ?BuildRect@RowSmartFillSolver@SnapLayoutHelpers@@UEBA?AUtagRECT@@JJJJ@Z @ 0x1801C46C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall SnapLayoutHelpers::RowSmartFillSolver::BuildRect(
        SnapLayoutHelpers::RowSmartFillSolver *this,
        struct tagRECT *__return_ptr retstr,
        LONG a3,
        LONG a4,
        LONG a5,
        LONG a6)
{
  struct tagRECT *result; // rax

  retstr->left = a5;
  retstr->right = a6;
  result = retstr;
  retstr->top = a3;
  retstr->bottom = a4;
  return result;
}
