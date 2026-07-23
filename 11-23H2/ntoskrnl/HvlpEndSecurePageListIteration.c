/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x14054A818
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x140546DC8 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x140546EF4 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140547B58 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x140548580 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     HvlpEndPageListIteration @ 0x14054A7EC (HvlpEndPageListIteration.c)
 *     VslEndSecurePageIteration @ 0x14054B420 (VslEndSecurePageIteration.c)
 */

__int16 *__fastcall HvlpEndSecurePageListIteration(__int64 a1, void *a2, _DWORD *a3)
{
  int v5; // ebx
  const void **v6; // rsi
  __int16 *result; // rax
  unsigned int v8; // eax
  size_t Size; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  v5 = a1;
  if ( (_DWORD)a1 )
  {
    v6 = (const void **)&unk_140C5F2C8;
    result = (__int16 *)&unk_140C5F2C2;
  }
  else
  {
    v6 = (const void **)&unk_140C5F2A8;
    result = (__int16 *)&unk_140C5F2A2;
  }
  if ( *(_BYTE *)result )
  {
    LOBYTE(a1) = (_DWORD)a1 == 0;
    VslEndSecurePageIteration(a1, &Size);
    if ( a3 )
    {
      v8 = Size;
      if ( (unsigned int)Size <= *a3 )
      {
        *a3 = Size;
        if ( v8 )
          memmove(a2, *v6, v8);
      }
    }
    return HvlpEndPageListIteration(v5);
  }
  return result;
}
