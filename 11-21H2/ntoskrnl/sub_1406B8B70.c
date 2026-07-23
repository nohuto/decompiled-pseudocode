/*
 * XREFs of sub_1406B8B70 @ 0x1406B8B70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402EEA18 @ 0x1402EEA18 (sub_1402EEA18.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1406B8B70(ULONG_PTR BugCheckParameter1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v6; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
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
    sub_1402EEA18((__int64)Object, &v6, 1u);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    if ( a2 )
      *a2 = v6;
    return 0LL;
  }
  return result;
}
