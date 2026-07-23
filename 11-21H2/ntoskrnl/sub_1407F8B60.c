/*
 * XREFs of sub_1407F8B60 @ 0x1407F8B60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406BF4AC @ 0x1406BF4AC (sub_1406BF4AC.c)
 *     sub_1406C0B60 @ 0x1406C0B60 (sub_1406C0B60.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall sub_1407F8B60(void *a1)
{
  NTSTATUS result; // eax
  volatile signed __int32 *v2; // rbx
  int v3; // edi
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             0x10000u,
             qword_140C24FB8,
             *((_BYTE *)KeGetCurrentThread() + 562),
             &Object,
             &v5);
  if ( result >= 0 )
  {
    v2 = (volatile signed __int32 *)Object;
    if ( *((_QWORD *)Object + 40) )
    {
      v3 = sub_1406C0B60((__int64)Object + 392);
      if ( v3 >= 0 )
        v3 = sub_1406BF4AC(v2);
    }
    else
    {
      v3 = -1073741816;
    }
    ObfDereferenceObject((PVOID)v2);
    return v3;
  }
  return result;
}
