/*
 * XREFs of sub_1409A3B80 @ 0x1409A3B80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1409A36FC @ 0x1409A36FC (sub_1409A36FC.c)
 *     sub_1409A4BF0 @ 0x1409A4BF0 (sub_1409A4BF0.c)
 *     sub_1409A4D48 @ 0x1409A4D48 (sub_1409A4D48.c)
 */

LONG_PTR __fastcall sub_1409A3B80(volatile __int32 *Object)
{
  LONG_PTR result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  result = (unsigned int)_InterlockedExchange(Object + 62, 0);
  if ( (_DWORD)result )
  {
    sub_1409A4BF0(&v3, Object);
    if ( v3 )
    {
      if ( (Object[9] & 3) == 0 )
        sub_1409A36FC(v3, (__int64)Object);
    }
    sub_1409A4D48(&v3);
    return ObfDereferenceObject((PVOID)Object);
  }
  return result;
}
