/*
 * XREFs of sub_1402D0E78 @ 0x1402D0E78
 * Callers:
 *     sub_1407456F8 @ 0x1407456F8 (sub_1407456F8.c)
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1402D0E78(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140A416D4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140A416D4;
  return result;
}
