/*
 * XREFs of sub_1406E6600 @ 0x1406E6600
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1406E6600(void *a1, int a2)
{
  KPROCESSOR_MODE v3; // si
  NTSTATUS v4; // edi
  int v5; // r8d
  int v6; // r9d
  PVOID v7; // rbx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  v4 = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)PsThreadType, v3, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v7 = Object;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      v4 = -1073741816;
    }
    else
    {
      LOBYTE(v6) = v3;
      LOBYTE(v5) = v3;
      v4 = sub_1407045D0((_DWORD)Object, a2, v5, v6, 1);
    }
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v4;
}
