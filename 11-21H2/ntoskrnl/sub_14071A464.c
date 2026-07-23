/*
 * XREFs of sub_14071A464 @ 0x14071A464
 * Callers:
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_1409147B4 @ 0x1409147B4 (sub_1409147B4.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

bool __fastcall sub_14071A464(__int64 a1, void *a2)
{
  bool v2; // bl
  __int64 v4; // r8
  __int64 v5; // rdx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  Object = 0LL;
  if ( ObReferenceObjectByHandle(a2, 0, *(POBJECT_TYPE *)qword_140C49878, 0, &Object, 0LL) < 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = *((_QWORD *)Object + 5);
    if ( v5 )
      v2 = v4 == v5;
  }
  ObfDereferenceObject(Object);
  return v2;
}
