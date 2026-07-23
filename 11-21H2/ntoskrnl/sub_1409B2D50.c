/*
 * XREFs of sub_1409B2D50 @ 0x1409B2D50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAlertThread @ 0x1402ECB90 (KeAlertThread.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1409B2D50(ULONG_PTR a1)
{
  char v1; // bl
  __int64 result; // rax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  result = sub_140732D40(a1, 4, (__int64)PsThreadType, v1, 0x75537350u, &Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    KeAlertThread((__int64)Object, v1);
    ObfDereferenceObjectWithTag(Object, 0x75537350u);
    return 0LL;
  }
  return result;
}
