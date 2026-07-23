/*
 * XREFs of sub_140635600 @ 0x140635600
 * Callers:
 *     sub_14063499C @ 0x14063499C (sub_14063499C.c)
 *     sub_14063566C @ 0x14063566C (sub_14063566C.c)
 * Callees:
 *     sub_1402E18F8 @ 0x1402E18F8 (sub_1402E18F8.c)
 *     sub_1402E1AB0 @ 0x1402E1AB0 (sub_1402E1AB0.c)
 *     sub_1402E1D0C @ 0x1402E1D0C (sub_1402E1D0C.c)
 */

unsigned int *__fastcall sub_140635600(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  unsigned int *result; // rax

  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 1152) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1152) + 16LL) = sub_1402E1D0C(a1, a2);
    sub_1402E1AB0(a1, *(unsigned int **)(a1 + 1152), 5u);
  }
  result = (unsigned int *)*(unsigned int *)(a1 + 1168);
  if ( (_DWORD)result )
  {
    result = sub_1402E18F8(a1);
    v2 = result;
  }
  *(_QWORD *)(a1 + 1152) = v2;
  return result;
}
