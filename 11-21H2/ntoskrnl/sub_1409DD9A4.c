/*
 * XREFs of sub_1409DD9A4 @ 0x1409DD9A4
 * Callers:
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1409DD9A4(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS v3; // ebx
  PVOID v4; // rdi
  __int64 v5; // rsi
  __int64 ***v6; // rsi
  __int64 **i; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(void **)a1;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(v2, 1u, qword_140D06B20, 1, &Object, 0LL);
  if ( v3 >= 0 )
  {
    v4 = Object;
    v5 = *((_QWORD *)Object + 7);
    if ( v5 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      KeWaitForSingleObject(&::Object, Executive, 0, 0, 0LL);
      v6 = (__int64 ***)(v5 + 56);
      for ( i = *v6; i != (__int64 **)v6; i = (__int64 **)*i )
      {
        if ( ((_DWORD)i[2] & 4) != 0 )
        {
          *(_BYTE *)(a1 + 8) = 1;
          break;
        }
      }
      KeReleaseMutex(&::Object, 0);
    }
    else
    {
      v3 = -1073741055;
    }
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
