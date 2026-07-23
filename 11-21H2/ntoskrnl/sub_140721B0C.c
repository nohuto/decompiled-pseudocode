/*
 * XREFs of sub_140721B0C @ 0x140721B0C
 * Callers:
 *     sub_140718E30 @ 0x140718E30 (sub_140718E30.c)
 *     sub_14071C288 @ 0x14071C288 (sub_14071C288.c)
 *     sub_140721910 @ 0x140721910 (sub_140721910.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140721B0C(void **a1)
{
  void *v2; // rbx
  void **v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( *((void ***)v2 + 1) != a1 || (v3 = *(void ***)v2, *(void **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ObDereferenceObjectDeferDelete(*((PVOID *)v2 + 2));
    ExFreePoolWithTag(v2, 0);
  }
}
