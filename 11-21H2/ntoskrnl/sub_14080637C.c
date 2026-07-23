/*
 * XREFs of sub_14080637C @ 0x14080637C
 * Callers:
 *     sub_140806330 @ 0x140806330 (sub_140806330.c)
 *     sub_140908124 @ 0x140908124 (sub_140908124.c)
 *     sub_140908208 @ 0x140908208 (sub_140908208.c)
 *     sub_14090A560 @ 0x14090A560 (sub_14090A560.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

PVOID sub_14080637C()
{
  PVOID v0; // rbx

  if ( !byte_140C54B88 )
    return 0LL;
  KeWaitForSingleObject(&stru_140C4C160, WrExecutive, 0, 0, 0LL);
  v0 = qword_140D01480;
  if ( qword_140D01480 )
    ObfReferenceObject(qword_140D01480);
  KeSetEvent(&stru_140C4C160, 0, 0);
  return v0;
}
