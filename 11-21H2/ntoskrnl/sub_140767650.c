/*
 * XREFs of sub_140767650 @ 0x140767650
 * Callers:
 *     sub_140767594 @ 0x140767594 (sub_140767594.c)
 *     sub_140767600 @ 0x140767600 (sub_140767600.c)
 *     sub_14095846C @ 0x14095846C (sub_14095846C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_140767650(_DWORD *a1)
{
  __int64 i; // rdi
  void *result; // rax

  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    ObfDereferenceObjectWithTag(*(PVOID *)&a1[6 * i + 4], 0x4C706E50u);
  result = memset(a1 + 4, 0, 24LL * (unsigned int)a1[1]);
  *a1 = 0;
  a1[2] = 0;
  return result;
}
