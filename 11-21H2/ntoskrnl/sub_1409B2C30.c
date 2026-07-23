/*
 * XREFs of sub_1409B2C30 @ 0x1409B2C30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14056B0EC @ 0x14056B0EC (sub_14056B0EC.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1409B2C30(ULONG_PTR BugCheckParameter1, _DWORD *a2)
{
  char v4; // bl
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // esi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  Object = 0LL;
  v4 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v4 && a2 )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a2;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  result = sub_140732D40(BugCheckParameter1, 2, (__int64)PsThreadType, v4, 0x75537350u, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v4 && (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      return 3221225506LL;
    }
    else
    {
      v7 = sub_14056B0EC((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x75537350u);
      if ( a2 )
        *a2 = v7;
      return 0LL;
    }
  }
  return result;
}
