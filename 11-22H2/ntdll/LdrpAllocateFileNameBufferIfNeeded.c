/*
 * XREFs of LdrpAllocateFileNameBufferIfNeeded @ 0x180018CD4
 * Callers:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x1800191E4 (LdrpAppendAnsiStringToFilenameBuffer.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     NtdllpReallocateStringRoutine @ 0x1800DF3BC (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpAllocateFileNameBufferIfNeeded(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  unsigned __int16 *v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rsi
  void *StringRoutine; // rax

  v2 = 0;
  if ( a2 > a1[1] )
  {
    if ( a2 > 0xFFFE )
      return (unsigned int)-1073741562;
    v5 = a2 + 63;
    v6 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v7 = v5 & 0xFFFFFFC0;
    if ( v7 > 0xFFFE )
      v7 = 65534;
    if ( v6 == a1 + 8 )
    {
      StringRoutine = (void *)NtdllpAllocateStringRoutine(v7, v6);
      v8 = (__int64)StringRoutine;
      if ( !StringRoutine )
        return (unsigned int)-1073741801;
      if ( *a1 )
        memmove(StringRoutine, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v8 = NtdllpReallocateStringRoutine(v7);
      if ( !v8 )
        return (unsigned int)-1073741801;
    }
    *((_QWORD *)a1 + 1) = v8;
    a1[1] = v7;
  }
  return v2;
}
