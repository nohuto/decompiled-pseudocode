/*
 * XREFs of IoQueueWorkItemToNode @ 0x140558910
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403467F0 @ 0x1403467F0 (sub_1403467F0.c)
 *     sub_14063F338 @ 0x14063F338 (sub_14063F338.c)
 */

char __fastcall IoQueueWorkItemToNode(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  char v8; // bl

  v7 = sub_1403467F0(a1, a2, a4);
  v8 = sub_14063F338(v7, a3, a5);
  if ( !v8 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  return v8;
}
