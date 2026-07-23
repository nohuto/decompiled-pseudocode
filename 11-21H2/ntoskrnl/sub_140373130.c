/*
 * XREFs of sub_140373130 @ 0x140373130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_RTL_BALANCED_LINKS *__fastcall sub_140373130(_RTL_AVL_TABLE *a1)
{
  _RTL_BALANCED_LINKS *Parent; // rax

  Parent = a1[1].BalancedRoot.Parent;
  a1[1].BalancedRoot.Parent = 0LL;
  return Parent - 1;
}
