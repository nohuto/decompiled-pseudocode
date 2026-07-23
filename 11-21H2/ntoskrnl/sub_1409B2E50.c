/*
 * XREFs of sub_1409B2E50 @ 0x1409B2E50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     PsSuspendProcess @ 0x1409B2EF0 (PsSuspendProcess.c)
 */

__int64 __fastcall sub_1409B2E50(ULONG_PTR a1)
{
  char v1; // r9
  int v2; // ebx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v2 = sub_140732D40(a1, 2048, (__int64)PsProcessType, v1, 0x75537350u, &Object, 0LL, 0LL);
  if ( v2 >= 0 )
  {
    v2 = PsSuspendProcess(Object);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
  }
  return (unsigned int)v2;
}
