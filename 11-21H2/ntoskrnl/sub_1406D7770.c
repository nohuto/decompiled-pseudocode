/*
 * XREFs of sub_1406D7770 @ 0x1406D7770
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1406D78E0 @ 0x1406D78E0 (sub_1406D78E0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1409E21EC @ 0x1409E21EC (sub_1409E21EC.c)
 */

__int64 __fastcall sub_1406D7770(void *a1)
{
  NTSTATUS v1; // eax
  unsigned int v2; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  v1 = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)PsJobType, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL);
  v2 = v1;
  if ( v1 < 0 )
  {
    if ( (xmmword_140D06900[0] & 0x80000) != 0 )
      sub_1409E21EC(0LL, 0LL, (unsigned int)v1, 1825LL);
  }
  else
  {
    sub_1406D78E0((PRKEVENT)Object);
    ObfDereferenceObject(Object);
  }
  return v2;
}
