/*
 * XREFs of RtlpCopyExtendedContext @ 0x180101814
 * Callers:
 *     RtlCopyExtendedContext @ 0x180101770 (RtlCopyExtendedContext.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x180054F94 (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x180055100 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContext @ 0x180055210 (RtlpCopyLegacyContext.c)
 *     RtlpCopyKernelCetChunk @ 0x1801018D0 (RtlpCopyKernelCetChunk.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(char a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // r11d
  unsigned int v9; // ebp
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(v13) = a1;
  result = RtlpValidateContextFlags(a4, &v13);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    v10 = a5;
    if ( (v13 & 1) != 0 )
    {
      v11 = *(int *)(a5 + 8);
      if ( *(_DWORD *)(a2 + 8) != (_DWORD)v11 || *(_DWORD *)(a2 + 12) < *(_DWORD *)(a5 + 12) )
        return 3221225485LL;
      RtlpCopyLegacyContext(v11, a2 + *(int *)(a2 + 8), v8);
    }
    if ( (v13 & 2) == 0 || (result = RtlpCopyXStateChunk(v7, a2, a2, v10, v10), (int)result >= 0) )
    {
      if ( (v13 & 4) != 0 )
      {
        v12 = RtlpCopyKernelCetChunk(v7, a2, a2, v10, v10);
        if ( v12 < 0 )
          return (unsigned int)v12;
        return v9;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}
