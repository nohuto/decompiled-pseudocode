/*
 * XREFs of sub_140748F48 @ 0x140748F48
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     sub_14078AF40 @ 0x14078AF40 (sub_14078AF40.c)
 *     sub_14078D5D8 @ 0x14078D5D8 (sub_14078D5D8.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140748FA4 @ 0x140748FA4 (sub_140748FA4.c)
 *     sub_140749588 @ 0x140749588 (sub_140749588.c)
 */

__int64 sub_140748F48()
{
  unsigned int v0; // edi
  __int64 v1; // rax
  void *v2; // rbx
  __int64 v3; // rcx

  v0 = -1;
  v1 = sub_140748FA4();
  v2 = (void *)v1;
  if ( v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 396) & 0x20000) == 0 )
      {
        v0 = sub_140749588(v1);
        ObfDereferenceObject(v2);
      }
    }
  }
  return v0;
}
