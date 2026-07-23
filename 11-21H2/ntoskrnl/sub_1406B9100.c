/*
 * XREFs of sub_1406B9100 @ 0x1406B9100
 * Callers:
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_1406B9100(char *Object, char *a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rbx
  char *v8; // rcx

  Pool2 = ExAllocatePool2(256LL, 24LL, 1766089295LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(a2, 0x6944624Fu);
    v8 = &Object[8 * *(unsigned __int8 *)(a3 + 20)];
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(a3 + 16);
    *(_QWORD *)v7 = *(_QWORD *)v8;
    *(_QWORD *)v8 = v7;
    *(_QWORD *)(v7 + 8) = a2;
    *(_QWORD *)(a3 + 8) = v8;
    ObfReferenceObjectWithTag(Object, 0x6944624Fu);
    LOBYTE(Pool2) = 1;
    *(_QWORD *)&a2[-byte_140C25440[*(a2 - 22) & 3] - 48] = Object;
  }
  return Pool2;
}
