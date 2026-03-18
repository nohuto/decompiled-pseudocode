/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x14054D214
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14054991C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x140549A48 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x14054A610 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x14054B018 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     HvlpEndPageListIteration @ 0x14054D1E8 (HvlpEndPageListIteration.c)
 *     VslEndSecurePageIteration @ 0x14054DE6C (VslEndSecurePageIteration.c)
 */

unsigned __int8 __fastcall HvlpEndSecurePageListIteration(__int64 a1, void *a2, _DWORD *a3)
{
  int v5; // ebx
  unsigned __int8 result; // al
  const void **v7; // rsi
  unsigned int v8; // eax
  size_t Size; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  v5 = a1;
  if ( (_DWORD)a1 )
  {
    result = byte_140C48822;
    v7 = (const void **)&unk_140C48828;
  }
  else
  {
    result = byte_140C48802;
    v7 = (const void **)&unk_140C48808;
  }
  if ( result )
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
          memmove(a2, *v7, v8);
      }
    }
    return (unsigned __int8)HvlpEndPageListIteration(v5);
  }
  return result;
}
