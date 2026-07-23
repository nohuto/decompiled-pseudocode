/*
 * XREFs of sub_1406E2120 @ 0x1406E2120
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1406E21F0 @ 0x1406E21F0 (sub_1406E21F0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1406E2120(ULONG_PTR BugCheckParameter1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v6; // edi
  int v7; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  Object = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) && a2 )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v4 = (__int64)a2;
    *(_DWORD *)v4 = *(_DWORD *)v4;
  }
  result = sub_140732D40(BugCheckParameter1, 0x75537350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v6 = sub_1406E21F0(Object, &v7);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( a2 )
      *a2 = v7;
    return v6;
  }
  return result;
}
