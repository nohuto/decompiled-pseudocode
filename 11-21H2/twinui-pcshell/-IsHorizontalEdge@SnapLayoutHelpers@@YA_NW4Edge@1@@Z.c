/*
 * XREFs of ?IsHorizontalEdge@SnapLayoutHelpers@@YA_NW4Edge@1@@Z @ 0x1805A6EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall SnapLayoutHelpers::IsHorizontalEdge(int a1)
{
  bool result; // al

  result = 1;
  if ( a1 != 1 )
    return a1 == 4;
  return result;
}
