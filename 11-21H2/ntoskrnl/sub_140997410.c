/*
 * XREFs of sub_140997410 @ 0x140997410
 * Callers:
 *     sub_1406AECC0 @ 0x1406AECC0 (sub_1406AECC0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1405D0148 @ 0x1405D0148 (sub_1405D0148.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14074C9D8 @ 0x14074C9D8 (sub_14074C9D8.c)
 */

NTSTATUS __fastcall sub_140997410(void *a1, _DWORD *a2)
{
  __int64 v3; // rdx
  KPROCESSOR_MODE v4; // r9
  NTSTATUS result; // eax
  int v6; // ebx
  PVOID v7; // rdi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PVOID v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v3 = (__int64)a2;
    *(_DWORD *)v3 = *(_DWORD *)v3;
  }
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, v4, &Object, 0LL);
  if ( result >= 0 )
  {
    v6 = sub_14074C9D8((struct _FILE_OBJECT *)Object, &v9);
    ObfDereferenceObject(Object);
    if ( v6 >= 0 )
    {
      v7 = v9;
      *a2 = sub_1405D0148(*((_QWORD *)v9 + 39));
      ObfDereferenceObject(v7);
    }
    return v6;
  }
  return result;
}
