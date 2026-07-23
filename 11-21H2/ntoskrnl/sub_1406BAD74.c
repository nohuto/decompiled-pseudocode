/*
 * XREFs of sub_1406BAD74 @ 0x1406BAD74
 * Callers:
 *     sub_1406BA720 @ 0x1406BA720 (sub_1406BA720.c)
 *     sub_1406BA8F4 @ 0x1406BA8F4 (sub_1406BA8F4.c)
 *     sub_140806A24 @ 0x140806A24 (sub_140806A24.c)
 *     sub_14081C354 @ 0x14081C354 (sub_14081C354.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1406BAD74(void *a1, __int64 a2, ACCESS_MASK a3, KPROCESSOR_MODE a4, HANDLE *Handle)
{
  NTSTATUS v7; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
    v7 = ObOpenObjectByPointer(Object, 0x440u, 0LL, a3, (POBJECT_TYPE)CmKeyObjectType, a4, Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
