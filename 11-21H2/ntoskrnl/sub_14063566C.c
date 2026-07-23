/*
 * XREFs of sub_14063566C @ 0x14063566C
 * Callers:
 *     sub_14063499C @ 0x14063499C (sub_14063499C.c)
 *     sub_140634D24 @ 0x140634D24 (sub_140634D24.c)
 * Callees:
 *     sub_140635600 @ 0x140635600 (sub_140635600.c)
 */

unsigned int *__fastcall sub_14063566C(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int *result; // rax

  v2 = *(_QWORD *)(a1 + 1152);
  if ( !v2 )
    return sub_140635600(a1, a2);
  result = (unsigned int *)*(unsigned int *)(v2 + 8);
  a2 = (unsigned int)(*(_DWORD *)(a1 + 4) - (_DWORD)result);
  if ( (unsigned int)a2 <= 0x148 )
    return sub_140635600(a1, a2);
  return result;
}
