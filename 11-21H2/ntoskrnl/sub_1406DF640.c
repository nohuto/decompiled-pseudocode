/*
 * XREFs of sub_1406DF640 @ 0x1406DF640
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall sub_1406DF640(__int64 a1, __int64 a2)
{
  unsigned int *result; // rax

  result = *(unsigned int **)(a2 + 456);
  if ( result )
  {
    result = (unsigned int *)*result;
    *(_DWORD *)(a1 + 2872) = (_DWORD)result;
  }
  return result;
}
