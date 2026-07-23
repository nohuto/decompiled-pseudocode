/*
 * XREFs of sub_1406880D0 @ 0x1406880D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsAssignProcessToJobObject @ 0x140688050 (PsAssignProcessToJobObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_1409E22CC @ 0x1409E22CC (sub_1409E22CC.c)
 */

__int64 __fastcall sub_1406880D0(void *a1, ULONG_PTR a2)
{
  __int64 v2; // rbx
  KPROCESSOR_MODE v4; // bp
  int v5; // esi
  PVOID v6; // rdi
  __int64 v7; // r8
  PVOID v8; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v11; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0LL;
  Object = 0LL;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  v11 = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)PsJobType, v4, &v11, 0LL);
  if ( v5 >= 0 )
  {
    if ( a2 == -7LL )
    {
      v2 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1296LL);
      goto LABEL_4;
    }
    v5 = sub_140732D40(a2, 0x624A7350u, (__int64)&Object, 0LL, 0LL);
    if ( v5 >= 0 )
    {
LABEL_4:
      v6 = Object;
      v7 = v2;
      v8 = v11;
      v5 = PsAssignProcessToJobObject(v11, (__int64)Object, v7);
      goto LABEL_5;
    }
  }
  v6 = Object;
  v8 = v11;
LABEL_5:
  if ( (xmmword_140D06900 & 0x80000) != 0 )
    sub_1409E22CC(v8, v6, (unsigned int)v5);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x624A7350u);
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v5;
}
