/*
 * XREFs of sub_140791804 @ 0x140791804
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407918AC @ 0x1407918AC (sub_1407918AC.c)
 */

__int64 __fastcall sub_140791804(void *a1, char a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  volatile signed __int64 *v7; // rcx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  v3 = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 < 0 )
  {
LABEL_7:
    if ( v4 )
      ObfDereferenceObject(v4);
    return v5;
  }
  v6 = sub_1407918AC(*((_QWORD *)KeGetCurrentThread() + 23));
  v7 = (volatile signed __int64 *)v6;
  if ( !v6 )
  {
    v5 = -1073741801;
    goto LABEL_7;
  }
  if ( a2 )
    v7 = (volatile signed __int64 *)(v6 + 8);
  if ( _InterlockedCompareExchange64(v7, (signed __int64)v4, 0LL) )
  {
    v5 = -1073740008;
    goto LABEL_7;
  }
  return v5;
}
