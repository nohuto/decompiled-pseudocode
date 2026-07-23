/*
 * XREFs of sub_1406F8C60 @ 0x1406F8C60
 * Callers:
 *     sub_1406F7A50 @ 0x1406F7A50 (sub_1406F7A50.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1406F8C60(ULONG_PTR a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225713LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) == 1 && a2 > 0x7FFFFFFEFFFFLL )
    return 3221225497LL;
  result = sub_140732D40(a1, 0x77566D4Du, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = sub_1406F8D30((ULONG_PTR)Object);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v4;
  }
  return result;
}
