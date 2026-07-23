/*
 * XREFs of sub_1406EC208 @ 0x1406EC208
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406EC954 @ 0x1406EC954 (sub_1406EC954.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall sub_1406EC208(void *a1)
{
  NTSTATUS v1; // ebx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  v1 = ObReferenceObjectByHandle(a1, 0x400u, qword_140D053C0, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
  if ( v1 >= 0 )
  {
    sub_1406EC954(Object);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v1;
}
