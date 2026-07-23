/*
 * XREFs of sub_14080D780 @ 0x14080D780
 * Callers:
 *     sub_14080D370 @ 0x14080D370 (sub_14080D370.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_14080D780(void *a1, _BYTE *a2)
{
  NTSTATUS v3; // ebx
  PVOID v4; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  *a2 = 0;
  v3 = ObReferenceObjectByHandle(a1, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  if ( v3 >= 0 )
  {
    v4 = Object;
    *a2 = *(_BYTE *)(*((_QWORD *)Object + 1) + 8LL) & 0x80;
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
